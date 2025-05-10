//Decompiled with MagicRDR v1.0
//Function Count : 471
//Statics Count : 1052
//Natives Count : 680
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
	struct<357> Local_11 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0 } ;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 3;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 2;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 1;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 1;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 1;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 5;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 1;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 3;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 41;
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
	var uLocal_450 = 1;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 2;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 3;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 1;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 3;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 14;
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
	var uLocal_496 = 2;
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
	struct<13> Local_644 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	bool bLocal_663 = true;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	bool bLocal_683 = false;
	int iLocal_684 = 0;
	bool bLocal_685 = false;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	int iLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	int iLocal_695 = 0;
	bool bLocal_696 = false;
	int iLocal_697 = 0;
	float fLocal_698 = 0.0f;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	bool bLocal_705 = false;
	int iLocal_706 = 0;
	bool bLocal_707 = false;
	bool bLocal_708 = false;
	struct<5> Local_709 = { 0, 0, 0, 0, 4 } ;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	var uLocal_732 = 20;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	struct<5> Local_793[37];
	bool bLocal_979 = true;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986[2] = { 0, 0 };
	int iLocal_989 = 0;
	bool bLocal_990[3] = { false, false, false };
	struct<17> Local_994 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 5;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 15;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	bool bLocal_1044 = false;
	int iLocal_1045 = 0;
	int iLocal_1046 = 0;
	bool bLocal_1047 = false;
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
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
	iLocal_1002 = 0;
	iLocal_1043 = 4294967295;
	bLocal_1044 = "";
	iLocal_1045 = !Function_470();
	iLocal_1046 = 0;
	bLocal_1047 = false;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_469(&Var0, 3);
	Function_468();
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
						Function_463(&Local_11, bScriptParam_0, 0);
					}
					else
					{
						Function_462(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_459())
				{
					Function_458();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_457())
				{
					Function_456();
					Function_455(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_452())
				{
					Function_450(bScriptParam_0);
					if (bLocal_107)
					{
						Function_448(&Local_11, Function_449(), bScriptParam_0);
						Function_447(&Local_11, Function_449());
					}
					Function_455(&(Global_29008[bScriptParam_0]), 16);
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
				Function_446(&uLocal_8);
				Function_443();
				Function_440(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_439() && Function_438(Global_29155[bScriptParam_010])) && Function_437(&Local_11))
				{
					Function_435();
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
					Function_423(&Local_11, bScriptParam_0, Function_449());
				}
				Function_422(bScriptParam_0);
				Function_421();
				Function_420();
				Function_455(&(Global_29008[bScriptParam_0]), 8);
				if (Function_419(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_418(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_417(bScriptParam_0);
				Function_416();
				Function_415(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_409(bScriptParam_0);
				Function_408(64);
				Function_455(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_407(Function_449(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_406(&Var0, 5.0f);
				Function_455(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_224(bScriptParam_0);
				if (Function_419(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_107)
				{
					Function_109(&Local_11, bScriptParam_0);
				}
				Function_74(&uLocal_8, &uLocal_732, Function_108(), bScriptParam_0);
				Function_69(&Local_793, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_107)
	{
		Function_54(&Local_11, bScriptParam_0);
	}
	Function_52(bScriptParam_0);
	Function_23();
	Function_22();
	Function_21();
	Function_13(&uLocal_8, &uLocal_732);
	Function_12(&Local_793);
	Function_10();
	Function_6(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_408(64);
	Function_418(&(Global_29008[bScriptParam_0]), 32);
	Function_418(&(Global_29008[bScriptParam_0]), 64);
	Function_418(&(Global_29008[bScriptParam_0]), 8);
	Function_418(&(Global_29008[bScriptParam_0]), 512);
	Function_418(&(Global_29008[bScriptParam_0]), 16);
	Function_418(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_406(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3E4 / 996
{
	SET_DUST_LEVEL(1);
	Function_2(&bLocal_979);
	iLocal_989 = 0;
	while (iLocal_989 <= 3)
	{
		if (IS_OBJECT_VALID(bLocal_990[iLocal_989]))
		{
			DEREFERENCE_OBJECT(bLocal_990[iLocal_989]);
		}
		iLocal_989++;
	}
	if (IS_OBJECT_VALID(Local_994.f_16))
	{
		DESTROY_OBJECT(Local_994.f_16);
		STREAMING_SET_POI_LIMIT(1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bBuckedPlayerOffHorse"))
	{
		DECOR_REMOVE(Global_34573, "bBuckedPlayerOffHorse");
	}
	return;
}

void Function_2(bool bParam0) //Position: 0x47B / 1147
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_3(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x4A1 / 1185
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x5CF / 1487
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x5E9 / 1513
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x606 / 1542
{
	int iVar0;
	
	if (!Function_9(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_7(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_7(int iParam0) //Position: 0x63C / 1596
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_8(int iParam0) //Position: 0x65E / 1630
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x674 / 1652
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x68A / 1674
{
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_243.f_1024);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_243.f_1024);
	Function_11();
	return;
}

void Function_11() //Position: 0x6A3 / 1699
{
	RELEASE_LAYOUT_REF(Local_243);
	return;
}

void Function_12(int iParam0) //Position: 0x6AE / 1710
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

void Function_13(var uParam0, int iParam1) //Position: 0x708 / 1800
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_20(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_19(iParam1[iVar03], 4);
		}
		if (Function_20(iParam1[iVar03], 8))
		{
			Function_14(0, 0, 30);
			Function_19(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_14(int iParam0, int iParam1, int iParam2) //Position: 0x760 / 1888
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
		Function_15(Global_16524, bVar0, 1);
	}
	return;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x846 / 2118
{
	int iVar0;
	
	Function_18(iParam0);
	Function_17(bParam1);
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
	Function_16();
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

void Function_16() //Position: 0x9BF / 2495
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_17(bool bParam0) //Position: 0x9CB / 2507
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

void Function_18(int iParam0) //Position: 0xA11 / 2577
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

void Function_19(int iParam0, int iParam1) //Position: 0xA57 / 2647
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_20(int iParam0, int iParam1) //Position: 0xA71 / 2673
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0xA8E / 2702
{
	return;
}

void Function_22() //Position: 0xA94 / 2708
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	return;
}

void Function_23() //Position: 0xAF1 / 2801
{
	iLocal_6 = 1000;
	Function_25(&Local_1004);
	Function_24();
	return;
}

void Function_24() //Position: 0xB05 / 2821
{
	Function_2(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_25(int iParam0) //Position: 0xB17 / 2839
{
	int iVar0;
	
	if (!bLocal_683)
	{
		if (!Function_50(iParam0))
		{
			return;
		}
		if (Function_44(iParam0->f_152))
		{
			return;
		}
	}
	RESET_TREE_TYPE_CLEARING();
	STREAMING_UNLOAD_BOUNDS();
	Function_42();
	Function_2(&bLocal_663);
	if (!Function_50(iParam0) || Global_3421)
	{
		iParam0->f_4 = 1;
	}
	else
	{
		iParam0->f_4 = 14;
	}
	Function_33(iParam0);
	if (Global_3421)
	{
		Function_32(0);
	}
	else
	{
		Function_32(bLocal_683);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_651[iVar0] == 4294967295 && iLocal_651[iVar0] == 0)
		{
			STREAMING_EVICT_ACTOR(iLocal_651[iVar0], 4294967295);
			iLocal_651[iVar0] = 4294967295;
		}
		iVar0++;
	}
	if (iLocal_657 == 4294967295 && iLocal_657 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_657, 4294967295);
		bLocal_657 = 4294967295;
	}
	if (iLocal_660 == 4294967295 && iLocal_660 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_660, 4294967295);
		bLocal_660 = 4294967295;
	}
	if (iLocal_659 == 4294967295 && iLocal_659 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_659, 4294967295);
		bLocal_659 = 4294967295;
	}
	if (iLocal_658 == 4294967295 && iLocal_658 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_658, 4294967295);
		bLocal_658 = 4294967295;
	}
	if (iLocal_684)
	{
		Function_31(0.0f);
		iLocal_684 = 0;
	}
	Global_3385 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
	{
		DECOR_REMOVE(Global_34573, "bStartedGY");
	}
	CLEAR_ACTOR_PROOF(Global_34573, 16);
	if (Function_28(Global_30717[0]) && iParam0->f_152 != 0)
	{
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	}
	ENABLE_WEATHER_SPHERE(Function_27(iParam0->f_152), 0);
	if (Global_3421)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 15, 5.0f, 0);
		ADD_ITEM(Function_26(3), Global_34573, 0);
		ADD_ITEM(Function_26(3), Global_34573, 0);
		ADD_ITEM(Function_26(3), Global_34573, 0);
		ADD_ITEM(Function_26(3), Global_34573, 0);
		ADD_ITEM(Function_26(3), Global_34573, 0);
		ADD_ITEM(Function_26(1), Global_34573, 0);
		ADD_ITEM(Function_26(1), Global_34573, 0);
		ADD_ITEM(Function_26(1), Global_34573, 0);
		ADD_ITEM(Function_26(1), Global_34573, 0);
		ADD_ITEM(Function_26(1), Global_34573, 0);
		ADD_ITEM(Function_26(20), Global_34573, 0);
	}
	if (Global_3421)
	{
		DESTROY_LAYOUT(bLocal_707);
		CLEAR_ALL_CORPSES();
	}
	else
	{
		RELEASE_LAYOUT_REF(bLocal_707);
	}
	return;
}

var Function_26(bool bParam0) //Position: 0xD78 / 3448
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

int Function_27(int iParam0) //Position: 0xE69 / 3689
{
	switch (iParam0)
	{
		case 0x00000000:
			return 31;
			break;
		
		case 0x00000001:
			return 30;
			break;
		
		case 0x00000002:
			return 32;
			break;
		
		case 0x00000003:
			return 33;
			break;
		
		case 0x00000004:
			return 29;
			break;
	}
	LOG_ERROR("should not be here");
	return 31;
}

bool Function_28(bool bParam0) //Position: 0xECC / 3788
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
	return (((Function_30(uVar0, 0x1000000) || Function_30(uVar0, 0x2000000)) || Function_30(uVar0, 0x4000000)) || Function_29(bParam0));
}

bool Function_29(int iParam0) //Position: 0xF3F / 3903
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_30(var uParam0, bool bParam1) //Position: 0xF5C / 3932
{
	return (uParam0 && bParam1) == 0;
}

void Function_31(int iParam0) //Position: 0xF69 / 3945
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_32(bool bParam0) //Position: 0xF7E / 3966
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(Local_713[iVar04]))
		{
			if (bParam0)
			{
				RELEASE_OBJECT_REF(Local_713[iVar04]);
			}
			else
			{
				DESTROY_OBJECT(Local_713[iVar04]);
			}
		}
		Local_713[iVar04].f_4 = 0;
		iVar0++;
	}
	if (IS_OBJECT_VALID(Local_709))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(Local_709);
		}
		else
		{
			DESTROY_OBJECT(Local_709);
		}
	}
	Local_709.f_4 = 0;
	return;
}

void Function_33(int iParam0) //Position: 0xFEC / 4076
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		Function_34(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0));
		bVar0++;
	}
	if (IS_ACTOR_VALID(bLocal_685))
	{
		SET_ACTOR_INVULNERABILITY(bLocal_685, 0);
		Function_34(bLocal_685);
	}
	return;
}

void Function_34(bool bParam0) //Position: 0x102F / 4143
{
	Function_35(bParam0, 1);
	SET_ACTOR_HEALTH(bParam0, 0.0f);
	return;
}

void Function_35(bool bParam0, bool bParam1) //Position: 0x1041 / 4161
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, false);
		}
		else
		{
			if (((Function_41() || Function_40(bParam0)) || Function_39(bParam0)) || Function_38(bParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), "head", &vVar0))
			{
				bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_37(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
				RESET_RMPTFX_IN_VOLUME(bVar3);
				DESTROY_VOLUME(bVar3);
			}
			if (DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(bParam0, "Zombie_NoHead", true);
			Function_36();
			bVar5 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_37(), "blood_zombie_shotgun_exit", "head", bParam0, Function_36(), bParam0);
			if (IS_OBJECT_VALID(bVar5))
			{
				Function_36();
				UNK_0x6745191B(bVar5, Function_36());
			}
		}
	}
	return;
}

vector3 Function_36() //Position: 0x120C / 4620
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_37() //Position: 0x1215 / 4629
{
	int iVar0;
	
	return iVar0;
}

bool Function_38(bool bParam0, int iParam1) //Position: 0x121D / 4637
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_39(bool bParam0) //Position: 0x125F / 4703
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_40(bool bParam0) //Position: 0x127F / 4735
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_41() //Position: 0x129F / 4767
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_42() //Position: 0x12B2 / 4786
{
	Local_644.f_12 = 0;
	Local_644.f_8 = 0;
	Local_644 = 0.0f;
	Function_43(&Local_644 + 4, 3);
	UI_HIDE("XPMultiplierSP");
	return;
}

void Function_43(int iParam0, int iParam1) //Position: 0x12E5 / 4837
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_44(int iParam0) //Position: 0x12F8 / 4856
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_3421)
	{
		return 0;
	}
	uVar0 = Function_45(Function_49(iParam0));
	iVar1 = CONVERT_TIME_OF_DAY_TO_INT(uVar0);
	iVar2 = MAKE_TIME_OF_DAY(24, 0, 0);
	iVar3 = CONVERT_TIME_OF_DAY_TO_INT(iVar2);
	iVar4 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
	if ((iVar4 - iVar1) <= iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_45(int iParam0) //Position: 0x133C / 4924
{
	if (!Function_46(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_46(int iParam0) //Position: 0x135B / 4955
{
	if (!Function_48(iParam0))
	{
		return 0;
	}
	if (!Function_47(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x137F / 4991
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x1394 / 5012
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_49(int iParam0) //Position: 0x13AB / 5035
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

bool Function_50(int iParam0) //Position: 0x146D / 5229
{
	if (Global_3421)
	{
		return 1;
	}
	switch (iParam0->f_152)
	{
		case 0x00000000:
			if (Function_51(4) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if ((Function_51(4) && Function_51(6)) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_51(26) && !Global_3382)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x14E5 / 5349
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_52(bool bParam0) //Position: 0x14FA / 5370
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_419(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_418(&(Global_29008[bParam0]), 0x20000000);
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
		if (Function_28(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_53(1));
		}
	}
	return;
}

bool Function_53(int iParam0) //Position: 0x15A1 / 5537
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_54(int iParam0, int iParam1) //Position: 0x15BD / 5565
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_9(iParam1) || Function_30(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_57(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_57(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_57(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_57(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_57(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_57(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_57(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_57(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_57(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_57(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_57(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_57(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_57(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_57(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_57(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_57(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_57(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_57(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_57(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_57(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_57(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_57(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_57(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_57(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_57(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_57(iParam0, &Global_7032, iParam1);
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
	Function_52(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_55(iParam1);
	}
	return;
}

void Function_55(int iParam0) //Position: 0x1903 / 6403
{
	char* cVar0;
	
	if (Global_3380 || Function_53(0x8000000))
	{
		return;
	}
	cVar0 = Function_56(iParam0);
	if (Function_28(iParam0))
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

var Function_56(int iParam0) //Position: 0x1967 / 6503
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

void Function_57(int iParam0, var uParam1, int iParam2) //Position: 0x1C94 / 7316
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
			Function_68(uParam1[iVar02], 4);
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
	if (!Function_28(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_67(Global_76846, 0x4000000))
		{
			Function_62(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_30(iParam0->f_356, 32))
	{
		if (!Function_67(Global_76846, 8388608))
		{
			Function_62(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_67(Global_76846, 4194304))
	{
		Function_62(Global_34573, 4194304, 1, 0);
	}
	Function_60(iParam0, 0, 0);
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
	Function_2(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_58(iParam2, Function_28(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_53(1));
	return;
}

void Function_58(int iParam0, bool bParam1) //Position: 0x1F4E / 8014
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (bParam1 && Function_59("noZombieFireArt"))
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
			if (!Function_51(5))
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

int Function_59(char* cParam0) //Position: 0x26A4 / 9892
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_60(var uParam0, bool bParam1, bool bParam2) //Position: 0x26C3 / 9923
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
				if (!Function_61(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_61(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x273F / 10047
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_62(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2759 / 10073
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_64(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_63(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_63(char* cParam0, int iParam1) //Position: 0x27C5 / 10181
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

bool Function_64(bool bParam0, var uParam1, int iParam2) //Position: 0x27FC / 10236
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
		if (Function_66(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_65(uVar0))
		{
			case 0x00000002:
				if (!Function_67(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_65(char* cParam0) //Position: 0x2874 / 10356
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

int Function_66(int iParam0) //Position: 0x2915 / 10517
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_43(&iVar1, 2147483648);
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

bool Function_67(var uParam0, int iParam1) //Position: 0x2952 / 10578
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_68(var uParam0, int iParam1) //Position: 0x2965 / 10597
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_69(var uParam0, bool bParam1) //Position: 0x297C / 10620
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
	
	bVar6 = Function_73();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_72((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_71(uParam0[iVar05], 16384);
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
								Function_70(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_71(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_108(), uParam0[iVar05]->f_12))
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
								Function_70(uParam0[iVar05], 1);
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
							Function_70(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_71(uParam0[iVar05], 1);
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
					Function_70(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_70(uParam0[iVar05], 1);
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
					Function_71(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_71(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_108(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_108(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_71(uParam0[iVar05], 32768);
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

void Function_70(var uParam0, int iParam1) //Position: 0x2D48 / 11592
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_71(var uParam0, int iParam1) //Position: 0x2D59 / 11609
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_72(int iParam0, bool bParam1) //Position: 0x2D73 / 11635
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_73() //Position: 0x2D85 / 11653
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_74(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2D8E / 11662
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_53(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_75(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_75(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2E0F / 11791
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_107(iParam0))
	{
		return 0;
	}
	Function_418(&(Global_29008[iParam2]), 4194304);
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
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_105(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_104(iParam0, 8);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_14(0, 0, 0);
						}
						else
						{
							Function_14(0, 0, 30);
						}
						Function_19(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_104(iParam0, 4);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_19(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_9(iParam2)) && !Function_103(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_102(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 16))
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
							if (Function_73())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_104(iParam0, 16);
								Function_94(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 16))
					{
						Function_19(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_20(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_104(iParam0, 2);
			}
			else
			{
				Function_19(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_9(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_419(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_20(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_93(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_104(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_9(iParam2))
					{
						Function_92(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_76(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_76(int iParam0) //Position: 0x3228 / 12840
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_419(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_455(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_81(473, 1, 0, 0);
		iVar0 = Function_80(iParam0);
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
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_79(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_79(7, 30);
	}
	if (Function_78(473) <= Function_77(473))
	{
		if (!Function_73())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_77(int iParam0) //Position: 0x3327 / 13095
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_78(int iParam0) //Position: 0x3364 / 13156
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_79(int iParam0, bool bParam1) //Position: 0x339D / 13213
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

var Function_80(int iParam0) //Position: 0x3404 / 13316
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

int Function_81(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x345C / 13404
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
	Function_91(iParam0, TO_FLOAT(bParam1), 1);
	Function_90(iParam0);
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

void Function_82(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x367C / 13948
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_77(390))), 32);
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
					bVar19 = (Function_78(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_78(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_88(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_83(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_37(), &Var9);
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

var Function_83(int iParam0) //Position: 0x3CA9 / 15529
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_84(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3CBA / 15546
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

struct<32> Function_85(char* cParam0, bool bParam1) //Position: 0x3DAF / 15791
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_86(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3DC8 / 15816
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_72(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_87(Function_72(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_87(int iParam0, int iParam1) //Position: 0x3E2D / 15917
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_88(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3E3F / 15935
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
	if (((Function_89(iParam0) != 19 || Function_89(iParam0) != 17) || Function_89(iParam0) != 10) || Function_89(iParam0) != 9)
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

int Function_89(int iParam0) //Position: 0x3F6F / 16239
{
	return Global_35278[iParam020].f_48;
}

void Function_90(int iParam0) //Position: 0x3F7E / 16254
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

int Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x411A / 16666
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

void Function_92(var uParam0, int iParam1) //Position: 0x435E / 17246
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_93(struct<5> Param0) //Position: 0x436B / 17259
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_94(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4391 / 17297
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_101(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_100(iParam1))
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
	if (!Function_97(1))
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
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_95();
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

void Function_95() //Position: 0x4621 / 17953
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_96(bVar0, iVar1);
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

void Function_96(bool bParam0, bool bParam1) //Position: 0x4684 / 18052
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

bool Function_97(bool bParam0) //Position: 0x46B3 / 18099
{
	if (Function_102(256))
	{
		return 0;
	}
	if (Function_102(262144))
	{
		return 0;
	}
	if (Function_99())
	{
		return 0;
	}
	if (!Function_102(1))
	{
		return 0;
	}
	if (!Function_102(4096))
	{
		return 0;
	}
	if (bParam0 && Function_98(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_102(2048))
	{
		return 0;
	}
	if (Function_73() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_98(int iParam0) //Position: 0x4729 / 18217
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_99() //Position: 0x473A / 18234
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

bool Function_100(int iParam0) //Position: 0x4753 / 18259
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_101(int iParam0) //Position: 0x4769 / 18281
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_102(int iParam0) //Position: 0x477E / 18302
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_103(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x479C / 18332
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

void Function_104(int iParam0, int iParam1) //Position: 0x4840 / 18496
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_105(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x4851 / 18513
{
	int iVar0;
	bool bVar1;
	
	Function_18(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_106(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_15(StackVal, bVar1, bParam4);
		}
	}
}

void Function_106(int iParam0, int iParam1) //Position: 0x48C3 / 18627
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_18(iParam0);
	Function_17(iVar0);
	PRINTNL();
	Function_15(iParam0, iVar0, iParam1);
	return;
}

bool Function_107(int iParam0) //Position: 0x48E8 / 18664
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

var Function_108() //Position: 0x4905 / 18693
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_109(int iParam0, bool bParam1) //Position: 0x491A / 18714
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
		Function_43(iParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (iParam0->f_364 == 4294967295)
		{
			iParam0->f_364 = Function_219(0, bParam1, 3);
		}
		if (!Function_30(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_30(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_218(1, 0));
			Function_217(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_30(iParam0->f_356, 16))
	{
		Function_216(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_30(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_30(iParam0->f_356, 4))
	{
		Function_217(iParam0 + 356, 4);
		Function_54(iParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_215(0, 4294967295);
		Function_214();
		Function_52(bParam1);
		return;
	}
	fVar0 = Function_212(Function_213(bParam1));
	fVar1 = Function_211(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_219(111, 111, 5);
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
				Function_210(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_209(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_208(Function_213(bParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_30(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_30(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_205(iParam0, 0);
				Function_210(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_210(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_217(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_216(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_204(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_202();
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
				Function_198(iParam0, bParam1, fVar2);
			}
			if (!Function_30(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_30(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_217(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_211(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_30(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_209(iParam0);
					}
				}
			}
		}
	}
	Function_196(iParam0, bParam1);
	if (Function_30(iParam0->f_356, 1024))
	{
		Function_195(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_30(iParam0->f_356, 16384))
		{
			Function_217(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_30(iParam0->f_356, 16384))
	{
		Function_43(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_30(iParam0->f_356, 262144))
	{
		if (Function_437(iParam0))
		{
			Function_43(iParam0 + 356, 262144);
			Function_193(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *iParam0);
			if (!Function_28(bParam1))
			{
				if (!Function_30(iParam0->f_356, 8))
				{
					Function_217(iParam0 + 356, 8);
					Function_192();
				}
			}
		}
	}
	if (Function_30(iParam0->f_356, 524288))
	{
		if (Function_192())
		{
			Function_217(iParam0 + 356, 8);
			Function_43(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_67(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_184(iParam0);
				Function_217(iParam0 + 356, 262144);
				if (Function_28(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_462(bParam1, 1);
					Function_178(bParam1);
					Function_215(0, 4294967295);
					Function_216(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_30(iParam0->f_356, 1))
					{
						Function_177(iParam0, bParam1);
						Function_176("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_173("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_462(bParam1, 0);
					Function_178(bParam1);
					Function_217(iParam0 + 356, 2);
					Function_215(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_167(iParam0 + 168, 1, iParam0 + 356))
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
				Function_135(iParam0, bParam1);
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
					if (Function_30((iParam0 + 4[iVar95])->f_16, 2))
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
						if (Function_167(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_124(iParam0 + 4[iVar95], iVar13);
							Function_43(iParam0 + 4[iVar95] + 16, 2);
							Function_217(iParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_30((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_43(iParam0 + 4[iVar95] + 16, 16);
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
						if (Function_123(bVar12))
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
			Function_204(1);
			if (Function_118(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_117(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_216(bParam1, 300.0f);
			}
			else
			{
				Function_216(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_30(iParam0->f_356, 8))
			{
				Function_217(iParam0 + 356, 8);
				Function_192();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_116(bParam1);
			Function_115(iParam0);
			Function_205(iParam0, 1);
			Function_52(Global_29006);
			iParam0->f_364 = Function_219(0, bParam1, 3);
			Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_217(iParam0 + 356, 512);
			if (!Function_30(Global_13172[iParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_112(Function_213(bParam1));
				Function_81(660, bVar37, 0, 0);
				Function_217(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_463(iParam0, bParam1, 1);
			Function_448(iParam0, Global_30616, bParam1);
			Function_447(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_437(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_423(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_423(iParam0, bParam1, Global_30616);
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
				Function_135(iParam0, bParam1);
				Function_184(iParam0);
				Function_217(iParam0 + 356, 262144);
				Function_462(bParam1, 1);
				Function_217(&Global_13172[Function_219(111, 111, 5)11] + 20, 4);
				Function_178(bParam1);
				Function_215(0, 4294967295);
				Function_216(bParam1, 0.0f);
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
					if (Function_30(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_111(660, 1, 0);
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
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_30(iParam0->f_356, 8192))
						{
							Function_217(iParam0 + 356, 8192);
							Function_173("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_210(iParam0 + 4[iVar395]);
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
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_30(iParam0->f_356, 0x4000000))
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
					Function_210(iParam0 + 4[iVar405]);
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
					Function_173("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_217(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_219(0, bParam1, 3);
				Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
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
			Function_110(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *iParam0);
		}
	}
	return;
}

void Function_110(bool bParam0, struct<365> Param1) //Position: 0x5C34 / 23604
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
	Function_217(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5C83 / 23683
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
	Function_90(iParam0);
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

var Function_112(int iParam0) //Position: 0x5E7E / 24190
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_114(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_113(&iVar1, iVar0);
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
			if (!Function_30(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_113(int iParam0, int iParam1) //Position: 0x6068 / 24680
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

var Function_114(int iParam0) //Position: 0x6444 / 25668
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

void Function_115(int iParam0) //Position: 0x65CA / 26058
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

void Function_116(int iParam0) //Position: 0x6619 / 26137
{
	char* cVar0;
	
	if (Global_3380 || Function_53(0x8000000))
	{
		return;
	}
	cVar0 = Function_56(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_117(int iParam0) //Position: 0x6651 / 26193
{
	int iVar0;
	
	if (Function_30(iParam0, 1) && Function_30(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_118(int iParam0) //Position: 0x6685 / 26245
{
	return Function_119(iParam0 + 352);
}

int Function_119(int iParam0) //Position: 0x6693 / 26259
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
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_37()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_37()));
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
				bVar9 = (Function_30(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_121(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_61(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
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
		Function_120(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_455(&(Global_29008[Global_29006]), 0x20000000);
		Function_176("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
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

void Function_120(int iParam0) //Position: 0x68B9 / 26809
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

float Function_121(bool bParam0, vector3 vParam1) //Position: 0x6908 / 26888
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_122(bParam0);
		vVar0 = { StackVal, StackVal, Function_122(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_122(bool bParam0) //Position: 0x6982 / 27010
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

bool Function_123(bool bParam0) //Position: 0x69EC / 27116
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

void Function_124(int iParam0, bool bParam1) //Position: 0x6B5B / 27483
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
	
	Function_134();
	Function_133();
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
	Function_81(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_132(bParam1, 5.0f, 1);
		Function_210(iParam0);
		Function_131(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	fVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, fVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_130(StackVal, StackVal, *iParam0, vVar7))
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
	Function_125(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_132(bParam1, 5.0f, 1);
	Function_210(iParam0);
	Function_131(Global_29006, 10.0f);
	return;
}

var Function_125(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6E29 / 28201
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_126(&bVar0, uParam2);
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

void Function_126(var uParam0, int iParam1) //Position: 0x6EA8 / 28328
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_129(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_128(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_127(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_127(var uParam0, bool bParam1) //Position: 0x6F05 / 28421
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

void Function_128(var uParam0, bool bParam1) //Position: 0x6F85 / 28549
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

void Function_129(var uParam0, bool bParam1) //Position: 0x7005 / 28677
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

bool Function_130(bool bParam0, vector3 vParam1) //Position: 0x7089 / 28809
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

void Function_131(int iParam0, float fParam1) //Position: 0x70C7 / 28871
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fVar0);
	return;
}

void Function_132(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7109 / 28937
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
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_37(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_133() //Position: 0x7240 / 29248
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_134() //Position: 0x7252 / 29266
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_135(int iParam0, bool bParam1) //Position: 0x7267 / 29287
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_138(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
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
	Function_176("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_30(iParam0->f_356, 8))
	{
		if (Function_192())
		{
			Function_217(iParam0 + 356, 8);
		}
		else
		{
			Function_217(iParam0 + 356, 524288);
		}
	}
	Function_217(iParam0 + 356, 32);
	iParam0->f_364 = Function_219(0, bParam1, 3);
	Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_136(iParam0);
	return;
}

void Function_136(int iParam0) //Position: 0x7549 / 30025
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
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_37(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_37(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_137(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_217(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_37(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_37(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_131(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_137(bool bParam0) //Position: 0x77BA / 30650
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

var Function_138(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x787D / 30845
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
	
	if (Function_166(StackVal, StackVal, vParam0))
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
			Function_165(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_165(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_164(Global_34573);
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
		if (!Function_163(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_159(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
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
	else if (!Function_163(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_157(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_9(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_159(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_156(StackVal, StackVal, vVar21, 1);
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
		Function_139();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_139() //Position: 0x7C84 / 31876
{
	Function_152();
	Function_151();
	Function_151();
	Function_150();
	Function_150();
	Function_149();
	Function_149();
	Function_146(0);
	Function_146(0);
	if (!Function_73())
	{
		Function_144();
		Function_143();
		Function_142();
		Function_141();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_140();
	return;
}

void Function_140() //Position: 0x7CD6 / 31958
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

void Function_141() //Position: 0x7DDC / 32220
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

void Function_142() //Position: 0x7E0F / 32271
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

void Function_143() //Position: 0x7F9D / 32669
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

void Function_144() //Position: 0x8176 / 33142
{
	Function_145(&Global_28260, 1, 0);
	return;
}

void Function_145(int iParam0, bool bParam1, int iParam2) //Position: 0x8184 / 33156
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
	
	bVar0 = Function_108();
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

struct<8> Function_146(int iParam0) //Position: 0x8375 / 33653
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
					iVar2 = ((Function_148((50 + iVar4)) + Function_148((183 + iVar4))) + Function_148((90 + iVar4)));
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
	Function_147(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_147(int iParam0, bool bParam1, bool bParam2) //Position: 0x841B / 33819
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
		Function_91(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_90(iParam0);
	if (bParam2)
	{
		Function_82(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_148(bool bParam0) //Position: 0x86B6 / 34486
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_149() //Position: 0x86F7 / 34551
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
		iVar2 = ((Function_148((50 + iVar3) + 15) + Function_148((183 + iVar3) + 15)) + Function_148((90 + iVar3) + 15));
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
	Function_147(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_150() //Position: 0x8780 / 34688
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
			iVar2 = ((Function_148((50 + iVar3) + 8) + Function_148((183 + iVar3) + 8)) + Function_148((90 + iVar3) + 8));
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
	Function_147(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_151() //Position: 0x8817 / 34839
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
		iVar2 = ((Function_148((50 + iVar3)) + Function_148((183 + iVar3))) + Function_148((90 + iVar3)));
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
	Function_147(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_152() //Position: 0x8896 / 34966
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_153(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_147(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_153(int iParam0, bool bParam1, int iParam2) //Position: 0x88CF / 35023
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
	Function_91(iParam0, bParam1, 1);
	Function_90(iParam0);
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

int Function_154(int iParam0) //Position: 0x8AD9 / 35545
{
	if (!Function_155(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_155(int iParam0) //Position: 0x8AF3 / 35571
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_156(vector3 vParam0, bool bParam3) //Position: 0x8B09 / 35593
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

var Function_157(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8B74 / 35700
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_166(StackVal, StackVal, vParam0))
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
			else if (Function_158(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_419(&(Global_29008[iVar6]), 4096), Global_34573))
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
	if (Function_9(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_158(int iParam0) //Position: 0x8C6E / 35950
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

bool Function_159(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x8CC6 / 36038
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
	
	if (Function_166(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_162(60.0f, 20.0f), 0);
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
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_161(StackVal, StackVal, *uParam4) };
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
		Function_160(&uVar20);
		vVar32 = { StackVal, StackVal, Function_160(&uVar20) };
		Function_160(&iVar26);
		vVar35 = { StackVal, StackVal, Function_160(&iVar26) };
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

vector3 Function_160(int iParam0) //Position: 0x8E70 / 36464
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_161(vector3 vParam0) //Position: 0x8E8F / 36495
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_162(int iParam0, int iParam1) //Position: 0x8EAF / 36527
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_163(var uParam0, var uParam1, int iParam2) //Position: 0x8EC2 / 36546
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_419(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_419(&(Global_29008[Global_30693[4]]), 4))
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

var Function_164(bool bParam0) //Position: 0x90F6 / 37110
{
	return GET_HEADING(bParam0);
}

vector3 Function_165(bool bParam0) //Position: 0x9101 / 37121
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_166(vector3 vParam0) //Position: 0x9112 / 37138
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_167(var uParam0, bool bParam1, int iParam2) //Position: 0x912A / 37162
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
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_169(Global_34573, 0, 0))
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
		if (Function_169(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
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
			if (!Function_30(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_168(Global_34573, *uParam0) > 3.0f)
				{
					Function_217(iParam2, 65536);
					Function_173("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_137(*uParam0);
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
		if (!Function_30(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_168(Global_34573, *uParam0) > 3.0f)
			{
				Function_217(iParam2, 65536);
				Function_173("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_137(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_169(Global_34573, 0, 0))
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
			iVar6 = Function_137(*uParam0);
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

float Function_168(bool bParam0, bool bParam1) //Position: 0x94BA / 38074
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

bool Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x95AB / 38315
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
	if (Function_172(bParam0))
	{
		return 1;
	}
	if (Function_171(bParam0))
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
	if (Function_170())
	{
		return 1;
	}
	return 0;
}

bool Function_170() //Position: 0x9661 / 38497
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_171(bool bParam0) //Position: 0x9678 / 38520
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_172(bool bParam0) //Position: 0x9683 / 38531
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9691 / 38545
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_174(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_174(int iParam0) //Position: 0x970C / 38668
{
	char* cVar0[16];
	
	if (!Function_175())
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

bool Function_175() //Position: 0x974B / 38731
{
	if (Function_30(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_176(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9766 / 38758
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
			Var0 = { StackVal, StackVal, StackVal, Function_174(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_177(int iParam0, bool bParam1) //Position: 0x97EB / 38891
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_37(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_37(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_219(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_178(bool bParam0) //Position: 0x98A3 / 39075
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	int iVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_29(bParam0))
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
			Function_217(&uVar7, 0x8000000);
			Function_217(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_183(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_213(bParam0);
			iVar16 = Function_219(111, 111, 5);
			Function_182(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_181(uVar15, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_179(iVar16);
			uVar17 = Global_29008[bParam0];
			Function_217(&uVar17, 0x1000000);
			Function_217(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_179(int iParam0) //Position: 0x9A56 / 39510
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_219(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(1))
	{
		iVar0 = 1;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(2))
	{
		iVar0 = 2;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(3))
	{
		iVar0 = 3;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(4))
	{
		iVar0 = 4;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(5))
	{
		iVar0 = 5;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(8))
	{
		iVar0 = 8;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(9))
	{
		iVar0 = 9;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(11))
	{
		iVar0 = 11;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(12))
	{
		iVar0 = 12;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(13))
	{
		iVar0 = 13;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(14))
	{
		iVar0 = 14;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(15))
	{
		iVar0 = 15;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(16))
	{
		iVar0 = 16;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(17))
	{
		iVar0 = 17;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(18))
	{
		iVar0 = 18;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(19))
	{
		iVar0 = 19;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(21))
	{
		iVar0 = 21;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(22))
	{
		iVar0 = 22;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(23))
	{
		iVar0 = 23;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_180(24))
	{
		iVar0 = 24;
		iVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = iVar1;
	return;
}

bool Function_180(int iParam0) //Position: 0x9D6A / 40298
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_114(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9D8E / 40334
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

void Function_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA04E / 41038
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

var Function_183(bool bParam0, int iParam1, float fParam2) //Position: 0xA28D / 41613
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

void Function_184(int iParam0) //Position: 0xA2DA / 41690
{
	Function_190(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_190(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_190(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_185(iParam0 + 192);
	return;
}

bool Function_185(bool bParam0) //Position: 0xA346 / 41798
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_189();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_188(bParam0[iVar03], 8);
		}
		else if (Function_187())
		{
			iVar1 = 1;
			Function_188(bParam0[iVar03], 8);
		}
		Function_188(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_5(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_5(bParam0[03], 8) || iVar1));
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
				Function_188(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_188(bParam0[iVar03], 2);
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
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_188(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_188(bParam0[iVar03], 2);
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
	Function_186();
	return 1;
}

void Function_186() //Position: 0xA6C1 / 42689
{
	if (!Function_53(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_187() //Position: 0xA701 / 42753
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

void Function_188(var uParam0, int iParam1) //Position: 0xA72C / 42796
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_189() //Position: 0xA73D / 42813
{
	if (!Function_53(128))
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

var Function_190(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA77F / 42879
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_191(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_188(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_191(var uParam0, int iParam1, int iParam2) //Position: 0xA7B7 / 42935
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_188(uParam0[iVar03], 4);
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

bool Function_192() //Position: 0xA87B / 43131
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

void Function_193(bool bParam0, var uParam1, struct<365> Param2) //Position: 0xA960 / 43360
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
	iVar2 = Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), bParam0, 4294967295, 0);
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
				if (!Function_30(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
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

var Function_194(struct<365> Param0) //Position: 0xAACE / 43726
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_195(int iParam0) //Position: 0xAAE2 / 43746
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_30((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_61((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_43(iParam0 + 4[iVar15] + 16, 1);
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
		Function_43(iParam0 + 356, 1024);
	}
	return;
}

void Function_196(int iParam0, int iParam1) //Position: 0xAB99 / 43929
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_197(&bVar0, 20.0f, 0))
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
			if (!Function_30(iParam0->f_356, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(bVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_168(bVar3, Global_34573) > 3.5f)
					{
						Function_217(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_30(iParam0->f_356, 2))
		{
			fVar6 = Function_168(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_30((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 4);
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
		else if (Function_30(iParam0->f_356, 512))
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
			fVar7 = Function_168(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_30((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_30((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_30((iParam0 + 4[iVar25])->f_16, 2))
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

bool Function_197(var uParam0, float fParam1, bool bParam2) //Position: 0xAFD8 / 45016
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

void Function_198(int iParam0, int iParam1, float fParam2) //Position: 0xB055 / 45141
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_53(0x8000000))
	{
		return;
	}
	cVar0 = Function_56(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_30(iParam0->f_356, 0x2000000))
				{
					Function_43(iParam0 + 356, 4194304);
					Function_43(iParam0 + 356, 8388608);
					Function_43(iParam0 + 356, 0x1000000);
					Function_43(iParam0 + 356, 1048576);
					Function_43(iParam0 + 356, 2097152);
					Function_217(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_43(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_30(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(iParam0 + 356, 1048576);
			Function_217(iParam0 + 356, 2097152);
			Function_217(iParam0 + 356, 4194304);
			Function_217(iParam0 + 356, 8388608);
			Function_217(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_30(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(iParam0 + 356, 1048576);
			Function_217(iParam0 + 356, 4194304);
			Function_217(iParam0 + 356, 8388608);
			Function_217(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_199(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_30(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(iParam0 + 356, 4194304);
		Function_217(iParam0 + 356, 8388608);
		Function_217(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_30(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(iParam0 + 356, 8388608);
		Function_217(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_30(iParam0->f_356, 0x1000000))
	{
		Function_217(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_199(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xB331 / 45873
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_37(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_200(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_200(bool bParam0, var uParam1, bool bParam2) //Position: 0xB364 / 45924
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), Global_30616, 15, 1);
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
					if (Function_201(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_61(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_201(bool bParam0) //Position: 0xB42E / 46126
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_38(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_202() //Position: 0xB479 / 46201
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = Function_213(Global_29006);
	fVar1 = Function_211(Global_29006);
	fVar2 = Function_212(iVar0);
	iVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	iVar3 = Function_203(0.33f, Function_162(iVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(iVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_204(1);
	return;
}

int Function_203(int iParam0, int iParam1) //Position: 0xB4C7 / 46279
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_204(int iParam0) //Position: 0xB4DA / 46298
{
	if (Function_30(iParam0, 1) && !Function_30(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_205(int iParam0, bool bParam1) //Position: 0xB507 / 46343
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
			if (!Function_30(iParam0->f_356, 0x4000000))
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
				if (!Function_30(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_206(*iParam0, *iParam0, 0);
	return;
}

void Function_206(bool bParam0, bool bParam1, int iParam2) //Position: 0xB5EB / 46571
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
			Function_207(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_207(bool bParam0, bool bParam1, int iParam2) //Position: 0xB63A / 46650
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

bool Function_208(int iParam0) //Position: 0xB684 / 46724
{
	int iVar0;
	
	iVar0 = Function_114(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_28(iVar0) || Function_180(iParam0));
}

void Function_209(int iParam0) //Position: 0xB6C3 / 46787
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_30(iParam0->f_356, 512))
	{
		fVar0 = Function_211(Global_29006);
		iVar1 = Function_213(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_212(iVar1);
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

void Function_210(int iParam0) //Position: 0xB784 / 46980
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

var Function_211(bool bParam0) //Position: 0xB847 / 47175
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

var Function_212(int iParam0) //Position: 0xB8A1 / 47265
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

int Function_213(bool bParam0) //Position: 0xB9E4 / 47588
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

void Function_214() //Position: 0xBB6A / 47978
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

bool Function_215(bool bParam0, int iParam1) //Position: 0xBBC8 / 48072
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

void Function_216(bool bParam0, float fParam1) //Position: 0xBCE9 / 48361
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fParam1);
	return;
}

void Function_217(var uParam0, bool bParam1) //Position: 0xBD0C / 48396
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_218(int iParam0, bool bParam1) //Position: 0xBD1B / 48411
{
	int iVar0;
	
	iVar0 = Function_154(iParam0);
	if (!Function_48(iVar0))
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

int Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBD58 / 48472
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_223(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_220(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_220(bParam0, bParam1, bParam2, 4294967295);
}

int Function_220(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBDB6 / 48566
{
	var uVar0;
	
	if (!Function_222(bParam2))
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
	uVar0 = Function_223(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_221(uVar0);
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

int Function_221(int iParam0) //Position: 0xBF0B / 48907
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

bool Function_222(int iParam0) //Position: 0xBF49 / 48969
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_223(int iParam0, int iParam1, int iParam2) //Position: 0xBF5E / 48990
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_224(int iParam0) //Position: 0xBF7E / 49022
{
	bool bVar0;
	bool bVar1;
	
	iParam0 = iParam0;
	if (!iLocal_1002)
	{
		if (!Function_470())
		{
			iLocal_1002 = Function_215(0, 4294967295);
		}
		else
		{
			iLocal_1002 = 1;
		}
	}
	iLocal_989 = 0;
	while (iLocal_989 <= 3)
	{
		if (!IS_OBJECT_VALID(bLocal_990[iLocal_989]))
		{
			Function_405((*&Local_108 + 504)[iLocal_989]);
			bVar0 = LOCATE_PHYSINST_OF_TYPE(Function_405((*&Local_108 + 504)[iLocal_989]), 1.0f, "c_gen_flag01x", 1);
			if (IS_PHYSINST_VALID(bVar0))
			{
				bLocal_990[iLocal_989] = GET_OBJECT_FROM_PHYSINST(bVar0);
				if (IS_OBJECT_VALID(bLocal_990[iLocal_989]))
				{
					REFERENCE_OBJECT(bLocal_990[iLocal_989]);
					SET_DRAW_OBJECT(bLocal_990[iLocal_989], 0);
				}
			}
		}
		iLocal_989++;
	}
	if (IS_ACTOR_IN_VOLUME(Function_108(), Local_243.f_1024) && Function_51(4))
	{
		iLocal_1048 = 1;
		iLocal_1049 = 0;
	}
	else if ((StackVal && (StackVal || (StackVal || iLocal_1048 != 6 != 10) != 9)) && !iLocal_1049)
	{
		Function_176("nGY_Return", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_1049 = 1;
	}
	if ((StackVal || (StackVal || IS_ACTOR_IN_VOLUME(Function_108(), Local_243.f_1008) != 11) != 12) && iLocal_1048)
	{
		iLocal_6 = 0;
		if (Function_242(&Local_1004))
		{
			if (iLocal_1048)
			{
				Function_25(&Local_1004);
			}
		}
	}
	else if (iLocal_1048)
	{
		iLocal_1048 = 0;
		iLocal_1049 = 0;
		iLocal_6 = 1000;
		Function_25(&Local_1004);
		Local_1004.f_4 = 1;
	}
	if (iLocal_1045)
	{
		if (iLocal_1043 == 4294967295)
		{
			iLocal_1043 = Function_49(0);
		}
		else
		{
			if (!IS_VOLUME_VALID(bLocal_1044))
			{
				bLocal_1044 = FIND_VOLUME_IN_LAYOUT(Global_30616, "triggerSurvivorSystem");
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_1044))
			{
				if (Function_241(iLocal_1043) < 0 && !Function_470())
				{
					Function_178(Global_29006);
					Function_240();
					iLocal_1045 = 0;
				}
			}
		}
	}
	if (Global_3365)
	{
		if (!Function_67(Global_76846, 65536))
		{
			if ((Function_51(4) && !Function_51(3)) && Function_241(Global_30734) < 0)
			{
				if (iLocal_1001)
				{
					if (Function_229())
					{
						Function_62(Global_34573, 65536, 1, 0);
						iLocal_6 = 1000;
						STOP_PED_SPEAKING((*&Local_11 + 4)[05], 0);
						STOP_PED_SPEAKING((*&Local_11 + 4)[15], 0);
						STOP_PED_SPEAKING((*&Local_11 + 4)[25], 0);
						bLocal_1047 = true;
					}
					else
					{
						iLocal_6 = 0;
					}
				}
				else if (iLocal_1003)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_243.f_1032))
					{
						Local_994 = 1000;
						if ((*&Local_11 + 4)[05] != Local_11.f_168)
						{
							STOP_PED_SPEAKING((*&Local_11 + 4)[05], 1);
						}
						if ((*&Local_11 + 4)[15] != Local_11.f_168)
						{
							STOP_PED_SPEAKING((*&Local_11 + 4)[15], 1);
						}
						if ((*&Local_11 + 4)[25] != Local_11.f_168)
						{
							STOP_PED_SPEAKING((*&Local_11 + 4)[25], 1);
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
							DECOR_SET_BOOL(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe", true);
						}
						iLocal_1001 = 1;
					}
					iLocal_6 = 0;
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, Local_243.f_1036))
				{
					Local_994.f_16 = Function_225(GET_AMBIENT_LAYOUT(), 0, 1, 1, 0);
					if (IS_OBJECT_VALID(Local_994.f_16))
					{
						STREAMING_SET_POI_LIMIT(2);
						SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_994.f_16, 1);
					}
					else
					{
						LOG_ERROR("Z_FirstTime_Survivor - Failed to create Z_FirstTime_Survivor_cutscene (paused)");
					}
					iLocal_1003 = 1;
					iLocal_6 = 0;
				}
			}
		}
		else if (bLocal_1047)
		{
			if (!iLocal_1046)
			{
				iLocal_1046 = 1;
				DECOR_SET_BOOL(Global_34573, "Special_BLK_Ready", true);
			}
		}
	}
	if (Global_13172[Function_49(0)11].f_12 != 1 && !Function_51(3))
	{
		if (Function_30(Local_11.f_356, 1))
		{
			if (Function_67(Global_76846, 65536))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
					DECOR_SET_BOOL(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe", true);
				}
			}
		}
		else if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))) && !DECOR_CHECK_EXIST(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe"))
		{
			bVar1 = Function_183(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), 312, 0.0f);
			if (IS_BLIP_VALID(bVar1))
			{
				SET_BLIP_COLOR(bVar1, 0.63f, 0.85f, 0.0f, 1.0f);
				SET_BLIP_BLINK(bVar1, 1, 0, 5f);
				SET_BLIP_NAME(bVar1, &Global_63541[255] + 4);
			}
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CORE_SURV_TALK_NOW"))
	{
		DECOR_REMOVE(Global_34573, "CORE_SURV_TALK_NOW");
		SAY_SINGLE_LINE_STRING(Local_11.f_168, "CRY_FOR_HELP_P", true, true, 2, 0, true, false);
	}
	return;
}

var Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xC5E4 / 50660
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Z_FirstTime_Survivor", 2, 1);
	}
	Function_226(&bVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_226(int iParam0) //Position: 0xC664 / 50788
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_228(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_227(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 4.0f, 0, 0);
	return;
}

void Function_227(int iParam0) //Position: 0xC699 / 50841
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.30709f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.5209f, 86.07175f, 1277.423f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.032678f, -2.559936f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_228(var uParam0) //Position: 0xC703 / 50947
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 29.91978f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 691.4238f, 86.07019f, 1276.816f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.002031f, -2.687907f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	return;
}

bool Function_229() //Position: 0xC767 / 51047
{
	var uVar0;
	
	switch (Local_994)
	{
		case 0x000003E8:
			Function_238(0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_994.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(Local_994.f_16))
			{
				Function_237(Local_994.f_16, 0);
				Function_173("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(Global_34573, "CORE_SURV_TALK_NOW", true);
			}
			else
			{
				Local_994.f_16 = Function_225(GET_AMBIENT_LAYOUT(), 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(Local_994.f_16))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_994.f_16, 1);
			}
			else
			{
				LOG_ERROR("Z_FirstTime_Survivor - Failed to create Z_FirstTime_Survivor_cutscene");
				Local_994 = 1000;
				return 1;
			}
			Local_994 = 1001;
			break;
		
		case 0x000003E9:
			Function_236(Global_34573, 1, 1);
			TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
			Local_994 = 1002;
			break;
		
		case 0x000003EA:
			Function_235(1.0f);
			Local_994 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_233(&Local_994 + 4);
				Local_994 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(Local_994.f_16))
			{
				Function_233(&Local_994 + 4);
				Local_994 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_236(Global_34573, 0, 1);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				Function_230(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_994.f_16))
				{
					DESTROY_OBJECT(Local_994.f_16);
				}
				Local_994 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_994 = 1104;
			}
			break;
	}
	return 0;
}

void Function_230(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xC966 / 51558
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
		bVar0 = Function_108();
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
			if (Function_73())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
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
		Function_134();
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
	Function_231(iParam9);
}

void Function_231(int iParam0) //Position: 0xCA56 / 51798
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_232();
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

void Function_232() //Position: 0xCB05 / 51973
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_233(int iParam0) //Position: 0xCB77 / 52087
{
	Function_234(iParam0, 0.0f);
	return;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xCB83 / 52099
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_217(iParam0, 1);
	Function_43(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_235(float fParam0) //Position: 0xCBA4 / 52132
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

void Function_236(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCBC1 / 52161
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
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
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
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

void Function_237(bool bParam0, bool bParam1) //Position: 0xCC5B / 52315
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_238(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xCC70 / 52336
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
	HUD_ENABLE(0);
	Function_134();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_108();
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
			if (Function_73())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_165(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_37(), 2, Function_165(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if (iParam10 && !Function_175())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_239()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_239()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_53(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x4000000);
	}
	if (Function_53(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x8000000);
	}
}

var Function_239() //Position: 0xCF1E / 53022
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

void Function_240() //Position: 0xCF9D / 53149
{
	if (Global_29006 == Global_30717[0])
	{
		DECOR_SET_BOOL(Global_34573, "QM_TriggerAttack", true);
	}
	return;
}

int Function_241(int iParam0) //Position: 0xCFCA / 53194
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_242(int iParam0) //Position: 0xCFE4 / 53220
{
	int iVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_403(iParam0);
			iParam0->f_4 = 1;
			break;
		
		case 0x00000001:
			if (Function_402())
			{
				if (!Function_50(iParam0))
				{
					return 1;
				}
				if (Function_44(iParam0->f_152) && Function_241(Function_49(iParam0->f_152)) < 0)
				{
					if (!iParam0->f_144)
					{
						iParam0->f_144 = 1;
						Function_173("GY_STILL_CLENSED", 0x41200000, 1, 0, 2, 1, 0);
					}
					return 1;
				}
				Function_398(iParam0);
			}
			break;
		
		case 0x00000002:
			Function_397();
			if (Function_396())
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_709.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_138(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				CANCEL_DEADEYE();
				Function_395(iParam0);
				Function_238(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				bLocal_662 = Function_391(bLocal_707, 0, 1, 0, 0);
				iLocal_697 = 1;
				fLocal_698 = GET_CURRENT_GAME_TIME();
				SET_ACTOR_PROOF(Global_34573, 16);
				iLocal_684 = 1;
				Function_31(1.0f);
				Function_390(&iLocal_692, -10.0f);
				Function_389(&iLocal_702);
				ENABLE_WEATHER_SPHERE(Function_27(iParam0->f_152), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_383(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_377(iParam0);
				iParam0->f_4 = 4;
			}
			break;
		
		case 0x00000003:
			Function_397();
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_709, "LootCoffin")))
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_709.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_138(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_684 = 1;
				Function_31(1.0f);
				Function_390(&iLocal_692, -10.0f);
				Function_389(&iLocal_702);
				ENABLE_WEATHER_SPHERE(Function_27(iParam0->f_152), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_383(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_377(iParam0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000004:
			if (!IS_OBJECT_VALID(bLocal_662) || Function_375())
			{
				if (bLocal_696)
				{
					AI_IGNORE_ACTOR(Global_34573);
					iParam0->f_4 = 5;
				}
				else
				{
					Function_230(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
					if (IS_OBJECT_VALID(bLocal_662))
					{
						DESTROY_OBJECT(bLocal_662);
					}
					Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_697 = 1;
					fLocal_698 = GET_CURRENT_GAME_TIME();
					SET_ACTOR_PROOF(Global_34573, 16);
					iParam0->f_4 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_230(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				if (IS_OBJECT_VALID(bLocal_662))
				{
					DESTROY_OBJECT(bLocal_662);
				}
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, 549.994f, 94.248f, 1189.528f, 107.628f, 1, 1, 1);
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_235(2.5f);
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000006:
			Function_397();
			Function_373(iParam0);
			if (Function_372(&iLocal_692, 0.0f))
			{
				Function_371();
				if (iParam0->f_152 == 4)
				{
					Function_234(&iLocal_692, TO_FLOAT(RAND_INT_RANGE(4294967276, 4294967286)));
				}
				else
				{
					Function_234(&iLocal_692, TO_FLOAT(RAND_INT_RANGE(4294967251, 4294967271)));
				}
			}
			return Function_345(iParam0);
			break;
		
		case 0x00000007:
			if (Function_343(&iLocal_648, 0.0f))
			{
				AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_DARK", 0, 4294967295, 4294967295);
				AI_IGNORE_ACTOR(Global_34573);
				Function_390(&uLocal_689, -10.0f);
				CANCEL_DEADEYE();
				Function_340(iParam0);
				Function_238(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				Function_317(iParam0);
				Function_234(&iLocal_648, 0.0f);
				iParam0->f_4 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_343(&iLocal_648, 5.0f))
			{
				Function_308(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_662))
			{
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_230(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				iParam0->f_4 = 9;
				Function_307(iParam0->f_152);
				Function_306(StackVal, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000009:
			Function_373(iParam0);
			Function_397();
			if (StackVal && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(!IS_ACTOR_ALIVE(bLocal_685)) != 0)
			{
				Function_42();
				if (!Function_305())
				{
					iParam0->f_4 = 10;
				}
				else
				{
					Function_234(&iLocal_648, 0.0f);
					Function_304(iParam0);
					iParam0->f_4 = 11;
				}
			}
			break;
		
		case 0x0000000A:
			Function_300(iParam0);
			Function_373(iParam0);
			Function_397();
			Function_299(iParam0);
			if (Function_305())
			{
				Function_304(iParam0);
				Function_234(&iLocal_648, 2.6f);
				iParam0->f_4 = 11;
			}
			else if (iLocal_681)
			{
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_681 = 0;
			}
			break;
		
		case 0x0000000B:
			if (Function_372(&iLocal_648, 2.5f))
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				bLocal_683 = true;
				CANCEL_DEADEYE();
				Function_238(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				UI_PUSH("CutsceneWithMessages");
				Function_278(iParam0);
				if (IS_OBJECT_VALID(bLocal_662))
				{
					Function_233(&iLocal_648);
					iParam0->f_4 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_343(&iLocal_648, 2.5f))
			{
				Function_277(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_662))
			{
				Function_230(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				if (iParam0->f_152 == 0)
				{
					if (Function_241(Global_30734) == 0)
					{
						Function_176("GY_RETURN_BLK", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[355].f_140);
						iVar1 = 0;
						while (iVar1 <= iVar0)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[355].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[355].f_140, iVar1), 4, 0);
							iVar1++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, 0);
						Function_276(Global_63541[355].f_140, 0);
					}
				}
				Function_243(iParam0);
				if (Global_3421)
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2899.875f, 19.075f, 2710.246f, 24.269f, 1, 1, 1);
				}
				iParam0->f_4 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_25(iParam0);
			return 1;
			break;
	}
	return 0;
}

void Function_243(int iParam0) //Position: 0xD6C7 / 54983
{
	int iVar0;
	
	if (Function_275(&iLocal_702))
	{
		bLocal_705 = Function_273(&iLocal_702);
		iVar0 = Function_272(iParam0->f_152);
		if (Function_78(iVar0) < 0.0f)
		{
			if (bLocal_705 > Function_78(iVar0))
			{
				Function_271(iVar0, bLocal_705, 0);
			}
		}
		else
		{
			Function_271(iVar0, bLocal_705, 0);
		}
	}
	if (Function_241(Function_49(iParam0->f_152)) == 0)
	{
		Function_81(656, 1, 0, 0);
	}
	Function_244(Function_49(iParam0->f_152), 1, 1, 0);
	return;
}

void Function_244(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD73A / 55098
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_46(iParam0))
	{
		Function_269();
		return;
	}
	iVar0 = Function_268(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_267())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_266(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_265(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_174(Global_6269) };
		}
		if (Function_267())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_261();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_267())
	{
		Function_260();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_258("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_256(iParam0);
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
						switch (Function_266(iParam0))
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
			Function_247(1);
			Function_246(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_245(iParam0, &Var14);
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

void Function_245(int iParam0, int iParam1) //Position: 0xD98E / 55694
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_246(var uParam0, int iParam1) //Position: 0xD9C8 / 55752
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_73())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_247(bool bParam0) //Position: 0xDA0A / 55818
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_248();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_139();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_43(&Global_63095, 1);
		Function_43(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_248() //Position: 0xDA5B / 55899
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_175())
	{
		Function_253(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_253(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_249(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_249(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_166(StackVal, StackVal, vVar0))
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

vector3 Function_249(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xDB16 / 56086
{
	int iVar0;
	
	iVar0 = Function_251(uParam2, uParam3);
	if (Function_250(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_217(&Global_63095, 1);
			Function_43(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_217(&Global_63095, 2);
			Function_43(&Global_63095, 1);
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
		Function_217(&Global_63095, 2);
		Function_43(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_36();
	return StackVal, StackVal, Function_36();
}

bool Function_250(int iParam0) //Position: 0xDBFD / 56317
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_251(bool bParam0, bool bParam1) //Position: 0xDC13 / 56339
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
				fVar2 = Function_252(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_252(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_250(bVar0) && !bParam1)
	{
		bVar0 = Function_251(bParam0, 1);
	}
	return bVar0;
}

float Function_252(vector3 vParam0, vector3 vParam3) //Position: 0xDCDA / 56538
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_253(var uParam0, int iParam1) //Position: 0xDCF7 / 56567
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_255(Global_34573, &vVar4);
	if (!Function_254(Global_30640[0]))
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
	if (!Function_254(Global_30640[2]))
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
	if (!Function_254(Global_30640[1]))
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
	if (!Function_254(Global_30658[1]))
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
	if (!Function_254(Global_30658[3]))
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
	if (!Function_254(Global_30658[2]))
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
	if (!Function_254(Global_30658[4]))
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
	if (!Function_254(Global_30668[0]))
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
	if (!Function_254(Global_30668[1]))
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
	if (!Function_254(Global_30668[2]))
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
	if (!Function_254(Global_30679[0]))
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
	if (!Function_254(Global_30685[0]))
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
	if (!Function_254(Global_30685[1]))
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
	if (!Function_254(Global_30685[2]))
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
	if (!Function_254(Global_30693[0]))
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
	if (!Function_254(Global_30693[1]))
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
	if (!Function_254(Global_30693[2]))
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
	if (!Function_254(Global_30707[2]))
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
	if (!Function_254(Global_30707[3]))
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
	if (!Function_254(Global_30707[0]))
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
	if (!Function_254(Global_30717[0]))
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
	if (!Function_254(Global_30723[2]))
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
	if (!Function_254(Global_30723[1]))
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
	if (!Function_254(Global_30723[0]))
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
	if (!Function_254(Global_30679[1]))
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
	if (!Function_254(Global_30707[1]))
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
	Function_217(&Global_63095, 2);
	Function_43(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_166(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_254(int iParam0) //Position: 0xE51C / 58652
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_30(uVar0, 0x1000000) || Function_30(uVar0, 0x2000000)) || Function_30(uVar0, 0x4000000)) || !Function_30(uVar0, 0x10000000));
}

void Function_255(bool bParam0, int iParam1) //Position: 0xE557 / 58711
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_256(int iParam0) //Position: 0xE564 / 58724
{
	int iVar0;
	int iVar1;
	
	if (!Function_48(iParam0))
	{
		return;
	}
	switch (Function_268(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_266(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_81(12, 1, 0, 0);
				Function_79(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_81(13, 1, 0, 0);
				Function_79(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_81(14, 1, 0, 0);
				Function_79(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_81(15, 1, 0, 0);
				Function_79(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_81(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_266(iParam0))
			{
				case 0x00000000:
					if (Function_241(iParam0) == 1)
					{
						iVar0 = Function_257(iParam0);
						if (Function_9(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_79(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_79(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_79(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_79(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_79(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_79(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_79(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_79(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_79(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_79(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_79(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_79(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_79(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_79(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_79(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_79(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_79(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_79(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_79(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_79(4, 19);
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
			if (Function_257(iParam0) == 0)
			{
				if (Function_241(iParam0) == 1)
				{
					Function_81(458, 1, 0, 0);
					iVar0 = Function_266(iParam0);
					if (Function_9(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_79(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_79(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_79(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_79(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_79(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_79(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_79(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_79(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_241(iParam0) == 1)
			{
				Function_81(400, 1, 0, 0);
			}
			switch (Function_266(iParam0))
			{
				case 0x00000001:
					Function_81(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_79(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_79(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_79(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_81(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_79(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_79(6, 9);
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

int Function_257(int iParam0) //Position: 0xEA40 / 59968
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

void Function_258(char* cParam0, int iParam1) //Position: 0xEA5F / 59999
{
	struct<4> Var0;
	
	if (!Function_46(iParam1))
	{
		return;
	}
	switch (Function_268(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_259(Function_266(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_268(iParam1), Function_266(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_268(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_268(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_268(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_268(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_268(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_259(int iParam0) //Position: 0xEB83 / 60291
{
	char* cVar0[16];
	
	if (!Function_175())
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

void Function_260() //Position: 0xEBBD / 60349
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
	PLAYSTAT_INT("HC_MONEY", Function_148(0));
	PLAYSTAT_INT("HC_FAME", Function_148(3));
	PLAYSTAT_INT("HC_HONOR", Function_148(1));
	return;
}

void Function_261() //Position: 0xED15 / 60693
{
	int iVar0;
	int iVar1;
	
	if (!Function_155(Global_6269))
	{
		return;
	}
	iVar0 = Function_148(24);
	iVar1 = Function_154(Global_6269);
	if (!Function_155(iVar0) && Function_264(iVar1) < 0)
	{
		Function_147(24, Global_6269, 0);
		Function_262(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_264(Function_154(iVar0)))
	{
		Function_147(24, Global_6269, 0);
		Function_262(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_262(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xED95 / 60821
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
		Function_263(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_263(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xF0E7 / 61671
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_264(int iParam0) //Position: 0xF16A / 61802
{
	if (!Function_46(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_265(char* cParam0) //Position: 0xF184 / 61828
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

int Function_266(int iParam0) //Position: 0xF3DA / 62426
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_267() //Position: 0xF3FA / 62458
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_268(int iParam0) //Position: 0xF425 / 62501
{
	if (!Function_48(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_269() //Position: 0xF440 / 62528
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
			Function_270(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_270(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xF687 / 63111
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_271(int iParam0, bool bParam1, bool bParam2) //Position: 0xF6B0 / 63152
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
		Function_91(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_90(iParam0);
	if (bParam2)
	{
		Function_82(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_272(int iParam0) //Position: 0xF91C / 63772
{
	switch (iParam0)
	{
		case 0x00000000:
			return 662;
			break;
		
		case 0x00000001:
			return 663;
			break;
		
		case 0x00000002:
			return 665;
			break;
		
		case 0x00000003:
			return 664;
			break;
		
		case 0x00000004:
			return 666;
			break;
	}
	LOG_ERROR("should not be here");
	return 662;
}

float Function_273(int iParam0) //Position: 0xF985 / 63877
{
	if (Function_275(iParam0))
	{
		if (Function_274(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_274(int iParam0) //Position: 0xFA4D / 64077
{
	return Function_30(*iParam0, 2);
}

bool Function_275(int iParam0) //Position: 0xFA5A / 64090
{
	return Function_30(*iParam0, 1);
}

void Function_276(var uParam0, int iParam1) //Position: 0xFA67 / 64103
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

void Function_277(int iParam0) //Position: 0xFA8C / 64140
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			PRINT_BIG("BLK_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("COOTS_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000004:
			PRINT_BIG("SEP_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("TUM_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("ODD_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_278(int iParam0) //Position: 0xFB7E / 64382
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_662 = Function_295(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_662 = Function_291(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_662 = Function_287(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_662 = Function_283(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_662 = Function_279(bLocal_707, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFBFB / 64507
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddgraveyardComplete", 2, 1);
	}
	Function_280(&bVar0);
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

void Function_280(int iParam0) //Position: 0xFC7B / 64635
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_282(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_281(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_281(int iParam0) //Position: 0xFCD0 / 64720
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2897.067f, 20.62931f, 2714.683f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039979f, 0.583588f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_282(int iParam0) //Position: 0xFD3A / 64826
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2898.525f, 21.02192f, 2712.473f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.282773f, 0.575102f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFDA4 / 64932
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumgraveyardComplete", 2, 1);
	}
	Function_284(&bVar0);
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

void Function_284(int iParam0) //Position: 0xFE24 / 65060
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_286(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_285(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_285(int iParam0) //Position: 0xFE79 / 65145
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3918.087f, 31.29665f, 2938.344f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.228078f, -0.797786f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_286(int iParam0) //Position: 0xFEE3 / 65251
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3919.805f, 30.81222f, 2939.652f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.222407f, -0.792953f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_287(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFF4D / 65357
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "sepgraveyardComplete", 2, 1);
	}
	Function_288(&bVar0);
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

void Function_288(int iParam0) //Position: 0xFFCD / 65485
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_290(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_289(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_289(int iParam0) //Position: 0x10023 / 65571
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.109f, 16.60661f, 4315.52f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.088543f, -0.979924f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_290(int iParam0) //Position: 0x1008D / 65677
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.484f, 14.59394f, 4315.136f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.120229f, -0.992252f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x100F7 / 65783
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsgraveyardComplete", 2, 1);
	}
	Function_292(&bVar0);
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

void Function_292(int iParam0) //Position: 0x10179 / 65913
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_294(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_293(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_293(int iParam0) //Position: 0x101CE / 65998
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1804.425f, 23.51718f, 2823.539f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.312112f, -2.467991f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_294(int iParam0) //Position: 0x10238 / 66104
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1807.816f, 23.14842f, 2825.066f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.329485f, -2.366173f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_295(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x102A2 / 66210
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkgraveyardComplete", 2, 1);
	}
	Function_296(&bVar0);
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

void Function_296(int iParam0) //Position: 0x10322 / 66338
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_298(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_297(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_297(int iParam0) //Position: 0x10377 / 66423
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 592.2622f, 91.29121f, 1199.506f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.334294f, 1.381979f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_298(int iParam0) //Position: 0x103E1 / 66529
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 590.5406f, 91.34983f, 1205.931f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.310153f, 1.227103f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_299(int iParam0) //Position: 0x1044B / 66635
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		bVar2 = GET_CURRENT_GRINGO(Global_34573);
		if (IS_GRINGO_VALID(bVar2))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar2)), "dlc_player_burn_coffin"))
			{
				if (!iLocal_730)
				{
					Function_390(&iLocal_648, 0.0f);
					iLocal_730 = 1;
				}
				else if (Function_372(&iLocal_648, 1.2f))
				{
					iLocal_730 = 0;
					Function_304(iParam0);
					Function_390(&iLocal_648, 2.6f);
					iParam0->f_4 = 11;
				}
			}
		}
	}
	return;
}

void Function_300(int iParam0) //Position: 0x104F0 / 66800
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_713[iVar04], "LootCoffin")))
			{
				Local_713[iVar04].f_4 = 1;
				Function_301();
				iLocal_700++;
				if (iLocal_700 <= 2 && !iLocal_699)
				{
					iLocal_699 = 1;
					iParam0->f_12++;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_301() //Position: 0x10563 / 66915
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	Function_302(Function_108(), &uVar0, &iVar7);
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		if (uVar0[iVar8] != 4294967295)
		{
			if (_GET_AMMO_AMOUNT(Function_108(), GET_AMMO_ENUM(uVar0[iVar8]), 1) > _GET_MAX_AMMO_AMOUNT(Function_108(), GET_AMMO_ENUM(uVar0[iVar8])))
			{
				_ADD_AMMO_OF_TYPE(Function_108(), GET_AMMO_ENUM(uVar0[iVar8]), 6.0f, 1, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_302(bool bParam0, var uParam1, int iParam2) //Position: 0x105CD / 67021
{
	*iParam2 = 0;
	if (Function_303(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 0;
		*iParam2++;
	}
	if (Function_303(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 8;
		*iParam2++;
	}
	if (Function_303(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 4;
		*iParam2++;
	}
	if (Function_303(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 12;
		*iParam2++;
	}
	if (Function_303(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 17;
		*iParam2++;
	}
	if (Function_303(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 19;
		*iParam2++;
	}
	return;
}

int Function_303(bool bParam0, int iParam1) //Position: 0x1067D / 67197
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_304(int iParam0) //Position: 0x1068E / 67214
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 1, 0);
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(8), 18.0f, 0, 1);
			break;
	}
	return;
}

bool Function_305() //Position: 0x106C3 / 67267
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_306(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x106EB / 67307
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_307(int iParam0) //Position: 0x107D5 / 67541
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_176("GY_Blackwater_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			Function_176("GY_coots_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			Function_176("GY_Oddfellows_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			Function_176("GY_Tumbleweed_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			Function_176("GY_Sepulcro_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_308(int iParam0) //Position: 0x108B7 / 67767
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_316();
			break;
		
		case 0x00000001:
			Function_315();
			break;
		
		case 0x00000004:
			Function_314();
			break;
		
		case 0x00000003:
			Function_313();
			break;
		
		case 0x00000002:
			Function_309();
			break;
	}
	return;
}

void Function_309() //Position: 0x10902 / 67842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Pturner1", "RCMBoss_Pturner1", 0, 3, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_310(int iParam0) //Position: 0x1094B / 67915
{
	Function_311(0, Global_34573, iParam0, 0);
	Function_311(1, bLocal_685, iParam0, 0);
	return;
}

void Function_311(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x10965 / 67941
{
	var uVar0;
	
	iParam3 = iParam3;
	if (Function_30(uParam2, Function_312(iParam0)))
	{
		uVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(uVar0, bParam1, 0);
	}
}

int Function_312(bool bParam0) //Position: 0x1098A / 67978
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_313() //Position: 0x10996 / 67990
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_JimySaint1", "RCMBoss_JimySaint1", 0, 3, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_314() //Position: 0x109E3 / 68067
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_DeSanta1", "RCMBoss_DeSanta1", 0, 3, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_315() //Position: 0x10A2C / 68140
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_MissHorlk1", "RCMBoss_MissHorlk1", 0, 3, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_316() //Position: 0x10A79 / 68217
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Mordecai1", "RCMBoss_Mordecai1", 0, 3, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_317(int iParam0) //Position: 0x10AC4 / 68292
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_662 = Function_336(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_662 = Function_332(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_662 = Function_326(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_662 = Function_322(bLocal_707, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_662 = Function_318(bLocal_707, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_318(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10B41 / 68417
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddBossFightGraveyard", 2, 1);
	}
	Function_319(&bVar0);
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

void Function_319(int iParam0) //Position: 0x10BC2 / 68546
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_321(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_320(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_320(int iParam0) //Position: 0x10C17 / 68631
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2903.974f, 19.79888f, 2710.857f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.150541f, 0.507457f, 0.004521f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_321(int iParam0) //Position: 0x10C85 / 68741
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66233f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2904.165f, 19.51034f, 2708.177f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.102399f, 1.165359f, 0.004493f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10CF3 / 68851
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumBossFightGraveyard", 2, 1);
	}
	Function_323(&bVar0);
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

void Function_323(int iParam0) //Position: 0x10D74 / 68980
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_325(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_324(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_324(int iParam0) //Position: 0x10DC9 / 69065
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31.86192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3911.766f, 31.83612f, 2921.979f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.078771f, 2.88158f, 0.004278f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_325(int iParam0) //Position: 0x10E37 / 69175
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.76166f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3913.444f, 31.26865f, 2924.223f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.117483f, -2.70611f, 0.004294f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_326(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10EA5 / 69285
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SepBossFightGraveyard", 4, 1);
	}
	Function_327(&bVar0);
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

void Function_327(int iParam0) //Position: 0x10F26 / 69414
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_331(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_330(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_329(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_328(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 4.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 0.001f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 2, 3, 2.5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 4);
	return;
}

void Function_328(int iParam0) //Position: 0x10FB1 / 69553
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.525523f, 1.490034f, 0.001164f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_329(int iParam0) //Position: 0x1101F / 69663
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.373518f, 1.402987f, 0.001081f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_330(int iParam0) //Position: 0x1108D / 69773
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.477f, 13.66733f, 4299.932f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.072472f, 1.915836f, 0.001009f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_331(int iParam0) //Position: 0x110FB / 69883
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.45625f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.713f, 13.89411f, 4300.767f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.043377f, 1.765097f, -0.000861f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11169 / 69993
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsBossFightGraveyard", 2, 1);
	}
	Function_333(&bVar0);
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

void Function_333(int iParam0) //Position: 0x111EC / 70124
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_335(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_334(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_334(int iParam0) //Position: 0x11241 / 70209
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.26746f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.659f, 25.13008f, 2844.199f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.133221f, -2.84744f, 0.000148f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_335(int iParam0) //Position: 0x112AF / 70319
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 23.50987f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.345f, 24.48004f, 2845.35f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039157f, -2.624838f, 0.000147f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_336(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1131D / 70429
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkBossFightGraveyard", 2, 1);
	}
	Function_337(&bVar0);
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

void Function_337(int iParam0) //Position: 0x1139E / 70558
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_339(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_338(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_338(int iParam0) //Position: 0x113F3 / 70643
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 530.6407f, 95.02366f, 1201.827f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.183638f, -1.091771f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_339(int iParam0) //Position: 0x1145D / 70749
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 531.275f, 94.5818f, 1201.307f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.145415f, -1.242507f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_340(int iParam0) //Position: 0x114C7 / 70855
{
	Function_342(bLocal_685, 2, 0);
	TASK_MELEE_ATTACK(bLocal_685, Global_34573, -1.0f);
	SET_ACTOR_INVULNERABILITY(bLocal_685, 0);
	Function_341(bLocal_685, 1, 1, 1, 1, 0, 1);
	ENABLE_MOVER(bLocal_685);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_685, 392, 0, 2, 0), "BLK_BOSS_NAME");
			break;
		
		case 0x00000001:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_685, 392, 0, 2, 0), "COOTS_BOSS_NAME");
			break;
		
		case 0x00000002:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_685, 392, 0, 2, 0), "ODD_BOSS_NAME");
			break;
		
		case 0x00000003:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_685, 392, 0, 2, 0), "TUM_BOSS_NAME");
			break;
		
		case 0x00000004:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_685, 392, 0, 2, 0), "SEP_BOSS_NAME");
			break;
	}
	return;
}

void Function_341(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x115CB / 71115
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_342(bool bParam0, int iParam1, bool bParam2) //Position: 0x11608 / 71176
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_37(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_36();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_37(), vVar3, Function_36());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_37(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_36();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_37(), vVar0, Function_36());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

bool Function_343(int iParam0, float fParam1) //Position: 0x117B8 / 71608
{
	if (Function_372(iParam0, fParam1))
	{
		Function_344(iParam0);
		return 1;
	}
	return 0;
}

void Function_344(int iParam0) //Position: 0x117D0 / 71632
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_345(int iParam0) //Position: 0x117E4 / 71652
{
	if (!iLocal_682)
	{
		Function_370(iParam0);
		iLocal_682 = 1;
	}
	if (*iParam0 <= iParam0->f_148 && !IS_PLAYER_DEADEYE(0))
	{
		Function_234(&iLocal_686, -1.0f);
		Function_234(&iLocal_648, -2.0f);
		iParam0->f_4 = 7;
	}
	Function_354(iParam0);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_24))
	{
		iParam0->f_20++;
		Function_350(iParam0->f_24);
		Function_348(iParam0, EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_28));
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_24);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_24);
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_28);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_28);
	}
	if (iParam0->f_44 >= iParam0->f_48)
	{
		Function_346(iParam0);
	}
	Function_300(iParam0);
	if (iLocal_681 && Function_305())
	{
		Function_176("GY_objective_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_681 = 0;
	}
	return 0;
}

void Function_346(int iParam0) //Position: 0x118AD / 71853
{
	Function_234(&iLocal_686, -5.0f);
	Function_347(iParam0);
	*iParam0++;
	if (iParam0->f_12 <= iParam0->f_16)
	{
		iParam0->f_12++;
	}
	return;
}

void Function_347(int iParam0) //Position: 0x118E0 / 71904
{
	iParam0->f_48 = (iParam0->f_48 + (50 * *iParam0));
	return;
}

void Function_348(var uParam0, bool bParam1) //Position: 0x118F5 / 71925
{
	int iVar0;
	
	iVar0 = 0;
	switch (StackVal)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 10;
			break;
		
		case 0x00000004:
			iVar0 = 10;
			break;
		
		case 0x00000005:
			iVar0 = 15;
			break;
		
		case 0x00000006:
			iVar0 = 20;
			break;
		
		case 0x00000007:
			iVar0 = 25;
			break;
		
		case 0x00000008:
			iVar0 = 30;
			break;
		
		case 0x00000009:
			iVar0 = 40;
			break;
		
		default:
			if (StackVal <= 15)
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 100;
			}
			break;
	}
	if (bParam1)
	{
		Function_349(uParam0, ((10 + iVar0) * CEIL(1.25f)));
	}
	else
	{
		Function_349(uParam0, (10 + iVar0));
	}
	return;
}

void Function_349(var uParam0, int iParam1) //Position: 0x119C4 / 72132
{
	uParam0->f_44 = (uParam0->f_44 + iParam1);
	return;
}

void Function_350(bool bParam0) //Position: 0x119D5 / 72149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_707);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 3);
	bVar4 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar4))
	{
	}
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar2 = GET_EVENT_FROM_OBJECT(bVar4);
		bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar3);
		if (IS_OBJECT_VALID(bVar3))
		{
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((Function_353(bVar1) || Function_352(bVar1)) || Function_351(bVar1))
				{
					iLocal_679 = (iLocal_679 - 1);
				}
			}
			else
			{
				LOG_ERROR("our actor is not valid?!");
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_351(bool bParam0) //Position: 0x11A95 / 72341
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

int Function_352(bool bParam0) //Position: 0x11AB5 / 72373
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1214 && iVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

int Function_353(bool bParam0) //Position: 0x11AD5 / 72405
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

void Function_354(int iParam0) //Position: 0x11AF5 / 72437
{
	int iVar1;
	
	if (Function_273(&iLocal_686) < 0.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(StackVal) <= iParam0->f_12)
		{
			Function_364(iParam0);
			if (iLocal_679 <= iParam0->f_152)
			{
				if (*iParam0 <= 4 && iLocal_679 > iParam0->f_152)
				{
					iVar1 = 2;
				}
				else if (*iParam0 <= 3 && iLocal_679 > iParam0->f_152)
				{
					iVar1 = 1;
				}
				else if (*iParam0 <= 2 && iLocal_679 > iParam0->f_152)
				{
					iVar1 = 0;
				}
				else
				{
					iVar1 = 4294967295;
				}
				if (iLocal_680 >= iVar1)
				{
					iLocal_680 = 0;
				}
				if (iVar1 != 4294967295)
				{
					switch (iLocal_680)
					{
						case 0x00000000:
							Function_360(iParam0, bLocal_658);
							Function_358(&bLocal_658, 1214, 1221);
							break;
						
						case 0x00000001:
							Function_360(iParam0, bLocal_659);
							Function_358(&bLocal_659, 1204, 1213);
							break;
						
						case 0x00000002:
							Function_360(iParam0, bLocal_660);
							Function_358(&bLocal_660, 1222, 1227);
							break;
					}
					iLocal_706++;
					iLocal_679++;
					iLocal_680++;
				}
			}
			Function_357(iParam0);
			Function_234(&iLocal_686, -0.5f);
			iLocal_706++;
			if (iLocal_706 >= 20)
			{
				Function_355(StackVal, StackVal, *(iParam0 + 32), 20.0f);
				iLocal_706 = 0;
			}
		}
	}
	return;
}

void Function_355(vector3 vParam0, float fParam3) //Position: 0x11C27 / 72743
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_405(bVar1);
		if ((GET_OBJECT_TYPE(bVar1) != 29 && VDIST(vParam0, Function_405(bVar1)) >= fParam3) && !Function_356(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

bool Function_356(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11C91 / 72849
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

var Function_357(int iParam0) //Position: 0x11CAB / 72875
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0)))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
			Function_349(iParam0, 40);
		}
		bVar0++;
	}
	return "";
}

void Function_358(bool bParam0, int iParam1, bool bParam2) //Position: 0x11CF6 / 72950
{
	STREAMING_EVICT_ACTOR(*bParam0, 4294967295);
	*bParam0 = Function_359(iParam1, bParam2);
	STREAMING_REQUEST_ACTOR(*bParam0, 1, false);
	return;
}

var Function_359(int iParam0, bool bParam1) //Position: 0x11D15 / 72981
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

void Function_360(int iParam0, bool bParam1) //Position: 0x11D3C / 73020
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Function_363();
	Function_405((*iParam0 + 76)[iVar1]);
	Function_362((*iParam0 + 76)[iVar1]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), bParam1, Function_405((*iParam0 + 76)[iVar1]), Function_362((*iParam0 + 76)[iVar1]));
	Function_361(bVar0, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	if (Function_351(bVar0))
	{
		TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 20.0f, 2);
	}
	else
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
	}
	return;
}

void Function_361(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11DD1 / 73169
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_342(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

vector3 Function_362(bool bParam0) //Position: 0x11E83 / 73347
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

var Function_363() //Position: 0x11EAA / 73386
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 14);
	if (iLocal_701 != iVar0)
	{
		iLocal_701 = iVar0;
	}
	else
	{
		iVar0++;
		if (iVar0 >= 14)
		{
			iVar0 = 0;
		}
		iLocal_701 = iVar0;
	}
	return iVar0;
}

void Function_364(int iParam0) //Position: 0x11EDF / 73439
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STREAMING_IS_ACTOR_LOADED(iLocal_651[iLocal_661], 4294967295))
	{
		iVar1 = Function_363();
		Function_405((*iParam0 + 76)[iVar1]);
		Function_362((*iParam0 + 76)[iVar1]);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), iLocal_651[iLocal_661], Function_405((*iParam0 + 76)[iVar1]), Function_362((*iParam0 + 76)[iVar1]));
		Function_366(bVar0, 1254, 4294967295, 4294967295, 2, 1, 1, 1);
		SQUAD_JOIN(StackVal, bVar0);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
		Function_365();
		iLocal_661++;
		if (iLocal_661 > 5)
		{
			iLocal_661 = 0;
		}
	}
	else
	{
		iLocal_661++;
		if (iLocal_661 > 5)
		{
			iLocal_661 = 0;
		}
	}
	return;
}

void Function_365() //Position: 0x11FA3 / 73635
{
	iLocal_695++;
	if (iLocal_695 >= (GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) - 1))
	{
		iLocal_695 = 0;
	}
	STREAMING_EVICT_ACTOR(iLocal_651[iLocal_661], 4294967295);
	iLocal_651[iLocal_661] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], iLocal_695);
	STREAMING_REQUEST_ACTOR(iLocal_651[iLocal_661], 1, false);
	return;
}

void Function_366(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x11FF3 / 73715
{
	var uVar0;
	
	if (Function_40(bParam0) && !Function_38(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_368(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_367(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_361(bParam0, iParam4, iParam5);
}

void Function_367(bool bParam0) //Position: 0x12256 / 74326
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

void Function_368(bool bParam0) //Position: 0x1228A / 74378
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_369(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_369(var uParam0, bool bParam1) //Position: 0x125EE / 75246
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_370(int iParam0) //Position: 0x12610 / 75280
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Function_405((*iParam0 + 52)[iVar0 + 1]);
		Function_362((*iParam0 + 52)[iVar0 + 1]);
		Local_713[iVar04] = CREATE_PROP_IN_LAYOUT(bLocal_707, Function_37(), "$/fragments/p_gen_coffin04x", Function_405((*iParam0 + 52)[iVar0 + 1]), Function_362((*iParam0 + 52)[iVar0 + 1]), 1);
		SNAP_OBJECT_TO_GROUND(Local_713[iVar04], 5.0f, true, 1092616192);
		Function_405(Local_713[iVar04]);
		CLEAR_AREA_OF_GRASS(Function_405(Local_713[iVar04]), 2.0f);
		Function_405(Local_713[iVar04]);
		CLEAR_AREA_OF_TREE_TYPE(Function_405(Local_713[iVar04]), 2.0f, "");
		Local_713[iVar04].f_4 = 0;
		SET_PROP_AI_OBSTACLE_ENABLED(Local_713[iVar04], 1);
		bVar1 = ADD_BLIP_FOR_OBJECT(Local_713[iVar04], 330, 0f, 2, 0);
		SET_BLIP_SCALE(bVar1, 0.75f);
		SET_BLIP_NAME(bVar1, "blip_coffin");
		Function_405((*iParam0 + 52)[iVar0 + 1]);
		Function_362((*iParam0 + 52)[iVar0 + 1]);
		Local_713[iVar04].f_8 = CREATE_VOLUME_IN_LAYOUT(bLocal_707, Function_37(), 2, Function_405((*iParam0 + 52)[iVar0 + 1]), Function_362((*iParam0 + 52)[iVar0 + 1]), 3.0f, 1.5f, 3.0f);
		Local_713[iVar04].f_12 = CREATE_EVENT_TRAP(Function_37(), 17, bLocal_707);
		EVENT_TRAP_STORE_EVENTS(Local_713[iVar04].f_12, 1);
		EVENT_TRAP_ON_VOLUME(StackVal, Local_713[iVar04].f_12);
		iVar0++;
	}
	return;
}

void Function_371() //Position: 0x12753 / 75603
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	Function_165(Global_34573);
	vVar0 = { StackVal, StackVal, Function_165(Global_34573) };
	iVar3 = RAND_INT_RANGE(50, 100);
	bVar4 = Function_41();
	if (bVar4)
	{
		iVar3 *= 1;
	}
	else
	{
		iVar3 = (iVar3 * 4294967295);
	}
	vVar0.x = (vVar0.x + IntToFloat(iVar3));
	vVar0.f_8 = (vVar0.z + IntToFloat(iVar3));
	if (IS_OBJECT_VALID(bLocal_708))
	{
		UNK_0x7246F438(bLocal_708);
	}
	bLocal_708 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_707, Function_37(), "env_lightningForked_stormy", vVar0);
	UNK_0x6745191B(bLocal_708, 0.0f, 0.0f, 0.0f);
	return;
}

bool Function_372(int iParam0, float fParam1) //Position: 0x127DF / 75743
{
	if (Function_275(iParam0))
	{
		if (Function_273(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_373(int iParam0) //Position: 0x127FB / 75771
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (StackVal && !IS_OBJECT_VALID(Local_713[iVar04].f_12))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(Local_713[iVar04].f_12))
			{
				if (Function_374(Local_713[iVar04].f_12))
				{
					Local_713[iVar04].f_4 = 1;
					Function_301();
					DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(Local_713[iVar04], "LootCoffin"));
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_713[iVar04]));
					EVENT_TRAP_CLEAR_TRAP_FLAG(Local_713[iVar04].f_12);
					EVENT_TRAP_CLEAR_EVENTS(Local_713[iVar04].f_12);
					bVar1 = Local_713[iVar04];
					iVar2 = 0;
					if (GET_OBJECT_TYPE(bVar1) == 17)
					{
						Function_405(bVar1);
						UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_707, Function_37(), "fire_zombie_02_dataSphere", Function_405(bVar1)), 0.0f, 0.0f, 0.0f);
					}
					iLocal_700++;
					if (iLocal_700 <= 2 && !iLocal_699)
					{
						iLocal_699 = 1;
						iParam0->f_12++;
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_374(bool bParam0) //Position: 0x12901 / 76033
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_707);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return 0;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar2))
	{
	}
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar1 = GET_EVENT_FROM_OBJECT(bVar2);
		if (DECOR_GET_STRING_HASH(bVar1, "ExplosionType") == STRING_TO_HASH("FireBottleExplosion"))
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

int Function_375() //Position: 0x12997 / 76183
{
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return 0;
		}
	}
	if (HUD_IS_FADING())
	{
		return 0;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			Function_81(20, 1, 0, 0);
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_376(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_696 = true;
			STREAMING_RELEASE_MAIN_POI();
			return 1;
		}
	}
	return 0;
}

void Function_376(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x12A13 / 76307
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_377(int iParam0) //Position: 0x12A3C / 76348
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_382(iParam0->f_140);
			break;
		
		case 0x00000001:
			Function_381(iParam0->f_140);
			break;
		
		case 0x00000002:
			Function_380(iParam0->f_140);
			break;
		
		case 0x00000003:
			Function_379(iParam0->f_140);
			break;
		
		case 0x00000004:
			Function_378(iParam0->f_140);
			break;
	}
	SET_ACTOR_MAX_HEALTH(bLocal_685, 35.0f);
	SET_ACTOR_HEALTH(bLocal_685, 35.0f);
	DECOR_SET_BOOL(bLocal_685, "CanBeLasso", false);
	SET_ACTOR_INVULNERABILITY(bLocal_685, 1);
	Function_341(bLocal_685, 0, 1, 1, 1, 0, 1);
	SUSPEND_MOVER(bLocal_685);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(GET_OBJECT_FROM_ACTOR(bLocal_685));
	SET_ACTOR_UPDATE_PRIORITY(bLocal_685, false);
	Function_405(iParam0->f_140);
	STREAMING_LOAD_BOUNDS(Function_405(iParam0->f_140), 3.0f, 0);
	return;
}

void Function_378(bool bParam0) //Position: 0x12AFB / 76539
{
	Function_405(bParam0);
	Function_362(bParam0);
	bLocal_685 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), 556, Function_405(bParam0), Function_362(bParam0));
	Function_366(bLocal_685, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_379(bool bParam0) //Position: 0x12B29 / 76585
{
	Function_405(bParam0);
	Function_362(bParam0);
	bLocal_685 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), 357, Function_405(bParam0), Function_362(bParam0));
	Function_366(bLocal_685, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_380(bool bParam0) //Position: 0x12B57 / 76631
{
	Function_405(bParam0);
	Function_362(bParam0);
	bLocal_685 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), 182, Function_405(bParam0), Function_362(bParam0));
	Function_366(bLocal_685, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_381(bool bParam0) //Position: 0x12B84 / 76676
{
	Function_405(bParam0);
	Function_362(bParam0);
	bLocal_685 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), 332, Function_405(bParam0), Function_362(bParam0));
	Function_366(bLocal_685, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_382(bool bParam0) //Position: 0x12BB2 / 76722
{
	Function_405(bParam0);
	Function_362(bParam0);
	bLocal_685 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), 1220, Function_405(bParam0), Function_362(bParam0));
	Function_361(bLocal_685, 2, 0);
	SET_ACTOR_PROOF(bLocal_685, 4194304);
	return;
}

var Function_383(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x12BE3 / 76771
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
	if (Global_3381)
	{
		Function_388(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_387())
		{
			return "";
		}
	}
	if (!Function_385())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_232();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_405(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_405(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_405(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_405(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_384(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_384(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_73() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
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
				vVar10 = { fParam2, fParam3, fParam4 };
				if (!Function_166(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
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
		Function_341(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_73() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_384(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12F39 / 77625
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

bool Function_385() //Position: 0x12FD4 / 77780
{
	if (Function_386() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_386() //Position: 0x12FEA / 77802
{
	return Global_12976.f_152;
}

bool Function_387() //Position: 0x12FF5 / 77813
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_388(var uParam0, bool bParam1, bool bParam2) //Position: 0x13015 / 77845
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_217(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_217(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_389(int iParam0) //Position: 0x13042 / 77890
{
	if (!Function_275(iParam0))
	{
		Function_234(iParam0, 0.0f);
	}
	return;
}

void Function_390(int iParam0, int iParam1) //Position: 0x13057 / 77911
{
	if (!Function_275(iParam0))
	{
		Function_234(iParam0, iParam1);
	}
	return;
}

var Function_391(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1306D / 77933
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkFirstTimeGraveyard", 2, 1);
	}
	Function_392(&bVar0);
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

void Function_392(int iParam0) //Position: 0x130EE / 78062
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_394(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_393(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.09f, 2);
	return;
}

void Function_393(int iParam0) //Position: 0x13143 / 78147
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.71252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 542.7578f, 93.98339f, 1198.781f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.325511f, 2.072496f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_394(int iParam0) //Position: 0x131B1 / 78257
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.73172f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 542.1422f, 93.89145f, 1200.29f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.249336f, 1.708657f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_395(bool bParam0) //Position: 0x1321F / 78367
{
	bool bVar0;
	
	Function_405((*bParam0 + 76)[0]);
	Function_362((*bParam0 + 76)[0]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_707, Function_37(), iLocal_651[iLocal_661], Function_405((*bParam0 + 76)[0]), Function_362((*bParam0 + 76)[0]));
	Function_366(bVar0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 3.0f, 1);
	Function_365();
	iLocal_661++;
	return;
}

bool Function_396() //Position: 0x1327D / 78461
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			if (!iLocal_731)
			{
				Function_390(&iLocal_648, 0.0f);
				iLocal_731 = 1;
			}
			else if (Function_372(&iLocal_648, 1.5f))
			{
				iLocal_731 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void Function_397() //Position: 0x132E4 / 78564
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			iLocal_697 = 1;
			SET_ACTOR_PROOF(Global_34573, 16);
			fLocal_698 = GET_CURRENT_GAME_TIME();
		}
	}
	if (iLocal_697)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_698) < 7.5f)
		{
			CLEAR_ACTOR_PROOF(Global_34573, 16);
			iLocal_697 = 0;
		}
	}
	return;
}

void Function_398(int iParam0) //Position: 0x13355 / 78677
{
	int iVar0;
	int iVar1;
	
	bLocal_707 = CREATE_LAYOUT("ngraveyard");
	if (IS_LAYOUTREF_VALID(bLocal_707))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iLocal_651[iVar0] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], iLocal_695);
			STREAMING_REQUEST_ACTOR(iLocal_651[iVar0], 1, false);
			iLocal_695++;
			iVar0++;
		}
		bLocal_657 = Function_359(9, 15);
		STREAMING_REQUEST_ACTOR(bLocal_657, 1, false);
		bLocal_658 = Function_359(1214, 1221);
		STREAMING_REQUEST_ACTOR(bLocal_658, 1, false);
		bLocal_659 = Function_359(1204, 1213);
		STREAMING_REQUEST_ACTOR(bLocal_659, 1, false);
		bLocal_660 = Function_359(1222, 1227);
		STREAMING_REQUEST_ACTOR(bLocal_660, 1, false);
		iLocal_661 = 0;
		iLocal_679 = 0;
		iLocal_680 = 0;
		iLocal_681 = 1;
		bLocal_683 = false;
		iLocal_684 = 0;
		bLocal_696 = false;
		iLocal_700 = 0;
		iLocal_699 = 0;
		if (!SQUAD_IS_VALID(StackVal))
		{
			iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_707, "Squad_Zombie"));
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal);
			iVar1 |= 2048;
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal, iVar1);
		}
		*iParam0 = 1;
		iParam0->f_44 = 0;
		iParam0->f_20 = 0;
		iParam0->f_48 = 75;
		if (iParam0->f_152 != 0 && Function_241(Global_30734) >= 0)
		{
			iParam0->f_4 = 2;
		}
		else
		{
			iParam0->f_4 = 3;
		}
		if (Global_3421)
		{
			iParam0->f_12 = 2;
			iParam0->f_16 = 6;
		}
		iLocal_682 = 0;
		Function_390(&iLocal_686, -5.0f);
		if (!IS_OBJECT_VALID(iParam0->f_24))
		{
			iParam0->f_24 = CREATE_EVENT_TRAP("killET", 2, bLocal_707);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_24, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_24, 1);
		}
		if (!IS_OBJECT_VALID(iParam0->f_28))
		{
			iParam0->f_28 = CREATE_EVENT_TRAP("headshotET", 10, bLocal_707);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_28, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_28, 1);
		}
		Function_405((*iParam0 + 52)[0]);
		Function_362((*iParam0 + 52)[0]);
		Local_709 = CREATE_PROP_IN_LAYOUT(bLocal_707, Function_37(), "$/fragments/p_gen_coffin04x", Function_405((*iParam0 + 52)[0]), Function_362((*iParam0 + 52)[0]), 1);
		SNAP_OBJECT_TO_GROUND(Local_709, 5.0f, true, 1092616192);
		SET_PROP_AI_OBSTACLE_ENABLED(Local_709, 1);
		Function_405(Local_709);
		CLEAR_AREA_OF_GRASS(Function_405(Local_709), 2.0f);
		Function_405(Local_709);
		CLEAR_AREA_OF_TREE_TYPE(Function_405(Local_709), 2.0f, "");
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_709, 330, 0f, 2, 0), "blip_coffin");
		Function_176("GY_Burn_coffin", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_400(iParam0);
		Global_3385 = 1;
		if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
		{
			DECOR_REMOVE(Global_34573, "bStartedGY");
		}
		AUDIO_MUSIC_FORCE_TRACK(Function_399(iParam0->f_152), "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_399(int iParam0) //Position: 0x1361A / 79386
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, RETURN TC_NRT_SONG_01!");
		return "TC_NRT_SONG_01";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "TC_NRT_SONG_01";
			break;
		
		case 0x00000001:
			return "TC_FTR_SONG_02";
			break;
		
		case 0x00000004:
			return "TC_MEX_SONG_01";
			break;
		
		case 0x00000003:
			return "TC_FTR_SONG_04";
			break;
		
		case 0x00000002:
			return "TC_FTR_SONG_03";
			break;
	}
	return "TC_NRT_SONG_01";
}

void Function_400(int iParam0) //Position: 0x13738 / 79672
{
	bool bVar0;
	
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_401(bVar0);
			}
			break;
		
		case 0x00000001:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_401(bVar0);
			}
			break;
		
		case 0x00000003:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_401(bVar0);
			}
			break;
		
		case 0x00000002:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_401(bVar0);
			}
			break;
		
		case 0x00000004:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_401(bVar0);
			}
			break;
	}
	return;
}

void Function_401(bool bParam0) //Position: 0x138B7 / 80055
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

bool Function_402() //Position: 0x138E3 / 80099
{
	if (!Function_185(&bLocal_663))
	{
		return 0;
	}
	return 1;
}

void Function_403(int iParam0) //Position: 0x138F6 / 80118
{
	Function_190(&bLocal_663, "repeater_carbine01x", 0, 0);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_404(&bLocal_663, 1220, 3, 0);
			break;
		
		case 0x00000001:
			Function_404(&bLocal_663, 332, 3, 0);
			break;
		
		case 0x00000003:
			Function_404(&bLocal_663, 357, 3, 0);
			break;
		
		case 0x00000002:
			Function_404(&bLocal_663, 182, 3, 0);
			break;
		
		case 0x00000004:
			Function_404(&bLocal_663, 556, 3, 0);
			break;
	}
	return;
}

var Function_404(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1398C / 80268
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_5(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_188(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_188(bParam0[iVar03], 8);
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

vector3 Function_405(bool bParam0) //Position: 0x13A5C / 80476
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

void Function_406(bool bParam0, float fParam1) //Position: 0x13A83 / 80515
{
	if (!Function_53(128))
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

void Function_407(bool bParam0, bool bParam1) //Position: 0x13AC1 / 80577
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
		Function_92(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_73())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_408(int iParam0) //Position: 0x13BBB / 80827
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_409(int iParam0) //Position: 0x13BCE / 80846
{
	Function_411(StackVal, 0, 0.5f, 1, Local_108, 1);
	Function_410(1);
	return;
}

void Function_410(bool bParam0) //Position: 0x13BEE / 80878
{
	if (bParam0 <= 0)
	{
		return;
	}
	if (bParam0 >= 10)
	{
		bParam0 = 3;
	}
	Global_28842.f_44 = bParam0;
	return;
}

void Function_411(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13C0C / 80908
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
		Function_414();
	}
	if (bParam5)
	{
		Function_412(1048576);
	}
}

void Function_412(int iParam0) //Position: 0x13D1F / 81183
{
	Function_413(&Global_28842, iParam0);
	return;
}

void Function_413(var uParam0, var uParam1) //Position: 0x13D2D / 81197
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_414() //Position: 0x13D48 / 81224
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_412(16384);
	}
	return;
}

void Function_415(var uParam0) //Position: 0x13D64 / 81252
{
	uParam0 = uParam0;
	return;
}

void Function_416() //Position: 0x13D6E / 81262
{
	return;
}

void Function_417(int iParam0) //Position: 0x13D74 / 81268
{
	iParam0 = iParam0;
	return;
}

void Function_418(var uParam0, int iParam1) //Position: 0x13D7E / 81278
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_419(int iParam0, int iParam1) //Position: 0x13D95 / 81301
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_420() //Position: 0x13DB1 / 81329
{
	return;
}

void Function_421() //Position: 0x13DB7 / 81335
{
	return;
}

void Function_422(int iParam0) //Position: 0x13DBD / 81341
{
	iParam0 = iParam0;
	return;
}

void Function_423(int iParam0, bool bParam1, bool bParam2) //Position: 0x13DC7 / 81351
{
	if ((!Function_9(bParam1) || Global_3380) || Function_30(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_424(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_424(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_424(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_424(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_424(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_424(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_424(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_424(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_424(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_424(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_424(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_424(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_424(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_424(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_424(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_424(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_424(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_424(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_424(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_424(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_424(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_424(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_424(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_424(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_424(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_424(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_217(iParam0 + 356, 64);
	return;
}

void Function_424(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x14095 / 82069
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
	
	Function_43(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_432(bParam3, iParam1);
	iVar18 = Function_113(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_28(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_431(uParam2[bVar222], 4))
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
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_426(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_217(iParam0 + 4[bVar225] + 16, 1);
						Function_217(iParam0 + 356, 1024);
					}
					Function_217(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_425(uParam2[bVar222], 4);
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
	Function_206(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_425(var uParam0, int iParam1) //Position: 0x14281 / 82561
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_426(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x14290 / 82576
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
	Function_430(bVar0, 0);
	Function_429(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_428(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_428(bVar0, 75.0f, 1.0f, 1.0f);
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
				if (!IS_OBJECT_VALID(Function_427(bVar24, "UseCase1")))
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
	Function_428(bVar0, 20.0f, 1.0f, 1.0f);
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

var Function_427(bool bParam0, bool bParam1) //Position: 0x14902 / 84226
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_428(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1490F / 84239
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

void Function_429(bool bParam0, bool bParam1) //Position: 0x14956 / 84310
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

void Function_430(bool bParam0, bool bParam1) //Position: 0x1499C / 84380
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

bool Function_431(var uParam0, int iParam1) //Position: 0x149CB / 84427
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_432(bool bParam0, int iParam1) //Position: 0x149E7 / 84455
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
		if (Function_28(iParam1))
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

struct<32> Function_433(bool bParam0) //Position: 0x14A8B / 84619
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("0", &cVar8, ""), 4);
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

struct<32> Function_434(char* cParam0, char* cParam1, char* cParam2) //Position: 0x14AF5 / 84725
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_435() //Position: 0x14B14 / 84756
{
	Function_405((*&Local_108 + 488)[0]);
	Function_36();
	uLocal_986[0] = Function_436(StackVal, StackVal, StackVal, StackVal, Local_108, Function_37(), "$/tune/refGroups/campsiteSets/cam_deadBody01x", Function_405((*&Local_108 + 488)[0]), Function_36(), 4294967295);
	uLocal_986[0] = uLocal_986[0];
	Function_405((*&Local_108 + 488)[1]);
	Function_36();
	uLocal_986[1] = Function_436(StackVal, StackVal, StackVal, StackVal, Local_108, Function_37(), "$/tune/refGroups/campsiteSets/cam_deadBody02x", Function_405((*&Local_108 + 488)[1]), Function_36(), 4294967295);
	uLocal_986[1] = uLocal_986[1];
	return;
}

var Function_436(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x14BCC / 84940
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_73())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_437(int iParam0) //Position: 0x14D15 / 85269
{
	if (Function_30(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_185(iParam0 + 192);
}

int Function_438(int iParam0) //Position: 0x14D34 / 85300
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_419(&(Global_29008[iParam0]), 4);
}

bool Function_439() //Position: 0x14D50 / 85328
{
	return Function_185(&bLocal_979);
}

void Function_440(bool bParam0) //Position: 0x14D5C / 85340
{
	int iVar0;
	
	Function_441(&Local_793, bLocal_7, "bank_int", 10, &Global_29155[bParam010] + 20, 0, Local_243.f_40, 0, 0);
	Function_441(&Local_793, bLocal_7, "bank01", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_20, 0, 0);
	Function_441(&Local_793, bLocal_7, "bank01", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_20, 0, 0);
	Function_441(&Local_793, bLocal_7, "bank01_int", 4, &Global_29155[bParam010] + 20, 0, Local_243.f_920, 0, 0);
	Function_441(&Local_793, bLocal_7, "bank01_int", 7, &Global_29155[bParam010] + 20, 1, Local_243.f_920, 0, 0);
	Function_441(&Local_793, bLocal_7, "church01", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_60, 0, 0);
	Function_441(&Local_793, bLocal_7, "church01", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_60, 0, 0);
	Function_441(&Local_793, bLocal_7, "church01", 3, &Global_29155[bParam010] + 20, 0, Local_243.f_60, 0, 0);
	Function_441(&Local_793, bLocal_7, "cityHall01", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "doctor", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_76, 0, 0);
	Function_441(&Local_793, bLocal_7, "doctor", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_76, 1, 0);
	Function_441(&Local_793, bLocal_7, "generalStore01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "generalStore01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "generalStore01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "gunshop", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_524, 0, 0);
	Function_441(&Local_793, bLocal_7, "gunshop", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_524, 1, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_120, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_120, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 3, &Global_29155[bParam010] + 20, 0, Local_243.f_120, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 8, &Global_29155[bParam010] + 20, 0, Local_243.f_120, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 11, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "hotel01", 13, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "policeStation01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "policeStation01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "policeStation01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "policeStation01", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_441(&Local_793, bLocal_7, "saloon_int", 8, &Global_29155[bParam010] + 20, 0, Local_243.f_140, 0, 1);
	Function_441(&Local_793, bLocal_7, "saloon_int", 9, &Global_29155[bParam010] + 20, 0, Local_243.f_140, 0, 1);
	Function_441(&Local_793, bLocal_7, "tailor", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_540, 0, 0);
	iVar0 = Function_441(&Local_793, bLocal_7, "tailor", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_540, 1, 0);
	if (iVar0 <= 0 && iVar0 > Local_793)
	{
		if (IS_OBJECT_VALID(Local_793[iVar05]))
		{
			DESTROY_OBJECT(Local_793[iVar05]);
		}
	}
	Function_441(&Local_793, bLocal_7, "ntheatre01", 1, &Global_29155[bParam010] + 20, 0, Local_243.f_632, 0, 0);
	Function_441(&Local_793, bLocal_7, "ntheatre01", 2, &Global_29155[bParam010] + 20, 0, Local_243.f_632, 0, 0);
	Function_441(&Local_793, bLocal_7, "ntheatre01", 3, &Global_29155[bParam010] + 20, 0, Local_243.f_632, 0, 0);
	Function_441(&Local_793, bLocal_7, "ntheatre01", 4, &Global_29155[bParam010] + 20, 0, Local_243.f_632, 0, 0);
	return;
}

var Function_441(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x152F0 / 86768
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_442(uParam0);
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
		Function_70(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_70(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_70(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_70(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_442(int iParam0) //Position: 0x153DC / 87004
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

void Function_443() //Position: 0x1540A / 87050
{
	Function_445(&uLocal_8, &uLocal_732, 4, Local_243.f_424, 4294967295, 4);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_20, 4294967295, 0x800010a);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_40, 4294967295, 0x800018a);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_36, 4294967295, 131338);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_60, 4294967295, 4194570);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_76, 4294967295, 8458);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_88, 4294967295, 266);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_120, 4294967295, 0x2000010a);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_136, 4294967295, 266);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_156, 4294967295, 778);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_140, 4294967295, 258);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_168, 4294967295, 16650);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_632, 4294967295, 266);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_476, 4294967295, 33034);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_524, 4294967295, 4362);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_540, 4294967295, 2314);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_568, 4294967295, 2314);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_824, 4294967295, 65800);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_836, 4294967295, 2314);
	Function_445(&uLocal_8, &uLocal_732, 5, Local_243.f_488, 4294967295, 0x1000000);
	Function_444(Local_243.f_1004, 8);
	return;
}

void Function_444(bool bParam0, bool bParam1) //Position: 0x15581 / 87425
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (32 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 32);
	}
	DECOR_SET_INT(bParam0, "customweather", bParam1);
	return;
}

void Function_445(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x155E8 / 87528
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

void Function_446(int iParam0) //Position: 0x156C3 / 87747
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_447(int iParam0, bool bParam1) //Position: 0x156D2 / 87762
{
	bool bVar0;
	bool bVar1;
	
	if (Function_30(iParam0->f_356, 16))
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

void Function_448(int iParam0, bool bParam1, bool bParam2) //Position: 0x1573A / 87866
{
	bool bVar0;
	bool bVar1;
	
	if (Function_30(iParam0->f_356, 16))
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
	if (!Function_28(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_449() //Position: 0x157C8 / 88008
{
	return Local_108;
}

void Function_450(int iParam0) //Position: 0x157D0 / 88016
{
	bLocal_7 = Function_451(Local_108, "blackwater", iParam0);
	return;
}

var Function_451(bool bParam0, char* cParam1, int iParam2) //Position: 0x157EC / 88044
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_452() //Position: 0x1580B / 88075
{
	if (Function_453())
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(Local_243.f_1024, 15);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_243.f_1024);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_243.f_1024);
		return 1;
	}
	return 0;
}

bool Function_453() //Position: 0x15834 / 88116
{
	var uVar0;
	
	Function_454(3, 3);
	uVar0 = uVar0;
	Local_243 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(Local_243))
	{
		Local_243 = CREATE_LAYOUT("Blackwater_layout");
	}
	Local_243.f_20 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_bank_set");
	(*&Local_243 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv3", 2, 685.012f, 83.54934f, 1228.977f, 0.0f, 89.4097f, 0.0f, 6.222911f, 10.39784f, 17.46343f);
	ADD_TO_VOLUME_SET(Local_243.f_20, (*&Local_243 + 4)[0]);
	(*&Local_243 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv2", 2, 683.6581f, 83.69234f, 1234.58f, 0.0f, 89.4097f, 0.0f, 5.997558f, 9.306466f, 14.46865f);
	ADD_TO_VOLUME_SET(Local_243.f_20, (*&Local_243 + 4)[1]);
	(*&Local_243 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv1", 2, 684.7269f, 83.54934f, 1240.591f, 0.0f, 89.4097f, 0.0f, 6.52847f, 10.39784f, 18.22007f);
	ADD_TO_VOLUME_SET(Local_243.f_20, (*&Local_243 + 4)[2]);
	Local_243.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_barn_set");
	(*&Local_243 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "barnv1", 2, 583.7659f, 87.39951f, 1323.992f, 0.0f, 0.0f, 0.0f, 16.03014f, 4.136538f, 21.79914f);
	ADD_TO_VOLUME_SET(Local_243.f_36, (*&Local_243 + 24)[0]);
	(*&Local_243 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "barnv2", 2, 592.6696f, 86.83189f, 1332.13f, 0.0f, 0.0f, 0.0f, 2.219453f, 3.000689f, 5.909022f);
	ADD_TO_VOLUME_SET(Local_243.f_36, (*&Local_243 + 24)[1]);
	Local_243.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_bank_vault", 2, 679.6162f, 80.76677f, 1227.462f, 0.0f, 89.4097f, 0.0f, 2.239555f, 3.572292f, 5.903275f);
	Local_243.f_60 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_church_set");
	(*&Local_243 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "churchv1", 2, 551.4929f, 95.67864f, 1198.728f, 0.0f, -93.1861f, 0.0f, 3.867709f, 5.662213f, 3.031523f);
	ADD_TO_VOLUME_SET(Local_243.f_60, (*&Local_243 + 44)[0]);
	(*&Local_243 + 44)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "churchv2", 2, 559.042f, 97.66423f, 1192.044f, 0.0f, 87.16801f, 0.0f, 18.22243f, 8.206848f, 11.36879f);
	ADD_TO_VOLUME_SET(Local_243.f_60, (*&Local_243 + 44)[1]);
	(*&Local_243 + 44)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "churchv3", 2, 565.0886f, 100.8047f, 1184.277f, 0.0f, -92.77225f, 0.0f, 4.307622f, 24.27567f, 2.470683f);
	ADD_TO_VOLUME_SET(Local_243.f_60, (*&Local_243 + 44)[2]);
	Local_243.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_doctor_set");
	(*&Local_243 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "doctor01", 2, 722.0671f, 78.48743f, 1364.301f, 0.0f, 89.97367f, 0.0f, 6.625236f, 8.511094f, 8.727087f);
	ADD_TO_VOLUME_SET(Local_243.f_76, (*&Local_243 + 64)[0]);
	(*&Local_243 + 64)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "doctor02", 2, 726.3837f, 80.53288f, 1365.952f, 0.0f, 89.97367f, 0.0f, 1.491828f, 1.899601f, 0.4062393f);
	ADD_TO_VOLUME_SET(Local_243.f_76, (*&Local_243 + 64)[1]);
	Local_243.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_fbi_set");
	(*&Local_243 + 80)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "fbiv", 2, 769.4239f, 82.72511f, 1234.899f, 0.0f, 0.0f, 0.0f, 17.29858f, 9.946985f, 17.77562f);
	ADD_TO_VOLUME_SET(Local_243.f_88, (*&Local_243 + 80)[0]);
	Local_243.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_gazebo_set");
	(*&Local_243 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "gazebov", 3, 1.912712f, 0.8222067f, -11.30511f, 0.0f, 29.35592f, 0.0f, 6.145772f, 3.393198f, 6.145772f);
	ADD_TO_VOLUME_SET(Local_243.f_100, (*&Local_243 + 92)[0]);
	Local_243.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_hotel_lobby", 2, 747.7106f, 79.8069f, 1267.899f, 0.0f, 90.34145f, 0.0f, 12.41521f, 3.927039f, 12.25801f);
	Local_243.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_hotel_set");
	(*&Local_243 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "hotelv", 2, 753.863f, 84.51958f, 1267.863f, 0.0f, 90.34145f, 0.0f, 12.45637f, 12.57302f, 18.12087f);
	ADD_TO_VOLUME_SET(Local_243.f_120, (*&Local_243 + 108)[0]);
	(*&Local_243 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "hotelv1", 2, 762.2801f, 87.19563f, 1271.319f, 0.0f, 90.34145f, 0.0f, 10.22215f, 10.31789f, 5.849715f);
	ADD_TO_VOLUME_SET(Local_243.f_120, (*&Local_243 + 108)[1]);
	Local_243.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_freightplatform", 2, 667.2385f, 80.99831f, 1332.081f, 0.0f, 0.0f, 0.0f, 28.54802f, 4.387286f, 20.21121f);
	Local_243.f_136 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_freightStation_set");
	(*&Local_243 + 128)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "freightStationv1", 2, 671.9913f, 80.99831f, 1332.735f, 0.0f, 0.0f, 0.0f, 10.37562f, 4.257046f, 14.01441f);
	ADD_TO_VOLUME_SET(Local_243.f_136, (*&Local_243 + 128)[0]);
	Local_243.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_players_room", 2, 713.2771f, 84.66203f, 1322.427f, 0.0f, 90.26811f, 0.0f, 8.244068f, 4.262002f, 8.929452f);
	Local_243.f_156 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_saloon_set");
	(*&Local_243 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "saloonv5", 2, 718.1539f, 83.47411f, 1318.515f, 0.0f, 89.99537f, 0.0f, 16.42857f, 10.38234f, 18.53994f);
	ADD_TO_VOLUME_SET(Local_243.f_156, (*&Local_243 + 144)[0]);
	(*&Local_243 + 144)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "saloonv6", 2, 720.5394f, 80.53291f, 1320.628f, 0.0f, 89.99537f, 0.0f, 16.60321f, 4.454592f, 12.34287f);
	ADD_TO_VOLUME_SET(Local_243.f_156, (*&Local_243 + 144)[1]);
	Local_243.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_trainStation_set");
	(*&Local_243 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "trainStationv", 2, 662.8956f, 82.90158f, 1314.376f, 0.0f, 0.0f, 0.0f, 10.1784f, 9.940033f, 16.36202f);
	ADD_TO_VOLUME_SET(Local_243.f_168, (*&Local_243 + 160)[0]);
	Local_243.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_theatre_night_set");
	(*&Local_243 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "ntheatrev1", 2, 710.5163f, 82.8928f, 1289.718f, 0.0f, 90.02578f, 0.0f, 20.03429f, 11.01707f, 33.30777f);
	ADD_TO_VOLUME_SET(Local_243.f_180, (*&Local_243 + 172)[0]);
	Local_243.f_336 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_sidewalk_town_set");
	(*&Local_243 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv26", 2, 750.4879f, 81.27018f, 1235.168f, 0.0f, 0.0f, 0.0f, 14.12516f, 7.551131f, 23.47999f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[0]);
	(*&Local_243 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv25", 2, 780.9568f, 81.08485f, 1299.409f, 0.0f, 0.0f, 0.0f, 3.77752f, 7.551131f, 160.3003f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[1]);
	(*&Local_243 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv24", 2, 745.0521f, 81.28633f, 1259.639f, 0.0f, 0.0f, 0.0f, 102.865f, 7.551131f, 3.98151f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[2]);
	(*&Local_243 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv23", 2, 692.7038f, 81.25581f, 1328.674f, 0.0f, 0.0f, 0.0f, 3.886184f, 7.551131f, 142.1541f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[3]);
	(*&Local_243 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv22", 2, 733.5353f, 81.95405f, 1245.95f, 0.0f, 0.0f, 0.0f, 117.3182f, 7.551131f, 3.935042f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[4]);
	(*&Local_243 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv21", 2, 692.8892f, 81.24154f, 1256.207f, 0.0f, 0.0f, 0.0f, 3.66921f, 7.551131f, 22.38496f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[5]);
	(*&Local_243 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv20", 2, 729.8685f, 81.70876f, 1176.64f, 0.0f, 0.0f, 0.0f, 67.70959f, 7.551131f, 3.73394f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[6]);
	(*&Local_243 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv19", 2, 763.9297f, 81.50655f, 1191.37f, 0.0f, 0.0f, 0.0f, 3.539133f, 7.551131f, 32.30503f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[7]);
	(*&Local_243 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv18", 2, 732.3339f, 81.43412f, 1212.267f, 0.0f, 0.0f, 0.0f, 67.77905f, 7.551131f, 4.093557f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[8]);
	(*&Local_243 + 184)[9] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv17", 2, 770.7201f, 81.20591f, 1214.631f, 0.0f, 49.24516f, 0.0f, 3.48217f, 7.551131f, 20.62198f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[9]);
	(*&Local_243 + 184)[10] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv14", 2, 738.1655f, 81.36582f, 1330.836f, 0.0f, 0.0f, 0.0f, 91.05147f, 7.551131f, 3.688597f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[10]);
	(*&Local_243 + 184)[11] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv12", 2, 728.9019f, 81.24676f, 1319.37f, 0.0f, 0.0f, 0.0f, 3.529351f, 7.551131f, 146.8364f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[11]);
	(*&Local_243 + 184)[12] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv11", 2, 755.1953f, 81.28096f, 1385.705f, 0.0f, 17.6138f, 0.0f, 55.03497f, 7.551131f, 3.323842f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[12]);
	(*&Local_243 + 184)[13] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv9", 2, 736.9777f, 81.29997f, 1342.492f, 0.0f, 0.0f, 0.0f, 91.653f, 7.551131f, 3.939708f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[13]);
	(*&Local_243 + 184)[14] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv5", 2, 668.9208f, 81.29395f, 1357.18f, 0.0f, 0.0f, 0.0f, 27.62087f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[14]);
	(*&Local_243 + 184)[15] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv35", 2, 710.8467f, 81.76566f, 1396.286f, 0.0f, 7.894397f, 0.0f, 36.66884f, 9.535529f, 3.794664f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[15]);
	(*&Local_243 + 184)[16] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv34", 2, 680.9053f, 81.60557f, 1378.852f, 0.0f, 0.3763108f, 0.0f, 3.448853f, 9.535529f, 46.55386f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[16]);
	(*&Local_243 + 184)[17] = CREATE_VOLUME_IN_LAYOUT(Local_243, "buildingType2_05v", 2, 811.5858f, 81.57787f, 1242.259f, 0.0f, 0.0f, 0.0f, 6.744418f, 4.187153f, 12.31418f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[17]);
	(*&Local_243 + 184)[18] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv47", 2, 733.548f, 81.82948f, 1216.751f, 0.0f, 0.0f, 0.0f, 69.29767f, 10.45926f, 16.03515f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[18]);
	(*&Local_243 + 184)[19] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv45", 2, 742.9442f, 81.92759f, 1318.057f, 0.0f, 0.0f, 0.0f, 3.819721f, 10.45926f, 144.69f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[19]);
	(*&Local_243 + 184)[20] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv41", 2, 620.8363f, 81.51477f, 1307.774f, 0.0f, -9.045968f, 0.0f, 4.253928f, 10.45926f, 18.01833f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[20]);
	(*&Local_243 + 184)[21] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv48", 2, 673.6802f, 81.24154f, 1234.902f, 0.0f, 0.0f, 0.0f, 3.66921f, 7.551131f, 26.09772f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[21]);
	(*&Local_243 + 184)[22] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv49", 2, 698.0182f, 81.24154f, 1211.328f, 0.0f, 0.0f, 0.0f, 3.66921f, 7.551131f, 70.05096f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[22]);
	(*&Local_243 + 184)[23] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv50", 2, 695.8677f, 81.24154f, 1223.744f, 0.0f, -89.87884f, 0.0f, 3.66921f, 7.551131f, 42.88503f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[23]);
	(*&Local_243 + 184)[24] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv51", 2, 718.6068f, 81.24154f, 1228.93f, 0.0f, 0.0f, 0.0f, 5.448182f, 7.551131f, 36.78898f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[24]);
	(*&Local_243 + 184)[25] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv52", 2, 738.7516f, 81.24154f, 1234.945f, 0.0f, -89.87884f, 0.0f, 6.302614f, 7.551131f, 42.88503f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[25]);
	(*&Local_243 + 184)[26] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv53", 2, 737.1594f, 81.24154f, 1228.007f, 0.0f, 0.5153338f, 0.0f, 6.302614f, 7.551131f, 34.69927f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[26]);
	(*&Local_243 + 184)[27] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv54", 2, 757.8832f, 81.24154f, 1227.821f, 0.0f, 0.5153338f, 0.0f, 4.884216f, 7.551131f, 34.69927f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[27]);
	(*&Local_243 + 184)[28] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv55", 2, 768.6282f, 81.24154f, 1223.844f, 0.0f, 0.5153338f, 0.0f, 22.89185f, 7.551131f, 4.622076f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[28]);
	(*&Local_243 + 184)[29] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv56", 2, 686.8564f, 81.60557f, 1399.255f, 0.0f, -82.82469f, 0.0f, 3.448853f, 9.535529f, 13.79854f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[29]);
	(*&Local_243 + 184)[30] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv57", 2, 686.1123f, 81.29395f, 1342.593f, 0.0f, 0.0f, 0.0f, 13.0501f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[30]);
	(*&Local_243 + 184)[31] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv58", 2, 679.214f, 81.29395f, 1306.024f, 0.0f, 89.97923f, 0.0f, 71.48866f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[31]);
	(*&Local_243 + 184)[32] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv59", 2, 793.893f, 81.08485f, 1299.553f, 0.0f, 0.0f, 0.0f, 3.77752f, 7.551131f, 143.9355f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[32]);
	(*&Local_243 + 184)[33] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv60", 2, 680.0897f, 81.29395f, 1348.524f, 0.0f, -83.23032f, 0.0f, 16.36002f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[33]);
	(*&Local_243 + 184)[34] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv61", 2, 787.6937f, 81.29395f, 1342.844f, 0.0f, -0.4282522f, 0.0f, 16.36002f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[34]);
	(*&Local_243 + 184)[35] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv62", 2, 787.7839f, 81.29395f, 1330.775f, 0.0f, -0.4282522f, 0.0f, 16.36002f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[35]);
	(*&Local_243 + 184)[36] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalkv63", 2, 787.4879f, 81.29395f, 1369.694f, 0.0f, 0.7767695f, 0.0f, 16.36002f, 7.551131f, 3.612056f);
	ADD_TO_VOLUME_SET(Local_243.f_336, (*&Local_243 + 184)[36]);
	Local_243.f_376 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_sidewalk_docks_set");
	(*&Local_243 + 340)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv", 2, 801.8156f, 81.60444f, 1247.176f, 0.0f, 0.0f, 0.0f, 11.76809f, 4.313719f, 40.32629f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[0]);
	(*&Local_243 + 340)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv7", 2, 824.2244f, 80.79265f, 1250.541f, 0.0f, 0.0f, 0.229665f, 22.26314f, 4.313719f, 3.967483f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[1]);
	(*&Local_243 + 340)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv6", 2, 849.8587f, 80.74489f, 1241.462f, 0.0f, 0.0f, 0.0f, 18.6001f, 4.882585f, 13.70244f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[2]);
	(*&Local_243 + 340)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv5", 2, 840.6787f, 80.57874f, 1250.424f, 0.0f, 0.0f, 0.0f, 14.89873f, 4.313719f, 3.970972f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[3]);
	(*&Local_243 + 340)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv4", 2, 811.5286f, 81.68847f, 1230.949f, 0.0f, 0.0f, 0.0f, 7.570256f, 4.313719f, 8.017331f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[4]);
	(*&Local_243 + 340)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv2", 2, 811.6128f, 81.6553f, 1258.082f, 0.0f, 0.0f, 0.0f, 7.879981f, 4.569567f, 18.17561f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[5]);
	(*&Local_243 + 340)[6] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv1", 2, 789.1606f, 80.32297f, 1247.867f, 0.0f, 66.50256f, 0.0f, 3.87126f, 4.781995f, 19.64315f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[6]);
	(*&Local_243 + 340)[7] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_docksv8", 2, 788.6102f, 80.32297f, 1255.243f, 0.0f, 123.2449f, 0.0f, 3.87126f, 4.781995f, 19.64315f);
	ADD_TO_VOLUME_SET(Local_243.f_376, (*&Local_243 + 340)[7]);
	Local_243.f_388 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_sidewalk_factory_set");
	(*&Local_243 + 380)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_factoryv10", 2, 803.7894f, 79.94149f, 1287.728f, 0.0f, 0.0f, 0.0f, 22.90565f, 6.452754f, 35.84712f);
	ADD_TO_VOLUME_SET(Local_243.f_388, (*&Local_243 + 380)[0]);
	Local_243.f_420 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_sidewalk_slums_set");
	(*&Local_243 + 392)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv7", 2, 691.486f, 80.66692f, 1413.543f, 0.0f, 5.287261f, 0.0f, 49.20615f, 6.201427f, 4.651156f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[0]);
	(*&Local_243 + 392)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv6", 2, 725.566f, 79.8988f, 1411.999f, 0.0f, 0.0f, 0.0f, 3.0684f, 3.641126f, 9.026872f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[1]);
	(*&Local_243 + 392)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv5", 2, 740.1075f, 80.09385f, 1409.544f, 0.0f, 12.88769f, 0.0f, 2.821099f, 3.641126f, 9.026872f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[2]);
	(*&Local_243 + 392)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv4", 2, 701.2999f, 79.80818f, 1416.071f, 3.333661f, 8.713227f, 1.905108f, 2.856709f, 3.641126f, 9.026872f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[3]);
	(*&Local_243 + 392)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv8", 2, 726.8785f, 80.66692f, 1407.953f, 0.0f, 12.1173f, 0.0f, 44.34429f, 6.201427f, 4.651156f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[4]);
	(*&Local_243 + 392)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "sidewalk_slumsv9", 2, 747.494f, 80.66692f, 1404.957f, 0.0f, -1.049141f, 0.0f, 20.80766f, 6.201427f, 4.651156f);
	ADD_TO_VOLUME_SET(Local_243.f_420, (*&Local_243 + 392)[5]);
	Local_243.f_424 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_region", 3, 707.485f, 86.24601f, 1307.235f, 0.0f, 0.0f, 0.0f, 212.9846f, 26.39366f, 221.8356f);
	Local_243.f_472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_birds_set");
	(*&Local_243 + 428)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv10", 3, 824.3123f, 81.89945f, 1365.872f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[0]);
	(*&Local_243 + 428)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv9", 3, 784.3028f, 81.89945f, 1437.775f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[1]);
	(*&Local_243 + 428)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv8", 3, 806.499f, 85.4902f, 1288.864f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[2]);
	(*&Local_243 + 428)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv7", 3, 779.4973f, 86.19636f, 1243.967f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[3]);
	(*&Local_243 + 428)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv6", 3, 747.2687f, 81.89945f, 1364.051f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[4]);
	(*&Local_243 + 428)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv5", 3, 685.1721f, 81.89945f, 1429.138f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[5]);
	(*&Local_243 + 428)[6] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv4", 3, 702.5702f, 81.89945f, 1288.937f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[6]);
	(*&Local_243 + 428)[7] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv3", 3, 712.5511f, 81.89945f, 1205.071f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[7]);
	(*&Local_243 + 428)[8] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv2", 3, 647.5953f, 81.89945f, 1338.431f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[8]);
	(*&Local_243 + 428)[9] = CREATE_VOLUME_IN_LAYOUT(Local_243, "birdsv1", 3, 616.8579f, 81.89945f, 1244.28f, 0.0f, 20.0f, 0.0f, 51.88136f, 18.86082f, 50.82921f);
	ADD_TO_VOLUME_SET(Local_243.f_472, (*&Local_243 + 428)[9]);
	Local_243.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_243, "nblkv_jail", 2, 771.7086f, 80.92284f, 1241.441f, 0.0f, -90.42757f, 0.0f, 3.554834f, 3.100976f, 11.28596f);
	Local_243.f_488 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_cows_set");
	(*&Local_243 + 480)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "cowv01", 3, 561.9985f, 86.29778f, 1309.302f, 0.0f, 20.0f, 0.0f, 11.56515f, 5.799623f, 9.141501f);
	ADD_TO_VOLUME_SET(Local_243.f_488, (*&Local_243 + 480)[0]);
	Local_243.f_504 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_pigs_set");
	(*&Local_243 + 492)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "pigv1", 2, 805.6634f, 83.80357f, 1404.162f, 0.0f, 0.0f, 0.0f, 13.86579f, 4.348662f, 11.61409f);
	ADD_TO_VOLUME_SET(Local_243.f_504, (*&Local_243 + 492)[0]);
	(*&Local_243 + 492)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "pigv2", 2, 792.6331f, 87.97289f, 1452.428f, 0.0f, -5.696201f, 0.0f, 12.54771f, 8.287045f, 15.19059f);
	ADD_TO_VOLUME_SET(Local_243.f_504, (*&Local_243 + 492)[1]);
	Local_243.f_524 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_gunShop_set");
	(*&Local_243 + 508)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_gunshop_01", 2, 774.1391f, 79.00788f, 1318.239f, 0.0f, 269.8509f, 0.0f, 6.0513f, 5.570204f, 8.86475f);
	ADD_TO_VOLUME_SET(Local_243.f_524, (*&Local_243 + 508)[0]);
	(*&Local_243 + 508)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_gunshop_02", 2, 778.6971f, 80.185f, 1319.976f, 0.0f, 269.8509f, 0.0f, 1.996747f, 1.919043f, 0.2349873f);
	ADD_TO_VOLUME_SET(Local_243.f_524, (*&Local_243 + 508)[1]);
	(*&Local_243 + 508)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_gunshop_03", 2, 778.681f, 80.185f, 1316.416f, 0.0f, 269.8509f, 0.0f, 1.996747f, 1.919043f, 0.2349873f);
	ADD_TO_VOLUME_SET(Local_243.f_524, (*&Local_243 + 508)[2]);
	Local_243.f_540 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_tailor_set");
	(*&Local_243 + 528)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_tailor_01", 2, 772.2798f, 79.91953f, 1293.268f, 0.0f, 269.8509f, 0.0f, 6.553066f, 6.51972f, 12.21916f);
	ADD_TO_VOLUME_SET(Local_243.f_540, (*&Local_243 + 528)[0]);
	(*&Local_243 + 528)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_tailor_02", 2, 778.5352f, 80.04887f, 1294.266f, 0.0f, 269.8509f, 0.0f, 3.566595f, 2.45683f, 0.421526f);
	ADD_TO_VOLUME_SET(Local_243.f_540, (*&Local_243 + 528)[1]);
	Local_243.f_544 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_corral", 2, 562.2942f, 86.87167f, 1332.205f, 0.0f, 0.0f, 0.0f, 26.4426f, 20.61478f, 24.10768f);
	Local_243.f_556 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_train_platform_set");
	(*&Local_243 + 548)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_train_platform1", 2, 662.3517f, 81.52242f, 1302.591f, 0.0f, 0.0f, 0.0f, 17.46338f, 8.051627f, 42.10011f);
	ADD_TO_VOLUME_SET(Local_243.f_556, (*&Local_243 + 548)[0]);
	Local_243.f_568 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_anthro_set");
	(*&Local_243 + 560)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_anthro_01", 2, 752.3961f, 82.25603f, 1278.439f, 0.0f, 0.0f, 0.0f, 15.83952f, 9.6679f, 8.930294f);
	ADD_TO_VOLUME_SET(Local_243.f_568, (*&Local_243 + 560)[0]);
	Local_243.f_580 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_construction_C_set");
	(*&Local_243 + 572)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "construction_C_01", 2, 723.2885f, 82.33974f, 1221.455f, 0.0f, 0.0f, 0.0f, 14.26601f, 7.143672f, 7.612081f);
	ADD_TO_VOLUME_SET(Local_243.f_580, (*&Local_243 + 572)[0]);
	Local_243.f_608 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_dog_set");
	(*&Local_243 + 584)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "dogv", 3, 601.3074f, 78.30591f, 1288.111f, 0.0f, -4.385f, 0.0f, 57.46009f, 40.83388f, 99.76994f);
	ADD_TO_VOLUME_SET(Local_243.f_608, (*&Local_243 + 584)[0]);
	(*&Local_243 + 584)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "dogv5", 2, 767.9095f, 77.91833f, 1324.901f, 0.0f, 0.0f, 0.0f, 78.61015f, 5.613335f, 153.3716f);
	ADD_TO_VOLUME_SET(Local_243.f_608, (*&Local_243 + 584)[1]);
	(*&Local_243 + 584)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "dogv6", 2, 706.5726f, 75.77726f, 1363.489f, 0.0f, 0.0f, 0.0f, 47.38691f, 10.65252f, 68.62831f);
	ADD_TO_VOLUME_SET(Local_243.f_608, (*&Local_243 + 584)[2]);
	(*&Local_243 + 584)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "dogv8", 3, 742.5462f, 78.30591f, 1424.712f, 0.0f, 8.458379f, 0.0f, 69.62122f, 40.83388f, 35.96353f);
	ADD_TO_VOLUME_SET(Local_243.f_608, (*&Local_243 + 584)[3]);
	(*&Local_243 + 584)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "dogv9", 3, 749.7135f, 78.30591f, 1475.305f, 0.0f, 35.8815f, 0.0f, 69.62122f, 40.83388f, 35.96353f);
	ADD_TO_VOLUME_SET(Local_243.f_608, (*&Local_243 + 584)[4]);
	Local_243.f_620 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_saloon_lobby_set");
	(*&Local_243 + 612)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "saloonv_lobby", 2, 720.5389f, 80.55681f, 1319.615f, 0.0f, 89.99537f, 0.0f, 17.62081f, 4.280502f, 11.8605f);
	ADD_TO_VOLUME_SET(Local_243.f_620, (*&Local_243 + 612)[0]);
	Local_243.f_632 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_theatre_set");
	(*&Local_243 + 624)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "ntheatrev6", 2, 710.5497f, 82.57385f, 1289.718f, 0.0f, 90.02578f, 0.0f, 20.59159f, 8.113025f, 33.23232f);
	ADD_TO_VOLUME_SET(Local_243.f_632, (*&Local_243 + 624)[0]);
	Local_243.f_652 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_null_set");
	(*&Local_243 + 636)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "null_01", 2, 659.7327f, 80.66309f, 1314.168f, 0.0f, 0.0f, 0.0f, 3.981915f, 5.151976f, 5.252973f);
	ADD_TO_VOLUME_SET(Local_243.f_652, (*&Local_243 + 636)[0]);
	(*&Local_243 + 636)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "null_02", 2, 811.4948f, 80.66309f, 1242.025f, 0.0f, 0.0f, 0.0f, 7.153082f, 8.437317f, 12.81722f);
	ADD_TO_VOLUME_SET(Local_243.f_652, (*&Local_243 + 636)[1]);
	(*&Local_243 + 636)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "null_03", 2, 755.9504f, 79.58879f, 1265.108f, 0.0f, 0.0f, 0.0f, 3.358343f, 3.961287f, 6.017633f);
	ADD_TO_VOLUME_SET(Local_243.f_652, (*&Local_243 + 636)[2]);
	Local_243.f_824 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_generic_set");
	(*&Local_243 + 656)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_01", 2, 719.0051f, 80.66309f, 1270.237f, 0.0f, 0.0f, 0.0f, 16.3107f, 11.35147f, 17.84992f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[0]);
	(*&Local_243 + 656)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_02", 2, 755.9504f, 79.58879f, 1265.108f, 0.0f, 0.0f, 0.0f, 3.358343f, 3.961287f, 6.017633f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[1]);
	(*&Local_243 + 656)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_34", 2, 701.2072f, 80.66309f, 1269f, 0.0f, 0.0f, 0.0f, 14.14371f, 9.843351f, 14.39592f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[2]);
	(*&Local_243 + 656)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_45", 2, 698.8359f, 80.66309f, 1308.067f, 0.0f, 0.0f, 0.0f, 9.473412f, 6.593044f, 7.940928f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[3]);
	(*&Local_243 + 656)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_48", 2, 719.137f, 80.66309f, 1306.026f, 0.0f, 0.0f, 0.0f, 16.57833f, 7.39364f, 8.905197f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[4]);
	(*&Local_243 + 656)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_50", 2, 697.9652f, 80.66309f, 1347.683f, 0.0f, 0.0f, 0.0f, 7.576689f, 6.057273f, 6.696494f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[5]);
	(*&Local_243 + 656)[6] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_51", 2, 720.0439f, 80.66309f, 1351.682f, 0.0f, 0.0f, 0.0f, 17.60391f, 12.34337f, 18.48228f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[6]);
	(*&Local_243 + 656)[7] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_03", 2, 710.5839f, 80.66309f, 1347.578f, 0.0f, 0.0f, 0.0f, 3.137462f, 6.98278f, 10.45563f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[7]);
	(*&Local_243 + 656)[8] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_04", 2, 701.4631f, 80.66309f, 1368.878f, 0.0f, 0.0f, 0.0f, 13.93133f, 6.98278f, 16.21684f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[8]);
	(*&Local_243 + 656)[9] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_05", 2, 721.9731f, 80.66309f, 1371.314f, 0.0f, 0.0f, 0.0f, 9.571938f, 6.98278f, 7.319722f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[9]);
	(*&Local_243 + 656)[10] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_06", 2, 672.6883f, 80.66309f, 1372.518f, 0.0f, 0.0f, 0.0f, 12.69705f, 10.3425f, 7.957937f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[10]);
	(*&Local_243 + 656)[11] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_07", 2, 671.2278f, 80.66309f, 1363.645f, 0.0f, 0.0f, 0.0f, 15.72239f, 6.678134f, 8.588763f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[11]);
	(*&Local_243 + 656)[12] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_08", 2, 676.0389f, 80.66309f, 1383.852f, 0.0f, 0.0f, 0.0f, 9.710629f, 6.678134f, 7.967698f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[12]);
	(*&Local_243 + 656)[13] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_10", 2, 628.5198f, 81.94388f, 1374.903f, 0.0f, -4.579623f, 0.0f, 8.048456f, 8.836883f, 13.46529f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[13]);
	(*&Local_243 + 656)[14] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_12", 2, 601.7166f, 87.01135f, 1374.708f, 0.0f, 27.75126f, 0.0f, 6.865475f, 5.819565f, 8.556458f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[14]);
	(*&Local_243 + 656)[15] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_13", 2, 623.0494f, 81.94388f, 1338.679f, 0.0f, -0.4369935f, 0.0f, 7.044266f, 8.836883f, 10.06581f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[15]);
	(*&Local_243 + 656)[16] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_14", 2, 604.4156f, 91.24645f, 1275.856f, 0.0f, -15.9371f, 0.0f, 7.923491f, 14.77712f, 17.17298f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[16]);
	(*&Local_243 + 656)[17] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_15", 2, 564.4659f, 92.57674f, 1254.814f, 0.0f, -42.71138f, 0.0f, 12.70037f, 14.77712f, 17.17298f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[17]);
	(*&Local_243 + 656)[18] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_16", 2, 605.0024f, 92.57674f, 1224.546f, 0.0f, -48.25452f, 0.0f, 17.11747f, 14.77712f, 17.17298f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[18]);
	(*&Local_243 + 656)[19] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_17", 2, 660.7715f, 83.26146f, 1419.815f, 0.0f, 0.0f, 0.0f, 7.472981f, 8.806527f, 9.360711f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[19]);
	(*&Local_243 + 656)[20] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_19", 2, 711.1942f, 81.13219f, 1414.713f, 0.0f, 12.64984f, 0.0f, 15.38927f, 6.084082f, 9.799738f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[20]);
	(*&Local_243 + 656)[21] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_21", 2, 734.6071f, 81.13219f, 1413.205f, 0.0f, 12.64984f, 0.0f, 7.565314f, 8.376842f, 12.72061f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[21]);
	(*&Local_243 + 656)[22] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_22", 2, 750.4719f, 81.61691f, 1409.201f, 0.0f, -0.7728498f, 0.0f, 7.565314f, 7.660175f, 10.20408f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[22]);
	(*&Local_243 + 656)[23] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_23", 2, 788.2316f, 88.30206f, 1412.882f, 0.0f, 11.76387f, 0.0f, 16.85998f, 14.10618f, 16.55526f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[23]);
	(*&Local_243 + 656)[24] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_24", 2, 777.0667f, 94.1466f, 1449.045f, 0.0f, -4.202371f, 0.0f, 14.75591f, 14.10618f, 11.96048f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[24]);
	(*&Local_243 + 656)[25] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_25", 2, 744.9584f, 91.7512f, 1444.467f, 0.0f, 9.579886f, 0.0f, 12.48155f, 11.93197f, 10.11699f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[25]);
	(*&Local_243 + 656)[26] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_26", 2, 724.3195f, 102.9277f, 1499.536f, 0.0f, -10.94988f, 0.0f, 17.59094f, 16.1011f, 13.65195f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[26]);
	(*&Local_243 + 656)[27] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_27", 2, 753.1341f, 82.14568f, 1350.611f, 0.0f, -0.1161031f, 0.0f, 18.73808f, 16.1011f, 12.90974f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[27]);
	(*&Local_243 + 656)[28] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_28", 2, 749.0399f, 82.33894f, 1361.032f, 0.0f, -0.1161031f, 0.0f, 10.38853f, 9.475595f, 7.964375f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[28]);
	(*&Local_243 + 656)[29] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_31", 2, 748.0307f, 80.16731f, 1379.677f, 0.0f, -0.1161031f, 0.0f, 8.000346f, 9.813577f, 6.846375f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[29]);
	(*&Local_243 + 656)[30] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_33", 2, 771.7179f, 80.16731f, 1355.466f, 0.0f, -0.1161031f, 0.0f, 14.04748f, 9.813577f, 16.73632f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[30]);
	(*&Local_243 + 656)[31] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_35", 2, 772.0789f, 80.16731f, 1325.204f, 0.0f, -0.1161031f, 0.0f, 14.04748f, 9.813577f, 8.008526f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[31]);
	(*&Local_243 + 656)[32] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_36", 2, 752.0589f, 80.16731f, 1313.919f, 0.0f, -0.1161031f, 0.0f, 15.86565f, 9.813577f, 8.332936f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[32]);
	(*&Local_243 + 656)[33] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_37", 2, 770.6945f, 82.4274f, 1309.134f, 0.0f, -0.1161031f, 0.0f, 16.29833f, 11.38274f, 11.03976f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[33]);
	(*&Local_243 + 656)[34] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_38", 2, 773.9312f, 80.71098f, 1300.629f, 0.0f, -0.1161031f, 0.0f, 10.34967f, 7.653213f, 7.422611f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[34]);
	(*&Local_243 + 656)[35] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_39", 2, 772.0616f, 80.71098f, 1285.607f, 0.0f, -0.1161031f, 0.0f, 13.70134f, 7.653213f, 7.422611f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[35]);
	(*&Local_243 + 656)[36] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_40", 2, 773.6594f, 80.71098f, 1278.626f, 0.0f, -0.1161031f, 0.0f, 10.09816f, 7.653213f, 7.422611f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[36]);
	(*&Local_243 + 656)[37] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_41", 2, 774.08f, 80.71098f, 1265.002f, 0.0f, -0.1161031f, 0.0f, 9.721198f, 7.653213f, 6.597037f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[37]);
	(*&Local_243 + 656)[38] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_42", 2, 751.1092f, 83.37032f, 1286.902f, 0.0f, -0.1161031f, 0.0f, 17.9842f, 9.982813f, 8.605144f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[38]);
	(*&Local_243 + 656)[39] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_43", 2, 752.6476f, 83.37032f, 1295.584f, 0.0f, -0.1161031f, 0.0f, 15.91635f, 10.47344f, 9.028062f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[39]);
	(*&Local_243 + 656)[40] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_44", 2, 749.8453f, 83.37032f, 1303.44f, 0.0f, -0.1161031f, 0.0f, 16.16646f, 10.47344f, 8.201642f);
	ADD_TO_VOLUME_SET(Local_243.f_824, (*&Local_243 + 656)[40]);
	Local_243.f_836 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_blacksmith_set");
	(*&Local_243 + 828)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "generic_09", 2, 674.5723f, 80.66309f, 1394.737f, 0.0f, 2.457322f, 0.0f, 12.694f, 6.678134f, 9.48127f);
	ADD_TO_VOLUME_SET(Local_243.f_836, (*&Local_243 + 828)[0]);
	Local_243.f_852 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_seagulls_set");
	(*&Local_243 + 840)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "gulls1", 3, 851.8363f, 81.89945f, 1296.511f, 0.0f, 0.3603036f, 0.0f, 85.74756f, 41.01292f, 128.9268f);
	ADD_TO_VOLUME_SET(Local_243.f_852, (*&Local_243 + 840)[0]);
	(*&Local_243 + 840)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "gulls2", 3, 836.9991f, 81.89945f, 1179.526f, 0.0f, 34.21489f, 0.0f, 84.42347f, 38.58218f, 101.1785f);
	ADD_TO_VOLUME_SET(Local_243.f_852, (*&Local_243 + 840)[1]);
	Local_243.f_856 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_blackjack", 2, 718.5128f, 79.25579f, 1312.409f, 0.0f, 0.4749511f, 0.0f, 4.148842f, 4.148842f, 4.148842f);
	Local_243.f_860 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_poker", 2, 717.2479f, 79.2292f, 1325.739f, 0.0f, -0.2920592f, 0.0f, 4.792871f, 4.792871f, 4.792871f);
	Local_243.f_880 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_barnyard_set");
	(*&Local_243 + 864)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_barnyard_02", 2, 560.8457f, 87.39951f, 1322.146f, 0.0f, 0.0f, 0.0f, 27.94673f, 13.51856f, 51.41708f);
	ADD_TO_VOLUME_SET(Local_243.f_880, (*&Local_243 + 864)[0]);
	(*&Local_243 + 864)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_barnyard_03", 2, 584.4229f, 86.83189f, 1341.847f, 0.0f, 0.0f, 0.0f, 20.67807f, 12.44218f, 12.26767f);
	ADD_TO_VOLUME_SET(Local_243.f_880, (*&Local_243 + 864)[1]);
	(*&Local_243 + 864)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_barnyard_01", 2, 584.4229f, 86.83189f, 1304.895f, 0.0f, 0.0f, 0.0f, 20.67807f, 11.59534f, 15.81178f);
	ADD_TO_VOLUME_SET(Local_243.f_880, (*&Local_243 + 864)[2]);
	Local_243.f_892 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_fbi_int_set");
	(*&Local_243 + 884)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "fbiv02", 2, 766.2209f, 82.72511f, 1235.356f, 0.0f, 0.0f, 0.0f, 24.55437f, 9.946985f, 7.307757f);
	ADD_TO_VOLUME_SET(Local_243.f_892, (*&Local_243 + 884)[0]);
	Local_243.f_912 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_bank_int_set");
	(*&Local_243 + 896)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv4", 2, 687.6222f, 80.49551f, 1234.989f, 0.0f, 89.4097f, 0.0f, 16.99455f, 5.574651f, 5.091676f);
	ADD_TO_VOLUME_SET(Local_243.f_912, (*&Local_243 + 896)[0]);
	(*&Local_243 + 896)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv5", 2, 690.2325f, 80.49551f, 1228.89f, 0.0f, 89.4097f, 0.0f, 5.077168f, 5.574651f, 5.091676f);
	ADD_TO_VOLUME_SET(Local_243.f_912, (*&Local_243 + 896)[1]);
	(*&Local_243 + 896)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "bankv6", 2, 690.5524f, 80.49551f, 1240.817f, 0.0f, 89.4097f, 0.0f, 5.077168f, 5.574651f, 5.091676f);
	ADD_TO_VOLUME_SET(Local_243.f_912, (*&Local_243 + 896)[2]);
	Local_243.f_916 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_poker_H", 2, 748.9402f, 83.85324f, 1267.118f, 0.0f, 90.34145f, 0.0f, 4.798298f, 3.587841f, 4.73581f);
	Local_243.f_920 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_bank_back", 2, 680.8967f, 82.37836f, 1241.004f, 0.0f, 0.0f, 0.0f, 7.126543f, 6.574588f, 4.640002f);
	Local_243.f_984 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_streetSpawn_set");
	(*&Local_243 + 924)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetSpawn01", 2, 771.7525f, 78.30585f, 1194.439f, 0.0f, 0.0f, 0.0f, 61.83163f, 36.25699f, 105.7322f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[0]);
	(*&Local_243 + 924)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_1", 2, 698.3498f, 78.30585f, 1171.227f, 0.0f, 0.0f, 0.0f, 92.81285f, 34.24347f, 77.73894f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[1]);
	(*&Local_243 + 924)[2] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_2", 2, 736.7742f, 78.27515f, 1294.559f, 0.0f, 0.0f, 0.0f, 21.78906f, 34.24347f, 71.52024f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[2]);
	(*&Local_243 + 924)[3] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_4", 2, 788.5724f, 78.30589f, 1294.576f, 0.0f, 0.0f, 0.0f, 18.26107f, 34.24347f, 76.04086f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[3]);
	(*&Local_243 + 924)[4] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_5", 2, 747.422f, 78.30585f, 1365.236f, 0.0f, 0.0f, 0.0f, 104.6321f, 34.54143f, 42.17798f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[4]);
	(*&Local_243 + 924)[5] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_6", 2, 685.4605f, 78.18396f, 1301.025f, 0.0f, 0.0f, 0.0f, 14.67729f, 34.24347f, 62.36569f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[5]);
	(*&Local_243 + 924)[6] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_7", 2, 686.7188f, 78.30585f, 1376.857f, 0.0f, 0.0f, 0.0f, 19.91489f, 34.24347f, 37.09056f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[6]);
	(*&Local_243 + 924)[7] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_8", 2, 686.7984f, 78.30585f, 1344.384f, 0.0f, 0.0f, 0.0f, 20.20308f, 34.24347f, 7.430287f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[7]);
	(*&Local_243 + 924)[8] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_9", 2, 713.035f, 78.31379f, 1336.31f, 0.0f, 0.0f, 0.0f, 32.85799f, 34.24347f, 19.50919f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[8]);
	(*&Local_243 + 924)[9] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_10", 2, 761.3331f, 78.30588f, 1335.632f, 0.0f, 0.0f, 0.0f, 37.99918f, 34.24347f, 17.38168f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[9]);
	(*&Local_243 + 924)[10] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_11", 2, 711.4492f, 78.30646f, 1252.874f, 0.0f, 0.0f, 0.0f, 36.31134f, 34.24347f, 13.88048f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[10]);
	(*&Local_243 + 924)[11] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn02_3", 2, 669.1378f, 78.27731f, 1238.347f, 0.0f, 0.0f, 0.0f, 17.38816f, 34.24347f, 38.57463f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[11]);
	(*&Local_243 + 924)[12] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn03", 2, 759.9683f, 78.30585f, 1252.016f, 0.0f, 0.0f, 0.0f, 36.57722f, 36.57722f, 15.36263f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[12]);
	(*&Local_243 + 924)[13] = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_streetspawn09", 2, 713.1572f, 78.30591f, 1403.859f, 0.0f, 8.115254f, 0.0f, 37.81604f, 15.5878f, 19.22191f);
	ADD_TO_VOLUME_SET(Local_243.f_984, (*&Local_243 + 924)[13]);
	Local_243.f_988 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_theatrePop", 2, 710.7824f, 80.55675f, 1289.806f, 0.0f, 0.0f, 0.0f, 12.50965f, 7.019596f, 17.49664f);
	Local_243.f_992 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_highStakesSecurity", 2, 752.1826f, 83.66572f, 1270.208f, 0.0f, 0.0f, 0.0f, 2.989091f, 4.146807f, 6.575893f);
	Local_243.f_996 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_highStakesWhores", 2, 748.7577f, 83.66572f, 1271.79f, 0.0f, 0.0f, 0.0f, 6.968231f, 4.146807f, 3.084016f);
	Local_243.f_1000 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_highStakesPoker_room", 2, 755.7731f, 84.10152f, 1270.006f, 0.0f, 0.0f, 0.0f, 3.205048f, 2.879115f, 7.246208f);
	Local_243.f_1004 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_theatreweather", 2, 708.415f, 82.56446f, 1289.639f, 0.0f, 0.0f, 0.0f, 25.74156f, 9.408668f, 19.58652f);
	Local_243.f_1008 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_graveyardExit", 2, 515.0563f, 95.67864f, 1194.465f, 0.0f, -93.1861f, 0.0f, 82.11459f, 31.17953f, 170.4347f);
	Local_243.f_1024 = CREATE_VOLUME_SET_IN_LAYOUT(Local_243, "blkv_graveyard_set");
	(*&Local_243 + 1012)[0] = CREATE_VOLUME_IN_LAYOUT(Local_243, "graveyardv1", 2, 568.5518f, 95.67864f, 1202.722f, 0.0f, -93.1861f, 0.0f, 53.72871f, 31.17953f, 35.36819f);
	ADD_TO_VOLUME_SET(Local_243.f_1024, (*&Local_243 + 1012)[0]);
	(*&Local_243 + 1012)[1] = CREATE_VOLUME_IN_LAYOUT(Local_243, "graveyardv2", 2, 512.3994f, 97.66423f, 1196.842f, 0.0f, 87.16801f, 0.0f, 43.48843f, 13.32846f, 104.0232f);
	ADD_TO_VOLUME_SET(Local_243.f_1024, (*&Local_243 + 1012)[1]);
	Local_243.f_1028 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_firsttime_talk", 2, 736.7761f, 80.0f, 1292.0f, 0.0f, 0.0f, 0.0f, 110.0f, 100.0f, 110.0f);
	Local_243.f_1032 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_firsttime_start", 2, 736.7761f, 80.0f, 1292.0f, 0.0f, 0.0f, 0.0f, 170.0f, 100.0f, 170.0f);
	Local_243.f_1036 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_firsttime_stream", 2, 736.7761f, 80.0f, 1292.0f, 0.0f, 0.0f, 0.0f, 340.0f, 100.0f, 340.0f);
	Local_243.f_1040 = CREATE_VOLUME_IN_LAYOUT(Local_243, "blkv_dismount", 3, 738.7781f, 87.88023f, 1292.274f, 0.8755189f, -1.579979f, -0.455464f, 115.5923f, 48.21666f, 164.5822f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_report_crime", 757.2836f, 78.47209f, 1235.004f, 0.0f, -89.7756f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_jail_leave_end", 757.209f, 78.472f, 1234.862f, 0.0f, 90.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_jail_leave_start", 763.437f, 79.456f, 1234.952f, 0.0f, 111.092f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_jail_sit", 772.1412f, 79.45659f, 1242.596f, 0.0f, 364.7601f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_clear_bounty", 662.525f, 78.755f, 1313.455f, 0.0f, 98.16f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_cell_leave_end", 771.335f, 79.456f, 1233.199f, 0.0f, 90.12395f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blkf_cell_leave_cop", 770.4432f, 79.456f, 1238.214f, 0.0f, 259.884f, 0.0f);
	*(&Local_243 + 1044) = { 813.7691f, 79.59104f, 1227.949f };
	*(&Local_243 + 1044 + 12) = { 0.0f, -89.03281f, 0.0f };
	Local_243.f_1068 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_respawn_water_05", 813.7691f, 79.59104f, 1227.949f, 0.0f, -89.03281f, 0.0f);
	*(&Local_243 + 1072) = { 857.6336f, 78.46339f, 1236.871f };
	*(&Local_243 + 1072 + 12) = { 0.0f, -89.03281f, 0.0f };
	Local_243.f_1096 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_respawn_water_06", 857.6336f, 78.46339f, 1236.871f, 0.0f, -89.03281f, 0.0f);
	*(&Local_243 + 1100) = { 814.3057f, 77.23427f, 1286.12f };
	*(&Local_243 + 1100 + 12) = { 0.0f, -89.03281f, 0.0f };
	Local_243.f_1124 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_respawn_water_07", 814.3057f, 77.23427f, 1286.12f, 0.0f, -89.03281f, 0.0f);
	*(&Local_243 + 1128) = { 815.4921f, 79.56301f, 1259.733f };
	*(&Local_243 + 1128 + 12) = { 0.0f, -89.03281f, 0.0f };
	Local_243.f_1152 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_respawn_water_014", 815.4921f, 79.56301f, 1259.733f, 0.0f, -89.03281f, 0.0f);
	*(&Local_243 + 1156) = { 839.1734f, 78.4516f, 1250.671f };
	*(&Local_243 + 1156 + 12) = { 0.0f, -89.03281f, 0.0f };
	Local_243.f_1180 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_respawn_water_015", 839.1734f, 78.4516f, 1250.671f, 0.0f, -89.03281f, 0.0f);
	*(&Local_243 + 1184) = { 775.3324f, 78.69197f, 1318.03f };
	*(&Local_243 + 1184 + 12) = { 0.0f, -92.75435f, 0.0f };
	Local_243.f_1208 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_gunsmith", 775.3324f, 78.69197f, 1318.03f, 0.0f, -92.75435f, 0.0f);
	*(&Local_243 + 1212) = { 774.2303f, 78.46262f, 1292.043f };
	*(&Local_243 + 1212 + 12) = { 0.0f, 270.1447f, 0.0f };
	Local_243.f_1236 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_tailor", 774.2303f, 78.46262f, 1292.043f, 0.0f, 270.1447f, 0.0f);
	*(&Local_243 + 1240) = { 750.4651f, 78.18945f, 1265.279f };
	*(&Local_243 + 1240 + 12) = { 0.0f, 89.57835f, 0.0f };
	Local_243.f_1264 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_hotel", 750.4651f, 78.18945f, 1265.279f, 0.0f, 89.57835f, 0.0f);
	*(&Local_243 + 1268) = { 747.5429f, 78.30585f, 1323.35f };
	*(&Local_243 + 1268 + 12) = { 0.0f, 89.76045f, 0.0f };
	Local_243.f_1292 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_store1", 747.5429f, 78.30585f, 1323.35f, 0.0f, 89.76045f, 0.0f);
	*(&Local_243 + 1296) = { 741.4055f, 78.32f, 1321.329f };
	*(&Local_243 + 1296 + 12) = { 0.0f, 234.4381f, 0.0f };
	Local_243.f_1320 = CREATE_POINT_IN_LAYOUT(Local_243, "return_gateway_pos_store1", 741.4055f, 78.32f, 1321.329f, 0.0f, 234.4381f, 0.0f);
	*(&Local_243 + 1324) = { 741.787f, 81.233f, 1324.388f };
	*(&Local_243 + 1324 + 12) = { 0.0f, 234.4381f, 0.0f };
	Local_243.f_1348 = CREATE_POINT_IN_LAYOUT(Local_243, "camera_cut_pos2_store1", 741.787f, 81.233f, 1324.388f, 0.0f, 234.4381f, 0.0f);
	*(&Local_243 + 1352) = { 738.1561f, 81.384f, 1321.131f };
	*(&Local_243 + 1352 + 12) = { 0.0f, 234.4381f, 0.0f };
	Local_243.f_1376 = CREATE_POINT_IN_LAYOUT(Local_243, "camera_cut_pos1_store1", 738.1561f, 81.384f, 1321.131f, 0.0f, 234.4381f, 0.0f);
	*(&Local_243 + 1380) = { 743.838f, 78.413f, 1321.586f };
	*(&Local_243 + 1380 + 12) = { 0.0f, 234.4381f, 0.0f };
	Local_243.f_1404 = CREATE_POINT_IN_LAYOUT(Local_243, "return_stand_pos_store1", 743.838f, 78.413f, 1321.586f, 0.0f, 234.4381f, 0.0f);
	*(&Local_243 + 1408) = { 720.0005f, 78.30585f, 1312.0f };
	*(&Local_243 + 1408 + 12) = { 0.0f, -91.1851f, 0.0f };
	Local_243.f_1432 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_saloon", 720.0005f, 78.30585f, 1312.0f, 0.0f, -91.1851f, 0.0f);
	*(&Local_243 + 1436) = { 716.3461f, 79.38245f, 1289.751f };
	*(&Local_243 + 1436 + 12) = { 0.0f, -84.49128f, 0.0f };
	Local_243.f_1460 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_theater", 716.3461f, 79.38245f, 1289.751f, 0.0f, -84.49128f, 0.0f);
	*(&Local_243 + 1464) = { 664.1627f, 78.7551f, 1314.16f };
	*(&Local_243 + 1464 + 12) = { 0.0f, -90.44082f, 0.0f };
	Local_243.f_1488 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_train", 664.1627f, 78.7551f, 1314.16f, 0.0f, -90.44082f, 0.0f);
	*(&Local_243 + 1492) = { 559.0537f, 94.55469f, 1192.885f };
	*(&Local_243 + 1492 + 12) = { 0.0f, -46.26857f, 0.0f };
	Local_243.f_1516 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_church", 559.0537f, 94.55469f, 1192.885f, 0.0f, -46.26857f, 0.0f);
	*(&Local_243 + 1520) = { 686.1531f, 79.43501f, 1234.501f };
	*(&Local_243 + 1520 + 12) = { 0.0f, -91.31918f, 0.0f };
	Local_243.f_1544 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_interiorPoint_bank", 686.1531f, 79.43501f, 1234.501f, 0.0f, -91.31918f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos1", 518.503f, 109.865f, 1179.648f, -8.414f, -125.394f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos2", 885.73f, 99.231f, 1217.082f, -10.656f, 129.049f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos3", 694.244f, 111.065f, 1524.643f, -13.252f, -23.584f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos4", 612.272f, 95.593f, 1450.567f, -9.001f, -35.454f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos5", 780.48f, 99.04f, 1201.082f, -5.407f, 113.683f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos6", 586.377f, 93.308f, 1162.875f, 17.478f, 141.312f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos7", 728.058f, 80.017f, 1229.739f, 17.785f, -31.731f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos8", 777.901f, 86.397f, 1418.993f, 10.197f, 147.041f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos9", 568.593f, 89.009f, 1344.56f, 2.137f, -72.828f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_243, "blk_vista_cam_pos10", 686.754f, 87.687f, 1323.54f, -5.394f, 50.819f, 0.0f);
	*(&Local_243 + 1548) = { 664.3132f, 78.755f, 1315.971f };
	*(&Local_243 + 1548 + 12) = { 0.0f, 180.7735f, 0.0f };
	Local_243.f_1572 = CREATE_POINT_IN_LAYOUT(Local_243, "blkf_merc_giver", 664.3132f, 78.755f, 1315.971f, 0.0f, 180.7735f, 0.0f);
	*(&Local_243 + 1576) = { 741.746f, 78.425f, 1328.435f };
	*(&Local_243 + 1576 + 12) = { 0.0f, -90.0f, 0.0f };
	Local_243.f_1600 = CREATE_POINT_IN_LAYOUT(Local_243, "horse_pos_store1", 741.746f, 78.425f, 1328.435f, 0.0f, -90.0f, 0.0f);
	return 1;
}

void Function_454(int iParam0, int iParam1) //Position: 0x1A158 / 106840
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

void Function_455(var uParam0, int iParam1) //Position: 0x1A1A1 / 106913
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_456() //Position: 0x1A1B0 / 106928
{
	return;
}

bool Function_457() //Position: 0x1A1B6 / 106934
{
	return 1;
}

void Function_458() //Position: 0x1A1BD / 106941
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
	return;
}

bool Function_459() //Position: 0x1A229 / 107049
{
	if (Function_461())
	{
		Function_460();
		return 1;
	}
	return 0;
}

void Function_460() //Position: 0x1A23B / 107067
{
	int iVar0;
	
	Local_1004.f_12 = 2;
	Local_1004.f_16 = 3;
	*(&Local_1004 + 32) = { 530.885f, 94.369f, 1198.078f };
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*&Local_1004 + 52)[iVar0] = (*&Local_108 + 272)[iVar0];
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		(*&Local_1004 + 76)[iVar0] = (*&Local_108 + 300)[iVar0];
		iVar0++;
	}
	Local_1004.f_140 = Local_108.f_520;
	Local_1004.f_152 = 0;
	if (Function_241(Global_30734) >= 0)
	{
		Local_1004.f_144 = 0;
	}
	else
	{
		Local_1004.f_144 = 1;
	}
	Local_1004.f_148 = 3;
	return;
}

bool Function_461() //Position: 0x1A2DB / 107227
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_454(3, 3);
	uVar0 = uVar0;
	Function_190(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_190(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_190(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_low_wall_rfl", 1, 0);
	Function_190(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_185(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("Blackwater_layout");
	}
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "triggerSurvivorSystem", 2, 701.5436f, 78.30585f, 1276.022f, 0.0f, 0.0f, 0.0f, 514.5482f, 76.93849f, 308.338f);
	Local_108.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_1", 2, 754.5334f, 79.03398f, 1267.851f, 0.0f, 0.0f, 0.0f, 22.03567f, 31.08453f, 14.29633f);
	Local_108.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_2", 2, 770.935f, 81.89222f, 1322.242f, 0.0f, 0.0f, 0.0f, 16.18164f, 12.50009f, 14.29633f);
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_3", 2, 771.5578f, 81.89222f, 1286.797f, 0.0f, 0.0f, 0.0f, 17.58543f, 12.50009f, 52.37956f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_4", 2, 752.1559f, 81.89222f, 1301.85f, 0.0f, 0.0f, 0.0f, 16.18164f, 12.50009f, 54.72323f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_5", 2, 810.863f, 84.06447f, 1241.816f, 0.0f, 0.0f, 0.0f, 11.73523f, 12.50009f, 14.57157f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_6", 2, 788.2883f, 88.54328f, 1413.228f, 0.0f, 11.06068f, 0.0f, 11.61341f, 12.50009f, 12.33151f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_7", 2, 778.6614f, 92.08953f, 1449.433f, 0.0f, -5.638336f, 0.0f, 11.61341f, 16.66179f, 12.33151f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_8", 2, 718.062f, 81.89222f, 1295.245f, 0.0f, 0.0f, 0.0f, 18.82863f, 16.3222f, 68.70721f);
	Local_108.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_9", 2, 736.8108f, 81.89222f, 1191.287f, 0.0f, 0.0f, 0.0f, 48.51094f, 13.39699f, 27.44732f);
	Local_108.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_10", 2, 769.8707f, 82.4599f, 1234.892f, 0.0f, 0.0f, 0.0f, 21.22429f, 13.39699f, 19.77503f);
	Local_108.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_11", 2, 719.0986f, 82.4599f, 1351.841f, 0.0f, 0.0f, 0.0f, 15.56211f, 13.39699f, 18.23576f);
	Local_108.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_13", 2, 701.5168f, 82.4599f, 1369.143f, 0.0f, 0.0f, 0.0f, 15.56211f, 13.39699f, 17.38514f);
	Local_108.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_14", 2, 721.2412f, 81.93707f, 1368.902f, 0.0f, 0.0f, 0.0f, 11.49411f, 13.39699f, 15.90847f);
	Local_108.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_15", 2, 761.6038f, 81.93707f, 1353.956f, 0.0f, 0.0f, 0.0f, 37.48207f, 13.39699f, 24.20335f);
	Local_108.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_16", 2, 751.1933f, 81.93707f, 1375.006f, 0.0f, 0.0f, 0.0f, 16.73852f, 13.39699f, 17.59374f);
	Local_108.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_17", 2, 698.0447f, 80.81419f, 1348.198f, 0.0f, 0.0f, 0.0f, 8.150702f, 9.862112f, 8.96517f);
	Local_108.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_18", 2, 700.642f, 81.89222f, 1287.333f, 0.0f, 0.0f, 0.0f, 16.00434f, 16.3222f, 52.00218f);
	Local_108.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_19", 2, 672.0278f, 81.89222f, 1332.706f, 0.0f, 0.0f, 0.0f, 13.51831f, 16.3222f, 17.85074f);
	Local_108.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_20", 2, 662.7478f, 81.89222f, 1314.307f, 0.0f, 0.0f, 0.0f, 14.95818f, 16.3222f, 18.89109f);
	Local_108.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_21", 2, 671.6304f, 81.89222f, 1368.071f, 0.0f, 0.0f, 0.0f, 17.68105f, 16.3222f, 18.89109f);
	Local_108.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_22", 2, 674.1426f, 81.89222f, 1389.913f, 0.0f, 0.0f, 0.0f, 14.42173f, 16.3222f, 22.32273f);
	Local_108.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_23", 2, 711.5789f, 81.89222f, 1414.993f, 0.0f, -77.20113f, 0.0f, 11.03058f, 7.535629f, 22.32273f);
	Local_108.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_24", 2, 742.3478f, 81.89222f, 1411.446f, 0.0f, -82.28098f, 0.0f, 15.06627f, 7.535629f, 25.89932f);
	Local_108.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_25", 2, 661.2703f, 81.89222f, 1419.683f, 0.0f, -90.83127f, 0.0f, 11.76671f, 11.55919f, 9.236011f);
	Local_108.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_26", 2, 627.3466f, 81.89222f, 1375.064f, 0.0f, -95.06596f, 0.0f, 15.47339f, 16.90226f, 11.91588f);
	Local_108.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_27", 2, 602.0614f, 81.89222f, 1374.206f, 0.0f, -64.3229f, 0.0f, 15.47339f, 16.90226f, 11.91588f);
	Local_108.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_28", 2, 623.5632f, 81.89222f, 1339.584f, 0.0f, -89.38726f, 0.0f, 13.4279f, 16.90226f, 10.15464f);
	Local_108.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_29", 2, 583.9124f, 88.18353f, 1324.891f, 0.0f, -89.38726f, 0.0f, 25.57564f, 16.90226f, 19.136f);
	Local_108.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_30", 2, 604.1472f, 88.18353f, 1276.176f, 0.0f, -104.0415f, 0.0f, 18.64487f, 16.90226f, 9.276472f);
	Local_108.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_31", 2, 564.4509f, 91.28577f, 1255.504f, 0.0f, -134.8178f, 0.0f, 18.64487f, 16.90226f, 15.12299f);
	Local_108.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_32", 2, 604.7711f, 91.28577f, 1224.323f, 0.0f, -138.8027f, 0.0f, 18.64487f, 16.90226f, 18.46247f);
	Local_108.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_1", 2, 718.0458f, 81.89222f, 1314.451f, 0.0f, 0.0f, 0.0f, 18.59654f, 16.3222f, 25.71696f);
	Local_108.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_2", 2, 753.1475f, 81.89222f, 1266.68f, 0.0f, 0.0f, 0.0f, 20.43948f, 16.3222f, 13.4232f);
	Local_108.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_3", 2, 719.7505f, 81.89222f, 1351.856f, 0.0f, 0.0f, 0.0f, 17.55804f, 16.3222f, 18.80357f);
	Local_108.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_4", 2, 709.1932f, 81.89222f, 1280.848f, 0.0f, 0.0f, 0.0f, 36.14334f, 16.3222f, 38.49687f);
	Local_108.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_5", 2, 769.4438f, 84.0359f, 1235.024f, 0.0f, 0.0f, 0.0f, 19.81414f, 14.38264f, 18.42144f);
	Local_108.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_6", 2, 787.855f, 84.0359f, 1412.756f, 0.0f, 11.638f, 0.0f, 11.22855f, 23.157f, 11.34812f);
	Local_108.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_7", 2, 701.287f, 81.89222f, 1369.088f, 0.0f, 0.0f, 0.0f, 15.10512f, 16.3222f, 16.77639f);
	Local_108.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_8", 2, 662.8776f, 81.89222f, 1314.426f, 0.0f, 0.0f, 0.0f, 11.37235f, 16.3222f, 17.0849f);
	Local_108.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_9", 2, 750.6041f, 81.89222f, 1409.512f, 0.0f, 0.0f, 0.0f, 8.985372f, 11.34808f, 10.88084f);
	Local_108.f_220 = CREATE_OBJECTSET_IN_LAYOUT("SurvivorGroup1_defSet", Local_108, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "BLK_def2", 695.33f, 84.87696f, 1284.561f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_INT(bVar1, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_220);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "BLK_def3", 695.2338f, 84.88f, 1298.307f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_INT(bVar2, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_220);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "BLK_def1_core", 695.2228f, 84.87891f, 1281.323f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_INT(bVar3, "GiveWeapon", 44);
	DECOR_SET_BOOL(bVar3, "Core", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_220);
	Local_108.f_224 = CREATE_OBJECTSET_IN_LAYOUT("SurvivorGroup1_safeSet", Local_108, 8, 0);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "nBLK_safe1", 694.345f, 84.87891f, 1281.323f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_224);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "nBLK_safe2", 694.473f, 84.87696f, 1284.561f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_224);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "nBLK_safe3", 696.0092f, 84.83648f, 1296.946f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_224);
	Local_108.f_228 = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", Local_108, 8, 0);
	(*&Local_108 + 232)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "chest_2", 677.308f, 83.50591f, 1227.112f, 0.0f, -135.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 232)[0], Local_108.f_228);
	*(&Local_108 + 240) = { 760.5018f, 86.90958f, 1271.963f };
	*(&Local_108 + 240 + 12) = { 0.0f, -90.0f, 0.0f };
	Local_108.f_264 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", 760.5018f, 86.90958f, 1271.963f, 0.0f, -90.0f, 0.0f);
	Local_108.f_268 = CREATE_OBJECTSET_IN_LAYOUT("coffinSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 272)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_0", 549.8986f, 94.2186f, 1192.0f, 0.0f, -265.7521f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 272)[0], Local_108.f_268);
	(*&Local_108 + 272)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_1", 519.9999f, 95.12469f, 1204.0f, 0.0f, -98.51028f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 272)[1], Local_108.f_268);
	(*&Local_108 + 272)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_2", 495.9843f, 94.311f, 1188.071f, 0.0f, -90.72598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 272)[2], Local_108.f_268);
	(*&Local_108 + 272)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_3", 469.3133f, 98.6019f, 1200.0f, 0.0f, 12.39842f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 272)[3], Local_108.f_268);
	(*&Local_108 + 272)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_4", 488.274f, 97.23036f, 1206.911f, -8.122568f, -85.13523f, 6.886539f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 272)[4], Local_108.f_268);
	Local_108.f_296 = CREATE_OBJECTSET_IN_LAYOUT("zombieSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 300)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_0", 537.9926f, 94.36859f, 1200.726f, 0.0f, -90.72598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[0], Local_108.f_296);
	(*&Local_108 + 300)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_1", 538.0598f, 94.36859f, 1197.94f, 0.0f, -90.72598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[1], Local_108.f_296);
	(*&Local_108 + 300)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_2", 537.8795f, 94.36859f, 1195.216f, 0.0f, -90.72598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[2], Local_108.f_296);
	(*&Local_108 + 300)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_3", 537.8151f, 94.36859f, 1192.359f, 0.0f, -90.72598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[3], Local_108.f_296);
	(*&Local_108 + 300)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_4", 525.9158f, 94.36859f, 1199.322f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[4], Local_108.f_296);
	(*&Local_108 + 300)[5] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_5", 522.0606f, 94.85532f, 1199.322f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[5], Local_108.f_296);
	(*&Local_108 + 300)[6] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_6", 517.1386f, 95.18188f, 1199.105f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[6], Local_108.f_296);
	(*&Local_108 + 300)[7] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_7", 513.1426f, 95.70654f, 1198.857f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[7], Local_108.f_296);
	(*&Local_108 + 300)[8] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_8", 527.5528f, 94.36859f, 1195.045f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[8], Local_108.f_296);
	(*&Local_108 + 300)[9] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_9", 524.3365f, 94.36859f, 1195.437f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[9], Local_108.f_296);
	(*&Local_108 + 300)[10] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_10", 520.366f, 94.65339f, 1195.409f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[10], Local_108.f_296);
	(*&Local_108 + 300)[11] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_11", 516.32f, 95.29221f, 1195.68f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[11], Local_108.f_296);
	(*&Local_108 + 300)[12] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_12", 525.9407f, 94.24622f, 1191.504f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[12], Local_108.f_296);
	(*&Local_108 + 300)[13] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_13", 520.9338f, 94.30061f, 1191.495f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[13], Local_108.f_296);
	(*&Local_108 + 300)[14] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_14", 516.899f, 94.78615f, 1191.561f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[14], Local_108.f_296);
	(*&Local_108 + 300)[15] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_15", 514.0285f, 94.8174f, 1191.549f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[15], Local_108.f_296);
	(*&Local_108 + 300)[16] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_16", 528.2914f, 93.3646f, 1187.708f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[16], Local_108.f_296);
	(*&Local_108 + 300)[17] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_17", 524.3463f, 93.77219f, 1187.654f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[17], Local_108.f_296);
	(*&Local_108 + 300)[18] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_18", 520.3496f, 94.26744f, 1187.585f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[18], Local_108.f_296);
	(*&Local_108 + 300)[19] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_19", 515.4617f, 94.28661f, 1187.573f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[19], Local_108.f_296);
	(*&Local_108 + 300)[20] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_20", 493.8216f, 95.53751f, 1199.221f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[20], Local_108.f_296);
	(*&Local_108 + 300)[21] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_21", 489.9596f, 95.92699f, 1199.457f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[21], Local_108.f_296);
	(*&Local_108 + 300)[22] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_22", 486.0927f, 96.37646f, 1199.622f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[22], Local_108.f_296);
	(*&Local_108 + 300)[23] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_23", 481.2227f, 97.54697f, 1199.373f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[23], Local_108.f_296);
	(*&Local_108 + 300)[24] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_24", 491.5925f, 95.63563f, 1195.595f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[24], Local_108.f_296);
	(*&Local_108 + 300)[25] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_25", 487.5227f, 95.83676f, 1195.528f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[25], Local_108.f_296);
	(*&Local_108 + 300)[26] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_26", 484.1803f, 96.33928f, 1195.704f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[26], Local_108.f_296);
	(*&Local_108 + 300)[27] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_27", 480.3238f, 96.77772f, 1195.72f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[27], Local_108.f_296);
	(*&Local_108 + 300)[28] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_28", 494.088f, 94.70947f, 1191.59f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[28], Local_108.f_296);
	(*&Local_108 + 300)[29] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_29", 489.9848f, 95.39673f, 1191.508f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[29], Local_108.f_296);
	(*&Local_108 + 300)[30] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_30", 486.1131f, 95.76262f, 1191.543f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[30], Local_108.f_296);
	(*&Local_108 + 300)[31] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_31", 481.1115f, 96.26715f, 1191.498f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[31], Local_108.f_296);
	(*&Local_108 + 300)[32] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_32", 492.3056f, 94.49518f, 1187.465f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[32], Local_108.f_296);
	(*&Local_108 + 300)[33] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_33", 487.6063f, 94.90971f, 1187.321f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[33], Local_108.f_296);
	(*&Local_108 + 300)[34] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_34", 484.2368f, 95.42692f, 1187.408f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[34], Local_108.f_296);
	(*&Local_108 + 300)[35] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_35", 479.221f, 95.90733f, 1187.673f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[35], Local_108.f_296);
	(*&Local_108 + 300)[36] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_36", 473.2255f, 98.3242f, 1198.651f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 300)[36], Local_108.f_296);
	Local_108.f_452 = CREATE_OBJECTSET_IN_LAYOUT("AmmoExchangeSet", Local_108, 8, 0);
	(*&Local_108 + 456)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo1", 696.2446f, 84.87891f, 1281.317f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[0], Local_108.f_452);
	(*&Local_108 + 456)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo2", 694.845f, 84.87891f, 1281.323f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[1], Local_108.f_452);
	(*&Local_108 + 456)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo3", 696.3719f, 84.87696f, 1284.556f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[2], Local_108.f_452);
	(*&Local_108 + 456)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo4", 694.973f, 84.87696f, 1284.561f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[3], Local_108.f_452);
	(*&Local_108 + 456)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo5", 696.3559f, 84.88029f, 1298.314f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[4], Local_108.f_452);
	(*&Local_108 + 456)[5] = CREATE_POINT_IN_LAYOUT(Local_108, "Ammo6", 694.9557f, 84.88f, 1298.307f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 456)[5], Local_108.f_452);
	Local_108.f_484 = CREATE_OBJECTSET_IN_LAYOUT("BodiesFlagSet", Local_108, 8, 0);
	(*&Local_108 + 488)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "BodiesFlag01", 703.2864f, 78.306f, 1318.995f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 488)[0], Local_108.f_484);
	(*&Local_108 + 488)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "BodiesFlag02", 726.222f, 78.521f, 1225.048f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 488)[1], Local_108.f_484);
	Local_108.f_500 = CREATE_OBJECTSET_IN_LAYOUT("NormalFlagSet", Local_108, 8, 0);
	(*&Local_108 + 504)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "NormalFlag01", 693.0386f, 84.53831f, 1236.743f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 504)[0], Local_108.f_500);
	(*&Local_108 + 504)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "NormalFlag02", 693.0275f, 84.53855f, 1232.961f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 504)[1], Local_108.f_500);
	(*&Local_108 + 504)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "NormalFlag03", 669.6278f, 88.76215f, 1314.132f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 504)[2], Local_108.f_500);
	Local_108.f_520 = CREATE_POINT_IN_LAYOUT(Local_108, "gy_Boss_spawn", 533.24f, 94.369f, 1200.666f, 0.0f, 90.915f, 0.0f);
	Local_108.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", 695.0573f, 84.87891f, 1281.34f, 0.0f, 87.97826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_524), 0);
	Local_108.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", 694.4941f, 84.87696f, 1286.594f, 0.0f, 90.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_528), 0);
	Local_108.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_low_wall_rfl", "DLC_survivor_low_wall_rfl", 695.9702f, 84.88029f, 1296.948f, 0.0f, -90.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_532), 0);
	Local_108.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_108, "ZombiePack_player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", 759.0798f, 86.91051f, 1269.05f, 0.0f, 90.0f, 0.0f);
	return 1;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0x1C040 / 114752
{
	char* cVar0;
	
	if (Global_3380 || Function_53(0x8000000))
	{
		return;
	}
	cVar0 = Function_56(bParam0);
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

void Function_463(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C0D6 / 114902
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_43(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_464(bParam1))
		{
			Function_217(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_219(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_113(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_404(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_190(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_190(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_185(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_58(bParam1, Function_28(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_464(int iParam0) //Position: 0x1C1D1 / 115153
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_467(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_218(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_466(0))
		{
			return 0;
		}
		if ((!Function_51(24) || Function_465(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_465(int iParam0) //Position: 0x1C24C / 115276
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_466(int iParam0) //Position: 0x1C261 / 115297
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_49(iParam0)11].f_12 < 0;
}

bool Function_467(int iParam0, int iParam1) //Position: 0x1C2C7 / 115399
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_468() //Position: 0x1C2E3 / 115427
{
	SET_DUST_LEVEL(0);
	Function_190(&bLocal_979, "$/tune/refGroups/campsiteSets/cam_deadBody01x", 7, 0);
	Function_190(&bLocal_979, "$/tune/refGroups/campsiteSets/cam_deadBody02x", 7, 0);
	return;
}

void Function_469(bool bParam0, var uParam1) //Position: 0x1C360 / 115552
{
	if (!Function_53(128))
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

bool Function_470() //Position: 0x1C39B / 115611
{
	return Function_30(Global_13172[Function_219(111, 111, 5)11].f_20, 4);
}

