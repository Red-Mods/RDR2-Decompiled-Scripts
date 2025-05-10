//Decompiled with MagicRDR v1.0
//Function Count : 274
//Statics Count : 676
//Natives Count : 460
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	int iLocal_8 = 0;
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
	struct<237> Local_108 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_408 = 18;
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
	bool bLocal_463 = true;
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
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	bool bLocal_664[2] = { false, false };
	bool bLocal_667[4] = { false, false, false, false };
	int iLocal_672 = 0;
	bool bLocal_673 = false;
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
	Function_273(&Var0, 3);
	Function_272();
	if (StackVal && (((((!Global_3421 && bScriptParam_0 == Global_30679[1]) && bScriptParam_0 == Global_30707[1]) && bScriptParam_0 == Global_30707[2]) && bScriptParam_0 == Global_30717[1]) && bScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Function_265(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_264(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_262())
				{
					Function_261();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_260())
				{
					Function_259();
					Function_258(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_255())
				{
					Function_253(bScriptParam_0);
					if (bLocal_107)
					{
						Function_251(&iLocal_11, Function_252(), bScriptParam_0);
						Function_250(&iLocal_11, Function_252());
					}
					Function_258(&(Global_29008[bScriptParam_0]), 16);
					iLocal_5 = 4;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000005:
				Function_249(&iLocal_8);
				Function_247();
				Function_244(bScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_243() && Function_242(Global_29155[bScriptParam_010])) && Function_241(&iLocal_11))
				{
					Function_240();
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				else
				{
					bLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_228(&iLocal_11, bScriptParam_0, Function_252());
				}
				Function_227(bScriptParam_0);
				Function_226();
				Function_225();
				Function_258(&(Global_29008[bScriptParam_0]), 8);
				if (Function_224(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_223(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_221(bScriptParam_0);
				Function_220();
				Function_219(bScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_214(bScriptParam_0);
				Function_213(64);
				Function_258(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_212(Function_252(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_211(&Var0, 5.0f);
				Function_258(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_224(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_107)
				{
					Function_88(&iLocal_11, bScriptParam_0);
				}
				Function_52(&iLocal_8, &iLocal_408, Function_87(), bScriptParam_0);
				Function_47(&bLocal_463, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(bLocal_6);
	}
	if (bLocal_107)
	{
		Function_30(&iLocal_11, bScriptParam_0);
	}
	Function_25(bScriptParam_0);
	Function_19();
	Function_18();
	Function_17();
	Function_9(&iLocal_8, &iLocal_408);
	Function_8(&bLocal_463);
	Function_6();
	Function_2(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_213(64);
	Function_223(&(Global_29008[bScriptParam_0]), 32);
	Function_223(&(Global_29008[bScriptParam_0]), 64);
	Function_223(&(Global_29008[bScriptParam_0]), 8);
	Function_223(&(Global_29008[bScriptParam_0]), 512);
	Function_223(&(Global_29008[bScriptParam_0]), 16);
	Function_223(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_211(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C8 / 968
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bLocal_673))
	{
		SET_CURVE_ACTIVE(bLocal_673, 1);
	}
	SET_DUST_LEVEL(1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (IS_OBJECT_VALID(bLocal_664[iVar0]))
		{
			DEREFERENCE_OBJECT(bLocal_664[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(bLocal_667[iVar0]))
		{
			DEREFERENCE_OBJECT(bLocal_667[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x435 / 1077
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

void Function_3(int iParam0) //Position: 0x46B / 1131
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x48D / 1165
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x4A3 / 1187
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x4B9 / 1209
{
	Function_7();
	return;
}

void Function_7() //Position: 0x4C2 / 1218
{
	RELEASE_LAYOUT_REF(Local_170);
	return;
}

void Function_8(int iParam0) //Position: 0x4CD / 1229
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

void Function_9(var uParam0, int iParam1) //Position: 0x527 / 1319
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

void Function_10(int iParam0, int iParam1, int iParam2) //Position: 0x57F / 1407
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

void Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0x665 / 1637
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

void Function_12() //Position: 0x7DE / 2014
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_13(bool bParam0) //Position: 0x7EA / 2026
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

void Function_14(int iParam0) //Position: 0x830 / 2096
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

void Function_15(int iParam0, int iParam1) //Position: 0x876 / 2166
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x890 / 2192
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x8AD / 2221
{
	return;
}

void Function_18() //Position: 0x8B3 / 2227
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 7);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	return;
}

void Function_19() //Position: 0x931 / 2353
{
	Function_20();
	return;
}

void Function_20() //Position: 0x93A / 2362
{
	Function_21(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_21(int iParam0) //Position: 0x94C / 2380
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

void Function_22(var uParam0, int iParam1) //Position: 0x972 / 2418
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

void Function_23(var uParam0, int iParam1) //Position: 0xAA0 / 2720
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_24(var uParam0, int iParam1) //Position: 0xABA / 2746
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0xAD7 / 2775
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_224(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_223(&(Global_29008[bParam0]), 0x20000000);
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

bool Function_26(int iParam0) //Position: 0xB7E / 2942
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0xB9A / 2970
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

bool Function_28(int iParam0) //Position: 0xC0D / 3085
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, bool bParam1) //Position: 0xC2A / 3114
{
	return (uParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xC37 / 3127
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

void Function_31(int iParam0) //Position: 0xF7D / 3965
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

var Function_32(int iParam0) //Position: 0xFE1 / 4065
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

void Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x130E / 4878
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

void Function_34(int iParam0, bool bParam1) //Position: 0x15C8 / 5576
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

bool Function_35(int iParam0) //Position: 0x1D1E / 7454
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(bool bParam0) //Position: 0x1D33 / 7475
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D52 / 7506
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

bool Function_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1DCE / 7630
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DE8 / 7656
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

void Function_40(char* cParam0, int iParam1) //Position: 0x1E54 / 7764
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x1E8B / 7819
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

int Function_42(char* cParam0) //Position: 0x1F03 / 7939
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

int Function_43(int iParam0) //Position: 0x1FA4 / 8100
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

void Function_44(int iParam0, int iParam1) //Position: 0x1FE1 / 8161
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x1FF4 / 8180
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2007 / 8199
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x201E / 8222
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

void Function_48(var uParam0, int iParam1) //Position: 0x23EA / 9194
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x23FB / 9211
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x2415 / 9237
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_51() //Position: 0x2427 / 9255
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2430 / 9264
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

bool Function_53(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x24B1 / 9393
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	Function_223(&(Global_29008[iParam2]), 4194304);
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
				if (!Function_224(&(Global_29008[iParam2]), 262144))
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

void Function_54(int iParam0) //Position: 0x28CA / 10442
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_224(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_258(&(Global_29008[iParam0]), 4096);
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

float Function_55(int iParam0) //Position: 0x29C9 / 10697
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_56(int iParam0) //Position: 0x2A06 / 10758
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x2A3F / 10815
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

var Function_58(int iParam0) //Position: 0x2AA6 / 10918
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

int Function_59(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2AFE / 11006
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2D1E / 11550
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
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

var Function_61() //Position: 0x334B / 13131
{
	int iVar0;
	
	return iVar0;
}

var Function_62(int iParam0) //Position: 0x3353 / 13139
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3364 / 13156
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

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x3459 / 13401
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3472 / 13426
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x34D7 / 13527
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x34E9 / 13545
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

int Function_68(int iParam0) //Position: 0x3619 / 13849
{
	return Global_35278[iParam020].f_48;
}

void Function_69(int iParam0) //Position: 0x3628 / 13864
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x37C2 / 14274
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

void Function_71(var uParam0, int iParam1) //Position: 0x3A06 / 14854
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(struct<5> Param0) //Position: 0x3A13 / 14867
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3A39 / 14905
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
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
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_74();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_74() //Position: 0x3CC9 / 15561
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_75(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x3D2C / 15660
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

bool Function_76(bool bParam0) //Position: 0x3D5B / 15707
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

int Function_77(int iParam0) //Position: 0x3DD1 / 15825
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3DE2 / 15842
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

bool Function_79(int iParam0) //Position: 0x3DFB / 15867
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3E11 / 15889
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x3E26 / 15910
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3E44 / 15940
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

void Function_83(int iParam0, int iParam1) //Position: 0x3EE8 / 16104
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x3EF9 / 16121
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

void Function_85(int iParam0, int iParam1) //Position: 0x3F6B / 16235
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_14(iParam0);
	Function_13(iVar0);
	PRINTNL();
	Function_11(iParam0, iVar0, iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x3F90 / 16272
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

var Function_87() //Position: 0x3FAD / 16301
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(int iParam0, bool bParam1) //Position: 0x3FC2 / 16322
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
		if (Function_241(iParam0))
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
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_264(bParam1, 1);
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
					Function_264(bParam1, 0);
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
			Function_265(iParam0, bParam1, 1);
			Function_251(iParam0, Global_30616, bParam1);
			Function_250(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_241(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_228(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_228(iParam0, bParam1, Global_30616);
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
				Function_264(bParam1, 1);
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

void Function_89(bool bParam0, struct<365> Param1) //Position: 0x52DD / 21213
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

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x532C / 21292
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

var Function_91(int iParam0) //Position: 0x5527 / 21799
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

int Function_92(int iParam0, int iParam1) //Position: 0x5711 / 22289
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

var Function_93(int iParam0) //Position: 0x5AED / 23277
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

void Function_94(int iParam0) //Position: 0x5C73 / 23667
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

void Function_95(int iParam0) //Position: 0x5CC2 / 23746
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

void Function_96(int iParam0) //Position: 0x5CFA / 23802
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

bool Function_97(int iParam0) //Position: 0x5D2E / 23854
{
	return Function_98(iParam0 + 352);
}

int Function_98(int iParam0) //Position: 0x5D3C / 23868
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
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
			bVar4 = GET_ACTOR_ENUM(bVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
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
		Function_258(&(Global_29008[Global_29006]), 0x20000000);
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

void Function_99(int iParam0) //Position: 0x5F62 / 24418
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

float Function_100(bool bParam0, vector3 vParam1) //Position: 0x5FB1 / 24497
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

vector3 Function_101(bool bParam0) //Position: 0x602B / 24619
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

bool Function_102(bool bParam0) //Position: 0x6095 / 24725
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x6204 / 25092
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

var Function_104(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x64D2 / 25810
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

void Function_105(var uParam0, int iParam1) //Position: 0x6551 / 25937
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

void Function_106(var uParam0, bool bParam1) //Position: 0x65AE / 26030
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

void Function_107(var uParam0, bool bParam1) //Position: 0x662E / 26158
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

void Function_108(var uParam0, bool bParam1) //Position: 0x66AE / 26286
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

bool Function_109(bool bParam0, vector3 vParam1) //Position: 0x6732 / 26418
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

void Function_110(int iParam0, float fParam1) //Position: 0x6770 / 26480
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x67B2 / 26546
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
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, false, false, 0);
	}
	return;
}

void Function_112() //Position: 0x68E9 / 26857
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x68FB / 26875
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x6910 / 26896
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
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], false, 0, 0, 2, 0, 0);
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

void Function_115(int iParam0) //Position: 0x6BF2 / 27634
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

var Function_116(bool bParam0) //Position: 0x6E63 / 28259
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

var Function_117(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6F26 / 28454
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

void Function_118() //Position: 0x732D / 29485
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

void Function_119() //Position: 0x737F / 29567
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

void Function_120() //Position: 0x7485 / 29829
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

void Function_121() //Position: 0x74B8 / 29880
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

void Function_122() //Position: 0x7646 / 30278
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

void Function_123() //Position: 0x77FA / 30714
{
	Function_124(&Global_28260, 1, 0);
	return;
}

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x7808 / 30728
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

struct<8> Function_125(int iParam0) //Position: 0x79F9 / 31225
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

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x7A9F / 31391
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

int Function_127(bool bParam0) //Position: 0x7D3A / 32058
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_128() //Position: 0x7D7B / 32123
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

struct<8> Function_129() //Position: 0x7E04 / 32260
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

struct<8> Function_130() //Position: 0x7E9B / 32411
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

void Function_131() //Position: 0x7F1A / 32538
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

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x7F53 / 32595
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

int Function_133(int iParam0) //Position: 0x815E / 33118
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x8178 / 33144
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(vector3 vParam0, bool bParam3) //Position: 0x818E / 33166
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

var Function_136(vector3 vParam0, float fParam3, int iParam4) //Position: 0x81F9 / 33273
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
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_224(&(Global_29008[iVar6]), 4096), Global_34573))
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

int Function_137(int iParam0) //Position: 0x82F3 / 33523
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

bool Function_138(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x834B / 33611
{
	bool bVar0;
	bool bVar1;
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
	bVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		UNK_0xDF93BD7C(bVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(bVar0, bVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, bVar1);
			bVar13 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(bVar0);
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

vector3 Function_139(int iParam0) //Position: 0x84F5 / 34037
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_140(vector3 vParam0) //Position: 0x8514 / 34068
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8534 / 34100
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(var uParam0, var uParam1, int iParam2) //Position: 0x8547 / 34119
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_224(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_224(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_224(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_224(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_224(&(Global_29008[Global_30693[4]]), 4))
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

var Function_143(bool bParam0) //Position: 0x877B / 34683
{
	return GET_HEADING(bParam0);
}

vector3 Function_144(bool bParam0) //Position: 0x8786 / 34694
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_145(vector3 vParam0) //Position: 0x8797 / 34711
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(var uParam0, bool bParam1, int iParam2) //Position: 0x87AF / 34735
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

float Function_147(bool bParam0, bool bParam1) //Position: 0x8B3F / 35647
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

bool Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C30 / 35888
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

bool Function_149() //Position: 0x8CE6 / 36070
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_150(bool bParam0) //Position: 0x8CFD / 36093
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_151(bool bParam0) //Position: 0x8D08 / 36104
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8D16 / 36118
{
	struct<4> Var0;
	int iVar4;
	
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
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8D91 / 36241
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

bool Function_154() //Position: 0x8DD0 / 36304
{
	if (Function_29(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8DEB / 36331
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
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x8E70 / 36464
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

void Function_157(bool bParam0) //Position: 0x8F28 / 36648
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
			Function_160(uVar15, 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_158(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_197(&uVar17, 0x1000000);
			Function_197(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x90DB / 37083
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

bool Function_159(int iParam0) //Position: 0x93EF / 37871
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9413 / 37907
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

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x96D3 / 38611
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

var Function_162(bool bParam0, int iParam1, float fParam2) //Position: 0x9912 / 39186
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

void Function_163(int iParam0) //Position: 0x995F / 39263
{
	Function_169(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_169(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_169(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_164(iParam0 + 192);
	return;
}

bool Function_164(int iParam0) //Position: 0x99CB / 39371
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

void Function_165() //Position: 0x9D46 / 40262
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

bool Function_166() //Position: 0x9D86 / 40326
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

void Function_167(var uParam0, int iParam1) //Position: 0x9DB1 / 40369
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x9DC2 / 40386
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

var Function_169(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9E04 / 40452
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

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0x9E3C / 40508
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

bool Function_171() //Position: 0x9F00 / 40704
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

void Function_172(bool bParam0, var uParam1, struct<365> Param2) //Position: 0x9FE5 / 40933
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

var Function_173(struct<365> Param0) //Position: 0xA153 / 41299
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_174(int iParam0) //Position: 0xA167 / 41319
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

void Function_175(int iParam0, int iParam1) //Position: 0xA21E / 41502
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
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
				bVar5 = GET_ACTOR_ENUM(bVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
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
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
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
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
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

bool Function_176(var uParam0, float fParam1, bool bParam2) //Position: 0xA65D / 42589
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

void Function_177(int iParam0, int iParam1, float fParam2) //Position: 0xA6DA / 42714
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

var Function_178(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xA9B6 / 43446
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_179(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_179(bool bParam0, var uParam1, bool bParam2) //Position: 0xA9E9 / 43497
{
	bool bVar0;
	int iVar1;
	bool bVar2;
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
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (bVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= bVar2)
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

bool Function_180(bool bParam0) //Position: 0xAAB3 / 43699
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
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

bool Function_181(bool bParam0, int iParam1) //Position: 0xAAFE / 43774
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xAB40 / 43840
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

float Function_183(int iParam0, int iParam1) //Position: 0xAB8E / 43918
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xABA1 / 43937
{
	if (Function_29(iParam0, 1) && !Function_29(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xABCE / 43982
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

void Function_186(bool bParam0, bool bParam1, int iParam2) //Position: 0xACB2 / 44210
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

void Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD01 / 44289
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
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xAD4B / 44363
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

void Function_189(int iParam0) //Position: 0xAD8A / 44426
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

void Function_190(int iParam0) //Position: 0xAE4B / 44619
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

var Function_191(bool bParam0) //Position: 0xAF0E / 44814
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

var Function_192(int iParam0) //Position: 0xAF68 / 44904
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

int Function_193(bool bParam0) //Position: 0xB0AB / 45227
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

void Function_194() //Position: 0xB231 / 45617
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

var Function_195(bool bParam0, int iParam1) //Position: 0xB28F / 45711
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

void Function_196(bool bParam0, bool bParam1) //Position: 0xB3B0 / 46000
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xB3D3 / 46035
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xB3E2 / 46050
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

bool Function_199(int iParam0) //Position: 0xB41F / 46111
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB436 / 46134
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

int Function_201(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB494 / 46228
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

int Function_202(int iParam0) //Position: 0xB5E9 / 46569
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

bool Function_203(int iParam0) //Position: 0xB627 / 46631
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB63C / 46652
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xB65C / 46684
{
	bool bVar0;
	var uVar1[2];
	int iVar4;
	bool bVar5;
	
	iParam0 = iParam0;
	uVar1[0] = "c_gen_flag01x";
	uVar1[1] = "c_gen_flag02x";
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (!IS_OBJECT_VALID(bLocal_664[iVar4]))
		{
			Function_210((*&Local_108 + 176)[iVar4]);
			bVar0 = LOCATE_PHYSINST_OF_TYPE(Function_210((*&Local_108 + 176)[iVar4]), 1.0f, uVar1[iVar4], 1);
			if (IS_PHYSINST_VALID(bVar0))
			{
				bLocal_664[iVar4] = GET_OBJECT_FROM_PHYSINST(bVar0);
				if (IS_OBJECT_VALID(bLocal_664[iVar4]))
				{
					REFERENCE_OBJECT(bLocal_664[iVar4]);
					SET_DRAW_OBJECT(bLocal_664[iVar4], 0);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		if (!IS_OBJECT_VALID(bLocal_667[iVar4]))
		{
			Function_210((*&Local_108 + 192)[iVar4]);
			bVar0 = LOCATE_PHYSINST_OF_TYPE(Function_210((*&Local_108 + 192)[iVar4]), 1.0f, "p_gen_pitchfork01x", 1);
			if (IS_PHYSINST_VALID(bVar0))
			{
				bLocal_667[iVar4] = GET_OBJECT_FROM_PHYSINST(bVar0);
				if (IS_OBJECT_VALID(bLocal_667[iVar4]))
				{
					REFERENCE_OBJECT(bLocal_667[iVar4]);
					SET_DRAW_OBJECT(bLocal_667[iVar4], 0);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_667[iVar4], 0);
				}
			}
		}
		iVar4++;
	}
	if (!Function_35(12))
	{
		if (!iLocal_672)
		{
			if (!IS_OBJECT_VALID(bLocal_673))
			{
				bLocal_673 = Function_209();
			}
			else
			{
				SET_CURVE_ACTIVE(bLocal_673, 0);
				iLocal_672 = 1;
			}
		}
	}
	else if (iLocal_672)
	{
		if (!IS_OBJECT_VALID(bLocal_673))
		{
			bLocal_673 = Function_209();
		}
		else
		{
			IS_OBJECT_VALID(bLocal_673);
			SET_CURVE_ACTIVE(bLocal_673, 1);
			iLocal_672 = 0;
		}
	}
	if (!Function_35(13))
	{
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01", 1);
		Function_206(bVar5);
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01", 2);
		Function_206(bVar5);
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01", 3);
		Function_206(bVar5);
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01", 4);
		Function_206(bVar5);
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01props", 5);
		Function_206(bVar5);
		bVar5 = Function_208(Global_30668[0], "hennigansRanch", "barn01props", 6);
		Function_206(bVar5);
	}
	return;
}

void Function_206(bool bParam0) //Position: 0xB8FC / 47356
{
	if (IS_DOOR_VALID(bParam0))
	{
		if (IS_DOOR_OPENED(bParam0))
		{
			CLOSE_DOOR_FAST(bParam0);
		}
		if (!IS_DOOR_LOCKED(bParam0))
		{
			Function_207(bParam0, 0);
		}
	}
	return;
}

void Function_207(bool bParam0, bool bParam1) //Position: 0xB926 / 47398
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

bool Function_208(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xB97A / 47482
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_5(iParam0))
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

bool Function_209() //Position: 0xBA16 / 47638
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2 = { -837.668f, 99.146f, 2454.745f };
	bVar0 = START_CURVE_QUERY(Global_30616, vVar2, 2, 0.1f, 0.5f, 0.1f, 0);
	if (IS_CURVE_QUERY_VALID(bVar0) && GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		bVar1 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, false);
		if (!IS_OBJECT_VALID(bVar1))
		{
			bVar1 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar0, false);
		}
	}
	UNK_0xDF93BD7C(bVar0);
	return bVar1;
}

vector3 Function_210(bool bParam0) //Position: 0xBA7C / 47740
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

void Function_211(bool bParam0, float fParam1) //Position: 0xBAA3 / 47779
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

void Function_212(bool bParam0, bool bParam1) //Position: 0xBAE1 / 47841
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

void Function_213(int iParam0) //Position: 0xBBDB / 48091
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_214(bool bParam0) //Position: 0xBBEE / 48110
{
	Function_215(StackVal, 1, 0.25f, 4, Local_108, 1);
	return;
}

void Function_215(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xBC0A / 48138
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
		Function_218();
	}
	if (bParam5)
	{
		Function_216(1048576);
	}
}

void Function_216(int iParam0) //Position: 0xBD1D / 48413
{
	Function_217(&Global_28842, iParam0);
	return;
}

void Function_217(var uParam0, var uParam1) //Position: 0xBD2B / 48427
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_218() //Position: 0xBD46 / 48454
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_216(16384);
	}
	return;
}

void Function_219(var uParam0) //Position: 0xBD62 / 48482
{
	uParam0 = uParam0;
	return;
}

void Function_220() //Position: 0xBD6C / 48492
{
	return;
}

void Function_221(int iParam0) //Position: 0xBD72 / 48498
{
	if (((!Function_35(12) || (Function_35(13) && !Function_35(14))) && Function_27(iParam0)) && !Function_222())
	{
		Function_152("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
	}
	return;
}

bool Function_222() //Position: 0xBDB5 / 48565
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_223(var uParam0, int iParam1) //Position: 0xBDE2 / 48610
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_224(int iParam0, int iParam1) //Position: 0xBDF9 / 48633
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_225() //Position: 0xBE15 / 48661
{
	return;
}

void Function_226() //Position: 0xBE1B / 48667
{
	return;
}

void Function_227(int iParam0) //Position: 0xBE21 / 48673
{
	iParam0 = iParam0;
	return;
}

void Function_228(int iParam0, bool bParam1, bool bParam2) //Position: 0xBE2B / 48683
{
	if ((!Function_5(bParam1) || Global_3380) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_229(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_229(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_229(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_229(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_229(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_229(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_229(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_229(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_229(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_229(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_229(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_229(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_229(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_229(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_229(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_229(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_229(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_229(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_229(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_229(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_229(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_229(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_229(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_229(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_229(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_229(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_197(iParam0 + 356, 64);
	return;
}

void Function_229(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC0F8 / 49400
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_237(bParam3, iParam1);
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
			if (!Function_236(uParam2[bVar222], 4))
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
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_231(bVar22, iParam0, bParam3, bVar21, iParam1);
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
					Function_230(uParam2[bVar222], 4);
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

void Function_230(var uParam0, int iParam1) //Position: 0xC2E4 / 49892
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_231(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xC2F3 / 49907
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
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, false);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_235(bVar0, 0);
	Function_234(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_233(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_233(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(false, 10000) % 5) + 1);
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
				if (!IS_OBJECT_VALID(Function_232(bVar24, "UseCase1")))
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
	Function_233(bVar0, 20.0f, 1.0f, 1.0f);
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

var Function_232(bool bParam0, bool bParam1) //Position: 0xC965 / 51557
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_233(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xC972 / 51570
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

void Function_234(bool bParam0, bool bParam1) //Position: 0xC9B9 / 51641
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

void Function_235(bool bParam0, bool bParam1) //Position: 0xC9FF / 51711
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

bool Function_236(var uParam0, int iParam1) //Position: 0xCA2E / 51758
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_237(bool bParam0, int iParam1) //Position: 0xCA4A / 51786
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
	return iVar3[(RAND_INT_RANGE(false, 100000) % iVar2)];
}

struct<32> Function_238(bool bParam0) //Position: 0xCAEE / 51950
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239("0", &cVar8, ""), 4);
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

struct<32> Function_239(char* cParam0, char* cParam1, char* cParam2) //Position: 0xCB58 / 52056
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_240() //Position: 0xCB77 / 52087
{
	return;
}

bool Function_241(int iParam0) //Position: 0xCB7D / 52093
{
	if (Function_29(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_164(iParam0 + 192);
}

int Function_242(int iParam0) //Position: 0xCB9C / 52124
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_224(&(Global_29008[iParam0]), 4);
}

int Function_243() //Position: 0xCBB8 / 52152
{
	return 1;
}

void Function_244(bool bParam0) //Position: 0xCBBF / 52159
{
	Function_245(&bLocal_463, bLocal_7, "barn01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "barn01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "barn01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "barn01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "barn01", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "ncottage01", 1, &Global_29155[bParam010] + 20, 0, Local_170.f_84, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "ncottage01", 2, &Global_29155[bParam010] + 20, 0, Local_170.f_84, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "ncottage02", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 1);
	Function_245(&bLocal_463, bLocal_7, "ncottage02", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "ncottage03", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "blacksmith01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 10, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable02", 11, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable03", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable03", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stable03", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stockade01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stockade01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "stockade01", 3, &Global_29155[bParam010] + 20, 0, Local_170.f_444, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "store01", 1, &Global_29155[bParam010] + 20, 0, Local_170.f_172, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "store01", 2, &Global_29155[bParam010] + 20, 0, Local_170.f_172, 1, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 6, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 7, &Global_29155[bParam010] + 20, 1, Local_170.f_420, 0, 0);
	Function_245(&bLocal_463, bLocal_7, "trainStation01", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_245(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xD15B / 53595
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_246(uParam0);
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
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bParam1, &cVar1, &cVar9);
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

var Function_246(int iParam0) //Position: 0xD247 / 53831
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

void Function_247() //Position: 0xD275 / 53877
{
	Function_248(&iLocal_8, &iLocal_408, 4, Local_170.f_16, 4294967295, 4);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_72, 4294967295, 65802);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_472, 4294967295, 65800);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_108, 4294967295, 65802);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_84, 4294967295, 65802);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_96, 4294967295, 65802);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_172, 4294967295, 2314);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_120, 4294967295, 65802);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_408, 4294967295, 16650);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_432, 4294967295, 16648);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_224, 4294967295, 131338);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_188, 4294967295, 33034);
	Function_248(StackVal, &iLocal_8, &iLocal_408, 5, 4294967295, 0x1000008);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_464, 4294967295, 0x1000008);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_468, 4294967295, 0x1000008);
	Function_248(StackVal, &iLocal_8, &iLocal_408, 5, 4294967295, 16650);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_12, 4294967295, 16650);
	Function_248(&iLocal_8, &iLocal_408, 5, Local_170.f_136, 4294967295, 65794);
	return;
}

void Function_248(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xD3BF / 54207
{
	if (*iParam0 >= (*iParam1 - 1))
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
	iParam1[*iParam03]->f_4 = bParam3;
	(*iParam1)[*iParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*iParam0++;
}

void Function_249(int iParam0) //Position: 0xD49A / 54426
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_250(int iParam0, bool bParam1) //Position: 0xD4A9 / 54441
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

void Function_251(int iParam0, bool bParam1, bool bParam2) //Position: 0xD511 / 54545
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

var Function_252() //Position: 0xD59F / 54687
{
	return Local_108;
}

void Function_253(int iParam0) //Position: 0xD5A7 / 54695
{
	bLocal_7 = Function_254(Local_108, "hennigansranch", iParam0);
	return;
}

var Function_254(bool bParam0, bool bParam1, int iParam2) //Position: 0xD5C7 / 54727
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_255() //Position: 0xD5E6 / 54758
{
	return Function_256();
}

int Function_256() //Position: 0xD5EF / 54767
{
	var uVar0;
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Local_170 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(Local_170))
	{
		Local_170 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	Local_170.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_pop_corr01", 2, -907.295f, 91.39155f, 2439.918f, -0.188446f, 20.26217f, 0.03837547f, 22.06822f, 9.190167f, 6.534943f);
	Local_170.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_weth01", 2, -833.9625f, 104.2782f, 2455.697f, 0.0f, 10.1206f, 0.0f, 5.189783f, 3.347464f, 4.886743f);
	Local_170.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_weth02", 2, -848.5569f, 96.51233f, 2463.539f, 0.0f, 19.23773f, 0.0f, 4.969315f, 3.347464f, 5.209871f);
	Local_170.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_region", 3, -865.0332f, 104.5656f, 2419.329f, 0.0f, 20.0f, 0.0f, 108.1694f, 16.82273f, 104.4921f);
	Local_170.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_women", 2, -773.1002f, 92.65476f, 2383.807f, 0.0f, 54.52087f, 0.0f, 13.92711f, 13.27901f, 15.71011f);
	Local_170.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_mainHouse_set");
	(*&Local_170 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_ding01", 2, -787.9187f, 94.90556f, 2394.663f, 0.0f, 56.05423f, 0.0f, 6.233358f, 2.980766f, 9.392708f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[0]);
	(*&Local_170 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_parl01", 2, -791.4916f, 94.90692f, 2399.942f, 0.0f, 56.05423f, 0.0f, 6.233358f, 2.980766f, 9.392708f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[1]);
	(*&Local_170 + 24)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_entr01", 2, -782.7989f, 94.73243f, 2404.145f, 0.0f, 56.05423f, 0.0f, 9.163671f, 2.980766f, 6.331867f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[2]);
	(*&Local_170 + 24)[3] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_kich01", 2, -779.3077f, 94.5662f, 2392.901f, 0.0f, 55.16335f, 0.0f, 4.715626f, 2.980766f, 13.87618f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[3]);
	(*&Local_170 + 24)[4] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_entr02", 2, -782.7838f, 97.74265f, 2402.892f, 0.0f, -35.10406f, 0.0f, 6.432983f, 3.131083f, 11.29899f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[4]);
	(*&Local_170 + 24)[5] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bedr01", 2, -789.7974f, 98.00316f, 2399.699f, 0.0f, 55.51827f, 0.0f, 8.400698f, 2.434886f, 4.321394f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[5]);
	(*&Local_170 + 24)[6] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bedr02", 2, -781.4969f, 97.71693f, 2394.169f, 0.0f, 56.30006f, 0.0f, 7.767199f, 2.369404f, 4.363895f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[6]);
	(*&Local_170 + 24)[7] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bedr03", 2, -778.9072f, 97.94008f, 2397.139f, 0.1030367f, 54.97228f, 0.03594554f, 11.27106f, 2.490943f, 8.0997f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[7]);
	(*&Local_170 + 24)[8] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_terr01", 2, -789.3182f, 94.59753f, 2407.05f, 0.0f, 55.1356f, 0.0f, 2.464414f, 2.502242f, 13.11122f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[8]);
	(*&Local_170 + 24)[9] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_terr02", 2, -777.9434f, 94.71134f, 2405.11f, 0.0f, 56.48388f, 0.0f, 13.77267f, 2.394925f, 2.705867f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[9]);
	(*&Local_170 + 24)[10] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bedr04", 2, -784.3458f, 98.36203f, 2391.056f, 0.08203235f, -35.14056f, -0.4878395f, 3.280089f, 2.383869f, 7.496467f);
	ADD_TO_VOLUME_SET(Local_170.f_72, (*&Local_170 + 24)[10]);
	Local_170.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_house01_set");
	(*&Local_170 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_cott02", 2, -829.8432f, 94.06009f, 2358.384f, 0.0f, -95.18021f, 0.0f, 4.287017f, 3.133786f, 9.239021f);
	ADD_TO_VOLUME_SET(Local_170.f_84, (*&Local_170 + 76)[0]);
	Local_170.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_house02_set");
	(*&Local_170 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bunk03", 2, -817.6978f, 94.05641f, 2360.956f, 0.0f, 74.88929f, 0.0f, 6.053952f, 2.492213f, 9.891749f);
	ADD_TO_VOLUME_SET(Local_170.f_96, (*&Local_170 + 88)[0]);
	Local_170.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_house03_set");
	(*&Local_170 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bunk02", 2, -802.3254f, 94.14056f, 2375.87f, 0.0f, 57.55003f, 0.0f, 9.808082f, 2.856664f, 6.88935f);
	ADD_TO_VOLUME_SET(Local_170.f_108, (*&Local_170 + 100)[0]);
	Local_170.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_house04_set");
	(*&Local_170 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_bunk01", 2, -808.9023f, 93.90993f, 2386.919f, 0.0f, -34.29591f, 0.0f, 6.053952f, 2.492213f, 10.10525f);
	ADD_TO_VOLUME_SET(Local_170.f_120, (*&Local_170 + 112)[0]);
	Local_170.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_cell01", 2, -827.1763f, 95.11025f, 2435.198f, 0.0f, -15.11292f, 0.0f, 3.506161f, 2.655614f, 3.41665f);
	Local_170.f_136 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_playerHouse_set");
	(*&Local_170 + 128)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_cott01", 2, -840.0419f, 93.84976f, 2368.513f, 0.0f, 20.00927f, 0.0f, 4.239078f, 2.695265f, 9.117325f);
	ADD_TO_VOLUME_SET(Local_170.f_136, (*&Local_170 + 128)[0]);
	Local_170.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_genStore_set");
	(*&Local_170 + 140)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop01", 2, -827.2114f, 93.35832f, 2391.726f, 0.0f, -9.75f, 0.0f, 10.90003f, 4.500954f, 10.29797f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[0]);
	(*&Local_170 + 140)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop02", 2, -831.4028f, 93.35832f, 2395.013f, 0.0f, -9.75f, 0.0f, 4.031376f, 4.500954f, 4.111689f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[1]);
	(*&Local_170 + 140)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop03", 2, -824.4351f, 93.35832f, 2396.257f, 0.0f, -9.75f, 0.0f, 4.117599f, 4.500954f, 4.111689f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[2]);
	(*&Local_170 + 140)[3] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop04", 2, -829.3714f, 93.35832f, 2395.348f, 0.0f, 34.76101f, 0.0f, 2.963443f, 3.308627f, 3.02248f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[3]);
	(*&Local_170 + 140)[4] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop05", 2, -826.4714f, 93.35832f, 2395.865f, 0.0f, 35.02987f, 0.0f, 2.963443f, 3.308627f, 3.02248f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[4]);
	(*&Local_170 + 140)[5] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop06", 2, -821.3082f, 94.14738f, 2388.923f, -0.1333685f, -10.03256f, -0.2557848f, 0.5196779f, 1.61964f, 0.874405f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[5]);
	(*&Local_170 + 140)[6] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_shop07", 2, -832.1039f, 94.12175f, 2388.402f, 0.0f, -10.03256f, 0.0f, 0.5196779f, 1.617693f, 0.9369411f);
	ADD_TO_VOLUME_SET(Local_170.f_172, (*&Local_170 + 140)[6]);
	Local_170.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_Stockade_set");
	(*&Local_170 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_stoc01", 2, -823.336f, 96.18947f, 2431.508f, 0.0f, -15.11292f, 0.0f, 11.89836f, 5.583457f, 11.72979f);
	ADD_TO_VOLUME_SET(Local_170.f_188, (*&Local_170 + 176)[0]);
	(*&Local_170 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_offc01", 2, -825.292f, 95.06285f, 2427.988f, 0.0f, -15.11292f, 0.0f, 5.457095f, 2.333913f, 4.905727f);
	ADD_TO_VOLUME_SET(Local_170.f_188, (*&Local_170 + 176)[1]);
	Local_170.f_204 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_blacksmith_set");
	(*&Local_170 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "blackSmith", 2, -861.6597f, 94.62007f, 2380.274f, 0.0f, -19.17433f, 0.0f, 11.14826f, 8.686522f, 10.62593f);
	ADD_TO_VOLUME_SET(Local_170.f_204, (*&Local_170 + 192)[0]);
	(*&Local_170 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "blackSmithWin", 2, -863.2651f, 92.84383f, 2384.848f, 0.0f, -20.07252f, 0.0f, 9.717596f, 3.410117f, 0.3403007f);
	ADD_TO_VOLUME_SET(Local_170.f_204, (*&Local_170 + 192)[1]);
	Local_170.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_barn_set");
	(*&Local_170 + 208)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_barn02", 2, -844.946f, 97.02397f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 3.888079f, 20.09989f);
	ADD_TO_VOLUME_SET(Local_170.f_224, (*&Local_170 + 208)[0]);
	(*&Local_170 + 208)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_barn03", 2, -844.946f, 102.8268f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 6.371006f, 21.28212f);
	ADD_TO_VOLUME_SET(Local_170.f_224, (*&Local_170 + 208)[1]);
	(*&Local_170 + 208)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_barn01", 2, -844.946f, 91.88769f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 3.888079f, 20.09989f);
	ADD_TO_VOLUME_SET(Local_170.f_224, (*&Local_170 + 208)[2]);
	Local_170.f_244 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_birds_set");
	(*&Local_170 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "flyingBirds1", 3, -834.2458f, 95.63454f, 2418.397f, 0.0f, 20.0f, 0.0f, 93.99681f, 14.87926f, 64.42979f);
	ADD_TO_VOLUME_SET(Local_170.f_244, (*&Local_170 + 228)[0]);
	(*&Local_170 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "flyingBirds2", 3, -957.0374f, 95.20286f, 2409.412f, 0.0f, 20.0f, 0.0f, 37.00534f, 14.70886f, 32.78499f);
	ADD_TO_VOLUME_SET(Local_170.f_244, (*&Local_170 + 228)[1]);
	(*&Local_170 + 228)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "flyingBirds4", 3, -868.6245f, 88.70197f, 2345.522f, 0.0f, 20.0f, 0.0f, 19.98622f, 15.45483f, 22.63047f);
	ADD_TO_VOLUME_SET(Local_170.f_244, (*&Local_170 + 228)[2]);
	Local_170.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_dogs_set");
	(*&Local_170 + 248)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "dogs3", 2, -785.9968f, 91.98063f, 2400.114f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 34.3271f);
	ADD_TO_VOLUME_SET(Local_170.f_264, (*&Local_170 + 248)[0]);
	(*&Local_170 + 248)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "dogs2", 2, -823.3627f, 91.98063f, 2412.487f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 34.3271f);
	ADD_TO_VOLUME_SET(Local_170.f_264, (*&Local_170 + 248)[1]);
	(*&Local_170 + 248)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "dogs1", 2, -859.9617f, 91.98063f, 2412.811f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 29.3928f);
	ADD_TO_VOLUME_SET(Local_170.f_264, (*&Local_170 + 248)[2]);
	Local_170.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "Henv_Townpop_set");
	(*&Local_170 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_workerpop02", 2, -888.9214f, 93.28342f, 2360.243f, 0.0f, 29.48648f, 0.0f, 48.36207f, 10.20538f, 38.2534f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[0]);
	(*&Local_170 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_workerpop01", 2, -895.3943f, 92.65089f, 2391.865f, 0.0f, 12.81889f, 0.0f, 55.92949f, 8.492499f, 35.07158f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[1]);
	(*&Local_170 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_workerpop03", 2, -892.9852f, 93.36188f, 2455.063f, 0.0f, 19.09838f, 0.0f, 71.12991f, 11.73028f, 43.84187f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[2]);
	(*&Local_170 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_170, "stable04", 2, -862.531f, 92.27802f, 2457.24f, 0.0f, 20.44771f, 0.0f, 7.987236f, 4.9609f, 35.5173f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[3]);
	(*&Local_170 + 268)[4] = CREATE_VOLUME_IN_LAYOUT(Local_170, "townPOP9", 2, -866.601f, 92.6058f, 2424.438f, 0.0f, 37.8405f, 0.0f, 5.832854f, 10.95257f, 58.36314f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[4]);
	(*&Local_170 + 268)[5] = CREATE_VOLUME_IN_LAYOUT(Local_170, "townPOP6", 2, -837.4179f, 90.49345f, 2443.137f, 0.0f, -37.76136f, 0.0f, 27.57806f, 12.55932f, 7.271214f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[5]);
	(*&Local_170 + 268)[6] = CREATE_VOLUME_IN_LAYOUT(Local_170, "townPOP5", 2, -840.0947f, 95.69423f, 2419.526f, 0.0f, -14.44196f, 0.0f, 33.78256f, 12.69004f, 4.365254f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[6]);
	(*&Local_170 + 268)[7] = CREATE_VOLUME_IN_LAYOUT(Local_170, "townPOP4", 2, -854.9111f, 93.87077f, 2403.279f, 0.0f, 0.0f, 0.0f, 50.49413f, 10.0469f, 4.828262f);
	ADD_TO_VOLUME_SET(Local_170.f_304, (*&Local_170 + 268)[7]);
	Local_170.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "hen_cows_set");
	(*&Local_170 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_cattlepop01", 3, -913.4301f, 91.15893f, 2468.895f, 0.0f, 20.0f, 0.0f, 22.03595f, 3.397101f, 21.82662f);
	ADD_TO_VOLUME_SET(Local_170.f_324, (*&Local_170 + 308)[0]);
	(*&Local_170 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "cows4", 3, -874.6694f, 90.35291f, 2466.637f, 0.0f, 41.05971f, 0.0f, 9.076875f, 3.411866f, 15.36574f);
	ADD_TO_VOLUME_SET(Local_170.f_324, (*&Local_170 + 308)[1]);
	(*&Local_170 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "cows3", 3, -877.7629f, 90.35291f, 2448.0f, 0.0f, 20.0f, 0.0f, 6.649864f, 3.411866f, 6.868708f);
	ADD_TO_VOLUME_SET(Local_170.f_324, (*&Local_170 + 308)[2]);
	Local_170.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_nightPop", 3, -820.5867f, 92.98473f, 2375.798f, 0.0f, 20.0f, 0.0f, 26.00859f, 9.795838f, 26.00859f);
	Local_170.f_348 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "henv_horses_set");
	(*&Local_170 + 332)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_horsepop01", 3, -891.3127f, 91.90538f, 2365.967f, 0.0f, 20.0f, 0.0f, 9.649468f, 3.212526f, 9.793543f);
	ADD_TO_VOLUME_SET(Local_170.f_348, (*&Local_170 + 332)[0]);
	(*&Local_170 + 332)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "cows2", 3, -919.7874f, 91.35687f, 2383.749f, 0.0f, 55.03067f, 0.0f, 17.78707f, 4.646078f, 26.16555f);
	ADD_TO_VOLUME_SET(Local_170.f_348, (*&Local_170 + 332)[1]);
	(*&Local_170 + 332)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "cows1", 3, -913.5728f, 91.35687f, 2356.5f, 0.0f, 30.46546f, 0.0f, 32.49294f, 0.7796803f, 9.014298f);
	ADD_TO_VOLUME_SET(Local_170.f_348, (*&Local_170 + 332)[2]);
	Local_170.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "Henv_TrnPlatform_set");
	(*&Local_170 + 352)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Box", 2, -959.0334f, 92.48853f, 2415.089f, 0.0f, 20.30423f, 0.0f, 15.52501f, 5.481997f, 6.859567f);
	ADD_TO_VOLUME_SET(Local_170.f_364, (*&Local_170 + 352)[0]);
	(*&Local_170 + 352)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Box1", 2, -959.1414f, 92.90108f, 2429.122f, 0.0f, 19.67866f, 0.0f, 5.476338f, 6.218257f, 21.84757f);
	ADD_TO_VOLUME_SET(Local_170.f_364, (*&Local_170 + 352)[1]);
	Local_170.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_170, "Henv_HorseShoePit", 2, -820.5627f, 93.98839f, 2349.395f, 0.0f, 268.9332f, 0.0f, 4.158921f, 5.764499f, 16.75021f);
	Local_170.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "henv_pop_chickens_set");
	(*&Local_170 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder_pop", 3, -882.4127f, 90.35291f, 2435.568f, 0.0f, 20.0f, 0.0f, 7.493746f, 3.032098f, 5.24432f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[0]);
	(*&Local_170 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder1_pop", 3, -869.7514f, 90.87122f, 2417.751f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[1]);
	(*&Local_170 + 372)[2] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder2_pop", 3, -810.3448f, 92.36078f, 2416.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[2]);
	(*&Local_170 + 372)[3] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder3_pop", 3, -850.4661f, 90.35291f, 2438.934f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[3]);
	(*&Local_170 + 372)[4] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder4_pop", 3, -784.0f, 93.36469f, 2376.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[4]);
	(*&Local_170 + 372)[5] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinder6_pop", 3, -904.0f, 90.35291f, 2424.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[5]);
	(*&Local_170 + 372)[6] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Cylinderchickens", 3, -845.451f, 92.16456f, 2389.844f, 0.0f, 20.0f, 0.0f, 6.468651f, 6.468651f, 6.468651f);
	ADD_TO_VOLUME_SET(Local_170.f_404, (*&Local_170 + 372)[6]);
	Local_170.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_trainstation_int", 2, -952.1673f, 93.58117f, 2424.891f, 0.2293412f, 19.13329f, 0.5711275f, 10.33063f, 6.654235f, 16.43773f);
	Local_170.f_420 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "henv_null_set");
	(*&Local_170 + 412)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_null1", 2, -954.4357f, 93.58052f, 2427.771f, 0.2293412f, 19.13329f, 0.5711275f, 3.366404f, 9.480227f, 8.121138f);
	ADD_TO_VOLUME_SET(Local_170.f_420, (*&Local_170 + 412)[0]);
	Local_170.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "henv_trainstation_set");
	(*&Local_170 + 424)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_trainstation_01", 2, -955.2867f, 91.35066f, 2424.773f, 0.0f, 19.98809f, 0.0f, 16.49911f, 6.719215f, 28.12355f);
	ADD_TO_VOLUME_SET(Local_170.f_432, (*&Local_170 + 424)[0]);
	Local_170.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_170, "Henv_poker", 2, -801.4831f, 92.36066f, 2374.898f, 0.0f, -32.478f, 0.0f, 6.336149f, 6.336149f, 6.336149f);
	Local_170.f_440 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_lawGuys", 2, -821.0326f, 95.18906f, 2430.047f, 0.0f, -14.68973f, 0.0f, 4.261597f, 3.14055f, 5.783895f);
	Local_170.f_444 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_jailCell", 2, -820.8108f, 94.98416f, 2435.933f, 0.0f, -14.8283f, 0.0f, 4.17979f, 3.735707f, 3.873466f);
	Local_170.f_460 = CREATE_VOLUME_SET_IN_LAYOUT(Local_170, "henv_chickenCoop_set");
	(*&Local_170 + 448)[0] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Boxchickens", 2, -879.557f, 92.20952f, 2429.656f, 0.0f, -338.3949f, 0.0f, 5.210891f, 3.243308f, 4.876128f);
	ADD_TO_VOLUME_SET(Local_170.f_460, (*&Local_170 + 448)[0]);
	(*&Local_170 + 448)[1] = CREATE_VOLUME_IN_LAYOUT(Local_170, "Boxchickens1", 2, -889.2878f, 92.29076f, 2433.418f, 0.0f, 21.60508f, 0.0f, 5.34036f, 3.322412f, 5.117258f);
	ADD_TO_VOLUME_SET(Local_170.f_460, (*&Local_170 + 448)[1]);
	Local_170.f_464 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_pop_corr02", 2, -889.3197f, 92.94892f, 2398.636f, 0.0f, 29.48218f, 0.0f, 37.02348f, 7.523148f, 7.522303f);
	Local_170.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_pop_corr03", 2, -872.8254f, 93.54313f, 2351.379f, 0.0f, 29.48218f, 0.0f, 7.51993f, 7.523148f, 36.94432f);
	Local_170.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_170, "henv_mainHouseCrime", 2, -784.2532f, 93.33296f, 2400.242f, 0.0f, 55.46248f, 0.0f, 28.45781f, 18.68317f, 24.66519f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_report_crime", -821.611f, 93.296f, 2419.131f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_clear_bounty", -951.2153f, 90.55292f, 2429.154f, 0.0f, 0.0f, 0.0f);
	*(&Local_170 + 476) = { -817.0843f, 93.80626f, 2426.47f };
	*(&Local_170 + 476 + 12) = { 0.0f, 166.6764f, 0.0f };
	Local_170.f_500 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_merc_giver", -817.0843f, 93.80626f, 2426.47f, 0.0f, 166.6764f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_jail_sit", -819.6454f, 93.80083f, 2436.405f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_jail_leave_start", -823.64f, 93.809f, 2427.128f, 0.0f, 349.277f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_jail_leave_end", -821.8317f, 93.365f, 2421.105f, 0.0f, 348.823f, 0.0f);
	*(&Local_170 + 504) = { -951.873f, 90.203f, 2403.878f };
	*(&Local_170 + 504 + 12) = { 0.0f, 18.952f, 0.0f };
	Local_170.f_528 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_playerDuel1", -951.873f, 90.203f, 2403.878f, 0.0f, 18.952f, 0.0f);
	*(&Local_170 + 532) = { -954.643f, 90.203f, 2395.419f };
	*(&Local_170 + 532 + 12) = { 0.0f, -165.5798f, 0.0f };
	Local_170.f_556 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_enDuel1", -954.643f, 90.203f, 2395.419f, 0.0f, -165.5798f, 0.0f);
	*(&Local_170 + 560) = { -878.864f, 90.29f, 2415.872f };
	*(&Local_170 + 560 + 12) = { 0.0f, 279.78f, 0.0f };
	Local_170.f_584 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_playerDuel2", -878.864f, 90.29f, 2415.872f, 0.0f, 279.78f, 0.0f);
	*(&Local_170 + 588) = { -870.42f, 90.615f, 2414.0f };
	*(&Local_170 + 588 + 12) = { 0.0f, 464.5006f, 0.0f };
	Local_170.f_612 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_enDuel2", -870.42f, 90.615f, 2414.0f, 0.0f, 464.5006f, 0.0f);
	*(&Local_170 + 616) = { -855.173f, 90.371f, 2500.748f };
	*(&Local_170 + 616 + 12) = { 0.0f, 278.868f, 0.0f };
	Local_170.f_640 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_playerDuel3", -855.173f, 90.371f, 2500.748f, 0.0f, 278.868f, 0.0f);
	*(&Local_170 + 644) = { -848.19f, 90.353f, 2499.662f };
	*(&Local_170 + 644 + 12) = { 0.0f, 102.7046f, 0.0f };
	Local_170.f_668 = CREATE_POINT_IN_LAYOUT(Local_170, "armf_enDuel3", -848.19f, 90.353f, 2499.662f, 0.0f, 102.7046f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_cell_leave_end", -823.6021f, 93.809f, 2427.414f, 0.0f, 348.933f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "henf_cell_leave_cop", -819.889f, 93.809f, 2432.188f, 0.0f, 180.0f, 0.0f);
	*(&Local_170 + 672) = { -803.0267f, 92.56953f, 2377.659f };
	*(&Local_170 + 672 + 12) = { 0.0f, 55.64222f, 0.0f };
	Local_170.f_696 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_house2", -803.0267f, 92.56953f, 2377.659f, 0.0f, 55.64222f, 0.0f);
	*(&Local_170 + 700) = { -830.6995f, 92.54638f, 2359.302f };
	*(&Local_170 + 700 + 12) = { 0.0f, 176.8916f, 0.0f };
	Local_170.f_724 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_doctor", -830.6995f, 92.54638f, 2359.302f, 0.0f, 176.8916f, 0.0f);
	*(&Local_170 + 728) = { -840.4033f, 92.36072f, 2369.53f };
	*(&Local_170 + 728 + 12) = { 0.0f, 199.4039f, 0.0f };
	Local_170.f_752 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_house4", -840.4033f, 92.36072f, 2369.53f, 0.0f, 199.4039f, 0.0f);
	*(&Local_170 + 756) = { -826.7836f, 92.17664f, 2392.269f };
	*(&Local_170 + 756 + 12) = { 0.0f, 164.427f, 0.0f };
	Local_170.f_780 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_store", -826.7836f, 92.17664f, 2392.269f, 0.0f, 164.427f, 0.0f);
	*(&Local_170 + 784) = { -819.083f, 92.357f, 2399.914f };
	*(&Local_170 + 784 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_170.f_808 = CREATE_POINT_IN_LAYOUT(Local_170, "return_stand_pos_store", -819.083f, 92.357f, 2399.914f, 0.0f, 0.0f, 0.0f);
	*(&Local_170 + 812) = { -817.877f, 92.264f, 2402.042f };
	*(&Local_170 + 812 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_170.f_836 = CREATE_POINT_IN_LAYOUT(Local_170, "return_gateway_pos_store", -817.877f, 92.264f, 2402.042f, 0.0f, 0.0f, 0.0f);
	*(&Local_170 + 840) = { -816.149f, 95.328f, 2404.801f };
	*(&Local_170 + 840 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_170.f_864 = CREATE_POINT_IN_LAYOUT(Local_170, "camera_cut_pos1_store", -816.149f, 95.328f, 2404.801f, 0.0f, 0.0f, 0.0f);
	*(&Local_170 + 868) = { -815.611f, 95.177f, 2399.953f };
	*(&Local_170 + 868 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_170.f_892 = CREATE_POINT_IN_LAYOUT(Local_170, "camera_cut_pos2_store", -815.611f, 95.177f, 2399.953f, 0.0f, 0.0f, 0.0f);
	*(&Local_170 + 896) = { -949.0801f, 90.5529f, 2426.847f };
	*(&Local_170 + 896 + 12) = { 0.0f, 290.1824f, 0.0f };
	Local_170.f_920 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_train", -949.0801f, 90.5529f, 2426.847f, 0.0f, 290.1824f, 0.0f);
	*(&Local_170 + 924) = { -846.0206f, 90.39368f, 2457.682f };
	*(&Local_170 + 924 + 12) = { 0.0f, 378.6604f, 0.0f };
	Local_170.f_948 = CREATE_POINT_IN_LAYOUT(Local_170, "henf_interiorPoint_barn", -846.0206f, 90.39368f, 2457.682f, 0.0f, 378.6604f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos1", -880.775f, 102.63f, 2542.3f, -1.472f, -10.877f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos2", -956.891f, 99.782f, 2525.1f, -3.509f, -38.539f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos3", -1003.491f, 95.121f, 2473.324f, -2.071f, -66.598f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos4", -1023.822f, 100.955f, 2414.574f, -1.346f, -87.311f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos5", -686.591f, 97.079f, 2496.371f, -2.199f, 93.689f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos6", -977.44f, 91.853f, 2463.873f, 8.019f, 112.862f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos7", -814.197f, 93.422f, 2421.178f, 7.629f, -53.496f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos8", -805.925f, 94.654f, 2351.136f, 0.712f, 173.182f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos9", -915.972f, 91.729f, 2439.091f, 2.45f, 68.281f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_170, "hen_vista_cam_pos10", -754.379f, 94.442f, 2449.734f, 0.745f, 76.759f, 0.0f);
	return 1;
}

void Function_257(int iParam0, int iParam1) //Position: 0xF93B / 63803
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

void Function_258(var uParam0, int iParam1) //Position: 0xF984 / 63876
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_259() //Position: 0xF993 / 63891
{
	return;
}

bool Function_260() //Position: 0xF999 / 63897
{
	return 1;
}

void Function_261() //Position: 0xF9A0 / 63904
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 5, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 7, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	return;
}

bool Function_262() //Position: 0xFA32 / 64050
{
	return Function_263();
}

int Function_263() //Position: 0xFA3B / 64059
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
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_164(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "henv_armtut", 3, -987.86f, 91.72f, 2467.045f, 0.0f, 0.0f, 0.0f, 10.0f, 6.0f, 10.0f);
	Local_108.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_nightwatchVol", 2, -855.4252f, 105.4849f, 2407.332f, -0.6372142f, 25.17678f, -0.4130902f, 240.3393f, 39.50343f, 169.9922f);
	Local_108.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_nwCorral", 2, -890.1721f, 92.15579f, 2460.382f, -176.4225f, 80.71785f, -176.6112f, 25.40286f, 6.503892f, 31.75247f);
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_nwSheriff", 2, -823.2598f, 94.66096f, 2431.649f, -182.208f, 105.1435f, -182.2734f, 11.34968f, 4.029452f, 10.92662f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_1", 2, -784.0214f, 98.24509f, 2399.801f, 0.0f, -34.51686f, 0.0f, 22.89095f, 15.47784f, 23.14362f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_2", 2, -809.8995f, 95.39121f, 2386.462f, 0.0f, -125.3487f, 0.0f, 12.00936f, 8.455539f, 11.98766f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_3", 2, -817.8839f, 95.39121f, 2361.701f, 0.0f, -105.9682f, 0.0f, 11.36279f, 8.455539f, 11.07661f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_4", 2, -889.2974f, 93.51241f, 2398.976f, 0.0f, 30.70784f, 0.0f, 40.17653f, 7.558607f, 9.921187f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_5", 2, -873.26f, 93.10923f, 2351.49f, 0.0f, -60.16829f, 0.0f, 39.22623f, 8.064091f, 10.1001f);
	Local_108.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_6", 2, -861.9885f, 90.35291f, 2457.065f, 0.0f, 20.837f, 0.0f, 10.6097f, 5.971161f, 38.84776f);
	Local_108.f_96 = CREATE_OBJECTSET_IN_LAYOUT("nwFlagGroupSet", Local_108, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwplayerpos", -821.1275f, 93.36469f, 2420.0f, 0.0f, 112.4327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_96);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwproctor", -822.1721f, 93.36469f, 2420.419f, 0.0f, 293.2047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_96);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwforeman", -824.4701f, 93.36469f, 2419.825f, 0.0f, 79.6981f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_96);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwdogpos", -821.6245f, 93.36469f, 2419.558f, 0.0f, 119.5842f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_96);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsepos", -814.809f, 93.39845f, 2432f, 0.0f, 75.09982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_96);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwintrodog", -828.4f, 93.28396f, 2418.834f, 0.0f, 293.2047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_96);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcameraForemanPos", -824.0341f, 93.80911f, 2428.167f, 0.0f, -14.73302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_108.f_96);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwplayerEndPos", -825.6826f, 93.36469f, 2419.477f, 0.0f, -105.1622f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_108.f_96);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwgateway", -824.8149f, 93.36469f, 2419.216f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_108.f_96);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfleecow", -892.0001f, 90.35291f, 2459.941f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_108.f_96);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_nwfight", -780.8884f, 93.36469f, 2375.46f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_108.f_96);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight1", -848.2634f, 92.36078f, 2349.09f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_108.f_96);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight2", -860.8632f, 91.35687f, 2368f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_108.f_96);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight3", -888.0001f, 91.35687f, 2403.452f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_108.f_96);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight4", -940.4428f, 90.35291f, 2447.688f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_108.f_96);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight5", -811.6155f, 91.73328f, 2459.615f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_108.f_96);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight6", -948.0001f, 91.35687f, 2391.013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_108.f_96);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwfight7", -817.6152f, 92.48973f, 2379.044f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_108.f_96);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcow", -872.0001f, 90.35291f, 2435.944f, 0.0f, -10.34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_108.f_96);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcow1", -892.0001f, 90.29952f, 2490.418f, 0.0f, -135.4877f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_108.f_96);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcow2", -928.0001f, 90.35291f, 2446.504f, 0.0f, -10.34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_108.f_96);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcow3", -896.1941f, 90.1239f, 2428.709f, 0.0f, -10.34259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_108.f_96);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwbreak_in", -822.2877f, 92.36078f, 2358.159f, 0.0f, -106.0668f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_108.f_96);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwbreak_in1", -804.8705f, 92.41194f, 2383.487f, 0.0f, 143.5059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_108.f_96);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwbreak_in2", -955.8407f, 90.80297f, 2430.606f, 0.0f, 290.4257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_108.f_96);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft", -916.027f, 90.33736f, 2495.536f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_108.f_96);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft1", -887.4436f, 91.35687f, 2344f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_108.f_96);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft2", -871.1543f, 91.35687f, 2399.154f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_108.f_96);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft3", -795.983f, 92.23273f, 2422.755f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_108.f_96);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft4", -890.1666f, 91.35687f, 2389.643f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_108.f_96);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft5", -800.0001f, 93.3901f, 2342.688f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_108.f_96);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwhorsetheft6", -757.7525f, 92.36078f, 2404f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_108.f_96);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcoyotePos", -882.8876f, 90.35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_108.f_96);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcoyotePos1", -882.4459f, 90.35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_108.f_96);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcoyotePos2", -884.0001f, 90.35291f, 2437.048f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_108.f_96);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_108, "f_nwcoyotePos3", -881.3917f, 90.35291f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_108.f_96);
	Local_108.f_100 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PlayerHorse", -841.3272f, 92.4248f, 2376.841f, 0.0f, 20.95689f, 0.0f);
	Local_108.f_104 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_defSet", Local_108, 8, 0);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def02", -791.6099f, 97.07825f, 2395.416f, 0.0f, 75.0f, 0.0f);
	DECOR_SET_INT(bVar37, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_108.f_104);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def03", -829.8752f, 95.42339f, 2362.231f, 0.0f, 180.0f, 0.0f);
	DECOR_SET_INT(bVar38, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_108.f_104);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def04", -864.3022f, 93.59778f, 2453.85f, 0.0f, 109.5341f, 0.0f);
	DECOR_SET_INT(bVar39, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_108.f_104);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def05", -959.0236f, 95.1445f, 2402.895f, 0.0f, -91.60098f, 0.0f);
	DECOR_SET_INT(bVar40, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_108.f_104);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def01_core", -878.5399f, 93.4218f, 2427.709f, 0.0f, -15.0f, 0.0f);
	DECOR_SET_BOOL(bVar41, "Core", true);
	DECOR_SET_INT(bVar41, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_108.f_104);
	Local_108.f_108 = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", Local_108, 8, 0);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_player", -879.84f, 93.422f, 2428.205f, 0.0f, -69.07187f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_108.f_108);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_surv", -878.5399f, 93.4218f, 2427.709f, 0.0f, 110.88f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_108.f_108);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_player", -792.4224f, 97.07798f, 2396.573f, 0.0f, -35.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_108.f_108);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_surv", -791.6099f, 97.07825f, 2395.416f, 0.0f, -215.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_108.f_108);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_player", -831.2753f, 95.42339f, 2362.229f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_108.f_108);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_surv", -829.8752f, 95.42339f, 2362.231f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_108.f_108);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_player", -864.7852f, 93.59778f, 2452.599f, 0.0f, 199.708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_108.f_108);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_surv", -864.3022f, 93.59778f, 2453.95f, 0.0f, 19.84447f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_108.f_108);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_05_player", -959.2141f, 95.1445f, 2401.759f, 0.0f, -170.2578f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_108.f_108);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_05_surv", -958.9816f, 95.1445f, 2403.147f, 0.0f, 9.44477f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_108.f_108);
	Local_108.f_112 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group01_defSet", Local_108, 8, 0);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def08", -867.5882f, 93.59061f, 2443.844f, 0.0f, 72.42776f, 0.0f);
	DECOR_SET_INT(bVar52, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_108.f_112);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def09", -828.5159f, 95.52589f, 2399.198f, 0.0f, 172.0f, 0.0f);
	DECOR_SET_INT(bVar53, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_108.f_112);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def010", -806.67f, 95.89095f, 2375.114f, 0.0f, 62.31499f, 0.0f);
	DECOR_SET_INT(bVar54, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_108.f_112);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def011", -959.0236f, 95.1445f, 2402.895f, 0.0f, -91.60098f, 0.0f);
	DECOR_SET_INT(bVar55, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_108.f_112);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def07_core", -888.2301f, 93.44864f, 2431.325f, 0.0f, 5.435004f, 0.0f);
	DECOR_SET_BOOL(bVar56, "Core", true);
	DECOR_SET_INT(bVar56, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_108.f_112);
	Local_108.f_116 = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", Local_108, 8, 0);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_player", -889.5446f, 93.449f, 2431.804f, 0.0f, -70.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_108.f_116);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_surv", -888.2301f, 93.44864f, 2431.325f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_108.f_116);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_player", -867.5897f, 93.59061f, 2445.244f, 0.0f, 360.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_108.f_116);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_surv", -867.5882f, 93.59061f, 2443.844f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_108.f_116);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_09_player", -829.9092f, 95.52589f, 2399.026f, 0.0f, -96.88879f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_108.f_116);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_09_surv", -828.5159f, 95.52589f, 2399.198f, 0.0f, 82.8278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_108.f_116);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_10_player", -807.4048f, 95.89095f, 2376.373f, 0.0f, 329.5165f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_108.f_116);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_10_surv", -806.67f, 95.89095f, 2375.114f, 0.0f, 149.9615f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_108.f_116);
	Local_108.f_120 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group02_defSet", Local_108, 8, 0);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def014", -825.7961f, 94.874f, 2384.323f, 0.0f, -5.051389f, 0.0f);
	DECOR_SET_INT(bVar65, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_108.f_120);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def015", -862.3788f, 94.40231f, 2386.113f, 0.0f, 197.362f, 0.0f);
	DECOR_SET_INT(bVar66, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_108.f_120);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def016", -806.67f, 95.89095f, 2375.114f, 0.0f, 62.31499f, 0.0f);
	DECOR_SET_INT(bVar67, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_108.f_120);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def017", -959.0236f, 95.1445f, 2402.895f, 0.0f, -91.60098f, 0.0f);
	DECOR_SET_INT(bVar68, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_108.f_120);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def013_core", -878.5399f, 93.4218f, 2427.709f, 0.0f, -15.0f, 0.0f);
	DECOR_SET_BOOL(bVar69, "Core", true);
	DECOR_SET_INT(bVar69, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_108.f_120);
	Local_108.f_124 = CREATE_OBJECTSET_IN_LAYOUT("ammo_02Set", Local_108, 8, 0);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_14_player", -826.692f, 94.874f, 2384.103f, 0.0f, -101.8491f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_108.f_124);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_14_surv", -825.274f, 94.874f, 2384.379f, 0.0f, 78.08555f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_108.f_124);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_15_player", -860.9966f, 94.40231f, 2386.668f, 0.0f, 427.8096f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_108.f_124);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_02_15_surv", -862.3788f, 94.40231f, 2386.113f, 0.0f, 249.0943f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_108.f_124);
	Local_108.f_128 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group03_defSet", Local_108, 8, 0);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def020", -829.8752f, 95.42339f, 2362.231f, 0.0f, 180.0f, 0.0f);
	DECOR_SET_INT(bVar74, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_108.f_128);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def022", -806.67f, 95.89095f, 2375.114f, 0.0f, 62.31499f, 0.0f);
	DECOR_SET_INT(bVar75, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_108.f_128);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def023", -959.4861f, 95.1445f, 2398.574f, 0.0f, -91.60098f, 0.0f);
	DECOR_SET_INT(bVar76, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_108.f_128);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def024", -791.6099f, 97.07825f, 2395.416f, 0.0f, 75.0f, 0.0f);
	DECOR_SET_INT(bVar77, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_108.f_128);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def021_core", -828.5168f, 95.5248f, 2399.205f, 0.0f, 172.0f, 0.0f);
	DECOR_SET_BOOL(bVar78, "Core", true);
	DECOR_SET_INT(bVar78, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_108.f_128);
	Local_108.f_132 = CREATE_OBJECTSET_IN_LAYOUT("ammo_03Set", Local_108, 8, 0);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_23_player", -959.3017f, 95.1445f, 2399.643f, 0.0f, 8.647431f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_108.f_132);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_23_surv", -959.5449f, 95.1445f, 2398.241f, 0.0f, -169.9899f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_108.f_132);
	Local_108.f_136 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_safeSet", Local_108, 8, 0);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe01", -829.1409f, 92.39626f, 2373.502f, 0.0f, 276.0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_108.f_136);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe02", -827.3234f, 92.39015f, 2372.798f, 0.0f, -221.7289f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_108.f_136);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe03", -828.6742f, 92.54481f, 2361.774f, 0.0f, 177.8445f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_108.f_136);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe04", -864.2567f, 93.6271f, 2439.448f, 0.0f, 20.25596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_108.f_136);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe05", -959.1419f, 95.1445f, 2401.868f, 0.0f, -82.53751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_108.f_136);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe06", -820.0851f, 96.95911f, 2427.577f, 0.0f, -12.12151f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_108.f_136);
	Local_108.f_140 = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", Local_108, 8, 0);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_2", -915.965f, 90.35291f, 2441.927f, 0.0f, -120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_108.f_140);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_3", -864.8153f, 91.63651f, 2376.532f, 0.0f, -109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_108.f_140);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_4", -805.5434f, 92.75249f, 2378.345f, 0.0f, -31.42051f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_108.f_140);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_5", -879.3869f, 91.35687f, 2335.659f, 0.0f, -195.5814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_108.f_140);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_6", -945.8908f, 90.5529f, 2430.156f, 0.0f, 64.61762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_108.f_140);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_7", -774.4364f, 93.36469f, 2398.769f, 0.0f, -125.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_108.f_140);
	*(&Local_108 + 144) = { -821.1879f, 93.8091f, 2435.436f };
	*(&Local_108 + 144 + 12) = { 0.0f, 343.6404f, 0.0f };
	Local_108.f_168 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", -821.1879f, 93.8091f, 2435.436f, 0.0f, 343.6404f, 0.0f);
	Local_108.f_172 = CREATE_OBJECTSET_IN_LAYOUT("NormalFlagSet", Local_108, 8, 0);
	(*&Local_108 + 176)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "NormalFlag01", -939.8873f, 96.62582f, 2431.778f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 176)[0], Local_108.f_172);
	(*&Local_108 + 176)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "NormalFlag02", -952.4122f, 96.46968f, 2435.683f, 0.0f, -120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 176)[1], Local_108.f_172);
	Local_108.f_188 = CREATE_OBJECTSET_IN_LAYOUT("PitchforkPositionsSet", Local_108, 8, 0);
	(*&Local_108 + 192)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "Pitchfork01", -839.451f, 90.319f, 2461.25f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 192)[0], Local_108.f_188);
	(*&Local_108 + 192)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "Pitchfork02", -837.731f, 90.397f, 2467.077f, 0.0f, -120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 192)[1], Local_108.f_188);
	(*&Local_108 + 192)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "Pitchfork03", -848.291f, 90.391f, 2464.765f, 0.0f, -120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 192)[2], Local_108.f_188);
	(*&Local_108 + 192)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "Pitchfork04", -851.162f, 90.389f, 2454.729f, 0.0f, -120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 192)[3], Local_108.f_188);
	Local_108.f_212 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", -829.1997f, 92.40937f, 2373.514f, 0.0f, -82.99497f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_212), 0);
	Local_108.f_216 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand1", "rand_idle_stand", -827.247f, 92.40894f, 2372.707f, 0.0f, 138.1293f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_216), 0);
	Local_108.f_220 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_stand_rfl1", "DLC_survivor_stand_rfl", -828.6747f, 92.54486f, 2361.778f, 0.0f, -182.3939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_220), 0);
	Local_108.f_224 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", -864.2648f, 93.65392f, 2439.43f, 0.0f, 18.97359f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_224), 0);
	Local_108.f_228 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_roof_rfl1", "DLC_survivor_roof_rfl", -959.1338f, 95.14983f, 2401.874f, 0.0f, -81.19572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_228), 0);
	Local_108.f_232 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_roof_rfl2", "DLC_survivor_roof_rfl", -820.0922f, 96.95911f, 2427.573f, 0.0f, -13.23369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_232), 0);
	Local_108.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_108, "ZombiePack_player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", -820.2184f, 93.80832f, 2436.029f, 0.0f, -201.1251f, 0.0f);
}

void Function_264(bool bParam0, bool bParam1) //Position: 0x11A4D / 72269
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

void Function_265(int iParam0, bool bParam1, bool bParam2) //Position: 0x11AE3 / 72419
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_267(bParam1))
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
			Function_266(iParam0 + 192, iVar1[iVar0], 3, 1);
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

var Function_266(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x11BDE / 72670
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

bool Function_267(int iParam0) //Position: 0x11CAE / 72878
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_271(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_269(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_268(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_268(int iParam0) //Position: 0x11D29 / 73001
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_269(int iParam0) //Position: 0x11D3E / 73022
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_270(iParam0)11].f_12 < 0;
}

int Function_270(int iParam0) //Position: 0x11DA4 / 73124
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

bool Function_271(int iParam0, int iParam1) //Position: 0x11E66 / 73318
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_272() //Position: 0x11E82 / 73346
{
	SET_DUST_LEVEL(2);
	return;
}

void Function_273(bool bParam0, var uParam1) //Position: 0x11E8D / 73357
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

