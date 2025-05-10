//Decompiled with MagicRDR v1.0
//Function Count : 268
//Statics Count : 629
//Natives Count : 441
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	bool bLocal_7 = false;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 8;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 1;
	var uLocal_59 = 13;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	struct<217> Local_108 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0 } ;
	var uLocal_325 = 2;
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
	var uLocal_496 = 0;
	var uLocal_497 = 21;
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
	var uLocal_532 = 0;
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
	int iLocal_561 = 13;
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
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	bool bScriptParam_0 = false;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_267(&Var0, 3);
	Function_266();
	if (StackVal && (((((!Global_3421 && bScriptParam_0 == Global_30679[1]) && bScriptParam_0 == Global_30707[1]) && bScriptParam_0 == Global_30707[2]) && bScriptParam_0 == Global_30717[1]) && bScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Function_259(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_258(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_256())
				{
					Function_255();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_254())
				{
					Function_253();
					Function_252(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_249())
				{
					Function_247(bScriptParam_0);
					if (bLocal_107)
					{
						Function_245(&iLocal_11, Function_246(), bScriptParam_0);
						Function_244(&iLocal_11, Function_246());
					}
					Function_252(&(Global_29008[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_243(&uLocal_8);
				Function_241();
				Function_238(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_237() && Function_236(Global_29155[bScriptParam_010])) && Function_235(&iLocal_11))
				{
					Function_234();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_222(&iLocal_11, bScriptParam_0, Function_246());
				}
				Function_221(bScriptParam_0);
				Function_220();
				Function_219();
				Function_252(&(Global_29008[bScriptParam_0]), 8);
				if (Function_218(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_217(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_216(bScriptParam_0);
				Function_215();
				Function_214(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_209(bScriptParam_0);
				Function_208(64);
				Function_252(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_207(Function_246(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_206(&Var0, 5.0f);
				Function_252(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_218(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_107)
				{
					Function_88(&iLocal_11, bScriptParam_0);
				}
				Function_52(&uLocal_8, &uLocal_497, Function_87(), bScriptParam_0);
				Function_47(&iLocal_561, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_107)
	{
		Function_30(&iLocal_11, bScriptParam_0);
	}
	Function_25(bScriptParam_0);
	Function_19();
	Function_18();
	Function_17();
	Function_9(&uLocal_8, &uLocal_497);
	Function_8(&iLocal_561);
	Function_6();
	Function_2(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_208(64);
	Function_217(&(Global_29008[bScriptParam_0]), 32);
	Function_217(&(Global_29008[bScriptParam_0]), 64);
	Function_217(&(Global_29008[bScriptParam_0]), 8);
	Function_217(&(Global_29008[bScriptParam_0]), 512);
	Function_217(&(Global_29008[bScriptParam_0]), 16);
	Function_217(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_206(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C8 / 968
{
	return;
}

void Function_2(int iParam0) //Position: 0x3CE / 974
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x404 / 1028
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x426 / 1062
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x43C / 1084
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x452 / 1106
{
	Function_7();
	return;
}

void Function_7() //Position: 0x45B / 1115
{
	RELEASE_LAYOUT_REF(Local_163);
	return;
}

void Function_8(int iParam0) //Position: 0x466 / 1126
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x4C0 / 1216
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_16(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_15(iParam1[iVar03], 4);
		}
		if (Function_16(iParam1[iVar03], 8))
		{
			Function_10(0, 0, 30);
			Function_15(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_10(int iParam0, int iParam1, int iParam2) //Position: 0x518 / 1304
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
		Function_11(Global_16524, bVar0, 1);
	}
	return;
}

void Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0x5FE / 1534
{
	int iVar0;
	
	Function_14(iParam0);
	Function_13(bParam1);
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
	Function_12();
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

void Function_12() //Position: 0x777 / 1911
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_13(bool bParam0) //Position: 0x783 / 1923
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

void Function_14(int iParam0) //Position: 0x7C9 / 1993
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

void Function_15(int iParam0, int iParam1) //Position: 0x80F / 2063
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x829 / 2089
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x846 / 2118
{
	return;
}

void Function_18() //Position: 0x84C / 2124
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	return;
}

void Function_19() //Position: 0x906 / 2310
{
	Function_20();
	return;
}

void Function_20() //Position: 0x90F / 2319
{
	Function_21(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_21(int iParam0) //Position: 0x921 / 2337
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_22(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x947 / 2375
{
	if (Function_24(uParam0[iParam13], 4))
	{
		if (Function_24(uParam0[iParam13], 1))
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
			Function_23(uParam0[iParam13], 1);
			Function_23(uParam0[iParam13], 2);
			Function_23(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xA75 / 2677
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_24(var uParam0, int iParam1) //Position: 0xA8F / 2703
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0xAAC / 2732
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_218(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_217(&(Global_29008[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			START_OBJECT_ITERATOR(bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_27(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xB53 / 2899
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0xB6F / 2927
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_30707[2] || bParam0 != Global_30707[1]) || bParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[bParam0];
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(bParam0));
}

bool Function_28(int iParam0) //Position: 0xBE2 / 3042
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, bool bParam1) //Position: 0xBFF / 3071
{
	return (uParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xC0C / 3084
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_5(iParam1) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_33(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_33(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_33(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_33(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_33(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_33(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_33(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_33(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_33(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_33(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_33(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_33(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_33(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_33(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_33(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_33(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_33(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_33(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_33(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_33(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_33(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_33(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_33(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_33(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_33(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_33(iParam0, &Global_7032, iParam1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_25(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_31(iParam1);
	}
	return;
}

void Function_31(int iParam0) //Position: 0xF52 / 3922
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	if (Function_27(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

var Function_32(int iParam0) //Position: 0xFB6 / 4022
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x12E3 / 4835
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(bVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(bVar1))
		{
		}
		else
		{
			Function_46(uParam1[iVar02], 4);
		}
		if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
		{
			DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
		}
		iVar0++;
	}
	if (!Function_27(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_45(Global_76846, 0x4000000))
		{
			Function_39(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_29(iParam0->f_356, 32))
	{
		if (!Function_45(Global_76846, 8388608))
		{
			Function_39(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_45(Global_76846, 4194304))
	{
		Function_39(Global_34573, 4194304, 1, 0);
	}
	Function_37(iParam0, 0, 0);
	DESTROY_OBJECT(*iParam0);
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRifles"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumPistols"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	Function_21(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x159D / 5533
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (bParam1 && Function_36("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[4])
	{
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_35(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30679[1])
	{
	}
	else if (iParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[1])
	{
	}
	else if (iParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[0])
	{
	}
	else if (iParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[1])
	{
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x1CF3 / 7411
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1D08 / 7432
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D27 / 7463
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
				if (!Function_38(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1DA3 / 7587
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DBD / 7613
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

void Function_40(char* cParam0, int iParam1) //Position: 0x1E29 / 7721
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x1E60 / 7776
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

int Function_42(char* cParam0) //Position: 0x1ED8 / 7896
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

int Function_43(int iParam0) //Position: 0x1F79 / 8057
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

void Function_44(int iParam0, int iParam1) //Position: 0x1FB6 / 8118
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x1FC9 / 8137
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1FDC / 8156
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x1FF3 / 8179
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_51();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_50((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_49(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_48(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_48(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_48(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_49(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_48(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_49(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_49(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x23BF / 9151
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x23D0 / 9168
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x23EA / 9194
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_51() //Position: 0x23FC / 9212
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2405 / 9221
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_26(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_53(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_53(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2486 / 9350
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	Function_217(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_84(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_83(iParam0, 8);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_10(0, 0, 0);
						}
						else
						{
							Function_10(0, 0, 30);
						}
						Function_15(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_83(iParam0, 4);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_15(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_81(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_51())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_83(iParam0, 16);
								Function_73(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 16))
					{
						Function_15(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_16(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_83(iParam0, 2);
			}
			else
			{
				Function_15(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_218(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_16(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_72(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_83(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_71(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_54(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_54(int iParam0) //Position: 0x289F / 10399
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_218(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_252(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_59(473, 1, 0, 0);
		iVar0 = Function_58(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_59(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_59(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_59(476, 1, 0, 0);
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
		Function_57(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_57(7, 30);
	}
	if (Function_56(473) <= Function_55(473))
	{
		if (!Function_51())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_55(int iParam0) //Position: 0x299E / 10654
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_56(int iParam0) //Position: 0x29DB / 10715
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x2A14 / 10772
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

var Function_58(int iParam0) //Position: 0x2A7B / 10875
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_59(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2AD3 / 10963
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
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2CF3 / 11507
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					bVar19 = (Function_56(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_56(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_61(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_61() //Position: 0x3320 / 13088
{
	int iVar0;
	
	return iVar0;
}

var Function_62(int iParam0) //Position: 0x3328 / 13096
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3339 / 13113
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x342E / 13358
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3447 / 13383
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x34AC / 13484
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x34BE / 13502
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x35EE / 13806
{
	return Global_35278[iParam020].f_48;
}

void Function_69(int iParam0) //Position: 0x35FD / 13821
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3797 / 14231
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

void Function_71(var uParam0, int iParam1) //Position: 0x39DB / 14811
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(struct<5> Param0) //Position: 0x39E8 / 14824
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3A0E / 14862
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_76(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_74();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_74() //Position: 0x3C9E / 15518
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_75(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x3D01 / 15617
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_76(bool bParam0) //Position: 0x3D30 / 15664
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_81(2048))
	{
		return 0;
	}
	if (Function_51() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_77(int iParam0) //Position: 0x3DA6 / 15782
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3DB7 / 15799
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x3DD0 / 15824
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3DE6 / 15846
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x3DFB / 15867
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3E19 / 15897
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_83(int iParam0, int iParam1) //Position: 0x3EBD / 16061
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x3ECE / 16078
{
	int iVar0;
	bool bVar1;
	
	Function_14(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_11(StackVal, bVar1, bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x3F40 / 16192
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_14(iParam0);
	Function_13(iVar0);
	PRINTNL();
	Function_11(iParam0, iVar0, iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x3F65 / 16229
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

var Function_87() //Position: 0x3F82 / 16258
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(int iParam0, bool bParam1) //Position: 0x3F97 / 16279
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	
	if (DECOR_CHECK_EXIST(Global_34573, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(Global_34573, "QM_TriggerAttack");
		Function_44(iParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (iParam0->f_364 == 4294967295)
		{
			iParam0->f_364 = Function_200(0, bParam1, 3);
		}
		if (!Function_29(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_29(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_29(iParam0->f_356, 16))
	{
		Function_196(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_29(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_29(iParam0->f_356, 4))
	{
		Function_197(iParam0 + 356, 4);
		Function_30(iParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(bParam1);
		return;
	}
	fVar0 = Function_192(Function_193(bParam1));
	fVar1 = Function_191(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_200(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			bVar4 = (*iParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(bVar4))
			{
				Function_190(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_189(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_188(Function_193(bParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_29(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_29(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(iParam0, 0);
				Function_190(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_190(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_197(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_182();
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(Global_34573, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(Global_34573, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (iParam0->f_188 <= 1 && iParam0->f_188 >= 6)
		{
			if (iParam0->f_188 >= 1)
			{
				Function_177(iParam0, bParam1, fVar2);
			}
			if (!Function_29(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_29(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_191(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_29(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_189(iParam0);
					}
				}
			}
		}
	}
	Function_175(iParam0, bParam1);
	if (Function_29(iParam0->f_356, 1024))
	{
		Function_174(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_29(iParam0->f_356, 16384))
		{
			Function_197(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_29(iParam0->f_356, 16384))
	{
		Function_44(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_29(iParam0->f_356, 262144))
	{
		if (Function_235(iParam0))
		{
			Function_44(iParam0 + 356, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *iParam0);
			if (!Function_27(bParam1))
			{
				if (!Function_29(iParam0->f_356, 8))
				{
					Function_197(iParam0 + 356, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_29(iParam0->f_356, 524288))
	{
		if (Function_171())
		{
			Function_197(iParam0 + 356, 8);
			Function_44(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_45(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_163(iParam0);
				Function_197(iParam0 + 356, 262144);
				if (Function_27(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_258(bParam1, 1);
					Function_157(bParam1);
					Function_195(0, 4294967295);
					Function_196(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(iParam0->f_356, 1))
					{
						Function_156(iParam0, bParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_258(bParam1, 0);
					Function_157(bParam1);
					Function_197(iParam0 + 356, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(iParam0 + 168, 1, iParam0 + 356))
			{
				SET_ANIM_SET_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo", 0);
				iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(iParam0->f_168));
				if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_114(iParam0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(iParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				iParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			bVar11 = false;
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				bVar12 = (*iParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_29((iParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_146(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_103(iParam0 + 4[iVar95], iVar13);
							Function_44(iParam0 + 4[iVar95] + 16, 2);
							Function_197(iParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_29((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_44(iParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(StackVal, &vVar14);
						GET_OBJECT_ORIENTATION(StackVal, &Var17);
						TASK_PRIORITY_SET(bVar12, 1);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar12, &vVar14, -1f);
						strcpy(&cVar20, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(bVar12))
						{
							stradd(&cVar20, "M", 64);
						}
						else
						{
							stradd(&cVar20, "F", 64);
						}
						if (Function_102(bVar12))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "THANKS_FOR_AMMO_P", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "nTHANK_YOU", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						iParam0->f_372 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(bVar12))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
					{
						DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
					}
				}
				iVar9++;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar11);
				PRINTNL();
			}
			if (bVar11 == 0)
			{
				iParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				bVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (bVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (bVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (bVar36 == 1)
				{
					DECOR_REMOVE(Global_34573, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_184(1);
			if (Function_97(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_29(iParam0->f_356, 8))
			{
				Function_197(iParam0 + 356, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_95(bParam1);
			Function_94(iParam0);
			Function_185(iParam0, 1);
			Function_25(Global_29006);
			iParam0->f_364 = Function_200(0, bParam1, 3);
			Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_197(iParam0 + 356, 512);
			if (!Function_29(Global_13172[iParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_91(Function_193(bParam1));
				Function_59(660, bVar37, 0, 0);
				Function_197(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_259(iParam0, bParam1, 1);
			Function_245(iParam0, Global_30616, bParam1);
			Function_244(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_235(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_222(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_222(iParam0, bParam1, Global_30616);
					DECOR_SET_FLOAT(Global_34573, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(Global_34573, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns");
					iParam0->f_188 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(Global_34573, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(Global_34573, "Special_BLK_Ready");
				Function_114(iParam0, bParam1);
				Function_163(iParam0);
				Function_197(iParam0 + 356, 262144);
				Function_258(bParam1, 1);
				Function_197(&Global_13172[Function_200(111, 111, 5)11] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], 0);
				iParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (StackVal < (iVar9 - 1))
	{
		bVar38 = (*iParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", true);
					Global_13172[iParam0->f_36411].f_28 = (Global_13172[iParam0->f_36411].f_28 + 1.0f);
					if (Function_29(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_90(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (DECOR_CHECK_EXIST((*iParam0 + 4)[iVar95], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT((*iParam0 + 4)[iVar95], "nUC_NoAmmo"));
				}
				if (bVar38 == iParam0->f_168)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (iParam0->f_188 <= 7)
					{
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_29(iParam0->f_356, 8192))
						{
							Function_197(iParam0 + 356, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_190(iParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar395], true);
								iVar39++;
							}
							if (iParam0->f_188 <= 4)
							{
								iParam0->f_188 = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
				}
			}
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_29(iParam0->f_356, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				iVar40 = 0;
				while (StackVal < (iVar40 - 1))
				{
					Function_190(iParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar405], true);
					MEMORY_CONSIDER_AS_ENEMY((*iParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (iParam0->f_188 <= 7)
				{
					if (iParam0->f_188 <= 5)
					{
						iParam0->f_188 = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_200(0, bParam1, 3);
				Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	bVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar41)), "footlock"))
		{
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *iParam0);
		}
	}
	return;
}

void Function_89(bool bParam0, struct<365> Param1) //Position: 0x52B6 / 21174
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	bVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(bVar1, "_");
	bVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(bVar3));
	Function_197(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x5305 / 21253
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
		Function_60(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_91(int iParam0) //Position: 0x5500 / 21760
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_29(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int iParam0, int iParam1) //Position: 0x56EA / 22250
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_93(int iParam0) //Position: 0x5AC6 / 23238
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_94(int iParam0) //Position: 0x5C4C / 23628
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x5C9B / 23707
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x5CD3 / 23763
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x5D07 / 23815
{
	return Function_98(iParam0 + 352);
}

int Function_98(int iParam0) //Position: 0x5D15 / 23829
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(StackVal, bVar1);
	START_OBJECT_ITERATOR(bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			iVar4 = GET_ACTOR_ENUM(bVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				iVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_29(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_100(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_38(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar9 = true;
						}
					}
				}
				if (bVar9)
				{
					SQUAD_JOIN(bVar3, bVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_99(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_252(&(Global_29008[Global_29006]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar11 = false;
		while (bVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			bVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(bVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x5F3B / 24379
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_100(bool bParam0, vector3 vParam1) //Position: 0x5F8A / 24458
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_101(bParam0);
		vVar0 = { StackVal, StackVal, Function_101(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_101(bool bParam0) //Position: 0x6004 / 24580
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

bool Function_102(bool bParam0) //Position: 0x606E / 24686
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x61DD / 25053
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;
	
	Function_113();
	Function_112();
	GET_POSITION(*iParam0, &vVar0);
	bVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar3, 8);
	ITERATE_ON_PARTIAL_NAME(bVar3, "Ammo");
	ITERATE_IN_SPHERE(bVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(bVar3);
	Function_59(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_111(bParam1, 5.0f, 1);
		Function_190(iParam0);
		Function_110(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	fVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, fVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, StackVal, *iParam0, vVar7))
	{
		iVar11 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar11 != 41 || iVar11 != 42) || iVar11 != 43) || iVar11 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar12 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar12 != 41 || iVar12 != 42) || iVar12 != 43) || iVar12 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(*iParam0, 1);
	TASK_STAND_STILL(*iParam0, 3.0f, 0, 0);
	Function_104(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(iParam0);
	Function_110(Global_29006, 10.0f);
	return;
}

var Function_104(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x64AB / 25771
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_61(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&bVar0, uParam2);
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

void Function_105(var uParam0, int iParam1) //Position: 0x652A / 25898
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_108(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_107(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_106(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_106(var uParam0, bool bParam1) //Position: 0x6587 / 25991
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_107(var uParam0, bool bParam1) //Position: 0x6607 / 26119
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_108(var uParam0, bool bParam1) //Position: 0x6687 / 26247
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_109(bool bParam0, vector3 vParam1) //Position: 0x670B / 26379
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_110(int iParam0, float fParam1) //Position: 0x6749 / 26441
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x678B / 26507
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x68C2 / 26818
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x68D4 / 26836
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x68E9 / 26857
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_117(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_29(iParam0->f_356, 8))
	{
		if (Function_171())
		{
			Function_197(iParam0 + 356, 8);
		}
		else
		{
			Function_197(iParam0 + 356, 524288);
		}
	}
	Function_197(iParam0 + 356, 32);
	iParam0->f_364 = Function_200(0, bParam1, 3);
	Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_115(iParam0);
	return;
}

void Function_115(int iParam0) //Position: 0x6BCB / 27595
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (!DECOR_CHECK_EXIST(bVar1, "PreSaved") || (DECOR_CHECK_EXIST(bVar1, "PreSaved") && DECOR_CHECK_EXIST(bVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(bVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar2, 1);
				if (Global_29006 == Global_30717[0])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 2.5f);
				}
				else if (Global_29006 == Global_30668[1])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 1.75f);
				}
				UNK_0x1E98AFEC(bVar2, 1);
				if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
				}
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_116(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_197(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_110(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(bool bParam0) //Position: 0x6E3C / 28220
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_117(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6EFF / 28415
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_145(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_144(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_144(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_143(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_142(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_138(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_142(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_136(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_5(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_138(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_135(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x7306 / 29446
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	if (!Function_51())
	{
		Function_123();
		Function_122();
		Function_121();
		Function_120();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x7358 / 29528
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

void Function_120() //Position: 0x745E / 29790
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

void Function_121() //Position: 0x7491 / 29841
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

void Function_122() //Position: 0x761F / 30239
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

void Function_123() //Position: 0x77D3 / 30675
{
	Function_124(&Global_28260, 1, 0);
	return;
}

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x77E1 / 30689
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
	
	bVar0 = Function_87();
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

struct<8> Function_125(int iParam0) //Position: 0x79D2 / 31186
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
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
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
	Function_126(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x7A78 / 31352
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
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(bool bParam0) //Position: 0x7D13 / 32019
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_128() //Position: 0x7D54 / 32084
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
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
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
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x7DDD / 32221
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
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
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
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x7E74 / 32372
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
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
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
	Function_126(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x7EF3 / 32499
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x7F2C / 32556
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
		Function_60(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_133(int iParam0) //Position: 0x814E / 33102
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x8168 / 33128
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(vector3 vParam0, bool bParam3) //Position: 0x817E / 33150
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
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_136(vector3 vParam0, float fParam3, int iParam4) //Position: 0x81E9 / 33257
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_145(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_137(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_218(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_5(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_137(int iParam0) //Position: 0x82E3 / 33507
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

bool Function_138(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x833B / 33595
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_145(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) < 0)
	{
		UNK_0xDF93BD7C(uVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(uVar0, iVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar0, iVar1);
			bVar13 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(uVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_140(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_139(&uVar20);
		vVar32 = { StackVal, StackVal, Function_139(&uVar20) };
		Function_139(&iVar26);
		vVar35 = { StackVal, StackVal, Function_139(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_139(int iParam0) //Position: 0x84E5 / 34021
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_140(vector3 vParam0) //Position: 0x8504 / 34052
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8524 / 34084
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(var uParam0, var uParam1, int iParam2) //Position: 0x8537 / 34103
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_218(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_143(bool bParam0) //Position: 0x876B / 34667
{
	return GET_HEADING(bParam0);
}

vector3 Function_144(bool bParam0) //Position: 0x8776 / 34678
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_145(vector3 vParam0) //Position: 0x8787 / 34695
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(var uParam0, bool bParam1, int iParam2) //Position: 0x879F / 34719
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_148(Global_34573, 0, 0))
		{
			DECOR_REMOVE(*uParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_148(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(Global_34573, *uParam0) > 3.0f)
				{
					Function_197(iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_116(*uParam0);
				bVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(Global_34573, *uParam0) > 3.0f)
			{
				Function_197(iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_116(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_148(Global_34573, 0, 0))
	{
		if (bParam1)
		{
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", uParam0->f_12, 10, 4, "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(*uParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(*uParam0, "nUC_NoAmmo");
			}
			iVar6 = Function_116(*uParam0);
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", uParam0->f_12, 10, 4, iVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal);
	}
	return 0;
}

float Function_147(bool bParam0, bool bParam1) //Position: 0x8B2F / 35631
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

bool Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C20 / 35872
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_151(bParam0))
	{
		return 1;
	}
	if (Function_150(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x8CD6 / 36054
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_150(bool bParam0) //Position: 0x8CED / 36077
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_151(bool bParam0) //Position: 0x8CF8 / 36088
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8D06 / 36102
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8D81 / 36225
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x8DC0 / 36288
{
	if (Function_29(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8DDB / 36315
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
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x8E60 / 36448
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_200(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_157(bool bParam0) //Position: 0x8F18 / 36632
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_28(bParam0))
	{
		if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			bVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(bVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[bParam0];
			Function_197(&uVar7, 0x8000000);
			Function_197(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_162(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_193(bParam0);
			uVar16 = Function_200(111, 111, 5);
			Function_161(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_160(uVar15, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_158(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_197(&uVar17, 0x1000000);
			Function_197(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x90CB / 37067
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(1))
	{
		iVar0 = 1;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(2))
	{
		iVar0 = 2;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(3))
	{
		iVar0 = 3;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(4))
	{
		iVar0 = 4;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(5))
	{
		iVar0 = 5;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(8))
	{
		iVar0 = 8;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(9))
	{
		iVar0 = 9;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(11))
	{
		iVar0 = 11;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(12))
	{
		iVar0 = 12;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(13))
	{
		iVar0 = 13;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(14))
	{
		iVar0 = 14;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(15))
	{
		iVar0 = 15;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(16))
	{
		iVar0 = 16;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(17))
	{
		iVar0 = 17;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(18))
	{
		iVar0 = 18;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(19))
	{
		iVar0 = 19;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(21))
	{
		iVar0 = 21;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(22))
	{
		iVar0 = 22;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(23))
	{
		iVar0 = 23;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_159(24))
	{
		iVar0 = 24;
		iVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = iVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x93DF / 37855
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9403 / 37891
{
	while (iParam4 > 60)
	{
		iParam4 = (iParam4 - 60);
		iParam3++;
	}
	while (iParam3 > 60)
	{
		iParam3 = (iParam3 - 60);
		iParam2++;
	}
	while (iParam2 > 24)
	{
		iParam2 = (iParam2 - 24);
		iParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
	}
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x96C3 / 38595
{
	switch (iParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
	}
}

var Function_162(bool bParam0, int iParam1, float fParam2) //Position: 0x9902 / 39170
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == iParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0x994F / 39247
{
	Function_169(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_169(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_169(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_164(iParam0 + 192);
	return;
}

bool Function_164(int iParam0) //Position: 0x99BB / 39355
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_24(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		Function_167(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_24(iParam0[iVar03], 4))
		{
			if (!Function_24(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_24(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_24(iParam0[03], 8) || iVar1));
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
				Function_167(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_24(iParam0[iVar03], 4))
		{
			if (!Function_24(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0x9D36 / 40246
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_166() //Position: 0x9D76 / 40310
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

void Function_167(var uParam0, int iParam1) //Position: 0x9DA1 / 40353
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x9DB2 / 40370
{
	if (!Function_26(128))
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

var Function_169(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9DF4 / 40436
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_170(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_167(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0x9E2C / 40492
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_24(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_167(uParam0[iVar03], 4);
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

bool Function_171() //Position: 0x9EF0 / 40688
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar3, "Chest_BlipName");
			DECOR_SET_INT(bVar2, "ChestBlip_AsInt", bVar3);
			SET_BLIP_PRIORITY(bVar3, 1);
			if (Global_29006 == Global_30717[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 2.3f);
			}
			else if (Global_29006 == Global_30723[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 1.5f);
			}
		}
		bVar0 = true;
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_172(bool bParam0, var uParam1, struct<365> Param2) //Position: 0x9FD5 / 40917
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			bVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(bVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, bVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				bVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(bVar17));
				if (!Function_29(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, bVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(bVar3);
}

var Function_173(struct<365> Param0) //Position: 0xA143 / 41283
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_174(int iParam0) //Position: 0xA157 / 41303
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_29((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_38((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_44(iParam0 + 4[iVar15] + 16, 1);
						SET_OBJECT_POSITION((*iParam0 + 4)[iVar15], vVar2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_44(iParam0 + 356, 1024);
	}
	return;
}

void Function_175(int iParam0, int iParam1) //Position: 0xA20E / 41486
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&bVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(bVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_29(iParam0->f_356, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(bVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_147(bVar3, Global_34573) > 3.5f)
					{
						Function_197(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_29(iParam0->f_356, 2))
		{
			fVar6 = Function_147(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_29(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_147(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_29((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
					iParam0->f_372 = fVar4;
					iParam0->f_380 = fVar4;
				}
			}
			else if (fVar4 - iParam0->f_380) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
		}
	}
	return;
}

bool Function_176(var uParam0, float fParam1, bool bParam2) //Position: 0xA64D / 42573
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_SPHERE(bVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(bVar3))
		{
			if (bParam2)
			{
				*uParam0 = bVar3;
			}
		}
		else
		{
			*uParam0 = bVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return bVar1;
}

void Function_177(int iParam0, int iParam1, float fParam2) //Position: 0xA6CA / 42698
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_29(iParam0->f_356, 0x2000000))
				{
					Function_44(iParam0 + 356, 4194304);
					Function_44(iParam0 + 356, 8388608);
					Function_44(iParam0 + 356, 0x1000000);
					Function_44(iParam0 + 356, 1048576);
					Function_44(iParam0 + 356, 2097152);
					Function_197(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_29(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 2097152);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_29(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_29(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 4194304);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_29(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_29(iParam0->f_356, 0x1000000))
	{
		Function_197(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xA9A6 / 43430
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_179(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_179(bool bParam0, var uParam1, bool bParam2) //Position: 0xA9D9 / 43481
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_180(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_38(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return iVar1;
}

bool Function_180(bool bParam0) //Position: 0xAAA3 / 43683
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_181(bool bParam0, int iParam1) //Position: 0xAAEE / 43758
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xAB30 / 43824
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_29006);
	fVar1 = Function_191(Global_29006);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	fVar3 = Function_183(0.33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xAB7E / 43902
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xAB91 / 43921
{
	if (Function_29(iParam0, 1) && !Function_29(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xABBE / 43966
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			SET_MOVER_FROZEN(bVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar1, 4);
			if (!Function_29(iParam0->f_356, 0x4000000))
			{
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(bVar1);
			vVar2 = { 0.0f, 0.0f, 0.0f };
			Var5 = { 0.0f, 0.0f, 0.0f };
			GET_OBJECT_POSITION(StackVal, &vVar2);
			GET_OBJECT_ORIENTATION(StackVal, &Var5);
			if (!bParam1)
			{
				TASK_PRIORITY_SET(bVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar1, &vVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, true);
				if (!Function_29(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(*iParam0, *iParam0, 0);
	return;
}

void Function_186(bool bParam0, bool bParam1, int iParam2) //Position: 0xACA2 / 44194
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
			Function_187(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_187(bool bParam0, bool bParam1, int iParam2) //Position: 0xACF1 / 44273
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xAD3B / 44347
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_27(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xAD7A / 44410
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_29(iParam0->f_356, 512))
	{
		fVar0 = Function_191(Global_29006);
		iVar1 = Function_193(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xAE3B / 44603
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(bVar0) == 325)
	{
		REMOVE_BLIP(bVar0);
	}
	bVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(bVar1))
	{
		REMOVE_BLIP(bVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		bVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_191(bool bParam0) //Position: 0xAEFE / 44798
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0xAF58 / 44888
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_193(bool bParam0) //Position: 0xB09B / 45211
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_194() //Position: 0xB221 / 45601
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(bVar2))
		{
			REMOVE_BLIP(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_195(bool bParam0, int iParam1) //Position: 0xB27F / 45695
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_196(bool bParam0, float fParam1) //Position: 0xB3A0 / 45984
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xB3C3 / 46019
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xB3D2 / 46034
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xB40F / 46095
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB426 / 46118
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_201(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(bParam0, bParam1, bParam2, 4294967295);
}

int Function_201(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB484 / 46212
{
	var uVar0;
	
	if (!Function_203(bParam2))
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
	uVar0 = Function_204(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_202(uVar0);
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

int Function_202(int iParam0) //Position: 0xB5D9 / 46553
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

bool Function_203(int iParam0) //Position: 0xB617 / 46615
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB62C / 46636
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xB64C / 46668
{
	iParam0 = iParam0;
	return;
}

void Function_206(bool bParam0, float fParam1) //Position: 0xB656 / 46678
{
	if (!Function_26(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_207(bool bParam0, bool bParam1) //Position: 0xB694 / 46740
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_71(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_51())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_208(int iParam0) //Position: 0xB78E / 46990
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_209(bool bParam0) //Position: 0xB7A1 / 47009
{
	Function_210(StackVal, 0, 0.0f, 4, Local_108, 1);
	return;
}

void Function_210(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB7B9 / 47033
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_213();
	}
	if (bParam5)
	{
		Function_211(1048576);
	}
}

void Function_211(int iParam0) //Position: 0xB8CC / 47308
{
	Function_212(&Global_28842, iParam0);
	return;
}

void Function_212(var uParam0, var uParam1) //Position: 0xB8DA / 47322
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_213() //Position: 0xB8F5 / 47349
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_211(16384);
	}
	return;
}

void Function_214(var uParam0) //Position: 0xB911 / 47377
{
	uParam0 = uParam0;
	return;
}

void Function_215() //Position: 0xB91B / 47387
{
	return;
}

void Function_216(int iParam0) //Position: 0xB921 / 47393
{
	iParam0 = iParam0;
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xB92B / 47403
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_218(int iParam0, int iParam1) //Position: 0xB942 / 47426
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0xB95E / 47454
{
	return;
}

void Function_220() //Position: 0xB964 / 47460
{
	return;
}

void Function_221(int iParam0) //Position: 0xB96A / 47466
{
	iParam0 = iParam0;
	return;
}

void Function_222(int iParam0, bool bParam1, bool bParam2) //Position: 0xB974 / 47476
{
	if ((!Function_5(bParam1) || Global_3380) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_223(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_223(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_223(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_223(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_223(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_223(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_223(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_223(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_223(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_223(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_223(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_223(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_223(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_223(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_223(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_223(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_223(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_223(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_223(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_223(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_223(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_223(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_223(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_223(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_223(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_223(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_197(iParam0 + 356, 64);
	return;
}

void Function_223(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBC41 / 48193
{
	struct<8> Var0;
	bool bVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_44(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_231(bParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_230(uParam2[bVar222], 4))
			{
				(iParam0 + 4[bVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, bVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(StackVal, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(StackVal, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					vVar24 = { 0.0f, 0.0f, 0.0f };
					vVar27 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(StackVal, &vVar24);
					GET_OBJECT_ORIENTATION(StackVal, &vVar27);
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_225(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_197(iParam0 + 4[bVar225] + 16, 1);
						Function_197(iParam0 + 356, 1024);
					}
					Function_197(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_224(uParam2[bVar222], 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_186(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_224(var uParam0, int iParam1) //Position: 0xBE2D / 48685
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_225(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xBE3C / 48700
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	bool bVar13;
	bool bVar14;
	char* cVar15[32];
	bool bVar23;
	bool bVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	bVar1 = StackVal;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SQUAD_JOIN(bVar0, *iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(bVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(bVar0);
	SET_ACTOR_MAX_HEALTH(bVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(bVar0, 0);
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Var7 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_POSITION(StackVal, &vVar4);
	GET_OBJECT_ORIENTATION(StackVal, &Var7);
	bVar10 = true;
	if (DECOR_CHECK_EXIST(bVar1, "GiveWeapon"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, bVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(bVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRevolvers"));
			DECOR_SET_INT(StackVal, "ZP_NumRevolvers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 7);
		}
		else if (iVar12 == 39)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumPistols"));
			DECOR_SET_INT(StackVal, "ZP_NumPistols", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 6);
		}
		else if (iVar12 == 41)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
			DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 8);
		}
		else if (iVar12 == 42)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRifles"));
			DECOR_SET_INT(StackVal, "ZP_NumRifles", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 9);
		}
		else if (iVar12 == 43)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumShotguns"));
			DECOR_SET_INT(StackVal, "ZP_NumShotguns", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 10);
		}
		else if (iVar12 == 44)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumSnipers"));
			DECOR_SET_INT(StackVal, "ZP_NumSnipers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0, 1, 1);
		bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
		DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
		DECOR_SET_INT(bVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_229(bVar0, 0);
	Function_228(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_227(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_227(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		bVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(bVar14), 32);
		bVar23 = FIND_VOLUME_IN_LAYOUT(bParam2, &cVar15);
		if (IS_VOLUME_VALID(bVar23))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, bVar23, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(bVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_OVERRIDE_SET_POSTURE(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(bVar1, "Gringo") || !bParam3)
	{
		bVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(bVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_226(bVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(bVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, bVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 2);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	Function_227(bVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.75f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(bVar1, "Core"))
		{
			iParam1->f_168 = bVar0;
		}
		else if (Global_13172[iParam1->f_36411].f_32 < 0.0f)
		{
			Global_13172[iParam1->f_36411].f_32 = (Global_13172[iParam1->f_36411].f_32 - 1.0f);
			DECOR_SET_BOOL(bVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_226(bool bParam0, bool bParam1) //Position: 0xC4B3 / 50355
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_227(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xC4C0 / 50368
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_228(bool bParam0, bool bParam1) //Position: 0xC507 / 50439
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0xC54D / 50509
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

bool Function_230(var uParam0, int iParam1) //Position: 0xC57C / 50556
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_231(bool bParam0, int iParam1) //Position: 0xC598 / 50584
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3[4];
	bool bVar8;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_27(iParam1))
		{
			if (STRING_CONTAINS_STRING(bVar8, "_def"))
			{
				iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(bVar8, "_safe"))
		{
			iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return iVar3[(RAND_INT_RANGE(0, 100000) % iVar2)];
}

struct<32> Function_232(bool bParam0) //Position: 0xC63C / 50748
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233("0", &cVar8, ""), 4);
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

struct<32> Function_233(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC6A6 / 50854
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_234() //Position: 0xC6C5 / 50885
{
	return;
}

bool Function_235(int iParam0) //Position: 0xC6CB / 50891
{
	if (Function_29(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_164(iParam0 + 192);
}

int Function_236(int iParam0) //Position: 0xC6EA / 50922
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_218(&(Global_29008[iParam0]), 4);
}

int Function_237() //Position: 0xC706 / 50950
{
	return 1;
}

void Function_238(bool bParam0) //Position: 0xC70D / 50957
{
	Function_239(&iLocal_561, bLocal_7, "bank01", 3, &Global_29155[bParam010] + 20, 1, Local_163.f_20, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "bank01", 2, &Global_29155[bParam010] + 20, 0, Local_163.f_20, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "bank01", 1, &Global_29155[bParam010] + 20, 0, Local_163.f_20, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "ncantina01", 1, &Global_29155[bParam010] + 20, 0, Local_163.f_104, 0, 1);
	Function_239(&iLocal_561, bLocal_7, "church01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "corral01", 3, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "corral01", 4, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "corral01", 5, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "corral01", 6, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "trainstation01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "trainstation01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "trainstation01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&iLocal_561, bLocal_7, "trainstation01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_239(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xC8EC / 51436
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_240(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_48(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_48(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_48(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_48(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_240(int iParam0) //Position: 0xC9D8 / 51672
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_241() //Position: 0xCA06 / 51718
{
	Function_242(&uLocal_8, &uLocal_497, 4, Local_163.f_484, 4294967295, 4);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_16, 4294967295, 0x1000108);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_448, 4294967295, 0x1000108);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_32, 4294967295, 65802);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_52, 4294967295, 0x2000010a);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_68, 4294967295, 16650);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_504, 4294967295, 16648);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_84, 4294967295, 0x4000010a);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_632, 4294967295, 0x4000010a);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_644, 4294967295, 0x4000010a);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_608, 4294967295, 0x40000108);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_100, 4294967295, 4194570);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_128, 4294967295, 778);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_544, 4294967295, 776);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_104, 4294967295, 258);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_156, 4294967295, 0x2000108);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_512, 4294967295, 8456);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_508, 4294967295, 2312);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_328, 4294967295, 0x10000108);
	Function_242(&uLocal_8, &uLocal_497, 5, Local_163.f_20, 4294967295, 0x800018a);
	Function_242(&uLocal_8, &uLocal_497, 5, (*&Local_163 + 436)[1], 4294967295, 0x1000000);
	return;
}

void Function_242(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xCB95 / 52117
{
	if (*uParam0 >= (*uParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_243(int iParam0) //Position: 0xCC70 / 52336
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_244(int iParam0, bool bParam1) //Position: 0xCC7F / 52351
{
	bool bVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_245(int iParam0, bool bParam1, bool bParam2) //Position: 0xCCE7 / 52455
{
	bool bVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	if (!Function_27(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_246() //Position: 0xCD75 / 52597
{
	return Local_108;
}

void Function_247(int iParam0) //Position: 0xCD7D / 52605
{
	bLocal_7 = Function_248(Local_108, "nchuparosa", iParam0);
	return;
}

var Function_248(bool bParam0, char* cParam1, int iParam2) //Position: 0xCD98 / 52632
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_249() //Position: 0xCDB7 / 52663
{
	return Function_250();
}

int Function_250() //Position: 0xCDC0 / 52672
{
	var uVar0;
	
	Function_251(3, 3);
	uVar0 = uVar0;
	Local_163 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(Local_163))
	{
		Local_163 = CREATE_LAYOUT("Chuparosa_layout");
	}
	Local_163.f_16 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_stables_cow_set");
	(*&Local_163 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stables1", 2, -2605.795f, 31.90274f, 4276.023f, 0.0f, -40.69148f, 0.0f, 21.76543f, 6.78934f, 24.16265f);
	ADD_TO_VOLUME_SET(Local_163.f_16, (*&Local_163 + 4)[0]);
	(*&Local_163 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stables2", 2, -2619.399f, 32.10219f, 4271.353f, 0.0f, 49.09663f, 0.0f, 10.0665f, 4.514367f, 7.047185f);
	ADD_TO_VOLUME_SET(Local_163.f_16, (*&Local_163 + 4)[1]);
	Local_163.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_bank_vault", 2, -2742.777f, 33.46533f, 4247.736f, 0.0f, 49.41427f, 0.0f, 5.571682f, 5.029839f, 7.834123f);
	Local_163.f_32 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_house_set");
	(*&Local_163 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_house1", 2, -2740.028f, 33.46533f, 4245.018f, 0.0f, 49.41427f, 0.0f, 13.64407f, 5.029839f, 8.517245f);
	ADD_TO_VOLUME_SET(Local_163.f_32, (*&Local_163 + 24)[0]);
	Local_163.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_hotel_set");
	(*&Local_163 + 36)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_hotel3", 2, -2730.003f, 38.03709f, 4235.552f, 0.0f, 31.74332f, 0.0f, 2.598028f, 3.262976f, 20.73465f);
	ADD_TO_VOLUME_SET(Local_163.f_52, (*&Local_163 + 36)[0]);
	(*&Local_163 + 36)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_hotel4", 2, -2730.383f, 38.03709f, 4225.049f, 0.0f, 31.74332f, 0.0f, 9.602288f, 3.262976f, 2.906296f);
	ADD_TO_VOLUME_SET(Local_163.f_52, (*&Local_163 + 36)[1]);
	(*&Local_163 + 36)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_hotel5", 2, -2721.777f, 37.9095f, 4241.192f, 0.0f, 31.3836f, 0.0f, 6.75748f, 3.126287f, 2.483033f);
	ADD_TO_VOLUME_SET(Local_163.f_52, (*&Local_163 + 36)[2]);
	Local_163.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_trainStation_set");
	(*&Local_163 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_trainStation1", 2, -2687.257f, 34.22969f, 4221.403f, 0.0f, -12.84121f, 0.0f, 15.41997f, 5.172666f, 4.103372f);
	ADD_TO_VOLUME_SET(Local_163.f_68, (*&Local_163 + 56)[0]);
	(*&Local_163 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_trainStation2", 2, -2685.808f, 34.63214f, 4225.351f, 0.0f, -11.91832f, 0.0f, 10.35141f, 4.421164f, 3.167867f);
	ADD_TO_VOLUME_SET(Local_163.f_68, (*&Local_163 + 56)[1]);
	Local_163.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_courthouse_set");
	(*&Local_163 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse1", 2, -2655.946f, 34.90889f, 4256.365f, 0.0f, -9.855526f, 0.0f, 16.0207f, 10.87173f, 10.90119f);
	ADD_TO_VOLUME_SET(Local_163.f_84, (*&Local_163 + 72)[0]);
	(*&Local_163 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse4", 2, -2657.589f, 39.74383f, 4255.818f, 0.0f, -9.682225f, 0.0f, 11.91524f, 7.825671f, 5.567136f);
	ADD_TO_VOLUME_SET(Local_163.f_84, (*&Local_163 + 72)[1]);
	Local_163.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_church_set");
	(*&Local_163 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_church1", 2, -2667.556f, 32.96333f, 4281.396f, 0.0f, 46.52884f, 0.0f, 6.338459f, 4.524786f, 19.98719f);
	ADD_TO_VOLUME_SET(Local_163.f_100, (*&Local_163 + 88)[0]);
	(*&Local_163 + 88)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_church2", 2, -2658.874f, 32.65079f, 4279.752f, 0.0f, -42.52038f, 0.0f, 8.600691f, 5.134214f, 17.95993f);
	ADD_TO_VOLUME_SET(Local_163.f_100, (*&Local_163 + 88)[1]);
	Local_163.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_players_room", 2, -2689.648f, 33.35108f, 4295.297f, 0.0f, -2.425529f, 0.0f, 10.214f, 5.658111f, 7.198388f);
	Local_163.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_saloon_set");
	(*&Local_163 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon2", 2, -2697.394f, 33.08836f, 4288.752f, 0.0f, -1.969252f, 0.0f, 4.890943f, 4.747464f, 12.32002f);
	ADD_TO_VOLUME_SET(Local_163.f_128, (*&Local_163 + 108)[0]);
	(*&Local_163 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon1", 2, -2688.345f, 33.61721f, 4285.196f, 0.0f, -1.700859f, 0.0f, 14.83546f, 5.431608f, 4.634268f);
	ADD_TO_VOLUME_SET(Local_163.f_128, (*&Local_163 + 108)[1]);
	(*&Local_163 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon3", 2, -2700.984f, 33.20852f, 4283.411f, 0.0f, -1.902949f, 0.0f, 3.817018f, 4.0988f, 1.967225f);
	ADD_TO_VOLUME_SET(Local_163.f_128, (*&Local_163 + 108)[2]);
	(*&Local_163 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon9", 2, -2692.352f, 33.08047f, 4289.536f, 0.0f, -1.439431f, 0.0f, 4.770793f, 3.772571f, 3.995768f);
	ADD_TO_VOLUME_SET(Local_163.f_128, (*&Local_163 + 108)[3]);
	Local_163.f_156 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_market_set");
	(*&Local_163 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_market5", 2, -2726.348f, 34.69062f, 4276.513f, 0.0f, -7.341915f, 0.0f, 4.81046f, 4.198735f, 29.25647f);
	ADD_TO_VOLUME_SET(Local_163.f_156, (*&Local_163 + 132)[0]);
	(*&Local_163 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_market4", 2, -2720.054f, 34.31895f, 4273.662f, 0.0f, 0.0f, 0.0f, 5.22965f, 3.263618f, 6.33866f);
	ADD_TO_VOLUME_SET(Local_163.f_156, (*&Local_163 + 132)[1]);
	(*&Local_163 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_market3", 2, -2719.863f, 34.76211f, 4264.865f, 0.0f, 1.273791f, 0.0f, 10.42363f, 4.100439f, 10.10078f);
	ADD_TO_VOLUME_SET(Local_163.f_156, (*&Local_163 + 132)[2]);
	(*&Local_163 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_market2", 2, -2734.906f, 34.4425f, 4284.707f, 0.0f, -13.18575f, 0.0f, 10.61949f, 5.015597f, 5.316793f);
	ADD_TO_VOLUME_SET(Local_163.f_156, (*&Local_163 + 132)[3]);
	(*&Local_163 + 132)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_market1", 2, -2739.525f, 33.03678f, 4274.165f, 0.0f, -15.13602f, 0.0f, 8.98315f, 3.795127f, 22.59898f);
	ADD_TO_VOLUME_SET(Local_163.f_156, (*&Local_163 + 132)[4]);
	Local_163.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_townsquare_set");
	(*&Local_163 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_townsquare1", 3, -2683.989f, 33.46743f, 4255.27f, 0.0f, 20.0f, 0.0f, 6.893754f, 2.452447f, 7.361441f);
	ADD_TO_VOLUME_SET(Local_163.f_168, (*&Local_163 + 160)[0]);
	Local_163.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_walkways_set");
	(*&Local_163 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways1", 2, -2663.449f, 32.90543f, 4272.755f, 0.0f, 44.77998f, 0.0f, 11.40482f, 5.514219f, 6.185249f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[0]);
	(*&Local_163 + 172)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways2", 2, -2671.435f, 32.91413f, 4271.317f, 0.0f, 44.40546f, 0.0f, 2.22827f, 5.059163f, 8.534715f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[1]);
	(*&Local_163 + 172)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways3", 2, -2676.688f, 32.75834f, 4273.152f, 0.0f, 44.71632f, 0.0f, 9.467569f, 4.288859f, 3.956372f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[2]);
	(*&Local_163 + 172)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways4", 2, -2680.241f, 33.2816f, 4267.359f, 0.0f, 26.25295f, 0.0f, 2.822908f, 4.375935f, 12.09651f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[3]);
	(*&Local_163 + 172)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways5", 2, -2673.886f, 32.99639f, 4253.706f, 0.0f, 8.458183f, 0.0f, 8.853853f, 5.540692f, 2.461343f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[4]);
	(*&Local_163 + 172)[5] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways6", 2, -2666.907f, 32.97532f, 4251.073f, 0.0f, -7.572112f, 0.0f, 4.506724f, 4.847564f, 3.539175f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[5]);
	(*&Local_163 + 172)[6] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways7", 2, -2667.572f, 32.82364f, 4257.39f, 0.0f, -10.168f, 0.0f, 5.064583f, 4.673167f, 2.895167f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[6]);
	(*&Local_163 + 172)[7] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways8", 2, -2696.814f, 33.2753f, 4256.957f, 0.0f, 0.0f, 0.0f, 14.74983f, 5.179121f, 2.849099f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[7]);
	(*&Local_163 + 172)[8] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways9", 2, -2698.064f, 32.57437f, 4261.74f, 0.0f, 0.0f, 0.0f, 2.594186f, 4.441894f, 26.43219f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[8]);
	(*&Local_163 + 172)[9] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways10", 2, -2702.273f, 32.94614f, 4264.21f, 0.0f, 0.0f, 0.0f, 5.131135f, 6.732898f, 7.927642f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[9]);
	(*&Local_163 + 172)[10] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways11", 2, -2696.826f, 32.4829f, 4271.945f, 0.0f, 0.0f, 0.0f, 12.9258f, 3.870071f, 5.757498f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[10]);
	(*&Local_163 + 172)[11] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways12", 2, -2687.551f, 32.30338f, 4279.523f, 0.0f, -1.777115f, 0.0f, 14.91622f, 5.789664f, 4.542312f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[11]);
	(*&Local_163 + 172)[12] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways13", 2, -2691.89f, 32.96828f, 4275.994f, 0.0f, 0.0f, 0.0f, 2.800533f, 5.42481f, 3.40191f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[12]);
	(*&Local_163 + 172)[13] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways14", 2, -2705.243f, 32.29985f, 4275.185f, 0.0f, 0.0f, 0.0f, 2.8164f, 3.914332f, 13.35452f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[13]);
	(*&Local_163 + 172)[14] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways15", 2, -2713.837f, 34.08649f, 4256.925f, 0.0f, 0.0f, 0.0f, 14.83939f, 3.823054f, 2.593326f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[14]);
	(*&Local_163 + 172)[15] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways16", 2, -2704.942f, 33.30577f, 4256.926f, 0.0f, 0.0f, -25.97463f, 5.665668f, 4.231193f, 2.919568f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[15]);
	(*&Local_163 + 172)[16] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways17", 2, -2712.254f, 33.65039f, 4281.824f, -1.778329f, -90.58387f, -1.576875f, 30.71697f, 3.196666f, 5.200883f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[16]);
	(*&Local_163 + 172)[17] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways18", 2, -2716.191f, 33.96391f, 4263.158f, 0.0f, 5.117352f, 0.0f, 3.161594f, 3.360472f, 12.75982f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[17]);
	(*&Local_163 + 172)[18] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways19", 2, -2735.923f, 33.88766f, 4284.459f, 0.0f, -31.17464f, 0.0f, 13.79623f, 4.296254f, 2.581599f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[18]);
	(*&Local_163 + 172)[19] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways20", 2, -2745.691f, 33.72624f, 4280.568f, 0.0f, 15.40936f, 0.0f, 9.722217f, 3.939612f, 2.465116f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[19]);
	(*&Local_163 + 172)[20] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways21", 2, -2747.219f, 34.11061f, 4253.73f, 0.0f, 48.06638f, 0.0f, 3.890298f, 4.112593f, 10.44536f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[20]);
	(*&Local_163 + 172)[21] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways22", 2, -2735.906f, 33.69557f, 4249.452f, 0.0f, -42.25198f, 0.0f, 2.968621f, 4.48543f, 13.71076f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[21]);
	(*&Local_163 + 172)[22] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways23", 2, -2721.404f, 33.91082f, 4242.746f, 0.0f, 31.45421f, 0.0f, 8.25839f, 4.405485f, 5.534965f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[22]);
	(*&Local_163 + 172)[23] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways24", 2, -2727.653f, 33.71625f, 4239.352f, 0.0f, -57.05105f, 0.0f, 15.81942f, 3.878973f, 2.139719f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[23]);
	(*&Local_163 + 172)[24] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways29", 2, -2711.572f, 33.82289f, 4241.125f, 0.0f, 31.3482f, 0.0f, 13.96442f, 4.243851f, 2.366093f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[24]);
	(*&Local_163 + 172)[25] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways28", 2, -2710.467f, 33.65117f, 4227.495f, 0.0f, 30.98882f, 0.0f, 1.90464f, 4.235637f, 19.46796f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[25]);
	(*&Local_163 + 172)[26] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways27", 2, -2724.336f, 33.89269f, 4226.71f, 0.0f, 32.45915f, 0.0f, 22.54301f, 4.913895f, 2.197382f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[26]);
	(*&Local_163 + 172)[27] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways26", 2, -2687.867f, 32.29839f, 4229.06f, 0.0f, -12.96379f, 0.0f, 19.02541f, 6.773013f, 3.620454f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[27]);
	(*&Local_163 + 172)[28] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways25", 2, -2696.427f, 32.94411f, 4239.017f, 0.0f, -11.91591f, 0.0f, 3.086068f, 4.205414f, 21.22056f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[28]);
	(*&Local_163 + 172)[29] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways30", 2, -2697.4f, 34.17563f, 4222.308f, 0.0f, -11.86304f, 0.0f, 2.621392f, 4.440036f, 15.74873f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[29]);
	(*&Local_163 + 172)[30] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways31", 2, -2676.649f, 34.14864f, 4225.073f, 0.0f, -11.78958f, 0.0f, 6.262226f, 4.621839f, 15.9958f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[30]);
	(*&Local_163 + 172)[31] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_walkways32", 2, -2686.26f, 33.89177f, 4216.742f, 0.0f, -11.97022f, 0.0f, 19.66932f, 4.200562f, 3.361279f);
	ADD_TO_VOLUME_SET(Local_163.f_304, (*&Local_163 + 172)[31]);
	Local_163.f_328 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_stagecoachStop_set");
	(*&Local_163 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stagestop1", 2, -2753.092f, 34.05214f, 4282.551f, 0.0f, 14.71638f, 0.0f, 3.520556f, 2.896959f, 10.84694f);
	ADD_TO_VOLUME_SET(Local_163.f_328, (*&Local_163 + 308)[0]);
	(*&Local_163 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stagestop2", 2, -2748.03f, 34.14611f, 4290.846f, 0.0f, -24.77999f, 0.0f, 6.070085f, 3.006409f, 3.20946f);
	ADD_TO_VOLUME_SET(Local_163.f_328, (*&Local_163 + 308)[1]);
	(*&Local_163 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stagestop3", 2, -2750.961f, 33.96892f, 4288.507f, 0.0f, -54.72388f, 0.0f, 3.158629f, 2.82801f, 3.446311f);
	ADD_TO_VOLUME_SET(Local_163.f_328, (*&Local_163 + 308)[2]);
	(*&Local_163 + 308)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stagestop4", 2, -2755.459f, 33.94178f, 4282.888f, 0.0f, 15.4364f, 0.0f, 3.706964f, 2.641813f, 2.94574f);
	ADD_TO_VOLUME_SET(Local_163.f_328, (*&Local_163 + 308)[3]);
	Local_163.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_chicken_set");
	(*&Local_163 + 332)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens7", 3, -2737.708f, 34.03755f, 4272.097f, 0.0f, 20.0f, 0.0f, 14.31845f, 2.551048f, 14.31845f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[0]);
	(*&Local_163 + 332)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens1", 3, -2722.387f, 35.01705f, 4258.46f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 10.73739f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[1]);
	(*&Local_163 + 332)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens2", 3, -2721.272f, 35.26456f, 4283.757f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 14.31845f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[2]);
	(*&Local_163 + 332)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens3", 3, -2689.449f, 34.28006f, 4255.05f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 14.31845f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[3]);
	(*&Local_163 + 332)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens4", 3, -2670.597f, 34.28032f, 4239.371f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 6.080139f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[4]);
	(*&Local_163 + 332)[5] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens5", 3, -2654.585f, 34.05864f, 4233.173f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 10.59429f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[5]);
	(*&Local_163 + 332)[6] = CREATE_VOLUME_IN_LAYOUT(Local_163, "nchickens6", 3, -2697.439f, 34.16259f, 4245.152f, 0.0f, 20.0f, 0.0f, 14.31845f, 3.24735f, 9.11238f);
	ADD_TO_VOLUME_SET(Local_163.f_364, (*&Local_163 + 332)[6]);
	Local_163.f_388 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_dog_set");
	(*&Local_163 + 368)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "dog5", 3, -2667.705f, 34.3265f, 4238.568f, 0.0f, 20.0f, 0.0f, 18.00911f, 3.643864f, 6.865031f);
	ADD_TO_VOLUME_SET(Local_163.f_388, (*&Local_163 + 368)[0]);
	(*&Local_163 + 368)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "dog2", 3, -2699.685f, 32.82862f, 4244.346f, 0.0f, 115.5934f, 0.0f, 4.517485f, 2.158237f, 22.88598f);
	ADD_TO_VOLUME_SET(Local_163.f_388, (*&Local_163 + 368)[1]);
	(*&Local_163 + 368)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "dog3", 3, -2750.257f, 32.7332f, 4264.145f, 0.0f, 105.802f, 0.0f, 13.10861f, 2.158237f, 3.75971f);
	ADD_TO_VOLUME_SET(Local_163.f_388, (*&Local_163 + 368)[2]);
	(*&Local_163 + 368)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "dog4", 3, -2705.278f, 32.13754f, 4226.758f, 0.0f, 107.4618f, 0.0f, 11.01402f, 2.158237f, 1.987857f);
	ADD_TO_VOLUME_SET(Local_163.f_388, (*&Local_163 + 368)[3]);
	Local_163.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_goat_set");
	(*&Local_163 + 392)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "goat1", 3, -2723.971f, 34.60061f, 4255.979f, 0.0f, 20.0f, 0.0f, 18.95487f, 3.846697f, 7.981451f);
	ADD_TO_VOLUME_SET(Local_163.f_404, (*&Local_163 + 392)[0]);
	(*&Local_163 + 392)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "goat2", 3, -2679.677f, 33.84932f, 4241.338f, 0.0f, 12.06359f, 0.0f, 32.2497f, 3.182418f, 5.023716f);
	ADD_TO_VOLUME_SET(Local_163.f_404, (*&Local_163 + 392)[1]);
	Local_163.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_bird_set");
	(*&Local_163 + 408)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "bird1", 3, -2743.083f, 39.11457f, 4269.54f, 0.0f, 20.0f, 0.0f, 25.81576f, 6.289899f, 34.42829f);
	ADD_TO_VOLUME_SET(Local_163.f_432, (*&Local_163 + 408)[0]);
	(*&Local_163 + 408)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "bird2", 3, -2695.979f, 38.04613f, 4280.02f, 0.0f, 20.0f, 0.0f, 22.62743f, 6.289899f, 28.09335f);
	ADD_TO_VOLUME_SET(Local_163.f_432, (*&Local_163 + 408)[1]);
	(*&Local_163 + 408)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "bird3", 3, -2703.406f, 39.58453f, 4229.563f, 0.0f, 20.0f, 0.0f, 34.84185f, 6.289899f, 24.96616f);
	ADD_TO_VOLUME_SET(Local_163.f_432, (*&Local_163 + 408)[2]);
	(*&Local_163 + 408)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "bird4", 3, -2661.546f, 40.36647f, 4257.891f, 0.0f, 20.0f, 0.0f, 31.34077f, 6.289899f, 34.12703f);
	ADD_TO_VOLUME_SET(Local_163.f_432, (*&Local_163 + 408)[3]);
	(*&Local_163 + 408)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "bird5", 3, -2615.523f, 36.11472f, 4267.196f, 0.0f, 20.0f, 0.0f, 22.62743f, 6.289899f, 30.50311f);
	ADD_TO_VOLUME_SET(Local_163.f_432, (*&Local_163 + 408)[4]);
	Local_163.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_stables_horse_set");
	(*&Local_163 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stables3", 3, -2633.31f, 32.62882f, 4265.351f, 0.0f, 20.0f, 0.0f, 5.116687f, 2.589136f, 5.018899f);
	ADD_TO_VOLUME_SET(Local_163.f_448, (*&Local_163 + 436)[0]);
	(*&Local_163 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_stables4", 3, -2627.845f, 32.91703f, 4257.556f, 0.0f, 20.0f, 0.0f, 7.41245f, 3.302373f, 6.790393f);
	ADD_TO_VOLUME_SET(Local_163.f_448, (*&Local_163 + 436)[1]);
	Local_163.f_476 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_workers_set");
	(*&Local_163 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_wrks6", 2, -2639.073f, 31.75344f, 4260.873f, 0.0f, -3.911364f, 0.0f, 8.509206f, 5.552478f, 20.54389f);
	ADD_TO_VOLUME_SET(Local_163.f_476, (*&Local_163 + 452)[0]);
	(*&Local_163 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_wrks5", 2, -2623.323f, 32.1165f, 4253.195f, 0.0f, -38.70404f, 0.0f, 13.79655f, 3.537822f, 7.133165f);
	ADD_TO_VOLUME_SET(Local_163.f_476, (*&Local_163 + 452)[1]);
	(*&Local_163 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_wrks4", 2, -2607.996f, 31.49876f, 4252.447f, 0.0f, 49.37606f, 0.0f, 1.910371f, 2.699449f, 13.69001f);
	ADD_TO_VOLUME_SET(Local_163.f_476, (*&Local_163 + 452)[2]);
	(*&Local_163 + 452)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_wrks3", 2, -2611.132f, 31.39912f, 4256.74f, 0.0f, -41.03762f, 0.0f, 2.908644f, 3.039696f, 10.09038f);
	ADD_TO_VOLUME_SET(Local_163.f_476, (*&Local_163 + 452)[3]);
	(*&Local_163 + 452)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_wrks2", 2, -2617.347f, 31.08973f, 4256.227f, 0.0f, 50.73727f, 0.0f, 11.44008f, 3.101299f, 6.267551f);
	ADD_TO_VOLUME_SET(Local_163.f_476, (*&Local_163 + 452)[4]);
	Local_163.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_drinkAmbExc", 2, -2700.821f, 32.13797f, 4278.411f, 0.0f, 0.0f, 0.0f, 3.515234f, 2.327648f, 4.484485f);
	Local_163.f_484 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_region", 3, -2675.111f, 43.96156f, 4264.86f, 0.0f, -2.629206f, 0.0f, 94.09933f, 18.2189f, 54.8989f);
	Local_163.f_504 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_TrnPlatform_set");
	(*&Local_163 + 488)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "Box", 2, -2683.835f, 34.45031f, 4217.348f, 0.0f, -12.81581f, 0.0f, 21.12366f, 9.21448f, 3.346525f);
	ADD_TO_VOLUME_SET(Local_163.f_504, (*&Local_163 + 488)[0]);
	(*&Local_163 + 488)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "Box1", 2, -2695.527f, 33.85666f, 4222.814f, 0.0f, -12.65563f, 0.0f, 8.677244f, 5.121027f, 18.19546f);
	ADD_TO_VOLUME_SET(Local_163.f_504, (*&Local_163 + 488)[1]);
	(*&Local_163 + 488)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "Box2", 2, -2677.591f, 33.90228f, 4227.211f, 0.0f, -13.57747f, 0.0f, 6.69855f, 6.410012f, 14.02431f);
	ADD_TO_VOLUME_SET(Local_163.f_504, (*&Local_163 + 488)[2]);
	Local_163.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_doctor", 2, -2710.858f, 34.26593f, 4287.386f, 0.0f, 0.0f, 0.0f, 4.215548f, 5.405833f, 8.614675f);
	Local_163.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_merchant", 2, -2725.998f, 34.26593f, 4294.91f, 0.0f, 80.14656f, 0.0f, 5.884212f, 5.405833f, 6.282685f);
	Local_163.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_Poker", 3, -2701.122f, 32.11704f, 4278.083f, 0.0f, 20.0f, 0.0f, 2.220927f, 1.739343f, 2.220927f);
	Local_163.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_Blackjack", 2, -2686.531f, 32.24573f, 4285.035f, 0.0f, -2.442021f, 0.0f, 4.640112f, 3.665987f, 4.480659f);
	Local_163.f_544 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_saloon_outside_set");
	(*&Local_163 + 524)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon4", 2, -2694.648f, 32.6645f, 4278.047f, 0.0f, -1.617445f, 0.0f, 17.58019f, 4.795472f, 7.065094f);
	ADD_TO_VOLUME_SET(Local_163.f_544, (*&Local_163 + 524)[0]);
	(*&Local_163 + 524)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon5", 2, -2698.433f, 32.6645f, 4271.201f, 0.0f, -1.771135f, 0.0f, 9.569883f, 4.795472f, 5.503832f);
	ADD_TO_VOLUME_SET(Local_163.f_544, (*&Local_163 + 524)[1]);
	(*&Local_163 + 524)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon6", 2, -2701.678f, 32.6645f, 4265.335f, 0.0f, 0.0f, 0.0f, 7.109518f, 4.795472f, 7.896147f);
	ADD_TO_VOLUME_SET(Local_163.f_544, (*&Local_163 + 524)[2]);
	(*&Local_163 + 524)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_saloon7", 2, -2676.078f, 33.91975f, 4290.298f, 0.0f, -1.592756f, 0.0f, 8.817321f, 5.658111f, 13.34158f);
	ADD_TO_VOLUME_SET(Local_163.f_544, (*&Local_163 + 524)[3]);
	Local_163.f_556 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_dog_saloon_set");
	(*&Local_163 + 548)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "dog1", 3, -2694.044f, 32.9851f, 4276.215f, 0.0f, -10.884f, 0.0f, 13.10861f, 2.158237f, 5.512248f);
	ADD_TO_VOLUME_SET(Local_163.f_556, (*&Local_163 + 548)[0]);
	Local_163.f_572 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_dog_market_set");
	(*&Local_163 + 560)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_dogs_market2", 2, -2725.921f, 33.43172f, 4273.139f, 0.0f, -14.01336f, 0.0f, 27.58388f, 4.278932f, 27.55243f);
	ADD_TO_VOLUME_SET(Local_163.f_572, (*&Local_163 + 560)[0]);
	(*&Local_163 + 560)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_dogs_market1", 2, -2723.038f, 33.92895f, 4290.304f, 0.0f, -14.23901f, 0.0f, 21.6487f, 4.094554f, 4.094554f);
	ADD_TO_VOLUME_SET(Local_163.f_572, (*&Local_163 + 560)[1]);
	Local_163.f_608 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_courthouse_outside_set");
	(*&Local_163 + 576)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse2", 2, -2666.559f, 33.35002f, 4254.434f, 0.0f, -8.804039f, 0.0f, 4.922725f, 4.092079f, 13.87084f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[0]);
	(*&Local_163 + 576)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse3", 2, -2666.97f, 37.40295f, 4254.591f, 0.0f, -9.665345f, 0.0f, 4.347551f, 3.734251f, 14.05577f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[1]);
	(*&Local_163 + 576)[2] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse5", 2, -2659.082f, 42.34615f, 4250.685f, 0.0f, -10.87788f, 0.0f, 6.730814f, 4.057639f, 3.620087f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[2]);
	(*&Local_163 + 576)[3] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse9", 2, -2655.358f, 37.18073f, 4248.958f, 0.0f, -10.46922f, 0.0f, 17.64188f, 3.310561f, 2.610626f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[3]);
	(*&Local_163 + 576)[4] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse7", 2, -2659.883f, 32.90754f, 4262.868f, 0.0f, -10.46922f, 0.0f, 19.61751f, 3.310561f, 2.610626f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[4]);
	(*&Local_163 + 576)[5] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse6", 2, -2655.358f, 32.79028f, 4248.926f, 0.0f, -10.46922f, 0.0f, 17.64188f, 3.310561f, 2.610626f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[5]);
	(*&Local_163 + 576)[6] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_courthouse8", 2, -2657.928f, 37.18073f, 4263.22f, 0.0f, -10.46922f, 0.0f, 17.64188f, 3.310561f, 2.610626f);
	ADD_TO_VOLUME_SET(Local_163.f_608, (*&Local_163 + 576)[6]);
	Local_163.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_badAsses", 3, -2687.962f, 32.67879f, 4289.49f, 0.0f, 20.0f, 0.0f, 2.055984f, 2.055984f, 2.055984f);
	Local_163.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_streetSpawn", 2, -2702.846f, 36.95881f, 4248.667f, 0.0f, 13.35266f, 0.0f, 91.75193f, 17.73903f, 24.08395f);
	Local_163.f_632 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_posta_set");
	(*&Local_163 + 620)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_posta_01", 2, -2721.238f, 34.81779f, 4229.788f, 0.0f, 33.41322f, 0.0f, 18.58422f, 14.92971f, 15.75771f);
	ADD_TO_VOLUME_SET(Local_163.f_632, (*&Local_163 + 620)[0]);
	(*&Local_163 + 620)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_posta_02", 2, -2715.984f, 29.78246f, 4232.95f, 0.0f, 33.41322f, 0.0f, 11.97683f, 14.92971f, 15.75771f);
	ADD_TO_VOLUME_SET(Local_163.f_632, (*&Local_163 + 620)[1]);
	Local_163.f_644 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_telegraph_set");
	(*&Local_163 + 636)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "chuv_telegraph_01", 2, -2685.709f, 34.15121f, 4223.509f, 0.0f, -12.75292f, 0.0f, 12.55758f, 10.08817f, 8.809672f);
	ADD_TO_VOLUME_SET(Local_163.f_644, (*&Local_163 + 636)[0]);
	Local_163.f_660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_163, "chuv_knockout_set");
	(*&Local_163 + 648)[0] = CREATE_VOLUME_IN_LAYOUT(Local_163, "v_KO1", 2, -2695.583f, 30.69284f, 4282.8f, 0.0f, -2.373667f, 0.0f, 14.57814f, 11.86625f, 16.37682f);
	ADD_TO_VOLUME_SET(Local_163.f_660, (*&Local_163 + 648)[0]);
	(*&Local_163 + 648)[1] = CREATE_VOLUME_IN_LAYOUT(Local_163, "v_KO2", 2, -2685.945f, 32.43866f, 4287.007f, 0.0f, -0.6835338f, 0.0f, 9.57671f, 8.217264f, 9.420851f);
	ADD_TO_VOLUME_SET(Local_163.f_660, (*&Local_163 + 648)[1]);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_report_crime", -2666.634f, 31.2f, 4253.878f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_clear_bounty", -2687.541f, 32.3f, 4224.16f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 664) = { -2700.765f, 32.09935f, 4278.523f };
	*(&Local_163 + 664 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_688 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkingMG", -2700.765f, 32.09935f, 4278.523f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 692) = { -2699.204f, 31.33568f, 4279.528f };
	*(&Local_163 + 692 + 12) = { 0.0f, 79.19083f, 0.0f };
	Local_163.f_716 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd1", -2699.204f, 31.33568f, 4279.528f, 0.0f, 79.19083f, 0.0f);
	*(&Local_163 + 720) = { -2700.205f, 31.33568f, 4280.411f };
	*(&Local_163 + 720 + 12) = { 182.1453f, 168.6411f, 176.0581f };
	Local_163.f_744 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd2", -2700.205f, 31.33568f, 4280.411f, 182.1453f, 168.6411f, 176.0581f);
	*(&Local_163 + 748) = { -2700.835f, 31.33568f, 4281.266f };
	*(&Local_163 + 748 + 12) = { 0.0f, 1.370011f, 0.0f };
	Local_163.f_772 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd3", -2700.835f, 31.33568f, 4281.266f, 0.0f, 1.370011f, 0.0f);
	*(&Local_163 + 776) = { -2701.484f, 31.33568f, 4280.312f };
	*(&Local_163 + 776 + 12) = { 0.0f, 339.9957f, 0.0f };
	Local_163.f_800 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd4", -2701.484f, 31.33568f, 4280.312f, 0.0f, 339.9957f, 0.0f);
	*(&Local_163 + 804) = { -2702.414f, 31.33568f, 4279.533f };
	*(&Local_163 + 804 + 12) = { 0.0f, -68.86294f, 0.0f };
	Local_163.f_828 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd5", -2702.414f, 31.33568f, 4279.533f, 0.0f, -68.86294f, 0.0f);
	*(&Local_163 + 832) = { -2702.553f, 31.33568f, 4278.674f };
	*(&Local_163 + 832 + 12) = { 0.0f, -82.61247f, 0.0f };
	Local_163.f_856 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinkcrowd6", -2702.553f, 31.33568f, 4278.674f, 0.0f, -82.61247f, 0.0f);
	*(&Local_163 + 860) = { -2701.738f, 31.33568f, 4278.39f };
	*(&Local_163 + 860 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_884 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_drinksrch", -2701.738f, 31.33568f, 4278.39f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 888) = { -2664.401f, 31.39944f, 4249.833f };
	*(&Local_163 + 888 + 12) = { 0.0f, 261.5f, 0.0f };
	Local_163.f_912 = CREATE_POINT_IN_LAYOUT(Local_163, "prdf_merc_giver", -2664.401f, 31.39944f, 4249.833f, 0.0f, 261.5f, 0.0f);
	*(&Local_163 + 916) = { -2663.958f, 31.443f, 4239.576f };
	*(&Local_163 + 916 + 12) = { 0.0f, 92.509f, 0.0f };
	Local_163.f_940 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_playerDuel1", -2663.958f, 31.443f, 4239.576f, 0.0f, 92.509f, 0.0f);
	*(&Local_163 + 944) = { -2672.878f, 31.469f, 4239.77f };
	*(&Local_163 + 944 + 12) = { 0.0f, 275.9781f, 0.0f };
	Local_163.f_968 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_enDuel1", -2672.878f, 31.469f, 4239.77f, 0.0f, 275.9781f, 0.0f);
	*(&Local_163 + 972) = { -2725.153f, 32.537f, 4254.593f };
	*(&Local_163 + 972 + 12) = { 0.0f, 289.582f, 0.0f };
	Local_163.f_996 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_playerDuel2", -2725.153f, 32.537f, 4254.593f, 0.0f, 289.582f, 0.0f);
	*(&Local_163 + 1000) = { -2717.136f, 32.343f, 4251.679f };
	*(&Local_163 + 1000 + 12) = { 0.0f, 115.9211f, 0.0f };
	Local_163.f_1024 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_enDuel2", -2717.136f, 32.343f, 4251.679f, 0.0f, 115.9211f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_jail_sit", -2647.498f, 31.386f, 4247.398f, 0.0f, -258.6953f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_jail_leave_start", -2662.834f, 31.386f, 4255.184f, 0.0f, 67.279f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_jail_leave_end", -2671.889f, 31.371f, 4253.421f, 0.0f, 80.026f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_jail_leave_end2", -2653.371f, 31.386f, 4259.339f, 0.0f, 95.276f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chuf_cell_leave_cop", -2650.306f, 31.386f, 4252.54f, 0.0f, 303.691f, 0.0f);
	*(&Local_163 + 1028) = { -2737.057f, 32.53271f, 4244.75f };
	*(&Local_163 + 1028 + 12) = { 0.0f, -133.7233f, 0.0f };
	Local_163.f_1052 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_bank", -2737.057f, 32.53271f, 4244.75f, 0.0f, -133.7233f, 0.0f);
	*(&Local_163 + 1056) = { -2683.148f, 32.4736f, 4222.974f };
	*(&Local_163 + 1056 + 12) = { 0.0f, -177.6252f, 0.0f };
	Local_163.f_1080 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_station", -2683.148f, 32.4736f, 4222.974f, 0.0f, -177.6252f, 0.0f);
	*(&Local_163 + 1084) = { -2721.896f, 32.8284f, 4292.93f };
	*(&Local_163 + 1084 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_1108 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_store", -2721.896f, 32.8284f, 4292.93f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 1112) = { -2721.896f, 32.8284f, 4292.93f };
	*(&Local_163 + 1112 + 12) = { 0.0f, 119.815f, 0.0f };
	Local_163.f_1136 = CREATE_POINT_IN_LAYOUT(Local_163, "return_stand_pos_store", -2721.896f, 32.8284f, 4292.93f, 0.0f, 119.815f, 0.0f);
	*(&Local_163 + 1140) = { -2720.649f, 32.7354f, 4290.826f };
	*(&Local_163 + 1140 + 12) = { 0.0f, 181.8715f, 0.0f };
	Local_163.f_1164 = CREATE_POINT_IN_LAYOUT(Local_163, "return_gateway_pos_store", -2720.649f, 32.7354f, 4290.826f, 0.0f, 181.8715f, 0.0f);
	*(&Local_163 + 1168) = { -2716.641f, 32.8284f, 4286.344f };
	*(&Local_163 + 1168 + 12) = { 0.0f, 119.815f, 0.0f };
	Local_163.f_1192 = CREATE_POINT_IN_LAYOUT(Local_163, "horse_pos_store", -2716.641f, 32.8284f, 4286.344f, 0.0f, 119.815f, 0.0f);
	*(&Local_163 + 1196) = { -2723.588f, 35.6484f, 4289.898f };
	*(&Local_163 + 1196 + 12) = { 0.0f, 119.815f, 0.0f };
	Local_163.f_1220 = CREATE_POINT_IN_LAYOUT(Local_163, "camera_cut_pos2_store", -2723.588f, 35.6484f, 4289.898f, 0.0f, 119.815f, 0.0f);
	*(&Local_163 + 1224) = { -2719.114f, 35.7994f, 4287.955f };
	*(&Local_163 + 1224 + 12) = { 0.0f, 119.815f, 0.0f };
	Local_163.f_1248 = CREATE_POINT_IN_LAYOUT(Local_163, "camera_cut_pos1_store", -2719.114f, 35.7994f, 4287.955f, 0.0f, 119.815f, 0.0f);
	*(&Local_163 + 1252) = { -2660.317f, 31.33828f, 4255.919f };
	*(&Local_163 + 1252 + 12) = { 0.0f, 74.53823f, 0.0f };
	Local_163.f_1276 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_jail", -2660.317f, 31.33828f, 4255.919f, 0.0f, 74.53823f, 0.0f);
	*(&Local_163 + 1280) = { -2670.832f, 31.27951f, 4278.465f };
	*(&Local_163 + 1280 + 12) = { 0.0f, 46.27048f, 0.0f };
	Local_163.f_1304 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_church", -2670.832f, 31.27951f, 4278.465f, 0.0f, 46.27048f, 0.0f);
	*(&Local_163 + 1308) = { -2697.442f, 32.07358f, 4285.811f };
	*(&Local_163 + 1308 + 12) = { 0.0f, 11.84616f, 0.0f };
	Local_163.f_1332 = CREATE_POINT_IN_LAYOUT(Local_163, "chuf_InteriorPoint_bar", -2697.442f, 32.07358f, 4285.811f, 0.0f, 11.84616f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos1", -2769.073f, 36.053f, 4279.637f, 0.502f, -67.454f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos2", -2759.287f, 39.616f, 4254.398f, -8.921f, -72.737f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos3", -2718.258f, 37.99f, 4212.228f, -6.184f, -138.744f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos4", -2645.999f, 39.226f, 4238.823f, 1.418f, 106.276f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos5", -2621.604f, 33.366f, 4306.046f, 3.843f, 31.15f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos6", -2664.343f, 33.939f, 4296.427f, -5.671f, 52.437f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos7", -2710.338f, 33.748f, 4299.298f, 10.957f, 21.026f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos8", -2751.88f, 35.592f, 4298.03f, -6.125f, -72.609f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos9", -2678.659f, 36.249f, 4281.84f, -11.417f, 69.215f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_163, "chu_vista_cam_pos10", -2737.684f, 34.468f, 4249.075f, 2.63f, -87.853f, 0.0f);
	return 1;
}

void Function_251(int iParam0, int iParam1) //Position: 0x100A6 / 65702
{
	switch (iParam1)
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

void Function_252(var uParam0, int iParam1) //Position: 0x100EF / 65775
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_253() //Position: 0x100FE / 65790
{
	return;
}

bool Function_254() //Position: 0x10104 / 65796
{
	return 1;
}

void Function_255() //Position: 0x1010B / 65803
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 7, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 5, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 7, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(12, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 5, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 7, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
	return;
}

bool Function_256() //Position: 0x101E3 / 66019
{
	return Function_257();
}

int Function_257() //Position: 0x101EC / 66028
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	bool bVar82;
	bool bVar83;
	bool bVar84;
	bool bVar85;
	bool bVar86;
	bool bVar87;
	bool bVar88;
	bool bVar89;
	bool bVar90;
	bool bVar91;
	bool bVar92;
	bool bVar93;
	bool bVar94;
	bool bVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	
	Function_251(3, 3);
	uVar0 = uVar0;
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_164(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("Chuparosa_layout");
	}
	Local_108.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_108, "volume_ring", 3, -2607.316f, 32.23925f, 4277.354f, 0.0f, 20.0f, 0.0f, 9.082973f, 3.009366f, 9.156511f);
	Local_108.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_nightwatchVol", 2, -2701.833f, 44.82173f, 4255.272f, 0.0f, 0.0f, 0.0f, 170.5879f, 36.96028f, 128.4257f);
	Local_108.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_nightwatchTeleportVol", 2, -2778.923f, 13.79006f, 4202.495f, 0.0f, 31.7106f, 0.0f, 292.4316f, 21.3058f, 93.2684f);
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_1", 2, -2721.538f, 34.6071f, 4231.778f, 0.0f, 31.80985f, 0.0f, 24.04536f, 16.25501f, 25.63064f);
	Local_108.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_2", 2, -2658.97f, 39.01523f, 4255.495f, 0.0f, -9.875008f, 0.0f, 25.36864f, 17.35906f, 22.43044f);
	Local_108.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_3", 2, -2674.56f, 35.95626f, 4220.002f, 0.0f, 72.40585f, 0.0f, 6.892496f, 8.925509f, 5.409666f);
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_4", 2, -2709.947f, 35.65481f, 4276.421f, 0.0f, 89.17809f, 0.0f, 8.026004f, 8.925509f, 5.409666f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_5", 2, -2726.142f, 33.70872f, 4295.597f, 0.0f, 169.4554f, 0.0f, 6.640761f, 10.25038f, 6.142276f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_6", 2, -2709.609f, 31.01206f, 4287.63f, 0.0f, 179.1927f, 0.0f, 6.640761f, 17.12459f, 8.663364f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_7", 2, -2739.382f, 34.95816f, 4246.448f, 0.0f, 47.68495f, 0.0f, 16.36311f, 9.509565f, 14.61296f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_1", 2, -2658.97f, 43.41785f, 4255.495f, 0.0f, -9.875008f, 0.0f, 25.36864f, 17.35906f, 22.43044f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_2", 2, -2720.069f, 40.40149f, 4230.865f, 0.0f, 32.06597f, 0.0f, 27.22968f, 10.30338f, 25.49244f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_HorseBreaking", -2610.8f, 30.05599f, 4278.871f, 0.0f, -20.86391f, 0.0f);
	Local_108.f_92 = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", Local_108, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwplayerpos", -2730.514f, 32.29929f, 4250.16f, 0.0f, 113.6161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_92);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwproctor", -2731.438f, 32.3142f, 4250.672f, 0.0f, 283.8648f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_92);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwforeman", -2746.083f, 32.64523f, 4253.814f, 0.0f, 230.522f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_92);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwdogpos", -2730.627f, 32.25657f, 4251.189f, 0.0f, 46.01606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_92);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsepos", -2753.996f, 32.12549f, 4260.307f, 0.0f, 221.7562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_92);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwintrodog", -2724f, 32.68894f, 4257.987f, 0.0f, -8.486823f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_92);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcameraForemanPos", -2737.36f, 32.61f, 4251.46f, 0.0f, 319.0277f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_108.f_92);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwplayerEndPos", -2744.914f, 32.60661f, 4254.271f, 0.0f, 101.2515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_108.f_92);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwgateway", -2746.629f, 32.70037f, 4254.446f, 0.0f, 221.7562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_108.f_92);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_nwfight", -2717.98f, 32.86103f, 4262.021f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_108.f_92);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight1", -2675.947f, 31.53657f, 4291.171f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_108.f_92);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight2", -2726.148f, 32.82832f, 4273.853f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_108.f_92);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight3", -2760f, 32.12549f, 4282.754f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_108.f_92);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight4", -2736.275f, 31.77021f, 4215.475f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_108.f_92);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight5", -2694.398f, 31.40305f, 4253.984f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_108.f_92);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight6", -2676f, 31.35864f, 4246.057f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_108.f_92);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup", -2702.149f, 31.12157f, 4308f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_108.f_92);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup1", -2690.826f, 31.12157f, 4268.587f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_108.f_92);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup2", -2665.617f, 31.81384f, 4228f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_108.f_92);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup3", -2717.811f, 32.83012f, 4289.812f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_108.f_92);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup4", -2762.626f, 30.83919f, 4253.375f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_108.f_92);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwholdup5", -2644.606f, 30.20625f, 4291.395f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_108.f_92);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcorpse", -2684.0f, 30.9463f, 4202.852f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_108.f_92);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcorpse1", -2741.847f, 31.0315f, 4202.448f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_108.f_92);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcorpse2", -2663.25f, 31.21162f, 4274.603f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_108.f_92);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcorpse3", -2654.609f, 30.66836f, 4286.61f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_108.f_92);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcorpse4", -2633.211f, 30.42161f, 4206.789f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_108.f_92);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwbreak_in", -2731.809f, 32.16233f, 4230.734f, 0.0f, -58.28222f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_108.f_92);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwbreak_in1", -2715.698f, 32.28531f, 4220.48f, 0.0f, 123.6798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_108.f_92);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft", -2625.127f, 30.12083f, 4250.874f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_108.f_92);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft1", -2636f, 30.24974f, 4267.397f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_108.f_92);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft2", -2761.123f, 31.87255f, 4298.105f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_108.f_92);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft3", -2743.13f, 32.20991f, 4280f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_108.f_92);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_nwthief", -2729.7f, 32.81018f, 4286.3f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_108.f_92);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwthief1", -2714.855f, 32.82869f, 4282.065f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_108.f_92);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwthief2", -2713.719f, 32.89307f, 4270.281f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_108.f_92);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwthief3", -2740f, 32.46825f, 4265.935f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_108.f_92);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwthief4", -2729.7f, 32.81018f, 4286.3f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_108.f_92);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwharass", -2674.49f, 31.46854f, 4241.51f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_108.f_92);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwharass1", -2694.028f, 31.60321f, 4244f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_108.f_92);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwharass2", -2694.171f, 31.12157f, 4268.587f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_108.f_92);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwharass3", -2636f, 30.74214f, 4242.4f, 0.0f, -6.8403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_108.f_92);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_playerpos", -2610.365f, 30.11765f, 4274.366f, 0.0f, -149.3487f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "flag_helper", -2611.224f, 30.10968f, 4276f, 0.0f, -37.61066f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker", -2612.001f, 30.11765f, 4272f, 0.0f, -138.7728f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker1", -2609.443f, 30.05892f, 4280f, 0.0f, -29.15555f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker2", -2614.069f, 30.11765f, 4276f, 0.0f, -88.34979f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker3", -2606.296f, 29.94294f, 4276f, 0.0f, 121.7345f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker4", -2608.506f, 30.11765f, 4272.506f, 0.0f, 175.2038f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker5", -2612.001f, 30.11765f, 4272.996f, 0.0f, -142.0662f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "f_onlooker6", -2606.338f, 29.981f, 4277.663f, 0.0f, 79.4939f, 0.0f);
	*(&Local_108 + 96) = { -2689.003f, 31.10484f, 4273.432f };
	*(&Local_108 + 96 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_120 = CREATE_POINT_IN_LAYOUT(Local_108, "f_playerHorse", -2689.003f, 31.10484f, 4273.432f, 0.0f, 0.0f, 0.0f);
	Local_108.f_124 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_defSet", Local_108, 8, 0);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def02", -2725.179f, 36.36495f, 4243.546f, 0.0f, -175.0f, 0.0f);
	DECOR_SET_INT(bVar43, "Accuracy", 100);
	DECOR_SET_INT(bVar43, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_108.f_124);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def03", -2670.428f, 35.67227f, 4253.909f, 0.0f, 80.34143f, 0.0f);
	DECOR_SET_INT(bVar44, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_108.f_124);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def04", -2661.854f, 40.53462f, 4249.52f, 0.0f, 82.79196f, 0.0f);
	DECOR_SET_INT(bVar45, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_108.f_124);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def05", -2675.771f, 35.80369f, 4221.6f, 0.0f, 169.5009f, 0.0f);
	DECOR_SET_INT(bVar46, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_108.f_124);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def06", -2657.113f, 40.53429f, 4249.881f, 0.0f, 18.0f, 0.0f);
	DECOR_SET_INT(bVar47, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_108.f_124);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def01_core", -2719.369f, 36.36495f, 4240.668f, 0.0f, -147.6651f, 0.0f);
	DECOR_SET_INT(bVar48, "Accuracy", 100);
	DECOR_SET_BOOL(bVar48, "Core", true);
	DECOR_SET_INT(bVar48, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_108.f_124);
	Local_108.f_128 = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", Local_108, 8, 0);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_player", -2720.769f, 36.36495f, 4240.668f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_108.f_128);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_surv", -2719.369f, 36.36495f, 4240.668f, 0.0f, -270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_108.f_128);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_player", -2725.179f, 36.36495f, 4242.146f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_108.f_128);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_surv", -2725.179f, 36.36495f, 4243.546f, 0.0f, -360.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_108.f_128);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_player", -2669.028f, 35.67227f, 4253.909f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_108.f_128);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_surv", -2670.428f, 35.67227f, 4253.909f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_108.f_128);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_player", -2660.454f, 40.53462f, 4249.521f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_108.f_128);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_surv", -2661.854f, 40.53462f, 4249.52f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_108.f_128);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_05_player", -2674.371f, 35.80369f, 4221.75f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_108.f_128);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_05_surv", -2675.771f, 35.80369f, 4221.75f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_108.f_128);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_06_player", -2658.513f, 40.53429f, 4249.881f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_108.f_128);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_06_surv", -2657.113f, 40.53429f, 4249.881f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_108.f_128);
	Local_108.f_132 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group01_defSet", Local_108, 8, 0);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def08", -2727.922f, 36.36495f, 4240.022f, 0.0f, -211.5659f, 0.0f);
	DECOR_SET_INT(bVar61, "Accuracy", 100);
	DECOR_SET_INT(bVar61, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_108.f_132);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def09", -2670.428f, 35.67227f, 4253.909f, 0.0f, 80.34143f, 0.0f);
	DECOR_SET_INT(bVar62, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_108.f_132);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def010", -2667.867f, 35.67227f, 4248.306f, 0.0f, 31.07667f, 0.0f);
	DECOR_SET_INT(bVar63, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_108.f_132);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def011", -2675.771f, 35.80369f, 4221.6f, 0.0f, 169.5009f, 0.0f);
	DECOR_SET_INT(bVar64, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_108.f_132);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def012", -2657.113f, 40.53429f, 4249.881f, 0.0f, 18.0f, 0.0f);
	DECOR_SET_INT(bVar65, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_108.f_132);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def07_core", -2714.941f, 36.41806f, 4238.824f, 0.0f, -147.6651f, 0.0f);
	DECOR_SET_INT(bVar66, "Accuracy", 100);
	DECOR_SET_BOOL(bVar66, "Core", true);
	DECOR_SET_INT(bVar66, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_108.f_132);
	Local_108.f_136 = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", Local_108, 8, 0);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_player", -2716.148f, 36.41869f, 4239.579f, 0.0f, -418.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_108.f_136);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_surv", -2714.941f, 36.41806f, 4238.824f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_108.f_136);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_player", -2728.152f, 36.36495f, 4238.705f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_108.f_136);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_surv", -2728.153f, 36.36495f, 4240.105f, 0.0f, -360.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_108.f_136);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_10_player", -2667.867f, 35.67227f, 4249.706f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_108.f_136);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_10_surv", -2667.867f, 35.67227f, 4248.306f, 0.0f, -180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_108.f_136);
	Local_108.f_140 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group02_defSet", Local_108, 8, 0);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def014", -2734.887f, 36.36495f, 4229.375f, 0.0f, -268.6991f, 0.0f);
	DECOR_SET_INT(bVar73, "Accuracy", 100);
	DECOR_SET_INT(bVar73, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_108.f_140);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def015", -2668.378f, 35.67227f, 4262.125f, 0.0f, 107.4004f, 0.0f);
	DECOR_SET_INT(bVar74, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_108.f_140);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def016", -2709.863f, 36.41412f, 4235.651f, 0.0f, -104.5527f, 0.0f);
	DECOR_SET_INT(bVar75, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_108.f_140);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def017", -2675.771f, 35.80369f, 4221.6f, 0.0f, 169.5009f, 0.0f);
	DECOR_SET_INT(bVar76, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_108.f_140);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def018", -2725.037f, 35.87357f, 4296.208f, 0.0f, -45.48137f, 0.0f);
	DECOR_SET_INT(bVar77, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_108.f_140);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def013_core", -2709.736f, 35.92237f, 4274.932f, 0.0f, -310.0933f, 0.0f);
	DECOR_SET_INT(bVar78, "Accuracy", 100);
	DECOR_SET_BOOL(bVar78, "Core", true);
	DECOR_SET_INT(bVar78, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_108.f_140);
	Local_108.f_144 = CREATE_OBJECTSET_IN_LAYOUT("ammo_02Set", Local_108, 8, 0);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_13_player", -2709.736f, 35.92237f, 4276.331f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_108.f_144);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_13_surv", -2709.736f, 35.92237f, 4274.932f, 0.0f, -180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_108.f_144);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_14_player", -2733.487f, 36.36495f, 4229.375f, 0.0f, -270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_108.f_144);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_14_surv", -2734.887f, 36.36495f, 4229.375f, 0.0f, -450.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_108.f_144);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_15_player", -2668.378f, 35.67227f, 4260.725f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_108.f_144);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_15_surv", -2668.378f, 35.67227f, 4262.125f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_108.f_144);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_16_player", -2710.995f, 36.41412f, 4236.358f, 0.0f, -418.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_108.f_144);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_16_surv", -2709.863f, 36.41412f, 4235.651f, 0.0f, -238.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_108.f_144);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_18_player", -2726.235f, 35.87357f, 4295.997f, 0.0f, -100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_108.f_144);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_18_surv", -2725.037f, 35.87357f, 4296.208f, 0.0f, 80.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_108.f_144);
	Local_108.f_148 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group03_defSet", Local_108, 8, 0);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def020", -2725.179f, 36.36495f, 4243.546f, 0.0f, -175.0f, 0.0f);
	DECOR_SET_INT(bVar89, "Accuracy", 100);
	DECOR_SET_INT(bVar89, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_108.f_148);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def021", -2657.113f, 40.53429f, 4249.881f, 0.0f, 18.0f, 0.0f);
	DECOR_SET_INT(bVar90, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_108.f_148);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def022", -2709.863f, 36.41412f, 4235.651f, 0.0f, -104.5527f, 0.0f);
	DECOR_SET_INT(bVar91, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_108.f_148);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def023", -2675.771f, 35.80369f, 4221.6f, 0.0f, 169.5009f, 0.0f);
	DECOR_SET_INT(bVar92, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_108.f_148);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def024", -2725.037f, 35.87357f, 4296.208f, 0.0f, -45.48137f, 0.0f);
	DECOR_SET_INT(bVar93, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_108.f_148);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def019_core", -2710.551f, 35.83546f, 4288.772f, 0.0f, -310.0933f, 0.0f);
	DECOR_SET_INT(bVar94, "Accuracy", 100);
	DECOR_SET_BOOL(bVar94, "Core", true);
	DECOR_SET_INT(bVar94, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_108.f_148);
	Local_108.f_152 = CREATE_OBJECTSET_IN_LAYOUT("ammo_03Set", Local_108, 8, 0);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_19_player", -2710.551f, 35.83546f, 4287.373f, 0.0f, -540.0f, 0.0f);
	DECOR_SET_INT(bVar95, "Accuracy", 100);
	DECOR_SET_BOOL(bVar95, "Core", true);
	DECOR_SET_INT(bVar95, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_108.f_152);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_19_surv", -2710.551f, 35.83546f, 4288.772f, 0.0f, -360.0f, 0.0f);
	DECOR_SET_INT(bVar96, "Accuracy", 100);
	DECOR_SET_BOOL(bVar96, "Core", true);
	DECOR_SET_INT(bVar96, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_108.f_152);
	Local_108.f_156 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_safeSet", Local_108, 8, 0);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe01", -2697.004f, 32.08165f, 4285.42f, 0.0f, -243.8449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_108.f_156);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe02", -2698.072f, 32.0817f, 4286.957f, 4.356684f, 368.6057f, 1.349082f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_108.f_156);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe03", -2667.192f, 35.67227f, 4258.841f, 0.0f, 29.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_108.f_156);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe04", -2680.608f, 31.50516f, 4253.344f, 0.0f, 80.08044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_108.f_156);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe05", -2675.744f, 35.80369f, 4221.52f, 0.0f, 161.6016f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_108.f_156);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe06", -2682.061f, 31.53529f, 4252.405f, 0.0f, -154.6201f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_108.f_156);
	Local_108.f_160 = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", Local_108, 8, 0);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_2", -2734.66f, 32.51514f, 4241.853f, 0.0f, 140.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_108.f_160);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_3", -2698.319f, 31.42134f, 4294.107f, 0.0f, -1.456153f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_108.f_160);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_4", -2654.448f, 31.38693f, 4263.293f, 0.0f, -190.6264f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_108.f_160);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_5", -2700.651f, 32.35109f, 4230.544f, 0.0f, -48.79099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_108.f_160);
	*(&Local_108 + 164) = { -2687.509f, 31.4827f, 4295.249f };
	*(&Local_108 + 164 + 12) = { 0.0f, -90.21208f, 0.0f };
	Local_108.f_188 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", -2687.509f, 31.4827f, 4295.249f, 0.0f, -90.21208f, 0.0f);
	Local_108.f_192 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand", "rand_idle_stand", -2696.983f, 32.0835f, 4285.408f, 0.0f, -244.0348f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_192), 0);
	Local_108.f_196 = CREATE_GRINGO_IN_LAYOUT(Local_108, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2698.09f, 32.08165f, 4286.958f, 0.0f, 8.279368f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_196), 0);
	Local_108.f_200 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand1", "rand_idle_stand", -2667.167f, 35.67227f, 4258.888f, 0.0f, 29.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_200), 0);
	Local_108.f_204 = CREATE_GRINGO_IN_LAYOUT(Local_108, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -2680.608f, 31.53927f, 4253.344f, 0.0f, 76.68867f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_204), 0);
	Local_108.f_208 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand2", "rand_idle_stand", -2675.75f, 35.76538f, 4221.535f, 0.0f, 161.9449f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_208), 0);
	Local_108.f_212 = CREATE_GRINGO_IN_LAYOUT(Local_108, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -2682.061f, 31.53575f, 4252.404f, 0.0f, 193.4732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_212), 0);
	Local_108.f_216 = CREATE_GRINGO_IN_LAYOUT(Local_108, "ZombiePack_player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", -2693.432f, 31.48258f, 4296.041f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_258(bool bParam0, bool bParam1) //Position: 0x1261D / 75293
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(bParam0);
	if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30717[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_259(int iParam0, bool bParam1, bool bParam2) //Position: 0x126B3 / 75443
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_261(bParam1))
		{
			Function_197(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_200(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_92(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_260(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_169(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_169(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_164(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_34(bParam1, Function_27(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_260(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x127AE / 75694
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_24(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_167(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_167(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_261(int iParam0) //Position: 0x1287E / 75902
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_265(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_263(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_262(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_262(int iParam0) //Position: 0x128F9 / 76025
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_263(int iParam0) //Position: 0x1290E / 76046
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_264(iParam0)11].f_12 < 0;
}

int Function_264(int iParam0) //Position: 0x12974 / 76148
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_265(int iParam0, int iParam1) //Position: 0x12A36 / 76342
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_266() //Position: 0x12A52 / 76370
{
	return;
}

void Function_267(bool bParam0, var uParam1) //Position: 0x12A58 / 76376
{
	if (!Function_26(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

