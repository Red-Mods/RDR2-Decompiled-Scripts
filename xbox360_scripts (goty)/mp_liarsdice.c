//Decompiled with MagicRDR v1.0
//Function Count : 528
//Statics Count : 808
//Natives Count : 460
//Parameters Count : 35

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
	var uLocal_34 = 11;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	var uLocal_56 = 11;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	float fLocal_71 = 0.0f;
	int iLocal_72 = 0;
	float fLocal_73 = 0.0f;
	int iLocal_74 = 0;
	float fLocal_75 = 0.0f;
	float fLocal_76 = 0.0f;
	float fLocal_77 = 0.0f;
	float fLocal_78 = 0.0f;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	float fLocal_88 = 0.0f;
	float fLocal_89 = 0.0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	bool bLocal_93 = false;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	bool bLocal_115 = false;
	var uLocal_116 = 0;
	bool bLocal_117 = false;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = false;
	float fLocal_121 = 0.0f;
	float fLocal_122 = 0.0f;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	float fLocal_128 = 0.0f;
	float fLocal_129 = 0.0f;
	float fLocal_130 = 0.0f;
	float fLocal_131 = 0.0f;
	int iLocal_132 = 1;
	var uLocal_133 = 0;
	bool bLocal_134 = false;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<35> Local_139 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_174 = false;
	int iLocal_175 = 0;
	bool bLocal_176 = false;
	int iLocal_177 = 0;
	struct<59> Local_178 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_247 = 5;
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
	var uLocal_264 = 5;
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
	var uLocal_280 = 5;
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
	var uLocal_306 = 5;
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
	var uLocal_323 = 5;
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
	var uLocal_339 = 5;
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
	var uLocal_365 = 5;
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
	var uLocal_382 = 5;
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
	var uLocal_398 = 5;
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
	var uLocal_424 = 5;
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
	var uLocal_441 = 5;
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
	var uLocal_457 = 5;
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
	var uLocal_483 = 5;
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
	var uLocal_500 = 5;
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
	var uLocal_516 = 5;
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
	var uLocal_533 = 6;
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
	bool bLocal_560 = true;
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
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	bool bLocal_591 = false;
	float fLocal_592 = 0.0f;
	int iLocal_593 = 0;
	bool bLocal_594 = false;
	int iLocal_595[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	struct<9> Local_604[16];
	var uLocal_749[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_766 = { 0.0f, 0.0f, 0.0f };
	var uLocal_769 = 0;
	bool bLocal_770 = false;
	bool bLocal_771 = false;
	int iLocal_772 = 0;
	struct<35> ScriptParam_0 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_72 = 1;
	iLocal_80 = 1000;
	fLocal_88 = 5.0f;
	fLocal_89 = 1.0f;
	bLocal_93 = false;
	iLocal_94 = 0;
	bLocal_115 = false;
	bLocal_117 = false;
	iLocal_118 = 0;
	fLocal_121 = 0.2f;
	fLocal_122 = 0.2f;
	iLocal_123 = 0;
	iLocal_124 = 0;
	bLocal_134 = false;
	iLocal_177 = 5;
	Local_139 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_495();
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
	while (Function_282())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_139 };
		Function_257();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x2A0 / 672
{
	int iVar0;
	
	NET_ENABLE_KICKING(1);
	Function_255();
	NET_HUD_TUNE_VALUE("IconCamConstOffset", F2STR(0.5f, 1, 10));
	NET_GAMER_ICON_FORCE_VISIBLE(0);
	NET_GAMER_ICON_FORCE_TEXT_VISIBLE(0);
	if (NET_GET_PLAYMODE() == 0)
	{
		if (Function_254(37) == iLocal_772)
		{
			Function_253(37, 0);
		}
		Function_209(143, 4294967295, 1, 1, 0);
	}
	if (iLocal_90)
	{
		Function_208(4, 1);
	}
	iVar0 = 0;
	while (iVar0 <= Local_178.f_1420)
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
		if (IS_ACTOR_VALID((*&Local_139 + 4)[iVar0]))
		{
			DEREFERENCE_ACTOR((*&Local_139 + 4)[iVar0]);
			SET_DRAW_ACTOR((*&Local_139 + 4)[iVar0], true);
		}
		iVar0++;
	}
	UI_EXIT("Dice");
	UI_EXIT("Scores");
	UI_HIDE("Minigame");
	HUD_TIMER_DISPLAY(0);
	if (Function_207())
	{
		Function_206();
	}
	SET_DRAW_ACTOR(GET_PLAYER_ACTOR(0), true);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(true);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(Function_205());
	Function_200();
	Function_199();
	RELEASE_LAYOUT_REF(bLocal_92);
	if (Function_207())
	{
		if (!(bLocal_4 || iLocal_3) || iLocal_74 != 2)
		{
			Function_194();
		}
	}
	else
	{
		Function_192(1);
		Function_191(1);
		Function_191(4);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_205(), 1);
		if (iLocal_3)
		{
			Function_50(Local_139, 1, 1, 1, 0);
		}
		else if (bLocal_4)
		{
			Function_46(Local_139);
			if (!Function_45(Global_76846, 512))
			{
				Function_39(Function_205(), 512, 1, 0);
			}
		}
		else
		{
			Function_19(Local_139);
		}
	}
	SET_ACTOR_INVULNERABILITY(Function_205(), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_15();
	Function_14(Function_205());
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
	Function_2();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x467 / 1127
{
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_4();
	Function_3(uLocal_769);
	return;
}

int Function_3(bool bParam0) //Position: 0x47A / 1146
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_4() //Position: 0x490 / 1168
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

void Function_5(int iParam0) //Position: 0x4B2 / 1202
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_6() //Position: 0x4C2 / 1218
{
	Function_7();
	return;
}

void Function_7() //Position: 0x4CB / 1227
{
	Function_8(4294967286);
	return;
}

void Function_8(bool bParam0) //Position: 0x4D7 / 1239
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

void Function_9(var uParam0, int iParam1) //Position: 0x514 / 1300
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_10(int iParam0) //Position: 0x527 / 1319
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x536 / 1334
{
	*uParam0 = iParam1;
	return;
}

void Function_12(int iParam0) //Position: 0x541 / 1345
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_13(int iParam0) //Position: 0x551 / 1361
{
	*iParam0 = Global_78480.f_120;
	return;
}

void Function_14(bool bParam0) //Position: 0x560 / 1376
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

void Function_15() //Position: 0x585 / 1413
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_205(), true);
	Function_18(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_205()), "iQuitMinigame");
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

void Function_16() //Position: 0x607 / 1543
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_17() //Position: 0x61C / 1564
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_18(int iParam0) //Position: 0x630 / 1584
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0x643 / 1603
{
	Function_27(iParam0);
	Function_26();
	Function_23(2);
	Function_21((15 - Function_22(105)));
	Function_20(12);
	return;
}

void Function_20(bool bParam0) //Position: 0x664 / 1636
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_21(int iParam0) //Position: 0x67F / 1663
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_22(105)), 0);
	return;
}

int Function_22(int iParam0) //Position: 0x6A0 / 1696
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_23(bool bParam0) //Position: 0x6B6 / 1718
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_25(Global_12976.f_24);
	PRINTNL();
	Function_24(bParam0);
	return;
}

void Function_24(int iParam0) //Position: 0x752 / 1874
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_22(90)), 0);
	return;
}

void Function_25(bool bParam0) //Position: 0x773 / 1907
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

void Function_26() //Position: 0x7B9 / 1977
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_27(bool bParam0) //Position: 0x7D2 / 2002
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

void Function_28(char* cParam0, bool bParam1) //Position: 0x825 / 2085
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

struct<16> Function_29(int iParam0) //Position: 0x949 / 2377
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

bool Function_30() //Position: 0x983 / 2435
{
	if (Function_31(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_31(bool bParam0, int iParam1) //Position: 0x99E / 2462
{
	return (bParam0 && iParam1) == 0;
}

int Function_32(bool bParam0) //Position: 0x9AB / 2475
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_33(int iParam0) //Position: 0x9CB / 2507
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_34(bool bParam0) //Position: 0x9E2 / 2530
{
	if (!Function_33(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_35() //Position: 0x9FD / 2557
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

void Function_36(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC44 / 3140
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_37(int iParam0) //Position: 0xC6D / 3181
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

bool Function_38(int iParam0) //Position: 0xC91 / 3217
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xCA6 / 3238
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

void Function_40(char* cParam0, int iParam1) //Position: 0xD12 / 3346
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0xD49 / 3401
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

int Function_42(char* cParam0) //Position: 0xDC1 / 3521
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

int Function_43(int iParam0) //Position: 0xE62 / 3682
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

void Function_44(int iParam0, int iParam1) //Position: 0xE9F / 3743
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0xEB2 / 3762
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(int iParam0) //Position: 0xEC5 / 3781
{
	Function_47(iParam0);
	Function_23(2);
	Function_20(12);
	Function_21((15 - Function_22(105)));
	return;
}

void Function_47(bool bParam0) //Position: 0xEE3 / 3811
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
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
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_48(int iParam0) //Position: 0xF89 / 3977
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

struct<24> Function_49(char* cParam0) //Position: 0xFC8 / 4040
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

void Function_50(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x121E / 4638
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

void Function_51() //Position: 0x130B / 4875
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

int Function_52(int iParam0, bool bParam1) //Position: 0x133B / 4923
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

int Function_53(int iParam0) //Position: 0x1378 / 4984
{
	if (!Function_54(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_54(int iParam0) //Position: 0x1392 / 5010
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x13A8 / 5032
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

void Function_56(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x169F / 5791
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
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
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_108();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
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

void Function_57(int iParam0, int iParam1) //Position: 0x18F3 / 6387
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_58(bool bParam0, int iParam1) //Position: 0x192D / 6445
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

bool Function_59() //Position: 0x196F / 6511
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_60(bool bParam0) //Position: 0x1978 / 6520
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

void Function_61() //Position: 0x19C9 / 6601
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

void Function_62() //Position: 0x1A1B / 6683
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

void Function_63() //Position: 0x1B21 / 6945
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

void Function_64() //Position: 0x1B54 / 6996
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

void Function_65() //Position: 0x1CE2 / 7394
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

void Function_66() //Position: 0x1E96 / 7830
{
	Function_67(&Global_28260, 1, 0);
	return;
}

void Function_67(int iParam0, bool bParam1, int iParam2) //Position: 0x1EA4 / 7844
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
	
	bVar0 = Function_205();
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

struct<8> Function_68(int iParam0) //Position: 0x2095 / 8341
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x213B / 8507
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

void Function_70(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x23D6 / 9174
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

var Function_71() //Position: 0x2A03 / 10755
{
	int iVar0;
	
	return iVar0;
}

var Function_72(int iParam0) //Position: 0x2A0B / 10763
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2A1C / 10780
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

struct<32> Function_74(char* cParam0, bool bParam1) //Position: 0x2B11 / 11025
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_75(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2B2A / 11050
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_77(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_76(Function_77(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

bool Function_76(int iParam0, int iParam1) //Position: 0x2B8F / 11151
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_77(int iParam0, bool bParam1) //Position: 0x2BA1 / 11169
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_78(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2BB3 / 11187
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

int Function_79(int iParam0) //Position: 0x2CE3 / 11491
{
	return Global_35278[iParam020].f_48;
}

float Function_80(int iParam0) //Position: 0x2CF2 / 11506
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_81(int iParam0) //Position: 0x2D2B / 11563
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_82(int iParam0) //Position: 0x2D68 / 11624
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

int Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F02 / 12034
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

int Function_84(bool bParam0) //Position: 0x3146 / 12614
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_85() //Position: 0x3187 / 12679
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

struct<8> Function_86() //Position: 0x3210 / 12816
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

struct<8> Function_87() //Position: 0x32A7 / 12967
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

void Function_88() //Position: 0x3326 / 13094
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

int Function_89(int iParam0, bool bParam1, int iParam2) //Position: 0x335F / 13151
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

void Function_90() //Position: 0x3569 / 13673
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

bool Function_91(vector3 vParam0) //Position: 0x3624 / 13860
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_92(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x363C / 13884
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

vector3 Function_93() //Position: 0x3723 / 14115
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_94(int iParam0, int iParam1) //Position: 0x372C / 14124
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_95(int iParam0) //Position: 0x373B / 14139
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_96(bool bParam0, bool bParam1) //Position: 0x3751 / 14161
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

float Function_97(vector3 vParam0, vector3 vParam3) //Position: 0x3818 / 14360
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_98(var uParam0, int iParam1) //Position: 0x3835 / 14389
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

bool Function_99(int iParam0) //Position: 0x405B / 16475
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_31(uVar0, 0x1000000) || Function_31(uVar0, 0x2000000)) || Function_31(uVar0, 0x4000000)) || !Function_31(uVar0, 0x10000000));
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x4096 / 16534
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_101(bool bParam0) //Position: 0x40A3 / 16547
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

bool Function_102(int iParam0) //Position: 0x457F / 17791
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_103(bool bParam0) //Position: 0x4595 / 17813
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_104(bool bParam0) //Position: 0x45B4 / 17844
{
	if (!Function_33(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_105(int iParam0, bool bParam1) //Position: 0x45CE / 17870
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

int Function_106(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4635 / 17973
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
		Function_70(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_107() //Position: 0x4855 / 18517
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

void Function_108() //Position: 0x49AD / 18861
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

int Function_109(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4A2D / 18989
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

void Function_110(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4D7F / 19839
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

int Function_111(int iParam0) //Position: 0x4E02 / 19970
{
	if (!Function_37(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_112() //Position: 0x4E1C / 19996
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_113() //Position: 0x4E47 / 20039
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

void Function_114(int iParam0, int iParam1, bool bParam2) //Position: 0x4E75 / 20085
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

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x5111 / 20753
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

void Function_116(int iParam0, int iParam1) //Position: 0x52E0 / 21216
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_117(int iParam0, char* cParam1, bool bParam2) //Position: 0x553E / 21822
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

int Function_118() //Position: 0x56C3 / 22211
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

void Function_119() //Position: 0x5762 / 22370
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

void Function_120(int iParam0) //Position: 0x5811 / 22545
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

var Function_121(int iParam0) //Position: 0x586F / 22639
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

int Function_122(int iParam0, bool bParam1) //Position: 0x58FE / 22782
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

var Function_123(int iParam0, int iParam1) //Position: 0x5A9B / 23195
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

void Function_124() //Position: 0x5ADC / 23260
{
	Function_126(3, 0.0f);
	Function_125(3, 10000.0f);
	return;
}

int Function_125(int iParam0, int iParam1) //Position: 0x5AF2 / 23282
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_126(int iParam0, int iParam1) //Position: 0x5B32 / 23346
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_127(int iParam0) //Position: 0x5B72 / 23410
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_128(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5B81 / 23425
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

int Function_129(int iParam0) //Position: 0x5D49 / 23881
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

var Function_130() //Position: 0x5DDE / 24030
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_131(int iParam0) //Position: 0x5E03 / 24067
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

void Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0x62BE / 25278
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

var Function_133(int iParam0) //Position: 0x65DF / 26079
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

int Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x6682 / 26242
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

int Function_135(int iParam0, bool bParam1) //Position: 0x687D / 26749
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

int Function_136(bool bParam0, bool bParam1) //Position: 0x6A19 / 27161
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

void Function_137(int iParam0, var uParam1, bool bParam2) //Position: 0x6AE4 / 27364
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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

void Function_138(int iParam0) //Position: 0x73E2 / 29666
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

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7551 / 30033
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

bool Function_140(vector3 vParam0, vector3 vParam3) //Position: 0x7657 / 30295
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_141(bool bParam0) //Position: 0x7684 / 30340
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

var Function_142(vector3 vParam0) //Position: 0x76DB / 30427
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

void Function_143(bool bParam0, bool bParam1) //Position: 0x7729 / 30505
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

void Function_144(bool bParam0, bool bParam1, bool bParam2) //Position: 0x777D / 30589
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
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

void Function_145() //Position: 0x791C / 31004
{
	return;
}

bool Function_146(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7922 / 31010
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

void Function_147(bool bParam0, int iParam1) //Position: 0x79C6 / 31174
{
	if (!Function_148(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_148(int iParam0) //Position: 0x7A1B / 31259
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_149(int iParam0) //Position: 0x7A31 / 31281
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

bool Function_150(int iParam0, int iParam1) //Position: 0x7A82 / 31362
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

void Function_151(var uParam0, int iParam1) //Position: 0x7AAF / 31407
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_152(var uParam0, int iParam1) //Position: 0x7ABE / 31422
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_153(var uParam0, int iParam1) //Position: 0x7AD5 / 31445
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7AE4 / 31460
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

void Function_155(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7C39 / 31801
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

bool Function_156() //Position: 0x7CB4 / 31924
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_157(bool bParam0) //Position: 0x7CE1 / 31969
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_160(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_159(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_158(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_158(int iParam0) //Position: 0x7E91 / 32401
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

void Function_159(char* cParam0, bool bParam1) //Position: 0x7EE8 / 32488
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

var Function_160(int iParam0) //Position: 0x7F0D / 32525
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

bool Function_161(bool bParam0, int iParam1) //Position: 0x7F63 / 32611
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

int Function_162(bool bParam0) //Position: 0x7FC2 / 32706
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_163(int iParam0) //Position: 0x7FCE / 32718
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_164(int iParam0) //Position: 0x7FEA / 32746
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

bool Function_165() //Position: 0x8044 / 32836
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_31(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_166(int iParam0, int iParam1) //Position: 0x8074 / 32884
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

int Function_167(int iParam0, int iParam1) //Position: 0x80E7 / 32999
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_168(int iParam0, int iParam1) //Position: 0x8143 / 33091
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

int Function_169(int iParam0, int iParam1) //Position: 0x81B4 / 33204
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_170(int iParam0) //Position: 0x820E / 33294
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

void Function_171(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x84BB / 33979
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

void Function_172(int iParam0, bool bParam1) //Position: 0x8751 / 34641
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

void Function_173() //Position: 0x87BC / 34748
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

var Function_174(int iParam0, int iParam1) //Position: 0x8837 / 34871
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

int Function_175(int iParam0) //Position: 0x9428 / 37928
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x943D / 37949
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

void Function_177(bool bParam0, bool bParam1) //Position: 0x948C / 38028
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

void Function_178(bool bParam0, bool bParam1, int iParam2) //Position: 0x94DD / 38109
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

bool Function_179(int iParam0, int iParam1) //Position: 0x954B / 38219
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_180(int iParam0) //Position: 0x955E / 38238
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

var Function_181(int iParam0) //Position: 0x965D / 38493
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

bool Function_182(var uParam0, int iParam1) //Position: 0x96B5 / 38581
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_183(bool bParam0, bool bParam1, int iParam2) //Position: 0x96D1 / 38609
{
	if (!Function_184(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_205(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_205(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_205(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_184(int iParam0) //Position: 0x9728 / 38696
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_185(int iParam0) //Position: 0x973A / 38714
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

void Function_186(int iParam0) //Position: 0x976E / 38766
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
			Function_187(4, 0, 0);
		}
	}
	return;
}

void Function_187(int iParam0, int iParam1, int iParam2) //Position: 0x97D5 / 38869
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
		Function_188(Global_16524, bVar0, 1);
	}
	return;
}

void Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x98BB / 39099
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
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_189() //Position: 0x9A34 / 39476
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_190(int iParam0) //Position: 0x9A40 / 39488
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

void Function_191(int iParam0) //Position: 0x9A86 / 39558
{
	if (Function_31(iParam0, 1) && !Function_31(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_192(int iParam0) //Position: 0x9AB3 / 39603
{
	Function_193(&Global_28842, iParam0);
	return;
}

void Function_193(var uParam0, var uParam1) //Position: 0x9AC1 / 39617
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_194() //Position: 0x9ADC / 39644
{
	if (Function_197(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_195(16);
	return 1;
}

void Function_195(int iParam0) //Position: 0x9AFA / 39674
{
	Function_196(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0x9B33 / 39731
{
	Function_44(uParam0, iParam1);
	return;
}

bool Function_197(int iParam0) //Position: 0x9B40 / 39744
{
	return Function_198(Global_79336, iParam0);
}

int Function_198(var uParam0, bool bParam1) //Position: 0x9B4F / 39759
{
	return (uParam0 && bParam1) == 0;
}

void Function_199() //Position: 0x9B5C / 39772
{
	return;
}

void Function_200() //Position: 0x9B62 / 39778
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_201(&bLocal_560);
	return;
}

void Function_201(int iParam0) //Position: 0x9B71 / 39793
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_202(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0x9B97 / 39831
{
	if (Function_204(uParam0[iParam13], 4))
	{
		if (Function_204(uParam0[iParam13], 1))
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
			Function_203(uParam0[iParam13], 1);
			Function_203(uParam0[iParam13], 2);
			Function_203(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_203(var uParam0, int iParam1) //Position: 0x9CC5 / 40133
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_204(int iParam0, int iParam1) //Position: 0x9CDF / 40159
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_205() //Position: 0x9CFC / 40188
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_206() //Position: 0x9D11 / 40209
{
	FLASH_SET_INT("numberSystem", "nshowTimer", false);
	return;
}

bool Function_207() //Position: 0x9D37 / 40247
{
	return Local_139.f_52;
}

void Function_208(int iParam0, bool bParam1) //Position: 0x9D41 / 40257
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

void Function_209(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9EB4 / 40628
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_252(5, 1);
	Function_195(4096);
	switch (Function_251())
	{
		case 0x00000011:
		case 0x00000002:
			Function_225(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_219();
	Function_218();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_217(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			if (bParam4)
			{
				Function_214(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_217(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_210(bParam2);
}

void Function_210(bool bParam0) //Position: 0x9FD0 / 40912
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_212(2);
	if (bParam0)
	{
		Function_212(1);
	}
	else
	{
		Function_211(1);
	}
	Function_61();
	return;
}

void Function_211(int iParam0) //Position: 0xA059 / 41049
{
	Function_196(&Global_79338, iParam0);
	return;
}

void Function_212(int iParam0) //Position: 0xA068 / 41064
{
	Function_213(&Global_79338, iParam0);
	return;
}

void Function_213(var uParam0, int iParam1) //Position: 0xA077 / 41079
{
	Function_94(uParam0, iParam1);
	return;
}

void Function_214(int iParam0) //Position: 0xA084 / 41092
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_94(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_216(8));
	bVar0[0] = FLOOR(Function_216(8));
	if (Function_216(8) < 0.0f)
	{
		if (Function_215())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_216(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_216(7));
		bVar68[0] = bVar68[13];
		if (Function_215())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_215() //Position: 0xA12B / 41259
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_216(int iParam0) //Position: 0xA136 / 41270
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_217(var uParam0, var uParam1, bool bParam2) //Position: 0xA146 / 41286
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*uParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_218() //Position: 0xA18B / 41355
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_219() //Position: 0xA1B5 / 41397
{
	if (Global_83864.f_1264 > 6)
	{
		Function_220(&(Global_50170[522]));
		Function_220(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_220(&(Global_50170[722]));
		Function_220(&(Global_50170[822]));
		Function_220(&(Global_50170[922]));
		Function_220(&(Global_50170[1022]));
		Function_220(&(Global_50170[1122]));
	}
	return;
}

void Function_220(bool bParam0) //Position: 0xA215 / 41493
{
	Global_56092[*bParam0] = 0;
	Function_221(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_221(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xA22F / 41519
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_224(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_223(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_224(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_222(iParam0, 4))
	{
		Function_159(Function_224(iParam0), 0);
	}
}

bool Function_222(int iParam0, int iParam1) //Position: 0xA2E6 / 41702
{
	return Function_31(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_223(bool bParam0) //Position: 0xA2FA / 41722
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[bParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_224(int iParam0) //Position: 0xA32E / 41774
{
	return Global_50170[iParam022].f_24;
}

void Function_225(var uParam0, var uParam1, int iParam2) //Position: 0xA33D / 41789
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_250(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_243(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_249(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_242(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_221(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_250(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_243(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_249(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_242(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_221(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_250(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_226(17, 150, Function_249(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_242(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_221(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_226(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA4E6 / 42214
{
	Function_240(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_224(iParam0), 1.0f, false, 0);
	Function_236(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_234(iParam3);
	}
	Function_228(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_227();
}

void Function_227() //Position: 0xA54C / 42316
{
	if (!Function_59())
	{
		if (!Function_146(1, 3, 1, 1))
		{
			Function_60(1);
			Function_58(1, 8);
		}
	}
	else
	{
		Function_210(0);
	}
	return;
}

void Function_228(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA575 / 42357
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_233();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_232(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_231(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_230(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_229(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_232(), iVar1 + 1);
	return;
}

struct<16> Function_229(int iParam0) //Position: 0xA5E7 / 42471
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_230(int iParam0) //Position: 0xA608 / 42504
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_231(int iParam0) //Position: 0xA629 / 42537
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_232() //Position: 0xA64A / 42570
{
	return "CQueue_Count";
}

var Function_233() //Position: 0xA65F / 42591
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_234(int iParam0) //Position: 0xA68E / 42638
{
	Function_235(iParam0, 1);
	return;
}

void Function_235(int iParam0, bool bParam1) //Position: 0xA69A / 42650
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_94(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_162((iVar0 % 32)));
	}
	else
	{
		Function_44(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_162((iVar0 % 32)));
	}
	return;
}

void Function_236(bool bParam0, int iParam1) //Position: 0xA6F0 / 42736
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_239(bParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_224(bParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(bParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_223(bParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_237(bParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_224(bParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_224(bParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_224(bParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_237(int iParam0) //Position: 0xA772 / 42866
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_223(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_238(int iParam0) //Position: 0xA792 / 42898
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_239(int iParam0) //Position: 0xA7C3 / 42947
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_240(bool bParam0, bool bParam1) //Position: 0xA941 / 43329
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

var Function_241() //Position: 0xAA8D / 43661
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_242(var uParam0, bool bParam1, bool bParam2) //Position: 0xAADA / 43738
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_243(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xAAF2 / 43762
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_223(iParam0) };
	Function_228(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_242(&fParam5, bParam8, iParam9);
	Function_221(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_245(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_234(iParam12);
	}
	Function_244(iParam0, 4);
	Function_227();
}

void Function_244(bool bParam0, int iParam1) //Position: 0xAB68 / 43880
{
	Function_44(&Global_50170[bParam022] + 32, iParam1);
	return;
}

void Function_245(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAB7C / 43900
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_239(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_224(iParam0));
	if ((bParam3 && Function_222(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_224(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_223(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_248(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_237(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_224(iParam0), &Var7, 0, 2, Function_222(iParam0, 4));
			if (!bParam3)
			{
				Function_246(iParam0, 4);
			}
		}
	}
}

void Function_246(int iParam0, int iParam1) //Position: 0xAC39 / 44089
{
	Function_94(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_247(int iParam0) //Position: 0xAC4D / 44109
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_248(int iParam0) //Position: 0xAC7B / 44155
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_249() //Position: 0xACAB / 44203
{
	return "MP_Unstoppable_Icon_128";
}

float Function_250(int iParam0) //Position: 0xACCB / 44235
{
	return Global_50170[iParam022].f_12;
}

int Function_251() //Position: 0xACDA / 44250
{
	return Global_79349.f_16;
}

void Function_252(int iParam0, int iParam1) //Position: 0xACE6 / 44262
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_253(int iParam0, int iParam1) //Position: 0xAD0B / 44299
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_254(int iParam0) //Position: 0xAD25 / 44325
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_255() //Position: 0xAD3E / 44350
{
	Function_256(9);
	Function_256(8);
	Function_256(7);
	Function_256(6);
	Function_256(5);
	Function_256(4);
	Function_256(3);
	Function_256(2);
	Function_256(1);
	Function_256(0);
	return;
}

int Function_256(int iParam0) //Position: 0xAD78 / 44408
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_257() //Position: 0xAD84 / 44420
{
	int iVar0[3];
	int iVar4;
	
	if (Function_280(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_266(&uLocal_81, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_260();
			Function_259(0);
		}
		else if (iVar4 == 1)
		{
			Function_260();
			Function_259(1);
		}
		else if (iVar4 == 2)
		{
			Function_260();
			Function_259(2);
		}
	}
	else
	{
		Function_258(10, 3);
	}
	return;
}

void Function_258(int iParam0, int iParam1) //Position: 0xAE12 / 44562
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

void Function_259(int iParam0) //Position: 0xAF49 / 44873
{
	iLocal_1 = 3;
	iLocal_2 = 0;
	iLocal_74 = iParam0;
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

void Function_260() //Position: 0xB03B / 45115
{
	Function_261();
	Function_258(10, 3);
	return;
}

void Function_261() //Position: 0xB04A / 45130
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_265())
	{
		Function_264(10, 3);
	}
	else
	{
		Function_262();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_205(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_205());
	UI_POP("nDebugMenu");
	return;
}

void Function_262() //Position: 0xB095 / 45205
{
	Function_263(25, 2);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xB0A1 / 45217
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

void Function_264(int iParam0, int iParam1) //Position: 0xB29F / 45727
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

bool Function_265() //Position: 0xB3D6 / 46038
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

var Function_266(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB43D / 46141
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_279(&Var15, &Var0);
	uVar20 = Function_278(*uParam1, &Var15);
	Function_277(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_276(uParam0, uVar20);
	Function_274(StackVal, uParam0, Var15.f_12);
	Function_272(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_271(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_268(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_267(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_267(int iParam0, int iParam1, int iParam2) //Position: 0xB504 / 46340
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

bool Function_268(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB560 / 46432
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
				Function_270(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_270(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_267(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_269(bParam1->f_32);
	}
	else
	{
		Function_269(bParam1->f_32);
	}
	return 0;
}

void Function_269(bool bParam0) //Position: 0xB6E6 / 46822
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

void Function_270(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB720 / 46880
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

var Function_271(int iParam0, var uParam1, int iParam2) //Position: 0xB7CE / 47054
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_272(var uParam0, int iParam1, int iParam2) //Position: 0xB7F2 / 47090
{
	switch (Function_273())
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

int Function_273() //Position: 0xB88E / 47246
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

void Function_274(var uParam0, int iParam1, int iParam2) //Position: 0xB8CA / 47306
{
	switch (Function_275(uParam0))
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

int Function_275(int iParam0) //Position: 0xB962 / 47458
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_205()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
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
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_205()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
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

var Function_276(var uParam0, int iParam1) //Position: 0xBAAD / 47789
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

void Function_277(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBBFC / 48124
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

var Function_278(int iParam0, int iParam1) //Position: 0xBC8F / 48271
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_279(var uParam0, int iParam1) //Position: 0xBCA9 / 48297
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

bool Function_280(int iParam0) //Position: 0xBCF7 / 48375
{
	if (!Function_281(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_281(int iParam0) //Position: 0xBD0B / 48395
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

bool Function_282() //Position: 0xBD2F / 48431
{
	int iVar0;
	
	if (HUD_IS_FADED())
	{
		ACTOR_FORCE_NEXT_UPDATE(Function_205());
	}
	if (Function_494(14, 1, 1))
	{
		Function_493();
	}
	else
	{
		Function_491();
	}
	if (IS_ACTOR_DEAD(Function_205()))
	{
		Function_490();
		return 0;
	}
	if (!NET_IS_IN_SESSION())
	{
		NET_LOG(true, "LiarsDice Sanity", "Bailing because we're no longer in a session and are doomed to failure", false, false, false, false);
		return 0;
	}
	bLocal_591 = (GET_CURRENT_GAME_TIME() - fLocal_592);
	fLocal_592 = GET_CURRENT_GAME_TIME();
	Function_89(432, bLocal_591, 0);
	if ((*&Local_178 + 1420)[Local_178.f_15043])
	{
		if (Function_488(&Local_178, Function_489(1)))
		{
			fLocal_73 = (fLocal_73 + bLocal_591);
			Function_487(fLocal_73);
			Function_484(Function_486(&Local_178, Function_489(1)));
		}
		else
		{
			Function_484(0);
		}
	}
	if (Function_207())
	{
		Function_482(3);
		Function_481();
		Function_477(uLocal_769, &Local_178, 87524, 0);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_139 + 4)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_139 + 4)[iVar0]) == Function_205())
			{
				Function_490();
				return 0;
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_490();
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 3) != 4)
	{
		Function_471(&Global_50170[23922] + 4, &Global_50170[23922] + 8, &Global_50170[23922] + 12, &iLocal_595);
	}
	iLocal_3 = 0;
	bLocal_4 = false;
	switch (iLocal_1)
	{
		case 0x00000063:
			Function_469(&Local_178);
			iLocal_1 = 0;
			break;
		
		case 0x00000000:
			Function_451();
			break;
		
		case 0x00000001:
			Function_306();
			break;
		
		case 0x00000003:
			Function_296();
			break;
		
		case 0x00000065:
			iLocal_3 = 1;
			break;
		
		case 0x00000029:
			if (Function_293(&iLocal_97))
			{
				Function_259(0);
			}
			break;
		
		default:
			return 0;
	}
	if (iLocal_3)
	{
		Function_283();
		return 0;
	}
	if (bLocal_4)
	{
		Function_490();
		return 0;
	}
	return 1;
}

void Function_283() //Position: 0xBF44 / 48964
{
	if (Global_29006 == Global_30707[2])
	{
		Function_292(7, Global_30707[2]);
	}
	if (Function_291(50) && Local_139 != Function_286(Global_30668[1], 7, 4))
	{
		Function_284(64, 1, 0);
	}
	iLocal_3 = 1;
	Function_1();
	return;
}

int Function_284(bool bParam0, bool bParam1, int iParam2) //Position: 0xBF85 / 49029
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_285(bParam0), Function_205()) == 0)
		{
			ADD_ITEM(Function_285(bParam0), Function_205(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_285(bParam0), Function_205(), iParam2);
	return 1;
}

var Function_285(bool bParam0) //Position: 0xBFD0 / 49104
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

int Function_286(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC0DB / 49371
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_290(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_287(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_287(bParam0, bParam1, bParam2, 4294967295);
}

int Function_287(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC139 / 49465
{
	var uVar0;
	
	if (!Function_289(bParam2))
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
	uVar0 = Function_290(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_288(uVar0);
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

int Function_288(int iParam0) //Position: 0xC28E / 49806
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

bool Function_289(int iParam0) //Position: 0xC2CC / 49868
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_290(int iParam0, int iParam1, int iParam2) //Position: 0xC2E1 / 49889
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_291(int iParam0) //Position: 0xC301 / 49921
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_292(int iParam0, int iParam1) //Position: 0xC316 / 49942
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

bool Function_293(int iParam0) //Position: 0xC428 / 50216
{
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
				Function_256(6);
				Function_256(5);
				Function_256(4);
				Function_256(3);
				Function_256(2);
				Function_256(1);
				Function_256(0);
				Function_155("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_294(iParam0);
				iLocal_2 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_294(int iParam0) //Position: 0xC4B4 / 50356
{
	Function_295(iParam0, 0.0f);
	return;
}

void Function_295(var uParam0, float fParam1) //Position: 0xC4C0 / 50368
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_94(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_296() //Position: 0xC4E1 / 50401
{
	int iVar0;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (iLocal_74 == 1)
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
			Function_255();
			Function_16();
			if (iLocal_74 != 0 && !Function_305(Function_34(Local_139), Function_32(Local_139)))
			{
				Function_106(410, 1, 0, 0);
				Function_105(6, 13);
			}
			iLocal_2 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_178 + 1420)[Local_178.f_15043])
			{
				Function_304(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_120));
				Function_299(&Local_178, Function_489(1));
			}
			if (Function_207())
			{
				EQUIP_ACCESSORY(Function_205(), 0, 1);
				EQUIP_ACCESSORY(Function_205(), 1, 1);
				iLocal_2 = 8;
			}
			else
			{
				iLocal_2 = 7;
			}
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_178.f_1420)
			{
				if ((*&Local_178 + 1420)[iVar03])
				{
					RESET_ANIM_SET_FOR_ACTOR(Local_178[StackVal59], 1);
					SET_ANIM_SET_FOR_ACTOR(Local_178[StackVal59], "liars_dice_ambient", 0);
					while (!ACTOR_HAS_ANIM_SET(Local_178[StackVal59], "liars_dice_ambient") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					SET_ACTION_NODE_FOR_ACTOR(Local_178[StackVal59], "liars_dice/fake_liars_dice/check_lift");
					SET_AUTO_CONVERSATION_LOOK(Local_178[StackVal59], 1);
					TASK_PRIORITY_SET(Local_178[StackVal59], 2);
				}
				Function_298(GET_GRINGO_FROM_OBJECT(StackVal));
				iVar0++;
			}
			Function_297(&Local_178);
			iLocal_2 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "liars_dice/stand"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_2 = 9;
			}
			break;
		
		case 0x00000009:
			if (!HUD_IS_FADING())
			{
				if (iLocal_74 == 0)
				{
					iLocal_3 = 1;
				}
				else if (iLocal_74 == 1)
				{
					bLocal_4 = true;
				}
				else if (iLocal_74 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_297(int iParam0) //Position: 0xC7A2 / 51106
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

void Function_298(bool bParam0) //Position: 0xC81F / 51231
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

void Function_299(int iParam0, int iParam1) //Position: 0xC88E / 51342
{
	(*iParam0 + 1420)[iParam0[iParam159]->f_643] = 0;
	(iParam0 + 1420[iParam0[iParam159]->f_643])->f_4 = 4294967295;
	if (IS_ACTOR_VALID((*iParam0)[iParam159]))
	{
		GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
		if (iParam0[iParam159]->f_60 == 3)
		{
			Function_301("net_player_left", Function_303(Local_178[iParam159]));
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
	Function_300(iParam0[iParam159] + 36, 5);
	DESTROY_OBJECT(iParam0[iParam159]->f_88);
	iParam0[iParam159]->f_68 = 1000;
	strcpy(iParam0[iParam159] + 4, "", 32);
	iParam0->f_1496 = (iParam0->f_1496 - 1);
	return;
}

void Function_300(var uParam0, int iParam1) //Position: 0xC99C / 51612
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

void Function_301(bool bParam0, int iParam1) //Position: 0xC9D2 / 51666
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_302(iParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_302(bool bParam0) //Position: 0xC9F2 / 51698
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("g", I2STR(bParam0));
}

int Function_303(bool bParam0) //Position: 0xCA06 / 51718
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

void Function_304(var uParam0, bool bParam1) //Position: 0xCA48 / 51784
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

bool Function_305(int iParam0, int iParam1) //Position: 0xCBBB / 52155
{
	int iVar0;
	
	if (!Function_289(iParam0))
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

void Function_306() //Position: 0xCC00 / 52224
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
	int iVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	
	if (bLocal_117)
	{
		Function_295(&iLocal_97, (Function_448(&iLocal_97) + 0.2f));
	}
	bVar2 = "";
	if ((*&Local_178 + 1420)[Local_178.f_15003])
	{
		bVar2 = Local_178[Function_447(1)59];
	}
	else if (Function_207())
	{
		if (Function_446(&Local_178) > 1)
		{
			Local_178.f_1500 = Function_445(&Local_178, Local_178.f_1500);
			if ((*&Local_178 + 1420)[Local_178.f_15003])
			{
				bVar2 = Local_178[Function_447(1)59];
			}
			else if (!iLocal_119)
			{
				iLocal_119 = 1;
				Function_444(27, 1);
				Function_255();
			}
		}
	}
	Function_441(&Local_178);
	if (!Function_207())
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if ((iLocal_174 == 0 && iLocal_174 == 10) && iLocal_174 == 15)
			{
				if (IS_BUTTON_PRESSED(Function_440(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_175 = iLocal_174;
					Function_444(26, 0);
					bLocal_115 = true;
				}
			}
		}
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		if ((Function_438(6) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) && iLocal_174 == 10)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			Function_437(&iLocal_132);
		}
	}
	switch (iLocal_174)
	{
		case 0x0000001A:
			if (HUD_IS_FADED())
			{
				iVar0 = 0;
				while (iVar0 <= Local_178.f_1420)
				{
					if ((*&Local_178 + 1420)[iVar03])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Local_178[StackVal59]);
					}
					iVar0++;
				}
				Function_16();
				Function_436();
				Function_444(iLocal_175, 0);
			}
			break;
		
		case 0x00000000:
			iLocal_177 = 0;
			if (bLocal_115)
			{
				Function_16();
				Function_436();
				SET_ACTION_NODE_FOR_ACTOR(Local_178[Function_489(1)59], "liars_dice/idle");
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_115 = false;
			}
			if (Function_431(&iLocal_132, 0))
			{
				Function_155("LiarsDice_AnteHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			AUDIO_RESET_SPEECH_HISTORY();
			UI_EXIT("Dice");
			UI_ENTER("Scores");
			UI_EXIT("nScores.s1");
			UI_EXIT("nScores.s2");
			UI_LABEL_SET_TEXT("nScores.s0", "LiarsDice_CashLabel");
			UI_LABEL_SET_VALUE("nScores.s0", Function_430());
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_AnteOrQuitValue", Function_428(Local_139.f_48), "", "", "", 0, 2, 0, 0, 0);
			}
			iLocal_119 = 0;
			if (Function_438(7))
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_427(Local_139.f_48, 0);
				UI_LABEL_SET_VALUE("nScores.s0", Function_430());
				if (Function_489(1) >= 4294967295)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_178[Function_489(1)59], 479, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				Function_444(1, 0);
				if (Function_207())
				{
					Function_426(&bLocal_120);
				}
			}
			break;
		
		case 0x0000000D:
			Function_425(bLocal_176);
			Function_444(14, 0);
			break;
		
		case 0x0000000E:
			memcpy(&uVar21, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("ACKNOWLEDGE: ", I2STR(bLocal_176)), 6);
			if (Function_411(bLocal_176, 0, 0x3f800000))
			{
				Function_444(bLocal_176, 0);
			}
			break;
		
		case 0x00000001:
			iLocal_177 = 3;
			if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_115)
			{
				Function_16();
				Function_444(2, 1);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/idle") || bLocal_115)
			{
				UI_EXIT("Scores");
				Function_444(3, 1);
			}
			break;
		
		case 0x00000003:
			iLocal_602 = 0;
			iLocal_603 = 0;
			Function_426(&bLocal_120);
			Local_178.f_1512 = 0;
			Local_178.f_1516 = 1;
			UI_LABEL_SET_VALUE("NumberOfDice", false);
			UI_LABEL_SET_VALUE("DiceNumber", true);
			Local_178.f_1520 = 4294967295;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_178 + 1420)[iVar03])
				{
					if (Local_178[Function_410(iVar0, 1)59].f_60 == 3)
					{
						Function_299(&Local_178, Function_410(iVar0, 1));
					}
					else
					{
						Local_178[Function_410(iVar0, 1)59].f_96 = 1;
						Local_178[Function_410(iVar0, 1)59].f_100 = 1;
					}
				}
				iVar0++;
			}
			Function_444(4, 0);
			break;
		
		case 0x00000004:
			iLocal_118 = 0;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_178 + 1420)[iVar03])
				{
					iVar3 = Function_410(iVar0, 1);
					if (Function_488(&Local_178, iVar3))
					{
						if (!Function_207() || iVar3 != Function_489(1))
						{
							Function_408(&Local_178, iVar3);
						}
						SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/cup_shuffle_pre");
					}
					else if (iVar3 == Function_489(1))
					{
						Function_406(&vLocal_604[Function_407(&Local_178, Function_489(1))9] + 28);
					}
				}
				iVar0++;
			}
			if (Function_431(&iLocal_132, 1))
			{
				Function_155("LiarsDice_ShuffleHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_444(5, 0);
			break;
		
		case 0x00000005:
			if (!Function_207())
			{
				Function_444(6, 0);
			}
			else if (Function_405())
			{
				Function_403();
				Function_444(6, 1);
			}
			break;
		
		case 0x00000006:
			Function_402(&Local_178);
			if (Function_401(&Local_178) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_444(7, 1);
			}
			else if (bLocal_115)
			{
				Function_399(&Local_178);
				Function_444(7, 1);
			}
			break;
		
		case 0x00000007:
			if (Function_207())
			{
				NET_OBJECT_REPLICATION_MODE_START(17, 0);
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_178 + 1420)[iVar03])
				{
					iVar3 = Function_410(iVar0, 1);
					bVar1 = false;
					while (bVar1 <= Function_486(&Local_178, iVar3))
					{
						if (!IS_OBJECT_VALID(bVar33))
						{
							bVar33 = CREATE_OBJECT_LOCATOR(Local_178[iVar359].f_88, Function_71());
						}
						switch (bVar1)
						{
							case 0x00000000:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000001:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000002:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000003:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000004:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
							
							case 0x00000005:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar33, Local_178[iVar359].f_88, "die06", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
								break;
						}
						GET_OBJECT_POSITION(bVar33, &vVar34);
						GET_OBJECT_ORIENTATION(bVar33, &vVar37);
						if (Function_207() && iVar3 == Function_489(1))
						{
							(*&Local_178[iVar359] + 36)[bVar1] = CREATE_PROP_IN_LAYOUT(bLocal_92, Function_71(), "$/fragments/p_gen_dice02x", vVar34, vVar37, 0);
						}
						else
						{
							(*&Local_178[iVar359] + 36)[bVar1] = CREATE_PROP_IN_LAYOUT(bLocal_92, Function_71(), "$/fragments/p_gen_dice01x", vVar34, vVar37, 0);
						}
						Function_396(Function_398(&Local_178, iVar3, bVar1), &Local_178[iVar359] + 36[bVar1]);
						bVar1++;
					}
				}
				iVar0++;
			}
			if (Function_207())
			{
				NET_OBJECT_REPLICATION_MODE_END(17);
			}
			REMOVE_ALL_OBJECT_ATTACHMENTS(Local_178[Function_447(1)59].f_88);
			Function_444(8, 0);
			break;
		
		case 0x00000008:
			iVar3 = Function_447(1);
			iVar40 = Local_178[iVar359].f_60;
			if (uLocal_116 && iVar40 == 2)
			{
				iVar40 = 1;
			}
			iLocal_177 = 1;
			if (Function_488(&Local_178, iVar3))
			{
				switch (iVar40)
				{
					case 0x00000001:
						if (GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) >= 0.1f && Local_178.f_1524 != 0.0f)
						{
							if (iLocal_94 || bLocal_115)
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 1);
							}
							else
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 0);
							}
						}
						Local_178[iVar359].f_100 = Local_178.f_1516;
						Local_178[iVar359].f_96 = Local_178.f_1512;
						if (Function_207())
						{
							Function_393();
						}
						Function_294(&iLocal_100);
						Function_294(&iLocal_97);
						Function_444(10, 0);
						break;
					
					case 0x00000000:
						if (GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) >= 0.1f && Local_178.f_1524 != 0.0f)
						{
							if (iLocal_94 || bLocal_115)
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 1);
							}
							else
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 0);
							}
						}
						Function_444(11, 0);
						break;
					
					case 0x00000002:
						if (GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) >= 0.1f && Local_178.f_1524 != 0.0f)
						{
							if (iLocal_94)
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 1);
							}
							else
							{
								Function_394(&bLocal_120, bVar2, Local_178[Function_489(1)59], 0);
							}
						}
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(Function_447(1), &Local_178) };
						PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						NET_GAMER_SET_ACTOR_OVERRIDE(Function_303(bVar2), bVar2);
						NET_GAMER_ICON_FORCE_VISIBLE(1);
						NET_GAMER_ICON_FORCE_TEXT_VISIBLE(1);
						NET_GAMER_SET_TEAM(Function_303(bVar2), 0);
						Function_444(12, 0);
						break;
					
					case 0x00000003:
						NET_LOG(false, "nLiarsDice", "Encountered Linkdead player", false, false, false, false);
						Function_444(12, 0);
						break;
				}
			}
			else
			{
				Function_444(9, 0);
			}
			Function_388(&Local_178);
			break;
		
		case 0x00000009:
			Local_178.f_1500 = Function_387(&Local_178 + 1420, Local_178.f_1500);
			Function_255();
			Function_444(8, 0);
			Function_388(&Local_178);
			break;
		
		case 0x0000000C:
			iVar3 = Function_447(1);
			if (Local_178[iVar359].f_60 == 3)
			{
				if (Function_446(&Local_178) == 2)
				{
					Function_299(&Local_178, iVar3);
					vLocal_766.x = 0;
					NET_GAMER_SET_ACTOR_OVERRIDE(Function_303(bVar2), false);
					Function_444(27, 1);
				}
				else if (Function_386(&Local_178))
				{
					Function_385(&Local_178, &vLocal_766 + 8, &vLocal_766 + 4);
					vLocal_766.x = 6;
				}
				else
				{
					vLocal_766.x = 5;
				}
			}
			if (vLocal_766.x != 0)
			{
				switch (vLocal_766.x)
				{
					case 0x00000001:
					case 0x00000006:
						if (Function_431(&iLocal_132, 4))
						{
							Function_155("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						if (Local_178.f_1512 != 0)
						{
							Function_384();
						}
						Local_178[iVar359].f_96 = vLocal_766.z;
						Local_178[iVar359].f_100 = vLocal_766.y;
						Function_383(&Local_178, iVar3, vLocal_766.x != 6);
						Function_382(&Local_178);
						if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/check_close");
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_lift") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_close"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/verbal_bid");
						}
						NET_GAMER_SET_ACTOR_OVERRIDE(Function_303(bVar2), false);
						Function_444(16, 0);
						break;
					
					case 0x00000002:
					case 0x00000005:
						if (Function_431(&iLocal_132, 5))
						{
							Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						iLocal_118 = 0;
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iVar3, &Local_178) };
						if (vLocal_766.x == 2)
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_AutoCallOutBluff", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
						if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/check_close");
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_lift") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_close"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/verbal_callout");
						}
						Function_381();
						NET_GAMER_SET_ACTOR_OVERRIDE(Function_303(bVar2), false);
						Function_444(17, 0);
						break;
					
					case 0x00000003:
						if (Function_431(&iLocal_132, 6))
						{
							Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_380();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iVar3, &Local_178) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Call_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						iLocal_118 = 1;
						if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/check_close");
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_lift") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_178[iVar359], "check_close"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_178[iVar359], "liars_dice/verbal_bid");
						}
						NET_GAMER_SET_ACTOR_OVERRIDE(Function_303(bVar2), false);
						Function_444(17, 0);
						break;
					
					default:
						break;
				}
				Function_294(&iLocal_97);
				vLocal_766.x = 0;
			}
			Function_388(&Local_178);
			break;
		
		case 0x0000000A:
			Function_378();
			iLocal_177 = 2;
			if (bLocal_115)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_115 = false;
			}
			bVar20 = (Local_178.f_1512 != Function_377(&Local_178) && Local_178.f_1516 != 6);
			if (bVar20 && Function_431(&iLocal_132, 9))
			{
				Function_155("LiarsDice_MaxBidHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_431(&iLocal_132, 2))
			{
				Function_155("LiarsDice_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_376(&Local_178, Function_447(1)))
			{
				if (Function_431(&iLocal_132, 6))
				{
					Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			if (!Function_207())
			{
				bVar41 = RAND_INT_RANGE(false, true);
				switch (bVar41)
				{
					case 0x00000000:
						iVar42 = Function_387(&Local_178 + 1420, Local_178.f_1500);
						break;
					
					case 0x00000001:
						iVar42 = Function_375(&Local_178 + 1420, Local_178.f_1500);
						break;
				}
				if (!iVar42 != 4294967295 && !iVar42 != Local_178.f_1500)
				{
					bVar43 = RAND_INT_RANGE(false, (100 * CEIL(Function_448(&iLocal_100))));
					if (bVar43 > 30 && Function_448(&iLocal_97) < 4.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_178[Function_410(iVar42, 1)59], "liars_dice/cup_idle"))
						{
							if (!bLocal_115)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_178[Function_410(iVar42, 1)59], "liars_dice/check_lift");
							}
							Function_294(&iLocal_97);
						}
					}
					else if (Function_448(&iLocal_97) < 1.0f)
					{
						if (IS_ACTION_NODE_PLAYING(Local_178[Function_410(iVar42, 1)59], "liars_dice/check_idle"))
						{
							if (!bLocal_115)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_178[Function_410(iVar42, 1)59], "liars_dice/check_close");
							}
							Function_294(&iLocal_97);
						}
					}
				}
			}
			if (!bVar20)
			{
				Function_371(&Local_178);
				Function_370(&Local_178);
			}
			else
			{
				Function_382(&Local_178);
			}
			if (!HUD_IS_SHOWING_HELP_TEXT() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_448(&iLocal_103) < 8.0f)
				{
					if (Local_178.f_1512 == 0)
					{
						Function_369("LiarsDice_EnterFirstBid", -1.0f, 1, 2, 0, 0, 0, 0);
					}
					else if (bVar20)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_MaxBid", Function_428(Local_178.f_1512), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else if (Local_178.f_1512 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid_Single", Function_428(Local_178.f_1512), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid", Function_428(Local_178.f_1512), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_120) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_120) != 1)
			{
				Function_367(&bLocal_120, &Local_178, Function_489(1), 0);
			}
			if (GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) < 0.1f)
			{
				if (!IS_ACTION_NODE_PLAYING(bVar2, "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/check_sweep");
					fLocal_128 = 0.0f;
					fLocal_131 = -1.0f;
				}
				Function_366(&bLocal_120, &Local_178, Function_447(1), 1);
				Function_444(15, 0);
				Function_365(1);
			}
			else
			{
				Function_365(0);
			}
			Function_361(&Local_178, bVar20);
			break;
		
		case 0x0000000F:
			Function_378();
			if ((GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) != 0.0f && Local_178.f_1524 != 0.0f) || bLocal_115)
			{
				Function_444(10, 0);
				Function_360(&bLocal_120, &Local_178, Function_447(1), 1, 0.0f);
				Function_359();
				SET_ACTION_NODE_FOR_ACTOR(bVar2, "liars_dice/cup_idle");
			}
			else
			{
				Function_366(&bLocal_120, &Local_178, Function_447(1), 1);
			}
			Function_358(&Local_178, bVar2);
			bVar20 = (Local_178.f_1512 != Function_377(&Local_178) && Local_178.f_1516 != 6);
			if (!bVar20)
			{
				Function_371(&Local_178);
				Function_370(&Local_178);
			}
			else
			{
				Function_382(&Local_178);
			}
			Function_361(&Local_178, bVar20);
			break;
		
		case 0x00000010:
			if ((Function_448(&iLocal_97) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				Function_16();
				Function_382(&Local_178);
				Function_444(9, 1);
			}
			else
			{
				Function_370(&Local_178);
			}
			break;
		
		case 0x0000000B:
			Function_294(&iLocal_97);
			if (Function_355(&Local_178, Function_447(1)))
			{
				if (Function_431(&iLocal_132, 4))
				{
					Function_155("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_444(16, 0);
			}
			else
			{
				if (Function_431(&iLocal_132, 5))
				{
					Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_444(17, 0);
			}
			break;
		
		case 0x00000011:
			iLocal_177 = 3;
			if ((Function_448(&iLocal_97) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				if (Function_431(&iLocal_132, 7))
				{
					Function_155("LiarsDice_RevealHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				if (IS_ACTION_NODE_PLAYING(Local_178[Function_489(1)59], "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_178[Function_489(1)59], "liars_dice/cup_idle");
				}
				Function_255();
				Function_426(&bLocal_120);
				if (!bLocal_115)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if ((*&Local_178 + 1420)[iVar03])
						{
							if (Function_488(&Local_178, Function_410(iVar0, 1)))
							{
								if (Function_207() && Local_178[Function_410(iVar0, 1)59].f_60 == 1)
								{
									Function_354(Function_410(iVar0, 1));
								}
								SET_ACTION_NODE_FOR_ACTOR(Local_178[Function_410(iVar0, 1)59], "liars_dice/cup_reveal");
							}
						}
						iVar0++;
					}
				}
				Function_294(&iLocal_97);
				iLocal_125 = Local_178.f_1500;
				bLocal_134 = false;
				Function_444(18, 1);
			}
			else
			{
				Function_382(&Local_178);
			}
			break;
		
		case 0x00000012:
			if (((IS_ACTION_NODE_PLAYING(Local_178[Function_447(1)59], "liars_dice/idle") && Function_448(&iLocal_97) < 2.0f) && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				Function_353(&bLocal_120, &Local_178, Function_447(1), 1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				bVar44 = Function_352(&(vLocal_604[Function_407(&Local_178, Function_447(1))9]), Local_178.f_1516);
				if (!iLocal_602)
				{
					Function_351(&(vLocal_604[Function_407(&Local_178, Function_489(1))9]));
					iLocal_602 = 1;
				}
				bLocal_134 = (bLocal_134 + bVar44);
				if (Function_447(1) == Function_489(1))
				{
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_None", Function_349(), Function_368(Local_178.f_1516), I2STR(bLocal_134), false, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_Single", Function_349(), Function_428(bVar44), Function_368(Local_178.f_1516), I2STR(bLocal_134), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show", Function_349(), Function_428(bVar44), Function_368(Local_178.f_1516), I2STR(bLocal_134), 0, 2, 0, 0, 0);
					}
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(Function_447(1), &Local_178) };
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_None", &Var4, Function_368(Local_178.f_1516), I2STR(bLocal_134), false, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_Single", &Var4, Function_428(bVar44), Function_368(Local_178.f_1516), I2STR(bLocal_134), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show", &Var4, Function_428(bVar44), Function_368(Local_178.f_1516), I2STR(bLocal_134), 0, 2, 0, 0, 0);
					}
				}
				Function_294(&iLocal_97);
				Function_444(19, 0);
			}
			else
			{
				Function_382(&Local_178);
			}
			break;
		
		case 0x00000013:
			if ((Function_448(&iLocal_97) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				Local_178.f_1500 = Function_445(&Local_178, Local_178.f_1500);
				if (Local_178.f_1500 != iLocal_125 || (bLocal_134 <= Local_178.f_1512 && !iLocal_118))
				{
					Local_178.f_1500 = iLocal_125;
					Function_444(20, 1);
				}
				else
				{
					Function_444(18, 0);
				}
			}
			else
			{
				Function_382(&Local_178);
			}
			break;
		
		case 0x00000014:
			Function_426(&bLocal_120);
			bVar45 = Function_348(&Local_178, Local_178.f_1516);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_118)
			{
				if (bVar45 == Local_178.f_1512)
				{
					iVar46 = Local_178[Function_447(1)59].f_64;
					iLocal_126 = StackVal;
					if (Local_178.f_1504 == Function_445(&Local_178, Local_178[Local_178.f_152059].f_64))
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(74))
						{
							AWARD_ACHIEVEMENT(74);
						}
					}
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn_Single", Function_428(bVar45), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn", Function_428(bVar45), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					if (Function_446(&Local_178) >= 2)
					{
						Function_347();
					}
					Function_294(&iLocal_97);
					Function_444(21, 1);
				}
				else
				{
					iLocal_126 = Local_178.f_1520;
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_None", Function_368(Local_178.f_1516), false, false, false, 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_Single", Function_428(bVar45), Function_368(Local_178.f_1516), false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn", Function_428(bVar45), Function_368(Local_178.f_1516), false, false, 0, 2, 0, 0, 0);
					}
					Function_294(&iLocal_97);
					Function_444(22, 1);
				}
			}
			else
			{
				iLocal_126 = Local_178.f_1520;
				if (bVar45 <= Local_178.f_1512)
				{
					if (bVar45 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_None", Function_368(Local_178.f_1516), "", "", "", 0, 2, 0, 0, 0);
					}
					else if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_Single", Function_428(bVar45), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong", Function_428(bVar45), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_294(&iLocal_97);
					Function_444(21, 1);
				}
				else
				{
					if (bVar45 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight_Single", Function_428(Local_178.f_1512), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight", Function_428(Local_178.f_1512), Function_368(Local_178.f_1516), "", "", 0, 2, 0, 0, 0);
					}
					Function_294(&iLocal_97);
					Function_444(22, 1);
				}
			}
			break;
		
		case 0x00000015:
			if ((Function_448(&iLocal_97) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				if (Function_431(&iLocal_132, 8))
				{
					Function_155("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (NET_GET_PLAYMODE() == 0)
				{
					if (Function_447(1) == Function_489(1))
					{
						if (iLocal_118)
						{
							Function_252(25, 1);
						}
						else
						{
							Function_252(26, 1);
						}
					}
				}
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iLocal_126, &Local_178) };
				if (iLocal_118)
				{
					if (Function_486(&Local_178, iLocal_126) >= 1)
					{
						if (iLocal_126 == Function_489(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_126 == Function_489(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
					if (iLocal_126 == Function_489(1) && Function_205() != Local_178[Function_447(1)59])
					{
						if (!iLocal_603)
						{
							if (StackVal || StackVal != 4 != 5)
							{
								Function_341(&Global_50170[23822] + 4, &Global_50170[23822] + 8, &Global_50170[23822] + 12, &iLocal_595);
							}
							iLocal_603 = 1;
						}
					}
				}
				else
				{
					if (Function_486(&Local_178, iLocal_126) >= 1)
					{
						if (iLocal_126 == Function_489(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_126 == Function_489(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
					if (iLocal_126 == Function_489(1) && Function_205() != Local_178[Function_447(1)59])
					{
						if (StackVal || StackVal != 2 != 3)
						{
							Function_341(&Global_50170[23822] + 4, &Global_50170[23822] + 8, &Global_50170[23822] + 12, &iLocal_595);
						}
					}
				}
				Function_444(23, 0);
			}
			else
			{
				Function_382(&Local_178);
			}
			break;
		
		case 0x00000016:
			if ((Function_448(&iLocal_97) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				if (Function_431(&iLocal_132, 8))
				{
					Function_155("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				iLocal_126 = Function_447(1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iLocal_126, &Local_178) };
				if (iLocal_118)
				{
					if (Function_486(&Local_178, Function_447(1)) >= 1)
					{
						if (iLocal_126 == Function_489(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_126 == Function_489(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
					iLocal_118 = 0;
				}
				else if (Function_486(&Local_178, Function_447(1)) >= 1)
				{
					if (iLocal_126 == Function_489(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_126 == Function_489(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie", &Var4, false, false, false, 0, 2, 0, 0, 0);
				}
				Function_444(23, 0);
			}
			else
			{
				Function_382(&Local_178);
			}
			break;
		
		case 0x00000017:
			Function_340(&bLocal_120, Local_178[iLocal_12659]);
			Function_338(&Local_178, iLocal_126);
			AUDIO_MUSIC_ONE_SHOT("MINI_GAME_STINGERS_LOSE", 0, 0, 0, 0, 0);
			Function_444(25, 0);
			break;
		
		case 0x00000019:
			if (!Function_207() || Function_336(Function_407(&Local_178, iLocal_126)))
			{
				Function_403();
				if (Function_486(&Local_178, iLocal_126) >= 0)
				{
					if (!HUD_IS_FADED())
					{
						if (!iLocal_118 || Function_446(&Local_178) != 2)
						{
							if (iLocal_126 == Function_489(1))
							{
								if (Function_335())
								{
									Function_334();
								}
								else
								{
									SAY_SINGLE_LINE_STRING(Local_178[iLocal_12659], "MPTAUNT_LOSE", false, false, 0, 0, true, false);
								}
							}
							else if (Function_335())
							{
								Function_333();
							}
							else
							{
								SAY_SINGLE_LINE_STRING(Local_178[iLocal_12659], "MPTAUNT_LOSE", false, false, 0, 0, true, false);
							}
						}
					}
				}
				else if (iLocal_126 == Function_489(1))
				{
					if (!HUD_IS_FADED() && Function_446(&Local_178) < 1)
					{
						Function_332();
					}
					if (NET_GET_PLAYMODE() == 0)
					{
						Function_252(6, 1);
					}
					if (Function_446(&Local_178) != 2 && iLocal_96)
					{
						Function_325(Function_330(3), 0, 1);
					}
					else if (Function_446(&Local_178) != 1 && iLocal_95)
					{
						Function_325(Function_330(2), 0, 1);
					}
				}
				else
				{
					if (!HUD_IS_FADED() && Function_446(&Local_178) < 1)
					{
						Function_324();
					}
					if (Function_291(50) && Local_139 != Function_286(Global_30668[1], 7, 4))
					{
						Function_284(64, 1, 0);
					}
				}
				Function_294(&iLocal_97);
				iLocal_127 = Function_486(&Local_178, iLocal_126);
				iLocal_593 = ATTACH_OBJECTS((*&Local_178[iLocal_12659] + 36)[iLocal_127], GET_OBJECT_FROM_ACTOR(Local_178[iLocal_12659]), "hip_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				SET_ACTION_NODE_FOR_ACTOR(Local_178[iLocal_12659], "liars_dice/dice_toss");
				Function_444(24, 0);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTION_NODE_PLAYING(Local_178[iLocal_12659], "liars_dice/idle") || bLocal_115)
			{
				if (IS_ATTACHMENT_VALID(iLocal_593))
				{
					REMOVE_OBJECT_ATTACHMENT(iLocal_593);
					SET_OBJECT_POSITION((*&Local_178[iLocal_12659] + 36)[iLocal_127], *(&Local_178[iLocal_12659] + 104[iLocal_1273]));
					SET_OBJECT_ORIENTATION((*&Local_178[iLocal_12659] + 36)[iLocal_127], *(&Local_178[iLocal_12659] + 168[iLocal_1273]));
					bVar47 = RAND_INT_RANGE(true, 6);
					Function_396(bVar47, &Local_178[iLocal_12659] + 36[iLocal_127]);
				}
				if (iLocal_118)
				{
					if (iLocal_126 == Local_178.f_1520)
					{
						iLocal_118 = 0;
					}
					else
					{
						iVar48 = Local_178[iLocal_12659].f_64;
						iVar49 = iLocal_126;
						iLocal_126 = Function_410(Function_445(&Local_178, iVar48), 1);
						Function_444(21, 0);
					}
				}
				else if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_115)
				{
					if (!Function_207())
					{
						if (Function_321(&(Local_178[Function_489(1)59])) && Function_446(&Local_178) < 1)
						{
							Local_178.f_1500 = Local_178[iLocal_12659].f_64;
							Function_444(3, 0);
						}
						else
						{
							Function_444(27, 0);
						}
					}
					else
					{
						iVar50 = Local_178[iLocal_12659].f_64;
						Function_320();
						if (Function_446(&Local_178) >= 1)
						{
							if (Local_178[iLocal_12659].f_64 == 4294967295)
							{
								Local_178.f_1500 = Function_445(&Local_178, iVar50);
							}
							else
							{
								Local_178.f_1500 = Local_178[iLocal_12659].f_64;
							}
							Function_444(3, 1);
						}
						else
						{
							Function_444(27, 1);
						}
					}
				}
			}
			break;
		
		case 0x0000001B:
			if (Function_446(&Local_178) == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if ((*&Local_178 + 1420)[iVar03])
					{
						if (Function_488(&Local_178, Function_410(iVar0, 1)))
						{
							iVar51 = Function_410(iVar0, 1);
						}
					}
					iVar0++;
				}
				Function_340(&bLocal_120, Local_178[iVar5159]);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iVar51, &Local_178) };
				if (iVar51 == Function_489(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner", &Var4, false, false, false, 0, 2, 0, 0, 0);
				}
				if (!HUD_IS_FADED())
				{
					if (Function_335())
					{
						SAY_SINGLE_LINE_STRING(Local_178[iVar5159], "MPTAUNT_WIN", false, false, 0, 0, true, false);
					}
					else
					{
						Function_318();
					}
				}
				AUDIO_MUSIC_ONE_SHOT("MINI_GAME_STINGERS_WIN", 0, 0, 0, 0, 0);
				if (!Function_207())
				{
					if (iVar51 == Function_489(1))
					{
						bLocal_93 = true;
						Function_136((Local_139.f_48 * Function_317(&Local_178)), 1);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						bVar52 = Function_486(&Local_178, Function_489(1));
						PRINTSTRING("Player has won and he has a die count of ");
						PRINTINT(bVar52);
						PRINTNL();
						if (bVar52 == 5)
						{
							Function_106(431, 1, 0, 0);
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(10))
							{
								AWARD_ACHIEVEMENT(10);
							}
						}
						if (!HUD_IS_FADED() && Function_489(1) < 4294967295)
						{
							SAY_SINGLE_LINE_CONTEXT(Local_178[Function_489(1)59], 484, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						Function_106(429, ((Local_139.f_48 * Function_317(&Local_178)) - Local_139.f_48), 0, 0);
						Function_106(450, ((Local_139.f_48 * Function_317(&Local_178)) - Local_139.f_48), 0, 0);
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
						Function_134(429, Local_139.f_48, 0);
						Function_134(450, Local_139.f_48, 0);
						bVar53 = DECOR_GET_INT(Local_178[iVar5159], "iAdditionalMoney");
						DECOR_SET_INT(Local_178[iVar5159], "iAdditionalMoney", (bVar53 + (Local_139.f_48 * Function_316(&Local_178))));
					}
				}
				else if (iVar51 == Function_489(1))
				{
					bLocal_93 = true;
					if (NET_GET_PLAYMODE() == 0)
					{
						Function_315((Local_139.f_48 * iLocal_91), 1);
						Function_106(603, (Local_139.f_48 * (iLocal_91 - 1)), 1, 0);
						Function_252(7, 1);
						Function_252(0, 1);
						Function_252(37, 1);
					}
					PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
					Function_325(Function_330(1), 0, 1);
					iVar54 = Function_486(&Local_178, Function_489(1));
					if (iVar54 != 5 && Local_178.f_1496 != 6)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(73))
						{
							AWARD_ACHIEVEMENT(73);
						}
					}
					else if (iVar54 == 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(75))
						{
							AWARD_ACHIEVEMENT(75);
						}
					}
				}
				Function_294(&iLocal_97);
			}
			else
			{
				Function_106(430, 1, 0, 0);
				Function_134(429, Local_139.f_48, 0);
				Function_134(450, Local_139.f_48, 0);
				Local_178.f_1508 = 0;
			}
			Function_314(&Local_178);
			Function_444(28, 1);
			break;
		
		case 0x0000001C:
			if ((Function_448(&iLocal_97) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_115)
			{
				if (Function_207())
				{
					Function_259(0);
				}
				else
				{
					Function_340(&bLocal_120, Function_205());
					Local_178.f_1500 = Local_178.f_1504;
					Function_444(0, 1);
				}
			}
			break;
		
		case 0x0000001F:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_205()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_205()), "bQuitMinigame"))
				{
					if (bLocal_93)
					{
						Function_259(0);
					}
					else
					{
						Function_259(1);
					}
				}
				else
				{
					Function_444(iLocal_175, 0);
				}
				UI_EXIT("Liarsdice_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_205()), "bQuitMinigame");
			}
			break;
	}
	Function_313(&Local_178);
	Function_312(&Local_178, Function_489(1));
	if (!Function_207())
	{
		if ((IS_BUTTON_RELEASED(Function_440(), 5, 1, true) && !HUD_IS_FADING()) && !HUD_IS_FADED())
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_205()), "bQuitMinigame"))
			{
				UI_ENTER("Liarsdice_Quit_Confirmation_Popup");
			}
			iLocal_175 = iLocal_174;
			iLocal_174 = 31;
		}
	}
	if (Function_311())
	{
		if ((((iLocal_174 != 8 || iLocal_174 != 9) || iLocal_174 != 12) || iLocal_174 != 16) || iLocal_174 != 17)
		{
			iLocal_177 = 4;
			switch (iLocal_72)
			{
				case 0x00000000:
					if (Function_321(&(Local_178[Function_447(1)59])))
					{
						if ((!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_120) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_120) != 1) && iLocal_94)
						{
							Function_394(&bLocal_120, Local_178[Function_447(1)59], Local_178[Function_489(1)59], 1);
						}
					}
					break;
				
				case 0x00000001:
					Function_426(&bLocal_120);
					break;
				
				case 0x00000002:
					if (Function_321(&(Local_178[Function_447(1)59])))
					{
						Function_340(&bLocal_120, Local_178[Function_447(1)59]);
					}
					break;
			}
			if (Function_438(6))
			{
				iLocal_72++;
				if (iLocal_72 >= 2)
				{
					iLocal_72 = 0;
					iLocal_94 = 1;
				}
			}
		}
		else
		{
			iLocal_177 = 5;
		}
	}
	Function_255();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_177)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_307(2, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_307(1, 3, "LiarsDice_Ante", 1, 0, 0, 0, 0);
				Function_307(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_307(4, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				if (Function_488(&Local_178, Function_489(1)))
				{
					Function_307(3, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				}
				if (!Function_207())
				{
					Function_307(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
					Function_307(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000003:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_307(3, 1, "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				if (!Function_207())
				{
					Function_307(1, 6, "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
					Function_307(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000002:
				if (!IS_BUTTON_DOWN(Function_440(), 1, 1, false))
				{
					Function_307(8, 17, "LiarsDice_LookAround", 1, 0, 0, 0, 0);
				}
				Function_307(7, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
				if (!bVar20)
				{
					Function_307(5, 12, "LiarsDice_DieAmount", 1, 0, 0, 0, 0);
					Function_307(4, 16, "LiarsDice_DieType", 1, 0, 0, 0, 0);
				}
				if (Local_178.f_1520 != 4294967295)
				{
					Function_307(3, 3, "LiarsDice_CallBluff", 1, 0, 0, 0, 0);
					Function_307(2, 4, "LiarsDice_SpotOn", 1, 0, 0, 0, 0);
				}
				if (!bVar20)
				{
					Function_307(1, 1, "LiarsDice_Bid", 1, 0, 0, 0, 0);
				}
				if (!Function_207())
				{
					Function_307(0, 2, "LiarsDice_Quit", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000004:
				Function_307(0, 1, "Liars_ChangeCamera", 1, 0, 0, 0, 0);
				break;
			}
	}
	return;
}

int Function_307(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF6A2 / 63138
{
	if (!Function_310(iParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_309(iParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_308(iParam0, iParam2);
}

int Function_308(var uParam0, int iParam1) //Position: 0xF6DC / 63196
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_309(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF6EA / 63210
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_310(var uParam0, int iParam1) //Position: 0xF724 / 63268
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

bool Function_311() //Position: 0xF732 / 63282
{
	if (Function_489(1) >= 4294967295)
	{
		if (!Function_321(&(Local_178[Function_489(1)59])))
		{
			return 1;
		}
	}
	return 0;
}

void Function_312(var uParam0, int iParam1) //Position: 0xF752 / 63314
{
	if (iParam1 >= 4294967295)
	{
		SET_CURRENT_MINIGAME_INT("_pxxChipsAmount", uParam0[iParam159]->f_68);
	}
	return;
}

void Function_313(int iParam0) //Position: 0xF77C / 63356
{
	SET_CURRENT_MINIGAME_INT("_pxxPotAmount", iParam0->f_1508);
	return;
}

void Function_314(int iParam0) //Position: 0xF79B / 63387
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1420)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			Function_300(iParam0[StackVal59] + 36, 5);
		}
		iVar0++;
	}
	return;
}

int Function_315(bool bParam0, int iParam1) //Position: 0xF7D8 / 63448
{
	Function_106(599, bParam0, iParam1, 0);
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(599));
	UI_SET_STRING("nMPDollars", I2STR(Function_84(599)));
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
	}
	return 1;
}

int Function_316(int iParam0) //Position: 0xF84E / 63566
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_321(iParam0[Function_410(iVar0, 1)59]))
			{
				if ((iParam0[Function_410(iVar0, 1)59])->f_68 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_317(int iParam0) //Position: 0xF89D / 63645
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

void Function_318() //Position: 0xF8CC / 63692
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_Winner", 0);
	}
	return;
}

void Function_319(bool bParam0, bool bParam1) //Position: 0xF900 / 63744
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_320() //Position: 0xF940 / 63808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Local_178 + 1420)[iVar03])
		{
			if (Local_178[Function_410(iVar0, 1)59].f_60 == 3)
			{
				Function_299(&Local_178, Function_410(iVar0, 1));
			}
		}
		iVar0++;
	}
	return;
}

bool Function_321(int iParam0) //Position: 0xF97F / 63871
{
	return Function_322(iParam0) < 0;
}

int Function_322(int iParam0) //Position: 0xF98C / 63884
{
	return vLocal_604[Function_323(iParam0)9].f_24;
}

int Function_323(var uParam0) //Position: 0xF99E / 63902
{
	if (Function_207())
	{
		return Function_303(*uParam0);
	}
	return uParam0->f_64;
}

void Function_324() //Position: 0xF9B5 / 63925
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_PlayerLosesLastDie_O", 0);
	}
	return;
}

int Function_325(float fParam0, int iParam1, bool bParam2) //Position: 0xF9F2 / 63986
{
	if (!Function_329())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_327(8, fParam0);
	}
	Function_326(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_326(int iParam0, bool bParam1, bool bParam2) //Position: 0xFA22 / 64034
{
	Function_106(iParam0, CEIL(bParam1), 1, bParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_327(int iParam0, float fParam1) //Position: 0xFA3E / 64062
{
	Function_328(iParam0, (Function_216(iParam0) + fParam1));
	return;
}

void Function_328(int iParam0, float fParam1) //Position: 0xFA51 / 64081
{
	(*&Global_78480 + 176)[iParam0] = fParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = fParam1;
	}
	return;
}

bool Function_329() //Position: 0xFA7A / 64122
{
	if (Function_59())
	{
		return (Function_251() != 1 || Function_251() != 0);
	}
	return 0;
}

float Function_330(int iParam0) //Position: 0xFA93 / 64147
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = (Function_448(&iLocal_112) / 1800.0f);
	if (bVar0 < 1.0f)
	{
		bVar0 = 1.0f;
	}
	PRINTSTRING("XPRatio = ");
	PRINTFLOAT(bVar0);
	PRINTNL();
	switch (iParam0)
	{
		case 0x00000001:
			bVar1 = (Function_331(0) * bVar0);
			break;
		
		case 0x00000002:
			bVar1 = (Function_331(1) * bVar0);
			break;
		
		case 0x00000003:
			bVar1 = (Function_331(2) * bVar0);
			break;
	}
	PRINTSTRING("XPDelta = ");
	PRINTFLOAT(bVar1);
	PRINTNL();
	return bVar1;
}

float Function_331(int iParam0) //Position: 0xFB1F / 64287
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

void Function_332() //Position: 0xFB3F / 64319
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_PlayerLosesLastDie_U", 0);
	}
	return;
}

void Function_333() //Position: 0xFB7C / 64380
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_PlayrLosesDie_OtherP", 0);
	}
	return;
}

void Function_334() //Position: 0xFBB9 / 64441
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_PlayrLosesDie_You", 0);
	}
	return;
}

bool Function_335() //Position: 0xFBF3 / 64499
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

bool Function_336(int iParam0) //Position: 0xFC0E / 64526
{
	return Function_337(&(uLocal_749[iParam0]), &vLocal_604[iParam09] + 28);
}

bool Function_337(var uParam0, int iParam1) //Position: 0xFC27 / 64551
{
	return *uParam0 == *iParam1;
}

void Function_338(var uParam0, int iParam1) //Position: 0xFC34 / 64564
{
	if (uParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	Function_339(uParam0, iParam1, 4294967295);
	return;
}

void Function_339(int iParam0, int iParam1, int iParam2) //Position: 0xFC4F / 64591
{
	int iVar0;
	
	iVar0 = Function_407(iParam0, iParam1);
	vLocal_604[iVar09].f_24 = (vLocal_604[iVar09].f_24 + iParam2);
	Function_406(&vLocal_604[iVar09] + 28);
	return;
}

void Function_340(bool bParam0, bool bParam1) //Position: 0xFC7F / 64639
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
	iLocal_94 = 1;
	return;
}

void Function_341(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xFD0A / 64778
{
	bool bVar0;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_345(238);
			if ((*iParam3)[0] > 2)
			{
				*uParam2 = 0.0f;
				Function_344(238, uParam1, 1, 7012, 50.0f, 100.0f, 0, 1, 0);
				Function_343(238);
			}
			break;
		
		case 0x00000001:
			Function_343(238);
			if ((*iParam3)[1] > 2)
			{
				*uParam2 = 0.0f;
				Function_344(238, uParam1, 2, 7013, 100.0f, 150.0f, 10, 1, 0);
				Function_343(238);
			}
			break;
		
		case 0x00000002:
			Function_343(238);
			Global_50170[23822].f_28++;
			bVar0 = Global_50170[23822].f_28;
			if (bVar0 > 10)
			{
				*uParam2 = 0.0f;
				Function_344(238, uParam1, 3, 7014, 150.0f, 200.0f, 20, 0, 0);
				Function_343(238);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				Function_221(238, *uParam2, 1, bVar0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			Function_343(238);
			Global_50170[23822].f_28++;
			bVar0 = Global_50170[23822].f_28;
			if (bVar0 > 20)
			{
				*uParam2 = 0.0f;
				Global_50170[23822].f_28 = 0;
				Function_344(238, uParam1, 4, 7015, 200.0f, 250.0f, 10, 1, 0);
				Function_343(238);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(20));
				Function_221(238, *uParam2, 1, bVar0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000004:
			Function_343(238);
			Global_50170[23822].f_28++;
			bVar0 = Global_50170[23822].f_28;
			if (bVar0 > 10)
			{
				*uParam2 = 0.0f;
				Function_344(238, uParam1, 5, 7016, 250.0f, 300.0f, 20, 0, 0);
				Function_343(238);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				Function_221(238, *uParam2, 1, bVar0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000005:
			Function_343(238);
			Global_50170[23822].f_28++;
			bVar0 = Global_50170[23822].f_28;
			if (bVar0 > 20)
			{
				*uParam2 = 0.0f;
				Function_342(238, uParam1, iParam0, 7017, 300.0f, "SC_LiarsDice_Icon_128");
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(20));
				Function_221(238, *uParam2, 1, bVar0, 4294967295, 4294967295);
			}
			break;
	}
}

void Function_342(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xFF70 / 65392
{
	struct<4> Var0;
	
	Function_240(bParam0, 1);
	*iParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_234(iParam3);
	}
	Function_325(bParam4, 0, 1);
	Function_236(bParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_223(bParam0) };
	Function_228(&Var0, CEIL(bParam4), bParam5);
	Function_244(bParam0, 4);
	Function_227();
}

void Function_343(bool bParam0) //Position: 0xFFDC / 65500
{
	Function_345(bParam0);
	return;
}

void Function_344(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xFFE7 / 65511
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam8))
	{
		bParam8 = "SC_LiarsDice_Icon_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_223(iParam0) };
	Function_228(&Var0, CEIL(bParam4), bParam8);
	*uParam1 = bParam2;
	if (bParam7)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_224(iParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_224(iParam0), (TO_FLOAT(Global_50170[iParam022].f_28) / TO_FLOAT(bParam6)), false, 0);
	}
	Function_245(iParam0, bParam6, CEIL(bParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_234(iParam3);
	}
	Function_244(iParam0, 4);
	Function_227();
}

void Function_345(int iParam0) //Position: 0x10087 / 65671
{
	Function_346(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_346(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1009D / 65693
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_347() //Position: 0x10112 / 65810
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_EveryLosesDie", 0);
	}
	return;
}

var Function_348(int iParam0, int iParam1) //Position: 0x1014D / 65869
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_352(&(vLocal_604[Function_407(iParam0, Function_410(iVar0, 1))9]), iParam1));
		}
		iVar0++;
	}
	return iVar1;
}

var Function_349() //Position: 0x10190 / 65936
{
	if (!Function_207())
	{
		UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer32_0", Function_350(GET_LOCAL_SLOT(), 1));
	}
	return "Generic_DBuffer32_0";
}

var Function_350(var uParam0, int iParam1) //Position: 0x101FC / 66044
{
	return NET_GET_GAMER_HEX_COLOR(uParam0, iParam1);
}

void Function_351(int iParam0) //Position: 0x10209 / 66057
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iLocal_595[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= iParam0->f_24)
	{
		switch ((*iParam0)[iVar0])
		{
			case 0x00000001:
				iLocal_595[0]++;
				break;
			
			case 0x00000002:
				iLocal_595[1]++;
				break;
			
			case 0x00000003:
				iLocal_595[2]++;
				break;
			
			case 0x00000004:
				iLocal_595[3]++;
				break;
			
			case 0x00000005:
				iLocal_595[4]++;
				break;
			
			case 0x00000006:
				iLocal_595[5]++;
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar1++;
	}
	if (StackVal <= 2)
	{
		Function_341(&Global_50170[23822] + 4, &Global_50170[23822] + 8, &Global_50170[23822] + 12, &iLocal_595);
	}
	Function_471(&Global_50170[23922] + 4, &Global_50170[23922] + 8, &Global_50170[23922] + 12, &iLocal_595);
	return;
}

bool Function_352(var uParam0, int iParam1) //Position: 0x10337 / 66359
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

void Function_353(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10368 / 66408
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
	iLocal_94 = 1;
}

void Function_354(int iParam0) //Position: 0x1052D / 66861
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = Function_486(&Local_178, iParam0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (!GET_OBJECT_POSITION((*&Local_178[iParam059] + 36)[iVar0], &vVar2))
		{
		}
		if (!GET_OBJECT_ORIENTATION((*&Local_178[iParam059] + 36)[iVar0], &vVar5))
		{
		}
		DESTROY_OBJECT((*&Local_178[iParam059] + 36)[iVar0]);
		(*&Local_178[iParam059] + 36)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_92, Function_71(), "$/fragments/p_gen_dice01x", vVar2, vVar5, 0);
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

bool Function_355(int iParam0, int iParam1) //Position: 0x105CC / 67020
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<16> Var5;
	bool bVar21;
	bool bVar22;
	
	bVar0 = Function_352(&(vLocal_604[Function_407(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_377(iParam0) - Function_486(iParam0, iParam1));
	bVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (iParam0->f_1512 == 1)
	{
		bVar3 = 1.8f;
	}
	else
	{
		bVar3 = (TO_FLOAT((iParam0->f_1512 - bVar0)) / bVar2);
	}
	if (Function_377(iParam0) <= ((5 * iParam0->f_1496) / 2))
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
	Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iParam1, iParam0) };
	if (bVar3 < 1.8f)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		HUD_CLEAR_OBJECTIVE();
		PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var5, false, false, false, 0, 2, 0, 0, 0);
		if (!HUD_IS_FADED())
		{
			if (Function_335())
			{
				SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 275, Function_205(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else if (iParam0[Function_489(1)59]->f_96 != iParam0->f_1512 && iParam0[Function_489(1)59]->f_100 != iParam0->f_1516)
			{
				if (Function_489(1) >= 4294967295)
				{
					SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_489(1)59], 489, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
		}
		if (IS_AMBIENT_SPEECH_PLAYING((*iParam0)[iParam159]))
		{
			SET_ACTION_NODE_FOR_ACTOR((*iParam0)[iParam159], "liars_dice/verbal_callout");
		}
		return 0;
	}
	bVar21 = Function_357(&(vLocal_604[Function_407(iParam0, iParam1)9]));
	bVar0 = Function_352(&(vLocal_604[Function_407(iParam0, iParam1)9]), bVar21);
	bVar1 = (Function_377(iParam0) - Function_486(iParam0, iParam1));
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
			bVar0 = Function_352(&(vLocal_604[Function_407(iParam0, iParam1)9]), iParam0[iParam159]->f_100);
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
				iParam0[iParam159]->f_100 = Function_356(iParam0);
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
	Function_383(iParam0, iParam1, 0);
	if (!HUD_IS_FADED())
	{
		if (Function_335())
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[iParam159], 276, Function_205(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (Function_489(1) >= 4294967295)
		{
			SAY_SINGLE_LINE_CONTEXT((*iParam0)[Function_489(1)59], 490, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
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

var Function_356(int iParam0) //Position: 0x10B21 / 68385
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
			if (Function_488(iParam0, iVar2))
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

var Function_357(int iParam0) //Position: 0x10B97 / 68503
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
		iVar3 = Function_352(iParam0, iVar2);
		if (iVar3 >= iVar1)
		{
			iVar1 = iVar3;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void Function_358(var uParam0, bool bParam1) //Position: 0x10BCF / 68559
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1);
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
	fVar4 = ((-fLocal_128 * fLocal_88) * bLocal_591);
	fLocal_129 = (((fLocal_128 + (fVar2 / fLocal_89)) + fVar4) + fVar3);
	fLocal_130 = (fLocal_131 + (fLocal_129 * bLocal_591));
	if (fLocal_130 > -1.0f)
	{
		fLocal_129 = 0.0f;
		fLocal_130 = -1.0f;
	}
	else if (fLocal_130 < 1.0f)
	{
		fLocal_129 = 0.0f;
		fLocal_130 = 1.0f;
	}
	uParam0->f_1524 = ((fLocal_130 / 2.0f) + 0.5f);
	fLocal_128 = fLocal_129;
	fLocal_131 = fLocal_130;
	SET_PANIM_PHASE(bParam1, uParam0->f_1524);
	return;
}

void Function_359() //Position: 0x10C73 / 68723
{
	fLocal_75 = 0.0f;
	fLocal_76 = 0.0f;
	fLocal_77 = 0.0f;
	fLocal_78 = 0.0f;
	return;
}

void Function_360(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x10C85 / 68741
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
	iVar15 = Function_387(iParam1 + 1420, iParam1[iParam259]->f_64);
	iVar16 = Function_375(iParam1 + 1420, iParam1[iParam259]->f_64);
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
	iLocal_94 = 0;
}

void Function_361(int iParam0, bool bParam1) //Position: 0x10ECA / 69322
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_447(1);
	bVar1 = (*iParam0)[iVar059];
	bVar2 = Function_363(&iLocal_100, 70613);
	if ((Function_438(6) && !bParam1) || (bVar2 && Function_386(iParam0)))
	{
		if (bVar2)
		{
			Function_385(iParam0, iParam0[iVar059] + 96, iParam0[iVar059] + 100);
		}
		if (iParam0[iVar059]->f_96 < iParam0->f_1512 || (iParam0[iVar059]->f_100 < iParam0->f_1516 && iParam0[iVar059]->f_96 <= iParam0->f_1512))
		{
			HUD_CLEAR_OBJECTIVE();
			if (iParam0->f_1512 != 0)
			{
				Function_384();
			}
			Function_383(iParam0, iVar0, bVar2);
			Function_294(&iLocal_97);
			Function_255();
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			if (bVar2)
			{
				Function_362(6, iParam0->f_1516, iParam0->f_1512);
			}
			else
			{
				Function_362(1, iParam0->f_1516, iParam0->f_1512);
			}
			SET_DRAW_ACTOR(bVar1, true);
			HUD_TIMER_DISPLAY(0);
			iLocal_177 = 5;
			Function_444(16, 0);
			if (Function_207())
			{
				Function_206();
			}
		}
		else
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			Function_294(&iLocal_103);
			Function_369("LiarsDice_IllegalBid", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
		return;
	}
	if (!iParam0->f_1520 != 4294967295)
	{
		if (Function_438(7) || bVar2)
		{
			Function_255();
			Function_294(&iLocal_97);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (bVar2)
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_AutoCallOutBluff_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_CallOutBluff_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
			}
			Function_381();
			if (Function_431(&iLocal_132, 5))
			{
				Function_155("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_callout");
			}
			if (bVar2)
			{
				Function_362(5, 0, 0);
			}
			else
			{
				Function_362(2, 0, 0);
			}
			SET_DRAW_ACTOR(bVar1, true);
			HUD_TIMER_DISPLAY(0);
			iLocal_177 = 5;
			Function_444(17, 0);
			if (Function_207())
			{
				Function_206();
			}
			return;
		}
		if (Function_438(4))
		{
			Function_380();
			if (Function_431(&iLocal_132, 6))
			{
				Function_155("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_255();
			Function_294(&iLocal_97);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(7.5f, "LiarsDice_Call_SpotOn_You", Function_349(), false, false, false, 0, 2, 0, 0, 0);
			if (IS_AMBIENT_SPEECH_PLAYING(bVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/verbal_bid");
			}
			Function_362(3, 0, 0);
			SET_DRAW_ACTOR(bVar1, true);
			iLocal_118 = 1;
			HUD_TIMER_DISPLAY(0);
			iLocal_177 = 5;
			Function_444(17, 0);
			if (Function_207())
			{
				Function_206();
			}
			return;
		}
	}
	return;
}

void Function_362(int iParam0, int iParam1, int iParam2) //Position: 0x111E0 / 70112
{
	struct<9> Var0;
	
	if (!Function_207())
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

int Function_363(int iParam0, int iParam1) //Position: 0x11246 / 70214
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_207())
	{
		return 0;
	}
	bVar0 = (30.0f - Function_448(iParam0));
	bVar1 = CEIL(bVar0);
	if (bVar0 >= 0.0f)
	{
		iParam0->f_8 = 0.0f;
		HUD_TIMER_DISPLAY(0);
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
		if (bVar1 < 10)
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		iParam0->f_8 = bVar0;
		switch (bVar1)
		{
			case 0x0000000A:
				Function_155("Minigame_Timeout_Warning", 10.0f, 1, 0, 2, 1, 0);
				HUD_TIMER_DISPLAY(1);
				HUD_TIMER_COUNTDOWN(10.0f);
				FLASH_SET_INT("numberSystem", "TimerColor", 2);
				FLASH_SET_INT("numberSystem", "TimerAlert", true);
				Call_Loc(iParam1);
			
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

void Function_364() //Position: 0x113D5 / 70613
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_2Slow", 0);
	}
	return;
}

void Function_365(int iParam0) //Position: 0x11408 / 70664
{
	if (Function_207() && NET_IS_IN_SESSION())
	{
		vLocal_604[GET_LOCAL_SLOT()9].f_32 = iParam0;
	}
	return;
}

void Function_366(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11424 / 70692
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
	if ((((((((GET_ACTOR_ENUM((*uParam1)[iParam259]) != 885 || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 936) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 939) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 846) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 849) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 850) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 852) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 948) || GET_ACTOR_ENUM((*uParam1)[iParam259]) != 903)
	{
		fVar15 = 0.015f;
		fVar16 = 0.95f;
		fVar17 = 0.25f;
		fVar18 = -0.18f;
		fVar19 = 0.75f;
		fVar20 = -0.5f;
	}
	if (GET_ACTOR_ENUM((*uParam1)[iParam259]) == 947)
	{
		fVar15 = 0.0f;
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
	iLocal_94 = 1;
}

void Function_367(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11733 / 71475
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
	fVar10 = GET_STICK_X(Function_440(), 1, 1);
	if ((fVar10 < -0.5f && fVar10 > 0.5f) || !UI_ISFOCUSED("HudSceneOnline"))
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
	fVar14 = (-1.0f * fLocal_77);
	fVar15 = (fVar14 + fVar12);
	fVar16 = (-0.5f * fLocal_78);
	fVar17 = (fVar16 + fVar13);
	fVar18 = ((-fLocal_75 * 10.0f) * bLocal_591);
	fVar19 = ((-fLocal_76 * 5.0f) * bLocal_591);
	fVar20 = ((fLocal_75 + (fVar15 / 1.0f)) + fVar18);
	fVar21 = ((fLocal_76 + (fVar17 / 1.0f)) + fVar19);
	fVar22 = (fLocal_77 + (fVar20 * bLocal_591));
	fVar23 = (fLocal_78 + (fVar21 * bLocal_591));
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
	fLocal_75 = fVar20;
	fLocal_77 = fVar22;
	fLocal_76 = fVar21;
	fLocal_78 = fVar23;
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

var Function_368(bool bParam0) //Position: 0x1195B / 72027
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

void Function_369(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11A45 / 72261
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

void Function_370(int iParam0) //Position: 0x11ACA / 72394
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

void Function_371(int iParam0) //Position: 0x11C21 / 72737
{
	float fVar0;
	float fVar1;
	
	fVar0 = GET_STICK_Y(Function_440(), 0, 1);
	fVar1 = GET_STICK_Y(Function_440(), 1, 1);
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		fVar0 = 0.0f;
		fVar1 = 0.0f;
	}
	if ((Function_438(12) || Function_374(12)) || fVar0 > -0.3f)
	{
		if (iLocal_123 == 1)
		{
			fLocal_121 = (fLocal_121 - 0.004f);
		}
		else
		{
			fLocal_121 = 0.2f;
		}
		iLocal_123 = 1;
		if (Function_448(&iLocal_106) < fLocal_121)
		{
			iParam0[Function_447(1)59]->f_96++;
			Function_294(&iLocal_106);
			if (Function_373(&Local_178, iParam0[Function_447(1)59]->f_96) == iParam0[Function_447(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if ((Function_438(14) || Function_374(14)) || fVar0 < 0.3f)
	{
		if (iLocal_123 == 4294967295)
		{
			fLocal_121 = (fLocal_121 - 0.004f);
		}
		else
		{
			fLocal_121 = 0.2f;
		}
		iLocal_123 = 4294967295;
		if (Function_448(&iLocal_106) < fLocal_121)
		{
			iParam0[Function_447(1)59]->f_96 = (iParam0[Function_447(1)59]->f_96 - 1);
			Function_294(&iLocal_106);
			if (Function_373(&Local_178, iParam0[Function_447(1)59]->f_96) == iParam0[Function_447(1)59]->f_96)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_123 = 0;
		fLocal_121 = 0.2f;
	}
	iParam0[Function_447(1)59]->f_96 = Function_373(iParam0, iParam0[Function_447(1)59]->f_96);
	if (fVar1 > -0.3f)
	{
		if (iLocal_124 == 1)
		{
			fLocal_122 = (fLocal_122 - 0.004f);
		}
		else
		{
			fLocal_122 = 0.2f;
		}
		iLocal_124 = 1;
		if (Function_448(&iLocal_109) < fLocal_122)
		{
			iParam0[Function_447(1)59]->f_100++;
			Function_294(&iLocal_109);
			if (Function_372(iParam0[Function_447(1)59]->f_100) == iParam0[Function_447(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if (fVar1 < 0.3f)
	{
		if (iLocal_124 == 4294967295)
		{
			fLocal_122 = (fLocal_122 - 0.004f);
		}
		else
		{
			fLocal_122 = 0.2f;
		}
		iLocal_124 = 4294967295;
		if (Function_448(&iLocal_109) < fLocal_122)
		{
			iParam0[Function_447(1)59]->f_100 = (iParam0[Function_447(1)59]->f_100 - 1);
			Function_294(&iLocal_109);
			if (Function_372(iParam0[Function_447(1)59]->f_100) == iParam0[Function_447(1)59]->f_100)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_124 = 0;
		fLocal_122 = 0.2f;
	}
	iParam0[Function_447(1)59]->f_100 = Function_372(iParam0[Function_447(1)59]->f_100);
	return;
}

int Function_372(int iParam0) //Position: 0x11ED9 / 73433
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

int Function_373(int iParam0, int iParam1) //Position: 0x11EF6 / 73462
{
	return Function_76(1, Function_77(Function_377(iParam0), Function_76(iParam1, iParam0->f_1512)));
}

var Function_374(int iParam0) //Position: 0x11F12 / 73490
{
	return (Function_494(iParam0, 1, 1) && UI_ISFOCUSED("HudSceneOnline"));
}

int Function_375(var uParam0, int iParam1) //Position: 0x11F34 / 73524
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

bool Function_376(int iParam0, int iParam1) //Position: 0x11FD2 / 73682
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_352(&(vLocal_604[Function_407(iParam0, iParam1)9]), iParam0->f_1516);
	bVar1 = (Function_377(iParam0) - Function_486(iParam0, iParam1));
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
	return 0;
}

int Function_377(int iParam0) //Position: 0x12043 / 73795
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			iVar1 = (iVar1 + Function_486(iParam0, Function_410(iVar0, 1)));
		}
		iVar0++;
	}
	return iVar1;
}

void Function_378() //Position: 0x1207C / 73852
{
	bool bVar0;
	int iVar1;
	
	if (Function_207())
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			if ((*&Local_178 + 1420)[iVar13] && iVar1 == Local_178.f_1504)
			{
				bVar0 = Local_178[Function_410(iVar1, 1)59];
				if (Function_379(Function_303(bVar0)))
				{
					if (IS_ACTION_NODE_PLAYING(bVar0, "liars_dice/cup_idle"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "liars_dice/check_lift");
					}
				}
				else if (IS_ACTION_NODE_PLAYING(bVar0, "liars_dice/check_idle"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "liars_dice/check_close");
				}
			}
			iVar1++;
		}
	}
	return;
}

bool Function_379(int iParam0) //Position: 0x12144 / 74052
{
	return vLocal_604[iParam09].f_32;
}

void Function_380() //Position: 0x12153 / 74067
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_SpotOn", 0);
	}
	return;
}

void Function_381() //Position: 0x12187 / 74119
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_BidCalldOut", 0);
	}
	return;
}

void Function_382(int iParam0) //Position: 0x121C0 / 74176
{
	UI_ENTER("Dice");
	UI_ENTER("NumberOfDice");
	UI_ENTER("DiceNumber");
	if (iParam0->f_1500 != iParam0->f_1504 && iLocal_174 != 10)
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

void Function_383(int iParam0, int iParam1, bool bParam2) //Position: 0x12300 / 74496
{
	bool bVar0;
	struct<16> Var1;
	
	iParam0->f_1512 = iParam0[iParam159]->f_96;
	iParam0->f_1516 = iParam0[iParam159]->f_100;
	iParam0->f_1520 = iParam1;
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(iParam1, iParam0) };
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
		PRINT_OBJECTIVE_FORMAT(7.5f, bVar0, Function_349(), Function_428(iParam0[iParam159]->f_96), Function_368(iParam0[iParam159]->f_100), false, 0, 2, 0, 0, 0);
	}
	else
	{
		PRINT_OBJECTIVE_FORMAT(7.5f, bVar0, &Var1, Function_428(iParam0[iParam159]->f_96), Function_368(iParam0[iParam159]->f_100), false, 0, 2, 0, 0, 0);
	}
	return;
}

void Function_384() //Position: 0x124DB / 74971
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_BidMade", 0);
	}
	return;
}

void Function_385(int iParam0, var uParam1, int iParam2) //Position: 0x12510 / 75024
{
	*uParam1 = iParam0->f_1512 + 1;
	*iParam2 = 1;
	return;
}

bool Function_386(int iParam0) //Position: 0x12524 / 75044
{
	return iParam0->f_1512 > Function_377(iParam0);
}

int Function_387(var uParam0, int iParam1) //Position: 0x12535 / 75061
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

void Function_388(int iParam0) //Position: 0x125D4 / 75220
{
	bool bVar0;
	bool bVar1;
	
	Function_378();
	bVar0 = false;
	Function_256(6);
	if ((*iParam0 + 1420)[iParam0->f_15043])
	{
		if (Function_321(iParam0[Function_489(1)59]))
		{
			if (Function_447(0) != Function_489(0))
			{
				bVar1 = (*iParam0)[Function_489(1)59];
				if ((GET_ANALOG_BUTTON_VALUE(Function_440(), 1, 1) < 0.1f || Local_178.f_1524 == 0.0f) && !bLocal_115)
				{
					if (!IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/check_sweep");
						fLocal_128 = 0.0f;
						fLocal_131 = -1.0f;
					}
					Function_366(&bLocal_120, iParam0, Function_489(1), 1);
					Function_358(iParam0, bVar1);
					Function_256(6);
					Function_365(1);
				}
				else
				{
					Function_307(6, 8, "LiarsDice_Look", 1, 0, 0, 0, 0);
					if (IS_ACTION_NODE_PLAYING(bVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar1, "liars_dice/cup_idle");
						bVar0 = true;
					}
					Function_365(0);
				}
			}
		}
		else
		{
			Function_365(0);
		}
	}
	else
	{
		Function_365(0);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Function_447(0) >= 4294967295)
		{
			if (Function_447(0) != Function_489(0))
			{
				Function_394(&bLocal_120, Local_178[Function_447(0)59], Local_178[Function_489(1)59], 1);
			}
		}
	}
	return;
}

struct<64> Function_389(int iParam0, int iParam1) //Position: 0x1273A / 75578
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_390((*iParam1)[iParam059], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam1[iParam059] + 4), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_390(bool bParam0, char* cParam1) //Position: 0x12773 / 75635
{
	struct<8> Var0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_207())
		{
			if (Function_391(bParam0, &Var0))
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

bool Function_391(bool bParam0, char* cParam1) //Position: 0x127CE / 75726
{
	var uVar0;
	
	uVar0 = Function_303(bParam0);
	strcpy(cParam1, Function_392(uVar0), 32);
	return 1;
}

var Function_392(int iParam0) //Position: 0x127E5 / 75749
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

void Function_393() //Position: 0x129F9 / 76281
{
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	FLASH_SET_INT("numberSystem", "nshowTimer", true);
	FLASH_SET_STRING("numberSystem", "nTimerText", "Minigame_RemainingTime", 1);
	FLASH_SET_INT("numberSystem", "TimerColor", false);
	FLASH_SET_INT("numberSystem", "TimerAlert", false);
	return;
}

void Function_394(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12AAC / 76460
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
			if (!IS_OBJECT_VALID(bLocal_770))
			{
				bLocal_770 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_92, Function_71());
			}
			if (!IS_OBJECT_VALID(bLocal_771))
			{
				bLocal_771 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_92, Function_71());
			}
			Function_395(bLocal_770);
			Function_395(bLocal_771);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(bLocal_770, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(bLocal_771, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(bLocal_770, 1);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(bLocal_771, 1);
			SET_CAMERASHOT_POSITION(bLocal_770, vVar15);
			SET_CAMERASHOT_DIRECTION(bLocal_770, vVar18, 0);
			SET_CAMERASHOT_FOV(bLocal_770, 31.0f);
			SET_CAMERASHOT_POSITION(bLocal_771, vVar9);
			SET_CAMERASHOT_TARGET_POSITION(bLocal_771, vVar12, 0);
			SET_CAMERASHOT_FOV(bLocal_771, 31.0f);
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam0, bLocal_770, bLocal_771, 0.75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam0, bLocal_771, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_94 = 0;
}

void Function_395(bool bParam0) //Position: 0x12CB0 / 76976
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_396(bool bParam0, int iParam1) //Position: 0x12CC1 / 76993
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
	Function_397(*iParam1);
	SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, Function_397(*iParam1), *iParam1));
	return;
}

vector3 Function_397(bool bParam0) //Position: 0x12D95 / 77205
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

var Function_398(int iParam0, int iParam1, int iParam2) //Position: 0x12DBC / 77244
{
	return vLocal_604[Function_407(iParam0, iParam1)9][iParam2];
}

void Function_399(int iParam0) //Position: 0x12DD2 / 77266
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_488(iParam0, Function_410(iVar0, 1)))
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0)[Function_410(iVar0, 1)59], "liars_dice/cup_idle_skip");
				if (IS_ATTACHMENT_VALID((iParam0[Function_410(iVar0, 1)59])->f_92))
				{
					REMOVE_OBJECT_ATTACHMENT((iParam0[Function_410(iVar0, 1)59])->f_92);
				}
				Function_400((*iParam0)[Function_410(iVar0, 1)59], &vVar1, &vVar4, 0);
				SET_OBJECT_POSITION((iParam0[Function_410(iVar0, 1)59])->f_88, vVar1);
				SET_OBJECT_ORIENTATION((iParam0[Function_410(iVar0, 1)59])->f_88, vVar4);
			}
		}
		iVar0++;
	}
	return;
}

void Function_400(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x12E88 / 77448
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

int Function_401(int iParam0) //Position: 0x1303B / 77883
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_488(iParam0, Function_410(iVar0, 1)))
			{
				if (!IS_ACTION_NODE_PLAYING((*iParam0)[Function_410(iVar0, 1)59], "liars_dice/cup_idle"))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_402(int iParam0) //Position: 0x13097 / 77975
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1420)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (IS_ACTION_NODE_PLAYING((*iParam0)[StackVal59], "liars_dice/cup_shuffle_pst") || bLocal_115)
			{
				if (IS_OBJECT_VALID((*iParam0[059] + 36)[StackVal]))
				{
					Function_300(StackVal, Function_486(iParam0[StackVal59] + 36, iParam0));
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_403() //Position: 0x13132 / 78130
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_604, bVar0))
		{
			Function_404(&(uLocal_749[bVar0]), &vLocal_604[bVar09] + 28);
		}
		bVar0++;
	}
	return;
}

void Function_404(var uParam0, var uParam1) //Position: 0x13169 / 78185
{
	*uParam0 = *uParam1;
	return;
}

bool Function_405() //Position: 0x13175 / 78197
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_604, bVar0))
		{
			if (!Function_337(&(uLocal_749[bVar0]), &vLocal_604[bVar09] + 28))
			{
				return 0;
			}
			iVar1 = 1;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_406(int iParam0) //Position: 0x131BA / 78266
{
	*iParam0++;
	return;
}

int Function_407(int iParam0, int iParam1) //Position: 0x131C8 / 78280
{
	if (iParam1 >= 4294967295)
	{
		return Function_323(iParam0[iParam159]);
	}
	return 4294967295;
}

void Function_408(int iParam0, int iParam1) //Position: 0x131E2 / 78306
{
	int iVar0;
	
	if (iParam0[iParam159]->f_60 == 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Function_486(iParam0, iParam1))
	{
		Function_409(&(vLocal_604[Function_407(iParam0, iParam1)9][iVar0]));
		iVar0++;
	}
	Function_406(&vLocal_604[Function_407(iParam0, iParam1)9] + 28);
	return;
}

void Function_409(int iParam0) //Position: 0x13231 / 78385
{
	*iParam0 = RAND_INT_RANGE(true, 6);
	return;
}

int Function_410(int iParam0, int iParam1) //Position: 0x1323F / 78399
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

bool Function_411(bool bParam0, bool bParam1, float fParam2) //Position: 0x132C7 / 78535
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_425(bParam0);
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
	if (Function_424(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_423(&Var0, 0);
		Function_5(&Var0);
		Function_7();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_422(bParam0, iVar6, &uVar7))
	{
		if (Function_421())
		{
			if (!Function_420(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_419(&Var0, 1);
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
				if (Function_412(bParam0))
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

bool Function_412(int iParam0) //Position: 0x1351A / 79130
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_417(bVar0))
		{
			iVar1 = Function_413(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_413(bool bParam0) //Position: 0x1355D / 79197
{
	int iVar0;
	
	Function_416(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_13(&iVar0);
	}
	else
	{
		Function_415(&iVar0, bParam0);
	}
	return Function_414(&iVar0);
}

int Function_414(int iParam0) //Position: 0x13584 / 79236
{
	return *iParam0;
}

void Function_415(var uParam0, int iParam1) //Position: 0x1358D / 79245
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_416(int iParam0) //Position: 0x135A0 / 79264
{
	Function_11(iParam0, 4294967286);
	return;
}

bool Function_417(bool bParam0) //Position: 0x135AE / 79278
{
	return Function_418(bParam0);
}

bool Function_418(bool bParam0) //Position: 0x135B9 / 79289
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

void Function_419(int iParam0, bool bParam1) //Position: 0x1365A / 79450
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

bool Function_420(bool bParam0) //Position: 0x13674 / 79476
{
	return Function_31(*bParam0, 2);
}

bool Function_421() //Position: 0x13681 / 79489
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

bool Function_422(int iParam0, var uParam1, int iParam2) //Position: 0x1369F / 79519
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
		if (Function_417(iVar0))
		{
			iVar1 = Function_413(iVar0);
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

void Function_423(int iParam0, bool bParam1) //Position: 0x136F0 / 79600
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

bool Function_424(int iParam0) //Position: 0x1370A / 79626
{
	return Function_31(*iParam0, 1);
}

void Function_425(int iParam0) //Position: 0x13717 / 79639
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_13(&iVar1);
	if (Function_414(&iVar1) != bVar0)
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
		Function_419(&Var2, 0);
		Function_5(&Var2);
	}
	return;
}

void Function_426(bool bParam0) //Position: 0x13814 / 79892
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	
	vVar0 = { StackVal, StackVal, *(&Local_139 + 32) };
	vVar0.f_4 = (vVar0.y + 0.2f);
	bVar6 = Function_205();
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
	iLocal_94 = 1;
	return;
}

int Function_427(bool bParam0, bool bParam1) //Position: 0x138DE / 80094
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

var Function_428(bool bParam0) //Position: 0x1396E / 80238
{
	bool bVar0;
	
	bVar0 = Function_429();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_429() //Position: 0x13985 / 80261
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

int Function_430() //Position: 0x13A41 / 80449
{
	return Function_84(0);
}

bool Function_431(int iParam0, int iParam1) //Position: 0x13A4B / 80459
{
	if (!Function_435(iParam0, iParam1))
	{
		Function_432(iParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_432(var uParam0, int iParam1) //Position: 0x13A66 / 80486
{
	Function_94(uParam0[Function_434(iParam1)], Function_433(iParam1));
	return;
}

int Function_433(int iParam0) //Position: 0x13A7D / 80509
{
	return Function_162((iParam0 % 32));
}

int Function_434(int iParam0) //Position: 0x13A8B / 80523
{
	return (iParam0 / 32);
}

bool Function_435(var uParam0, bool bParam1) //Position: 0x13A96 / 80534
{
	return Function_31((*uParam0)[Function_434(bParam1)], Function_433(bParam1));
}

void Function_436() //Position: 0x13AAD / 80557
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_437(int iParam0) //Position: 0x13ABF / 80575
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

bool Function_438(int iParam0) //Position: 0x13ADE / 80606
{
	return (Function_439(iParam0, 1, 1) && UI_ISFOCUSED("HudSceneOnline"));
}

int Function_439(bool bParam0, int iParam1, bool bParam2) //Position: 0x13B00 / 80640
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(iVar0, bParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (bParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

int Function_440() //Position: 0x13B7D / 80765
{
	bool bVar0;
	
	bVar0 = Function_205();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_441(int iParam0) //Position: 0x13B97 / 80791
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
				Function_443(iParam0[StackVal59]);
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
				Function_442(iParam0[StackVal59], iVar2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_442(var uParam0, bool bParam1) //Position: 0x13D24 / 81188
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ATTACHMENT_VALID(uParam0->f_92))
	{
		if (bParam1)
		{
		}
		REMOVE_OBJECT_ATTACHMENT(uParam0->f_92);
		Function_400(*uParam0, &vVar0, &vVar3, bParam1);
		SET_OBJECT_POSITION(uParam0->f_88, vVar0);
		SET_OBJECT_ORIENTATION(uParam0->f_88, vVar3);
	}
	return;
}

void Function_443(int iParam0) //Position: 0x13D67 / 81255
{
	if (!IS_ATTACHMENT_VALID(iParam0->f_92))
	{
		iParam0->f_92 = ATTACH_OBJECTS_USING_LOCATOR(iParam0->f_88, *iParam0, "pelvis_attachment", "grab", 4294967295);
	}
	return;
}

void Function_444(bool bParam0, bool bParam1) //Position: 0x13DA2 / 81314
{
	if (Function_207())
	{
		if (bParam1)
		{
			bLocal_176 = bParam0;
			iLocal_174 = 13;
			NET_LOG(true, "nLiarsDice", "Locking to State %s via %s", I2STR(bParam0), I2STR(iLocal_174), false, false);
		}
		else
		{
			bLocal_174 = bParam0;
			NET_LOG(true, "nLiarsDice", "Moving to State %s", I2STR(bParam0), false, false, false);
		}
	}
	else
	{
		bLocal_174 = bParam0;
	}
	return;
}

int Function_445(int iParam0, int iParam1) //Position: 0x13E2F / 81455
{
	int iVar0;
	
	iVar0 = Function_387(iParam0 + 1420, iParam1);
	while (!Function_488(iParam0, Function_410(iVar0, 1)) && iVar0 == iParam1)
	{
		iVar0 = Function_387(iParam0 + 1420, iVar0);
	}
	if (iParam1 == iVar0)
	{
		return 4294967295;
	}
	return iVar0;
}

int Function_446(int iParam0) //Position: 0x13E73 / 81523
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1420)[iVar03])
		{
			if (Function_488(iParam0, Function_410(iVar0, 1)))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_447(int iParam0) //Position: 0x13EB0 / 81584
{
	return Function_410(Local_178.f_1500, iParam0);
}

float Function_448(int iParam0) //Position: 0x13EC0 / 81600
{
	if (Function_450(iParam0))
	{
		if (Function_449(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_449(int iParam0) //Position: 0x13F88 / 81800
{
	return Function_31(*iParam0, 2);
}

bool Function_450(int iParam0) //Position: 0x13F95 / 81813
{
	return Function_31(*iParam0, 1);
}

void Function_451() //Position: 0x13FA2 / 81826
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (Function_457())
			{
				if (Function_207())
				{
					Local_178.f_1500 = 0;
					if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_120, false))
					{
						SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_120, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
					}
					Function_426(&bLocal_120);
				}
				else
				{
					Local_178.f_1500 = Local_178.f_1504;
					Function_340(&bLocal_120, Local_178[Function_489(1)59]);
				}
				Function_455(Local_139.f_132, Local_139.f_136);
				if (Function_207())
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
				}
				iVar0 = 0;
				while (iVar0 <= Local_178.f_1420)
				{
					if ((*&Local_178 + 1420)[iVar03])
					{
						Function_400(Local_178[Function_410(iVar0, 1)59], &vVar1, &vVar4, 1);
						Local_178[Function_410(iVar0, 1)59].f_88 = CREATE_PROP_IN_LAYOUT(bLocal_92, Function_71(), "$/fragments/p_gen_diceCup01x", vVar1, vVar4, 1);
					}
					iVar0++;
				}
				if (Function_207())
				{
					NET_OBJECT_REPLICATION_MODE_END(17);
				}
				Function_454(1.0f);
				Function_453();
				Function_294(&iLocal_97);
				iLocal_2 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_1 = 1;
				if (Function_207())
				{
					fLocal_73 = 0.0f;
					if (NET_GET_PLAYMODE() == 0)
					{
						Function_452(Local_139.f_48, 1);
					}
					Function_444(3, 1);
				}
				else
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_OBJECTIVE();
					bLocal_174 = false;
				}
			}
			break;
	}
	return;
}

int Function_452(bool bParam0, int iParam1) //Position: 0x140E2 / 82146
{
	Function_134(599, bParam0, iParam1);
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(599));
	UI_SET_STRING("nMPDollars", I2STR(Function_84(599)));
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
	}
	return 1;
}

void Function_453() //Position: 0x14157 / 82263
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_Welcom", 0);
	}
	return;
}

void Function_454(bool bParam0) //Position: 0x1418B / 82315
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

void Function_455(bool bParam0, int iParam1) //Position: 0x141A8 / 82344
{
	char* cVar0[64];
	int iVar16;
	int iVar17;
	bool bVar18;
	
	if (!(bParam0 || iParam1))
	{
		return;
	}
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	strcpy(&cVar0, "nGambling_", 64);
	if (bParam0)
	{
		stradd(&cVar0, "A_Help", 64);
		iVar16 = 0;
		iVar17 = 1;
	}
	else
	{
		stradd(&cVar0, "S_Help", 64);
		iVar16 = 2;
		iVar17 = 3;
	}
	bVar18 = (Function_456(iVar16) / 60);
	if (bVar18 > 24)
	{
		bVar18 = (bVar18 / 24);
	}
	else
	{
		stradd(&cVar0, "H", 64);
	}
	if (bVar18 == 1)
	{
		stradd(&cVar0, "_Single", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_456(iVar17)), false, 0, 0, 2, 0, 0);
	}
	else
	{
		stradd(&cVar0, "_Plural", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_456(iVar17)), I2STR(bVar18), 0, 0, 2, 0, 0);
	}
	return;
}

int Function_456(int iParam0) //Position: 0x14278 / 82552
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

bool Function_457() //Position: 0x14298 / 82584
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	switch (iLocal_80)
	{
		case 0x000003E8:
			iLocal_80 = 1005;
			if (IS_VOLUME_VALID(bLocal_79))
			{
				if (IS_OBJECTSET_VALID(bLocal_594))
				{
					Function_468(bLocal_594);
				}
				else
				{
					bLocal_594 = CREATE_OBJECTSET_IN_LAYOUT(Function_71(), bLocal_92, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_79, bLocal_594, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_594));
					if (!Function_467(bVar2))
					{
						if ((IS_ACTOR_HOGTIED(bVar2) || IS_ACTOR_CRIPPLED(bVar2, 5)) || IS_ACTOR_VEHICLE(bVar2))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_80 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(bLocal_79))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_79);
					if (IS_OBJECTSET_VALID(bLocal_594))
					{
						Function_468(bLocal_594);
					}
					else
					{
						bLocal_594 = CREATE_OBJECTSET_IN_LAYOUT(Function_71(), bLocal_92, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_79, bLocal_594, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_594));
						if (!Function_467(bVar2))
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
				iLocal_80 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar0 = false;
			while (StackVal <= bVar0)
			{
				if (IS_ACTOR_VALID((*&Local_139 + 4)[bVar0]))
				{
					Function_461((*&Local_139 + 4)[bVar0], &Local_178, bVar0);
					if (*&Local_139 + 4)[bVar0] != Function_205()
					{
						SET_DRAW_ACTOR((*&Local_139 + 4)[bVar0], false);
					}
				}
				bVar0++;
			}
			iLocal_91 = Local_178.f_1496;
			if (Local_178.f_1496 >= 3)
			{
				iLocal_95 = 1;
				if (Local_178.f_1496 >= 5)
				{
					iLocal_96 = 1;
				}
				else
				{
					iLocal_96 = 0;
				}
			}
			else
			{
				iLocal_95 = 0;
				iLocal_96 = 0;
			}
			bVar0 = false;
			while (bVar0 <= 6)
			{
				Function_460(GET_GRINGO_FROM_OBJECT(StackVal));
				if (!(*&Local_178 + 1420)[bVar03])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), false);
				}
				bVar0++;
			}
			Function_458();
			if (Function_489(1) >= 4294967295)
			{
				SAY_SINGLE_LINE_CONTEXT(Local_178[Function_489(1)59], 485, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			iLocal_80 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING(Function_205(), "liars_dice/idle"))
			{
				bVar0 = false;
				while (StackVal <= bVar0)
				{
					if (IS_ACTOR_VALID((*&Local_139 + 4)[bVar0]))
					{
						SET_DRAW_ACTOR((*&Local_139 + 4)[bVar0], true);
					}
					bVar0++;
				}
				if (Function_207())
				{
					iLocal_80 = 1007;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x000003EF:
			if (Function_411(1008, 1, 0x3f800000))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_458() //Position: 0x14537 / 83255
{
	int iVar0;
	bool bVar1;
	
	Function_459(Function_205());
	if (Function_207())
	{
		DEEQUIP_ACCESSORY(Function_205(), 0);
		DEEQUIP_ACCESSORY(Function_205(), 1);
	}
	if (Function_127(4))
	{
		iLocal_90 = 1;
		Function_208(4, 0);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_139 + 4)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_139 + 4)[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_139 + 4)[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_139 + 4)[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_139 + 4)[iVar0], 4, true);
		}
		iVar0++;
	}
	if (!Function_207())
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			bVar1 = (*&Local_139 + 4)[iVar0];
			if (IS_ACTOR_VALID(bVar1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 26, false);
			}
			iVar0++;
		}
	}
	return;
}

void Function_459(bool bParam0) //Position: 0x145F3 / 83443
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

void Function_460(bool bParam0) //Position: 0x14618 / 83480
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

int Function_461(bool bParam0, int iParam1, int iParam2) //Position: 0x14687 / 83591
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam2 == 4294967295 && !(*iParam1 + 1420)[iParam23])
	{
		Function_465(iParam1[iParam1->f_149659], bParam0, iParam2);
		(*iParam1 + 1420)[iParam23] = 1;
		(iParam1 + 1420[iParam23])->f_4 = iParam1->f_1496;
		iParam1->f_1496++;
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		if (Function_207())
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
				bVar0 = (Function_464(Function_303(bParam0)) % 3);
				bVar1 = Function_463(bVar0);
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
				bVar2 = GET_OBJECT_FROM_ACTOR(Function_205());
				Function_462(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_120));
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

void Function_462(var uParam0, bool bParam1) //Position: 0x14969 / 84329
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

var Function_463(int iParam0) //Position: 0x14ADC / 84700
{
	iParam0 = iParam0;
	return "UseCase2";
}

int Function_464(int iParam0) //Position: 0x14AF1 / 84721
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

void Function_465(int iParam0, bool bParam1, int iParam2) //Position: 0x14B2C / 84780
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
	else if (Function_303(bParam1) >= 4294967295)
	{
		iParam0->f_60 = 2;
	}
	else
	{
		iParam0->f_60 = 0;
	}
	Function_466(&(vLocal_604[Function_323(iParam0)9]));
	iParam0->f_72 = 0;
	iParam0->f_76 = 0;
	iParam0->f_84 = 0;
	iParam0->f_80 = 0;
	strcpy(iParam0 + 4, "__invalid__", 32);
	if (Function_207())
	{
		if (!Function_391(*iParam0, iParam0 + 4))
		{
		}
	}
	bVar0 = false;
	while (bVar0 <= 5)
	{
		*(iParam0 + 104[bVar03]) = { StackVal, StackVal, *(&Local_139 + 32) };
		vVar1 = { 0.0f, 0.0f, 0.0f };
		fVar4 = (-TO_FLOAT(bVar0) * 5.0f);
		UNK_0x44986367(&vVar1, ((IntToFloat((4294967236 * iParam0->f_64)) + fVar4) + Local_139.f_44));
		*(iParam0 + 104[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, *(iParam0 + 104[bVar03]), StackVal) * Vector(0.25f, 0.25f, 0.25f), StackVal, StackVal) };
		*(iParam0 + 168[bVar03]) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_139 + 32), *(iParam0 + 104[bVar03]), StackVal) };
		(iParam0 + 168[bVar03])->f_4 = UNK_0x9C40E671(iParam0 + 168[bVar03]);
		bVar0++;
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	return;
}

void Function_466(int iParam0) //Position: 0x14C89 / 85129
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

bool Function_467(bool bParam0) //Position: 0x14CB4 / 85172
{
	int iVar0;
	
	if (bParam0 == Function_205())
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_139 + 4)[iVar0]))
		{
			if (bParam0 == (*&Local_139 + 4)[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_468(bool bParam0) //Position: 0x14CF7 / 85239
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

void Function_469(int iParam0) //Position: 0x14D2F / 85295
{
	iParam0->f_1524 = 0.0f;
	iParam0->f_1512 = 0;
	iParam0->f_1516 = 1;
	iParam0->f_1520 = 4294967295;
	iParam0->f_1496 = 0;
	iParam0->f_1500 = 0;
	Function_470(iParam0 + 1420);
	return;
}

void Function_470(int iParam0) //Position: 0x14D61 / 85345
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar03] = 0;
		iParam0[iVar03]->f_4 = 4294967295;
		vVar1 = { StackVal, StackVal, *(&Local_139 + 56[iVar03]) };
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

void Function_471(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x14E4C / 85580
{
	float fVar0;
	int iVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_345(239);
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((*iParam3)[iVar1] > 3)
				{
					*uParam2 = 0.0f;
					Function_344(239, uParam1, 1, 7018, 50.0f, 100.0f, 4, 1, 0);
					Function_343(239);
				}
				iVar1++;
			}
			break;
		
		case 0x00000001:
			Function_343(239);
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((*iParam3)[iVar1] > 4)
				{
					*uParam2 = 0.0f;
					Function_344(239, uParam1, 2, 7019, 100.0f, 150.0f, 0, 1, 0);
					Function_343(239);
				}
				iVar1++;
			}
			break;
		
		case 0x00000002:
			Function_343(239);
			if (Function_476(239, 10, 1) != 0.0f)
			{
				Function_475(239, 10, Function_80(432), 1);
			}
			fVar0 = (Function_80(432) - Function_476(239, 10, 1));
			if (fVar0 <= 3600.0f)
			{
				*uParam2 = 0.0f;
				Function_344(239, uParam1, 3, 7020, 150.0f, 200.0f, (CEIL(18000.0f) / 3600), 0, 0);
				Function_343(239);
				Function_474(239);
			}
			else
			{
				*uParam2 = (fVar0 / 3600.0f);
				if (Function_472(239, *uParam2))
				{
					SET_JOURNAL_ENTRY_PROGRESS(Function_224(239), *uParam2, true, 0);
				}
			}
			break;
		
		case 0x00000003:
			Function_343(239);
			fVar0 = (Function_80(432) - Function_476(239, 10, 1));
			if (fVar0 <= 18000.0f)
			{
				*uParam2 = 0.0f;
				Function_344(239, uParam1, 4, 7021, 200.0f, 250.0f, (CEIL(36000.0f) / 3600), 0, 0);
				Function_343(239);
				Function_474(239);
			}
			else
			{
				*uParam2 = (fVar0 / 18000.0f);
				if (Function_472(239, *uParam2))
				{
					SET_JOURNAL_ENTRY_PROGRESS(Function_224(239), *uParam2, true, 0);
				}
			}
			break;
		
		case 0x00000004:
			Function_343(239);
			fVar0 = (Function_80(432) - Function_476(239, 10, 1));
			if (fVar0 <= 36000.0f)
			{
				*uParam2 = 0.0f;
				Function_342(239, uParam1, uParam0, 7022, 250.0f, "SC_LiarsDice_Icon_128");
				Function_474(239);
			}
			else
			{
				*uParam2 = (fVar0 / 36000.0f);
				if (Function_472(239, *uParam2))
				{
					SET_JOURNAL_ENTRY_PROGRESS(Function_224(239), *uParam2, true, 0);
				}
			}
			break;
	}
}

bool Function_472(bool bParam0, float fParam1) //Position: 0x1508D / 86157
{
	if (fParam1 <= 0.8f)
	{
		if (Function_473(bParam0, 6) != 1)
		{
			Function_346(bParam0, 6, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.6f)
	{
		if (Function_473(bParam0, 5) != 1)
		{
			Function_346(bParam0, 5, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.5f)
	{
		if (Function_473(bParam0, 4) != 1)
		{
			Function_346(bParam0, 4, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.4f)
	{
		if (Function_473(bParam0, 3) != 1)
		{
			Function_346(bParam0, 3, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.2f)
	{
		if (Function_473(bParam0, 2) != 1)
		{
			Function_346(bParam0, 2, 1);
			return 1;
		}
	}
	return 0;
}

int Function_473(bool bParam0, bool bParam1) //Position: 0x1513B / 86331
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("PVP_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_474(bool bParam0) //Position: 0x151C7 / 86471
{
	Function_346(bParam0, 2, 4294967295);
	Function_346(bParam0, 3, 4294967295);
	Function_346(bParam0, 4, 4294967295);
	Function_346(bParam0, 5, 4294967295);
	Function_346(bParam0, 6, 4294967295);
	return;
}

int Function_475(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x151F5 / 86517
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		(*&Global_50170[bParam022] + 36)[bParam1] = bParam2;
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

float Function_476(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1528F / 86671
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		return (*&Global_50170[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("PVP_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

void Function_477(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x15335 / 86837
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<16> Var6;
	
	if ((GET_NUM_PLAYERS() >= 1 || NET_GET_SESSION_GAMER_COUNT() >= 1) && uParam3)
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
		iVar1 = Function_479(bParam0, &bVar0);
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
							if (IS_ACTOR_VALID((*uParam1)[bVar459]))
							{
								bVar3 = Function_303((*uParam1)[bVar459]);
								if (bVar3 == bVar2)
								{
									Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(bVar4, uParam1) };
									NET_LOG(true, "Net Minigame", "MARKED PLAYER '%s' AS LINKDEAD. WAS PLAYER #%s", &Var6, I2STR(bVar4), false, false);
									PRINT_HELP_FORMAT(10.0f, "Poker_Player_LeftSession", &Var6, "", "", "", 2, 0, 0);
									Call_Loc(uParam2);
									uParam1[bVar459]->f_60 = 3;
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
			iVar1 = Function_479(bParam0, &bVar0);
		}
	}
	Function_478(bParam0);
}

void Function_478(bool bParam0) //Position: 0x15592 / 87442
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

int Function_479(bool bParam0, bool bParam1) //Position: 0x155A5 / 87461
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

void Function_480() //Position: 0x155E4 / 87524
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_71) < 10.0f)
	{
		fLocal_71 = GET_CURRENT_GAME_TIME();
		Function_319("Mode_LD_Narr_Pleaves", 0);
	}
	return;
}

void Function_481() //Position: 0x15619 / 87577
{
	Function_482(4);
	return;
}

void Function_482(int iParam0) //Position: 0x15623 / 87587
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
			Function_483(iParam0);
		}
	}
	return;
}

void Function_483(bool bParam0) //Position: 0x15655 / 87637
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_484(int iParam0) //Position: 0x15664 / 87652
{
	Function_485(0, iParam0);
	return;
}

void Function_485(int iParam0, int iParam1) //Position: 0x15670 / 87664
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_486(int iParam0, int iParam1) //Position: 0x15699 / 87705
{
	int iVar0;
	
	iVar0 = Function_407(iParam0, iParam1);
	if (iVar0 >= 4294967295)
	{
		return vLocal_604[iVar09].f_24;
	}
	return 0;
}

void Function_487(int iParam0) //Position: 0x156BC / 87740
{
	Function_328(0, iParam0);
	return;
}

bool Function_488(int iParam0, int iParam1) //Position: 0x156C8 / 87752
{
	return Function_486(iParam0, iParam1) < 0;
}

int Function_489(int iParam0) //Position: 0x156D7 / 87767
{
	return Function_410(Local_178.f_1504, iParam0);
}

void Function_490() //Position: 0x156E7 / 87783
{
	bLocal_4 = true;
	Function_1();
	return;
}

void Function_491() //Position: 0x156F3 / 87795
{
	Function_492(1024, 1, 0);
	Function_492(1, 0, 0);
	return;
}

void Function_492(int iParam0, bool bParam1, int iParam2) //Position: 0x15707 / 87815
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_94(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_44(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_493() //Position: 0x1572F / 87855
{
	Function_492(1025, 1, 0);
	return;
}

bool Function_494(int iParam0, int iParam1, bool bParam2) //Position: 0x1573D / 87869
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_495() //Position: 0x157BA / 87994
{
	int iVar0;
	
	NET_ENABLE_KICKING(0);
	HUD_ENABLE(false);
	SET_HUD_MAP_DRAW_ENABLED(0);
	AUDIO_MUSIC_SET_MOOD("EVERYTHING", 0, 4294967295, 4294967295);
	NET_HUD_TUNE_VALUE("IconCamConstOffset", F2STR(0.2f, 1, 10));
	fLocal_71 = -10.0f;
	if (NET_GET_PLAYMODE() == 0)
	{
		Function_518(0);
		iLocal_772 = Function_517(37, GET_LOCAL_SLOT());
	}
	HUD_SET_MINIGAME_TYPE_LAYOUT(8);
	Function_515();
	bLocal_92 = CREATE_LAYOUT("LiarsDiceDynamic");
	Function_514();
	Function_505();
	Function_504(&iLocal_97);
	Function_504(&iLocal_100);
	Function_504(&iLocal_103);
	Function_504(&iLocal_106);
	Function_504(&iLocal_109);
	Function_504(&iLocal_112);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_592 = GET_CURRENT_GAME_TIME();
	bLocal_120 = CREATE_CAMERA_IN_LAYOUT(bLocal_92, "LiarsDiceCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(bLocal_120, "nliarsdice");
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_120);
	iLocal_1 = 99;
	if (Function_207())
	{
		Function_498();
	}
	Function_496(&iLocal_132);
	if ((Function_305(4, 7) || iLocal_0) || Function_207())
	{
		Function_437(&iLocal_132);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_139 + 4)[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_139 + 4)[iVar0], 1);
			REFERENCE_ACTOR((*&Local_139 + 4)[iVar0]);
			CLEAR_LAST_HIT((*&Local_139 + 4)[iVar0]);
		}
		iVar0++;
	}
	bLocal_79 = CREATE_VOLUME_IN_LAYOUT(bLocal_92, "LiarsDice_StayOutvol", 2, *(&Local_139 + 32), 0.0f, 0.0f, 0.0f, 2.75f, 2.0f, 2.75f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
	return;
}

void Function_496(int iParam0) //Position: 0x15948 / 88392
{
	Function_497(iParam0);
	return;
}

void Function_497(var uParam0) //Position: 0x15953 / 88403
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

void Function_498() //Position: 0x15972 / 88434
{
	Function_502(1);
	uLocal_769 = Function_500("LiarsDiceEvents");
	vLocal_766.x = 0;
	NET_SCRIPTMSG_REGISTER_HANDLER(31, 88490);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&vLocal_604, 145);
	return;
}

void Function_499(bool bParam0) //Position: 0x159AA / 88490
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
	if (vLocal_766.x != 0)
	{
		LOG_ERROR("Received Player Action despite already having one!");
	}
	vLocal_766 = { StackVal, StackVal, vVar0 };
	return;
}

var Function_500(bool bParam0) //Position: 0x15A3E / 88638
{
	bool bVar0;
	
	bVar0 = Function_501();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_501() //Position: 0x15A52 / 88658
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_502(bool bParam0) //Position: 0x15A8E / 88718
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 88800);
	return;
}

void Function_503(bool bParam0) //Position: 0x15AE0 / 88800
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
	if (Function_424(&Var2))
	{
	}
	bVar8 = Function_414(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_423(&Var2, 1);
	Function_5(&Var2);
	return;
}

void Function_504(var uParam0) //Position: 0x15BE3 / 89059
{
	if (!Function_450(uParam0))
	{
		Function_295(uParam0, 0.0f);
	}
	return;
}

void Function_505() //Position: 0x15BF8 / 89080
{
	Function_512(&bLocal_560, "liars_dice", 5, 0);
	Function_512(&bLocal_560, "liars_dice_gped", 5, 0);
	Function_512(&bLocal_560, "liars_dice_hillb", 5, 0);
	Function_512(&bLocal_560, "$/fragments/p_gen_diceCup01x", 0, 0);
	Function_512(&bLocal_560, "$/fragments/p_gen_dice01x", 0, 0);
	Function_512(&bLocal_560, "$/fragments/p_gen_dice02x", 0, 0);
	Function_512(&bLocal_560, "liars_dice", 1, 0);
	Function_512(&bLocal_560, "fake_liars_dice", 1, 0);
	Function_512(&bLocal_560, "nminigames", 10, 0);
	while (!Function_506(&bLocal_560) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_SHOW("Minigame");
	if (!Function_207())
	{
		while (!UNK_0x9D20BDC4("numberSystem") && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	return;
}

bool Function_506(int iParam0) //Position: 0x15D51 / 89425
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_511();
	iVar1 = 0;
	if (!Function_204(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_510(iParam0[iVar03], 8);
		}
		else if (Function_509())
		{
			iVar1 = 1;
			Function_510(iParam0[iVar03], 8);
		}
		Function_510(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_204(iParam0[iVar03], 4))
		{
			if (!Function_204(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_204(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_204(iParam0[03], 8) || iVar1));
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
				Function_510(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_204(iParam0[iVar03], 4))
		{
			if (!Function_204(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_510(iParam0[iVar03], 2);
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
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_510(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_510(iParam0[iVar03], 2);
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
	Function_507();
	return 1;
}

void Function_507() //Position: 0x160CC / 90316
{
	if (!Function_508(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_508(int iParam0) //Position: 0x1610C / 90380
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_509() //Position: 0x16128 / 90408
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

void Function_510(var uParam0, int iParam1) //Position: 0x16153 / 90451
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_511() //Position: 0x16164 / 90468
{
	if (!Function_508(128))
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

var Function_512(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x161A6 / 90534
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_513(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_510(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_513(var uParam0, int iParam1, int iParam2) //Position: 0x161DE / 90590
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_204(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_510(uParam0[iVar03], 4);
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

void Function_514() //Position: 0x162A2 / 90786
{
	return;
}

void Function_515() //Position: 0x162A8 / 90792
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_16();
	Function_516();
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

void Function_516() //Position: 0x162D8 / 90840
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_517(int iParam0, bool bParam1) //Position: 0x162EC / 90860
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_254(iParam0);
	}
	if (!Function_418(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_518(int iParam0) //Position: 0x1635A / 90970
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_218();
	Function_219();
	switch (iParam0)
	{
		case 0x00000001:
			Function_527(12288);
			Function_195(16384);
			break;
		
		case 0x00000002:
			Function_527(20480);
			Function_195(8192);
			break;
		
		default:
			Function_195(28672);
			break;
	}
	Function_195(2048);
	Function_520(0, 0);
	Function_519();
	return;
}

void Function_519() //Position: 0x1641E / 91166
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_520(bool bParam0, bool bParam1) //Position: 0x16437 / 91191
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_526(&Global_78480);
	Function_525(&Global_78480);
	uVar0 = Function_254(37);
	Function_523();
	if (!bParam0)
	{
		Function_253(37, uVar0);
	}
	Function_522(18264, 0);
	Function_521();
	return;
}

void Function_521() //Position: 0x16483 / 91267
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_522(int iParam0, bool bParam1) //Position: 0x164A2 / 91298
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

void Function_523() //Position: 0x164DD / 91357
{
	Function_524(&Global_78480 + 220);
	return;
}

void Function_524(int iParam0) //Position: 0x164EC / 91372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_525(int iParam0) //Position: 0x1650D / 91405
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_526(int iParam0) //Position: 0x16531 / 91441
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_527(int iParam0) //Position: 0x16555 / 91477
{
	Function_213(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

