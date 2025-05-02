//Decompiled with MagicRDR v1.0
//Function Count : 561
//Statics Count : 538
//Natives Count : 694
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 7;
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
	var uLocal_36 = 2;
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
	var uLocal_48 = 2;
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
	var uLocal_60 = 2;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 3;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 2;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 9;
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
	var uLocal_112 = 4;
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
	var uLocal_124 = 7;
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
	var uLocal_144 = 20;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
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
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	float fLocal_201 = 0.0f;
	var uLocal_202 = 0;
	struct<6> Local_203 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 3;
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
	int iLocal_229 = 2;
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
	int iLocal_247 = 0;
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
	int iLocal_261 = 0;
	bool bLocal_262 = false;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	bool bLocal_271 = false;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	float fLocal_307 = 0.0f;
	float fLocal_308 = 0.0f;
	float fLocal_309 = 0.0f;
	bool bLocal_310 = false;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = false;
	bool bLocal_321 = false;
	bool bLocal_322 = false;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	bool bLocal_326 = false;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	bool bLocal_335 = false;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = false;
	bool bLocal_343 = false;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	struct<2> Local_347 = { 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	struct<2> Local_353[3];
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	bool bLocal_377 = false;
	int iLocal_378 = 0;
	bool bLocal_379 = false;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	bool bLocal_382 = false;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	var uLocal_390 = 13;
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
	struct<15> Local_444[2];
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
	var uLocal_494 = 5;
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
	bool bLocal_514 = false;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	int iLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	int iLocal_522 = 0;
	var uLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_198 = 0;
	fLocal_308 = 1.0f;
	iLocal_312 = 0;
	iLocal_316 = 0;
	iLocal_317 = 0;
	iLocal_346 = 0;
	iLocal_378 = 0;
	iLocal_524 = 0;
	iLocal_525 = 0;
	Local_203 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_261 = 99;
	bLocal_262 = 6;
	iLocal_247 = 1000;
	while (Function_278())
	{
		Function_230();
		WAIT(false);
	}
	Function_1();
	LOG_ERROR("Should never reach ENDSCRIPT");
	return;
}

void Function_1() //Position: 0x83 / 131
{
	var uVar0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&iLocal_269))
	{
		Function_229(&iLocal_269, &iLocal_4 + 560[8], 1, 1, 1);
		TASK_STAND_STILL(&iLocal_269, -1.0f, 0, 0);
	}
	UI_EXIT("HealthMeter");
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	STREAMING_UNLOAD_BOUNDS();
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_265);
	MEMORY_ALLOW_SHOOTING(&iLocal_265, true);
	Function_227(&iLocal_4 + 168, 0, 0, 0);
	Function_227(&iLocal_4 + 216, 0, 0, 0);
	Function_227(&iLocal_4 + 264, 0, 0, 0);
	Function_226(&fLocal_201);
	Function_226(&iLocal_4);
	Function_225();
	Function_195(bLocal_321, 1, 0, 1, 1, 1, 1, 1);
	Function_191(&iLocal_229);
	Function_191(&iLocal_215);
	Function_189();
	RELEASE_LAYOUT_REF(&fLocal_201);
	Function_187(Global_53579);
	if (bLocal_320)
	{
		Function_184(2, 0, 1, 0, 1);
		Function_175(&iLocal_265, 0, 0, 2);
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_265, 0);
		uVar0 = Vector(-2124,754f, 16,886f, 2595,035f);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/merchant_lay_bed", &uVar0, 4.0f, 0);
		GRINGO_ALLOW_ACTIVATION(&uVar2, true);
		SNAP_ACTOR_TO_GRINGO(&iLocal_265, GET_OBJECT_FROM_GRINGO(&uVar2), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&iLocal_265, &uVar2, "UseCase1", 4294967295, 1);
		DECOR_SET_BOOL(&iLocal_265, "bShopDontKill", 1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "merchant01finished", 1);
		Function_26(Local_203, 1, 1, 1, 0);
	}
	else if (bLocal_321)
	{
		Function_184(2, 1, 0, 1, 1);
		Function_22(Local_203);
	}
	else
	{
		Function_184(2, 1, 0, 1, 1);
		Function_2(Local_203);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x250 / 592
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x271 / 625
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x28E / 654
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2B1 / 689
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2C8 / 712
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

void Function_7(int iParam0) //Position: 0x36A / 874
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x38D / 909
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

void Function_9() //Position: 0x3D7 / 983
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3F0 / 1008
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x443 / 1091
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x56D / 1389
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

bool Function_13() //Position: 0x5A7 / 1447
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x5C2 / 1474
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x5CF / 1487
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x5EF / 1519
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x606 / 1542
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x621 / 1569
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x868 / 2152
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x894 / 2196
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

bool Function_21(int iParam0) //Position: 0x8B8 / 2232
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8CD / 2253
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x8EB / 2283
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x991 / 2449
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

struct<24> Function_25(char* cParam0) //Position: 0x9D0 / 2512
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC26 / 3110
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, bParam0, bVar1);
			Function_97();
		}
	}
	Function_39(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(bParam0) == 1)
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
		if (Function_17(bParam0) == 1)
		{
			iVar2 = Function_15(bParam0);
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

void Function_27() //Position: 0xD1A / 3354
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

bool Function_28(int iParam0, bool bParam1) //Position: 0xD4C / 3404
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

int Function_29(int iParam0) //Position: 0xD8A / 3466
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xDA4 / 3492
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xDBA / 3514
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10B7 / 4279
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

void Function_33(char* cParam0) //Position: 0x112C / 4396
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1166 / 4454
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

bool Function_35(var uParam0, int iParam1) //Position: 0x11E2 / 4578
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x11F5 / 4597
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

int Function_37(int iParam0) //Position: 0x1296 / 4758
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x12D3 / 4819
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12E9 / 4841
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
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
			Function_84(bParam0);
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
						switch (Function_15(bParam0))
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
			Function_40(bParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1547 / 5447
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1585 / 5509
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

void Function_42(bool bParam0) //Position: 0x15C4 / 5572
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
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

void Function_43() //Position: 0x1619 / 5657
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
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

void Function_44() //Position: 0x1664 / 5732
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

void Function_45() //Position: 0x176A / 5994
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

void Function_46() //Position: 0x179D / 6045
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

void Function_47() //Position: 0x1930 / 6448
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

void Function_48() //Position: 0x1AE9 / 6889
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1AF7 / 6903
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
	
	uVar0 = Function_50();
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

bool Function_50() //Position: 0x1D14 / 7444
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D29 / 7465
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DD0 / 7632
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x206C / 8300
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x26AA / 9898
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26B3 / 9907
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26C4 / 9924
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x27BB / 10171
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27D6 / 10198
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x283D / 10301
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x284F / 10319
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2861 / 10337
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x2995 / 10645
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29A4 / 10660
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x29DD / 10717
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A1A / 10778
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BB4 / 11188
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

int Function_67(bool bParam0) //Position: 0x2DF8 / 11768
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2E39 / 11833
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2EC2 / 11970
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2F59 / 12121
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2FD8 / 12248
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3015 / 12309
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3221 / 12833
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_74(char* cParam0) //Position: 0x32D8 / 13016
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x32F0 / 13040
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x33E8 / 13288
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x33F2 / 13298
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3403 / 13315
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3419 / 13337
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x34E5 / 13541
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3502 / 13570
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3D2E / 15662
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3D69 / 15721
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3D78 / 15736
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
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
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_87(bParam0) == 1)
					{
						iVar0 = Function_86(bParam0);
						if (Function_85(iVar0))
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
					iVar0 = Function_15(bParam0);
					if (Function_85(iVar0))
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
			switch (Function_15(bParam0))
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

bool Function_85(int iParam0) //Position: 0x4256 / 16982
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x426C / 17004
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x428B / 17035
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42A5 / 17061
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x430F / 17167
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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

void Function_90(int iParam0) //Position: 0x4537 / 17719
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

void Function_91() //Position: 0x45D5 / 17877
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x4737 / 18231
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x47B7 / 18359
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B0E / 19214
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

int Function_95(int iParam0) //Position: 0x4B96 / 19350
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BB0 / 19376
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4BDB / 19419
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C09 / 19465
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
		iVar14 = Function_113(iParam0);
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
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
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
				bVar4 = (Function_67(355) - Global_53524.f_168);
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
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EA5 / 20133
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
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
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x5079 / 20601
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

int Function_101(int iParam0, char* cParam1) //Position: 0x52E3 / 21219
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x5473 / 21619
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x5514 / 21780
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x55D2 / 21970
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

var Function_105(int iParam0) //Position: 0x5638 / 22072
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

int Function_106(int iParam0, bool bParam1) //Position: 0x56C7 / 22215
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5873 / 22643
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

void Function_108() //Position: 0x58B8 / 22712
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x58CE / 22734
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x590E / 22798
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x594E / 22862
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x595D / 22877
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

int Function_113(int iParam0) //Position: 0x5B25 / 23333
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

var Function_114() //Position: 0x5BBA / 23482
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5BDF / 23519
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
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60AE / 24750
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_106(1, bVar1);
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
			Function_119(1, (4294967295 * bVar1));
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
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
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
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x63D5 / 25557
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6478 / 25720
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6675 / 26229
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6820 / 26656
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
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
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x68F2 / 26866
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
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
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

void Function_122(int iParam0) //Position: 0x720D / 29197
{
	var uVar0;
	
	if (!Function_78(iParam0))
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
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x738A / 29578
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
				if (Function_124(StackVal, StackVal, Var1, Var3))
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7495 / 29845
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74C1 / 29889
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

var Function_126(vector3 vParam0) //Position: 0x7518 / 29976
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

void Function_127(var uParam0, int iParam1) //Position: 0x7566 / 30054
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x75C1 / 30145
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x7762 / 30562
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7768 / 30568
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7817 / 30743
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x786C / 30828
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7882 / 30850
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x78D3 / 30931
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x7900 / 30976
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7911 / 30993
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x792B / 31019
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x793C / 31036
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7A98 / 31384
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

bool Function_140() //Position: 0x7B23 / 31523
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7B50 / 31568
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7D00 / 32000
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7D57 / 32087
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

var Function_144(int iParam0) //Position: 0x7D7C / 32124
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x7DD2 / 32210
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

int Function_146(bool bParam0) //Position: 0x7E31 / 32305
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7E3D / 32317
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7E59 / 32345
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7EAB / 32427
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7EDB / 32475
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7F50 / 32592
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7FAD / 32685
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8020 / 32800
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x807B / 32891
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
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
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
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
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x833B / 33595
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
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
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
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

void Function_156(int iParam0, bool bParam1) //Position: 0x85DA / 34266
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

void Function_157() //Position: 0x8649 / 34377
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x86C9 / 34505
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
					if (Function_159(13) && iVar14)
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
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
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
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
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
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
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
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_159(int iParam0) //Position: 0x932C / 37676
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9341 / 37697
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(var uParam0, int iParam1) //Position: 0x9390 / 37776
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x93E8 / 37864
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x945B / 37979
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x946F / 37999
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
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
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x9560 / 38240
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x95B8 / 38328
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x95D5 / 38357
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x962F / 38447
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x9641 / 38465
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_170(struct<185> Param0) //Position: 0x9675 / 38517
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
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(bool bParam0, var uParam1, int iParam2) //Position: 0x96E0 / 38624
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
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x97CA / 38858
{
	int iVar0;
	
	Function_174(bParam0);
	Function_8(&bParam1);
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
	Function_173();
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

void Function_173() //Position: 0x9949 / 39241
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9955 / 39253
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

int Function_175(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x999B / 39323
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_176(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_176(&uParam0, &iParam1, &uParam2, &uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_176(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x9A89 / 39561
{
	char* cVar0[32];
	
	Function_183();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_182(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_181(&uParam0, 0);
	Function_180(&uParam0, iParam1);
	Function_179(&uParam0, &uParam2);
	Function_178(&uParam0, uParam3);
	if (Function_177(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_177(int iParam0) //Position: 0x9CF5 / 40181
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_178(var uParam0, bool bParam1) //Position: 0x9D19 / 40217
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x9D3D / 40253
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_180(var uParam0, bool bParam1) //Position: 0x9D63 / 40291
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_181(var uParam0, bool bParam1) //Position: 0x9D8A / 40330
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_182(bool bParam0) //Position: 0x9DAE / 40366
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_183() //Position: 0x9DCD / 40397
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

int Function_184(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9E1C / 40476
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (iParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_186(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_185(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_185(var uParam0) //Position: 0xA15E / 41310
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_186(int iParam0) //Position: 0xA191 / 41361
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

int Function_187(int iParam0) //Position: 0xA1A8 / 41384
{
	if (!Function_188(iParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 0;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
	return 1;
}

bool Function_188(int iParam0, int iParam1) //Position: 0xA1F7 / 41463
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_189() //Position: 0xA206 / 41478
{
	Function_190();
	return;
}

void Function_190() //Position: 0xA20F / 41487
{
	Function_191(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_191(int iParam0) //Position: 0xA222 / 41506
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_192(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_192(struct<2>[] Param0, int iParam1) //Position: 0xA24A / 41546
{
	if (Function_194(&(Param0[iParam12]), 4))
	{
		if (Function_194(&(Param0[iParam12]), 1))
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
			Function_193(&(Param0[iParam12]), 1);
			Function_193(&(Param0[iParam12]), 2);
			Function_193(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_193(struct<13> Param0) //Position: 0xA395 / 41877
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_194(struct<13> Param0) //Position: 0xA3B2 / 41906
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA3D0 / 41936
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_224());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_223();
	CLEAR_PRINTED_OBJECTIVE();
	Function_222();
	Function_220(0);
	Function_219();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_218();
	Function_217();
	Function_223();
	ENABLE_JOURNAL_REPLAY(1);
	Function_216(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_215(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_212(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_211();
	Function_210(1178687);
	Function_208(33039);
	Function_207(0x218003f);
	Function_206(4194560);
	Function_205();
	Function_204();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_201(0, 1, 1);
	}
	else
	{
		Function_201(0, 1, 1);
	}
	Function_200();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_196();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_196() //Position: 0xA5DC / 42460
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_199() > 3)
		{
			bVar0 *= 2;
		}
		Function_197(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA633 / 42547
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_198(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_198(bool bParam0) //Position: 0xA683 / 42627
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_199() //Position: 0xA6AC / 42668
{
	return Global_21369.f_248;
}

void Function_200() //Position: 0xA6B7 / 42679
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_201(int iParam0, bool bParam1, int iParam2) //Position: 0xA6E1 / 42721
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
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_202(Global_43789);
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
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
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
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_202(int iParam0) //Position: 0xA7ED / 42989
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_203())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
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

bool Function_203() //Position: 0xA86C / 43116
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_204() //Position: 0xA8D5 / 43221
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

void Function_205() //Position: 0xA8FB / 43259
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

void Function_206(int iParam0) //Position: 0xA921 / 43297
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_207(int iParam0) //Position: 0xA93E / 43326
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_208(int iParam0) //Position: 0xA951 / 43345
{
	Function_209(&Global_43580, iParam0);
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0xA95F / 43359
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_210(bool bParam0) //Position: 0xA97E / 43390
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_211() //Position: 0xA9AB / 43435
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_212(int iParam0) //Position: 0xAA23 / 43555
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_213(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_213(bool bParam0, bool bParam1, int iParam2) //Position: 0xAB59 / 43865
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_214(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_214(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_214(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_214(bool bParam0) //Position: 0xABA7 / 43943
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_215(int iParam0) //Position: 0xAC9B / 44187
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xAD1E / 44318
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

void Function_217() //Position: 0xAD95 / 44437
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_218() //Position: 0xADD9 / 44505
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_219() //Position: 0xAE1D / 44573
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_220(int iParam0) //Position: 0xAE33 / 44595
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_221())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_221() //Position: 0xAE73 / 44659
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_222() //Position: 0xAE98 / 44696
{
	Global_15862 = 0.0f;
	return;
}

void Function_223() //Position: 0xAEA2 / 44706
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_224() //Position: 0xAECD / 44749
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_225() //Position: 0xAEEA / 44778
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_226(int iParam0) //Position: 0xAEF3 / 44787
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_227(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAF5B / 44891
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				bVar2 = GET_VEHICLE(&uVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_228(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_228(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = GET_MOUNT(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_228(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_228(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
				}
				else if (&bParam2)
				{
					if (!Function_228(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB194 / 45460
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_229(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB1B4 / 45492
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_230() //Position: 0xB2C4 / 45764
{
	var uVar0[12];
	int iVar13;
	
	if (!Function_277())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "Final Cutscene";
	uVar0[4] = "Set Nigel Healthy";
	uVar0[5] = "Set Nigel Coughing";
	uVar0[6] = "Set Nigel Dying";
	uVar0[7] = "Set Nigel Saved";
	uVar0[8] = "Freeze Nigel State";
	uVar0[9] = "Unfreeze Nigel State";
	uVar0[10] = "Toggle HP to Log";
	uVar0[11] = "Teleport wagon to spot";
	iVar13 = Function_263(&uLocal_239, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
	if (Function_262(&iVar13, &iLocal_261, &bLocal_262, &iLocal_247))
	{
		Function_255();
		Function_254();
	}
	switch (iVar13)
	{
		case 0x00000000:
			Function_255();
			Function_254();
			Function_253(&bLocal_320, 8);
			break;
		
		case 0x00000001:
			Function_255();
			Function_254();
			Function_248(iLocal_261);
			Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
			break;
		
		case 0x00000002:
			Function_255();
			Function_254();
			Function_240(4);
			Function_1();
			break;
		
		case 0x00000003:
			Function_255();
			Function_254();
			Function_239(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_238();
			iLocal_247 = 1000;
			iLocal_261 = 101;
			Function_235(0);
			break;
		
		case 0x00000004:
			Function_255();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/not_coughing");
			fLocal_310 = (70.0f + 7.0f);
			iLocal_264 = 0;
			break;
		
		case 0x00000005:
			Function_255();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/coughing");
			fLocal_310 = 7.0f;
			iLocal_264 = 1;
			break;
		
		case 0x00000006:
			Function_255();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/puke");
			SET_ACTOR_IS_COMPANION(&iLocal_265, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(&iLocal_265, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_265, &iLocal_267, 0);
			Function_234();
			fLocal_310 = 0.0f;
			iLocal_264 = 2;
			break;
		
		case 0x00000007:
			Function_255();
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "sit_wounded", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "sit_wounded/player_save");
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/merchant_save");
			Function_231();
			fLocal_310 = 0.0f;
			iLocal_264 = 2;
			break;
		
		case 0x00000008:
			Function_255();
			iLocal_327 = 1;
			break;
		
		case 0x00000009:
			Function_255();
			iLocal_327 = 0;
			break;
		
		case 0x0000000A:
			Function_255();
			if (iLocal_341)
			{
				iLocal_341 = 0;
			}
			else
			{
				iLocal_341 = 1;
			}
			break;
		
		case 0x0000000B:
			Function_255();
			Function_229(&iLocal_267, &iLocal_4 + 560[19], 1, 1, 1);
			break;
	}
	return;
}

void Function_231() //Position: 0xB639 / 46649
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_jonCatchesWest", "Merchant01_jonCatchesWest", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_232(int iParam0) //Position: 0xB692 / 46738
{
	Function_233(0, &Global_54076, iParam0, 0);
	Function_233(1, &iLocal_265, iParam0, 0);
	return;
}

void Function_233(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xB6AE / 46766
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_234() //Position: 0xB6D6 / 46806
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_slumped", "Merchant01_DickensHealth_slumped", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_235(int iParam0) //Position: 0xB73D / 46909
{
	char* cVar0[32];
	
	Function_236(&iLocal_275);
	bLocal_262 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_261)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_236(int iParam0) //Position: 0xB8A1 / 47265
{
	Function_237(&iParam0, 0.0f);
	return;
}

void Function_237(vector3 vParam0) //Position: 0xB8AE / 47278
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_238() //Position: 0xB8D3 / 47315
{
	return;
}

void Function_239(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB8D9 / 47321
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

void Function_240(int iParam0) //Position: 0xB903 / 47363
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_243("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_242(2) || Function_242(8)) || Function_242(9)) || Function_242(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_243("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_243("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_243("");
	}
	else if (iParam0 == 8)
	{
		Function_241();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_241();
	}
	return;
}

void Function_241() //Position: 0xB9FA / 47610
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_242(int iParam0) //Position: 0xBA06 / 47622
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_243(char* cParam0) //Position: 0xBA3C / 47676
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_244(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBAA8 / 47784
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_245(StackVal, Param4, uParam3, &iParam6);
		Function_240(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_245(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBAE9 / 47849
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_247(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_246(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_246(int iParam0) //Position: 0xBB6B / 47979
{
	if (!Function_85(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_247(struct<2> Param0, bool bParam2) //Position: 0xC01B / 49179
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

struct<8> Function_248(int iParam0) //Position: 0xC087 / 49287
{
	Function_249(iParam0 + 1);
	return StackVal, Function_249(iParam0 + 1);
}

struct<8> Function_249(int iParam0) //Position: 0xC094 / 49300
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_250(&iLocal_4 + 560[0]);
			return StackVal, Function_250(&iLocal_4 + 560[0]);
			break;
		
		default:
			Function_250(&iLocal_4 + 560[1]);
			return StackVal, Function_250(&iLocal_4 + 560[1]);
			break;
	}
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_250(&iLocal_4 + 560[0]);
	return StackVal, Function_250(&iLocal_4 + 560[0]);
}

struct<8> Function_250(bool bParam0) //Position: 0xC122 / 49442
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

int Function_251(int iParam0) //Position: 0xC14B / 49483
{
	return Function_252(iParam0 + 1);
}

int Function_252(int iParam0) //Position: 0xC158 / 49496
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 560[0]);
		
		default:
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 560[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 560[0]);
}

void Function_253(bool bParam0, int iParam1) //Position: 0xC1E0 / 49632
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	bParam0 = 1;
	return;
}

void Function_254() //Position: 0xC205 / 49669
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_255() //Position: 0xC21A / 49690
{
	Function_257();
	Function_256(10, 3);
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xC229 / 49705
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

void Function_257() //Position: 0xC376 / 50038
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_261())
	{
		Function_260(10, 3);
	}
	else
	{
		Function_258();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_258() //Position: 0xC3C1 / 50113
{
	Function_259(25, 2);
	return;
}

void Function_259(int iParam0, int iParam1) //Position: 0xC3CD / 50125
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

void Function_260(int iParam0, int iParam1) //Position: 0xC5F9 / 50681
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

bool Function_261() //Position: 0xC746 / 51014
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

bool Function_262(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC7AE / 51118
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_243("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_263(struct<17> Param0) //Position: 0xC85D / 51293
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_276(&Var12, &Var0);
	uVar15 = Function_275(uParam1, &Var12);
	Function_274(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_273(&Param0, uVar15);
	Function_271(StackVal, &Param0, Var12.f_12);
	Function_269(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_268(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_265(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_264(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_264(int iParam0, int iParam1, int iParam2) //Position: 0xC951 / 51537
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

bool Function_265(struct<17> Param0) //Position: 0xC9B1 / 51633
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
				Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_264(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_266(Param1.f_64);
	}
	else
	{
		Function_266(Param1.f_64);
	}
	return 0;
}

void Function_266(bool bParam0) //Position: 0xCB44 / 52036
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

void Function_267(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCB82 / 52098
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

var Function_268(int iParam0, struct<21> Param1) //Position: 0xCC38 / 52280
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_269(vector3 vParam0) //Position: 0xCC5F / 52319
{
	switch (Function_270())
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

int Function_270() //Position: 0xCD0B / 52491
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

void Function_271(vector3 vParam0) //Position: 0xCD47 / 52551
{
	switch (Function_272(&vParam0))
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

int Function_272(bool bParam0) //Position: 0xCDF0 / 52720
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_273(struct<21> Param0) //Position: 0xCF10 / 53008
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

void Function_274(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD0CA / 53450
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

var Function_275(int iParam0, struct<13> Param1) //Position: 0xD166 / 53606
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_276(struct<17> Param0) //Position: 0xD182 / 53634
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

bool Function_277() //Position: 0xD1DC / 53724
{
	return Global_47307;
}

bool Function_278() //Position: 0xD1E5 / 53733
{
	if (IS_EXITFLAG_SET())
	{
		Function_248(iLocal_261);
		Function_244(StackVal, 4, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
		return 0;
	}
	Function_560(StackVal, StackVal, StackVal, StackVal, StackVal, Local_203, iLocal_261, bLocal_262, &bLocal_322, &bLocal_320, &bLocal_321);
	if (iLocal_261 == 99 && iLocal_261 == 100)
	{
		if (Function_559(bLocal_262))
		{
			if (IS_ACTOR_DEAD(&Global_54076))
			{
				Function_248(iLocal_261);
				Function_244(StackVal, 1, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
				return 1;
			}
			if (Function_558(2048))
			{
				Function_248(iLocal_261);
				Function_244(StackVal, 3, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
				return 1;
			}
			if (Global_6646 || Global_6647)
			{
				Function_248(iLocal_261);
				Function_244(StackVal, 2, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
			}
			if (IS_ACTOR_DEAD(&iLocal_265))
			{
				if (bLocal_326)
				{
					Function_243("Merchant_outOfBounds");
					Function_248(iLocal_261);
					Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
					return 1;
				}
				Function_243("Merchant_dead");
				Function_248(iLocal_261);
				Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
				return 1;
			}
			if (IS_ACTOR_VALID(&iLocal_267) && iLocal_261 > 101)
			{
				if (!Function_557(&iLocal_267, 1, 0, 4294967295))
				{
					Function_556();
					Function_243("Wagon_dead");
					Function_248(iLocal_261);
					Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
					return 1;
				}
			}
			if (Function_537(&Local_444, &uLocal_390, &uLocal_506, &uLocal_259, bLocal_389))
			{
				if (Function_535(&uLocal_506))
				{
					Function_248(iLocal_261);
					Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
					return 1;
				}
			}
			Function_534();
		}
	}
	switch (iLocal_261)
	{
		case 0x00000063:
			Function_513();
			break;
		
		case 0x00000000:
			Function_369();
			break;
		
		case 0x00000065:
			Function_282();
			break;
		
		case 0x00000064:
			if (Function_281(&bLocal_321))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_280(&iLocal_261, &bLocal_262, &iLocal_247))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_320)
	{
		Function_253(&bLocal_320, 8);
		Function_1();
		return 0;
	}
	if (bLocal_321 && iLocal_261 == 100)
	{
		Function_248(iLocal_261);
		Function_244(StackVal, 5, &bLocal_321, &iLocal_261, Function_251(iLocal_261), Function_248(iLocal_261), 0);
	}
	if (bLocal_322)
	{
		Function_279(&bLocal_322, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_279(var uParam0, int iParam1) //Position: 0xD43B / 54331
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_280(var uParam0, var uParam1, int iParam2) //Position: 0xD460 / 54368
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_281(int iParam0) //Position: 0xD4A9 / 54441
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_282() //Position: 0xD4BD / 54461
{
	switch (bLocal_262)
	{
		case 0x00000000:
			Function_365(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(6);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_263 = Global_46736[0];
			if (!Function_364(iLocal_263))
			{
				Function_363(&Local_203);
			}
			Function_361();
			Function_235(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_263) || iLocal_263 != 4294967295))
			{
				Function_235(3);
			}
			break;
		
		case 0x00000003:
			if (iLocal_317 == 0)
			{
				if (Function_291("$/cutscene/MERCHANT01_CS03/MERCHANT01_CS03", &iLocal_247, &Local_203, &iLocal_261, 73474, 73383, 73280, 73119, 72853, 59874, 0, 1, 1, 1, 2, 0, 1))
				{
					iLocal_317++;
				}
			}
			else if (iLocal_317 == 1)
			{
				if (Function_291("$/cutscene/MERCHANT01_CS03_B/MERCHANT01_CS03_B", &iLocal_247, &Local_203, &iLocal_261, 54810, 73383, 73280, 73119, 72853, 59874, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_235(106);
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_320 = true;
			}
			break;
	}
	return;
}

int Function_283() //Position: 0xD61A / 54810
{
	switch (iLocal_261)
	{
		case 0x00000065:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 272[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 272[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 272[2], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 272[2]);
			Function_287(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_250(&iLocal_4 + 560[3]);
			Function_285(StackVal, &fLocal_201, Function_250(&iLocal_4 + 560[3]), &iLocal_4 + 272[2], 0, 0, 0, 0, 1, 1);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_267, Vector(-2130,073f, 16,14567f, 2606,818f), 82,54f, 1, 1, 0);
			Function_284();
			STOP_VEHICLE(&iLocal_267);
			return 1;
			break;
	}
	return 0;
}

void Function_284() //Position: 0xD6C9 / 54985
{
	SET_ACTOR_SPEED(&iLocal_267, 0.0f);
	ACTOR_RESET_ANIMS(&iLocal_267, 1);
	RESET_ACTOR_GAITS(&iLocal_267, 0);
	AI_ACTOR_FORCE_SPEED(&iLocal_267, 5);
	if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, &iLocal_267)))
	{
		SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &iLocal_267), 0.0f);
		ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(false, &iLocal_267), 1);
		RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(false, &iLocal_267), 0);
		AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &iLocal_267), 5);
	}
	if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, &iLocal_267)))
	{
		SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &iLocal_267), 0.0f);
		ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(true, &iLocal_267), 1);
		RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(true, &iLocal_267), 0);
		AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &iLocal_267), 5);
	}
	return;
}

void Function_285(float fParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xD76E / 55150
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &fParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &fParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_286(&uVar1, &fParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_286(var uParam0, float fParam1) //Position: 0xDA0E / 55822
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_287(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xDA90 / 55952
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_254();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		fVar1 = Function_50();
		if (IS_ACTOR_VALID(&fVar1))
		{
			if (GET_WEAPON_IN_HAND(&fVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&fVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&fVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&fVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&fVar1, false);
			}
			SET_ACTOR_HEALTH(&fVar1, GET_ACTOR_MAX_HEALTH(&fVar1));
			SET_ACTOR_INVULNERABILITY(&fVar1, 1);
			AI_IGNORE_ACTOR(&fVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_290(&fVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_290(&fVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_289()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_289()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_288(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_288(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_288(int iParam0) //Position: 0xDD42 / 56642
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_289() //Position: 0xDD5E / 56670
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_290(float fParam0) //Position: 0xDDEC / 56812
{
	struct<2> Var0;
	
	GET_POSITION(&fParam0, &Var0);
	return StackVal, Var0;
}

bool Function_291(int iParam0, int iParam1, struct<41> Param2) //Position: 0xDDFE / 56830
{
	if (!&bParam15)
	{
		Function_304(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_303(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&iParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_236(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_302())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_301(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_236(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_301(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_298(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_298(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_296(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_301(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_236(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_295(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_293();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_292(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_303(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_292(var uParam0, bool bParam1) //Position: 0xE460 / 58464
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_211();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_293() //Position: 0xE52F / 58671
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_294();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_294() //Position: 0xE574 / 58740
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_295(bool bParam0) //Position: 0xE586 / 58758
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

void Function_296(var uParam0, int iParam1) //Position: 0xE5A3 / 58787
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_297(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_297(int iParam0) //Position: 0xE635 / 58933
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

float Function_298(vector3 vParam0) //Position: 0xE666 / 58982
{
	if (Function_300(&vParam0))
	{
		if (Function_299(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_299(int iParam0) //Position: 0xE733 / 59187
{
	return Function_14(iParam0, 2);
}

bool Function_300(int iParam0) //Position: 0xE741 / 59201
{
	return Function_14(iParam0, 1);
}

int Function_301(bool bParam0) //Position: 0xE74F / 59215
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_302() //Position: 0xE812 / 59410
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_303(struct<37> Param0) //Position: 0xE84F / 59471
{
	return Param0.f_36;
}

void Function_304(var uParam0, int iParam1) //Position: 0xE85A / 59482
{
	Function_305(&uParam0, &iParam1, 0);
	return;
}

void Function_305(var uParam0, bool bParam1, var uParam2) //Position: 0xE86A / 59498
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_239(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&uParam2))
						{
							Function_239(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

int Function_306() //Position: 0xE9E2 / 59874
{
	switch (iLocal_261)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if (Function_336())
				{
					Function_334();
					Function_307();
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000065:
			TELEPORT_ACTOR_WITH_HEADING(Function_334(), &Global_54076, Vector(-2125,253f, 16,912f, 2600,361f), 75.0f, 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_307() //Position: 0xEA57 / 59991
{
	if (!iLocal_323)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
		Function_329();
		Function_309();
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 8);
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		iLocal_311 = 4294967295;
		iLocal_345 = 0;
		iLocal_344 = 0;
		fLocal_310 = 100.0f;
		iLocal_264 = 0;
		uLocal_367 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Squad_Layout"));
		SQUAD_JOIN(&Global_54076, &uLocal_367);
		SQUAD_JOIN(&iLocal_265, &uLocal_367);
		SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_267, false);
		Local_347 = Vector(-1698,88f, 29,11f, 3067,71f);
		STREAMING_LOAD_BOUNDS_EXT(0, Local_347, 10.0f, 0);
		TELEPORT_ACTOR_WITH_HEADING(&iLocal_267, Local_347, 83,85f, 1, 1, 0);
		Function_236(&iLocal_275);
		Function_236(&iLocal_279);
		Function_308(&iLocal_287);
		CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_267);
		ACTOR_SET_GRABBED_BY_CUTSCENE(&uLocal_520, true);
		ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_522, true);
		Function_284();
		STOP_VEHICLE(&iLocal_267);
		iLocal_323 = 1;
	}
	return;
}

void Function_308(int iParam0) //Position: 0xEB51 / 60241
{
	if (!Function_300(&iParam0))
	{
		Function_237(&iParam0, 0.0f);
	}
	return;
}

void Function_309() //Position: 0xEB68 / 60264
{
	bool bVar0;
	
	if (!iLocal_340)
	{
		if (!IS_ACTOR_VALID(&iLocal_267))
		{
			Function_329();
			Function_328(&iLocal_267, 1);
		}
		Function_327(&iLocal_267);
		uLocal_273 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &fLocal_201, "wagonEx", 2,802597E-45f, Function_327(&iLocal_267), Vector(0.0f, 90.0f, 0.0f), Vector(10.0f, 10.0f, 20.0f));
		ATTACH_OBJECTS_CONTINUOUS(&uLocal_273, &iLocal_267, 4294967295);
		TASK_STAND_STILL(&iLocal_267, -1.0f, 1, 0);
		SET_ACTOR_SPEED(&iLocal_267, 0.0f);
		RESET_ACTOR_GAITS(&iLocal_267, 1);
		ADD_BLIP_FOR_ACTOR(&iLocal_267, 325, 0.0f, 2, 0);
		if (Function_328(&iLocal_265, 1))
		{
			RESET_ACTOR_GAITS(&iLocal_265, 0);
			SET_CRIPPLE_ENABLE(&iLocal_265, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_265, false);
			SET_ACTOR_FACTION(&iLocal_265, 20);
			TASK_PRIORITY_SET(&iLocal_265, true);
			TASK_STAND_STILL(&iLocal_265, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_265, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_265, 50.0f);
			Function_326(&iLocal_265);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_265);
			MEMORY_ALLOW_SHOOTING(&iLocal_265, false);
			DEEQUIP_ACCESSORY(&iLocal_265, 0);
			SET_ACTOR_IN_VEHICLE(&iLocal_265, &iLocal_267, true);
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_265, 0);
			SET_ANIM_SET_FOR_ACTOR(&iLocal_265, "sit_wounded", 0);
			SET_REACT_NODE_FOR_ACTOR(&Global_54076, "sit_wounded/Reaction/");
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/not_coughing");
			Function_324(4, 0, 1);
			Function_317(&(Local_444[115]), &iLocal_267, "Wagon", 1, 0x5f5e100, 1);
		}
		iLocal_269 = Function_310(0, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(&iLocal_269))
		{
			Function_229(&iLocal_269, &iLocal_4 + 560[4], 1, 1, 1);
			TASK_STAND_STILL(&iLocal_269, -1.0f, 0, 0);
		}
		bVar0 = false;
		while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&iLocal_267))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_DRAFT_ACTOR(bVar0, &iLocal_267), 0,1f);
			SET_ACTOR_FACTION(GET_DRAFT_ACTOR(bVar0, &iLocal_267), 20);
			bVar0++;
		}
		iLocal_340 = 1;
		iLocal_327 = 1;
		iLocal_324 = 0;
	}
	return;
}

var Function_310(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xED71 / 60785
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_316(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_315())
		{
			return "";
		}
	}
	if (!Function_313())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_211();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_312(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_312(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_74(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_311(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_311(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF0CE / 61646
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

var Function_312(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF118 / 61720
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
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
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_313() //Position: 0xF1B8 / 61880
{
	if (Function_314() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_314() //Position: 0xF1CE / 61902
{
	return Global_21369.f_244;
}

bool Function_315() //Position: 0xF1D9 / 61913
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_316(var uParam0, bool bParam1, bool bParam2) //Position: 0xF1F9 / 61945
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

int Function_317(struct<69> Param0) //Position: 0xF228 / 61992
{
	if (!Function_323(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_322(&Param0, &uParam2))
	{
		return 0;
	}
	Function_321(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_318(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_318(var uParam0, int iParam1, int iParam2) //Position: 0xF26E / 62062
{
	if (iParam1 != 100000000)
	{
		Function_320(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_319(&uParam0, &iParam2);
	}
	return;
}

void Function_319(struct<69> Param0) //Position: 0xF295 / 62101
{
	Param0.f_68 = 0;
	Function_320(&Param0, 2, &bParam1);
	Function_320(&Param0, 4, &bParam1);
	Function_320(&Param0, 8, &bParam1);
	Function_320(&Param0, 16, &bParam1);
	Function_320(&Param0, 32, &bParam1);
	Function_320(&Param0, 64, &bParam1);
	Function_320(&Param0, 128, &bParam1);
	Function_320(&Param0, 256, &bParam1);
	Function_320(&Param0, 512, &bParam1);
	Function_320(&Param0, 1024, &bParam1);
	return;
}

void Function_320(int iParam0, int iParam1, bool bParam2) //Position: 0xF310 / 62224
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_321(struct<65> Param0) //Position: 0xF34F / 62287
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_322(int iParam0, char* cParam1) //Position: 0xF35C / 62300
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_323(struct<61> Param0) //Position: 0xF3E9 / 62441
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_324(int iParam0, bool bParam1, bool bParam2) //Position: 0xF59C / 62876
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			*(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_185(&uVar1);
					}
				}
				Function_325(&uVar0);
			}
		}
	}
	return;
}

void Function_325(var uParam0) //Position: 0xF6AB / 63147
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

void Function_326(int iParam0) //Position: 0xF6DE / 63198
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			SET_ACTOR_HEALTH(&iParam0, GET_ACTOR_MAX_HEALTH(&iParam0));
		}
	}
	return;
}

struct<8> Function_327(int iParam0) //Position: 0xF702 / 63234
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

bool Function_328(var uParam0, bool bParam1) //Position: 0xF770 / 63344
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_329() //Position: 0xF7B3 / 63411
{
	if (!IS_ACTOR_VALID(&iLocal_267))
	{
		iLocal_267 = Function_330(StackVal, StackVal, &fLocal_201, "Wagon", 1202, 981, Vector(-1698,88f, 29,11f, 3067,71f), Vector(0.0f, 83,35f, 0.0f), 1, 987, 976, 976, 4);
		uLocal_520 = GET_DRAFT_ACTOR(false, &iLocal_267);
		iLocal_522 = GET_DRAFT_ACTOR(true, &iLocal_267);
	}
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_267, false);
	return;
}

var Function_330(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xF81F / 63519
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_333(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_332(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_331(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_331(int iParam0, bool[] bParam1) //Position: 0xFA72 / 64114
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_332(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xFAA6 / 64166
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_333(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xFAC2 / 64194
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

struct<8> Function_334() //Position: 0xFAEE / 64238
{
	var uVar0;
	
	Function_335(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Merchant01_layout");
	(&iLocal_4 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVolumes_set");
	*(&iLocal_4 + 272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-1714,147f, 29,88401f, 3058,147f), Vector(0.0f, 0.0f, 0.0f), Vector(50,21133f, 11,94712f, 56,08859f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 304, &iLocal_4 + 272[0]);
	*(&iLocal_4 + 272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneFinalVol", 2,802597E-45f, Vector(-2140,467f, 19,6774f, 2611,08f), Vector(0.0f, 0.0f, 0.0f), Vector(93,53979f, 8,800646f, 15,00222f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 304, &iLocal_4 + 272[1]);
	*(&iLocal_4 + 272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneFinalVol2", 2,802597E-45f, Vector(-2125,434f, 18,68193f, 2603,569f), Vector(0.0f, 0.0f, 0.0f), Vector(3,782386f, 5,82832f, 7,569668f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 304, &iLocal_4 + 272[2]);
	*(&iLocal_4 + 336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "OutOfBoundsVolumes_set");
	*(&iLocal_4 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "OutOfBoundsVol020", 2,802597E-45f, Vector(-1952,623f, 21,9882f, 2513,954f), Vector(0.0f, 216,5293f, 0.0f), Vector(24,99251f, 15,89102f, 316,8701f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 336, &iLocal_4 + 312[0]);
	*(&iLocal_4 + 312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "OutOfBoundsVol021", 2,802597E-45f, Vector(-1956,925f, 23,44684f, 2717,225f), Vector(0.0f, 133,102f, 0.0f), Vector(24,99251f, 15,89102f, 268,2274f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 336, &iLocal_4 + 312[1]);
	*(&iLocal_4 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "RoadVolumes_set");
	*(&iLocal_4 + 344[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerNotMovedVol", 2,802597E-45f, Vector(-1714,347f, 31,92004f, 3066,888f), Vector(0.0f, 5.0f, 0.0f), Vector(66,71149f, 11,64128f, 35,70818f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[0]);
	*(&iLocal_4 + 344[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave01_AttackTrig", 2,802597E-45f, Vector(-1990,345f, 40,71871f, 3136,732f), Vector(0.0f, 1.0f, 0.0f), Vector(16,10556f, 60,26153f, 658,2599f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[1]);
	*(&iLocal_4 + 344[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave01_Spawn", 2,802597E-45f, Vector(-1962,503f, 39,0824f, 3113,504f), Vector(0.0f, 2.0f, 0.0f), Vector(13,63595f, 48,38581f, 658,2599f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[2]);
	*(&iLocal_4 + 344[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave02_AttackTrig", 2,802597E-45f, Vector(-2354,05f, 24,25581f, 2871,436f), Vector(0.0f, -41.0f, 0.0f), Vector(261,6494f, 27,25555f, 328,4649f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[3]);
	*(&iLocal_4 + 344[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave02_Spawn2", 2,802597E-45f, Vector(-2353,629f, 24,25581f, 2884,223f), Vector(0.0f, -41.0f, 0.0f), Vector(333,1614f, 36,97114f, 394,8251f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[4]);
	*(&iLocal_4 + 344[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave_Back_Spawn_R", 2,802597E-45f, Vector(-1671,95f, 26,20031f, 2809,492f), Vector(0.0f, -45.0f, 0.0f), Vector(46,21426f, 20,21224f, 329,4241f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[5]);
	*(&iLocal_4 + 344[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave_Back_Spawn_L", 2,802597E-45f, Vector(-1931,731f, 31,34254f, 2894,674f), Vector(0.0f, -99,76541f, 0.0f), Vector(46,21426f, 20,21224f, 329,4241f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[6]);
	*(&iLocal_4 + 344[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Wave01_LoadBounds", 2,802597E-45f, Vector(-1916,027f, 39,0824f, 3111,881f), Vector(0.0f, 2.0f, 0.0f), Vector(22,77082f, 48,38581f, 658,2599f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[7]);
	*(&iLocal_4 + 344[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ExtraRough", 2,802597E-45f, Vector(-1759,717f, 31,34254f, 2939,647f), Vector(0.0f, -88,76541f, 0.0f), Vector(161,6121f, 20,21224f, 550,1494f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 344[8]);
	*(&iLocal_4 + 472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ArmadilloVolumes_set");
	*(&iLocal_4 + 432[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nNearbyVol", 2,802597E-45f, Vector(-2148,481f, 18,24758f, 2598,682f), Vector(0.0f, 0.0f, 0.0f), Vector(132,2226f, 7,652685f, 106,1442f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 472, &iLocal_4 + 432[0]);
	*(&iLocal_4 + 432[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nDoctorVol", 2,802597E-45f, Vector(-2126,505f, 17,66647f, 2611,089f), Vector(0.0f, 0.0f, 0.0f), Vector(26,19291f, 5,202918f, 18,03189f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 472, &iLocal_4 + 432[1]);
	*(&iLocal_4 + 432[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "walkThruVol", 2,802597E-45f, Vector(-2145,51f, 17,66647f, 2592,732f), Vector(0.0f, 0.0f, 0.0f), Vector(105,5339f, 3,093467f, 100,3182f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 472, &iLocal_4 + 432[2]);
	*(&iLocal_4 + 432[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "FleeVol", 2,802597E-45f, Vector(-2148,481f, 18,24758f, 2598,682f), Vector(0.0f, 0.0f, 0.0f), Vector(190,0528f, 10,99974f, 152,5685f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 472, &iLocal_4 + 432[3]);
	*(&iLocal_4 + 544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "LOSArmadilloVolumes_set");
	*(&iLocal_4 + 480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol", 2,802597E-45f, Vector(-2312,089f, 24,38528f, 2819,045f), Vector(0.0f, 49,90213f, 0.0f), Vector(28,2243f, 20,59002f, 339,6332f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[0]);
	*(&iLocal_4 + 480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol1", 2,802597E-45f, Vector(-2008,63f, 26,0182f, 2697,836f), Vector(0.0f, -34,09787f, 0.0f), Vector(28,2243f, 20,59002f, 127,3373f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[1]);
	*(&iLocal_4 + 480[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol2", 2,802597E-45f, Vector(-1938,287f, 26,0182f, 2631,056f), Vector(0.0f, -67,09787f, 0.0f), Vector(28,2243f, 20,59002f, 87,03372f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[2]);
	*(&iLocal_4 + 480[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol3", 2,802597E-45f, Vector(-1900,403f, 26,0182f, 2568,949f), Vector(0.0f, -1,097872f, 0.0f), Vector(28,2243f, 20,59002f, 131,266f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[3]);
	*(&iLocal_4 + 480[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol4", 2,802597E-45f, Vector(-1958,668f, 26,0182f, 2465,811f), Vector(0.0f, 52,90213f, 0.0f), Vector(28,2243f, 20,59002f, 166,0848f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[4]);
	*(&iLocal_4 + 480[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol5", 2,802597E-45f, Vector(-2135,433f, 26,0182f, 2410,636f), Vector(0.0f, 85,90213f, 0.0f), Vector(28,2243f, 20,59002f, 233,6807f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[5]);
	*(&iLocal_4 + 480[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "losVol6", 2,802597E-45f, Vector(-2089,296f, 26,0182f, 2783,731f), Vector(1,01112f, -51,76834f, 1,359475f), Vector(28,2243f, 20,59002f, 127,3373f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 544, &iLocal_4 + 480[6]);
	*(&iLocal_4 + 552) = CREATE_OBJECTSET_IN_LAYOUT("StagePositionsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 560[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerPos01", Vector(-1701,062f, 29,114f, 3069,637f), Vector(0.0f, 12.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[0], &iLocal_4 + 552);
	*(&iLocal_4 + 560[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerPosFinal", Vector(-2128,847f, 16,098f, 2611,471f), Vector(0.0f, 348.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[1], &iLocal_4 + 552);
	*(&iLocal_4 + 560[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionPosFinal", Vector(-2124,268f, 16,917f, 2596.0f), Vector(0.0f, -184,7416f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[2], &iLocal_4 + 552);
	*(&iLocal_4 + 560[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FinalGateway", Vector(-2125,845f, 16,09741f, 2608,227f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[3], &iLocal_4 + 552);
	*(&iLocal_4 + 560[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorsePos", Vector(-1700f, 29,63983f, 3057,917f), Vector(0.0f, 142.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[4], &iLocal_4 + 552);
	*(&iLocal_4 + 560[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TrainStart4", Vector(-2531,803f, 15,35033f, 3002,073f), Vector(0.0f, 140.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[5], &iLocal_4 + 552);
	*(&iLocal_4 + 560[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonPos04", Vector(-2907,918f, 13,8649f, 3029,415f), Vector(140,9625f, -87,17837f, -140,5214f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[6], &iLocal_4 + 552);
	*(&iLocal_4 + 560[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nTrainEnd1", Vector(-3489,315f, 20,5297f, 2568,85f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[7], &iLocal_4 + 552);
	*(&iLocal_4 + 560[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorsePos02", Vector(-2095,411f, 16,449f, 2604,545f), Vector(4,990509f, -69,12f, -4,189142f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[8], &iLocal_4 + 552);
	*(&iLocal_4 + 560[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerPos_End", Vector(-2126,006f, 16,909f, 2601,592f), Vector(0.0f, 539.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[9], &iLocal_4 + 552);
	*(&iLocal_4 + 560[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerPosStart_New", Vector(-1700f, 29,11371f, 3068,089f), Vector(0.0f, 109.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[10], &iLocal_4 + 552);
	*(&iLocal_4 + 560[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BaddieStart_01", Vector(-2118,438f, 35,13727f, 3092.0f), Vector(1,044841f, 231,7344f, -1,003757f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[11], &iLocal_4 + 552);
	*(&iLocal_4 + 560[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BaddieStart_02", Vector(-2092.0f, 38,09968f, 3080,197f), Vector(0.0f, 227.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[12], &iLocal_4 + 552);
	*(&iLocal_4 + 560[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BaddieStart_03", Vector(-2120.0f, 34,88313f, 3098,391f), Vector(0.0f, 236.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[13], &iLocal_4 + 552);
	*(&iLocal_4 + 560[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BaddieStart_04", Vector(-2320.0f, 17,06667f, 3164,067f), Vector(0.0f, 109.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[14], &iLocal_4 + 552);
	*(&iLocal_4 + 560[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BaddieStart_06", Vector(-1738,551f, 25,566f, 2861,167f), Vector(0.0f, 109.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[15], &iLocal_4 + 552);
	*(&iLocal_4 + 560[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lb14_NewStart", Vector(-1986,243f, 46,59863f, 3091,826f), Vector(0.0f, 109.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[16], &iLocal_4 + 552);
	*(&iLocal_4 + 560[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lb14_NewStart1", Vector(-1996,052f, 44,169f, 3091,004f), Vector(0.0f, 109.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[17], &iLocal_4 + 552);
	*(&iLocal_4 + 560[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonPos051", Vector(-1698,88f, 29,11f, 3067,71f), Vector(0.0f, 89,90145f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[18], &iLocal_4 + 552);
	*(&iLocal_4 + 560[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonPosSkip", Vector(-2168.0f, 16,21359f, 2611,988f), Vector(0.0f, -91,09855f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 560[19], &iLocal_4 + 552);
	PushArrayP();
	*(&iLocal_4 + 728) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "wv02_Right1");
	PushArrayP();
	*(&iLocal_4 + 736) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "wv02_Mid");
	PushArrayP();
	*(&iLocal_4 + 744) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "nwv02_Left");
	PushArrayP();
	*(&iLocal_4 + 752) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "wv01_Mid");
	PushArrayP();
	*(&iLocal_4 + 760) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "wv01_Right");
	PushArrayP();
	*(&iLocal_4 + 768) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "w01_Left");
	return;
}

void Function_335(int iParam0, int iParam1) //Position: 0x10D5E / 68958
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

bool Function_336() //Position: 0x10DA8 / 69032
{
	if (!Function_351())
	{
		return 0;
	}
	if (!Function_346(&iLocal_229))
	{
		return 0;
	}
	if (!Function_346(&iLocal_215))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_265))
	{
		iLocal_265 = Function_337(2, 0, 1, -1700.0f, 30.0f, 3058.0f, 0, 0, 0);
		return 0;
	}
	return 1;
}

var Function_337(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x10DF7 / 69111
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_324(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_345(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_340(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &fParam3;
			Var3.f_4 = &fParam4;
			Var3.f_8 = &fParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_339(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_338(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_338(var uParam0, bool bParam1) //Position: 0x11337 / 70455
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_339(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x11359 / 70489
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_340(int iParam0, int iParam1) //Position: 0x113BA / 70586
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_344(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_341(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_341(var uParam0, int iParam1) //Position: 0x11448 / 70728
{
	Function_343(&uParam0);
	Function_342(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_342(int iParam0) //Position: 0x11474 / 70772
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_343(int iParam0) //Position: 0x1149A / 70810
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

bool Function_344(int iParam0) //Position: 0x11570 / 71024
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_345(int iParam0, var uParam1) //Position: 0x11587 / 71047
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_346(struct<2>[] Param0) //Position: 0x1162D / 71213
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_350();
	iVar1 = 0;
	if (!Function_194(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_349(&(Param0[iVar02]), 8);
		}
		else if (Function_348())
		{
			iVar1 = 1;
			Function_349(&(Param0[iVar02]), 8);
		}
		Function_349(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_194(&(Param0[iVar02]), 4))
		{
			if (!Function_194(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_194(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_194(&(Param0[02]), 8) || iVar1));
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
				Function_349(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_194(&(Param0[iVar02]), 4))
		{
			if (!Function_194(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
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
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
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
	Function_347();
	return 1;
}

void Function_347() //Position: 0x119EF / 72175
{
	if (!Function_288(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_348() //Position: 0x11A2F / 72239
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

void Function_349(struct<13> Param0) //Position: 0x11A5D / 72285
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_350() //Position: 0x11A70 / 72304
{
	if (!Function_288(128))
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

bool Function_351() //Position: 0x11AB2 / 72370
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_354(0))
	{
		return 0;
	}
	if (!Function_352())
	{
		return 0;
	}
	if (!Function_346(&iLocal_215))
	{
		return 0;
	}
	if (!Function_346(&iLocal_229))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_265))
	{
		iLocal_265 = Function_337(2, 0, 1, -1700.0f, 30.0f, 3058.0f, 0, 0, 0);
		return 0;
	}
	DEEQUIP_ACCESSORY(&iLocal_265, 0);
	return 1;
}

bool Function_352() //Position: 0x11B1B / 72475
{
	Function_353(&iLocal_4 + 8, 416, 2, 0);
	Function_353(&iLocal_4 + 8, 977, 2, 0);
	Function_353(&iLocal_4 + 8, 417, 2, 0);
	Function_353(&iLocal_4 + 8, 980, 2, 0);
	Function_353(&iLocal_4 + 8, 415, 2, 0);
	Function_353(&iLocal_4 + 8, 976, 2, 0);
	Function_353(&iLocal_4 + 8, 400, 2, 0);
	if (Function_346(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_353(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11B89 / 72585
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_194(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_349(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_349(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_354(bool bParam0) //Position: 0x11C65 / 72805
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

int Function_355() //Position: 0x11C95 / 72853
{
	switch (iLocal_261)
	{
		case 0x00000063:
			Function_356(2, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_356(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_356(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11CD0 / 72912
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_50();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_254();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_292(&iParam9, &bParam10);
}

int Function_357() //Position: 0x11D9F / 73119
{
	switch (iLocal_261)
	{
		case 0x00000063:
			Function_307();
			return 1;
			break;
		
		case 0x00000065:
			if (iLocal_317 == 0)
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_267);
				if (IS_ACTOR_VALID(&iLocal_269))
				{
					Function_229(&iLocal_269, &iLocal_4 + 560[8], 1, 1, 1);
					TASK_STAND_STILL(&iLocal_269, -1.0f, 0, 0);
				}
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_265, Vector(-2124,754f, 16,886f, 2595,035f), 90.0f, 1, 1, 0);
				UI_EXIT("HealthMeter");
				TASK_STAND_STILL(&Global_54076, -1.0f, 1, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_358() //Position: 0x11E40 / 73280
{
	switch (iLocal_261)
	{
		case 0x00000063:
			if (!Function_346(&iLocal_229))
			{
				return 0;
			}
			Function_307();
			return 1;
			break;
		
		case 0x00000065:
			if (iLocal_317 == 0)
			{
				if (!iLocal_338)
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_267);
					iLocal_338 = 1;
				}
				return 1;
			}
			if (iLocal_338)
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_267);
				iLocal_338 = 0;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_359() //Position: 0x11EA7 / 73383
{
	switch (iLocal_261)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				return 1;
			}
			if (Function_336())
			{
				Function_334();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			break;
		
		case 0x00000065:
			if (iLocal_317 == 0)
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				return 1;
			}
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			return 1;
			break;
		
		default:
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

int Function_360() //Position: 0x11F02 / 73474
{
	switch (iLocal_261)
	{
		case 0x00000063:
			Function_329();
			Function_287(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_285(StackVal, &fLocal_201, Vector(-1712,907f, 29,14584f, 3067,092f), &iLocal_247 + 32, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			ENABLE_VEHICLE_SEAT(&iLocal_267, 1, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_267, 0, 0);
			Function_287(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_250(&iLocal_4 + 560[3]);
			Function_285(StackVal, &fLocal_201, Function_250(&iLocal_4 + 560[3]), &iLocal_4 + 272[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_287(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_361() //Position: 0x11FC2 / 73666
{
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_362(&(Local_444[115]));
	return;
}

void Function_362(struct<69> Param0) //Position: 0x11FE0 / 73696
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_363(int iParam0) //Position: 0x120A0 / 73888
{
	if (!Function_303(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_201(1, 0, 1);
		}
	}
	return;
}

bool Function_364(int iParam0) //Position: 0x120BC / 73916
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

void Function_365(bool bParam0) //Position: 0x120D8 / 73944
{
	Function_366(0, 0x40400000);
	Function_218();
	Function_217();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_366(float fParam0, float fParam1) //Position: 0x1210E / 73998
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_368();
	Function_367();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_367() //Position: 0x1221F / 74271
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_368() //Position: 0x12253 / 74323
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_369() //Position: 0x12359 / 74585
{
	Function_432();
	switch (bLocal_262)
	{
		case 0x00000000:
			Function_365(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(17);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_427();
			iLocal_263 = Global_46736[0];
			if (!Function_364(iLocal_263))
			{
				Function_363(&Local_203);
			}
			Function_307();
			Function_235(1);
			break;
		
		case 0x00000001:
			if (Function_303(&Local_203))
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_263) || iLocal_263 != 4294967295))
				{
					if (Function_352())
					{
						Local_347 = Vector(-1698,88f, 28,5f, 3067,71f);
						TELEPORT_ACTOR_WITH_HEADING(&iLocal_267, Local_347, 83,85f, 1, 1, 0);
						Function_235(2);
						Function_236(&iLocal_275);
					}
				}
			}
			else
			{
				Function_235(2);
				Function_236(&iLocal_275);
			}
			break;
		
		case 0x00000002:
			Function_418();
			Function_235(6);
			break;
		
		case 0x00000006:
			if (Function_413())
			{
				Function_284();
				START_VEHICLE(&iLocal_267);
				Function_185(&iLocal_267);
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				STREAMING_UNLOAD_BOUNDS();
				Function_412(1);
				bLocal_271 = Function_411(&iLocal_4, "ArmadilloGateway", &iLocal_4 + 432[1], &iLocal_267, 1, 330, 4, 0, 0, 1);
				Function_250(&bLocal_271);
				Function_409(StackVal, Function_250(&bLocal_271), 0, 48, 1);
				fLocal_310 = 100.0f;
				iLocal_264 = 1;
				Function_308(&iLocal_287);
				UI_SHOW("HealthMeter");
				UI_SET_TEXT("HealthMeter", "Merchant01_HealthLabel");
				iLocal_327 = 1;
				Function_235(7);
			}
			break;
		
		case 0x00000007:
			Function_397();
			Function_383();
			if (Function_373())
			{
				Function_235(105);
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_235(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_370();
				iLocal_261 = 101;
				Function_235(3);
			}
			break;
	}
	return;
}

void Function_370() //Position: 0x1253B / 75067
{
	Function_372(&iLocal_4 + 168);
	Function_372(&iLocal_4 + 216);
	Function_372(&iLocal_4 + 264);
	UI_EXIT("HealthMeter");
	if (IS_OBJECT_VALID(&bLocal_271))
	{
		Function_371(&bLocal_271);
	}
	Function_412(0);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_362(&(Local_444[115]));
	return;
}

void Function_371(bool bParam0) //Position: 0x12595 / 75157
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

void Function_372(bool bParam0) //Position: 0x1262B / 75307
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_373() //Position: 0x12679 / 75385
{
	switch (iLocal_525)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 544) && iLocal_264 == 2)
			{
				Function_382();
				iLocal_337 = 1;
				Function_236(&iLocal_275);
				iLocal_525 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 432[3]) && iLocal_264 == 2)
			{
				Function_377();
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				Function_236(&iLocal_275);
				iLocal_525 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 432[0]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_376();
				iLocal_336 = 1;
				UI_EXIT("HealthMeter");
				iLocal_327 = 1;
				Function_236(&iLocal_275);
				iLocal_525 = 3;
			}
			break;
	}
	if ((IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 432[1]) && Function_375(&Global_54076, &iLocal_267, 0)) && Function_375(&iLocal_265, &iLocal_267, 1))
	{
		if (IS_OBJECT_VALID(&bLocal_271))
		{
			Function_371(&bLocal_271);
		}
		Function_223();
		SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/not_coughing");
		iLocal_327 = 1;
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		Function_374();
		if (IS_ACTOR_VALID(&iLocal_267))
		{
			STOP_VEHICLE(&iLocal_267);
		}
		Function_236(&iLocal_275);
		iLocal_525 = 4;
		return 1;
	}
	return 0;
}

void Function_374() //Position: 0x127CE / 75726
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_arriveDoctors", "Merchant01_arriveDoctors", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_375(int iParam0, int iParam1, bool bParam2) //Position: 0x12825 / 75813
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_376() //Position: 0x1284F / 75855
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AA", "Merchant01_driveThruArm_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveThruArm_v1_AB", "Merchant01_driveThruArm_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2190", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AC1", "Merchant01_driveThruArm_v1_AC1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AC2", "Merchant01_driveThruArm_v1_AC2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4260", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveThruArm_v1_AD", "Merchant01_driveThruArm_v1_AD", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_377() //Position: 0x12A16 / 76310
{
	if (SQUAD_IS_VALID(&iLocal_4 + 168))
	{
		if (Function_381(&iLocal_4 + 168, 1, 1, 1, 1, 0))
		{
			Function_380(&iLocal_4 + 168, &Global_54076, -1.0f, -1.0f, 1, 1);
			Function_379(&iLocal_4 + 168);
			bLocal_342 = true;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 216))
	{
		if (Function_381(&iLocal_4 + 216, 1, 1, 1, 1, 0))
		{
			Function_380(&iLocal_4 + 216, &Global_54076, -1.0f, -1.0f, 1, 1);
			Function_379(&iLocal_4 + 216);
			bLocal_342 = true;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		if (Function_381(&iLocal_4 + 264, 1, 1, 1, 1, 0))
		{
			Function_380(&iLocal_4 + 264, &Global_54076, -1.0f, -1.0f, 1, 1);
			Function_379(&iLocal_4 + 264);
			bLocal_342 = true;
		}
	}
	if (bLocal_342)
	{
		Function_378();
		iLocal_336 = 1;
	}
	iLocal_332 = 1;
	return;
}

void Function_378() //Position: 0x12AD6 / 76502
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_attackersPeelAway", "Merchant01_attackersPeelAway", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_379(bool bParam0) //Position: 0x12B35 / 76597
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_185(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_380(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x12B71 / 76657
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

bool Function_381(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12BEA / 76778
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar2, 3) || IS_ACTOR_CRIPPLED(&uVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_RIDING_VEHICLE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_382() //Position: 0x12CAF / 76975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_ArmOutskirts", "Merchant01_ArmOutskirts", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_383() //Position: 0x12D04 / 77060
{
	if (iLocal_524 >= 1)
	{
		if (iLocal_525 < 0)
		{
			Function_388();
		}
	}
	switch (iLocal_524)
	{
		case 0x00000000:
			Function_284();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_387();
				iLocal_336 = 1;
				Function_236(&iLocal_275);
				iLocal_524 = 1;
			}
			break;
		
		case 0x00000001:
			if ((!HUD_IS_SHOWING_HELP_TEXT() && !Function_386()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_385("Merchant01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&uLocal_520, false);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_522, false);
				Function_164(Global_46736[0]);
				Function_236(&iLocal_275);
				iLocal_524 = 4;
			}
			break;
		
		case 0x00000004:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_139("sol_FTE_Help_Stagecoach_01", (10.0f * 1,5f), 1, 0, 2, 1, 0);
				if (!Function_28(4, 0))
				{
					Function_236(&iLocal_275);
					iLocal_524 = 2;
				}
				else
				{
					Function_236(&iLocal_275);
					iLocal_524 = 5;
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_314 == 0)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_139("Merchant01_wagon_help_01", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_314++;
				}
			}
			else if (iLocal_314 == 1)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_139("Merchant01_wagon_help_02", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_314++;
				}
			}
			else if (iLocal_314 == 2)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_139("Merchant01_wagon_help_03", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_314++;
				}
			}
			else if (iLocal_314 == 3)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_139("Merchant01_wagon_help_04", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_314++;
					Function_236(&iLocal_275);
					iLocal_524 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_298(&iLocal_275) < 4.0f && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_139("Merchant01_saveMeterHelp01", 0x41200000, 1, 0, 2, 1, 0);
				Function_236(&iLocal_275);
				iLocal_524 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_139("Merchant01_saveHelp02", 0x41200000, 1, 0, 2, 1, 0);
				Function_236(&iLocal_275);
				iLocal_524 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!HUD_IS_SHOWING_HELP_TEXT() && !Function_386())
			{
				Function_139("Merchant01_saveMeterHelp02", 0x41200000, 1, 0, 2, 1, 0);
				Function_236(&iLocal_275);
				iLocal_524 = 14;
			}
			break;
		
		case 0x0000000C:
			if ((!HUD_IS_SHOWING_HELP_TEXT() && !Function_386()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[0]) && Function_375(&Global_54076, &iLocal_267, 0))
				{
					if (Function_298(&iLocal_275) < 7,5f)
					{
						Function_384();
						iLocal_336 = 1;
						Function_236(&iLocal_275);
					}
				}
				else
				{
					Function_236(&iLocal_275);
					iLocal_524 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_384() //Position: 0x13061 / 77921
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonDrive_noMove", "Merchant01_jonDrive_noMove", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_385(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x130BC / 78012
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
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_386() //Position: 0x13151 / 78161
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_387() //Position: 0x1315E / 78174
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_towardsArm", "Merchant01_towardsArm", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_388() //Position: 0x131AF / 78255
{
	if (!bLocal_388 && !bLocal_335)
	{
		if (!Function_300(&iLocal_369))
		{
			Function_308(&iLocal_369);
			iLocal_381 = 0;
		}
		else if (Function_298(&iLocal_369) < 5.0f)
		{
			if (!bLocal_389)
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_265, "Merchant01_shootsGunRand", "Merchant01_shootsGunRand", 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_236(&iLocal_369);
					}
					else
					{
						Function_236(&iLocal_369);
					}
				}
			}
			if (Function_396(&iLocal_267, 0) > 2.0f)
			{
				if (!iLocal_329)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_265, "Merchant01_jonStops", "Merchant01_jonStops", 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_236(&iLocal_369);
					iLocal_329 = 1;
				}
			}
			else if (iLocal_329)
			{
				iLocal_329 = 0;
			}
		}
		if (!iLocal_380)
		{
			if (iLocal_381)
			{
				if (!iLocal_385)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_236(&iLocal_373);
						iLocal_385 = 1;
					}
				}
				else if (Function_298(&iLocal_373) < 5.0f)
				{
					bLocal_379++;
					iLocal_381 = 0;
					PRINTSTRING("iHowaManyInterupts = ");
					PRINTINT(bLocal_379);
					PRINTNL();
				}
			}
			if ((!iLocal_381 && !bLocal_389) && !bLocal_382)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
				{
					if (iLocal_383 == 0)
					{
						if (Function_396(&iLocal_267, 0) < 1.0f)
						{
							iLocal_383++;
							iLocal_336 = 1;
						}
						else if (!iLocal_384)
						{
							Function_384();
							iLocal_384 = 1;
							iLocal_336 = 1;
						}
					}
					else if (iLocal_383 == 1)
					{
						iLocal_383++;
					}
					else if (iLocal_383 == 2)
					{
						bLocal_377 = Function_395();
						bLocal_377 = (bLocal_377 + bLocal_379);
						iLocal_378 = (bLocal_377 % 3);
						switch (bLocal_377)
						{
							case 0x00000000:
								Function_394();
								iLocal_339 = 1;
								SCRIPT_BREAKPOINT("v1");
								break;
							
							case 0x00000001:
								Function_393();
								iLocal_339 = 1;
								SCRIPT_BREAKPOINT("v2");
								break;
							
							case 0x00000002:
								Function_392();
								iLocal_339 = 1;
								SCRIPT_BREAKPOINT("v3");
								break;
							
							default:
								if (iLocal_378 == 0)
								{
									Function_391();
								}
								else if (iLocal_378 == 1)
								{
									Function_390();
								}
								else
								{
									Function_389();
								}
								iLocal_336 = 1;
								iLocal_380 = 1;
								break;
						}
						iLocal_381 = 1;
						iLocal_385 = 0;
						iLocal_386 = 0;
						PRINTSTRING("BANTER INDEX = ");
						PRINTINT(bLocal_377);
						PRINTNL();
					}
				}
			}
		}
	}
	else if (!iLocal_386)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		iLocal_386 = 1;
	}
	return;
}

void Function_389() //Position: 0x13465 / 78949
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v2_AA", "Merchant01_noTalk_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v2_AB", "Merchant01_noTalk_v2_AB", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_390() //Position: 0x134F7 / 79095
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v1_AA", "Merchant01_noTalk_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v1_AB", "Merchant01_noTalk_v1_AB", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_391() //Position: 0x13589 / 79241
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk", "Merchant01_noTalk", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_392() //Position: 0x135D2 / 79314
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AA", "Merchant01_driveBanter_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AB", "Merchant01_driveBanter_v3_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AC", "Merchant01_driveBanter_v3_AC", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AD", "Merchant01_driveBanter_v3_AD", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AE", "Merchant01_driveBanter_v3_AE", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AF", "Merchant01_driveBanter_v3_AF", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AG", "Merchant01_driveBanter_v3_AG", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AH", "Merchant01_driveBanter_v3_AH", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AI", "Merchant01_driveBanter_v3_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AJ", "Merchant01_driveBanter_v3_AJ", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AK", "Merchant01_driveBanter_v3_AK", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AL", "Merchant01_driveBanter_v3_AL", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AM", "Merchant01_driveBanter_v3_AM", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_393() //Position: 0x13985 / 80261
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AA", "Merchant01_driveBanter_v2_AA", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AB", "Merchant01_driveBanter_v2_AB", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AC", "Merchant01_driveBanter_v2_AC", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AD1", "Merchant01_driveBanter_v2_AD1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AD2", "Merchant01_driveBanter_v2_AD2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AE", "Merchant01_driveBanter_v2_AE", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AF", "Merchant01_driveBanter_v2_AF", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AG", "Merchant01_driveBanter_v2_AG", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AH", "Merchant01_driveBanter_v2_AH", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AI", "Merchant01_driveBanter_v2_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AJ", "Merchant01_driveBanter_v2_AJ", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AK", "Merchant01_driveBanter_v2_AK", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AL", "Merchant01_driveBanter_v2_AL", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_394() //Position: 0x13D3C / 81212
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AA", "Merchant01_driveBanter_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AB", "Merchant01_driveBanter_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AC", "Merchant01_driveBanter_v1_AC", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AD", "Merchant01_driveBanter_v1_AD", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_410", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AE", "Merchant01_driveBanter_v1_AE", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AF", "Merchant01_driveBanter_v1_AF", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AG", "Merchant01_driveBanter_v1_AG", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AH", "Merchant01_driveBanter_v1_AH", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AI", "Merchant01_driveBanter_v1_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AJ", "Merchant01_driveBanter_v1_AJ", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1020", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AK", "Merchant01_driveBanter_v1_AK", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

var Function_395() //Position: 0x140B6 / 82102
{
	return Global_53524.f_64;
}

float Function_396(var uParam0, bool bParam1) //Position: 0x140C1 / 82113
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_397() //Position: 0x140E2 / 82146
{
	if (Function_402(&iLocal_275, 200.0f, &iLocal_267, 0, "Wagon_return", "Merchant_abandoned", &bLocal_321, 1, 0, 0, 330, 1))
	{
		if (!bLocal_321)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_267)))
			{
				Function_371(&bLocal_271);
				bLocal_388 = true;
				Function_223();
				ADD_BLIP_FOR_ACTOR(&iLocal_267, 325, 0.0f, 2, 0);
				iLocal_319 = 1;
			}
			else if (iLocal_319 == 1)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_401();
					iLocal_336 = 1;
					iLocal_319 = 2;
				}
			}
			else if (iLocal_319 == 2)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_298(&iLocal_303) < 5.0f)
				{
					Function_400();
					iLocal_336 = 1;
					iLocal_319 = 0;
				}
			}
			if (!iLocal_324)
			{
				if (!Function_300(&iLocal_303))
				{
					Function_308(&iLocal_303);
				}
				else if (Function_299(&iLocal_303))
				{
					Function_399(&iLocal_303);
				}
				else if (Function_298(&iLocal_303) < 5.0f)
				{
					iLocal_324 = 1;
					Function_236(&iLocal_303);
					Function_398(&iLocal_303);
				}
			}
		}
	}
	else if (!IS_OBJECT_VALID(&bLocal_271))
	{
		Function_185(&iLocal_267);
		bLocal_271 = Function_411(&iLocal_4, "ArmadilloGateway", &iLocal_4 + 432[1], &iLocal_267, 1, 330, 4, 0, 0, 1);
		Function_250(&bLocal_271);
		Function_409(StackVal, Function_250(&bLocal_271), 0, 48, 1);
		Function_385("Merchant01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
		iLocal_324 = 0;
		bLocal_388 = false;
		iLocal_319 = 0;
	}
	return;
}

void Function_398(vector3 vParam0) //Position: 0x14269 / 82537
{
	if (Function_300(&vParam0))
	{
		if (!Function_299(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_77(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_399(vector3 vParam0) //Position: 0x1432D / 82733
{
	if (Function_300(&vParam0))
	{
		if (Function_299(&vParam0))
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

void Function_400() //Position: 0x143FA / 82938
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_wandersOff", "Merchant01_wandersOff", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_401() //Position: 0x1444B / 83019
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jumpsOffStagecoach", "Merchant01_jumpsOffStagecoach", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_402(struct<2> Param0, int iParam2, bool bParam3, var uParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11) //Position: 0x144AC / 83116
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_243(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_375(&Global_54076, &iParam2, bParam3) && !(bParam3 != 4294967295 && GET_VEHICLE(&Global_54076) != &iParam2))
	{
		if (!Function_408(32))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_385(&uParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_407(32);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_406(&uParam8, 0, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_406(&uParam9, 0, 4294967295, 0, &iParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam2, &uParam10, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam2, "MVDR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_408(32))
	{
		Function_405(32);
		if (!Function_404())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_403();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam2, "MVDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam2));
				DECOR_REMOVE(&iParam2, "MVDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_406(&uParam8, 1, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_406(&uParam9, 1, 4294967295, 0, &iParam2);
			}
		}
	}
	return 0;
}

void Function_403() //Position: 0x14652 / 83538
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_404() //Position: 0x14680 / 83584
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_405(bool bParam0) //Position: 0x146C7 / 83655
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_406(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1472E / 83758
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && bParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_407(bool bParam0) //Position: 0x147E9 / 83945
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_408(bool bParam0) //Position: 0x14850 / 84048
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_409(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x1489A / 84122
{
	(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_410(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_410(bool bParam0) //Position: 0x1495B / 84315
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&bParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &bParam0);
		CLEAN_OBJECTSET(&bParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_411(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x149A4 / 84388
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &iParam1, &uParam2, &uParam3, iParam4, &iParam6, &iParam7, &iParam8, &iParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &iParam8);
	}
	return &uVar0;
}

void Function_412(bool bParam0) //Position: 0x14A35 / 84533
{
	if (bParam0)
	{
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_curve2", 4)), 50);
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_bat_switchBack_path", 5)), 50);
	}
	else
	{
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_curve2", 4)), 10);
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_bat_switchBack_path", 5)), 10);
	}
	return;
}

bool Function_413() //Position: 0x14AD3 / 84691
{
	if (!Function_375(&Global_54076, &iLocal_267, 0) || iLocal_330)
	{
		if (Function_298(&iLocal_279) < 60.0f)
		{
			bLocal_335 = true;
			Function_234();
			iLocal_330 = 1;
			Function_185(&iLocal_267);
			SET_VEHICLE_EJECTION_ENABLED(&iLocal_267, 1);
			Function_236(&iLocal_279);
		}
		fLocal_307 = Function_417(&Global_54076, &iLocal_265);
		if (fLocal_307 < 200.0f && iLocal_311 < 0)
		{
			Function_243("Merchant_abandoned");
			bLocal_321 = true;
		}
		else if (fLocal_307 < 100.0f)
		{
			if (!iLocal_325)
			{
				Function_416();
				Function_385("Merchant01_reminder01", 7,5f, 0, 2, 0, 0, 0, 0);
				iLocal_325 = 1;
				if (!bLocal_335)
				{
					Function_400();
					iLocal_336 = 1;
				}
			}
		}
		else
		{
			iLocal_325 = 0;
			if (iLocal_311 == 4294967295)
			{
				if (Function_298(&iLocal_275) < 1.0f)
				{
					iLocal_311 = 0;
					Function_236(&iLocal_275);
				}
			}
			else if (iLocal_311 == 0)
			{
				if (!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_415();
					iLocal_336 = 1;
					iLocal_311 = 1;
					Function_236(&iLocal_275);
				}
			}
			else if (iLocal_311 == 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_385("Merchant01_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_311 = 2;
					Function_236(&iLocal_275);
				}
			}
			else if (iLocal_311 == 2)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() && Function_298(&iLocal_275) < 8.0f)
				{
					Function_414();
					iLocal_339 = 1;
					iLocal_311 = 3;
					Function_236(&iLocal_275);
				}
			}
		}
		return 0;
	}
	return 1;
}

void Function_414() //Position: 0x14C62 / 85090
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_getInWagon_v2", "Merchant01_getInWagon_v2", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_415() //Position: 0x14CB9 / 85177
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonDrive", "Merchant01_jonDrive", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_416() //Position: 0x14D06 / 85254
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_417(float fParam0, bool bParam1) //Position: 0x14D12 / 85266
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_418() //Position: 0x14E07 / 85511
{
	Function_249(iLocal_261);
	Function_419(StackVal, Function_249(iLocal_261), iLocal_261, Global_46736[0], Function_252(iLocal_261), 0);
	Local_347 = Vector(-1717,837f, 32,263f, 3068,019f);
	SET_GAME_CAMERA_FOCUS(Local_347, 0);
	Function_295(1.0f);
	return;
}

void Function_419(struct<2> Param0, int iParam2, var uParam3, var uParam4, int iParam5) //Position: 0x14E47 / 85575
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_426())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_425(0);
	Function_424();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = uParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_422(iParam2);
	}
	Function_421(uParam3, iVar0, iVar1);
	Function_420();
}

void Function_420() //Position: 0x14EF0 / 85744
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_421(int iParam0, bool bParam1, bool bParam2) //Position: 0x14F31 / 85809
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_422(bool bParam0) //Position: 0x1509A / 86170
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_423() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_423() //Position: 0x15232 / 86578
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_424() //Position: 0x15278 / 86648
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_425(bool bParam0) //Position: 0x1529C / 86684
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_426() //Position: 0x152CB / 86731
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_427() //Position: 0x152E6 / 86758
{
	Function_430(1, 1);
	Function_430(2, 1);
	Function_430(3, 1);
	Function_430(4, 1);
	Function_169(114701);
	Function_428(9);
	return;
}

void Function_428(int iParam0) //Position: 0x1530C / 86796
{
	Function_429(&Global_43580, iParam0);
	return;
}

void Function_429(var uParam0, int iParam1) //Position: 0x1531A / 86810
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_430(int iParam0, bool bParam1) //Position: 0x15342 / 86850
{
	if (iParam0 == 17)
	{
		if (&bParam1)
		{
		}
	}
	if (!Function_431(iParam0))
	{
		return;
	}
	if (&bParam1)
	{
		Global_41252[iParam011].f_52 = 0;
	}
	else
	{
		Global_41252[iParam011].f_56 = 0;
	}
	return;
}

bool Function_431(int iParam0) //Position: 0x1537F / 86911
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_432() //Position: 0x15395 / 86933
{
	if (!Function_559(bLocal_262))
	{
		return;
	}
	Function_511();
	Function_490();
	if (!bLocal_335)
	{
		if (iLocal_337)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/point");
			iLocal_337 = 0;
			iLocal_339 = 0;
			iLocal_336 = 0;
		}
		else if (iLocal_339)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/intro_talk");
			iLocal_339 = 0;
		}
		else if (iLocal_336)
		{
			if (Function_489())
			{
				SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/talkA");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/talkB");
			}
			iLocal_336 = 0;
		}
	}
	else if (!iLocal_331)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iLocal_265, "sit_wounded/puke");
		SET_ACTOR_IS_COMPANION(&iLocal_265, 0);
		iLocal_331 = 1;
	}
	if (iLocal_345 > 1)
	{
		Function_485();
	}
	if (iLocal_327)
	{
		if ((!IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 432[0]) && !IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[0])) || bLocal_388)
		{
			RESET_VEHICLE_BUMP_COUNT(&iLocal_267);
			UI_SHOW("HealthMeter");
			UI_SET_TEXT("HealthMeter", "Merchant01_HealthLabel");
			iLocal_327 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 432[0]) && !bLocal_388)
	{
		UI_EXIT("HealthMeter");
		iLocal_327 = 1;
	}
	Function_480();
	Function_475();
	Function_440();
	if (Function_439(&iLocal_267, &iLocal_4 + 560[3], 150.0f))
	{
		Function_250(&iLocal_4 + 560[3]);
		if (!Function_433(StackVal, "$/cutscene/MERCHANT01_CS03/MERCHANT01_CS03", &uLocal_519, Function_250(&iLocal_4 + 560[3]), 0, 100.0f, 200.0f, 2, 1, 1, 2, 0, 1))
		{
			ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_269, false);
		}
	}
	return;
}

bool Function_433(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x155BC / 87484
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_436(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_438()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_74(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam7, &uParam8, &uParam9, &uParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_434();
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_436(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_438()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_436(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_434() //Position: 0x15824 / 88100
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_435(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_435(char* cParam0) //Position: 0x15878 / 88184
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_436(var uParam0, struct<2> Param1, float fParam3) //Position: 0x159A1 / 88481
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_437(&uParam0);
		if (VDIST(Function_437(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_437(var uParam0) //Position: 0x15A2D / 88621
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_438() //Position: 0x15A99 / 88729
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

bool Function_439(var uParam0, int iParam1, float fParam2) //Position: 0x15AA8 / 88744
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_437(&uParam0);
			Function_327(&iParam1);
			if (VDIST(Function_437(&uParam0), Function_327(&iParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_440() //Position: 0x15BC6 / 89030
{
	if (iLocal_316 == 0)
	{
		if ((IS_OBJECT_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[6]) || IS_OBJECT_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[5])) && !SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_467();
			iLocal_316 = 1;
			Function_236(&iLocal_299);
		}
	}
	else if (iLocal_316 == 1)
	{
		if (Function_466(&iLocal_4 + 264) < 0 || Function_464(&iLocal_4 + 264, &Global_54076, 1, 0, 0))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_463();
			bLocal_389 = true;
			Function_462(&iLocal_4 + 264, 0);
			Function_461(&iLocal_4 + 264, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_459(&iLocal_4 + 264, &Global_54076, 0);
			Function_455(&iLocal_4 + 264, &Global_54076, 0);
			Function_454(&iLocal_4 + 264, 70.0f);
			bLocal_514 = false;
			while (bLocal_514 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 264, bLocal_514)), 150.0f);
				bLocal_514++;
			}
			iLocal_316 = 2;
			Function_236(&iLocal_299);
		}
	}
	else if (iLocal_316 == 2)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			if (Function_453(&iLocal_4 + 264, &Global_54076))
			{
				bLocal_343 = true;
				bLocal_382 = true;
			}
			Function_451(&iLocal_4 + 168);
			if (!Function_381(&iLocal_4 + 264, 1, 1, 1, 1, 0))
			{
				Function_236(&iLocal_299);
				iLocal_316 = 3;
			}
			else
			{
				Function_443(&iLocal_4 + 264);
			}
		}
	}
	else if (iLocal_344 == 3)
	{
		if (Function_298(&iLocal_299) < 2.0f)
		{
			if (bLocal_343)
			{
				Function_442();
				Function_236(&iLocal_373);
				iLocal_336 = 1;
			}
			Function_236(&iLocal_299);
			iLocal_316 = 4;
		}
	}
	else if (iLocal_316 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_298(&iLocal_299) < 4.0f)
		{
			Function_139("Merchant01_driveShootHelp02", 10.0f, 1, 0, 2, 1, 0);
			bLocal_389 = false;
			bLocal_382 = false;
			Function_236(&iLocal_299);
			Function_441(&iLocal_299);
			iLocal_316 = 5;
		}
	}
	return;
}

void Function_441(vector3 vParam0) //Position: 0x15DB8 / 89528
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_442() //Position: 0x15DCF / 89551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_1stWave_killed", "Merchant01_1stWave_killed", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_443(int iParam0) //Position: 0x15E28 / 89640
{
	if (bLocal_389)
	{
		if (iLocal_346 == 0)
		{
			if (bLocal_388 || iLocal_329)
			{
				Function_449();
				Function_448();
				if (Function_447(&iParam0))
				{
					Function_446(&iParam0, &iLocal_265, 4);
					Function_445(&iParam0);
					SQUAD_GOALS_CLEAR(&iParam0);
					Function_444(&iParam0, 12, 1);
					Function_455(&iParam0, &iLocal_265, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, true, 0, 2);
					TASK_FOLLOW_AND_ATTACK_OBJECT(0, &iLocal_265, &(Local_353[02]), 0.0f, 10.0f, 0,2f, 0,2f, 0, 0);
					iLocal_346++;
				}
			}
		}
		else if (iLocal_346 == 1)
		{
			if (!bLocal_388 && !iLocal_329)
			{
				if (Function_447(&iParam0))
				{
					Local_353[02] = Vector(0.0f, 0.0f, -5.0f);
					Local_353[12] = Vector(-8.0f, 0.0f, -20.0f);
					Local_353[22] = Vector(8.0f, 0.0f, -10.0f);
					Function_445(&iParam0);
					SQUAD_GOALS_CLEAR(&iParam0);
					Function_446(&iParam0, &iLocal_265, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, 2, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[02]), 0.0f, 10.0f, 0,2f, 0,2f, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, true, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[12]), 0.0f, 10.0f, 0,4f, 0,3f, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, 2, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[22]), 0.0f, 10.0f, 0,5f, 0,25f, 0, 0);
				}
				iLocal_346 = 0;
			}
		}
	}
	return;
}

void Function_444(var uParam0, int iParam1, bool bParam2) //Position: 0x15F9E / 90014
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_445(int iParam0) //Position: 0x15FEF / 90095
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_446(int iParam0, var uParam1, bool bParam2) //Position: 0x16024 / 90148
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_447(int iParam0) //Position: 0x16070 / 90224
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&iParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_DEAD(&uVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_448() //Position: 0x160CE / 90318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonStops", "Merchant01_jonStops", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_449() //Position: 0x1611B / 90395
{
	int iVar0;
	struct<2> Var1[6];
	struct<2> Var14[6];
	
	Var1[02] = Vector(0.0f, 0.0f, 10.0f);
	Var1[12] = Vector(10.0f, 0.0f, 5.0f);
	Var1[22] = Vector(10.0f, 0.0f, -5.0f);
	Var1[32] = Vector(0.0f, 0.0f, -5.0f);
	Var1[42] = Vector(-10.0f, 0.0f, -5.0f);
	Var1[52] = Vector(-10.0f, 0.0f, 5.0f);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		UNK_0xB89CC342(&iLocal_267, &(Var1[iVar02]), &(Var14[iVar02]));
		PRINTVECTOR(Var14[iVar02]);
		PRINTNL();
		iVar0++;
	}
	iLocal_517 = Function_450(&iLocal_4, &Var14);
	SET_PATH_LOOPING(&iLocal_517, 1);
	return;
}

int Function_450(var uParam0, struct<2>[] Param1) //Position: 0x161CF / 90575
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = CREATE_PATH_IN_LAYOUT(&uParam0, Function_54(), Param1);
	iVar0 = 0;
	while (iVar0 < (Param1 - 1))
	{
		ADD_POINT_TO_PATH(&iVar1, Param1[iVar02]);
		iVar0++;
	}
	return &iVar1;
}

void Function_451(int iParam0) //Position: 0x16212 / 90642
{
	bool bVar0;
	var uVar1;
	
	if (!iLocal_334)
	{
		if (Function_452(&iParam0, &iLocal_267, 40.0f))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (bVar0 != 1)
					{
						SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp");
					}
					TASK_CLEAR(&uVar1);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&uVar1, &iLocal_267, 15.0f, 3);
				}
				bVar0++;
			}
			iLocal_334 = 1;
		}
	}
	return;
}

bool Function_452(var uParam0, var uParam1, int iParam2) //Position: 0x162A0 / 90784
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (Function_439(&uVar1, &uParam1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_453(var uParam0, int iParam1) //Position: 0x16305 / 90885
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					if (!IS_ACTOR_ALIVE(&uVar3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_454(var uParam0, bool bParam1) //Position: 0x16381 / 91009
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(&uVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&uVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&uVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_455(var uParam0, var uParam1, bool bParam2) //Position: 0x163E2 / 91106
{
	Function_458(&uParam0, &uParam1, 1);
	Function_457(&uParam0, 1);
	Function_446(&uParam0, &uParam1, 4);
	Function_456(&uParam0, &uParam1);
	if (&bParam2)
	{
		Function_461(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_456(var uParam0, int iParam1) //Position: 0x1642B / 91179
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_457(var uParam0, int iParam1) //Position: 0x16486 / 91270
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_458(var uParam0, var uParam1, bool bParam2) //Position: 0x164CB / 91339
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_459(var uParam0, var uParam1, int iParam2) //Position: 0x16543 / 91459
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_460(&uVar1, &uParam1, &iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_460(var uParam0, var uParam1, bool bParam2) //Position: 0x1658F / 91535
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_437(&uParam1);
			uVar0 = Function_437(&uParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &uParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &uParam1, &uVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

void Function_461(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x166A0 / 91808
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_462(var uParam0, int iParam1) //Position: 0x167B0 / 92080
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_463() //Position: 0x167EA / 92138
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_1stWave_attack", "Merchant01_1stWave_attack", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_464(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x16843 / 92227
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_465(&uVar1, &uParam1, iParam2, &iParam3, &iParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_465(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x168B0 / 92336
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_466(int iParam0) //Position: 0x169B6 / 92598
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (Function_228(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_467() //Position: 0x16A06 / 92678
{
	Function_473();
	Local_353[02] = Vector(10.0f, 0.0f, -5.0f);
	Local_353[12] = Vector(-10.0f, 0.0f, -5.0f);
	bLocal_514 = false;
	while (bLocal_514 <= 2)
	{
		uLocal_515 = &iLocal_4 + 224[bLocal_5142];
		if (Function_328(&uLocal_515, 1))
		{
			SET_ACTOR_INVULNERABILITY(&uLocal_515, 0);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uLocal_515, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uLocal_515, 2);
			MEMORY_PREFER_RIDING(&uLocal_515, true);
			SET_ACTOR_MIN_SPEED(&uLocal_515, 2);
			AI_SET_NAV_MATERIAL_USAGE(&uLocal_515, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(&uLocal_515), "bNoInjuryEjection", 1);
			Function_311(GET_MOUNT(&uLocal_515), 1, 0, 0, 1, 0, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_515, &uLocal_273);
		}
		bLocal_514++;
	}
	TASK_GO_NEAR_ACTOR(&iLocal_4 + 224[12], &iLocal_267, 35.0f, 4);
	TASK_GO_NEAR_ACTOR(&iLocal_4 + 224[02], &iLocal_267, 30.0f, 4);
	Function_472(&iLocal_4 + 264, 0.0f);
	SQUAD_SET_FACTION(&iLocal_4 + 264, 19);
	Function_471(&iLocal_4 + 264, 0);
	Function_470(&iLocal_4 + 264, 0);
	Function_446(&iLocal_4 + 264, &iLocal_265, 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[12]), 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[02]), 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	Function_290(Function_468(&iLocal_267, &iLocal_4 + 264));
	STREAMING_LOAD_BOUNDS(Function_290(Function_468(&iLocal_267, &iLocal_4 + 264)), 50.0f, 1);
	Function_236(&iLocal_283);
	return;
}

float Function_468(var uParam0, int iParam1) //Position: 0x16B93 / 93075
{
	struct<2> Var0;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_WARNING("Invalid test object passed to GET_FARTHEST_SQUAD_MEMBER_FROM_OBJECT");
		return "";
	}
	GET_OBJECT_POSITION(&uParam0, &Var0);
	return Function_469(StackVal, Var0, &iParam1);
}

int Function_469(struct<2> Param0, int iParam2) //Position: 0x16C02 / 93186
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_74(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) < bVar2)
		{
			bVar2 = VDIST(Param0, Var4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar1);
	}
	LOG_WARNING("Couldn't find a farthest sqaud member from 'them' to 'Me' in GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR!");
	return "";
}

void Function_470(var uParam0, bool bParam1) //Position: 0x16D86 / 93574
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_ALLOW_DISARM(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_471(var uParam0, int iParam1) //Position: 0x16DCA / 93642
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_RIDING_SET_ENABLED(&uVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_472(var uParam0, bool bParam1) //Position: 0x16E08 / 93704
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_473() //Position: 0x16E4E / 93774
{
	(&iLocal_4 + 264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Ambush_BackRoad"));
	*(&iLocal_4 + 224[02]) = Function_474(StackVal, StackVal, &iLocal_4, "nWv03_BE01", 415, Function_54(), 976, Vector(-1792,522f, 23,76772f, 2835,076f), Vector(0.0f, 19,86563f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 224[02], &iLocal_4 + 264);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 224[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 224[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 224[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 224[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 224[02], 19);
	*(&iLocal_4 + 224[12]) = Function_474(StackVal, StackVal, &iLocal_4, "Wv03_E02", 416, Function_54(), 980, Vector(-1799,076f, 23,41812f, 2833,738f), Vector(0.0f, 98.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 224[12], &iLocal_4 + 264);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 224[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 224[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 224[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 224[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 224[12], 19);
	return;
}

int Function_474(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x16F98 / 94104
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_344(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_344(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

void Function_475() //Position: 0x170D0 / 94416
{
	if (iLocal_345 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[4]))
		{
			Function_478();
			Function_445(&iLocal_4 + 168);
			STREAMING_UNLOAD_BOUNDS();
			iLocal_345 = 1;
		}
	}
	else if (iLocal_345 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[3]))
		{
			Function_477();
			bLocal_389 = true;
			iLocal_345 = 2;
		}
	}
	else if (iLocal_345 == 2)
	{
		if (Function_452(&iLocal_4 + 216, &iLocal_267, 70.0f) || Function_466(&iLocal_4 + 216) < 0)
		{
			Function_455(&iLocal_4 + 216, &Global_54076, 1);
			bLocal_514 = false;
			while (bLocal_514 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 216, bLocal_514)), 150.0f);
				bLocal_514++;
			}
			Function_476();
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE_3", 0, 4294967295, 4294967295);
			iLocal_337 = 1;
			iLocal_333 = 1;
			iLocal_345 = 3;
		}
	}
	else if (iLocal_345 == 3)
	{
		if (Function_452(&iLocal_4 + 216, &iLocal_267, 30.0f))
		{
			Function_445(&iLocal_4 + 216);
			iLocal_345 = 4;
		}
	}
	else if (iLocal_345 == 4)
	{
		if (!Function_381(&iLocal_4 + 168, 1, 1, 1, 1, 0) && !Function_381(&iLocal_4 + 216, 1, 1, 1, 1, 0))
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bLocal_389 = false;
			bLocal_343 = true;
			AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
			iLocal_345 = 5;
		}
		else
		{
			Function_443(&iLocal_4 + 216);
		}
	}
	return;
}

void Function_476() //Position: 0x17237 / 94775
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_moreBandits_attack", "Merchant01_moreBandits_attack", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_477() //Position: 0x17298 / 94872
{
	Local_353[02] = Vector(-8.0f, 0.0f, -5.0f);
	Local_353[12] = Vector(12.0f, 0.0f, -10.0f);
	Function_462(&iLocal_4 + 216, 0);
	Function_459(&iLocal_4 + 216, &Global_54076, 0);
	Function_454(&iLocal_4 + 216, 70.0f);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_4 + 176[02], &iLocal_4 + 728, 4, 0, 0, 1, false);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_4 + 176[12], &iLocal_4 + 736, 4, 0, 0, 1, false);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 216, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[12]), 6.0f, 8.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 216, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[02]), 6.0f, 8.0f, 0.0f, 0.0f, 0, 1);
	Function_236(&iLocal_283);
	Function_290(Function_468(&iLocal_267, &iLocal_4 + 216));
	STREAMING_LOAD_BOUNDS(Function_290(Function_468(&iLocal_267, &iLocal_4 + 216)), 50.0f, 1);
	return;
}

void Function_478() //Position: 0x17379 / 95097
{
	Function_479();
	bLocal_514 = false;
	while (bLocal_514 <= 2)
	{
		uLocal_515 = &iLocal_4 + 176[bLocal_5142];
		if (Function_328(&uLocal_515, 1))
		{
			SET_ACTOR_INVULNERABILITY(&uLocal_515, 0);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uLocal_515, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uLocal_515, 2);
			MEMORY_PREFER_RIDING(&uLocal_515, true);
			SET_ACTOR_MIN_SPEED(&uLocal_515, 2);
			AI_SET_NAV_MATERIAL_USAGE(&uLocal_515, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(&uLocal_515), "bNoInjuryEjection", 1);
			Function_311(GET_MOUNT(&uLocal_515), 0, 0, 0, 1, 0, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_515, &uLocal_273);
		}
		bLocal_514++;
	}
	Function_471(&iLocal_4 + 168, 0);
	Function_470(&iLocal_4 + 168, 0);
	Function_446(&iLocal_4 + 168, &iLocal_265, 2);
	return;
}

void Function_479() //Position: 0x1743D / 95293
{
	(&iLocal_4 + 216) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Ambush_Wv02"));
	*(&iLocal_4 + 176[02]) = Function_474(StackVal, StackVal, &iLocal_4, "nWv02_BE01", 415, Function_54(), 976, Vector(-2276,751f, 16,10034f, 2903,939f), Vector(0.0f, 92.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 176[02], &iLocal_4 + 216);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 176[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 176[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 176[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 176[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 176[02], 19);
	*(&iLocal_4 + 176[12]) = Function_474(StackVal, StackVal, &iLocal_4, "Wv02_M01", 400, Function_54(), 977, Vector(-2266,616f, 16,06271f, 2894,616f), Vector(0.0f, 91.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 176[12], &iLocal_4 + 216);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 176[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 176[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 176[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 176[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 176[12], 19);
	return;
}

void Function_480() //Position: 0x17580 / 95616
{
	if (IS_VOLUME_VALID(&iLocal_4 + 344[7]))
	{
		if (IS_OBJECT_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[7]))
		{
			Function_250(&iLocal_4 + 560[11]);
			STREAMING_LOAD_BOUNDS(Function_250(&iLocal_4 + 560[11]), 40.0f, 1);
			DESTROY_VOLUME(&iLocal_4 + 344[7]);
		}
	}
	if (iLocal_344 == 0)
	{
		if (IS_OBJECT_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[2]) && !SQUAD_IS_VALID(&iLocal_4 + 168))
		{
			Function_481();
			iLocal_344 = 1;
			Function_236(&iLocal_299);
		}
	}
	else if (iLocal_344 == 1)
	{
		if ((IS_OBJECT_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[1]) || Function_466(&iLocal_4 + 168) < 0) || Function_464(&iLocal_4 + 168, &Global_54076, 1, 0, 0))
		{
			Function_463();
			Function_462(&iLocal_4 + 168, 0);
			Function_461(&iLocal_4 + 168, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_459(&iLocal_4 + 168, &Global_54076, 0);
			Function_455(&iLocal_4 + 168, &Global_54076, 0);
			Function_454(&iLocal_4 + 168, 70.0f);
			bLocal_514 = false;
			while (bLocal_514 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 168, bLocal_514)), 150.0f);
				bLocal_514++;
			}
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_337 = 1;
			bLocal_389 = true;
			iLocal_344 = 2;
			Function_236(&iLocal_299);
		}
	}
	else if (iLocal_344 == 2)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 168))
		{
			if (Function_453(&iLocal_4 + 168, &Global_54076))
			{
				bLocal_343 = true;
				bLocal_382 = true;
			}
			Function_451(&iLocal_4 + 168);
			if (!Function_381(&iLocal_4 + 168, 1, 1, 1, 1, 0))
			{
				Function_236(&iLocal_299);
				iLocal_344 = 3;
				if (!Function_381(&iLocal_4 + 216, 1, 1, 1, 1, 0))
				{
					Function_236(&iLocal_373);
					bLocal_389 = false;
				}
			}
			else
			{
				Function_443(&iLocal_4 + 168);
			}
		}
	}
	else if (iLocal_344 == 3)
	{
		if (Function_298(&iLocal_299) < 2.0f)
		{
			if (bLocal_343)
			{
				if (!iLocal_333 || !bLocal_389)
				{
					Function_442();
					Function_236(&iLocal_373);
					iLocal_336 = 1;
				}
			}
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_HIGH", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_236(&iLocal_299);
			iLocal_344 = 4;
		}
	}
	else if (iLocal_344 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_298(&iLocal_299) < 4.0f)
		{
			bLocal_382 = false;
			Function_236(&iLocal_299);
			Function_441(&iLocal_299);
			iLocal_344 = 5;
		}
	}
	return;
}

void Function_481() //Position: 0x177D7 / 96215
{
	Function_484();
	Local_353[02] = Vector(-10.0f, 0.0f, -5.0f);
	Local_353[12] = Vector(10.0f, 0.0f, -5.0f);
	bLocal_514 = false;
	while (bLocal_514 <= 2)
	{
		uLocal_515 = &iLocal_4 + 128[bLocal_5142];
		if (Function_328(&uLocal_515, 1))
		{
			SET_ACTOR_INVULNERABILITY(&uLocal_515, 0);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uLocal_515, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uLocal_515, 2);
			MEMORY_PREFER_RIDING(&uLocal_515, true);
			AI_RIDING_SET_ENABLED(&uLocal_515, 0);
			SET_ACTOR_MIN_SPEED(&uLocal_515, 4);
			AI_SET_NAV_MATERIAL_USAGE(&uLocal_515, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(&uLocal_515), "bNoInjuryEjection", 1);
			Function_311(GET_MOUNT(&uLocal_515), 0, 0, 0, 1, 0, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uLocal_515, 0);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uLocal_515, 359.0f);
			SET_ACTOR_VISION_XRAY(&uLocal_515, true);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_515, &uLocal_273);
		}
		bLocal_514++;
	}
	Function_482(&iLocal_4 + 128[02], &iLocal_4 + 560[12], 1, 1, 1);
	Function_482(&iLocal_4 + 128[12], &iLocal_4 + 560[13], 1, 1, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_4 + 128[02], &iLocal_4 + 752, 4, 0, 0, 1, false);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_4 + 128[12], &iLocal_4 + 760, 4, 0, 0, 1, false);
	Function_472(&iLocal_4 + 168, 0.0f);
	SQUAD_SET_FACTION(&iLocal_4 + 168, 19);
	Function_471(&iLocal_4 + 168, 0);
	Function_470(&iLocal_4 + 168, 0);
	Function_446(&iLocal_4 + 168, &iLocal_265, 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 168, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[12]), 6.0f, 10.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 168, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &(Local_353[02]), 6.0f, 10.0f, 0.0f, 0.0f, 0, 1);
	Function_290(Function_468(&iLocal_267, &iLocal_4 + 168));
	STREAMING_LOAD_BOUNDS(Function_290(Function_468(&iLocal_267, &iLocal_4 + 168)), 50.0f, 1);
	Function_236(&iLocal_283);
	return;
}

void Function_482(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x179BC / 96700
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				Function_483(StackVal, StackVal, &uParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_483(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x17ADC / 96988
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_484() //Position: 0x17BAB / 97195
{
	*(&iLocal_4 + 168) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Train_Ambush01"));
	*(&iLocal_4 + 128[02]) = Function_474(StackVal, StackVal, &iLocal_4, "nWv01_BE02", 416, Function_54(), 977, Vector(-2093,644f, 47,70827f, 3091,427f), Vector(0.0f, 230.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 128[02], &iLocal_4 + 168);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 128[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 128[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 128[02], 40, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 128[02], 1);
	TASK_STAND_STILL(&iLocal_4 + 128[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 128[02], 19);
	*(&iLocal_4 + 128[12]) = Function_474(StackVal, StackVal, &iLocal_4, "Wv01_E03", 417, Function_54(), 980, Vector(-2120,309f, 45,84811f, 3109,251f), Vector(-177,1322f, -47,77544f, 175,8279f));
	SQUAD_JOIN(&iLocal_4 + 128[12], &iLocal_4 + 168);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 128[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 128[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 128[12], 41, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 128[12], 1);
	TASK_STAND_STILL(&iLocal_4 + 128[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 128[12], 19);
	return;
}

void Function_485() //Position: 0x17D11 / 97553
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 216))
	{
		if (iLocal_345 >= 2)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 216))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 216, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (!Function_486(&Global_54076, &uVar1, 150.0f) && IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
						if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
						{
							RELEASE_ACTOR(GET_MOUNT(&uVar1));
						}
						SQUAD_LEAVE(&uVar1);
						RELEASE_ACTOR(&uVar1);
						TASK_CLEAR(&uVar1);
						return;
					}
				}
				bVar0++;
			}
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 168))
	{
		if (iLocal_344 > 2)
		{
			bVar2 = false;
			while (bVar2 <= SQUAD_GET_SIZE(&iLocal_4 + 168))
			{
				uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 168, bVar2);
				if (IS_ACTOR_VALID(&uVar3))
				{
					if (!Function_486(&Global_54076, &uVar3, 150.0f) && IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar3)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar3));
						if (IS_ACTOR_VALID(GET_MOUNT(&uVar3)))
						{
							RELEASE_ACTOR(GET_MOUNT(&uVar3));
						}
						SQUAD_LEAVE(&uVar3);
						RELEASE_ACTOR(&uVar3);
						TASK_CLEAR(&uVar3);
						return;
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

bool Function_486(var uParam0, var uParam1, float fParam2) //Position: 0x17E35 / 97845
{
	float fVar0;
	
	fVar0 = Function_487(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_487(var uParam0, int iParam1) //Position: 0x17E54 / 97876
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_488(&uVar0, &uVar2);
	return iVar4;
}

var Function_488(struct<2> Param0) //Position: 0x17E75 / 97909
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_489() //Position: 0x17E94 / 97940
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_490() //Position: 0x17EA7 / 97959
{
	float fVar0;
	float fVar1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	UI_SET_PROGRESS_BAR_VAL("HealthMeter", fLocal_310);
	if (Function_298(&iLocal_287) < 1.0f && iLocal_341)
	{
		PRINTSTRING("Companion HP is now represented in meter is");
		PRINTFLOAT(fLocal_310);
		PRINTNL();
		Function_236(&iLocal_287);
	}
	if (iLocal_327 && !iLocal_324)
	{
		return 0;
	}
	if (fLocal_309 < 0.0f)
	{
		fVar1 = (fVar0 - fLocal_309);
	}
	else
	{
		fVar1 = 0.0f;
	}
	if ((iLocal_264 != 0 && !bLocal_335) || iLocal_264 != 1)
	{
		if (((!Function_509(&iLocal_267, 64) && !Function_509(&iLocal_267, 32)) && Function_396(&iLocal_267, 0) < 3.0f) || iLocal_324)
		{
			if (!iLocal_328 && !iLocal_332)
			{
				if (!Function_386() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_508();
					iLocal_339 = 1;
					iLocal_328 = 1;
				}
			}
			if (!iLocal_324)
			{
				if (IS_ACTOR_IN_VOLUME(&iLocal_267, &iLocal_4 + 344[8]))
				{
					bLocal_310 = (bLocal_310 - (fVar1 * (1,3f * 3.0f)));
				}
				else
				{
					bLocal_310 = (bLocal_310 - (fVar1 * (1,3f * 1,3f)));
				}
			}
			else
			{
				bLocal_310 = (bLocal_310 - (fVar1 * 1,3f));
			}
			if (bLocal_310 >= 4.0f)
			{
				bLocal_310 = 0.0f;
			}
		}
		else
		{
			bLocal_310 = (bLocal_310 - (fVar1 * 0,35f));
		}
		if (Function_507(&iLocal_265, &fLocal_201))
		{
			if (bLocal_389 && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_506();
			}
			bLocal_310 = (bLocal_310 - 4.0f);
		}
		if (IntToFloat(GET_VEHICLE_BUMP_COUNT(&iLocal_267)) < 25.0f)
		{
			RESET_VEHICLE_BUMP_COUNT(&iLocal_267);
			bLocal_310 = (bLocal_310 - 1.0f);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_388)
				{
					iLocal_312 = RAND_INT_RANGE(true, 3);
				}
				switch (iLocal_312)
				{
					case 0x00000000:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								iLocal_336 = 1;
								Function_505();
								iLocal_312++;
								break;
							
							case 0x00000001:
								iLocal_336 = 1;
								Function_504();
								iLocal_312++;
								break;
							
							case 0x00000002:
								iLocal_336 = 1;
								Function_503();
								iLocal_312++;
								break;
						}
						break;
					
					case 0x00000001:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_502();
								iLocal_336 = 1;
								iLocal_312++;
								break;
							
							case 0x00000001:
								Function_501();
								iLocal_336 = 1;
								iLocal_312++;
								break;
							
							case 0x00000002:
								Function_500();
								iLocal_336 = 1;
								iLocal_312++;
								break;
						}
						break;
					
					case 0x00000002:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_499();
								iLocal_336 = 1;
								iLocal_312++;
								break;
							
							case 0x00000001:
								Function_498();
								iLocal_336 = 1;
								iLocal_312++;
								break;
							
							case 0x00000002:
								Function_497();
								iLocal_336 = 1;
								iLocal_312++;
								break;
						}
						break;
					
					case 0x00000003:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_496();
								iLocal_336 = 1;
								iLocal_312 = 0;
								break;
							
							case 0x00000001:
								Function_495();
								iLocal_336 = 1;
								iLocal_312 = 0;
								break;
							
							case 0x00000002:
								Function_494();
								iLocal_336 = 1;
								iLocal_312 = 0;
								break;
						}
						break;
					}
				}
			}
	}
	switch (iLocal_264)
	{
		case 0x00000000:
			if (bLocal_310 > (100.0f * 0,75f))
			{
				if (!Function_386() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_493();
					iLocal_336 = 1;
				}
				iLocal_264 = 1;
				Function_236(&iLocal_275);
				iLocal_315 = 0;
			}
			break;
		
		case 0x00000001:
			if (iLocal_315 == 0)
			{
				if (bLocal_310 >= (100.0f * 0,6f))
				{
					if (!Function_386() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_493();
						iLocal_336 = 1;
					}
					Function_236(&iLocal_275);
					iLocal_315 = 1;
				}
			}
			else if (iLocal_315 == 1)
			{
				if (bLocal_310 >= (100.0f * 0,4f))
				{
					if (!Function_386() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_492();
						iLocal_336 = 1;
					}
					Function_236(&iLocal_275);
					iLocal_315 = 2;
				}
			}
			else if (iLocal_315 == 2)
			{
				if (bLocal_310 >= (100.0f * 0,25f))
				{
					if (!Function_386() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_491();
						iLocal_336 = 1;
					}
					Function_236(&iLocal_275);
					iLocal_315 = 3;
				}
			}
			else if (iLocal_315 == 3)
			{
				if (bLocal_310 >= (100.0f * 0,05f))
				{
					AI_IGNORE_ACTOR(&iLocal_265);
					Function_234();
					Function_236(&iLocal_275);
					iLocal_315 = 4;
				}
			}
			else if (iLocal_315 == 4)
			{
				if (bLocal_310 >= (100.0f * 0,025f))
				{
					if (!IS_ACTOR_ANIM_PLAYING(&iLocal_265, "puke"))
					{
						bLocal_335 = true;
						Function_236(&iLocal_275);
						iLocal_264 = 5;
						bLocal_310 = 0.0f;
						iLocal_315 = 0;
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!Function_300(&iLocal_291))
			{
				Function_308(&iLocal_291);
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_265, "fall") || Function_298(&iLocal_291) < 8.0f)
			{
				KILL_ACTOR(&iLocal_265);
				return 1;
			}
			break;
	}
	fLocal_309 = fVar0;
	return 0;
}

void Function_491() //Position: 0x1837E / 99198
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_worseFurther", "Merchant01_DickensHealth_worseFurther", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_492() //Position: 0x183EF / 99311
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_worse", "Merchant01_DickensHealth_worse", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_493() //Position: 0x18452 / 99410
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth", "Merchant01_DickensHealth", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_494() //Position: 0x184A9 / 99497
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v3_AA1", "Merchant01_HighDelirium_v3_AA1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v3_AA2", "Merchant01_HighDelirium_v3_AA2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v3_AB", "Merchant01_HighDelirium_v3_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v3_AC", "Merchant01_HighDelirium_v3_AC", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_495() //Position: 0x185E9 / 99817
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v2_AA", "Merchant01_HighDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v2_AB", "Merchant01_HighDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_496() //Position: 0x18693 / 99987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v1_AA", "Merchant01_HighDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v1_AB", "Merchant01_HighDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_497() //Position: 0x1873D / 100157
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v3_AA", "Merchant01_medDelirium_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v3_AB", "Merchant01_medDelirium_v3_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_498() //Position: 0x187E3 / 100323
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v2_AA", "Merchant01_medDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v2_AB", "Merchant01_medDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_499() //Position: 0x18889 / 100489
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v1_AA", "Merchant01_medDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v1_AB", "Merchant01_medDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_500() //Position: 0x1892F / 100655
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v3_AA", "Merchant01_lowDelirium_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v3_AB", "Merchant01_lowDelirium_v3_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_501() //Position: 0x189D5 / 100821
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v2_AA", "Merchant01_lowDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v2_AB", "Merchant01_lowDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_502() //Position: 0x18A7B / 100987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v1_AA", "Merchant01_lowDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v1_AB", "Merchant01_lowDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_503() //Position: 0x18B21 / 101153
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v3_AA", "Merchant01_driveCareful_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v3_AB", "Merchant01_driveCareful_v3_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_504() //Position: 0x18BCB / 101323
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v2_AA", "Merchant01_driveCareful_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v2_AB", "Merchant01_driveCareful_v2_AB", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_505() //Position: 0x18C75 / 101493
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v1_AA", "Merchant01_driveCareful_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v1_AB", "Merchant01_driveCareful_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v1_AC", "Merchant01_driveCareful_v1_AC", true, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_506() //Position: 0x18D68 / 101736
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensShot", "Merchant01_DickensShot", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_507(int iParam0, int iParam1) //Position: 0x18DBB / 101819
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		LOG_ERROR("Failed to create iterator in ActorInjuredLastFrame!");
		return 0;
	}
	ITERATE_EVERYWHERE(&uVar0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
	ITERATE_IN_LAYOUT(&uVar0, GET_EVENT_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar4 = GET_EVENT_FROM_OBJECT(&iVar1);
		if (IS_EVENT_VALID(&uVar4))
		{
			uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar4);
			if (IS_OBJECT_VALID(&uVar2))
			{
				if (GET_OBJECT_TYPE(&uVar2) == 15)
				{
					iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (&iVar3 == &iParam0)
						{
							switch (GET_EVENT_TYPE(&uVar4))
							{
								case 0x00000007:
								case 0x00000008:
								case 0x00000005:
								case 0x00000001:
									return 1;
									break;
								}
							}
						}
					}
				}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_508() //Position: 0x18EBC / 102076
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_drivesOffRoad", "Merchant01_drivesOffRoad", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_509(var uParam0, int iParam1) //Position: 0x18F13 / 102163
{
	return Function_14(iParam1, Function_510(&uParam0));
}

bool Function_510(int iParam0) //Position: 0x18F24 / 102180
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = &iParam0;
		if (IS_ACTOR_RIDING(&iVar0))
		{
			iVar0 = GET_MOUNT(&iVar0);
		}
		if (IS_ACTOR_INSIDE_VEHICLE(&iVar0))
		{
			iVar0 = GET_VEHICLE(&iVar0);
			while (!IS_ACTOR_VALID(&uVar1) && bVar2 > GET_NUM_DRAFT_POSITIONS(&iVar0))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar2, &iVar0);
				bVar2++;
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				iVar0 = &uVar1;
			}
			else
			{
				iVar0 = &iParam0;
			}
		}
		return GET_ACTOR_GROUND_MATERIAL(&iVar0);
	}
	return 0;
}

void Function_511() //Position: 0x18FA5 / 102309
{
	if (!iLocal_387 && !bLocal_335)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iLocal_267) <= 2)
		{
			Function_512();
			iLocal_387 = 1;
			iLocal_336 = 1;
		}
	}
	return;
}

void Function_512() //Position: 0x18FCD / 102349
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_losesStageCoachHorse", "Merchant01_losesStageCoachHorse", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_513() //Position: 0x19032 / 102450
{
	switch (bLocal_262)
	{
		case 0x00000006:
			Function_526(&Local_203, 1);
			fLocal_201 = CREATE_LAYOUT(Function_54());
			Function_525();
			Function_522();
			Function_521();
			Function_427();
			Function_201(1, 0, 1);
			iLocal_323 = 0;
			Function_520(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"));
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((iLocal_261 != 99 && Function_303(&Local_203)) || !CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MERCHANT_01/MERCHANT_01"))
			{
				bLocal_262 = 8;
			}
			else
			{
				bLocal_262 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_346(&iLocal_215))
			{
				if (Function_291("$/cutscene/MERCHANT_01/MERCHANT_01", &iLocal_247, &Local_203, &iLocal_261, 73474, 73383, 73280, 73119, 72853, 59874, 0, 1, 1, 2, 2, 0, 1))
				{
					bLocal_262 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_351())
			{
				bLocal_262 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				Function_334();
			}
			else
			{
				uLocal_259 = CREATE_OBJECT_ITERATOR(&iLocal_4);
				CAMERA_RESET(0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_309();
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 272[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 272[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 272[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 272[1]);
				Function_518(&uLocal_390, &fLocal_201);
				Function_317(&(Local_444[015]), &iLocal_265, "Merchant", 0, 0x5f5e100, 1);
				Function_308(&iLocal_275);
				Function_308(&iLocal_279);
				Function_308(&iLocal_295);
				Function_308(&iLocal_373);
				iLocal_261 = iLocal_198;
				bLocal_262 = false;
				Function_515(&Local_203, &iLocal_261, &bLocal_262);
				Function_514(StackVal, StackVal, StackVal, StackVal, Function_334(), Local_203);
				switch (iLocal_261)
				{
					case 0x00000000:
						break;
					
					case 0x00000065:
						Function_238();
						break;
					}
			}
			break;
	}
	return;
}

void Function_514(struct<41> Param0) //Position: 0x1925F / 103007
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_261 = 0;
			break;
		
		case 0x00000002:
			iLocal_261 = 101;
			break;
	}
}

void Function_515(int iParam0, var uParam1, int iParam2) //Position: 0x1928B / 103051
{
	if (Function_303(&iParam0))
	{
		uParam1 = Function_517(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_516();
	}
	return;
}

void Function_516() //Position: 0x192C7 / 103111
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

var Function_517(int iParam0) //Position: 0x19318 / 103192
{
	if (Function_303(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_518(struct<2>[] Param0) //Position: 0x19331 / 103217
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_519(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_519(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_519(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_519(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_519(struct<13> Param0) //Position: 0x19A0A / 104970
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, bParam4);
	return 1;
}

void Function_520(var uParam0) //Position: 0x19AD9 / 105177
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_VOLUME(&uVar0, &uParam0);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) == 29)
		{
			DESTROY_OBJECT(&uVar1);
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_521() //Position: 0x19B26 / 105254
{
	Function_353(&iLocal_215, 1202, 2, 0);
	Function_353(&iLocal_215, 981, 2, 0);
	Function_353(&iLocal_215, 987, 2, 0);
	return;
}

void Function_522() //Position: 0x19B4D / 105293
{
	Function_523(&iLocal_229, "merchant01", 10, 0);
	Function_523(&iLocal_229, "custom/sit_wounded", 8, 0);
	return;
}

var Function_523(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x19B87 / 105351
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_524(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_349(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_524(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x19BC5 / 105413
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_194(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_349(&(Param0[iVar02]), 4);
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

void Function_525() //Position: 0x19C94 / 105620
{
	return;
}

void Function_526(int iParam0, bool bParam1) //Position: 0x19C9A / 105626
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_532(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_303(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_303(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_225();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_254();
	Function_294();
	Function_243("");
	Function_531(0);
	Function_530();
	Function_218();
	Function_217();
	ENABLE_JOURNAL_REPLAY(0);
	Function_529();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_310(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_366(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_528(13);
	Function_528(14);
	Function_528(25);
	Function_528(24);
	Function_528(12);
	Function_528(27);
	Function_528(26);
	Function_528(15);
	Function_527();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_527() //Position: 0x1A0DA / 106714
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_528(int iParam0) //Position: 0x1A15F / 106847
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_529() //Position: 0x1A17F / 106879
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_530() //Position: 0x1A1C5 / 106949
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_531(int iParam0) //Position: 0x1A1DB / 106971
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_221())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_532(int iParam0, int iParam1) //Position: 0x1A214 / 107028
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_533(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_533(struct<113> Param0) //Position: 0x1A29B / 107163
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_534() //Position: 0x1A2F9 / 107257
{
	return;
}

bool Function_535(struct<25> Param0) //Position: 0x1A2FF / 107263
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_536(&Param0, 1);
			return 1;
		}
	}
	Function_536(&Param0, 0);
	return 0;
}

void Function_536(struct<25> Param0) //Position: 0x1A38B / 107403
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_537(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1A3B6 / 107446
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_536(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_555(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_554(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_554(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_541(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_536(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_540(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_539(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_540(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_538(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_243(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_539(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_536(&Param2, 0);
	return 0;
}

void Function_538(char* cParam0) //Position: 0x1A7CC / 108492
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_539(struct<25> Param0) //Position: 0x1A8C0 / 108736
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_540(bool bParam0) //Position: 0x1A938 / 108856
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_541(struct<57> Param0) //Position: 0x1A95C / 108892
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_545(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_542(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_542(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_542(int iParam0, bool bParam1) //Position: 0x1AACD / 109261
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_544(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_543(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_544(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_543(256);
			}
		}
	}
	return bParam1;
}

bool Function_543(int iParam0) //Position: 0x1AC09 / 109577
{
	return 2 | iParam0;
}

int Function_544(int iParam0) //Position: 0x1AC13 / 109587
{
	return 4 | iParam0;
}

int Function_545(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1AC1D / 109597
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_551(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_543(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_546(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_543(16);
		}
	}
	return 0;
}

int Function_546(int iParam0, vector3 vParam1) //Position: 0x1ACD8 / 109784
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_550(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_549(iVar0, 3, 1, bParam3))
			{
				if (!Function_554(&iParam0, 8, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam3))
			{
				if (!Function_554(&iParam0, 32, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_554(&iParam0, 64, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_549(iVar0, 3, 1, bParam3))
			{
				if (!Function_554(&iParam0, 128, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_554(&iParam0, 1024, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_554(&iParam0, 1024, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_547(int iParam0, int iParam1, bool bParam2) //Position: 0x1AEA0 / 110240
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_548(int iParam0, int iParam1, bool bParam2) //Position: 0x1AEB5 / 110261
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_549(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1AECA / 110282
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_550(int iParam0) //Position: 0x1AEE7 / 110311
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_551(var uParam0, vector3 vParam1) //Position: 0x1AF5A / 110426
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_550(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_554(&uParam0, 8, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000009:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_554(&uParam0, 8, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000006E:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_554(&uParam0, 16, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_554(&uParam0, 32, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000031:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&uParam0, 64, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000007:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_554(&uParam0, 128, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000008:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_554(&uParam0, 256, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000014:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&uParam0, 512, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000018:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&uParam0, 512, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&uParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&uParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_552(struct<65> Param0) //Position: 0x1B183 / 110979
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_551(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_554(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_554(&Param0, 4, 1))
					{
						return Function_544(16);
					}
					return Function_543(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_546(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_554(&Param0, 2, 1))
						{
							return Function_544(128);
						}
						return Function_543(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_554(&Param0, 4, 1))
						{
							return Function_544(256);
						}
						return Function_543(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_546(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_554(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_554(&Param0, 4, 1))
					{
						return Function_544(16);
					}
					return Function_543(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_553(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_554(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (!Function_554(&Param0, 4, 1))
				{
					return Function_544(16);
				}
				return Function_543(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_546(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_557(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_543(128);
							}
							if (!Function_554(&Param0, 2, 1))
							{
								return Function_544(8);
							}
							return Function_543(8);
						}
						if (iParam4 == 2)
						{
							if (Function_557(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_543(256);
							}
							if (!Function_554(&Param0, 4, 1))
							{
								return Function_544(16);
							}
							return Function_543(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int Function_553(int iParam0, vector3 vParam1) //Position: 0x1B469 / 111721
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_550(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_554(&iParam0, 16, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_554(&iParam0, 32, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&iParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_554(&iParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_554(struct<69> Param0) //Position: 0x1B58B / 112011
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_555(int iParam0) //Position: 0x1B5B5 / 112053
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_556() //Position: 0x1B5EB / 112107
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_losesStageCoachHorse2", "Merchant01_losesStageCoachHorse2", false, 1, 1, 0, 1);
	Function_232(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_557(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1B652 / 112210
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

bool Function_558(int iParam0) //Position: 0x1B720 / 112416
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_559(bool bParam0) //Position: 0x1B73E / 112446
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_560(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1B775 / 112501
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

