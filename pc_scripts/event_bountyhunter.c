//Decompiled with MagicRDR v1.0
//Function Count : 577
//Statics Count : 907
//Natives Count : 650
//Parameters Count : 62

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
	var uLocal_10 = 2;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_66[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_88[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_124[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_146 = 22;
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
	int iLocal_236 = 6;
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
	int iLocal_262 = 0;
	bool bLocal_263 = false;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	char* cLocal_270[32] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	int iLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	float fLocal_334 = 0.0f;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	bool bLocal_344 = false;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	float fLocal_368 = 0.0f;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	bool bLocal_420 = false;
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
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	bool bLocal_446 = false;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
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
	var uLocal_485 = 6;
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
	var uLocal_500 = 6;
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
	var uLocal_532 = 0;
	bool bLocal_533 = false;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	struct<1093> Local_539 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var5;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar31;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	fLocal_334 = 0.0f;
	iLocal_369 = 4294967295;
	iLocal_370 = 0;
	iLocal_371 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_383 = 0;
	iLocal_406 = 0;
	iLocal_407 = 0;
	iLocal_408 = 0;
	iLocal_409 = 0;
	iLocal_410 = 0;
	iLocal_411 = 0;
	iLocal_414 = 1;
	iLocal_415 = 0;
	iLocal_416 = 0;
	iLocal_417 = 1;
	iLocal_444 = "";
	iLocal_448 = 4294967295;
	bLocal_533 = "";
	iLocal_835 = 0;
	iLocal_842 = 0;
	iLocal_843 = 0;
	*(&iVar9 + 28) = 1;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var1);
	uVar31 = Function_576();
	ADD_TIME(&uVar31, 0, 0, 10, 0);
	ScriptParam_0.f_60 = 100.0f;
	iLocal_29 = 0;
	uLocal_336 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_336, 2, 0, false, 0);
	cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bountyHunterLay") };
	uLocal_535 = CREATE_LAYOUT(&cLocal_270);
	Local_539.f_920 = 4294967295;
	Function_573();
	if (Function_572() == 0)
	{
		Function_567(&Global_39906, Function_570(), Global_39906.f_24, 0, 0, 1);
		if (Function_566("npressDemo"))
		{
			Global_39906.f_40 = 5;
			Global_39906.f_20 = 503;
		}
	}
	iLocal_829 = (*&Global_40060 + 68[0181][75])[3];
	iLocal_830 = (*&Global_40060 + 68[0181][225])[3];
	iLocal_831 = (*&Global_40060 + 68[0181][125])[3];
	iLocal_832 = (*&Global_40060 + 68[1181][75])[3];
	iLocal_833 = (*&Global_40060 + 68[1181][225])[3];
	iLocal_834 = (*&Global_40060 + 68[1181][125])[3];
	if (StackVal || !Function_565(Global_39906.f_24) != 1)
	{
		Global_39906.f_24 = Function_561(&Global_39906, 0, 80, 2000, 4294967295);
	}
	if (StackVal || !Function_565(Global_39906.f_24) != 1)
	{
		LOG_ERROR("Bad Bounty Hunter Region Calculated?");
	}
	ScriptParam_0.f_52 = Global_39906.f_24;
	Function_555(&Local_539, Function_556(Global_39906.f_24));
	Function_554(&Local_539, 0);
	PRINTSTRING("Bounty Hunter Target Volume = ");
	PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[ScriptParam_0.f_529] + 8)));
	PRINTNL();
	PRINTSTRING("Deed ID = Region: ");
	PRINTINT(Function_553(Local_539.f_1092));
	if (Function_565(Global_39906.f_24) && Global_39906.f_24 < 0)
	{
		if (Function_565(Global_39906.f_24))
		{
			bLocal_446 = Global_39906.f_24;
			uLocal_342 = &Global_44085[bLocal_4469] + 8;
			PRINTSTRING("Bounty Hunter Target Volume = ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_342)));
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Invalid. No starting region found for bountyhunter");
		}
		Function_552(1);
	}
	else
	{
		iLocal_29 = 5;
	}
	Function_551();
	while (!IS_EXITFLAG_SET())
	{
		if ((StackVal && !Function_549(!Function_550(0, 0, 1, 1), 4096)) && !iLocal_409)
		{
			Function_548(&Global_39906 + 8, 4096);
			Global_6655 = 0;
			Function_527(1);
			Function_526(0, 4294967295);
		}
		iLocal_262 = 1000;
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			iLocal_29 = 5;
		}
		else if (!Function_565(bLocal_446))
		{
			iLocal_29 = 5;
		}
		else if (!Function_565(iLocal_448) && iLocal_269 <= 8)
		{
			iLocal_29 = 5;
		}
		else if (Global_6623 != 1 && 0 != ScriptParam_0.f_44)
		{
			Function_509(16);
		}
		else if (Global_6646 && Function_508())
		{
			iLocal_383 = 1;
			Function_509(13);
		}
		else if (Function_507() != 1 && iLocal_381 != 0)
		{
			iLocal_381 = 1;
			Function_509(13);
		}
		else if (iLocal_269 >= 5 && !Function_566("npressDemo"))
		{
			if (IS_EARLIER_THAN(&uLocal_336, GET_TIME_OF_DAY()))
			{
				iLocal_29 = 5;
			}
		}
		if (iLocal_269 <= 5 && iLocal_269 > 11)
		{
			Function_491();
		}
		if (HAS_ITEM(Function_490(13), &Global_54076))
		{
			if (iLocal_417 == 1)
			{
				if (UI_ISACTIVE("WantedPoster"))
				{
					Function_489();
					PAUSE_GAME(GET_THIS_SCRIPT_ID());
					iLocal_417 = 0;
				}
			}
			else if (!UI_ISACTIVE("WantedPoster"))
			{
				Function_488();
				UNPAUSE_GAME();
				iLocal_417 = 1;
			}
		}
		else
		{
			UNPAUSE_GAME();
		}
		Function_481(&Local_539, 0, 0);
		switch (iLocal_29)
		{
			case 0x00000000:
				if (Function_480() || ScriptParam_0.f_44 != 1)
				{
					if (Function_479() == 1)
					{
						strcpy(&cLocal_270, "bountyhunter", 32);
						cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574(&cLocal_270) };
						Function_509(1);
						if (!HAS_ITEM(Function_490(13), &Global_54076))
						{
							Function_478(13, 1, 0);
						}
						CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
						if (Function_508())
						{
							Global_39906.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_joua", 0, 0, 0);
						}
						else
						{
							Global_39906.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou1", 0, 0, 0);
						}
						Function_476(&iLocal_326);
						Function_476(&iLocal_322);
						Function_476(&iLocal_310);
						iLocal_29 = 3;
						iLocal_262 = 0;
					}
				}
				else
				{
					iLocal_262 = 1000;
				}
				break;
			
			case 0x00000003:
				if (Global_6628 == 0)
				{
					if (IS_VOLUME_VALID(&uLocal_340))
					{
						iLocal_262 = 10;
					}
					if (Function_475(&iLocal_298, 4.0f))
					{
						if (iLocal_267 == 0)
						{
							HUD_FADE_OUT(3.0f, 1f, 1);
							iLocal_267 = 1;
						}
						else if (iLocal_267 == 1)
						{
							if (HUD_IS_FADED() && !HUD_IS_FADING())
							{
								HUD_FADE_IN(2.0f, 1065353216);
								Function_509(7);
								iLocal_267 = 2;
							}
						}
					}
					Function_473();
					switch (iLocal_269)
					{
						case 0x00000001:
							GET_VOLUME_CENTER(&uLocal_342, &Var1);
							Function_472(StackVal, StackVal, Var1, Global_54078, &Var1);
							if ((VMAG(Var1) > 450.0f && Function_471(64)) && Function_471(8))
							{
								if (!Function_549(StackVal, 8))
								{
									AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
									Function_467();
									Function_548(&Global_39906 + 8, 8);
								}
								iLocal_269 = 2;
								iLocal_262 = 0;
							}
							if (Function_466(&Local_539, 0, 0) != 0 && Function_475(&iLocal_294, 10.0f))
							{
								if (IS_BLIP_VALID(&uLocal_430))
								{
									SET_BLIP_BLINK(&uLocal_430, 0, 0, 5f);
								}
							}
							if (!IS_BLIP_VALID(&uLocal_430))
							{
								Function_464(1);
							}
							break;
						
						case 0x00000002:
							if (Function_463())
							{
								if (Global_46722[Global_43787] != Function_461(bLocal_446) && (Function_459(&(Global_43791[Function_460(bLocal_446)]), 32) || Function_458()))
								{
									iLocal_269 = 3;
									iLocal_262 = 0;
								}
							}
							break;
						
						case 0x00000003:
							if (iLocal_372 == 0)
							{
								GET_VOLUME_CENTER(&uLocal_342, &Var1);
								Function_457(&uLocal_342);
								Var5 = Function_457(&uLocal_342);
								Function_472(StackVal, StackVal, Global_54078, Var5, &Var1);
								if (StackVal && !Function_549(VMAG(Var1) > 250.0f, 4))
								{
									cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("restrictVol") };
									uVar7 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &cLocal_270, 4,203895E-45f, Var5, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, ScriptParam_0.f_60, ScriptParam_0.f_60));
									DECOR_SET_INT(&uVar7, "script", GET_THIS_SCRIPT_ID());
									Function_451(&uVar7, ScriptParam_0.f_40);
									Function_548(&Global_39906 + 8, 4);
									ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&uLocal_342, 0);
								}
								Function_472(StackVal, StackVal, Global_54078, Var5, &Var1);
								if (VMAG(Var1) > 200.0f && !Function_450(&Local_539))
								{
									Function_449(&Local_539, 1);
									Function_448(&Local_539, "pm_bh_nrng", 1);
									Function_440(StackVal, &Local_539, 0, 4294967295, Var1, 1, 1, 3);
								}
								iVar8 = 4294967294;
								if (Function_565(iLocal_447))
								{
									if (Function_459(&(Global_43791[iLocal_447]), 32))
									{
										iVar8 = iLocal_447;
									}
								}
								if (!Function_565(iVar8))
								{
									if (Function_565(Global_43788))
									{
										if (Function_459(&(Global_43791[Global_43788]), 32))
										{
											iVar8 = Global_43788;
										}
									}
								}
								Function_472(StackVal, StackVal, Global_54078, Var5, &Var1);
								if (((VMAG(Var1) > 200.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_342)) && Function_565(iVar8)) && !Global_6634)
								{
									if (Function_437(iVar8) == 1)
									{
										GET_OBJECT_POSITION(&uLocal_422, &Var1);
										if (!Function_436(StackVal, Var1))
										{
											if (STREAMING_ARE_BOUNDS_LOADED(Var1, 10.0f))
											{
												if (Function_412(iVar8))
												{
													iLocal_372 = 1;
													uLocal_434 = CREATE_OBJECT_ITERATOR(&uLocal_535);
												}
												else
												{
													iLocal_369 = 4;
													iLocal_29 = 5;
													iLocal_262 = 0;
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
										Function_449(&Local_539, 1);
										Global_39906.f_24 = Function_461(iLocal_448);
										Global_39906.f_24 = Function_561(&Global_39906, 0, 80, 2000, 4294967295);
										bLocal_446 = Global_39906.f_24;
										uLocal_342 = &Global_44085[bLocal_4469] + 8;
										Function_509(1);
										if (!Function_565(Global_39906.f_24))
										{
											Global_39906.f_24 = Function_561(&Global_39906, 0, 80, 2000, 4294967295);
										}
										Function_548(&Global_39906 + 8, 16);
										iLocal_29 = 3;
									}
								}
							}
							else
							{
								if (IS_ACTOR_VALID(&(uLocal_44[0])))
								{
									GET_POSITION(&(uLocal_44[0]), &Var1);
									Function_472(StackVal, StackVal, Global_54078, Var5, &Var1);
									if (VMAG(Var1) > 100.0f)
									{
										Function_509(4);
										iLocal_262 = 0;
									}
								}
								if (iLocal_372 == 1)
								{
									if (!Function_316(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
									{
										iLocal_29 = 5;
										iLocal_262 = 0;
										break;
									}
								}
							}
							break;
						
						case 0x00000004:
							if (Function_316(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0) == 0)
							{
								iLocal_29 = 5;
								iLocal_262 = 0;
							}
							break;
						
						case 0x00000005:
						case 0x00000008:
						case 0x00000009:
							Function_476(&iLocal_294);
							if (!Function_316(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
							{
								if (iLocal_373 == 1)
								{
									iLocal_29 = 5;
									iLocal_262 = 0;
								}
								break;
							}
							break;
					}
				}
				else
				{
					Function_464(0);
					iLocal_262 = 5000;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					strcpy(&cLocal_270, "bh print try ", 32);
					stradd(&cLocal_270, INT_TO_STRING(bLocal_844), 32);
					bLocal_844++;
					Function_315(&cLocal_270, 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				if (iLocal_408 == 0)
				{
					if (IS_OBJECT_VALID(&bLocal_420))
					{
						Function_314(&bLocal_420);
					}
					iLocal_408 = 1;
					if ((!IS_ACTOR_ALIVE(&Global_54076) || iLocal_369 == 2) || !IS_ACTOR_ALIVE(&(uLocal_30[0])))
					{
						iLocal_414 = 0;
					}
					if (iLocal_414 == 0)
					{
						Function_476(&iLocal_302);
						Function_243();
						iLocal_413 = 1;
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				}
				if (iLocal_413 != 0 && iLocal_408 != 1)
				{
					if (iLocal_412 == 0)
					{
						if (iLocal_414 == 1)
						{
							iVar0 = 0;
							while (iVar0 < 5)
							{
								if (IS_ACTOR_VALID(&(uLocal_30[iVar0])))
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[iVar0]));
									if (IS_MOVER_FROZEN(&(uLocal_30[iVar0])))
									{
										SET_MOVER_FROZEN(&(uLocal_30[iVar0]), 0);
									}
									AI_GOAL_LOOK_CLEAR(&(uLocal_30[iVar0]));
								}
								iVar0++;
							}
							if (iLocal_448 == Global_46760[0])
							{
								Function_242(StackVal, &Local_539, Vector(-2092,281f, 16,677f, 2606,116f));
								Function_241(&Local_539, 4);
							}
							else if (iLocal_448 == Global_46914[0])
							{
								Function_242(StackVal, &Local_539, Vector(757,028f, 78,525f, 1235,217f));
								Function_241(&Local_539, 5);
							}
							else if (iLocal_448 == Global_46866[0])
							{
								Function_242(StackVal, &Local_539, Vector(-2666,908f, 35,673f, 4254,63f));
								Function_241(&Local_539, 6);
							}
							else if (iLocal_448 == Global_46816[0])
							{
								Function_242(StackVal, &Local_539, Vector(-823,682f, 97,037f, 2424,659f));
								Function_241(&Local_539, 7);
							}
							else
							{
								cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhPosObj") };
								uLocal_426 = CREATE_POINT_IN_LAYOUT(StackVal, &uLocal_535, &cLocal_270, Global_54078, Vector(0.0f, 0.0f, 0.0f));
								Function_239(&Local_539, &Global_54076, &uLocal_426, &(uLocal_30[0]));
								Function_241(&Local_539, 1);
							}
							Function_144(&Local_539, &uLocal_535, 1);
							iLocal_412 = 1;
							UNK_0xEB0F9F0C(1);
						}
						else
						{
							iLocal_413 = 1;
							Function_476(&iLocal_302);
						}
					}
					if (iLocal_412 == 1)
					{
						if (Function_126(&Local_539) == 5)
						{
							Function_118(&Local_539);
							if (iLocal_411 == 1)
							{
								iLocal_828 = Function_116(&Global_39906, 0);
							}
							else
							{
								iLocal_828 = Function_116(&Global_39906, 1);
							}
							if (iLocal_369 == 2)
							{
								if (Global_39906.f_20 == 787)
								{
									if (Function_115(2))
									{
										if (!Function_114(2, 4))
										{
											Function_68(2, 4, 0, 0, 0);
										}
									}
								}
								if (iLocal_370 == 0)
								{
									Function_552(0);
									Function_66(1);
									iLocal_370 = 1;
								}
							}
							Function_243();
							Function_476(&iLocal_302);
							if (IS_ACTOR_VALID(&(uLocal_44[0])))
							{
								DESTROY_ACTOR(&(uLocal_44[0]));
							}
							if (Function_566("npressDemo"))
							{
								Function_65();
								Function_65();
								Function_60(StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Ambient/MexicanRevolution/mexican_rev_rally", 4), Function_65(), Function_65(), 0, 0, 0, Global_46866[0], 0, 0, 0, &iVar9, 0, 1, 0x40a00000, 4294967295, 0, 0);
							}
							iLocal_413 = 1;
						}
					}
				}
				else
				{
					if (Function_475(&iLocal_302, 20.0f))
					{
						Function_58(0);
						Function_57(12);
						RELEASE_LAYOUT_REF(&uLocal_535);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
					else if (GET_TASK_STATUS(&(uLocal_30[0]), 19) == 4)
					{
						TASK_CLEAR(&(uLocal_30[0]));
						TASK_WANDER(&(uLocal_30[0]), 3212836864);
					}
					Function_481(&Local_539, 0, 0);
				}
				if (StackVal && !Function_549(iLocal_413 != 1, 64))
				{
					Function_51();
					Function_548(&Global_39906 + 8, 64);
					UNK_0xEB0F9F0C(0);
				}
				iLocal_262 = 0;
				break;
		}
		WAIT(iLocal_262);
	}
	Function_1();
	DESTROY_ITERATOR(&ScriptParam_0 + 8);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xE6A / 3690
{
	int iVar0;
	
	Function_32(&iLocal_449);
	Function_51();
	REMOVE_OBJECT_ATTACHMENT(&iLocal_826);
	if (IS_OBJECT_VALID(&bLocal_344))
	{
		DESTROY_VOLUME(&bLocal_344);
	}
	if (IS_OBJECT_VALID(&uLocal_350))
	{
		DESTROY_VOLUME(&uLocal_350);
	}
	REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&uLocal_342, 0);
	if (IS_OBJECT_VALID(&iLocal_444))
	{
		DEREFERENCE_OBJECT(&iLocal_444);
	}
	if (IS_VOLUME_VALID(&uLocal_338))
	{
		DESTROY_VOLUME(&uLocal_338);
	}
	if (IS_OBJECTSET_VALID(&bLocal_814))
	{
		DESTROY_OBJECTSET(&bLocal_814);
	}
	if (IS_OBJECTSET_VALID(&bLocal_816))
	{
		DESTROY_OBJECTSET(&bLocal_816);
	}
	if (IS_OBJECTSET_VALID(&bLocal_818))
	{
		DESTROY_OBJECTSET(&bLocal_818);
	}
	Function_464(0);
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
		{
			DEREFERENCE_ACTOR(&(uLocal_44[iVar0]));
		}
		if (IS_ACTOR_ALIVE(&(uLocal_44[iVar0])) && IS_ACTOR_VALID(&(uLocal_44[iVar0])))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0]))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0])));
			}
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar0])), "bountyhunter_blip");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar0])), "bhnt_lookout");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar0])), "bhnt_state");
			if (StackVal && Function_549(iVar0 != 0, 256))
			{
				DESTROY_ACTOR(&(uLocal_44[0]));
			}
			else if (IS_ACTOR_ALIVE(&Global_54076))
			{
				Function_23(&(uLocal_44[iVar0]), 2, GET_OBJECT_FROM_ACTOR(&Global_54076), 4);
			}
			else
			{
				RELEASE_ACTOR(&(uLocal_44[iVar0]));
			}
		}
		if (IS_ACTOR_ALIVE(&(iLocal_66[iVar0])) && IS_ACTOR_VALID(&(iLocal_66[iVar0])))
		{
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&(iLocal_66[iVar0]), 1);
			RELEASE_ACTOR_AS_AMBIENT(&(iLocal_66[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(&(uLocal_30[iVar0])))
		{
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&(uLocal_30[iVar0]), 1);
			RELEASE_ACTOR(&(uLocal_30[iVar0]));
		}
		iVar0++;
	}
	if (Function_22())
	{
		Function_14();
	}
	Function_12(1);
	if (IS_ITERATOR_VALID(&uLocal_434))
	{
		DESTROY_ITERATOR(&uLocal_434);
	}
	if (IS_OBJECT_VALID(&bLocal_420))
	{
		Function_314(&bLocal_420);
	}
	Function_9();
	Function_7();
	Function_243();
	if (IS_LAYOUTREF_VALID(&uLocal_535))
	{
		DESTROY_LAYOUT(&uLocal_535);
	}
	Function_2();
	if (iLocal_370 == 0)
	{
		Function_552(0);
		Function_66(1);
		iLocal_370 = 1;
	}
	return;
}

void Function_2() //Position: 0x10C9 / 4297
{
	Function_3(&iLocal_146);
	Function_3(&iLocal_236);
	return;
}

void Function_3(int iParam0) //Position: 0x10D9 / 4313
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x1101 / 4353
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0x124C / 4684
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x1269 / 4713
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x1287 / 4743
{
	var uVar0;
	
	uVar0 = Function_8();
	if (IS_OBJECT_VALID(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	return;
}

var Function_8() //Position: 0x12A2 / 4770
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
		if (IS_ITERATOR_VALID(&uVar1))
		{
			ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
			ITERATE_ON_PARTIAL_NAME(&uVar1, "nbhDataObj");
			uVar0 = START_OBJECT_ITERATOR(&uVar1);
			if (!IS_OBJECT_VALID(&uVar0))
			{
				uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Global_43578, "nbhDataObj", Vector(1,2f, 1,2f, 1,2f), Vector(0.0f, 0.0f, 0.0f));
				if (!IS_OBJECT_VALID(&uVar0))
				{
					LOG_ERROR("BOUNTYHUNTER_GetExternalObject - Could not create external object?");
				}
			}
			DESTROY_ITERATOR(&uVar1);
		}
	}
	else
	{
		LOG_ERROR("BOUNTYHUNTER_GetExternalObject - Huh? Traffic layout is invalid?");
	}
	return &uVar0;
}

void Function_9() //Position: 0x13C3 / 5059
{
	if (SQUAD_IS_VALID(&uLocal_836))
	{
		Function_11(&uLocal_836);
		Function_10(&uLocal_836);
		DESTROY_OBJECT(&uLocal_836);
	}
	return;
}

void Function_10(int iParam0) //Position: 0x13EB / 5099
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

void Function_11(int iParam0) //Position: 0x1420 / 5152
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_12(int iParam0) //Position: 0x146B / 5227
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_13())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_13() //Position: 0x14AB / 5291
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

void Function_14() //Position: 0x14D0 / 5328
{
	Function_16();
	Function_15(10, 3);
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0x14DF / 5343
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

void Function_16() //Position: 0x162C / 5676
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_21())
	{
		Function_20(10, 3);
	}
	else
	{
		Function_18();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_17(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_17());
	UI_POP("nDebugMenu");
	return;
}

var Function_17() //Position: 0x1677 / 5751
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_18() //Position: 0x168C / 5772
{
	Function_19(25, 2);
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x1698 / 5784
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

void Function_20(int iParam0, int iParam1) //Position: 0x18C4 / 6340
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

bool Function_21() //Position: 0x1A11 / 6673
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
				if (!Function_549(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_22() //Position: 0x1A79 / 6777
{
	return Global_54085;
}

int Function_23(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1A82 / 6786
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_24(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_24(&bParam0, &iParam1, &bParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_24(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1B70 / 7024
{
	char* cVar0[32];
	
	Function_31();
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
	if (Function_30(&uParam0) == 1)
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
	Function_29(&uParam0, 0);
	Function_28(&uParam0, iParam1);
	Function_27(&uParam0, &uParam2);
	Function_26(&uParam0, uParam3);
	if (Function_25(&uParam0) != 5)
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

int Function_25(int iParam0) //Position: 0x1DDC / 7644
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_26(var uParam0, bool bParam1) //Position: 0x1E00 / 7680
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x1E24 / 7716
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_28(var uParam0, bool bParam1) //Position: 0x1E4A / 7754
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_29(var uParam0, bool bParam1) //Position: 0x1E71 / 7793
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_30(bool bParam0) //Position: 0x1E95 / 7829
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_31() //Position: 0x1EB4 / 7860
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

void Function_32(int iParam0) //Position: 0x1F03 / 7939
{
	Function_33(&iParam0);
	return;
}

void Function_33(struct<261> Param0) //Position: 0x1F0F / 7951
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(&Param0 + 16))
	{
		DESTROY_ITERATOR(&Param0 + 16);
	}
	if (IS_ACTORSET_VALID(&Param0 + 64))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(&Param0 + 64);
	}
	if (SQUAD_IS_VALID(&Param0 + 80))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar2);
			CLEAR_ACTOR_MAX_SPEED(&uVar0);
			if (Param0.f_260 == 0)
			{
				Function_39(&Param0, &uVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 80));
	}
	if (IS_ACTORSET_VALID(&Param0 + 88))
	{
		if (Param0.f_260 == 0)
		{
			Function_38(&Param0 + 88, 2, 0, 2);
		}
		else
		{
			Function_36(&Param0 + 88);
		}
		DESTROY_ACTORSET(&Param0 + 88);
	}
	if (!Function_549(Param0.f_128, 16))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0);
		DESTROY_LAYOUT(&Param0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 136))
	{
		Function_35(&Param0 + 136);
		DESTROY_OBJECTSET(&Param0 + 136);
	}
	iVar1 = Function_34(&Param0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

int Function_34(int iParam0) //Position: 0x2051 / 8273
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

void Function_35(var uParam0) //Position: 0x2076 / 8310
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_36(int iParam0) //Position: 0x20C5 / 8389
{
	bool bVar0;
	
	Function_37(&iParam0);
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_37(int iParam0) //Position: 0x2111 / 8465
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_38(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x2170 / 8560
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_24(&uVar0, &iParam1, &uParam2, &iParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(&uParam0);
		return 1;
	}
	return 0;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x21E3 / 8675
{
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (Function_50(&bParam1, &iParam0 + 80, 1))
	{
		SQUAD_LEAVE(&bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam1)))
		{
			if (GET_MOUNT(&bParam1) != Function_40(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (&iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(&bParam1));
				}
				else
				{
					Function_23(GET_MOUNT(&bParam1), iParam2, 0, 2);
				}
			}
		}
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_23(&bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(&iParam0 + 88, &bParam1))
	{
		REMOVE_ACTORSET_MEMBER(&iParam0 + 88, &bParam1);
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_23(&bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_40(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x22A5 / 8869
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
		Function_49(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_48())
		{
			return "";
		}
	}
	if (!Function_46())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_45();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_44(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_44(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_44(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_44(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_43(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_43(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_42(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_42(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_436(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_42(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_42(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
		Function_41(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2602 / 9730
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_42() //Position: 0x264C / 9804
{
	int iVar0;
	
	return &iVar0;
}

var Function_43(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2655 / 9813
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

struct<8> Function_44(bool bParam0) //Position: 0x26F5 / 9973
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

void Function_45() //Position: 0x271E / 10014
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

bool Function_46() //Position: 0x2796 / 10134
{
	if (Function_47() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_47() //Position: 0x27AC / 10156
{
	return Global_21369.f_244;
}

bool Function_48() //Position: 0x27B7 / 10167
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_49(var uParam0, bool bParam1, bool bParam2) //Position: 0x27D7 / 10199
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_548(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_548(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_50(int iParam0, int iParam1, bool bParam2) //Position: 0x2806 / 10246
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

void Function_51() //Position: 0x284E / 10318
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	var uVar7;
	
	iVar1 = 0;
	if (!Function_549(StackVal, 64))
	{
		Function_548(&Global_39906 + 8, 64);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (iLocal_369 != 2 || iLocal_369 != 3)
		{
			if (Global_43787 == 0)
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43787 == 1)
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else
			{
				Global_43787 = 2;
				AUDIO_MUSIC_ONE_SHOT("NRT_BOUNTY_HUNTER_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
		}
		if (iLocal_371 == 1)
		{
			if (IS_ACTOR_VALID(&(uLocal_44[0])))
			{
				DESTROY_ACTOR(&(uLocal_44[0]));
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(&(uLocal_30[iVar0])))
			{
				Function_56(&Global_54076, &(uLocal_30[iVar0]), 2, 1);
				MEMORY_CLEAR_ALL(&(uLocal_30[0]));
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(uLocal_30[iVar0]), 1);
				DEREFERENCE_ACTOR(&(uLocal_30[iVar0]));
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[iVar0]));
				Function_55(&(uLocal_30[iVar0]));
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uLocal_30[iVar0]), 1);
				TASK_CLEAR(&(uLocal_30[iVar0]));
				if (iVar0 == 0)
				{
					Function_54(&(uLocal_30[iVar0]));
					Var2 = Function_54(&(uLocal_30[iVar0]));
					bVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_42(), &uLocal_535, 4294967295, 0);
					uVar5 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_535, Function_42(), 4,203895E-45f, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
					LOCATE_GRINGOS_IN_VOLUME(&uVar5, &bVar4, 0, 1);
					while (GET_OBJECTSET_SIZE(&bVar4) < 0 && iVar1 != 0)
					{
						uVar7 = GET_GRINGO_FROM_OBJECT(Function_53(&bVar4));
						if (IS_GRINGO_VALID(&uVar7))
						{
							if (GRINGO_ACTOR_CAN_USE(&uVar7, "UseCase1", &(uLocal_30[iVar0])) && IS_GRINGO_READY(GET_OBJECT_FROM_GRINGO(&uVar7)))
							{
								Function_52(&bVar4);
							}
							else
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar7), &bVar4);
							}
						}
						else
						{
							iVar1 = 1;
							uVar7 = "";
						}
					}
					DESTROY_OBJECTSET(&bVar4);
					DESTROY_VOLUME(&uVar5);
					if (IS_GRINGO_VALID(&uVar7))
					{
						TASK_USE_GRINGO(&(uLocal_30[iVar0]), &uVar7, "useCase1", 1, 1);
					}
					else
					{
						TASK_WANDER(&(uLocal_30[iVar0]), 3212836864);
					}
				}
				else
				{
					TASK_WANDER(&(uLocal_30[iVar0]), 3212836864);
				}
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&(uLocal_30[iVar0]), 1);
				RELEASE_ACTOR(&(uLocal_30[iVar0]));
			}
			if (IS_VOLUME_VALID(&(uLocal_352[iVar0])))
			{
				DESTROY_VOLUME(&(uLocal_352[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

void Function_52(var uParam0) //Position: 0x2AE9 / 10985
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
	}
	return;
}

var Function_53(bool bParam0) //Position: 0x2B29 / 11049
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = "";
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(&bParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &bParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return &iVar0;
}

struct<8> Function_54(int iParam0) //Position: 0x2B95 / 11157
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_55(int iParam0) //Position: 0x2BA7 / 11175
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_REMOVE(&iParam0, "nocrime");
	}
	return;
}

int Function_56(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2BDC / 11228
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_57(int iParam0) //Position: 0x2C3C / 11324
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_58(int iParam0) //Position: 0x2C59 / 11353
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_59(105)), 0);
	return;
}

int Function_59(bool bParam0) //Position: 0x2C7C / 11388
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

int Function_60(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x2C93 / 11411
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_64(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					*(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_63(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_62(&(Global_38380[iVar036]), 1);
					Function_61(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_61(vector3 vParam0) //Position: 0x2DE1 / 11745
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_62(vector3 vParam0) //Position: 0x2DFE / 11774
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_63(struct<157> Param0) //Position: 0x2E11 / 11793
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_64(vector3 vParam0) //Position: 0x2FC1 / 12225
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_65() //Position: 0x2FDF / 12255
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_66(int iParam0) //Position: 0x2FE9 / 12265
{
	Function_552(0);
	Function_573();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	Global_39906.f_40 = 0;
	if (&iParam0 == 1)
	{
		Function_67(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_67(int iParam0, int iParam1) //Position: 0x3032 / 12338
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_68(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3048 / 12360
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_113(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_112(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_111(bParam0, 2))
	{
		Function_96(456, 1, 0, 0);
		Function_95(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_93(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_114(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_95(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_550(0, 0, 1, 1))
			{
				Function_527(1);
				Function_526(1, 0);
			}
			else
			{
				Function_92();
			}
		}
		Function_87(bParam0);
		if (StackVal && !Function_549(((((!Function_86() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_549((((Function_86() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_85())
		{
			if (!Function_84(Global_119934, 2))
			{
				Function_79(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_71();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_70(3, bParam1);
				break;
			
			case 0x00000005:
				Function_70(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_70(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_70(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_70(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_70(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_69(2, 24);
				break;
			
			case 0x00000003:
				Function_69(2, 25);
				break;
			
			case 0x0000000F:
				Function_69(2, 26);
				break;
			
			case 0x0000000D:
				Function_69(2, 27);
				break;
			
			case 0x0000000E:
				Function_69(2, 28);
				break;
			}
	}
}

void Function_69(int iParam0, int iParam1) //Position: 0x32E7 / 13031
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

void Function_70(int iParam0, bool bParam1) //Position: 0x3351 / 13137
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

void Function_71() //Position: 0x33C0 / 13248
{
	if (Function_113(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_78(Global_42827);
			*(&Global_42827 + 8) = Function_72(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_78(Global_42827);
			*(&Global_42827 + 8) = Function_72(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_72(int iParam0, int iParam1) //Position: 0x3440 / 13376
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
					if (Function_74(6, 0) || Function_74(12, 0))
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
					if (Function_73(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_74(5, 0))
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
					if (Function_73(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_73(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_73(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_73(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_74(26, 0))
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
					if (Function_73(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_73(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_73(27) && iVar16)
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
					if (Function_73(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_73(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_73(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_73(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_74(17, 0) && iVar13)
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
					if (Function_73(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_74(6, 0) && Function_73(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_73(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_74(9, 0) && Function_73(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_73(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_74(8, 0) && iVar17)
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
	if (Function_436(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_436(StackVal, vVar2))
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
	if (!Function_436(StackVal, vVar2))
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

int Function_73(int iParam0) //Position: 0x40A4 / 16548
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0, bool bParam1) //Position: 0x40B9 / 16569
{
	int iVar0;
	
	iVar0 = Function_76(iParam0);
	if (!Function_75(iVar0))
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

bool Function_75(int iParam0) //Position: 0x40F7 / 16631
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_76(int iParam0) //Position: 0x410E / 16654
{
	if (!Function_77(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_77(int iParam0) //Position: 0x4128 / 16680
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_78(int iParam0) //Position: 0x413E / 16702
{
	int iVar0;
	int iVar1;
	
	if (!Function_113(iParam0))
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

void Function_79(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x418D / 16781
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_81(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_80(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_80(char* cParam0) //Position: 0x4202 / 16898
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

bool Function_81(int iParam0, var uParam1, int iParam2) //Position: 0x423C / 16956
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
		if (Function_83(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_82(uVar0))
		{
			case 0x00000002:
				if (!Function_84(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_82(char* cParam0) //Position: 0x42B8 / 17080
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

int Function_83(int iParam0) //Position: 0x4359 / 17241
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_67(&iVar1, 2147483648);
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

bool Function_84(int iParam0, int iParam1) //Position: 0x4396 / 17302
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_85() //Position: 0x43A9 / 17321
{
	if (Function_549(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_86() //Position: 0x43C4 / 17348
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_87(bool bParam0) //Position: 0x43F1 / 17393
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
			if (Function_114(bParam0, Function_91(bVar24)))
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
			if (Function_114(bParam0, Function_91(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_90(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_89(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_88(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_88(int iParam0) //Position: 0x45A1 / 17825
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_113(iParam0))
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

void Function_89(var uParam0, int iParam1) //Position: 0x45F8 / 17912
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

var Function_90(int iParam0) //Position: 0x461D / 17949
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_113(iParam0))
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

int Function_91(bool bParam0) //Position: 0x4673 / 18035
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_92() //Position: 0x467F / 18047
{
	return;
}

void Function_93(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4685 / 18053
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_94(int iParam0) //Position: 0x4710 / 18192
{
	char* cVar0[16];
	
	if (!Function_85())
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

void Function_95(int iParam0, int iParam1) //Position: 0x474F / 18255
{
	if (!Function_113(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_96(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x47A4 / 18340
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
	Function_110(iParam0, TO_FLOAT(bParam1), 1);
	Function_109(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_98(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_97(iParam0);
	return 1;
}

void Function_97(bool bParam0) //Position: 0x49CC / 18892
{
	switch (bParam0)
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

void Function_98(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4A6A / 19050
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_108(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_107(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_107(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_105(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_102(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_99(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_42(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_99(int iParam0) //Position: 0x50A8 / 20648
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_100(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x50B9 / 20665
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_101(char* cParam0) //Position: 0x51B0 / 20912
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_102(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x51CB / 20939
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_104(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_103(Function_104(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_103(int iParam0, int iParam1) //Position: 0x5232 / 21042
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_104(int iParam0, bool bParam1) //Position: 0x5244 / 21060
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_105(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5256 / 21078
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
	if (((Function_106(iParam0) != 19 || Function_106(iParam0) != 17) || Function_106(iParam0) != 10) || Function_106(iParam0) != 9)
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

int Function_106(int iParam0) //Position: 0x538A / 21386
{
	return Global_55480[iParam016].f_96;
}

float Function_107(int iParam0) //Position: 0x5399 / 21401
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_108(int iParam0) //Position: 0x53D2 / 21458
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_109(int iParam0) //Position: 0x540F / 21519
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

int Function_110(int iParam0, float fParam1, bool bParam2) //Position: 0x55A9 / 21929
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

bool Function_111(int iParam0, int iParam1) //Position: 0x57ED / 22509
{
	int iVar0;
	
	if (!Function_113(iParam0))
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

bool Function_112(int iParam0) //Position: 0x581A / 22554
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_113(int iParam0) //Position: 0x5836 / 22582
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_114(bool bParam0, int iParam1) //Position: 0x584C / 22604
{
	int iVar0;
	
	if (!Function_113(bParam0))
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

bool Function_115(int iParam0) //Position: 0x58AB / 22699
{
	if (!Function_113(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_111(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_116(struct<13> Param0) //Position: 0x58FD / 22781
{
	bool bVar0;
	char* cVar1[32];
	
	switch (Param0.f_12)
	{
		case 0x00000001:
			if (&bParam1)
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
			if (&bParam1)
			{
				bVar0 = 80;
			}
			else
			{
				bVar0 = 40;
			}
			break;
		
		case 0x00000003:
			if (&bParam1)
			{
				bVar0 = 120;
			}
			else
			{
				bVar0 = 60;
			}
			break;
		
		case 0x00000004:
			if (&bParam1)
			{
				bVar0 = 200;
			}
			else
			{
				bVar0 = 100;
			}
			break;
		
		case 0x00000005:
			if (&bParam1)
			{
				bVar0 = 300;
			}
			else
			{
				bVar0 = 150;
			}
			break;
		
		case 0x00000006:
			if (&bParam1)
			{
				bVar0 = 400;
			}
			else
			{
				bVar0 = 200;
			}
			break;
		
		default:
			if (&bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
			if (&bParam1 == 1)
			{
				strcpy(&cVar1, "Bounty Alive reward: ", 32);
			}
			else
			{
				strcpy(&cVar1, "Bounty Dead reward: ", 32);
			}
			stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	}
	if (Function_47() > 4)
	{
		bVar0 *= 2;
	}
	if (Function_117())
	{
		return (bVar0 / 2);
	}
	return bVar0;
}

bool Function_117() //Position: 0x5A29 / 23081
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_118(struct<1049> Param0) //Position: 0x5A54 / 23124
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 992);
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar2)) && GET_ACTOR_FROM_OBJECT(&uVar2) == &Global_54076)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(&uVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_549(Param0.f_1048, 512) && Function_549(Param0.f_1048, 256))
	{
		if (IS_OBJECT_VALID(&Param0 + 936))
		{
			DESTROY_OBJECT(&Param0 + 936);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 928));
		}
		if (IS_OBJECT_VALID(&Param0 + 944))
		{
			DESTROY_VOLUME(&Param0 + 944);
		}
		while (GET_OBJECTSET_SIZE(&Param0 + 992) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			if (IS_OBJECT_VALID(&uVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 992);
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar0)))
					{
						Function_125(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(&uVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(&Param0 + 992);
		}
		if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
		{
			Function_125(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
		}
		(&Param0 + 1000) = Vector(0.0f, 0.0f, 0.0f);
		Param0.f_1012 = 0;
		Function_122(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_121(1.0f);
		Function_120(&Param0, 5);
		if (Function_549(Param0.f_1048, 32768))
		{
			Function_119(256);
		}
		Function_548(&Param0 + 1048, 512);
		Function_67(&Param0 + 1048, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_119(int iParam0) //Position: 0x5C48 / 23624
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_120(struct<985> Param0) //Position: 0x5C65 / 23653
{
	Param0.f_984 = iParam1;
	return;
}

void Function_121(bool bParam0) //Position: 0x5C73 / 23667
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

void Function_122(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x5C90 / 23696
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
		uVar0 = Function_17();
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
		Function_96(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_124();
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
	Function_123(&uParam9, &uParam10);
}

void Function_123(var uParam0, bool bParam1) //Position: 0x5D5F / 23903
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
		Function_45();
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

void Function_124() //Position: 0x5E2E / 24110
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_125(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5E43 / 24131
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			FIRE_STOP_ON_ACTOR(&bParam0);
		}
		SET_ACTOR_INVULNERABILITY(&bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&bParam0);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam0);
		RESET_ACTOR_GAITS(&bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&bParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&bParam0);
		SET_ACTOR_INVULNERABILITY(&bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

int Function_126(struct<1049> Param0) //Position: 0x5EF3 / 24307
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	char[] cVar7[4];
	var uVar8;
	char* cVar9[8];
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	struct<8> Var19;
	int iVar27;
	
	switch (Param0.f_984)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_436(StackVal, *(&Param0 + 1000)))
			{
				GET_POSITION(&Global_54076, &Param0 + 1000);
			}
			if (!Function_436(StackVal, *(&Param0 + 1000)))
			{
				STREAMING_LOAD_BOUNDS(*(&Param0 + 1000), 10.0f, 0);
			}
			switch (Param0.f_988)
			{
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					if (IS_ACTOR_PLAYER(&Global_54076))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					Function_142(&Global_54076, 0);
					REQUEST_ACTION_TREE("custom/stand_hostage");
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop", 1);
					if (Param0.f_1016 == 1)
					{
						Function_120(&Param0, 4);
						Function_476(&Param0 + 952);
					}
					else
					{
						Function_120(&Param0, 3);
					}
					break;
				
				default:
					Function_120(&Param0, 4);
					Function_476(&Param0 + 952);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_436(StackVal, *(&Param0 + 1000)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 1000), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(&Param0 + 936) && HUD_IS_FADED())
					{
						Function_121(1.0f);
						Function_120(&Param0, 4);
						Function_476(&Param0 + 952);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(&Global_54076, &Var15);
				if (VMAG(Var15) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_MOUNT(&Global_54076));
						TASK_CLEAR(&Global_54076);
						TASK_DISMOUNT(&Global_54076, 1);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_VEHICLE(&Global_54076));
						Function_23(GET_VEHICLE(&Global_54076), 0, 0, 2);
						TASK_CLEAR(&Global_54076);
						TASK_VEHICLE_LEAVE(&Global_54076);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(&Global_54076, 12) != 1 || GET_TASK_STATUS(&Global_54076, 12) != 3) || GET_TASK_STATUS(&Global_54076, 55) != 1) || GET_TASK_STATUS(&Global_54076, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj")));
				}
				bVar1 = Function_141(&Param0, 1);
				if (IS_ACTOR_VALID(&bVar1))
				{
					TASK_CLEAR(&Global_54076);
					TASK_GO_NEAR_ACTOR(&Global_54076, &bVar1, 2,5f, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_120(&Param0, 4);
				Function_476(&Param0 + 952);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 936))
			{
				switch (Param0.f_988)
				{
					case 0x00000003:
						if (Function_139(&Param0 + 952, 5.0f))
						{
							fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
							fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
							GET_OBJECT_POSITION(&fVar4, &cVar9);
							CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
							GET_OBJECT_RELATIVE_POSITION(StackVal, &fVar4, Vector(-3,285f, 0.0f, -3,285f), &cVar9);
							GET_OBJECT_POSITION(&fVar5, &Var11);
							cVar9.f_4 = (StackVal + FABS((StackVal - StackVal)));
							FIND_GROUND_INTERSECTION(&cVar9, 100.0f, &cVar9, &Var13);
							CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar5))))
							{
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar5));
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar5));
							}
							if (IS_ACTOR_VALID(&bVar0))
							{
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar5));
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&fVar5), cVar9, 0.0f, 1, 1, 1);
							}
							if (IS_ACTOR_VALID(&bVar0))
							{
								cVar9 = (cVar9 + 3.0f);
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
								TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
							}
							SNAP_OBJECT_TO_GROUND(&bVar0, 20.0f, 0, 1092616192);
							SNAP_OBJECT_TO_GROUND(&fVar5, 20.0f, 0, 1092616192);
						}
						break;
					
					case 0x00000001:
						fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
						uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
						bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
						iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
						switch (Param0.f_1012)
						{
							case 0x00000000:
								cVar9 = Global_54078;
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								GET_OBJECT_POSITION(&fVar5, &Var17);
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
								if (IS_ACTOR_VALID(&bVar0))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar4));
									Function_54(&Global_54076);
									cVar9 = Function_54(&Global_54076);
									cVar9 = (cVar9 + 3.0f);
									TELEPORT_ACTOR(&bVar0, &cVar9, 1, 1, 1);
								}
								ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(&iVar2, 0, 0);
								SNAP_OBJECT_TO_GROUND(&bVar1, 20.0f, 0, 1092616192);
								TASK_STAND_STILL(&bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								Var13 = Vector(0.0f, 1.0f, 0.0f);
								ROTATE_OBJECT_AROUND_AXIS(&bVar1, &Var13, 165.0f);
								Var11 = Global_54078;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &Var11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_136(&iVar2, &Global_54076);
								Function_67(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_475(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_475(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_135(&Param0, &bVar1, &iVar2, 4);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(&Param0 + 928))
								{
									if (GRINGO_ACTOR_CAN_USE(&Param0 + 928, "UseCase1", &bVar1))
									{
										SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", false, 0, 0);
										TASK_USE_GRINGO(&bVar1, &Param0 + 928, "UseCase1", 1, 1);
										Function_476(&Param0 + 952);
									}
									else
									{
										LOG_ERROR("Cannot use this cutscene gringo?");
									}
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iVar2)))
								{
									if (Function_132(&Param0 + 952) < 0,75f && !Function_549(Param0.f_1048, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
										TASK_PRIORITY_SET(&iVar2, true);
										TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
										Function_548(&Param0 + 1048, 2048);
										Function_476(&Param0 + 952);
										Param0.f_1012++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_475(&Param0 + 952, 9.0f))
								{
									Function_120(&Param0, 5);
									Param0.f_1012++;
								}
								break;
						}
						break;
					
					case 0x00000002:
						fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
						fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
						uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
						bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
						iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
						switch (Param0.f_1012)
						{
							case 0x00000000:
								GET_OBJECT_POSITION(&fVar5, &cVar9);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								GET_OBJECT_POSITION(&fVar5, &Var17);
								Var15 = Vector(-5,348521f, 0.0f, -3,826143f);
								cVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Var15, Var17, StackVal);
								FIND_GROUND_INTERSECTION(&cVar9, 20.0f, &cVar9, &Var13);
								if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4))))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar4));
								}
								ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(&iVar2, 0, 0);
								TELEPORT_ACTOR_WITH_HEADING(&bVar1, cVar9, 0.0f, 1, 1, 1);
								SNAP_OBJECT_TO_GROUND(&bVar1, 20.0f, 0, 1092616192);
								TASK_STAND_STILL(&bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								Var13 = Vector(0.0f, 1.0f, 0.0f);
								ROTATE_OBJECT_AROUND_AXIS(&bVar1, &Var13, 165.0f);
								Var11 = cVar9;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &Var11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_67(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_475(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_475(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_135(&Param0, &bVar1, &iVar2, 4);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(&Param0 + 928))
								{
									SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(&bVar1, &Param0 + 928, "UseCase1", 1, 1);
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_132(&Param0 + 952) < 0,75f && !Function_549(Param0.f_1048, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
									Function_548(&Param0 + 1048, 2048);
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								if (Function_475(&Param0 + 952, 9.0f))
								{
									Function_120(&Param0, 5);
									Param0.f_1012++;
								}
								break;
						}
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
					case 0x00000007:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_475(&Param0 + 952, 1.0f))
								{
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_141(&Param0, 1);
								if (IS_ACTOR_VALID(&bVar0))
								{
									Function_131(&bVar0, &cVar9);
								}
								else
								{
									cVar9 = Vector(0.0f, 0.0f, 0.0f);
								}
								if ((Function_475(&Param0 + 952, 0,5f) || Param0.f_1016 != 1) || VDIST(Global_54078, cVar9) > 3.0f)
								{
									if (IS_OBJECT_VALID(&Param0 + 944))
									{
										DESTROY_VOLUME(&Param0 + 944);
									}
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2096,014f, 16,449f, 2603,359f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(761,411f, 79,458f, 1232,734f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2671,387f, 31,363f, 4253,713f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-821,7f, 93,222f, 2418,31f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad value");
									}
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhCutsceneVol") };
									*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, cVar9, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2104,648f, 16,46f, 2605,749f);
										Var13 = Vector(0.0f, 216.0f, 0.0f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(751,328f, 78,525f, 1233,59f);
										Var13 = Vector(0.0f, 235.0f, 0.0f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2680,063f, 31,548f, 4255,704f);
										Var13 = Vector(0.0f, 251.0f, 0.0f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-824,746f, 92,129f, 2406,763f);
										Var13 = Vector(0.0f, 236.0f, 0.0f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad handshaker(1) position value");
									}
									TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
									PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								if (Param0.f_988 == 4)
								{
									cVar9 = Vector(-2096,996f, 16,449f, 2605,508f);
									Var13 = Vector(0.0f, 167.0f, 0.0f);
								}
								else if (Param0.f_988 == 5)
								{
									cVar9 = Vector(754,635f, 78,525f, 1234,821f);
									Var13 = Vector(0.0f, 352,531f, 0.0f);
								}
								else if (Param0.f_988 == 6)
								{
									cVar9 = Vector(-2672,115f, 31,384f, 4254,054f);
									Var13 = Vector(0.0f, -10.0f, 0.0f);
								}
								else if (Param0.f_988 == 7)
								{
									cVar9 = Vector(-821,642f, 93,294f, 2419,156f);
									Var13 = Vector(0.0f, 90.0f, 0.0f);
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad value");
								}
								*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", cVar9, Var13));
								Function_56(&bVar0, Function_141(&Param0, 0), 0, 1);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_141(&Param0, iVar27);
									if (IS_ACTOR_VALID(&bVar0))
									{
										if (!IS_ACTOR_PLAYER(&bVar0))
										{
											SET_ACTOR_UPDATE_PRIORITY(&bVar0, false);
											TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
										}
										switch (iVar27)
										{
											case 0x00000000:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2094,226f, 16,449f, 2608,347f);
													Var13 = Vector(0.0f, 298,712f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(757,028f, 78,525f, 1235,217f);
													Var13 = Vector(0.0f, 346.0f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,537f, 31,387f, 4253,711f);
													Var13 = Vector(0.0f, 234,172f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-821,477f, 93,365f, 2420,748f);
													Var13 = Vector(0.0f, 173,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim position value");
												}
												REMOVE_OBJECT_FROM_ATTACHMENT(&bVar0);
												FREE_FROM_HOGTIE(&bVar0);
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 0, 1);
												Function_125(&bVar0, 1, 1);
												SET_ANIM_SET_FOR_ACTOR(&bVar0, "stand_hostage", 0);
												SET_ACTION_NODE_FOR_ACTOR(&bVar0, "stand_hostage/walk_pose");
												DELETE_ACCESSORY("ANKLE_BIND", &bVar0);
												SET_ACTOR_MAX_SPEED(&bVar0, 1);
												MEMORY_CLEAR_ALL(&bVar0);
												TASK_CLEAR(&bVar0);
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,603f, 16,962f, 2605,353f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(757,973f, 78,525f, 1234,922f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2657,971f, 31,386f, 4258,836f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-823,57f, 93,809f, 2427,074f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim face actor value");
												}
												TASK_FACE_COORD(&bVar0, &cVar9, 1);
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000001:
												MEMORY_CONSIDER_AS(&bVar0, &Global_54076, false);
												ACTOR_HOLSTER_WEAPON(&bVar0, 0);
												TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000002:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2095,837f, 16,449f, 2608,938f);
													Var13 = Vector(0.0f, 298,712f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(756,759f, 78,525f, 1237,865f);
													Var13 = Vector(0.0f, 59,078f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,258f, 31,387f, 4252,612f);
													Var13 = Vector(0.0f, 218,528f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-819,311f, 93,365f, 2421,17f);
													Var13 = Vector(0.0f, 135,445f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (!IS_ACTOR_VALID(Function_141(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_141(&Param0, 0), -1.0f, 0);
													UNK_0x2E84E682(&bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(&bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(&bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(&bVar0, Function_141(&Param0, 0), 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000003:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,431f, 16,963f, 2603,127f);
													Var13 = Vector(0.0f, 167.0f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(756,564f, 78,525f, 1232,389f);
													Var13 = Vector(0.0f, 169,678f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2661,205f, 31,386f, 4254,576f);
													Var13 = Vector(0.0f, 0.0f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-824,301f, 93,365f, 2421,301f);
													Var13 = Vector(0.0f, 263,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (!IS_ACTOR_VALID(Function_141(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_141(&Param0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000004:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,729f, 16,449f, 2610,241f);
													Var13 = Vector(0.0f, 13.0f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(763,822f, 79,456f, 1234,328f);
													Var13 = Vector(0.0f, 93,67f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,106f, 31,387f, 4256,549f);
													Var13 = Vector(0.0f, 0.0f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-823,502f, 93,809f, 2430,243f);
													Var13 = Vector(0.0f, 353,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (IS_ACTOR_VALID(Function_141(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_141(&Param0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000005:
												if (Param0.f_988 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 5)
												{
													LOG_ERROR("Blackwater does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2669,659f, 35,673f, 4252,948f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-826,75f, 96,959f, 2425,077f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(&bVar0);
												TASK_GO_NEAR_COORD(&bVar0, &cVar9, 0,3f, 1);
												break;
											
											case 0x00000006:
												if (Param0.f_988 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 5)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2670,716f, 35,673f, 4255,13f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-824,29f, 96,959f, 2427,185f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(&bVar0);
												TASK_GO_NEAR_COORD(&bVar0, &cVar9, 0,3f, 1);
												break;
											
											default:
												LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
												break;
											}
									}
									iVar27++;
								}
								if (Param0.f_988 == 4)
								{
									cVar7 = Function_130(Global_46760[0], "narmadillo", "sheriffsOffice", 1);
									uVar8 = "";
									cVar9 = Vector(-822,845f, 93,809f, 2423,713f);
								}
								else if (Param0.f_988 == 5)
								{
									cVar7 = Function_130(Global_46914[0], "blackwater", "policeStation01", 1);
									uVar8 = Function_130(Global_46914[0], "blackwater", "policeStation01", 2);
									cVar9 = Vector(761,697f, 79,456f, 1235,028f);
								}
								else if (Param0.f_988 == 6)
								{
									cVar7 = Function_130(Global_46866[0], "nchuparosa", "cityHall01", 6);
									uVar8 = Function_130(Global_46866[0], "nchuparosa", "cityHall01", 1);
									cVar9 = Vector(-2668,537f, 31,387f, 4253,711f);
								}
								else if (Param0.f_988 == 7)
								{
									cVar7 = Function_130(Global_46816[0], "hennigansRanch", "stockade01", 1);
									uVar8 = "";
									cVar9 = Vector(-822,845f, 93,809f, 2423,713f);
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad door open position");
								}
								if (IS_DOOR_VALID(&cVar7))
								{
									OPEN_DOOR(&cVar7, &cVar9, 4.0f);
								}
								if (IS_DOOR_VALID(&uVar8))
								{
									OPEN_DOOR(&uVar8, &cVar9, 4.0f);
								}
								if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
								{
									bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"));
									if (IS_OBJECT_VALID(&bVar0))
									{
										if (Param0.f_988 == 4)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2090,139f, 16,44f, 2595,838f), 128,422f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2093,36f, 16,449f, 2598,952f), 215,238f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 5)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(752,488f, 78,553f, 1226,634f), 174,158f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(752,488f, 78,553f, 1226,634f), 174,158f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 6)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2676,581f, 31,359f, 4246,866f), 72.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2676,581f, 31,359f, 4246,866f), 72.0f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 7)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-816,61f, 92,886f, 2418,169f), 40.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-818,287f, 93,25f, 2419,963f), 355.0f, 1, 1, 1);
												}
											}
										}
										else
										{
											LOG_ERROR("Procmission Cutscene horse/vehicle position not defined");
										}
									}
								}
								Function_476(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000003:
								if (Function_475(&Param0 + 952, 1,11f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_141(&Param0, 0);
								if (!IS_ACTOR_VALID(&bVar1))
								{
									bVar1 = &Global_54076;
								}
								iVar2 = Function_141(&Param0, 1);
								uVar3 = Function_141(&Param0, 2);
								if (!IS_ACTOR_PLAYER(&bVar1))
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(&uVar3, &bVar1, 0,5f, 1);
									TASK_PRIORITY_SET(&uVar3, true);
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2086,59f, 16,964f, 2603,988f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(764,435f, 79,455f, 1236,632f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2659,724f, 31,386f, 4255,178f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-824,114f, 93,809f, 2428,695f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad go to coord value");
									}
									SET_ACTOR_MAX_SPEED(&bVar1, 1);
									TASK_GO_NEAR_COORD(&bVar1, &cVar9, 1.0f, 1);
									TASK_PRIORITY_SET(&bVar1, true);
								}
								Function_125(&iVar2, 1, 1);
								if (Param0.f_988 == 4)
								{
									cVar9 = Vector(-2096,996f, 16,449f, 2605,508f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(-2097,315f, 16,4494f, 2606,89f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								else if (Param0.f_988 == 6)
								{
									cVar9 = Vector(-2672,348f, 31,387f, 4252,322f);
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, cVar9, 150,228f, 1, 1, 1);
									cVar9 = Vector(-2672,115f, 31,384f, 4254,054f);
									TELEPORT_ACTOR_WITH_HEADING(&iVar2, cVar9, 351,93f, 1, 1, 1);
								}
								else if (Param0.f_988 == 7)
								{
									cVar9 = Vector(-821,642f, 93,294f, 2419,156f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(-823,061f, 93,29355f, 2419,155f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								else if (Param0.f_988 == 5)
								{
									cVar9 = Vector(754,635f, 78,525f, 1234,821f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(754,8007f, 78,52634f, 1233,557f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								Function_136(&iVar2, &Global_54076);
								Function_136(&Global_54076, &iVar2);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								SET_ANIM_SET_FOR_ACTOR(&iVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(&iVar2, &Global_54076);
								SET_ACTION_NODE_FOR_ACTOR(&iVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(&iVar2, 299, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000005:
								if (Function_475(&Param0 + 952, 7.0f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000006:
								iVar2 = Function_141(&Param0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(&Global_54076);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								Function_120(&Param0, 5);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_141(&Param0, iVar27);
									if (IS_ACTOR_VALID(&bVar0))
									{
										MEMORY_CLEAR_ALL(&bVar0);
									}
									iVar27++;
								}
								Param0.f_1012++;
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
						switch (Param0.f_1012)
						{
							case 0x00000000:
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								bVar0 = Function_141(&Param0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								Function_125(&bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar0, 0);
								if (IS_ACTOR_CRIPPLED(&bVar0, 5))
								{
									SET_CRIPPLE_FLAG(&bVar0, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutsceneGringo") };
									Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/hug_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var11 = Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_436(StackVal, Var11))
								{
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
									{
										TELEPORT_ACTOR_WITH_HEADING(GET_MOST_RECENT_MOUNT(&Global_54076), Var11, GET_Y(&Var15), 1, 1, 1);
										TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
									}
								}
								SNAP_ACTOR_TO_GRINGO(&bVar0, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 1, 0);
								TASK_USE_GRINGO(&bVar0, &Param0 + 928, "UseCase1", 1, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								bVar0 = Function_141(&Param0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(&Param0 + 928, "Male", &cVar9);
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, cVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(&Param0 + 928, "Male"), 1, 1, 1);
									TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
									Function_476(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "escwavReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_475(&Param0 + 952, 2.0f))
								{
									TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "Male", 1, 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (Function_475(&Param0 + 952, 3.0f))
								{
									bVar0 = Function_141(&Param0, 0);
									SAY_SINGLE_LINE_CONTEXT(&bVar0, 103, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_475(&Param0 + 952, 5,5f))
								{
									DECOR_REMOVE(&Global_54076, "escwavReady");
									Function_120(&Param0, 5);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000015:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								bVar1 = Function_141(&Param0, 0);
								iVar2 = Function_141(&Param0, 1);
								cVar9 = Vector(-3.0f, 0.0f, -1.0f);
								Var13 = Vector(0.0f, 0.0f, 0.0f);
								Function_127(GET_OBJECT_FROM_ACTOR(&bVar1), 1, &cVar9, &Var13);
								Function_125(&iVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&iVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&iVar2, 0);
								if (IS_ACTOR_CRIPPLED(&iVar2, 5))
								{
									SET_CRIPPLE_FLAG(&iVar2, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutsceneGringo") };
									*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/shakehands_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(&Global_54076, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 0, 0);
								SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", true, 0, 0);
								TASK_PRIORITY_SET(&Global_54076, true);
								TASK_CLEAR(&Global_54076);
								TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "UseCase1", 1, 1);
								iVar27 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_USE_GRINGO(false, &Param0 + 928, "ChildUse", 1, 1);
								TASK_VEHICLE_ENTER(0, &bVar1, 1, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_PRIORITY_SET(&bVar0, true);
								TASK_SEQUENCE_PERFORM(&iVar2, iVar27);
								if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
								{
									Var11 = Vector(-5.0f, 0.0f, 0.0f);
									Var15 = Vector(0.0f, 90.0f, 0.0f);
									Function_127(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992), 1, &Var11, &Var15);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076), &Var11, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(&Global_54076), 100.0f, 0, 1092616192);
								}
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_476(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_475(&Param0 + 952, 8,5f))
								{
									bVar1 = Function_141(&Param0, 0);
									iVar2 = Function_141(&Param0, 1);
									START_VEHICLE(&bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(&bVar1, false) != &iVar2)
									{
										SET_ACTOR_IN_VEHICLE(&iVar2, &bVar1, 0);
									}
									TASK_CLEAR(&iVar2);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_FLEE_COORD(&iVar2, &Global_54078, 4, -1.0f, -1.0f, 0);
									Function_120(&Param0, 5);
									Param0.f_1012++;
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
						switch (Param0.f_1012)
						{
							case 0x00000000:
								Function_476(&Param0 + 952);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								iVar2 = Function_141(&Param0, 1);
								Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var11 = Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_436(StackVal, Var11))
								{
									if (IS_ACTOR_VALID(&iVar2))
									{
										STOP_VEHICLE(&iVar2);
										TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, GET_Y(&Var15), 1, 1, 1);
									}
								}
								bVar1 = Function_141(&Param0, 0);
								Function_125(&bVar1, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&bVar1, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
								SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bVar1, 1);
								if (IS_ACTOR_CRIPPLED(&bVar1, 5))
								{
									SET_CRIPPLE_FLAG(&bVar1, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(&Param0 + 992, 5.0f, 0, 5.0f);
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutsceneGringo") };
									Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_44(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_129(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/shakehands_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(&Global_54076, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 0, 0);
								TASK_PRIORITY_SET(&Global_54076, true);
								TASK_CLEAR(&Global_54076);
								TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "UseCase1", 1, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								bVar1 = Function_141(&Param0, 0);
								iVar2 = Function_141(&Param0, 1);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(&Param0 + 928, "ChildUse", &cVar9);
									SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", true, 0, 0);
									iVar27 = TASK_SEQUENCE_OPEN();
									TASK_USE_GRINGO(false, &Param0 + 928, "ChildUse", 1, 1);
									TASK_FACE_ACTOR(0, &iVar2, 0, 3212836864);
									TASK_VEHICLE_ENTER(0, &iVar2, 1, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bVar1, iVar27);
									TASK_SEQUENCE_RELEASE(iVar27, 1);
									TASK_PRIORITY_SET(&bVar1, true);
									Function_476(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "transportReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_141(&Param0, 0);
								iVar2 = Function_141(&Param0, 1);
								if (Function_475(&Param0 + 952, 5.0f))
								{
									START_VEHICLE(&iVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&iVar2, 1);
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_141(&Param0, 0);
								iVar2 = Function_141(&Param0, 1);
								if (Function_475(&Param0 + 952, 2,5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(&bVar1))
									{
										TASK_CLEAR(&bVar1);
										SET_ACTOR_IN_VEHICLE(&bVar1, &iVar2, 0);
									}
									Function_476(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_475(&Param0 + 952, 1.0f))
								{
									bVar1 = Function_141(&Param0, 0);
									iVar2 = Function_141(&Param0, 1);
									TASK_CLEAR(&bVar1);
									Function_120(&Param0, 5);
									Param0.f_1012++;
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
				Function_121(1.0f);
				Function_120(&Param0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return Param0.f_984;
}

void Function_127(bool bParam0, bool bParam1, struct<2> Param2) //Position: 0x8D67 / 36199
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&bParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_128(&Var0, &Param2))
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
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&bParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_128(vector3 vParam0) //Position: 0x8E94 / 36500
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_436(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_436(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

struct<8> Function_129(bool bParam0) //Position: 0x8F0A / 36618
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_130(int iParam0, char* cParam1, bool bParam3) //Position: 0x8F33 / 36659
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_565(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_131(var uParam0, int iParam1) //Position: 0x8FD8 / 36824
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

float Function_132(vector3 vParam0) //Position: 0x8FE7 / 36839
{
	if (Function_134(&vParam0))
	{
		if (Function_133(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_133(int iParam0) //Position: 0x90B4 / 37044
{
	return Function_549(iParam0, 2);
}

bool Function_134(int iParam0) //Position: 0x90C2 / 37058
{
	return Function_549(iParam0, 1);
}

void Function_135(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x90D0 / 37072
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	
	if (!IS_ACTOR_MALE(&uParam2))
	{
		bParam3 = 2;
	}
	switch (bParam3)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000003:
			Function_44(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var0 = Function_44(GET_OBJECT_FROM_ACTOR(&uParam1));
			Function_129(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var2 = Function_129(GET_OBJECT_FROM_ACTOR(&uParam1));
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iParam0 + 928)))
			{
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutsceneGringo") };
				(&iParam0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&iParam0 + 32, &Var4, "$/content/scripting/gringo/simplegringo/shakehands_link", Var0, Var2));
			}
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iParam0 + 928)))
			{
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&iParam0 + 928), 100.0f, 0, 1092616192);
			}
			else
			{
				LOG_ERROR("PROCMISSION_PERFORM_ENDING_ANIM - Invalid procmission cutscene gringo?");
			}
			break;
	}
}

void Function_136(int iParam0, int iParam1) //Position: 0x921E / 37406
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_137(StackVal, &iParam0, Var0);
	return;
}

void Function_137(int iParam0, struct<2> Param1) //Position: 0x923A / 37434
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_138(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_138(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_138(int iParam0, struct<2> Param1) //Position: 0x9275 / 37493
{
	struct<2> Var0;
	
	Function_54(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_54(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

bool Function_139(int iParam0, float fParam1) //Position: 0x92F6 / 37622
{
	if (Function_475(&iParam0, fParam1))
	{
		Function_140(&iParam0);
		return 1;
	}
	return 0;
}

void Function_140(vector3 vParam0) //Position: 0x9310 / 37648
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_141(int iParam0, int iParam1) //Position: 0x9327 / 37671
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0 + 992) - 1))
	{
		iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 992);
		if (IS_OBJECT_VALID(&iVar1))
		{
			if (GET_OBJECT_TYPE(&iVar1) == 15)
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&uVar3), "procCutsceneIdx") == iParam1)
				{
					iVar2 = &uVar3;
					bVar0 = GET_OBJECTSET_SIZE(&iParam0 + 992) + 1;
				}
			}
		}
		bVar0++;
	}
	return &iVar2;
}

void Function_142(var uParam0, bool bParam1) //Position: 0x93B2 / 37810
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_143(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_143(var uParam0, bool bParam1) //Position: 0x941C / 37916
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_144(struct<989> Param0) //Position: 0x943D / 37949
{
	var uVar0;
	var uVar1;
	
	switch (Param0.f_988)
	{
		case 0x00000003:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			(&Param0 + 936) = Function_233(&uParam1, 0, &uVar0, 1, 0, 0);
			break;
		
		case 0x00000002:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
			if (!IS_OBJECT_VALID(&uVar0))
			{
			}
			if (!IS_OBJECT_VALID(&uVar1))
			{
			}
			REFERENCE_OBJECT(&uVar0);
			REFERENCE_OBJECT(&uVar1);
			*(&Param0 + 936) = Function_228(&uParam1, 0, &uVar0, &uVar1, 1, 0, 0);
			break;
		
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
			if (!IS_OBJECT_VALID(&uVar0))
			{
			}
			REFERENCE_OBJECT(&uVar0);
			*(&Param0 + 936) = Function_225(&uParam1, 0, &uVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_125(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_220(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_125(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_215(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_125(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_210(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_125(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_205(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			*(&Param0 + 936) = Function_201(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000010:
			*(&Param0 + 936) = Function_197(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000011:
			*(&Param0 + 936) = Function_193(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000012:
			*(&Param0 + 936) = Function_189(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000013:
			*(&Param0 + 936) = Function_185(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000014:
			*(&Param0 + 936) = Function_181(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000015:
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			*(&Param0 + 936) = Function_178(&Param0 + 32, 0, &Global_54076, &uVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			*(&Param0 + 936) = Function_174(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000009:
			*(&Param0 + 936) = Function_170(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000A:
			*(&Param0 + 936) = Function_166(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000B:
			*(&Param0 + 936) = Function_162(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000C:
			*(&Param0 + 936) = Function_158(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000D:
			*(&Param0 + 936) = Function_154(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000E:
			*(&Param0 + 936) = Function_150(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_120(&Param0, 1);
	if (&iParam2 == 1)
	{
		Function_548(&Param0 + 1048, 32768);
		Function_149(256);
	}
	if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
	{
		Function_145(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0x3f800000, 0);
	}
	else
	{
		Function_145(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	}
	Function_548(&Param0 + 1048, 256);
	return 1;
}

void Function_145(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x98B8 / 39096
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_124();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_17();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
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
				Function_54(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_42(), 2,802597E-45f, Function_54(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_96(19, 1, 0, 0);
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
	if (iParam10 && !Function_85())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_148()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_148()));
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
	if (Function_147(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_146(0x4000000);
	}
	if (Function_147(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_146(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_146(bool bParam0) //Position: 0x9B6A / 39786
{
	bool bVar0;
	
	if (Function_549(bParam0, 1) && Function_549(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_147(int iParam0) //Position: 0x9B9E / 39838
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_148() //Position: 0x9BBA / 39866
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

void Function_149(bool bParam0) //Position: 0x9C48 / 40008
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

var Function_150(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9C5B / 40027
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_151(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_151(var uParam0, int iParam1) //Position: 0x9CED / 40173
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_153(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_152(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_152(int iParam0) //Position: 0x9D5B / 40283
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,57088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(162,8414f, 74,79659f, 2201,986f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,047225f, 0,550466f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_153(bool bParam0) //Position: 0x9DD0 / 40400
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 43,50317f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(162,698f, 74,86543f, 2201,977f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,530979f, 0,889932f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_154(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9E45 / 40517
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_155(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_155(var uParam0, int iParam1) //Position: 0x9ED7 / 40663
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_157(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_156(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_156(int iParam0) //Position: 0x9F45 / 40773
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-425,0981f, 152,7598f, 1619,76f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,078849f, 1,100348f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_157(bool bParam0) //Position: 0x9FBA / 40890
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 40,42704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-426,3903f, 153,0767f, 1620,322f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,173728f, 1,59284f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_158(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA02F / 41007
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_159(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_159(var uParam0, int iParam1) //Position: 0xA0C1 / 41153
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_161(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_160(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_160(int iParam0) //Position: 0xA12F / 41263
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,59192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-825,5594f, 93,69975f, 2404,281f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,05595f, 0,472653f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_161(bool bParam0) //Position: 0xA1A4 / 41380
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 50,24756f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-824,426f, 95,18665f, 2404,868f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,08302f, 0,444165f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_162(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA219 / 41497
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_163(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_163(var uParam0, int iParam1) //Position: 0xA2AB / 41643
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_165(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_164(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_164(int iParam0) //Position: 0xA319 / 41753
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,94207f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4261,643f, 20,3573f, 4463,194f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,012928f, 0,297036f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_165(bool bParam0) //Position: 0xA38E / 41870
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 19,91502f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-4263,063f, 21,06406f, 4462,477f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,063559f, 0,279046f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_166(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA403 / 41987
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_167(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_167(var uParam0, int iParam1) //Position: 0xA495 / 42133
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_169(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_168(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 11.0f, 2);
	return;
}

void Function_168(int iParam0) //Position: 0xA503 / 42243
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 38,18072f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2753,704f, 34,86351f, 4297,391f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,183378f, -1,228742f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_169(bool bParam0) //Position: 0xA578 / 42360
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2749,547f, 33,27492f, 4299,523f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,013343f, -0,862829f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_170(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA5ED / 42477
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_171(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_171(var uParam0, int iParam1) //Position: 0xA67F / 42623
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_173(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_172(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_172(int iParam0) //Position: 0xA6ED / 42733
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,41039f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(783,2053f, 80,20029f, 1318,624f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,050953f, 1,436288f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_173(bool bParam0) //Position: 0xA762 / 42850
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 46,1938f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(783,3696f, 80,22123f, 1319,231f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,436726f, 1,348244f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_174(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA7D7 / 42967
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_175(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_175(var uParam0, int iParam1) //Position: 0xA869 / 43113
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_177(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_176(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_176(int iParam0) //Position: 0xA8D7 / 43223
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,82149f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2139,764f, 17,80296f, 2607,612f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,011908f, -0,292308f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_177(int iParam0) //Position: 0xA94C / 43340
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38674f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2140,938f, 17,70445f, 2607,843f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,564788f, -0,140291f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_178(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xA9C1 / 43457
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_179(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_179(var uParam0, var uParam1, int iParam2) //Position: 0xAA53 / 43603
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_180(&uVar0, &uParam1, &iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 8,5f, 0);
	return;
}

void Function_180(int iParam0, var uParam1, bool bParam2) //Position: 0xAA86 / 43654
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &bParam2, Vector(-3,3f, 1,1f, 3,5f), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,7f, 1,5f, -2,1f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 1,1f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_181(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAB3A / 43834
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_182(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_182(var uParam0, int iParam1) //Position: 0xABC9 / 43977
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_184(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_183(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_183(int iParam0) //Position: 0xAC3F / 44095
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(123,7456f, 74,61844f, 2289,153f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,064519f, -3,13974f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_184(bool bParam0) //Position: 0xACB4 / 44212
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(123,4807f, 75,50849f, 2289,178f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,102356f, 3,123572f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_185(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAD29 / 44329
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_186(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_186(var uParam0, int iParam1) //Position: 0xADB8 / 44472
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_188(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_187(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_187(int iParam0) //Position: 0xAE2E / 44590
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-940,4845f, 91,59863f, 2427,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,028671f, 0,140625f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_188(bool bParam0) //Position: 0xAEA3 / 44707
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-940,9657f, 91,59235f, 2426,499f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,223395f, 1,435132f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_189(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAF18 / 44824
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_190(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_190(var uParam0, int iParam1) //Position: 0xAFA7 / 44967
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_192(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_191(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_191(int iParam0) //Position: 0xB01D / 45085
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4337,654f, 28,6333f, 4413,195f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,051522f, 1,741209f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_192(bool bParam0) //Position: 0xB092 / 45202
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-4337,393f, 28,47409f, 4413,315f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,237212f, 0,27196f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_193(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB107 / 45319
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_194(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_194(var uParam0, int iParam1) //Position: 0xB196 / 45462
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_196(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_195(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_195(int iParam0) //Position: 0xB20C / 45580
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2686,198f, 32,92673f, 4252,22f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,059351f, -2,488272f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_196(bool bParam0) //Position: 0xB281 / 45697
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2686,344f, 32,90821f, 4251,939f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,314003f, -1,549275f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_197(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB2F6 / 45814
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_198(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_198(var uParam0, int iParam1) //Position: 0xB385 / 45957
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_200(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_199(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_199(int iParam0) //Position: 0xB3FB / 46075
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(792,6249f, 79,85516f, 1252,059f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,06254f, 0,304932f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_200(bool bParam0) //Position: 0xB470 / 46192
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(792,5955f, 80,12923f, 1252,088f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,114017f, -1,37546f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_201(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB4E5 / 46309
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_202(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_202(var uParam0, int iParam1) //Position: 0xB574 / 46452
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_204(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_203(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_203(int iParam0) //Position: 0xB5EA / 46570
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,45026f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2164,691f, 17,65717f, 2608,284f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,029581f, 1,729471f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_204(int iParam0) //Position: 0xB65F / 46687
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 48,26846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2162,461f, 17,90104f, 2608,195f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,502309f, 1,032155f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_205(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB6D4 / 46804
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_206(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_206(int iParam0) //Position: 0xB760 / 46944
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_209(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_208(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_207(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_207(int iParam0) //Position: 0xB7D4 / 47060
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-821,4233f, 94,62658f, 2416,133f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,067727f, 3,024179f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_208(int iParam0) //Position: 0xB849 / 47177
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,0323f, 97,13247f, 2418,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,200845f, 2,875035f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_209(int iParam0) //Position: 0xB8BE / 47294
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,0323f, 97,13247f, 2418,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,200845f, 2,875035f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_210(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB933 / 47411
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_211(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_211(int iParam0) //Position: 0xB9BF / 47551
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_214(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_213(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_212(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_212(int iParam0) //Position: 0xBA33 / 47667
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2674,524f, 32,73464f, 4254,771f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,000952f, -0,990258f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_213(int iParam0) //Position: 0xBAA8 / 47784
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2676,129f, 33,07767f, 4255,418f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,413944f, -1,379618f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_214(int iParam0) //Position: 0xBB1D / 47901
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2676,129f, 33,07767f, 4255,418f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,413944f, -1,379618f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_215(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xBB92 / 48018
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_216(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_216(int iParam0) //Position: 0xBC1E / 48158
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_219(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_218(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_217(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_217(int iParam0) //Position: 0xBC92 / 48274
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(748,9062f, 81,73605f, 1234,963f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,257523f, -1,606308f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_218(int iParam0) //Position: 0xBD07 / 48391
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(751,9528f, 83,93945f, 1234,901f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150277f, -1,565241f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_219(int iParam0) //Position: 0xBD7C / 48508
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(751,9528f, 83,93945f, 1234,901f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150277f, -1,565241f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_220(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xBDF1 / 48625
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_221(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_221(int iParam0) //Position: 0xBE7D / 48765
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_224(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_223(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_222(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_222(int iParam0) //Position: 0xBEF1 / 48881
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,12474f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2099,827f, 17,38087f, 2604,925f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,030594f, -1,801368f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_223(int iParam0) //Position: 0xBF66 / 48998
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2095,281f, 19,51133f, 2602,912f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,193957f, -2,376076f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_224(bool bParam0) //Position: 0xBFDB / 49115
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2095,281f, 19,51134f, 2602,913f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,193962f, -2,376065f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_225(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC053 / 49235
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_226(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_226(var uParam0, var uParam1) //Position: 0xC0D5 / 49365
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_227(&uVar0, &uParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xC0F9 / 49401
{
	SET_CAMERASHOT_ASPECT_RATIO(&uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,3f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&uParam0, 2800.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &iParam1, Vector(-2,556153f, 1,335263f, -0,635139f), Vector(-4,660204f, -90,73022f, 2,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,098891f, 1,118835f, -0,601317f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_228(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xC19F / 49567
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "locAttackEnd1", 3, 1);
	}
	Function_229(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 3,5f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_229(var uParam0, var uParam1, int iParam2) //Position: 0xC230 / 49712
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_232(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_231(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_230(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3.0f, 2);
	return;
}

void Function_230(int iParam0, int iParam1) //Position: 0xC29A / 49818
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,984598f, 1,751382f, 3,841003f), Vector(-3,190401f, -10,46822f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,251156f, 1,526337f, -0,132944f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_231(int iParam0, var uParam1) //Position: 0xC32F / 49967
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(1,407119f, 0,716825f, 4,948927f), Vector(0,589058f, 32,04071f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-1,210278f, 0,767547f, 0,766793f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_232(var uParam0, bool bParam1) //Position: 0xC3C4 / 50116
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,258072f, 0,525107f, 3,572455f), Vector(-5,64203f, 24,82975f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,33126f, 0,151176f, 0,136963f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_233(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC459 / 50265
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_42(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "wagonPassengerThx", 4, 1);
	}
	Function_234(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_234(var uParam0, int iParam1) //Position: 0xC4E7 / 50407
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_238(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_237(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_236(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_235(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3,5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 5.0f, 3);
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0xC575 / 50549
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,845357f, 3,854301f, 0,253096f), Vector(-28,59214f, 52,87982f, 0,06165f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,953756f, 2,628656f, -1,107103f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_236(int iParam0, var uParam1) //Position: 0xC60E / 50702
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,94109f, 1,784494f, -0,938111f), Vector(18,55518f, -86,90154f, -0,005787f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,894216f, 2,476595f, -1,048975f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_237(int iParam0, var uParam1) //Position: 0xC6A7 / 50855
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,981397f, 1,783026f, -0,065402f), Vector(-2,721607f, -95,76204f, 0,009683f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,051467f, 1,643226f, 0,240611f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xC740 / 51008
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-3,254722f, 1,778463f, 2,641411f), Vector(-2,721607f, -95,76204f, 0,009683f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,221859f, 1,638663f, 2,947425f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

int Function_239(int iParam0, var uParam1, int iParam2, var uParam3) //Position: 0xC7D9 / 51161
{
	struct<8> Var0;
	
	Function_240(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutscTargets") };
		(&iParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &iParam0 + 32, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam1, &iParam0 + 992);
	}
	if (IS_OBJECT_VALID(&iParam2))
	{
		ADD_OBJECT_TO_OBJECTSET(&iParam2, &iParam0 + 992);
	}
	if (IS_OBJECT_VALID(&uParam3))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam3, &iParam0 + 992);
	}
	return 1;
}

void Function_240(int iParam0) //Position: 0xC86F / 51311
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574(&Var0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_241(struct<989> Param0) //Position: 0xC8EA / 51434
{
	Param0.f_988 = iParam1;
	return;
}

void Function_242(int iParam0, struct<2> Param1) //Position: 0xC8F8 / 51448
{
	*(&iParam0 + 1000) = Param1;
	return;
}

void Function_243() //Position: 0xC909 / 51465
{
	int iVar0;
	
	if (iLocal_409 == 1)
	{
		return;
	}
	Function_464(0);
	Function_313(13, 1);
	Function_313(65, 1);
	Function_307();
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_44[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_369 == 2)
	{
		Global_39906.f_28 = 4294967295;
		Function_283(&Local_539, 2);
		if ((*&Global_40060 + 32)[0] >= 0)
		{
			(*&Global_40060 + 32)[0] = 0;
			Function_93("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if ((*&Global_40060 + 32)[1] >= 0)
		{
			(*&Global_40060 + 32)[1] = 0;
			Function_93("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		Function_280(Function_281(uLocal_102[0]));
	}
	else if (iLocal_369 == 3)
	{
		Global_39906.f_28 = 4294967295;
		Function_283(&Local_539, 3);
		if (iLocal_383 == 1)
		{
			Function_276(0, 0, 1);
			Function_276(1, 0, 1);
		}
		else
		{
			Function_276(0, 1, 1);
			Function_276(1, 1, 1);
		}
	}
	else
	{
		iLocal_369 = 4;
		Function_283(&Local_539, iLocal_369);
		Function_276(0, 1, 1);
		Function_276(1, 1, 1);
	}
	Function_273();
	CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
	APPEND_JOURNAL_ENTRY(Global_39906.f_36, 1);
	Function_244(&Local_539);
	Function_464(0);
	iLocal_409 = 1;
	return;
}

void Function_244(struct<1093> Param0) //Position: 0xCA60 / 51808
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_549(Param0.f_1048, 32768))
		{
			Function_119(256);
		}
	}
	Function_272();
	Function_12(1);
	if (Function_549(Param0.f_1048, 32))
	{
		if (Function_270(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_259(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_257(Param0.f_1092);
					break;
				
				default:
					Function_250(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_245(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_549(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_549(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_245(int iParam0, bool bParam1) //Position: 0xCBE0 / 52192
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_10(&iParam0 + 1024);
		Function_248(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_247(&iParam0 + 1024);
			Function_10(&iParam0 + 1024);
			Function_246(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_248(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_246(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xCC57 / 52311
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

void Function_247(int iParam0) //Position: 0xCCD0 / 52432
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_248(var uParam0, bool bParam1, bool bParam2) //Position: 0xCD08 / 52488
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
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_249(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xCD91 / 52625
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_250(int iParam0) //Position: 0xCDB1 / 52657
{
	int iVar0;
	
	if (!Function_270(iParam0))
	{
		Function_255();
		return;
	}
	iVar0 = Function_254(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_251("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_251(var uParam0, int iParam1) //Position: 0xCE04 / 52740
{
	struct<4> Var0;
	
	if (!Function_270(iParam1))
	{
		return;
	}
	switch (Function_254(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_252(Function_253(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_254(iParam1), Function_253(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_254(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_254(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_254(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_254(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_254(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_252(int iParam0) //Position: 0xCF2E / 53038
{
	char* cVar0[16];
	
	if (!Function_85())
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

int Function_253(int iParam0) //Position: 0xCF68 / 53096
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

int Function_254(int iParam0) //Position: 0xCF88 / 53128
{
	if (!Function_75(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_255() //Position: 0xCFA3 / 53155
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
			Function_256(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_256(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD1EA / 53738
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_257(int iParam0) //Position: 0xD216 / 53782
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_270(iParam0))
	{
		return;
	}
	iVar0 = Function_254(iParam0);
	if (StackVal == 2)
	{
		Function_251("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_258(char* cParam0) //Position: 0xD2BC / 53948
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

void Function_259(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD512 / 54546
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_270(iParam0))
	{
		Function_255();
		return;
	}
	bVar0 = Function_254(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_117())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_253(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		if (Function_117())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_265();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_117())
	{
		Function_263();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_251("DEED_COMPLETE", iParam0);
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
			Function_261(iParam0);
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
						switch (Function_253(iParam0))
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
			Function_527(1);
			Function_526(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_260(iParam0, &Var14);
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

void Function_260(int iParam0, struct<41> Param1) //Position: 0xD770 / 55152
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_261(int iParam0) //Position: 0xD7AE / 55214
{
	int iVar0;
	int iVar1;
	
	if (!Function_75(iParam0))
	{
		return;
	}
	switch (Function_254(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_253(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_96(12, 1, 0, 0);
				Function_69(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_96(13, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_96(14, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_96(15, 1, 0, 0);
				Function_69(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_96(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_253(iParam0))
			{
				case 0x00000000:
					if (Function_262(iParam0) == 1)
					{
						iVar0 = Function_553(iParam0);
						if (Function_565(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_69(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_69(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_69(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_69(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_69(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_69(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_69(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_69(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_69(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_69(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_69(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_69(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_69(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_69(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_69(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_69(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_69(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_69(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_69(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_69(4, 19);
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
								Function_96(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_96(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_96(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_553(iParam0) == 0)
			{
				if (Function_262(iParam0) == 1)
				{
					Function_96(458, 1, 0, 0);
					iVar0 = Function_253(iParam0);
					if (Function_565(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_69(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_69(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_69(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_69(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_69(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_69(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_69(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_69(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_262(iParam0) == 1)
			{
				Function_96(400, 1, 0, 0);
			}
			switch (Function_253(iParam0))
			{
				case 0x00000001:
					Function_96(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_69(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_69(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_69(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_96(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_69(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_69(6, 9);
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

int Function_262(int iParam0) //Position: 0xDC8A / 56458
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_263() //Position: 0xDCA4 / 56484
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
	PLAYSTAT_INT("HC_MONEY", Function_264(0));
	PLAYSTAT_INT("HC_FAME", Function_264(3));
	PLAYSTAT_INT("HC_HONOR", Function_264(1));
	return;
}

int Function_264(bool bParam0) //Position: 0xDE06 / 56838
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

void Function_265() //Position: 0xDE47 / 56903
{
	int iVar0;
	int iVar1;
	
	if (!Function_77(Global_10966))
	{
		return;
	}
	iVar0 = Function_264(24);
	iVar1 = Function_76(Global_10966);
	if (!Function_77(iVar0) && Function_269(iVar1) < 0)
	{
		Function_268(24, Global_10966, 0);
		Function_266(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_269(Function_76(iVar0)))
	{
		Function_268(24, Global_10966, 0);
		Function_266(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_266(int iParam0, char* cParam1) //Position: 0xDEC7 / 57031
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
		Function_267(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_267(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xE21E / 57886
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_268(int iParam0, bool bParam1, bool bParam2) //Position: 0xE2A6 / 58022
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
		Function_110(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_109(iParam0);
	if (&bParam2)
	{
		Function_98(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_269(int iParam0) //Position: 0xE542 / 58690
{
	if (!Function_270(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_270(int iParam0) //Position: 0xE55C / 58716
{
	if (!Function_75(iParam0))
	{
		return 0;
	}
	if (!Function_271(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_271(int iParam0) //Position: 0xE580 / 58752
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_272() //Position: 0xE595 / 58773
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_273() //Position: 0xE5AB / 58795
{
	int iVar0;
	
	Global_41176 = Function_274(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_274(int iParam0) //Position: 0xE5F9 / 58873
{
	if (!Function_275(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_275(int iParam0) //Position: 0xE611 / 58897
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_276(int iParam0, bool bParam1, bool bParam2) //Position: 0xE626 / 58918
{
	if ((*&Global_40060 + 32)[iParam0] >= 0)
	{
		Function_279(iParam0, (*&Global_40060 + 32)[iParam0]);
		(*&Global_40060 + 32)[iParam0] = 0;
		if (bParam2)
		{
			Function_277(iParam0, 0, 0, Function_59(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				Function_93("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_277(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE690 / 59024
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_278(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_278(int iParam0) //Position: 0xE6E0 / 59104
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_279(int iParam0, bool bParam1) //Position: 0xE709 / 59145
{
	if (!Function_275(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_96((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_96(222, bParam1, 0, 0);
	return;
}

void Function_280(bool bParam0) //Position: 0xE74E / 59214
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		Global_39906 = (Global_39906 || bVar1);
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		Global_39906.f_4 = (StackVal || bVar1);
	}
	return;
}

var Function_281(int iParam0) //Position: 0xE78C / 59276
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar7 = 0;
	while (iVar7 <= 45)
	{
		if (Function_282(&Var1, iVar7) == 1)
		{
			if (iParam0 == Var1.f_20)
			{
				iVar0 = iVar7;
				iVar7 = 45;
			}
		}
		iVar7++;
	}
	return iVar0;
}

bool Function_282(struct<41> Param0) //Position: 0xE7C6 / 59334
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

void Function_283(struct<1089> Param0) //Position: 0xF01A / 61466
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_306(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_305(&Param0) != 1)
				{
					Function_303(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_300(200, 1, 0);
				}
				else
				{
					Function_287(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_286(Param0.f_616, 1, 1);
				}
				else
				{
					Function_284(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
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

int Function_284(bool bParam0, bool bParam1) //Position: 0xF0FF / 61695
{
	bool bVar0;
	
	bVar0 = Function_264(0);
	if ((Function_264(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_285(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_264(0));
	return 1;
}

int Function_285(int iParam0, bool bParam1, int iParam2) //Position: 0xF190 / 61840
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
	Function_109(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_98(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_286(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF38D / 62349
{
	bool bVar0;
	
	bVar0 = Function_264(0);
	if ((Function_264(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_96(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_264(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_96(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_264(597) + Function_264(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_287(int iParam0, bool bParam1, bool bParam2) //Position: 0xF45F / 62559
{
	int iVar0;
	bool bVar1;
	
	if (Function_299(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
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
	iVar0 = Function_264(3);
	Function_296();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_294(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_84(Global_119936, 4))
			{
				Function_79(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_96(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_107(3));
	iVar0 = Function_264(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_289(4, Function_293(Global_21369.f_248), 1);
				Function_288(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_289(4, Function_293(Global_21369.f_248), 1);
				Function_288(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_289(4, Function_293(Global_21369.f_248), 1);
				Function_288(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_289(4, Function_293(Global_21369.f_248), 1);
				Function_288(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_289(4, Function_293(Global_21369.f_248), 1);
				Function_288(Global_21369.f_244, Global_21369.f_248);
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

void Function_288(int iParam0, int iParam1) //Position: 0xF633 / 63027
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_289(int iParam0, char* cParam1) //Position: 0xF89D / 63645
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
	Function_266(iParam0, &cParam1, 0, 1);
	iVar1 = Function_290();
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

int Function_290() //Position: 0xFA2D / 64045
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
	Function_291();
	return 0;
}

void Function_291() //Position: 0xFACE / 64206
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
		Function_292(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_292(int iParam0) //Position: 0xFB8C / 64396
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

var Function_293(int iParam0) //Position: 0xFBF2 / 64498
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

int Function_294(int iParam0, bool bParam1) //Position: 0xFC81 / 64641
{
	bool bVar0;
	int iVar1;
	
	Function_96(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_295(iParam0, 4294967295);
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
	iVar1 = Function_290();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_295(int iParam0, int iParam1) //Position: 0xFE2D / 65069
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

void Function_296() //Position: 0xFE72 / 65138
{
	Function_298(3, 0.0f);
	Function_297(3, 10000.0f);
	return;
}

int Function_297(int iParam0, int iParam1) //Position: 0xFE88 / 65160
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_298(int iParam0, int iParam1) //Position: 0xFEC8 / 65224
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_299(int iParam0) //Position: 0xFF08 / 65288
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_300(int iParam0, bool bParam1, bool bParam2) //Position: 0xFF17 / 65303
{
	int iVar0;
	bool bVar1;
	
	if (Function_299(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_264(1);
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
			Function_294(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_84(Global_119936, 1))
				{
					Function_79(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_302(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_84(Global_119936, 2))
				{
					Function_79(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_96(1, bVar1, 0, 0);
	}
	else
	{
		Function_285(1, (4294967295 * bVar1), 0);
	}
	if (Function_264(1) <= 4294962296)
	{
		Function_268(1, 4294962296, 0);
	}
	else if (Function_264(1) >= 5000)
	{
		Function_268(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_107(1));
	iVar0 = Function_264(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_289(2, Function_301(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_289(2, Function_301(Global_21369.f_244), 0);
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
				Function_289(2, Function_301(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_289(2, Function_301(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_289(2, Function_301(Global_21369.f_244), 1);
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
				Function_289(2, Function_301(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_289(2, Function_301(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_289(2, Function_301(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_289(2, Function_301(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_289(2, Function_301(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_289(2, Function_301(Global_21369.f_244), 1);
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
				Function_289(2, Function_301(Global_21369.f_244), 0);
			}
			break;
	}
	Function_288(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_301(int iParam0) //Position: 0x1023F / 66111
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

int Function_302(int iParam0, bool bParam1) //Position: 0x102E2 / 66274
{
	bool bVar0;
	int iVar1;
	
	Function_285(iParam0, bParam1, 0);
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
	iVar1 = Function_295(iParam0, 4294967295);
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
	iVar1 = Function_290();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_303(int iParam0, char* cParam1, bool bParam2) //Position: 0x1048D / 66701
{
	char* cVar0[32];
	
	if (!Function_112(3))
	{
		return;
	}
	if (Function_85())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (&bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_304())
						{
							Function_68(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_68(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_68(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_304())
					{
						Function_68(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_68(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_68(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_68(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

bool Function_304() //Position: 0x105A3 / 66979
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_549(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_305(struct<1049> Param0) //Position: 0x105D3 / 67027
{
	return !Function_549(Param0.f_1048, 16384);
}

var Function_306(struct<921> Param0) //Position: 0x105E6 / 67046
{
	return Param0.f_920;
}

void Function_307() //Position: 0x105F2 / 67058
{
	bool bVar0;
	
	if (iLocal_369 == 2)
	{
		Function_312(&Local_539);
		if (iLocal_411 == 1)
		{
			Function_294(358, 1);
		}
		else
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(19))
			{
				AWARD_ACHIEVEMENT(19);
			}
			Function_294(359, 1);
		}
		if (Global_39906.f_20 == 787)
		{
			if (Function_115(2) && !Function_311(2))
			{
				Function_68(2, 4, 0, 0, 0);
			}
		}
		if (Function_274(StackVal) < 0 && Global_99146 != 0)
		{
			Function_93("npm_bh_bpd", 0x41200000, 1, 0, 2, 1, 0);
		}
		bVar0 = (Function_274(StackVal) - iLocal_828 * 2);
		if (bVar0 <= 0)
		{
			Function_309(StackVal, 0);
			Function_308(&Local_539, FLOOR((IntToFloat(ABS(bVar0)) / 2.0f)));
		}
		else
		{
			Function_309(StackVal, bVar0);
		}
	}
	if (iLocal_407 == 1)
	{
		Function_121(1.0f);
	}
	return;
}

void Function_308(struct<617> Param0) //Position: 0x106C3 / 67267
{
	Param0.f_616 = (Param0.f_616 + bParam1);
	return;
}

void Function_309(int iParam0, bool bParam1) //Position: 0x106D8 / 67288
{
	if (!Function_275(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_310((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_310(222, TO_FLOAT((Function_264(223) + Function_264(224))), 0);
	return;
}

int Function_310(int iParam0, float fParam1, bool bParam2) //Position: 0x10719 / 67353
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
	if (Global_54086[iParam0] > fParam1)
	{
		Function_110(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_109(iParam0);
	if (&bParam2)
	{
		Function_98(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_311(int iParam0) //Position: 0x10986 / 67974
{
	if (!Function_113(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_111(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

void Function_312(struct<909> Param0) //Position: 0x109D7 / 68055
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_620 - 1))
	{
		strcpy(&Param0 + 620[iVar04], "", 16);
		(*&Param0 + 724)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_908 = 0;
	return;
}

int Function_313(bool bParam0, bool bParam1) //Position: 0x10A17 / 68119
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_490(bParam0), Function_17()) >= 0)
		{
			DELETE_ITEM(Function_490(bParam0), Function_17(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_490(bParam0), Function_17(), 1);
	return 1;
}

void Function_314(bool bParam0) //Position: 0x10A5F / 68191
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

void Function_315(char* cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x10AF5 / 68341
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
			Var0 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_316(struct<45> Param0) //Position: 0x10B8A / 68490
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	float fVar15;
	var uVar16;
	float fVar17;
	var uVar18;
	int iVar19;
	var uVar20;
	struct<5> Var24;
	var uVar30;
	
	fVar17 = -1.0f;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	if (!IS_LAYOUTREF_VALID(&uLocal_535))
	{
	}
	if (iLocal_269 <= 5)
	{
		if (Function_409())
		{
			if (iLocal_269 <= 4)
			{
				Function_509(4);
			}
			if (!Function_509(5))
			{
			}
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < (bLocal_263 - 1))
		{
			if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
			{
				if (IS_ACTOR_DRUNK(&(uLocal_44[iVar0])))
				{
					SET_ACTOR_DRUNK(&(uLocal_44[iVar0]), 0);
				}
				if (((Function_406(&(uLocal_44[iVar0]), &uVar16, &fVar17, 0, 0, 0x40400000) || GET_LAST_ATTACK_TARGET(&(uLocal_44[iVar0])) != &Global_54076) || AI_IS_AGGROING(&(uLocal_44[iVar0]), &Global_54076)) || AI_IS_HOSTILE_OR_ENEMY(&(uLocal_44[iVar0]), &Global_54076))
				{
					if (!Function_509(5))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
		{
			if (IS_ACTOR_ALIVE(&(uLocal_44[iVar0])))
			{
				GET_POSITION(&(uLocal_44[iVar0]), &Var7);
				if (iLocal_269 > 5)
				{
					if (iVar0 == 0)
					{
						if (Function_405(StackVal, Var7) == 1)
						{
							Function_509(6);
						}
						Function_404(StackVal, Var7);
					}
				}
				if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
				{
					bVar12 = Function_403(&(uLocal_44[iVar0]));
					uVar14 = GET_ACTORS_HORSE(&(uLocal_44[iVar0]));
				}
				switch (bVar12)
				{
					case 0x00000000:
						if (Function_402(&(uLocal_44[iVar0])))
						{
							Function_401(&(uLocal_44[iVar0]), 7);
						}
						else
						{
							Function_401(&(uLocal_44[iVar0]), 1);
						}
						break;
					
					case 0x00000006:
					case 0x00000002:
						break;
					
					case 0x00000003:
						if (iVar0 == 0)
						{
							TASK_CLEAR(&(uLocal_44[iVar0]));
							TASK_FACE_ACTOR(&(uLocal_44[iVar0]), &Global_54076, 0, 30.0f);
							Function_401(&(uLocal_44[iVar0]), 4);
						}
						else
						{
							TASK_CLEAR(&(uLocal_44[iVar0]));
							TASK_FOLLOW_OBJECT_AT_DISTANCE(&(uLocal_44[iVar0]), GET_OBJECT_FROM_ACTOR(&Global_54076), 5.0f, 1);
							Function_401(&(uLocal_44[iVar0]), 4);
						}
						break;
					
					case 0x00000004:
						break;
					
					case 0x00000005:
						break;
					
					case 0x00000007:
						if (IS_OBJECT_VALID(&uVar3))
						{
							TASK_USE_GRINGO(&(uLocal_44[iVar0]), GET_GRINGO_FROM_OBJECT(&uVar3), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&(uLocal_44[iVar0]), 2);
							Function_400(&(uLocal_44[iVar0]));
							Function_401(&(uLocal_44[iVar0]), 8);
						}
						else
						{
							Function_401(&(uLocal_44[iVar0]), 1);
						}
						break;
					
					case 0x00000008:
						if (!(GET_TASK_STATUS(&(uLocal_44[iVar0]), 19) != 3 || GET_TASK_STATUS(&(uLocal_44[iVar0]), 19) != 1))
						{
							Function_401(&(uLocal_44[iVar0]), 7);
						}
						break;
					
					case 0x00000001:
						TASK_CLEAR(&(uLocal_44[iVar0]));
						TASK_WANDER(&(uLocal_44[iVar0]), 3212836864);
						TASK_PRIORITY_SET(&(uLocal_44[iVar0]), 2);
						if (IS_ACTOR_VALID(&uVar14))
						{
							if (!(GET_TASK_STATUS(&(uLocal_44[iVar0]), 6) != 3 || GET_TASK_STATUS(&(uLocal_44[iVar0]), 6) != 1))
							{
								TASK_CLEAR(&uVar14);
								TASK_STAND_STILL(&uVar14, -1.0f, 0, 0);
								TASK_PRIORITY_SET(&uVar14, 2);
							}
						}
						Function_401(&(uLocal_44[iVar0]), 2);
						break;
					
					case 0x0000000B:
						Function_399(&(uLocal_44[iVar0]), 0);
						Function_401(&(uLocal_44[iVar0]), 12);
						break;
					
					case 0x0000000C:
						if (VDIST(Var7, Global_54078) < 37.0f && (GET_TASK_STATUS(&(uLocal_44[iVar0]), 25) != 1 || GET_TASK_STATUS(&(uLocal_44[iVar0]), 25) != 3))
						{
							Function_397(&(uLocal_44[iVar0]), 0, 4, 2);
							Function_396(&(uLocal_44[iVar0]), &Global_54076);
						}
						break;
					
					case 0x00000014:
						TASK_CLEAR(&(uLocal_44[iVar0]));
						TASK_USE_LASSO(&(uLocal_44[iVar0]), &Global_54076, 0,5f, 5.0f, 1, 0);
						TASK_PRIORITY_SET(&(uLocal_44[iVar0]), true);
						Function_401(&(uLocal_44[iVar0]), 21);
						break;
					
					case 0x00000015:
						if (GET_LASSO_TARGET(&(uLocal_44[iVar0])) != &Global_54076 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "coplasso"))
						{
							if (VDIST(Var7, Global_54078) > 4.0f && !IS_ACTOR_HOGTIED(&Global_54076))
							{
								TASK_CLEAR(&(uLocal_44[iVar0]));
								DETACH_LASSO(&(uLocal_44[iVar0]));
								HOGTIE_ACTOR(&Global_54076);
								Function_476(&iLocal_298);
							}
						}
						break;
					
					case 0x00000018:
						if (IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
						{
							uVar13 = GET_MOUNT(&Global_54076);
						}
						else if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&Global_54076)))
						{
							uVar13 = GET_MOST_RECENT_MOUNT(&Global_54076);
						}
						if (IS_ACTOR_ALIVE(&uVar13) && Function_395(&uVar13, &(uLocal_44[iVar0])) > 20.0f)
						{
							TASK_CLEAR(&(uLocal_44[iVar0]));
							TASK_MOUNT(&(uLocal_44[iVar0]), &uVar13, 1, 1, 2, 2147483647);
							TASK_PRIORITY_SET(&(uLocal_44[iVar0]), true);
							Function_401(&(uLocal_44[iVar0]), 25);
						}
						else if (RAND_FLOAT_RANGE(0.0f, 1000.0f) < 500.0f)
						{
							Function_397(&(uLocal_44[iVar0]), 0, 4, 0);
						}
						else
						{
							Function_397(&(uLocal_44[iVar0]), 0, 0, 2);
						}
						break;
					
					case 0x00000019:
						if (IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
						{
							uVar13 = GET_MOUNT(&Global_54076);
						}
						else if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&Global_54076)))
						{
							uVar13 = GET_MOST_RECENT_MOUNT(&Global_54076);
						}
						if (IS_ACTOR_ALIVE(&uVar13) && IS_ACTOR_ALIVE(GET_RIDER(&uVar13)))
						{
							if (GET_RIDER(&uVar13) == &uLocal_44[iVar0])
							{
								Function_397(&(uLocal_44[iVar0]), 0, 4, 0);
							}
							else if (Function_50(GET_RIDER(&uVar13), &uLocal_366, 1))
							{
								Function_401(&(uLocal_44[iVar0]), 17);
							}
						}
						else
						{
							Function_397(&(uLocal_44[iVar0]), 0, 4, 0);
						}
						break;
					
					case 0x0000000E:
						iVar1 = Function_394(StackVal, Var7, 30.0f);
						if (Function_402(&(uLocal_44[iVar0])) != 1 || iVar0 != 0)
						{
							if (bLocal_446 != Global_46926[5] || bLocal_446 != Global_46816[3])
							{
								Function_397(&(uLocal_44[iVar0]), 1, 4, 2);
								Function_396(&(uLocal_44[iVar0]), &Global_54076);
							}
							else
							{
								Function_397(&(uLocal_44[iVar0]), 1, 2, 2);
								Function_396(&(uLocal_44[iVar0]), &Global_54076);
							}
						}
						else
						{
							if ((bLocal_446 != Global_46926[5] || bLocal_446 != Global_46816[3]) || iVar1 > 15)
							{
								Function_397(&(uLocal_44[iVar0]), 1, 3, 2);
							}
							else
							{
								Function_397(&(uLocal_44[iVar0]), 1, 2, 2);
							}
							Function_396(&(uLocal_44[iVar0]), &Global_54076);
						}
						break;
					
					case 0x0000000D:
						if (IS_ACTOR_VALID(&uVar14))
						{
							GET_POSITION(&uVar14, &Var5);
						}
						if (((IS_ACTOR_RIDING(&(uLocal_44[iVar0])) || !IS_ACTOR_ALIVE(&uVar14)) || !IS_ACTOR_VALID(&uVar14)) || VDIST(Var7, Var5) < 20.0f)
						{
							if (Function_402(&(uLocal_44[iVar0])) != 1 || iVar0 != 0)
							{
								Function_397(&(uLocal_44[iVar0]), 0, 2, 2);
								Function_396(&(uLocal_44[iVar0]), &Global_54076);
							}
							else
							{
								Function_397(&(uLocal_44[iVar0]), 1, 3, 2);
								Function_396(&(uLocal_44[iVar0]), &Global_54076);
							}
						}
						break;
					
					case 0x0000000F:
						if (iVar0 == 0)
						{
							if ((bLocal_446 != Global_46926[5] || bLocal_446 != Global_46816[3]) || IS_ACTOR_RIDING(&(uLocal_44[iVar0])))
							{
								Function_401(&(uLocal_44[iVar0]), 11);
							}
							else if (VDIST(Var7, Global_54078) > 50.0f && Function_393(&uLocal_366) >= 3)
							{
								Function_401(&(uLocal_44[iVar0]), 11);
							}
						}
						break;
					
					case 0x00000012:
						Function_397(&(uLocal_44[iVar0]), 1, 4, 1);
						Function_396(&(uLocal_44[iVar0]), &Global_54076);
						Function_401(&(uLocal_44[iVar0]), 19);
						break;
					
					case 0x00000013:
						break;
					
					case 0x00000011:
						if (iVar0 == 0)
						{
							Function_390();
						}
						GET_POSITION(&uVar14, &Var5);
						if (((IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_RIDING(&(uLocal_44[iVar0]))) && IS_ACTOR_ALIVE(&uVar14)) || (IS_ACTOR_ALIVE(&uVar14) && iVar0 != 0))
						{
							GET_POSITION(&uVar14, &Var5);
							MEMORY_PREFER_RIDING(&(uLocal_44[iVar0]), false);
							TASK_CLEAR(&uVar14);
							TASK_STAND_STILL(&uVar14, -1.0f, 0, 0);
							TASK_PRIORITY_SET(&uVar14, false);
							TASK_CLEAR(&(uLocal_44[iVar0]));
							TASK_MOUNT(&(uLocal_44[iVar0]), &uVar14, 0, 1, 2, 2147483647);
							TASK_PRIORITY_SET(&(uLocal_44[iVar0]), false);
							Function_401(&(uLocal_44[iVar0]), 16);
						}
						else
						{
							TASK_CLEAR(&(uLocal_44[iVar0]));
							Function_399(&(uLocal_44[iVar0]), 0);
							Function_401(&(uLocal_44[iVar0]), 26);
						}
						break;
					
					case 0x00000010:
						if (IS_ACTOR_VALID(&uVar14))
						{
							GET_POSITION(&uVar14, &Var5);
						}
						if (((IS_ACTOR_RIDING(&(uLocal_44[iVar0])) || !IS_ACTOR_ALIVE(&uVar14)) || !IS_ACTOR_VALID(&uVar14)) || VDIST(Var7, Var5) < 20.0f)
						{
							TASK_CLEAR(&(uLocal_44[iVar0]));
							Function_399(&(uLocal_44[iVar0]), 0);
							Function_401(&(uLocal_44[iVar0]), 26);
						}
						break;
					
					case 0x0000001A:
						if (iVar0 == 0)
						{
							if (GET_TASK_STATUS(&(uLocal_44[iVar0]), 25) != 0 || GET_TASK_STATUS(&(uLocal_44[iVar0]), 25) != 4)
							{
								Function_399(&(uLocal_44[iVar0]), 0);
							}
							GET_ACTOR_VELOCITY(&(uLocal_44[iVar0]), &Var5);
							if (VMAG(Var5) < 0,5f)
							{
								Function_476(&iLocal_330);
							}
							else if (Function_475(&iLocal_330, 4.0f))
							{
								Function_399(&(uLocal_44[iVar0]), 0);
							}
						}
						break;
				}
			}
			else if (!Function_403(&(uLocal_44[iVar0])) != 28)
			{
				if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
				{
					SQUAD_LEAVE(&(uLocal_44[iVar0]));
				}
				if (iVar0 == 0 && Function_403(&(uLocal_44[iVar0])) == 28)
				{
					RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
					fVar15 = (RAND_FLOAT_RANGE(0.0f, 100.0f) / 100.0f);
					if (IS_ACTOR_VALID(&(uLocal_44[0])) && IS_ACTOR_ALIVE(&(uLocal_44[0])))
					{
						if (SQUAD_GET_SIZE(&uLocal_366) < 1)
						{
							if (Function_389())
							{
								if (!((Function_403(&(uLocal_44[0])) != 17 || Function_403(&(uLocal_44[0])) != 16) || Function_403(&(uLocal_44[0])) != 26))
								{
									Function_401(&(uLocal_44[0]), 17);
								}
							}
							else if (!(Function_403(&(uLocal_44[0])) != 18 || Function_403(&(uLocal_44[0])) != 19))
							{
								Function_401(&(uLocal_44[0]), 18);
							}
							MEMORY_ALLOW_TAKE_COVER(&(uLocal_44[0]), 0);
						}
						else if ((SQUAD_GET_SIZE(&uLocal_366) >= 3 && fVar15 < 0,7f) && !((Function_403(&(uLocal_44[0])) != 17 || Function_403(&(uLocal_44[0])) != 16) || Function_403(&(uLocal_44[0])) != 26))
						{
							Function_401(&(uLocal_44[0]), 17);
						}
					}
				}
				Function_401(&(uLocal_44[iVar0]), 28);
			}
		}
		iVar0++;
	}
	if (Global_6629 != 1 && iLocal_416 != 1)
	{
		uVar18 = Function_387(&iLocal_449);
		if (SQUAD_IS_VALID(&uVar18))
		{
			if (SQUAD_GET_SIZE(&uVar18) >= 0)
			{
				Function_385(&iLocal_449, &Global_54076);
			}
		}
	}
	if (iLocal_269 > 5)
	{
		iVar0 = 0;
		while (iVar0 < (bLocal_263 - 1))
		{
			if (iLocal_384[iVar0] == 0)
			{
				if (IS_ACTOR_HOGTIED(&(uLocal_44[iVar0])) == 1)
				{
					iLocal_384[iVar0] = 1;
					Function_464(1);
				}
			}
			else if (IS_ACTOR_HOGTIED(&(uLocal_44[iVar0])) == 0)
			{
				iLocal_384[iVar0] = 0;
				Function_464(1);
			}
			iVar0++;
		}
		if (&iLocal_444 == "")
		{
			uVar4 = CREATE_OBJECT_ITERATOR(&uLocal_535);
			if (IS_ITERATOR_VALID(&uVar4))
			{
				ITERATE_IN_LAYOUT(&uVar4, GET_GC_LAYOUT());
				ITERATE_ON_OBJECT_TYPE(&uVar4, 29);
				bVar2 = START_OBJECT_ITERATOR(&uVar4);
				while (IS_OBJECT_VALID(&bVar2))
				{
					iVar19 = GET_PREVIOUS_ACTOR_FROM_CORPSE(&bVar2);
					if (&iVar19 == &uLocal_44[0])
					{
						iLocal_444 = &bVar2;
						REFERENCE_OBJECT(&iLocal_444);
						bVar2 = "";
						Function_464(1);
					}
					else
					{
						bVar2 = OBJECT_ITERATOR_NEXT(&uVar4);
					}
				}
			}
			DESTROY_ITERATOR(&uVar4);
		}
		else if ((!IS_OBJECT_VALID(&iLocal_444) && &iLocal_444 == "") && iLocal_269 > 10)
		{
			Function_509(10);
			Function_509(8);
			Function_464(1);
		}
	}
	if (iLocal_269 != 8 || HAS_ITEM(Function_490(65), &Global_54076))
	{
		if (!IS_OBJECT_VALID(&bLocal_420))
		{
			Function_384();
			if (!Function_436(StackVal, Local_820))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhGateway") };
				bLocal_420 = Function_383(StackVal, StackVal, &uLocal_535, &cLocal_270, Local_820, Vector(0.0f, 0.0f, 0.0f), &Global_54076, (2,5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
				if (IS_OBJECT_VALID(&bLocal_420))
				{
					uLocal_348 = Function_382(&bLocal_420);
				}
				else
				{
					LOG_ERROR("Problem creating dropoff gateway");
				}
				Function_464(1);
			}
			else
			{
				LOG_ERROR("Invalid dropOffPos found");
			}
			Function_380();
		}
		else if (StackVal && !Function_549(Function_374(), 2048))
		{
			Function_371();
			Function_548(&Global_39906 + 8, 2048);
		}
		else if (Function_549(StackVal, 2048))
		{
			if (StackVal && !Function_549(VDIST(Global_54078, Local_820) > 100.0f, 512))
			{
				Function_369();
				Function_548(&Global_39906 + 8, 512);
			}
		}
	}
	if (iLocal_269 == 8)
	{
		if (Global_6650)
		{
			Function_509(13);
		}
	}
	if (Function_364())
	{
		return 0;
	}
	if (iLocal_269 == 8)
	{
		Function_318(Param0.f_44);
	}
	if (iLocal_269 == 8)
	{
		if (IS_ACTOR_VALID(&(uLocal_44[0])))
		{
			GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), &uVar20);
			if (GET_HOGTIED_MASTER(&(uLocal_44[0])) != GET_PLAYER_ACTOR(0) && IS_ACTOR_HOGTIE_ATTACHED(&(uLocal_44[0])) != 2)
			{
				iVar9 = 1;
			}
			if (!IS_ACTOR_VALID(GET_RIDER(GET_HOGTIED_MASTER(&(uLocal_44[0])))))
			{
				iVar11 = 1;
			}
			if (GET_HOGTIED_MASTER(&(uLocal_44[0])) != GET_MOUNT(GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(&(uLocal_44[0])) != 1)
			{
				iVar10 = 1;
			}
			else if (IS_ACTOR_HOGTIE_ATTACHED(&(uLocal_44[0])) != 1 && !GET_TASK_STATUS(GET_HOGTIED_MASTER(&(uLocal_44[0])), 6) != 1)
			{
				TASK_STAND_STILL(GET_HOGTIED_MASTER(&(uLocal_44[0])), -1.0f, 0, 0);
			}
			if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip") == 1)
			{
				if (iVar9 != 1 || iVar10 != 1)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip", 0);
					Function_464(1);
				}
			}
			else if (iVar9 != 0 && iVar10 != 0)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip", 1);
				Function_464(1);
			}
		}
	}
	if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
	{
		if (GET_LASSO_TARGET(&Global_54076) != &uLocal_44[0] && iLocal_374 != 0)
		{
			Function_449(&Local_539, 1);
			if (IS_ACTOR_MALE(&(uLocal_44[0])))
			{
				Function_448(&Local_539, "pm_bh_ht", 1);
			}
			else
			{
				Function_448(&Local_539, "npm_bh_ht2", 1);
			}
			iLocal_374 = 1;
		}
		else if ((iLocal_374 != 1 && iLocal_375 != 0) && IS_ACTOR_HOGTIED(&(uLocal_44[0])))
		{
			Function_509(8);
			Function_449(&Local_539, 1);
			if (IS_ACTOR_MALE(&(uLocal_44[0])))
			{
				Function_448(&Local_539, "pm_bh_pu", 1);
			}
			else
			{
				Function_448(&Local_539, "npm_bh_pu2", 1);
			}
			iLocal_375 = 1;
			Function_476(&iLocal_306);
		}
		else if (((iLocal_375 != 1 && iLocal_376 != 0) && GET_HOGTIED_MASTER(&(uLocal_44[0])) != GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(&(uLocal_44[0])) != 2)
		{
			Function_449(&Local_539, 1);
			Function_448(&Local_539, "pm_bh_po", 1);
			iLocal_376 = 1;
		}
		else if (((GET_HOGTIED_MASTER(&(uLocal_44[0])) != GET_MOUNT(GET_PLAYER_ACTOR(0)) && IS_ACTOR_HOGTIE_ATTACHED(&(uLocal_44[0])) != 1) && iLocal_376 != 1) && iLocal_377 != 0)
		{
			Function_449(&Local_539, 1);
			Function_448(&Local_539, "pm_bh_oh", 1);
			strcpy(&cLocal_270, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[iLocal_4489] + 8)), 32);
			Function_317(&Local_539, &cLocal_270, 0);
			iLocal_377 = 1;
		}
		else if (((iVar11 != 1 || iVar10 != 1) || iVar9 != 1) && Function_475(&iLocal_306, 45.0f))
		{
			SAY_SINGLE_LINE_CONTEXT(&(uLocal_44[0]), 167, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
			Function_476(&iLocal_306);
		}
	}
	else if (IS_ACTOR_DEAD(&(uLocal_44[0])) || !IS_ACTOR_VALID(&(uLocal_44[0])))
	{
		if (iLocal_410 == 0)
		{
			if (!IS_ACTOR_ALIVE(&(uLocal_44[0])))
			{
				if (!Function_549(StackVal, 32))
				{
					if (IS_OBJECT_VALID(&iLocal_444))
					{
						GET_OBJECT_POSITION(&iLocal_444, &Var24);
					}
					else if (!IS_ACTOR_ALIVE(&(uLocal_44[0])))
					{
						Function_131(&(uLocal_44[0]), &Var24);
					}
					else
					{
						Var24 = Vector(0.0f, 0.0f, 0.0f);
					}
					if (!Function_436(StackVal, Var24))
					{
						Var26 = Var24;
						Var24.f_4 = (StackVal + 5.0f);
						Var26.f_4 = (StackVal - 5.0f);
						if (FIND_WATER_INTERSECTION(Var24, Var26, &Var5, &uVar28))
						{
							if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(StackVal, ((StackVal - &Var24) - 0,1f), &Var5, &uVar28, &uVar30))
							{
							}
							else
							{
								Function_548(&Global_39906 + 8, 32);
							}
						}
					}
				}
				if (Function_549(StackVal, 32))
				{
					Function_509(10);
					Function_509(8);
					Function_464(1);
				}
				else if ((!IS_OBJECT_VALID(&iLocal_444) && iLocal_269 > 10) && &iLocal_444 == "")
				{
					Function_509(10);
					Function_509(8);
					Function_464(1);
				}
				else
				{
					Function_509(9);
					Function_464(1);
				}
				iLocal_410 = 1;
			}
		}
	}
	return 1;
}

int Function_317(bool bParam0, char* cParam1) //Position: 0x11CF0 / 72944
{
	if (IS_STRING_VALID(&cParam1))
	{
		strcpy(&bParam0 + 248[06], &cParam1, 24);
		(*&bParam0 + 184)[0] = 1;
	}
	else
	{
		strcpy(&bParam0 + 248[06], "", 24);
		(*&bParam0 + 184)[0] = 0;
	}
	if (IS_STRING_VALID(&cParam2))
	{
		strcpy(&bParam0 + 248[16], &cParam2, 24);
		(*&bParam0 + 184)[1] = 1;
	}
	else
	{
		strcpy(&bParam0 + 248[16], "", 24);
		(*&bParam0 + 184)[1] = 0;
	}
	return 1;
}

void Function_318(int iParam0) //Position: 0x11D67 / 73063
{
	struct<2> Var0;
	var uVar2;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	
	if (&bLocal_533 == "")
	{
		if (Function_475(&iLocal_290, fLocal_368) && !(Global_43790 != 3 || Global_43790 != 4))
		{
			if (IS_VOLUME_VALID(&uLocal_348))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(&uLocal_348), &Var0);
				Function_472(StackVal, StackVal, Var0, Global_54078, &uVar2);
				VNORMALIZE(&uVar2);
				fVar6 = UNK_0x9C40E671(&uVar2);
				bVar7 = (RAND_FLOAT_RANGE(-1050.0f, 1050.0f) / 10.0f);
				ROTATE_VECTOR_XZ(&uVar2, bVar7, 0);
				VSCALE(&uVar2, 100.0f);
			}
			else if (Function_389())
			{
				uVar2 = Vector(RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f));
			}
			else
			{
				uVar2 = Vector(RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f));
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(&Global_54076, &uVar2, &Var0);
			switch (Global_39906.f_12)
			{
				case 0x00000001:
					iVar4 = RAND_INT_RANGE(1, 2);
					break;
				
				case 0x00000002:
					iVar4 = RAND_INT_RANGE(2, 3);
					break;
				
				case 0x00000003:
					iVar4 = RAND_INT_RANGE(3, 3);
					break;
				
				case 0x00000004:
					iVar4 = RAND_INT_RANGE(3, 4);
					break;
				
				case 0x00000005:
					iVar4 = RAND_INT_RANGE(4, 4);
					break;
				
				default:
					iVar4 = 2;
					break;
			}
			Function_363(&iLocal_449, 5);
			Function_362(&iLocal_449, 2);
			Function_361(&iLocal_449, 1);
			Function_360(&iLocal_449, 0);
			Function_359(&iLocal_449, iVar4);
			Function_358(StackVal, &iLocal_449, Var0);
			Function_357(&iLocal_449, 1);
			Function_356(&iLocal_449, 0,1f, 60.0f, 15.0f);
			Function_355(&iLocal_449, 1);
			Function_354(&iLocal_449, 1);
			Function_353(&iLocal_449, 1);
			Function_352(&iLocal_449, 1, 4294967295);
			Function_351(&iLocal_449, 1);
			Function_350(&iLocal_449, 1, 4294967295, 0);
			Function_345(&iLocal_449, &Global_54076);
			if (iParam0 == 1)
			{
				Function_344(&iLocal_449, 1);
			}
			if (Function_333(&iLocal_449))
			{
				iVar8 = 4294967295;
				if (!Function_549(StackVal, 524288))
				{
					iVar5 = 0;
					while (iVar5 < (bLocal_263 - 1))
					{
						iVar8 = Function_331(Global_39906.f_12, iLocal_335, iVar5);
						if (Function_330(iVar8) && iVar8 == 0)
						{
							Function_329(&iLocal_449, iVar8);
						}
						iVar5++;
					}
					Function_328(&iLocal_449, 1);
					Function_548(&Global_39906 + 8, 524288);
				}
				if (!Function_549(StackVal, 131072))
				{
					Function_448(&Local_539, "npm_bh_def", 1);
					Function_548(&Global_39906 + 8, 131072);
				}
				bLocal_533 = Function_326(&iLocal_449);
				Function_548(&Global_39906 + 8, 262144);
				if (IS_SCRIPT_VALID(&bLocal_533))
				{
					Function_325();
				}
			}
			else
			{
				fLocal_368 = (fLocal_368 + 3,5f);
			}
		}
		else
		{
			Function_67(&Global_39906 + 8, 262144);
		}
	}
	else if (Function_549(StackVal, 262144))
	{
		if (IS_SCRIPT_VALID(&bLocal_533))
		{
			Function_321(&iLocal_449);
			if (SQUAD_IS_VALID(&iLocal_449 + 80))
			{
				Function_67(&Global_39906 + 8, 262144);
			}
		}
	}
	else if (!IS_SCRIPT_VALID(&bLocal_533) && !SQUAD_IS_VALID(&iLocal_449 + 80))
	{
		bLocal_533 = "";
		Function_325();
		Function_476(&iLocal_290);
	}
	else if (Global_43790 != 3 || Global_43790 != 4)
	{
		Function_319(&iLocal_449);
		Function_385(&iLocal_449, &Global_54076);
	}
	return;
}

void Function_319(int iParam0) //Position: 0x1208C / 73868
{
	Function_320(&iParam0);
	return;
}

void Function_320(int iParam0) //Position: 0x12098 / 73880
{
	if (IS_ACTORSET_VALID(&iParam0 + 64))
	{
		DISBAND_ACTORSET(&iParam0 + 64);
	}
	return;
}

void Function_321(int iParam0) //Position: 0x120B4 / 73908
{
	if (IS_OBJECT_VALID(Function_34(&iParam0)))
	{
		Function_323(&iParam0, 0);
		Function_322(&iParam0, 0);
	}
	return;
}

int Function_322(struct<329> Param0) //Position: 0x120D6 / 73942
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_34(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			DECOR_SET_BOOL(&iParam1, "catk_bdi", Param0.f_272);
			DECOR_SET_FLOAT(&iParam1, "catk_spx", Param0.f_284);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spz");
			DECOR_SET_FLOAT(&iParam1, "catk_scx", Param0.f_296);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scz");
			DECOR_SET_BOOL(&iParam1, "catk_krd", Param0.f_276);
			DECOR_SET_BOOL(&iParam1, "catk_krt", Param0.f_280);
			DECOR_SET_OBJECT(&iParam1, "catk_atv", &Param0 + 312);
			DECOR_SET_INT(&iParam1, "catk_ats", Param0.f_320);
			DECOR_SET_BOOL(&iParam1, "catk_bus", Param0.f_324);
			DECOR_SET_OBJECT(&iParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(&Param0 + 80));
			DECOR_SET_INT(&iParam1, "catk_wtm", Param0.f_328);
			DECOR_SET_BOOL(&iParam1, "catk_ovr", Param0.f_260);
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_330((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(&iParam1, &cVar5, (*&Param0 + 144)[bVar0]);
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

int Function_323(struct<329> Param0) //Position: 0x1234A / 74570
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_324(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_34(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			Param0.f_272 = DECOR_GET_BOOL(&iParam1, "catk_bdi");
			Param0.f_284 = DECOR_GET_FLOAT(&iParam1, "catk_spx");
			(&Param0 + 284)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_spy");
			(&Param0 + 284)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_spz");
			Param0.f_296 = DECOR_GET_FLOAT(&iParam1, "catk_scx");
			(&Param0 + 296)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_scy");
			(&Param0 + 296)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_scz");
			Param0.f_276 = DECOR_GET_BOOL(&iParam1, "catk_krd");
			Param0.f_280 = DECOR_GET_BOOL(&iParam1, "catk_krt");
			(&Param0 + 312) = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_atv"));
			Param0.f_320 = DECOR_GET_INT(&iParam1, "catk_ats");
			Param0.f_324 = DECOR_GET_BOOL(&iParam1, "catk_bus");
			*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_asq"));
			Param0.f_328 = DECOR_GET_INT(&iParam1, "catk_wtm");
			Param0.f_260 = DECOR_GET_BOOL(&iParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_330((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*&Param0 + 144)[bVar0] = DECOR_GET_INT(&iParam1, &cVar5);
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

void Function_324(int iParam0) //Position: 0x125B4 / 75188
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574(&Var0), 4);
		iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

void Function_325() //Position: 0x12624 / 75300
{
	switch (Global_39906.f_12)
	{
		case 0x00000001:
			fLocal_368 = RAND_FLOAT_RANGE(35.0f, (35.0f + 10.0f));
			break;
		
		case 0x00000002:
			fLocal_368 = RAND_FLOAT_RANGE(30.0f, 35.0f);
			break;
		
		case 0x00000003:
			fLocal_368 = RAND_FLOAT_RANGE(25.0f, 30.0f);
			break;
		
		case 0x00000004:
			fLocal_368 = RAND_FLOAT_RANGE(20.0f, 25.0f);
			break;
		
		case 0x00000005:
			fLocal_368 = RAND_FLOAT_RANGE(15.0f, 20.0f);
			break;
		
		default:
			fLocal_368 = RAND_FLOAT_RANGE(20.0f, 25.0f);
			break;
	}
	return;
}

var Function_326(struct<273> Param0) //Position: 0x126CA / 75466
{
	int iVar0;
	
	if (!Param0.f_272 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_327(&Param0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", &Param0, 84, 0);
	return &iVar0;
}

void Function_327(struct<201> Param0) //Position: 0x12754 / 75604
{
	int iVar0;
	int iVar1;
	
	if (Function_549(Param0.f_128, 64))
	{
		iVar1 = 0;
		while (iVar1 <= Param0.f_144)
		{
			if (!(*&Param0 + 144)[iVar1] != 0 && Function_330((*&Param0 + 144)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		Param0.f_200 = iVar0;
	}
	else
	{
		Param0.f_200 = Param0.f_144;
	}
	return;
}

void Function_328(int iParam0, bool bParam1) //Position: 0x127B3 / 75699
{
	if (bParam1)
	{
		Function_548(&iParam0 + 128, 64);
	}
	else
	{
		Function_67(&iParam0 + 128, 64);
	}
	return;
}

int Function_329(struct<273> Param0) //Position: 0x127D5 / 75733
{
	int iVar0;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_330(iParam1) || iParam1 != 0)
	{
		return 0;
	}
	Function_323(&Param0, 0);
	iVar0 = 0;
	while (iVar0 <= Param0.f_144)
	{
		if ((*&Param0 + 144)[iVar0] != 0 || !Function_330((*&Param0 + 144)[iVar0]))
		{
			(*&Param0 + 144)[iVar0] = iParam1;
			iVar0 = Param0.f_144;
		}
		iVar0++;
	}
	Function_322(&Param0, 0);
	return 1;
}

bool Function_330(int iParam0) //Position: 0x128AC / 75948
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_331(int iParam0, int iParam1, int iParam2) //Position: 0x128C3 / 75971
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	
	iVar18 = 0;
	if (&iParam1 == 4294967295)
	{
		return 472;
	}
	if (&iParam1 == 0)
	{
		iParam1 = Function_332(Global_43789);
	}
	if (&iParam0 == 0)
	{
		iParam0 = 3;
	}
	switch (&iParam0)
	{
		case 0x00000001:
			switch (&iParam1)
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
			switch (&iParam1)
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
			switch (&iParam1)
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
			switch (&iParam1)
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
			switch (&iParam1)
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
			switch (&iParam1)
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
	if (&iParam2 == 4294967295)
	{
		iVar17 = iVar0[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar18)];
	}
	else
	{
		iVar17 = iVar0[(&iParam2 % iVar18)];
	}
	return iVar17;
}

var Function_332(int iParam0) //Position: 0x13799 / 79769
{
	int iVar0;
	int iVar1;
	var uVar2;
	char* cVar3[32];
	
	iVar1 = Function_460(iParam0);
	if (Function_565(iVar1))
	{
		uVar2 = &Global_44085[iVar19] + 32;
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
			memcpy(&cVar3, &uVar2, 8);
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

bool Function_333(struct<325> Param0) //Position: 0x138A5 / 80037
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	struct<6> Var11;
	
	Function_324(&Param0);
	if (Param0.f_320 == 0)
	{
		Param0.f_320 = 3;
		DECOR_SET_BOOL(&Param0, "catk_bus", Param0.f_324);
	}
	if (Function_436(StackVal, (&Param0 + 284)))
	{
		if (Function_436(StackVal, *(&Param0 + 296)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_358(StackVal, &Param0, Global_54078);
			}
			else
			{
				return 0;
			}
		}
		Function_358(StackVal, &Param0, *(&Param0 + 296));
		if (Param0.f_36 > 0,5f)
		{
			Param0.f_36 = 0,5f;
		}
		if ((Param0.f_40 - Param0.f_36) > 6.0f)
		{
			Param0.f_40 = (Param0.f_36 + 6.0f);
		}
		if (Param0.f_44 >= 0.0f)
		{
			Param0.f_44 = 15.0f;
		}
		Function_343(&Var3, 4294967295, 5.0f, 1, 4294967295);
		Function_342(StackVal, &Var11, 0, *(&Param0 + 296), 0.0f, Param0.f_36, Param0.f_40, Param0.f_44, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_335(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			Var1 = Function_335(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			if (!Function_436(StackVal, Var1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_436(StackVal, Var1))
		{
			*(&Param0 + 284) = *(&Param0 + 296);
			return 0;
		}
		*(&Param0 + 284) = Var1;
	}
	Function_327(&Param0);
	Param0.f_272 = 1;
	if (!Function_334(&Param0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_322(&Param0, 0);
	return 1;
}

bool Function_334(int iParam0) //Position: 0x13A48 / 80456
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 8))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("ncatk_dobj"), 4);
		*(&iParam0 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, &iParam0, &uVar0, *(&iParam0 + 284), Vector(0.0f, 0.0f, 0.0f));
		if (!IS_OBJECT_VALID(&iParam0 + 8))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		*(&iParam0 + 16) = CREATE_OBJECT_ITERATOR(&iParam0);
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(&iParam0 + 16, 8);
	ITERATE_ON_PARTIAL_NAME(&iParam0 + 16, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(&iParam0 + 16)));
	PRINTNL();
	return 1;
}

struct<8> Function_335(struct<45> Param0) //Position: 0x13BCF / 80847
{
	struct<2> Var0;
	
	if (&bParam14)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_436(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_341(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_339();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_338(Param0.f_24);
	Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_336(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param6.f_28 == 0.0f)
	{
		Param0.f_44 = Param6.f_28;
	}
	if (Param0.f_44 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_44, (-1.0f * Param0.f_44));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_65();
	return StackVal, Function_65();
}

void Function_336(struct<33> Param0) //Position: 0x13D02 / 81154
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
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
		if (Global_47151[34])
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

void Function_337(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x13E2E / 81454
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

void Function_338(bool bParam0) //Position: 0x13E7F / 81535
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

void Function_339() //Position: 0x13F32 / 81714
{
	float fVar0;
	bool bVar1;
	
	Function_340(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0x13F46 / 81734
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_341(bool bParam0) //Position: 0x13FD7 / 81879
{
	if (&bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &bParam0), &bParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_342(struct<45> Param0) //Position: 0x14021 / 81953
{
	Param0.f_24 = uParam1;
	*(&Param0 + 8) = Param2;
	Param0.f_20 = uParam4;
	Param0.f_28 = uParam5;
	Param0.f_32 = uParam6;
	Param0.f_36 = &uParam9;
	Param0.f_40 = &uParam7;
	Param0.f_44 = &uParam8;
}

void Function_343(struct<21> Param0) //Position: 0x14067 / 82023
{
	Param0 = uParam1;
	Param0.f_4 = uParam2;
	Param0.f_8 = uParam3;
	Param0.f_16 = uParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

int Function_344(struct<97> Param0) //Position: 0x14096 / 82070
{
	Param0.f_96 = iParam1;
	return 1;
}

int Function_345(var uParam0, var uParam1) //Position: 0x140A4 / 82084
{
	return Function_346(&uParam0, &uParam1);
}

int Function_346(struct<129> Param0) //Position: 0x140B3 / 82099
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	Function_349(&Param0);
	if (!IS_ACTOR_IN_ACTORSET(&Param0 + 64, &iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "catk_external", 1);
		ADD_ACTORSET_MEMBER(&Param0 + 64, &iParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTNL();
		if (!Function_549(Param0.f_128, 1024))
		{
			Function_347(&Param0, &iParam1);
		}
	}
	return 1;
}

void Function_347(int iParam0, var uParam1) //Position: 0x1413E / 82238
{
	var uVar0;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	Function_348(&iParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("catkavol"), 4);
	iVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &uVar0, 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	if (IS_VOLUME_VALID(&iVar4))
	{
		if (SQUAD_IS_VALID(&iParam0 + 80))
		{
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&iVar4), GET_OBJECT_FROM_ACTOR(&uParam1), Function_42(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(&iParam0 + 80) - 1))
			{
				uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 80, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar6, &iVar4);
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

int Function_348(int iParam0) //Position: 0x14223 / 82467
{
	var uVar0;
	
	Function_324(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("navoidVols"), 4);
		*(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

int Function_349(int iParam0) //Position: 0x14273 / 82547
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_324(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

int Function_350(struct<121> Param0) //Position: 0x142C1 / 82625
{
	if (iParam1 == 1)
	{
		Function_548(&Param0 + 128, 1);
	}
	else
	{
		Function_67(&Param0 + 128, 1);
	}
	if (&iParam2 > 976 || &iParam2 <= 1050)
	{
		Param0.f_116 = 4294967295;
	}
	else
	{
		Param0.f_116 = &iParam2;
	}
	Param0.f_120 = &uParam3;
	return 1;
}

void Function_351(int iParam0, int iParam1) //Position: 0x14310 / 82704
{
	if (iParam1 == 1)
	{
		Function_548(&iParam0 + 128, 8);
	}
	else
	{
		Function_67(&iParam0 + 128, 8);
	}
	return;
}

void Function_352(struct<125> Param0) //Position: 0x14333 / 82739
{
	if (iParam1 == 1)
	{
		Function_548(&Param0 + 128, 4);
	}
	else
	{
		Function_67(&Param0 + 128, 4);
	}
	Param0.f_124 = &iParam2;
	Function_548(&Param0 + 128, 128);
	return;
}

void Function_353(int iParam0, int iParam1) //Position: 0x14366 / 82790
{
	if (&iParam1 == 0)
	{
		Function_548(&iParam0 + 128, 4096);
	}
	else
	{
		Function_67(&iParam0 + 128, 4096);
	}
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0x1438C / 82828
{
	if (&iParam1 == 0)
	{
		Function_548(&iParam0 + 128, 2048);
	}
	else
	{
		Function_67(&iParam0 + 128, 2048);
	}
	return;
}

int Function_355(int iParam0, int iParam1) //Position: 0x143B2 / 82866
{
	if (iParam1 == 1)
	{
		Function_548(&iParam0 + 128, 512);
	}
	else
	{
		Function_67(&iParam0 + 128, 512);
	}
	return 1;
}

void Function_356(struct<45> Param0) //Position: 0x143D8 / 82904
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	Param0.f_36 = fParam1;
	Param0.f_40 = fParam2;
	Param0.f_44 = &uParam3;
}

void Function_357(int iParam0, int iParam1) //Position: 0x14445 / 83013
{
	if (&iParam1 == 0)
	{
		Function_548(&iParam0 + 128, 8192);
	}
	else
	{
		Function_67(&iParam0 + 128, 8192);
	}
	return;
}

int Function_358(struct<273> Param0) //Position: 0x1446B / 83051
{
	int iVar0;
	
	iVar0 = Function_34(&Param0);
	if (Function_436(StackVal, Param1))
	{
		return 0;
	}
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_323(&Param0, &iVar0);
	}
	*(&Param0 + 296) = Param1;
	*(&Param0 + 284) = Vector(0.0f, 0.0f, 0.0f);
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_322(&Param0, &iVar0);
	}
	return 1;
}

int Function_359(struct<53> Param0) //Position: 0x144D5 / 83157
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	Param0.f_52 = iParam1;
	return 1;
}

void Function_360(struct<277> Param0) //Position: 0x144F1 / 83185
{
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_34(&Param0)))
	{
		Function_323(&Param0, 0);
	}
	Param0.f_276 = iParam1;
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_34(&Param0)))
	{
		Function_322(&Param0, 0);
	}
	return;
}

void Function_361(int iParam0, int iParam1) //Position: 0x14539 / 83257
{
	if (iParam1 == 1)
	{
		Function_548(&iParam0 + 128, 256);
	}
	else
	{
		Function_67(&iParam0 + 128, 256);
	}
	return;
}

int Function_362(struct<61> Param0) //Position: 0x1455E / 83294
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	Param0.f_60 = iParam1;
	return 1;
}

int Function_363(struct<325> Param0) //Position: 0x1457A / 83322
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	Param0.f_320 = iParam1;
	Param0.f_324 = 1;
	return 1;
}

bool Function_364() //Position: 0x1459E / 83358
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	bool bVar9;
	
	if (iLocal_373 == 1)
	{
		return 1;
	}
	if (Function_565(iLocal_448))
	{
		if (!IS_LAYOUTREF_VALID(&uLocal_537))
		{
			uLocal_537 = Function_368(iLocal_448);
		}
		if (iLocal_269 <= 8 && IS_LAYOUTREF_VALID(&uLocal_537))
		{
			if (iLocal_378 == 1)
			{
				if (!IS_VOLUME_VALID(&uLocal_340))
				{
					uLocal_340 = Function_367(&uLocal_537);
				}
				if (Global_6646 == 0)
				{
					if (IS_OBJECT_VALID(&bLocal_420) || HAS_ITEM(Function_490(65), &Global_54076))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iLocal_4489] + 8))
						{
							iVar2 = 0;
							if (IS_VOLUME_VALID(&uLocal_340))
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_340))
								{
									if (IS_ACTOR_VALID(&(uLocal_44[0])) && IS_ACTOR_ALIVE(&(uLocal_44[0])))
									{
										if (IS_ACTOR_IN_VOLUME(&(uLocal_44[0]), &uLocal_340))
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
							else if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_348))
							{
								if (IS_ACTOR_VALID(&(uLocal_44[0])) && IS_ACTOR_ALIVE(&(uLocal_44[0])))
								{
									if (IS_ACTOR_IN_VOLUME(&(uLocal_44[0]), &uLocal_348))
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
								GET_OBJECT_POSITION(&uLocal_348, &Var3);
								Function_472(StackVal, StackVal, Global_54078, Var3, &Var5);
								if (VMAG(Var5) > 6.0f)
								{
									if (IS_ACTOR_VALID(&(uLocal_44[0])) && IS_ACTOR_ALIVE(&(uLocal_44[0])))
									{
										GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), &Var7);
										Function_472(StackVal, StackVal, Var7, Var3, &Var5);
										if (VMAG(Var5) > 6.0f)
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
									Function_366(&(uLocal_30[iVar0]));
									iVar0++;
								}
								iVar1 = 1;
								if (iVar1 == 1)
								{
									if (IS_ACTOR_PLAYER(&Global_54076))
									{
										SET_PLAYER_CONTROL(0, 0, 0, 0);
									}
									Function_365(&Global_54076);
									Function_509(11);
								}
							}
						}
					}
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_340))
				{
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_93("npm_bh_plw", 0x41200000, 1, 0, 2, 1, 0);
					}
				}
			}
		}
	}
	if (!IS_ACTOR_ALIVE(&(uLocal_44[0])))
	{
		if (iLocal_411 == 0)
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "LootType"))
			{
				if (!DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&Global_54076), "LootType") != 0)
				{
					bVar9 = (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&Global_54076), "LootType") && 1);
					if (!bVar9 != 0)
					{
						DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "LootType");
						Function_509(10);
						Function_509(8);
					}
				}
			}
		}
	}
	return iLocal_373;
}

void Function_365(int iParam0) //Position: 0x14834 / 84020
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_PLAYER(&Global_54076))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
		Function_142(&Global_54076, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
	}
	return;
}

void Function_366(bool bParam0) //Position: 0x1486A / 84074
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

var Function_367(var uParam0) //Position: 0x148A1 / 84129
{
	int iVar0;
	var uVar1;
	
	iVar0 = "";
	uVar1 = CREATE_OBJECT_ITERATOR(&uLocal_535);
	if (IS_LAYOUTREF_VALID(&uParam0) && IS_ITERATOR_VALID(&uVar1))
	{
		ITERATE_IN_LAYOUT(&uVar1, &uParam0);
		if (IS_ITERATOR_VALID(&uVar1))
		{
			ITERATE_ON_PARTIAL_NAME(&uVar1, "v_bhstop");
			iVar0 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
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
	if (IS_ITERATOR_VALID(&uVar1))
	{
		DESTROY_ITERATOR(&uVar1);
	}
	return &iVar0;
}

var Function_368(int iParam0) //Position: 0x14969 / 84329
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	
	iVar0 = "";
	iVar1 = 4294967295;
	if (!iParam0 != 4294967295 && Function_565(iParam0))
	{
		if (StackVal == 1)
		{
			iVar1 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar1 = iParam0;
		}
		else if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 6 != 3) != 4) != 5) != 7)
		{
			iVar1 = Global_44085[iParam09];
		}
		else
		{
			LOG_ERROR("REGION_FIND_DISTRICT_FROM_REGION - Unhandled AREA_TYPE");
			iVar1 = Global_44085[iParam09];
		}
	}
	if (Function_565(iVar1))
	{
		if (iVar1 == Global_46736[0])
		{
			iVar0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
		}
		else if (iVar1 == Global_46736[1])
		{
			iVar0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
		}
		else if (iVar1 == Global_46736[3])
		{
			iVar0 = FIND_NAMED_LAYOUT("RioBravo_layout");
		}
		else if (iVar1 == Global_46736[2])
		{
			iVar0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
		}
		else if (iVar1 == Global_46746[0])
		{
			iVar0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
		}
		else if (iVar1 == Global_46746[2])
		{
			iVar0 = FIND_NAMED_LAYOUT("Perdido_layout");
		}
		else if (iVar1 == Global_46746[1])
		{
			iVar0 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
		}
		else if (iVar1 == Global_46754[1])
		{
			iVar0 = FIND_NAMED_LAYOUT("TallTrees_layout");
		}
		else if (iVar1 == Global_46754[0])
		{
			iVar0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
		}
		else
		{
			LOG_ERROR("REGION_FIND_DISTRICT_FROM_REGION - Unhandled Region ID");
		}
	}
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		strcpy(&cVar2, "Found district layout for ", 64);
		stradd(&cVar2, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8)), 64);
	}
	return &iVar0;
}

void Function_369() //Position: 0x14C33 / 85043
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(&(uLocal_30[iVar0])))
		{
			Function_370(GET_OBJECT_FROM_ACTOR(&(uLocal_30[iVar0])), 0);
			if (iVar0 == 0)
			{
				TASK_CLEAR(&(uLocal_30[iVar0]));
				TASK_FACE_ACTOR(&(uLocal_30[iVar0]), &Global_54076, 1, 3212836864);
				TASK_PRIORITY_SET(&(uLocal_30[iVar0]), 2);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(&(uLocal_30[iVar0]), &Global_54076, -1.0f, 1);
			if (IS_MOVER_FROZEN(&(uLocal_30[iVar0])))
			{
				SET_MOVER_FROZEN(&(uLocal_30[iVar0]), 0);
			}
		}
		iVar0++;
	}
	if (iLocal_448 == Global_46760[0])
	{
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-2094,512f, 16,449f, 2607,253f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[0]), Vector(-2094,512f, 16,449f, 2607,253f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[0]), &(uLocal_352[0]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-2095,31f, 16,449f, 2606,791f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[1]), Vector(-2094,824f, 16,449f, 2609,479f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[1]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[2]), Vector(-2093,915f, 16,449f, 2605,948f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[2]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[3]), Vector(-2096,289f, 16,449f, 2607,438f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[3]), &(uLocal_352[1]), 1, 2);
		TASK_FACE_ACTOR(&(uLocal_30[0]), &Global_54076, 1, 3212836864);
		TASK_PRIORITY_SET(&(uLocal_30[0]), false);
	}
	else if (iLocal_448 == Global_46914[0])
	{
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(756,326f, 78,525f, 1234,881f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[0]), Vector(756,326f, 78,525f, 1234,881f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[0]), &(uLocal_352[0]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(755,386f, 78,525f, 1234,835f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[1]), Vector(755,883f, 78,525f, 1231,911f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[1]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[2]), Vector(755,741f, 78,525f, 1237,13f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[2]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[3]), Vector(759,221f, 79,202f, 1235,267f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[3]), &(uLocal_352[1]), 1, 2);
	}
	else if (iLocal_448 == Global_46866[0])
	{
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-2671,575f, 31,365f, 4253,672f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[0]), Vector(-2671,575f, 31,365f, 4253,672f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[0]), &(uLocal_352[0]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-2667,778f, 31,387f, 4253,858f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[1]), Vector(-2667,778f, 31,387f, 4253,858f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[1]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[2]), Vector(-2668,49f, 31,387f, 4256,438f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[2]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[3]), Vector(-2667,755f, 31,387f, 4251,722f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[3]), &(uLocal_352[1]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[2] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-2668,037f, 35,673f, 4254,779f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[4]), Vector(-2666,749f, 35,673f, 4251,509f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[4]), &(uLocal_352[2]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[5]), Vector(-2668,808f, 35,673f, 4254,694f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[5]), &(uLocal_352[2]), 1, 2);
		TASK_FACE_ACTOR(&(uLocal_30[0]), &Global_54076, 1, 3212836864);
		TASK_PRIORITY_SET(&(uLocal_30[0]), false);
	}
	else if (iLocal_448 == Global_46816[0])
	{
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-822,001f, 93,365f, 2422,047f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[0]), Vector(-822,001f, 93,365f, 2422,047f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[0]), &(uLocal_352[0]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-822,459f, 93,365f, 2421,458f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[1]), Vector(-819,546f, 93,365f, 2421,278f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[1]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[2]), Vector(-825,571f, 93,809f, 2422,226f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[2]), &(uLocal_352[1]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[3]), Vector(-823,521f, 93,809f, 2428,028f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[3]), &(uLocal_352[1]), 1, 2);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhDropVol") };
		uLocal_352[2] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Vector(-824,512f, 96,959f, 2430,295f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[4]), Vector(-823,026f, 96,959f, 2430,371f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[4]), &(uLocal_352[2]), 1, 2);
		SET_OBJECT_POSITION(StackVal, &(uLocal_30[5]), Vector(-827,542f, 96,959f, 2429,732f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_30[5]), &(uLocal_352[2]), 1, 2);
		TASK_FACE_ACTOR(&(uLocal_30[0]), &Global_54076, 1, 3212836864);
		TASK_PRIORITY_SET(&(uLocal_30[0]), false);
	}
	return;
}

int Function_370(int iParam0, int iParam1) //Position: 0x15340 / 86848
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

int Function_371() //Position: 0x153CB / 86987
{
	int iVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&(uLocal_30[0])))
	{
		if (((iLocal_448 != Global_46760[0] || iLocal_448 != Global_46866[0]) || iLocal_448 != Global_46816[0]) || iLocal_448 != Global_46914[0])
		{
			if (IS_ACTOR_VALID(&(uLocal_44[0])))
			{
				Function_373(&Local_539, &(uLocal_44[0]), 0);
			}
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhHndShake") };
			if (Function_330(iLocal_88[0]))
			{
				Function_65();
				uLocal_30[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(-1.0f, -5.0f, -5.0f), Local_820, iLocal_88[0]), Function_65());
				Function_373(&Local_539, &(uLocal_30[0]), 1);
			}
			if (Function_330(iLocal_88[1]))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhGunner") };
				Function_65();
				uLocal_30[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(1.0f, -5.0f, 1.0f), Local_820, iLocal_88[1]), Function_65());
				Function_373(&Local_539, &(uLocal_30[1]), 2);
			}
			if (Function_330(iLocal_88[2]))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhGunner") };
				Function_65();
				uLocal_30[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(0.0f, -5.0f, 0.0f), Local_820, iLocal_88[2]), Function_65());
				Function_373(&Local_539, &(uLocal_30[2]), 3);
			}
			if (Function_330(iLocal_88[3]))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhGunner") };
				Function_65();
				uLocal_30[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(1.0f, -5.0f, 0.0f), Local_820, iLocal_88[3]), Function_65());
				Function_373(&Local_539, &(uLocal_30[3]), 4);
			}
			if (Function_330(iLocal_88[4]))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhWalker") };
				Function_65();
				uLocal_30[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(0.0f, -5.0f, 1.0f), Local_820, iLocal_88[4]), Function_65());
				Function_373(&Local_539, &(uLocal_30[4]), 5);
			}
			if (Function_330(iLocal_88[5]))
			{
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhWalker") };
				Function_65();
				uLocal_30[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_270, &uLocal_535, StackVal) + Vector(Vector(-1.0f, -5.0f, 1.0f), Local_820, iLocal_88[5]), Function_65());
				Function_373(&Local_539, &(uLocal_30[5]), 6);
			}
		}
		else
		{
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bountyDropGuy") };
			Function_65();
			uLocal_30[0] = CREATE_ACTOR_IN_LAYOUT(&uLocal_535, &cLocal_270, iLocal_88[0], Local_820, Function_65());
			if (!IS_ACTOR_VALID(&(uLocal_30[0])))
			{
				LOG_ERROR("Problem creating dropOffGuy");
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(&(uLocal_30[iVar0])))
			{
				TASK_CLEAR(&(uLocal_30[iVar0]));
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uLocal_30[iVar0]), 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uLocal_30[iVar0]), 0);
				Function_56(&(uLocal_30[iVar0]), &Global_54076, 0, 0);
				if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
				{
					Function_56(&(uLocal_30[iVar0]), &(uLocal_44[0]), 2, 0);
				}
				AI_IGNORE_ACTOR(&(uLocal_30[iVar0]));
				SET_MOVER_FROZEN(&(uLocal_30[iVar0]), 1);
				REFERENCE_ACTOR(&(uLocal_30[iVar0]));
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Function_56(&(uLocal_30[iVar0]), &(uLocal_30[iVar1]), 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		TASK_CLEAR(&(uLocal_44[0]));
		Function_372(&Local_539 + 992);
		Function_464(1);
		iLocal_378 = 1;
	}
	return 1;
}

void Function_372(int iParam0) //Position: 0x1574E / 87886
{
	var uVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(&iParam0))
	{
		PRINTSTRING("Contents of OBJECTSET ");
		if (STRING_LENGTH(GET_OBJECT_NAME(&iParam0)) >= 0)
		{
			PRINTSTRING(GET_OBJECT_NAME(&iParam0));
		}
		else
		{
			PRINTSTRING("n(no name)");
		}
		PRINTNL();
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&iParam0) - 1))
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &iParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				PRINTINT(bVar1);
				PRINTSTRING(") ");
				PRINTSTRING(GET_OBJECT_NAME(&uVar0));
				PRINTNL();
			}
			bVar1++;
		}
		PRINTSTRING("Displayed ");
		PRINTINT(GET_OBJECTSET_SIZE(&iParam0));
		PRINTSTRING("n objects.");
	}
	return;
}

void Function_373(bool bParam0, var uParam1, bool bParam2) //Position: 0x1581B / 88091
{
	struct<8> Var0;
	
	Function_240(&bParam0);
	if (!IS_OBJECTSET_VALID(&bParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("cutscTargets") };
		(&bParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &bParam0 + 32, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam1, &bParam0 + 992);
		DECOR_SET_INT(&uParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

bool Function_374() //Position: 0x158D5 / 88277
{
	if (iLocal_406 == 0)
	{
		return 0;
	}
	if (!Function_375(&iLocal_236))
	{
		return 0;
	}
	return 1;
}

bool Function_375(struct<2>[] Param0) //Position: 0x158F0 / 88304
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_379();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_378(&(Param0[iVar02]), 8);
		}
		else if (Function_377())
		{
			iVar1 = 1;
			Function_378(&(Param0[iVar02]), 8);
		}
		Function_378(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_378(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_378(&(Param0[iVar02]), 2);
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
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_378(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_378(&(Param0[iVar02]), 2);
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
	Function_376();
	return 1;
}

void Function_376() //Position: 0x15CB2 / 89266
{
	if (!Function_147(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_377() //Position: 0x15CF2 / 89330
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

void Function_378(struct<13> Param0) //Position: 0x15D20 / 89376
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_379() //Position: 0x15D33 / 89395
{
	if (!Function_147(128))
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

void Function_380() //Position: 0x15D75 / 89461
{
	int iVar0;
	
	if (iLocal_448 == Global_46760[0])
	{
		iLocal_88[0] = 440;
		if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
		{
			iLocal_88[1] = 437;
			iLocal_88[2] = 445;
		}
		else
		{
			iLocal_88[1] = 4294967295;
			iLocal_88[2] = 4294967295;
		}
		iLocal_88[3] = 4294967295;
		iLocal_88[4] = 4294967295;
		iLocal_88[5] = 4294967295;
	}
	else if (iLocal_448 == Global_46914[0])
	{
		iLocal_88[0] = 441;
		if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
		{
			iLocal_88[1] = 453;
			iLocal_88[2] = 451;
		}
		else
		{
			iLocal_88[1] = 4294967295;
			iLocal_88[2] = 4294967295;
		}
		iLocal_88[3] = 4294967295;
		iLocal_88[4] = 4294967295;
		iLocal_88[5] = 4294967295;
	}
	else if (iLocal_448 == Global_46866[0])
	{
		iLocal_88[0] = 463;
		if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
		{
			iLocal_88[1] = 455;
			iLocal_88[2] = 456;
			iLocal_88[3] = 457;
		}
		else
		{
			iLocal_88[1] = 4294967295;
			iLocal_88[2] = 4294967295;
			iLocal_88[3] = 4294967295;
		}
		iLocal_88[4] = 4294967295;
		iLocal_88[5] = 4294967295;
	}
	else if (iLocal_448 == Global_46816[0])
	{
		iLocal_88[0] = 438;
		if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
		{
			iLocal_88[1] = 443;
			iLocal_88[2] = 442;
		}
		else
		{
			iLocal_88[1] = 4294967295;
			iLocal_88[2] = 4294967295;
		}
		iLocal_88[3] = 4294967295;
		iLocal_88[4] = 4294967295;
		iLocal_88[5] = 4294967295;
	}
	else
	{
		LOG_ERROR("Invalid bounty hunter AE");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Function_330(iLocal_88[iVar0]))
		{
			Function_381(&iLocal_236, iLocal_88[iVar0], 3, 0);
		}
		iVar0++;
	}
	iLocal_406 = 1;
	return;
}

var Function_381(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15F21 / 89889
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_378(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_378(&(Param0[iVar02]), 8);
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

var Function_382(float fParam0) //Position: 0x15FFD / 90109
{
	float fVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		fVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&fParam0, "volrestrict"));
	}
	return &fVar0;
}

var Function_383(char* cParam0, char* cParam1, float fParam9, int iParam10, int iParam11, int iParam12, float fParam13, float fParam14, int iParam15) //Position: 0x16029 / 90153
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&cParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &iParam11, 0, &iParam12, &iParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &cParam0, &cVar3, 2,802597E-45f, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_384() //Position: 0x16114 / 90388
{
	if (iLocal_448 == Global_46760[0])
	{
		Local_820 = Vector(-2097,455f, 16,449f, 2607,949f);
	}
	else if (iLocal_448 == Global_46914[0])
	{
		Local_820 = Vector(753,925f, 78,525f, 1235,32f);
	}
	else if (iLocal_448 == Global_46866[0])
	{
		Local_820 = Vector(-2674,448f, 31,452f, 4253,481f);
	}
	else if (iLocal_448 == Global_46816[0])
	{
		Local_820 = Vector(-821,297f, 93,336f, 2419,655f);
	}
	else
	{
		LOG_ERROR("Dropoff position not properly defined.");
	}
	return;
}

void Function_385(int iParam0, int iParam1) //Position: 0x161D2 / 90578
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_386(&iParam0 + 80, 2, GET_OBJECT_FROM_ACTOR(&iParam1), 4, 1);
	}
	return;
}

int Function_386(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x161FA / 90618
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar2 = SQUAD_GET_SIZE(&uParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_24(&uVar0, &iParam1, &uParam2, &uParam3, &bParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

var Function_387(int iParam0) //Position: 0x1625D / 90717
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return "";
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		return "";
	}
	Function_388(&uVar0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 25);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "atkSquad");
	(&iParam0 + 80) = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar0));
	if (!SQUAD_IS_VALID(&iParam0 + 80))
	{
	}
	if (IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
	}
	return &iParam0 + 80;
}

int Function_388(int iParam0) //Position: 0x162D8 / 90840
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_42());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_42());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_389() //Position: 0x1630E / 90894
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_390() //Position: 0x16321 / 90913
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	var uVar9[10];
	var uVar20;
	
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		uVar20 = Function_392(&(uLocal_44[iVar0]));
		if (IS_ACTOR_VALID(&uVar20))
		{
			uVar9[iVar0] = &uVar20;
			Function_391(&(uLocal_44[iVar0]), 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GET_POSITION(&(uLocal_44[iVar0]), &Var7);
		iVar2 = 0;
		iVar1 = 0;
		bVar3 = -1.0f;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if ((!iVar1 != iVar2 && IS_ACTOR_VALID(&(uVar9[iVar1]))) && !IS_ACTOR_MOUNTED(&(uVar9[iVar1])))
			{
				GET_POSITION(&(uLocal_44[iVar1]), &Var5);
				bVar4 = VDIST(Var5, Var7);
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
		if (IS_ACTOR_VALID(&(uVar9[iVar2])))
		{
			Function_391(&(uLocal_44[iVar0]), &(uVar9[iVar2]));
		}
		iVar0++;
	}
	return;
}

void Function_391(var uParam0, int iParam1) //Position: 0x16420 / 91168
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "bhnt_horse", GET_OBJECT_FROM_ACTOR(&iParam1));
	}
	return;
}

var Function_392(int iParam0) //Position: 0x1644C / 91212
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_horse"));
	}
	return "";
}

int Function_393(int iParam0) //Position: 0x1647A / 91258
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

var Function_394(struct<2> Param0, float fParam2) //Position: 0x164CD / 91341
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar53;
	
	uVar2 = 50;
	memcpy(&uVar53, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("ncoverSeek"), 4);
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_43578, &uVar53, 0f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, fParam2, fParam2));
	iVar0 = FIND_COVER_LOCATIONS_IN_VOLUME(&uVar2, 50, &uVar1, 0.0f, 360.0f, 7);
	if (IS_VOLUME_VALID(&uVar1))
	{
		DESTROY_VOLUME(&uVar1);
	}
	return iVar0;
}

float Function_395(var uParam0, int iParam1) //Position: 0x1652E / 91438
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_396(var uParam0, int iParam1) //Position: 0x16623 / 91683
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "bhnt_target", GET_OBJECT_FROM_ACTOR(&iParam1));
	return;
}

int Function_397(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x16647 / 91719
{
	var uVar0;
	var uVar2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("BOUNTYHUNTER_AI_StartFighting found an invalid aiGuy");
	}
	uVar2 = Function_398(&iParam0);
	if (!IS_ACTOR_VALID(&uVar2))
	{
		uVar2 = &Global_54076;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		TASK_CLEAR(GET_MOUNT(&iParam0));
	}
	TASK_CLEAR(&iParam0);
	if (iParam1 == 1)
	{
		MEMORY_IDENTIFY(&iParam0, &Global_54076);
	}
	switch (iParam2)
	{
		case 0x00000000:
			TASK_MELEE_ATTACK(&iParam0, &uVar2, -1.0f);
			break;
		
		case 0x00000001:
			uVar0 = Vector(0.0f, 0.0f, 0.0f);
			TASK_FOLLOW_AND_ATTACK_OBJECT(&iParam0, &Global_54076, &uVar0, 0, 0, 0, 0, 0, 1);
			break;
		
		case 0x00000002:
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iParam0, -1.0f);
			if (&iParam0 != &uLocal_44[0])
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&iParam0, &bLocal_344, 2, true);
			}
			break;
		
		case 0x00000003:
			TASK_KILL_CHAR(&iParam0, &Global_54076);
			TASK_PRIORITY_SET(&iParam0, 2);
			if (&iParam0 != &uLocal_44[0])
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&iParam0, &bLocal_344, 2, true);
			}
			break;
		
		case 0x00000004:
			TASK_KILL_CHAR(&iParam0, &uVar2);
			break;
		
		default:
			LOG_ERROR("Unhandled fightStyle");
			break;
	}
	TASK_PRIORITY_SET(&iParam0, bParam3);
	Function_401(&iParam0, 15);
	return 1;
}

var Function_398(int iParam0) //Position: 0x167BA / 92090
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_target"));
}

void Function_399(int iParam0, int iParam1) //Position: 0x167DA / 92122
{
	Function_476(&iLocal_286);
	TASK_CLEAR(&iParam0);
	TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 1, 0);
	MEMORY_PREFER_RIDING(&iParam0, false);
	if (!IS_ACTOR_HOGTIED(&iParam0))
	{
		if (&iParam0 == &uLocal_44[0])
		{
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 169, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
	}
	if (IS_VOLUME_VALID(&iParam1))
	{
		ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iParam0, &iParam1);
	}
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
	if (&iParam0 == &uLocal_44[0])
	{
		AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_400(int iParam0) //Position: 0x16873 / 92275
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return "";
	}
	iVar0 = Function_53(&bLocal_818);
	return &iVar0;
}

void Function_401(int iParam0, bool bParam1) //Position: 0x16892 / 92306
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_state", bParam1);
	return;
}

bool Function_402(int iParam0) //Position: 0x168B1 / 92337
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_lookout");
	}
	return 0;
}

int Function_403(int iParam0) //Position: 0x168DA / 92378
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_state");
}

void Function_404(struct<2> Param0) //Position: 0x168F6 / 92406
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Param0, StackVal);
	if (IS_ATTACHMENT_VALID(&iLocal_826))
	{
		REMOVE_OBJECT_ATTACHMENT(&iLocal_826);
	}
	VNORMALIZE(&Var0);
	if (VMAG(Var0) > 15.0f)
	{
		VSCALE(&Var0, (VMAG(Var0) / 2.0f));
	}
	else
	{
		VSCALE(&Var0, 15.0f);
	}
	Local_823 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Global_54078, StackVal);
	SET_OBJECT_POSITION_ON_GROUND(GET_OBJECT_FROM_VOLUME(&bLocal_344), Local_823);
	return;
}

int Function_405(struct<2> Param0) //Position: 0x16968 / 92520
{
	if (Global_6634 == 0)
	{
		if (VDIST(Param0, Global_54078) < 280.0f && !WOULD_ACTOR_BE_VISIBLE(0, &Param0, 3212836864))
		{
			Function_548(&Global_39906 + 8, 256);
			return 1;
		}
		if ((VDIST(Param0, Global_54078) < 220.0f && Function_475(&iLocal_310, 25.0f)) && iLocal_415 != 1)
		{
			iLocal_415 = 0;
			Function_476(&iLocal_310);
			Function_449(&Local_539, 1);
			if (IS_ACTOR_HOGTIED(&(uLocal_44[0])))
			{
				Function_448(&Local_539, "npm_bh_es3", 1);
			}
			else
			{
				Function_448(&Local_539, "npm_bh_es2", 1);
			}
		}
		else if (VDIST(Param0, Global_54078) > 220.0f)
		{
			iLocal_415 = 1;
		}
	}
	return 0;
}

int Function_406(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x16A33 / 92723
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_395(&iParam0, &Global_54076);
		if (!Function_549(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_407(&iParam0);
				return 1;
			}
		}
		if (!Function_549(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_407(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_407(&iParam0);
				return 1;
			}
		}
		if (!Function_549(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_407(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_407(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_549(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_407(&iParam0);
				return 1;
			}
		}
		if (!Function_549(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_407(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_407(int iParam0) //Position: 0x16BFC / 93180
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_408(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_408(var uParam0) //Position: 0x16C39 / 93241
{
	SAY_SINGLE_LINE_CONTEXT(&uParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_409() //Position: 0x16C52 / 93266
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	var uVar14;
	int iVar16;
	var uVar17;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	
	if (Global_99472 != iLocal_843)
	{
		iLocal_843 = Global_99472;
		iVar1 = 0;
		while (iVar1 < (bLocal_263 - 1))
		{
			if (IS_ACTOR_VALID(&(uLocal_44[iVar1])))
			{
				Function_411(&(uLocal_44[iVar1]));
				if ((Global_99472 != 16 || Global_99472 != 32) || Global_99472 != 1)
				{
					SET_ACTOR_VISION_MAX_RANGE(&(uLocal_44[iVar1]), (GET_ACTOR_VISION_MAX_RANGE(&(uLocal_44[iVar1])) / 2.0f), 1);
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < (bLocal_263 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_44[iVar1])))
		{
			if (!Function_410())
			{
				if (MEMORY_GET_WAS_VISIBLE_WITHIN_TIME(&(uLocal_44[iVar1]), &Global_54076, 1.0f) && MEMORY_GET_IS_IDENTIFIED(&(uLocal_44[iVar1]), &Global_54076))
				{
					GET_ACTOR_VELOCITY(&Global_54076, &uVar14);
					if (iVar1 == 0)
					{
						if (Function_395(&(uLocal_44[0]), &Global_54076) > 10.0f)
						{
							return 1;
						}
					}
					if (Function_395(&(uLocal_44[iVar1]), &Global_54076) > 4.0f)
					{
						return 1;
					}
					iVar0 = 1;
					Function_401(&(uLocal_44[iVar1]), 3);
				}
			}
			if (Function_403(&(uLocal_44[iVar1])) != 3 || Function_403(&(uLocal_44[iVar1])) != 4)
			{
				uVar3[iVar2] = &uLocal_44[iVar1];
				iVar2++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		if (iVar2 >= 0)
		{
			iVar16 = 0;
			if (Function_475(&iLocal_322, fLocal_334))
			{
				Function_476(&iLocal_322);
				fLocal_334 = RAND_FLOAT_RANGE(2.0f, 4.0f);
				iVar16 = 1;
			}
			uVar17 = &uVar3[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
			if (Function_475(&iLocal_314, 10.0f))
			{
				return 1;
			}
			if (iVar16 == 1)
			{
				if (Function_475(&iLocal_314, (2.0f * 2.0f)))
				{
					SAY_SINGLE_LINE_CONTEXT(&uVar17, 96, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_475(&iLocal_314, (1.0f * 2.0f)))
				{
					SAY_SINGLE_LINE_CONTEXT(&uVar17, 105, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_475(&iLocal_314, (0.0f * 2.0f)))
				{
					if (Function_389())
					{
						SAY_SINGLE_LINE_CONTEXT(&uVar17, 57, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&uVar17, 105, Function_17(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					}
				}
			}
		}
		Function_476(&iLocal_318);
	}
	else
	{
		if (iVar2 >= 0)
		{
			if (Function_475(&iLocal_318, 3.0f))
			{
				iVar1 = 0;
				while (iVar1 < (bLocal_263 - 1))
				{
					if (IS_ACTOR_VALID(&(uLocal_44[iVar1])))
					{
						Function_401(&(uLocal_44[iVar1]), 1);
					}
					iVar1++;
				}
				Function_476(&iLocal_314);
			}
		}
		else
		{
			iLocal_268 = (iLocal_268 + 1 % bLocal_263);
			if (IS_ACTOR_VALID(&(uLocal_44[iLocal_268])))
			{
				Function_54(&(uLocal_44[iLocal_268]));
				Var18 = Function_54(&(uLocal_44[iLocal_268]));
				if (VDIST(Global_54078, Var18) > 100.0f && VDIST(Global_54078, Var18) < 20.0f)
				{
					iVar21 = (RAND_INT_RANGE(0, 1000) % 4);
					if (iVar21 == 0)
					{
						iVar20 = 0;
					}
					else if (iVar21 == 1)
					{
						iVar20 = 5;
					}
					else if (iVar21 == 2)
					{
						iVar20 = 8;
					}
					else
					{
						iVar20 = 7;
					}
					if (Function_475(&iLocal_326, RAND_FLOAT_RANGE(10.0f, 20.0f)))
					{
						AUDIO_PLAY_VOCAL_EFFECT(&(uLocal_44[iLocal_268]), iVar20, 0);
						Function_476(&iLocal_326);
					}
				}
			}
		}
		Function_476(&iLocal_314);
	}
	return 0;
}

bool Function_410() //Position: 0x16F71 / 94065
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_42825 == 4)
	{
		if (iLocal_335 == 5)
		{
			iVar0 = 1;
		}
	}
	else if (Global_42825 == 5)
	{
		if (iLocal_335 == 6)
		{
			iVar0 = 1;
		}
	}
	else if (Global_42825 == 6)
	{
		if (iLocal_335 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (Global_42825 == 7)
	{
		if (iLocal_335 == 4)
		{
			iVar0 = 1;
		}
	}
	else if (Global_42825 == 8)
	{
		if (iLocal_335 == 2)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_411(var uParam0) //Position: 0x16FDE / 94174
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		bVar0 = GET_ACTOR_ENUM(&uParam0);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("tmpBH") };
		iVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_535, &cLocal_270, bVar0, Vector(100.0f, 100.0f, 100.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&iVar1))
		{
			SET_ACTOR_VISION_MAX_RANGE(&uParam0, GET_ACTOR_VISION_MAX_RANGE(&iVar1), 1);
			DESTROY_ACTOR(&iVar1);
		}
	}
	return;
}

bool Function_412(int iParam0) //Position: 0x17046 / 94278
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar4;
	var uVar5;
	
	strcpy(&cLocal_270, "bountyTargetSquad", 32);
	cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574(&cLocal_270) };
	uLocal_366 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_535, &cLocal_270));
	if (!IS_VOLUME_VALID(&uLocal_342))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_342))
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_342, 15);
	}
	if (IS_OBJECT_VALID(&uLocal_422))
	{
		GET_OBJECT_POSITION(&uLocal_422, &Var1);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhWandVol") };
		bLocal_344 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_535, &cLocal_270, 0f, Var1, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhIntVol") };
		uLocal_346 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Var1, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
		Function_464(1);
	}
	else
	{
		LOG_ERROR("BountyHunter Problem: No Interest Point found at create time.");
	}
	Function_420();
	if (!Function_418(iParam0))
	{
		LOG_ERROR("Problem creating the landmark. Note destination and tell scripter.");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		uVar3 = "";
		if (IS_OBJECT_VALID(&uLocal_422) && iVar0 != 0)
		{
			Function_44(&uLocal_422);
			Var1 = Function_44(&uLocal_422);
			uVar3 = Function_417(StackVal, &bLocal_814, Var1, 0.0f, 0x42960000);
		}
		else if (Function_402(&(uLocal_44[iVar0])))
		{
			uVar3 = Function_53(&bLocal_818);
		}
		else
		{
			uVar3 = Function_53(&bLocal_814);
		}
		if (IS_OBJECT_VALID(&uVar3))
		{
			GET_OBJECT_POSITION(&uVar3, &Var1);
			uVar4 = GET_GRINGO_FROM_OBJECT(&uVar3);
			if (iVar0 == 0)
			{
				if (bLocal_446 == Global_46760[11])
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &(uLocal_44[iVar0]), Vector(-2825,708f, 20,078f, 3070,546f), 26,993f, 1, 1, 1);
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&(uLocal_44[iVar0]), Var1, GET_OBJECT_HEADING(&uLocal_422), 1, 1, 1);
				}
			}
			else if (IS_GRINGO_VALID(&uVar4))
			{
				TELEPORT_ACTOR_WITH_HEADING(&(uLocal_44[iVar0]), Var1, GET_OBJECT_HEADING(&uVar3), 1, 1, 1);
			}
			else
			{
				Function_416();
				Var1 = Function_416();
				TELEPORT_ACTOR(&(uLocal_44[iVar0]), &Var1, 1, 1, 1);
				strcpy(&cLocal_270, "BH snap:", 32);
				stradd(&cLocal_270, VECTOR_TO_STRING(&Var1), 32);
				PRINTSTRING(&cLocal_270);
				PRINTNL();
			}
		}
		else
		{
			Function_416();
			Var1 = Function_416();
			TELEPORT_ACTOR(&(uLocal_44[iVar0]), &Var1, 1, 1, 1);
			LOG_ERROR("Invalid bounty hunter gringo??");
		}
		uVar5 = GET_ACTORS_HORSE(&(uLocal_44[iVar0]));
		if (IS_ACTOR_VALID(&uVar5))
		{
			uVar3 = Function_53(&bLocal_816);
			if (IS_OBJECT_VALID(&uVar3))
			{
				GET_OBJECT_POSITION(&uVar3, &Var1);
				uVar4 = GET_GRINGO_FROM_OBJECT(&uVar3);
				if (IS_GRINGO_VALID(&uVar4))
				{
					TELEPORT_ACTOR_WITH_HEADING(&uVar5, Var1, GET_OBJECT_HEADING(&uVar3), 1, 1, 1);
					SNAP_ACTOR_TO_GRINGO(&uVar5, &uVar3, "UseCase1", true, 0, 0);
				}
				else
				{
					Function_416();
					Var1 = Function_416();
					TELEPORT_ACTOR(&uVar5, &Var1, 1, 1, 1);
					strcpy(&cLocal_270, "Bounty horse snapped near ", 32);
					stradd(&cLocal_270, VECTOR_TO_STRING(&Var1), 32);
					PRINTSTRING(&cLocal_270);
					PRINTNL();
				}
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar3, &bLocal_816);
			}
			else
			{
				Function_416();
				Var1 = Function_416();
				TELEPORT_ACTOR(&uVar5, &Var1, 1, 1, 1);
				LOG_ERROR("Invalid bounty horse gringo??");
			}
		}
		iVar0++;
	}
	Function_415(&uLocal_366, &Global_54076, 2);
	Function_414(&uLocal_366, &uLocal_366, 0);
	Function_413(&uLocal_366, 0, 3);
	Local_539.f_920 = GET_ACTOR_FACTION(&(uLocal_44[0]));
	iLocal_826 = ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&bLocal_344), GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), Function_42(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	Function_464(1);
	return 1;
}

void Function_413(var uParam0, int iParam1, bool bParam2) //Position: 0x17497 / 95383
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
				TASK_DRAW_HOLSTER_WEAPON(&uVar1, iParam1);
				TASK_PRIORITY_SET(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_414(var uParam0, var uParam1, bool bParam2) //Position: 0x174EE / 95470
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			Function_415(&uParam1, &iVar1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_415(var uParam0, int iParam1, bool bParam2) //Position: 0x17542 / 95554
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
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
			MEMORY_IDENTIFY(&uVar1, &iParam1);
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(&iParam1, &uVar1);
				MEMORY_CONSIDER_AS(&iParam1, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

struct<8> Function_416() //Position: 0x175BF / 95679
{
	struct<2> Var0;
	struct<9> Var2;
	
	if (IS_OBJECT_VALID(&uLocal_422))
	{
		GET_OBJECT_POSITION(&uLocal_422, &vVar2);
	}
	else if (IS_VOLUME_VALID(&bLocal_344))
	{
		GET_VOLUME_CENTER(&bLocal_344, &vVar2);
		FIND_GROUND_INTERSECTION(&vVar2, 50.0f, &vVar2, &uVar4);
	}
	else
	{
		GET_VOLUME_CENTER(&uLocal_342, &vVar2);
		LOG_ERROR("BountyHunter had to use the target volume. Tell the scripter the location.");
	}
	if (!Function_436(StackVal, vVar2))
	{
		AMBIENT_SET_SEARCH_CENTER(vVar2);
		AMBIENT_SET_DISTANCE_FILTER(1.0f, 20.0f);
		if (AMBIENT_GET_POINT(&Var0, 0))
		{
			return StackVal, Var0;
		}
		Var0 = Vector((vVar2.x + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar2.y + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar2.z + RAND_FLOAT_RANGE(0.0f, 5.0f)));
	}
	return StackVal, Var0;
}

var Function_417(var uParam0, struct<2> Param1, float fParam3, float fParam4) //Position: 0x176AA / 95914
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	bool bVar6;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(&uParam0) < 0)
	{
		return "";
	}
	bVar6 = false;
	while (bVar6 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uParam0);
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Param1, Var4);
		if ((bVar2 >= bVar3 && bVar2 <= &fParam3) && bVar2 >= &fParam4)
		{
			bVar3 = bVar2;
			uVar1 = &fVar0;
		}
		bVar6++;
	}
	return &uVar1;
}

bool Function_418(int iParam0) //Position: 0x17738 / 96056
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (IS_VOLUME_VALID(&uLocal_342))
	{
		GET_VOLUME_CENTER(&uLocal_342, &Var0);
	}
	cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bountyGrgs") };
	bLocal_814 = CREATE_OBJECTSET_IN_LAYOUT(&cLocal_270, &uLocal_535, 4294967295, 1);
	cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nhorseGrgs") };
	bLocal_816 = CREATE_OBJECTSET_IN_LAYOUT(&cLocal_270, &uLocal_535, 4294967295, 1);
	cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nlkoutGrgs") };
	bLocal_818 = CREATE_OBJECTSET_IN_LAYOUT(&cLocal_270, &uLocal_535, 4294967295, 1);
	if ((!IS_OBJECTSET_VALID(&bLocal_814) || !IS_OBJECTSET_VALID(&bLocal_816)) || !IS_OBJECTSET_VALID(&bLocal_818))
	{
	}
	uVar6 = CREATE_OBJECT_ITERATOR(&uLocal_535);
	uVar7 = Function_368(iParam0);
	if (IS_LAYOUTREF_VALID(&uVar7))
	{
		ITERATE_IN_LAYOUT(&uVar6, &uVar7);
	}
	else
	{
		LOG_ERROR("Could not locate region layout");
		return 0;
	}
	if (IS_ITERATOR_VALID(&uVar6))
	{
		PRINTSTRING("Count after destroying/recreating the iterator: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(&uVar6));
		PRINTNL();
		ITERATE_ON_OBJECT_TYPE(&uVar6, 12);
		PRINTSTRING("Count after iterating on the gringo object type: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(&uVar6));
		PRINTNL();
		ITERATE_IN_VOLUME(&uVar6, &Global_44085[bLocal_4469] + 8);
		PRINTSTRING("Count after iterating on the specified volume: ");
		PRINTINT(GET_NUM_ITERATOR_MATCHES(&uVar6));
		PRINTNL();
		uVar5 = START_OBJECT_ITERATOR(&uVar6);
		while (IS_OBJECT_VALID(&uVar5))
		{
			PRINTSTRING("Gringo name: ");
			PRINTSTRING(GET_OBJECT_MODEL_NAME(&uVar5));
			PRINTNL();
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar5), 0);
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar5), "horse"))
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar5, &bLocal_816);
			}
			else if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar5), "lookdistance"))
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar5, &bLocal_818);
			}
			else
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar5, &bLocal_814);
			}
			uVar5 = OBJECT_ITERATOR_NEXT(&uVar6);
		}
	}
	else
	{
		LOG_ERROR("Could not create bountyHunterGringoIterator for gringos");
	}
	if (IS_ITERATOR_VALID(&uVar6))
	{
		DESTROY_ITERATOR(&uVar6);
	}
	uVar6 = CREATE_OBJECT_ITERATOR(&uLocal_535);
	if (IS_ITERATOR_VALID(&uVar6))
	{
		ITERATE_IN_LAYOUT(&uVar6, &uVar7);
		ITERATE_ON_PARTIAL_NAME(&uVar6, "nf_bhtreas");
		ITERATE_IN_VOLUME(&uVar6, &Global_44085[bLocal_4469] + 8);
		uLocal_424 = Function_419(&uVar6);
		if (IS_OBJECT_VALID(&uLocal_424) && GET_OBJECT_TYPE(&uLocal_424) != 8)
		{
			GET_OBJECT_POSITION(&uLocal_424, &Var0);
			uVar4 = GET_OBJECT_HEADING(&uLocal_424);
			Var2 = Vector(0.0f, uVar4, 0.0f);
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhtreas") };
			uLocal_418 = CREATE_GRINGO_IN_LAYOUT(&uLocal_535, &cLocal_270, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", Var0, Var2);
			if (IS_OBJECT_VALID(&uLocal_418))
			{
				DECOR_SET_INT(&uLocal_418, "GringoDollarAmt", 50);
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
	if (IS_ITERATOR_VALID(&uVar6))
	{
		DESTROY_ITERATOR(&uVar6);
	}
	if (Function_566("npressDemo"))
	{
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhHackVol") };
		CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, Vector(-2148,038f, 18,645f, 4969,773f), Vector(0.0f, -0,2487998f, 0.0f), Vector(9,930986f, 5,74613f, 8,33241f));
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhHackVol") };
		CREATE_OBSTACLE_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, Vector(-2146,112f, 18,645f, 4974,869f), Vector(0.0f, -0,2487998f, 0.0f), Vector(6,154803f, 5,74613f, 4,794247f));
	}
	return 1;
}

var Function_419(var uParam0) //Position: 0x17C1C / 97308
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = GET_NUM_ITERATOR_MATCHES(&uParam0);
	iVar1 = 0;
	uVar2 = "";
	if (iVar0 >= 0)
	{
		iVar1 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar0);
		uVar2 = START_OBJECT_ITERATOR(&uParam0);
		while (iVar1 >= 0)
		{
			iVar1 = (iVar1 - 1);
			uVar2 = OBJECT_ITERATOR_NEXT(&uParam0);
		}
	}
	return &uVar2;
}

int Function_420() //Position: 0x17C70 / 97392
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	var uVar12;
	float fVar13;
	float fVar14;
	
	iVar10 = 1;
	iVar6 = 0;
	while (iVar6 < (bLocal_263 - 1))
	{
		bVar0 = uLocal_102[iVar6];
		if (!Function_330(bVar0) || bVar0 != 0)
		{
			bVar0 = Function_426(8, 0, 0, 4294967295, 1);
		}
		if (!Function_330(iVar1) || iVar1 != 0)
		{
			iVar1 = Function_426(64, 0, 0, 4294967295, 1);
		}
		if (IS_OBJECT_VALID(&uLocal_422))
		{
			GET_OBJECT_POSITION(&uLocal_422, &Var2);
		}
		else
		{
			uVar12 = CREATE_OBJECTSET_IN_LAYOUT(Function_42(), &uLocal_535, 4294967295, 0);
			bVar11 = Function_53(&uVar12);
			if (IS_OBJECT_VALID(&bVar11))
			{
				GET_OBJECT_POSITION(&bVar11, &Var2);
				REMOVE_OBJECT_FROM_OBJECTSET(&bVar11, &uVar12);
			}
			else
			{
				GET_VOLUME_CENTER(&Global_44085[bLocal_4469] + 8, &Var2);
				FIND_GROUND_INTERSECTION(&Var2, 40.0f, &Var2, &uVar4);
			}
			DESTROY_OBJECTSET(&uVar12);
		}
		if (iVar6 == 0)
		{
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bntyTarg") };
		}
		else
		{
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bntyFrnd") };
		}
		Var2 = Vector(StackVal, StackVal, (((Var2 + IntToFloat(iVar6 * 1)) + IntToFloat(iVar6 * 1)) + IntToFloat(iVar6 * 1)));
		uLocal_44[iVar6] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_535, &cLocal_270, bVar0, Var2, Vector(0.0f, 0.0f, 0.0f));
		if ((iVar6 % 3) == 2)
		{
			Function_425(&(uLocal_44[iVar6]));
		}
		Function_424(&Global_39906, &(uLocal_44[iVar6]), 4294967295);
		DECOR_SET_BOOL(&(uLocal_44[iVar6]), "bShopDontKill", 1);
		REFERENCE_ACTOR(&(uLocal_44[iVar6]));
		if (iVar6 == 0)
		{
			fVar13 = GET_ACTOR_MAX_HEALTH(&(uLocal_44[0]));
			fVar14 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&(uLocal_44[0]));
			SET_ACTOR_MAX_HEALTH(&(uLocal_44[0]), (fVar13 * 1,8f));
			SET_ACTOR_HEALTH(&(uLocal_44[0]), (fVar13 * 1,8f));
			fVar14 = (fVar14 * 1,6f);
			Function_423(&(uLocal_44[0]), fVar14, 0x40400000, 0x40000000);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&(uLocal_44[0]), 2.0f, 4.0f);
		}
		else
		{
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&(uLocal_44[iVar6]), 3.0f, 5.0f);
		}
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uLocal_44[iVar6]), 1);
		if (!IS_ACTOR_VALID(&(uLocal_44[iVar6])))
		{
			return 0;
		}
		Function_401(&(uLocal_44[iVar6]), 0);
		Function_366(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar6])));
		if (iVar6 == 0)
		{
			Function_422(&bVar7, 1);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar6])), "LootType", bVar7);
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("stayaway") };
			uLocal_350 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 0f, Vector(1.0f, 1.0f, 1.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_350), GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), Function_42(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			iVar9 = GET_ACTOR_FACTION(&(uLocal_44[iVar6]));
			Function_421(&Local_539, iVar9);
		}
		if ((iVar10 != 1 && (iVar6 % 3) == 2) && iVar8 > 4)
		{
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bountyHorse") };
			iLocal_66[iVar8] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_535, &cLocal_270, uLocal_124[iVar8], Var2, Vector(0.0f, 0.0f, 0.0f));
			if (!IS_ACTOR_VALID(&(iLocal_66[iVar8])))
			{
				return 0;
			}
			ACCESSORIZE_HORSE(&(iLocal_66[iVar8]), 3);
			Function_366(GET_OBJECT_FROM_ACTOR(&(iLocal_66[iVar8])));
			if (IS_ACTOR_VALID(&(iLocal_66[iVar8])))
			{
				SET_ACTORS_HORSE(&(uLocal_44[iVar6]), &(iLocal_66[iVar8]));
			}
			iVar8++;
		}
		else
		{
			iVar10 = 1;
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_44[iVar6]));
		if (iVar6 == 0)
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_44[iVar6]), &uLocal_346);
		}
		else
		{
			if (!Function_402(&(uLocal_44[iVar6])))
			{
				ADD_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_44[iVar6]), &bLocal_344);
			}
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uLocal_44[iVar6]), &uLocal_350);
		}
		SET_ACTOR_VOLUME_PARAMETERS(&(uLocal_44[iVar6]), 1, 0);
		SQUAD_JOIN(&(uLocal_44[iVar6]), &uLocal_366);
		SET_ACTOR_FACTION(&(uLocal_44[iVar6]), iVar9);
		iVar6++;
	}
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uLocal_44[0]), 0,1f);
	return 1;
}

void Function_421(struct<921> Param0) //Position: 0x1803F / 98367
{
	Param0.f_920 = iParam1;
	return;
}

int Function_422(var uParam0, int iParam1) //Position: 0x1804D / 98381
{
	uParam0 = (uParam0 || iParam1);
	return 1;
}

void Function_423(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1805F / 98399
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_424(struct<13> Param0) //Position: 0x180B0 / 98480
{
	float fVar0;
	
	fVar0 = 0,5f;
	switch (Param0.f_12)
	{
		case 0x00000001:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 40;
			}
			fVar0 = 0,6f;
			break;
		
		case 0x00000002:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 40;
			}
			fVar0 = 0,7f;
			break;
		
		case 0x00000003:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 39;
			}
			fVar0 = 0,8f;
			break;
		
		case 0x00000004:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 42;
			}
			fVar0 = 0,9f;
			break;
		
		case 0x00000005:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 41;
			}
			fVar0 = 1.0f;
			break;
		
		case 0x00000006:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 41;
			}
			fVar0 = 1.0f;
			break;
		
		case 0x00000000:
		default:
			if (&iParam2 != 4294967295)
			{
				iParam2 = 42;
			}
			fVar0 = 0,7f;
			break;
	}
	GIVE_WEAPON_TO_ACTOR(&iParam1, &iParam2, fVar0, 1, 1);
	return;
}

void Function_425(int iParam0) //Position: 0x18190 / 98704
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_lookout", 1);
	}
	return;
}

int Function_426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x181B9 / 98745
{
	return Function_427(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_427(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x181D6 / 98774
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_430(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_430(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_430(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_430(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_430(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_430(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_430(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_430(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_430(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_430(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_430(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_430(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_430(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_430(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_428(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_428(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x18439 / 99385
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_429(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_429(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_429(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_429(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_429(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_429(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_429(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_429(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_429(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_429(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_429(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_429(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_429(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_429(&(Global_46972[13]), &bVar0);
	}
	return Function_430(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_429(var uParam0, bool bParam1) //Position: 0x185A8 / 99752
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_430(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x1866C / 99948
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_435();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_330(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_434(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_434(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_433(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_330(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_433(iVar0))
				{
					Function_432();
				}
				Function_431(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_330(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_431(int iParam0) //Position: 0x18965 / 100709
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_432() //Position: 0x18A19 / 100889
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_433(int iParam0) //Position: 0x18A54 / 100948
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_434(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x18A81 / 100993
{
	int iVar0;
	
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_435() //Position: 0x18BDC / 101340
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_432();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_432();
	return;
}

bool Function_436(char* cParam0) //Position: 0x18C28 / 101416
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_437(int iParam0) //Position: 0x18C40 / 101440
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	
	iVar0 = 1;
	if (!IS_OBJECT_VALID(&uLocal_422))
	{
		PRINTSTRING("Current region name: ");
		PRINTSTRING(GET_OBJECT_NAME(&Global_44085[Global_437889] + 8));
		PRINTNL();
		uVar5 = CREATE_OBJECT_ITERATOR(&uLocal_535);
		uVar6 = Function_368(iParam0);
		if (IS_LAYOUTREF_VALID(&uVar6))
		{
			ITERATE_IN_LAYOUT(&uVar5, &uVar6);
		}
		else
		{
			LOG_ERROR("Could not locate region layout");
			return 0;
		}
		Function_439(bLocal_446);
		Var1 = Function_439(bLocal_446);
		Var1.f_4 = (StackVal - 10.0f);
		Var3 = Vector(0.0f, 0.0f, 0.0f);
		cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhSearchVol") };
		uLocal_338 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uLocal_535, &cLocal_270, 4,203895E-45f, Var1, Var3, Vector(50.0f, 60.0f, 50.0f));
		if (IS_ITERATOR_VALID(&uVar5))
		{
			ITERATE_ON_PARTIAL_NAME(&uVar5, "f_bhint");
			ITERATE_IN_VOLUME(&uVar5, &uLocal_338);
			uLocal_422 = Function_438(StackVal, &uVar5, Global_54078);
			if (!IS_OBJECT_VALID(&uLocal_422))
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
	if (IS_ITERATOR_VALID(&uVar5))
	{
		DESTROY_ITERATOR(&uVar5);
	}
	return iVar0;
}

var Function_438(var uParam0, struct<2> Param1) //Position: 0x18DF3 / 101875
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	bVar4 = -1.0f;
	iVar5 = "";
	iVar6 = "";
	iVar2 = GET_NUM_ITERATOR_MATCHES(&uParam0);
	if (iVar2 >= 0)
	{
		iVar5 = START_OBJECT_ITERATOR(&uParam0);
		while (IS_OBJECT_VALID(&iVar5))
		{
			GET_OBJECT_POSITION(&iVar5, &Var0);
			bVar3 = VDIST(Param1, Var0);
			if (bVar3 < bVar4)
			{
				bVar4 = bVar3;
				iVar6 = &iVar5;
			}
			iVar5 = OBJECT_ITERATOR_NEXT(&uParam0);
		}
	}
	return &iVar6;
}

struct<8> Function_439(bool bParam0) //Position: 0x18E60 / 101984
{
	struct<2> Var0;
	
	if (bParam0 == Global_46926[5])
	{
		Var0 = Vector(-1043,829f, 183,985f, 1371,714f);
	}
	else if (bParam0 == Global_46866[3])
	{
		Var0 = Vector(-2234,426f, 23,091f, 4454,898f);
	}
	else if (bParam0 == Global_46926[6])
	{
		Var0 = Vector(-482,365f, 143,447f, 1908,17f);
	}
	else if (bParam0 == Global_46816[3])
	{
		Var0 = Vector(-490,208f, 20,103f, 3023,158f);
	}
	else if (bParam0 == Global_46760[13])
	{
		Var0 = Vector(-1945,125f, 30,262f, 3469,187f);
	}
	else if (bParam0 == Global_46866[7])
	{
		Var0 = Vector(-2726,75f, 55,867f, 4619,704f);
	}
	else if (bParam0 == Global_46760[6])
	{
		Var0 = Vector(-1912,426f, 29,225f, 2261,395f);
	}
	else if (bParam0 == Global_46866[10])
	{
		Var0 = Vector(-1756,155f, 30,369f, 4819,779f);
	}
	else if (bParam0 == Global_46866[8])
	{
		Var0 = Vector(-1445,059f, 19,691f, 4909,378f);
	}
	else if (bParam0 == Global_46760[11])
	{
		Var0 = Vector(-2829.0f, 20,079f, 3076,999f);
	}
	else if (bParam0 == Global_46816[6])
	{
		Var0 = Vector(-1269,727f, 109,427f, 2762,885f);
	}
	else if (bParam0 == Global_46926[3])
	{
		Var0 = Vector(-733,172f, 228,751f, 1129,988f);
	}
	else if (bParam0 == Global_46850[5])
	{
		Var0 = Vector(-3384,816f, 55,788f, 4746,955f);
	}
	else if (bParam0 == Global_46866[9])
	{
		Var0 = Vector(-1200,055f, 19,075f, 4964,34f);
	}
	else if (bParam0 == Global_46866[11])
	{
		Var0 = Vector(-1147,715f, 27,988f, 4820,093f);
	}
	else if (bParam0 == Global_46760[7])
	{
		Var0 = Vector(-2868,86f, 74,342f, 2178,624f);
	}
	else if (bParam0 == Global_46838[3])
	{
		Var0 = Vector(-3140,568f, 44,538f, 3284,213f);
	}
	else if (bParam0 == Global_46866[4])
	{
		Var0 = Vector(-1361,188f, 13,056f, 4299,818f);
	}
	else if (bParam0 == Global_46796[7])
	{
		Var0 = Vector(-4016,218f, 21,468f, 2398,236f);
	}
	else if (bParam0 == Global_46926[4])
	{
		Var0 = Vector(-844,503f, 189,827f, 1577,429f);
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(&Global_44085[bParam09] + 8, &Var0);
	}
	return StackVal, Var0;
}

void Function_440(struct<1093> Param0) //Position: 0x19179 / 102777
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_240(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_436(StackVal, Param3))
	{
		(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_548(&Param0 + 1048, 4);
	}
	else
	{
		Function_67(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_75(Param0.f_1092))
		{
			Function_447(Param0.f_1092, 1);
			Function_548(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_548(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_442(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_441(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_476(&Param0 + 1032);
	}
	Function_476(&Param0 + 60);
	Function_58(0);
}

void Function_441(var uParam0, bool bParam1) //Position: 0x192F0 / 103152
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
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_442(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5) //Position: 0x19337 / 103223
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_445(10.0f);
	Var12 = { StackVal, Function_445(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_330(&iParam4) || &iParam4 != 0)
		{
			bVar14 = Function_426(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &iParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_443(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_443(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_443(vector3 vParam0) //Position: 0x19431 / 103473
{
	struct<2> Var0;
	
	if (!Function_444(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, iParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_444(int iParam0) //Position: 0x1957E / 103806
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_445(int iParam0) //Position: 0x195A2 / 103842
{
	Function_446(iParam0, 10);
	return StackVal, Function_446(iParam0, 10);
}

struct<8> Function_446(var uParam0, int iParam1) //Position: 0x195AF / 103855
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_447(int iParam0, int iParam1) //Position: 0x195CA / 103882
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_270(iParam0))
	{
		Function_255();
		return;
	}
	iVar0 = Function_254(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_527(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_253(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

var Function_448(int iParam0, struct<4> Param1) //Position: 0x19671 / 104049
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&iParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&iParam0 + 76[iVar24], &Param1, 16);
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
	if (!IS_STRING_VALID(&Param1))
	{
		iVar0 = 0;
	}
	strcpy(&iParam0 + 76[iVar24], &Param1, 16);
	(*&iParam0 + 184)[iVar2] = 0;
	(*&iParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

void Function_449(struct<181> Param0) //Position: 0x196F3 / 104179
{
	int iVar0;
	
	if (&bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_76 - 1))
	{
		strcpy(&Param0 + 76[iVar04], "", 16);
		(*&Param0 + 184)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_180 = 0;
	return;
}

bool Function_450(struct<1049> Param0) //Position: 0x19741 / 104257
{
	if (Function_549(Param0.f_1048, 1024))
	{
		return 1;
	}
	return 0;
}

int Function_451(var uParam0, int iParam1) //Position: 0x1975C / 104284
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_453(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_452(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_452(int iParam0, var uParam1, struct<2> Param2) //Position: 0x198C6 / 104646
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_453(int iParam0) //Position: 0x1996E / 104814
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_456(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_454(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_456(iVar0);
						}
					}
					else if (Function_454(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_456(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_456(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_454(var uParam0, struct<2> Param1) //Position: 0x19ADC / 105180
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_455(&uParam0);
		Var0 = Function_455(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_455(int iParam0) //Position: 0x19B53 / 105299
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_456(int iParam0) //Position: 0x19BBF / 105407
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

struct<8> Function_457(var uParam0) //Position: 0x19C27 / 105511
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_458() //Position: 0x19C39 / 105529
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_439(bLocal_446);
	Var2 = Function_439(bLocal_446);
	Function_472(StackVal, StackVal, Global_54078, Var2, &Var0);
	if (Function_459(&(Global_43791[Global_43788]), 32) && VMAG(Var0) > 100.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_459(var uParam0, int iParam1) //Position: 0x19C77 / 105591
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_460(int iParam0) //Position: 0x19C94 / 105620
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_565(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar0 = iParam0;
		}
		else if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 6 != 5) != 3) != 4) != 7)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			LOG_ERROR("GET_DISTRICT_FROM_REGION - This area type needs to be defined");
			iVar0 = Global_44085[iParam09];
		}
	}
	return iVar0;
}

int Function_461(int iParam0) //Position: 0x19D6A / 105834
{
	return Function_462(iParam0);
}

int Function_462(int iParam0) //Position: 0x19D75 / 105845
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_565(iParam0))
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

bool Function_463() //Position: 0x19DCD / 105933
{
	if (!Function_375(&iLocal_146))
	{
		return 0;
	}
	return 1;
}

void Function_464(int iParam0) //Position: 0x19DDF / 105951
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (IS_BLIP_VALID(&uLocal_430))
	{
		REMOVE_BLIP(&uLocal_430);
	}
	if (IS_BLIP_VALID(&uLocal_432))
	{
		REMOVE_BLIP(&uLocal_432);
	}
	iVar0 = 1;
	while (iVar0 < (bLocal_263 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0]))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0])));
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (IS_VOLUME_VALID(&uLocal_348))
		{
			uLocal_432 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(&uLocal_348), 330, -1.0f, 3, 0);
			SET_BLIP_PRIORITY(&uLocal_432, 3);
		}
		switch (iLocal_269)
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				if (IS_VOLUME_VALID(&uLocal_350))
				{
					uLocal_430 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_350), 392, -1.0f, 3, 0);
					SET_BLIP_PRIORITY(&uLocal_430, 3);
				}
				else if (IS_VOLUME_VALID(&uLocal_342))
				{
					GET_VOLUME_CENTER(&uLocal_342, &uVar3);
					uLocal_430 = ADD_BLIP_FOR_COORD(&uVar3, 392, 0, 2, 0);
					SET_BLIP_PRIORITY(&uLocal_430, 3);
				}
				if (IS_BLIP_VALID(&uLocal_430) && iLocal_835 != 0)
				{
					SET_BLIP_BLINK(&uLocal_430, 1, 0, 5f);
					Function_476(&iLocal_294);
					iLocal_835 = 1;
				}
				uVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
				SET_BLIP_NAME(&uLocal_430, &uVar1);
				break;
			
			case 0x00000005:
				Function_415(&uLocal_366, &Global_54076, 4);
			
			case 0x00000004:
			case 0x00000006:
			case 0x00000009:
				if (iLocal_379 == 1)
				{
					iVar0 = 1;
					while (iVar0 < (bLocal_263 - 1))
					{
						if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
						{
							if (IS_ACTOR_ALIVE(&(uLocal_44[iVar0])))
							{
								if (iLocal_384[iVar0] != 0 && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0]))))
								{
									uVar2 = ADD_BLIP_FOR_ACTOR(&(uLocal_44[iVar0]), 322, 0, 2, 0);
									SET_BLIP_MAX_DISTANCE(&uVar2, 1,25f);
								}
							}
						}
						iVar0++;
					}
				}
				if (iLocal_411 == 0)
				{
					if (IS_ACTOR_VALID(&(uLocal_44[0])))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip", 1);
						}
						if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip") == 1)
						{
							uLocal_430 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_350), 392, -1.0f, 3, 0);
							SET_BLIP_PRIORITY(&uLocal_430, 3);
						}
					}
					else if (IS_OBJECT_VALID(&iLocal_444))
					{
						uLocal_430 = ADD_BLIP_FOR_OBJECT(&iLocal_444, 392, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(&uLocal_430, 3);
					}
					if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
					{
						uVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
						if (IS_BLIP_VALID(&uLocal_430))
						{
							SET_BLIP_NAME(&uLocal_430, &uVar1);
						}
					}
					else if (IS_BLIP_VALID(&uLocal_430))
					{
						SET_BLIP_NAME(&uLocal_430, "npm_bh_tnm");
						SET_BLIP_IMPAIRMENT_MASK(&uLocal_430, false);
					}
				}
				break;
			
			case 0x00000008:
				if (iLocal_379 == 1)
				{
					iVar0 = 1;
					while (iVar0 < (bLocal_263 - 1))
					{
						if (IS_ACTOR_VALID(&(uLocal_44[iVar0])))
						{
							if ((IS_ACTOR_ALIVE(&(uLocal_44[iVar0])) && iLocal_384[iVar0] != 0) && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_44[iVar0]))))
							{
								uVar2 = ADD_BLIP_FOR_ACTOR(&(uLocal_44[iVar0]), 322, 0, 2, 0);
								SET_BLIP_MAX_DISTANCE(&uVar2, 1,25f);
							}
						}
						iVar0++;
					}
				}
				if (iLocal_411 == 0)
				{
					if (IS_ACTOR_VALID(&(uLocal_44[0])))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip", 1);
						}
						if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
						{
							if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), "bountyhunter_blip") == 1)
							{
								uLocal_430 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_350), 392, -1.0f, 3, 0);
								uVar1 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
								SET_BLIP_NAME(&uLocal_430, &uVar1);
							}
						}
						else
						{
							uLocal_430 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_350), 392, -1.0f, 3, 0);
							SET_BLIP_PRIORITY(&uLocal_430, 3);
							SET_BLIP_NAME(&uLocal_430, "npm_bh_tnm");
							SET_BLIP_IMPAIRMENT_MASK(&uLocal_430, false);
						}
					}
					else if (IS_OBJECT_VALID(&iLocal_444))
					{
						uLocal_430 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_350), 392, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(&uLocal_430, 3);
						SET_BLIP_NAME(&uLocal_430, "npm_bh_tnm");
						SET_BLIP_IMPAIRMENT_MASK(&uLocal_430, false);
					}
				}
				break;
		}
		Function_465(1, 0x41200000);
	}
	return;
}

void Function_465(int iParam0, int iParam1) //Position: 0x1A279 / 107129
{
	if (!Function_13())
	{
		switch (&iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &iParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &iParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_466(struct<909> Param0) //Position: 0x1A2B3 / 107187
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, *(&Param0 + 8));
	bVar3 = VDIST(Global_54078, *(&Param0 + 20));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_99146 != 1 || Global_6637 != 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_86() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_908 <= Param0.f_756)
	{
		if (STRING_LENGTH(&Param0 + 620[Param0.f_9084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_467() //Position: 0x1A35A / 107354
{
	int iVar0;
	char* cVar1[64];
	
	if (iLocal_813 == 1)
	{
		bLocal_263 = Global_39906.f_16;
		if (bLocal_263 == 0)
		{
			bLocal_263 = 4;
			LOG_ERROR("0 BOUNTY ENEMIES?");
		}
		if (Function_566("npressDemo"))
		{
			Global_39906.f_16 = 5;
			bLocal_263 = 5;
		}
		strcpy(&cVar1, "bh number of enemies = ", 64);
		stradd(&cVar1, INT_TO_STRING(bLocal_263), 64);
	}
	iLocal_264 = (bLocal_263 - 3);
	if (iLocal_264 <= 0)
	{
		iLocal_264 = 0;
	}
	iLocal_335 = Function_470(Global_39906.f_20);
	iVar0 = 0;
	while (iVar0 < (bLocal_263 - 1))
	{
		if (iVar0 == 0)
		{
			uLocal_102[iVar0] = Global_39906.f_20;
		}
		else if (Function_566("npressDemo"))
		{
			uLocal_102[iLocal_265] = Function_331(Global_39906.f_12, 4, 4294967295);
		}
		else
		{
			uLocal_102[iLocal_265] = Function_331(Global_39906.f_12, iLocal_335, iLocal_265);
		}
		Function_381(&iLocal_146, uLocal_102[iLocal_265], 2, 0);
		iLocal_265++;
		uLocal_124[iVar0] = Function_426(64, 0, 4, 23, 1);
		Function_381(&iLocal_146, uLocal_124[iVar0], 2, 0);
		iLocal_266++;
		iVar0++;
	}
	Function_468(&iLocal_146, "procmissions", 10, 0);
	iLocal_266 = iLocal_266;
	Function_468(&iLocal_146, "stand_hostage", 5, 0);
	Function_468(&iLocal_146, "custom/stand_hostage", 8, 0);
	Function_468(&iLocal_146, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_468(&iLocal_146, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", 1, 0);
	Function_381(&iLocal_146, 1129, 3, 0);
	return;
}

var Function_468(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1A574 / 107892
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_469(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_378(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_469(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1A5B2 / 107954
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_378(&(Param0[iVar02]), 4);
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

int Function_470(int iParam0) //Position: 0x1A681 / 108161
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
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

var Function_471(int iParam0) //Position: 0x1A730 / 108336
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
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

void Function_472(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1A8B0 / 108720
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_473() //Position: 0x1A8D4 / 108756
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	var uVar6;
	struct<2> Var8;
	var uVar10;
	bool bVar11;
	
	switch (iLocal_842)
	{
		case 0x00000000:
			if (iLocal_372 == 1)
			{
				if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
				{
					if (!IS_OBJECT_VALID(&uVar0))
					{
						cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbirdpoint") };
						Function_54(&(uLocal_44[0]));
						Var1 = Function_54(&(uLocal_44[0]));
						uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, &uLocal_535, &cLocal_270, Var1, Vector(0.0f, 0.0f, 0.0f));
						iVar3 = 1;
					}
					if (!SQUAD_IS_VALID(&uLocal_836))
					{
						cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbirdSquad") };
						uLocal_836 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_535, &cLocal_270));
						if (SQUAD_IS_VALID(&uLocal_836))
						{
							Function_442(&uLocal_535, &uLocal_836, 3, &uVar0, 1129, 0x41200000);
							Function_441(&uLocal_836, 0);
						}
					}
					if (iVar3 == 1)
					{
						DESTROY_OBJECT(&uVar0);
					}
					Function_476(&iLocal_838);
					iLocal_842 = 1;
				}
				else
				{
					iLocal_842 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_475(&iLocal_838, 7.0f))
			{
				if (IS_ACTOR_VALID(&(uLocal_44[0])))
				{
					Function_54(&(uLocal_44[0]));
					Var1 = Function_54(&(uLocal_44[0]));
					bVar11 = false;
					while (bVar11 < (SQUAD_GET_SIZE(&uLocal_836) - 1))
					{
						uVar10 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_836, bVar11);
						Var8 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f));
						ROTATE_VECTOR_XZ(&Var8, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
						uVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Var1, StackVal);
						FIND_GROUND_INTERSECTION(&uVar4, 100.0f, &uVar4, &uVar6);
						TASK_BIRD_LAND_AT_COORD(&uVar10, &uVar4);
						bVar11++;
					}
					Function_474(&uLocal_836, 1);
					Function_476(&iLocal_838);
				}
			}
			break;
		
		case 0x00000002:
			Function_9();
			iLocal_842 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_474(var uParam0, bool bParam1) //Position: 0x1AA71 / 109169
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_475(int iParam0, float fParam1) //Position: 0x1AAB2 / 109234
{
	if (Function_134(&iParam0))
	{
		if (Function_132(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_476(int iParam0) //Position: 0x1AAD0 / 109264
{
	Function_477(&iParam0, 0.0f);
	return;
}

void Function_477(vector3 vParam0) //Position: 0x1AADD / 109277
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_548(&vParam0, 1);
	Function_67(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_478(bool bParam0, bool bParam1, int iParam2) //Position: 0x1AB02 / 109314
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_490(bParam0), Function_17()) == 0)
		{
			ADD_ITEM(Function_490(bParam0), Function_17(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_490(bParam0), Function_17(), &iParam2);
	return 1;
}

int Function_479() //Position: 0x1AB50 / 109392
{
	if (!Function_375(&iLocal_146))
	{
		return 0;
	}
	return 1;
}

int Function_480() //Position: 0x1AB62 / 109410
{
	if (Global_6623)
	{
		return 0;
	}
	return 1;
}

void Function_481(bool bParam0, int iParam1, int iParam2) //Position: 0x1AB71 / 109425
{
	if (&iParam2 == 1)
	{
		if (Function_487(&bParam0, &iParam1, &iParam2))
		{
			Function_486(&bParam0);
		}
		else if (Function_485(&bParam0, &iParam1))
		{
			Function_483(&bParam0);
		}
		if (Function_466(&bParam0, &iParam1, &iParam2))
		{
			Function_482(&bParam0);
		}
	}
	else if (Function_487(&bParam0, &iParam1, 0))
	{
		Function_486(&bParam0);
	}
	else if (Function_466(&bParam0, &iParam1, 0))
	{
		Function_482(&bParam0);
	}
	else if (Function_485(&bParam0, &iParam1))
	{
		Function_483(&bParam0);
	}
	return;
}

void Function_482(struct<909> Param0) //Position: 0x1AC00 / 109568
{
	char* cVar0[32];
	
	if (Param0.f_908 <= Param0.f_620)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, &Param0 + 620[Param0.f_9084], 32);
		if ((*&Param0 + 724)[Param0.f_908] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, &Param0 + 620[Param0.f_9084], &Param0 + 756[Param0.f_9086], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_93(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

var Function_483(struct<1049> Param0) //Position: 0x1ACA8 / 109736
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_549(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_484(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_476(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_484(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_476(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_484(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1ADA5 / 109989
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_94(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_485(int iParam0, int iParam1) //Position: 0x1AE2A / 110122
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&iParam0 + 8)) >= VDIST(Global_54078, *(&iParam0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&iParam0 + 400[04]))
	{
		iVar0 = 0;
	}
	else if (Function_86())
	{
		iVar0 = 0;
	}
	else if (Function_475(&iParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_486(struct<181> Param0) //Position: 0x1AED6 / 110294
{
	char* cVar0[32];
	
	if (Param0.f_180 <= Param0.f_76)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, &Param0 + 76[Param0.f_1804], 32);
		if ((*&Param0 + 184)[Param0.f_180] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, &Param0 + 76[Param0.f_1804], &Param0 + 248[Param0.f_1806], "", "", "", "", 0, (*&Param0 + 216)[Param0.f_180], 0, 0);
		}
		else
		{
			Function_315(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

bool Function_487(struct<181> Param0) //Position: 0x1AF8A / 110474
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, *(&Param0 + 8)) >= VDIST(Global_54078, *(&Param0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&Param0 + 76[04]))
	{
		iVar0 = 0;
	}
	else if (Function_86() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_180 <= Param0.f_76)
	{
		if (STRING_LENGTH(&Param0 + 76[Param0.f_1804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_488() //Position: 0x1B04D / 110669
{
	SET_OBJECT_POSITION(StackVal, &uLocal_428, Vector(0.0f, 20.0f, 0.0f));
	return;
}

void Function_489() //Position: 0x1B063 / 110691
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = GET_GAME_CAMERA();
	Var3 = Vector(-0,18683f, -0,296919f, -0,621785f);
	GET_OBJECT_RELATIVE_POSITION(&uVar0, Var3, &Var1);
	GET_OBJECT_ORIENTATION(&uVar0, &Var5);
	SET_OBJECT_POSITION(&uLocal_428, Var1);
	SET_OBJECT_ORIENTATION(&uLocal_428, Var5);
	SET_CAMERA_ASPECT_RATIO(&uVar0, 0.0f);
	SET_CAMERA_FOV(&uVar0, 42,97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uVar0, 0,3f);
	SET_CAMERA_FAR_CLIP_PLANE(&uVar0, 2800.0f);
	SET_CAMERA_COLLISION_PARAMETERS(&uVar0, 0,3f, 1);
	SET_CAMERA_COLLISION_ENABLED(&uVar0, 0);
	RESET_CAMERA_TARGET(&uVar0, 0);
	RESET_CAMERA_TARGETDOF(&uVar0);
	return;
}

var Function_490(bool bParam0) //Position: 0x1B0F8 / 110840
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

int Function_491() //Position: 0x1B1EC / 111084
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	
	if (Function_506())
	{
		uVar0[0] = "BountyHunter Pass";
		uVar0[1] = "BountyHunter Fail";
		uVar0[2] = "BountyHunter Cancel";
		uVar0[3] = "BountyHunter Collect Proof";
		iVar5 = Function_492(&uLocal_436, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_14();
			Function_509(14);
		}
		else if (iVar5 == 1)
		{
			Function_14();
			Function_509(15);
		}
		else if (iVar5 == 2)
		{
			Function_14();
			Function_509(16);
		}
		else if (iVar5 == 3)
		{
			Function_14();
			iVar6 = 0;
			while (iVar6 < (bLocal_263 - 1))
			{
				KILL_ACTOR(&(uLocal_44[iVar6]));
				iVar6++;
			}
			Function_509(10);
			Function_509(8);
			Function_464(1);
		}
		iLocal_262 = 0;
		return 1;
	}
	return 0;
}

var Function_492(struct<17> Param0) //Position: 0x1B307 / 111367
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_505(&Var12, &Var0);
	uVar15 = Function_504(uParam1, &Var12);
	Function_503(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_502(&Param0, uVar15);
	Function_500(StackVal, &Param0, Var12.f_12);
	Function_498(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_497(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_494(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_493(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_493(int iParam0, int iParam1, int iParam2) //Position: 0x1B3FB / 111611
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

bool Function_494(struct<17> Param0) //Position: 0x1B45B / 111707
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
				Function_496(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_496(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_493(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_495(Param1.f_64);
	}
	else
	{
		Function_495(Param1.f_64);
	}
	return 0;
}

void Function_495(bool bParam0) //Position: 0x1B5EE / 112110
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

void Function_496(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x1B62C / 112172
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

var Function_497(int iParam0, struct<21> Param1) //Position: 0x1B6E2 / 112354
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_498(vector3 vParam0) //Position: 0x1B709 / 112393
{
	switch (Function_499())
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

int Function_499() //Position: 0x1B7B5 / 112565
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

void Function_500(vector3 vParam0) //Position: 0x1B7F1 / 112625
{
	switch (Function_501(&vParam0))
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

int Function_501(int iParam0) //Position: 0x1B89A / 112794
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_549(iParam0, 0x40000000))
		{
			Function_548(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_549(iParam0, 0x40000000))
		{
			Function_548(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_67(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_549(iParam0, 0x20000000))
		{
			Function_548(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_549(iParam0, 0x20000000))
		{
			Function_548(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_67(&iParam0, 0x20000000);
	return 0;
}

var Function_502(struct<21> Param0) //Position: 0x1B9BA / 113082
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

void Function_503(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1BB74 / 113524
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

var Function_504(int iParam0, struct<13> Param1) //Position: 0x1BC10 / 113680
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_505(struct<17> Param0) //Position: 0x1BC2C / 113708
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

bool Function_506() //Position: 0x1BC86 / 113798
{
	return Global_47307;
}

int Function_507() //Position: 0x1BC8F / 113807
{
	if (Function_275(StackVal))
	{
		if ((((((*&Global_40060 + 68[0181][75])[3] < iLocal_829 || (*&Global_40060 + 68[0181][225])[3] < iLocal_830) || (*&Global_40060 + 68[0181][125])[3] < iLocal_831) || (*&Global_40060 + 68[1181][75])[3] < iLocal_832) || (*&Global_40060 + 68[1181][225])[3] < iLocal_833) || (*&Global_40060 + 68[1181][125])[3] < iLocal_834)
		{
			return 1;
		}
		iLocal_829 = (*&Global_40060 + 68[0181][75])[3];
		iLocal_830 = (*&Global_40060 + 68[0181][225])[3];
		iLocal_831 = (*&Global_40060 + 68[0181][125])[3];
		iLocal_832 = (*&Global_40060 + 68[1181][75])[3];
		iLocal_833 = (*&Global_40060 + 68[1181][225])[3];
		iLocal_834 = (*&Global_40060 + 68[1181][125])[3];
	}
	return 0;
}

bool Function_508() //Position: 0x1BD88 / 114056
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_40060.f_32 - 1))
	{
		if ((*&Global_40060 + 32)[iVar0] >= 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_509(int iParam0) //Position: 0x1BDB6 / 114102
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	
	iVar1 = 1;
	if (!iLocal_269 != iParam0)
	{
		switch (iParam0)
		{
			case 0x00000001:
				if (IS_VOLUME_VALID(&uLocal_342))
				{
					uVar4 = GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_342));
				}
				if (IS_STRING_VALID(&uVar4) && STRING_LENGTH(&uVar4) < 0)
				{
					Function_524(bLocal_446);
					Function_449(&Local_539, 1);
					if (Function_549(StackVal, 16))
					{
						Function_448(&Local_539, "npm_bh_mt3", 1);
						Function_67(&Global_39906 + 8, 16);
					}
					else
					{
						Function_448(&Local_539, "npm_bh_mt2", 1);
					}
					strcpy(&cLocal_270, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_342)), 32);
					Function_317(&Local_539, &cLocal_270, 0);
				}
				else if (!Function_566("npressDemo"))
				{
					if (Function_523())
					{
						Function_519(&Local_539, "pm_bh_h", 0);
					}
				}
				if (!Function_566("npressDemo"))
				{
					if (Function_523())
					{
						Function_312(&Local_539);
						Function_519(&Local_539, "npm_bh_mt1", 0);
					}
				}
				if (iLocal_813 == 0)
				{
					iLocal_813 = 1;
				}
				break;
			
			case 0x00000004:
				iLocal_379 = 1;
				if (iLocal_380 == 0)
				{
					Function_449(&Local_539, 1);
					if (ACTOR_HAS_WEAPON(&Global_54076, 21) && IS_ACTOR_ALIVE(&(uLocal_44[0])))
					{
						Function_448(&Local_539, "pm_bh_fnd1", 1);
						Function_448(&Local_539, "pm_bh_fnd2", 1);
						if (!Function_566("npressDemo"))
						{
							if (Function_523())
							{
								Function_312(&Local_539);
								Function_519(&Local_539, "pm_bh_lass", 0);
							}
						}
					}
					else
					{
						Function_448(&Local_539, "pm_bh_fnd3", 1);
					}
					iLocal_380 = 1;
					if (iLocal_269 <= 4)
					{
						Function_9();
						Function_516(&Local_539);
						Function_476(&iLocal_286);
						if (IS_BLIP_VALID(&uLocal_430))
						{
							SET_BLIP_BLINK(&uLocal_430, 0, 0, 5f);
						}
					}
				}
				break;
			
			case 0x00000005:
				iLocal_379 = 1;
				iLocal_448 = Function_515();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
				if (IS_BLIP_VALID(&uLocal_430))
				{
					SET_BLIP_BLINK(&uLocal_430, 0, 0, 5f);
				}
				Function_514(1);
				if (IS_OBJECT_VALID(&bLocal_344))
				{
					DESTROY_OBJECT(&bLocal_344);
				}
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("bhWander") };
				if (bLocal_446 == Global_46838[3])
				{
					bLocal_344 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_535, &cLocal_270, 0f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
				}
				else
				{
					bLocal_344 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_535, &cLocal_270, 0f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
				}
				iVar0 = 0;
				while (iVar0 < (bLocal_263 - 1))
				{
					Function_513(&(uLocal_44[iVar0]));
					iVar0++;
				}
				break;
			
			case 0x00000008:
				CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
				APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
				if (iLocal_411 == 1)
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou2", 0, 0, 0);
				}
				else
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou3", 0, 0, 0);
				}
				if (!IS_ACTOR_ALIVE(&(uLocal_44[0])))
				{
					Function_449(&Local_539, 1);
					Function_448(&Local_539, "npm_bh_rtp", 1);
				}
				cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_512(iLocal_448) };
				Function_317(&Local_539, &cLocal_270, 0);
				Function_325();
				Function_476(&iLocal_290);
				break;
			
			case 0x00000009:
				CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
				APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
				APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou2", 0, 0, 0);
				if (!Function_549(StackVal, 32))
				{
					Function_449(&Local_539, 1);
					Function_448(&Local_539, "npm_bh_col", 1);
					if (!Function_566("npressDemo"))
					{
						if (Function_523())
						{
							Function_312(&Local_539);
							Function_519(&Local_539, "pm_bh_colh", 0);
						}
					}
				}
				break;
			
			case 0x0000000A:
				iLocal_411 = 1;
				if (IS_OBJECT_VALID(&bLocal_344))
				{
					iLocal_826 = ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&bLocal_344), GET_OBJECT_FROM_ACTOR(&Global_54076), Function_42(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				}
				Function_478(65, 0, 0);
				if (!IS_OBJECT_VALID(&bLocal_420))
				{
					Function_384();
					if (!Function_436(StackVal, Local_820))
					{
						cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("nbhGateway") };
						bLocal_420 = Function_383(StackVal, StackVal, &uLocal_535, &cLocal_270, Local_820, Vector(0.0f, 0.0f, 0.0f), &Global_54076, (2,5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
						if (IS_OBJECT_VALID(&bLocal_420))
						{
							uLocal_348 = Function_382(&bLocal_420);
						}
						else
						{
							LOG_ERROR("Problem creating dropoff gateway");
						}
						Function_464(1);
					}
					else
					{
						LOG_ERROR("Invalid dropOffPos found");
					}
					Function_380();
				}
				if (!IS_ACTOR_ALIVE(&(uLocal_44[0])))
				{
					Function_312(&Local_539);
					Function_449(&Local_539, 1);
					Function_448(&Local_539, "npm_bh_rtp", 1);
					cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_512(iLocal_448) };
					Function_317(&Local_539, &cLocal_270, 0);
				}
				break;
			
			case 0x00000007:
				Function_308(&Local_539, (4294967295 * FLOOR((IntToFloat(Function_511()) * 0,1f))));
				if (IS_ACTOR_HOGTIED(&Global_54076))
				{
					FREE_FROM_HOGTIE(&Global_54076);
				}
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					DESTROY_ACTOR(GET_ACTORS_HORSE(&Global_54076));
				}
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					DESTROY_ACTOR(GET_ACTORS_HORSE(&Global_54076));
				}
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/ReactionProcessing/Injury/MeleeHit/Shoved/StaggerFall");
				iVar0 = 0;
				while (iVar0 < (bLocal_263 - 1))
				{
					uVar2 = Vector(1.0f, 1.0f, 1.0f);
					if (IS_ACTOR_ALIVE(&(uLocal_44[iVar0])) && IS_ACTOR_VALID(&(uLocal_44[iVar0])))
					{
						TELEPORT_ACTOR(&(uLocal_44[iVar0]), &uVar2, 1, 1, 1);
					}
					if (IS_ACTOR_ALIVE(&(iLocal_66[iVar0])) && IS_ACTOR_VALID(&(iLocal_66[iVar0])))
					{
						TELEPORT_ACTOR(&(iLocal_66[iVar0]), &uVar2, 1, 1, 1);
					}
					iVar0++;
				}
				iLocal_29 = 5;
				break;
			
			case 0x0000000E:
				Function_516(&Local_539);
			
			case 0x0000000B:
				iLocal_373 = 1;
				if (IS_ACTOR_ALIVE(&Global_54076))
				{
					DELETE_ITEM(Function_490(13), &Global_54076, 0);
				}
				if (iLocal_411 == 0)
				{
					Function_510(&Local_539, 1);
				}
				else
				{
					Function_510(&Local_539, 0);
				}
				if (iParam0 == 11)
				{
					iLocal_414 = 1;
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < (bLocal_263 - 1))
					{
						if (IS_ACTOR_ALIVE(&(uLocal_44[iVar0])) && IS_ACTOR_VALID(&(uLocal_44[iVar0])))
						{
							if (iVar0 == 0)
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(&(uLocal_44[iVar0]));
								FREE_FROM_HOGTIE(&(uLocal_44[iVar0]));
								DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(&(uLocal_44[iVar0])), "sHogtie", "kneel");
								HOGTIE_ACTOR(&(uLocal_44[iVar0]));
								DELETE_ACCESSORY("ANKLE_BIND", &(uLocal_44[iVar0]));
							}
							Function_23(&(uLocal_44[iVar0]), 2, 0, 2);
						}
						iVar0++;
					}
				}
				iVar1 = 0;
				iLocal_369 = 2;
				iLocal_29 = 5;
				break;
			
			case 0x0000000C:
				if (!Function_566("npressDemo"))
				{
					Function_449(&Local_539, 1);
					Function_448(&Local_539, "npm_bh_diw", 1);
				}
				Function_481(&Local_539, 0, 0);
				Function_476(&iLocal_302);
				iLocal_369 = 4;
				iLocal_29 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000F:
				Function_516(&Local_539);
			
			case 0x0000000D:
				Function_449(&Local_539, 1);
				if (iLocal_383 == 1)
				{
				}
				else if (iLocal_381 == 1)
				{
					Function_448(&Local_539, "pm_bh_alaw", 1);
				}
				else if (IS_ACTOR_HOGTIED(&(uLocal_44[0])))
				{
					Function_448(&Local_539, "npm_bh_es0", 1);
				}
				else
				{
					Function_448(&Local_539, "npm_bh_es1", 1);
				}
				Function_481(&Local_539, 0, 1);
				iLocal_371 = 1;
				iLocal_369 = 3;
				iLocal_29 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000006:
				Function_449(&Local_539, 1);
				if (IS_ACTOR_HOGTIED(&(uLocal_44[0])))
				{
					Function_448(&Local_539, "npm_bh_es0", 1);
				}
				else
				{
					Function_448(&Local_539, "npm_bh_es1", 1);
				}
				Function_481(&Local_539, 0, 0);
				iLocal_371 = 1;
				iLocal_369 = 3;
				iLocal_29 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000010:
				iLocal_29 = 5;
				iLocal_369 = 4;
				break;
			
			default:
				break;
		}
		iLocal_269 = iParam0;
		Function_464(1);
	}
	return iVar1;
}

void Function_510(int iParam0, int iParam1) //Position: 0x1C694 / 116372
{
	if (iParam1 == 0)
	{
		Function_548(&iParam0 + 1048, 16384);
	}
	else
	{
		Function_67(&iParam0 + 1048, 16384);
	}
	return;
}

int Function_511() //Position: 0x1C6BB / 116411
{
	return Function_264(0);
}

struct<32> Function_512(int iParam0) //Position: 0x1C6C5 / 116421
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_565(iParam0))
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

void Function_513(int iParam0) //Position: 0x1C787 / 116615
{
	char* cVar0[64];
	char* cVar17[64];
	int iVar33;
	int iVar34;
	
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_ALIVE(&iParam0))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
		if (&iParam0 == &uLocal_44[0])
		{
			if (IS_VOLUME_VALID(&uLocal_350))
			{
				DESTROY_VOLUME(&uLocal_350);
			}
			if (IS_OBJECT_VALID(&uLocal_346))
			{
				DESTROY_OBJECT(&uLocal_346);
			}
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
			cLocal_270 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_574("friendAwayVol") };
			uLocal_350 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_535, &cLocal_270, 0f, Vector(1.0f, 1.0f, 1.0f), Vector(0.0f, 0.0f, 0.0f), Vector((5.0f / 2.0f), (5.0f / 2.0f), (5.0f / 2.0f)));
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_350), GET_OBJECT_FROM_ACTOR(&(uLocal_44[0])), Function_42(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		cVar0 = GET_CURRENT_GRINGO(&iParam0);
		if (IS_GRINGO_VALID(&cVar0))
		{
			GRINGO_DEACTIVATE(&cVar0);
		}
		if (iLocal_382 == 0)
		{
			if (IS_ACTOR_ALIVE(&(uLocal_44[0])))
			{
				strcpy(&cVar1, "PLAYER_BOUNTY_HUNTER", 64);
				strcpy(&cVar17, GET_ACTOR_ENUM_STRING(&(uLocal_44[0])), 64);
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
				SAY_SINGLE_LINE_STRING(&Global_54076, &cVar1, true, true, 2, 0, true, false);
			}
			iLocal_382 = 1;
		}
		if (iLocal_269 <= 5)
		{
			iVar34 = 0;
			while (iVar34 < (iLocal_66 - 1))
			{
				if (IS_ACTOR_VALID(&(iLocal_66[iVar34])))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_66[iVar34]));
				}
				iVar34++;
			}
		}
		Function_401(&iParam0, 14);
		MEMORY_GET_MUST_IDENTIFY(&iParam0, &Global_54076);
		SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
		SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	}
	return;
}

void Function_514(int iParam0) //Position: 0x1C934 / 117044
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_13())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

int Function_515() //Position: 0x1C96D / 117101
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (Global_43787 == 1)
	{
		Global_39906.f_28 = Global_46866[0];
	}
	else if (Global_43787 == 2)
	{
		Global_39906.f_28 = Global_46914[0];
	}
	else if (Global_43788 == Global_46736[2])
	{
		Global_39906.f_28 = Global_46816[0];
	}
	else
	{
		Global_39906.f_28 = Global_46760[0];
	}
	iVar0 = Global_39906.f_28;
	return iVar0;
}

void Function_516(struct<1093> Param0) //Position: 0x1C9CE / 117198
{
	if (Function_549(Param0.f_1048, 4))
	{
		Function_518();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_514(1);
	if (Function_549(Param0.f_1048, 32))
	{
		if (Function_75(Param0.f_1092))
		{
			Function_517(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_245(&Param0, 0);
	}
	Function_548(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_549(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_283(&Param0, 1);
	return;
}

void Function_517(int iParam0, var uParam1) //Position: 0x1CA5D / 117341
{
	int iVar0;
	
	if (!Function_270(iParam0))
	{
		Function_255();
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
	iVar0 = Function_254(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && uParam1)
	{
		Function_527(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_253(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_518() //Position: 0x1CAC5 / 117445
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_519(struct<1093> Param0) //Position: 0x1CADB / 117467
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(&cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_549(Param0.f_1048, 32))
	{
		if (!Function_270(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_522(Function_254(Param0.f_1092), Function_553(Param0.f_1092));
	iVar22 = Function_520(Function_254(Param0.f_1092), Function_553(Param0.f_1092));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(&uVar21, &uVar20))
	{
		ADD_TIME(&uVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(&uVar21, GET_TIME_OF_DAY()))
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
			if (!IS_STRING_VALID(&Param0 + 620[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(&Param0 + 620[iVar174], &cParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(&Param0 + 620[iVar174], &cParam1, 16);
			if (&iParam2 == 1)
			{
				(*&Param0 + 724)[iVar17] = &iParam2;
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

int Function_520(int iParam0, int iParam1) //Position: 0x1CC4F / 117839
{
	int iVar0;
	int iVar1;
	
	if (!Function_521(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_254(iVar1) != iParam0 && Function_553(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_521(int iParam0) //Position: 0x1CC9B / 117915
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_522(int iParam0, int iParam1) //Position: 0x1CCB0 / 117936
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_254(iVar1) != iParam0 && Function_553(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(&Global_21684[iVar17] + 40, &iVar0))
			{
				iVar0 = &Global_21684[iVar17] + 40;
			}
		}
		iVar1++;
	}
	return &iVar0;
}

bool Function_523() //Position: 0x1CD01 / 118017
{
	if (Function_264(359) < 0 || Function_264(358) < 0)
	{
		return 0;
	}
	return 1;
}

void Function_524(int iParam0) //Position: 0x1CD21 / 118049
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_459(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_525(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_96(473, 1, 0, 0);
		iVar0 = Function_462(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_96(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_96(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_96(476, 1, 0, 0);
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
		Function_69(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_69(7, 30);
	}
	if (Function_107(473) <= Function_108(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

void Function_525(var uParam0, int iParam1) //Position: 0x1CE12 / 118290
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_526(bool bParam0, int iParam1) //Position: 0x1CE23 / 118307
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

void Function_527(bool bParam0) //Position: 0x1CE62 / 118370
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_541();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_528();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_67(&Global_99144, 1);
		Function_67(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_528() //Position: 0x1CEB7 / 118455
{
	Function_539();
	Function_538();
	Function_538();
	Function_537();
	Function_537();
	Function_536();
	Function_536();
	Function_535(0);
	Function_535(0);
	Function_533();
	Function_532();
	Function_531();
	Function_530();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_529();
	return;
}

void Function_529() //Position: 0x1CF02 / 118530
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

void Function_530() //Position: 0x1D008 / 118792
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

void Function_531() //Position: 0x1D03B / 118843
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

void Function_532() //Position: 0x1D1CE / 119246
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

void Function_533() //Position: 0x1D387 / 119687
{
	Function_534(&Global_42918, 1, 0);
	return;
}

void Function_534(struct<2317> Param0) //Position: 0x1D395 / 119701
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_17();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
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

struct<8> Function_535(char* cParam0) //Position: 0x1D5B2 / 120242
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
					iVar2 = ((Function_264((50 + iVar4)) + Function_264((183 + iVar4))) + Function_264((90 + iVar4)));
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
	Function_268(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_536() //Position: 0x1D659 / 120409
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
		iVar2 = ((Function_264((50 + iVar3) + 15) + Function_264((183 + iVar3) + 15)) + Function_264((90 + iVar3) + 15));
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
	Function_268(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_537() //Position: 0x1D6E2 / 120546
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
			iVar2 = ((Function_264((50 + iVar3) + 8) + Function_264((183 + iVar3) + 8)) + Function_264((90 + iVar3) + 8));
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
	Function_268(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_538() //Position: 0x1D779 / 120697
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
		iVar2 = ((Function_264((50 + iVar3)) + Function_264((183 + iVar3))) + Function_264((90 + iVar3)));
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
	Function_268(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_539() //Position: 0x1D7F8 / 120824
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_540(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_268(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_540(int iParam0, float fParam1, int iParam2) //Position: 0x1D835 / 120885
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_110(iParam0, fParam1, 1);
	Function_109(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_98(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_541() //Position: 0x1DA41 / 121409
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_85())
	{
		Function_546(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_546(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_542(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_542(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_436(StackVal, Var0))
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

struct<8> Function_542(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x1DAF8 / 121592
{
	int iVar0;
	
	iVar0 = Function_544(&uParam2, &fParam3);
	if (Function_543(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_548(&Global_99144, 1);
			Function_67(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_548(&Global_99144, 2);
			Function_67(&Global_99144, 1);
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
		Function_548(&Global_99144, 2);
		Function_67(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_65();
	return StackVal, Function_65();
}

bool Function_543(int iParam0) //Position: 0x1DBF0 / 121840
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_544(bool bParam0, bool bParam1) //Position: 0x1DC06 / 121862
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
				fVar2 = Function_545(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_545(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_543(iVar0) && !&bParam1)
	{
		iVar0 = Function_544(&bParam0, 1);
	}
	return iVar0;
}

float Function_545(struct<2> Param0, struct<2> Param2) //Position: 0x1DCD2 / 122066
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_546(float fParam0, int iParam1) //Position: 0x1DCEF / 122095
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_131(&Global_54076, &Var3);
	if (!Function_547(Global_46760[0]))
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
	if (!Function_547(Global_46760[2]))
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
	if (!Function_547(Global_46760[1]))
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
	if (!Function_547(Global_46796[1]))
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
	if (!Function_547(Global_46796[3]))
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
	if (!Function_547(Global_46796[2]))
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
	if (!Function_547(Global_46796[4]))
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
	if (!Function_547(Global_46816[0]))
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
	if (!Function_547(Global_46816[1]))
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
	if (!Function_547(Global_46816[2]))
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
	if (!Function_547(Global_46838[0]))
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
	if (!Function_547(Global_46850[0]))
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
	if (!Function_547(Global_46850[1]))
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
	if (!Function_547(Global_46850[2]))
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
	if (!Function_547(Global_46866[0]))
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
	if (!Function_547(Global_46866[1]))
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
	if (!Function_547(Global_46866[2]))
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
	if (!Function_547(Global_46894[2]))
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
	if (!Function_547(Global_46894[3]))
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
	if (!Function_547(Global_46894[0]))
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
	if (!Function_547(Global_46914[0]))
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
	if (!Function_547(Global_46926[2]))
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
	if (!Function_547(Global_46926[1]))
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
	if (!Function_547(Global_46926[0]))
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
	if (!Function_547(Global_46838[1]))
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
	if (!Function_547(Global_46894[1]))
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
	Function_548(&Global_99144, 2);
	Function_67(&Global_99144, 1);
	iParam1 = 0;
	if (Function_436(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_547(int iParam0) //Position: 0x1E51B / 124187
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_549(bVar0, 0x1000000) || Function_549(bVar0, 0x2000000)) || Function_549(bVar0, 0x4000000)) || !Function_549(bVar0, 0x10000000));
}

void Function_548(int iParam0, int iParam1) //Position: 0x1E556 / 124246
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_549(bool bParam0, int iParam1) //Position: 0x1E567 / 124263
{
	return (bParam0 && iParam1) == 0;
}

bool Function_550(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1E574 / 124276
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

void Function_551() //Position: 0x1E623 / 124451
{
	Function_468(&iLocal_146, "procmissions", 10, 0);
	Function_468(&iLocal_146, "stats", 10, 0);
	return;
}

void Function_552(int iParam0) //Position: 0x1E652 / 124498
{
	if (iParam0 == 1)
	{
		Function_548(&Global_39906 + 8, 1);
	}
	else
	{
		Function_67(&Global_39906 + 8, 1);
	}
	return;
}

int Function_553(int iParam0) //Position: 0x1E673 / 124531
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_554(struct<917> Param0) //Position: 0x1E692 / 124562
{
	Param0.f_916 = iParam1;
	return;
}

void Function_555(struct<1093> Param0) //Position: 0x1E6A0 / 124576
{
	if (Function_75(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_548(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_556(bool bParam0) //Position: 0x1E6F7 / 124663
{
	if (Function_565(bParam0))
	{
		return Function_557(bParam0, 0, 2);
	}
	return 4294967295;
}

int Function_557(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1E711 / 124689
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_560(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_558(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_558(bParam0, bParam1, bParam2, 4294967295);
}

int Function_558(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1E76F / 124783
{
	var uVar0;
	
	if (!Function_521(bParam2))
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
	uVar0 = Function_560(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_559(uVar0);
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

var Function_559(int iParam0) //Position: 0x1E8D3 / 125139
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

var Function_560(int iParam0, int iParam1, int iParam2) //Position: 0x1E911 / 125201
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_561(struct<25> Param0) //Position: 0x1E931 / 125233
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	iParam3 = &iParam3;
	iParam2 = &iParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_562(uVar0, 80.0f, 20000.0f, &iParam1, 1, &iParam4);
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

var Function_562(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1E9C7 / 125383
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	int iVar596;
	int iVar597;
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	struct<8> Var602;
	
	iVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	iVar599 = 0;
	iVar600 = 0;
	iVar601 = 0;
	iVar596 = 0;
	while (iVar596 < 145)
	{
		iVar1[iVar596] = 4294967295;
		iVar148[iVar596] = 4294967295;
		iVar596++;
	}
	if (!Function_565(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_461(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	iVar596 = 0;
	while (iVar596 < 145)
	{
		Function_457(&Global_44085[iVar5969] + 8);
		Var296 = Function_457(&Global_44085[iVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[iVar5969] + 8) && (iVar295 != Function_461(Global_44085[iVar5969]) || iParam0 != 4294967295)) != 1) && Function_459(&(Global_43791[iVar596]), 8192)) && iVar596 == 0)
		{
			if (iVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = iVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[iVar599] = iVar596;
				bVar302[iVar599] = bVar300;
				iVar599++;
				if (Function_262(Function_557(iVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar600] = iVar596;
					bVar449[iVar600] = bVar300;
					iVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar599 == iVar1)
		{
			iVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_564(&iVar1, &bVar302, iVar599);
		Function_564(&iVar148, &bVar449, iVar600);
	}
	if (iVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_104(3, iVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_104(5, iVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_104(7, iVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_104(10, iVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_104(5, iVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar148[iVar597];
		if (Function_565(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_563();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_512(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_457(&Global_44085[iVar09] + 8);
		Var296 = Function_457(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (iVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_104(3, iVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_104(5, iVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_104(7, iVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_104(10, iVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_104(5, iVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
		if (Function_565(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_563();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_512(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_457(&Global_44085[iVar09] + 8);
		Var296 = Function_457(&Global_44085[iVar09] + 8);
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

int Function_563() //Position: 0x1F079 / 127097
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

void Function_564(int[] iParam0, bool[] bParam1, int iParam2) //Position: 0x1F0A7 / 127143
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
		uVar2 = iParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				iParam0[iVar1 + 1] = iParam0[iVar1];
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
		iParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

bool Function_565(int iParam0) //Position: 0x1F13E / 127294
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_566(bool bParam0) //Position: 0x1F154 / 127316
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

int Function_567(struct<25> Param0) //Position: 0x1F176 / 127350
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_572())
	{
		return 0;
	}
	Param0.f_16 = Function_569(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_570();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_282(&Var96, iVar1) == 1)
		{
			if (Function_461(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_470(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
							{
								if (!Function_568(iVar1))
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
		if (Function_282(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_561(&Param0, &iParam4, 80, 20000, Param0.f_12);
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

bool Function_568(bool bParam0) //Position: 0x1F3FB / 127995
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

var Function_569(int iParam0) //Position: 0x1F44D / 128077
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

var Function_570() //Position: 0x1F51C / 128284
{
	int iVar0;
	
	iVar0 = Function_571(0);
	return iVar0;
}

var Function_571(int iParam0) //Position: 0x1F52A / 128298
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_264(358) + Function_264(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_104(iVar1, 7);
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

bool Function_572() //Position: 0x1F5AF / 128431
{
	return Function_549(StackVal, 1);
}

void Function_573() //Position: 0x1F5BE / 128446
{
	Function_67(&Global_39906 + 8, 2);
	Function_67(&Global_39906 + 8, 4);
	Function_67(&Global_39906 + 8, 8);
	Function_67(&Global_39906 + 8, 16);
	Function_67(&Global_39906 + 8, 32);
	Function_67(&Global_39906 + 8, 64);
	Function_67(&Global_39906 + 8, 128);
	Function_67(&Global_39906 + 8, 256);
	Function_67(&Global_39906 + 8, 512);
	Function_67(&Global_39906 + 8, 1024);
	Function_67(&Global_39906 + 8, 2048);
	Function_67(&Global_39906 + 8, 131072);
	Function_67(&Global_39906 + 8, 262144);
	Function_67(&Global_39906 + 8, 524288);
	return;
}

struct<32> Function_574(struct<8> Param0) //Position: 0x1F658 / 128600
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_575("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_575(char* cParam0) //Position: 0x1F6C4 / 128708
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_576() //Position: 0x1F6E6 / 128742
{
	return &Global_21369 + 8;
}

