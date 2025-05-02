//Decompiled with MagicRDR v1.0
//Function Count : 571
//Statics Count : 588
//Natives Count : 647
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23[6] = { false, false, false, false, false, false };
	bool bLocal_30[10] = { false, false, false, false, false, false, false, false, false, false };
	bool bLocal_41[10] = { false, false, false, false, false, false, false, false, false, false };
	int iLocal_52[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_70[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_81 = true;
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
	var uLocal_98 = 0;
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
	var uLocal_114 = 0;
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
	bool bLocal_148 = true;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
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
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	struct<8> Local_175 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	bool bLocal_219 = false;
	int iLocal_220 = 0;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	bool bLocal_223 = false;
	bool bLocal_224 = false;
	bool bLocal_225 = false;
	bool bLocal_226 = false;
	bool bLocal_227 = false;
	bool bLocal_228 = false;
	float fLocal_229[6] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
	bool bLocal_236 = false;
	float fLocal_237 = 0.0f;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	bool bLocal_278 = false;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	bool bLocal_281 = false;
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	bool bLocal_292 = false;
	bool bLocal_293 = false;
	int iLocal_294 = 0;
	bool bLocal_295 = false;
	struct<61> Local_296 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_369 = 3;
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
	var uLocal_383 = 3;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 3;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 3;
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
	var uLocal_410 = 3;
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
	var uLocal_424 = 3;
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
	var uLocal_439 = 3;
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
	var uLocal_452 = 3;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 3;
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
	int iLocal_512 = 0;
	bool bLocal_513 = false;
	bool bLocal_514 = false;
	bool bLocal_515 = false;
	vector3 vLocal_516 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_519 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_522 = false;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	bool bLocal_530 = false;
	int iLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	bool bLocal_536 = false;
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar7;
	bool bVar10;
	int iVar11;
	int iVar12;
	var uVar47;
	
	iLocal_15 = 0;
	iLocal_16 = 0;
	bLocal_219 = 0.0f;
	iLocal_238 = 4294967295;
	iLocal_239 = 0;
	iLocal_240 = 0;
	iLocal_241 = 0;
	iLocal_242 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_246 = 0;
	iLocal_247 = 0;
	iLocal_248 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_251 = 0;
	iLocal_252 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_267 = 0;
	iLocal_268 = 0;
	iLocal_269 = 0;
	iLocal_272 = 1;
	iLocal_273 = 0;
	iLocal_274 = 0;
	iLocal_275 = 1;
	bLocal_292 = "";
	bLocal_295 = 4294967295;
	bLocal_352 = "";
	iLocal_529 = 0;
	iLocal_534 = 0;
	iLocal_535 = 0;
	*(&iVar12 + 20) = 1;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
	uVar47 = Function_570();
	ADD_TIME(&uVar47, 0, 0, 10, 0);
	ScriptParam_0.f_52 = 100.0f;
	iLocal_22 = 0;
	bLocal_221 = GET_TIME_OF_DAY();
	ADD_TIME(&bLocal_221, 2, 0, false, 0);
	Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bountyHunterLay") };
	bLocal_353 = CREATE_LAYOUT(&Local_175);
	Local_355.f_492 = 4294967295;
	Function_567();
	if (Function_566() == 0)
	{
		Function_561(&Global_26303, Function_564(), Global_26303.f_24, 0, 0, 1);
		if (Function_560("npressDemo"))
		{
			Global_26303.f_40 = 5;
			Global_26303.f_20 = 503;
		}
	}
	iLocal_523 = (*&Global_26401 + 36[0181][75])[3];
	iLocal_524 = (*&Global_26401 + 36[0181][225])[3];
	iLocal_525 = (*&Global_26401 + 36[0181][125])[3];
	iLocal_526 = (*&Global_26401 + 36[1181][75])[3];
	iLocal_527 = (*&Global_26401 + 36[1181][225])[3];
	iLocal_528 = (*&Global_26401 + 36[1181][125])[3];
	if (StackVal || !Function_559(Global_26303.f_24) != 1)
	{
		Global_26303.f_24 = Function_555(&Global_26303, 0, 80, 2000, 4294967295);
	}
	if (StackVal || !Function_559(Global_26303.f_24) != 1)
	{
		LOG_ERROR("Bad Bounty Hunter Region Calculated?");
	}
	ScriptParam_0.f_44 = Global_26303.f_24;
	Function_549(&Local_355, Function_550(Global_26303.f_24));
	Function_548(&Local_355, 0);
	PRINTSTRING("Bounty Hunter Target Volume = ");
	PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
	PRINTNL();
	PRINTSTRING("Deed ID = Region: ");
	PRINTINT(Function_547(Local_355.f_624));
	if (Function_559(Global_26303.f_24) && Global_26303.f_24 < 0)
	{
		if (Function_559(Global_26303.f_24))
		{
			bLocal_293 = Global_26303.f_24;
			bLocal_224 = StackVal;
			PRINTSTRING("Bounty Hunter Target Volume = ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_224)));
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Invalid. No starting region found for bountyhunter");
		}
		Function_546(1);
	}
	else
	{
		iLocal_22 = 5;
	}
	Function_545();
	while (!IS_EXITFLAG_SET())
	{
		if ((StackVal && !Function_543(!Function_544(0, 0, 1, 1), 4096)) && !iLocal_267)
		{
			Function_542(&Global_26303 + 8, 4096);
			Global_3412 = 0;
			Function_523(1);
			Function_522(0, 4294967295);
		}
		bLocal_167 = 1000;
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			iLocal_22 = 5;
		}
		else if (!Function_559(bLocal_293))
		{
			iLocal_22 = 5;
		}
		else if (!Function_559(bLocal_295) && iLocal_174 <= 8)
		{
			iLocal_22 = 5;
		}
		else if (Global_3380 != 1 && 0 != ScriptParam_0.f_36)
		{
			Function_505(16);
		}
		else if (Global_3403 && Function_504())
		{
			iLocal_252 = 1;
			Function_505(13);
		}
		else if (Function_503() != 1 && iLocal_250 != 0)
		{
			iLocal_250 = 1;
			Function_505(13);
		}
		else if (iLocal_174 >= 5 && !Function_560("npressDemo"))
		{
			if (IS_EARLIER_THAN(bLocal_221, GET_TIME_OF_DAY()))
			{
				iLocal_22 = 5;
			}
		}
		if (iLocal_174 <= 5 && iLocal_174 > 11)
		{
			Function_487();
		}
		if (HAS_ITEM(Function_486(13), Global_34573))
		{
			if (iLocal_275 == 1)
			{
				if (UI_ISACTIVE("WantedPoster"))
				{
					Function_485();
					PAUSE_GAME(GET_THIS_SCRIPT_ID());
					iLocal_275 = 0;
				}
			}
			else if (!UI_ISACTIVE("WantedPoster"))
			{
				Function_484();
				UNPAUSE_GAME();
				iLocal_275 = 1;
			}
		}
		else
		{
			UNPAUSE_GAME();
		}
		Function_477(&Local_355, 0, 0);
		switch (iLocal_22)
		{
			case 0x00000000:
				if (Function_476() || ScriptParam_0.f_36 != 1)
				{
					if (Function_475() == 1)
					{
						strcpy(&Local_175, "bountyhunter", 32);
						Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568(&Local_175) };
						Function_505(1);
						if (!HAS_ITEM(Function_486(13), Global_34573))
						{
							Function_474(13, 1, 0);
						}
						CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
						if (Function_504())
						{
							Global_26303.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_joua", 0, 0, false);
						}
						else
						{
							Global_26303.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou1", 0, 0, false);
						}
						Function_472(&iLocal_213);
						Function_472(&iLocal_210);
						Function_472(&iLocal_201);
						iLocal_22 = 3;
						bLocal_167 = false;
					}
				}
				else
				{
					bLocal_167 = 1000;
				}
				break;
			
			case 0x00000003:
				if (Global_3385 == 0)
				{
					if (IS_VOLUME_VALID(bLocal_223))
					{
						bLocal_167 = 10;
					}
					if (Function_471(&iLocal_192, 4.0f))
					{
						if (iLocal_172 == 0)
						{
							HUD_FADE_OUT(3.0f, 1f, 1);
							iLocal_172 = 1;
						}
						else if (iLocal_172 == 1)
						{
							if (HUD_IS_FADED() && !HUD_IS_FADING())
							{
								HUD_FADE_IN(2.0f, 1065353216);
								Function_505(7);
								iLocal_172 = 2;
							}
						}
					}
					Function_469();
					switch (iLocal_174)
					{
						case 0x00000001:
							GET_VOLUME_CENTER(bLocal_224, &vVar1);
							Function_468(StackVal, StackVal, StackVal, StackVal, vVar1, Global_34574, &vVar1);
							if ((VMAG(vVar1) > 450.0f && Function_467(64)) && Function_467(8))
							{
								if (!Function_543(StackVal, 8))
								{
									AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
									Function_463();
									Function_542(&Global_26303 + 8, 8);
								}
								iLocal_174 = 2;
								bLocal_167 = false;
							}
							if (Function_462(&Local_355, 0, 0) != 0 && Function_471(&iLocal_189, 10.0f))
							{
								if (IS_BLIP_VALID(bLocal_282))
								{
									SET_BLIP_BLINK(bLocal_282, 0, 0, 5f);
								}
							}
							if (!IS_BLIP_VALID(bLocal_282))
							{
								Function_460(1);
							}
							break;
						
						case 0x00000002:
							if (Function_459())
							{
								if (Global_30621[Global_29004] != Function_457(bLocal_293) && (Function_455(&(Global_29008[Function_456(bLocal_293)]), 32) || Function_454()))
								{
									iLocal_174 = 3;
									bLocal_167 = false;
								}
							}
							break;
						
						case 0x00000003:
							if (iLocal_241 == 0)
							{
								GET_VOLUME_CENTER(bLocal_224, &vVar1);
								Function_453(bLocal_224);
								vVar7 = { StackVal, StackVal, Function_453(bLocal_224) };
								Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar7, &vVar1);
								if (StackVal && !Function_543(VMAG(vVar1) > 250.0f, 4))
								{
									Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("restrictVol") };
									bVar10 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Local_175, 3, vVar7, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, ScriptParam_0.f_52, ScriptParam_0.f_52);
									DECOR_SET_INT(bVar10, "script", GET_THIS_SCRIPT_ID());
									Function_447(&bVar10, ScriptParam_0.f_32);
									Function_542(&Global_26303 + 8, 4);
									ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(bLocal_224, 0);
								}
								Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar7, &vVar1);
								if (VMAG(vVar1) > 200.0f && !Function_446(&Local_355))
								{
									Function_445(&Local_355, 1);
									Function_444(&Local_355, "pm_bh_nrng", 1);
									Function_436(StackVal, StackVal, &Local_355, 0, 4294967295, vVar1, 1, 1, 3);
								}
								iVar11 = 4294967294;
								if (Function_559(iLocal_294))
								{
									if (Function_455(&(Global_29008[iLocal_294]), 32))
									{
										iVar11 = iLocal_294;
									}
								}
								if (!Function_559(iVar11))
								{
									if (Function_559(Global_29005))
									{
										if (Function_455(&(Global_29008[Global_29005]), 32))
										{
											iVar11 = Global_29005;
										}
									}
								}
								Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar7, &vVar1);
								if (((VMAG(vVar1) > 200.0f || IS_ACTOR_IN_VOLUME(Global_34573, bLocal_224)) && Function_559(iVar11)) && !Global_3391)
								{
									if (Function_433(iVar11) == 1)
									{
										GET_OBJECT_POSITION(bLocal_278, &vVar1);
										if (!Function_432(StackVal, StackVal, vVar1))
										{
											if (STREAMING_ARE_BOUNDS_LOADED(vVar1, 10.0f))
											{
												if (Function_408(iVar11))
												{
													iLocal_241 = 1;
													bLocal_284 = CREATE_OBJECT_ITERATOR(bLocal_353);
												}
												else
												{
													iLocal_238 = 4;
													iLocal_22 = 5;
													bLocal_167 = false;
													break;
												}
											}
										}
										else
										{
											LOG_ERROR("PoiObject at zero? Tell Ben.");
										}
									}
									else
									{
										LOG_ERROR("BOUNTYHUNTER Invalid - Note start/destination and bug for Ben");
										Function_445(&Local_355, 1);
										Global_26303.f_24 = Function_457(bLocal_295);
										Global_26303.f_24 = Function_555(&Global_26303, 0, 80, 2000, 4294967295);
										bLocal_293 = Global_26303.f_24;
										bLocal_224 = StackVal;
										Function_505(1);
										if (!Function_559(Global_26303.f_24))
										{
											Global_26303.f_24 = Function_555(&Global_26303, 0, 80, 2000, 4294967295);
										}
										Function_542(&Global_26303 + 8, 16);
										iLocal_22 = 3;
									}
								}
							}
							else
							{
								if (IS_ACTOR_VALID(bLocal_30[0]))
								{
									GET_POSITION(bLocal_30[0], &vVar1);
									Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar7, &vVar1);
									if (VMAG(vVar1) > 100.0f)
									{
										Function_505(4);
										bLocal_167 = false;
									}
								}
								if (iLocal_241 == 1)
								{
									if (!Function_312(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
									{
										iLocal_22 = 5;
										bLocal_167 = false;
										break;
									}
								}
							}
							break;
						
						case 0x00000004:
							if (Function_312(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0) == 0)
							{
								iLocal_22 = 5;
								bLocal_167 = false;
							}
							break;
						
						case 0x00000005:
						case 0x00000008:
						case 0x00000009:
							Function_472(&iLocal_189);
							if (!Function_312(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
							{
								if (iLocal_242 == 1)
								{
									iLocal_22 = 5;
									bLocal_167 = false;
								}
								break;
							}
							break;
					}
				}
				else
				{
					Function_460(0);
					bLocal_167 = 5000;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					strcpy(&Local_175, "bh print try ", 32);
					stradd(&Local_175, INT_TO_STRING(bLocal_536), 32);
					bLocal_536++;
					Function_311(&Local_175, 0x40f00000, 1, 2, 0, 0, 0);
				}
				if (iLocal_266 == 0)
				{
					if (IS_OBJECT_VALID(bLocal_277))
					{
						Function_310(bLocal_277);
					}
					iLocal_266 = 1;
					if ((!IS_ACTOR_ALIVE(Global_34573) || iLocal_238 == 2) || !IS_ACTOR_ALIVE(bLocal_23[0]))
					{
						iLocal_272 = 0;
					}
					if (iLocal_272 == 0)
					{
						Function_472(&iLocal_195);
						Function_213();
						iLocal_271 = 1;
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				}
				if (iLocal_271 != 0 && iLocal_266 != 1)
				{
					if (iLocal_270 == 0)
					{
						if (iLocal_272 == 1)
						{
							iVar0 = 0;
							while (iVar0 < 5)
							{
								if (IS_ACTOR_VALID(bLocal_23[iVar0]))
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[iVar0]);
									if (IS_MOVER_FROZEN(bLocal_23[iVar0]))
									{
										SET_MOVER_FROZEN(bLocal_23[iVar0], false);
									}
									AI_GOAL_LOOK_CLEAR(bLocal_23[iVar0]);
								}
								iVar0++;
							}
							if (bLocal_295 == Global_30640[0])
							{
								Function_212(&Local_355, -2092,281f, 16,677f, 2606,116f);
								Function_211(&Local_355, 4);
							}
							else if (bLocal_295 == Global_30717[0])
							{
								Function_212(&Local_355, 757,028f, 78,525f, 1235,217f);
								Function_211(&Local_355, 5);
							}
							else if (bLocal_295 == Global_30693[0])
							{
								Function_212(&Local_355, -2666,908f, 35,673f, 4254,63f);
								Function_211(&Local_355, 6);
							}
							else if (bLocal_295 == Global_30668[0])
							{
								Function_212(&Local_355, -823,682f, 97,037f, 2424,659f);
								Function_211(&Local_355, 7);
							}
							else
							{
								Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhPosObj") };
								bLocal_280 = CREATE_POINT_IN_LAYOUT(bLocal_353, &Local_175, Global_34574, 0.0f, 0.0f, 0.0f);
								Function_209(&Local_355, Global_34573, bLocal_280, bLocal_23[0]);
								Function_211(&Local_355, 1);
							}
							Function_114(&Local_355, bLocal_353, 1);
							iLocal_270 = 1;
						}
						else
						{
							iLocal_271 = 1;
							Function_472(&iLocal_195);
						}
					}
					if (iLocal_270 == 1)
					{
						if (Function_96(&Local_355) == 5)
						{
							Function_74(&Local_355);
							Function_213();
							Function_472(&iLocal_195);
							if (IS_ACTOR_VALID(bLocal_30[0]))
							{
								DESTROY_ACTOR(bLocal_30[0]);
							}
							if (Function_560("npressDemo"))
							{
								Function_73();
								Function_73();
								Function_68(StackVal, StackVal, StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Ambient/MexicanRevolution/mexican_rev_rally", 4), Function_73(), Function_73(), 0, 0, 0, Global_30693[0], 0, 0, 0, &iVar12, 0, 1, 0x40a00000, 4294967295, 0, 0);
							}
							iLocal_271 = 1;
						}
					}
				}
				else
				{
					if (Function_471(&iLocal_195, 20.0f))
					{
						Function_66(0);
						Function_65(12);
						RELEASE_LAYOUT_REF(bLocal_353);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
					else if (GET_TASK_STATUS(bLocal_23[0], 19) == 4)
					{
						TASK_CLEAR(bLocal_23[0]);
						TASK_WANDER(bLocal_23[0], 3212836864);
					}
					Function_477(&Local_355, 0, 0);
				}
				if (StackVal && !Function_543(iLocal_271 != 1, 64))
				{
					Function_59();
					Function_542(&Global_26303 + 8, 64);
				}
				bLocal_167 = false;
				break;
		}
		WAIT(bLocal_167);
	}
	Function_1();
	DESTROY_ITERATOR(StackVal);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xD74 / 3444
{
	int iVar0;
	
	Function_34(&Local_296);
	Function_59();
	REMOVE_OBJECT_ATTACHMENT(bLocal_522);
	if (IS_OBJECT_VALID(bLocal_225))
	{
		DESTROY_VOLUME(bLocal_225);
	}
	if (IS_OBJECT_VALID(bLocal_228))
	{
		DESTROY_VOLUME(bLocal_228);
	}
	REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(bLocal_224, 0);
	if (IS_OBJECT_VALID(bLocal_292))
	{
		DEREFERENCE_OBJECT(bLocal_292);
	}
	if (IS_VOLUME_VALID(bLocal_222))
	{
		DESTROY_VOLUME(bLocal_222);
	}
	if (IS_OBJECTSET_VALID(bLocal_513))
	{
		DESTROY_OBJECTSET(bLocal_513);
	}
	if (IS_OBJECTSET_VALID(bLocal_514))
	{
		DESTROY_OBJECTSET(bLocal_514);
	}
	if (IS_OBJECTSET_VALID(bLocal_515))
	{
		DESTROY_OBJECTSET(bLocal_515);
	}
	Function_460(0);
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_30[iVar0]))
		{
			DEREFERENCE_ACTOR(bLocal_30[iVar0]);
		}
		if (IS_ACTOR_ALIVE(bLocal_30[iVar0]) && IS_ACTOR_VALID(bLocal_30[iVar0]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_30[iVar0])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_30[iVar0]));
			}
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar0]), "bountyhunter_blip");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar0]), "bhnt_lookout");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar0]), "bhnt_state");
			if (StackVal && Function_543(iVar0 != 0, 256))
			{
				DESTROY_ACTOR(bLocal_30[0]);
			}
			else if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_25(bLocal_30[iVar0], 2, GET_OBJECT_FROM_ACTOR(Global_34573), 4);
			}
			else
			{
				RELEASE_ACTOR(bLocal_30[iVar0]);
			}
		}
		if (IS_ACTOR_ALIVE(bLocal_41[iVar0]) && IS_ACTOR_VALID(bLocal_41[iVar0]))
		{
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_41[iVar0], 1);
			RELEASE_ACTOR_AS_AMBIENT(bLocal_41[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(bLocal_23[iVar0]))
		{
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_23[iVar0], 1);
			RELEASE_ACTOR(bLocal_23[iVar0]);
		}
		iVar0++;
	}
	if (Function_24())
	{
		Function_16();
	}
	Function_14(1);
	if (IS_ITERATOR_VALID(bLocal_284))
	{
		DESTROY_ITERATOR(bLocal_284);
	}
	if (IS_OBJECT_VALID(bLocal_277))
	{
		Function_310(bLocal_277);
	}
	Function_11();
	Function_9();
	Function_213();
	if (IS_LAYOUTREF_VALID(bLocal_353))
	{
		DESTROY_LAYOUT(bLocal_353);
	}
	Function_4();
	if (iLocal_239 == 0)
	{
		Function_546(0);
		Function_2(1);
		iLocal_239 = 1;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xF9E / 3998
{
	Function_546(0);
	Function_567();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_3(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0xFE6 / 4070
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_4() //Position: 0xFF9 / 4089
{
	Function_5(&bLocal_81);
	Function_5(&bLocal_148);
	return;
}

void Function_5(bool bParam0) //Position: 0x1009 / 4105
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_6(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x102F / 4143
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x115D / 4445
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0x1177 / 4471
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0x1194 / 4500
{
	bool bVar0;
	
	bVar0 = Function_10();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_10() //Position: 0x11AC / 4524
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
		if (IS_ITERATOR_VALID(bVar1))
		{
			ITERATE_ON_OBJECT_TYPE(bVar1, 8);
			ITERATE_ON_PARTIAL_NAME(bVar1, "nbhDataObj");
			bVar0 = START_OBJECT_ITERATOR(bVar1);
			if (!IS_OBJECT_VALID(bVar0))
			{
				bVar0 = CREATE_POINT_IN_LAYOUT(Global_28841, "nbhDataObj", 1,2f, 1,2f, 1,2f, 0.0f, 0.0f, 0.0f);
				if (!IS_OBJECT_VALID(bVar0))
				{
					LOG_ERROR("BOUNTYHUNTER_GetExternalObject - Could not create external object?");
				}
			}
			DESTROY_ITERATOR(bVar1);
		}
	}
	else
	{
		LOG_ERROR("BOUNTYHUNTER_GetExternalObject - Huh? Traffic layout is invalid?");
	}
	return bVar0;
}

void Function_11() //Position: 0x12BD / 4797
{
	if (SQUAD_IS_VALID(bLocal_530))
	{
		Function_13(bLocal_530);
		Function_12(bLocal_530);
		DESTROY_OBJECT(bLocal_530);
	}
	return;
}

void Function_12(bool bParam0) //Position: 0x12E1 / 4833
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_13(bool bParam0) //Position: 0x1313 / 4883
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_14(int iParam0) //Position: 0x1357 / 4951
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_15())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_15() //Position: 0x1393 / 5011
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_16() //Position: 0x13B8 / 5048
{
	Function_18();
	Function_17(10, 3);
	return;
}

void Function_17(int iParam0, int iParam1) //Position: 0x13C7 / 5063
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

void Function_18() //Position: 0x14FE / 5374
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_23())
	{
		Function_22(10, 3);
	}
	else
	{
		Function_20();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_19(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_19());
	UI_POP("nDebugMenu");
	return;
}

var Function_19() //Position: 0x1549 / 5449
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_20() //Position: 0x155E / 5470
{
	Function_21(25, 2);
	return;
}

void Function_21(int iParam0, int iParam1) //Position: 0x156A / 5482
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

void Function_22(int iParam0, int iParam1) //Position: 0x1768 / 5992
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

bool Function_23() //Position: 0x189F / 6303
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
				if (!Function_543(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_24() //Position: 0x1906 / 6406
{
	return Global_34580;
}

int Function_25(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x190F / 6415
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_26(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_26(bParam0, iParam1, bParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_26(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x19EF / 6639
{
	char* cVar0[32];
	
	Function_33();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_32(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_31(bParam0, 0);
	Function_30(bParam0, iParam1);
	Function_29(bParam0, uParam2);
	Function_28(bParam0, uParam3);
	if (Function_27(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_27(bool bParam0) //Position: 0x1C3D / 7229
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_28(bool bParam0, bool bParam1) //Position: 0x1C60 / 7264
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_29(bool bParam0, bool bParam1) //Position: 0x1C83 / 7299
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x1CA7 / 7335
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x1CCD / 7373
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_32(bool bParam0) //Position: 0x1CF0 / 7408
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_33() //Position: 0x1D0E / 7438
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_34(int iParam0) //Position: 0x1D58 / 7512
{
	Function_35(iParam0);
	return;
}

void Function_35(int iParam0) //Position: 0x1D63 / 7523
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(iParam0->f_52) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(iParam0->f_52, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(iParam0->f_52);
	}
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_60) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar2);
			CLEAR_ACTOR_MAX_SPEED(bVar0);
			if (iParam0->f_160 == 0)
			{
				Function_41(iParam0, bVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(iParam0->f_60));
	}
	if (IS_ACTORSET_VALID(iParam0->f_64))
	{
		if (iParam0->f_160 == 0)
		{
			Function_40(iParam0->f_64, 2, 0, 2);
		}
		else
		{
			Function_38(iParam0->f_64);
		}
		DESTROY_ACTORSET(iParam0->f_64);
	}
	if (!Function_543(iParam0->f_92, 16))
	{
		RELEASE_LAYOUT_OBJECTS(*iParam0);
		DESTROY_LAYOUT(*iParam0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_96))
	{
		Function_37(iParam0->f_96);
		DESTROY_OBJECTSET(iParam0->f_96);
	}
	bVar1 = Function_36(iParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

var Function_36(int iParam0) //Position: 0x1E74 / 7796
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(StackVal);
	return iVar0;
}

void Function_37(bool bParam0) //Position: 0x1E93 / 7827
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
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_38(bool bParam0) //Position: 0x1ED8 / 7896
{
	bool bVar0;
	
	Function_39(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_39(int iParam0) //Position: 0x1F20 / 7968
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_40(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F79 / 8057
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_26(bVar0, iParam1, uParam2, uParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(bParam0);
		return 1;
	}
	return 0;
}

int Function_41(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1FE0 / 8160
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_58(bParam1, uParam0->f_60, 1))
	{
		SQUAD_LEAVE(bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			if (GET_MOUNT(bParam1) != Function_42(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(bParam1));
				}
				else
				{
					Function_25(GET_MOUNT(bParam1), iParam2, 0, 2);
				}
			}
		}
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_25(bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(uParam0->f_64, bParam1))
	{
		REMOVE_ACTORSET_MEMBER(uParam0->f_64, bParam1);
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_25(bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_42(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x208C / 8332
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381 || Function_52(1))
	{
		Function_51(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_50())
		{
			return "";
		}
	}
	if (!Function_48())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_47(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_47(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_47(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_47(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_46(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_46(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_45() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_44(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_44(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_432(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_44(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_44(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_43(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_45() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_43(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x23E4 / 9188
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_44() //Position: 0x2421 / 9249
{
	bool bVar0;
	
	return bVar0;
}

bool Function_45() //Position: 0x2429 / 9257
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_46(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2432 / 9266
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_47(bool bParam0) //Position: 0x24CD / 9421
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

bool Function_48() //Position: 0x24F4 / 9460
{
	if (Function_49() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_49() //Position: 0x250A / 9482
{
	return Global_12976.f_152;
}

bool Function_50() //Position: 0x2515 / 9493
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_51(var uParam0, bool bParam1, bool bParam2) //Position: 0x2535 / 9525
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_542(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_542(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_52(int iParam0) //Position: 0x2562 / 9570
{
	int iVar0;
	
	if (!Function_57(iParam0))
	{
		return 0;
	}
	iVar0 = Function_56(iParam0);
	if (!Function_53(Function_56(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x2598 / 9624
{
	if (!Function_55(iParam0))
	{
		return 0;
	}
	if (!Function_54(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x25BC / 9660
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x25D1 / 9681
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_56(int iParam0) //Position: 0x25E8 / 9704
{
	if (!Function_57(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_57(int iParam0) //Position: 0x2602 / 9730
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2618 / 9752
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_59() //Position: 0x2658 / 9816
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar8;
	
	iVar1 = 0;
	if (!Function_543(StackVal, 64))
	{
		Function_542(&Global_26303 + 8, 64);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (iLocal_238 != 2 || iLocal_238 != 3)
		{
			if (Global_29004 == 0)
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29004 == 1)
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else
			{
				Global_29004 = 2;
				AUDIO_MUSIC_ONE_SHOT("NRT_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
		}
		if (iLocal_238 == 2)
		{
			if (iLocal_239 == 0)
			{
				Function_546(0);
				Function_2(1);
				iLocal_239 = 1;
			}
		}
		if (iLocal_240 == 1)
		{
			if (IS_ACTOR_VALID(bLocal_30[0]))
			{
				DESTROY_ACTOR(bLocal_30[0]);
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(bLocal_23[iVar0]))
			{
				Function_64(Global_34573, bLocal_23[iVar0], 2, 1);
				MEMORY_CLEAR_ALL(bLocal_23[0]);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_23[iVar0], true);
				DEREFERENCE_ACTOR(bLocal_23[iVar0]);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[iVar0]);
				Function_63(bLocal_23[iVar0]);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_23[iVar0], 1);
				TASK_CLEAR(bLocal_23[iVar0]);
				if (iVar0 == 0)
				{
					Function_62(bLocal_23[iVar0]);
					vVar2 = { StackVal, StackVal, Function_62(bLocal_23[iVar0]) };
					bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_44(), bLocal_353, 4294967295, 0);
					bVar6 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, Function_44(), 3, vVar2, 0.0f, 0.0f, 0.0f, 15.0f, 10.0f, 15.0f);
					LOCATE_GRINGOS_IN_VOLUME(bVar6, bVar5, 0, 1);
					while (GET_OBJECTSET_SIZE(bVar5) < 0 && iVar1 != 0)
					{
						bVar8 = GET_GRINGO_FROM_OBJECT(Function_61(&bVar5));
						if (IS_GRINGO_VALID(bVar8))
						{
							if (GRINGO_ACTOR_CAN_USE(bVar8, "UseCase1", bLocal_23[iVar0]) && IS_GRINGO_READY(GET_OBJECT_FROM_GRINGO(bVar8)))
							{
								Function_60(bVar5);
							}
							else
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar8), bVar5);
							}
						}
						else
						{
							iVar1 = 1;
							bVar8 = "";
						}
					}
					DESTROY_OBJECTSET(bVar5);
					DESTROY_VOLUME(bVar6);
					if (IS_GRINGO_VALID(bVar8))
					{
						TASK_USE_GRINGO(bLocal_23[iVar0], bVar8, "useCase1", true, 1);
					}
					else
					{
						TASK_WANDER(bLocal_23[iVar0], 3212836864);
					}
				}
				else
				{
					TASK_WANDER(bLocal_23[iVar0], 3212836864);
				}
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_23[iVar0], 1);
				RELEASE_ACTOR(bLocal_23[iVar0]);
			}
			if (IS_VOLUME_VALID(fLocal_229[iVar0]))
			{
				DESTROY_VOLUME(fLocal_229[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

void Function_60(bool bParam0) //Position: 0x28DC / 10460
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

bool Function_61(bool bParam0) //Position: 0x2914 / 10516
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = "";
	if (IS_OBJECTSET_VALID(*bParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(*bParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, *bParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return bVar0;
}

vector3 Function_62(bool bParam0) //Position: 0x297A / 10618
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_63(bool bParam0) //Position: 0x298B / 10635
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_REMOVE(bParam0, "nocrime");
	}
	return;
}

int Function_64(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x29BD / 10685
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_65(bool bParam0) //Position: 0x2A10 / 10768
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_66(int iParam0) //Position: 0x2A2B / 10795
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_67(105)), 0);
	return;
}

int Function_67(bool bParam0) //Position: 0x2A4C / 10828
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

int Function_68(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x2A62 / 10850
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_72(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_71(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_70(&(Global_25267[iVar058]), 1);
					Function_69(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_69(var uParam0, int iParam1) //Position: 0x2BA4 / 11172
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x2BBE / 11198
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x2BCF / 11215
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_72(int iParam0, int iParam1) //Position: 0x2D3B / 11579
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_73() //Position: 0x2D58 / 11608
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_74(int iParam0) //Position: 0x2D61 / 11617
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_540);
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar2)) && GET_ACTOR_FROM_OBJECT(bVar2) == Global_34573)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(bVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_543(iParam0->f_584, 512) && Function_543(iParam0->f_584, 256))
	{
		if (IS_OBJECT_VALID(iParam0->f_500))
		{
			DESTROY_OBJECT(iParam0->f_500);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_496));
		}
		if (IS_OBJECT_VALID(iParam0->f_504))
		{
			DESTROY_VOLUME(iParam0->f_504);
		}
		while (GET_OBJECTSET_SIZE(iParam0->f_540) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			if (IS_OBJECT_VALID(bVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_540);
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar0)))
					{
						Function_95(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_95(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_78(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_77(1.0f);
		Function_76(iParam0, 5);
		if (Function_543(iParam0->f_584, 32768))
		{
			Function_75(256);
		}
		Function_542(iParam0 + 584, 512);
		Function_3(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_75(int iParam0) //Position: 0x2F1C / 12060
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_76(int iParam0, int iParam1) //Position: 0x2F39 / 12089
{
	iParam0->f_532 = iParam1;
	return;
}

void Function_77(bool bParam0) //Position: 0x2F46 / 12102
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_78(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x2F63 / 12131
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_19();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_45())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_81(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_80();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_79(uParam9);
}

void Function_79(bool bParam0) //Position: 0x3053 / 12371
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_80() //Position: 0x30F8 / 12536
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_81(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x310D / 12557
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
	Function_94(iParam0, TO_FLOAT(bParam1), 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_82(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_82(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x332D / 13101
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_92(390))), 32);
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
					bVar19 = (Function_91(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_91(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_89(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_86(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_83(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_44(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_83(int iParam0) //Position: 0x395A / 14682
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_84(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x396B / 14699
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_85(char* cParam0, char* cParam1) //Position: 0x3A60 / 14944
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_86(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3A79 / 14969
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_88(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_87(Function_88(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_87(int iParam0, int iParam1) //Position: 0x3ADE / 15070
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_88(int iParam0, bool bParam1) //Position: 0x3AF0 / 15088
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_89(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3B02 / 15106
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
	if (((Function_90(iParam0) != 19 || Function_90(iParam0) != 17) || Function_90(iParam0) != 10) || Function_90(iParam0) != 9)
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

int Function_90(int iParam0) //Position: 0x3C32 / 15410
{
	return Global_35278[iParam020].f_48;
}

float Function_91(int iParam0) //Position: 0x3C41 / 15425
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_92(int iParam0) //Position: 0x3C7A / 15482
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_93(int iParam0) //Position: 0x3CB7 / 15543
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

int Function_94(int iParam0, bool bParam1, bool bParam2) //Position: 0x3E51 / 15953
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

void Function_95(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4072 / 16498
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

int Function_96(int iParam0) //Position: 0x410C / 16652
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	struct<8> Var24;
	bool bVar32;
	
	switch (iParam0->f_532)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_432(StackVal, StackVal, *(iParam0 + 544)))
			{
				GET_POSITION(Global_34573, iParam0 + 544);
			}
			if (!Function_432(StackVal, StackVal, *(iParam0 + 544)))
			{
				STREAMING_LOAD_BOUNDS(*(iParam0 + 544), 10.0f, 0);
			}
			switch (iParam0->f_536)
			{
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					if (IS_ACTOR_PLAYER(Global_34573))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					Function_112(Global_34573, 0);
					REQUEST_ACTION_TREE("custom/stand_hostage");
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop", true);
					if (iParam0->f_560 == 1)
					{
						Function_76(iParam0, 4);
						Function_472(iParam0 + 508);
					}
					else
					{
						Function_76(iParam0, 3);
					}
					break;
				
				default:
					Function_76(iParam0, 4);
					Function_472(iParam0 + 508);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_432(StackVal, StackVal, *(iParam0 + 544)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 544), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(iParam0->f_500) && HUD_IS_FADED())
					{
						Function_77(1.0f);
						Function_76(iParam0, 4);
						Function_472(iParam0 + 508);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(Global_34573, &vVar18);
				if (VMAG(vVar18) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_MOUNT(Global_34573));
						TASK_CLEAR(Global_34573);
						TASK_DISMOUNT(Global_34573, 1);
						TASK_PRIORITY_SET(Global_34573, true);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_VEHICLE(Global_34573));
						Function_25(GET_VEHICLE(Global_34573), 0, 0, 2);
						TASK_CLEAR(Global_34573);
						TASK_VEHICLE_LEAVE(Global_34573);
						TASK_PRIORITY_SET(Global_34573, true);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(Global_34573, 12) != 1 || GET_TASK_STATUS(Global_34573, 12) != 3) || GET_TASK_STATUS(Global_34573, 55) != 1) || GET_TASK_STATUS(Global_34573, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj")));
				}
				bVar1 = Function_111(iParam0, 1);
				if (IS_ACTOR_VALID(bVar1))
				{
					TASK_CLEAR(Global_34573);
					TASK_GO_NEAR_ACTOR(Global_34573, bVar1, 2,5f, 1);
					TASK_PRIORITY_SET(Global_34573, true);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_76(iParam0, 4);
				Function_472(iParam0 + 508);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_500))
			{
				switch (iParam0->f_536)
				{
					case 0x00000003:
						if (Function_109(iParam0 + 508, 5.0f))
						{
							bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
							bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
							GET_OBJECT_POSITION(bVar4, &vVar9);
							CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
							GET_OBJECT_RELATIVE_POSITION(bVar4, -3,285f, 0.0f, -3,285f, &vVar9);
							GET_OBJECT_POSITION(bVar5, &vVar12);
							vVar9.f_4 = (vVar9.y + FABS((vVar9.y - vVar12.y)));
							FIND_GROUND_INTERSECTION(&vVar9, 100.0f, &vVar9, &vVar15);
							CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar5))))
							{
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar5));
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar5));
							}
							if (IS_ACTOR_VALID(bVar0))
							{
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar5));
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar5), vVar9, 0.0f, 1, true, 1);
							}
							if (IS_ACTOR_VALID(bVar0))
							{
								vVar9.x = (vVar9.x + 3.0f);
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, true, 1);
								TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
							}
							SNAP_OBJECT_TO_GROUND(bVar0, 20.0f, false, 1092616192);
							SNAP_OBJECT_TO_GROUND(bVar5, 20.0f, false, 1092616192);
						}
						break;
					
					case 0x00000001:
						bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
						bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
						bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
						switch (iParam0->f_556)
						{
							case 0x00000000:
								vVar9 = { StackVal, StackVal, Global_34574 };
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								GET_OBJECT_POSITION(bVar5, &vVar21);
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
								if (IS_ACTOR_VALID(bVar0))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar4));
									Function_62(Global_34573);
									vVar9 = { StackVal, StackVal, Function_62(Global_34573) };
									vVar9.x = (vVar9.x + 3.0f);
									TELEPORT_ACTOR(bVar0, &vVar9, 1, 1, 1);
								}
								ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(bVar2, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar1, 20.0f, false, 1092616192);
								TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								vVar15 = { 0.0f, 1.0f, 0.0f };
								ROTATE_OBJECT_AROUND_AXIS(bVar1, &vVar15, 165.0f);
								vVar12 = { StackVal, StackVal, Global_34574 };
								GET_OBJECT_RELATIVE_POSITION(bVar1, 0.0f, 0.0f, -1.0f, &vVar12);
								TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, 180.0f, 1, true, 1);
								TASK_STAND_STILL(bVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar2, 20.0f, false, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(bVar2, &vVar15, 165.0f);
								Function_106(bVar2, Global_34573);
								Function_3(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, true, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_471(iParam0 + 508, 0,5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_471(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_105(iParam0, bVar1, bVar2, 4);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(iParam0->f_496))
								{
									if (GRINGO_ACTOR_CAN_USE(iParam0->f_496, "UseCase1", bVar1))
									{
										SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", false, 0, 0);
										TASK_USE_GRINGO(bVar1, iParam0->f_496, "UseCase1", true, 1);
										Function_472(iParam0 + 508);
									}
									else
									{
										LOG_ERROR("Cannot use this cutscene gringo?");
									}
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar2)))
								{
									if (Function_102(iParam0 + 508) < 0,75f && !Function_543(iParam0->f_584, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", false, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
										TASK_PRIORITY_SET(bVar2, true);
										TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", true, 1);
										Function_542(iParam0 + 584, 2048);
										Function_472(iParam0 + 508);
										iParam0->f_556++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_471(iParam0 + 508, 9.0f))
								{
									Function_76(iParam0, 5);
									iParam0->f_556++;
								}
								break;
						}
						break;
					
					case 0x00000002:
						bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
						bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
						bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
						bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
						switch (iParam0->f_556)
						{
							case 0x00000000:
								GET_OBJECT_POSITION(bVar5, &vVar9);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								GET_OBJECT_POSITION(bVar5, &vVar21);
								vVar18 = { -5,348521f, 0.0f, -3,826143f };
								vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar18, vVar21, StackVal) };
								FIND_GROUND_INTERSECTION(&vVar9, 20.0f, &vVar9, &vVar15);
								if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4))))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar4));
								}
								ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(bVar2, 0, 0);
								TELEPORT_ACTOR_WITH_HEADING(bVar1, vVar9, 0.0f, 1, true, 1);
								SNAP_OBJECT_TO_GROUND(bVar1, 20.0f, false, 1092616192);
								TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								vVar15 = { 0.0f, 1.0f, 0.0f };
								ROTATE_OBJECT_AROUND_AXIS(bVar1, &vVar15, 165.0f);
								vVar12 = { StackVal, StackVal, vVar9 };
								GET_OBJECT_RELATIVE_POSITION(bVar1, 0.0f, 0.0f, -1.0f, &vVar12);
								TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, 180.0f, 1, true, 1);
								TASK_STAND_STILL(bVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar2, 20.0f, false, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(bVar2, &vVar15, 165.0f);
								Function_3(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, true, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_471(iParam0 + 508, 0,5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_471(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_105(iParam0, bVar1, bVar2, 4);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(iParam0->f_496))
								{
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(bVar1, iParam0->f_496, "UseCase1", true, 1);
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_102(iParam0 + 508) < 0,75f && !Function_543(iParam0->f_584, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", false, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
									TASK_PRIORITY_SET(bVar2, true);
									TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", true, 1);
									Function_542(iParam0 + 584, 2048);
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								if (Function_471(iParam0 + 508, 9.0f))
								{
									Function_76(iParam0, 5);
									iParam0->f_556++;
								}
								break;
						}
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
					case 0x00000007:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_471(iParam0 + 508, 1.0f))
								{
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_111(iParam0, 1);
								if (IS_ACTOR_VALID(bVar0))
								{
									Function_101(bVar0, &vVar9);
								}
								else
								{
									vVar9 = { 0.0f, 0.0f, 0.0f };
								}
								if ((Function_471(iParam0 + 508, 0,5f) || iParam0->f_560 != 1) || VDIST(Global_34574, vVar9) > 3.0f)
								{
									if (IS_OBJECT_VALID(iParam0->f_504))
									{
										DESTROY_VOLUME(iParam0->f_504);
									}
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2096,014f, 16,449f, 2603,359f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 761,411f, 79,458f, 1232,734f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2671,387f, 31,363f, 4253,713f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -821,7f, 93,222f, 2418,31f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad value");
									}
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhCutsceneVol") };
									iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, vVar9, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2104,648f, 16,46f, 2605,749f };
										vVar15 = { 0.0f, 216.0f, 0.0f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 751,328f, 78,525f, 1233,59f };
										vVar15 = { 0.0f, 235.0f, 0.0f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2680,063f, 31,548f, 4255,704f };
										vVar15 = { 0.0f, 251.0f, 0.0f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -824,746f, 92,129f, 2406,763f };
										vVar15 = { 0.0f, 236.0f, 0.0f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad handshaker(1) position value");
									}
									TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, true, 1);
									PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								if (iParam0->f_536 == 4)
								{
									vVar9 = { -2096,996f, 16,449f, 2605,508f };
									vVar15 = { 0.0f, 167.0f, 0.0f };
								}
								else if (iParam0->f_536 == 5)
								{
									vVar9 = { 754,635f, 78,525f, 1234,821f };
									vVar15 = { 0.0f, 352,531f, 0.0f };
								}
								else if (iParam0->f_536 == 6)
								{
									vVar9 = { -2672,115f, 31,384f, 4254,054f };
									vVar15 = { 0.0f, -10.0f, 0.0f };
								}
								else if (iParam0->f_536 == 7)
								{
									vVar9 = { -821,642f, 93,294f, 2419,156f };
									vVar15 = { 0.0f, 90.0f, 0.0f };
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad value");
								}
								iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", vVar9, vVar15));
								Function_64(bVar0, Function_111(iParam0, 0), 0, 1);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_111(iParam0, bVar32);
									if (IS_ACTOR_VALID(bVar0))
									{
										if (!IS_ACTOR_PLAYER(bVar0))
										{
											SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
											TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
										}
										switch (bVar32)
										{
											case 0x00000000:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2094,226f, 16,449f, 2608,347f };
													vVar15 = { 0.0f, 298,712f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 757,028f, 78,525f, 1235,217f };
													vVar15 = { 0.0f, 346.0f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668,537f, 31,387f, 4253,711f };
													vVar15 = { 0.0f, 234,172f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -821,477f, 93,365f, 2420,748f };
													vVar15 = { 0.0f, 173,273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim position value");
												}
												REMOVE_OBJECT_FROM_ATTACHMENT(bVar0);
												FREE_FROM_HOGTIE(bVar0);
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, false, 1);
												Function_95(bVar0, 1, 1);
												SET_ANIM_SET_FOR_ACTOR(bVar0, "stand_hostage", 0);
												SET_ACTION_NODE_FOR_ACTOR(bVar0, "stand_hostage/walk_pose");
												DELETE_ACCESSORY("ANKLE_BIND", bVar0);
												SET_ACTOR_MAX_SPEED(bVar0, true);
												MEMORY_CLEAR_ALL(bVar0);
												TASK_CLEAR(bVar0);
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091,603f, 16,962f, 2605,353f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 757,973f, 78,525f, 1234,922f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2657,971f, 31,386f, 4258,836f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -823,57f, 93,809f, 2427,074f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim face actor value");
												}
												TASK_FACE_COORD(bVar0, &vVar9, 1);
												TASK_PRIORITY_SET(bVar0, true);
												break;
											
											case 0x00000001:
												MEMORY_CONSIDER_AS(bVar0, Global_34573, false);
												ACTOR_HOLSTER_WEAPON(bVar0, 0);
												TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												TASK_PRIORITY_SET(bVar0, true);
												break;
											
											case 0x00000002:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2095,837f, 16,449f, 2608,938f };
													vVar15 = { 0.0f, 298,712f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 756,759f, 78,525f, 1237,865f };
													vVar15 = { 0.0f, 59,078f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668,258f, 31,387f, 4252,612f };
													vVar15 = { 0.0f, 218,528f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -819,311f, 93,365f, 2421,17f };
													vVar15 = { 0.0f, 135,445f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, true, 1);
												TASK_CLEAR(bVar0);
												if (!IS_ACTOR_VALID(Function_111(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_111(iParam0, 0), -1.0f, 0);
													UNK_0x2E84E682(bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(bVar0, Function_111(iParam0, 0), 0);
												}
												TASK_PRIORITY_SET(bVar0, true);
												break;
											
											case 0x00000003:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091,431f, 16,963f, 2603,127f };
													vVar15 = { 0.0f, 167.0f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 756,564f, 78,525f, 1232,389f };
													vVar15 = { 0.0f, 169,678f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2661,205f, 31,386f, 4254,576f };
													vVar15 = { 0.0f, 0.0f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -824,301f, 93,365f, 2421,301f };
													vVar15 = { 0.0f, 263,273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, true, 1);
												TASK_CLEAR(bVar0);
												if (!IS_ACTOR_VALID(Function_111(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_111(iParam0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(bVar0, true);
												break;
											
											case 0x00000004:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091,729f, 16,449f, 2610,241f };
													vVar15 = { 0.0f, 13.0f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 763,822f, 79,456f, 1234,328f };
													vVar15 = { 0.0f, 93,67f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668,106f, 31,387f, 4256,549f };
													vVar15 = { 0.0f, 0.0f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -823,502f, 93,809f, 2430,243f };
													vVar15 = { 0.0f, 353,273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, true, 1);
												TASK_CLEAR(bVar0);
												if (IS_ACTOR_VALID(Function_111(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_111(iParam0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(bVar0, true);
												break;
											
											case 0x00000005:
												if (iParam0->f_536 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 5)
												{
													LOG_ERROR("Blackwater does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2669,659f, 35,673f, 4252,948f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -826,75f, 96,959f, 2425,077f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(bVar0);
												TASK_GO_NEAR_COORD(bVar0, &vVar9, 0,3f, 1);
												break;
											
											case 0x00000006:
												if (iParam0->f_536 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 5)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2670,716f, 35,673f, 4255,13f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -824,29f, 96,959f, 2427,185f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(bVar0);
												TASK_GO_NEAR_COORD(bVar0, &vVar9, 0,3f, 1);
												break;
											
											default:
												LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
												break;
											}
									}
									bVar32++;
								}
								if (iParam0->f_536 == 4)
								{
									bVar7 = Function_100(Global_30640[0], "narmadillo", "sheriffsOffice", 1);
									bVar8 = "";
									vVar9 = { -822,845f, 93,809f, 2423,713f };
								}
								else if (iParam0->f_536 == 5)
								{
									bVar7 = Function_100(Global_30717[0], "blackwater", "policeStation01", 1);
									bVar8 = Function_100(Global_30717[0], "blackwater", "policeStation01", 2);
									vVar9 = { 761,697f, 79,456f, 1235,028f };
								}
								else if (iParam0->f_536 == 6)
								{
									bVar7 = Function_100(Global_30693[0], "nchuparosa", "cityHall01", 6);
									bVar8 = Function_100(Global_30693[0], "nchuparosa", "cityHall01", 1);
									vVar9 = { -2668,537f, 31,387f, 4253,711f };
								}
								else if (iParam0->f_536 == 7)
								{
									bVar7 = Function_100(Global_30668[0], "hennigansRanch", "stockade01", 1);
									bVar8 = "";
									vVar9 = { -822,845f, 93,809f, 2423,713f };
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad door open position");
								}
								if (IS_DOOR_VALID(bVar7))
								{
									OPEN_DOOR(bVar7, &vVar9, 4.0f);
								}
								if (IS_DOOR_VALID(bVar8))
								{
									OPEN_DOOR(bVar8, &vVar9, 4.0f);
								}
								if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
								{
									bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"));
									if (IS_OBJECT_VALID(bVar0))
									{
										if (iParam0->f_536 == 4)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2090,139f, 16,44f, 2595,838f, 128,422f, 1, true, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2093,36f, 16,449f, 2598,952f, 215,238f, 1, true, 1);
												}
											}
										}
										else if (iParam0->f_536 == 5)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, 752,488f, 78,553f, 1226,634f, 174,158f, 1, true, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, 752,488f, 78,553f, 1226,634f, 174,158f, 1, true, 1);
												}
											}
										}
										else if (iParam0->f_536 == 6)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2676,581f, 31,359f, 4246,866f, 72.0f, 1, true, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2676,581f, 31,359f, 4246,866f, 72.0f, 1, true, 1);
												}
											}
										}
										else if (iParam0->f_536 == 7)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -816,61f, 92,886f, 2418,169f, 40.0f, 1, true, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -818,287f, 93,25f, 2419,963f, 355.0f, 1, true, 1);
												}
											}
										}
										else
										{
											LOG_ERROR("Procmission Cutscene horse/vehicle position not defined");
										}
									}
								}
								Function_472(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000003:
								if (Function_471(iParam0 + 508, 1,11f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_111(iParam0, 0);
								if (!IS_ACTOR_VALID(bVar1))
								{
									bVar1 = Global_34573;
								}
								bVar2 = Function_111(iParam0, 1);
								bVar3 = Function_111(iParam0, 2);
								if (!IS_ACTOR_PLAYER(bVar1))
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar3, bVar1, 0,5f, 1);
									TASK_PRIORITY_SET(bVar3, true);
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2086,59f, 16,964f, 2603,988f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 764,435f, 79,455f, 1236,632f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2659,724f, 31,386f, 4255,178f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -824,114f, 93,809f, 2428,695f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad go to coord value");
									}
									SET_ACTOR_MAX_SPEED(bVar1, true);
									TASK_GO_NEAR_COORD(bVar1, &vVar9, 1.0f, 1);
									TASK_PRIORITY_SET(bVar1, true);
								}
								Function_95(bVar2, 1, 1);
								if (iParam0->f_536 == 4)
								{
									vVar9 = { -2096,996f, 16,449f, 2605,508f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { -2097,315f, 16,4494f, 2606,89f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								else if (iParam0->f_536 == 6)
								{
									vVar9 = { -2672,348f, 31,387f, 4252,322f };
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, 150,228f, 1, true, 1);
									vVar9 = { -2672,115f, 31,384f, 4254,054f };
									TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar9, 351,93f, 1, true, 1);
								}
								else if (iParam0->f_536 == 7)
								{
									vVar9 = { -821,642f, 93,294f, 2419,156f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { -823,061f, 93,29355f, 2419,155f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								else if (iParam0->f_536 == 5)
								{
									vVar9 = { 754,635f, 78,525f, 1234,821f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { 754,8007f, 78,52634f, 1233,557f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								Function_106(bVar2, Global_34573);
								Function_106(Global_34573, bVar2);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								SET_ANIM_SET_FOR_ACTOR(bVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(bVar2, Global_34573);
								SET_ACTION_NODE_FOR_ACTOR(bVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(bVar2, 299, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000005:
								if (Function_471(iParam0 + 508, 7.0f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000006:
								bVar2 = Function_111(iParam0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(Global_34573);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								Function_76(iParam0, 5);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_111(iParam0, bVar32);
									if (IS_ACTOR_VALID(bVar0))
									{
										MEMORY_CLEAR_ALL(bVar0);
									}
									bVar32++;
								}
								iParam0->f_556++;
								break;
							
							case 0x00000007:
								break;
						}
						break;
					
					case 0x0000000F:
					case 0x00000010:
					case 0x00000011:
					case 0x00000012:
					case 0x00000013:
					case 0x00000014:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								bVar0 = Function_111(iParam0, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								Function_95(bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, 0);
								if (IS_ACTOR_CRIPPLED(bVar0, 5))
								{
									SET_CRIPPLE_FLAG(bVar0, false);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutsceneGringo") };
									Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/hug_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_432(StackVal, StackVal, vVar12))
								{
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
									{
										TELEPORT_ACTOR_WITH_HEADING(GET_MOST_RECENT_MOUNT(Global_34573), vVar12, GET_Y(&vVar18), 1, true, 1);
										TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(Global_34573), -1.0f, 0, 0);
									}
								}
								SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", true, 1, 0);
								TASK_USE_GRINGO(bVar0, iParam0->f_496, "UseCase1", true, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								bVar0 = Function_111(iParam0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "Male", &vVar9);
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(iParam0->f_496, "Male"), 1, true, 1);
									TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
									Function_472(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "escwavReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_471(iParam0 + 508, 2.0f))
								{
									TASK_USE_GRINGO(Global_34573, iParam0->f_496, "Male", true, 1);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (Function_471(iParam0 + 508, 3.0f))
								{
									bVar0 = Function_111(iParam0, 0);
									SAY_SINGLE_LINE_CONTEXT(bVar0, 103, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_471(iParam0 + 508, 5,5f))
								{
									DECOR_REMOVE(Global_34573, "escwavReady");
									Function_76(iParam0, 5);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000015:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								bVar1 = Function_111(iParam0, 0);
								bVar2 = Function_111(iParam0, 1);
								vVar9 = { -3.0f, 0.0f, -1.0f };
								vVar15 = { 0.0f, 0.0f, 0.0f };
								Function_97(GET_OBJECT_FROM_ACTOR(bVar1), 1, &vVar9, &vVar15);
								Function_95(bVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar2, 0);
								if (IS_ACTOR_CRIPPLED(bVar2, 5))
								{
									SET_CRIPPLE_FLAG(bVar2, false);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutsceneGringo") };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(Global_34573, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", true, 0, 0);
								SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", true, 0, 0);
								TASK_PRIORITY_SET(Global_34573, true);
								TASK_CLEAR(Global_34573);
								TASK_USE_GRINGO(Global_34573, iParam0->f_496, "UseCase1", true, 1);
								bVar32 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_USE_GRINGO(false, iParam0->f_496, "ChildUse", true, 1);
								TASK_VEHICLE_ENTER(false, bVar1, 1, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_PRIORITY_SET(bVar0, true);
								TASK_SEQUENCE_PERFORM(bVar2, bVar32);
								if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
								{
									vVar12 = { -5.0f, 0.0f, 0.0f };
									vVar18 = { 0.0f, 90.0f, 0.0f };
									Function_97(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540), 1, &vVar12, &vVar18);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573), &vVar12, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(Global_34573), 100.0f, false, 1092616192);
								}
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_472(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_471(iParam0 + 508, 8,5f))
								{
									bVar1 = Function_111(iParam0, 0);
									bVar2 = Function_111(iParam0, 1);
									START_VEHICLE(bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar1, false) != bVar2)
									{
										SET_ACTOR_IN_VEHICLE(bVar2, bVar1, false);
									}
									TASK_CLEAR(bVar2);
									TASK_PRIORITY_SET(bVar2, true);
									TASK_FLEE_COORD(bVar2, &Global_34574, 4, -1.0f, -1.0f, 0);
									Function_76(iParam0, 5);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								break;
						}
						break;
					
					case 0x00000008:
					case 0x00000009:
					case 0x0000000A:
					case 0x0000000B:
					case 0x0000000C:
					case 0x0000000D:
					case 0x0000000E:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								Function_472(iParam0 + 508);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								bVar2 = Function_111(iParam0, 1);
								Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_432(StackVal, StackVal, vVar12))
								{
									if (IS_ACTOR_VALID(bVar2))
									{
										STOP_VEHICLE(bVar2);
										TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, GET_Y(&vVar18), 1, true, 1);
									}
								}
								bVar1 = Function_111(iParam0, 0);
								Function_95(bVar1, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar1, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, 0);
								SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bVar1, 1);
								if (IS_ACTOR_CRIPPLED(bVar1, 5))
								{
									SET_CRIPPLE_FLAG(bVar1, false);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(iParam0->f_540, 5.0f, false, 5.0f);
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutsceneGringo") };
									Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_47(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_99(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(Global_34573, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", true, 0, 0);
								TASK_PRIORITY_SET(Global_34573, true);
								TASK_CLEAR(Global_34573);
								TASK_USE_GRINGO(Global_34573, iParam0->f_496, "UseCase1", true, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								bVar1 = Function_111(iParam0, 0);
								bVar2 = Function_111(iParam0, 1);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "ChildUse", &vVar9);
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", true, 0, 0);
									bVar32 = TASK_SEQUENCE_OPEN();
									TASK_USE_GRINGO(false, iParam0->f_496, "ChildUse", true, 1);
									TASK_FACE_ACTOR(false, bVar2, 0, 3212836864);
									TASK_VEHICLE_ENTER(false, bVar2, 1, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, bVar32);
									TASK_SEQUENCE_RELEASE(bVar32, 1);
									TASK_PRIORITY_SET(bVar1, true);
									Function_472(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "transportReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_111(iParam0, 0);
								bVar2 = Function_111(iParam0, 1);
								if (Function_471(iParam0 + 508, 5.0f))
								{
									START_VEHICLE(bVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar2, 1);
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_111(iParam0, 0);
								bVar2 = Function_111(iParam0, 1);
								if (Function_471(iParam0 + 508, 2,5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(bVar1))
									{
										TASK_CLEAR(bVar1);
										SET_ACTOR_IN_VEHICLE(bVar1, bVar2, false);
									}
									Function_472(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_471(iParam0 + 508, 1.0f))
								{
									bVar1 = Function_111(iParam0, 0);
									bVar2 = Function_111(iParam0, 1);
									TASK_CLEAR(bVar1);
									Function_76(iParam0, 5);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000000:
					default:
						LOG_ERROR("Undefined cutscene type");
						break;
				}
			}
			else
			{
				Function_77(1.0f);
				Function_76(iParam0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return iParam0->f_532;
}

void Function_97(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x6C5C / 27740
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_98(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_98(var uParam0, int iParam1) //Position: 0x6D84 / 28036
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_432(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0,01f);
	uParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_432(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_99(bool bParam0) //Position: 0x6DEF / 28143
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

var Function_100(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x6E16 / 28182
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_559(iParam0))
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
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

void Function_101(bool bParam0, int iParam1) //Position: 0x6EB2 / 28338
{
	GET_POSITION(bParam0, iParam1);
	return;
}

float Function_102(int iParam0) //Position: 0x6EBF / 28351
{
	if (Function_104(iParam0))
	{
		if (Function_103(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_103(int iParam0) //Position: 0x6F87 / 28551
{
	return Function_543(*iParam0, 2);
}

bool Function_104(int iParam0) //Position: 0x6F94 / 28564
{
	return Function_543(*iParam0, 1);
}

void Function_105(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6FA1 / 28577
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	
	if (!IS_ACTOR_MALE(bParam2))
	{
		iParam3 = 2;
	}
	switch (iParam3)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000003:
			Function_47(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar0 = { StackVal, StackVal, Function_47(GET_OBJECT_FROM_ACTOR(bParam1)) };
			Function_99(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar3 = { StackVal, StackVal, Function_99(GET_OBJECT_FROM_ACTOR(bParam1)) };
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
			{
				Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutsceneGringo") };
				iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var6, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar0, vVar3));
			}
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
			{
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
			}
			else
			{
				LOG_ERROR("PROCMISSION_PERFORM_ENDING_ANIM - Invalid procmission cutscene gringo?");
			}
			break;
	}
}

void Function_106(bool bParam0, bool bParam1) //Position: 0x70E4 / 28900
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_107(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_107(bool bParam0, vector3 vParam1) //Position: 0x70FE / 28926
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_108(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_108(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_108(bool bParam0, vector3 vParam1) //Position: 0x7136 / 28982
{
	vector3 vVar0;
	
	Function_62(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_62(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

bool Function_109(int iParam0, bool bParam1) //Position: 0x71B9 / 29113
{
	if (Function_471(iParam0, bParam1))
	{
		Function_110(iParam0);
		return 1;
	}
	return 0;
}

void Function_110(int iParam0) //Position: 0x71D1 / 29137
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_111(int iParam0, bool bParam1) //Position: 0x71E5 / 29157
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_540);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bVar3), "procCutsceneIdx") == bParam1)
				{
					bVar2 = bVar3;
					bVar0 = GET_OBJECTSET_SIZE(iParam0->f_540) + 1;
				}
			}
		}
		bVar0++;
	}
	return bVar2;
}

void Function_112(bool bParam0, bool bParam1) //Position: 0x7260 / 29280
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_113(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_113(bool bParam0, bool bParam1) //Position: 0x72BD / 29373
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x72DC / 29404
{
	bool bVar0;
	bool bVar1;
	
	switch (iParam0->f_536)
	{
		case 0x00000003:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			iParam0->f_500 = Function_203(uParam1, 0, bVar0, 1, 0, 0);
			break;
		
		case 0x00000002:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			if (!IS_OBJECT_VALID(bVar1))
			{
			}
			REFERENCE_OBJECT(bVar0);
			REFERENCE_OBJECT(bVar1);
			iParam0->f_500 = Function_198(uParam1, 0, bVar0, bVar1, 1, 0, 0);
			break;
		
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			REFERENCE_OBJECT(bVar0);
			iParam0->f_500 = Function_195(uParam1, 0, bVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_95(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_190(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_95(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_185(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_95(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_180(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_95(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_175(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			iParam0->f_500 = Function_171(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000010:
			iParam0->f_500 = Function_167(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000011:
			iParam0->f_500 = Function_163(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000012:
			iParam0->f_500 = Function_159(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000013:
			iParam0->f_500 = Function_155(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000014:
			iParam0->f_500 = Function_151(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000015:
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			iParam0->f_500 = Function_148(iParam0->f_28, 0, Global_34573, bVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			iParam0->f_500 = Function_144(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000009:
			iParam0->f_500 = Function_140(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000A:
			iParam0->f_500 = Function_136(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000B:
			iParam0->f_500 = Function_132(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000C:
			iParam0->f_500 = Function_128(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000D:
			iParam0->f_500 = Function_124(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000E:
			iParam0->f_500 = Function_120(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_76(iParam0, 1);
	if (bParam2 == 1)
	{
		Function_542(iParam0 + 584, 32768);
		Function_119(256);
	}
	if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
	{
		Function_115(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	}
	else
	{
		Function_115(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	Function_542(iParam0 + 584, 256);
	return 1;
}

void Function_115(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x76B4 / 30388
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_80();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_19();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_45())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_62(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_44(), 2, Function_62(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_81(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_118()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_118()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_117(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_116(0x4000000);
	}
	if (Function_117(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_116(0x8000000);
	}
}

void Function_116(bool bParam0) //Position: 0x795D / 31069
{
	bool bVar0;
	
	if (Function_543(bParam0, 1) && Function_543(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_117(int iParam0) //Position: 0x7991 / 31121
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_118() //Position: 0x79AD / 31149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_119(bool bParam0) //Position: 0x7A2C / 31276
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

var Function_120(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7A3F / 31295
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_121(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_121(var uParam0, char* cParam1) //Position: 0x7AC2 / 31426
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_123(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_122(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_122(int iParam0) //Position: 0x7B27 / 31527
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57,57088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 162,8414f, 74,79659f, 2201,986f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,047225f, 0,550466f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_123(bool bParam0) //Position: 0x7B91 / 31633
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 43,50317f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 162,698f, 74,86543f, 2201,977f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,530979f, 0,889932f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_124(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7BFB / 31739
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_125(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_125(var uParam0, char* cParam1) //Position: 0x7C7E / 31870
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_127(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_126(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_126(int iParam0) //Position: 0x7CE3 / 31971
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -425,0981f, 152,7598f, 1619,76f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,078849f, 1,100348f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_127(bool bParam0) //Position: 0x7D4D / 32077
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 40,42704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -426,3903f, 153,0767f, 1620,322f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,173728f, 1,59284f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_128(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7DB7 / 32183
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_129(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_129(var uParam0, char* cParam1) //Position: 0x7E3A / 32314
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_131(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_130(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_130(int iParam0) //Position: 0x7E9F / 32415
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,59192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -825,5594f, 93,69975f, 2404,281f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,05595f, 0,472653f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_131(bool bParam0) //Position: 0x7F09 / 32521
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 50,24756f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -824,426f, 95,18665f, 2404,868f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,08302f, 0,444165f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_132(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7F73 / 32627
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_133(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_133(var uParam0, char* cParam1) //Position: 0x7FF6 / 32758
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_135(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_134(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_134(int iParam0) //Position: 0x805C / 32860
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51,94207f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4261,643f, 20,3573f, 4463,194f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,012928f, 0,297036f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_135(bool bParam0) //Position: 0x80C6 / 32966
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 19,91502f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4263,063f, 21,06406f, 4462,477f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,063559f, 0,279046f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_136(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8130 / 33072
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_137(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_137(var uParam0, char* cParam1) //Position: 0x81B3 / 33203
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_139(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_138(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 11.0f, 2);
	return;
}

void Function_138(int iParam0) //Position: 0x8218 / 33304
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38,18072f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2753,704f, 34,86351f, 4297,391f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,183378f, -1,228742f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_139(bool bParam0) //Position: 0x8282 / 33410
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2749,547f, 33,27492f, 4299,523f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,013343f, -0,862829f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_140(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x82EC / 33516
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_141(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_141(var uParam0, char* cParam1) //Position: 0x836F / 33647
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_143(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_142(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_142(int iParam0) //Position: 0x83D4 / 33748
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,41039f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 783,2053f, 80,20029f, 1318,624f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,050953f, 1,436288f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_143(bool bParam0) //Position: 0x843E / 33854
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 46,1938f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 783,3696f, 80,22123f, 1319,231f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,436726f, 1,348244f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_144(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x84A8 / 33960
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_145(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_145(var uParam0, char* cParam1) //Position: 0x852B / 34091
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_147(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_146(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_146(int iParam0) //Position: 0x8590 / 34192
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,82149f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2139,764f, 17,80296f, 2607,612f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,011908f, -0,292308f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_147(int iParam0) //Position: 0x85FA / 34298
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,38674f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2140,938f, 17,70445f, 2607,843f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,564788f, -0,140291f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_148(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x8664 / 34404
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_149(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_149(var uParam0, var uParam1, int iParam2) //Position: 0x86E6 / 34534
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_150(&iVar0, uParam1, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 8,5f, 0);
	return;
}

void Function_150(var uParam0, bool bParam1, bool bParam2) //Position: 0x8713 / 34579
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -3,3f, 1,1f, 3,5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,7f, 1,5f, -2,1f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,1f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_151(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x87B1 / 34737
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_152(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_152(var uParam0, char* cParam1) //Position: 0x8831 / 34865
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_154(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_153(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_153(int iParam0) //Position: 0x889D / 34973
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 123,7456f, 74,61844f, 2289,153f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,064519f, -3,13974f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_154(bool bParam0) //Position: 0x8907 / 35079
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 123,4807f, 75,50849f, 2289,178f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,102356f, 3,123572f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_155(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8971 / 35185
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_156(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_156(var uParam0, char* cParam1) //Position: 0x89F1 / 35313
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_158(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_157(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_157(int iParam0) //Position: 0x8A5D / 35421
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -940,4845f, 91,59863f, 2427,075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,028671f, 0,140625f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_158(bool bParam0) //Position: 0x8AC7 / 35527
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -940,9657f, 91,59235f, 2426,499f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,223395f, 1,435132f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_159(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8B31 / 35633
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_160(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_160(var uParam0, char* cParam1) //Position: 0x8BB1 / 35761
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_162(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_161(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_161(int iParam0) //Position: 0x8C1D / 35869
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4337,654f, 28,6333f, 4413,195f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,051522f, 1,741209f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_162(bool bParam0) //Position: 0x8C87 / 35975
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4337,393f, 28,47409f, 4413,315f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,237212f, 0,27196f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_163(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8CF1 / 36081
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_164(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_164(var uParam0, char* cParam1) //Position: 0x8D71 / 36209
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_166(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_165(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_165(int iParam0) //Position: 0x8DDD / 36317
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2686,198f, 32,92673f, 4252,22f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,059351f, -2,488272f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_166(bool bParam0) //Position: 0x8E47 / 36423
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2686,344f, 32,90821f, 4251,939f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,314003f, -1,549275f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_167(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8EB1 / 36529
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_168(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_168(var uParam0, char* cParam1) //Position: 0x8F31 / 36657
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_170(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_169(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_169(int iParam0) //Position: 0x8F9D / 36765
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 792,6249f, 79,85516f, 1252,059f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,06254f, 0,304932f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_170(bool bParam0) //Position: 0x9007 / 36871
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 792,5955f, 80,12923f, 1252,088f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,114017f, -1,37546f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_171(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9071 / 36977
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_172(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_172(var uParam0, char* cParam1) //Position: 0x90F1 / 37105
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_174(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_173(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_173(int iParam0) //Position: 0x915D / 37213
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54,45026f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2164,691f, 17,65717f, 2608,284f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,029581f, 1,729471f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_174(int iParam0) //Position: 0x91C7 / 37319
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 48,26846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2162,461f, 17,90104f, 2608,195f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,502309f, 1,032155f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9231 / 37425
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_176(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_176(int iParam0) //Position: 0x92AF / 37551
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_179(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_178(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_177(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_177(int iParam0) //Position: 0x9318 / 37656
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -821,4233f, 94,62658f, 2416,133f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,067727f, 3,024179f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_178(int iParam0) //Position: 0x9382 / 37762
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822,0323f, 97,13247f, 2418,075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,200845f, 2,875035f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_179(int iParam0) //Position: 0x93EC / 37868
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822,0323f, 97,13247f, 2418,075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,200845f, 2,875035f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9456 / 37974
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_181(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_181(int iParam0) //Position: 0x94D4 / 38100
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_184(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_183(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_182(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_182(int iParam0) //Position: 0x953D / 38205
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2674,524f, 32,73464f, 4254,771f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,000952f, -0,990258f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_183(int iParam0) //Position: 0x95A7 / 38311
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2676,129f, 33,07767f, 4255,418f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,413944f, -1,379618f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_184(int iParam0) //Position: 0x9611 / 38417
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2676,129f, 33,07767f, 4255,418f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,413944f, -1,379618f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x967B / 38523
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_186(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_186(int iParam0) //Position: 0x96F9 / 38649
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_189(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_188(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_187(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_187(int iParam0) //Position: 0x9762 / 38754
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 748,9062f, 81,73605f, 1234,963f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,257523f, -1,606308f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_188(int iParam0) //Position: 0x97CC / 38860
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 751,9528f, 83,93945f, 1234,901f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,150277f, -1,565241f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_189(int iParam0) //Position: 0x9836 / 38966
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 751,9528f, 83,93945f, 1234,901f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,150277f, -1,565241f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x98A0 / 39072
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_191(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_191(int iParam0) //Position: 0x991E / 39198
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_194(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_193(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_192(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_192(int iParam0) //Position: 0x9987 / 39303
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,12474f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2099,827f, 17,38087f, 2604,925f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,030594f, -1,801368f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_193(int iParam0) //Position: 0x99F1 / 39409
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2095,281f, 19,51133f, 2602,912f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,193957f, -2,376076f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_194(bool bParam0) //Position: 0x9A5B / 39515
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2095,281f, 19,51134f, 2602,913f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,193962f, -2,376065f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_195(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9AC5 / 39621
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_196(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_196(var uParam0, int iParam1) //Position: 0x9B39 / 39737
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_197(&iVar0, iParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0x9B59 / 39769
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,3f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 2800.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2,556153f, 1,335263f, -0,635139f, -4,660204f, -90,73022f, 2,7E-05f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,098891f, 1,118835f, -0,601317f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_198(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x9BEE / 39918
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "locAttackEnd1", 3, 1);
	}
	Function_199(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 3,5f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_199(var uParam0, var uParam1, int iParam2) //Position: 0x9C6F / 40047
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_202(&iVar0, iParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_201(&iVar0, iParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_200(&iVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3.0f, 2);
	return;
}

void Function_200(var uParam0, bool bParam1) //Position: 0x9CCC / 40140
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,984598f, 1,751382f, 3,841003f, -3,190401f, -10,46822f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,251156f, 1,526337f, -0,132944f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_201(var uParam0, bool bParam1) //Position: 0x9D51 / 40273
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,407119f, 0,716825f, 4,948927f, 0,589058f, 32,04071f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1,210278f, 0,767547f, 0,766793f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_202(var uParam0, bool bParam1) //Position: 0x9DD6 / 40406
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,258072f, 0,525107f, 3,572455f, -5,64203f, 24,82975f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,33126f, 0,151176f, 0,136963f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_203(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9E5B / 40539
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "wagonPassengerThx", 4, 1);
	}
	Function_204(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_204(var uParam0, int iParam1) //Position: 0x9EDA / 40666
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_208(&iVar0, iParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_207(&iVar0, iParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_206(&iVar0, iParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_205(&iVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3,5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 5.0f, 3);
	return;
}

void Function_205(var uParam0, bool bParam1) //Position: 0x9F57 / 40791
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,845357f, 3,854301f, 0,253096f, -28,59214f, 52,87982f, 0,06165f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,953756f, 2,628656f, -1,107103f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_206(var uParam0, bool bParam1) //Position: 0x9FE0 / 40928
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2,94109f, 1,784494f, -0,938111f, 18,55518f, -86,90154f, -0,005787f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,894216f, 2,476595f, -1,048975f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_207(var uParam0, bool bParam1) //Position: 0xA069 / 41065
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2,981397f, 1,783026f, -0,065402f, -2,721607f, -95,76204f, 0,009683f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,051467f, 1,643226f, 0,240611f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_208(var uParam0, bool bParam1) //Position: 0xA0F2 / 41202
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3,254722f, 1,778463f, 2,641411f, -2,721607f, -95,76204f, 0,009683f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,221859f, 1,638663f, 2,947425f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_209(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA17B / 41339
{
	struct<8> Var0;
	
	Function_210(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutscTargets") };
		iParam0->f_540 = CREATE_OBJECTSET_IN_LAYOUT(&Var0, iParam0->f_28, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam1, iParam0->f_540);
	}
	if (IS_OBJECT_VALID(bParam2))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam2, iParam0->f_540);
	}
	if (IS_OBJECT_VALID(bParam3))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam3, iParam0->f_540);
	}
	return 1;
}

void Function_210(int iParam0) //Position: 0xA1FE / 41470
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_211(bool bParam0, int iParam1) //Position: 0xA273 / 41587
{
	bParam0->f_536 = iParam1;
	return;
}

void Function_212(bool bParam0, vector3 vParam1) //Position: 0xA280 / 41600
{
	*(bParam0 + 544) = { StackVal, StackVal, vParam1 };
}

void Function_213() //Position: 0xA293 / 41619
{
	int iVar0;
	
	if (iLocal_267 == 1)
	{
		return;
	}
	Function_460(0);
	Function_309(13, 1);
	Function_309(65, 1);
	Function_301();
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_30[iVar0]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_30[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_238 == 2)
	{
		Global_26303.f_28 = 4294967295;
		Function_253(&Local_355, 2);
		if ((*&Global_26401 + 16)[0] >= 0)
		{
			(*&Global_26401 + 16)[0] = 0;
			Function_252("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if ((*&Global_26401 + 16)[1] >= 0)
		{
			(*&Global_26401 + 16)[1] = 0;
			Function_252("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		Function_249(Function_250(Global_26303.f_20));
	}
	else if (iLocal_238 == 3)
	{
		Global_26303.f_28 = 4294967295;
		Function_253(&Local_355, 3);
		if (iLocal_252 == 1)
		{
			Function_245(0, 0, 1);
			Function_245(1, 0, 1);
		}
		else
		{
			Function_245(0, 1, 1);
			Function_245(1, 1, 1);
		}
	}
	else
	{
		iLocal_238 = 4;
		Function_253(&Local_355, iLocal_238);
		Function_245(0, 1, 1);
		Function_245(1, 1, 1);
	}
	Function_242();
	CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
	APPEND_JOURNAL_ENTRY(Global_26303.f_36, 1);
	Function_214(&Local_355);
	Function_460(0);
	iLocal_267 = 1;
	return;
}

void Function_214(int iParam0) //Position: 0xA3E2 / 41954
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (iParam0->f_532 == 5)
	{
		if (Function_543(iParam0->f_584, 32768))
		{
			Function_75(256);
		}
	}
	Function_241();
	Function_14(1);
	if (Function_543(iParam0->f_584, 32))
	{
		if (Function_53(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_230(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_227(iParam0->f_624);
					break;
				
				default:
					Function_220(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_215(iParam0, 0);
	}
	if (IS_VOLUME_VALID(iParam0->f_504))
	{
		DESTROY_VOLUME(iParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		DESTROY_OBJECTSET(iParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(iParam0->f_28);
		DESTROY_LAYOUT(iParam0->f_28);
	}
	if (Function_543(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_543(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_215(int iParam0, bool bParam1) //Position: 0xA53F / 42303
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_12(iParam0->f_568);
		Function_218(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_217(iParam0->f_568);
			Function_12(iParam0->f_568);
			Function_216(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_218(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_216(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xA5A4 / 42404
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_217(bool bParam0) //Position: 0xA612 / 42514
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_218(var uParam0, bool bParam1, bool bParam2) //Position: 0xA647 / 42567
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_219(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_219(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA6C3 / 42691
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_220(bool bParam0) //Position: 0xA6DD / 42717
{
	int iVar0;
	
	if (!Function_53(bParam0))
	{
		Function_225();
		return;
	}
	iVar0 = Function_224(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_221("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_221(char* cParam0, bool bParam1) //Position: 0xA730 / 42800
{
	struct<4> Var0;
	
	if (!Function_53(bParam1))
	{
		return;
	}
	switch (Function_224(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_222(Function_223(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_224(bParam1), Function_223(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_224(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_222(int iParam0) //Position: 0xA854 / 43092
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_223(bool bParam0) //Position: 0xA879 / 43129
{
	if (!Function_55(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_224(bool bParam0) //Position: 0xA899 / 43161
{
	if (!Function_55(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_225() //Position: 0xA8B4 / 43188
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
			Function_226(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_226(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAAFB / 43771
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_227(bool bParam0) //Position: 0xAB24 / 43812
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_53(bParam0))
	{
		return;
	}
	iVar0 = Function_224(bParam0);
	if (StackVal == 2)
	{
		Function_221("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_229(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_228(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_228(int iParam0) //Position: 0xABCA / 43978
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_229(char* cParam0) //Position: 0xABF4 / 44020
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

void Function_230(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAE4A / 44618
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_53(bParam0))
	{
		Function_225();
		return;
	}
	iVar0 = Function_224(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_223(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_229(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_228(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_235();
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
		Function_221("DEED_COMPLETE", bParam0);
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
			Function_232(bParam0);
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
						switch (Function_223(bParam0))
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
			Function_523(1);
			Function_522(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_231(bParam0, &Var14);
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

void Function_231(int iParam0, int iParam1) //Position: 0xB05C / 45148
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_232(bool bParam0) //Position: 0xB096 / 45206
{
	int iVar0;
	int iVar1;
	
	if (!Function_55(bParam0))
	{
		return;
	}
	switch (Function_224(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_223(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_81(12, 1, 0, 0);
				Function_234(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_81(13, 1, 0, 0);
				Function_234(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_81(14, 1, 0, 0);
				Function_234(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_81(15, 1, 0, 0);
				Function_234(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_81(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_223(bParam0))
			{
				case 0x00000000:
					if (Function_233(bParam0) == 1)
					{
						iVar0 = Function_547(bParam0);
						if (Function_559(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_234(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_234(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_234(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_234(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_234(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_234(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_234(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_234(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_234(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_234(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_234(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_234(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_234(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_234(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_234(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_234(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_234(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_234(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_234(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_234(4, 19);
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
								Function_81(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_81(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_81(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_547(bParam0) == 0)
			{
				if (Function_233(bParam0) == 1)
				{
					Function_81(458, 1, 0, 0);
					iVar0 = Function_223(bParam0);
					if (Function_559(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_234(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_234(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_234(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_234(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_234(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_234(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_234(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_234(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_233(bParam0) == 1)
			{
				Function_81(400, 1, 0, 0);
			}
			switch (Function_223(bParam0))
			{
				case 0x00000001:
					Function_81(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_234(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_234(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_234(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_81(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_234(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_234(6, 9);
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

int Function_233(bool bParam0) //Position: 0xB572 / 46450
{
	if (!Function_55(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xB58C / 46476
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

void Function_235() //Position: 0xB5F3 / 46579
{
	int iVar0;
	int iVar1;
	
	if (!Function_57(Global_6269))
	{
		return;
	}
	iVar0 = Function_240(24);
	iVar1 = Function_56(Global_6269);
	if (!Function_57(iVar0) && Function_239(iVar1) < 0)
	{
		Function_238(24, Global_6269, 0);
		Function_236(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_239(Function_56(iVar0)))
	{
		Function_238(24, Global_6269, 0);
		Function_236(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_236(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xB673 / 46707
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
		Function_237(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_237(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xB9C5 / 47557
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_238(int iParam0, bool bParam1, bool bParam2) //Position: 0xBA48 / 47688
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
		Function_94(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_93(iParam0);
	if (bParam2)
	{
		Function_82(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_239(int iParam0) //Position: 0xBCE3 / 48355
{
	if (!Function_53(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_240(bool bParam0) //Position: 0xBCFD / 48381
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

void Function_241() //Position: 0xBD3E / 48446
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_242() //Position: 0xBD52 / 48466
{
	int iVar0;
	
	Global_26960 = Function_243(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_243(int iParam0) //Position: 0xBDA0 / 48544
{
	if (!Function_244(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_244(int iParam0) //Position: 0xBDB8 / 48568
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_245(int iParam0, bool bParam1, bool bParam2) //Position: 0xBDCD / 48589
{
	if ((*&Global_26401 + 16)[iParam0] >= 0)
	{
		Function_248(iParam0, (*&Global_26401 + 16)[iParam0]);
		(*&Global_26401 + 16)[iParam0] = 0;
		if (bParam2)
		{
			Function_246(iParam0, 0, 0, Function_67(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_252("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_246(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xBE36 / 48694
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_247((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_247(bool bParam0) //Position: 0xBE7C / 48764
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_248(int iParam0, bool bParam1) //Position: 0xBEA1 / 48801
{
	if (!Function_244(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_81((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_81(222, bParam1, 0, 0);
	return;
}

void Function_249(bool bParam0) //Position: 0xBEE6 / 48870
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		Global_26303 = (Global_26303 || bVar1);
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		Global_26303.f_4 = (StackVal || bVar1);
	}
	return;
}

var Function_250(int iParam0) //Position: 0xBF24 / 48932
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar12 = 0;
	while (iVar12 <= 45)
	{
		if (Function_251(&Var1, iVar12) == 1)
		{
			if (iParam0 == Var1.f_20)
			{
				iVar0 = iVar12;
				iVar12 = 45;
			}
		}
		iVar12++;
	}
	return iVar0;
}

bool Function_251(var uParam0, int iParam1) //Position: 0xBF5E / 48990
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void Function_252(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC769 / 51049
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_253(bool bParam0, int iParam1) //Position: 0xC7B4 / 51124
{
	int iVar0;
	
	if (bParam0->f_620 != 0 && iParam1 != 1)
	{
		bParam0->f_620 = iParam1;
	}
	else if (bParam0->f_620 == 1)
	{
		bParam0->f_620 = iParam1;
		if (bParam0->f_488 != 4294967295)
		{
			if (bParam0->f_620 == 2)
			{
				iVar0 = Function_300(bParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_299(bParam0) != 1)
				{
					Function_279(bParam0->f_488, iVar0, 1);
				}
				if (bParam0->f_484 != 1 || bParam0->f_484 != 0)
				{
					Function_276(200, 1, 0);
				}
				else
				{
					Function_257(50, 1, 0);
				}
				if (bParam0->f_332 > 0)
				{
					Function_256(bParam0->f_332, 1);
				}
				else
				{
					Function_254(bParam0->f_332, 1);
				}
			}
			else if (bParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_254(bool bParam0, bool bParam1) //Position: 0xC889 / 51337
{
	bool bVar0;
	
	bVar0 = Function_240(0);
	if ((Function_240(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_255(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_240(0));
	return 1;
}

int Function_255(int iParam0, bool bParam1, int iParam2) //Position: 0xC919 / 51481
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
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_82(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_256(bool bParam0, bool bParam1) //Position: 0xCB14 / 51988
{
	bool bVar0;
	
	bVar0 = Function_240(0);
	if ((Function_240(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_81(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_240(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_81(597, bParam0, 0, 0);
	}
	if ((Function_240(597) + Function_240(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_257(int iParam0, bool bParam1, bool bParam2) //Position: 0xCBDF / 52191
{
	int iVar0;
	bool bVar1;
	
	if (Function_275(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_240(3);
	Function_272();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_270(3, bVar1);
		if (!bParam2)
		{
			if (!Function_269(Global_76848, 4))
			{
				Function_264(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_81(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_91(3));
	iVar0 = Function_240(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_259(4, Function_263(Global_12976.f_156), 1);
				Function_258(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_259(4, Function_263(Global_12976.f_156), 1);
				Function_258(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_259(4, Function_263(Global_12976.f_156), 1);
				Function_258(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_259(4, Function_263(Global_12976.f_156), 1);
				Function_258(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_259(4, Function_263(Global_12976.f_156), 1);
				Function_258(Global_12976.f_152, Global_12976.f_156);
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

void Function_258(int iParam0, int iParam1) //Position: 0xCDA2 / 52642
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

int Function_259(int iParam0, char* cParam1, bool bParam2) //Position: 0xD000 / 53248
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
	Function_236(iParam0, cParam1, 0, 1);
	iVar1 = Function_260();
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

int Function_260() //Position: 0xD185 / 53637
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
	Function_261();
	return 0;
}

void Function_261() //Position: 0xD224 / 53796
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
		Function_262(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_262(int iParam0) //Position: 0xD2D3 / 53971
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

var Function_263(int iParam0) //Position: 0xD331 / 54065
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

void Function_264(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD3C0 / 54208
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_266(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_265(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_265(char* cParam0, int iParam1) //Position: 0xD42C / 54316
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

bool Function_266(bool bParam0, var uParam1, int iParam2) //Position: 0xD463 / 54371
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
		if (Function_268(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_267(uVar0))
		{
			case 0x00000002:
				if (!Function_269(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_267(char* cParam0) //Position: 0xD4DB / 54491
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

int Function_268(int iParam0) //Position: 0xD57C / 54652
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_3(&iVar1, 2147483648);
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

bool Function_269(var uParam0, int iParam1) //Position: 0xD5B9 / 54713
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_270(int iParam0, bool bParam1) //Position: 0xD5CC / 54732
{
	bool bVar0;
	int iVar1;
	
	Function_81(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_260();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_271(int iParam0, int iParam1) //Position: 0xD769 / 55145
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

void Function_272() //Position: 0xD7AA / 55210
{
	Function_274(3, 0.0f);
	Function_273(3, 10000.0f);
	return;
}

int Function_273(int iParam0, int iParam1) //Position: 0xD7C0 / 55232
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_274(int iParam0, int iParam1) //Position: 0xD800 / 55296
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_275(int iParam0) //Position: 0xD840 / 55360
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_276(int iParam0, bool bParam1, bool bParam2) //Position: 0xD84F / 55375
{
	int iVar0;
	bool bVar1;
	
	if (Function_275(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_240(1);
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
			Function_270(1, bVar1);
			if (!bParam2)
			{
				if (!Function_269(Global_76848, 1))
				{
					Function_264(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_278(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_269(Global_76848, 2))
				{
					Function_264(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_81(1, bVar1, 0, 0);
	}
	else
	{
		Function_255(1, (4294967295 * bVar1), 0);
	}
	if (Function_240(1) <= 4294962296)
	{
		Function_238(1, 4294962296, 0);
	}
	else if (Function_240(1) >= 5000)
	{
		Function_238(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_91(1));
	iVar0 = Function_240(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_259(2, Function_277(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_259(2, Function_277(Global_12976.f_152), 0);
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
				Function_259(2, Function_277(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_259(2, Function_277(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_259(2, Function_277(Global_12976.f_152), 1);
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
				Function_259(2, Function_277(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_259(2, Function_277(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_259(2, Function_277(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_259(2, Function_277(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_259(2, Function_277(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_259(2, Function_277(Global_12976.f_152), 1);
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
				Function_259(2, Function_277(Global_12976.f_152), 0);
			}
			break;
	}
	Function_258(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_277(int iParam0) //Position: 0xDB64 / 56164
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

int Function_278(int iParam0, bool bParam1) //Position: 0xDC07 / 56327
{
	bool bVar0;
	int iVar1;
	
	Function_255(iParam0, bParam1, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_260();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_279(int iParam0, char* cParam1, bool bParam2) //Position: 0xDDA3 / 56739
{
	char* cVar0[32];
	
	if (!Function_298(3))
	{
		return;
	}
	if (Function_45())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3())
						{
							Function_280(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_280(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_280(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3())
					{
						Function_280(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_280(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_280(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_280(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_280(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xDEB0 / 57008
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_297(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_298(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_296(bParam0, 2))
	{
		Function_81(456, 1, 0, 0);
		Function_295(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_252(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_294(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_295(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_544(0, 0, 1, 1))
			{
				Function_523(1);
				Function_522(1, 0);
			}
			else
			{
				Function_293();
			}
		}
		Function_288(bParam0);
		if (StackVal && !Function_543(((((!Function_287() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_543((((Function_287() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_269(Global_76846, 2))
		{
			Function_264(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_282();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_281(3, bParam1);
				break;
			
			case 0x00000005:
				Function_281(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_281(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_281(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_281(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_281(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_234(2, 24);
				break;
			
			case 0x00000003:
				Function_234(2, 25);
				break;
			
			case 0x0000000F:
				Function_234(2, 26);
				break;
			
			case 0x0000000D:
				Function_234(2, 27);
				break;
			
			case 0x0000000E:
				Function_234(2, 28);
				break;
			}
	}
}

void Function_281(int iParam0, bool bParam1) //Position: 0xE13F / 57663
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

void Function_282() //Position: 0xE19E / 57758
{
	if (Function_297(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_286(Global_28180);
			Global_28180.f_8 = Function_283(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_286(Global_28180);
			Global_28180.f_8 = Function_283(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_283(int iParam0, int iParam1) //Position: 0xE219 / 57881
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
					if (Function_285(6, 0) || Function_285(12, 0))
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
					if (Function_284(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_285(5, 0))
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
					if (Function_284(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_284(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_284(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_284(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_285(26, 0))
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
					if (Function_284(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_284(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_284(27) && iVar18)
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
					if (Function_284(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_284(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_284(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_284(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_285(17, 0) && iVar15)
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
					if (Function_284(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_285(6, 0) && Function_284(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_284(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_285(9, 0) && Function_284(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_284(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_285(8, 0) && iVar19)
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
	if (Function_432(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_432(StackVal, StackVal, vVar3))
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
	if (!Function_432(StackVal, StackVal, vVar3))
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

int Function_284(int iParam0) //Position: 0xEE0A / 60938
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_285(int iParam0, bool bParam1) //Position: 0xEE1F / 60959
{
	int iVar0;
	
	iVar0 = Function_56(iParam0);
	if (!Function_55(iVar0))
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

int Function_286(int iParam0) //Position: 0xEE5C / 61020
{
	int iVar0;
	int iVar1;
	
	if (!Function_297(iParam0))
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

bool Function_287() //Position: 0xEEAB / 61099
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_288(bool bParam0) //Position: 0xEED8 / 61144
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
			if (Function_294(bParam0, Function_292(bVar24)))
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
			if (Function_294(bParam0, Function_292(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_291(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_290(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_289(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_289(int iParam0) //Position: 0xF088 / 61576
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_297(iParam0))
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

void Function_290(bool bParam0, bool bParam1) //Position: 0xF0DF / 61663
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

var Function_291(int iParam0) //Position: 0xF104 / 61700
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_297(iParam0))
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

int Function_292(bool bParam0) //Position: 0xF15A / 61786
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_293() //Position: 0xF166 / 61798
{
	return;
}

bool Function_294(bool bParam0, int iParam1) //Position: 0xF16C / 61804
{
	int iVar0;
	
	if (!Function_297(bParam0))
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

void Function_295(int iParam0, int iParam1) //Position: 0xF1CB / 61899
{
	if (!Function_297(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_296(int iParam0, int iParam1) //Position: 0xF220 / 61984
{
	int iVar0;
	
	if (!Function_297(iParam0))
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

bool Function_297(int iParam0) //Position: 0xF24D / 62029
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_298(int iParam0) //Position: 0xF263 / 62051
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_299(int iParam0) //Position: 0xF27F / 62079
{
	return !Function_543(iParam0->f_584, 16384);
}

var Function_300(var uParam0) //Position: 0xF291 / 62097
{
	return uParam0->f_492;
}

void Function_301() //Position: 0xF29C / 62108
{
	bool bVar0;
	int iVar1;
	
	if (iLocal_238 == 2)
	{
		Function_308(&Local_355);
		if (iLocal_269 == 1)
		{
			Function_270(358, 1);
			iVar1 = Function_307(&Global_26303, 0);
		}
		else
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(19))
			{
				AWARD_ACHIEVEMENT(19);
			}
			Function_270(359, 1);
			iVar1 = Function_307(&Global_26303, 1);
		}
		if (Global_26303.f_20 == 787)
		{
			if (Function_306(2) && !Function_305(2))
			{
				Function_280(2, 4, 0, 0, 0);
			}
		}
		if (Function_243(StackVal) < 0 && Global_63096 != 0)
		{
			Function_252("npm_bh_bpd", 0x41200000, 1, 0, 2, 1, 0);
		}
		bVar0 = (Function_243(StackVal) - iVar1 * 2);
		if (bVar0 <= 0)
		{
			Function_303(StackVal, 0);
			Function_302(&Local_355, FLOOR((IntToFloat(ABS(bVar0)) / 2.0f)));
		}
		else
		{
			Function_303(StackVal, bVar0);
		}
	}
	if (iLocal_265 == 1)
	{
		Function_77(1.0f);
	}
	return;
}

void Function_302(bool bParam0, bool bParam1) //Position: 0xF37C / 62332
{
	bParam0->f_332 = (bParam0->f_332 + bParam1);
	return;
}

void Function_303(int iParam0, bool bParam1) //Position: 0xF38F / 62351
{
	if (!Function_244(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_304((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_304(222, TO_FLOAT((Function_240(223) + Function_240(224))), 0);
	return;
}

int Function_304(int iParam0, bool bParam1, bool bParam2) //Position: 0xF3D0 / 62416
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_94(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_93(iParam0);
	if (bParam2)
	{
		Function_82(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_305(int iParam0) //Position: 0xF63C / 63036
{
	if (!Function_297(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_296(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int Function_306(int iParam0) //Position: 0xF68D / 63117
{
	if (!Function_297(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_296(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

var Function_307(var uParam0, bool bParam1) //Position: 0xF6DF / 63199
{
	bool bVar0;
	char* cVar1[32];
	
	switch (uParam0->f_12)
	{
		case 0x00000001:
			if (bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
		
		case 0x00000000:
		case 0x00000002:
			if (bParam1)
			{
				bVar0 = 80;
			}
			else
			{
				bVar0 = 40;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				bVar0 = 120;
			}
			else
			{
				bVar0 = 60;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				bVar0 = 200;
			}
			else
			{
				bVar0 = 100;
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				bVar0 = 300;
			}
			else
			{
				bVar0 = 150;
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				bVar0 = 400;
			}
			else
			{
				bVar0 = 200;
			}
			break;
		
		default:
			if (bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
			if (bParam1 == 1)
			{
				strcpy(&cVar1, "Bounty Alive reward: ", 32);
			}
			else
			{
				strcpy(&cVar1, "Bounty Dead reward: ", 32);
			}
			stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	}
	if (Function_49() > 4)
	{
		bVar0 *= 2;
	}
	return bVar0;
}

void Function_308(bool bParam0) //Position: 0xF7F7 / 63479
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (bParam0->f_336 - 1))
	{
		strcpy(bParam0 + 336[iVar04], "", 16);
		(*bParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_480 = 0;
	return;
}

int Function_309(bool bParam0, bool bParam1) //Position: 0xF833 / 63539
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_486(bParam0), Function_19()) >= 0)
		{
			DELETE_ITEM(Function_486(bParam0), Function_19(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_486(bParam0), Function_19(), 1);
	return 1;
}

void Function_310(bool bParam0) //Position: 0xF87A / 63610
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_311(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xF904 / 63748
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

bool Function_312(struct<51> Param0) //Position: 0xF957 / 63831
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	var uVar18;
	float fVar19;
	bool bVar20;
	int iVar21;
	var uVar22;
	vector3 vVar28;
	vector3 vVar31;
	var uVar34;
	
	fVar19 = -1.0f;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	if (!IS_LAYOUTREF_VALID(bLocal_353))
	{
	}
	if (iLocal_174 <= 5)
	{
		if (Function_405())
		{
			if (iLocal_174 <= 4)
			{
				Function_505(4);
			}
			if (!Function_505(5))
			{
			}
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < (bLocal_168 - 1))
		{
			if (IS_ACTOR_VALID(bLocal_30[iVar0]))
			{
				if (IS_ACTOR_DRUNK(bLocal_30[iVar0]))
				{
					SET_ACTOR_DRUNK(bLocal_30[iVar0], 0);
				}
				if (((Function_402(bLocal_30[iVar0], &uVar18, &fVar19, 0, 0, 0x40400000) || GET_LAST_ATTACK_TARGET(bLocal_30[iVar0]) != Global_34573) || AI_IS_AGGROING(bLocal_30[iVar0], Global_34573)) || AI_IS_HOSTILE_OR_ENEMY(bLocal_30[iVar0], Global_34573))
				{
					if (!Function_505(5))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_30[iVar0]))
		{
			if (IS_ACTOR_ALIVE(bLocal_30[iVar0]))
			{
				GET_POSITION(bLocal_30[iVar0], &vVar8);
				if (iLocal_174 > 5)
				{
					if (iVar0 == 0)
					{
						if (Function_401(StackVal, StackVal, vVar8) == 1)
						{
							Function_505(6);
						}
						Function_400(StackVal, StackVal, vVar8);
					}
				}
				if (IS_ACTOR_VALID(bLocal_30[iVar0]))
				{
					bVar14 = Function_399(bLocal_30[iVar0]);
					bVar16 = GET_ACTORS_HORSE(bLocal_30[iVar0]);
				}
				switch (bVar14)
				{
					case 0x00000000:
						if (Function_398(bLocal_30[iVar0]))
						{
							Function_397(bLocal_30[iVar0], 7);
						}
						else
						{
							Function_397(bLocal_30[iVar0], 1);
						}
						break;
					
					case 0x00000006:
					case 0x00000002:
						break;
					
					case 0x00000003:
						if (iVar0 == 0)
						{
							TASK_CLEAR(bLocal_30[iVar0]);
							TASK_FACE_ACTOR(bLocal_30[iVar0], Global_34573, 0, 30.0f);
							Function_397(bLocal_30[iVar0], 4);
						}
						else
						{
							TASK_CLEAR(bLocal_30[iVar0]);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_30[iVar0], GET_OBJECT_FROM_ACTOR(Global_34573), 5.0f, 1);
							Function_397(bLocal_30[iVar0], 4);
						}
						break;
					
					case 0x00000004:
						break;
					
					case 0x00000005:
						break;
					
					case 0x00000007:
						if (IS_OBJECT_VALID(bVar3))
						{
							TASK_USE_GRINGO(bLocal_30[iVar0], GET_GRINGO_FROM_OBJECT(bVar3), "UseCase1", true, 1);
							TASK_PRIORITY_SET(bLocal_30[iVar0], 2);
							Function_396(bLocal_30[iVar0]);
							Function_397(bLocal_30[iVar0], 8);
						}
						else
						{
							Function_397(bLocal_30[iVar0], 1);
						}
						break;
					
					case 0x00000008:
						if (!(GET_TASK_STATUS(bLocal_30[iVar0], 19) != 3 || GET_TASK_STATUS(bLocal_30[iVar0], 19) != 1))
						{
							Function_397(bLocal_30[iVar0], 7);
						}
						break;
					
					case 0x00000001:
						TASK_CLEAR(bLocal_30[iVar0]);
						TASK_WANDER(bLocal_30[iVar0], 3212836864);
						TASK_PRIORITY_SET(bLocal_30[iVar0], 2);
						if (IS_ACTOR_VALID(bVar16))
						{
							if (!(GET_TASK_STATUS(bLocal_30[iVar0], 6) != 3 || GET_TASK_STATUS(bLocal_30[iVar0], 6) != 1))
							{
								TASK_CLEAR(bVar16);
								TASK_STAND_STILL(bVar16, -1.0f, 0, 0);
								TASK_PRIORITY_SET(bVar16, 2);
							}
						}
						Function_397(bLocal_30[iVar0], 2);
						break;
					
					case 0x0000000B:
						Function_395(bLocal_30[iVar0], 0);
						Function_397(bLocal_30[iVar0], 12);
						break;
					
					case 0x0000000C:
						if (VDIST(vVar8, Global_34574) < 37.0f && (GET_TASK_STATUS(bLocal_30[iVar0], 25) != 1 || GET_TASK_STATUS(bLocal_30[iVar0], 25) != 3))
						{
							Function_393(bLocal_30[iVar0], 0, 4, 2);
							Function_392(bLocal_30[iVar0], Global_34573);
						}
						break;
					
					case 0x00000014:
						TASK_CLEAR(bLocal_30[iVar0]);
						TASK_USE_LASSO(bLocal_30[iVar0], Global_34573, 0,5f, 5.0f, 1, 0);
						TASK_PRIORITY_SET(bLocal_30[iVar0], true);
						Function_397(bLocal_30[iVar0], 21);
						break;
					
					case 0x00000015:
						if (GET_LASSO_TARGET(bLocal_30[iVar0]) != Global_34573 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "coplasso"))
						{
							if (VDIST(vVar8, Global_34574) > 4.0f && !IS_ACTOR_HOGTIED(Global_34573))
							{
								TASK_CLEAR(bLocal_30[iVar0]);
								DETACH_LASSO(bLocal_30[iVar0]);
								HOGTIE_ACTOR(Global_34573);
								Function_472(&iLocal_192);
							}
						}
						break;
					
					case 0x00000018:
						if (IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
						{
							bVar15 = GET_MOUNT(Global_34573);
						}
						else if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(Global_34573)))
						{
							bVar15 = GET_MOST_RECENT_MOUNT(Global_34573);
						}
						if (IS_ACTOR_ALIVE(bVar15) && Function_391(bVar15, bLocal_30[iVar0]) > 20.0f)
						{
							TASK_CLEAR(bLocal_30[iVar0]);
							TASK_MOUNT(bLocal_30[iVar0], bVar15, 1, 1, 2, 2147483647);
							TASK_PRIORITY_SET(bLocal_30[iVar0], true);
							Function_397(bLocal_30[iVar0], 25);
						}
						else if (RAND_FLOAT_RANGE(0.0f, 1000.0f) < 500.0f)
						{
							Function_393(bLocal_30[iVar0], 0, 4, 0);
						}
						else
						{
							Function_393(bLocal_30[iVar0], 0, 0, 2);
						}
						break;
					
					case 0x00000019:
						if (IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
						{
							bVar15 = GET_MOUNT(Global_34573);
						}
						else if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(Global_34573)))
						{
							bVar15 = GET_MOST_RECENT_MOUNT(Global_34573);
						}
						if (IS_ACTOR_ALIVE(bVar15) && IS_ACTOR_ALIVE(GET_RIDER(bVar15)))
						{
							if (GET_RIDER(bVar15) == bLocal_30[iVar0])
							{
								Function_393(bLocal_30[iVar0], 0, 4, 0);
							}
							else if (Function_58(GET_RIDER(bVar15), bLocal_236, 1))
							{
								Function_397(bLocal_30[iVar0], 17);
							}
						}
						else
						{
							Function_393(bLocal_30[iVar0], 0, 4, 0);
						}
						break;
					
					case 0x0000000E:
						iVar1 = Function_390(StackVal, StackVal, vVar8, 30.0f);
						if (Function_398(bLocal_30[iVar0]) != 1 || iVar0 != 0)
						{
							if (bLocal_293 != Global_30723[5] || bLocal_293 != Global_30668[3])
							{
								Function_393(bLocal_30[iVar0], 1, 4, 2);
								Function_392(bLocal_30[iVar0], Global_34573);
							}
							else
							{
								Function_393(bLocal_30[iVar0], 1, 2, 2);
								Function_392(bLocal_30[iVar0], Global_34573);
							}
						}
						else
						{
							if ((bLocal_293 != Global_30723[5] || bLocal_293 != Global_30668[3]) || iVar1 > 15)
							{
								Function_393(bLocal_30[iVar0], 1, 3, 2);
							}
							else
							{
								Function_393(bLocal_30[iVar0], 1, 2, 2);
							}
							Function_392(bLocal_30[iVar0], Global_34573);
						}
						break;
					
					case 0x0000000D:
						if (IS_ACTOR_VALID(bVar16))
						{
							GET_POSITION(bVar16, &vVar5);
						}
						if (((IS_ACTOR_RIDING(bLocal_30[iVar0]) || !IS_ACTOR_ALIVE(bVar16)) || !IS_ACTOR_VALID(bVar16)) || VDIST(vVar8, vVar5) < 20.0f)
						{
							if (Function_398(bLocal_30[iVar0]) != 1 || iVar0 != 0)
							{
								Function_393(bLocal_30[iVar0], 0, 2, 2);
								Function_392(bLocal_30[iVar0], Global_34573);
							}
							else
							{
								Function_393(bLocal_30[iVar0], 1, 3, 2);
								Function_392(bLocal_30[iVar0], Global_34573);
							}
						}
						break;
					
					case 0x0000000F:
						if (iVar0 == 0)
						{
							if ((bLocal_293 != Global_30723[5] || bLocal_293 != Global_30668[3]) || IS_ACTOR_RIDING(bLocal_30[iVar0]))
							{
								Function_397(bLocal_30[iVar0], 11);
							}
							else if (VDIST(vVar8, Global_34574) > 50.0f && Function_389(bLocal_236) >= 3)
							{
								Function_397(bLocal_30[iVar0], 11);
							}
						}
						break;
					
					case 0x00000012:
						Function_393(bLocal_30[iVar0], 1, 4, 1);
						Function_392(bLocal_30[iVar0], Global_34573);
						Function_397(bLocal_30[iVar0], 19);
						break;
					
					case 0x00000013:
						break;
					
					case 0x00000011:
						if (iVar0 == 0)
						{
							Function_386();
						}
						GET_POSITION(bVar16, &vVar5);
						if (((IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_RIDING(bLocal_30[iVar0])) && IS_ACTOR_ALIVE(bVar16)) || (IS_ACTOR_ALIVE(bVar16) && iVar0 != 0))
						{
							GET_POSITION(bVar16, &vVar5);
							MEMORY_PREFER_RIDING(bLocal_30[iVar0], false);
							TASK_CLEAR(bVar16);
							TASK_STAND_STILL(bVar16, -1.0f, 0, 0);
							TASK_PRIORITY_SET(bVar16, false);
							TASK_CLEAR(bLocal_30[iVar0]);
							TASK_MOUNT(bLocal_30[iVar0], bVar16, 0, 1, 2, 2147483647);
							TASK_PRIORITY_SET(bLocal_30[iVar0], false);
							Function_397(bLocal_30[iVar0], 16);
						}
						else
						{
							TASK_CLEAR(bLocal_30[iVar0]);
							Function_395(bLocal_30[iVar0], 0);
							Function_397(bLocal_30[iVar0], 26);
						}
						break;
					
					case 0x00000010:
						if (IS_ACTOR_VALID(bVar16))
						{
							GET_POSITION(bVar16, &vVar5);
						}
						if (((IS_ACTOR_RIDING(bLocal_30[iVar0]) || !IS_ACTOR_ALIVE(bVar16)) || !IS_ACTOR_VALID(bVar16)) || VDIST(vVar8, vVar5) < 20.0f)
						{
							TASK_CLEAR(bLocal_30[iVar0]);
							Function_395(bLocal_30[iVar0], 0);
							Function_397(bLocal_30[iVar0], 26);
						}
						break;
					
					case 0x0000001A:
						if (iVar0 == 0)
						{
							if (GET_TASK_STATUS(bLocal_30[iVar0], 25) != 0 || GET_TASK_STATUS(bLocal_30[iVar0], 25) != 4)
							{
								Function_395(bLocal_30[iVar0], 0);
							}
							GET_ACTOR_VELOCITY(bLocal_30[iVar0], &vVar5);
							if (VMAG(vVar5) < 0,5f)
							{
								Function_472(&iLocal_216);
							}
							else if (Function_471(&iLocal_216, 4.0f))
							{
								Function_395(bLocal_30[iVar0], 0);
							}
						}
						break;
				}
			}
			else if (!Function_399(bLocal_30[iVar0]) != 28)
			{
				if (IS_ACTOR_VALID(bLocal_30[iVar0]))
				{
					SQUAD_LEAVE(bLocal_30[iVar0]);
				}
				if (iVar0 == 0 && Function_399(bLocal_30[iVar0]) == 28)
				{
					RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
					fVar17 = (RAND_FLOAT_RANGE(0.0f, 100.0f) / 100.0f);
					if (IS_ACTOR_VALID(bLocal_30[0]) && IS_ACTOR_ALIVE(bLocal_30[0]))
					{
						if (SQUAD_GET_SIZE(bLocal_236) < 1)
						{
							if (Function_385())
							{
								if (!((Function_399(bLocal_30[0]) != 17 || Function_399(bLocal_30[0]) != 16) || Function_399(bLocal_30[0]) != 26))
								{
									Function_397(bLocal_30[0], 17);
								}
							}
							else if (!(Function_399(bLocal_30[0]) != 18 || Function_399(bLocal_30[0]) != 19))
							{
								Function_397(bLocal_30[0], 18);
							}
							MEMORY_ALLOW_TAKE_COVER(bLocal_30[0], 0);
						}
						else if ((SQUAD_GET_SIZE(bLocal_236) >= 3 && fVar17 < 0,7f) && !((Function_399(bLocal_30[0]) != 17 || Function_399(bLocal_30[0]) != 16) || Function_399(bLocal_30[0]) != 26))
						{
							Function_397(bLocal_30[0], 17);
						}
					}
				}
				Function_397(bLocal_30[iVar0], 28);
			}
		}
		iVar0++;
	}
	if (Global_3386 != 1 && iLocal_274 != 1)
	{
		bVar20 = Function_383(&Local_296);
		if (SQUAD_IS_VALID(bVar20))
		{
			if (SQUAD_GET_SIZE(bVar20) >= 0)
			{
				Function_381(&Local_296, Global_34573);
			}
		}
	}
	if (iLocal_174 > 5)
	{
		iVar0 = 0;
		while (iVar0 < (bLocal_168 - 1))
		{
			if (iLocal_253[iVar0] == 0)
			{
				if (IS_ACTOR_HOGTIED(bLocal_30[iVar0]) == 1)
				{
					iLocal_253[iVar0] = 1;
					Function_460(1);
				}
			}
			else if (IS_ACTOR_HOGTIED(bLocal_30[iVar0]) == 0)
			{
				iLocal_253[iVar0] = 0;
				Function_460(1);
			}
			iVar0++;
		}
		if (bLocal_292 == "")
		{
			bVar4 = CREATE_OBJECT_ITERATOR(bLocal_353);
			if (IS_ITERATOR_VALID(bVar4))
			{
				ITERATE_IN_LAYOUT(bVar4, GET_GC_LAYOUT());
				ITERATE_ON_OBJECT_TYPE(bVar4, 29);
				bVar2 = START_OBJECT_ITERATOR(bVar4);
				while (IS_OBJECT_VALID(bVar2))
				{
					iVar21 = GET_PREVIOUS_ACTOR_FROM_CORPSE(bVar2);
					if (iVar21 == bLocal_30[0])
					{
						bLocal_292 = bVar2;
						REFERENCE_OBJECT(bLocal_292);
						bVar2 = "";
						Function_460(1);
					}
					else
					{
						bVar2 = OBJECT_ITERATOR_NEXT(bVar4);
					}
				}
			}
			DESTROY_ITERATOR(bVar4);
		}
		else if ((!IS_OBJECT_VALID(bLocal_292) && bLocal_292 == "") && iLocal_174 > 10)
		{
			Function_505(10);
			Function_505(8);
			Function_460(1);
		}
	}
	if (iLocal_174 != 8 || HAS_ITEM(Function_486(65), Global_34573))
	{
		if (!IS_OBJECT_VALID(bLocal_277))
		{
			Function_380();
			if (!Function_432(StackVal, StackVal, vLocal_516))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhGateway") };
				bLocal_277 = Function_379(StackVal, StackVal, bLocal_353, &Local_175, vLocal_516, 0.0f, 0.0f, 0.0f, Global_34573, (2,5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
				if (IS_OBJECT_VALID(bLocal_277))
				{
					bLocal_227 = Function_378(bLocal_277);
				}
				else
				{
					LOG_ERROR("Problem creating dropoff gateway");
				}
				Function_460(1);
			}
			else
			{
				LOG_ERROR("Invalid dropOffPos found");
			}
			Function_376();
		}
		else if (StackVal && !Function_543(Function_370(), 2048))
		{
			Function_367();
			Function_542(&Global_26303 + 8, 2048);
		}
		else if (Function_543(StackVal, 2048))
		{
			if (StackVal && !Function_543(VDIST(Global_34574, vLocal_516) > 100.0f, 512))
			{
				Function_365();
				Function_542(&Global_26303 + 8, 512);
			}
		}
	}
	if (iLocal_174 == 8)
	{
		if (Global_3407)
		{
			Function_505(13);
		}
	}
	if (Function_360())
	{
		return 0;
	}
	if (iLocal_174 == 8)
	{
		Function_314(Param0.f_36);
	}
	if (iLocal_174 == 8)
	{
		if (IS_ACTOR_VALID(bLocal_30[0]))
		{
			GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), &uVar22);
			if (GET_HOGTIED_MASTER(bLocal_30[0]) != GET_PLAYER_ACTOR(0) && IS_ACTOR_HOGTIE_ATTACHED(bLocal_30[0]) != 2)
			{
				iVar11 = 1;
			}
			if (!IS_ACTOR_VALID(GET_RIDER(GET_HOGTIED_MASTER(bLocal_30[0]))))
			{
				iVar13 = 1;
			}
			if (GET_HOGTIED_MASTER(bLocal_30[0]) != GET_MOUNT(GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(bLocal_30[0]) != 1)
			{
				iVar12 = 1;
			}
			else if (IS_ACTOR_HOGTIE_ATTACHED(bLocal_30[0]) != 1 && !GET_TASK_STATUS(GET_HOGTIED_MASTER(bLocal_30[0]), 6) != 1)
			{
				TASK_STAND_STILL(GET_HOGTIED_MASTER(bLocal_30[0]), -1.0f, 0, 0);
			}
			if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip") == 1)
			{
				if (iVar11 != 1 || iVar12 != 1)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip", false);
					Function_460(1);
				}
			}
			else if (iVar11 != 0 && iVar12 != 0)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip", true);
				Function_460(1);
			}
		}
	}
	if (IS_ACTOR_ALIVE(bLocal_30[0]))
	{
		if (GET_LASSO_TARGET(Global_34573) != bLocal_30[0] && iLocal_243 != 0)
		{
			Function_445(&Local_355, 1);
			if (IS_ACTOR_MALE(bLocal_30[0]))
			{
				Function_444(&Local_355, "pm_bh_ht", 1);
			}
			else
			{
				Function_444(&Local_355, "npm_bh_ht2", 1);
			}
			iLocal_243 = 1;
		}
		else if ((iLocal_243 != 1 && iLocal_244 != 0) && IS_ACTOR_HOGTIED(bLocal_30[0]))
		{
			Function_505(8);
			Function_445(&Local_355, 1);
			if (IS_ACTOR_MALE(bLocal_30[0]))
			{
				Function_444(&Local_355, "pm_bh_pu", 1);
			}
			else
			{
				Function_444(&Local_355, "npm_bh_pu2", 1);
			}
			iLocal_244 = 1;
			Function_472(&iLocal_198);
		}
		else if (((iLocal_244 != 1 && iLocal_245 != 0) && GET_HOGTIED_MASTER(bLocal_30[0]) != GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(bLocal_30[0]) != 2)
		{
			Function_445(&Local_355, 1);
			Function_444(&Local_355, "pm_bh_po", 1);
			iLocal_245 = 1;
		}
		else if (((GET_HOGTIED_MASTER(bLocal_30[0]) != GET_MOUNT(GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(bLocal_30[0]) != 1) && iLocal_245 != 1) && iLocal_246 != 0)
		{
			Function_445(&Local_355, 1);
			Function_444(&Local_355, "pm_bh_oh", 1);
			strcpy(&Local_175, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 32);
			Function_313(&Local_355, &Local_175, 0);
			iLocal_246 = 1;
		}
		else if (((iVar13 != 1 || iVar12 != 1) || iVar11 != 1) && Function_471(&iLocal_198, 45.0f))
		{
			SAY_SINGLE_LINE_CONTEXT(bLocal_30[0], 167, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
			Function_472(&iLocal_198);
		}
	}
	else if (IS_ACTOR_DEAD(bLocal_30[0]) || !IS_ACTOR_VALID(bLocal_30[0]))
	{
		if (iLocal_268 == 0)
		{
			if (!IS_ACTOR_ALIVE(bLocal_30[0]))
			{
				if (!Function_543(StackVal, 32))
				{
					if (IS_OBJECT_VALID(bLocal_292))
					{
						GET_OBJECT_POSITION(bLocal_292, &vVar28);
					}
					else if (!IS_ACTOR_ALIVE(bLocal_30[0]))
					{
						Function_101(bLocal_30[0], &vVar28);
					}
					else
					{
						vVar28 = { 0.0f, 0.0f, 0.0f };
					}
					if (!Function_432(StackVal, StackVal, vVar28))
					{
						vVar31 = { StackVal, StackVal, vVar28 };
						vVar28.f_4 = (vVar28.y + 5.0f);
						vVar31.f_4 = (vVar31.y - 5.0f);
						if (FIND_WATER_INTERSECTION(vVar28, vVar31, &vVar5, &uVar34))
						{
							Function_542(&Global_26303 + 8, 32);
						}
					}
				}
				if (Function_543(StackVal, 32))
				{
					Function_505(10);
					Function_505(8);
					Function_460(1);
				}
				else if ((!IS_OBJECT_VALID(bLocal_292) && iLocal_174 > 10) && bLocal_292 == "")
				{
					Function_505(10);
					Function_505(8);
					Function_460(1);
				}
				else
				{
					Function_505(9);
					Function_460(1);
				}
				iLocal_268 = 1;
			}
		}
	}
	return 1;
}

int Function_313(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1097B / 67963
{
	if (IS_STRING_VALID(cParam1))
	{
		strcpy(bParam0 + 144[06], bParam1, 24);
		(*bParam0 + 112)[0] = 1;
	}
	else
	{
		strcpy(bParam0 + 144[06], "", 24);
		(*bParam0 + 112)[0] = 0;
	}
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(bParam0 + 144[16], bParam2, 24);
		(*bParam0 + 112)[1] = 1;
	}
	else
	{
		strcpy(bParam0 + 144[16], "", 24);
		(*bParam0 + 112)[1] = 0;
	}
	return 1;
}

void Function_314(int iParam0) //Position: 0x109E6 / 68070
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	if (bLocal_352 == "")
	{
		if (Function_471(&iLocal_186, fLocal_237) && !(Global_29007 != 3 || Global_29007 != 4))
		{
			if (IS_VOLUME_VALID(bLocal_227))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bLocal_227), &vVar0);
				Function_468(StackVal, StackVal, StackVal, StackVal, vVar0, Global_34574, &vVar3);
				VNORMALIZE(&vVar3);
				bVar8 = UNK_0x9C40E671(&vVar3);
				bVar9 = (RAND_FLOAT_RANGE(-1050.0f, 1050.0f) / 10.0f);
				ROTATE_VECTOR_XZ(&vVar3, bVar9, 0);
				VSCALE(&vVar3, 100.0f);
			}
			else if (Function_385())
			{
				vVar3 = { RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f) };
			}
			else
			{
				vVar3 = { RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f) };
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(Global_34573, &vVar3, &vVar0);
			switch (Global_26303.f_12)
			{
				case 0x00000001:
					bVar6 = RAND_INT_RANGE(true, 2);
					break;
				
				case 0x00000002:
					bVar6 = RAND_INT_RANGE(2, 3);
					break;
				
				case 0x00000003:
					bVar6 = RAND_INT_RANGE(3, 3);
					break;
				
				case 0x00000004:
					bVar6 = RAND_INT_RANGE(3, 4);
					break;
				
				case 0x00000005:
					bVar6 = RAND_INT_RANGE(4, 4);
					break;
				
				default:
					bVar6 = 2;
					break;
			}
			Function_359(&Local_296, 5);
			Function_358(&Local_296, 2);
			Function_357(&Local_296, 1);
			Function_356(&Local_296, 0);
			Function_355(&Local_296, bVar6);
			Function_354(StackVal, StackVal, &Local_296, vVar0);
			Function_353(&Local_296, 1);
			Function_352(&Local_296, 0,1f, 60.0f, 15.0f);
			Function_351(&Local_296, 1);
			Function_350(&Local_296, 1);
			Function_349(&Local_296, 1);
			Function_348(&Local_296, 1, 4294967295);
			Function_347(&Local_296, 1);
			Function_346(&Local_296, 1, 4294967295, 0);
			Function_341(&Local_296, Global_34573);
			if (iParam0 == 1)
			{
				Function_340(&Local_296, 1);
			}
			if (Function_329(&Local_296))
			{
				bVar10 = 4294967295;
				if (!Function_543(StackVal, 524288))
				{
					iVar7 = 0;
					while (iVar7 < (bLocal_168 - 1))
					{
						bVar10 = Function_327(Global_26303.f_12, iLocal_220, iVar7);
						if (Function_326(bVar10) && bVar10 == 0)
						{
							Function_325(&Local_296, bVar10);
						}
						iVar7++;
					}
					Function_324(&Local_296, 1);
					Function_542(&Global_26303 + 8, 524288);
				}
				if (!Function_543(StackVal, 131072))
				{
					Function_444(&Local_355, "npm_bh_def", 1);
					Function_542(&Global_26303 + 8, 131072);
				}
				bLocal_352 = Function_322(&Local_296);
				Function_542(&Global_26303 + 8, 262144);
				if (IS_SCRIPT_VALID(bLocal_352))
				{
					Function_321();
				}
			}
			else
			{
				fLocal_237 = (fLocal_237 + 3,5f);
			}
		}
		else
		{
			Function_3(&Global_26303 + 8, 262144);
		}
	}
	else if (Function_543(StackVal, 262144))
	{
		if (IS_SCRIPT_VALID(bLocal_352))
		{
			Function_317(&Local_296);
			if (SQUAD_IS_VALID(Local_296.f_60))
			{
				Function_3(&Global_26303 + 8, 262144);
			}
		}
	}
	else if (!IS_SCRIPT_VALID(bLocal_352) && !SQUAD_IS_VALID(Local_296.f_60))
	{
		bLocal_352 = "";
		Function_321();
		Function_472(&iLocal_186);
	}
	else if (Global_29007 != 3 || Global_29007 != 4)
	{
		Function_315(&Local_296);
		Function_381(&Local_296, Global_34573);
	}
	return;
}

void Function_315(int iParam0) //Position: 0x10CF5 / 68853
{
	Function_316(iParam0);
	return;
}

void Function_316(int iParam0) //Position: 0x10D00 / 68864
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

void Function_317(int iParam0) //Position: 0x10D18 / 68888
{
	if (IS_OBJECT_VALID(Function_36(iParam0)))
	{
		Function_319(iParam0, 0);
		Function_318(iParam0, 0);
	}
	return;
}

int Function_318(int iParam0, bool bParam1) //Position: 0x10D37 / 68919
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_36(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			DECOR_SET_BOOL(bParam1, "catk_bdi", iParam0->f_172);
			DECOR_SET_FLOAT(bParam1, "catk_spx", iParam0->f_184);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spz");
			DECOR_SET_FLOAT(bParam1, "catk_scx", iParam0->f_196);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scz");
			DECOR_SET_BOOL(bParam1, "catk_krd", iParam0->f_176);
			DECOR_SET_BOOL(bParam1, "catk_krt", iParam0->f_180);
			DECOR_SET_OBJECT(bParam1, "catk_atv", iParam0->f_208);
			DECOR_SET_INT(bParam1, "catk_ats", iParam0->f_212);
			DECOR_SET_BOOL(bParam1, "catk_bus", iParam0->f_216);
			DECOR_SET_OBJECT(bParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(iParam0->f_60));
			DECOR_SET_INT(bParam1, "catk_wtm", iParam0->f_220);
			DECOR_SET_BOOL(bParam1, "catk_ovr", iParam0->f_160);
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_326((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(bParam1, &cVar5, (*iParam0 + 100)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

int Function_319(int iParam0, bool bParam1) //Position: 0x10F73 / 69491
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_320(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_36(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			iParam0->f_172 = DECOR_GET_BOOL(bParam1, "catk_bdi");
			iParam0->f_184 = DECOR_GET_FLOAT(bParam1, "catk_spx");
			(iParam0 + 184)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_spy");
			(iParam0 + 184)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_spz");
			iParam0->f_196 = DECOR_GET_FLOAT(bParam1, "catk_scx");
			(iParam0 + 196)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_scy");
			(iParam0 + 196)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_scz");
			iParam0->f_176 = DECOR_GET_BOOL(bParam1, "catk_krd");
			iParam0->f_180 = DECOR_GET_BOOL(bParam1, "catk_krt");
			iParam0->f_208 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_atv"));
			iParam0->f_212 = DECOR_GET_INT(bParam1, "catk_ats");
			iParam0->f_216 = DECOR_GET_BOOL(bParam1, "catk_bus");
			iParam0->f_60 = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_asq"));
			iParam0->f_220 = DECOR_GET_INT(bParam1, "catk_wtm");
			iParam0->f_160 = DECOR_GET_BOOL(bParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_326((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*iParam0 + 100)[bVar0] = DECOR_GET_INT(bParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

void Function_320(var uParam0) //Position: 0x111A4 / 70052
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568(&Var0), 4);
		*uParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*uParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

void Function_321() //Position: 0x11211 / 70161
{
	switch (Global_26303.f_12)
	{
		case 0x00000001:
			fLocal_237 = RAND_FLOAT_RANGE(35.0f, (35.0f + 10.0f));
			break;
		
		case 0x00000002:
			fLocal_237 = RAND_FLOAT_RANGE(30.0f, 35.0f);
			break;
		
		case 0x00000003:
			fLocal_237 = RAND_FLOAT_RANGE(25.0f, 30.0f);
			break;
		
		case 0x00000004:
			fLocal_237 = RAND_FLOAT_RANGE(20.0f, 25.0f);
			break;
		
		case 0x00000005:
			fLocal_237 = RAND_FLOAT_RANGE(15.0f, 20.0f);
			break;
		
		default:
			fLocal_237 = RAND_FLOAT_RANGE(20.0f, 25.0f);
			break;
	}
	return;
}

var Function_322(int iParam0) //Position: 0x112B1 / 70321
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_323(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_323(int iParam0) //Position: 0x11335 / 70453
{
	int iVar0;
	int iVar1;
	
	if (Function_543(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_326((*iParam0 + 100)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		iParam0->f_128 = iVar0;
	}
	else
	{
		iParam0->f_128 = iParam0->f_100;
	}
	return;
}

void Function_324(int iParam0, bool bParam1) //Position: 0x1138D / 70541
{
	if (bParam1)
	{
		Function_542(iParam0 + 92, 64);
	}
	else
	{
		Function_3(iParam0 + 92, 64);
	}
	return;
}

int Function_325(int iParam0, bool bParam1) //Position: 0x113AD / 70573
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_326(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_319(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_326((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_318(iParam0, 0);
	return 1;
}

bool Function_326(bool bParam0) //Position: 0x1147B / 70779
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_327(int iParam0, int iParam1, int iParam2) //Position: 0x11492 / 70802
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	
	iVar18 = 0;
	if (iParam1 == 4294967295)
	{
		return 472;
	}
	if (iParam1 == 0)
	{
		iParam1 = Function_328(Global_29006);
	}
	if (iParam0 == 0)
	{
		iParam0 = 3;
	}
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 467;
					iVar18++;
					iVar0[iVar18] = 468;
					iVar18++;
					iVar0[iVar18] = 469;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 477;
					iVar18++;
					iVar0[iVar18] = 478;
					iVar18++;
					iVar0[iVar18] = 479;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 486;
					iVar18++;
					iVar0[iVar18] = 487;
					iVar18++;
					iVar0[iVar18] = 488;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 496;
					iVar18++;
					iVar0[iVar18] = 497;
					iVar18++;
					iVar0[iVar18] = 498;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 505;
					iVar18++;
					iVar0[iVar18] = 506;
					iVar18++;
					iVar0[iVar18] = 507;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 516;
					iVar18++;
					iVar0[iVar18] = 517;
					iVar18++;
					iVar0[iVar18] = 518;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 397;
					iVar18++;
					iVar0[iVar18] = 398;
					iVar18++;
					iVar0[iVar18] = 399;
					iVar18++;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 467;
					iVar18++;
					iVar0[iVar18] = 468;
					iVar18++;
					iVar0[iVar18] = 469;
					iVar18++;
					iVar0[iVar18] = 467;
					iVar18++;
					iVar0[iVar18] = 468;
					iVar18++;
					iVar0[iVar18] = 469;
					iVar18++;
					iVar0[iVar18] = 470;
					iVar18++;
					iVar0[iVar18] = 471;
					iVar18++;
					iVar0[iVar18] = 472;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 477;
					iVar18++;
					iVar0[iVar18] = 478;
					iVar18++;
					iVar0[iVar18] = 479;
					iVar18++;
					iVar0[iVar18] = 477;
					iVar18++;
					iVar0[iVar18] = 478;
					iVar18++;
					iVar0[iVar18] = 479;
					iVar18++;
					iVar0[iVar18] = 480;
					iVar18++;
					iVar0[iVar18] = 481;
					iVar18++;
					iVar0[iVar18] = 482;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 486;
					iVar18++;
					iVar0[iVar18] = 487;
					iVar18++;
					iVar0[iVar18] = 488;
					iVar18++;
					iVar0[iVar18] = 486;
					iVar18++;
					iVar0[iVar18] = 487;
					iVar18++;
					iVar0[iVar18] = 488;
					iVar18++;
					iVar0[iVar18] = 489;
					iVar18++;
					iVar0[iVar18] = 490;
					iVar18++;
					iVar0[iVar18] = 491;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 496;
					iVar18++;
					iVar0[iVar18] = 497;
					iVar18++;
					iVar0[iVar18] = 498;
					iVar18++;
					iVar0[iVar18] = 496;
					iVar18++;
					iVar0[iVar18] = 497;
					iVar18++;
					iVar0[iVar18] = 498;
					iVar18++;
					iVar0[iVar18] = 499;
					iVar18++;
					iVar0[iVar18] = 500;
					iVar18++;
					iVar0[iVar18] = 501;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 505;
					iVar18++;
					iVar0[iVar18] = 506;
					iVar18++;
					iVar0[iVar18] = 507;
					iVar18++;
					iVar0[iVar18] = 505;
					iVar18++;
					iVar0[iVar18] = 506;
					iVar18++;
					iVar0[iVar18] = 507;
					iVar18++;
					iVar0[iVar18] = 508;
					iVar18++;
					iVar0[iVar18] = 509;
					iVar18++;
					iVar0[iVar18] = 510;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 516;
					iVar18++;
					iVar0[iVar18] = 517;
					iVar18++;
					iVar0[iVar18] = 518;
					iVar18++;
					iVar0[iVar18] = 516;
					iVar18++;
					iVar0[iVar18] = 517;
					iVar18++;
					iVar0[iVar18] = 518;
					iVar18++;
					iVar0[iVar18] = 521;
					iVar18++;
					iVar0[iVar18] = 522;
					iVar18++;
					iVar0[iVar18] = 523;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 397;
					iVar18++;
					iVar0[iVar18] = 398;
					iVar18++;
					iVar0[iVar18] = 399;
					iVar18++;
					iVar0[iVar18] = 397;
					iVar18++;
					iVar0[iVar18] = 398;
					iVar18++;
					iVar0[iVar18] = 399;
					iVar18++;
					iVar0[iVar18] = 400;
					iVar18++;
					iVar0[iVar18] = 401;
					iVar18++;
					iVar0[iVar18] = 402;
					iVar18++;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 467;
					iVar18++;
					iVar0[iVar18] = 468;
					iVar18++;
					iVar0[iVar18] = 469;
					iVar18++;
					iVar0[iVar18] = 470;
					iVar18++;
					iVar0[iVar18] = 471;
					iVar18++;
					iVar0[iVar18] = 472;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 477;
					iVar18++;
					iVar0[iVar18] = 478;
					iVar18++;
					iVar0[iVar18] = 479;
					iVar18++;
					iVar0[iVar18] = 480;
					iVar18++;
					iVar0[iVar18] = 481;
					iVar18++;
					iVar0[iVar18] = 482;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 486;
					iVar18++;
					iVar0[iVar18] = 487;
					iVar18++;
					iVar0[iVar18] = 488;
					iVar18++;
					iVar0[iVar18] = 489;
					iVar18++;
					iVar0[iVar18] = 490;
					iVar18++;
					iVar0[iVar18] = 491;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 496;
					iVar18++;
					iVar0[iVar18] = 497;
					iVar18++;
					iVar0[iVar18] = 498;
					iVar18++;
					iVar0[iVar18] = 499;
					iVar18++;
					iVar0[iVar18] = 500;
					iVar18++;
					iVar0[iVar18] = 501;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 505;
					iVar18++;
					iVar0[iVar18] = 506;
					iVar18++;
					iVar0[iVar18] = 507;
					iVar18++;
					iVar0[iVar18] = 508;
					iVar18++;
					iVar0[iVar18] = 509;
					iVar18++;
					iVar0[iVar18] = 510;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 516;
					iVar18++;
					iVar0[iVar18] = 517;
					iVar18++;
					iVar0[iVar18] = 518;
					iVar18++;
					iVar0[iVar18] = 521;
					iVar18++;
					iVar0[iVar18] = 522;
					iVar18++;
					iVar0[iVar18] = 523;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 397;
					iVar18++;
					iVar0[iVar18] = 398;
					iVar18++;
					iVar0[iVar18] = 399;
					iVar18++;
					iVar0[iVar18] = 400;
					iVar18++;
					iVar0[iVar18] = 401;
					iVar18++;
					iVar0[iVar18] = 402;
					iVar18++;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 470;
					iVar18++;
					iVar0[iVar18] = 471;
					iVar18++;
					iVar0[iVar18] = 472;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 480;
					iVar18++;
					iVar0[iVar18] = 481;
					iVar18++;
					iVar0[iVar18] = 482;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 489;
					iVar18++;
					iVar0[iVar18] = 490;
					iVar18++;
					iVar0[iVar18] = 491;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 499;
					iVar18++;
					iVar0[iVar18] = 500;
					iVar18++;
					iVar0[iVar18] = 501;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 508;
					iVar18++;
					iVar0[iVar18] = 509;
					iVar18++;
					iVar0[iVar18] = 510;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 521;
					iVar18++;
					iVar0[iVar18] = 522;
					iVar18++;
					iVar0[iVar18] = 523;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 400;
					iVar18++;
					iVar0[iVar18] = 401;
					iVar18++;
					iVar0[iVar18] = 402;
					iVar18++;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 470;
					iVar18++;
					iVar0[iVar18] = 471;
					iVar18++;
					iVar0[iVar18] = 472;
					iVar18++;
					iVar0[iVar18] = 474;
					iVar18++;
					iVar0[iVar18] = 475;
					iVar18++;
					iVar0[iVar18] = 476;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 480;
					iVar18++;
					iVar0[iVar18] = 481;
					iVar18++;
					iVar0[iVar18] = 482;
					iVar18++;
					iVar0[iVar18] = 483;
					iVar18++;
					iVar0[iVar18] = 484;
					iVar18++;
					iVar0[iVar18] = 485;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 489;
					iVar18++;
					iVar0[iVar18] = 490;
					iVar18++;
					iVar0[iVar18] = 491;
					iVar18++;
					iVar0[iVar18] = 492;
					iVar18++;
					iVar0[iVar18] = 493;
					iVar18++;
					iVar0[iVar18] = 493;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 499;
					iVar18++;
					iVar0[iVar18] = 500;
					iVar18++;
					iVar0[iVar18] = 501;
					iVar18++;
					iVar0[iVar18] = 502;
					iVar18++;
					iVar0[iVar18] = 503;
					iVar18++;
					iVar0[iVar18] = 504;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 508;
					iVar18++;
					iVar0[iVar18] = 509;
					iVar18++;
					iVar0[iVar18] = 510;
					iVar18++;
					iVar0[iVar18] = 513;
					iVar18++;
					iVar0[iVar18] = 514;
					iVar18++;
					iVar0[iVar18] = 515;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 521;
					iVar18++;
					iVar0[iVar18] = 522;
					iVar18++;
					iVar0[iVar18] = 523;
					iVar18++;
					iVar0[iVar18] = 529;
					iVar18++;
					iVar0[iVar18] = 530;
					iVar18++;
					iVar0[iVar18] = 531;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 400;
					iVar18++;
					iVar0[iVar18] = 401;
					iVar18++;
					iVar0[iVar18] = 402;
					iVar18++;
					iVar0[iVar18] = 403;
					iVar18++;
					iVar0[iVar18] = 404;
					iVar18++;
					iVar0[iVar18] = 405;
					iVar18++;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					iVar0[iVar18] = 474;
					iVar18++;
					iVar0[iVar18] = 475;
					iVar18++;
					iVar0[iVar18] = 476;
					iVar18++;
					break;
				
				case 0x00000006:
					iVar0[iVar18] = 483;
					iVar18++;
					iVar0[iVar18] = 484;
					iVar18++;
					iVar0[iVar18] = 485;
					iVar18++;
					break;
				
				case 0x00000005:
					iVar0[iVar18] = 491;
					iVar18++;
					iVar0[iVar18] = 492;
					iVar18++;
					iVar0[iVar18] = 493;
					iVar18++;
					iVar0[iVar18] = 493;
					iVar18++;
					break;
				
				case 0x00000004:
					iVar0[iVar18] = 502;
					iVar18++;
					iVar0[iVar18] = 503;
					iVar18++;
					iVar0[iVar18] = 504;
					iVar18++;
					break;
				
				case 0x00000003:
					iVar0[iVar18] = 513;
					iVar18++;
					iVar0[iVar18] = 514;
					iVar18++;
					iVar0[iVar18] = 515;
					iVar18++;
					break;
				
				case 0x00000002:
					iVar0[iVar18] = 529;
					iVar18++;
					iVar0[iVar18] = 530;
					iVar18++;
					iVar0[iVar18] = 531;
					iVar18++;
					break;
				
				case 0x00000007:
					iVar0[iVar18] = 403;
					iVar18++;
					iVar0[iVar18] = 404;
					iVar18++;
					iVar0[iVar18] = 405;
					iVar18++;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unhandled Bounty Hunter Target Type");
			break;
	}
	if (iParam2 == 4294967295)
	{
		iVar17 = iVar0[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar18)];
	}
	else
	{
		iVar17 = iVar0[(iParam2 % iVar18)];
	}
	return iVar17;
}

int Function_328(int iParam0) //Position: 0x1235A / 74586
{
	int iVar0;
	int iVar1;
	var uVar2;
	char* cVar3[32];
	
	iVar1 = Function_456(iParam0);
	if (Function_559(iVar1))
	{
		uVar2 = Global_29155[iVar110].f_20;
		if (STRINGS_ARE_EQUAL(&uVar2, "tal") || STRINGS_ARE_EQUAL(&uVar2, "grt"))
		{
			iVar0 = 1;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "pun") || STRINGS_ARE_EQUAL(&uVar2, "dzc"))
		{
			iVar0 = 2;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "prd"))
		{
			iVar0 = 4;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "cho"))
		{
			iVar0 = 5;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "hgn"))
		{
			iVar0 = 6;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "gap"))
		{
			iVar0 = 3;
		}
		else if (STRINGS_ARE_EQUAL(&uVar2, "rio") || STRINGS_ARE_EQUAL(&uVar2, "gtr"))
		{
			iVar0 = 7;
		}
		else
		{
			memcpy(&cVar3, uVar2, 8);
			stradd(&cVar3, "Unhandled bounty location?", 32);
			LOG_ERROR(&cVar3);
			iVar0 = 4294967295;
		}
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

bool Function_329(int iParam0) //Position: 0x12463 / 74851
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_320(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_432(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_432(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_354(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_354(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0,5f)
		{
			iParam0->f_24 = 0,5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_339(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_338(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_331(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_331(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_432(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_432(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_323(iParam0);
	iParam0->f_172 = 1;
	if (!Function_330(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_318(iParam0, 0);
	return 1;
}

bool Function_330(int iParam0) //Position: 0x125E2 / 75234
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("ncatk_dobj"), 4);
		iParam0->f_4 = CREATE_POINT_IN_LAYOUT(*iParam0, &uVar0, *(iParam0 + 184), 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(StackVal))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		iParam0->f_8 = CREATE_OBJECT_ITERATOR(*iParam0);
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(StackVal, 8);
	ITERATE_ON_PARTIAL_NAME(StackVal, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(StackVal)));
	PRINTNL();
	return 1;
}

vector3 Function_331(struct<41> Param0) //Position: 0x12751 / 75601
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_432(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_337(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_335();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_334(Param0.f_20);
	Function_333(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_332(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_73();
	return StackVal, StackVal, Function_73();
}

void Function_332(struct<33> Param0) //Position: 0x12880 / 75904
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_333(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x129AC / 76204
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_334(bool bParam0) //Position: 0x129FD / 76285
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_335() //Position: 0x12AB0 / 76464
{
	float fVar0;
	bool bVar1;
	
	Function_336(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_336(var uParam0, int iParam1) //Position: 0x12AC4 / 76484
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_337(bool bParam0) //Position: 0x12B4D / 76621
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_338(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x12B91 / 76689
{
	iParam0->f_20 = uParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = uParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = uParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = uParam9;
}

void Function_339(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12BCD / 76749
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_340(var uParam0, int iParam1) //Position: 0x12BF6 / 76790
{
	uParam0->f_68 = iParam1;
	return 1;
}

int Function_341(var uParam0, int iParam1) //Position: 0x12C03 / 76803
{
	return Function_342(uParam0, iParam1);
}

int Function_342(var uParam0, bool bParam1) //Position: 0x12C10 / 76816
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_345(uParam0);
	if (!IS_ACTOR_IN_ACTORSET(uParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(uParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_543(uParam0->f_92, 1024))
		{
			Function_343(uParam0, bParam1);
		}
	}
	return 1;
}

void Function_343(var uParam0, bool bParam1) //Position: 0x12C8E / 76942
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_344(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_44(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(uParam0->f_60) - 1))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_60, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar6, bVar4);
				bVar5++;
			}
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_AddAvoidanceVolume got an invalid volume somehow?");
	}
	return;
}

int Function_344(int iParam0) //Position: 0x12D5F / 77151
{
	var uVar0;
	
	Function_320(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_345(int iParam0) //Position: 0x12DA7 / 77223
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_320(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

int Function_346(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x12DED / 77293
{
	if (iParam1 == 1)
	{
		Function_542(iParam0 + 92, 1);
	}
	else
	{
		Function_3(iParam0 + 92, 1);
	}
	if (iParam2 > 976 || iParam2 <= 1050)
	{
		iParam0->f_80 = 4294967295;
	}
	else
	{
		iParam0->f_80 = iParam2;
	}
	iParam0->f_84 = uParam3;
	return 1;
}

void Function_347(int iParam0, int iParam1) //Position: 0x12E33 / 77363
{
	if (iParam1 == 1)
	{
		Function_542(iParam0 + 92, 8);
	}
	else
	{
		Function_3(iParam0 + 92, 8);
	}
	return;
}

void Function_348(int iParam0, int iParam1, int iParam2) //Position: 0x12E54 / 77396
{
	if (iParam1 == 1)
	{
		Function_542(iParam0 + 92, 4);
	}
	else
	{
		Function_3(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_542(iParam0 + 92, 128);
	return;
}

void Function_349(int iParam0, int iParam1) //Position: 0x12E82 / 77442
{
	if (iParam1 == 0)
	{
		Function_542(iParam0 + 92, 4096);
	}
	else
	{
		Function_3(iParam0 + 92, 4096);
	}
	return;
}

void Function_350(int iParam0, int iParam1) //Position: 0x12EA5 / 77477
{
	if (iParam1 == 0)
	{
		Function_542(iParam0 + 92, 2048);
	}
	else
	{
		Function_3(iParam0 + 92, 2048);
	}
	return;
}

int Function_351(int iParam0, int iParam1) //Position: 0x12EC8 / 77512
{
	if (iParam1 == 1)
	{
		Function_542(iParam0 + 92, 512);
	}
	else
	{
		Function_3(iParam0 + 92, 512);
	}
	return 1;
}

void Function_352(var uParam0, float fParam1, float fParam2, var uParam3) //Position: 0x12EEC / 77548
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	uParam0->f_24 = fParam1;
	uParam0->f_28 = fParam2;
	uParam0->f_32 = uParam3;
}

void Function_353(int iParam0, int iParam1) //Position: 0x12F55 / 77653
{
	if (iParam1 == 0)
	{
		Function_542(iParam0 + 92, 8192);
	}
	else
	{
		Function_3(iParam0 + 92, 8192);
	}
	return;
}

int Function_354(int iParam0, vector3 vParam1) //Position: 0x12F78 / 77688
{
	bool bVar0;
	
	bVar0 = Function_36(iParam0);
	if (Function_432(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_319(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_318(iParam0, bVar0);
	}
	return 1;
}

int Function_355(var uParam0, int iParam1) //Position: 0x12FD7 / 77783
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

void Function_356(int iParam0, int iParam1) //Position: 0x12FF2 / 77810
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_36(iParam0)))
	{
		Function_319(iParam0, 0);
	}
	iParam0->f_176 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_36(iParam0)))
	{
		Function_318(iParam0, 0);
	}
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0x13030 / 77872
{
	if (iParam1 == 1)
	{
		Function_542(iParam0 + 92, 256);
	}
	else
	{
		Function_3(iParam0 + 92, 256);
	}
	return;
}

int Function_358(var uParam0, int iParam1) //Position: 0x13053 / 77907
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	uParam0->f_48 = iParam1;
	return 1;
}

int Function_359(int iParam0, int iParam1) //Position: 0x1306E / 77934
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	iParam0->f_212 = iParam1;
	iParam0->f_216 = 1;
	return 1;
}

bool Function_360() //Position: 0x1308E / 77966
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	
	if (iLocal_242 == 1)
	{
		return 1;
	}
	if (Function_559(bLocal_295))
	{
		if (!IS_LAYOUTREF_VALID(bLocal_354))
		{
			bLocal_354 = Function_364(bLocal_295);
		}
		if (iLocal_174 <= 8 && IS_LAYOUTREF_VALID(bLocal_354))
		{
			if (iLocal_247 == 1)
			{
				if (!IS_VOLUME_VALID(bLocal_223))
				{
					bLocal_223 = Function_363(bLocal_354);
				}
				if (Global_3403 == 0)
				{
					if (IS_OBJECT_VALID(bLocal_277) || HAS_ITEM(Function_486(65), Global_34573))
					{
						if (IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
						{
							iVar2 = 0;
							if (IS_VOLUME_VALID(bLocal_223))
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_223))
								{
									if (IS_ACTOR_VALID(bLocal_30[0]) && IS_ACTOR_ALIVE(bLocal_30[0]))
									{
										if (IS_ACTOR_IN_VOLUME(bLocal_30[0], bLocal_223))
										{
											iVar2 = 1;
										}
									}
									else
									{
										iVar2 = 1;
									}
								}
							}
							else if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_227))
							{
								if (IS_ACTOR_VALID(bLocal_30[0]) && IS_ACTOR_ALIVE(bLocal_30[0]))
								{
									if (IS_ACTOR_IN_VOLUME(bLocal_30[0], bLocal_227))
									{
										iVar2 = 1;
									}
								}
								else
								{
									iVar2 = 1;
								}
							}
							if (iVar2 == 0)
							{
								GET_OBJECT_POSITION(bLocal_227, &vVar3);
								Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3, &vVar6);
								if (VMAG(vVar6) > 6.0f)
								{
									if (IS_ACTOR_VALID(bLocal_30[0]) && IS_ACTOR_ALIVE(bLocal_30[0]))
									{
										GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), &vVar9);
										Function_468(StackVal, StackVal, StackVal, StackVal, vVar9, vVar3, &vVar6);
										if (VMAG(vVar6) > 6.0f)
										{
											iVar2 = 1;
										}
									}
									else
									{
										iVar2 = 1;
									}
								}
							}
							if (iVar1 != 0 && iVar2 != 1)
							{
								iVar0 = 0;
								while (iVar0 < 5)
								{
									Function_362(bLocal_23[iVar0]);
									iVar0++;
								}
								iVar1 = 1;
								if (iVar1 == 1)
								{
									if (IS_ACTOR_PLAYER(Global_34573))
									{
										SET_PLAYER_CONTROL(0, 0, 0, 0);
									}
									Function_361(Global_34573);
									Function_505(11);
								}
							}
						}
					}
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_223))
				{
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_252("npm_bh_plw", 0x41200000, 1, 0, 2, 1, 0);
					}
				}
			}
		}
	}
	if (!IS_ACTOR_ALIVE(bLocal_30[0]))
	{
		if (iLocal_269 == 0)
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "LootType"))
			{
				if (!DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Global_34573), "LootType") != 0)
				{
					bVar12 = (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Global_34573), "LootType") && 1);
					if (!bVar12 != 0)
					{
						DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "LootType");
						Function_505(10);
						Function_505(8);
					}
				}
			}
		}
	}
	return iLocal_242;
}

void Function_361(bool bParam0) //Position: 0x132F2 / 78578
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_PLAYER(Global_34573))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
		Function_112(Global_34573, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
	}
	return;
}

void Function_362(bool bParam0) //Position: 0x13325 / 78629
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

bool Function_363(bool bParam0) //Position: 0x13359 / 78681
{
	int iVar0;
	bool bVar1;
	
	iVar0 = "";
	bVar1 = CREATE_OBJECT_ITERATOR(bLocal_353);
	if (IS_LAYOUTREF_VALID(bParam0) && IS_ITERATOR_VALID(bVar1))
	{
		ITERATE_IN_LAYOUT(bVar1, bParam0);
		if (IS_ITERATOR_VALID(bVar1))
		{
			ITERATE_ON_PARTIAL_NAME(bVar1, "v_bhstop");
			iVar0 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		}
		else
		{
			LOG_ERROR("Could not create bhVolIter for finding stop volume");
		}
	}
	else
	{
		LOG_ERROR("Could not locate region layout");
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

bool Function_364(bool bParam0) //Position: 0x13413 / 78867
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	bVar0 = "";
	iVar1 = 4294967295;
	if (!bParam0 != 4294967295 && Function_559(bParam0))
	{
		if (StackVal == 1)
		{
			iVar1 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar1 = bParam0;
		}
		else if (StackVal || (StackVal || (StackVal || StackVal != 6 != 3) != 4) != 5)
		{
			iVar1 = Global_29155[bParam010];
		}
		else
		{
			LOG_ERROR("REGION_FIND_DISTRICT_FROM_REGION - Unhandled AREA_TYPE");
			iVar1 = Global_29155[bParam010];
		}
	}
	if (Function_559(iVar1))
	{
		if (iVar1 == Global_30628[0])
		{
			bVar0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
		}
		else if (iVar1 == Global_30628[1])
		{
			bVar0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
		}
		else if (iVar1 == Global_30628[3])
		{
			bVar0 = FIND_NAMED_LAYOUT("RioBravo_layout");
		}
		else if (iVar1 == Global_30628[2])
		{
			bVar0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
		}
		else if (iVar1 == Global_30633[0])
		{
			bVar0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
		}
		else if (iVar1 == Global_30633[2])
		{
			bVar0 = FIND_NAMED_LAYOUT("Perdido_layout");
		}
		else if (iVar1 == Global_30633[1])
		{
			bVar0 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
		}
		else if (iVar1 == Global_30637[1])
		{
			bVar0 = FIND_NAMED_LAYOUT("TallTrees_layout");
		}
		else if (iVar1 == Global_30637[0])
		{
			bVar0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
		}
		else
		{
			LOG_ERROR("REGION_FIND_DISTRICT_FROM_REGION - Unhandled Region ID");
		}
	}
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		strcpy(&cVar2, "Found district layout for ", 64);
		stradd(&cVar2, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 64);
	}
	return bVar0;
}

void Function_365() //Position: 0x136C4 / 79556
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(bLocal_23[iVar0]))
		{
			Function_366(GET_OBJECT_FROM_ACTOR(bLocal_23[iVar0]), 0);
			if (iVar0 == 0)
			{
				TASK_CLEAR(bLocal_23[iVar0]);
				TASK_FACE_ACTOR(bLocal_23[iVar0], Global_34573, 1, 3212836864);
				TASK_PRIORITY_SET(bLocal_23[iVar0], 2);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_23[iVar0], Global_34573, -1.0f, 1);
			if (IS_MOVER_FROZEN(bLocal_23[iVar0]))
			{
				SET_MOVER_FROZEN(bLocal_23[iVar0], false);
			}
		}
		iVar0++;
	}
	if (bLocal_295 == Global_30640[0])
	{
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -2094,512f, 16,449f, 2607,253f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[0], -2094,512f, 16,449f, 2607,253f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[0], fLocal_229[0], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -2095,31f, 16,449f, 2606,791f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[1], -2094,824f, 16,449f, 2609,479f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[1], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[2], -2093,915f, 16,449f, 2605,948f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[2], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[3], -2096,289f, 16,449f, 2607,438f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[3], fLocal_229[1], 1, 2);
		TASK_FACE_ACTOR(bLocal_23[0], Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(bLocal_23[0], false);
	}
	else if (bLocal_295 == Global_30717[0])
	{
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, 756,326f, 78,525f, 1234,881f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[0], 756,326f, 78,525f, 1234,881f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[0], fLocal_229[0], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, 755,386f, 78,525f, 1234,835f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
		SET_OBJECT_POSITION(bLocal_23[1], 755,883f, 78,525f, 1231,911f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[1], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[2], 755,741f, 78,525f, 1237,13f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[2], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[3], 759,221f, 79,202f, 1235,267f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[3], fLocal_229[1], 1, 2);
	}
	else if (bLocal_295 == Global_30693[0])
	{
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -2671,575f, 31,365f, 4253,672f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[0], -2671,575f, 31,365f, 4253,672f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[0], fLocal_229[0], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -2667,778f, 31,387f, 4253,858f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[1], -2667,778f, 31,387f, 4253,858f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[1], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[2], -2668,49f, 31,387f, 4256,438f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[2], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[3], -2667,755f, 31,387f, 4251,722f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[3], fLocal_229[1], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[2] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -2668,037f, 35,673f, 4254,779f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
		SET_OBJECT_POSITION(bLocal_23[4], -2666,749f, 35,673f, 4251,509f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[4], fLocal_229[2], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[5], -2668,808f, 35,673f, 4254,694f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[5], fLocal_229[2], 1, 2);
		TASK_FACE_ACTOR(bLocal_23[0], Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(bLocal_23[0], false);
	}
	else if (bLocal_295 == Global_30668[0])
	{
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -822,001f, 93,365f, 2422,047f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[0], -822,001f, 93,365f, 2422,047f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[0], fLocal_229[0], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -822,459f, 93,365f, 2421,458f, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		SET_OBJECT_POSITION(bLocal_23[1], -819,546f, 93,365f, 2421,278f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[1], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[2], -825,571f, 93,809f, 2422,226f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[2], fLocal_229[1], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[3], -823,521f, 93,809f, 2428,028f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[3], fLocal_229[1], 1, 2);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhDropVol") };
		fLocal_229[2] = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, -824,512f, 96,959f, 2430,295f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
		SET_OBJECT_POSITION(bLocal_23[4], -823,026f, 96,959f, 2430,371f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[4], fLocal_229[2], 1, 2);
		SET_OBJECT_POSITION(bLocal_23[5], -827,542f, 96,959f, 2429,732f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_23[5], fLocal_229[2], 1, 2);
		TASK_FACE_ACTOR(bLocal_23[0], Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(bLocal_23[0], false);
	}
	return;
}

int Function_366(bool bParam0, bool bParam1) //Position: 0x13D0A / 81162
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

int Function_367() //Position: 0x13D83 / 81283
{
	int iVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(bLocal_23[0]))
	{
		if (((bLocal_295 != Global_30640[0] || bLocal_295 != Global_30693[0]) || bLocal_295 != Global_30668[0]) || bLocal_295 != Global_30717[0])
		{
			if (IS_ACTOR_VALID(bLocal_30[0]))
			{
				Function_369(&Local_355, bLocal_30[0], 0);
			}
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhHndShake") };
			if (Function_326(iLocal_52[0]))
			{
				Function_73();
				bLocal_23[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[0], &Local_175) + Vector(-5.0f, -5.0f, -1.0f), Function_73());
				Function_369(&Local_355, bLocal_23[0], 1);
			}
			if (Function_326(iLocal_52[1]))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhGunner") };
				Function_73();
				bLocal_23[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[1], &Local_175) + Vector(1.0f, -5.0f, 1.0f), Function_73());
				Function_369(&Local_355, bLocal_23[1], 2);
			}
			if (Function_326(iLocal_52[2]))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhGunner") };
				Function_73();
				bLocal_23[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[2], &Local_175) + Vector(0.0f, -5.0f, 0.0f), Function_73());
				Function_369(&Local_355, bLocal_23[2], 3);
			}
			if (Function_326(iLocal_52[3]))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhGunner") };
				Function_73();
				bLocal_23[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[3], &Local_175) + Vector(0.0f, -5.0f, 1.0f), Function_73());
				Function_369(&Local_355, bLocal_23[3], 4);
			}
			if (Function_326(iLocal_52[4]))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhWalker") };
				Function_73();
				bLocal_23[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[4], &Local_175) + Vector(1.0f, -5.0f, 0.0f), Function_73());
				Function_369(&Local_355, bLocal_23[4], 5);
			}
			if (Function_326(iLocal_52[5]))
			{
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhWalker") };
				Function_73();
				bLocal_23[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_353, Vector(vLocal_516, iLocal_52[5], &Local_175) + Vector(1.0f, -5.0f, -1.0f), Function_73());
				Function_369(&Local_355, bLocal_23[5], 6);
			}
		}
		else
		{
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bountyDropGuy") };
			Function_73();
			bLocal_23[0] = CREATE_ACTOR_IN_LAYOUT(bLocal_353, &Local_175, iLocal_52[0], vLocal_516, Function_73());
			if (!IS_ACTOR_VALID(bLocal_23[0]))
			{
				LOG_ERROR("Problem creating dropOffGuy");
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(bLocal_23[iVar0]))
			{
				TASK_CLEAR(bLocal_23[iVar0]);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_23[iVar0], true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_23[iVar0], 0);
				Function_64(bLocal_23[iVar0], Global_34573, 0, 0);
				if (IS_ACTOR_ALIVE(bLocal_30[0]))
				{
					Function_64(bLocal_23[iVar0], bLocal_30[0], 2, 0);
				}
				AI_IGNORE_ACTOR(bLocal_23[iVar0]);
				SET_MOVER_FROZEN(bLocal_23[iVar0], true);
				REFERENCE_ACTOR(bLocal_23[iVar0]);
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Function_64(bLocal_23[iVar0], bLocal_23[iVar1], 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		TASK_CLEAR(bLocal_30[0]);
		Function_368(&Local_355 + 540);
		Function_460(1);
		iLocal_247 = 1;
	}
	return 1;
}

void Function_368(int iParam0) //Position: 0x140E2 / 82146
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		PRINTSTRING("Contents of OBJECTSET ");
		if (STRING_LENGTH(GET_OBJECT_NAME(*iParam0)) >= 0)
		{
			PRINTSTRING(GET_OBJECT_NAME(*iParam0));
		}
		else
		{
			PRINTSTRING("n(no name)");
		}
		PRINTNL();
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(*iParam0) - 1))
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, *iParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				PRINTINT(bVar1);
				PRINTSTRING(") ");
				PRINTSTRING(GET_OBJECT_NAME(bVar0));
				PRINTNL();
			}
			bVar1++;
		}
		PRINTSTRING("Displayed ");
		PRINTINT(GET_OBJECTSET_SIZE(*iParam0));
		PRINTSTRING("n objects.");
	}
	return;
}

void Function_369(bool bParam0, bool bParam1, bool bParam2) //Position: 0x141A6 / 82342
{
	struct<8> Var0;
	
	Function_210(bParam0);
	if (!IS_OBJECTSET_VALID(bParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("cutscTargets") };
		bParam0->f_540 = CREATE_OBJECTSET_IN_LAYOUT(&Var0, bParam0->f_28, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam1, bParam0->f_540);
		DECOR_SET_INT(bParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

bool Function_370() //Position: 0x14254 / 82516
{
	if (iLocal_264 == 0)
	{
		return 0;
	}
	if (!Function_371(&bLocal_148))
	{
		return 0;
	}
	return 1;
}

bool Function_371(bool bParam0) //Position: 0x1426F / 82543
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_375();
	iVar1 = 0;
	if (!Function_8(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_374(bParam0[iVar03], 8);
		}
		else if (Function_373())
		{
			iVar1 = 1;
			Function_374(bParam0[iVar03], 8);
		}
		Function_374(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_8(bParam0[iVar03], 4))
		{
			if (!Function_8(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_8(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_8(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_374(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_8(bParam0[iVar03], 4))
		{
			if (!Function_8(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_374(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_374(bParam0[iVar03], 2);
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
	Function_372();
	return 1;
}

void Function_372() //Position: 0x145EA / 83434
{
	if (!Function_117(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_373() //Position: 0x1462A / 83498
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

void Function_374(var uParam0, int iParam1) //Position: 0x14655 / 83541
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_375() //Position: 0x14666 / 83558
{
	if (!Function_117(128))
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

void Function_376() //Position: 0x146A8 / 83624
{
	int iVar0;
	
	if (bLocal_295 == Global_30640[0])
	{
		iLocal_52[0] = 440;
		if (IS_ACTOR_ALIVE(bLocal_30[0]))
		{
			iLocal_52[1] = 437;
			iLocal_52[2] = 445;
		}
		else
		{
			iLocal_52[1] = 4294967295;
			iLocal_52[2] = 4294967295;
		}
		iLocal_52[3] = 4294967295;
		iLocal_52[4] = 4294967295;
		iLocal_52[5] = 4294967295;
	}
	else if (bLocal_295 == Global_30717[0])
	{
		iLocal_52[0] = 441;
		if (IS_ACTOR_ALIVE(bLocal_30[0]))
		{
			iLocal_52[1] = 453;
			iLocal_52[2] = 451;
		}
		else
		{
			iLocal_52[1] = 4294967295;
			iLocal_52[2] = 4294967295;
		}
		iLocal_52[3] = 4294967295;
		iLocal_52[4] = 4294967295;
		iLocal_52[5] = 4294967295;
	}
	else if (bLocal_295 == Global_30693[0])
	{
		iLocal_52[0] = 463;
		if (IS_ACTOR_ALIVE(bLocal_30[0]))
		{
			iLocal_52[1] = 455;
			iLocal_52[2] = 456;
			iLocal_52[3] = 457;
		}
		else
		{
			iLocal_52[1] = 4294967295;
			iLocal_52[2] = 4294967295;
			iLocal_52[3] = 4294967295;
		}
		iLocal_52[4] = 4294967295;
		iLocal_52[5] = 4294967295;
	}
	else if (bLocal_295 == Global_30668[0])
	{
		iLocal_52[0] = 438;
		if (IS_ACTOR_ALIVE(bLocal_30[0]))
		{
			iLocal_52[1] = 443;
			iLocal_52[2] = 442;
		}
		else
		{
			iLocal_52[1] = 4294967295;
			iLocal_52[2] = 4294967295;
		}
		iLocal_52[3] = 4294967295;
		iLocal_52[4] = 4294967295;
		iLocal_52[5] = 4294967295;
	}
	else
	{
		LOG_ERROR("Invalid bounty hunter AE");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Function_326(iLocal_52[iVar0]))
		{
			Function_377(&bLocal_148, iLocal_52[iVar0], 3, 0);
		}
		iVar0++;
	}
	iLocal_264 = 1;
	return;
}

var Function_377(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14850 / 84048
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_8(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_374(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_374(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_378(bool bParam0) //Position: 0x14920 / 84256
{
	float fVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		fVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
	}
	return fVar0;
}

bool Function_379(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x14948 / 84296
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_380() //Position: 0x14A13 / 84499
{
	if (bLocal_295 == Global_30640[0])
	{
		vLocal_516 = { -2097,455f, 16,449f, 2607,949f };
	}
	else if (bLocal_295 == Global_30717[0])
	{
		vLocal_516 = { 753,925f, 78,525f, 1235,32f };
	}
	else if (bLocal_295 == Global_30693[0])
	{
		vLocal_516 = { -2674,448f, 31,452f, 4253,481f };
	}
	else if (bLocal_295 == Global_30668[0])
	{
		vLocal_516 = { -821,297f, 93,336f, 2419,655f };
	}
	else
	{
		LOG_ERROR("Dropoff position not properly defined.");
	}
	return;
}

void Function_381(var uParam0, bool bParam1) //Position: 0x14AD1 / 84689
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_382(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_382(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x14AF4 / 84724
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_26(bVar0, iParam1, uParam2, uParam3, iParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

var Function_383(int iParam0) //Position: 0x14B4C / 84812
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(*iParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return "";
	}
	Function_384(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	ITERATE_ON_PARTIAL_NAME(bVar0, "atkSquad");
	iParam0->f_60 = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
	if (!SQUAD_IS_VALID(iParam0->f_60))
	{
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return iParam0->f_60;
}

int Function_384(int iParam0) //Position: 0x14BB8 / 84920
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_44());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_44());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_385() //Position: 0x14BE9 / 84969
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_386() //Position: 0x14BFC / 84988
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11[10];
	bool bVar22;
	
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		bVar22 = Function_388(bLocal_30[iVar0]);
		if (IS_ACTOR_VALID(bVar22))
		{
			bVar11[iVar0] = bVar22;
			Function_387(bLocal_30[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GET_POSITION(bLocal_30[iVar0], &vVar8);
		iVar2 = 0;
		iVar1 = 0;
		bVar3 = -1.0f;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if ((!iVar1 != iVar2 && IS_ACTOR_VALID(bVar11[iVar1])) && !IS_ACTOR_MOUNTED(bVar11[iVar1]))
			{
				GET_POSITION(bLocal_30[iVar1], &vVar5);
				bVar4 = VDIST(vVar5, vVar8);
				if (bVar4 < 1,5f)
				{
					if (bVar3 > 0.0f || bVar4 > bVar3)
					{
						bVar3 = bVar4;
						iVar2 = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (IS_ACTOR_VALID(bVar11[iVar2]))
		{
			Function_387(bLocal_30[iVar0], bVar11[iVar2]);
		}
		iVar0++;
	}
	return;
}

void Function_387(bool bParam0, bool bParam1) //Position: 0x14CED / 85229
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_horse", GET_OBJECT_FROM_ACTOR(bParam1));
	}
	return;
}

var Function_388(bool bParam0) //Position: 0x14D16 / 85270
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_horse"));
	}
	return "";
}

int Function_389(bool bParam0) //Position: 0x14D42 / 85314
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

var Function_390(vector3 vParam0, var uParam3) //Position: 0x14D8F / 85391
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar53;
	
	uVar2 = 50;
	memcpy(&uVar53, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("ncoverSeek"), 4);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_28841, &uVar53, false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
	uVar0 = FIND_COVER_LOCATIONS_IN_VOLUME(&uVar2, 50, bVar1, 0.0f, 360.0f, 7);
	if (IS_VOLUME_VALID(bVar1))
	{
		DESTROY_VOLUME(bVar1);
	}
	return uVar0;
}

float Function_391(bool bParam0, bool bParam1) //Position: 0x14DEB / 85483
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_392(bool bParam0, bool bParam1) //Position: 0x14EDC / 85724
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_target", GET_OBJECT_FROM_ACTOR(bParam1));
	return;
}

int Function_393(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14EFE / 85758
{
	vector3 vVar0;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("BOUNTYHUNTER_AI_StartFighting found an invalid aiGuy");
	}
	bVar3 = Function_394(bParam0);
	if (!IS_ACTOR_VALID(bVar3))
	{
		bVar3 = Global_34573;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		TASK_CLEAR(GET_MOUNT(bParam0));
	}
	TASK_CLEAR(bParam0);
	if (iParam1 == 1)
	{
		MEMORY_IDENTIFY(bParam0, Global_34573);
	}
	switch (bParam2)
	{
		case 0x00000000:
			TASK_MELEE_ATTACK(bParam0, bVar3, -1.0f);
			break;
		
		case 0x00000001:
			vVar0 = { 0.0f, 0.0f, 0.0f };
			TASK_FOLLOW_AND_ATTACK_OBJECT(bParam0, Global_34573, &vVar0, 0, 0, 0, 0, 0, 1);
			break;
		
		case 0x00000002:
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
			if (bParam0 != bLocal_30[0])
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_225, 2, true);
			}
			break;
		
		case 0x00000003:
			TASK_KILL_CHAR(bParam0, Global_34573);
			TASK_PRIORITY_SET(bParam0, 2);
			if (bParam0 != bLocal_30[0])
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_225, 2, true);
			}
			break;
		
		case 0x00000004:
			TASK_KILL_CHAR(bParam0, bVar3);
			break;
		
		default:
			LOG_ERROR("Unhandled fightStyle");
			break;
	}
	TASK_PRIORITY_SET(bParam0, bParam3);
	Function_397(bParam0, 15);
	return 1;
}

var Function_394(bool bParam0) //Position: 0x1504E / 86094
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_target"));
}

void Function_395(bool bParam0, bool bParam1) //Position: 0x1506D / 86125
{
	Function_472(&iLocal_183);
	TASK_CLEAR(bParam0);
	TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 1, 0);
	MEMORY_PREFER_RIDING(bParam0, false);
	if (!IS_ACTOR_HOGTIED(bParam0))
	{
		if (bParam0 == bLocal_30[0])
		{
			SAY_SINGLE_LINE_CONTEXT(bParam0, 169, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
	}
	if (IS_VOLUME_VALID(bParam1))
	{
		ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, bParam1);
	}
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
	if (bParam0 == bLocal_30[0])
	{
		AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_396(bool bParam0) //Position: 0x150F7 / 86263
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	bVar0 = Function_61(&bLocal_515);
	return bVar0;
}

void Function_397(bool bParam0, bool bParam1) //Position: 0x15113 / 86291
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_state", bParam1);
	return;
}

bool Function_398(bool bParam0) //Position: 0x15131 / 86321
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_lookout");
	}
	return 0;
}

int Function_399(bool bParam0) //Position: 0x15158 / 86360
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_state");
}

void Function_400(vector3 vParam0) //Position: 0x15173 / 86387
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, vParam0, StackVal) };
	if (IS_ATTACHMENT_VALID(bLocal_522))
	{
		REMOVE_OBJECT_ATTACHMENT(bLocal_522);
	}
	VNORMALIZE(&vVar0);
	if (VMAG(vVar0) > 15.0f)
	{
		VSCALE(&vVar0, (VMAG(vVar0) / 2.0f));
	}
	else
	{
		VSCALE(&vVar0, 15.0f);
	}
	vLocal_519 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, Global_34574, StackVal) };
	SET_OBJECT_POSITION_ON_GROUND(GET_OBJECT_FROM_VOLUME(bLocal_225), vLocal_519);
	return;
}

int Function_401(vector3 vParam0) //Position: 0x151E3 / 86499
{
	if (Global_3391 == 0)
	{
		if (VDIST(vParam0, Global_34574) < 280.0f && !WOULD_ACTOR_BE_VISIBLE(false, &vParam0, 3212836864))
		{
			Function_542(&Global_26303 + 8, 256);
			return 1;
		}
		if ((VDIST(vParam0, Global_34574) < 220.0f && Function_471(&iLocal_201, 25.0f)) && iLocal_273 != 1)
		{
			iLocal_273 = 0;
			Function_472(&iLocal_201);
			Function_445(&Local_355, 1);
			if (IS_ACTOR_HOGTIED(bLocal_30[0]))
			{
				Function_444(&Local_355, "npm_bh_es3", 1);
			}
			else
			{
				Function_444(&Local_355, "npm_bh_es2", 1);
			}
		}
		else if (VDIST(vParam0, Global_34574) > 220.0f)
		{
			iLocal_273 = 1;
		}
	}
	return 0;
}

int Function_402(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x152AB / 86699
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_391(bParam0, Global_34573);
		if (!Function_543(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_403(bParam0);
				return 1;
			}
		}
		if (!Function_543(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_403(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_403(bParam0);
				return 1;
			}
		}
		if (!Function_543(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_403(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_403(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_543(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_403(bParam0);
				return 1;
			}
		}
		if (!Function_543(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_403(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_403(bool bParam0) //Position: 0x15442 / 87106
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_404(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_404(bool bParam0) //Position: 0x15476 / 87158
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_405() //Position: 0x1548D / 87181
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	var uVar14;
	int iVar17;
	bool bVar18;
	vector3 vVar19;
	int iVar22;
	int iVar23;
	
	if (Global_63399 != iLocal_535)
	{
		iLocal_535 = Global_63399;
		iVar1 = 0;
		while (iVar1 < (bLocal_168 - 1))
		{
			if (IS_ACTOR_VALID(bLocal_30[iVar1]))
			{
				Function_407(bLocal_30[iVar1]);
				if ((Global_63399 != 16 || Global_63399 != 32) || Global_63399 != 1)
				{
					SET_ACTOR_VISION_MAX_RANGE(bLocal_30[iVar1], (GET_ACTOR_VISION_MAX_RANGE(bLocal_30[iVar1]) / 2.0f), 1);
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < (bLocal_168 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_30[iVar1]))
		{
			if (!Function_406())
			{
				if (MEMORY_GET_WAS_VISIBLE_WITHIN_TIME(bLocal_30[iVar1], Global_34573, 1.0f) && MEMORY_GET_IS_IDENTIFIED(bLocal_30[iVar1], Global_34573))
				{
					GET_ACTOR_VELOCITY(Global_34573, &uVar14);
					if (iVar1 == 0)
					{
						if (Function_391(bLocal_30[0], Global_34573) > 10.0f)
						{
							return 1;
						}
					}
					if (Function_391(bLocal_30[iVar1], Global_34573) > 4.0f)
					{
						return 1;
					}
					iVar0 = 1;
					Function_397(bLocal_30[iVar1], 3);
				}
			}
			if (Function_399(bLocal_30[iVar1]) != 3 || Function_399(bLocal_30[iVar1]) != 4)
			{
				uVar3[iVar2] = bLocal_30[iVar1];
				iVar2++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		if (iVar2 >= 0)
		{
			iVar17 = 0;
			if (Function_471(&iLocal_210, bLocal_219))
			{
				Function_472(&iLocal_210);
				bLocal_219 = RAND_FLOAT_RANGE(2.0f, 4.0f);
				iVar17 = 1;
			}
			bVar18 = uVar3[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
			if (Function_471(&iLocal_204, 10.0f))
			{
				return 1;
			}
			if (iVar17 == 1)
			{
				if (Function_471(&iLocal_204, (2.0f * 2.0f)))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar18, 96, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_471(&iLocal_204, (1.0f * 2.0f)))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar18, 105, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_471(&iLocal_204, (0.0f * 2.0f)))
				{
					if (Function_385())
					{
						SAY_SINGLE_LINE_CONTEXT(bVar18, 57, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(bVar18, 105, Function_19(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					}
				}
			}
		}
		Function_472(&iLocal_207);
	}
	else
	{
		if (iVar2 >= 0)
		{
			if (Function_471(&iLocal_207, 3.0f))
			{
				iVar1 = 0;
				while (iVar1 < (bLocal_168 - 1))
				{
					if (IS_ACTOR_VALID(bLocal_30[iVar1]))
					{
						Function_397(bLocal_30[iVar1], 1);
					}
					iVar1++;
				}
				Function_472(&iLocal_204);
			}
		}
		else
		{
			iLocal_173 = (iLocal_173 + 1 % bLocal_168);
			if (IS_ACTOR_VALID(bLocal_30[iLocal_173]))
			{
				Function_62(bLocal_30[iLocal_173]);
				vVar19 = { StackVal, StackVal, Function_62(bLocal_30[iLocal_173]) };
				if (VDIST(Global_34574, vVar19) > 100.0f && VDIST(Global_34574, vVar19) < 20.0f)
				{
					iVar23 = (RAND_INT_RANGE(false, 1000) % 4);
					if (iVar23 == 0)
					{
						iVar22 = 0;
					}
					else if (iVar23 == 1)
					{
						iVar22 = 5;
					}
					else if (iVar23 == 2)
					{
						iVar22 = 8;
					}
					else
					{
						iVar22 = 7;
					}
					if (Function_471(&iLocal_213, RAND_FLOAT_RANGE(10.0f, 20.0f)))
					{
						AUDIO_PLAY_VOCAL_EFFECT(bLocal_30[iLocal_173], iVar22, 0);
						Function_472(&iLocal_213);
					}
				}
			}
		}
		Function_472(&iLocal_204);
	}
	return 0;
}

bool Function_406() //Position: 0x15773 / 87923
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_28178 == 4)
	{
		if (iLocal_220 == 5)
		{
			iVar0 = 1;
		}
	}
	else if (Global_28178 == 5)
	{
		if (iLocal_220 == 6)
		{
			iVar0 = 1;
		}
	}
	else if (Global_28178 == 6)
	{
		if (iLocal_220 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (Global_28178 == 7)
	{
		if (iLocal_220 == 4)
		{
			iVar0 = 1;
		}
	}
	else if (Global_28178 == 8)
	{
		if (iLocal_220 == 2)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_407(bool bParam0) //Position: 0x157DB / 88027
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_ENUM(bParam0);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("tmpBH") };
		bVar1 = CREATE_ACTOR_IN_LAYOUT(bLocal_353, &Local_175, bVar0, 100.0f, 100.0f, 100.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_VISION_MAX_RANGE(bParam0, GET_ACTOR_VISION_MAX_RANGE(bVar1), 1);
			DESTROY_ACTOR(bVar1);
		}
	}
	return;
}

bool Function_408(int iParam0) //Position: 0x15837 / 88119
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	strcpy(&Local_175, "bountyTargetSquad", 32);
	Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568(&Local_175) };
	bLocal_236 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_353, &Local_175));
	if (!IS_VOLUME_VALID(bLocal_224))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bLocal_224))
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_224, 15);
	}
	if (IS_OBJECT_VALID(bLocal_278))
	{
		GET_OBJECT_POSITION(bLocal_278, &vVar1);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhWandVol") };
		bLocal_225 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, false, vVar1, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhIntVol") };
		bLocal_226 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, vVar1, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
		Function_460(1);
	}
	else
	{
		LOG_ERROR("BountyHunter Problem: No Interest Point found at create time.");
	}
	Function_416();
	if (!Function_414(iParam0))
	{
		LOG_ERROR("Problem creating the landmark. Note destination and tell scripter.");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		bVar4 = "";
		if (IS_OBJECT_VALID(bLocal_278) && iVar0 != 0)
		{
			Function_47(bLocal_278);
			vVar1 = { StackVal, StackVal, Function_47(bLocal_278) };
			bVar4 = Function_413(StackVal, StackVal, &bLocal_513, vVar1, 0.0f, 0x42960000);
		}
		else if (Function_398(bLocal_30[iVar0]))
		{
			bVar4 = Function_61(&bLocal_515);
		}
		else
		{
			bVar4 = Function_61(&bLocal_513);
		}
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
			bVar5 = GET_GRINGO_FROM_OBJECT(bVar4);
			if (iVar0 == 0)
			{
				if (bLocal_293 == Global_30640[11])
				{
					TELEPORT_ACTOR_WITH_HEADING(bLocal_30[iVar0], -2825,708f, 20,078f, 3070,546f, 26,993f, 1, true, 1);
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(bLocal_30[iVar0], vVar1, GET_OBJECT_HEADING(bLocal_278), 1, true, 1);
				}
			}
			else if (IS_GRINGO_VALID(bVar5))
			{
				TELEPORT_ACTOR_WITH_HEADING(bLocal_30[iVar0], vVar1, GET_OBJECT_HEADING(bVar4), 1, true, 1);
			}
			else
			{
				Function_412();
				vVar1 = { StackVal, StackVal, Function_412() };
				TELEPORT_ACTOR(bLocal_30[iVar0], &vVar1, 1, 1, 1);
				strcpy(&Local_175, "BH snap:", 32);
				stradd(&Local_175, VECTOR_TO_STRING(&vVar1), 32);
				PRINTSTRING(&Local_175);
				PRINTNL();
			}
		}
		else
		{
			Function_412();
			vVar1 = { StackVal, StackVal, Function_412() };
			TELEPORT_ACTOR(bLocal_30[iVar0], &vVar1, 1, 1, 1);
			LOG_ERROR("Invalid bounty hunter gringo??");
		}
		bVar6 = GET_ACTORS_HORSE(bLocal_30[iVar0]);
		if (IS_ACTOR_VALID(bVar6))
		{
			bVar4 = Function_61(&bLocal_514);
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				bVar5 = GET_GRINGO_FROM_OBJECT(bVar4);
				if (IS_GRINGO_VALID(bVar5))
				{
					TELEPORT_ACTOR_WITH_HEADING(bVar6, vVar1, GET_OBJECT_HEADING(bVar4), 1, true, 1);
					SNAP_ACTOR_TO_GRINGO(bVar6, bVar4, "UseCase1", true, 0, 0);
				}
				else
				{
					Function_412();
					vVar1 = { StackVal, StackVal, Function_412() };
					TELEPORT_ACTOR(bVar6, &vVar1, 1, 1, 1);
					strcpy(&Local_175, "Bounty horse snapped near ", 32);
					stradd(&Local_175, VECTOR_TO_STRING(&vVar1), 32);
					PRINTSTRING(&Local_175);
					PRINTNL();
				}
				REMOVE_OBJECT_FROM_OBJECTSET(bVar4, bLocal_514);
			}
			else
			{
				Function_412();
				vVar1 = { StackVal, StackVal, Function_412() };
				TELEPORT_ACTOR(bVar6, &vVar1, 1, 1, 1);
				LOG_ERROR("Invalid bounty horse gringo??");
			}
		}
		iVar0++;
	}
	Function_411(bLocal_236, Global_34573, 2);
	Function_410(bLocal_236, bLocal_236, 0);
	Function_409(bLocal_236, 0, 3);
	Local_355.f_492 = GET_ACTOR_FACTION(bLocal_30[0]);
	bLocal_522 = ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_225), GET_OBJECT_FROM_ACTOR(bLocal_30[0]), Function_44(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	Function_460(1);
	return 1;
}

void Function_409(bool bParam0, int iParam1, bool bParam2) //Position: 0x15C33 / 89139
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				TASK_DRAW_HOLSTER_WEAPON(bVar1, iParam1);
				TASK_PRIORITY_SET(bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_410(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15C82 / 89218
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_411(bParam1, bVar1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_411(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15CCE / 89294
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(bParam1, bVar1);
				MEMORY_CONSIDER_AS(bParam1, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

vector3 Function_412() //Position: 0x15D3C / 89404
{
	vector3 vVar0;
	struct<9> Var3;
	
	if (IS_OBJECT_VALID(bLocal_278))
	{
		GET_OBJECT_POSITION(bLocal_278, &vVar3);
	}
	else if (IS_VOLUME_VALID(bLocal_225))
	{
		GET_VOLUME_CENTER(bLocal_225, &vVar3);
		FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar6);
	}
	else
	{
		GET_VOLUME_CENTER(bLocal_224, &vVar3);
		LOG_ERROR("BountyHunter had to use the target volume. Tell the scripter the location.");
	}
	if (!Function_432(StackVal, StackVal, vVar3))
	{
		AMBIENT_SET_SEARCH_CENTER(vVar3);
		AMBIENT_SET_DISTANCE_FILTER(1.0f, 20.0f);
		if (AMBIENT_GET_POINT(&vVar0, 0))
		{
			return StackVal, StackVal, vVar0;
		}
		vVar0 = { (vVar3.x + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar3.y + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar3.z + RAND_FLOAT_RANGE(0.0f, 5.0f)) };
	}
	return StackVal, StackVal, vVar0;
}

var Function_413(var uParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x15E1F / 89631
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(*uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*uParam0) < 0)
	{
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(*uParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, *uParam0);
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vParam1, vVar4);
		if ((bVar2 >= bVar3 && bVar2 <= fParam4) && bVar2 >= fParam5)
		{
			bVar3 = bVar2;
			bVar1 = bVar0;
		}
		bVar7++;
	}
	return bVar1;
}

bool Function_414(bool bParam0) //Position: 0x15EA2 / 89762
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	if (IS_VOLUME_VALID(bLocal_224))
	{
		GET_VOLUME_CENTER(bLocal_224, &vVar0);
	}
	Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bountyGrgs") };
	bLocal_513 = CREATE_OBJECTSET_IN_LAYOUT(&Local_175, bLocal_353, 4294967295, 1);
	Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nhorseGrgs") };
	bLocal_514 = CREATE_OBJECTSET_IN_LAYOUT(&Local_175, bLocal_353, 4294967295, 1);
	Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nlkoutGrgs") };
	bLocal_515 = CREATE_OBJECTSET_IN_LAYOUT(&Local_175, bLocal_353, 4294967295, 1);
	if ((!IS_OBJECTSET_VALID(bLocal_513) || !IS_OBJECTSET_VALID(bLocal_514)) || !IS_OBJECTSET_VALID(bLocal_515))
	{
	}
	bVar8 = CREATE_OBJECT_ITERATOR(bLocal_353);
	bVar9 = Function_364(bParam0);
	if (IS_LAYOUTREF_VALID(bVar9))
	{
		ITERATE_IN_LAYOUT(bVar8, bVar9);
	}
	else
	{
		LOG_ERROR("Could not locate region layout");
		return 0;
	}
	if (IS_ITERATOR_VALID(bVar8))
	{
		PRINTSTRING("Count after destroying/recreating the iterator: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(bVar8));
		PRINTNL();
		ITERATE_ON_OBJECT_TYPE(bVar8, 12);
		PRINTSTRING("Count after iterating on the gringo object type: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(bVar8));
		PRINTNL();
		ITERATE_IN_VOLUME(StackVal, bVar8);
		PRINTSTRING("Count after iterating on the specified volume: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(bVar8));
		PRINTNL();
		bVar7 = START_OBJECT_ITERATOR(bVar8);
		while (IS_OBJECT_VALID(bVar7))
		{
			PRINTSTRING("Gringo name: ");
			PRINTSTRING(GET_OBJECT_MODEL_NAME(bVar7));
			PRINTNL();
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar7), 0);
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar7), "horse"))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar7, bLocal_514);
			}
			else if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar7), "lookdistance"))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar7, bLocal_515);
			}
			else
			{
				ADD_OBJECT_TO_OBJECTSET(bVar7, bLocal_513);
			}
			bVar7 = OBJECT_ITERATOR_NEXT(bVar8);
		}
	}
	else
	{
		LOG_ERROR("Could not create bountyHunterGringoIterator for gringos");
	}
	if (IS_ITERATOR_VALID(bVar8))
	{
		DESTROY_ITERATOR(bVar8);
	}
	bVar8 = CREATE_OBJECT_ITERATOR(bLocal_353);
	if (IS_ITERATOR_VALID(bVar8))
	{
		ITERATE_IN_LAYOUT(bVar8, bVar9);
		ITERATE_ON_PARTIAL_NAME(bVar8, "nf_bhtreas");
		ITERATE_IN_VOLUME(StackVal, bVar8);
		bLocal_279 = Function_415(bVar8);
		if (IS_OBJECT_VALID(bLocal_279) && GET_OBJECT_TYPE(bLocal_279) != 8)
		{
			GET_OBJECT_POSITION(bLocal_279, &vVar0);
			bVar6 = GET_OBJECT_HEADING(bLocal_279);
			vVar3 = { 0.0f, bVar6, 0.0f };
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhtreas") };
			bLocal_276 = CREATE_GRINGO_IN_LAYOUT(bLocal_353, &Local_175, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", vVar0, vVar3);
			if (IS_OBJECT_VALID(bLocal_276))
			{
				DECOR_SET_INT(bLocal_276, "GringoDollarAmt", 50);
			}
			else
			{
				LOG_ERROR("Invalid creation of bountyHunterTreasure");
			}
		}
	}
	else
	{
		LOG_ERROR("Could not create a bounty target treasure");
	}
	if (IS_ITERATOR_VALID(bVar8))
	{
		DESTROY_ITERATOR(bVar8);
	}
	if (Function_560("npressDemo"))
	{
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhHackVol") };
		CREATE_OBSTACLE_IN_LAYOUT(bLocal_353, &Local_175, -2148,038f, 18,645f, 4969,773f, 0.0f, -0,2487998f, 0.0f, 9,930986f, 5,74613f, 8,33241f);
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhHackVol") };
		CREATE_OBSTACLE_IN_LAYOUT(bLocal_353, &Local_175, -2146,112f, 18,645f, 4974,869f, 0.0f, -0,2487998f, 0.0f, 6,154803f, 5,74613f, 4,794247f);
	}
	return 1;
}

var Function_415(bool bParam0) //Position: 0x16333 / 90931
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_NUM_ITERATOR_MATCHES(bParam0);
	iVar1 = 0;
	bVar2 = "";
	if (iVar0 >= 0)
	{
		iVar1 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar0);
		bVar2 = START_OBJECT_ITERATOR(bParam0);
		while (iVar1 >= 0)
		{
			iVar1 = (iVar1 - 1);
			bVar2 = OBJECT_ITERATOR_NEXT(bParam0);
		}
	}
	return bVar2;
}

int Function_416() //Position: 0x16380 / 91008
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	float fVar16;
	
	iVar12 = 1;
	iVar8 = 0;
	while (iVar8 < (bLocal_168 - 1))
	{
		bVar0 = uLocal_59[iVar8];
		if (!Function_326(bVar0) || bVar0 != 0)
		{
			bVar0 = Function_422(8, 0, 0, 4294967295, 1);
		}
		if (!Function_326(bVar1) || bVar1 != 0)
		{
			bVar1 = Function_422(64, 0, 0, 4294967295, 1);
		}
		if (IS_OBJECT_VALID(bLocal_278))
		{
			GET_OBJECT_POSITION(bLocal_278, &vVar2);
		}
		else
		{
			bVar14 = CREATE_OBJECTSET_IN_LAYOUT(Function_44(), bLocal_353, 4294967295, 0);
			bVar13 = Function_61(&bVar14);
			if (IS_OBJECT_VALID(bVar13))
			{
				GET_OBJECT_POSITION(bVar13, &vVar2);
				REMOVE_OBJECT_FROM_OBJECTSET(bVar13, bVar14);
			}
			else
			{
				GET_VOLUME_CENTER(StackVal, &vVar2);
				FIND_GROUND_INTERSECTION(&vVar2, 40.0f, &vVar2, &uVar5);
			}
			DESTROY_OBJECTSET(bVar14);
		}
		if (iVar8 == 0)
		{
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bntyTarg") };
		}
		else
		{
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bntyFrnd") };
		}
		vVar2 = { (vVar2.x + IntToFloat(iVar8 * 1)), (vVar2.y + IntToFloat(iVar8 * 1)), (vVar2.z + IntToFloat(iVar8 * 1)) };
		bLocal_30[iVar8] = CREATE_ACTOR_IN_LAYOUT(bLocal_353, &Local_175, bVar0, vVar2, 0.0f, 0.0f, 0.0f);
		if ((iVar8 % 3) == 2)
		{
			Function_421(bLocal_30[iVar8]);
		}
		Function_420(&Global_26303, bLocal_30[iVar8], 4294967295);
		DECOR_SET_BOOL(bLocal_30[iVar8], "bShopDontKill", true);
		REFERENCE_ACTOR(bLocal_30[iVar8]);
		if (iVar8 == 0)
		{
			fVar15 = GET_ACTOR_MAX_HEALTH(bLocal_30[0]);
			fVar16 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_30[0]);
			SET_ACTOR_MAX_HEALTH(bLocal_30[0], (fVar15 * 1,8f));
			SET_ACTOR_HEALTH(bLocal_30[0], (fVar15 * 1,8f));
			fVar16 = (fVar16 * 1,6f);
			Function_419(bLocal_30[0], fVar16, 0x40400000, 0x40000000);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_30[0], 2.0f, 4.0f);
		}
		else
		{
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_30[iVar8], 3.0f, 5.0f);
		}
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_30[iVar8], true);
		if (!IS_ACTOR_VALID(bLocal_30[iVar8]))
		{
			return 0;
		}
		Function_397(bLocal_30[iVar8], 0);
		Function_362(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar8]));
		if (iVar8 == 0)
		{
			Function_418(&bVar9, 1);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar8]), "LootType", bVar9);
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("stayaway") };
			bLocal_228 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, false, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_228), GET_OBJECT_FROM_ACTOR(bLocal_30[0]), Function_44(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			iVar11 = GET_ACTOR_FACTION(bLocal_30[iVar8]);
			Function_417(&Local_355, iVar11);
		}
		if ((iVar12 != 1 && (iVar8 % 3) == 2) && iVar10 > 4)
		{
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bountyHorse") };
			bLocal_41[iVar10] = CREATE_ACTOR_IN_LAYOUT(bLocal_353, &Local_175, uLocal_70[iVar10], vVar2, 0.0f, 0.0f, 0.0f);
			if (!IS_ACTOR_VALID(bLocal_41[iVar10]))
			{
				return 0;
			}
			ACCESSORIZE_HORSE(bLocal_41[iVar10], 3);
			Function_362(GET_OBJECT_FROM_ACTOR(bLocal_41[iVar10]));
			if (IS_ACTOR_VALID(bLocal_41[iVar10]))
			{
				SET_ACTORS_HORSE(bLocal_30[iVar8], bLocal_41[iVar10]);
			}
			iVar10++;
		}
		else
		{
			iVar12 = 1;
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_30[iVar8]);
		if (iVar8 == 0)
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_30[iVar8], bLocal_226);
		}
		else
		{
			if (!Function_398(bLocal_30[iVar8]))
			{
				ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_30[iVar8], bLocal_225);
			}
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_30[iVar8], bLocal_228);
		}
		SET_ACTOR_VOLUME_PARAMETERS(bLocal_30[iVar8], true, 0);
		SQUAD_JOIN(bLocal_30[iVar8], bLocal_236);
		SET_ACTOR_FACTION(bLocal_30[iVar8], iVar11);
		iVar8++;
	}
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_30[0], 0,1f);
	return 1;
}

void Function_417(var uParam0, int iParam1) //Position: 0x16701 / 91905
{
	uParam0->f_492 = iParam1;
	return;
}

int Function_418(var uParam0, int iParam1) //Position: 0x1670E / 91918
{
	*uParam0 = (*uParam0 || iParam1);
	return 1;
}

void Function_419(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x1671E / 91934
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_420(var uParam0, bool bParam1, bool bParam2) //Position: 0x16765 / 92005
{
	bool bVar0;
	
	bVar0 = 0,5f;
	switch (uParam0->f_12)
	{
		case 0x00000001:
			if (bParam2 != 4294967295)
			{
				bParam2 = 40;
			}
			bVar0 = 0,6f;
			break;
		
		case 0x00000002:
			if (bParam2 != 4294967295)
			{
				bParam2 = 40;
			}
			bVar0 = 0,7f;
			break;
		
		case 0x00000003:
			if (bParam2 != 4294967295)
			{
				bParam2 = 39;
			}
			bVar0 = 0,8f;
			break;
		
		case 0x00000004:
			if (bParam2 != 4294967295)
			{
				bParam2 = 42;
			}
			bVar0 = 0,9f;
			break;
		
		case 0x00000005:
			if (bParam2 != 4294967295)
			{
				bParam2 = 41;
			}
			bVar0 = 1.0f;
			break;
		
		case 0x00000006:
			if (bParam2 != 4294967295)
			{
				bParam2 = 41;
			}
			bVar0 = 1.0f;
			break;
		
		case 0x00000000:
		default:
			if (bParam2 != 4294967295)
			{
				bParam2 = 42;
			}
			bVar0 = 0,7f;
			break;
	}
	GIVE_WEAPON_TO_ACTOR(bParam1, bParam2, bVar0, 1, 1);
	return;
}

void Function_421(bool bParam0) //Position: 0x16834 / 92212
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_lookout", true);
	}
	return;
}

bool Function_422(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1685B / 92251
{
	return Function_423(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_423(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x16874 / 92276
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_426(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_426(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_426(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_426(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_426(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_426(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_426(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_426(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_426(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_426(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_426(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_426(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_426(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_426(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_424(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_424(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x16AC9 / 92873
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_425(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_425(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_425(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_425(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_425(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_425(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_425(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_425(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_425(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_425(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_425(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_425(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_425(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_425(Global_30750[13], bVar0);
	}
	return Function_426(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_425(bool bParam0, bool bParam1) //Position: 0x16C1A / 93210
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_426(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x16CD8 / 93400
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_431();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_326(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_430(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_430(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_429(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_326(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_429(bVar0))
				{
					Function_428();
				}
				Function_427(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_326(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_427(int iParam0) //Position: 0x16FCB / 94155
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_428() //Position: 0x1707F / 94335
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_429(bool bParam0) //Position: 0x170B9 / 94393
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_430(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x170E6 / 94438
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_431() //Position: 0x17237 / 94775
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_428();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_428();
	return;
}

bool Function_432(vector3 vParam0) //Position: 0x17282 / 94850
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_433(int iParam0) //Position: 0x1729A / 94874
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	
	iVar0 = 1;
	if (!IS_OBJECT_VALID(bLocal_278))
	{
		PRINTSTRING("Current region name: ");
		PRINTSTRING(GET_OBJECT_NAME(StackVal));
		PRINTNL();
		bVar7 = CREATE_OBJECT_ITERATOR(bLocal_353);
		bVar8 = Function_364(iParam0);
		if (IS_LAYOUTREF_VALID(bVar8))
		{
			ITERATE_IN_LAYOUT(bVar7, bVar8);
		}
		else
		{
			LOG_ERROR("Could not locate region layout");
			return 0;
		}
		Function_435(bLocal_293);
		vVar1 = { StackVal, StackVal, Function_435(bLocal_293) };
		vVar1.f_4 = (vVar1.y - 10.0f);
		vVar4 = { 0.0f, 0.0f, 0.0f };
		Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhSearchVol") };
		bLocal_222 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, 3, vVar1, vVar4, 50.0f, 60.0f, 50.0f);
		if (IS_ITERATOR_VALID(bVar7))
		{
			ITERATE_ON_PARTIAL_NAME(bVar7, "f_bhint");
			ITERATE_IN_VOLUME(bVar7, bLocal_222);
			bLocal_278 = Function_434(StackVal, StackVal, bVar7, Global_34574);
			if (!IS_OBJECT_VALID(bLocal_278))
			{
				LOG_ERROR("Invalid bountyhunter point of interest");
				iVar0 = 0;
			}
		}
		else
		{
			LOG_ERROR("Could not create bountyHunterGringoIterator for interest point");
			iVar0 = 0;
		}
	}
	if (IS_ITERATOR_VALID(bVar7))
	{
		DESTROY_ITERATOR(bVar7);
	}
	return iVar0;
}

bool Function_434(bool bParam0, vector3 vParam1) //Position: 0x17436 / 95286
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar5 = -1.0f;
	bVar6 = "";
	bVar7 = "";
	iVar3 = GET_NUM_ITERATOR_MATCHES(bParam0);
	if (iVar3 >= 0)
	{
		bVar6 = START_OBJECT_ITERATOR(bParam0);
		while (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			bVar4 = VDIST(vParam1, vVar0);
			if (bVar4 < bVar5)
			{
				bVar5 = bVar4;
				bVar7 = bVar6;
			}
			bVar6 = OBJECT_ITERATOR_NEXT(bParam0);
		}
	}
	return bVar7;
}

vector3 Function_435(bool bParam0) //Position: 0x17499 / 95385
{
	vector3 vVar0;
	
	if (bParam0 == Global_30723[5])
	{
		vVar0 = { -1043,829f, 183,985f, 1371,714f };
	}
	else if (bParam0 == Global_30693[3])
	{
		vVar0 = { -2234,426f, 23,091f, 4454,898f };
	}
	else if (bParam0 == Global_30723[6])
	{
		vVar0 = { -482,365f, 143,447f, 1908,17f };
	}
	else if (bParam0 == Global_30668[3])
	{
		vVar0 = { -490,208f, 20,103f, 3023,158f };
	}
	else if (bParam0 == Global_30640[13])
	{
		vVar0 = { -1945,125f, 30,262f, 3469,187f };
	}
	else if (bParam0 == Global_30693[7])
	{
		vVar0 = { -2726,75f, 55,867f, 4619,704f };
	}
	else if (bParam0 == Global_30640[6])
	{
		vVar0 = { -1912,426f, 29,225f, 2261,395f };
	}
	else if (bParam0 == Global_30693[10])
	{
		vVar0 = { -1756,155f, 30,369f, 4819,779f };
	}
	else if (bParam0 == Global_30693[8])
	{
		vVar0 = { -1445,059f, 19,691f, 4909,378f };
	}
	else if (bParam0 == Global_30640[11])
	{
		vVar0 = { -2829.0f, 20,079f, 3076,999f };
	}
	else if (bParam0 == Global_30668[6])
	{
		vVar0 = { -1269,727f, 109,427f, 2762,885f };
	}
	else if (bParam0 == Global_30723[3])
	{
		vVar0 = { -733,172f, 228,751f, 1129,988f };
	}
	else if (bParam0 == Global_30685[5])
	{
		vVar0 = { -3384,816f, 55,788f, 4746,955f };
	}
	else if (bParam0 == Global_30693[9])
	{
		vVar0 = { -1200,055f, 19,075f, 4964,34f };
	}
	else if (bParam0 == Global_30693[11])
	{
		vVar0 = { -1147,715f, 27,988f, 4820,093f };
	}
	else if (bParam0 == Global_30640[7])
	{
		vVar0 = { -2868,86f, 74,342f, 2178,624f };
	}
	else if (bParam0 == Global_30679[3])
	{
		vVar0 = { -3140,568f, 44,538f, 3284,213f };
	}
	else if (bParam0 == Global_30693[4])
	{
		vVar0 = { -1361,188f, 13,056f, 4299,818f };
	}
	else if (bParam0 == Global_30658[7])
	{
		vVar0 = { -4016,218f, 21,468f, 2398,236f };
	}
	else if (bParam0 == Global_30723[4])
	{
		vVar0 = { -844,503f, 189,827f, 1577,429f };
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(StackVal, &vVar0);
	}
	return StackVal, StackVal, vVar0;
}

void Function_436(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x177B0 / 96176
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_210(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_432(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_542(iParam0 + 584, 4);
	}
	else
	{
		Function_3(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_55(iParam0->f_624))
		{
			Function_443(iParam0->f_624, 1);
			Function_542(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_542(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_438(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_437(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_472(iParam0 + 572);
	}
	Function_472(iParam0 + 44);
	Function_66(0);
}

void Function_437(bool bParam0, bool bParam1) //Position: 0x178FF / 96511
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_438(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, float fParam5) //Position: 0x17940 / 96576
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_441(10.0f);
	Var14 = { StackVal, Function_441(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_326(iParam4) || iParam4 != 0)
		{
			bVar16 = Function_422(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = iParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_439(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(bParam3, Function_439(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_439(var uParam0, bool bParam1) //Position: 0x17A32 / 96818
{
	vector3 vVar0;
	
	if (!Function_440(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_440(int iParam0) //Position: 0x17B73 / 97139
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_441(int iParam0) //Position: 0x17B95 / 97173
{
	Function_442(iParam0, 10);
	return StackVal, Function_442(iParam0, 10);
}

struct<8> Function_442(var uParam0, int iParam1) //Position: 0x17BA2 / 97186
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_443(int iParam0, int iParam1) //Position: 0x17BBB / 97211
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_53(iParam0))
	{
		Function_225();
		return;
	}
	iVar0 = Function_224(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_523(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_223(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_229(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_228(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

var Function_444(int iParam0, bool bParam1, int iParam2) //Position: 0x17C61 / 97377
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(iParam0 + 56[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(iParam0 + 56[iVar24], bParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(bParam1))
	{
		iVar0 = 0;
	}
	strcpy(iParam0 + 56[iVar24], bParam1, 16);
	(*iParam0 + 112)[iVar2] = 0;
	(*iParam0 + 128)[iVar2] = iParam2;
	return iVar0;
}

void Function_445(bool bParam0, bool bParam1) //Position: 0x17CDA / 97498
{
	int iVar0;
	
	if (bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (bParam0->f_56 - 1))
	{
		strcpy(bParam0 + 56[iVar04], "", 16);
		(*bParam0 + 112)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_108 = 0;
	return;
}

bool Function_446(int iParam0) //Position: 0x17D23 / 97571
{
	if (Function_543(iParam0->f_584, 1024))
	{
		return 1;
	}
	return 0;
}

int Function_447(var uParam0, int iParam1) //Position: 0x17D3D / 97597
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_449(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_448(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_448(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x17E9E / 97950
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_449(bool bParam0) //Position: 0x17F39 / 98105
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_452(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_450(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_452(iVar0);
						}
					}
					else if (Function_450(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_452(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_452(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_450(bool bParam0, vector3 vParam1) //Position: 0x1809B / 98459
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_451(bParam0);
		vVar0 = { StackVal, StackVal, Function_451(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_451(bool bParam0) //Position: 0x18115 / 98581
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_452(int iParam0) //Position: 0x1817F / 98687
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

vector3 Function_453(bool bParam0) //Position: 0x181E0 / 98784
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_454() //Position: 0x181F1 / 98801
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_435(bLocal_293);
	vVar3 = { StackVal, StackVal, Function_435(bLocal_293) };
	Function_468(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3, &vVar0);
	if (Function_455(&(Global_29008[Global_29005]), 32) && VMAG(vVar0) > 100.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_455(var uParam0, int iParam1) //Position: 0x18230 / 98864
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_456(int iParam0) //Position: 0x1824C / 98892
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_559(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar0 = iParam0;
		}
		else if (StackVal || (StackVal || (StackVal || StackVal != 6 != 5) != 3) != 4)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			LOG_ERROR("GET_DISTRICT_FROM_REGION - This area type needs to be defined");
			iVar0 = Global_29155[iParam010];
		}
	}
	return iVar0;
}

int Function_457(int iParam0) //Position: 0x18316 / 99094
{
	return Function_458(iParam0);
}

int Function_458(int iParam0) //Position: 0x18321 / 99105
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_559(iParam0))
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

bool Function_459() //Position: 0x18379 / 99193
{
	if (!Function_371(&bLocal_81))
	{
		return 0;
	}
	return 1;
}

void Function_460(int iParam0) //Position: 0x1838B / 99211
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (IS_BLIP_VALID(bLocal_282))
	{
		REMOVE_BLIP(bLocal_282);
	}
	if (IS_BLIP_VALID(bLocal_283))
	{
		REMOVE_BLIP(bLocal_283);
	}
	iVar0 = 1;
	while (iVar0 < (bLocal_168 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_30[iVar0]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_30[iVar0])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_30[iVar0]));
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (IS_VOLUME_VALID(bLocal_227))
		{
			bLocal_283 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(bLocal_227), 330, -1.0f, 3, 0);
			SET_BLIP_PRIORITY(bLocal_283, 3);
		}
		switch (iLocal_174)
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				if (IS_VOLUME_VALID(bLocal_228))
				{
					bLocal_282 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_228), 392, -1.0f, 3, 0);
					SET_BLIP_PRIORITY(bLocal_282, 3);
				}
				else if (IS_VOLUME_VALID(bLocal_224))
				{
					GET_VOLUME_CENTER(bLocal_224, &uVar3);
					bLocal_282 = ADD_BLIP_FOR_COORD(&uVar3, 392, 0, 2, 0);
					SET_BLIP_PRIORITY(bLocal_282, 3);
				}
				if (IS_BLIP_VALID(bLocal_282) && iLocal_529 != 0)
				{
					SET_BLIP_BLINK(bLocal_282, 1, 0, 5f);
					Function_472(&iLocal_189);
					iLocal_529 = 1;
				}
				bVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
				SET_BLIP_NAME(bLocal_282, bVar1);
				break;
			
			case 0x00000005:
				Function_411(bLocal_236, Global_34573, 4);
			
			case 0x00000004:
			case 0x00000006:
			case 0x00000009:
				if (iLocal_248 == 1)
				{
					iVar0 = 1;
					while (iVar0 < (bLocal_168 - 1))
					{
						if (IS_ACTOR_VALID(bLocal_30[iVar0]))
						{
							if (IS_ACTOR_ALIVE(bLocal_30[iVar0]))
							{
								if (iLocal_253[iVar0] != 0 && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_30[iVar0])))
								{
									bVar2 = ADD_BLIP_FOR_ACTOR(bLocal_30[iVar0], 322, 0, 2, 0);
									SET_BLIP_MAX_DISTANCE(bVar2, 1,25f);
								}
							}
						}
						iVar0++;
					}
				}
				if (iLocal_269 == 0)
				{
					if (IS_ACTOR_VALID(bLocal_30[0]))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip", true);
						}
						if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip") == 1)
						{
							bLocal_282 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_228), 392, -1.0f, 3, 0);
							SET_BLIP_PRIORITY(bLocal_282, 3);
						}
					}
					else if (IS_OBJECT_VALID(bLocal_292))
					{
						bLocal_282 = ADD_BLIP_FOR_OBJECT(bLocal_292, 392, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(bLocal_282, 3);
					}
					if (IS_ACTOR_ALIVE(bLocal_30[0]))
					{
						bVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
						if (IS_BLIP_VALID(bLocal_282))
						{
							SET_BLIP_NAME(bLocal_282, bVar1);
						}
					}
					else if (IS_BLIP_VALID(bLocal_282))
					{
						SET_BLIP_NAME(bLocal_282, "npm_bh_tnm");
						SET_BLIP_IMPAIRMENT_MASK(bLocal_282, false);
					}
				}
				break;
			
			case 0x00000008:
				if (iLocal_248 == 1)
				{
					iVar0 = 1;
					while (iVar0 < (bLocal_168 - 1))
					{
						if (IS_ACTOR_VALID(bLocal_30[iVar0]))
						{
							if ((IS_ACTOR_ALIVE(bLocal_30[iVar0]) && iLocal_253[iVar0] != 0) && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_30[iVar0])))
							{
								bVar2 = ADD_BLIP_FOR_ACTOR(bLocal_30[iVar0], 322, 0, 2, 0);
								SET_BLIP_MAX_DISTANCE(bVar2, 1,25f);
							}
						}
						iVar0++;
					}
				}
				if (iLocal_269 == 0)
				{
					if (IS_ACTOR_VALID(bLocal_30[0]))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip", true);
						}
						if (IS_ACTOR_ALIVE(bLocal_30[0]))
						{
							if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_30[0]), "bountyhunter_blip") == 1)
							{
								bLocal_282 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_228), 392, -1.0f, 3, 0);
								bVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
								SET_BLIP_NAME(bLocal_282, bVar1);
							}
						}
						else
						{
							bLocal_282 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_228), 392, -1.0f, 3, 0);
							SET_BLIP_PRIORITY(bLocal_282, 3);
							SET_BLIP_NAME(bLocal_282, "npm_bh_tnm");
							SET_BLIP_IMPAIRMENT_MASK(bLocal_282, false);
						}
					}
					else if (IS_OBJECT_VALID(bLocal_292))
					{
						bLocal_282 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_228), 392, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(bLocal_282, 3);
						SET_BLIP_NAME(bLocal_282, "npm_bh_tnm");
						SET_BLIP_IMPAIRMENT_MASK(bLocal_282, false);
					}
				}
				break;
		}
		Function_461(1, 0x41200000);
	}
	return;
}

void Function_461(int iParam0, float fParam1) //Position: 0x187C3 / 100291
{
	if (!Function_15())
	{
		switch (iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_462(bool bParam0, int iParam1, int iParam2) //Position: 0x187FA / 100346
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(bParam0 + 4));
	bVar3 = VDIST(Global_34574, *(bParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_287() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!bParam0->f_480 <= bParam0->f_404)
	{
		if (STRING_LENGTH(bParam0 + 336[bParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_463() //Position: 0x18898 / 100504
{
	int iVar0;
	char* cVar1[64];
	
	if (iLocal_512 == 1)
	{
		bLocal_168 = Global_26303.f_16;
		if (bLocal_168 == 0)
		{
			bLocal_168 = 4;
			LOG_ERROR("0 BOUNTY ENEMIES?");
		}
		if (Function_560("npressDemo"))
		{
			Global_26303.f_16 = 5;
			bLocal_168 = 5;
		}
		strcpy(&cVar1, "bh number of enemies = ", 64);
		stradd(&cVar1, INT_TO_STRING(bLocal_168), 64);
	}
	iLocal_169 = (bLocal_168 - 3);
	if (iLocal_169 <= 0)
	{
		iLocal_169 = 0;
	}
	iLocal_220 = Function_466(Global_26303.f_20);
	iVar0 = 0;
	while (iVar0 < (bLocal_168 - 1))
	{
		if (iVar0 == 0)
		{
			uLocal_59[iVar0] = Global_26303.f_20;
		}
		else if (Function_560("npressDemo"))
		{
			uLocal_59[iLocal_170] = Function_327(Global_26303.f_12, 4, 4294967295);
		}
		else
		{
			uLocal_59[iLocal_170] = Function_327(Global_26303.f_12, iLocal_220, iLocal_170);
		}
		Function_377(&bLocal_81, uLocal_59[iLocal_170], 2, 0);
		iLocal_170++;
		uLocal_70[iVar0] = Function_422(64, 0, 4, 23, 1);
		Function_377(&bLocal_81, uLocal_70[iVar0], 2, 0);
		iLocal_171++;
		iVar0++;
	}
	Function_464(&bLocal_81, "procmissions", 10, 0);
	iLocal_171 = iLocal_171;
	Function_464(&bLocal_81, "stand_hostage", 5, 0);
	Function_464(&bLocal_81, "custom/stand_hostage", 8, 0);
	Function_464(&bLocal_81, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_464(&bLocal_81, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", 1, 0);
	Function_377(&bLocal_81, 1129, 3, 0);
	return;
}

var Function_464(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x18A9C / 101020
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_465(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_374(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_465(var uParam0, int iParam1, int iParam2) //Position: 0x18AD4 / 101076
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_374(uParam0[iVar03], 4);
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

int Function_466(bool bParam0) //Position: 0x18B98 / 101272
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

var Function_467(int iParam0) //Position: 0x18C47 / 101447
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

void Function_468(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x18DB9 / 101817
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_469() //Position: 0x18DDC / 101852
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	
	switch (iLocal_534)
	{
		case 0x00000000:
			if (iLocal_241 == 1)
			{
				if (IS_ACTOR_ALIVE(bLocal_30[0]))
				{
					if (!IS_OBJECT_VALID(bVar0))
					{
						Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbirdpoint") };
						Function_62(bLocal_30[0]);
						vVar1 = { StackVal, StackVal, Function_62(bLocal_30[0]) };
						bVar0 = CREATE_POINT_IN_LAYOUT(bLocal_353, &Local_175, vVar1, 0.0f, 0.0f, 0.0f);
						iVar4 = 1;
					}
					if (!SQUAD_IS_VALID(bLocal_530))
					{
						Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbirdSquad") };
						bLocal_530 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_353, &Local_175));
						if (SQUAD_IS_VALID(bLocal_530))
						{
							Function_438(bLocal_353, bLocal_530, 3, bVar0, 1129, 0x41200000);
							Function_437(bLocal_530, 0);
						}
					}
					if (iVar4 == 1)
					{
						DESTROY_OBJECT(bVar0);
					}
					Function_472(&iLocal_531);
					iLocal_534 = 1;
				}
				else
				{
					iLocal_534 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_471(&iLocal_531, 7.0f))
			{
				if (IS_ACTOR_VALID(bLocal_30[0]))
				{
					Function_62(bLocal_30[0]);
					vVar1 = { StackVal, StackVal, Function_62(bLocal_30[0]) };
					bVar15 = false;
					while (bVar15 < (SQUAD_GET_SIZE(bLocal_530) - 1))
					{
						bVar14 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_530, bVar15);
						vVar11 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f) };
						ROTATE_VECTOR_XZ(&vVar11, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
						vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar5, 100.0f, &vVar5, &uVar8);
						TASK_BIRD_LAND_AT_COORD(bVar14, &vVar5);
						bVar15++;
					}
					Function_470(bLocal_530, 1);
					Function_472(&iLocal_531);
				}
			}
			break;
		
		case 0x00000002:
			Function_11();
			iLocal_534 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_470(bool bParam0, bool bParam1) //Position: 0x18F61 / 102241
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_471(int iParam0, bool bParam1) //Position: 0x18F9C / 102300
{
	if (Function_104(iParam0))
	{
		if (Function_102(iParam0) < bParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_472(int iParam0) //Position: 0x18FB8 / 102328
{
	Function_473(iParam0, 0.0f);
	return;
}

void Function_473(int iParam0, float fParam1) //Position: 0x18FC4 / 102340
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_542(iParam0, 1);
	Function_3(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

int Function_474(bool bParam0, bool bParam1, int iParam2) //Position: 0x18FE5 / 102373
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_486(bParam0), Function_19()) == 0)
		{
			ADD_ITEM(Function_486(bParam0), Function_19(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_486(bParam0), Function_19(), iParam2);
	return 1;
}

int Function_475() //Position: 0x19030 / 102448
{
	if (!Function_371(&bLocal_81))
	{
		return 0;
	}
	return 1;
}

int Function_476() //Position: 0x19042 / 102466
{
	if (Global_3380)
	{
		return 0;
	}
	return 1;
}

void Function_477(bool bParam0, int iParam1, int iParam2) //Position: 0x19051 / 102481
{
	if (iParam2 == 1)
	{
		if (Function_483(bParam0, iParam1, iParam2))
		{
			Function_482(bParam0);
		}
		else if (Function_481(bParam0, iParam1))
		{
			Function_479(bParam0);
		}
		if (Function_462(bParam0, iParam1, iParam2))
		{
			Function_478(bParam0);
		}
	}
	else if (Function_483(bParam0, iParam1, 0))
	{
		Function_482(bParam0);
	}
	else if (Function_462(bParam0, iParam1, 0))
	{
		Function_478(bParam0);
	}
	else if (Function_481(bParam0, iParam1))
	{
		Function_479(bParam0);
	}
	return;
}

void Function_478(int iParam0) //Position: 0x190CB / 102603
{
	char* cVar0[32];
	
	if (iParam0->f_480 <= iParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, iParam0 + 336[iParam0->f_4804], 32);
		if ((*iParam0 + 388)[iParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, iParam0 + 336[iParam0->f_4804], iParam0 + 404[iParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_252(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

var Function_479(bool bParam0) //Position: 0x19165 / 102757
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_543(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_480(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_472(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_480(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_472(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_480(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1924A / 102986
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

bool Function_481(int iParam0, int iParam1) //Position: 0x19291 / 103057
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_287())
	{
		iVar0 = 0;
	}
	else if (Function_471(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_482(int iParam0) //Position: 0x19334 / 103220
{
	char* cVar0[32];
	
	if (iParam0->f_108 <= iParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, iParam0 + 56[iParam0->f_1084], 32);
		if ((*iParam0 + 112)[iParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, iParam0 + 56[iParam0->f_1084], iParam0 + 144[iParam0->f_1086], "", "", "", "", 0, (*iParam0 + 128)[iParam0->f_108], 0, 0);
		}
		else
		{
			Function_311(iParam0 + 56[iParam0->f_1084], 8,5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

bool Function_483(int iParam0, int iParam1, int iParam2) //Position: 0x193D5 / 103381
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_287() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_108 <= iParam0->f_56)
	{
		if (STRING_LENGTH(iParam0 + 56[iParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_484() //Position: 0x1948C / 103564
{
	SET_OBJECT_POSITION(bLocal_281, 0.0f, 20.0f, 0.0f);
	return;
}

void Function_485() //Position: 0x194A0 / 103584
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = GET_GAME_CAMERA();
	vVar4 = { -0,18683f, -0,296919f, -0,621785f };
	GET_OBJECT_RELATIVE_POSITION(bVar0, vVar4, &vVar1);
	GET_OBJECT_ORIENTATION(bVar0, &vVar7);
	SET_OBJECT_POSITION(bLocal_281, vVar1);
	SET_OBJECT_ORIENTATION(bLocal_281, vVar7);
	SET_CAMERA_ASPECT_RATIO(bVar0, 0.0f);
	SET_CAMERA_FOV(bVar0, 42,97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(bVar0, 0,3f);
	SET_CAMERA_FAR_CLIP_PLANE(bVar0, 2800.0f);
	SET_CAMERA_COLLISION_PARAMETERS(bVar0, 0,3f, 1);
	SET_CAMERA_COLLISION_ENABLED(bVar0, 0);
	RESET_CAMERA_TARGET(bVar0, 0);
	RESET_CAMERA_TARGETDOF(bVar0);
	return;
}

var Function_486(bool bParam0) //Position: 0x19528 / 103720
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

int Function_487() //Position: 0x19619 / 103961
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	
	if (Function_502())
	{
		uVar0[0] = "BountyHunter Pass";
		uVar0[1] = "BountyHunter Fail";
		uVar0[2] = "BountyHunter Cancel";
		uVar0[3] = "BountyHunter Collect Proof";
		iVar5 = Function_488(&uLocal_285, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_16();
			Function_505(14);
		}
		else if (iVar5 == 1)
		{
			Function_16();
			Function_505(15);
		}
		else if (iVar5 == 2)
		{
			Function_16();
			Function_505(16);
		}
		else if (iVar5 == 3)
		{
			Function_16();
			iVar6 = 0;
			while (iVar6 < (bLocal_168 - 1))
			{
				KILL_ACTOR(bLocal_30[iVar6]);
				iVar6++;
			}
			Function_505(10);
			Function_505(8);
			Function_460(1);
		}
		bLocal_167 = false;
		return 1;
	}
	return 0;
}

var Function_488(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1972D / 104237
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_501(&Var15, &Var0);
	uVar20 = Function_500(*uParam1, &Var15);
	Function_499(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_498(uParam0, uVar20);
	Function_496(StackVal, uParam0, Var15.f_12);
	Function_494(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_493(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_490(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_489(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_489(int iParam0, int iParam1, int iParam2) //Position: 0x197F4 / 104436
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

bool Function_490(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x19850 / 104528
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
				Function_492(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_492(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_489(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_491(bParam1->f_32);
	}
	else
	{
		Function_491(bParam1->f_32);
	}
	return 0;
}

void Function_491(bool bParam0) //Position: 0x199D6 / 104918
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

void Function_492(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x19A10 / 104976
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

var Function_493(int iParam0, var uParam1, int iParam2) //Position: 0x19ABE / 105150
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_494(var uParam0, int iParam1, int iParam2) //Position: 0x19AE2 / 105186
{
	switch (Function_495())
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

int Function_495() //Position: 0x19B7E / 105342
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

void Function_496(var uParam0, int iParam1, int iParam2) //Position: 0x19BBA / 105402
{
	switch (Function_497(uParam0))
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

int Function_497(int iParam0) //Position: 0x19C52 / 105554
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_19()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_543(*iParam0, 0x40000000))
		{
			Function_542(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_543(*iParam0, 0x40000000))
		{
			Function_542(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_3(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_19()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_543(*iParam0, 0x20000000))
		{
			Function_542(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_543(*iParam0, 0x20000000))
		{
			Function_542(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_3(iParam0, 0x20000000);
	return 0;
}

var Function_498(var uParam0, int iParam1) //Position: 0x19D9D / 105885
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

void Function_499(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x19EEC / 106220
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

var Function_500(int iParam0, int iParam1) //Position: 0x19F7F / 106367
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_501(var uParam0, var uParam1) //Position: 0x19F99 / 106393
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1,6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_502() //Position: 0x19FE7 / 106471
{
	return Global_30920;
}

int Function_503() //Position: 0x19FF0 / 106480
{
	if (Function_244(StackVal))
	{
		if ((((((*&Global_26401 + 36[0181][75])[3] < iLocal_523 || (*&Global_26401 + 36[0181][225])[3] < iLocal_524) || (*&Global_26401 + 36[0181][125])[3] < iLocal_525) || (*&Global_26401 + 36[1181][75])[3] < iLocal_526) || (*&Global_26401 + 36[1181][225])[3] < iLocal_527) || (*&Global_26401 + 36[1181][125])[3] < iLocal_528)
		{
			return 1;
		}
		iLocal_523 = (*&Global_26401 + 36[0181][75])[3];
		iLocal_524 = (*&Global_26401 + 36[0181][225])[3];
		iLocal_525 = (*&Global_26401 + 36[0181][125])[3];
		iLocal_526 = (*&Global_26401 + 36[1181][75])[3];
		iLocal_527 = (*&Global_26401 + 36[1181][225])[3];
		iLocal_528 = (*&Global_26401 + 36[1181][125])[3];
	}
	return 0;
}

bool Function_504() //Position: 0x1A0E9 / 106729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_26401.f_16 - 1))
	{
		if ((*&Global_26401 + 16)[iVar0] >= 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_505(int iParam0) //Position: 0x1A117 / 106775
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	
	iVar1 = 1;
	if (!iLocal_174 != iParam0)
	{
		switch (iParam0)
		{
			case 0x00000001:
				if (IS_VOLUME_VALID(bLocal_224))
				{
					bVar5 = GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_224));
				}
				if (IS_STRING_VALID(bVar5) && STRING_LENGTH(bVar5) < 0)
				{
					Function_520(bLocal_293);
					Function_445(&Local_355, 1);
					if (Function_543(StackVal, 16))
					{
						Function_444(&Local_355, "npm_bh_mt3", 1);
						Function_3(&Global_26303 + 8, 16);
					}
					else
					{
						Function_444(&Local_355, "npm_bh_mt2", 1);
					}
					strcpy(&Local_175, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_224)), 32);
					Function_313(&Local_355, &Local_175, 0);
				}
				else if (!Function_560("npressDemo"))
				{
					if (Function_519())
					{
						Function_515(&Local_355, "pm_bh_h", 0);
					}
				}
				if (!Function_560("npressDemo"))
				{
					if (Function_519())
					{
						Function_308(&Local_355);
						Function_515(&Local_355, "npm_bh_mt1", 0);
					}
				}
				if (iLocal_512 == 0)
				{
					iLocal_512 = 1;
				}
				break;
			
			case 0x00000004:
				iLocal_248 = 1;
				if (iLocal_249 == 0)
				{
					Function_445(&Local_355, 1);
					if (ACTOR_HAS_WEAPON(Global_34573, 21) && IS_ACTOR_ALIVE(bLocal_30[0]))
					{
						Function_444(&Local_355, "pm_bh_fnd1", 1);
						Function_444(&Local_355, "pm_bh_fnd2", 1);
						if (!Function_560("npressDemo"))
						{
							if (Function_519())
							{
								Function_308(&Local_355);
								Function_515(&Local_355, "pm_bh_lass", 0);
							}
						}
					}
					else
					{
						Function_444(&Local_355, "pm_bh_fnd3", 1);
					}
					iLocal_249 = 1;
					if (iLocal_174 <= 4)
					{
						Function_11();
						Function_512(&Local_355);
						Function_472(&iLocal_183);
						if (IS_BLIP_VALID(bLocal_282))
						{
							SET_BLIP_BLINK(bLocal_282, 0, 0, 5f);
						}
					}
				}
				break;
			
			case 0x00000005:
				iLocal_248 = 1;
				bLocal_295 = Function_511();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
				if (IS_BLIP_VALID(bLocal_282))
				{
					SET_BLIP_BLINK(bLocal_282, 0, 0, 5f);
				}
				Function_510(1);
				if (IS_OBJECT_VALID(bLocal_225))
				{
					DESTROY_OBJECT(bLocal_225);
				}
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("bhWander") };
				if (bLocal_293 == Global_30679[3])
				{
					bLocal_225 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, false, Global_34574, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
				}
				else
				{
					bLocal_225 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, false, Global_34574, 0.0f, 0.0f, 0.0f, 9.0f, 9.0f, 9.0f);
				}
				iVar0 = 0;
				while (iVar0 < (bLocal_168 - 1))
				{
					Function_509(bLocal_30[iVar0]);
					iVar0++;
				}
				break;
			
			case 0x00000008:
				CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
				APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
				if (iLocal_269 == 1)
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou2", 0, 0, false);
				}
				else
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou3", 0, 0, false);
				}
				if (!IS_ACTOR_ALIVE(bLocal_30[0]))
				{
					Function_445(&Local_355, 1);
					Function_444(&Local_355, "npm_bh_rtp", 1);
				}
				Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_508(bLocal_295) };
				Function_313(&Local_355, &Local_175, 0);
				Function_321();
				Function_472(&iLocal_186);
				break;
			
			case 0x00000009:
				CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
				APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
				APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou2", 0, 0, false);
				if (!Function_543(StackVal, 32))
				{
					Function_445(&Local_355, 1);
					Function_444(&Local_355, "npm_bh_col", 1);
					if (!Function_560("npressDemo"))
					{
						if (Function_519())
						{
							Function_308(&Local_355);
							Function_515(&Local_355, "pm_bh_colh", 0);
						}
					}
				}
				break;
			
			case 0x0000000A:
				iLocal_269 = 1;
				if (IS_OBJECT_VALID(bLocal_225))
				{
					bLocal_522 = ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_225), GET_OBJECT_FROM_ACTOR(Global_34573), Function_44(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				}
				Function_474(65, 0, 0);
				if (!IS_OBJECT_VALID(bLocal_277))
				{
					Function_380();
					if (!Function_432(StackVal, StackVal, vLocal_516))
					{
						Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("nbhGateway") };
						bLocal_277 = Function_379(StackVal, StackVal, bLocal_353, &Local_175, vLocal_516, 0.0f, 0.0f, 0.0f, Global_34573, (2,5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
						if (IS_OBJECT_VALID(bLocal_277))
						{
							bLocal_227 = Function_378(bLocal_277);
						}
						else
						{
							LOG_ERROR("Problem creating dropoff gateway");
						}
						Function_460(1);
					}
					else
					{
						LOG_ERROR("Invalid dropOffPos found");
					}
					Function_376();
				}
				if (!IS_ACTOR_ALIVE(bLocal_30[0]))
				{
					Function_308(&Local_355);
					Function_445(&Local_355, 1);
					Function_444(&Local_355, "npm_bh_rtp", 1);
					Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_508(bLocal_295) };
					Function_313(&Local_355, &Local_175, 0);
				}
				break;
			
			case 0x00000007:
				Function_302(&Local_355, (4294967295 * FLOOR((IntToFloat(Function_507()) * 0,1f))));
				if (IS_ACTOR_HOGTIED(Global_34573))
				{
					FREE_FROM_HOGTIE(Global_34573);
				}
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					DESTROY_ACTOR(GET_ACTORS_HORSE(Global_34573));
				}
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					DESTROY_ACTOR(GET_ACTORS_HORSE(Global_34573));
				}
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/ReactionProcessing/Injury/MeleeHit/Shoved/StaggerFall");
				iVar0 = 0;
				while (iVar0 < (bLocal_168 - 1))
				{
					vVar2 = { 1.0f, 1.0f, 1.0f };
					if (IS_ACTOR_ALIVE(bLocal_30[iVar0]) && IS_ACTOR_VALID(bLocal_30[iVar0]))
					{
						TELEPORT_ACTOR(bLocal_30[iVar0], &vVar2, 1, 1, 1);
					}
					if (IS_ACTOR_ALIVE(bLocal_41[iVar0]) && IS_ACTOR_VALID(bLocal_41[iVar0]))
					{
						TELEPORT_ACTOR(bLocal_41[iVar0], &vVar2, 1, 1, 1);
					}
					iVar0++;
				}
				iLocal_22 = 5;
				break;
			
			case 0x0000000E:
				Function_512(&Local_355);
			
			case 0x0000000B:
				iLocal_242 = 1;
				if (IS_ACTOR_ALIVE(Global_34573))
				{
					DELETE_ITEM(Function_486(13), Global_34573, 0);
				}
				if (iLocal_269 == 0)
				{
					Function_506(&Local_355, 1);
				}
				else
				{
					Function_506(&Local_355, 0);
				}
				if (iParam0 == 11)
				{
					iLocal_272 = 1;
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < (bLocal_168 - 1))
					{
						if (IS_ACTOR_ALIVE(bLocal_30[iVar0]) && IS_ACTOR_VALID(bLocal_30[iVar0]))
						{
							if (iVar0 == 0)
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(bLocal_30[iVar0]);
								FREE_FROM_HOGTIE(bLocal_30[iVar0]);
								DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(bLocal_30[iVar0]), "sHogtie", "kneel");
								HOGTIE_ACTOR(bLocal_30[iVar0]);
								DELETE_ACCESSORY("ANKLE_BIND", bLocal_30[iVar0]);
							}
							Function_25(bLocal_30[iVar0], 2, 0, 2);
						}
						iVar0++;
					}
				}
				iVar1 = 0;
				iLocal_238 = 2;
				iLocal_22 = 5;
				break;
			
			case 0x0000000C:
				if (!Function_560("npressDemo"))
				{
					Function_445(&Local_355, 1);
					Function_444(&Local_355, "npm_bh_diw", 1);
				}
				Function_477(&Local_355, 0, 0);
				Function_472(&iLocal_195);
				iLocal_238 = 4;
				iLocal_22 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000F:
				Function_512(&Local_355);
			
			case 0x0000000D:
				Function_445(&Local_355, 1);
				if (iLocal_252 == 1)
				{
				}
				else if (iLocal_250 == 1)
				{
					Function_444(&Local_355, "pm_bh_alaw", 1);
				}
				else if (IS_ACTOR_HOGTIED(bLocal_30[0]))
				{
					Function_444(&Local_355, "npm_bh_es0", 1);
				}
				else
				{
					Function_444(&Local_355, "npm_bh_es1", 1);
				}
				Function_477(&Local_355, 0, 1);
				iLocal_240 = 1;
				iLocal_238 = 3;
				iLocal_22 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000006:
				Function_445(&Local_355, 1);
				if (IS_ACTOR_HOGTIED(bLocal_30[0]))
				{
					Function_444(&Local_355, "npm_bh_es0", 1);
				}
				else
				{
					Function_444(&Local_355, "npm_bh_es1", 1);
				}
				Function_477(&Local_355, 0, 0);
				iLocal_240 = 1;
				iLocal_238 = 3;
				iLocal_22 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000010:
				iLocal_22 = 5;
				iLocal_238 = 4;
				break;
			
			default:
				break;
		}
		iLocal_174 = iParam0;
		Function_460(1);
	}
	return iVar1;
}

void Function_506(int iParam0, int iParam1) //Position: 0x1A987 / 108935
{
	if (iParam1 == 0)
	{
		Function_542(iParam0 + 584, 16384);
	}
	else
	{
		Function_3(iParam0 + 584, 16384);
	}
	return;
}

int Function_507() //Position: 0x1A9AC / 108972
{
	return Function_240(0);
}

struct<32> Function_508(int iParam0) //Position: 0x1A9B6 / 108982
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_559(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_509(bool bParam0) //Position: 0x1AA73 / 109171
{
	bool bVar0;
	char* cVar1[64];
	char* cVar17[64];
	int iVar33;
	int iVar34;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
		if (bParam0 == bLocal_30[0])
		{
			if (IS_VOLUME_VALID(bLocal_228))
			{
				DESTROY_VOLUME(bLocal_228);
			}
			if (IS_OBJECT_VALID(bLocal_226))
			{
				DESTROY_OBJECT(bLocal_226);
			}
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
			Local_175 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_568("friendAwayVol") };
			bLocal_228 = CREATE_VOLUME_IN_LAYOUT(bLocal_353, &Local_175, false, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, (5.0f / 2.0f), (5.0f / 2.0f), (5.0f / 2.0f));
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_228), GET_OBJECT_FROM_ACTOR(bLocal_30[0]), Function_44(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		bVar0 = GET_CURRENT_GRINGO(bParam0);
		if (IS_GRINGO_VALID(bVar0))
		{
			GRINGO_DEACTIVATE(bVar0);
		}
		if (iLocal_251 == 0)
		{
			if (IS_ACTOR_ALIVE(bLocal_30[0]))
			{
				strcpy(&cVar1, "PLAYER_BOUNTY_HUNTER", 64);
				strcpy(&cVar17, GET_ACTOR_ENUM_STRING(bLocal_30[0]), 64);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(&cVar17, "_");
				iVar33 = 0;
				while (iVar33 < (STRING_NUM_TOKENS() - 1))
				{
					stradd(&cVar1, "_", 64);
					stradd(&cVar1, STRING_GET_TOKEN(iVar33), 64);
					iVar33++;
				}
				PRINTSTRING(&cVar1);
				PRINTSTRING("******");
				PRINTNL();
				SAY_SINGLE_LINE_STRING(Global_34573, &cVar1, true, true, 2, 0, true, false);
			}
			iLocal_251 = 1;
		}
		if (iLocal_174 <= 5)
		{
			iVar34 = 0;
			while (iVar34 < (bLocal_41 - 1))
			{
				if (IS_ACTOR_VALID(bLocal_41[iVar34]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_41[iVar34]);
				}
				iVar34++;
			}
		}
		Function_397(bParam0, 14);
		MEMORY_GET_MUST_IDENTIFY(bParam0, Global_34573);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	}
	return;
}

void Function_510(int iParam0) //Position: 0x1ABF4 / 109556
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_15())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

int Function_511() //Position: 0x1AC29 / 109609
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (Global_29004 == 1)
	{
		Global_26303.f_28 = Global_30693[0];
	}
	else if (Global_29004 == 2)
	{
		Global_26303.f_28 = Global_30717[0];
	}
	else if (Global_29005 == Global_30628[2])
	{
		Global_26303.f_28 = Global_30668[0];
	}
	else
	{
		Global_26303.f_28 = Global_30640[0];
	}
	iVar0 = Global_26303.f_28;
	return iVar0;
}

void Function_512(int iParam0) //Position: 0x1AC8A / 109706
{
	if (Function_543(iParam0->f_584, 4))
	{
		Function_514();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_510(1);
	if (Function_543(iParam0->f_584, 32))
	{
		if (Function_55(iParam0->f_624))
		{
			Function_513(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_215(iParam0, 0);
	}
	Function_542(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_543(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_253(iParam0, 1);
	return;
}

void Function_513(int iParam0, var uParam1) //Position: 0x1AD0B / 109835
{
	int iVar0;
	
	if (!Function_53(iParam0))
	{
		Function_225();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_224(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && uParam1)
	{
		Function_523(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_223(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_514() //Position: 0x1AD72 / 109938
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_515(int iParam0, bool bParam1, int iParam2) //Position: 0x1AD86 / 109958
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_543(iParam0->f_584, 32))
	{
		if (!Function_53(iParam0->f_624))
		{
			return 0;
		}
	}
	bVar20 = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	bVar21 = Function_518(Function_224(iParam0->f_624), Function_547(iParam0->f_624));
	iVar22 = Function_516(Function_224(iParam0->f_624), Function_547(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(bVar21, bVar20))
	{
		ADD_TIME(&bVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(bVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_516(int iParam0, int iParam1) //Position: 0x1AEE5 / 110309
{
	int iVar0;
	int iVar1;
	
	if (!Function_517(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_224(iVar1) != iParam0 && Function_547(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_517(int iParam0) //Position: 0x1AF31 / 110385
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_518(int iParam0, bool bParam1) //Position: 0x1AF46 / 110406
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_224(iVar1) != iParam0 && Function_547(iVar1) != bParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, bVar0))
			{
				bVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return bVar0;
}

bool Function_519() //Position: 0x1AF92 / 110482
{
	if (Function_240(359) < 0 || Function_240(358) < 0)
	{
		return 0;
	}
	return 1;
}

void Function_520(int iParam0) //Position: 0x1AFB2 / 110514
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_455(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_521(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_81(473, 1, 0, 0);
		iVar0 = Function_458(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_81(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_81(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_81(476, 1, 0, 0);
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
		Function_234(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_234(7, 30);
	}
	if (Function_91(473) <= Function_92(473))
	{
		if (!Function_45())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

void Function_521(var uParam0, int iParam1) //Position: 0x1B0B1 / 110769
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_522(bool bParam0, int iParam1) //Position: 0x1B0C0 / 110784
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_523(bool bParam0) //Position: 0x1B102 / 110850
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_537();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_524();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_3(&Global_63095, 1);
		Function_3(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_524() //Position: 0x1B153 / 110931
{
	Function_535();
	Function_534();
	Function_534();
	Function_533();
	Function_533();
	Function_532();
	Function_532();
	Function_531();
	Function_531();
	if (!Function_45())
	{
		Function_529();
		Function_528();
		Function_527();
		Function_526();
	}
	Function_525();
	return;
}

void Function_525() //Position: 0x1B186 / 110982
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

void Function_526() //Position: 0x1B28C / 111244
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

void Function_527() //Position: 0x1B2BF / 111295
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

void Function_528() //Position: 0x1B44D / 111693
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

void Function_529() //Position: 0x1B601 / 112129
{
	Function_530(&Global_28260, 1, 0);
	return;
}

void Function_530(int iParam0, bool bParam1, var uParam2) //Position: 0x1B60F / 112143
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
	
	bVar0 = Function_19();
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

struct<8> Function_531() //Position: 0x1B800 / 112640
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
				iVar2 = ((Function_240((50 + iVar4)) + Function_240((183 + iVar4))) + Function_240((90 + iVar4)));
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
	Function_238(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_532() //Position: 0x1B89B / 112795
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
		iVar2 = ((Function_240((50 + iVar3) + 15) + Function_240((183 + iVar3) + 15)) + Function_240((90 + iVar3) + 15));
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
	Function_238(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_533() //Position: 0x1B924 / 112932
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
			iVar2 = ((Function_240((50 + iVar3) + 8) + Function_240((183 + iVar3) + 8)) + Function_240((90 + iVar3) + 8));
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
	Function_238(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_534() //Position: 0x1B9BB / 113083
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
		iVar2 = ((Function_240((50 + iVar3)) + Function_240((183 + iVar3))) + Function_240((90 + iVar3)));
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
	Function_238(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_535() //Position: 0x1BA3A / 113210
{
	Function_536(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_238(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_536(int iParam0, bool bParam1, int iParam2) //Position: 0x1BA60 / 113248
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
	Function_94(iParam0, bParam1, 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_82(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_537() //Position: 0x1BC6A / 113770
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_538(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_538(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_432(StackVal, StackVal, vVar0))
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

vector3 Function_538(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1BD0B / 113931
{
	int iVar0;
	
	iVar0 = Function_540(uParam2, uParam3);
	if (Function_539(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_542(&Global_63095, 1);
			Function_3(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_542(&Global_63095, 2);
			Function_3(&Global_63095, 1);
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
		Function_542(&Global_63095, 2);
		Function_3(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_73();
	return StackVal, StackVal, Function_73();
}

bool Function_539(int iParam0) //Position: 0x1BDF2 / 114162
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_540(bool bParam0, bool bParam1) //Position: 0x1BE08 / 114184
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
				fVar2 = Function_541(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_541(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_539(bVar0) && !bParam1)
	{
		bVar0 = Function_540(bParam0, 1);
	}
	return bVar0;
}

float Function_541(vector3 vParam0, vector3 vParam3) //Position: 0x1BECF / 114383
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_542(int iParam0, int iParam1) //Position: 0x1BEEC / 114412
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_543(bool bParam0, int iParam1) //Position: 0x1BEFB / 114427
{
	return (bParam0 && iParam1) == 0;
}

bool Function_544(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1BF08 / 114440
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

void Function_545() //Position: 0x1BFAC / 114604
{
	Function_464(&bLocal_81, "procmissions", 10, 0);
	Function_464(&bLocal_81, "stats", 10, 0);
	return;
}

void Function_546(int iParam0) //Position: 0x1BFDB / 114651
{
	if (iParam0 == 1)
	{
		Function_542(&Global_26303 + 8, 1);
	}
	else
	{
		Function_3(&Global_26303 + 8, 1);
	}
	return;
}

int Function_547(bool bParam0) //Position: 0x1C000 / 114688
{
	if (!Function_55(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_548(var uParam0, int iParam1) //Position: 0x1C01F / 114719
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_549(int iParam0, int iParam1) //Position: 0x1C02C / 114732
{
	if (Function_55(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_542(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_550(bool bParam0) //Position: 0x1C081 / 114817
{
	if (Function_559(bParam0))
	{
		return Function_551(bParam0, 0, 2);
	}
	return 4294967295;
}

int Function_551(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C09B / 114843
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_554(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_552(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_552(bParam0, bParam1, bParam2, 4294967295);
}

int Function_552(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1C0F9 / 114937
{
	var uVar0;
	
	if (!Function_517(bParam2))
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
	uVar0 = Function_554(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_553(uVar0);
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

int Function_553(int iParam0) //Position: 0x1C24E / 115278
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

var Function_554(int iParam0, int iParam1, int iParam2) //Position: 0x1C28C / 115340
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_555(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1C2AC / 115372
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	iParam3 = iParam3;
	iParam2 = iParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_556(uVar0, 80.0f, 20000.0f, iParam1, 1, iParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_556(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1C337 / 115511
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1,001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_559(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_457(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_453(StackVal);
		vVar296 = { StackVal, StackVal, Function_453(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_457(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_455(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				bVar304[iVar601] = bVar302;
				iVar601++;
				if (Function_233(Function_551(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					bVar451[iVar602] = bVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_558(&iVar1, &bVar304, iVar601);
		Function_558(&iVar148, &bVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_88(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_88(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_88(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_88(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_88(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_559(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_557();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_508(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_453(StackVal);
		vVar296 = { StackVal, StackVal, Function_453(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_88(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_88(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_88(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_88(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_88(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_559(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_557();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_508(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_453(StackVal);
		vVar296 = { StackVal, StackVal, Function_453(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

int Function_557() //Position: 0x1C9E0 / 117216
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_558(int iParam0, bool bParam1, int iParam2) //Position: 0x1CA0E / 117262
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
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
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

bool Function_559(int iParam0) //Position: 0x1CA9C / 117404
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_560(bool bParam0) //Position: 0x1CAB2 / 117426
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_561(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1CAD1 / 117457
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_566())
	{
		return 0;
	}
	uParam0->f_16 = Function_563(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_564();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_251(&Var96, iVar1) == 1)
		{
			if (Function_457(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_466(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_562(iVar1))
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
		if (Function_251(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_555(uParam0, iParam4, 80, 20000, uParam0->f_12);
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
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

bool Function_562(bool bParam0) //Position: 0x1CD3B / 118075
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
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

var Function_563(int iParam0) //Position: 0x1CD8D / 118157
{
	int iVar0;
	
	switch (iParam0)
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

int Function_564() //Position: 0x1CE5B / 118363
{
	int iVar0;
	
	iVar0 = Function_565(0);
	return iVar0;
}

var Function_565(int iParam0) //Position: 0x1CE69 / 118377
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_240(358) + Function_240(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_88(iVar1, 7);
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
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
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

bool Function_566() //Position: 0x1CEED / 118509
{
	return Function_543(StackVal, 1);
}

void Function_567() //Position: 0x1CEFC / 118524
{
	Function_3(&Global_26303 + 8, 2);
	Function_3(&Global_26303 + 8, 4);
	Function_3(&Global_26303 + 8, 8);
	Function_3(&Global_26303 + 8, 16);
	Function_3(&Global_26303 + 8, 32);
	Function_3(&Global_26303 + 8, 64);
	Function_3(&Global_26303 + 8, 128);
	Function_3(&Global_26303 + 8, 256);
	Function_3(&Global_26303 + 8, 512);
	Function_3(&Global_26303 + 8, 1024);
	Function_3(&Global_26303 + 8, 2048);
	Function_3(&Global_26303 + 8, 131072);
	Function_3(&Global_26303 + 8, 262144);
	Function_3(&Global_26303 + 8, 524288);
	return;
}

struct<32> Function_568(bool bParam0) //Position: 0x1CF96 / 118678
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_569("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_569(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1D000 / 118784
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_570() //Position: 0x1D01F / 118815
{
	return StackVal;
}

