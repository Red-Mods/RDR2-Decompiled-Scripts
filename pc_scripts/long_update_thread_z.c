//Decompiled with MagicRDR v1.0
//Function Count : 733
//Statics Count : 986
//Natives Count : 651
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	struct<31> Local_16[10];
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
	bool bLocal_638 = false;
	bool bLocal_639 = false;
	bool bLocal_640 = false;
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
	bool bLocal_661 = false;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
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
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	struct<2> Local_711[5];
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	int iLocal_733[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	struct<2> Local_751 = { 0, 0 } ;
	var uLocal_753 = 0;
	float fLocal_754 = 0.0f;
	bool bLocal_755 = false;
	bool bLocal_756 = false;
	bool bLocal_757 = false;
	var uLocal_758 = 0;
	int iLocal_759 = 0;
	struct<2> Local_760 = { 0, 0 } ;
	var uLocal_762 = 0;
	struct<2> Local_763 = { 0, 0 } ;
	var uLocal_765 = 0;
	bool bLocal_766 = false;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	struct<8> Local_773[13];
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	bool bLocal_983 = false;
	bool bLocal_984 = false;
	float fLocal_985 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	bLocal_638 = false;
	bLocal_639 = false;
	bLocal_640 = false;
	iLocal_662 = 1;
	iLocal_663 = 0;
	iLocal_664 = 1;
	iLocal_665 = 1;
	iLocal_666 = 0;
	iLocal_667 = 0;
	iLocal_747 = 0;
	iLocal_748 = 0;
	bLocal_755 = false;
	bLocal_756 = false;
	iLocal_759 = 0;
	Function_729(&(Local_773[08]));
	Function_559(&(Local_773[18]));
	Function_547(&(Local_773[28]));
	Function_515(&(Local_773[38]));
	Function_513(&(Local_773[48]));
	Function_486(&(Local_773[58]));
	Function_464(&(Local_773[68]));
	Function_460(&(Local_773[78]));
	Function_261(&(Local_773[88]));
	Function_187(&(Local_773[98]));
	Function_156(&(Local_773[108]));
	Function_124(&(Local_773[118]));
	Function_5(&(Local_773[128]));
	iVar0 = 0;
	while (iVar0 <= Local_773)
	{
		if (!IS_EXITFLAG_SET())
		{
			Call_Loc(Local_773[iVar08]);
			Local_773[iVar08].f_60 = 1;
			if (UNK_0x26884138() <= 50000)
			{
				WAIT(false);
			}
		}
		iVar0++;
	}
	while (!Function_4(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Global_6605)
	{
		Function_1();
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_983 = 1000;
		SET_DEBUG_DRAW((((Global_47267[0] || Global_47267[1]) || Global_47267[2]) || Global_47267[17]));
		if (GET_DEBUG_DRAW_STATE())
		{
			bLocal_983 = false;
		}
		iVar0 = 0;
		while (iVar0 <= Local_773)
		{
			if (bLocal_984)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&Local_773[iVar08] + 24);
				PRINTSTRING(": ");
				fLocal_985 = GET_PROFILE_TIME();
			}
			Call_Loc(&Local_773[iVar08] + 8);
			if (StackVal)
			{
				bLocal_983 = false;
			}
			if (bLocal_984)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_985));
				PRINTNL();
			}
			if (!IS_EXITFLAG_SET() && !bLocal_983 != 0)
			{
				bLocal_983 = (bLocal_983 - 33);
				WAIT(false);
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_983);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Local_773)
	{
		if (Local_773[iVar08].f_60)
		{
			Call_Loc(Local_773[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x21F / 543
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (StackVal == 2)
		{
			if (Function_2(iVar0) == 1)
			{
				Global_21684[iVar07].f_4 = 0;
			}
			else
			{
				Global_21684[iVar07].f_4 = 0;
			}
		}
		iVar0++;
	}
	return;
}

int Function_2(bool bParam0) //Position: 0x266 / 614
{
	if (!Function_3(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_3(int iParam0) //Position: 0x281 / 641
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x298 / 664
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(struct<57> Param0) //Position: 0x2B4 / 692
{
	strcpy(&Param0 + 24, "TERRCONTROL", 16);
	if (Global_6666)
	{
		Param0 = 35545;
		*(&Param0 + 8) = 35538;
		*(&Param0 + 16) = 35545;
	}
	else
	{
		Param0 = 34883;
		*(&Param0 + 8) = 1471;
		*(&Param0 + 16) = 790;
	}
	Param0.f_56 = 1;
	return;
}

void Function_6() //Position: 0x316 / 790
{
	int iVar0;
	
	iVar0 = Function_8(111, 111, 5);
	Global_21684[iVar07].f_28 = 0.0f;
	if (DECOR_CHECK_EXIST(&Global_54076, "SaveSoundTrigger"))
	{
		DECOR_REMOVE(&Global_54076, "SaveSoundTrigger");
	}
	Function_7(&Global_21684[iVar07] + 20, 2);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x374 / 884
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

int Function_8(bool bParam0, bool bParam1, bool bParam2) //Position: 0x38A / 906
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_12(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_9(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_9(bParam0, bParam1, bParam2, 4294967295);
}

int Function_9(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3E8 / 1000
{
	var uVar0;
	
	if (!Function_11(bParam2))
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
	uVar0 = Function_12(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_10(uVar0);
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

var Function_10(int iParam0) //Position: 0x54C / 1356
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

bool Function_11(int iParam0) //Position: 0x58A / 1418
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_12(int iParam0, int iParam1, bool bParam2) //Position: 0x59F / 1439
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_13() //Position: 0x5BF / 1471
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	iVar0 = 4294967295;
	if (Function_115(11) && !Global_6623)
	{
		if (iVar0 == 4294967295)
		{
			iVar0 = Function_8(111, 111, 5);
		}
		if (Global_39922.f_308)
		{
			Global_39922.f_308 = 0;
			DECOR_SET_FLOAT(&Global_44085[Global_437899] + 8, "ZombieScore", 0.0f);
			Function_114(iVar0);
			return 0;
		}
		if (!Function_113(Global_21684[iVar07].f_20, 2))
		{
			Function_112(&Global_21684[iVar07] + 20, 2);
			Function_111(iVar0);
			Function_114(iVar0);
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "InitDistrict"))
		{
			Function_110(iVar0);
		}
		if (Function_113(Global_21684[iVar07].f_20, 8))
		{
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_7(&Global_21684[iVar07] + 20, 8);
				Function_108("TerrControl_TownSafe", 0x41200000, 1, 0, 2, 1, 0);
				Function_106(Global_43789);
				if (!Function_105(Global_119934, 0x2000000))
				{
					Function_100(&Global_54076, 0x2000000, 1, 0);
				}
			}
		}
		if (!Function_113(Global_21684[iVar07].f_20, 16))
		{
			if (Function_97(3, 0))
			{
				bVar1 = Global_43791[Global_46850[0]] & 268435456 != false;
				Function_96(bVar1, Global_46850[0], 0);
				Function_112(&Global_21684[iVar07] + 20, 16);
			}
		}
		if (iVar0 == 4294967295)
		{
			iVar0 = Function_8(111, 111, 5);
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "NeedWeatherInit"))
			{
				if (ZOMBIE_DLC_IS_LOAD_COMPLETE())
				{
					DECOR_REMOVE(&Global_54076, "NeedWeatherInit");
					Function_95();
				}
			}
		}
		uVar2 = Global_21684[iVar07].f_24;
		if (Global_21684[iVar07].f_16 == 4294967295)
		{
			Function_114(iVar0);
			uVar2 = Global_21684[iVar07].f_24;
		}
		if (Global_47151[31])
		{
			PRINTSTRING("Town of next attack: ");
			PRINTINT(Global_21684[iVar07].f_16);
			PRINTNL();
			PRINTSTRING("Time of next attack: ");
			Function_94(&uVar2);
			PRINTNL();
			PRINTSTRING("By comparison, ESC is: ");
			PRINTINT(12);
			PRINTNL();
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "SaveSoundTrigger"))
		{
			if (DECOR_GET_FLOAT(&Global_54076, "SaveSoundTrigger") + 4,5f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(&Global_54076, "SaveSoundTrigger");
				Global_6655 = 1;
				Global_6659 = 10;
			}
		}
		if (IS_EARLIER_THAN(&uVar2, 0))
		{
			uVar3 = Global_21684[iVar07].f_16;
			iVar4 = uVar3;
			iVar5 = Function_93(iVar4);
			uVar6 = &Global_44085[iVar59] + 8;
			bVar7 = false;
			uVar8 = Global_43791[iVar5];
			if (Function_113(uVar8, 0x10000000))
			{
				iVar9 = Function_87(&(Global_43791[iVar5]), iVar5, &uVar6, iVar0);
				if (iVar9 == 1)
				{
					bVar7 = true;
				}
				uVar10 = Function_84(iVar5, iVar9);
				switch (iVar4)
				{
					case 0x00000001:
						*(&Global_11014[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, &uVar10);
						break;
					
					case 0x00000002:
						*(&Global_11120[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, &uVar10);
						break;
					
					case 0x00000003:
						*(&Global_11146[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, &uVar10);
						break;
					
					case 0x00000004:
						*(&Global_11222[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, &uVar10);
						break;
					
					case 0x00000005:
						*(&Global_11284[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, &uVar10);
						break;
					
					case 0x00000008:
						*(&Global_11544[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, &uVar10);
						break;
					
					case 0x00000009:
						*(&Global_11646[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, &uVar10);
						break;
					
					case 0x0000000B:
						*(&Global_11726[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, &uVar10);
						break;
					
					case 0x0000000C:
						*(&Global_11836[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, &uVar10);
						break;
					
					case 0x0000000D:
						*(&Global_11946[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, &uVar10);
						break;
					
					case 0x0000000E:
						*(&Global_11988[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, &uVar10);
						break;
					
					case 0x0000000F:
						*(&Global_12048[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, &uVar10);
						break;
					
					case 0x00000010:
						*(&Global_12150[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, &uVar10);
						break;
					
					case 0x00000011:
						*(&Global_11398[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, &uVar10);
						break;
					
					case 0x00000012:
						*(&Global_12392[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, &uVar10);
						break;
					
					case 0x00000013:
						*(&Global_12422[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, &uVar10);
						break;
					
					case 0x00000015:
						*(&Global_12488[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, &uVar10);
						break;
					
					case 0x00000016:
						*(&Global_12644[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, &uVar10);
						break;
					
					case 0x00000017:
						*(&Global_12714[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, &uVar10);
						break;
					
					case 0x00000018:
						DECOR_SET_FLOAT(&Global_44085[iVar59] + 8, "ZombieScore", 0.0f);
						*(&Global_12760[02] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, &uVar10);
						break;
					
					default:
						LOG_ERROR("Some town got attacked, but it's not supposed to be!!!");
						break;
					}
			}
			Function_114(iVar0);
			if (bVar7)
			{
				uVar11 = Function_83();
				if ((GET_DAY(&uVar11) - GET_DAY(0)) <= 2)
				{
					iVar13 = (GET_DAY(0) * 24 + GET_HOUR(0));
					iVar14 = (GET_DAY(&uVar11) * 24 + GET_HOUR(&uVar11));
					iVar15 = (iVar14 - iVar13);
					iVar12 = (48 - iVar15);
					Function_82(0, iVar12, 0, 0, 1);
					Function_114(iVar0);
				}
			}
		}
		if (Global_43789 != 4294967294)
		{
			if (Function_80(Global_43789))
			{
				iVar16 = Function_79(Global_43789);
				fVar17 = Function_78(Global_43789);
				uVar18 = Function_77(iVar16);
				if (fVar17 <= 300.0f && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), 0))
				{
					if (DECOR_CHECK_EXIST(&Global_44085[Global_437899] + 8, "DelayNewAttack_Days"))
					{
						bVar19 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "DelayNewAttack_Days");
						DECOR_REMOVE(&Global_44085[Global_437899] + 8, "DelayNewAttack_Days");
					}
					if (DECOR_CHECK_EXIST(&Global_44085[Global_437899] + 8, "DelayNewAttack_Hours"))
					{
						bVar20 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "DelayNewAttack_Hours");
						DECOR_REMOVE(&Global_44085[Global_437899] + 8, "DelayNewAttack_Hours");
					}
					if (DECOR_CHECK_EXIST(&Global_44085[Global_437899] + 8, "DelayNewAttack_Minutes"))
					{
						bVar21 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "DelayNewAttack_Minutes");
						DECOR_REMOVE(&Global_44085[Global_437899] + 8, "DelayNewAttack_Minutes");
					}
					if (DECOR_CHECK_EXIST(&Global_44085[Global_437899] + 8, "DelayNewAttack_Seconds"))
					{
						bVar22 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "DelayNewAttack_Seconds");
						DECOR_REMOVE(&Global_44085[Global_437899] + 8, "DelayNewAttack_Seconds");
					}
					Function_64(Global_43789);
					Function_63(iVar16, bVar19, bVar20, bVar21, bVar22);
					Function_114(iVar0);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					Function_61(659, 1, 0, 0);
					Function_58(iVar16);
					*(&Global_39922 + 148[1]) = GET_TIME_OF_DAY();
					Global_39922[1] = Global_43789;
					Function_16(1);
					Function_15(0, 10);
					DECOR_SET_FLOAT(&Global_54076, "SaveSoundTrigger", GET_CURRENT_GAME_TIME());
					Function_112(&Global_21684[iVar07] + 20, 8);
				}
			}
			else
			{
				SET_POP_DENSITY_MULTIPLIER(1.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				Function_14(1);
			}
		}
	}
	else if (Function_115(11) && Global_6623)
	{
		if (!Global_39922.f_308)
		{
			*(&Global_39922 + 148[0]) = GET_TIME_OF_DAY();
			Global_39922.f_308 = 1;
			PRINTSTRING("Time of suspension: ");
			Function_94(&Global_39922 + 148[0]);
			PRINTNL();
		}
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0xF70 / 3952
{
	if (Function_113(iParam0, 1) && !Function_113(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_15(bool bParam0, int iParam1) //Position: 0xF9D / 3997
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

void Function_16(bool bParam0) //Position: 0xFDC / 4060
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_47();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_17();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_7(&Global_99144, 1);
		Function_7(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_17() //Position: 0x1031 / 4145
{
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_42();
	Function_42();
	Function_25(0);
	Function_25(0);
	Function_22();
	Function_21();
	Function_20();
	Function_19();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_18();
	return;
}

void Function_18() //Position: 0x107C / 4220
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

void Function_19() //Position: 0x1182 / 4482
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

void Function_20() //Position: 0x11B5 / 4533
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

void Function_21() //Position: 0x1348 / 4936
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

void Function_22() //Position: 0x1501 / 5377
{
	Function_23(&Global_42918, 1, 0);
	return;
}

void Function_23(struct<2317> Param0) //Position: 0x150F / 5391
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
	
	uVar0 = Function_24();
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
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

int Function_24() //Position: 0x172C / 5932
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_25(int iParam0) //Position: 0x1741 / 5953
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
					iVar2 = ((Function_41((50 + iVar4)) + Function_41((183 + iVar4))) + Function_41((90 + iVar4)));
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
	Function_26(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_26(int iParam0, bool bParam1, bool bParam2) //Position: 0x17E8 / 6120
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
		Function_40(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_39(iParam0);
	if (&bParam2)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x1A84 / 6788
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_38(390))), 32);
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
					bVar19 = (Function_37(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_37(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_35(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_32(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_28(), &Var9);
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

float Function_28() //Position: 0x20C2 / 8386
{
	int iVar0;
	
	return &iVar0;
}

var Function_29(int iParam0) //Position: 0x20CB / 8395
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x20DC / 8412
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0) //Position: 0x21D3 / 8659
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x21EE / 8686
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_34(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_33(Function_34(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x2255 / 8789
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_34(int iParam0, bool bParam1) //Position: 0x2267 / 8807
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_35(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2279 / 8825
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
	if (((Function_36(iParam0) != 19 || Function_36(iParam0) != 17) || Function_36(iParam0) != 10) || Function_36(iParam0) != 9)
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

int Function_36(int iParam0) //Position: 0x23AD / 9133
{
	return Global_55480[iParam016].f_96;
}

float Function_37(int iParam0) //Position: 0x23BC / 9148
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_38(int iParam0) //Position: 0x23F5 / 9205
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_39(int iParam0) //Position: 0x2432 / 9266
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

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x25CC / 9676
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

int Function_41(bool bParam0) //Position: 0x2810 / 10256
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_42() //Position: 0x2851 / 10321
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
		iVar2 = ((Function_41((50 + iVar3) + 15) + Function_41((183 + iVar3) + 15)) + Function_41((90 + iVar3) + 15));
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
	Function_26(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_43() //Position: 0x28DA / 10458
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
			iVar2 = ((Function_41((50 + iVar3) + 8) + Function_41((183 + iVar3) + 8)) + Function_41((90 + iVar3) + 8));
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
	Function_26(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x2971 / 10609
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
		iVar2 = ((Function_41((50 + iVar3)) + Function_41((183 + iVar3))) + Function_41((90 + iVar3)));
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
	Function_26(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_45() //Position: 0x29F0 / 10736
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_46(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_26(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2) //Position: 0x2A2D / 10797
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
	Function_40(iParam0, bParam1, 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_27(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_47() //Position: 0x2C39 / 11321
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_57())
	{
		Function_54(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_54(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_49(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_49(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_48(StackVal, Var0))
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

bool Function_48(char* cParam0) //Position: 0x2CF0 / 11504
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_49(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x2D08 / 11528
{
	int iVar0;
	
	iVar0 = Function_52(&uParam2, &fParam3);
	if (Function_51(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_112(&Global_99144, 1);
			Function_7(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_112(&Global_99144, 2);
			Function_7(&Global_99144, 1);
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
		Function_112(&Global_99144, 2);
		Function_7(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_50();
	return StackVal, Function_50();
}

struct<8> Function_50() //Position: 0x2E00 / 11776
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_51(int iParam0) //Position: 0x2E0A / 11786
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_52(bool bParam0, bool bParam1) //Position: 0x2E20 / 11808
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
				fVar2 = Function_53(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_53(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_51(iVar0) && !&bParam1)
	{
		iVar0 = Function_52(&bParam0, 1);
	}
	return iVar0;
}

float Function_53(struct<2> Param0, struct<2> Param2) //Position: 0x2EEC / 12012
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_54(float fParam0, int iParam1) //Position: 0x2F09 / 12041
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_56(&Global_54076, &Var3);
	if (!Function_55(Global_46760[0]))
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
	if (!Function_55(Global_46760[2]))
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
	if (!Function_55(Global_46760[1]))
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
	if (!Function_55(Global_46796[1]))
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
	if (!Function_55(Global_46796[3]))
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
	if (!Function_55(Global_46796[2]))
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
	if (!Function_55(Global_46796[4]))
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
	if (!Function_55(Global_46816[0]))
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
	if (!Function_55(Global_46816[1]))
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
	if (!Function_55(Global_46816[2]))
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
	if (!Function_55(Global_46838[0]))
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
	if (!Function_55(Global_46850[0]))
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
	if (!Function_55(Global_46850[1]))
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
	if (!Function_55(Global_46850[2]))
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
	if (!Function_55(Global_46866[0]))
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
	if (!Function_55(Global_46866[1]))
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
	if (!Function_55(Global_46866[2]))
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
	if (!Function_55(Global_46894[2]))
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
	if (!Function_55(Global_46894[3]))
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
	if (!Function_55(Global_46894[0]))
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
	if (!Function_55(Global_46914[0]))
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
	if (!Function_55(Global_46926[2]))
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
	if (!Function_55(Global_46926[1]))
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
	if (!Function_55(Global_46926[0]))
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
	if (!Function_55(Global_46838[1]))
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
	if (!Function_55(Global_46894[1]))
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
	Function_112(&Global_99144, 2);
	Function_7(&Global_99144, 1);
	iParam1 = 0;
	if (Function_48(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_55(int iParam0) //Position: 0x3735 / 14133
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_113(uVar0, 0x1000000) || Function_113(uVar0, 0x2000000)) || Function_113(uVar0, 0x4000000)) || !Function_113(uVar0, 0x10000000));
}

void Function_56(var uParam0, var uParam1) //Position: 0x3770 / 14192
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

bool Function_57() //Position: 0x377F / 14207
{
	if (Function_113(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_58(int iParam0) //Position: 0x379A / 14234
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 4294967295;
	if (iParam0 == 1)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 2)
	{
		bVar0 = false;
	}
	else if (iParam0 == 3)
	{
		bVar0 = 12;
	}
	else if (iParam0 == 4)
	{
		bVar0 = 31;
	}
	else if (iParam0 == 5)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 8)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 9)
	{
		bVar0 = 23;
	}
	else if (iParam0 == 11)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 12)
	{
		bVar0 = 14;
	}
	else if (iParam0 == 13)
	{
		bVar0 = 10;
	}
	else if (iParam0 == 14)
	{
		bVar0 = 6;
	}
	else if (iParam0 == 15)
	{
		bVar0 = 5;
	}
	else if (iParam0 == 16)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 17)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 18)
	{
		bVar0 = 17;
	}
	else if (iParam0 == 19)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 22)
	{
		bVar0 = 19;
	}
	else if (iParam0 == 23)
	{
		bVar0 = 29;
	}
	else if (iParam0 == 24)
	{
		bVar0 = 13;
	}
	bVar1 = false;
	if (bVar0 != 4294967295)
	{
		bVar2 = true;
		if (bVar0 != 31 && Function_59(64))
		{
			_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 13, 15.0f, 1);
		}
		else if (bVar0 == 31)
		{
			if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 10) - _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 7) - _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			return;
		}
		if (bVar0 != 29 && !Function_59(32))
		{
			if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 10) - _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 7) - _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			return;
		}
		if (bVar0 == 29)
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 12, 0) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
			{
				bVar2 = !ACTOR_HAS_WEAPON(&Global_54076, 29);
				_ADD_AMMO_OF_TYPE(&Global_54076, 12, 10.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 10) - _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 7) - _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		if (bVar0 == 24)
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 5, 0) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 5))
			{
				bVar2 = !ACTOR_HAS_WEAPON(&Global_54076, 24);
				_ADD_AMMO_OF_TYPE(&Global_54076, 5, 4.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 10) - _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 7) - _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		else if (bVar0 == 23)
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, 4, 0) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 4))
			{
				bVar2 = !ACTOR_HAS_WEAPON(&Global_54076, 23);
				_ADD_AMMO_OF_TYPE(&Global_54076, 4, 4.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 10) - _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(&Global_54076, 7) - _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		SET_WEAPONENUM_LOCKED(bVar0, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, bVar0, false, 1, 1);
		if (bVar2)
		{
			if (!Function_105(Global_119934, 0x1000000))
			{
				Function_100(&Global_54076, 0x1000000, 1, 0);
			}
		}
		if (!bVar1)
		{
			bVar3 = GET_AMMOENUM_FOR_WEAPONENUM(bVar0);
			if (bVar3 != 4294967295)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, bVar3, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
			}
		}
	}
	return;
}

bool Function_59(int iParam0) //Position: 0x3C11 / 15377
{
	return Function_60(Global_131807.f_1304, iParam0);
}

int Function_60(var uParam0, int iParam1) //Position: 0x3C23 / 15395
{
	return (uParam0 && iParam1) == 0;
}

int Function_61(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3C30 / 15408
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
	Function_40(iParam0, TO_FLOAT(bParam1), 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_62(iParam0);
	return 1;
}

void Function_62(int iParam0) //Position: 0x3E58 / 15960
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

void Function_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3EF6 / 16118
{
	while (&bParam4 > 60)
	{
		bParam4 = (&bParam4 - 60);
		bParam3 = &bParam3 + 1;
	}
	while (&bParam3 > 60)
	{
		bParam3 = (&bParam3 - 60);
		bParam2 = &bParam2 + 1;
	}
	while (&bParam2 > 24)
	{
		bParam2 = (&bParam2 - 24);
		bParam1 = &bParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&bParam1, &bParam2, &bParam3, &bParam4));
			break;
	}
}

void Function_64(bool bParam0) //Position: 0x4216 / 16918
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	
	DECOR_SET_BOOL(&Global_54076, "CurrentTown_Safe", 1);
	uVar0 = Function_84(bParam0, 0);
	uVar1 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&uVar1, &uVar0);
	if (bParam0 == Global_46760[0])
	{
		*(&Global_11014[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 18;
	}
	else if (bParam0 == Global_46760[2])
	{
		*(&Global_11120[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 29;
	}
	else if (bParam0 == Global_46760[1])
	{
		*(&Global_11146[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 23;
	}
	else if (bParam0 == Global_46796[1])
	{
		*(&Global_11222[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 22;
	}
	else if (bParam0 == Global_46796[3])
	{
		*(&Global_11284[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 30;
	}
	else if (bParam0 == Global_46816[0])
	{
		*(&Global_11544[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 16;
	}
	else if (bParam0 == Global_46816[1])
	{
		*(&Global_11646[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 17;
	}
	else if (bParam0 == Global_46838[0])
	{
		*(&Global_11726[02] + 8) = &uVar1;
		iVar2 = 14;
		iVar3 = 3;
	}
	else if (bParam0 == Global_46850[0])
	{
		*(&Global_11836[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 19;
	}
	else if (bParam0 == Global_46850[1])
	{
		*(&Global_11946[02] + 8) = &uVar1;
		iVar2 = 14;
		iVar3 = 0;
	}
	else if (bParam0 == Global_46850[2])
	{
		*(&Global_11988[02] + 8) = &uVar1;
		iVar2 = 14;
		iVar3 = 1;
	}
	else if (bParam0 == Global_46866[0])
	{
		*(&Global_12048[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 20;
	}
	else if (bParam0 == Global_46866[1])
	{
		*(&Global_12150[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 27;
	}
	else if (bParam0 == Global_46866[2])
	{
		*(&Global_11398[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 26;
	}
	else if (bParam0 == Global_46894[3])
	{
		*(&Global_12392[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 28;
	}
	else if (bParam0 == Global_46894[0])
	{
		*(&Global_12422[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 25;
	}
	else if (bParam0 == Global_46914[0])
	{
		*(&Global_12488[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 15;
	}
	else if (bParam0 == Global_46926[2])
	{
		*(&Global_12644[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 21;
	}
	else if (bParam0 == Global_46926[1])
	{
		*(&Global_12714[02] + 8) = &uVar1;
		iVar2 = 13;
		iVar3 = 24;
	}
	else if (bParam0 == Global_46926[0])
	{
		*(&Global_12760[02] + 8) = &uVar1;
		iVar2 = 14;
		iVar3 = 2;
	}
	if (iVar2 != 0)
	{
		Function_76(iVar2, iVar3);
	}
	iVar4 = Global_43791[bParam0];
	Function_7(&iVar4, 0x4000000);
	Function_7(&iVar4, 0x2000000);
	Function_7(&iVar4, 0x1000000);
	Function_112(&iVar4, 0x10000000);
	Global_43791[bParam0] = iVar4;
	uVar5 = &Global_44085[bParam09] + 8;
	if (IS_VOLUME_VALID(&uVar5))
	{
		if (DECOR_CHECK_EXIST(&uVar5, "AttackBlip"))
		{
			REMOVE_BLIP(DECOR_GET_INT(&uVar5, "AttackBlip"));
			DECOR_REMOVE(&uVar5, "AttackBlip");
		}
	}
	uVar6 = Function_75(&uVar5, 564, 0.0f);
	DECOR_SET_INT(&uVar5, "AttackBlip", &uVar6);
	SET_BLIP_NAME(&uVar6, "Status_SafeTown");
	UNK_0xFF3DB575(&uVar6, 1);
	SET_BLIP_PRIORITY(&uVar6, 3);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam09] + 8);
	Function_73(bParam0, 1);
	if (Global_43789 != bParam0)
	{
		Function_69(bParam0, 0);
	}
	Function_68(1, 4294967295);
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
	{
		if (Function_65())
		{
			if (!Global_6606)
			{
				LOG_ERROR("All towns are safe! Normally, you'd get an achievement for this.");
			}
			else
			{
				AWARD_ACHIEVEMENT(46);
			}
		}
	}
	uVar7 = (*&Global_39922 + 244)[0];
	bVar8 = Function_79(bParam0);
	if (!Function_113((*&Global_39922 + 244)[0], FLOOR(POW(2.0f, TO_FLOAT(bVar8)))))
	{
		Function_61(658, 1, 0, 0);
	}
	Function_112(&Global_39922 + 244[0], FLOOR(POW(2.0f, TO_FLOAT(bVar8))));
	PRINTSTRING("Setting new attack time in TERRITORY_CONTROL_SET_TOWN_AS_SAFE to: ");
	Function_94(&uVar1);
	PRINTNL();
	return;
}

bool Function_65() //Position: 0x476D / 18285
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 < 24)
	{
		iVar1 = iVar0;
		if (((iVar1 == 20 && iVar1 == 10) && iVar1 == 7) && iVar1 == 6)
		{
			if (Function_66(iVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_66(int iParam0) //Position: 0x47AD / 18349
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
	return (Function_80(iVar0) || Function_67(iParam0));
}

bool Function_67(int iParam0) //Position: 0x47EC / 18412
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

var Function_68(bool bParam0, int iParam1) //Position: 0x4810 / 18448
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "player_sleep");
		if (&iParam1 == Global_46736[2])
		{
			ITERATE_IN_SPHERE(StackVal, &uVar1, Vector(123,033f, 72,791f, 2669,954f), 10.0f);
		}
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&uVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
			if (IS_GRINGO_VALID(&bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar3, bParam0);
				uVar4 = GET_OBJECT_FROM_GRINGO(&bVar3);
				uVar5 = GET_BLIP_ON_OBJECT(&uVar4);
				if (IS_BLIP_VALID(&uVar5))
				{
					REMOVE_BLIP(&uVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", 1);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, true);
					if (&iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(&uVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(&uVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return iVar0;
}

void Function_69(bool bParam0, bool bParam1) //Position: 0x494F / 18767
{
	if (!Function_72(bParam0))
	{
		return;
	}
	if (bParam1 && Function_71("noZombieFireArt"))
	{
		return;
	}
	if (bParam0 == Global_46760[0])
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
	else if (bParam0 == Global_46760[1])
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
	else if (bParam0 == Global_46760[2])
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
	else if (bParam0 == Global_46796[1])
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
	else if (bParam0 == Global_46796[3])
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
	else if (bParam0 == Global_46796[2])
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
	else if (bParam0 == Global_46796[4])
	{
	}
	else if (bParam0 == Global_46816[0])
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
	else if (bParam0 == Global_46816[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_70(5))
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
	else if (bParam0 == Global_46816[2])
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
	else if (bParam0 == Global_46838[1])
	{
	}
	else if (bParam0 == Global_46838[0])
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
	else if (bParam0 == Global_46850[0])
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
	else if (bParam0 == Global_46850[1])
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
	else if (bParam0 == Global_46850[2])
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
	else if (bParam0 == Global_46866[0])
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
	else if (bParam0 == Global_46866[1])
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
	else if (bParam0 == Global_46866[2])
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
	else if (bParam0 == Global_46894[2])
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
	else if (bParam0 == Global_46894[1])
	{
	}
	else if (bParam0 == Global_46894[0])
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
	else if (bParam0 == Global_46894[3])
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
	else if (bParam0 == Global_46926[0])
	{
	}
	else if (bParam0 == Global_46926[1])
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
	else if (bParam0 == Global_46926[2])
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
	else if (bParam0 == Global_46914[0])
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
	else if (bParam0 == Global_46914[1])
	{
	}
	return;
}

bool Function_70(bool bParam0) //Position: 0x50A5 / 20645
{
	if (Global_116927[bParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_71(bool bParam0) //Position: 0x50BA / 20666
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_72(bool bParam0) //Position: 0x50DC / 20700
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_73(bool bParam0, bool bParam1) //Position: 0x50F2 / 20722
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_79(bParam0);
	if (iVar0 != 0)
	{
		iVar1 = Function_74(iVar0);
		if (iVar1 != 34)
		{
			ENABLE_WEATHER_SPHERE(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
	}
	return;
}

int Function_74(int iParam0) //Position: 0x5128 / 20776
{
	if (iParam0 == 1)
	{
		return 2;
	}
	if (iParam0 == 2)
	{
		return 3;
	}
	if (iParam0 == 3)
	{
		return 4;
	}
	if (iParam0 == 4)
	{
		return 5;
	}
	if (iParam0 == 5)
	{
		return 6;
	}
	if (iParam0 == 6)
	{
		return 7;
	}
	if (iParam0 == 7)
	{
		return 8;
	}
	if (iParam0 == 8)
	{
		return 9;
	}
	if (iParam0 == 9)
	{
		return 10;
	}
	if (iParam0 == 10)
	{
		return 11;
	}
	if (iParam0 == 11)
	{
		return 12;
	}
	if (iParam0 == 12)
	{
		return 13;
	}
	if (iParam0 == 13)
	{
		return 14;
	}
	if (iParam0 == 14)
	{
		return 15;
	}
	if (iParam0 == 15)
	{
		return 16;
	}
	if (iParam0 == 16)
	{
		return 17;
	}
	if (iParam0 == 17)
	{
		return 18;
	}
	if (iParam0 == 25)
	{
		return 19;
	}
	if (iParam0 == 18)
	{
		return 20;
	}
	if (iParam0 == 19)
	{
		return 21;
	}
	if (iParam0 == 20)
	{
		return 22;
	}
	if (iParam0 == 21)
	{
		return 23;
	}
	if (iParam0 == 22)
	{
		return 24;
	}
	if (iParam0 == 23)
	{
		return 25;
	}
	if (iParam0 == 24)
	{
		return 26;
	}
	return 34;
}

bool Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x5265 / 21093
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&iParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == bParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&iParam0, bParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_76(int iParam0, int iParam1) //Position: 0x52BE / 21182
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

var Function_77(int iParam0) //Position: 0x5328 / 21288
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

var Function_78(int iParam0) //Position: 0x546B / 21611
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[iParam09] + 8;
	if (IS_VOLUME_VALID(&uVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(&uVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(&uVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

int Function_79(bool bParam0) //Position: 0x54CA / 21706
{
	if (bParam0 == Global_46760[0])
	{
		return 1;
	}
	if (bParam0 == Global_46760[2])
	{
		return 2;
	}
	if (bParam0 == Global_46760[1])
	{
		return 3;
	}
	if (bParam0 == Global_46796[1])
	{
		return 4;
	}
	if (bParam0 == Global_46796[3])
	{
		return 5;
	}
	if (bParam0 == Global_46816[0])
	{
		return 8;
	}
	if (bParam0 == Global_46816[1])
	{
		return 9;
	}
	if (bParam0 == Global_46838[0])
	{
		return 11;
	}
	if (bParam0 == Global_46850[0])
	{
		return 12;
	}
	if (bParam0 == Global_46850[1])
	{
		return 13;
	}
	if (bParam0 == Global_46850[2])
	{
		return 14;
	}
	if (bParam0 == Global_46866[0])
	{
		return 15;
	}
	if (bParam0 == Global_46866[1])
	{
		return 16;
	}
	if (bParam0 == Global_46866[2])
	{
		return 17;
	}
	if (bParam0 == Global_46894[2])
	{
		return 25;
	}
	if (bParam0 == Global_46894[3])
	{
		return 18;
	}
	if (bParam0 == Global_46894[0])
	{
		return 19;
	}
	if (bParam0 == Global_46914[0])
	{
		return 21;
	}
	if (bParam0 == Global_46926[2])
	{
		return 22;
	}
	if (bParam0 == Global_46926[1])
	{
		return 23;
	}
	if (bParam0 == Global_46926[0])
	{
		return 24;
	}
	if (bParam0 == Global_46838[1])
	{
		return 26;
	}
	if (bParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x5650 / 22096
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
	return (((Function_113(uVar0, 0x1000000) || Function_113(uVar0, 0x2000000)) || Function_113(uVar0, 0x4000000)) || Function_81(iParam0));
}

var Function_81(int iParam0) //Position: 0x56C3 / 22211
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x56E0 / 22240
{
	if (!&bParam4 || (bParam4 && !Function_66(1)))
	{
		Function_63(1, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(2)))
	{
		Function_63(2, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(3)))
	{
		Function_63(3, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(4)))
	{
		Function_63(4, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(5)))
	{
		Function_63(5, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(8)))
	{
		Function_63(8, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(9)))
	{
		Function_63(9, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(11)))
	{
		Function_63(11, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(12)))
	{
		Function_63(12, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(13)))
	{
		Function_63(13, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(14)))
	{
		Function_63(14, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(15)))
	{
		Function_63(15, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(16)))
	{
		Function_63(16, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(17)))
	{
		Function_63(17, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(18)))
	{
		Function_63(18, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(19)))
	{
		Function_63(19, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(21)))
	{
		Function_63(21, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(22)))
	{
		Function_63(22, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(23)))
	{
		Function_63(23, iParam0, iParam1, iParam2, iParam3);
	}
	if (!&bParam4 || (bParam4 && !Function_66(24)))
	{
		Function_63(24, iParam0, iParam1, iParam2, iParam3);
	}
}

var Function_83() //Position: 0x594A / 22858
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (!Function_80(Global_46760[0]))
	{
		if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar0))
		{
			iVar0 = &Global_11014[02] + 8;
		}
	}
	if (!Function_80(Global_46760[2]))
	{
		if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar0))
		{
			iVar0 = &Global_11120[02] + 8;
		}
	}
	if (!Function_80(Global_46760[1]))
	{
		if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar0))
		{
			iVar0 = &Global_11146[02] + 8;
		}
	}
	if (!Function_80(Global_46796[1]))
	{
		if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar0))
		{
			iVar0 = &Global_11222[02] + 8;
		}
	}
	if (!Function_80(Global_46796[3]))
	{
		if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar0))
		{
			iVar0 = &Global_11284[02] + 8;
		}
	}
	if (!Function_80(Global_46816[0]))
	{
		if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar0))
		{
			iVar0 = &Global_11544[02] + 8;
		}
	}
	if (!Function_80(Global_46816[1]))
	{
		if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar0))
		{
			iVar0 = &Global_11646[02] + 8;
		}
	}
	if (!Function_80(Global_46838[0]))
	{
		if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar0))
		{
			iVar0 = &Global_11726[02] + 8;
		}
	}
	if (!Function_80(Global_46850[0]))
	{
		if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar0))
		{
			iVar0 = &Global_11836[02] + 8;
		}
	}
	if (!Function_80(Global_46850[1]))
	{
		if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar0))
		{
			iVar0 = &Global_11946[02] + 8;
		}
	}
	if (!Function_80(Global_46850[2]))
	{
		if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar0))
		{
			iVar0 = &Global_11988[02] + 8;
		}
	}
	if (!Function_80(Global_46866[0]))
	{
		if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar0))
		{
			iVar0 = &Global_12048[02] + 8;
		}
	}
	if (!Function_80(Global_46866[1]))
	{
		if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar0))
		{
			iVar0 = &Global_12150[02] + 8;
		}
	}
	if (!Function_80(Global_46866[2]))
	{
		if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar0))
		{
			iVar0 = &Global_11398[02] + 8;
		}
	}
	if (!Function_80(Global_46894[3]))
	{
		if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar0))
		{
			iVar0 = &Global_12392[02] + 8;
		}
	}
	if (!Function_80(Global_46894[0]))
	{
		if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar0))
		{
			iVar0 = &Global_12422[02] + 8;
		}
	}
	if (!Function_80(Global_46914[0]))
	{
		if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar0))
		{
			iVar0 = &Global_12488[02] + 8;
		}
	}
	if (!Function_80(Global_46926[2]))
	{
		if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar0))
		{
			iVar0 = &Global_12644[02] + 8;
		}
	}
	if (!Function_80(Global_46926[1]))
	{
		if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar0))
		{
			iVar0 = &Global_12714[02] + 8;
		}
	}
	if (!Function_80(Global_46926[0]))
	{
		if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar0))
		{
			iVar0 = &Global_12760[02] + 8;
		}
	}
	return &iVar0;
}

var Function_84(int iParam0, int iParam1) //Position: 0x5CBC / 23740
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	
	if (&iParam1 == 1)
	{
		bVar0 = true;
		bVar1 = false;
	}
	else if (&iParam1 != 3 || &iParam1 != 2)
	{
		iVar2 = 9;
		bVar12 = Function_86(&iVar2, iParam0);
		bVar0 = false;
		bVar1 = ROUND((48.0f / TO_FLOAT(bVar12)));
	}
	else
	{
		iVar13 = Function_79(iParam0);
		iVar14 = 9;
		iVar24 = Function_86(&iVar14, iParam0);
		bVar25 = Function_85(iVar13);
		if (bVar25 == 0)
		{
			bVar0 = true;
			bVar1 = false;
		}
		else
		{
			bVar26 = (1.0f + ((2.0f * TO_FLOAT(bVar25)) / IntToFloat(iVar24)));
			bVar0 = FLOOR(bVar26);
			bVar1 = ROUND(((bVar26 - TO_FLOAT(bVar0)) * 24.0f));
		}
	}
	while (bVar1 > 24)
	{
		bVar1 = (bVar1 - 24);
		bVar0++;
	}
	iVar27 = MAKE_TIME_OF_DAY_EX(bVar0, bVar1, 0, 0);
	PRINTSTRING("Time we're adding to cur time to murder a survivor: ");
	Function_94(&iVar27);
	PRINTNL();
	return &iVar27;
}

int Function_85(int iParam0) //Position: 0x5DC3 / 24003
{
	var uVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	uVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_86(&iVar1, uVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_113(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_86(int[] iParam0) //Position: 0x5FAD / 24493
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

var Function_87(var uParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x63DC / 25564
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	char* cVar8[32];
	char* cVar16[32];
	
	iVar0 = 0;
	uVar1 = uParam0;
	iVar2 = Function_79(bParam1);
	if (Function_113(uVar1, 0x8000000))
	{
		Function_92(iVar2, 9999, 23, 59, 59);
		return iVar0;
	}
	bVar3 = false;
	bVar5 = 4294967295;
	iVar6 = Function_85(iVar2);
	iVar6 = (iVar6 - FLOOR(Global_21684[Function_8(0, bParam1, 3)7].f_28));
	if (!Function_113(uVar1, 0x1000000))
	{
		if (Function_85(iVar2) != 0)
		{
			Function_112(&uVar1, 0x10000000);
			Function_112(&uVar1, 0x1000000);
			uParam0 = uVar1;
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&uParam2))))
			{
				if (GET_BLIP_ICON(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&uParam2))) != 566)
				{
					bVar5 = 563;
				}
			}
			else
			{
				bVar5 = 563;
			}
			Function_73(bParam1, 0);
			Function_69(bParam1, 1);
			Function_91(bParam1);
			iVar0 = 1;
		}
		else
		{
			Function_112(&uVar1, 0x4000000);
			uParam0 = uVar1;
			Function_73(bParam1, 0);
			Function_69(bParam1, 1);
			bVar5 = 318;
			iVar0 = 4;
		}
	}
	else if (Function_113(uVar1, 0x1000000) && !Function_113(uVar1, 0x2000000))
	{
		if (bParam1 != Global_43789)
		{
			if (iVar6 >= 0)
			{
				iVar7 = Function_8(0, bParam1, 3);
				if (Function_113(Global_21684[iVar77].f_24, 0x40000000))
				{
					Function_112(&uVar1, 0x2000000);
					uParam0 = uVar1;
					Function_69(bParam1, 1);
					bVar5 = 562;
					iVar0 = 2;
				}
			}
			else
			{
				Function_112(&uVar1, 0x4000000);
				uParam0 = uVar1;
				Function_69(bParam1, 1);
				bVar5 = 318;
				iVar0 = 4;
			}
			Function_73(bParam1, 0);
		}
		else
		{
			Function_92(iVar2, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_63(iVar2, 0, (RAND_INT_RANGE(false, 100000) % 3), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_114(iParam3);
			iVar0 = 0;
		}
	}
	else if (Function_113(uVar1, 0x2000000) && !Function_113(uVar1, 0x4000000))
	{
		if (bParam1 != Global_43789)
		{
			if (iVar6 >= 0)
			{
				Function_89(iVar2);
				iVar6 = (iVar6 - 1);
				Function_69(bParam1, 1);
				if (iVar6 < 0)
				{
					bVar3 = true;
					Function_112(&uVar1, 0x4000000);
					uParam0 = uVar1;
					bVar5 = 318;
					iVar0 = 4;
				}
				else
				{
					cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(bParam1) };
					if (bParam1 == Global_46914[0])
					{
						strcpy(&cVar8, "grtv_blackwater", 32);
					}
					else if (bParam1 == Global_46926[0])
					{
						strcpy(&cVar8, "cocv_region", 32);
					}
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLostSurv", &cVar8, 0, 0, 0, 2, 0, 0);
					if (!Function_105(Global_119934, 0x20000000))
					{
						Function_100(&Global_54076, 0x20000000, 1, 0);
					}
					iVar0 = 3;
				}
			}
			else
			{
				Function_112(&uVar1, 0x4000000);
				uParam0 = uVar1;
				Function_69(bParam1, 1);
				bVar5 = 318;
				iVar0 = 4;
			}
			Function_73(bParam1, 0);
		}
		else
		{
			Function_92(iVar2, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_63(iVar2, (RAND_INT_RANGE(false, 100000) % 3) + 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_114(iParam3);
		}
	}
	else if (Function_113(uVar1, 0x4000000))
	{
	}
	if (bVar5 != 4294967295)
	{
		if (IS_VOLUME_VALID(&uParam2))
		{
			DECOR_SET_FLOAT(&uParam2, "ZombieScore", 0.0f);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&uParam2))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&uParam2)));
			}
			uVar4 = Function_75(&uParam2, bVar5, 0.0f);
			if (bVar5 != 564)
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
			}
			cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(bParam1) };
			if (bParam1 == Global_46914[0])
			{
				strcpy(&cVar16, "grtv_blackwater", 32);
			}
			else if (bParam1 == Global_46926[0])
			{
				strcpy(&cVar16, "cocv_region", 32);
			}
			if (bVar5 == 563)
			{
				PRINT_HELP_FORMAT(10.0f, "TerrCont_TownUnderAttack", &cVar16, 0, 0, 0, 2, 0, 0);
				SET_BLIP_NAME(&uVar4, "Status_UnderAttack");
				if (!Function_105(Global_119934, 0x8000000))
				{
					Function_100(&Global_54076, 0x8000000, 1, 0);
				}
			}
			else if (bVar5 == 562)
			{
				PRINT_HELP_FORMAT(10.0f, "TerrCont_TownOverrun", &cVar16, 0, 0, 0, 2, 0, 0);
				SET_BLIP_NAME(&uVar4, "Status_Overrun");
				if (!Function_105(Global_119934, 0x10000000))
				{
					Function_100(&Global_54076, 0x10000000, 1, 0);
				}
			}
			else if (bVar5 == 318)
			{
				if (bVar3)
				{
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLost", &cVar16, 0, 0, 0, 2, 0, 0);
				}
				else
				{
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLost_NoSurv", &cVar16, 0, 0, 0, 2, 0, 0);
				}
				SET_BLIP_NAME(&uVar4, "Status_Lost");
				if (!Function_105(Global_119934, 0x40000000))
				{
					Function_100(&Global_54076, 0x40000000, 1, 0);
				}
			}
		}
		if (IS_BLIP_VALID(&uVar4))
		{
			UNK_0xFF3DB575(&uVar4, 1);
			if (bVar5 != 318)
			{
				SET_BLIP_PRIORITY(&uVar4, 3);
			}
		}
	}
	return iVar0;
}

struct<32> Function_88(bool bParam0) //Position: 0x693B / 26939
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_72(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[bParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_89(int iParam0) //Position: 0x69FD / 27133
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_93(iParam0);
	iVar1 = Function_8(0, bVar0, 3);
	Global_21684[iVar17].f_28 = (Global_21684[iVar17].f_28 + 1.0f);
	Function_90(660, 1, 0);
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x6A30 / 27184
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
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_91(bool bParam0) //Position: 0x6C2D / 27693
{
	if (StackVal && StackVal == 2 == 1)
	{
		Global_21684[Function_8(0, bParam0, 3)7].f_20 = 0;
	}
	return;
}

void Function_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6C5C / 27740
{
	switch (iParam0)
	{
		case 0x00000001:
			(&Global_11014[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000002:
			*(&Global_11120[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000003:
			*(&Global_11146[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000004:
			*(&Global_11222[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000005:
			*(&Global_11284[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000008:
			*(&Global_11544[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000009:
			*(&Global_11646[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x0000000B:
			*(&Global_11726[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x0000000C:
			*(&Global_11836[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x0000000D:
			*(&Global_11946[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x0000000E:
			*(&Global_11988[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x0000000F:
			*(&Global_12048[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000010:
			*(&Global_12150[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000011:
			*(&Global_11398[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000012:
			*(&Global_12392[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000013:
			*(&Global_12422[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000015:
			*(&Global_12488[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000016:
			*(&Global_12644[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000017:
			*(&Global_12714[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
		
		case 0x00000018:
			*(&Global_12760[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4);
			break;
	}
}

var Function_93(int iParam0) //Position: 0x6EFF / 28415
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

void Function_94(var uParam0) //Position: 0x7085 / 28805
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

void Function_95() //Position: 0x70CF / 28879
{
	Function_73(Global_46760[0], !Function_80(Global_46760[0]));
	Function_73(Global_46760[2], !Function_80(Global_46760[2]));
	Function_73(Global_46760[1], !Function_80(Global_46760[1]));
	Function_73(Global_46796[1], !Function_80(Global_46796[1]));
	Function_73(Global_46796[3], !Function_80(Global_46796[3]));
	Function_73(Global_46796[2], !Function_80(Global_46796[2]));
	Function_73(Global_46796[4], 0);
	Function_73(Global_46816[0], !Function_80(Global_46816[0]));
	Function_73(Global_46816[1], !Function_80(Global_46816[1]));
	Function_73(Global_46816[2], 0);
	Function_73(Global_46838[0], !Function_80(Global_46838[0]));
	Function_73(Global_46850[0], !Function_80(Global_46850[0]));
	Function_73(Global_46850[1], !Function_80(Global_46850[1]));
	Function_73(Global_46850[2], !Function_80(Global_46850[2]));
	Function_73(Global_46866[0], !Function_80(Global_46866[0]));
	Function_73(Global_46866[1], !Function_80(Global_46866[1]));
	Function_73(Global_46866[2], !Function_80(Global_46866[2]));
	Function_73(Global_46894[2], 0);
	Function_73(Global_46894[3], !Function_80(Global_46894[3]));
	Function_73(Global_46894[0], !Function_80(Global_46894[0]));
	Function_73(Global_46914[1], 0);
	Function_73(Global_46914[0], !Function_80(Global_46914[0]));
	Function_73(Global_46926[2], !Function_80(Global_46926[2]));
	Function_73(Global_46926[1], !Function_80(Global_46926[1]));
	Function_73(Global_46926[0], !Function_80(Global_46926[0]));
	return;
}

void Function_96(bool bParam0, int iParam1, bool bParam2) //Position: 0x728C / 29324
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_43791[iParam1];
	if (&bParam2)
	{
		if (bParam0)
		{
			uVar1 = Function_75(&Global_44085[iParam19] + 8, 566, 0.0f);
			SET_BLIP_NAME(&uVar1, "Status_Unknown");
			Function_7(&uVar0, 0x1000000);
			Function_7(&uVar0, 0x2000000);
			Function_7(&uVar0, 0x4000000);
			Function_7(&uVar0, 0x10000000);
			Global_43791[iParam1] = uVar0;
		}
		else
		{
			uVar1 = Function_75(&Global_44085[iParam19] + 8, 564, 0.0f);
			SET_BLIP_NAME(&uVar1, "Status_SafeZone");
			SET_BLIP_PRIORITY(&uVar1, 3);
		}
	}
	else if (bParam0)
	{
		uVar1 = Function_75(&Global_44085[iParam19] + 8, 566, 0.0f);
		SET_BLIP_NAME(&uVar1, "Status_Unknown");
		Function_7(&uVar0, 0x1000000);
		Function_7(&uVar0, 0x2000000);
		Function_7(&uVar0, 0x4000000);
		Function_7(&uVar0, 0x10000000);
		Global_43791[iParam1] = uVar0;
	}
	else if (Function_113(uVar0, 0x4000000))
	{
		uVar1 = Function_75(&Global_44085[iParam19] + 8, 318, 0.0f);
		SET_BLIP_NAME(&uVar1, "Status_Lost");
	}
	else if (Function_113(uVar0, 0x2000000))
	{
		uVar1 = Function_75(&Global_44085[iParam19] + 8, 562, 0.0f);
		SET_BLIP_NAME(&uVar1, "Status_Overrun");
	}
	else if (Function_113(uVar0, 0x1000000))
	{
		uVar1 = Function_75(&Global_44085[iParam19] + 8, 563, 0.0f);
		SET_BLIP_NAME(&uVar1, "Status_UnderAttack");
	}
	else if (Function_113(uVar0, 0x10000000))
	{
		uVar1 = Function_75(&Global_44085[iParam19] + 8, 564, 0.0f);
		SET_BLIP_NAME(&uVar1, "Status_SafeTown");
	}
	if (IS_BLIP_VALID(&uVar1))
	{
		UNK_0xFF3DB575(&uVar1, 1);
	}
	return;
}

bool Function_97(bool bParam0, bool bParam1) //Position: 0x749A / 29850
{
	int iVar0;
	
	iVar0 = Function_98(bParam0);
	if (!Function_3(iVar0))
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

int Function_98(int iParam0) //Position: 0x74D8 / 29912
{
	if (!Function_99(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_99(bool bParam0) //Position: 0x74F2 / 29938
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_100(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7508 / 29960
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_102(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_101(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_101(char* cParam0) //Position: 0x757D / 30077
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

bool Function_102(int iParam0, var uParam1, int iParam2) //Position: 0x75B7 / 30135
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
		if (Function_104(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_103(uVar0))
		{
			case 0x00000002:
				if (!Function_105(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_103(char* cParam0) //Position: 0x7633 / 30259
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

int Function_104(int iParam0) //Position: 0x76D4 / 30420
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_7(&iVar1, 2147483648);
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

bool Function_105(var uParam0, int iParam1) //Position: 0x7711 / 30481
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_106(var uParam0) //Position: 0x7724 / 30500
{
	var uVar0;
	
	if (Global_6623 || Function_4(0x8000000))
	{
		return;
	}
	uVar0 = Function_107(uParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

int Function_107(int iParam0) //Position: 0x775E / 30558
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_46838[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46894[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46926[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46850[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46850[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46850[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46866[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46894[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46760[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46760[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46760[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_46796[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46796[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46838[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return &iVar0;
}

void Function_108(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AA6 / 31398
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_109(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_109(bool bParam0) //Position: 0x7B31 / 31537
{
	char* cVar0[16];
	
	if (!Function_57())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_110(int iParam0) //Position: 0x7B70 / 31600
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = DECOR_GET_INT(&Global_54076, "InitDistrict");
	DECOR_REMOVE(&Global_54076, "InitDistrict");
	if (bVar0 == Global_46736[0])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46760[0]] & 268435456 != false;
		Function_96(bVar1, Global_46760[0], 0);
		bVar1 = Global_43791[Global_46760[2]] & 268435456 != false;
		Function_96(bVar1, Global_46760[2], 0);
		bVar1 = Global_43791[Global_46760[1]] & 268435456 != false;
		Function_96(bVar1, Global_46760[1], 0);
		Function_112(&Global_21684[iParam07] + 20, 8388608);
	}
	else if (bVar0 == Global_46736[2])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46816[0]] & 268435456 != false;
		Function_96(bVar1, Global_46816[0], 0);
		bVar1 = Global_43791[Global_46816[1]] & 268435456 != false;
		Function_96(bVar1, Global_46816[1], 0);
		Function_112(&Global_21684[iParam07] + 20, 4194304);
	}
	else if (bVar0 == Global_46736[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46796[1]] & 268435456 != false;
		Function_96(bVar1, Global_46796[1], 0);
		bVar1 = Global_43791[Global_46796[3]] & 268435456 != false;
		Function_96(bVar1, Global_46796[3], 0);
		Function_112(&Global_21684[iParam07] + 20, 0x1000000);
	}
	else if (bVar0 == Global_46736[3])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46838[0]] & 268435456 != false;
		Function_96(bVar1, Global_46838[0], 0);
		bVar1 = Global_43791[Global_46838[1]] & 268435456 != false;
		Function_96(bVar1, Global_46838[1], 1);
		Function_112(&Global_21684[iParam07] + 20, 0x2000000);
	}
	else if (bVar0 == Global_46746[2])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46866[0]] & 268435456 != false;
		Function_96(bVar1, Global_46866[0], 0);
		bVar1 = Global_43791[Global_46866[1]] & 268435456 != false;
		Function_96(bVar1, Global_46866[1], 0);
		bVar1 = Global_43791[Global_46866[2]] & 268435456 != false;
		Function_96(bVar1, Global_46866[2], 0);
		Function_112(&Global_21684[iParam07] + 20, 0x40000000);
	}
	else if (bVar0 == Global_46746[0])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		if (Function_97(3, 0))
		{
			bVar1 = Global_43791[Global_46850[0]] & 268435456 != false;
			Function_96(bVar1, Global_46850[0], 0);
		}
		bVar1 = Global_43791[Global_46850[1]] & 268435456 != false;
		Function_96(bVar1, Global_46850[1], 0);
		bVar1 = Global_43791[Global_46850[2]] & 268435456 != false;
		Function_96(bVar1, Global_46850[2], 0);
		Function_112(&Global_21684[iParam07] + 20, 0x10000000);
	}
	else if (bVar0 == Global_46746[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46894[2]] & 268435456 != false;
		Function_96(bVar1, Global_46894[2], 1);
		bVar1 = Global_43791[Global_46894[3]] & 268435456 != false;
		Function_96(bVar1, Global_46894[3], 0);
		bVar1 = Global_43791[Global_46894[0]] & 268435456 != false;
		Function_96(bVar1, Global_46894[0], 0);
		bVar1 = Global_43791[Global_46894[1]] & 268435456 != false;
		Function_96(bVar1, Global_46894[1], 1);
		Function_112(&Global_21684[iParam07] + 20, 0x20000000);
	}
	else if (bVar0 == Global_46754[0])
	{
		Function_112(&Global_21684[iParam07] + 20, 0x8000000);
	}
	else if (bVar0 == Global_46754[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_43791[Global_46926[2]] & 268435456 != false;
		Function_96(bVar1, Global_46926[2], 0);
		bVar1 = Global_43791[Global_46926[1]] & 268435456 != false;
		Function_96(bVar1, Global_46926[1], 0);
		bVar1 = Global_43791[Global_46926[0]] & 268435456 != false;
		Function_96(bVar1, Global_46926[0], 0);
		Function_112(&Global_21684[iParam07] + 20, 0x4000000);
	}
	return;
}

void Function_111(int iParam0) //Position: 0x80DF / 32991
{
	bool bVar0;
	
	if (Function_113(Global_21684[&iParam07].f_20, 0x8000000))
	{
		bVar0 = Global_43791[Global_46914[0]] & 268435456 != false;
		Function_96(bVar0, Global_46914[0], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x4000000))
	{
		bVar0 = Global_43791[Global_46926[2]] & 268435456 != false;
		Function_96(bVar0, Global_46926[2], 0);
		bVar0 = Global_43791[Global_46926[1]] & 268435456 != false;
		Function_96(bVar0, Global_46926[1], 0);
		bVar0 = Global_43791[Global_46926[0]] & 268435456 != false;
		Function_96(bVar0, Global_46926[0], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 8388608))
	{
		bVar0 = Global_43791[Global_46760[0]] & 268435456 != false;
		Function_96(bVar0, Global_46760[0], 0);
		bVar0 = Global_43791[Global_46760[2]] & 268435456 != false;
		Function_96(bVar0, Global_46760[2], 0);
		bVar0 = Global_43791[Global_46760[1]] & 268435456 != false;
		Function_96(bVar0, Global_46760[1], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x1000000))
	{
		bVar0 = Global_43791[Global_46796[1]] & 268435456 != false;
		Function_96(bVar0, Global_46796[1], 0);
		bVar0 = Global_43791[Global_46796[3]] & 268435456 != false;
		Function_96(bVar0, Global_46796[3], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 4194304))
	{
		bVar0 = Global_43791[Global_46816[0]] & 268435456 != false;
		Function_96(bVar0, Global_46816[0], 0);
		bVar0 = Global_43791[Global_46816[1]] & 268435456 != false;
		Function_96(bVar0, Global_46816[1], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x2000000))
	{
		bVar0 = Global_43791[Global_46838[0]] & 268435456 != false;
		Function_96(bVar0, Global_46838[0], 0);
		bVar0 = Global_43791[Global_46838[1]] & 268435456 != false;
		Function_96(bVar0, Global_46838[1], 1);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x10000000))
	{
		if (Function_97(2, 0))
		{
			bVar0 = Global_43791[Global_46850[0]] & 268435456 != false;
			Function_96(bVar0, Global_46850[0], 0);
		}
		bVar0 = Global_43791[Global_46850[1]] & 268435456 != false;
		Function_96(bVar0, Global_46850[1], 0);
		bVar0 = Global_43791[Global_46850[2]] & 268435456 != false;
		Function_96(bVar0, Global_46850[2], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x40000000))
	{
		bVar0 = Global_43791[Global_46866[0]] & 268435456 != false;
		Function_96(bVar0, Global_46866[0], 0);
		bVar0 = Global_43791[Global_46866[1]] & 268435456 != false;
		Function_96(bVar0, Global_46866[1], 0);
		bVar0 = Global_43791[Global_46866[2]] & 268435456 != false;
		Function_96(bVar0, Global_46866[2], 0);
	}
	if (Function_113(Global_21684[&iParam07].f_20, 0x20000000))
	{
		bVar0 = Global_43791[Global_46894[2]] & 268435456 != false;
		Function_96(bVar0, Global_46894[2], 1);
		bVar0 = Global_43791[Global_46894[3]] & 268435456 != false;
		Function_96(bVar0, Global_46894[3], 0);
		bVar0 = Global_43791[Global_46894[0]] & 268435456 != false;
		Function_96(bVar0, Global_46894[0], 0);
		bVar0 = Global_43791[Global_46894[1]] & 268435456 != false;
		Function_96(bVar0, Global_46894[1], 1);
	}
	return;
}

void Function_112(int iParam0, bool bParam1) //Position: 0x849F / 33951
{
	iParam0 = (iParam0 || bParam1);
	return;
}

bool Function_113(bool bParam0, bool bParam1) //Position: 0x84B0 / 33968
{
	return (bParam0 && bParam1) == 0;
}

void Function_114(int iParam0) //Position: 0x84BD / 33981
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_8(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_67(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_67(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_67(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_67(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_67(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_67(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_67(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_67(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_67(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_67(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_67(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_67(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_67(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_67(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_67(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_67(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_67(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_67(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_67(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_67(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_115(int iParam0) //Position: 0x8827 / 34855
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_116() //Position: 0x8843 / 34883
{
	int iVar0;
	
	(&Global_12482[02] + 8) = MAKE_TIME_OF_DAY_EX(9999, 9, 9, 9);
	Global_39922[1] = 4294967295;
	iVar0 = Function_8(111, 111, 5);
	Global_21684[iVar07].f_28 = 0.0f;
	Function_7(&Global_21684[iVar07] + 20, 8);
	Function_119(1);
	DECOR_SET_BOOL(&Global_54076, "NeedWeatherInit", 1);
	DECOR_SET_INT(&Global_54076, "TerrCont_NextDayMod", GET_DAY(0));
	SET_FACTIONS_STATUS_TWO_WAY(4, 32, 4);
	SET_FACTIONS_STATUS_TWO_WAY(8, 32, 4);
	Function_7(&Global_21684[iVar07] + 20, 2);
	if (Function_118() || !Global_6606)
	{
		Function_117(11, 1);
	}
	else
	{
		Function_117(11, 0);
	}
	Function_114(iVar0);
	Global_39922.f_308 = 0;
	return;
}

void Function_117(int iParam0, int iParam1) //Position: 0x8906 / 35078
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

bool Function_118() //Position: 0x8924 / 35108
{
	return Function_113(Global_21684[Function_8(111, 111, 5)7].f_20, 4);
}

void Function_119(bool bParam0) //Position: 0x893C / 35132
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_26200 - 1))
	{
		if (IS_DOOR_VALID(&Global_26200[iVar014] + 80))
		{
			if (bParam0)
			{
				Function_121(&Global_26200[iVar014] + 80, 0);
			}
			else
			{
				Function_120(&Global_26200[iVar014] + 80, 0);
			}
		}
		if (IS_DOOR_VALID(&Global_26200[iVar014] + 88))
		{
			if (bParam0)
			{
				Function_121(&Global_26200[iVar014] + 88, 0);
			}
			else
			{
				Function_120(&Global_26200[iVar014] + 88, 0);
			}
		}
		if (IS_OBJECT_VALID(&Global_26200[iVar014] + 104))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iVar014] + 104), false);
		}
		Global_26200[iVar014].f_40 = 6;
		if (IS_OBJECT_VALID(&Global_26200[iVar014] + 104))
		{
			DECOR_SET_BOOL(&Global_26200[iVar014] + 104, "SavingAtBedAllowed", 0);
		}
		iVar0++;
	}
	return;
}

void Function_120(var uParam0, int iParam1) //Position: 0x8A1F / 35359
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

void Function_121(var uParam0, int iParam1) //Position: 0x8A7A / 35450
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

int Function_122() //Position: 0x8AD2 / 35538
{
	return 0;
}

void Function_123() //Position: 0x8AD9 / 35545
{
	return;
}

void Function_124(struct<57> Param0) //Position: 0x8ADF / 35551
{
	strcpy(&Param0 + 24, "ITEMEFFECTS", 16);
	Param0 = 41876;
	*(&Param0 + 8) = 35635;
	*(&Param0 + 16) = 35612;
	Param0.f_56 = 1;
	return;
}

void Function_125() //Position: 0x8B1C / 35612
{
	if (IS_OBJECT_VALID(&uLocal_771))
	{
		DESTROY_OBJECT(&uLocal_771);
	}
	return;
}

int Function_126() //Position: 0x8B33 / 35635
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 <= Local_711)
	{
		switch (bVar0)
		{
			case 0x00000000:
				if (StackVal)
				{
					if (StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						SET_INFINITE_DEADEYE(0, 0);
						SET_DEADEYE_BLINK(0.0f);
						DECOR_REMOVE(&Global_54076, "nmoonshine");
						Local_711[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "nmoonshine"))
				{
					Local_711[bVar02] = DECOR_GET_FLOAT(&Global_54076, "nmoonshine");
					Local_711[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_711[bVar02].f_8 = 1;
					SET_INFINITE_DEADEYE(0, 1);
					SET_DEADEYE_BLINK(10.0f);
				}
				break;
			
			case 0x00000001:
				if (StackVal)
				{
					if (StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						if (IS_ACTOR_VALID(&uLocal_769) && DECOR_CHECK_EXIST(&uLocal_769, "horse_pills_effect"))
						{
							if (HORSE_UNLOCK_FRESHNESS(&uLocal_769))
							{
								DECOR_REMOVE(&uLocal_769, "horse_pills_effect");
								Local_711[bVar02].f_8 = 0;
							}
						}
						else
						{
							Local_711[bVar02].f_8 = 0;
						}
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "horse_pills"))
				{
					Local_711[bVar02] = DECOR_GET_FLOAT(&Global_54076, "horse_pills");
					Local_711[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_711[bVar02].f_8 = 1;
					uLocal_769 = GET_MOUNT(&Global_54076);
					if (IS_ACTOR_VALID(&uLocal_769))
					{
						HORSE_SET_CURR_FRESHNESS(&uLocal_769, 1.0f);
						HORSE_LOCK_FRESHNESS(&uLocal_769);
						DECOR_SET_BOOL(&uLocal_769, "horse_pills_effect", 1);
					}
					DECOR_REMOVE(&Global_54076, "horse_pills");
				}
				break;
			
			case 0x00000002:
				if (StackVal)
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
					{
						Function_154();
						if (!DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
						{
							uLocal_749 = ADD_BLIP_FOR_COORD(&Local_751, 335, 0, 2, 0);
						}
						DECOR_REMOVE(&Global_54076, "CreateDecal");
					}
					if (Function_152(StackVal, &Global_54076, Local_751) > 5.0f && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_108("item_bait_move", 10.0f, 1, 0, 0, 0, 0);
					}
					if (!iLocal_759)
					{
						if (Function_149(StackVal, Local_760))
						{
						}
						else
						{
							if (IS_BLIP_VALID(&uLocal_749))
							{
								REMOVE_BLIP(&uLocal_749);
							}
							DECOR_REMOVE(&Global_54076, "bait");
							DECOR_REMOVE(&Global_54076, "baitSafePos");
							Local_711[bVar02].f_8 = 0;
						}
					}
					else if (iLocal_759)
					{
						iVar3 = 1;
						iVar2 = 0;
						while (iVar2 <= iLocal_733)
						{
							if (IS_ACTOR_VALID(&(iLocal_733[iVar2])))
							{
								iVar3 = 0;
								if (Function_152(StackVal, &(iLocal_733[iVar1]), Local_751) > 4.0f)
								{
									TASK_PRIORITY_SET(&(iLocal_733[iVar2]), 2);
									SET_ACTOR_UPDATE_PRIORITY(&(iLocal_733[iVar2]), false);
								}
							}
							iVar2++;
						}
					}
					if ((StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME() || iVar3)
					{
						if (IS_BLIP_VALID(&uLocal_749))
						{
							REMOVE_BLIP(&uLocal_749);
						}
						iVar1 = 0;
						while (iVar1 <= iLocal_733)
						{
							if (IS_OBJECT_VALID(&(iLocal_733[iVar1])))
							{
								RELEASE_ACTOR_AS_AMBIENT(&(iLocal_733[iVar1]));
							}
							iVar1++;
						}
						iLocal_759 = 0;
						DECOR_REMOVE(&Global_54076, "bait");
						DECOR_REMOVE(&Global_54076, "baitSafePos");
						Local_711[bVar02].f_8 = 0;
					}
					else if (StackVal && Function_152(!Function_48(StackVal, Local_751), &Global_54076, Local_751) < 200.0f)
					{
						if (IS_BLIP_VALID(&uLocal_749))
						{
							REMOVE_BLIP(&uLocal_749);
						}
						iVar1 = 0;
						while (iVar1 <= iLocal_733)
						{
							if (IS_OBJECT_VALID(&(iLocal_733[iVar1])))
							{
								RELEASE_ACTOR_AS_AMBIENT(&(iLocal_733[iVar1]));
							}
							iVar1++;
						}
						iLocal_759 = 0;
						DECOR_REMOVE(&Global_54076, "bait");
						DECOR_REMOVE(&Global_54076, "baitSafePos");
						Local_711[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "bait"))
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
					{
						Function_154();
						uLocal_749 = ADD_BLIP_FOR_COORD(&Local_751, 335, 0, 2, 0);
						DECOR_REMOVE(&Global_54076, "CreateDecal");
					}
					if (iLocal_748 == 0)
					{
						Function_131(bVar0);
					}
					if (iLocal_748 <= 5)
					{
						if (Function_130(&Local_760))
						{
							if (Function_129(StackVal, Local_760))
							{
								bLocal_755 = true;
							}
						}
					}
					else if (iLocal_748 <= 10)
					{
						if (Function_128(&Local_760))
						{
							if (Function_129(StackVal, Local_760))
							{
								bLocal_755 = true;
							}
						}
					}
					iLocal_748++;
					if (bLocal_755)
					{
						if (IS_OBJECT_VALID(&bLocal_757))
						{
							if (NAV_QUERY_IS_DONE(&bLocal_757))
							{
								NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(&bLocal_757, &bLocal_756);
								NAV_QUERY_STOP(&bLocal_757);
								DESTROY_OBJECT(&bLocal_757);
							}
							else
							{
								break;
							}
						}
						if (bLocal_756)
						{
							Local_760 = Local_763;
						}
						else
						{
							bLocal_757 = CREATE_NAV_QUERY(&Global_46715, "item_bait_navquery");
							Local_763 = Local_760;
							NAV_QUERY_START_CAN_PATH_TO_POINT(&bLocal_757, Local_763, Local_751, bLocal_766);
						}
					}
					if (iLocal_748 < 10 && !bLocal_756)
					{
						DECOR_GET_VECTOR(&Global_54076, "baitSafePos", &Local_760);
						bLocal_756 = true;
					}
					if (bLocal_756)
					{
						iLocal_748 = 0;
						if (IS_OBJECT_VALID(&bLocal_757))
						{
							NAV_QUERY_STOP(&bLocal_757);
							DESTROY_OBJECT(&bLocal_757);
						}
						AMBIENT_RESET_USED_CELLS();
						Local_711[bVar02] = DECOR_GET_FLOAT(&Global_54076, "bait");
						Local_711[bVar02].f_4 = GET_CURRENT_GAME_TIME();
						Local_711[bVar02].f_8 = 1;
					}
				}
				break;
			
			case 0x00000003:
				if (StackVal)
				{
					if (StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(&Global_54076, "survivalist");
						Function_108("item_herbs_end", 10.0f, 1, 0, 0, 0, 0);
						Local_711[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "survivalist"))
				{
					Local_711[bVar02] = DECOR_GET_FLOAT(&Global_54076, "survivalist");
					Local_711[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_711[bVar02].f_8 = 1;
				}
				break;
			
			case 0x00000004:
				if (StackVal)
				{
					if (StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(&Global_54076, "phosphorous");
						Function_108("phosphorous_end", 10.0f, 1, 0, 0, 0, 0);
						Local_711[bVar02].f_8 = 0;
						SET_PHOSPHORUS_AMMO_ACTIVE(0);
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "phosphorous"))
				{
					Local_711[bVar02] = DECOR_GET_FLOAT(&Global_54076, "phosphorous");
					Local_711[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_711[bVar02].f_8 = 1;
					if (Function_127(19) || Function_127(22))
					{
						Local_711[bVar02] = (Local_711[bVar02] * 2.0f);
					}
					Function_108("phosphorous_start", 10.0f, 1, 0, 0, 0, 0);
					SET_PHOSPHORUS_AMMO_ACTIVE(1);
				}
				break;
			
			default:
				if (StackVal)
				{
					LOG_ERROR("Melissa needs to build an item effect for this!");
					if (StackVal + Local_711[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						Local_711[bVar02].f_8 = 1;
					}
				}
				break;
		}
		bVar0++;
	}
	return 0;
}

int Function_127(int iParam0) //Position: 0x9387 / 37767
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0) //Position: 0x9398 / 37784
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(64, 8.0f, 1);
	AMBIENT_SET_ELEVATION_FILTER(-10.0f, 10.0f);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(50.0f, 120.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,6f, 4.0f);
	return AMBIENT_GET_POINT(&iParam0, 0);
}

bool Function_129(struct<2> Param0) //Position: 0x9405 / 37893
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_130(int iParam0) //Position: 0x9484 / 38020
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(4, -4.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(64, 12.0f, 1);
	AMBIENT_SET_ELEVATION_FILTER(-6.0f, 6.0f);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(50.0f, 100.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,4f, 4.0f);
	return AMBIENT_GET_POINT(&iParam0, 0);
}

void Function_131(int iParam0) //Position: 0x94F5 / 38133
{
	iLocal_759 = 0;
	bLocal_755 = false;
	bLocal_756 = false;
	Local_760 = Vector(0.0f, 0.0f, 0.0f);
	Local_763 = Vector(0.0f, 0.0f, 0.0f);
	Local_751 = Global_54078;
	fLocal_754 = Function_148(&Global_54076);
	Function_137(&bLocal_766);
	if (IS_OBJECT_VALID(&bLocal_757))
	{
		NAV_QUERY_STOP(&bLocal_757);
		DESTROY_OBJECT(&bLocal_757);
	}
	if (IS_BLIP_VALID(&uLocal_749))
	{
		REMOVE_BLIP(&uLocal_749);
	}
	if (!Function_133(&Global_54076, 0, 0))
	{
		if (IS_OBJECT_VALID(&uLocal_771))
		{
			DESTROY_OBJECT(&uLocal_771);
		}
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			uLocal_771 = CREATE_GRINGO_IN_LAYOUT(StackVal, &Global_46715, "nitem_bait", "nitem_bait", Local_751, Vector(0.0f, fLocal_754, 0.0f));
			SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_771, "UseCase1", false, 0, 0);
			TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_771), "UseCase1", 1, 1);
			if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
			{
				Function_154();
				uLocal_749 = ADD_BLIP_FOR_COORD(&Local_751, 335, 0, 2, 0);
				DECOR_REMOVE(&Global_54076, "CreateDecal");
			}
		}
		else
		{
			Function_154();
			uLocal_749 = ADD_BLIP_FOR_COORD(&Local_751, 335, 0, 2, 0);
		}
		if (!Function_105(Global_119937, 32))
		{
			HUD_CLEAR_HELP();
			Function_100(&Global_54076, 32, 4, 0);
		}
	}
	else
	{
		Function_108("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
		DECOR_REMOVE(&Global_54076, "bait");
		DECOR_REMOVE(&Global_54076, "baitSafePos");
		ADD_ITEM(Function_132(6), &Global_54076, 0);
		Local_711[iParam02].f_8 = 0;
	}
	return;
}

var Function_132(bool bParam0) //Position: 0x96B7 / 38583
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

bool Function_133(int iParam0, bool bParam1, bool bParam2) //Position: 0x97AB / 38827
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_136(&iParam0))
	{
		return 1;
	}
	if (Function_135(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_134())
	{
		return 1;
	}
	return 0;
}

bool Function_134() //Position: 0x986F / 39023
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_135(int iParam0) //Position: 0x9886 / 39046
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_136(int iParam0) //Position: 0x9892 / 39058
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_137(int iParam0) //Position: 0x98A1 / 39073
{
	if (Function_147(&(Global_46972[10]), 0, 4294967295, 0))
	{
		if (Function_146(&(Global_46972[10]), 0, 0, 0) == 4294967295 && Function_146(&(Global_46972[10]), 0, 0, 0) == 0)
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iParam0 = DECOR_GET_INT(&Global_54076, "fakeBait");
			}
			else
			{
				iParam0 = Function_139(&(Global_46972[10]), 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Function_108("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
			return;
		}
	}
	Function_108("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
	return;
	if (Function_138(iParam0))
	{
		uLocal_767 = GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0);
		if ((STRING_CONTAINS_STRING(&uLocal_767, "Cougar") || STRING_CONTAINS_STRING(&uLocal_767, "Bobcat")) || STRING_CONTAINS_STRING(&uLocal_767, "Bear"))
		{
			iLocal_747 = 1;
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				if (STRING_CONTAINS_STRING(&uLocal_767, "Bobcat"))
				{
					iLocal_747 = 3;
				}
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_767, "Wolf") || STRING_CONTAINS_STRING(&uLocal_767, "Coyote"))
		{
			iLocal_747 = RAND_INT_RANGE(2, 4);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_747 = 4;
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_767, "Buck") || STRING_CONTAINS_STRING(&uLocal_767, "Fox"))
		{
			iLocal_747 = RAND_INT_RANGE(true, 2);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_747 = 3;
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_767, "Deer"))
		{
			iLocal_747 = RAND_INT_RANGE(3, 5);
		}
		else if (STRING_CONTAINS_STRING(&uLocal_767, "Boar"))
		{
			iLocal_747 = RAND_INT_RANGE(true, 3);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_747 = 2;
			}
		}
		else
		{
			iLocal_747 = RAND_INT_RANGE(3, 6);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_747 = 4;
			}
		}
	}
	return;
}

bool Function_138(bool bParam0) //Position: 0x9AE3 / 39651
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9AFA / 39674
{
	return Function_140(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_140(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x9B18 / 39704
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&iParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_145();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_138(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_144(&iParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_144(&iParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_143(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_138(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_143(bVar0))
				{
					Function_142();
				}
				Function_141(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_138(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_141(int iParam0) //Position: 0x9E11 / 40465
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

void Function_142() //Position: 0x9EC5 / 40645
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

bool Function_143(bool bParam0) //Position: 0x9F00 / 40704
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_144(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x9F2D / 40749
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

void Function_145() //Position: 0xA088 / 41096
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_142();
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
	Function_142();
	return;
}

int Function_146(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA0D4 / 41172
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &iParam1, &iParam2, &iParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

bool Function_147(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA0F0 / 41200
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &iParam1, &iParam2);
}

var Function_148(int iParam0) //Position: 0xA11C / 41244
{
	return GET_HEADING(&iParam0);
}

bool Function_149(struct<2> Param0) //Position: 0xA128 / 41256
{
	int iVar0;
	struct<8> Var1;
	
	if (Function_138(bLocal_766))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_747)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150("BAIT_ANIMAL") };
			Local_760.f_8 = (StackVal + 0,25f);
			iLocal_733[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_46715, &Var1, bLocal_766, Param0, Vector(0.0f, 0.0f, 0.0f));
			DECOR_SET_BOOL(&(iLocal_733[iVar0]), "bShopDontKill", 1);
			TASK_GO_NEAR_COORD(&(iLocal_733[iVar0]), &Local_751, 1.0f, 4);
			TASK_PRIORITY_SET(&(iLocal_733[iVar0]), false);
			SET_ACTOR_UPDATE_PRIORITY(&(iLocal_733[iVar0]), false);
			iVar0++;
		}
		iLocal_759 = 1;
		return 1;
	}
	return 0;
}

struct<32> Function_150(char* cParam0) //Position: 0xA1DF / 41439
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &cVar8, ""), 4);
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

struct<32> Function_151(char* cParam0) //Position: 0xA24B / 41547
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_152(float fParam0, struct<2> Param1) //Position: 0xA26D / 41581
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		Function_153(&fParam0);
		Var0 = Function_153(&fParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_153(var uParam0) //Position: 0xA2E4 / 41700
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

void Function_154() //Position: 0xA350 / 41808
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Local_751;
	UNK_0x44986367(&Var2, Function_148(&Global_54076));
	VNORMALIZE(&Var2);
	VSCALE(&Var2, 0,4f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	CREATE_DECAL(2, Var0, 0,8f, 0, 0);
	return;
}

void Function_155() //Position: 0xA394 / 41876
{
	return;
}

void Function_156(struct<57> Param0) //Position: 0xA39A / 41882
{
	strcpy(&Param0 + 24, "PLAYER HORSE", 16);
	Param0 = 48192;
	*(&Param0 + 8) = 42012;
	*(&Param0 + 16) = 41944;
	Param0.f_56 = 1;
	return;
}

void Function_157() //Position: 0xA3D8 / 41944
{
	Function_7(&Global_21369 + 72 + 32, 1);
	Function_7(&Global_21369 + 72 + 32, 32);
	Function_7(&Global_21369 + 72 + 32, 0x40000000);
	Function_7(&Global_21369 + 72 + 32, 128);
	Function_7(&Global_21369 + 72 + 32, 64);
	return;
}

int Function_158() //Position: 0xA41C / 42012
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	struct<2> Var15;
	var uVar17;
	var uVar19;
	int iVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	char* cVar25[16];
	bool bVar29;
	var uVar30;
	var uVar32;
	var uVar33;
	
	if (Global_6606 && !Function_97(1, 0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (IS_ACTOR_MULE(GET_MOUNT(&Global_54076)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (!Function_57())
			{
				if (!Function_105(Global_119934, 0x8000000))
				{
					Function_100(&Global_54076, 0x8000000, 1, 0);
				}
			}
		}
		if (DECOR_CHECK_EXIST(GET_MOUNT(&Global_54076), "HorseLeash"))
		{
			DESTROY_OBJECT(DECOR_GET_OBJECT(GET_MOUNT(&Global_54076), "HorseLeash"));
			DECOR_REMOVE(GET_MOUNT(&Global_54076), "HorseLeash");
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (!Function_185(&Global_21369 + 72))
		{
			Function_184(&Global_21369 + 72);
		}
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			if (HUD_IS_FADED() || !Function_183(&Global_21369 + 72))
			{
				*(&Global_21369 + 72 + 36) = 4294967294;
				RELEASE_ACTOR(&Global_21369 + 72);
				(&Global_21369 + 72) = "";
			}
			return 0;
		}
		Function_182(&Global_21369 + 72);
		if (StackVal && Function_152((((((!STREAMING_ARE_BOUNDS_LOADED(Function_182(&Global_21369 + 72), 5.0f) && !Global_6622) && !Global_6623) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !GET_RIDER(&Global_21369 + 72) != &Global_54076), &Global_21369 + 72, Vector(0.0f, 0.0f, 0.0f)) < 75.0f)
		{
			DESTROY_ACTOR(&Global_21369 + 72);
			*(&Global_21369 + 72 + 36) = 4294967294;
			(&Global_21369 + 72) = "";
			return 0;
		}
		if (IS_ACTOR_MOUNTED(&Global_21369 + 72))
		{
			if (IS_BLIP_VALID(&Global_21369 + 400))
			{
				REMOVE_BLIP(&Global_21369 + 400);
			}
			if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
			{
				TASK_CLEAR(&Global_21369 + 72);
			}
			iVar0 = GET_RIDER(&Global_21369 + 72);
			if (&iVar0 != &Global_54076)
			{
				bVar1 = true;
				if (GET_ACTOR_FACTION(&iVar0) == 20)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (DECOR_CHECK_EXIST(&Global_21369 + 72, "NextNuRiderPollTime"))
					{
						if (!(GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_21369 + 72, "NextNuRiderPollTime")) < 0.0f)
						{
							bVar1 = false;
						}
					}
				}
				if (bVar1 && !DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
				{
					DECOR_SET_OBJECT(&Global_54076, "HorseStolen", &Global_21369 + 72);
					DECOR_REMOVE(&Global_21369 + 72, "NextNuRiderPollTime");
				}
				if (bVar1)
				{
					(&Global_21369 + 72) = "";
					(&Global_21369 + 128) = "";
					Global_21369.f_396 = 0;
				}
			}
			else
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
				{
					DECOR_REMOVE(&Global_54076, "HorseStolen");
				}
				if (DECOR_CHECK_EXIST(&Global_21369 + 72, "WhistleResponse_WipeMe"))
				{
					DECOR_REMOVE(&Global_21369 + 72, "WhistleResponse_WipeMe");
				}
				bVar2 = true;
				if ((Function_181(&Global_21369 + 72) || Function_180(&Global_21369 + 72)) || Function_179(&Global_21369 + 72))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					iVar4 = Function_8(7, 0, 5);
					iVar5 = Function_8(8, 0, 5);
					iVar3 = ((ROUND(GET_CURRENT_GAME_TIME()) - Function_176(iVar4)) + Function_176(iVar5));
					if (!Global_6624)
					{
						if (iVar3 == 3600)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(&Global_21369 + 72, 100.0f);
							Function_108("mount_bond_stage3", 0x41200000, 1, 0, 2, 1, 0);
						}
						else if (iVar3 == 900)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(&Global_21369 + 72, 85.0f);
							Function_108("mount_bond_stage2", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
				}
				if (!Global_6623 && GET_TASK_STATUS(&Global_21369 + 72, 19) != 1)
				{
					TASK_CLEAR(&Global_21369 + 72);
				}
			}
		}
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			if (IS_ACTOR_DEAD(&Global_21369 + 72))
			{
				if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DeathTime"))
				{
					DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
				}
			}
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			if (((GET_ACTOR_ENUM(&Global_21369 + 72) != 1268 || GET_ACTOR_ENUM(&Global_21369 + 72) != 1271) || GET_ACTOR_ENUM(&Global_21369 + 72) != 1270) || GET_ACTOR_ENUM(&Global_21369 + 72) != 1269)
			{
				if (!DECOR_CHECK_EXIST(&Global_21369 + 72, "bHiddenForCutscene"))
				{
					uVar6 = FIND_OBJECT_IN_OBJECT(&Global_21369 + 72, "emitter_set");
					if (IS_OBJECT_VALID(&uVar6))
					{
						uVar7 = GET_OBJECTSET_FROM_OBJECT(&uVar6);
						bVar8 = false;
						while (bVar8 <= GET_OBJECTSET_SIZE(&uVar7))
						{
							uVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar8, &uVar7);
							if (IS_OBJECT_VALID(&uVar9))
							{
								HIDE_RMPTFX_EFFECT(&uVar9);
							}
							bVar8++;
						}
					}
					DECOR_SET_BOOL(&Global_21369 + 72, "bHiddenForCutscene", 1);
				}
			}
		}
		else if (((GET_ACTOR_ENUM(&Global_21369 + 72) != 1268 || GET_ACTOR_ENUM(&Global_21369 + 72) != 1271) || GET_ACTOR_ENUM(&Global_21369 + 72) != 1270) || GET_ACTOR_ENUM(&Global_21369 + 72) != 1269)
		{
			if (DECOR_CHECK_EXIST(&Global_21369 + 72, "bHiddenForCutscene"))
			{
				uVar10 = FIND_OBJECT_IN_OBJECT(&Global_21369 + 72, "emitter_set");
				if (IS_OBJECT_VALID(&uVar10))
				{
					uVar11 = GET_OBJECTSET_FROM_OBJECT(&uVar10);
					bVar12 = false;
					while (bVar12 <= GET_OBJECTSET_SIZE(&uVar11))
					{
						uVar13 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar12, &uVar11);
						if (IS_OBJECT_VALID(&uVar13))
						{
							SHOW_RMPTFX_EFFECT(&uVar13);
						}
						bVar12++;
					}
				}
				DECOR_REMOVE(&Global_21369 + 72, "bHiddenForCutscene");
			}
		}
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 1 && 0)
			{
				Function_173(0, 0x40400000);
			}
		}
		Global_21369.f_396 = 0;
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	if (!Function_172())
	{
		return 0;
	}
	if ((&Global_21369 + 72 + 36 == Global_43789 || &Global_21369 + 72 + 36 != 4294967294) && !DECOR_CHECK_EXIST(&Global_54076, "TempDisableRespawn"))
	{
		if (StackVal && (Function_171() < 1 && !DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DontResetHorseEnum")) + 976 != 993)
		{
			Function_170((&Global_21369 + 72)->f_12, 0, 1);
		}
		uVar14 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_playerHorse");
		if (!IS_OBJECT_VALID(&uVar14))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(&uVar14, "PlayerHouse_NoHorse") && !DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
		{
			return 0;
		}
		Function_169(&uVar14);
		Var15 = Function_169(&uVar14);
		Function_168(&uVar14);
		uVar17 = Function_168(&uVar14);
		if (StackVal && Function_152((!IS_ACTOR_VALID(&Global_21369 + 72) && STREAMING_ARE_BOUNDS_LOADED(Var15, 5.0f)), &Global_54076, Var15) > 60.0f)
		{
			uVar21 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/HitchingPost", &Var15, 6.0f, 0);
			if (IS_GRINGO_VALID(&uVar21))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar21), &Var15);
				Function_167(StackVal, Var15, &uVar19, &iVar20);
				uVar21 = "";
				if (!IS_OBJECT_VALID(Function_166(&uVar19, "UseCase1")))
				{
					uVar21 = &uVar19;
				}
				if (!IS_GRINGO_VALID(&uVar21))
				{
					if (!IS_OBJECT_VALID(Function_166(&iVar20, "UseCase1")))
					{
						uVar21 = &iVar20;
					}
				}
				if (IS_GRINGO_VALID(&uVar21))
				{
					Function_161(1, 0, 0, 0, 0, 0, 1, 0);
					uVar22 = &Global_21369 + 72;
					if (IS_ACTOR_VALID(&uVar22))
					{
						SNAP_ACTOR_TO_GRINGO(&uVar22, GET_OBJECT_FROM_GRINGO(&uVar21), "UseCase1", true, 0, 0);
						TASK_PRIORITY_SET(&uVar22, true);
						TASK_USE_GRINGO(&uVar22, &uVar21, "UseCase1", 4294967295, 1);
						if (DECOR_CHECK_EXIST(&uVar14, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
						{
							DECOR_REMOVE(&Global_54076, "OnLoad_ForceSpawnPlayerHorse");
						}
						(&Global_21369 + 72 + 36) = Global_43789;
						return 0;
					}
				}
				return 0;
			}
			return 0;
		}
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			*(&Global_21369 + 72 + 36) = Global_43789;
		}
		else if (StackVal && Function_152((!IS_ACTOR_VALID(&Global_21369 + 72) && STREAMING_ARE_BOUNDS_LOADED(Var15, 5.0f)), &Global_54076, Var15) > 60.0f)
		{
			uVar23 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &Var15, 6.0f, 0);
			if (IS_GRINGO_VALID(&uVar23))
			{
				Function_161(1, 0, 0, 0, 0, 0, 1, 0);
				uVar24 = &Global_21369 + 72;
				if (IS_ACTOR_VALID(&uVar24))
				{
					SNAP_ACTOR_TO_GRINGO(&uVar24, GET_OBJECT_FROM_GRINGO(&uVar23), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&uVar24, true);
					TASK_USE_GRINGO(&uVar24, &uVar23, "UseCase1", 4294967295, 1);
					if (DECOR_CHECK_EXIST(&uVar14, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
					{
						DECOR_REMOVE(&Global_54076, "OnLoad_ForceSpawnPlayerHorse");
					}
					*(&Global_21369 + 72 + 36) = Global_43789;
					return 0;
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(&Global_21369 + 72))
	{
		return 0;
	}
	if (((!Global_6623 && !Global_6635) && GET_TASK_STATUS(&Global_21369 + 408, 86) != 2) && Global_6634)
	{
		if (Function_160(&Global_21369 + 72, &Global_54076) < 20.0f)
		{
			memcpy(&cVar25, &Global_44085[Global_437899] + 32, 4);
			stradd(&cVar25, "_playerHorse", 16);
			bVar29 = FIND_OBJECT_IN_LAYOUT(&Global_46715, &cVar25);
			if (!IS_OBJECT_VALID(&bVar29))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(&bVar29, "PlayerHouse_NoHorse"))
			{
				return 0;
			}
			Function_169(&bVar29);
			uVar30 = Function_169(&bVar29);
			if (Function_160(&Global_21369 + 72, &Global_54076) < 60.0f && !Function_159(&Global_21369 + 72, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				uVar32 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar30, 6.0f, 0);
				if (IS_GRINGO_VALID(&uVar32))
				{
					SNAP_ACTOR_TO_GRINGO(&Global_21369 + 72, GET_OBJECT_FROM_GRINGO(&uVar32), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&Global_21369 + 72, true);
					TASK_USE_GRINGO(&Global_21369 + 72, &uVar32, "UseCase1", 4294967295, 1);
				}
				if (!DOES_HORSE_HAVE_ACCESSORY(&Global_21369 + 72, 4))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
			}
			else if (Function_160(&Global_21369 + 72, &Global_54076) < 60.0f)
			{
				uVar33 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar30, 6.0f, 0);
				if (IS_GRINGO_VALID(&uVar33))
				{
					TASK_PRIORITY_SET(&Global_21369 + 72, true);
					TASK_USE_GRINGO(&Global_21369 + 72, &uVar33, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	return 0;
}

bool Function_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB0AE / 45230
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

float Function_160(var uParam0, bool bParam1) //Position: 0xB0CE / 45262
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

var Function_161(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xB1C3 / 45507
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
		Function_170(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_172())
		{
			return "";
		}
	}
	if (!Function_165())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_164();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_169(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_169(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_169(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_169(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_163(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_163(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_28(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_28(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_48(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_28(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_28(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_162(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB520 / 46368
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

var Function_163(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB56A / 46442
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

void Function_164() //Position: 0xB60A / 46602
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

bool Function_165() //Position: 0xB682 / 46722
{
	if (Function_171() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

var Function_166(var uParam0, int iParam1) //Position: 0xB698 / 46744
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_167(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xB6A7 / 46759
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_57())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &bParam0, 2.0f, 0);
		}
	}
}

struct<8> Function_168(int iParam0) //Position: 0xB7F1 / 47089
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_169(bool bParam0) //Position: 0xB81A / 47130
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

void Function_170(int iParam0, bool bParam1, bool bParam2) //Position: 0xB843 / 47171
{
	Global_21473 = iParam0;
	if (&bParam1)
	{
		Function_112(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_112(&Global_21369 + 72 + 32, 64);
	}
	return;
}

int Function_171() //Position: 0xB872 / 47218
{
	return Global_21369.f_244;
}

bool Function_172() //Position: 0xB87D / 47229
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_173(float fParam0, float fParam1) //Position: 0xB89D / 47261
{
	*(&Global_21369 + 72 + 44) = 0;
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
	Function_175();
	Function_174();
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

void Function_174() //Position: 0xB9AE / 47534
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_175() //Position: 0xB9E2 / 47586
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

int Function_176(int iParam0) //Position: 0xBAE8 / 47848
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_177(int iParam0) //Position: 0xBB02 / 47874
{
	if (!Function_3(iParam0))
	{
		return 0;
	}
	if (!Function_178(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_178(int iParam0) //Position: 0xBB26 / 47910
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_179(int iParam0) //Position: 0xBB3B / 47931
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1268 && bVar0 >= 1271)
	{
		return 1;
	}
	return 0;
}

int Function_180(int iParam0) //Position: 0xBB5C / 47964
{
	if (GET_ACTOR_ENUM(&iParam0) == 1267)
	{
		return 1;
	}
	return 0;
}

int Function_181(int iParam0) //Position: 0xBB71 / 47985
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_182(int iParam0) //Position: 0xBB92 / 48018
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_183(int iParam0) //Position: 0xBBA4 / 48036
{
	var uVar0;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	bVar2 = GET_ACTOR_ENUM(&iParam0);
	GET_POSITION(&iParam0, &uVar0);
	return WOULD_ACTOR_BE_VISIBLE(bVar2, &uVar0, 3212836864);
}

void Function_184(int iParam0) //Position: 0xBBD2 / 48082
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

bool Function_185(int iParam0) //Position: 0xBC09 / 48137
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		return DECOR_GET_BOOL(&iParam0, "nocrime");
	}
	return 0;
}

void Function_186() //Position: 0xBC40 / 48192
{
	(&Global_21369 + 400) = "";
	(&Global_21369 + 408) = "";
	(&Global_21369 + 128) = "";
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		DESTROY_ACTOR(&Global_21369 + 72);
	}
	Function_112(&Global_21369 + 72 + 32, 0x40000000);
	*(&Global_21369 + 72 + 36) = 4294967294;
	return;
}

void Function_187(struct<57> Param0) //Position: 0xBC8F / 48271
{
	strcpy(&Param0 + 24, "QUESTMANAGER", 16);
	if (Global_6666)
	{
		Param0 = 35545;
		*(&Param0 + 8) = 35538;
		*(&Param0 + 16) = 35545;
	}
	else
	{
		Param0 = 71347;
		*(&Param0 + 8) = 50692;
		*(&Param0 + 16) = 48370;
	}
	Param0.f_56 = 0;
	return;
}

void Function_188() //Position: 0xBCF2 / 48370
{
	Function_189(&Global_99725);
	DESTROY_LAYOUT(&Global_99717);
	if (&Global_99717 + 16 != 4294967295)
	{
		if (STRINGS_ARE_EQUAL(GET_ASSET_NAME(&Global_99725[&Global_99717 + 1643] + 136, 9), CUTSCENE_MANAGER_GET_LOADED_CUTFILE()))
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		}
	}
	*(&Global_99717 + 16) = 4294967295;
	Global_99717.f_24 = 999.0f;
	return;
}

void Function_189(struct<43>[] Param0) //Position: 0xBD48 / 48456
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Function_190(&(Param0[iVar043]), iVar0, 0, 1, 1);
		iVar0++;
	}
	return;
}

void Function_190(struct<229> Param0) //Position: 0xBD72 / 48498
{
	int iVar0;
	
	iVar0 = 0;
	iParam2 = &iParam2;
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if ((!Function_113(Global_99725[bParam143].f_228, 64) || Function_70(bParam1)) || Function_197(bParam1))
		{
			if (((((bParam1 != 2 || bParam1 != 6) || bParam1 != 8) || bParam1 != 24) && !Function_70(bParam1)) && !Function_197(bParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(&Param0 + 272))
				{
					REMOVE_BLIP(&Param0 + 272);
				}
				if (IS_BLIP_VALID(&Param0 + 280))
				{
					REMOVE_BLIP(&Param0 + 280);
				}
			}
		}
	}
	else
	{
		if (Function_113(Global_99725[bParam143].f_228, 64))
		{
			Function_192(&Param0, bParam1);
		}
		if (!(Function_70(bParam1) || Function_197(bParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, 1, 0);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
	}
	if (IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_113(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_7(&Param0 + 228, 32);
	}
	if (IS_OBJECT_VALID(&Param0 + 328))
	{
		RELEASE_OBJECT_REF(&Param0 + 328);
	}
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		DESTROY_VOLUME(&Param0 + 336);
	}
	if (&bParam4)
	{
		Function_191(&Param0);
	}
	Function_7(&Param0 + 228, 256);
	switch (Global_116927[bParam16])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_116927[bParam16] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(&Param0 + 296) && iParam3)
	{
		TERMINATE_SCRIPT(&Param0 + 296);
	}
	switch (Param0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(&Param0 + 312))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param0 + 312);
				AI_CONVERSE_ENABLE(&Param0 + 312);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
				{
					DESTROY_OBJECT(SQUAD_GET(&Param0 + 312));
				}
				RELEASE_ACTOR(&Param0 + 312);
			}
			break;
		
		default:
			break;
	}
}

void Function_191(struct<229> Param0) //Position: 0xBFB9 / 49081
{
	if (Function_113(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_7(&Param0 + 228, 1);
	}
	if (Function_113(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_7(&Param0 + 228, 8);
	}
	if (Function_113(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_7(&Param0 + 228, 2);
	}
	if (Function_113(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_7(&Param0 + 228, 4);
	}
	return;
}

void Function_192(struct<153> Param0) //Position: 0xC04A / 49226
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if ((((StackVal && Function_195(Function_196(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_194(iParam1)) || Global_116927[iParam16].f_20 != 1) || Function_113(Global_99725[iParam143].f_228, 64))
	{
		if (((Param0.f_152 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar2 = 0,5f;
			fVar6 = 70.0f;
			vVar4 = *(&Param0 + 196);
			vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar6);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 13)
		{
			fVar2 = 0,5f;
			fVar7 = 30.0f;
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar7);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(&Param0 + 328))
		{
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((((((((((Param0.f_152 == 312 && Param0.f_152 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(&Param0 + 272, 3.0f);
			}
			*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 280, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
			}
			UNK_0xFF3DB575(&Param0 + 280, 1);
			if (Param0.f_152 == 312 && Param0.f_152 == 311)
			{
				SET_BLIP_PRIORITY(&Param0 + 280, 3);
			}
			if (Function_113(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, fVar2);
			}
			Global_116927[iParam16].f_20 = 1;
		}
		if (IS_BLIP_VALID(&Param0 + 272))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 272, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, (7,5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, 7,5f);
				}
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			}
			if (Function_113(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			}
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
		SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
		SET_BLIP_PRIORITY(&Param0 + 272, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(&Param0 + 272, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,34f, 0,58f, 0,74f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,34f, 0,58f, 0,74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,79f, 0,69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,79f, 0,69f, 0.0f, 1.0f);
	}
	return;
}

bool Function_193() //Position: 0xC560 / 50528
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_194(bool bParam0) //Position: 0xC58D / 50573
{
	if ((Global_116927[bParam06] != 3 || Global_116927[bParam06] != 4) || Global_116927[bParam06] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_195(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC5B9 / 50617
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

int Function_196(int iParam0) //Position: 0xC5DA / 50650
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_197(bool bParam0) //Position: 0xC5EF / 50671
{
	if (Global_116927[bParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_198() //Position: 0xC604 / 50692
{
	if (!Global_6607)
	{
		return 0;
	}
	if (!Function_115(10) && !Function_4(1048576))
	{
		return 0;
	}
	if (Function_199(&Global_99725) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_199(struct<43>[] Param0) //Position: 0xC635 / 50741
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar1 = 1000;
	fVar2 = GET_PROFILE_TIME();
	iVar3 = 77;
	iVar3 = 38;
	iVar0 = Global_99717.f_12;
	while (iVar0 < (iVar3 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_47151[30])
		{
			Global_99717.f_12 = iVar0;
			return iVar1;
		}
		Function_200(&(Param0[iVar043]), iVar0);
		iVar0++;
	}
	Global_99717.f_12 = 0;
	return iVar1;
}

void Function_200(struct<249> Param0) //Position: 0xC69F / 50847
{
	char* cVar0[64];
	char* cVar16[64];
	bool bVar32;
	
	if (Function_259(bParam1))
	{
		Function_7(&Param0 + 228, 64);
		Function_190(&Param0, bParam1, 0, 0, 1);
		return;
	}
	strcpy(&cVar16, "Checking quest: ", 64);
	stradd(&cVar16, &Param0 + 4, 64);
	stradd(&cVar16, " ", 64);
	stradd(&cVar16, INT_TO_STRING(bParam1), 64);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		stradd(&cVar0, "DA: Player invalid.", 64);
		Function_190(&Param0, bParam1, 0, 0, 1);
		return;
	}
	Function_241(&Param0, bParam1);
	if (Function_48(StackVal, *(&Param0 + 184)))
	{
		PRINTSTRING("QUEST INDEX: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("Invalid quest position given. Check TTY for quest index.");
		return;
	}
	if (Function_70(bParam1))
	{
		Function_7(&Param0 + 228, 64);
		if (CONVERT_TIME_OF_DAY_TO_INT(&Param0 + 168) >= 0)
		{
			Function_240(&Param0, bParam1);
		}
		if (!Function_113(Param0.f_228, 256))
		{
			stradd(&cVar0, "DA: Quest already completed.", 64);
			Function_190(&Param0, bParam1, 0, 0, 1);
			return;
		}
	}
	if (Function_197(bParam1))
	{
		stradd(&cVar0, "DA: Quest failed.", 64);
		Function_7(&Param0 + 228, 64);
		Function_190(&Param0, bParam1, 0, 0, 1);
		if (CONVERT_TIME_OF_DAY_TO_INT(&Param0 + 160) >= 0)
		{
			Function_240(&Param0, bParam1);
		}
		return;
	}
	if (!Function_70(bParam1))
	{
		if (!Function_194(bParam1))
		{
			Function_237(bParam1);
			if (!Function_234(&Param0, bParam1, 0, 1, 0))
			{
				stradd(&cVar0, "DA: Quest conditions not met.", 64);
				Function_190(&Param0, bParam1, 0, 0, 1);
				return;
			}
		}
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			stradd(&cVar0, "DA: Not time for quest to start yet.", 64);
			Function_190(&Param0, bParam1, 0, 0, 1);
			Function_7(&Param0 + 228, 64);
			return;
		}
		Param0.f_248 = 0;
	}
	if ((((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28) && bParam1 == &Param0 + 36)
	{
		stradd(&cVar0, "DA: Story or proc mission running.", 64);
		Function_7(&Param0 + 228, 64);
		Function_190(&Param0, bParam1, 0, 1, 1);
		return;
	}
	if (!Function_70(bParam1))
	{
		Function_112(&Param0 + 228, 64);
	}
	if (Function_72(Param0.f_216))
	{
		if (Function_233(&(Global_43791[Param0.f_216]), 256))
		{
			stradd(&cVar0, "DA: Quest region has pers chars disabled.", 64);
			Function_190(&Param0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!Function_230(&Param0, bParam1, 1))
		{
			return;
		}
	}
	if (Function_229(bParam1))
	{
		stradd(&cVar0, "DA: Quests should deactivate.", 64);
		Function_190(&Param0, bParam1, 0, 0, 1);
		return;
	}
	if (!Function_70(bParam1))
	{
		if (!(Function_194(bParam1) || Function_227(&Param0)))
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Param0.f_224, 0))
			{
				if (VDIST(*(&Param0 + 184), Global_54078) > 15.0f)
				{
					if (!Function_113(Param0.f_228, 8192))
					{
						Function_224(&Param0);
						Function_112(&Param0 + 228, 8192);
					}
				}
				else
				{
					Function_7(&Param0 + 228, 8192);
				}
			}
			stradd(&cVar0, "DA: Quest time conditions not met.", 64);
			Function_190(&Param0, bParam1, 1, 0, 1);
			return;
		}
	}
	bVar32 = VDIST(*(&Param0 + 184), Global_54078);
	if (bVar32 < Param0.f_148)
	{
		if (bParam1 == 20)
		{
			if (Global_116927[206].f_44 != 1.0f)
			{
				return;
			}
		}
		stradd(&cVar0, "DA: Quest too far, not within ", 64);
		stradd(&cVar0, FLOAT_TO_STRING_VERBOSE(bVar32), 64);
		stradd(&cVar0, " meters.", 64);
		Function_190(&Param0, bParam1, 1, 1, 1);
		return;
	}
	if (bVar32 < Param0.f_144)
	{
		return;
	}
	if (Function_70(bParam1))
	{
		stradd(&cVar0, "DA: Quest already completed.", 64);
		return;
	}
	Function_201(&Param0, bParam1);
	return;
}

void Function_201(struct<229> Param0) //Position: 0xCB7B / 52091
{
	bool bVar0;
	char* cVar1[64];
	int iVar17;
	
	Function_223(&Param0);
	bVar0 = false;
	switch (Global_116927[bParam16])
	{
		case 0x00000001:
			Global_116927[bParam16] = 2;
			bVar0 = true;
			break;
		
		case 0x00000004:
			Global_116927[bParam16] = 3;
			bVar0 = true;
			break;
		
		case 0x00000005:
			if (!IS_SCRIPT_VALID(&Param0 + 296))
			{
				Global_116927[bParam16] = 2;
				bVar0 = true;
			}
			break;
	}
	DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
	SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, 1, 0);
	Function_218(&Param0);
	iVar17 = 1;
	switch (Param0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(&Param0 + 312))
			{
				if (!Function_113(Param0.f_228, 512))
				{
					if (STREAMING_IS_ACTOR_LOADED(Param0.f_220, 4294967295))
					{
						memcpy(&cVar1, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
						stradd(&cVar1, INT_TO_STRING(bParam1), 64);
						*(&Param0 + 312) = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_99717, &cVar1, Param0.f_220, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f));
						Function_209(&Param0, bParam1);
						Function_203(&Param0, bParam1, 1);
						if (bParam1 != 69 || bParam1 != 70)
						{
							DECOR_SET_BOOL(&Param0 + 312, "bShopDontKill", 1);
						}
					}
				}
			}
			else
			{
				IS_ACTOR_VALID(&Param0 + 312);
				if (bVar0)
				{
					Function_203(&Param0, bParam1, 0);
				}
				Function_182(&Param0 + 312);
				if (VDIST(Function_182(&Param0 + 312), *(&Param0 + 184)) > 2.0f)
				{
					Function_209(&Param0, bParam1);
				}
			}
			if (!IS_GRINGO_VALID(&Param0 + 320))
			{
				if (UNK_0x214AFB8C(&Param0 + 120))
				{
					if (Function_72(Param0.f_216))
					{
						if (Function_113(Param0.f_228, 65536) && !Function_233(&(Global_43791[Param0.f_216]), 32))
						{
							iVar17 = 0;
						}
					}
					if (STREAMING_IS_GRINGO_LOADED(&Param0 + 120) && iVar17)
					{
						*(&Param0 + 320) = LOCATE_GRINGO_OF_TYPE_BY_ID(&Param0 + 120, &Param0 + 184, 2.0f);
						if (IS_GRINGO_VALID(&Param0 + 320))
						{
							Function_112(&Param0 + 228, 32);
						}
						else
						{
							*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_99717, Function_28(), &Param0 + 120, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f)));
							Function_7(&Param0 + 228, 32);
						}
						Function_202(&Param0, 0);
					}
					else
					{
						return;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&Param0 + 328))
			{
				if (STREAMING_IS_PROP_LOADED(&Param0 + 128))
				{
					*(&Param0 + 328) = CREATE_PROP_IN_LAYOUT_BY_ID(StackVal, &Global_99717, Function_28(), &Param0 + 128, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f), 1);
					Function_209(&Param0, bParam1);
				}
				else
				{
					return;
				}
			}
			break;
		
		case 0x00000003:
			Function_209(&Param0, bParam1);
			break;
	}
	return;
}

void Function_202(struct<229> Param0) //Position: 0xCE1D / 52765
{
	bool bVar0;
	var uVar1;
	var uVar3;
	bool bVar5;
	bool bVar6;
	
	if (IS_ACTOR_VALID(&Param0 + 312) && IS_GRINGO_VALID(&Param0 + 320))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceMusicGringoUse", 1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceAllowSun", 1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&Param0 + 320), "ForceAllowRain", 1);
		TASK_CLEAR(&Param0 + 312);
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		if (!Function_113(Param0.f_228, 16384))
		{
			bVar0 = true;
			if (!&bParam1)
			{
				if (GET_CURRENT_GRINGO(&Param0 + 312) == &Param0 + 320)
				{
					bVar0 = false;
				}
				else
				{
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &uVar1);
					GET_OBJECT_POSITION(&Param0 + 312, &uVar3);
					bVar5 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar1, 3212836864);
					bVar6 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar3, 3212836864);
					if (bVar6 || bVar5)
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				SNAP_ACTOR_TO_GRINGO(&Param0 + 312, GET_OBJECT_FROM_GRINGO(&Param0 + 320), "UseCase1", true, 0, 0);
			}
		}
		TASK_USE_GRINGO(&Param0 + 312, &Param0 + 320, "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_203(struct<229> Param0) //Position: 0xCF81 / 53121
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	AI_DONT_HARM_ACTOR(&Param0 + 312);
	AI_CONVERSE_DISABLE(&Param0 + 312);
	AI_IGNORE_ACTOR(&Param0 + 312);
	SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 312, false);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 0);
	DECOR_SET_BOOL(&Param0 + 312, "CannotPush", 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 0);
	Function_182(&Param0 + 312);
	uVar0 = Function_182(&Param0 + 312);
	bVar2 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar0, 3212836864);
	bVar3 = Function_195(StackVal, *(&Param0 + 184), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(&Param0 + 120))
	{
		if (!Function_113(Param0.f_228, 16384))
		{
			if (!(bVar2 || bVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		Function_208(&Param0);
	}
	else if (!IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_113(Param0.f_228, 16384))
		{
			if (!(bVar2 || bVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		TASK_STAND_STILL(&Param0 + 312, -1.0f, 0, 0);
	}
	else
	{
		Function_202(&Param0, &iParam2);
	}
	uVar4 = GET_OBJECT_OWNER(&Param0 + 312);
	if (GET_OBJECT_TYPE(&uVar4) == 1)
	{
		if (GET_LAYOUT_FROM_OBJECT(&uVar4) == GET_GC_LAYOUT())
		{
			GIVE_OBJECT_TO_LAYOUT(&Param0 + 312, &Global_99717);
		}
	}
	MEMORY_ATTACK_ON_SIGHT(&Param0 + 312, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 312, 4, 10.0f);
	if (!SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
	{
		SQUAD_JOIN(&Param0 + 312, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_99717, Function_28())));
		SQUAD_GOAL_ADD_RESTRICT_INVESTIGATION_DISTANCE_FROM_SQUAD(SQUAD_GET(&Param0 + 312), 0, 10.0f);
	}
	HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&Param0 + 312, true);
	HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&Param0 + 312, 322);
	if (Param0.f_220 == 349)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Param0 + 312, 0);
	}
	else
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Param0 + 312, 1);
	}
	if (Param0.f_220 == 332)
	{
		SET_ACTOR_MAX_SPEED(&Param0 + 312, 2);
	}
	if (Param0.f_220 == 358)
	{
		SET_ACTOR_FACTION(&Param0 + 312, 20);
		SET_ACTOR_IS_COMPANION(&Param0 + 312, 1);
		SET_ALLOW_EXECUTE(&Param0 + 312, 0);
		SET_ACTOR_INVULNERABILITY(&Param0 + 312, 1);
	}
	if ((Param0.f_220 != 340 || Param0.f_220 != 341) || Param0.f_220 != 342)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "RCM_SAM");
	}
	if (Param0.f_220 == 633)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "MISC_Jenny");
	}
	if (Param0.f_220 == 368)
	{
		SET_AMBIENT_VOICE_NAME(&Param0 + 312, "COMPANION_FBI");
	}
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&Param0 + 312, 0);
	uVar5 = Function_206(&Param0);
	SET_RCM_WAS_JOHN_NOW_JACK(&Param0 + 312, uVar5);
	Function_205(bParam1, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11);
	iVar12 = Function_204(bParam1);
	switch (iVar12)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 0, 1, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11);
			break;
		
		case 0x00000000:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 0, 0, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11);
			break;
		
		case 0x00000002:
		case 0xFFFFFFFF:
		default:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
			break;
	}
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(&Param0 + 312, 15.0f);
	MEMORY_CLEAR_EVENTS(&Param0 + 312, 1);
	return;
}

int Function_204(int iParam0) //Position: 0xD30E / 54030
{
	if (Function_57())
	{
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1;
			
			case 0x00000001:
				return 1;
			
			case 0x00000002:
				return 0;
			
			case 0x00000003:
				return 2;
			
			case 0x00000004:
				return 1;
			
			case 0x00000005:
				return 2;
			
			case 0x00000006:
				return 2;
			
			case 0x00000007:
				return 2;
			
			case 0x00000008:
				return 0;
			
			case 0x00000009:
				return 0;
			
			case 0x0000000A:
				return 2;
			
			case 0x0000000B:
				return 0;
			
			case 0x0000000C:
				return 0;
			
			case 0x0000000D:
				return 2;
			
			case 0x0000000E:
				return 2;
			
			case 0x0000000F:
				return 1;
			
			case 0x00000010:
				return 2;
			
			case 0x00000011:
				return 1;
			
			case 0x00000012:
				return 2;
			
			case 0x00000013:
				return 1;
			
			case 0x00000014:
				return 1;
			
			case 0x00000015:
				return 1;
			
			case 0x00000016:
				return 0;
			
			case 0x00000017:
				return 1;
			
			case 0x00000018:
				return 2;
			
			case 0x00000019:
				return 1;
			
			case 0x0000001A:
				return 0;
			
			case 0x0000001B:
				return 0;
			
			case 0x0000001C:
				return 1;
			
			case 0x0000001D:
				return 0;
			
			case 0x0000001E:
				return 0;
			
			case 0x0000001F:
				return 0;
			
			case 0x00000020:
				return 1;
			
			case 0x00000021:
				return 1;
			
			case 0x00000022:
				return 0;
			
			case 0x00000023:
				return 1;
			
			case 0x00000024:
				return 0;
			
			case 0x00000025:
				return 2;
			
			case 0x00000026:
				return 1;
			
			case 0x00000027:
				return 1;
			
			case 0x00000028:
				return 0;
			
			case 0x00000029:
				return 1;
			
			case 0x0000002A:
				return 0;
			
			case 0x0000002B:
				return 1;
			
			case 0x0000002C:
				return 0;
			
			case 0x0000002D:
				return 1;
			
			case 0x0000002E:
				return 0;
			
			case 0x0000002F:
				return 1;
			
			case 0x00000030:
				return 0;
			
			case 0x00000031:
				return 1;
			
			case 0x00000032:
				return 2;
			
			case 0x00000033:
				return 1;
			
			case 0x00000034:
				return 0;
			
			case 0x00000035:
				return 0;
			
			case 0x00000036:
				return 1;
			
			case 0x00000037:
				return 0;
			
			case 0x00000038:
				return 0;
			
			case 0x00000039:
				return 1;
			
			case 0x0000003A:
				return 1;
			
			case 0x0000003B:
				return 0;
			
			case 0x0000003C:
				return 1;
			
			case 0x0000003D:
				return 1;
			
			case 0x0000003E:
				return 0;
			
			case 0x0000003F:
				return 0;
			
			case 0x00000040:
				return 1;
			
			case 0x00000041:
				return 1;
			
			case 0x00000042:
				return 1;
			
			case 0x00000043:
				return 1;
			
			case 0x00000044:
				return 1;
			
			case 0x00000045:
				return 1;
			
			case 0x00000046:
				return 0;
			
			case 0x00000047:
				return 0;
			
			case 0x00000048:
				return 1;
			
			case 0x00000049:
				return 1;
			
			case 0x0000004A:
				return 0;
			
			case 0x0000004B:
				return 0;
			
			case 0x0000004C:
				return 1;
			}
		
		default:
	}
	return 4294967295;
}

void Function_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xD58D / 54669
{
	uParam3 = 2;
	uParam4 = 20.0f;
	uParam5 = 7.0f;
	uParam6 = 1;
	if (Function_57())
	{
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000004:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x0000000F:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				uParam5 = 2,5f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000013:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				uParam5 = 2,5f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000015:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000017:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000001C:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000020:
				uParam1 = 0;
				uParam2 = 1;
				uParam5 = 3.0f;
				uParam4 = 8.0f;
				break;
			
			case 0x00000023:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000026:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000027:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000002B:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000031:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000036:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x00000039:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000003C:
				uParam1 = 0;
				uParam2 = 1;
				uParam3 = 3;
				uParam5 = 3.0f;
				uParam4 = 8.0f;
				break;
			
			case 0x0000003D:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000040:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000044:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			case 0x00000048:
				uParam1 = 0;
				uParam2 = 1;
				break;
			
			case 0x0000004B:
				uParam1 = 1;
				uParam2 = 1;
				break;
			
			default:
				uParam1 = 0;
				uParam2 = 1;
				break;
			}
	}
}

int Function_206(struct<257> Param0) //Position: 0xD7A8 / 55208
{
	var uVar0;
	int iVar1;
	
	if (GET_ACTOR_ENUM(&Global_54076) != 1)
	{
		return 0;
	}
	uVar0 = Param0.f_220;
	iVar1 = Param0.f_256;
	while (iVar1 != 4294967295)
	{
		if (Global_116927[iVar16].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		if (Function_207(Global_99725[iVar143].f_220, uVar0))
		{
			return 0;
		}
		iVar1 = Global_99725[iVar143].f_256;
	}
	return 0;
}

bool Function_207(int iParam0, int iParam1) //Position: 0xD809 / 55305
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0x00000154:
		case 0x00000155:
		case 0x00000156:
			if ((iParam1 != 340 || iParam1 != 341) || iParam1 != 342)
			{
				return 1;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_208(struct<209> Param0) //Position: 0xD853 / 55379
{
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		TASK_CLEAR(&Param0 + 312);
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		TASK_GO_TO_COORD_AND_STAY(&Param0 + 312, &Param0 + 184, 1, Param0.f_208);
	}
	return;
}

void Function_209(struct<229> Param0) //Position: 0xD890 / 55440
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	float fVar5;
	float fVar6;
	struct<9> Var7;
	
	if (Function_113(Param0.f_228, 2048))
	{
		return;
	}
	bVar0 = (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28);
	bVar1 = IS_OBJECT_VALID(&Param0 + 288);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == Param0.f_224)
		{
			iVar2 = 7;
		}
		Function_217(&Param0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (Param0.f_152 == 4294967295)
		{
		}
		else if (GET_BLIP_ICON(&Param0 + 272) == 440)
		{
			Var3 = *(&Param0 + 184);
			Var3.f_4 = (StackVal + 0,5f);
			if (bParam1 == 5)
			{
				Var3.f_4 = (StackVal + 1,5f);
				if (StackVal || !Function_195(VDIST(Global_54078, *(&Param0 + 184)) < 50.0f, Var3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (bParam1 == 17)
			{
				Var3.f_4 = (StackVal + 5.0f);
				if (StackVal || !Function_195(VDIST(Global_54078, *(&Param0 + 184)) < 40.0f, Var3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (bParam1 == 13)
			{
				return;
			}
			if (bParam1 > 2 || bParam1 < 5)
			{
				if (!Function_195(StackVal, Var3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_54078, *(&Param0 + 184)) < 42.0f)
				{
					return;
				}
			}
			Global_116927[bParam16].f_20 = 1;
			REMOVE_BLIP(&Param0 + 272);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	if (!IS_BLIP_VALID(&Param0 + 272))
	{
		if (bVar0)
		{
			if (bParam1 == &Param0 + 36)
			{
				if (Function_72(Param0.f_216))
				{
					Function_214(StackVal, Param0.f_216, 23, *(&Param0 + 184), 63);
				}
				else
				{
					Function_214(StackVal, Global_43789, 23, *(&Param0 + 184), 63);
				}
			}
		}
		else
		{
			if (bParam1 == &Param0 + 36)
			{
				if (Function_72(Param0.f_216))
				{
					Function_210(StackVal, Param0.f_216, 23, Param0.f_184);
				}
				else
				{
					Function_210(StackVal, Global_43789, 23, Param0.f_184);
				}
				Function_7(&Param0 + 228, 4096);
			}
			if (Param0.f_152 == 4294967295)
			{
				fVar5 = 0,5f;
				fVar6 = 70.0f;
				vVar7 = *(&Param0 + 196);
				vVar7 = (vVar7.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
				vVar7.f_8 = (vVar7.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
				*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar7, 440, 0.0f, 3, 7);
				SET_BLIP_SCALE(&Param0 + 272, fVar6);
				SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar5);
				SET_BLIP_PRIORITY(&Param0 + 272, 3);
			}
			else if (bParam1 == 23 || !IS_OBJECT_VALID(&Param0 + 328))
			{
				if ((bParam1 != 5 && VDIST(Global_54078, *(&Param0 + 184)) < 40.0f) || (bParam1 != 17 && VDIST(Global_54078, *(&Param0 + 184)) < 40.0f))
				{
					fVar9 = 0,5f;
					fVar10 = 50.0f;
					vVar11 = *(&Param0 + 196);
					vVar11 = (vVar11.x + RAND_FLOAT_RANGE(5.0f, 15.0f));
					vVar11.f_8 = (vVar11.z + RAND_FLOAT_RANGE(5.0f, 15.0f));
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar11, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(&Param0 + 272, fVar10);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar9);
					SET_BLIP_PRIORITY(&Param0 + 272, 3);
				}
				else if (bParam1 == 13)
				{
					fVar13 = 0,5f;
					fVar14 = 30.0f;
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(&Param0 + 272, fVar14);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar13);
					SET_BLIP_PRIORITY(&Param0 + 272, 3);
				}
				else
				{
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 3, 7);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 3, 7);
					SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
					if (bParam1 == 19)
					{
						SET_BLIP_COLOR(&Param0 + 272, 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else if (bParam1 == 20)
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,34f, 0,58f, 0,74f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,34f, 0,58f, 0,74f, 1.0f);
					}
					else if (bParam1 == 21)
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,79f, 0,69f, 0.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,79f, 0,69f, 0.0f, 1.0f);
					}
					else
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, 1.0f);
					}
					if (Param0.f_152 == 312 || Param0.f_152 == 311)
					{
						UNK_0xFF3DB575(&Param0 + 280, 1);
						SET_BLIP_PRIORITY(&Param0 + 280, 3);
						SET_BLIP_MAX_DISTANCE(&Param0 + 272, 3.0f);
					}
				}
			}
		}
	}
	return;
}

void Function_210(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xDDFC / 56828
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
		Function_212(Function_213(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_212(Function_213(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_212(StackVal);
				Var1 = Function_212(StackVal);
				if (Function_211(StackVal, StackVal, Var1, Var3))
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

bool Function_211(struct<2> Param0, struct<2> Param2) //Position: 0xDF07 / 57095
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_212(int iParam0) //Position: 0xDF33 / 57139
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

int Function_213(vector3 vParam0) //Position: 0xDF8A / 57226
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

int Function_214(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0xDFD8 / 57304
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_72(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_48(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_216(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_213(StackVal, Param2);
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
		Function_212(uVar3);
		Var6 = Function_212(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_212(StackVal);
				Var4 = Function_212(StackVal);
				if (Function_211(StackVal, StackVal, Var4, Var6))
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
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_215(iParam1), 0.0f, 2, iVar2);
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

int Function_215(int iParam0) //Position: 0xE1C1 / 57793
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

int Function_216(int iParam0) //Position: 0xE2F8 / 58104
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

void Function_217(struct<229> Param0) //Position: 0xE3B0 / 58288
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_113(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_28(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_218(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_218(struct<217> Param0) //Position: 0xE480 / 58496
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_28(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_72(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_28(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_219(&uVar1, 0);
	return;
}

int Function_219(var uParam0, int iParam1) //Position: 0xE53E / 58686
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
	Function_221(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_220(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_220(int iParam0, var uParam1, struct<2> Param2) //Position: 0xE6A8 / 59048
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_221(int iParam0) //Position: 0xE750 / 59216
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
						Function_222(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_152(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_222(iVar0);
						}
					}
					else if (Function_152(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_222(iVar0);
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
			Function_222(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_222(int iParam0) //Position: 0xE8BE / 59582
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

void Function_223(struct<229> Param0) //Position: 0xE926 / 59686
{
	if (!Function_113(Param0.f_228, 1))
	{
		if (Param0.f_220 != 4294967295)
		{
			STREAMING_REQUEST_ACTOR(Param0.f_220, 1, true);
			Function_112(&Param0 + 228, 1);
		}
	}
	if (!Function_113(Param0.f_228, 8))
	{
		REQUEST_STRING_TABLE("dlc_zombiepack_rcm");
		Function_112(&Param0 + 228, 8);
	}
	if (!Function_113(Param0.f_228, 2))
	{
		if (UNK_0x214AFB8C(&Param0 + 120))
		{
			STREAMING_REQUEST_GRINGO(&Param0 + 120);
			Function_112(&Param0 + 228, 2);
		}
	}
	if (!Function_113(Param0.f_228, 4))
	{
		if (UNK_0x214AFB8C(&Param0 + 128))
		{
			STREAMING_REQUEST_PROP(&Param0 + 128, false);
			Function_112(&Param0 + 228, 4);
		}
	}
	return;
}

void Function_224(struct<261> Param0) //Position: 0xE9DD / 59869
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	
	if (!Param0.f_260 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		iVar0 = Function_226(Param0.f_260);
		iVar1 = Function_225(Param0.f_260);
		if (iVar0 > 12 || iVar0 != 24)
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&uVar2, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar2);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&uVar2, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar2);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar4, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar4);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar4, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar4);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
		PRINT_HELP_FORMAT(7.0f, "mission_later_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		return;
	}
	return;
}

int Function_225(int iParam0) //Position: 0xEC53 / 60499
{
	if (iParam0 & 1056 == 1024)
	{
		return 5;
	}
	if (iParam0 & 96 == 32)
	{
		return 7;
	}
	if (iParam0 & 192 == 64)
	{
		return 11;
	}
	if (iParam0 & 384 == 128)
	{
		return 14;
	}
	if (iParam0 & 768 == 256)
	{
		return 18;
	}
	if (iParam0 & 1536 == 512)
	{
		return 22;
	}
	return 0;
}

int Function_226(int iParam0) //Position: 0xECBC / 60604
{
	if (iParam0 & 1056 == 32)
	{
		return 5;
	}
	if (iParam0 & 96 == 64)
	{
		return 7;
	}
	if (iParam0 & 192 == 128)
	{
		return 11;
	}
	if (iParam0 & 384 == 256)
	{
		return 14;
	}
	if (iParam0 & 768 == 512)
	{
		return 18;
	}
	if (iParam0 & 1536 == 1024)
	{
		return 22;
	}
	return 0;
}

int Function_227(struct<261> Param0) //Position: 0xED25 / 60709
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_228(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_228(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_228(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_228(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_228(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_228(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_228(var uParam0, int iParam1) //Position: 0xEDE0 / 60896
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_229(int iParam0) //Position: 0xEDFD / 60925
{
	if (!Function_4(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_113(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_105(Global_119935, 0x8000000))
			{
				Function_100(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_230(struct<237> Param0) //Position: 0xEE58 / 61016
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
		if (!Function_232(&Param0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_190(&Param0, bParam1, 0, 0, &bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar17)
				{
					Function_231(bParam1, 1);
				}
				else
				{
					Function_108("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312) && GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &Param0 + 312)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_190(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_190(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_190(&Param0, bParam1, 0, 0, &bParam2);
			bVar18 = false;
			uVar19 = GET_LAST_ATTACKER(&Param0 + 312);
			if (IS_ACTOR_VALID(&uVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&uVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						Function_231(bParam1, 1);
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_108("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_116927[bParam16] = 7;
						*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
					}
				}
				else
				{
					Function_108("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(&Param0 + 312, &Global_54076, 5.0f) && AI_WAS_PUSHED_OVER(&Param0 + 312, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_190(&Param0, bParam1, 0, 0, &bParam2);
			TASK_CLEAR(&Param0 + 312);
			TASK_PRIORITY_SET(&Param0 + 312, 2);
			TASK_FLEE_ACTOR(&Param0 + 312, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(&Param0 + 312, true);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Disabled", &Param0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 1);
				SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, 0, "RCM_InactiveJournal");
			}
			Global_116927[bParam16] = 7;
			*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
		}
	}
	return 1;
}

void Function_231(bool bParam0, bool bParam1) //Position: 0xF2B5 / 62133
{
	char* cVar0[32];
	
	Global_116927[bParam06] = 7;
	*(&Global_116927[bParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam06] + 8, &Global_99725[bParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[bParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (&bParam1)
	{
		switch (Global_43787)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_43787);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_105(Global_119934, 8192))
	{
		Function_100(&Global_54076, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam043].f_224, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

bool Function_232(struct<237> Param0) //Position: 0xF43E / 62526
{
	if (!Param0.f_236)
	{
		if (Function_57())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(0, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_233(var uParam0, int iParam1) //Position: 0xF50D / 62733
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_234(struct<265> Param0) //Position: 0xF52A / 62762
{
	if (!Param0.f_260 != 0)
	{
		if (Function_228(&Param0 + 260, 4) && !&bParam4)
		{
			if (!Function_236(bParam1))
			{
				return 0;
			}
		}
		if (Function_228(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[bParam143] + 36 || iParam3)
			{
				if (!Function_70(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_228(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_97(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_228(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_235(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_227(&Param0);
	}
	return 1;
}

bool Function_235(int iParam0, bool bParam1) //Position: 0xF5F8 / 62968
{
	if (!Function_177(iParam0))
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

bool Function_236(int iParam0) //Position: 0xF62F / 63023
{
	return Global_116927[iParam06].f_16;
}

bool Function_237(bool bParam0) //Position: 0xF63F / 63039
{
	if (((((((((((bParam0 != 31 && Function_70(5)) || (bParam0 != 12 && Function_70(7))) || (bParam0 != 15 && Function_238(1))) || (bParam0 != 16 && Function_70(15))) || (bParam0 != 0 && Function_238(3))) || (bParam0 != 19 && Function_70(9))) || ((bParam0 != 8 || bParam0 != 6) && Function_70(5))) || ((bParam0 != 24 || bParam0 != 22) && Function_97(2, 0))) || (bParam0 != 25 && Function_70(24))) || (bParam0 != 26 && Function_70(25))) || ((((bParam0 != 27 && Function_70(26)) && Function_70(1)) && Function_70(23)) && Function_238(4)))
	{
		if (!Global_116927[bParam06].f_20)
		{
			Global_116927[bParam06].f_20 = 1;
		}
		if (!Function_113(Global_99725[bParam043].f_228, 64))
		{
			Function_112(&Global_99725[bParam043] + 228, 64);
		}
		return 1;
	}
	return 0;
}

bool Function_238(int iParam0) //Position: 0xF71E / 63262
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_239(iParam0)7].f_12 < 0;
}

int Function_239(int iParam0) //Position: 0xF784 / 63364
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

void Function_240(struct<149> Param0) //Position: 0xF846 / 63558
{
	if (IS_LATER_THAN(GET_TIME_OF_DAY(), &Global_116927[bParam16] + 8))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (bParam1 != 3 || bParam1 != 5)
			{
				if (VDIST(*(&Param0 + 184), Global_54078) < 35.0f)
				{
					if (!Function_195(StackVal, *(&Param0 + 184), 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Global_116927[bParam16] = 1;
						SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam143].f_224, -1.0f, 0, 0);
					}
				}
			}
			else if (VDIST(*(&Param0 + 184), Global_54078) < Param0.f_148)
			{
				Global_116927[bParam16] = 1;
				SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam143].f_224, -1.0f, 0, 0);
			}
		}
	}
	return;
}

void Function_241(float fParam0, int iParam1) //Position: 0xF8F6 / 63734
{
	Function_253(&fParam0, iParam1);
	Function_252(&fParam0, iParam1);
	Function_248(&fParam0, iParam1);
	if ((Function_70(5) && !Function_70(31)) && !Function_113(Global_99725[3143].f_228, 64))
	{
		Function_112(&Global_99725[3143] + 228, 64);
	}
	Function_247(iParam1);
	if (iParam1 != 12 || iParam1 != 14)
	{
		Function_245(iParam1, Global_46816[0], 0, 0);
	}
	if (((Function_70(5) && !Function_70(15)) && Function_238(1)) && !Function_113(Global_99725[1543].f_228, 64))
	{
		Function_112(&Global_99725[1543] + 228, 64);
	}
	if (iParam1 == 16)
	{
		Function_245(iParam1, Global_46760[0], 0, 0);
	}
	if (iParam1 != 0 || iParam1 != 1)
	{
		Function_245(iParam1, Global_46838[0], 0, 0);
	}
	if (iParam1 != 25 || iParam1 != 26)
	{
		Function_245(iParam1, Global_46866[1], 0, 0);
	}
	Function_243(&fParam0, iParam1);
	if ((iParam1 != 28 || iParam1 != 29) && Function_236(iParam1))
	{
		Function_242(29, 0);
	}
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xF9FF / 63999
{
	if (Function_259(iParam0))
	{
		LOG_ERROR("SET_QUEST_SCRIPT_ACTIVATED: invalid quest!!");
		return;
	}
	Global_116927[iParam06].f_16 = &iParam1;
	return;
}

void Function_243(struct<225> Param0) //Position: 0xFA4C / 64076
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 27)
	{
		if (!Function_236(iParam1))
		{
			if (Function_238(4))
			{
				if (IS_BLIP_VALID(&uLocal_669))
				{
					REMOVE_BLIP(&uLocal_669);
				}
				if (Function_70(1) && Function_70(23))
				{
					if (!Function_113(Global_99725[iParam143].f_228, 64))
					{
						Function_112(&Global_99725[iParam143] + 228, 64);
					}
					Function_245(27, Global_46866[1], 0, 0);
				}
				else
				{
					if (Function_113(Global_99725[iParam143].f_228, 64))
					{
						Function_7(&Global_99725[iParam143] + 228, 64);
					}
					if (!Function_105(Global_119935, 4))
					{
						Function_100(&Global_54076, 4, 2, 1);
					}
				}
				iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Param0.f_224);
				iVar1 = 0;
				while (iVar1 <= iVar0)
				{
					if (GET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Param0.f_224, iVar1)) != 4)
					{
						SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Param0.f_224, iVar1), 4, 0);
					}
					iVar1++;
				}
			}
			else if (Function_70(26))
			{
				if ((StackVal && Function_152(!IS_BLIP_VALID(&uLocal_669), &Global_54076, Vector(-1361,986f, 13,066f, 4298,754f)) < 40.0f) && !Global_6628)
				{
					iVar2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
					Function_244(&uLocal_669, &iVar2, &Global_99725[2643] + 4, 393);
				}
				if (StackVal && Function_152(IS_BLIP_VALID(&uLocal_669), &Global_54076, Vector(-1361,986f, 13,066f, 4298,754f)) > 30.0f)
				{
					REMOVE_BLIP(&uLocal_669);
				}
			}
		}
	}
	else if (iParam1 != 25 && !Function_70(25))
	{
		if (Function_80(Global_46866[1]) && Function_70(24))
		{
			*(&Global_99725[2543] + 196) = Vector(-1700,197f, 8,07f, 4227.0f);
			if (IS_BLIP_VALID(&Global_99725[2543] + 272))
			{
				SET_BLIP_POS(&Global_99725[2543] + 272, &Global_99725[2543] + 196);
				if (VDIST(Global_54078, *(&Global_99725[2543] + 196)) > 30.0f)
				{
					SET_BLIP_VISIBLE(&Global_99725[2543] + 272, false);
				}
				else if (VDIST(Global_54078, *(&Global_99725[2543] + 196)) < 35.0f)
				{
					SET_BLIP_VISIBLE(&Global_99725[2543] + 272, true);
				}
			}
		}
		else
		{
			*(&Global_99725[2543] + 196) = Vector(-1663,993f, 8,501f, 4282,997f);
			if (IS_BLIP_VALID(&Global_99725[2543] + 272))
			{
				SET_BLIP_VISIBLE(&Global_99725[2543] + 272, true);
				SET_BLIP_POS(&Global_99725[2543] + 272, &Global_99725[2543] + 196);
			}
		}
	}
	return;
}

void Function_244(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xFD06 / 64774
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1.0f;
	fVar1 = 50.0f;
	if (IS_VOLUME_VALID(&iParam1))
	{
		uParam0 = Function_75(&iParam1, &bParam3, 0.0f);
		SET_BLIP_NAME(&uParam0, &uParam2);
		SET_BLIP_PRIORITY(&uParam0, 3);
		if (&bParam3 == 440)
		{
			SET_BLIP_SCALE(&uParam0, fVar1);
			fVar0 = 0,5f;
		}
		SET_BLIP_COLOR(&uParam0, 0,63f, 0,85f, 0.0f, fVar0);
	}
	else
	{
		LOG_ERROR("Passed invalid volume to ADD_BLIP_FOR_GRAVEYARD!");
	}
}

void Function_245(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xFDA7 / 64935
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_234(&(Global_99725[iParam043]), iParam0, 1, 1, 1))
	{
		if (Function_113(Global_99725[iParam043].f_228, 64))
		{
			Function_7(&Global_99725[iParam043] + 228, 64);
		}
		return;
	}
	if (Function_246(iParam1) || Function_237(iParam0))
	{
		if (!Function_113(Global_99725[iParam043].f_228, 64))
		{
			Function_112(&Global_99725[iParam043] + 228, 64);
		}
	}
	else if (!Function_237(iParam0) && Function_113(Global_99725[iParam043].f_228, 64))
	{
		Function_7(&Global_99725[iParam043] + 228, 64);
	}
	if (Function_80(iParam1))
	{
		if (Function_236(iParam0))
		{
			Function_242(iParam0, 0);
		}
		if (!Function_113(Global_116927[iParam06].f_32, 1))
		{
			Function_112(&Global_116927[iParam06] + 32, 1);
			if (IS_BLIP_VALID(&Global_99725[iParam043] + 272))
			{
				SET_BLIP_COLOR(&Global_99725[iParam043] + 272, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam043].f_216 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
		}
	}
	else if (!Function_236(iParam0))
	{
		if (!&bParam2)
		{
			Function_242(iParam0, 1);
		}
		else if (Function_70(iParam0))
		{
			if (!IS_ACTOR_VALID(&iParam3))
			{
				Function_242(iParam0, 1);
			}
		}
		if (Function_113(Global_116927[iParam06].f_32, 1))
		{
			Function_7(&Global_116927[iParam06] + 32, 1);
			if (IS_BLIP_VALID(&Global_99725[iParam043] + 272))
			{
				SET_BLIP_COLOR(&Global_99725[iParam043] + 272, 0,63f, 0,85f, 0.0f, 1.0f);
			}
		}
	}
}

bool Function_246(int iParam0) //Position: 0xFF64 / 65380
{
	if (!Function_72(iParam0))
	{
		return 1;
	}
	return Function_233(&(Global_43791[iParam0]), 4);
}

void Function_247(int iParam0) //Position: 0xFF80 / 65408
{
	if ((((((iParam0 != 32 && Function_70(31)) || (iParam0 != 33 && Function_70(32))) || (iParam0 != 34 && Function_70(33))) || (iParam0 != 35 && Function_70(34))) || (iParam0 != 36 && Function_70(35))) || (iParam0 != 37 && Function_70(36)))
	{
		if (!Global_116927[iParam06].f_20)
		{
			Global_116927[iParam06].f_20 = 1;
		}
		if (!Function_113(Global_99725[iParam043].f_228, 64))
		{
			Function_112(&Global_99725[iParam043] + 228, 64);
		}
	}
	return;
}

void Function_248(struct<225> Param0) //Position: 0x1000E / 65550
{
	int iVar0;
	int iVar1;
	char* cVar2[24];
	char* cVar8[24];
	char* cVar14[24];
	char* cVar20[24];
	int iVar26;
	int iVar27;
	
	if (iParam1 == 9)
	{
		if (!Function_236(iParam1))
		{
			if (Function_70(8))
			{
				if (!Function_251(&Param0, iParam1, 1, 1))
				{
					iVar0 = Function_41(491);
					iVar1 = Function_41(497);
					strcpy(&cVar2, "dyn_sage", 24);
					strcpy(&cVar8, "dyn_snowdrop", 24);
					if (Function_113(Global_116927[86].f_24, 32))
					{
						if (iVar0 == 1)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 32);
							Function_112(&Global_116927[86] + 24, 128);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 128))
					{
						if (iVar0 == 2)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 128);
							Function_112(&Global_116927[86] + 24, 256);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 256))
					{
						if (iVar0 == 3)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 256);
							Function_112(&Global_116927[86] + 24, 512);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 512))
					{
						if (iVar0 == 4)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 512);
							Function_112(&Global_116927[86] + 24, 1024);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 1024))
					{
						if (iVar0 == 5)
						{
							strcpy(&cVar14, "", 24);
							SET_JOURNAL_ENTRY_DETAIL_STYLE(Param0.f_224, "Merchant_2_MoreSage", 4, 0);
							UI_SET_STRING(&cVar2, &cVar14);
						}
					}
					if (Function_113(Global_116927[86].f_24, 1))
					{
						if (iVar1 == 1)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 1);
							Function_112(&Global_116927[86] + 24, 2);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 2))
					{
						if (iVar1 == 2)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 2);
							Function_112(&Global_116927[86] + 24, 4);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 4))
					{
						if (iVar1 == 3)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 4);
							Function_112(&Global_116927[86] + 24, 8);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 8))
					{
						if (iVar1 == 4)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_116927[86] + 24, 8);
							Function_112(&Global_116927[86] + 24, 16);
						}
					}
					else if (Function_113(Global_116927[86].f_24, 16))
					{
						if (iVar1 == 5)
						{
							strcpy(&cVar20, "", 24);
							SET_JOURNAL_ENTRY_DETAIL_STYLE(Param0.f_224, "Merchant_2_MoreSnowdrop", 4, 0);
							UI_SET_STRING(&cVar8, &cVar20);
						}
					}
					if (iVar0 <= 5 && iVar1 <= 5)
					{
						iVar26 = GET_JOURNAL_ENTRY_NUM_DETAILS(Param0.f_224);
						iVar27 = 0;
						while (iVar27 <= iVar26)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Param0.f_224, iVar27), 4, 0);
							iVar27++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
						Function_249(Param0.f_224, 0);
						Function_250("ZOMBIE_STORY_2_ReturnNigel", 0x40f00000, 1, 2, 0, 0, 0, 0);
						if (!Function_113(Global_99725[iParam143].f_228, 64))
						{
							Function_112(&Global_99725[iParam143] + 228, 64);
						}
						Function_242(iParam1, 1);
					}
				}
			}
		}
	}
	return;
}

void Function_249(char* cParam0, bool bParam1) //Position: 0x10545 / 66885
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

void Function_250(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1056A / 66922
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
			Var0 = { StackVal, StackVal, StackVal, Function_109(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_251(struct<265> Param0) //Position: 0x105FF / 67071
{
	if (!Param0.f_260 != 0)
	{
		if (Function_228(&Param0 + 260, 4))
		{
			if (!Function_236(iParam1))
			{
				return 0;
			}
		}
		if (Function_228(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_70(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_228(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_97(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_228(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_235(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_227(&Param0);
	}
	return 1;
}

void Function_252(struct<225> Param0) //Position: 0x106CB / 67275
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 != 7 && !Function_236(iParam1))
	{
		if (Function_238(1))
		{
			if (IS_BLIP_VALID(&uLocal_671))
			{
				REMOVE_BLIP(&uLocal_671);
			}
		}
		if (Function_238(2))
		{
			if (IS_BLIP_VALID(&uLocal_677))
			{
				REMOVE_BLIP(&uLocal_677);
			}
		}
		if (Function_238(3))
		{
			if (IS_BLIP_VALID(&uLocal_673))
			{
				REMOVE_BLIP(&uLocal_673);
			}
		}
		if ((Function_238(1) && Function_238(2)) && Function_238(3))
		{
			iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Param0.f_224);
			iVar1 = 0;
			while (iVar1 <= iVar0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Param0.f_224, iVar1), 4, 0);
				iVar1++;
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
			Function_249(Param0.f_224, 0);
			Function_250("Seth1_OBJ_ReturnToSeth", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_242(iParam1, 1);
		}
		else if (Function_70(6))
		{
			if ((StackVal && Function_152((!IS_BLIP_VALID(&uLocal_671) && !Function_238(1)), &Global_54076, Vector(-1792,576f, 24,675f, 2850,352f)) < 50.0f) && !Global_6628)
			{
				iVar2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
				Function_244(&uLocal_671, &iVar2, &Global_99725[643] + 4, 393);
			}
			if (StackVal && Function_152(IS_BLIP_VALID(&uLocal_671), &Global_54076, Vector(-1792,576f, 24,675f, 2850,352f)) > 30.0f)
			{
				REMOVE_BLIP(&uLocal_671);
			}
			if ((StackVal && Function_152((!IS_BLIP_VALID(&uLocal_677) && !Function_238(2)), &Global_54076, Vector(-2908,823f, 19,075f, 2689,178f)) < 50.0f) && !Global_6628)
			{
				iVar3 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
				Function_244(&uLocal_677, &iVar3, &Global_99725[643] + 4, 393);
			}
			if (StackVal && Function_152(IS_BLIP_VALID(&uLocal_677), &Global_54076, Vector(-2908,823f, 19,075f, 2689,178f)) > 30.0f)
			{
				REMOVE_BLIP(&uLocal_677);
			}
			if ((StackVal && Function_152((!IS_BLIP_VALID(&uLocal_673) && !Function_238(3)), &Global_54076, Vector(-3908,769f, 31,114f, 2912,107f)) < 50.0f) && !Global_6628)
			{
				iVar4 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
				Function_244(&uLocal_673, &iVar4, &Global_99725[643] + 4, 393);
			}
			if (StackVal && Function_152(IS_BLIP_VALID(&uLocal_673), &Global_54076, Vector(-3908,769f, 31,114f, 2912,107f)) > 30.0f)
			{
				REMOVE_BLIP(&uLocal_673);
			}
		}
	}
	return;
}

void Function_253(struct<225> Param0) //Position: 0x109C9 / 68041
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (iParam1 != 3 && !Function_70(3))
	{
		if (Function_238(0))
		{
			if (Function_80(Global_46914[0]))
			{
				if (IS_BLIP_VALID(&uLocal_675))
				{
					REMOVE_BLIP(&uLocal_675);
				}
				if (Function_236(3))
				{
					Function_242(3, 0);
				}
				if (((Global_21684[Function_239(0)7].f_12 != 1 && !Function_70(3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")))) && !DECOR_CHECK_EXIST(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe"))
				{
					uVar0 = Function_75(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), 312, 0.0f);
					if (IS_BLIP_VALID(&uVar0))
					{
						SET_BLIP_COLOR(&uVar0, 0,63f, 0,85f, 0.0f, 1.0f);
						SET_BLIP_BLINK(&uVar0, 1, 0, 5f);
						SET_BLIP_NAME(&uVar0, &Global_99725[243] + 4);
					}
				}
			}
			else if (!Function_236(3))
			{
				Function_242(3, 1);
				iVar1 = GET_JOURNAL_ENTRY_NUM_DETAILS(Param0.f_224);
				iVar2 = 0;
				while (iVar2 <= iVar1)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Param0.f_224, iVar2), 4, 0);
					iVar2++;
				}
				if (IS_BLIP_VALID(&uLocal_675))
				{
					REMOVE_BLIP(&uLocal_675);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, false);
				Function_249(Global_99725[343].f_224, 0);
				Function_242(3, 1);
				Function_250("ZOMBIE_STORY_1Survivor_OBJ", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_254(0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
				}
			}
		}
		else if (Function_70(4) && !Function_70(3))
		{
			if (StackVal && Function_152(!IS_BLIP_VALID(&uLocal_675), &Global_54076, Vector(530,885f, 94,369f, 1198,078f)) < 70.0f)
			{
				uVar3 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
				Function_244(&uLocal_675, &uVar3, &Global_99725[443] + 4, 393);
			}
			if (StackVal && Function_152(IS_BLIP_VALID(&uLocal_675), &Global_54076, Vector(530,885f, 94,369f, 1198,078f)) > 40.0f)
			{
				REMOVE_BLIP(&uLocal_675);
			}
		}
	}
	return;
}

void Function_254(int iParam0) //Position: 0x10CF9 / 68857
{
	int iVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_97(1, 0))
	{
		Function_258("ZOMBIE_STORY_1_OBJ");
		if (!Function_70(2))
		{
			iVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_70(4) && !Function_238(0))
	{
		iVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_70(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_2Nigel_OBJ");
		Function_258("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_70(8) && !Function_70(6))
		{
			iVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_70(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_70(8))
		{
			iVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_70(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_70(6))
		{
			iVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_228(&Global_6667[228] + 184, 2) || ((((((Function_70(14) && Function_70(18)) && Function_70(37)) && Function_70(7)) && Function_70(11)) && Function_70(5)) && Function_70(21)))
	{
		Function_258("ZOMBIE_STORY_3_OBJ");
		if (!Function_97(2, 0))
		{
			iVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_97(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_4_OBJ");
		if (!Function_70(24))
		{
			iVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_228(&Global_6667[328] + 184, 2) || ((Function_70(27) && Function_70(1)) && Function_70(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_5_OBJ");
		if (!Function_97(3, 0))
		{
			iVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_97(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_70(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_70(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_70(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_70(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_255(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_255(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_255(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_41(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_41(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_70(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_70(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_70(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_70(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_70(6) && Function_255(Global_46949) < 0) && Function_255(Global_46951) < 0) && Function_255(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_70(11))
	{
		if (Function_70(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_41(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_41(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_41(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_41(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_41(491) <= 5 && Function_41(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_70(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_70(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(&iVar0))
	{
		Function_250(&iVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_255(bool bParam0) //Position: 0x1161A / 71194
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

var Function_256() //Position: 0x11634 / 71220
{
	return STRING_TO_HASH(Function_257());
}

var Function_257() //Position: 0x11640 / 71232
{
	return "ZOMBIE_STORY";
}

void Function_258(int iParam0) //Position: 0x11655 / 71253
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_256(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_257(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_256(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_256(), &iParam0, 0, 3, false);
	Function_249(Function_256(), 0);
	return;
}

bool Function_259(int iParam0) //Position: 0x1169E / 71326
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_260() //Position: 0x116B3 / 71347
{
	Global_99717 = CREATE_LAYOUT("QuestLayout");
	return;
}

void Function_261(struct<57> Param0) //Position: 0x116CF / 71375
{
	strcpy(&Param0 + 24, "MISSIONS", 16);
	if (Global_6666)
	{
		Param0 = 35545;
		(&Param0 + 8) = 35538;
		*(&Param0 + 16) = 35545;
	}
	else
	{
		Param0 = 112212;
		*(&Param0 + 8) = 71962;
		*(&Param0 + 16) = 71470;
	}
	Param0.f_56 = 0;
	return;
}

void Function_262() //Position: 0x1172E / 71470
{
	Function_263(&Global_6667);
	return;
}

void Function_263(struct<28>[] Param0) //Position: 0x1173A / 71482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Param0[iVar028].f_132)
		{
			Function_264(&(Param0[iVar028]), iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_264(struct<181> Param0) //Position: 0x1176D / 71533
{
	if (!Param0.f_132)
	{
		return;
	}
	switch (Param0.f_152)
	{
		case 0x00000002:
			*(&Param0 + 8) = 4294967295;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
			Param0.f_180 = 0;
			if (Param0.f_152 == 5)
			{
				Param0.f_48 = FLOOR(GET_CURRENT_GAME_TIME());
			}
			if (IS_BLIP_VALID(&Param0 + 144))
			{
				REMOVE_BLIP(&Param0 + 144);
			}
			if ((IS_OBJECT_VALID(&Param0 + 64) && iParam1 == 11) && iParam1 == 54)
			{
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
						}
					}
				}
				DESTROY_OBJECT(&Param0 + 64);
			}
			if (Param0.f_52)
			{
				STREAMING_EVICT_GRINGO(Param0.f_48);
				Param0.f_52 = 0;
			}
			if (IS_OBJECT_VALID(&Param0 + 72))
			{
				Function_265(&Param0 + 72);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
			}
			break;
	}
	Param0.f_132 = 0;
	return;
}

void Function_265(var uParam0) //Position: 0x11884 / 71812
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
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
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

int Function_266() //Position: 0x1191A / 71962
{
	if (!Global_6607)
	{
		return 0;
	}
	if (Function_267(&Global_6667, 1) >= 0)
	{
		Global_6633 = 1;
		return 0;
	}
	Global_6633 = 1;
	return 1;
}

int Function_267(struct<28>[] Param0, bool bParam1) //Position: 0x1193F / 71999
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<153> Var3;
	
	bVar1 = 1000;
	if (Global_98250)
	{
		if (!DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "launchedmissiontester"))
		{
			if (Global_98254 >= 4294967295)
			{
				LOG_ERROR("launching mission tester");
				Function_405();
			}
			else if (Global_98253 == 4294967294)
			{
				Function_404();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", 1);
			return bVar1;
		}
	}
	if (!Global_47312 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (IS_SCRIPT_VALID(&Param0[iVar028] + 160))
			{
				TERMINATE_SCRIPT(&Param0[iVar028] + 160);
			}
			iVar0++;
		}
		Global_47312 = 0;
	}
	Function_403(&Param0);
	if (Global_6625)
	{
		Function_263(&Param0);
		return bVar1;
	}
	if (Global_6623)
	{
		Function_263(&Param0);
		if (Global_6622)
		{
			Global_6622 = 0;
		}
		return bVar1;
	}
	if (Global_6638 || Global_6639)
	{
		return bVar1;
	}
	if (!Global_6617 && bParam1)
	{
		return bVar1;
	}
	if (Global_6622)
	{
		Function_263(&Param0);
		Global_6623 = 1;
		Function_401(1, 0);
		return bVar1;
	}
	if (Global_99146 && !Function_399(&Global_99130))
	{
		Function_263(&Param0);
		return bVar1;
	}
	if (Function_398(1, 0, 0, 5) && !Global_6623)
	{
		Function_263(&Param0);
		return bVar1;
	}
	if (bParam1)
	{
		if (!Global_47341 != 0)
		{
			iVar2 = Function_8(StackVal, StackVal, Global_47341);
			if (Function_177(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_397(&Param0, iVar2) };
				if (!Var3.f_152 != 0)
				{
					Function_322(&Var3, 0, 0, 0);
				}
			}
			Global_47341 = 0;
		}
	}
	if (Global_53524.f_36 && Global_6607)
	{
		if (Function_99(Global_53524.f_20))
		{
			if (!Global_6667[Global_53524.f_2028].f_152 != 0)
			{
				Function_322(&(Global_6667[Global_53524.f_2028]), 0, 1, 1);
				Global_53524.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4 + 1)
	{
		if (Param0[iVar028] != Global_43786 || !bParam1)
		{
			Function_268(&(Param0[iVar028]), iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_6649 = 0;
	}
	return bVar1;
}

void Function_268(struct<209> Param0) //Position: 0x11B70 / 72560
{
	int iVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	float fVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	if (Param0.f_152 == 0)
	{
		return;
	}
	if (!bParam2)
	{
		if (!Global_43789 != Param0.f_112)
		{
			Function_264(&Param0, iParam1);
			return;
		}
	}
	if (Function_97(iParam1, 0) && !Param0.f_152 != 2)
	{
		Function_264(&Param0, iParam1);
		return;
	}
	iVar0 = Function_321(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_320(&Param0))
		{
			Function_264(&Param0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(&Param0 + 160))
	{
		Function_264(&Param0, iParam1);
		return;
	}
	Param0.f_180 = 0;
	Param0.f_132 = 1;
	switch (Param0.f_152)
	{
		case 0x00000001:
			Param0.f_180 = 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Function_319(&Param0))
					{
						Param0.f_180 = 0;
						Function_318(&Param0 + 144, 0, Param0.f_184, &Param0 + 16);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
							}
						}
					}
					else if (Function_313(&Param0))
					{
						bVar10 = true;
						if (IS_OBJECT_VALID(&Param0 + 72))
						{
							if (Global_6657)
							{
								bVar10 = false;
							}
						}
						if (bVar10)
						{
							Param0.f_180 = 0;
							Function_318(&Param0 + 144, 0, Param0.f_184, &Param0 + 16);
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
						}
					}
					else
					{
						if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
								}
							}
						}
						Param0.f_180 = 1;
						Function_318(&Param0 + 144, 1, Param0.f_184, &Param0 + 16);
						if (Function_228(&Param0 + 184, 4096))
						{
							Function_312(&Param0 + 184, 4096);
						}
					}
					fVar13 = Function_53(StackVal, StackVal, Global_54078, *(&Param0 + 88));
					if (!Param0.f_168 && !Param0.f_208)
					{
						if (!IS_OBJECT_VALID(&Param0 + 64) && UNK_0x214AFB8C(Param0.f_48))
						{
							if (!STREAMING_IS_GRINGO_LOADED(Param0.f_48))
							{
								if (!Param0.f_52)
								{
									STREAMING_REQUEST_GRINGO(Param0.f_48);
									Param0.f_52 = 1;
								}
							}
							else if (IS_LAYOUTREF_VALID(&Global_10992))
							{
								Var11 = *(&Param0 + 120);
								*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_28(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
								if (fVar13 > 175.0f)
								{
									Function_312(&Param0 + 184, 8388608);
								}
								else
								{
									Function_311(&Param0 + 184, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(&Param0 + 72) && (!Param0.f_172 || Param0.f_180)) && ((!iParam1 != 14 || fVar13 < 100.0f) || Global_6649)) && ((fVar13 < 7,5f || (Param0.f_172 && Param0.f_180)) || Global_6649)) && (!Function_228(&Param0 + 184, 1048576) || Param0.f_180))
					{
						Function_305(&Param0);
						if (Param0.f_184 & 524288 >= 0)
						{
							Function_14(4194304);
						}
						if (Param0.f_180)
						{
							if (IS_BLIP_VALID(&Param0 + 144))
							{
								REMOVE_BLIP(&Param0 + 144);
							}
							*(&Param0 + 72) = Function_304(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, Param0.f_100, 0, 3, Param0.f_136, 3, 1, 3212836864, 3212836864, 1);
							*(&Param0 + 144) = GET_BLIP_ON_OBJECT(&Param0 + 72);
						}
						else if (!IS_BLIP_VALID(&Param0 + 144))
						{
							*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						}
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_318(&Param0 + 144, Param0.f_180, Param0.f_184, &Param0 + 16);
					}
					else if (!Param0.f_180 && IS_OBJECT_VALID(&Param0 + 72))
					{
						if (IS_BLIP_VALID(&Param0 + 144))
						{
							REMOVE_BLIP(&Param0 + 144);
						}
						Function_265(&Param0 + 72);
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_318(&Param0 + 144, Param0.f_180, Param0.f_184, &Param0 + 16);
					}
					else if (!Param0.f_180 && !IS_BLIP_VALID(&Param0 + 144))
					{
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_318(&Param0 + 144, Param0.f_180, Param0.f_184, &Param0 + 16);
					}
					if ((!Param0.f_168 && !Param0.f_180) && iVar0 == 1)
					{
						if (fVar13 > 5.0f)
						{
							if (!Param0.f_172)
							{
								Function_302(&Param0);
								if (IS_OBJECT_VALID(&Param0 + 72))
								{
									Function_265(&Param0 + 72);
									*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
									SET_BLIP_PRIORITY(&Param0 + 144, 3);
									Function_318(&Param0 + 144, Param0.f_180, Param0.f_184, &Param0 + 16);
								}
								Param0.f_172 = 1;
							}
						}
						else if (Param0.f_172)
						{
							Param0.f_172 = 0;
						}
					}
					else if ((Function_228(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
					{
						if (fVar13 > 5.0f && !Function_228(&Param0 + 184, 8388608))
						{
							Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
					{
						if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && fVar13 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
							{
								Function_108("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
								Param0.f_176 = 1;
							}
						}
					}
				}
				else
				{
					Param0.f_180 = 0;
				}
			}
			else
			{
				Param0.f_180 = 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_VALID(&Global_54076))
			{
				Param0.f_180 = 0;
				return;
			}
			if ((Global_39873 + 5.0f) - 1.0f) < GET_CURRENT_GAME_TIME()
			{
				Param0.f_180 = 0;
				return;
			}
			if (!IS_VOLUME_VALID(&Param0 + 80))
			{
				Param0.f_180 = 0;
				return;
			}
			if (!Function_319(&Param0))
			{
				Param0.f_180 = 0;
				Function_318(&Param0 + 144, 0, Param0.f_184, &Param0 + 16);
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
						}
					}
				}
			}
			else if (Function_313(&Param0))
			{
				bVar10 = true;
				if (IS_OBJECT_VALID(&Param0 + 80))
				{
					if (Global_6657)
					{
						bVar10 = false;
					}
				}
				if (bVar10)
				{
					Param0.f_180 = 0;
					Function_318(&Param0 + 144, 0, Param0.f_184, &Param0 + 16);
					if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
							}
						}
					}
				}
			}
			else
			{
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
						}
					}
				}
				Param0.f_180 = 1;
				Function_318(&Param0 + 144, 1, Param0.f_184, &Param0 + 16);
				if (Function_228(&Param0 + 184, 4096))
				{
					Function_312(&Param0 + 184, 4096);
				}
			}
			fVar13 = Function_53(StackVal, StackVal, Global_54078, *(&Param0 + 88));
			bVar9 = IS_ACTOR_IN_VOLUME(&Global_54076, &Param0 + 80);
			if (!Param0.f_168 && !Param0.f_208)
			{
				if (!IS_OBJECT_VALID(&Param0 + 64) && UNK_0x214AFB8C(Param0.f_48))
				{
					if (!STREAMING_IS_GRINGO_LOADED(Param0.f_48))
					{
						if (!Param0.f_52)
						{
							STREAMING_REQUEST_GRINGO(Param0.f_48);
							Param0.f_52 = 1;
						}
					}
					else if (IS_LAYOUTREF_VALID(&Global_10992))
					{
						Var11 = *(&Param0 + 120);
						*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_28(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
						if (fVar13 > 175.0f)
						{
							Function_312(&Param0 + 184, 8388608);
						}
						else
						{
							Function_311(&Param0 + 184, 8388608);
						}
					}
				}
			}
			if (((!Param0.f_172 && !IS_BLIP_VALID(&Param0 + 144)) && !bVar9) && (!Function_228(&Param0 + 184, 1048576) || Param0.f_180))
			{
				Function_305(&Param0);
				if (Param0.f_184 & 524288 >= 0)
				{
					Function_14(4194304);
				}
				*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
				SET_BLIP_PRIORITY(&Param0 + 144, 3);
				Function_318(&Param0 + 144, Param0.f_180, Param0.f_184, &Param0 + 16);
			}
			if (((!IS_OBJECT_VALID(&Param0 + 72) && !bVar9) && Param0.f_180) && (!Function_228(&Param0 + 184, 4194304) || Function_228(&Param0 + 184, 8388608)))
			{
				*(&Param0 + 72) = Function_304(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 2,5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!Param0.f_168 && !Param0.f_180)
			{
				if (IS_OBJECT_VALID(&Param0 + 72))
				{
					Function_265(&Param0 + 72);
				}
				if (bVar9)
				{
					if (!Param0.f_172)
					{
						Param0.f_172 = 1;
						Function_302(&Param0);
					}
				}
				else if (Param0.f_172)
				{
					Param0.f_172 = 0;
				}
			}
			else if ((Function_228(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
			{
				if (bVar9 && !Function_228(&Param0 + 184, 8388608))
				{
					Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
			{
				if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						Function_108("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						Param0.f_176 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar14 = iParam1;
			if (!Function_319(&Param0) || Global_6646)
			{
				Param0.f_180 = 0;
			}
			else
			{
				Param0.f_180 = 1;
			}
			iVar16 = Function_301();
			if (iVar16 != 3 || iVar16 != 4)
			{
				if (Param0.f_184 & 2097152 >= 0)
				{
					bVar15 = true;
				}
			}
			switch (iVar14)
			{
				case 0x00000000:
					bVar17 = Function_300(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 0);
					break;
				
				case 0x00000001:
					bVar17 = Function_300(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 1);
					break;
				
				case 0x00000007:
					bVar17 = Function_299(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000002:
					bVar17 = Function_297(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000008:
					bVar17 = Function_295(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000004:
					bVar17 = Function_292(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000005:
					bVar17 = Function_291(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
			}
			if (iVar14 == 1)
			{
				if (Global_42825 != 1)
				{
					bVar19 = true;
				}
			}
			if (((IS_ACTOR_VALID(&Global_54076) && Function_290(iParam1)) && !bVar15) && !bVar19)
			{
				if (!Param0.f_168 && ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(&Param0 + 64) && IS_LAYOUTREF_VALID(&Global_46715))
					{
						*(&Param0 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, &Global_46715, Function_28(), *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f));
					}
				}
				if ((IS_OBJECT_VALID(&Param0 + 64) && !Param0.f_136 != 4294967295) && !bVar15)
				{
					if (!IS_BLIP_VALID(&Param0 + 144))
					{
						*(&Param0 + 144) = ADD_BLIP_FOR_OBJECT(&Param0 + 64, Param0.f_136, 0.0f, 2, 0);
						UNK_0x1E98AFEC(&Param0 + 144, 1);
						SET_BLIP_MAX_DISTANCE(&Param0 + 144, 1,25f);
						SET_BLIP_PRIORITY(&Param0 + 144, true);
					}
				}
				if (IS_BLIP_VALID(&Param0 + 144))
				{
					if (Param0.f_180)
					{
						if (bVar17)
						{
							SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 0,3f);
						}
					}
					else
					{
						SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 0,75f);
					}
					if (Param0.f_180)
					{
						if (!Function_289(iParam1))
						{
							if (Function_288(StackVal, *(&Param0 + 88), 1,25f))
							{
								if (Function_286(iParam1, 1))
								{
									Function_214(StackVal, Param0.f_112, (1 + iParam1), *(&Param0 + 88), Function_285(Param0.f_184));
									SET_BLIP_BLINK(&Param0 + 144, 1, 0, 10.0f);
								}
							}
						}
					}
				}
				if (!Param0.f_168)
				{
					if (IS_VOLUME_VALID(&Param0 + 80))
					{
						if (IS_POINT_IN_VOLUME(Global_54078, &Param0 + 80))
						{
							bVar20 = true;
						}
					}
					else if (VDIST(Global_54078, *(&Param0 + 88)) > Param0.f_100)
					{
						bVar20 = true;
					}
					if ((bVar18 && bVar15) && !Function_105(Global_119936, 8388608))
					{
						Function_100(&Global_54076, 8388608, 1, 1);
					}
					if (bVar20)
					{
						switch (iVar14)
						{
							case 0x00000000:
								Function_282(Param0.f_112, &Param0 + 48, 0);
								break;
							
							case 0x00000001:
								Function_282(Param0.f_112, &Param0 + 48, 1);
								break;
							
							case 0x00000007:
								Function_280(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000002:
								Function_276(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000008:
								Function_274(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000004:
								Function_272(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000005:
								Function_270(Param0.f_112, &Param0 + 48);
								break;
							}
					}
					if (bVar18)
					{
						if (bVar17)
						{
							if (!bVar15)
							{
								if (!Function_133(Function_24(), 0, 0))
								{
									if (GET_PLAYER_ZOOM_STATE(0) == 0)
									{
										if (FABS((StackVal - StackVal)) > 1.0f)
										{
											if (!AI_GLOBAL_IS_DANGER(&Global_54076, 10.0f))
											{
												if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
												{
													if (!IS_ACTOR_RIDING(&Global_54076))
													{
														bVar21 = true;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (bVar21)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
						{
							if (Function_228(&Param0 + 184, 8192))
							{
								if (Function_269() <= Param0.f_196)
								{
									stradd(&cVar1, "NO_", 32);
								}
							}
							stradd(&cVar1, "LAUNCH_", 32);
							stradd(&cVar1, &Param0 + 16, 32);
							*(&Param0 + 104) = ADD_SCRIPT_USE_CONTEXT(&cVar1, 40, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(&Param0 + 144))
				{
					REMOVE_BLIP(&Param0 + 144);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
				}
			}
			break;
	}
	return;
}

int Function_269() //Position: 0x12A7E / 76414
{
	return Function_41(0);
}

void Function_270(bool bParam0, var uParam1) //Position: 0x12A88 / 76424
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_271(bParam0, 0);
			Function_271(bParam0, 1);
			if (StackVal > Function_53(StackVal, Function_53(StackVal, StackVal, Global_54078, Function_271(bParam0, 0)), Global_54078, Function_271(bParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_271(bParam0, iVar1);
			uVar2 = Function_271(bParam0, iVar1);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 268, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_271(int iParam0, int iParam1) //Position: 0x12B73 / 76659
{
	if (iParam0 == Global_46816[0])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-814,7646f, 92,42929f, 2350,04f);
		}
		return StackVal, Vector(-826,37f, 92,361f, 2350,054f);
	}
	if (iParam0 == Global_46796[1])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-3657,917f, 42,30736f, 2131,19f);
		}
		return StackVal, Vector(-3666,223f, 42,223f, 2139,29f);
	}
	if (iParam0 == Global_46866[1])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-1709,76f, 8,09067f, 4259,935f);
		}
		return StackVal, Vector(-1721,364f, 8,09067f, 4259,787f);
	}
	if (iParam0 == Global_46914[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_272(bool bParam0, var uParam1) //Position: 0x12C94 / 76948
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_273(bParam0);
			uVar2 = Function_273(bParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 232, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_273(int iParam0) //Position: 0x12D5E / 77150
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_274(bool bParam0, var uParam1) //Position: 0x12E0E / 77326
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_275(bParam0);
			uVar2 = Function_275(bParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 261, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_275(int iParam0) //Position: 0x12EDC / 77532
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_276(int iParam0, int iParam1) //Position: 0x12FB0 / 77744
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_279(iParam0);
			uVar2 = Function_279(iParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				uVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&uVar4))
				{
					if (Function_277(GET_OBJECT_FROM_ACTOR(&uVar4), GET_OBJECT_FROM_ACTOR(&Global_54076)))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar4, "blackjack/Fake/Dealer/invite/front");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar4, "blackjack/Fake/Dealer/invite/back");
					}
					SAY_SINGLE_LINE_CONTEXT(&uVar4, 242, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

bool Function_277(var uParam0, int iParam1) //Position: 0x130EA / 78058
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&iParam1), &Var0);
	return Function_278(StackVal, &uParam0, Var0);
}

int Function_278(var uParam0, struct<2> Param1) //Position: 0x13106 / 78086
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&uParam0), &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 2);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 > 0.0f)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_279(int iParam0) //Position: 0x13144 / 78148
{
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2685,988f, 31,35322f, 4283,588f);
	}
	if (iParam0 == Global_46796[1])
	{
		return StackVal, Vector(-3640,397f, 42,77086f, 2104,753f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(719,2065f, 78,4736f, 1312,102f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(171,4703f, 73,74976f, 2224,109f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_280(int iParam0, int iParam1) //Position: 0x131E9 / 78313
{
	var uVar0;
	var uVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar3 = RAND_INT_RANGE(false, 6);
			bVar5 = bVar3;
			while (bVar5 < 6)
			{
				if (!bVar4)
				{
					Function_281(iParam0, bVar5);
					uVar0 = Function_281(iParam0, bVar5);
					uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(&uVar2))
					{
						uVar6 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar6))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar6, 274, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							bVar4 = true;
						}
					}
				}
				bVar5++;
			}
			if (!bVar4)
			{
				bVar5 = false;
				while (bVar5 < (bVar3 - 1))
				{
					Function_281(iParam0, bVar5);
					uVar0 = Function_281(iParam0, bVar5);
					uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(&uVar2))
					{
						uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar7))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar7, 274, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
						}
					}
					bVar5++;
				}
			}
		}
	}
	else
	{
		iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_281(int iParam0, bool bParam1) //Position: 0x1337F / 78719
{
	if (iParam0 == Global_46850[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_282(int iParam0, var uParam1, bool bParam2) //Position: 0x1366C / 79468
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			bVar3 = bVar1;
			while (bVar3 < 6)
			{
				if (!bVar2)
				{
					Function_284(iParam0, bVar3, &bParam2);
					uVar0 = Function_283(StackVal, Function_284(iParam0, bVar3, &bParam2));
					if (IS_GRINGO_VALID(&uVar0))
					{
						uVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar4))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar4, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar4, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar4, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(&uVar4, 280, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
								bVar2 = true;
							}
						}
					}
				}
				bVar3++;
			}
			if (!bVar2)
			{
				bVar3 = false;
				while (bVar3 < (bVar1 - 1))
				{
					Function_284(iParam0, bVar3, &bParam2);
					uVar0 = Function_283(StackVal, Function_284(iParam0, bVar3, &bParam2));
					if (IS_GRINGO_VALID(&uVar0))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar5, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar5, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar5, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(&uVar5, 280, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							}
						}
					}
					bVar3++;
				}
			}
		}
	}
	return;
}

var Function_283(var uParam0, int iParam1) //Position: 0x13811 / 79889
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

struct<8> Function_284(int iParam0, bool bParam1, bool bParam2) //Position: 0x13853 / 79955
{
	if (iParam0 == Global_46816[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (bParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_285(int iParam0) //Position: 0x13DFF / 81407
{
	int iVar0;
	
	if (iParam0 & 64 == 0)
	{
		iVar0 |= 2;
	}
	if (iParam0 & 128 == 0)
	{
		iVar0 |= 4;
	}
	if (iParam0 & 256 == 0)
	{
		iVar0 |= 8;
	}
	if (iParam0 & 512 == 0)
	{
		iVar0 |= 16;
	}
	if (iParam0 & 1024 == 0)
	{
		iVar0 |= 32;
	}
	if (iParam0 & 32 == 0)
	{
		iVar0 |= 1;
	}
	return iVar0;
}

bool Function_286(int iParam0, int iParam1) //Position: 0x13E67 / 81511
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_287(iVar0, &iParam1);
}

int Function_287(int iParam0, bool bParam1) //Position: 0x13E7B / 81531
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_39380[iParam0] && (!&bParam1 || !Function_193())) && !bVar0)
	{
		switch (iParam0)
		{
			case 0x00000002:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000001:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "poker", 32);
				break;
			
			case 0x00000003:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nblackjack", 32);
				break;
			
			case 0x00000004:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000005:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "armwrestle", 32);
				break;
			
			case 0x00000006:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "horseshoes", 32);
				break;
			
			case 0x00000007:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000008:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nliarsdice", 32);
				break;
			
			case 0x00000009:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "fivefinger", 32);
				break;
			
			case 0x0000000A:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nightwatch", 32);
				break;
			
			case 0x0000000B:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "horsebreak", 32);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			
			case 0x0000000E:
				break;
			
			case 0x0000000F:
				break;
			
			case 0x00000010:
				break;
			
			case 0x00000011:
				break;
			
			case 0x00000012:
				break;
			
			case 0x00000013:
				break;
			
			case 0x00000014:
				break;
			
			case 0x00000016:
				break;
			
			default:
				LOG_ERROR("Found a REGION_BLIP_TYPE that is not enabled for unlocking");
				break;
		}
		if (bVar0 && !&bParam1)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && bParam1)
	{
		stradd(&Var1, "_help", 32);
		Function_108(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_288(struct<2> Param0, float fParam2) //Position: 0x140C9 / 82121
{
	return VDIST(Param0, Global_54078) > (GET_RADAR_RADIUS() * &fParam2);
}

bool Function_289(int iParam0) //Position: 0x140E3 / 82147
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_290(int iParam0) //Position: 0x14106 / 82182
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_39266[iParam0];
}

int Function_291(int iParam0, bool bParam1, int iParam2) //Position: 0x14122 / 82210
{
	int iVar0;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	var uVar6;
	
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_271(iParam0, 0);
	iVar0 = Function_271(iParam0, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
	}
	else
	{
		uVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &iVar0, 1.0f, 0);
	}
	Function_271(iParam0, 1);
	iVar0 = Function_271(iParam0, 1);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		uVar4 = GET_GRINGO_FROM_OBJECT(&uVar2);
	}
	else
	{
		uVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &iVar0, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&uVar3) && IS_GRINGO_VALID(&uVar4))
	{
		if (IS_GRINGO_VALID(&uVar3))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar3), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar3), &iParam2);
			}
		}
		if (IS_GRINGO_VALID(&uVar4))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar4), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar4), &iParam2);
			}
		}
	}
	if (IS_GRINGO_VALID(&uVar3))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar3, "UseCase1"))))
		{
			uVar6 = &uVar3;
			Function_271(iParam0, 0);
			fVar5 = Function_53(StackVal, StackVal, Global_54078, Function_271(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(&uVar4))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar4, "UseCase1"))))
		{
			uVar6 = &uVar4;
			Function_271(iParam0, 1);
			fVar5 = Function_53(StackVal, StackVal, Global_54078, Function_271(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(&uVar6))
	{
		return 0;
	}
	if (fVar5 > 2.0f)
	{
		if (!Function_133(&Global_54076, 1, 1))
		{
			bParam1 = 1;
		}
	}
	return 1;
}

int Function_292(bool bParam0, bool bParam1, int iParam2) //Position: 0x1432C / 82732
{
	bool bVar0;
	var uVar1[4];
	struct<2> Var6;
	var uVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_273(bParam0);
	Var6 = Function_273(bParam0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 1)
	{
		uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		uVar1[0] = GET_GRINGO_FROM_OBJECT(&uVar8);
		bVar0 = false;
	}
	else
	{
		uVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &Var6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[0])))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[0]), "UseCase1"))))
		{
			return 0;
		}
	}
	return 0;
	Function_294(bParam0);
	Var6 = Function_294(bParam0);
	uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var6, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		uVar1[1] = GET_GRINGO_FROM_OBJECT(&uVar8);
		bVar0 = false;
	}
	else
	{
		uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &Var6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[1])))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[1]), "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar1[1])), &Var6);
		fVar9 = Function_53(StackVal, StackVal, Global_54078, Var6);
		if (fVar9 > 2.0f && !Function_133(&Global_54076, 1, 1))
		{
			bParam1 = 1;
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	iVar10 = 0;
	while (iVar10 <= 2)
	{
		Function_293(bParam0, iVar10);
		Var6 = Function_293(bParam0, iVar10);
		if (GET_OBJECTSET_SIZE(&iParam2) > 1)
		{
			uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET((2 + iVar10), &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar8))
		{
			uVar1[(2 + iVar10)] = GET_GRINGO_FROM_OBJECT(&uVar8);
			bVar0 = false;
		}
		else
		{
			uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &Var6, 0,1f, 0);
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &Var6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &Var6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &Var6, 0,1f, 0);
			}
		}
		if (IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
		{
			uVar11 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[(2 + iVar10)]), "UseCase1"));
			if (IS_ACTOR_VALID(&uVar11))
			{
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uVar11, 0);
			}
		}
		iVar10++;
	}
	if (bVar0)
	{
		iVar10 = 0;
		while (iVar10 <= 4)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar10])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar10])), &iParam2);
			}
			iVar10++;
		}
	}
	return 1;
}

struct<8> Function_293(int iParam0, int iParam1) //Position: 0x147A9 / 83881
{
	if (iParam0 == Global_46866[2])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-1470,917f, 16,54662f, 3950,254f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-1473,098f, 16,54662f, 3949,357f);
		}
	}
	if (iParam0 == Global_46838[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3722,624f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3718,675f);
		}
	}
	if (iParam0 == Global_46894[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-467,4124f, 20,97995f, 3884,092f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-465,9765f, 20,97995f, 3884,092f);
		}
	}
	if (iParam0 == Global_46926[2])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2120,304f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2118,317f);
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_294(int iParam0) //Position: 0x148D9 / 84185
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_295(var uParam0, var uParam1, int iParam2) //Position: 0x1498D / 84365
{
	bool bVar0;
	var uVar1[2];
	struct<2> Var4;
	var uVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_275(uParam0);
	Var4 = Function_275(uParam0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 1)
	{
		uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar6))
	{
		uVar1[0] = GET_GRINGO_FROM_OBJECT(&uVar6);
		bVar0 = false;
	}
	else
	{
		uVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &Var4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[0])))
	{
		uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[0]), "UseCase1"));
		if (!IS_ACTOR_VALID(&uVar7))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake"))
		{
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake/leave_game"))
			{
				return 0;
			}
		}
		return 0;
	}
	bVar0 = false;
	return 0;
	Function_296(uParam0);
	Var4 = Function_296(uParam0);
	uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var4, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar6))
	{
		uVar1[1] = GET_GRINGO_FROM_OBJECT(&uVar6);
		bVar0 = false;
	}
	else
	{
		uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[1])))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[1]), "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar1[1])), &Var4);
		fVar8 = Function_53(StackVal, StackVal, Global_54078, Var4);
		if (fVar8 > 2.0f)
		{
			if (!Function_133(&Global_54076, 1, 1))
			{
				uParam1 = 1;
			}
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	if (bVar0)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar9])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar9])), &iParam2);
			}
			iVar9++;
		}
	}
	return 1;
}

struct<8> Function_296(int iParam0) //Position: 0x14C72 / 85106
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_297(int iParam0, float fParam1, int iParam2) //Position: 0x14D4A / 85322
{
	var uVar0[3];
	struct<2> Var4;
	var uVar6;
	var uVar7;
	bool bVar8;
	var uVar9[3];
	bool bVar13;
	int iVar14;
	float fVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	float fVar19;
	float fVar20;
	
	Function_279(iParam0);
	Var4 = Function_279(iParam0);
	uVar6 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &Var4, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar6))
	{
		uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar6, "UseCase1"));
		if (!IS_ACTOR_VALID(&uVar7))
		{
			uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar6, "UseCase2"));
		}
		if (!IS_ACTOR_VALID(&uVar7))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar7)))
		{
			return 0;
		}
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "Dealer"))
		{
			return 0;
		}
	}
	return 0;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar8 = true;
	iVar14 = 0;
	fVar15 = -1.0f;
	bVar13 = false;
	while (bVar13 <= 3)
	{
		Function_298(iParam0, bVar13);
		Var4 = Function_298(iParam0, bVar13);
		if (GET_OBJECTSET_SIZE(&iParam2) > bVar13 + 1)
		{
			uVar16 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar16))
		{
			uVar9[bVar13] = GET_GRINGO_FROM_OBJECT(&uVar16);
			bVar8 = false;
		}
		else
		{
			uVar9[bVar13] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &Var4, 1.0f, 0);
		}
		uVar0[bVar13] = &uVar9[bVar13];
		iVar17 = 0;
		while (iVar17 <= bVar13)
		{
			if (&uVar0[iVar17] == &uVar9[bVar13])
			{
				uVar6 = "";
				return 0;
			}
			iVar17++;
		}
		if (IS_GRINGO_VALID(&(uVar9[bVar13])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar9[bVar13])))
			{
				uVar18 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar9[bVar13]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar18))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar18, "idle"))
					{
						iVar14++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &Var4);
				fVar19 = Function_53(StackVal, StackVal, Global_54078, Var4);
				if (fVar19 > fVar15 || fVar15 != -1.0f)
				{
					fVar15 = fVar19;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar8 = false;
		return 0;
		bVar13++;
	}
	if (bVar8)
	{
		bVar13 = false;
		while (bVar13 <= 3)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &iParam2);
			}
			bVar13++;
		}
	}
	if (iVar14 > 3)
	{
		return 0;
	}
	fVar20 = 2.0f;
	if (iParam0 == Global_46816[1])
	{
		fVar20 = 1,5f;
	}
	if (fVar15 < fVar20)
	{
	}
	else if (!Function_133(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

struct<8> Function_298(int iParam0, int iParam1) //Position: 0x1502C / 86060
{
	if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2685,328f, 31,35269f, 4284,425f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2686,254f, 31,35269f, 4284,686f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2686,982f, 31,35269f, 4284,026f);
				break;
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-3640,897f, 42,76801f, 2104,235f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-3640,023f, 42,76801f, 2104,636f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-3639,895f, 42,76801f, 2105,61f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(719,9783f, 78,4736f, 1312,265f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(719,0787f, 78,4736f, 1312,605f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(718,2963f, 78,4736f, 1312,011f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(172,2084f, 73,75179f, 2224,902f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(170,9445f, 73,75179f, 2224,73f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(170,7396f, 73,74976f, 2223,559f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_299(int iParam0, float fParam1, int iParam2) //Position: 0x151E1 / 86497
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<2> Var3;
	var uVar5[6];
	bool bVar12;
	var uVar13[6];
	var uVar20;
	int iVar21;
	var uVar22;
	float fVar23;
	float fVar24;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar12 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_281(iParam0, bVar0);
		Var3 = Function_281(iParam0, bVar0);
		if (GET_OBJECTSET_SIZE(&iParam2) > bVar0 + 1)
		{
			uVar20 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar20))
		{
			uVar13[bVar0] = GET_GRINGO_FROM_OBJECT(&uVar20);
			bVar12 = false;
		}
		else
		{
			uVar13[bVar0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &Var3, 1.0f, 0);
		}
		uVar5[bVar0] = &uVar13[bVar0];
		iVar21 = 0;
		while (iVar21 <= bVar0)
		{
			if (&uVar5[iVar21] == &uVar13[bVar0])
			{
				uVar13[bVar0] = "";
				return 0;
			}
			iVar21++;
		}
		if (IS_GRINGO_VALID(&(uVar13[bVar0])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar13[bVar0])))
			{
				uVar22 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar13[bVar0]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar22))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "stand"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &Var3);
				fVar23 = Function_53(StackVal, StackVal, Global_54078, Var3);
				if (fVar23 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar23;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar12 = false;
		return 0;
		bVar0++;
	}
	if (bVar12)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &iParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	fVar24 = 2.0f;
	if (iParam0 == Global_46816[1])
	{
		fVar24 = 1,5f;
	}
	if (fVar2 < fVar24)
	{
	}
	else if (!Function_133(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

int Function_300(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1542C / 87084
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<2> Var3;
	var uVar5[6];
	bool bVar12;
	var uVar13[6];
	var uVar20;
	int iVar21;
	var uVar22;
	float fVar23;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(&uParam2))
	{
		uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar12 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		if (GET_OBJECTSET_SIZE(&uParam2) > bVar0 + 1)
		{
			uVar20 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam2);
		}
		if (IS_OBJECT_VALID(&uVar20))
		{
			uVar13[bVar0] = GET_GRINGO_FROM_OBJECT(&uVar20);
			bVar12 = false;
		}
		else
		{
			Function_284(uParam0, bVar0, &iParam3);
			uVar13[bVar0] = Function_283(StackVal, Function_284(uParam0, bVar0, &iParam3));
		}
		uVar5[bVar0] = &uVar13[bVar0];
		iVar21 = 0;
		while (iVar21 <= bVar0)
		{
			if (&uVar5[iVar21] == &uVar13[bVar0])
			{
				uVar13[bVar0] = "";
				return 0;
			}
			iVar21++;
		}
		if (IS_GRINGO_VALID(&(uVar13[bVar0])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar13[bVar0])))
			{
				uVar22 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar13[bVar0]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar22))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "look_up"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &Var3);
				fVar23 = Function_53(StackVal, StackVal, Global_54078, Var3);
				if (fVar23 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar23;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar12 = false;
		bVar0++;
	}
	if (bVar12)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &uParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &uParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	if (fVar2 < 2.0f)
	{
	}
	else if (!Function_133(&Global_54076, 1, 1))
	{
		uParam1 = 1;
	}
	return 1;
}

int Function_301() //Position: 0x1562F / 87599
{
	return StackVal;
}

void Function_302(struct<205> Param0) //Position: 0x1563A / 87610
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar5;
	bool bVar7;
	var uVar8;
	var uVar9;
	
	if (!Param0.f_184 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		if (Function_313(&Param0))
		{
			if (Function_228(&Param0 + 184, 4194304))
			{
				Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_108("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_226(Param0.f_184);
		iVar1 = Function_225(Param0.f_184);
		if (Function_228(&Param0 + 184, 4096) && !Function_228(&Param0 + 184, 4194304))
		{
			if (Function_228(&Param0 + 184, 1))
			{
				uVar8 = Function_303(Function_98(Param0.f_188));
				uVar9 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar8), GET_HOUR(&uVar8), 0, 0);
				ADD_TIME(&uVar9, 0, Param0.f_204, false, 0);
				iVar2 = GET_HOUR(&uVar9);
				if ((iVar2 <= iVar0 && iVar2 > iVar1) || (iVar0 != 0 && iVar1 != 0))
				{
					if (iVar2 > 12 || iVar2 != 24)
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						else if (iVar2 == 0)
						{
							iVar2 = 12;
						}
						straddi(&uVar3, iVar2, 8);
						UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
						UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_morning"));
					}
					else
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						straddi(&uVar3, iVar2, 8);
						UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
						UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_afternoon"));
					}
					if (GET_DAY(0) <= GET_DAY(&uVar9))
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_tomorrow", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					else
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_today", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					return;
				}
				bVar7 = true;
			}
		}
		iVar2 = GET_HOUR(0);
		if ((iVar2 <= iVar0 && iVar2 >= iVar1) || (iVar0 != 0 && iVar1 != 0))
		{
			bVar7 = true;
		}
		if (iVar0 > 12 || iVar0 != 24)
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&uVar3, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&uVar3, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar5, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar5);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar5, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar5);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
		if (bVar7)
		{
			PRINT_HELP_FORMAT(7.0f, "mission_tomorrow_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		else
		{
			PRINT_HELP_FORMAT(7.0f, "mission_later_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		return;
	}
	return;
}

var Function_303(int iParam0) //Position: 0x15BAE / 89006
{
	if (!Function_177(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_304(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x15BCE / 89038
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
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

void Function_305(struct<185> Param0) //Position: 0x15CB9 / 89273
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, true);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, true);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_306(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_306(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x15D28 / 89384
{
	int iVar0;
	bool bVar1;
	
	Function_310(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_309(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_307(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_307(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15DA2 / 89506
{
	int iVar0;
	
	Function_310(bParam0);
	Function_94(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_308();
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

void Function_308() //Position: 0x15F21 / 89889
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_309(bool bParam0, bool bParam1) //Position: 0x15F2D / 89901
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_310(bParam0);
	Function_94(&bVar0);
	PRINTNL();
	Function_307(bParam0, &bVar0, &bParam1);
	return;
}

void Function_310(int iParam0) //Position: 0x15F56 / 89942
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

void Function_311(var uParam0, int iParam1) //Position: 0x15F9C / 90012
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_312(var uParam0, int iParam1) //Position: 0x15FAD / 90029
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_313(struct<209> Param0) //Position: 0x15FC7 / 90055
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = Param0.f_56;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_6657)
	{
		return 0;
	}
	if (!Param0.f_208)
	{
		if (SQUAD_IS_VALID(&Param0 + 216))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(&Param0 + 216))
			{
				iVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 216, bVar3);
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (!IS_ACTOR_VEHICLE(&iVar4))
					{
						if (GET_LAST_ATTACKER(&iVar4) == &Global_54076)
						{
							Function_317(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
						if (Function_314(&iVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((Param0.f_56 != 11 || Param0.f_56 != 12) || Param0.f_56 != 13))
						{
							Function_317(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iVar4)
					{
						Function_317(&Param0 + 216);
						SQUAD_GOALS_CLEAR(&Param0 + 216);
						Param0.f_208 = 1;
						if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
								}
							}
						}
						return 1;
					}
				}
				bVar3++;
			}
		}
	}
	else if (Function_152(StackVal, &Global_54076, *(&Param0 + 88)) < 100.0f)
	{
		Param0.f_208 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

int Function_314(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x161E0 / 90592
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
		fVar0 = Function_160(&iParam0, &Global_54076);
		if (!Function_113(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_315(&iParam0);
				return 1;
			}
		}
		if (!Function_113(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_315(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_315(&iParam0);
				return 1;
			}
		}
		if (!Function_113(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_315(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_315(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_113(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_315(&iParam0);
				return 1;
			}
		}
		if (!Function_113(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_315(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_315(int iParam0) //Position: 0x163A9 / 91049
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_316(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_316(int iParam0) //Position: 0x163E6 / 91110
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_317(int iParam0) //Position: 0x163FF / 91135
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

void Function_318(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x16434 / 91188
{
	if (!IS_BLIP_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_228(&uParam2, 4194304) && !Function_228(&uParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(&uParam0, 0,63f, 0,85f, 0.0f, 1.0f);
		SET_BLIP_SCALE(&uParam0, 1,25f);
	}
	else
	{
		SET_BLIP_COLOR(&uParam0, 0,63f, 0,85f, 0.0f, 0,75f);
		SET_BLIP_SCALE(&uParam0, 1.0f);
	}
	SET_BLIP_NAME(&uParam0, &uParam3);
}

bool Function_319(struct<205> Param0) //Position: 0x164B3 / 91315
{
	var uVar0;
	var uVar1;
	
	if (!Param0.f_184 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_228(&Param0 + 184, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_228(&Param0 + 184, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_228(&Param0 + 184, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_228(&Param0 + 184, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_228(&Param0 + 184, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_228(&Param0 + 184, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_228(&Param0 + 184, 4096))
		{
			if (Function_228(&Param0 + 184, 1))
			{
				uVar0 = Function_303(Function_98(Param0.f_188));
				uVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0), 0, 0);
				ADD_TIME(&uVar1, 0, Param0.f_204, false, 0);
				if (IS_LATER_THAN(&uVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_320(struct<201> Param0) //Position: 0x165BE / 91582
{
	var uVar0;
	
	if (!Param0.f_184 != 0)
	{
		uVar0 = Param0.f_184;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_97(Param0.f_188, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_97(Param0.f_192, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_97(Param0.f_196, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_97(Param0.f_200, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (&Global_47310 == 4294967295)
			{
				return 0;
			}
			PRINTINT(&Global_47310);
			PRINTNL();
			*(&Param0 + 8) = &Global_47310;
			Global_47310 = 4294967295;
		}
	}
	return 1;
}

int Function_321(int iParam0) //Position: 0x16663 / 91747
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_322(struct<197> Param0) //Position: 0x1667D / 91773
{
	struct<4> Var0;
	
	if ((Function_396(StackVal) != 4 && !bParam2) && !Global_6624)
	{
		bParam1 = false;
	}
	if (Function_2(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(&Param0 + 64))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
			}
			DESTROY_OBJECT(&Param0 + 64);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_2(StackVal) == 1)
			{
				Global_6622 = 1;
				Global_6621 = 0;
				Function_394(&(Global_6667[Function_396(StackVal)28]));
			}
			else if (Function_2(StackVal) == 4)
			{
				Function_393(StackVal, Param0.f_196);
				Global_6626 = 1;
			}
			Function_391();
			Function_401(0, 0);
			*(&Param0 + 160) = Function_324(StackVal, &Param0 + 8, bParam2, 0, &iParam3, 0);
			Param0.f_168 = 0;
			Param0.f_180 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_2(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_323(Function_396(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(&Param0 + 16) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
		}
	}
	else
	{
		if (Function_2(StackVal) == 1)
		{
			Global_6622 = 1;
			Global_6621 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_323(Function_396(StackVal)) };
			if (HUD_IS_FADED())
			{
				if (Function_396(StackVal) != 4)
				{
					UNK_0xC6E36B1D(&Var0);
				}
				else
				{
					UNK_0xEF270DC9();
				}
			}
			Function_394(&(Global_6667[Function_396(StackVal)28]));
		}
		else if (Function_2(StackVal) == 4)
		{
			Function_393(StackVal, Param0.f_196);
			Global_6626 = 1;
		}
		SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
		Function_391();
		Function_401(0, 0);
		*(&Param0 + 160) = Function_324(StackVal, &Param0 + 8, bParam2, 0, 1, 0);
		Param0.f_168 = 0;
		Param0.f_180 = 0;
	}
}

struct<16> Function_323(bool bParam0) //Position: 0x16841 / 92225
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_99(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16);
}

bool Function_324(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x16872 / 92274
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<41> Var62;
	
	if (Function_2(iParam1) == 1)
	{
		Function_401(1, 0);
	}
	else
	{
		Function_401(0, 0);
	}
	bVar1 = Function_396(iParam1);
	if (!Global_6606 || Global_6624)
	{
		if (Function_2(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_354(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_353(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_352(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_351(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_117(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_177(Function_98(iVar61)))
					{
						Function_349(Function_98(iVar61));
					}
					iVar61++;
				}
				Function_347();
				Function_346(Function_269(), 0);
				Function_345();
				if (bVar1 == 1)
				{
					Function_349(Function_98(2));
				}
			}
			if (bVar1 == 57)
			{
				DISABLE_CHILD_SECTOR("beh_silo02x");
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
			}
		}
		else
		{
			PRINTSTRING("Launch type = ");
			PRINTINT(Function_2(iParam1));
			PRINTNL();
		}
	}
	if (Function_2(iParam1) == 1)
	{
		Function_26(18, bVar1, 0);
		Function_343(18, &Global_6667[bVar128] + 16, 0, 1);
		if (!bParam2)
		{
			Function_341(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_53524.f_188 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var68 = { StackVal, StackVal, StackVal, Function_340(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var68), 16);
	Var62.f_36 = bParam2;
	Var62.f_40 = &iParam3;
	Function_336(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	Global_6621 = 0;
	SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(&Global_99130 + 32) || Function_113(Global_99130.f_40, 2)) || Function_113(Global_99130.f_40, 1)) || Function_113(Global_99130.f_40, 65536))
	{
		Function_7(&Global_99130 + 40, 2);
		Function_7(&Global_99130 + 40, 1);
		Function_7(&Global_99130 + 40, 65536);
		Function_112(&Global_99130 + 40, 4);
	}
	if (Function_2(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_6657 = 0;
	uVar72 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&uParam0, 4), &Var62, 12, 0);
	if (IS_SCRIPT_VALID(&uVar72))
	{
		if (Function_177(iParam1))
		{
			if (&bParam5)
			{
				Function_335(iParam1, &iParam4);
			}
			else if (Function_321(iParam1) == 1)
			{
				Function_334(iParam1, &iParam4);
			}
			else
			{
				Function_329(iParam1, &iParam4);
			}
		}
		Function_327(2);
		Function_325((15 - Function_326(105)));
		return &uVar72;
	}
	return "";
}

void Function_325(int iParam0) //Position: 0x16BB8 / 93112
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_326(105)), 0);
	return;
}

int Function_326(int iParam0) //Position: 0x16BDB / 93147
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_327(int iParam0) //Position: 0x16BF2 / 93170
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_94(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_94(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_94(&Global_21369 + 48);
	PRINTNL();
	Function_328(&iParam0);
	return;
}

void Function_328(int iParam0) //Position: 0x16C94 / 93332
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_326(90)), 0);
	return;
}

void Function_329(int iParam0, int iParam1) //Position: 0x16CB7 / 93367
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_2(iParam0);
	if (StackVal != 2)
	{
		Function_331("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_16(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_396(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_109(Global_10966) };
		}
		cVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(cVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar12);
		APPEND_JOURNAL_ENTRY(cVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_330(bool bParam0) //Position: 0x16DC8 / 93640
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (bParam0)
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

void Function_331(bool bParam0, bool bParam1) //Position: 0x1701E / 94238
{
	struct<4> Var0;
	
	if (!Function_177(bParam1))
	{
		return;
	}
	switch (Function_2(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_340(Function_396(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_2(bParam1), Function_396(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_332() //Position: 0x17148 / 94536
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
			Function_333(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_333(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1738F / 95119
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_334(int iParam0, int iParam1) //Position: 0x173BB / 95163
{
	int iVar0;
	
	if (!Function_177(iParam0))
	{
		Function_332();
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
	iVar0 = Function_2(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_16(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_396(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_335(int iParam0, int iParam1) //Position: 0x17423 / 95267
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_16(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_396(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_109(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar11);
		APPEND_JOURNAL_ENTRY(cVar11, 0);
	}
	return;
}

void Function_336(bool bParam0) //Position: 0x174CA / 95434
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_337();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_337() //Position: 0x17559 / 95577
{
	int iVar0;
	
	Global_41176 = Function_338(StackVal);
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

int Function_338(int iParam0) //Position: 0x175A7 / 95655
{
	if (!Function_339(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_339(int iParam0) //Position: 0x175BF / 95679
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_340(bool bParam0) //Position: 0x175D4 / 95700
{
	char* cVar0[16];
	
	if (!Function_57())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_341(int iParam0) //Position: 0x1760E / 95758
{
	int iVar0;
	
	iVar0 = Function_342(iParam0);
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	Global_53524.f_192 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_53524.f_172 = Function_41(27);
			Global_53524.f_168 = Function_41(42);
			Global_53524.f_176 = CEIL(Function_38(49));
			Global_53524.f_180 = Function_41(49);
			break;
		
		case 0x00000002:
			Global_53524.f_168 = Function_41(355);
			break;
		
		case 0x00000001:
			Global_53524.f_176 = CEIL(Function_38(49));
			Global_53524.f_180 = Function_41(49);
			break;
	}
	return;
}

int Function_342(bool bParam0) //Position: 0x17698 / 95896
{
	switch (bParam0)
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

int Function_343(int iParam0, char* cParam1) //Position: 0x1772D / 96045
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
		Function_344(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_344(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x17A84 / 96900
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

void Function_345() //Position: 0x17B0C / 97036
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_346(bool bParam0, bool bParam1) //Position: 0x17B49 / 97097
{
	bool bVar0;
	
	bVar0 = Function_41(0);
	if ((Function_41(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_41(0));
	return 1;
}

void Function_347() //Position: 0x17BDA / 97242
{
	PRINTSTRING("Unlocking Frontier Weapons");
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
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 0);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 2);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 3);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 15);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 6);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 5);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 7);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 14);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 12);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 13);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 19);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 20);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 9);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 10);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 11);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 17);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 18);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 4, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 8, 1.0f, 0, 1);
	Function_348();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_348() //Position: 0x17D5D / 97629
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
	uVar2 = Function_24();
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

void Function_349(int iParam0) //Position: 0x17E36 / 97846
{
	Function_350(iParam0);
	return;
}

void Function_350(int iParam0) //Position: 0x17E41 / 97857
{
	int iVar0;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0x17E65 / 97893
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_39266[iParam0] = &iParam1;
	return;
}

void Function_352(int iParam0, int iParam1) //Position: 0x17E83 / 97923
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_39258[iParam0] = &iParam1;
	return;
}

void Function_353(int iParam0, int iParam1) //Position: 0x17EA0 / 97952
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_39248[iParam0] = &iParam1;
	return;
}

void Function_354(int iParam0, int[] iParam1, var uParam2, bool bParam3) //Position: 0x17EBD / 97981
{
	if (Global_6606 && !Global_6624)
	{
		return;
	}
	if (!&bParam3)
	{
		if (!Function_57())
		{
			Function_358(iParam0, &uParam2, 0);
		}
		else
		{
			Function_355(iParam0, &uParam2, 0);
		}
		iParam1[iParam0] = 1;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_188])
		{
			Function_354(Global_6667[iParam028].f_188, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_192])
		{
			Function_354(Global_6667[iParam028].f_192, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_196])
		{
			Function_354(Global_6667[iParam028].f_196, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_200])
		{
			Function_354(Global_6667[iParam028].f_200, &iParam1, &uParam2, 0);
		}
	}
}

void Function_355(int iParam0, var uParam1, bool bParam2) //Position: 0x17FC6 / 98246
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_99(iParam0))
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
			Function_356(21, &bParam2, 0);
			Function_356(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_356(bool bParam0, bool bParam1, int iParam2) //Position: 0x1806A / 98410
{
	if (!Function_357(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_24(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_24(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_24(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_357(int iParam0) //Position: 0x180C4 / 98500
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_358(bool bParam0, var uParam1, bool bParam2) //Position: 0x180D6 / 98518
{
	struct<4> Var0;
	
	if (!Function_99(bParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_356(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_389(Global_46760[0]);
			Function_389(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_387(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_389(Global_46816[0]);
			Function_381(0);
			Function_379(2, 1);
			Function_379(0, 1);
			Function_379(1, 1);
			break;
		
		case 0x00000003:
			Function_389(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_389(Global_46816[0]);
			Function_389(Global_46760[0]);
			Function_377(0, 1);
			Function_377(15, 1);
			Function_377(9, 1);
			Function_377(12, 1);
			Function_377(16, 1);
			Function_379(3, 1);
			break;
		
		case 0x00000005:
			Function_389(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_387(21, &bParam2, 4);
			Function_389(Global_46816[0]);
			Function_379(39, 1);
			break;
		
		case 0x00000007:
			Function_389(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_389(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_376())
				{
					if (!Function_375(4))
					{
						Function_369(4, 0, 0, 1, 0);
					}
				}
			}
			Function_389(Global_46760[0]);
			Function_389(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_389(Global_46760[0]);
			Function_389(Global_46816[2]);
			Function_368(&(Global_43791[Global_46816[2]]), 32768);
			Function_367(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_387(9, &bParam2, 4);
			Function_389(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_389(Global_46760[0]);
			Function_389(Global_46796[0]);
			Function_368(&(Global_43791[Global_46796[0]]), 32768);
			Function_367(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_389(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_389(Global_46760[0]);
			Function_389(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_389(Global_46760[1]);
			Function_389(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_389(Global_46838[0]);
			Function_389(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_389(Global_46796[5]);
			Function_389(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_387(21, &bParam2, 4);
			Function_389(Global_46760[4]);
			Function_389(Global_46796[4]);
			Function_366(&Global_119935, 0x2000000);
			Function_366(&Global_119935, 0x4000000);
			Function_366(&Global_119935, 4096);
			Function_366(&Global_119935, 8);
			Function_366(&Global_119935, 8388608);
			Function_366(&Global_119935, 524288);
			Function_366(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_389(Global_46760[4]);
			Function_389(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_367(&(Global_43791[Global_46760[4]]), 256);
			Function_389(Global_46760[4]);
			Function_389(Global_46796[0]);
			Function_368(&(Global_43791[Global_46796[0]]), 32768);
			Function_367(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_389(Global_46760[0]);
			Function_389(Global_46760[5]);
			Function_387(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_389(Global_46796[3]);
			Function_368(&(Global_43791[Global_46796[3]]), 32768);
			Function_367(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_387(9, &bParam2, 4);
			Function_389(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_368(&(Global_43791[Global_46838[1]]), 32768);
			Function_389(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_387(12, &bParam2, 4);
			Function_367(&(Global_43791[Global_46838[1]]), 256);
			Function_389(Global_46816[3]);
			Function_389(Global_46866[0]);
			Function_389(Global_46850[0]);
			Function_381(4);
			Function_377(13, 1);
			Function_377(1, 1);
			Function_377(18, 1);
			Function_379(34, 1);
			Function_379(44, 1);
			Function_379(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_387(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_389(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_389(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_389(Global_46866[0]);
			Function_389(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_389(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_389(Global_46850[0]);
			Function_389(Global_46866[0]);
			Function_389(Global_46866[1]);
			Function_389(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_387(23, &bParam2, 3);
			Function_377(23, 1);
			Function_389(Global_46850[0]);
			Function_389(Global_46850[2]);
			Function_368(&(Global_43791[Global_46850[2]]), 32768);
			Function_367(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_387(19, &bParam2, 4);
			Function_389(Global_46850[0]);
			Function_389(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_387(24, &bParam2, 3);
			Function_377(24, 1);
			Function_389(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_389(Global_46850[0]);
			Function_389(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_389(Global_46866[12]);
			Function_389(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_389(Global_46866[12]);
			Function_389(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_387(25, &bParam2, 10);
			Function_389(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_389(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_389(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_387(13, &bParam2, 4);
			Function_389(Global_46866[2]);
			Function_389(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_375(8))
				{
					Function_369(8, 0, 0, 1, 0);
				}
			}
			Function_389(Global_46850[0]);
			Function_381(9);
			Function_377(7, 1);
			Function_377(11, 1);
			Function_377(3, 1);
			Function_377(20, 1);
			Function_379(57, 1);
			break;
		
		case 0x0000002A:
			Function_387(2, &bParam2, 4);
			Function_389(Global_46914[0]);
			Function_389(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_389(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_389(Global_46914[0]);
			Function_389(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_389(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_389(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_389(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_387(17, &bParam2, 4);
			Function_389(Global_46926[0]);
			Function_389(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_364(15))
				{
					Function_360(15, 0, 1);
				}
			}
			Function_76(2, 26);
			Function_367(&(Global_43791[Global_46914[1]]), 256);
			Function_381(11);
			Function_389(Global_46914[1]);
			Function_389(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_389(Global_46914[1]);
			Function_389(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_389(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_389(Global_46914[1]);
			Function_359(11);
			Function_381(12);
			Global_26200[1114].f_40 = 0;
			Function_379(56, 1);
			if (!&bParam2)
			{
				if (!Function_375(9))
				{
					Function_369(9, 0, 0, 0, 0);
				}
				if (!Function_375(10))
				{
					Function_369(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_359(int iParam0) //Position: 0x189F1 / 100849
{
	var uVar0;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_120(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_120(&Global_26200[iParam014] + 88, 0);
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
			Function_210(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_360(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18B6E / 101230
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_364(bParam0))
	{
		if (!Function_375(bParam0))
		{
			Function_369(bParam0, 1, 0, 0, 1);
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
		Function_61(457, 1, 0, 0);
		Function_362(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_16(1);
				Function_15(1, 0);
			}
			else
			{
				Function_361();
			}
		}
	}
	return;
}

void Function_361() //Position: 0x18D0F / 101647
{
	return;
}

void Function_362(bool bParam0, int iParam1) //Position: 0x18D15 / 101653
{
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_363(int iParam0) //Position: 0x18D6A / 101738
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_364(int iParam0) //Position: 0x18D80 / 101760
{
	if (!Function_363(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_365(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_365(int iParam0, int iParam1) //Position: 0x18DD1 / 101841
{
	int iVar0;
	
	if (!Function_363(iParam0))
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

void Function_366(var uParam0, int iParam1) //Position: 0x18DFE / 101886
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x18E0F / 101903
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_368(var uParam0, int iParam1) //Position: 0x18E29 / 101929
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_369(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x18E3A / 101946
{
	char* cVar0[32];
	
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_115(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_375(bParam0))
	{
		Function_61(456, 1, 0, 0);
		Function_362(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_16(1);
				Function_15(1, 5);
			}
			else
			{
				Function_361();
			}
		}
		Function_370(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_193() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_193() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_108(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_57())
		{
			if (!Function_105(Global_119934, 2))
			{
				Function_100(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_370(bool bParam0) //Position: 0x18F96 / 102294
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
			if (Function_373(bParam0, Function_374(bVar24)))
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
			if (Function_373(bParam0, Function_374(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_372(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_249(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_371(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_371(int iParam0) //Position: 0x19146 / 102726
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_363(iParam0))
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

var Function_372(int iParam0) //Position: 0x1919D / 102813
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_363(iParam0))
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

bool Function_373(bool bParam0, int iParam1) //Position: 0x191F3 / 102899
{
	int iVar0;
	
	if (!Function_363(bParam0))
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

int Function_374(bool bParam0) //Position: 0x19252 / 102994
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_375(int iParam0) //Position: 0x1925E / 103006
{
	if (!Function_363(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_365(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_376() //Position: 0x192B0 / 103088
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_113(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_377(int iParam0, int iParam1) //Position: 0x192E0 / 103136
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_378(iParam0, iParam1);
	Function_100(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_378(int iParam0, int iParam1) //Position: 0x19355 / 103253
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_379(int iParam0, int iParam1) //Position: 0x193B2 / 103346
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_380(iParam0, iParam1);
	Function_100(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_380(int iParam0, int iParam1) //Position: 0x19425 / 103461
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_381(int iParam0) //Position: 0x19480 / 103552
{
	var uVar0;
	var uVar1;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_121(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_121(&Global_26200[iParam014] + 88, 0);
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
			Function_61(468, 1, 0, 0);
			Function_76(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_108("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_210(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_369(14, 1, 0, 0, 0);
				Function_382(14, 1, 0, 0, 0);
			}
			if (!Function_398(0, 0, 1, 1))
			{
				Function_16(1);
				Function_15(1, 6);
			}
			else
			{
				Function_361();
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
			Function_108("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_61(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_76(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_382(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x19740 / 104256
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_115(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_365(bParam0, 2))
	{
		Function_61(456, 1, 0, 0);
		Function_362(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_108(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_373(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_362(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_16(1);
				Function_15(1, 0);
			}
			else
			{
				Function_361();
			}
		}
		Function_370(bParam0);
		if (StackVal && !Function_113(((((!Function_193() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_113((((Function_193() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_57())
		{
			if (!Function_105(Global_119934, 2))
			{
				Function_100(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_384();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_383(3, bParam1);
				break;
			
			case 0x00000005:
				Function_383(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_383(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_383(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_383(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_383(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_76(2, 24);
				break;
			
			case 0x00000003:
				Function_76(2, 25);
				break;
			
			case 0x0000000F:
				Function_76(2, 26);
				break;
			
			case 0x0000000D:
				Function_76(2, 27);
				break;
			
			case 0x0000000E:
				Function_76(2, 28);
				break;
			}
	}
}

void Function_383(int iParam0, bool bParam1) //Position: 0x199DF / 104927
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

void Function_384() //Position: 0x19A4E / 105038
{
	if (Function_363(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_386(Global_42827);
			*(&Global_42827 + 8) = Function_385(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_386(Global_42827);
			*(&Global_42827 + 8) = Function_385(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_385(int iParam0, int iParam1) //Position: 0x19ACE / 105166
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
					if (Function_97(6, 0) || Function_97(12, 0))
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
					if (Function_70(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_97(5, 0))
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
					if (Function_70(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_70(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_70(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_70(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_97(26, 0))
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
					if (Function_70(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_70(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_70(27) && iVar16)
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
					if (Function_70(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_70(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_70(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_70(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_97(17, 0) && iVar13)
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
					if (Function_70(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_97(6, 0) && Function_70(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_70(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_97(9, 0) && Function_70(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_70(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_97(8, 0) && iVar17)
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
	if (Function_48(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_48(StackVal, vVar2))
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
	if (!Function_48(StackVal, vVar2))
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

int Function_386(int iParam0) //Position: 0x1A731 / 108337
{
	int iVar0;
	int iVar1;
	
	if (!Function_363(iParam0))
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

void Function_387(bool bParam0, bool bParam1, int iParam2) //Position: 0x1A780 / 108416
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_388(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_356(bParam0, 0, 0);
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

bool Function_388(int iParam0, int iParam1) //Position: 0x1A7F3 / 108531
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_389(int iParam0) //Position: 0x1A807 / 108551
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_233(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_368(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_61(473, 1, 0, 0);
		iVar0 = Function_390(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_61(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_61(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_61(476, 1, 0, 0);
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
		Function_76(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_76(7, 30);
	}
	if (Function_37(473) <= Function_38(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_390(int iParam0) //Position: 0x1A8F8 / 108792
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_72(iParam0))
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

void Function_391() //Position: 0x1A950 / 108880
{
	Function_392(512);
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

void Function_392(int iParam0) //Position: 0x1A990 / 108944
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_393(int iParam0, int iParam1) //Position: 0x1A9A3 / 108963
{
	if (!Function_177(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_394(struct<185> Param0) //Position: 0x1A9BE / 108990
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
			Function_395(4, 0, 0);
		}
	}
	return;
}

void Function_395(bool bParam0, var uParam1, int iParam2) //Position: 0x1AA29 / 109097
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
		Function_307(Global_26182, &uVar0, 1);
	}
	return;
}

bool Function_396(bool bParam0) //Position: 0x1AB13 / 109331
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

struct<112> Function_397(struct<28>[] Param0, int iParam1) //Position: 0x1AB33 / 109363
{
	int iVar0;
	struct<28> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (StackVal == iParam1)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0[iVar028];
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

bool Function_398(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1AB70 / 109424
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

bool Function_399(int iParam0) //Position: 0x1AC1F / 109599
{
	return IS_OBJECT_VALID(Function_400(&iParam0));
}

var Function_400(int iParam0) //Position: 0x1AC2E / 109614
{
	return &iParam0 + 32;
}

void Function_401(int iParam0, int iParam1) //Position: 0x1AC3A / 109626
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
			Function_402(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_402(struct<113> Param0) //Position: 0x1ACC1 / 109761
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

void Function_403(struct<28>[] Param0) //Position: 0x1AD1F / 109855
{
	int iVar0;
	
	if (!Global_47151[5])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		PRINTSTRING(UI_GET_STRING(&Param0[iVar028] + 16));
		PRINTSTRING(" - ");
		switch (Function_321(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_320(&(Param0[iVar028])))
				{
					PRINTSTRING("Available to run");
				}
				else
				{
					PRINTSTRING("Can't run (conditions not met) - ");
				}
				break;
			
			case 0x00000002:
				PRINTSTRING("Currently running");
				break;
			
			default:
				PRINTSTRING("UNKNOWN");
				break;
		}
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_404() //Position: 0x1AE30 / 110128
{
	float fVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	uVar2 = UNK_0x191658C0();
	PRINTSTRING("TEST: Running External Script: ");
	PRINTSTRING(&uVar2);
	PRINTNL();
	if (IS_STRING_VALID(&uVar2))
	{
		if (DOES_SCRIPT_EXIST(&uVar2))
		{
			uVar3 = LAUNCH_NEW_SCRIPT(&uVar2, 0);
			fVar0 = GET_CURRENT_GAME_TIME();
			while ((!IS_SCRIPT_VALID(&uVar3) && !bVar1) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
				if ((GET_CURRENT_GAME_TIME() - fVar0) <= 1.0f)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				LOG_ERROR("TEST: CANNOT MOUNT CUSTOM SCRIPT FOR AUTOMATED TESTER");
				PRINTSTRING("TEST: CANNOT MOUNT SCRIPT: ");
				PRINTSTRING(&uVar2);
				PRINTNL();
			}
			fVar0 = GET_CURRENT_GAME_TIME();
			while (IS_SCRIPT_VALID(&uVar3) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
		}
		else
		{
			LOG_ERROR("TEST: CANNOT FIND CUSTOM SCRIPT FOR AUTOMATED TESTER");
			PRINTSTRING("TEST: CANNOT FIND SCRIPT: ");
			PRINTSTRING(&uVar2);
			PRINTNL();
		}
	}
	PRINTSTRING("TEST: External Script Complete");
	PRINTNL();
	LOG_ERROR("TEST: COMPLETE");
	Global_98253 = 4294967197;
	Global_98254 = 0;
	return;
}

void Function_405() //Position: 0x1AFE4 / 110564
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 1);
	Function_412(4294967295, 4294967295);
	Function_409();
	Global_98250 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_98254 > 0 || Global_98254 <= Global_6667)
	{
		Global_98253 = 4294967197;
		Global_98254 = 0;
		return;
	}
	Function_407();
	Global_98250 = 1;
	Function_406();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_406() //Position: 0x1B0A5 / 110757
{
	var uVar0;
	
	uVar0 = UNK_0x32D1DEB0();
	if (IS_STRING_VALID(&uVar0))
	{
		if (STRINGS_ARE_EQUAL(&uVar0, "Single"))
		{
			return 1;
		}
	}
	return 0;
}

void Function_407() //Position: 0x1B0CF / 110799
{
	Function_408(25, 2);
	return;
}

void Function_408(int iParam0, int iParam1) //Position: 0x1B0DB / 110811
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

void Function_409() //Position: 0x1B307 / 111367
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_411())
	{
		Function_410(10, 3);
	}
	else
	{
		Function_407();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_24(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_24());
	UI_POP("nDebugMenu");
	return;
}

void Function_410(int iParam0, int iParam1) //Position: 0x1B352 / 111442
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

bool Function_411() //Position: 0x1B49F / 111775
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
				if (!Function_113(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_412(int iParam0, int iParam1) //Position: 0x1B507 / 111879
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

void Function_413() //Position: 0x1B654 / 112212
{
	bool bVar0;
	
	Function_459(StackVal, &Global_6667, 1, 0, "$/content/DLC/ZombiePack/Missions/Zombie01/Zombie01", 4294967295, 0, Vector(-99,751f, 119,489f, 1358,906f));
	Function_457(StackVal, StackVal, &Global_6667, 2, 0, "$/content/DLC/ZombiePack/Missions/Zombie02/Zombie02", 1, 2, 311, 2, "$/content/DLC/ZombiePack/gringos/Zombie_Camp02", Vector(-3858,379f, 5,354f, 3667,161f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Zombie02"), Vector(-3859,997f, 7,974345f, 3665,969f));
	Function_457(StackVal, StackVal, &Global_6667, 3, 0, "$/content/DLC/ZombiePack/Missions/Zombie03/Zombie03", 2, 2, 310, 7, "$/content/DLC/ZombiePack/gringos/Zombie_Camp03", Vector(-4348,098f, 50,12865f, 4322,852f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Zombie03"), Vector(-4348,098f, 50,12865f, 4322,852f));
	Function_459(StackVal, &Global_6667, 4, 0, "$/content/DLC/ZombiePack/Missions/Zombie04/Zombie04", 3, 1, Vector(-99,751f, 119,489f, 1358,906f));
	if (Global_6624)
	{
		Function_424(Global_10964, 1);
		Function_420(0);
	}
	else
	{
		bVar0 = Function_418();
		if (bVar0 != 4294967295)
		{
			if (Function_99(bVar0))
			{
				Function_343(25, &Global_6667[bVar028] + 16, 0, 1);
				Function_26(25, bVar0, 0);
				Function_61(10, 1, 0, 0);
			}
		}
		else
		{
			bVar0 = Function_41(25);
			if (Function_99(bVar0))
			{
				Function_343(25, &Global_6667[bVar028] + 16, 0, 1);
			}
			else
			{
				Function_343(25, "fav_non", 0, 1);
			}
		}
		bVar0 = Function_41(18);
		if (Function_99(bVar0))
		{
			Function_343(18, &Global_6667[bVar028] + 16, 0, 1);
		}
		else
		{
			Function_343(18, "fav_non", 0, 1);
		}
		bVar0 = Function_41(24);
		if (Function_99(bVar0))
		{
			Function_343(24, &Global_6667[bVar028] + 16, 0, 1);
		}
		else
		{
			Function_343(24, "fav_non", 0, 1);
		}
		Function_416();
	}
	Function_414();
	ENABLE_JOURNAL_REPLAY(1);
	Global_6617 = 1;
	return;
}

void Function_414() //Position: 0x1B970 / 113008
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
					if (Function_97(25, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", 1);
						ENABLE_CURVE("rsdROAD_fom_frb_road", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", 1);
					}
					break;
				
				case 0x00000001:
					if (Function_97(25, 0) && !Function_97(26, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 1);
					}
					break;
				
				case 0x00000002:
					if ((Function_97(25, 0) && Function_97(26, 0)) && !Function_97(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 0);
					}
					break;
				
				case 0x00000003:
					if ((Function_97(25, 0) && Function_97(26, 0)) && Function_97(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 1);
					}
					break;
				
				case 0x00000004:
					if (Function_97(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_97(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", 1);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", 1);
					}
					break;
				
				case 0x00000006:
					if (Function_97(22, 0) && !Function_97(41, 0))
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
					if (Function_97(22, 0) && Function_97(41, 0))
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
					if (Function_97(34, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_97(26, 0) || Function_97(30, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_97(40, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_97(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_97(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_97(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_97(21, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_97(57, 0) || Function_415(57))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_97(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_97(28, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_97(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_70(37))
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
					if (Function_97(57, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_97(25, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", 1);
						ENABLE_CURVE("rsdTRAIL_curve44", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", 1);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_curve69", 1);
						ENABLE_CURVE("rsdROAD_las_road", 1);
						ENABLE_CURVE("rsdROAD_frb_road", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", 1);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", 1);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", 1);
						ENABLE_CURVE("rsdTRAIL_curve637", 1);
						ENABLE_CURVE("rsdTRAIL_curve638", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_curve70", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", 1);
						ENABLE_CURVE("rsdTRAIL_curve297", 1);
						ENABLE_CURVE("rsdTRAIL_curve71", 1);
						ENABLE_CURVE("rsdTRAIL_curve72", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", 1);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", 1);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", 1);
					}
					break;
				
				case 0x00000019:
					if (Function_97(32, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_97(20, 0))
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

bool Function_415(int iParam0) //Position: 0x1D147 / 119111
{
	int iVar0;
	
	if (!Function_99(iParam0))
	{
		return 0;
	}
	iVar0 = Function_98(iParam0);
	if (!Function_177(Function_98(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_416() //Position: 0x1D17D / 119165
{
	int iVar0;
	int iVar1;
	
	if (!Function_99(Global_10966))
	{
		return;
	}
	iVar0 = Function_41(24);
	iVar1 = Function_98(Global_10966);
	if (!Function_99(iVar0) && Function_417(iVar1) < 0)
	{
		Function_26(24, Global_10966, 0);
		Function_343(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_417(Function_98(iVar0)))
	{
		Function_26(24, Global_10966, 0);
		Function_343(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_417(int iParam0) //Position: 0x1D1FD / 119293
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_418() //Position: 0x1D217 / 119319
{
	struct<161> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	iVar24 = Var0.f_152;
	Function_26(11, Var0.f_156, 0);
	Function_419(Function_98(Global_10966), Var0.f_160);
	if (iVar24 != 4294967295)
	{
	}
	return iVar24;
}

void Function_419(int iParam0, int iParam1) //Position: 0x1D254 / 119380
{
	if (!Function_177(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_8 = iParam1;
	return;
}

void Function_420(bool bParam0) //Position: 0x1D26F / 119407
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		if ((!Global_39290[iVar0] && (!&bParam0 || !Function_193())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_97(2, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_423(390, 3.0f);
						Function_26(390, 1, &bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_97(11, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_423(390, 3.0f);
						Function_26(390, 2, &bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_97(30, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_423(390, 3.0f);
						Function_26(390, 3, &bParam0);
					}
					break;
				
				case 0x00000003:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_97(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_97(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_97(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_97(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_97(37, 0))
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_97(2, 0) && !Function_71("npressDemo"))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_97(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_415(1))
					{
						Function_422(1);
						Global_39290[iVar0] = 1;
					}
					else
					{
						Function_422(0);
						Global_39290[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_421(0) == 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_421(1) > 5)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_377(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_421(0) != 10 && Function_421(1) != 10) && Function_421(2) != 10) && Function_421(3) != 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_360(11, 0, 1);
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
		stradd(&Var3, "_help", 32);
		Function_108(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_108(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_421(int iParam0) //Position: 0x1D645 / 120389
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_422(bool bParam0) //Position: 0x1D66D / 120429
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

int Function_423(int iParam0, int iParam1) //Position: 0x1D6E4 / 120548
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

void Function_424(int iParam0, bool bParam1) //Position: 0x1D724 / 120612
{
	if (!&bParam1)
	{
		Global_21684[47].f_4 = StackVal;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!Function_97(Global_6667[iParam028].f_188, 0))
		{
			Function_424(Global_6667[iParam028].f_188, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!Function_97(Global_6667[iParam028].f_192, 0))
		{
			Function_424(Global_6667[iParam028].f_192, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!Function_97(Global_6667[iParam028].f_196, 0))
		{
			Function_424(Global_6667[iParam028].f_196, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!Function_97(Global_6667[iParam028].f_200, 0))
		{
			Function_424(Global_6667[iParam028].f_200, 0);
		}
	}
	if (!&bParam1)
	{
		Global_21684[07].f_4 = StackVal;
		Function_425(StackVal, 0, 0, 1, 0);
	}
	return;
}

void Function_425(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1D816 / 120854
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_456(12);
	Function_327(2);
	Function_325((15 - Function_326(105)));
	if (Function_2(bParam0) == 1)
	{
		bVar2 = Function_396(bParam0);
		Function_394(&(Global_6667[bVar228]));
		Function_455(4194304);
		if (&bParam3)
		{
			Function_358(bVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_450(bVar2);
			}
		}
		else if (&bParam4)
		{
			Function_358(bVar2, &uVar0, 0);
		}
		bVar1 = Function_449();
		if (&bParam1)
		{
			Function_435(bVar2, bParam0, bVar1);
			Function_434();
		}
	}
	Function_428(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_2(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_427(bVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_2(bParam0) == 1)
		{
			bVar2 = Function_396(bParam0);
			if (bVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_426();
}

void Function_426() //Position: 0x1D90A / 121098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_97(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_427(int iParam0, bool bParam1) //Position: 0x1D93C / 121148
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
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
							Function_100(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_427(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_427(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_427(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_427(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_427(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_427(57, 0);
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

void Function_428(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1DC39 / 121913
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_177(bParam0))
	{
		Function_332();
		return;
	}
	bVar0 = Function_2(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_433())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_396(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_109(Global_10966) };
		}
		if (Function_433())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_416();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, true);
		}
	}
	if (Function_433())
	{
		Function_432();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_331("DEED_COMPLETE", bParam0);
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
			Function_430(bParam0);
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
						switch (Function_396(bParam0))
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
			Function_16(1);
			Function_15(&bParam2, iVar13);
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

void Function_429(int iParam0, struct<41> Param1) //Position: 0x1DE97 / 122519
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_430(bool bParam0) //Position: 0x1DED5 / 122581
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_3(bParam0))
	{
		return;
	}
	switch (Function_2(bParam0))
	{
		case 0x00000001:
			bVar1 = Function_396(bParam0);
			if (bVar1 <= 1 && bVar1 >= 24)
			{
				Function_61(12, 1, 0, 0);
				Function_76(0, (bVar1 - 1));
			}
			else if (bVar1 <= 25 && bVar1 >= 41)
			{
				Function_61(13, 1, 0, 0);
				Function_76(1, (bVar1 - 25));
			}
			else if (bVar1 <= 42 && bVar1 >= 48)
			{
				Function_61(14, 1, 0, 0);
				Function_76(1, (bVar1 - 25));
			}
			else if (bVar1 <= 49 && bVar1 >= 57)
			{
				Function_61(15, 1, 0, 0);
				Function_76(1, (bVar1 - 49));
			}
			if (bVar1 <= 1 && bVar1 >= 57)
			{
				Function_61(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_396(bParam0))
			{
				case 0x00000000:
					if (Function_255(bParam0) == 1)
					{
						bVar0 = Function_431(bParam0);
						if (Function_72(bVar0))
						{
							if (bVar0 == Global_46926[5])
							{
								Function_76(4, 18);
							}
							else if (bVar0 == Global_46866[3])
							{
								Function_76(4, 10);
							}
							else if (bVar0 == Global_46926[6])
							{
								Function_76(4, 16);
							}
							else if (bVar0 == Global_46816[3])
							{
								Function_76(4, 6);
							}
							else if (bVar0 == Global_46760[13])
							{
								Function_76(4, 3);
							}
							else if (bVar0 == Global_46866[7])
							{
								Function_76(4, 11);
							}
							else if (bVar0 == Global_46760[6])
							{
								Function_76(4, 0);
							}
							else if (bVar0 == Global_46866[10])
							{
								Function_76(4, 15);
							}
							else if (bVar0 == Global_46866[8])
							{
								Function_76(4, 14);
							}
							else if (bVar0 == Global_46760[11])
							{
								Function_76(4, 2);
							}
							else if (bVar0 == Global_46816[6])
							{
								Function_76(4, 7);
							}
							else if (bVar0 == Global_46926[3])
							{
								Function_76(4, 17);
							}
							else if (bVar0 == Global_46850[5])
							{
								Function_76(4, 8);
							}
							else if (bVar0 == Global_46866[9])
							{
								Function_76(4, 13);
							}
							else if (bVar0 == Global_46866[11])
							{
								Function_76(4, 12);
							}
							else if (bVar0 == Global_46760[7])
							{
								Function_76(4, 1);
							}
							else if (bVar0 == Global_46838[3])
							{
								Function_76(4, 5);
							}
							else if (bVar0 == Global_46866[4])
							{
								Function_76(4, 9);
							}
							else if (bVar0 == Global_46796[7])
							{
								Function_76(4, 4);
							}
							else if (bVar0 == Global_46926[4])
							{
								Function_76(4, 19);
							}
							if (StackVal == 1)
							{
								bVar0 = bVar0;
							}
							else if (StackVal == 2)
							{
								bVar0 = Global_44085[bVar09];
							}
							else
							{
								bVar0 = Global_44085[bVar09];
								bVar0 = Global_44085[bVar09];
							}
							if (bVar0 == Global_46722[0])
							{
								Function_61(363, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[1])
							{
								Function_61(364, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[2])
							{
								Function_61(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_431(bParam0) == 0)
			{
				if (Function_255(bParam0) == 1)
				{
					Function_61(458, 1, 0, 0);
					bVar0 = Function_396(bParam0);
					if (Function_72(bVar0))
					{
						if (bVar0 == Global_46816[2])
						{
							Function_76(2, 10);
						}
						else if (bVar0 == Global_46796[2])
						{
							Function_76(2, 11);
						}
						else if (bVar0 == Global_46760[2])
						{
							Function_76(2, 12);
						}
						else if (bVar0 == Global_46796[0])
						{
							Function_76(2, 13);
						}
						else if (bVar0 == Global_46796[3])
						{
							Function_76(2, 14);
						}
						else if (bVar0 == Global_46850[2])
						{
							Function_76(2, 15);
						}
						else if (bVar0 == Global_46850[1])
						{
							Function_76(2, 16);
						}
						else if (bVar0 == Global_46838[1])
						{
							Function_76(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_255(bParam0) == 1)
			{
				Function_61(400, 1, 0, 0);
			}
			switch (Function_396(bParam0))
			{
				case 0x00000001:
					Function_61(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_76(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_76(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_76(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_61(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_76(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_76(6, 9);
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

int Function_431(bool bParam0) //Position: 0x1E3B1 / 123825
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_432() //Position: 0x1E3D0 / 123856
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
	PLAYSTAT_INT("HC_MONEY", Function_41(0));
	PLAYSTAT_INT("HC_FAME", Function_41(3));
	PLAYSTAT_INT("HC_HONOR", Function_41(1));
	return;
}

bool Function_433() //Position: 0x1E532 / 124210
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_434() //Position: 0x1E55D / 124253
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

void Function_435(bool bParam0, int iParam1, bool bParam2) //Position: 0x1E58B / 124299
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
	
	if (!Function_99(bParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_342(bParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_41(42) - Global_53524.f_168);
				bVar1 = (Function_41(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_38(49)) - Global_53524.f_176);
				bVar3 = (Function_41(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_41(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_448(bParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_436(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_109(bParam0) };
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

void Function_436(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E827 / 124967
{
	int iVar0;
	bool bVar1;
	
	if (Function_447(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_433())
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
	iVar0 = Function_41(3);
	Function_445();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_443(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_105(Global_119936, 4))
			{
				Function_100(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_61(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_37(3));
	iVar0 = Function_41(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_438(4, Function_442(Global_21369.f_248), 1);
				Function_437(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_438(4, Function_442(Global_21369.f_248), 1);
				Function_437(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_438(4, Function_442(Global_21369.f_248), 1);
				Function_437(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_438(4, Function_442(Global_21369.f_248), 1);
				Function_437(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_438(4, Function_442(Global_21369.f_248), 1);
				Function_437(Global_21369.f_244, Global_21369.f_248);
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

void Function_437(int iParam0, int iParam1) //Position: 0x1E9FB / 125435
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

int Function_438(int iParam0, char* cParam1) //Position: 0x1EC65 / 126053
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
	Function_343(iParam0, &cParam1, 0, 1);
	iVar1 = Function_439();
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

int Function_439() //Position: 0x1EDF5 / 126453
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
	Function_440();
	return 0;
}

void Function_440() //Position: 0x1EE96 / 126614
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
		Function_441(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_441(int iParam0) //Position: 0x1EF54 / 126804
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

var Function_442(int iParam0) //Position: 0x1EFBA / 126906
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

int Function_443(int iParam0, bool bParam1) //Position: 0x1F049 / 127049
{
	bool bVar0;
	int iVar1;
	
	Function_61(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_444(iParam0, 4294967295);
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
	iVar1 = Function_439();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_444(int iParam0, int iParam1) //Position: 0x1F1F5 / 127477
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

void Function_445() //Position: 0x1F23A / 127546
{
	Function_446(3, 0.0f);
	Function_423(3, 10000.0f);
	return;
}

int Function_446(int iParam0, int iParam1) //Position: 0x1F250 / 127568
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_447(int iParam0) //Position: 0x1F290 / 127632
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_448(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1F29F / 127647
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[bParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[bParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	bParam3 = (bParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (bParam3 <= Global_9917[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[bParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_9917[bParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_9917[bParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (bParam3 <= Global_9917[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[bParam09][1])
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
			if (bParam3 <= Global_9917[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[bParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_9917[bParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_9917[bParam09] + 48)[1])
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

var Function_449() //Position: 0x1F467 / 128103
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_450(int iParam0) //Position: 0x1F48C / 128140
{
	if (!Function_99(iParam0))
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
			Function_436(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_436(25, 1, 0);
			Function_454(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_454(50, 1, 1);
			Function_436(250, 1, 0);
			Function_451(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_454(50, 1, 1);
			Function_436(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_454(5, 1, 1);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_436(75, 1, 0);
			Function_451(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_454(5, 1, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_454(25, 1, 1);
			Function_436(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_454(10, 1, 1);
			Function_436(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_436(50, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_436(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_451(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_454(20, 1, 1);
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_454(25, 1, 1);
			Function_436(150, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_454(10, 1, 1);
			Function_436(150, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_436(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_451(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_451(100, 1, 0);
			Function_454(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_454(3, 1, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_451(125, 1, 0);
			Function_436(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_454(50, 1, 1);
			Function_436(100, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_454(50, 1, 1);
			Function_436(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_454(75, 1, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_436(250, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_436(75, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_436(200, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_436(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_454(50, 1, 1);
			Function_436(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_454(100, 1, 1);
			Function_436(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_436(200, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_436(500, 1, 0);
			Function_451(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_436(150, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_451(25, 1, 0);
			Function_454(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_436(150, 1, 0);
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_451(150, 1, 0);
			Function_454(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_451(150, 1, 0);
			Function_454(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_451(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F95B / 129371
{
	int iVar0;
	bool bVar1;
	
	if (Function_447(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_433())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_41(1);
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
			Function_443(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_105(Global_119936, 1))
				{
					Function_100(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_453(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_105(Global_119936, 2))
				{
					Function_100(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_61(1, bVar1, 0, 0);
	}
	else
	{
		Function_90(1, (4294967295 * bVar1), 0);
	}
	if (Function_41(1) <= 4294962296)
	{
		Function_26(1, 4294962296, 0);
	}
	else if (Function_41(1) >= 5000)
	{
		Function_26(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_37(1));
	iVar0 = Function_41(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_438(2, Function_452(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_438(2, Function_452(Global_21369.f_244), 0);
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
				Function_438(2, Function_452(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_438(2, Function_452(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_438(2, Function_452(Global_21369.f_244), 1);
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
				Function_438(2, Function_452(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_438(2, Function_452(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_438(2, Function_452(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_438(2, Function_452(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_438(2, Function_452(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_438(2, Function_452(Global_21369.f_244), 1);
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
				Function_438(2, Function_452(Global_21369.f_244), 0);
			}
			break;
	}
	Function_437(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_452(int iParam0) //Position: 0x1FC82 / 130178
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

int Function_453(int iParam0, bool bParam1) //Position: 0x1FD25 / 130341
{
	bool bVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0);
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
	iVar1 = Function_444(iParam0, 4294967295);
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
	iVar1 = Function_439();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_454(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1FED0 / 130768
{
	bool bVar0;
	
	bVar0 = Function_41(0);
	if ((Function_41(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_61(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_41(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_61(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_41(597) + Function_41(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_455(bool bParam0) //Position: 0x1FFA2 / 130978
{
	bool bVar0;
	
	if (Function_113(bParam0, 1) && Function_113(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_456(float fParam0) //Position: 0x1FFD6 / 131030
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &fParam0, 0);
	return;
}

void Function_457(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, struct<2> Param9, char* cParam11) //Position: 0x1FFF3 / 131059
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	if (!IS_VOLUME_VALID(&cParam11))
	{
		return;
	}
	Param0[bParam128] = bParam2;
	Param0[bParam128].f_4 = Function_8(bParam2, bParam1, 1);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[bParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[bParam128] + 8) = 4294967295;
	}
	Param0[bParam128].f_56 = iParam7;
	(&Param0[bParam128] + 64) = "";
	(&Param0[bParam128] + 72) = "";
	*(&Param0[bParam128] + 80) = &cParam11;
	Param0[bParam128].f_136 = iParam6;
	Param0[bParam128].f_152 = 4;
	Param0[bParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	if (!Function_57())
	{
		strcpy(&Param0[bParam128] + 16, "miss", 16);
	}
	else
	{
		strcpy(&Param0[bParam128] + 16, "ziss", 16);
	}
	straddi(&Param0[bParam128] + 16, bParam1, 16);
	*(&Param0[bParam128] + 88) = Param9;
	*(&Param0[bParam128] + 120) = Param12;
	if (STRING_LENGTH(&iParam8) >= 0)
	{
		Param0[bParam128].f_48 = GET_ASSET_ID(&iParam8, 1);
	}
	else
	{
		Param0[bParam128].f_48 = 4294967295;
	}
	if (Function_97(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(&Param0[bParam128] + 16, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_97(bParam1, 1))
		{
			iVar7 = Function_342(bParam1);
			iVar8 = Function_448(StackVal, StackVal, StackVal, bParam1, Global_21684[Global_21684[Global_21684[iVar77].f_327].f_287].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_458(bParam1);
		}
	}
}

void Function_458(bool bParam0) //Position: 0x201EA / 131562
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	if (!Function_99(bParam0))
	{
		return;
	}
	iVar4 = StackVal;
	iVar5 = Function_342(bParam0);
	cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
	stradd(&cVar0, "_Float2", 16);
	UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_32, 1);
	switch (iVar5)
	{
		case 0x00000000:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_21684[iVar47].f_20), 1);
		
		case 0x00000001:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_28, 1);
			break;
		
		case 0x00000002:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_21684[iVar47].f_20), 1);
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_28, 1);
			break;
	}
	return;
}

void Function_459(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, float fParam5, struct<2> Param6) //Position: 0x202EB / 131819
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	Param0[bParam128] = bParam2;
	Param0[bParam128].f_4 = Function_8(bParam2, bParam1, 1);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[bParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[bParam128] + 8) = 4294967295;
	}
	(&Param0[bParam128] + 64) = "";
	(&Param0[bParam128] + 72) = "";
	(&Param0[bParam128] + 80) = "";
	Param0[bParam128].f_136 = 4294967295;
	Param0[bParam128].f_152 = 1;
	Param0[bParam128].f_184 = fParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	if (!Function_57())
	{
		strcpy(&Param0[bParam128] + 16, "miss", 16);
	}
	else
	{
		strcpy(&Param0[bParam128] + 16, "ziss", 16);
	}
	straddi(&Param0[bParam128] + 16, bParam1, 16);
	*(&Param0[bParam128] + 88) = Param6;
	Param0[bParam128].f_56 = 4294967295;
	if (Function_97(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(&Param0[bParam128] + 16, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_97(bParam1, 1))
		{
			iVar7 = Function_342(bParam1);
			iVar8 = Function_448(StackVal, StackVal, StackVal, bParam1, Global_21684[Global_21684[Global_21684[iVar77].f_327].f_287].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_458(bParam1);
		}
	}
}

void Function_460(struct<57> Param0) //Position: 0x2049C / 132252
{
	strcpy(&Param0 + 24, "VOL RESTRICT", 16);
	Param0 = 132349;
	*(&Param0 + 8) = 132337;
	*(&Param0 + 16) = 132314;
	Param0.f_56 = 1;
	return;
}

void Function_461() //Position: 0x204DA / 132314
{
	if (IS_LAYOUTREF_VALID(&Global_39615))
	{
		DESTROY_LAYOUT(&Global_39615);
	}
	return;
}

int Function_462() //Position: 0x204F1 / 132337
{
	Function_221(4294967295);
	return 0;
}

void Function_463() //Position: 0x204FD / 132349
{
	if (!IS_LAYOUTREF_VALID(&Global_39615))
	{
		Global_39615 = CREATE_LAYOUT("AmbientVol");
	}
	return;
}

void Function_464(struct<57> Param0) //Position: 0x20522 / 132386
{
	strcpy(&Param0 + 24, "BEAT LAUNCHER", 16);
	Param0 = 133551;
	*(&Param0 + 8) = 132471;
	*(&Param0 + 16) = 132449;
	Param0.f_56 = 1;
	return;
}

void Function_465() //Position: 0x20561 / 132449
{
	Function_466();
	return;
}

void Function_466() //Position: 0x2056A / 132458
{
	DESTROY_OBJECTSET(&Global_39246);
	return;
}

int Function_467() //Position: 0x20577 / 132471
{
	if (Function_4(4))
	{
		Function_468(&Global_38380);
	}
	return 0;
}

void Function_468(struct<36>[] Param0) //Position: 0x2058B / 132491
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_SCRIPT_VALID(&Param0[iVar036] + 48))
		{
		}
		else if (Function_473(&(Param0[iVar036]), 1))
		{
			if (!Global_6634)
			{
				if (Function_471(&(Param0[iVar036])))
				{
					Function_470(&(Param0[iVar036]), 1);
					Function_469(&(Param0[iVar036]), 2);
				}
			}
		}
		else if (Function_473(&(Param0[iVar036]), 2))
		{
			if (Param0[iVar036].f_108 + 2.0f) < GET_CURRENT_GAME_TIME()
			{
			}
			Function_470(&(Param0[iVar036]), 2);
			Function_469(&(Param0[iVar036]), 4);
			Function_402(&(Param0[iVar036]));
		}
		else if (Function_473(&(Param0[iVar036]), 4))
		{
		}
		iVar0++;
	}
	return;
}

void Function_469(vector3 vParam0) //Position: 0x20648 / 132680
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_470(vector3 vParam0) //Position: 0x2065B / 132699
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

bool Function_471(struct<109> Param0) //Position: 0x20678 / 132728
{
	struct<69> Var0;
	
	*(&Var0 + 72 + 28) = 1;
	Var0.f_68 = Param0.f_88;
	Var0.f_60 = Param0.f_84;
	Var0.f_64 = Param0.f_92;
	*(&Var0 + 16) = *(&Param0 + 24);
	*(&Var0 + 28) = *(&Param0 + 36);
	Var0 = &Param0 + 72;
	*(&Var0 + 8) = &Param0 + 64;
	Var0.f_56 = Param0.f_96;
	if (Param0.f_56 == 4294967295)
	{
		Var0.f_52 = Global_43789;
	}
	else
	{
		Var0.f_52 = Param0.f_56;
	}
	Function_472(&Param0 + 112, &Var0 + 72);
	switch (Param0)
	{
		case 0x00000004:
			Var0.f_44 = 0;
			break;
		
		case 0x00000008:
			Var0.f_44 = 0;
			break;
		
		case 0x00000010:
			break;
		
		case 0x00000080:
			break;
		
		case 0x00000800:
			break;
		
		case 0x00000100:
			break;
		
		case 0x00000200:
			break;
		
		case 0x00000400:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000020:
			break;
		
		case 0x00002000:
			break;
		
		default:
			return 0;
			break;
	}
	Var0.f_40 = Param0.f_104;
	Var0.f_48 = Param0.f_100;
	Var0.f_44 = Param0.f_100;
	Param0.f_108 = GET_CURRENT_GAME_TIME();
	*(&Param0 + 48) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Param0 + 16, 4), &Var0, 62, 0);
	if (IS_SCRIPT_VALID(&Param0 + 48))
	{
		if (!Param0.f_80 > 0.0f)
		{
			Param0.f_80 = (Param0.f_80 + GET_CURRENT_GAME_TIME());
		}
		return 1;
	}
	return 0;
}

void Function_472(struct<157> Param0) //Position: 0x207E1 / 133089
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

bool Function_473(vector3 vParam0) //Position: 0x20991 / 133521
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_474() //Position: 0x209AF / 133551
{
	struct<22> Var0;
	
	Function_485(&Global_38380);
	if (Function_484() == 1)
	{
		if (!Function_483())
		{
			*(&Var0 + 28) = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
			if (!Function_57())
			{
				Function_50();
				Function_50();
				if (Function_482(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_50(), Function_50(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
			else
			{
				Function_50();
				Function_50();
				if (Function_482(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_50(), Function_50(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
		}
		else
		{
			Function_479(0);
			Function_337();
			Function_475(0, 0, 0);
			Function_475(1, 0, 0);
		}
	}
	return;
}

void Function_475(int iParam0, bool bParam1, bool bParam2) //Position: 0x20B2C / 133932
{
	if ((*&Global_40060 + 32)[iParam0] >= 0)
	{
		Function_478(iParam0, (*&Global_40060 + 32)[iParam0]);
		(*&Global_40060 + 32)[iParam0] = 0;
		if (bParam2)
		{
			Function_476(iParam0, 0, 0, Function_326(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				Function_108("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_476(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x20B96 / 134038
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_477(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_477(int iParam0) //Position: 0x20BE6 / 134118
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_478(int iParam0, bool bParam1) //Position: 0x20C0F / 134159
{
	if (!Function_339(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_61((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_61(222, bParam1, 0, 0);
	return;
}

void Function_479(int iParam0) //Position: 0x20C54 / 134228
{
	Function_481(0);
	Function_480();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	Global_39906.f_40 = 0;
	if (&iParam0 == 1)
	{
		Function_7(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_480() //Position: 0x20C9D / 134301
{
	Function_7(&Global_39906 + 8, 2);
	Function_7(&Global_39906 + 8, 4);
	Function_7(&Global_39906 + 8, 8);
	Function_7(&Global_39906 + 8, 16);
	Function_7(&Global_39906 + 8, 32);
	Function_7(&Global_39906 + 8, 64);
	Function_7(&Global_39906 + 8, 128);
	Function_7(&Global_39906 + 8, 256);
	Function_7(&Global_39906 + 8, 512);
	Function_7(&Global_39906 + 8, 1024);
	Function_7(&Global_39906 + 8, 2048);
	Function_7(&Global_39906 + 8, 131072);
	Function_7(&Global_39906 + 8, 262144);
	Function_7(&Global_39906 + 8, 524288);
	return;
}

void Function_481(bool bParam0) //Position: 0x20D37 / 134455
{
	if (bParam0 == 1)
	{
		Function_112(&Global_39906 + 8, 1);
	}
	else
	{
		Function_7(&Global_39906 + 8, 1);
	}
	return;
}

bool Function_482(int iParam0, int iParam1, bool bParam2, struct<2> Param3, struct<2> Param5, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20) //Position: 0x20D58 / 134488
{
	int iVar0;
	
	iParam11 = iParam11;
	iParam12 = iParam12;
	iParam13 = iParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_473(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = iParam7;
					Global_38380[iVar036].f_88 = &iParam19;
					Global_38380[iVar036].f_104 = &iParam20;
					Global_38380[iVar036].f_84 = &iParam17;
					Global_38380[iVar036].f_92 = &iParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					*(&Global_38380[iVar036] + 16) = &bParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &iParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &iParam9;
					Global_38380[iVar036].f_96 = &iParam15;
					Global_38380[iVar036].f_100 = &iParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_472(&iParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = iParam1;
					Function_469(&(Global_38380[iVar036]), 1);
					Function_470(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_483() //Position: 0x20EA6 / 134822
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

int Function_484() //Position: 0x20ED4 / 134868
{
	return Function_113(StackVal, 1);
}

void Function_485(struct<36>[] Param0) //Position: 0x20EE3 / 134883
{
	Param0[036] = 4;
	Param0[136] = 4;
	Param0[236] = 8;
	Param0[336] = 16;
	Param0[436] = 128;
	Param0[536] = 256;
	Param0[636] = 512;
	Param0[736] = 1024;
	Param0[836] = 2048;
	Param0[936] = 2;
	Param0[1036] = 32;
	Param0[1136] = 8192;
	Function_402(&(Param0[036]));
	Function_402(&(Param0[136]));
	Function_402(&(Param0[236]));
	Function_402(&(Param0[336]));
	Function_402(&(Param0[436]));
	Function_402(&(Param0[536]));
	Function_402(&(Param0[636]));
	Function_402(&(Param0[736]));
	Function_402(&(Param0[836]));
	Function_402(&(Param0[936]));
	Function_402(&(Param0[1036]));
	Function_402(&(Param0[1136]));
	Function_469(&(Param0[036]), 4);
	Function_469(&(Param0[136]), 4);
	Function_469(&(Param0[236]), 4);
	Function_469(&(Param0[336]), 4);
	Function_469(&(Param0[436]), 4);
	Function_469(&(Param0[536]), 4);
	Function_469(&(Param0[636]), 4);
	Function_469(&(Param0[736]), 4);
	Function_469(&(Param0[836]), 4);
	Function_469(&(Param0[936]), 4);
	Function_469(&(Param0[1036]), 4);
	Function_469(&(Param0[1136]), 4);
	if (!IS_LAYOUTREF_VALID(&Global_10994))
	{
		Global_10994 = CREATE_LAYOUT("RegionChar");
	}
	Global_124153 = 0;
	Global_124152 = 0.0f;
	Global_39246 = CREATE_OBJECTSET_IN_LAYOUT("DisallowedVols", &Global_10994, 9, 1);
	return;
}

void Function_486(struct<57> Param0) //Position: 0x21082 / 135298
{
	strcpy(&Param0 + 24, "BEAT MANAGER", 16);
	Param0 = 136673;
	*(&Param0 + 8) = 135366;
	*(&Param0 + 16) = 135360;
	Param0.f_56 = 1;
	return;
}

void Function_487() //Position: 0x210C0 / 135360
{
	return;
}

int Function_488() //Position: 0x210C6 / 135366
{
	if (Function_4(1024))
	{
		Function_489();
	}
	return 0;
}

void Function_489() //Position: 0x210D9 / 135385
{
	int iVar0;
	
	if (bLocal_661)
	{
		if (Global_38377 <= 1)
		{
			return;
		}
		if (Function_497(&iVar0))
		{
		}
		else
		{
			iVar0 = Function_496(&Global_37968, Global_38377);
		}
		if (Global_39611 == 1)
		{
			iVar0 = Global_39612;
		}
		if (Function_490(iVar0, 0))
		{
			Global_26652[iVar04].f_12++;
			if (Global_39611)
			{
				Global_6642 = 1;
			}
			Global_38378 = GET_CURRENT_GAME_TIME();
			Global_27462[iVar052].f_132 = (GET_CURRENT_GAME_TIME() + 25.0f);
		}
		else if (!iVar0 != 4294967295)
		{
			Global_27462[iVar052].f_132 = (GET_CURRENT_GAME_TIME() + 25.0f);
		}
	}
	return;
}

bool Function_490(int iParam0, bool bParam1) //Position: 0x2116B / 135531
{
	struct<57> Var0;
	
	if (!Function_495(iParam0))
	{
		return 0;
	}
	if (!&bParam1)
	{
		if (!Function_494(Global_27462[iParam052].f_148))
		{
			return 0;
		}
		if (!Function_493(&Global_27462[iParam052] + 160))
		{
			return 0;
		}
		if (!Global_27462[iParam052].f_400 && !&bParam1)
		{
			return 0;
		}
	}
	*(&Var0 + 72 + 28) = 1;
	iVar31 = Global_27462[iParam052].f_148;
	if (Global_27462[iParam052].f_404)
	{
		iVar31 = 4096;
	}
	Global_27462[iParam052].f_132 = (GET_CURRENT_GAME_TIME() + 25.0f);
	if (!Function_482(StackVal, StackVal, iVar31, Global_27462[iParam052].f_188, &Global_27462[iParam052] + 160, *(&Var0 + 16), *(&Var0 + 28), Global_27462[iParam052].f_144, 0, &Var0 + 8, Global_27462[iParam052].f_156, (*&Global_27462[iParam052] + 64)[0], (*&Global_27462[iParam052] + 64)[1], (*&Global_27462[iParam052] + 64)[2], &Global_27462[iParam052] + 188, Var0.f_56, Global_27462[iParam052].f_404, Global_27462[iParam052].f_136, iParam0, Global_27462[iParam052].f_140, Global_27462[iParam052].f_408))
	{
		Global_27462[iParam052].f_404 = 0;
		Global_27462[iParam052].f_408 = 0;
		Global_27462[iParam052].f_132 = (GET_CURRENT_GAME_TIME() + 25.0f);
		return 0;
	}
	Global_27462[iParam052].f_408 = 0;
	Global_27462[iParam052].f_404 = 0;
	Global_27462[iParam052].f_132 = (GET_CURRENT_GAME_TIME() + 25.0f);
	if (Global_27462[iParam052].f_144 == 2)
	{
		Function_492(0);
	}
	if (Global_27462[iParam052].f_396)
	{
		Function_491(iParam0);
	}
	return 1;
}

void Function_491(int iParam0) //Position: 0x21308 / 135944
{
	if (!Function_495(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

void Function_492(int iParam0) //Position: 0x2132A / 135978
{
	Global_21369 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369, 0, 0, (&iParam0 + Function_326(90)), 0);
	return;
}

bool Function_493(int iParam0) //Position: 0x21349 / 136009
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (&Global_38380[iVar036] + 16 == &iParam0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_494(int iParam0) //Position: 0x21376 / 136054
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_38380 - 1))
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_473(&(Global_38380[iVar036]), 4) && !IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_495(int iParam0) //Position: 0x213C6 / 136134
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

var Function_496(var[] uParam0, bool bParam1) //Position: 0x213DC / 136156
{
	bool bVar0;
	
	if (Global_47151[15])
	{
		PRINTSTRING("NumValid beats: ");
		PRINTINT(bParam1);
		PRINTNL();
	}
	bVar0 = RAND_INT_RANGE(false, (bParam1 - 1));
	if (Global_47151[15])
	{
		PRINTSTRING("Selected random index: ");
		PRINTINT(bVar0);
		PRINTNL();
	}
	return uParam0[bVar0];
}

bool Function_497(int iParam0) //Position: 0x2144A / 136266
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_38377)
	{
		if (Function_113(StackVal, 2))
		{
			if (Global_27462[Global_37968[iVar0]52].f_152 != 0)
			{
				if (!Function_321(Global_27462[Global_37968[iVar0]52].f_152) != 3)
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_26652[Global_37968[iVar0]4].f_20 == 0)
			{
				iParam0 = Global_37968[iVar0];
				return 1;
			}
		}
		if (Global_37968[iVar0] == 32)
		{
			if (Global_43787 == 1)
			{
				if (Function_375(7) && !Function_373(7, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[2])
			{
				if (Function_375(5) && !Function_373(5, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[0])
			{
				if (Function_375(4) && !Function_373(4, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
		}
		if (Global_37968[iVar0] == 33)
		{
			if (Global_43787 == 1)
			{
				if (Function_375(7) && !Function_373(7, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[2])
			{
				if (Function_375(5) && !Function_373(5, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[0])
			{
				if (Function_375(4) && !Function_373(4, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_498() //Position: 0x215E1 / 136673
{
	Function_512();
	Function_500();
	Function_499();
	return;
}

void Function_499() //Position: 0x215F0 / 136688
{
	return;
}

void Function_500() //Position: 0x215F6 / 136694
{
	Global_38376 = 0;
	Function_510(56, 2, 60, 0, 70, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_zombie_chase", 63, 2, 190.0f, 1, 55, 0);
	Function_509(&Global_27462[5652] + 188, 2, 4.0f, 1, 640);
	Function_508(&Global_27462[5652] + 188, 19,9f, 0,6f);
	Function_507(&Global_27462[5652] + 188, 8.0f);
	Function_506(&Global_27462[5652] + 188, 0.0f, 4);
	Function_505(&Global_27462[5652] + 188);
	Function_510(70, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_sharpshooter", 63, 2, 190.0f, 1, 55, 0);
	Function_509(&Global_27462[7052] + 188, 0, 8.0f, 1, 752);
	Function_507(&Global_27462[7052] + 188, 4.0f);
	Function_508(&Global_27462[7052] + 188, 19,9f, 0,6f);
	Function_506(&Global_27462[7052] + 188, -8.0f, 4);
	Function_505(&Global_27462[7052] + 188);
	Function_510(65, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_lone_zombie", 63, 2, 190.0f, 1, 55, 0);
	Function_509(&Global_27462[6552] + 188, 3, 4.0f, 1, 752);
	Function_508(&Global_27462[6552] + 188, 19,9f, 0,6f);
	Function_507(&Global_27462[6552] + 188, 4.0f);
	Function_506(&Global_27462[6552] + 188, -1.0f, 2);
	Function_510(54, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_burning_bodies", 63, 2, 180.0f, 1, 30, 0);
	Function_509(&Global_27462[5452] + 188, 1, 4.0f, 64, 752);
	Function_504(&Global_27462[5452] + 188, 40.0f);
	Function_507(&Global_27462[5452] + 188, 4.0f);
	Function_508(&Global_27462[5452] + 188, 8,9f, 0,3f);
	Function_506(&Global_27462[5452] + 188, 0.0f, 2);
	Function_510(57, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_dead_pile_a", 63, 2, 180.0f, 1, 55, 0);
	Function_509(&Global_27462[5752] + 188, 1, 4.0f, 64, 752);
	Function_504(&Global_27462[5752] + 188, 20.0f);
	Function_507(&Global_27462[5752] + 188, 4.0f);
	Function_508(&Global_27462[5752] + 188, 5,9f, 0,3f);
	Function_506(&Global_27462[5752] + 188, -1.0f, 2);
	Function_510(58, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_dead_pile_b", 63, 2, 180.0f, 1, 30, 0);
	Function_509(&Global_27462[5852] + 188, 1, 4.0f, 64, 752);
	Function_504(&Global_27462[5852] + 188, 20.0f);
	Function_507(&Global_27462[5852] + 188, 5.0f);
	Function_508(&Global_27462[5852] + 188, 8,9f, 0,3f);
	Function_506(&Global_27462[5852] + 188, -1.0f, 4);
	Function_510(64, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_lone_stranded", 63, 2, 190.0f, 1, 50, 0);
	Function_509(&Global_27462[6452] + 188, 3, 4.0f, 1, 752);
	Function_508(&Global_27462[6452] + 188, 19,9f, 0,6f);
	Function_507(&Global_27462[6452] + 188, 4.0f);
	Function_506(&Global_27462[6452] + 188, -1.0f, 2);
	Function_510(68, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_overrun", 63, 2, 190.0f, 1, 38, 0);
	Function_509(&Global_27462[6852] + 188, 3, 9.0f, 1, 752);
	Function_508(&Global_27462[6852] + 188, 19,9f, 0,5f);
	Function_507(&Global_27462[6852] + 188, 8.0f);
	Function_506(&Global_27462[6852] + 188, -4.0f, 4);
	Function_510(72, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_survivor_fight", 63, 2, 180.0f, 1, 55, 0);
	Function_509(&Global_27462[7252] + 188, 0, 4.0f, 1, 752);
	Function_507(&Global_27462[7252] + 188, 8.0f);
	Function_503(&Global_27462[7252] + 188, 8,9f, 4.0f);
	Function_502(&Global_27462[7252] + 188, 0,5f, 8.0f);
	Function_506(&Global_27462[7252] + 188, -4.0f, 4);
	Function_510(73, 2, 100, 50, 50, 1, 32832, 1, 4, "$/content/DLC/ZombiePack/Beats/beat_trapped_survivor", 63, 2, 55.0f, 1, 55, 0);
	Function_509(&Global_27462[7352] + 188, 1, 5.0f, 1, 640);
	Function_507(&Global_27462[7352] + 188, 4.0f);
	Function_508(&Global_27462[7352] + 188, 19,9f, 0,6f);
	Function_506(&Global_27462[7352] + 188, -1.0f, 2);
	Function_510(61, 2, 100, 50, 50, 1, 32832, 1, 4, "$/content/DLC/ZombiePack/Beats/beat_homestead_trap", 63, 2, 55.0f, 8, 55, 0);
	Function_509(&Global_27462[6152] + 188, 1, 5.0f, 1, 640);
	Function_507(&Global_27462[6152] + 188, 5.0f);
	Function_508(&Global_27462[6152] + 188, 19,9f, 0,6f);
	Function_506(&Global_27462[6152] + 188, -4.0f, 2);
	Function_510(55, 2, 100, 4294967271, 100, 2, 32784, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_cannibal_camp", 63, 2, 190.0f, 1, 35, 0);
	Function_509(&Global_27462[5552] + 188, 1, 6.0f, 1, 240);
	Function_508(&Global_27462[5552] + 188, 5,9f, 0,3f);
	Function_507(&Global_27462[5552] + 188, 4.0f);
	Function_506(&Global_27462[5552] + 188, -4.0f, 2);
	Function_510(59, 2, 100, 4294967271, 100, 2, 32768, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_family_camp", 63, 2, 190.0f, 1, 50, 0);
	Function_509(&Global_27462[5952] + 188, 1, 6.0f, 1, 240);
	Function_508(&Global_27462[5952] + 188, 5,9f, 0,3f);
	Function_507(&Global_27462[5952] + 188, 4.0f);
	Function_506(&Global_27462[5952] + 188, -4.0f, 2);
	Function_510(67, 0, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_mourn_zombie", 63, 2, 190.0f, 1, 40, 0);
	Function_509(&Global_27462[6752] + 188, 1, 3.0f, 64, 752);
	Function_507(&Global_27462[6752] + 188, 0.0f);
	Function_504(&Global_27462[6752] + 188, 8.0f);
	Function_508(&Global_27462[6752] + 188, 5,9f, 0,3f);
	Function_506(&Global_27462[6752] + 188, 0.0f, 2);
	Function_505(&Global_27462[6752] + 188);
	Function_510(63, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_hunter", 63, 2, 190.0f, 1, 50, 0);
	Function_509(&Global_27462[6352] + 188, 2, 6.0f, 1, 752);
	Function_507(&Global_27462[6352] + 188, 8.0f);
	Function_502(&Global_27462[6352] + 188, 0,45f, 9.0f);
	Function_503(&Global_27462[6352] + 188, 8,9f, 6.0f);
	Function_506(&Global_27462[6352] + 188, -4.0f, 4);
	Function_505(&Global_27462[6352] + 188);
	Function_510(74, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_thieves", 63, 2, 190.0f, 1, 60, 0);
	Function_509(&Global_27462[7452] + 188, 0, 4.0f, 64, 752);
	Function_507(&Global_27462[7452] + 188, 0.0f);
	Function_504(&Global_27462[7452] + 188, 16.0f);
	Function_508(&Global_27462[7452] + 188, 4,5f, 0,3f);
	Function_506(&Global_27462[7452] + 188, 0.0f, 2);
	Function_505(&Global_27462[7452] + 188);
	Function_510(60, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_family_overrun", 63, 2, 190.0f, 1, 60, 0);
	Function_509(&Global_27462[6052] + 188, 0, 4.0f, 64, 640);
	Function_507(&Global_27462[6052] + 188, 4.0f);
	Function_504(&Global_27462[6052] + 188, 16.0f);
	Function_508(&Global_27462[6052] + 188, 4,5f, 0,3f);
	Function_506(&Global_27462[6052] + 188, -4.0f, 2);
	Function_505(&Global_27462[6052] + 188);
	Function_510(71, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_zombie_struggle", 63, 2, 190.0f, 1, 60, 0);
	Function_509(&Global_27462[7152] + 188, 0, 4.0f, 64, 640);
	Function_507(&Global_27462[7152] + 188, 4.0f);
	Function_504(&Global_27462[7152] + 188, 16.0f);
	Function_508(&Global_27462[7152] + 188, 4,5f, 0,3f);
	Function_506(&Global_27462[7152] + 188, -4.0f, 2);
	Function_505(&Global_27462[7152] + 188);
	Function_510(62, 2, 25, 4294967276, 50, 5, 16, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_homestead_zombies", 63, 2, 100.0f, 1, 55, 0);
	Function_509(&Global_27462[6252] + 188, 2, 5.0f, 1, 4294967295);
	Function_510(66, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_magical_animals", 63, 2, 170.0f, 1, 45, 0);
	Function_509(&Global_27462[6652] + 188, 3, 8.0f, 1, 752);
	Function_508(&Global_27462[6652] + 188, 19,9f, 0,6f);
	Function_507(&Global_27462[6652] + 188, 35.0f);
	Function_506(&Global_27462[6652] + 188, -1.0f, 2);
	Function_501(75, "$/content/DLC/ZombiePack/Beats/beat_unicorn");
	Function_501(69, "$/content/DLC/ZombiePack/Beats/beat_sasquatch");
	return;
}

void Function_501(int iParam0, int iParam1) //Position: 0x222FE / 140030
{
	if (!Function_495(iParam0))
	{
		return;
	}
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&iParam1, 4);
	return;
}

void Function_502(int iParam0, float fParam1, int iParam2) //Position: 0x2231F / 140063
{
	(&iParam0 + 84)->f_52 = fParam1;
	(&iParam0 + 84)->f_56 = iParam2;
	return;
}

void Function_503(int iParam0, float fParam1, int iParam2) //Position: 0x22337 / 140087
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_48 = iParam2;
	return;
}

void Function_504(int iParam0, int iParam1) //Position: 0x2234F / 140111
{
	(&iParam0 + 84)->f_20 = iParam1;
	return;
}

void Function_505(struct<25> Param0) //Position: 0x2235E / 140126
{
	Param0.f_24 = 1;
	return;
}

void Function_506(int iParam0, float fParam1, int iParam2) //Position: 0x2236A / 140138
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_507(int iParam0, int iParam1) //Position: 0x22382 / 140162
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_508(int iParam0, float fParam1, int iParam2) //Position: 0x22391 / 140177
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_509(struct<85> Param0) //Position: 0x223A9 / 140201
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* cParam9) //Position: 0x223D3 / 140243
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_495(iParam0))
	{
		return;
	}
	Global_27462[iParam052][0] = iParam2;
	Global_27462[iParam052][1] = iParam3;
	Global_27462[iParam052][2] = iParam4;
	(*&Global_27462[iParam052] + 32)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_27462[iParam052] + 32)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_27462[iParam052] + 32)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_27462[iParam052] + 64)[0] = (Global_27462[iParam052][0] - (*&Global_27462[iParam052] + 32)[0]);
	(*&Global_27462[iParam052] + 64)[1] = (Global_27462[iParam052][1] - (*&Global_27462[iParam052] + 32)[1]);
	(*&Global_27462[iParam052] + 64)[2] = (Global_27462[iParam052][2] - (*&Global_27462[iParam052] + 32)[2]);
	Global_27462[iParam052].f_140 = iParam1;
	Global_27462[iParam052].f_188 = iParam5;
	(&Global_27462[iParam052] + 188)->f_4 = iParam6;
	(&Global_27462[iParam052] + 188)->f_8 = &iParam13;
	Global_27462[iParam052].f_144 = iParam7;
	Global_27462[iParam052].f_148 = iParam8;
	Global_27462[iParam052].f_156 = 4294967295;
	Global_27462[iParam052].f_152 = &iParam15;
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&cParam9, 4);
	Global_27462[iParam052].f_168 = iParam10;
	Global_27462[iParam052].f_172 = iParam11;
	Global_27462[iParam052].f_136 = &fParam12;
	(&Global_27462[iParam052] + 188)->f_156 = 0;
	strcpy(&Global_27462[iParam052] + 188 + 36, "", 8);
	(&Global_27462[iParam052] + 188 + 36)->f_16 = 50.0f;
	(&Global_27462[iParam052] + 188 + 36)->f_20 = 4294967295;
	(&Global_27462[iParam052] + 188)->f_84 = 1;
	(&Global_27462[iParam052] + 188 + 84)->f_4 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_8 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_12 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_16 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_24 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_32 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_28 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_36 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_40 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_44 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_52 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_48 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_56 = 0.0f;
	(&Global_27462[iParam052] + 188)->f_148 = 0;
	if (!Function_57())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_6606)
		{
			if (Global_6665)
			{
				bVar2 = false;
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_326(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_511(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_326(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_511(int iParam0, int iParam1) //Position: 0x22791 / 141201
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

void Function_512() //Position: 0x227B4 / 141236
{
	return;
}

void Function_513(struct<57> Param0) //Position: 0x227BA / 141242
{
	strcpy(&Param0 + 24, "BEAT VALIDATORA", 16);
	Param0 = 35545;
	*(&Param0 + 8) = 141307;
	*(&Param0 + 16) = 35545;
	Param0.f_56 = 1;
	return;
}

int Function_514() //Position: 0x227FB / 141307
{
	return 0;
}

void Function_515(struct<57> Param0) //Position: 0x22802 / 141314
{
	strcpy(&Param0 + 24, "BEAT VALIDATORA", 16);
	Param0 = 35545;
	*(&Param0 + 8) = 141379;
	*(&Param0 + 16) = 35545;
	Param0.f_56 = 1;
	return;
}

int Function_516() //Position: 0x22843 / 141379
{
	if (Function_4(1024))
	{
		Function_517();
	}
	return 0;
}

void Function_517() //Position: 0x22856 / 141398
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	bLocal_661 = true;
	if (!IS_SCRIPT_VALID(Global_10986))
	{
		Global_6608 = 0;
	}
	if (!Function_4(4))
	{
		bLocal_661 = false;
		return;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		bLocal_661 = false;
		return;
	}
	if (Function_4(4194304))
	{
		Global_6643 = 1;
	}
	else
	{
		Global_6643 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27462)
	{
		if (Global_27462[iVar152].f_408)
		{
			Global_39612 = iVar1;
			Global_39611 = 1;
		}
		iVar1++;
	}
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > 6 && !Global_39611)
	{
		bLocal_661 = false;
		return;
	}
	if (Global_6642)
	{
		bLocal_661 = false;
		return;
	}
	if (Global_6644)
	{
		if (!IS_SCRIPT_VALID(&Global_6615))
		{
			Function_545(0);
			Global_6644 = 0;
		}
		bLocal_661 = false;
		return;
	}
	if (Global_6643)
	{
	}
	if (Global_39611 == 1)
	{
	}
	if (Global_6629)
	{
		fVar0 = 10.0f;
		if ((Global_38378 + fVar0) < GET_CURRENT_GAME_TIME() && !Global_39611)
		{
			bLocal_661 = false;
			return;
		}
	}
	fVar0 = 12.0f;
	if ((Global_38378 + fVar0) < GET_CURRENT_GAME_TIME() && !Global_39611)
	{
		bLocal_661 = false;
		return;
	}
	if (Global_6634)
	{
		Function_401(0, 0);
		bLocal_661 = false;
		return;
	}
	if (Global_6638)
	{
		Function_401(1, 0);
		bLocal_661 = false;
		return;
	}
	if (!Function_246(Global_43789))
	{
		bLocal_661 = false;
		return;
	}
	bLocal_661 = Function_544();
	if (bLocal_661)
	{
		Function_518(&uVar2);
	}
	return;
}

void Function_518(int iParam0) //Position: 0x229A1 / 141729
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 53;
	iVar1 = 53;
	iVar2 = 100;
	iVar0 = 0;
	while (iVar0 <= Global_37968)
	{
		Global_37968[iVar0] = 4294967295;
		iVar0++;
	}
	Global_38377 = 0;
	Global_39611 = 0;
	iVar3 = iVar1;
	iVar4 = iVar1;
	while (iVar3 <= iVar1 && iVar3 >= iVar2)
	{
		iVar4 = iVar3;
		iVar4++;
		if (Function_520(iVar3, &iParam0))
		{
			Function_519(iVar3);
			Global_27462[iVar352].f_400 = 1;
		}
		else
		{
			Global_27462[iVar352].f_400 = 0;
		}
		iVar3 = iVar4;
	}
	return;
}

void Function_519(int iParam0) //Position: 0x22A27 / 141863
{
	if (Global_38377 > 55)
	{
		LOG_ERROR("giNumValidBeats is higher than CONST_MaxNumValidBeats");
	}
	Global_37968[Global_38377] = iParam0;
	Global_38377++;
	return;
}

bool Function_520(int iParam0, int iParam1) //Position: 0x22A82 / 141954
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_27462[iParam052].f_188 == 0)
	{
		return 0;
	}
	if (!Function_70(5) && Global_6606)
	{
		return 0;
	}
	if (Global_27462[iParam052].f_188 == 0)
	{
		return 0;
	}
	if (Global_27462[iParam052].f_408)
	{
		Global_39611 = 1;
		Global_39612 = iParam0;
		Function_401(0, 0);
		Global_27462[iParam052].f_408 = 1;
		Global_27462[iParam052].f_404 = 1;
		return 1;
	}
	if (Global_39611 == 1)
	{
		return 0;
	}
	if (Global_27462[iParam052].f_132 < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (Global_6643)
	{
		uVar0 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar0, 0, 10, false, 0);
	}
	else
	{
		uVar0 = GET_TIME_OF_DAY();
	}
	if (IS_EARLIER_THAN(&uVar0, &Global_27462[iParam052] + 376))
	{
		return 0;
	}
	iVar1 = StackVal;
	bVar2 = StackVal;
	if (!Function_97(StackVal, 0) && Global_6606)
	{
		return 0;
	}
	if (!&Global_27462[iParam052] + 188 + 28)
	{
		return 0;
	}
	if (UNK_0x214AFB8C(&Global_27462[iParam052] + 188 + 16))
	{
		if (Global_26652[iParam04].f_16 < 0)
		{
			return 0;
		}
	}
	if (iVar1 & 2 == 2)
	{
		if (Function_255(Global_27462[iParam052].f_152) == 1)
		{
			return 0;
		}
	}
	if (iVar1 & 8192 == 8192)
	{
		if (Function_171() <= 6)
		{
			return 0;
		}
	}
	if (iVar1 & 16384 == 16384)
	{
		if (Function_171() >= 0)
		{
			return 0;
		}
	}
	if (iVar1 & 4096 == 4096)
	{
		return 0;
	}
	if (iVar1 & 64 == 64)
	{
		if (!Function_540())
		{
			return 0;
		}
	}
	if (iVar1 & 2048 == 2048)
	{
		if (!Function_539(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4)))
		{
			return 0;
		}
	}
	if (Global_27462[iParam052].f_156 == 4294967294)
	{
		Global_27462[iParam052].f_156 = Global_43789;
	}
	if (!Function_538(Global_27462[iParam052].f_148, &iParam1))
	{
		return 0;
	}
	if (!Function_493(&Global_27462[iParam052] + 160))
	{
		return 0;
	}
	if (!Global_27462[iParam052].f_388 != 4294967295)
	{
		if (!Function_537(Global_27462[iParam052].f_388))
		{
			return 0;
		}
	}
	switch (Global_27462[iParam052].f_188)
	{
		case 0x00000004:
			if (!Function_534((&Global_27462[iParam052] + 188)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Global_27462[iParam052] + 188)->f_156)
			{
				case 0x00000001:
					iVar3 = Function_531(Global_43787, Global_43788, Global_43789, bVar2, 1);
					if (IS_PERS_CHAR_VALID(&iVar3))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar3))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar5 = 0;
					while (StackVal <= (iVar5 - bVar2) + 1)
					{
						iVar3 = Function_531(Global_43787, Global_43788, Global_43789, (bVar2 + iVar5), 1);
						if (IS_PERS_CHAR_VALID(&iVar3))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar3))
							{
								iVar4++;
							}
						}
						iVar5++;
					}
					if (iVar4 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(GET_PLAYER_ACTOR(0), bVar2))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					if (!IS_ACTOR_IN_VOLUME(GET_PLAYER_ACTOR(0), bVar2))
					{
						return 0;
					}
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
	}
	switch (Global_27462[iParam052].f_140)
	{
		case 0x00000002:
			if (!Global_43790 != 2)
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Global_43790 != 5)
			{
				return 0;
			}
			break;
		
		case 0x00000001:
			uVar0 = &Global_39922 + 148[1];
			ADD_TIME(&uVar0, 0, 1, false, 0);
			if (Function_72(Global_39922[1]))
			{
				if (Global_39922[1] == Global_43789)
				{
					if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar0))
					{
						return 0;
					}
				}
			}
			if (iVar1 & 2 == 2)
			{
				if (!Function_530())
				{
					return 0;
				}
			}
			if (iVar1 & 131072 == 131072)
			{
				if (Global_43790 == 4)
				{
					return 0;
				}
			}
			if (!(Global_43790 != 3 || Global_43790 != 4))
			{
				return 0;
			}
			break;
		
		case 0x00000000:
			uVar0 = &Global_39922 + 148[1];
			ADD_TIME(&uVar0, 0, 1, false, 0);
			if (Function_72(Global_39922[1]))
			{
				if (Global_39922[1] == Global_43789)
				{
					if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar0))
					{
						return 0;
					}
				}
			}
			break;
	}
	if (!(Global_27462[iParam052].f_168 && Global_99472) != Global_99472)
	{
		return 0;
	}
	switch (Global_27462[iParam052].f_144)
	{
		case 0x00000002:
			if (!Function_529())
			{
				return 0;
			}
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000001:
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000000:
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Function_527())
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_6646 || Global_6648)
			{
				return 0;
			}
			if (!Function_525(1))
			{
				return 0;
			}
			if (!Function_523(StackVal, 0, Global_40000.f_12))
			{
				return 0;
			}
			break;
	}
	switch (Global_27462[iParam052].f_148)
	{
		case 0x00000800:
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000080:
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000010:
			if (Global_6623)
			{
				return 0;
			}
			if (!Function_522(1, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000008:
			if (Global_43790 == 5)
			{
				return 0;
			}
			if (Global_6623)
			{
				return 0;
			}
			break;
		
		case 0x00000200:
			if (!Function_521())
			{
				return 0;
			}
			if (!Global_43790 != 2)
			{
				return 0;
			}
			if (!IS_PERS_CHAR_VALID(&(Global_15402[bVar214])))
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(&(Global_15402[bVar214]), "mission_avail"))
			{
				return 0;
			}
			if (!Global_43786 != Global_43787)
			{
				return 0;
			}
			break;
		
		case 0x00000400:
			if ((HUD_IS_FADED() || HUD_IS_FADING()) || Global_6634)
			{
				return 0;
			}
			if (Global_6623)
			{
				return 0;
			}
			if (Global_6625)
			{
				return 0;
			}
			break;
	}
	if (!Global_27462[iParam052].f_392 != 4294967295 && !Global_27462[iParam052].f_392 != Function_301())
	{
		return 0;
	}
	return 1;
}

bool Function_521() //Position: 0x23078 / 143480
{
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (!Global_43790 != 2)
	{
		return 0;
	}
	if (!IS_EARLIER_THAN(&Global_21369 + 24, 0))
	{
		return 0;
	}
	if (IS_EARLIER_THAN(&Global_21369 + 32, 0))
	{
		return 1;
	}
	return 0;
}

bool Function_522(var uParam0, int iParam1) //Position: 0x230D5 / 143573
{
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	uParam0 = &uParam0;
	if (!IS_EARLIER_THAN(&Global_21369 + 8, 0) && &iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

bool Function_523(int iParam0, int iParam1, bool bParam2) //Position: 0x2313C / 143676
{
	if (!Function_72(bParam2) && iParam1 != 0)
	{
		return 0;
	}
	if ((!iParam1 != (*&Global_39922 + 116)[iParam0] && !iParam1 != 0) && !Function_524(0x1000000))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(GET_PLAYER_ACTOR(0)))
	{
		return 0;
	}
	return 0;
}

bool Function_524(int iParam0) //Position: 0x2318F / 143759
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_525(bool bParam0) //Position: 0x231AD / 143789
{
	if (Function_524(256))
	{
		return 0;
	}
	if (Function_524(262144))
	{
		return 0;
	}
	if (Function_526())
	{
		return 0;
	}
	if (!Function_524(1))
	{
		return 0;
	}
	if (!Function_524(4096))
	{
		return 0;
	}
	if (bParam0 && Function_127(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_524(2048))
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

bool Function_526() //Position: 0x23223 / 143907
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

bool Function_527() //Position: 0x2323C / 143932
{
	if (Function_528() != 0 && Global_6606)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (IS_EARLIER_THAN(&Global_21369 + 40, 0) || Global_6643)
	{
		return 1;
	}
	return 0;
}

int Function_528() //Position: 0x232A8 / 144040
{
	return Global_21369.f_248;
}

bool Function_529() //Position: 0x232B3 / 144051
{
	if (!IS_EARLIER_THAN(&Global_21369, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_530() //Position: 0x232C8 / 144072
{
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	return 1;
}

var Function_531(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x23313 / 144147
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!&bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_532(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_532(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_532(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_532(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_532(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_532(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_532(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_532(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_532(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_532(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_532(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_532(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_532(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_532(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_532(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_532(&Global_11826, &Global_13998, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_532(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_532(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_532(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_532(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_532(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_532(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_532(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_532(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_532(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_532(&Global_12472, &Global_14954, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_46760[0])
	{
		return Function_532(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_532(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_532(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_532(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_532(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_532(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_532(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_532(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_532(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_532(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_532(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_532(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_532(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_532(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_532(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_532(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_532(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_532(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_532(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_532(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_532(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_532(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_532(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_532(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_532(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_532(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_532(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x23929 / 145705
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_533(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_533(var uParam0, int iParam1) //Position: 0x23983 / 145795
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_534(int iParam0) //Position: 0x239A0 / 145824
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_535(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_535(int iParam0) //Position: 0x23A08 / 145928
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_536(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

int Function_536(var uParam0) //Position: 0x23A46 / 145990
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_537(int iParam0) //Position: 0x23A93 / 146067
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

bool Function_538(int iParam0, int iParam1) //Position: 0x23AAE / 146094
{
	if ((iParam1 && iParam0) == iParam0)
	{
		return 1;
	}
	if (Function_494(iParam0))
	{
		iParam1 = (iParam1 || iParam0);
		return 1;
	}
	return 0;
}

bool Function_539(int iParam0) //Position: 0x23ADB / 146139
{
	if (STRING_CONTAINS_STRING(&iParam0, "nnotoriety"))
	{
		if (Function_528() >= 1 && Global_6606)
		{
			return 0;
		}
	}
	if (STRING_CONTAINS_STRING(&iParam0, "lowhonor"))
	{
		if (Function_171() <= 3 && Global_6606)
		{
			return 0;
		}
	}
	if (!IS_EARLIER_THAN(&Global_21369 + 136, 0))
	{
		return 0;
	}
	if (Global_6608)
	{
		return 0;
	}
	return 1;
}

bool Function_540() //Position: 0x23B42 / 146242
{
	if (!IS_SCRIPT_VALID(Global_10986))
	{
		Global_6608 = 0;
	}
	if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		return 0;
	}
	if (IS_ACTOR_DRUNK(&Global_54076))
	{
		return 0;
	}
	if (Function_541())
	{
		return 0;
	}
	if (Global_6637)
	{
		return 0;
	}
	if (Global_6653)
	{
		return 0;
	}
	if (Global_6608)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6610)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Global_6630)
	{
		return 0;
	}
	if (!IS_EARLIER_THAN(&Global_21369 + 40, 0) && !Global_6643)
	{
		return 0;
	}
	return 1;
}

bool Function_541() //Position: 0x23BF9 / 146425
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_542(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_542(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_542(var uParam0, var uParam1) //Position: 0x23CBC / 146620
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_153(&uParam0);
			Var0 = Function_153(&uParam0);
			Function_543(&uParam1);
			Var2 = Function_543(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_543(var uParam0) //Position: 0x23D5E / 146782
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_544() //Position: 0x23DCC / 146892
{
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6628)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		return 0;
	}
	return 1;
}

void Function_545(bool bParam0) //Position: 0x23E0C / 146956
{
	if (bParam0)
	{
		Function_392(0x10000000);
	}
	else
	{
		Function_546(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_546(int iParam0) //Position: 0x23E31 / 146993
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_547(struct<57> Param0) //Position: 0x23E4E / 147022
{
	strcpy(&Param0 + 24, "WEATHER", 16);
	Param0 = 149266;
	(&Param0 + 8) = 147085;
	*(&Param0 + 16) = 147079;
	Param0.f_56 = 1;
	return;
}

void Function_548() //Position: 0x23E87 / 147079
{
	return;
}

int Function_549() //Position: 0x23E8D / 147085
{
	if (!HUD_IS_FADED())
	{
		Function_554(&Global_26182);
	}
	Function_553(&Global_26182);
	Function_551(&Global_26174);
	Function_550(&Global_26174);
	return 0;
}

void Function_550(struct<25> Param0) //Position: 0x23EB3 / 147123
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	if (!Global_47267[2])
	{
		return;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	Var2 = Vector(0.0f, 0.0f, -1.0f);
	Var0.f_4 = (StackVal + 1,5f);
	ROTATE_VECTOR_XZ(StackVal, &Var2, 0);
	VSCALE(&Var2, (Param0 * 2.0f));
	PRINTFLOAT(Param0);
	PRINTSTRING(" ");
	PRINTFLOAT(StackVal);
	PRINTNL();
	VSCALE(&Var2, (Param0.f_24 * 2.0f));
	iVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	Param0.f_24 = (Param0.f_24 + 0,0666f);
	if (Param0.f_24 < 1.0f)
	{
		Param0.f_24 = 0.0f;
	}
	return;
}

void Function_551(struct<21> Param0) //Position: 0x23F49 / 147273
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	Function_552(StackVal, &fVar1, &fVar2);
	if (Param0.f_16)
	{
		if (StackVal == Param0)
		{
			Param0 = StackVal;
			Param0.f_4 = Param0.f_12;
			bVar0 = true;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (Param0.f_20 + (2.0f * (60.0f / 3.0f))))
	{
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 500)
		{
			Param0 = (Param0 + RAND_FLOAT_RANGE(-0,3f, 0,3f));
			bVar0 = true;
		}
		else if (bVar3 <= 2500)
		{
			Param0 = (Param0 + RAND_FLOAT_RANGE(-0,1f, 0,1f));
			bVar0 = true;
		}
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 500)
		{
			Param0.f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
			bVar0 = true;
		}
		else if (bVar3 <= 2500)
		{
			Param0.f_4 = (StackVal + RAND_FLOAT_RANGE(-10.0f, 10.0f));
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!Param0.f_16)
		{
			if (Param0 < fVar2)
			{
				Param0 = fVar2;
			}
			else if (Param0 > 0.0f)
			{
				Param0 = (Param0 * -1.0f);
				Param0.f_4 = (StackVal + 180.0f);
			}
			else if (Param0 > fVar1)
			{
				Param0 = fVar1;
			}
		}
		if (StackVal < 360.0f)
		{
			Param0.f_4 = (StackVal - 360.0f);
		}
		else if (StackVal > 0.0f)
		{
			Param0.f_4 = (StackVal + 360.0f);
		}
		if (!Param0.f_16)
		{
			if (Param0 > 0,25f)
			{
				Param0 = 0,25f;
			}
			if (StackVal && (StackVal || (Global_99472 != 32 && Param0 < 0,175f) != 0 != 1))
			{
				Param0 = 0,175f;
			}
		}
		SET_WIND(StackVal, Param0, 2,5f);
		Param0.f_20 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_552(int iParam0, var uParam1, int iParam2) //Position: 0x24138 / 147768
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			uParam1 = 0,25f;
			iParam2 = 0,5f;
			break;
		
		case 0x00000002:
		case 0x0000000D:
		case 0x00000011:
		case 0x00000005:
			uParam1 = 1,1f;
			iParam2 = 1,6f;
			break;
		
		case 0x00000003:
			uParam1 = 1,3f;
			iParam2 = 1,8f;
			break;
		
		case 0x00000004:
			uParam1 = 1,6f;
			iParam2 = 2,1f;
			break;
		
		default:
			uParam1 = 1,1f;
			iParam2 = 1,6f;
			break;
	}
	return;
}

void Function_553(vector3 vParam0) //Position: 0x241DE / 147934
{
	struct<9> Var0;
	
	if (!Global_47267[2])
	{
		return;
	}
	switch (vParam0.z)
	{
		case 0x00000001:
			vVar0 = 1.0f;
			vVar0.f_4 = 1.0f;
			vVar0.f_8 = 0,25f;
			strcpy(&cVar2, "FAIR", 8);
			break;
		
		case 0x00000003:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar2, "RAINY", 8);
			break;
		
		case 0x00000000:
			vVar0 = 0,25f;
			vVar0.f_4 = 0,25f;
			vVar0.f_8 = 1.0f;
			strcpy(&cVar2, "CLEAR", 8);
			break;
		
		case 0x00000002:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar2, "CLOUDY", 8);
			break;
		
		case 0x00000004:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar2, "STORMY", 8);
			break;
		
		case 0x00000005:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar2, "SNOWY", 8);
			break;
		
		default:
			vVar0 = 0.0f;
			vVar0.f_4 = 0.0f;
			vVar0.f_8 = 0.0f;
			strcpy(&cVar2, "OTHER", 8);
			break;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var4);
	Var4.f_4 = (StackVal + 1,75f);
	Var4.f_4 = (StackVal + 0,25f);
	if (Global_26182.f_32 < -1.0f)
	{
	}
	if (Global_26182.f_36 < -1.0f)
	{
	}
	return;
}

void Function_554(struct<45> Param0) //Position: 0x24357 / 148311
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_HOUR(0);
	iVar1 = 0;
	if ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19)
	{
		iVar1 = 1;
	}
	if (Param0.f_24 && iVar1)
	{
		Function_556(StackVal);
		if (StackVal != StackVal)
		{
			if (HUD_IS_FADED())
			{
				Function_309(StackVal, 0);
			}
			else
			{
				Function_307(StackVal, MAKE_TIME_OF_DAY(false, Function_326(300), 0), 0);
			}
		}
		return;
	}
	if (Param0.f_24)
	{
		Function_556(StackVal);
		return;
	}
	Function_556(Param0);
	if (IS_EARLIER_THAN(&Param0 + 16, 0))
	{
		bVar2 = RAND_INT_RANGE(false, 10000);
		if ((StackVal != 4294967295 || Param0.f_28) && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			switch (Param0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000004:
					Param0 = 13;
					Param0.f_40 = 0;
					break;
				
				case 0x0000000D:
					if (Function_70(2))
					{
						if (bVar2 <= 3000)
						{
							if (Function_555())
							{
								Param0 = 17;
							}
							else
							{
								Param0 = 2;
							}
						}
						else if (bVar2 <= (6000 + Param0.f_44 * 120))
						{
							Param0 = 3;
						}
					}
					break;
				
				case 0x00000011:
					if (bVar2 <= 3000)
					{
						if (Function_555())
						{
							Param0 = 13;
						}
						else
						{
							Param0 = 2;
						}
					}
					else if (bVar2 <= (6000 + Param0.f_44 * 120))
					{
						Param0 = 3;
					}
					break;
				
				case 0x00000002:
					if (bVar2 <= 3000)
					{
						if (Function_555())
						{
							Param0 = 13;
						}
						else
						{
							Param0 = 17;
						}
					}
					else if (bVar2 <= (6000 + Param0.f_44 * 120))
					{
						Param0 = 3;
					}
					break;
				
				case 0x00000003:
					if (bVar2 <= 3000)
					{
						Param0 = 13;
					}
					else if (bVar2 <= 6000)
					{
						Param0 = 17;
					}
					else
					{
						Param0 = 2;
					}
					Param0.f_40 = 1;
					Param0.f_44 = 0;
					break;
				
				case 0x00000005:
					if (bVar2 <= 3000)
					{
						Param0 = 13;
					}
					else if (bVar2 <= 6000)
					{
						Param0 = 17;
					}
					else
					{
						Param0 = 2;
					}
					Param0.f_40 = 1;
					Param0.f_44 = 0;
					break;
				
				default:
					Param0 = 13;
					break;
			}
			*(&Param0 + 16) = GET_TIME_OF_DAY();
			if ((Param0 != 3 || Param0 != 4) || Param0 != 5)
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_326(400), 0);
			}
			else
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_326(800), 0);
			}
			Param0.f_28 = 0;
		}
		else if (bVar2 <= 6000 && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			*(&Param0 + 16) = GET_TIME_OF_DAY();
			if ((Param0 != 3 || Param0 != 4) || Param0 != 5)
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_326(400), 0);
			}
			else
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_326(800), 0);
			}
			Param0.f_28 = 1;
		}
		else if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
		}
		if (StackVal == Param0 && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			if (HUD_IS_FADED())
			{
				Function_309(Param0, 0);
			}
			else
			{
				Function_307(Param0, MAKE_TIME_OF_DAY(false, Function_326(300), 0), 0);
			}
		}
	}
	return;
}

bool Function_555() //Position: 0x246A7 / 149159
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_556(int iParam0) //Position: 0x246BA / 149178
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
		
		case 0x0000000D:
			break;
		
		case 0x00000011:
			break;
		
		default:
			break;
	}
	return;
}

void Function_557() //Position: 0x24712 / 149266
{
	if (Global_6605)
	{
		Function_558(&Global_26174, 0x3ec00000, 0);
	}
	Global_26182.f_32 = -1.0f;
	Global_26182.f_36 = -1.0f;
	return;
}

void Function_558(struct<21> Param0) //Position: 0x24736 / 149302
{
	Param0 = &uParam1;
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

void Function_559(struct<57> Param0) //Position: 0x24788 / 149384
{
	strcpy(&Param0 + 24, "TRAFFIC", 16);
	Param0 = 187153;
	*(&Param0 + 8) = 150054;
	*(&Param0 + 16) = 149441;
	Param0.f_56 = 1;
	return;
}

void Function_560() //Position: 0x247C1 / 149441
{
	Function_562(&Global_43580 + 108);
	Global_43580.f_316 = 0;
	if (Function_561(&Global_43580, 512))
	{
		STREAMING_EVICT_ACTOR(Global_43580.f_88, 4294967295);
	}
	if (Function_561(&Global_43580, 2048))
	{
		STREAMING_EVICT_ACTOR(Global_43580.f_92, 4294967295);
	}
	if (Function_561(&Global_43580, 8192))
	{
		STREAMING_EVICT_ACTOR(976, 4294967295);
	}
	if (IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		DESTROY_OBJECTSET(&Global_43580 + 80);
	}
	if (IS_OBJECT_VALID(&Global_43722))
	{
		DESTROY_OBJECT(&Global_43722);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_643))
	{
		RELEASE_LAYOUT_REF(&uLocal_643);
	}
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		RELEASE_LAYOUT_REF(&Global_43578);
	}
	return;
}

bool Function_561(var uParam0, int iParam1) //Position: 0x2485B / 149595
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_562(int iParam0) //Position: 0x24878 / 149624
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_563(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_563(struct<2>[] Param0, int iParam1) //Position: 0x248A0 / 149664
{
	if (Function_565(&(Param0[iParam12]), 4))
	{
		if (Function_565(&(Param0[iParam12]), 1))
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
			Function_564(&(Param0[iParam12]), 1);
			Function_564(&(Param0[iParam12]), 2);
			Function_564(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_564(struct<13> Param0) //Position: 0x249EB / 149995
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_565(struct<13> Param0) //Position: 0x24A08 / 150024
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_566() //Position: 0x24A26 / 150054
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	Function_727();
	iVar1 = Function_726(&Local_16);
	if (!iVar1 != Global_43580.f_64)
	{
		Global_43580.f_64 = iVar1;
	}
	Function_721(0);
	if (!Function_720(1))
	{
		Function_717(&Local_16, 1);
		if (IS_OBJECT_VALID(&Global_43722))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Global_43722);
			EVENT_TRAP_CLEAR_EVENTS(&Global_43722);
		}
		if (Function_720(262144))
		{
			Function_562(&Global_43580 + 108);
			Function_716(262144);
			Function_716(524288);
			Global_43580.f_316 = 0;
		}
		Function_721(1);
		return iVar0;
	}
	if (Global_6638)
	{
		Function_717(&Local_16, 1);
		return iVar0;
	}
	if (Global_53524.f_44 & 1)
	{
		Function_717(&Local_16, 1);
		if (IS_OBJECT_VALID(&Global_43722))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Global_43722);
			EVENT_TRAP_CLEAR_EVENTS(&Global_43722);
		}
		return iVar0;
	}
	if (IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		while (GET_OBJECTSET_SIZE(&Global_43580 + 80) >= 0)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Global_43580 + 80));
			if (IS_ACTOR_VALID(&uVar2))
			{
				Function_711(&Local_16, &uVar2);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar2, &Global_43580 + 80);
			CLEAN_OBJECTSET(&Global_43580 + 80);
		}
	}
	if (!Global_53524.f_44)
	{
		Function_717(&Local_16, 0);
	}
	Function_710();
	if (Function_720(1) && Function_720(32768))
	{
		if (Function_720(1048576))
		{
			Function_562(&Global_43580 + 108);
			Function_716(1835008);
			Global_43580.f_316 = 0;
		}
		if (!Function_720(262144))
		{
			if (IS_POPSET_VALID(&(Global_46972[0])) && GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])) < 0)
			{
				Function_709();
			}
		}
		if (Function_720(262144) && !Function_720(524288))
		{
			if (Function_705(&Global_43580 + 108))
			{
				Function_704(524288);
			}
		}
	}
	else
	{
		Function_562(&Global_43580 + 108);
		Function_716(1835008);
		Global_43580.f_316 = 0;
	}
	iVar3 = 0;
	Function_182(Function_24());
	Var4 = Function_182(Function_24());
	if (Function_703(StackVal, Var4))
	{
		while ((Function_720(16384) && Function_701(&Local_16, 0, 0)) && iVar3 > 10)
		{
			iVar6 = 0;
			iVar7 = Function_688(StackVal, &Local_16, Var4, iVar6);
			if (iVar7 < 4294967295 && iVar7 > Local_16)
			{
				Function_590(&(Local_16[iVar731]), 1);
			}
			iVar3++;
		}
	}
	if (Function_720(16384))
	{
	}
	if (Function_701(&Local_16, (0 || !HUD_IS_FADED()), 1))
	{
		if (Function_703(StackVal, Var4))
		{
			iVar8 = 0;
			if (bLocal_640)
			{
				iVar8 = 2;
			}
			Function_688(StackVal, &Local_16, Var4, iVar8);
		}
	}
	iLocal_15 = Function_587();
	iVar9 = 0;
	while (iVar9 <= Local_16)
	{
		if (Function_586(&(Local_16[iVar931])))
		{
			if (Function_590(&(Local_16[iVar931]), 1))
			{
				iVar0 = 1;
			}
			Function_585(&(Local_16[iVar931]), 1);
		}
		Function_583(&(Local_16[iVar931]), iVar9);
		iVar9++;
	}
	Function_582();
	Function_581();
	Function_567();
	Function_721(1);
	EVENT_TRAP_CLEAR_TRAP_FLAG(&Global_43722);
	EVENT_TRAP_CLEAR_EVENTS(&Global_43722);
	REGISTER_TRAFFIC_OBJECTSET(&Global_43580 + 80);
	return iVar0;
}

void Function_567() //Position: 0x24CE5 / 150757
{
	return;
	Function_568();
	return;
}

void Function_568() //Position: 0x24CEF / 150767
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Global_43722))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &Global_43722);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		bVar2 = false;
		bVar3 = false;
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar5 = GET_EVENT_FROM_OBJECT(&iVar1);
			uVar4 = GET_EVENT_TARGET_AS_OBJECT(&uVar5);
			bVar2 = DECOR_CHECK_EXIST(&iVar1, "WasLocal");
			bVar3 = DECOR_CHECK_EXIST(&iVar1, "IsLocal");
			iVar6 = 4294966297;
			if ((bVar3 || bVar2) && IS_OBJECT_VALID(&uVar4))
			{
				if (bVar3)
				{
					if (!Function_579(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4), &iVar6))
					{
						if (Function_711(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4)))
						{
						}
						else
						{
							Function_575(GET_ACTOR_FROM_OBJECT(&uVar4));
						}
					}
					else if (!bVar2)
					{
						if (Local_16[iVar631] == 1 && Local_16[iVar631] == 3)
						{
							Function_574(&(Local_16[iVar631]));
							Function_569(&(Local_16[iVar631]));
							Local_16[iVar631] = 6;
						}
					}
				}
				else if (bVar2)
				{
					if (Function_579(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4), &iVar6))
					{
						Local_16[iVar631] = 6;
					}
				}
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_569(struct<217> Param0) //Position: 0x24E1E / 151070
{
	int iVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	struct<2> Var9;
	
	if (!Function_586(&Param0))
	{
		return;
	}
	iVar0 = Function_573(StackVal, Param0.f_216);
	GET_POSITION(Function_536(&Param0 + 8), &Var1);
	fVar3 = 0.0f;
	iVar4 = START_CURVE_QUERY(&Global_43578, Var1, iVar0, fVar3, 150.0f, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&iVar4) < 0)
	{
		UNK_0xDF93BD7C(&iVar4);
		return;
	}
	bVar5 = Function_572(StackVal, &iVar4, Var1);
	if (bVar5 == 4294967295)
	{
		UNK_0xDF93BD7C(&iVar4);
		return;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iVar4, bVar5);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&iVar4, bVar5, &vVar6);
	*(&Param0 + 220) = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&Param0 + 220, GET_HEADING(Function_536(&Param0 + 8)), 0);
	Param0.f_188 = Function_571(StackVal, StackVal, StackVal, &Param0 + 192, vVar6, *(&Param0 + 220));
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &Param0 + 36, 0);
	}
	else
	{
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &Param0 + 36, 0);
	}
	Function_570(&Param0 + 36);
	Var9 = Function_570(&Param0 + 36);
	UNK_0xDF93BD7C(&iVar4);
	iVar4 = START_CURVE_QUERY(&Global_43578, Var9, iVar0, 0.0f, 10.0f, 2.0f, 0);
	REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&iVar4, &Param0 + 192);
	if (GET_NUM_CURVES_IN_CURVE_QUERY(&iVar4) == 0)
	{
		Param0.f_188 = (Param0.f_188 * 4294967295);
		if (Param0.f_188 >= 0)
		{
			GET_CURVE_POINT(&Param0 + 192, 1.0f, &Param0 + 36, 0);
		}
		else
		{
			GET_CURVE_POINT(&Param0 + 192, 0.0f, &Param0 + 36, 0);
		}
	}
	UNK_0xDF93BD7C(&iVar4);
	return;
}

struct<8> Function_570(vector3 vParam0) //Position: 0x24FA0 / 151456
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_571(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0x24FC2 / 151490
{
	bool bVar0;
	bool bVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &bParam1, &bVar3);
	Function_570(&bVar0);
	Function_570(&bParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&bParam1), Function_570(&bVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_570(&bVar3);
	Function_570(&bParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&bParam1), Function_570(&bVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

var Function_572(var uParam0, struct<2> Param1) //Position: 0x2501B / 151579
{
	bool bVar0;
	bool bVar1;
	bool bVar4;
	bool bVar5;
	
	bVar4 = 100000.0f;
	bVar5 = 4294967295;
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar0, &bVar1);
		Function_570(&bVar1);
		if (VDIST(Param1, Function_570(&bVar1)) > bVar4)
		{
			bVar5 = bVar0;
			Function_570(&bVar1);
			bVar4 = VDIST(Param1, Function_570(&bVar1));
		}
		bVar0++;
	}
	return bVar5;
}

int Function_573(int iParam0, int iParam1) //Position: 0x25073 / 151667
{
	if (&iParam1 != 0)
	{
		return &iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

void Function_574(struct<33> Param0) //Position: 0x250A5 / 151717
{
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000003:
			if (SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
			}
			break;
		
		case 0x00000002:
			Param0.f_32 = 1;
			break;
	}
	return;
}

void Function_575(var uParam0) //Position: 0x250ED / 151789
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_MOUNTED(&uParam0))
	{
		uVar0 = GET_RIDER(&uParam0);
		if (!IS_ACTOR_PLAYER(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
			Function_576(&uVar0);
		}
	}
	if (IS_ACTOR_RIDING(&uParam0))
	{
		iVar1 = GET_MOUNT(&uParam0);
		RELEASE_OBJECT_REF(&iVar1);
		Function_576(&iVar1);
	}
	if (!IS_ACTOR_PLAYER(&uParam0))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ACTOR(&uParam0));
		Function_576(&uParam0);
	}
	return;
}

void Function_576(var uParam0) //Position: 0x25155 / 151893
{
	int iVar0;
	
	iVar0 = Function_578();
	Function_577(&uParam0);
	TASK_FLEE_ACTORSET(&uParam0, &iVar0, -1.0f, -1.0f, 0, 0, 0);
	TASK_PRIORITY_SET(&uParam0, true);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
	return;
}

void Function_577(var uParam0) //Position: 0x25182 / 151938
{
	MEMORY_REPORT_POSITION(&uParam0, &Global_54076, &Global_54078);
	return;
}

int Function_578() //Position: 0x25195 / 151957
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

bool Function_579(struct<31>[] Param0, bool bParam1, int iParam2) //Position: 0x25206 / 152070
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_580(&(Param0[iVar031]), &bParam1))
		{
			iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam2 = 4294967295;
	return 0;
}

bool Function_580(int iParam0, int iParam1) //Position: 0x2523F / 152127
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam0 + 8) && !IS_OBJECTSET_VALID(&iParam0 + 232))
	{
		return 0;
	}
	if (SQUAD_IS_VALID(&iParam0 + 8))
	{
		iVar0 = SQUAD_GET(&iParam1);
		if (SQUAD_IS_VALID(&iVar0))
		{
			if (&iParam0 + 8 == &iVar0)
			{
				return 1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(&iParam0 + 232))
	{
		if (IS_OBJECT_IN_OBJECTSET(&iParam1, &iParam0 + 232))
		{
			return 1;
		}
	}
	return 0;
}

void Function_581() //Position: 0x252B5 / 152245
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (bLocal_639)
	{
		if (!IS_SCRIPT_VALID(&uLocal_641))
		{
			uLocal_641 = LAUNCH_NEW_SCRIPT("$/content/scripting/DesignerDefined/Traffic/trafficDebugThread", 0);
		}
	}
	if (!Global_47267[1])
	{
		return;
	}
	return;
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
		ITERATE_IN_LAYOUT(&uVar0, &Global_43578);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
		uVar1 = START_OBJECT_ITERATOR(&uVar0);
		bVar2 = false;
		iVar3 = 0;
		iVar4 = 0;
		uVar5 = Vector(0.0f, 0.0f, 0.0f);
		while (IS_OBJECT_VALID(&uVar1))
		{
			bVar2 = false;
			iVar3 = 0;
			bVar2 = Function_579(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar1), &iVar4);
			if (!bVar2)
			{
				GET_POSITION(GET_ACTOR_FROM_OBJECT(&uVar1), &uVar5);
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
	}
	if (bLocal_638)
	{
	}
	return;
}

void Function_582() //Position: 0x253A7 / 152487
{
	if (IS_LAYOUTREF_VALID(&uLocal_643) && IS_OBJECT_VALID(&Global_43722))
	{
		return;
	}
	uLocal_643 = FIND_NAMED_LAYOUT("traffic_eventTraplayout");
	if (!IS_LAYOUTREF_VALID(&uLocal_643))
	{
		uLocal_643 = CREATE_LAYOUT("traffic_eventTraplayout");
	}
	Global_43722 = CREATE_EVENT_TRAP("Traffic_netOwnerChange_trap", 92, &uLocal_643);
	EVENT_TRAP_STORE_EVENTS(&Global_43722, 1);
	return;
}

void Function_583(int iParam0, int iParam1) //Position: 0x25440 / 152640
{
	Global_43724[iParam13] = iParam1;
	Global_43724[iParam13].f_4 = Function_586(&iParam0);
	if (StackVal)
	{
		if (SQUAD_IS_VALID(&iParam0 + 8))
		{
			*(&Global_43724[iParam13] + 8) = Function_536(&iParam0 + 8);
		}
		Global_43724[iParam13].f_16 = Function_584(&iParam0, &Global_43724[iParam13] + 20, 0);
	}
	return;
}

bool Function_584(int iParam0, var uParam1, bool bParam2) //Position: 0x254A2 / 152738
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!Function_586(&iParam0) || !SQUAD_IS_VALID(&iParam0 + 8))
	{
		uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(&iParam0 + 8);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, bVar1);
		if (IS_ACTOR_VALID(&uVar0))
		{
		}
		bVar1++;
	}
	iVar5 = 0;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(&iParam0 + 232))
		{
			iVar5 = GET_OBJECTSET_SIZE(&iParam0 + 232);
			bVar1 = false;
			while (bVar1 <= iVar5)
			{
				uVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &iParam0 + 232));
				if (IS_ACTOR_VALID(&uVar0))
				{
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		uParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + iVar5))
	{
		uParam1 = 0,5f;
	}
	else
	{
		uParam1 = 0.0f;
	}
	return bVar2;
}

void Function_585(struct<113> Param0) //Position: 0x25579 / 152953
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_586(&Param0))
	{
		return;
	}
	strcpy(&cVar4, "TRAFFIC NODE", 16);
	switch (Param0.f_112)
	{
		case 0x00000005:
			Var8 = 1.0f;
			Var8.f_4 = 0.0f;
			Var8.f_8 = 0.0f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var8 = 0,9f;
			Var8.f_4 = 0,55f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var8 = 0,9f;
			Var8.f_4 = 0,9f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var8 = 0,2f;
			Var8.f_4 = 0,8f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var8 = 0,1f;
			Var8.f_4 = 0,1f;
			Var8.f_8 = 1.0f;
			Var8.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_536(&Param0 + 8), &Var0);
	fVar10 = Vector(0.0f, 1.0f, 0.0f);
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_570(&Param0 + 36);
	iVar2 = Function_570(&Param0 + 36);
	return;
}

bool Function_586(int iParam0) //Position: 0x256CB / 153291
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_587() //Position: 0x256DC / 153308
{
	bool bVar0;
	
	return 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((Global_6629 && Global_120101[bVar088] != Global_43789) || Function_589(bVar0))
		{
			if (Function_588(bVar0) != 4294967295)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_588(int iParam0) //Position: 0x2571C / 153372
{
	return Global_120101[iParam088].f_176;
}

int Function_589(bool bParam0) //Position: 0x2572C / 153388
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_124113 && SHIFT_LEFT(true, bParam0)) == 0;
}

bool Function_590(struct<241> Param0) //Position: 0x2574E / 153422
{
	var uVar0;
	bool bVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	
	iVar4 = &Global_54076;
	Function_687(&Param0, bParam1);
	switch (Param0)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0 = 16;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
			{
				Param0 = 16;
				return 1;
			}
			if (Function_680(&Param0))
			{
				Param0 = 1;
			}
			else
			{
				Param0 = 16;
				return 1;
			}
		
		case 0x00000001:
			if (!Param0.f_144)
			{
				if (!Function_147(&(Global_46972[6]), 4, 23, 1))
				{
					return 0;
				}
			}
			if (Function_670(&Param0, 0))
			{
				Function_664(&Param0, 0);
				Param0 = 7;
			}
			else
			{
				Param0 = 16;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!Function_147(&(Global_46972[6]), 4, 23, 1))
			{
				return 0;
			}
			if (Function_639(&Param0))
			{
				if (IS_ACTOR_VALID(Function_536(&Param0 + 8)))
				{
					if (Global_43788 != Global_46736[2] || Global_43788 != Global_46754[0])
					{
						SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(Function_536(&Param0 + 8), 1);
					}
					SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(Function_536(&Param0 + 8), 0);
					REGISTER_TRAFFIC_ACTOR(Function_536(&Param0 + 8), 0);
					Param0 = 5;
				}
				else
				{
					Param0 = 16;
					return 1;
				}
			}
			Param0 = 16;
			return 1;
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_VALID(&Global_54076))
			{
				Param0 = 16;
				return 1;
			}
			if (!IS_ACTOR_ALIVE(&Global_54076))
			{
				Param0 = 16;
				return 1;
			}
			if (!Function_638(&Param0 + 8))
			{
				Global_43580.f_100 = GET_CURRENT_GAME_TIME();
				Param0 = 16;
				return 1;
			}
			GET_POSITION(Function_536(&Param0 + 8), &uVar0);
			if (Param0.f_240 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				Function_182(&iVar4);
				if (Function_636(StackVal, &Param0, &uVar0, Function_182(&iVar4), 0))
				{
					return 1;
				}
			}
			if (Function_632(&Param0, &iVar4, 1))
			{
				bVar2 = true;
			}
			break;
		
		case 0x00000006:
			if (!Function_624(&Param0))
			{
				if (Global_53524.f_44)
				{
					if (StackVal || StackVal != 1 != 3)
					{
						Param0 = 12;
					}
					else
					{
						Function_182(&iVar4);
						if (!Function_636(StackVal, &Param0, &uVar0, Function_182(&iVar4), 1))
						{
							Param0 = 12;
						}
					}
				}
				else
				{
					Param0 = 9;
				}
				return 1;
			}
			if (Function_57())
			{
				if (Function_623(&Param0 + 8, &Global_54076, 1))
				{
					Function_622(&Param0 + 8, &Global_54076, 4);
				}
			}
			if (!Function_617(&Param0, 1, Param0.f_32 > 4))
			{
				Param0 = 16;
				return 1;
			}
			Param0 = 7;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(&Global_54076) && !Global_53524.f_44)
			{
				Param0 = 16;
				return 1;
			}
			if (!IS_ACTOR_ALIVE(&Global_54076) && !Global_53524.f_44)
			{
				Param0 = 16;
				return 1;
			}
			if (!Function_638(&Param0 + 8))
			{
				Param0 = 16;
				return 1;
			}
			GET_POSITION(Function_536(&Param0 + 8), &uVar0);
			if (!(Global_6653 && Param0.f_140))
			{
				if (!Function_611(&Param0, Function_616(Param0.f_164)))
				{
					if (((StackVal || StackVal != 1 != 2) || Param0.f_164) && !Global_53524.f_44)
					{
						Param0.f_160 = 1;
					}
					Param0 = 16;
					return 1;
				}
			}
			if (!Function_607(&Param0))
			{
				Param0 = 6;
				return 1;
			}
			if (Param0.f_240 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				if (Function_636(StackVal, &Param0, &uVar0, Global_54078, 1))
				{
					return 1;
				}
			}
			if (Function_605(&Param0))
			{
				bVar2 = true;
			}
			if (Function_632(&Param0, &Global_54076, 1))
			{
				bVar2 = true;
			}
			if (Function_604(&Param0 + 8))
			{
				bVar2 = true;
			}
			if (StackVal != 3 && 0)
			{
				Param0 = 15;
				return 1;
			}
			if (Param0.f_136 && Param0.f_112 <= 2)
			{
				bVar2 = true;
			}
			if (StackVal && (StackVal || (((Global_6646 || iLocal_15) != 2 && Param0.f_112 == 4) == 2 && Param0.f_112 == 3)))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				Function_664(&Param0, iLocal_15);
			}
			break;
		
		case 0x00000009:
			Function_603(&Param0);
			Param0 = 10;
		
		case 0x0000000A:
			if (Function_602(&Param0))
			{
				Param0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (Function_602(&Param0))
			{
				Param0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000C:
			if ((Global_43790 != 3 || Global_43790 != 4) && !Global_53524.f_44)
			{
				Function_601(&Param0);
			}
			else
			{
				Function_599(&Param0);
			}
			Param0 = 13;
		
		case 0x0000000D:
			Param0 = 16;
			return 1;
			break;
		
		case 0x0000000E:
			if (Function_602(&Param0))
			{
				Param0 = 15;
				return 1;
			}
			Function_182(&iVar4);
			if (Function_636(StackVal, &Param0, &uVar0, Function_182(&iVar4), 1))
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			Function_599(&Param0);
			Param0 = 16;
			return 1;
			break;
		
		case 0x00000010:
			Param0 = 17;
			if (IS_OBJECTSET_VALID(&Param0 + 232))
			{
				bVar5 = false;
				while (bVar5 <= GET_OBJECTSET_SIZE(&Param0 + 232))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, &Param0 + 232))))
					{
						uVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, &Param0 + 232));
					}
					bVar5++;
				}
			}
			if (IS_ACTOR_VALID(&Param0 + 24))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
				}
			}
			if (IS_OBJECTSET_VALID(&Param0 + 232))
			{
				Global_43580.f_64 = (Global_43580.f_64 - GET_OBJECTSET_SIZE(&Param0 + 232));
			}
			if (SQUAD_IS_VALID(&Param0 + 8))
			{
				if (Param0.f_160)
				{
					Function_598(&Param0 + 8, 0, 1, 1);
				}
				else
				{
					Function_599(&Param0);
					Function_598(&Param0 + 8, 0, 0, 0);
				}
			}
			if (IS_OBJECTSET_VALID(&Param0 + 232))
			{
				if (Param0.f_160)
				{
					uVar3 = GET_MOUNT(&Global_54076);
					if (IS_OBJECT_VALID(&uVar3))
					{
						if (IS_OBJECT_IN_OBJECTSET(&uVar3, &Param0 + 232))
						{
							REMOVE_OBJECT_FROM_OBJECTSET(&uVar3, &Param0 + 232);
							RELEASE_OBJECT_REF(&uVar3);
						}
					}
					Function_597(&Param0 + 232);
				}
				else
				{
					Function_596(&Param0 + 232);
				}
			}
			Param0.f_160 = 0;
			return 1;
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(&Param0 + 24))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
				}
			}
			Function_591(&Param0, 0);
			if (bParam1)
			{
				Global_43580.f_8 = (StackVal - 1);
			}
			return 1;
			break;
	}
	return 0;
}

void Function_591(struct<245> Param0) //Position: 0x25D7C / 155004
{
	Param0 = 0;
	Param0.f_4 = 4294967295;
	if (SQUAD_IS_VALID(&Param0 + 8))
	{
		if (!Global_53524.f_44 && !&bParam1)
		{
			Function_595(&Param0 + 8);
		}
		else
		{
			Function_594(&Param0 + 8);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 8));
	}
	if (IS_OBJECTSET_VALID(&Param0 + 232))
	{
		DESTROY_OBJECTSET(&Param0 + 232);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		Function_593(&Param0 + 64);
		DESTROY_OBJECTSET(&Param0 + 64);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 208))
	{
		Function_593(&Param0 + 208);
		DESTROY_OBJECTSET(&Param0 + 208);
	}
	Param0.f_32 = 0;
	Function_592();
	*(&Param0 + 36) = { StackVal, StackVal, Function_592() };
	(&Param0 + 16) = "";
	Param0.f_112 = 4294967295;
	Param0.f_188 = 0;
	Function_50();
	*(&Param0 + 220) = Function_50();
	(&Param0 + 24) = "";
	Param0.f_140 = 0;
	Param0.f_144 = 0;
	Param0.f_164 = 0;
	Param0.f_124 = 2;
	Param0.f_244 = 0;
	Param0.f_120 = 0;
	Param0.f_216 = 0;
	return;
}

vector3 Function_592() //Position: 0x25E78 / 155256
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_593(var uParam0) //Position: 0x25E87 / 155271
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_594(int iParam0) //Position: 0x25ED0 / 155344
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
			if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(&uVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(&uVar1)));
				}
				RELEASE_ACTOR(GET_MOUNT(&uVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(&uVar1)))
			{
				RELEASE_ACTOR(GET_VEHICLE(&uVar1));
			}
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_595(int iParam0) //Position: 0x25F60 / 155488
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
			if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(&uVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(&uVar1)));
				}
				DESTROY_ACTOR(GET_MOUNT(&uVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(&uVar1)))
			{
				DESTROY_ACTOR(GET_VEHICLE(&uVar1));
			}
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_596(var uParam0) //Position: 0x25FF0 / 155632
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
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_597(int iParam0) //Position: 0x2603F / 155711
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		}
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_598(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2608E / 155790
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
					if (!Function_159(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_159(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_159(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_159(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_159(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_599(int iParam0) //Position: 0x262C7 / 156359
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	SQUAD_GOALS_CLEAR(&iParam0 + 8);
	uVar1 = Function_578();
	if (!Global_53524.f_44)
	{
		Function_600(&iParam0 + 8, &Global_54076, 4);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, bVar0);
		Function_577(&uVar2);
		if (!IS_ACTOR_DRAFTED(&uVar2))
		{
			TASK_FLEE_ACTORSET(&uVar2, &uVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uVar2, true);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar2);
		}
		bVar0++;
	}
	bVar0 = false;
	if (!IS_OBJECTSET_VALID(&iParam0 + 232))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0 + 232))
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232));
		if (!IS_ACTOR_VEHICLE(&uVar2) && !IS_ACTOR_DRAFTED(&uVar2))
		{
			Function_577(&uVar2);
			TASK_FLEE_ACTORSET(&uVar2, &uVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uVar2, false);
		}
		bVar0++;
	}
	return;
}

void Function_600(var uParam0, int iParam1, bool bParam2) //Position: 0x263AF / 156591
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

void Function_601(int iParam0) //Position: 0x2642C / 156716
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(&iParam0 + 8);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		TASK_WANDER(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, bVar0), 3212836864);
		TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, bVar0), 2);
		bVar0++;
	}
	bVar0 = false;
	if (!IS_OBJECTSET_VALID(&iParam0 + 232))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0 + 232))
	{
		if (!IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232))) && !IS_ACTOR_DRAFTED(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232))))
		{
			TASK_WANDER(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232)), 3212836864);
			TASK_PRIORITY_SET(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232)), 2);
		}
		bVar0++;
	}
	return;
}

bool Function_602(struct<5> Param0) //Position: 0x264F2 / 156914
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				if (IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0)))
				{
					return 0;
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				if (IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0)))
				{
					return 0;
				}
				bVar0++;
			}
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_IS_NODE_DISMOUNTED");
			break;
	}
	return 1;
}

void Function_603(struct<5> Param0) //Position: 0x265AA / 157098
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(&Param0 + 8);
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_DISMOUNT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0), 1);
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0), 0);
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_VEHICLE_LEAVE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0));
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0), 0);
				bVar0++;
			}
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_TASK_NODE_DISMOUNT");
			break;
	}
	return;
}

bool Function_604(int iParam0) //Position: 0x2667F / 157311
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_605(struct<137> Param0) //Position: 0x266AD / 157357
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_606(&Param0 + 8, &Global_43580 + 40))
		{
			if (!Param0.f_136)
			{
				Param0.f_136 = 1;
				return 1;
			}
		}
		if (Param0.f_136)
		{
			Param0.f_136 = 0;
			return 1;
		}
	}
	if (Param0.f_136)
	{
		Param0.f_136 = 0;
		return 1;
	}
	return 0;
}

bool Function_606(var uParam0, int iParam1) //Position: 0x26726 / 157478
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_607(struct<201> Param0) //Position: 0x267B4 / 157620
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_570(&Param0 + 36);
	uVar4 = Function_610(StackVal, Function_570(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_570(&Param0 + 36);
	Var2 = Function_570(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_609(StackVal, Param0.f_112);
	}
	if (StackVal > Function_608(VDIST(Var2, Var0), Function_609(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

float Function_608(bool bParam0, int iParam1) //Position: 0x26846 / 157766
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_609(int iParam0, int iParam1) //Position: 0x26859 / 157785
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

float Function_610(struct<2> Param0, int iParam2) //Position: 0x2696A / 158058
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_48(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) > bVar2 || bVar2 > 0.0f)
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
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_611(int iParam0, int iParam1) //Position: 0x26AE9 / 158441
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	struct<2> Var4;
	
	uVar0 = &iParam0 + 8;
	if (!SQUAD_IS_VALID(&uVar0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uVar0) == 0)
	{
		return 0;
	}
	uVar1 = Function_24();
	if (IS_ACTOR_VALID(&uVar1))
	{
		iVar2 = Function_614(&uVar0, &uVar1, iParam1, 1);
		return iVar2 < 0;
	}
	return 0;
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (GET_SLOT_POSITION(bVar3, &Var4))
		{
			iVar2 = Function_612(StackVal, &uVar0, Var4, iParam1, 1);
			if (iVar2 >= 0)
			{
				return 1;
			}
		}
		bVar3++;
	}
	return 0;
}

int Function_612(var uParam0, struct<2> Param1, var uParam3, bool bParam4) //Position: 0x26B69 / 158569
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2) && IS_ACTOR_ALIVE(&uVar2))
		{
			if (Function_613(StackVal, &uVar2, Param1, uParam3))
			{
				iVar1++;
				if (&bParam4)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_613(var uParam0, struct<2> Param1, float fParam3) //Position: 0x26BD5 / 158677
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_153(&uParam0);
		if (VDIST(Function_153(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_614(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26C61 / 158817
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2) && IS_ACTOR_ALIVE(&uVar2))
		{
			if (Function_615(&uVar2, &iParam1, bParam2))
			{
				iVar1++;
				if (&bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_615(var uParam0, int iParam1, bool bParam2) //Position: 0x26CDA / 158938
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &iParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

var Function_616(bool bParam0) //Position: 0x26DEF / 159215
{
	if (bParam0)
	{
		return 100.0f;
	}
	if (Global_6629 && !Global_53524.f_44)
	{
		if (StackVal == 1)
		{
			return 75.0f;
		}
		if (StackVal || StackVal != 2 != 4)
		{
			return 120.0f;
		}
	}
	return 180.0f;
}

bool Function_617(struct<137> Param0) //Position: 0x26E3C / 159292
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_586(&Param0))
	{
		Function_585(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_536(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_570(&Param0 + 36);
	Var2 = Function_570(&Param0 + 36);
	Var0 = Var2;
	Function_621(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_620(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_619(Function_536(&Param0 + 8)), 0);
	}
	Function_618(&Param0);
	return 1;
}

void Function_618(struct<189> Param0) //Position: 0x26F0C / 159500
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_57())
	{
		iVar1 = 0;
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (Param0.f_148)
	{
		iVar1 = 1;
	}
	if (Param0.f_156)
	{
		if (!Param0.f_136 && GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 1;
		}
		if (Param0.f_136)
		{
			Param0.f_156 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 0, 4294967295, &Param0 + 192, Param0.f_112, iVar0, iVar1);
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
		if (Param0.f_124 != 2)
		{
			if (!Param0.f_144)
			{
				Param0.f_124 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(&Param0 + 8, &Param0 + 16, Param0.f_124);
			}
		}
		if (StackVal && !Param0.f_152 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(&Param0 + 8, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 8, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
		}
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
	}
	return;
}

int Function_619(int iParam0) //Position: 0x27107 / 160007
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_620(int iParam0, int iParam1, int iParam2) //Position: 0x2712E / 160046
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_57())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_621(vector3 vParam0) //Position: 0x27274 / 160372
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_622(var uParam0, var uParam1, bool bParam2) //Position: 0x27292 / 160402
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
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_623(bool bParam0, int iParam1, int iParam2) //Position: 0x272DE / 160478
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_LAST_ATTACKER(&iVar1) == &iParam1)
			{
				return 1;
			}
			if (&iParam2 == 1)
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
				{
					if (GET_LAST_ATTACKER(GET_MOUNT(&iVar1)) == &iParam1)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_624(int iParam0) //Position: 0x2735C / 160604
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_570(&iParam0 + 36);
	uVar2 = Function_610(StackVal, Function_570(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_626(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_626(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_625(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

bool Function_625(struct<21> Param0) //Position: 0x273DE / 160734
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_626(struct<217> Param0) //Position: 0x27412 / 160786
{
	vector3 vVar0;
	struct<2> Var3;
	bool bVar5;
	bool bVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	struct<2> Var13;
	var uVar15;
	float fVar17;
	vector3 vVar18;
	var uVar21;
	bool bVar22;
	var uVar23;
	float fVar24;
	struct<17> Var25;
	
	Function_570(&vParam1);
	Var3 = Function_570(&vParam1);
	bVar5 = false;
	uVar7 = Function_573(StackVal, Param0.f_216);
	fVar8 = 0.0f;
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		fVar9 = 5.0f;
	}
	else
	{
		fVar9 = (fParam5 * 2.0f);
	}
	iVar10 = 0;
	GET_OBJECT_POSITION(Function_536(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 36, 1);
	}
	bVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_608(Function_631(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
		if (IS_OBJECT_VALID(&uParam4))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uParam4);
			if (!IS_OBJECT_IN_OBJECTSET(&uParam4, &Param0 + 208))
			{
				ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			}
		}
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		else
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 208))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uParam4, &Param0 + 208);
			UNK_0xDF93BD7C(&uVar21);
			Function_593(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_592();
				return StackVal, StackVal, Function_592();
			}
		}
		fVar24 = -100000.0f;
		bVar22 = 4294967295;
		bVar5 = false;
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
					Function_570(&vVar18);
					Function_570(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Function_570(&vVar18), StackVal);
					fVar17 = VDOT(&uVar15, &Var13);
					if (fVar17 < fVar24)
					{
						fVar24 = fVar17;
						bVar22 = bVar5;
					}
				}
				RELEASE_CURVE(&uVar23);
				bVar5++;
			}
		}
		else if (Function_48(StackVal, Var13))
		{
			bVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_570(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_592();
			Var25 = { StackVal, StackVal, Function_592() };
			Function_592();
			Var28 = { StackVal, StackVal, Function_592() };
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_570(&vParam1);
				Function_570(&Var25);
				Function_570(&vParam1);
				Function_570(&Var28);
				if (StackVal > Function_53(StackVal, Function_53(StackVal, StackVal, Function_570(&vParam1), Function_570(&Var25)), Function_570(&vParam1), Function_570(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_630(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_570(&vVar18);
				Function_570(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Function_570(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		else
		{
			Function_592();
			Var25 = { StackVal, StackVal, Function_592() };
			Function_592();
			Var28 = { StackVal, StackVal, Function_592() };
			Function_570(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_570(&vParam1);
				Function_570(&Var25);
				Function_570(&vParam1);
				Function_570(&Var28);
				if (StackVal > Function_53(StackVal, Function_53(StackVal, StackVal, Function_570(&vParam1), Function_570(&Var25)), Function_570(&vParam1), Function_570(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_570(&vVar18);
				Function_570(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Function_570(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		iVar10 = 0;
		if (bVar22 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar21);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_592();
				return StackVal, StackVal, Function_592();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar22, &vVar0);
	Function_570(&vVar0);
	uVar32 = Function_570(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_629(StackVal, StackVal, StackVal, Function_629(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
	{
		Param0.f_188 = 1;
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar0, 0);
	}
	else
	{
		Param0.f_188 = 4294967295;
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar0, 0);
	}
	if (Global_47267[1])
	{
		bVar5 = false;
		bVar5 = false;
		while (bVar5 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uVar21))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
			Function_570(&vVar18);
			uVar32 = Function_570(&vVar18);
			bVar5++;
		}
		Function_570(&vVar0);
		uVar32 = Function_570(&vVar0);
	}
	Function_627(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_627(struct<33> Param0) //Position: 0x27967 / 162151
{
	if (!Function_586(&Param0))
	{
		return;
	}
	if (!Function_628(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_628(bool bParam0) //Position: 0x27A16 / 162326
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_629(bool bParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x27A2B / 162347
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_570(&bParam0);
	Var0 = Function_570(&bParam0);
	Function_570(&bParam3);
	Var2 = Function_570(&bParam3);
	return VDIST(Var0, Var2);
}

void Function_630(struct<17> Param0) //Position: 0x27A4E / 162382
{
	Function_570(&Param0);
	PRINTVECTOR(Function_570(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

var Function_631(struct<113> Param0) //Position: 0x27A81 / 162433
{
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (Param0.f_112)
			{
				case 0x00000005:
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

bool Function_632(struct<173> Param0) //Position: 0x27B3D / 162621
{
	var uVar0;
	struct<57> Var1;
	
	if (Global_6623)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
			}
		}
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (Global_6638)
	{
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&Param0 + 24))
	{
		return 0;
	}
	if (Function_635(&Param0 + 24, 0))
	{
		if (Function_634(&Param0 + 24) || !bParam2)
		{
			Function_603(&Param0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
			}
			Param0 = 14;
			return 1;
		}
	}
	if (!bParam2)
	{
		return 0;
	}
	if (!Param0.f_140)
	{
		return 0;
	}
	uVar0 = Function_536(&Param0 + 8);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		if (Param0 != 17)
		{
			Param0 = 16;
		}
		return 1;
	}
	if (IS_ACTOR_JACKING_VEHICLE(&iParam1))
	{
		Function_603(&Param0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
		}
		Global_43580.f_100 = GET_CURRENT_GAME_TIME();
		SAY_SINGLE_LINE_CONTEXT(&uVar0, 171, Function_24(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
		Param0 = 14;
		return 1;
	}
	if (AI_GET_IS_RETREATING(&uVar0))
	{
		Global_43580.f_100 = GET_CURRENT_GAME_TIME();
		return 1;
	}
	if ((IS_ACTOR_RIDING(&iParam1) || IS_ACTOR_DRIVING_VEHICLE(&iParam1)) || (IS_ACTOR_RIDING_VEHICLE(&iParam1) && !GET_VEHICLE(&iParam1) != &Param0 + 24))
	{
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		if (Function_615(&uVar0, &iParam1, 7.0f))
		{
			if (!DECOR_CHECK_EXIST(&Param0 + 8, "oneshotdialog"))
			{
				DECOR_SET_BOOL(&Param0 + 8, "oneshotdialog", 1);
				Global_43580.f_100 = GET_CURRENT_GAME_TIME();
				SAY_SINGLE_LINE_CONTEXT(&uVar0, 60, Function_24(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
				Param0.f_132 = 0;
				Param0.f_172 = 0.0f;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
				}
				return 1;
			}
			if (GET_VEHICLE(&iParam1) == &Param0 + 24)
			{
				Global_43580.f_100 = GET_CURRENT_GAME_TIME();
				Function_603(&Param0);
				Param0 = 14;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
				}
				return 1;
			}
			return 0;
		}
	}
	if (Function_115(4))
	{
		if (!Param0.f_132)
		{
			if (Param0.f_172 > 1.0f)
			{
				if (&Global_43660 + 8 != &Param0 + 8 && Function_615(&uVar0, &iParam1, 10.0f))
				{
					Param0.f_132 = 1;
					Param0.f_172 = (GET_CURRENT_GAME_TIME() + 20.0f);
					SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 309, Function_24(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
				if (Function_633(&uVar0, 50.0f))
				{
					Param0.f_132 = 1;
					Param0.f_172 = (GET_CURRENT_GAME_TIME() + 60.0f);
					SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 309, Function_24(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
			}
			if (!Function_57())
			{
				if (!Function_105(Global_119934, 64))
				{
					if (Function_615(&Param0 + 24, &iParam1, 35.0f) && Function_159(&Param0 + 24, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_100(&Global_54076, 64, 1, 0);
					}
				}
			}
		}
		else
		{
			if (Param0.f_172 > (GET_CURRENT_GAME_TIME() + 15.0f))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 8, "oneshotdialog"))
				{
					if (Function_615(&uVar0, &iParam1, 10.0f))
					{
						DECOR_SET_BOOL(&Param0 + 8, "oneshotdialog", 1);
						SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
						SAY_SINGLE_LINE_CONTEXT(&uVar0, 310, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (Param0.f_172 > GET_CURRENT_GAME_TIME())
			{
				Param0.f_172 = 0.0f;
				Param0.f_132 = 0;
				return 1;
			}
		}
		if (GET_VEHICLE(&iParam1) != &Param0 + 24 && !Function_134())
		{
			if ((!DECOR_CHECK_EXIST(&Param0 + 8, "npassenger") && !Global_6623) && !Global_6625)
			{
				DECOR_SET_BOOL(&Param0 + 8, "npassenger", 1);
				*(&Var1 + 72 + 28) = 1;
				Var1.f_52 = DECOR_GET_INT(&Global_43580 + 32, "regid");
				Var1.f_56 = &Param0 + 8;
				LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Passenger/passenger_coach", &Var1, 62, 0);
				Param0.f_132 = 0;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
				}
				return 1;
			}
		}
	}
	return 0;
}

bool Function_633(int iParam0, bool bParam1) //Position: 0x2806A / 163946
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_WHISTLING(Function_24()))
	{
		if (Function_615(&iParam0, Function_24(), bParam1))
		{
			return 1;
		}
	}
	return 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				iVar1 = Function_24();
			}
			else
			{
				iVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (IS_ACTOR_WHISTLING(&iVar1))
				{
					if (Function_615(&iParam0, &iVar1, bParam1))
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_634(int iParam0) //Position: 0x280E2 / 164066
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_DRIVING_VEHICLE(Function_24()))
	{
		return GET_VEHICLE(Function_24()) != &iParam0;
	}
	return 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				iVar1 = Function_24();
			}
			else
			{
				iVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(&iVar1) && GET_VEHICLE(&iVar1) != &iParam0)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_635(int iParam0, bool bParam1) //Position: 0x28152 / 164178
{
	bool bVar0;
	int iVar1;
	
	return GET_VEHICLE(Function_24()) != &iParam0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				if (!&bParam1)
				{
					iVar1 = Function_24();
				}
			}
			else
			{
				iVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (GET_VEHICLE(&iVar1) == &iParam0)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_636(struct<161> Param0) //Position: 0x281B6 / 164278
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	bool bVar7;
	
	Param2 = Param2;
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				uVar5 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0);
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (DECOR_CHECK_EXIST(&uVar5, "witness"))
					{
						SQUAD_LEAVE(&uVar5);
						RELEASE_ACTOR(&uVar5);
						TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar5);
						Param0.f_32 = (Param0.f_32 - 1);
					}
					else
					{
						bVar7 = false;
						uVar6 = GET_MOUNT(&uVar5);
						if (!IS_ACTOR_VALID(&uVar6))
						{
							bVar7 = true;
						}
						else
						{
							GET_POSITION(&uVar5, &Var1);
							GET_POSITION(&uVar6, &Var3);
							if (Function_53(StackVal, StackVal, Var1, Var3) < 10.0f)
							{
								bVar7 = true;
							}
						}
						if (bVar7)
						{
							SQUAD_LEAVE(&uVar5);
							if (!DECOR_CHECK_EXIST(&uVar5, "hijacked"))
							{
								TASK_CLEAR(&uVar5);
								TASK_PRIORITY_SET(&uVar5, 2);
								TASK_WANDER(&uVar5, 3212836864);
							}
							else
							{
								DECOR_REMOVE(&uVar5, "hijacked");
							}
							RELEASE_ACTOR(&uVar5);
							if (IS_ACTOR_VALID(&uVar6))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(&uVar6, &Param0 + 232);
								TASK_WANDER(&uVar6, 3212836864);
								RELEASE_ACTOR(&uVar6);
							}
							Param0.f_32 = (Param0.f_32 - 1);
						}
					}
				}
				bVar0++;
			}
			if (Param0.f_32 <= 1)
			{
				Param0 = 16;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(&Param0 + 24))
			{
				Function_603(&Param0);
				Param0 = 14;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
			{
				Function_603(&Param0);
				Param0 = 14;
				return 1;
			}
			Param1 = Param1;
			if (GET_ACTOR_STUCK_STATE(&Param0 + 24) != 0)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &Param0 + 24, 1065353216, 1117126656, 1, 1, 0))
				{
					Param0.f_160 = 0;
				}
				Function_603(&Param0);
				Param0 = 14;
				return 1;
			}
			if (!Function_637(&Param0 + 24, 4294967295, 1, 4294967295))
			{
				Function_603(&Param0);
				Param0 = 14;
				return 1;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				uVar5 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0);
				if (DECOR_CHECK_EXIST(&uVar5, "witness"))
				{
					SQUAD_LEAVE(&uVar5);
					RELEASE_ACTOR(&uVar5);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar5);
					Param0.f_32 = (Param0.f_32 - 1);
				}
				bVar0++;
			}
			break;
	}
	if (&bParam4)
	{
		if (!IS_OBJECT_VALID(&Param0 + 192))
		{
			LOG_ERROR("WE LOST OUR CURVE");
			Param0 = 6;
		}
	}
	return 0;
}

bool Function_637(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2844F / 164943
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

bool Function_638(var uParam0) //Position: 0x2851D / 165149
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_639(struct<157> Param0) //Position: 0x2857B / 165243
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Function_570(&Param0 + 36);
	Var2 = Function_570(&Param0 + 36);
	Function_663(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0);
	*(&Param0 + 36) = { StackVal, StackVal, Function_663(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0) };
	if (Function_625(&Param0 + 36))
	{
		Param0 = 16;
		return 0;
	}
	if (!Function_662(&Var2, 20.0f, &uVar4, 3))
	{
		Param0 = 16;
		return 0;
	}
	Function_570(&Param0 + 36);
	*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Function_570(&Param0 + 36), StackVal);
	*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	Param0.f_152 = 1;
	Param0.f_156 = 1;
	Function_640(&Param0);
	return 1;
}

void Function_640(struct<31> Param0) //Position: 0x2860D / 165389
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	bool bVar5;
	
	if (!Function_720(256) || !Function_115(4))
	{
		return;
	}
	uVar0 = Function_661(StackVal, Global_54078);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return;
	}
	if (!Function_586(&Param0))
	{
		return;
	}
	Param0.f_4 = 2;
	GET_OBJECT_POSITION(&uVar0, &Var1);
	Var3 = Vector(0.0f, GET_OBJECT_HEADING(&uVar0), 0.0f);
	bVar5 = 1177;
	if (Global_43787 == 2)
	{
		bVar5 = 1178;
	}
	else if (Global_43787 == 1)
	{
		bVar5 = 1179;
	}
	if (!STREAMING_IS_ACTOR_LOADED(bVar5, 4294967295))
	{
		return;
	}
	if (!STREAMING_IS_ACTOR_LOADED(Global_43580.f_88, 4294967295))
	{
		return;
	}
	if (!Function_643(StackVal, StackVal, &Global_43578, &Param0 + 8, 2, 64, 512, Var1, Var3, &Param0 + 24, bVar5))
	{
		return;
	}
	Param0.f_140 = 1;
	DECOR_SET_BOOL(&Param0 + 8, "coachService", 1);
	*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 1);
	Function_642(StackVal, &Param0 + 8, &Param0 + 232);
	Param0.f_240 = GET_CURRENT_GAME_TIME();
	Function_641(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
	return;
}

void Function_641(struct<245> Param0) //Position: 0x28718 / 165656
{
	bool bVar0;
	
	return;
	if (Param0.f_244 == 0)
	{
	}
	if (SQUAD_IS_VALID(&Param0 + 8))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 8))
		{
			NET_ACTOR_SET_SCRIPT_INT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar0), Param0.f_244);
			bVar0++;
		}
	}
	if (IS_OBJECTSET_VALID(&Param0 + 232))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&Param0 + 232))
		{
			NET_OBJECT_SET_SCRIPT_INT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Param0 + 232), Param0.f_244);
			bVar0++;
		}
	}
}

void Function_642(var uParam0, var uParam1, bool bParam2) //Position: 0x28795 / 165781
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		LOG_ERROR("SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET got an invalid squad");
		return;
	}
	if (!IS_OBJECTSET_VALID(&uParam1))
	{
		LOG_ERROR("SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET got an invalid objectset");
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		switch (bParam2)
		{
			case 0x00000001:
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_RIDING(&uVar2))
				{
					SET_ACTOR_IS_AMBIENT(&uVar2, 1);
					if (!IS_OBJECT_IN_OBJECTSET(GET_MOUNT(&uVar2), &uParam1))
					{
						ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(&uVar2), &uParam1);
					}
				}
				else
				{
					LOG_ERROR("Horse traffic member is not riding a horse? Impossible!");
				}
				break;
			
			case 0x00000002:
				if (SQUAD_GET_SIZE(&uParam0) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				}
				if (IS_ACTOR_RIDING_VEHICLE(&uVar2))
				{
					uVar3 = GET_VEHICLE(&uVar2);
					SET_ACTOR_IS_AMBIENT(&uVar2, 1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (!IS_OBJECT_IN_OBJECTSET(&uVar3, &uParam1))
						{
							ADD_OBJECT_TO_OBJECTSET(&uVar3, &uParam1);
						}
						bVar1 = false;
						while (bVar1 <= GET_NUM_DRAFTED_ACTORS(&uVar3))
						{
							if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar1, &uVar3)))
							{
								if (!IS_OBJECT_IN_OBJECTSET(GET_DRAFT_ACTOR(bVar1, &uVar3), &uParam1))
								{
									ADD_OBJECT_TO_OBJECTSET(GET_DRAFT_ACTOR(bVar1, &uVar3), &uParam1);
								}
							}
							bVar1++;
						}
						return;
					}
				}
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET");
				break;
		}
		bVar0++;
	}
	return;
}

bool Function_643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, struct<2> Param7, int iParam9, bool bParam10) //Position: 0x289BE / 166334
{
	char[] cVar0[4];
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<8> Var10;
	bool bVar18[8];
	bool bVar27;
	struct<2> Var28;
	struct<8> Var30;
	struct<8> Var38;
	
	bVar3 = true;
	if (!Function_662(&Param5, 20.0f, &Var1, 10))
	{
		Var1 = Param5;
	}
	if (&bParam10 < 0)
	{
		bParam10 = Function_657(iParam4, 0, 0, 4294967295, 0);
		bVar3 = false;
	}
	if (Function_48(StackVal, Var1))
	{
		LOG_ERROR("Attempting to create stagecoach traffic at 0,0,0!");
	}
	Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("ntrafcoach", &iParam0) };
	iParam9 = Function_653(StackVal, StackVal, &iParam0, &Var10, &bParam10, Function_657(iParam3, 0, 4, 23, 0), Var1, Param7, 1, 976, 976, 976, 4);
	switch (&bParam10)
	{
		case 0x00000499:
		case 0x0000049A:
		case 0x0000049B:
		case 0x0000049F:
		case 0x000004A0:
		case 0x000004A1:
		case 0x000004A2:
		case 0x000004A3:
		case 0x000004A4:
			iParam2 = 2;
			break;
		
		case 0x000004B0:
		case 0x000004B1:
		case 0x000004AF:
		case 0x000004AB:
		case 0x000004AC:
			iParam2 = 1;
			break;
		
		case 0x0000049E:
		case 0x000004A5:
		case 0x000004A6:
		case 0x000004A7:
		case 0x000004A8:
		case 0x000004A9:
		case 0x000004AA:
		case 0x000004AD:
		case 0x000004AE:
		case 0x000004B2:
		case 0x0000049C:
			break;
	}
	if (IS_ACTOR_VALID(&iParam9))
	{
	}
	if (bVar3)
	{
		iVar9 = 1;
		iVar5 = 1;
		iVar4 = 1;
	}
	else if ((&bParam10 != 1177 || &bParam10 != 1178) || &bParam10 != 1179)
	{
		iVar9 = 1;
		iVar5 = GET_NUM_AVAILABLE_SEATS(&iParam9);
		iVar4 = 1;
	}
	else
	{
		iVar5 = GET_NUM_AVAILABLE_SEATS(&iParam9);
	}
	if (Global_43789 != Global_46760[0] && iVar5 < 2)
	{
		iVar5 = 2;
		iVar7 = 0;
	}
	else if (iVar5 < 2 && 0)
	{
		iVar5 = 2;
	}
	else if (iVar5 >= 2)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3333)
		{
			iVar7 = 1;
		}
		else
		{
			iVar7 = 2;
		}
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(4);
	Var28 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -10.0f, 0.0f), Param5, StackVal);
	iVar8 = 1;
	bVar6 = false;
	while (bVar6 <= iVar5)
	{
		cVar0 = "";
		Var38 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("trafpass", &iParam0) };
		if ((bVar6 != 0 || bVar6 != 1) && iVar4)
		{
			if (bVar6 == 0)
			{
				Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("trafdriver", &iParam0) };
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var30, Global_43580.f_88, Var28, Param7);
				if (Function_561(&Global_43580, 512))
				{
					STREAMING_EVICT_ACTOR(Global_43580.f_88, 4294967295);
				}
				bVar18[0] = Global_43580.f_88;
				Global_43580.f_88 = Function_652(Global_43788, Global_43580.f_88);
				STREAMING_REQUEST_ACTOR(Global_43580.f_88, 1, false);
				Function_651(&Global_43580, 512);
			}
			else
			{
				Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("trafshotty", &iParam0) };
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var30, Global_43580.f_92, Var28, Param7);
				if (Function_561(&Global_43580, 2048))
				{
					STREAMING_EVICT_ACTOR(Global_43580.f_92, 4294967295);
				}
				bVar18[1] = Global_43580.f_92;
				Global_43580.f_92 = Function_650(Global_43788, Global_43580.f_92);
				STREAMING_REQUEST_ACTOR(Global_43580.f_92, 1, false);
				Function_651(&Global_43580, 2048);
			}
		}
		else if (bVar6 != 1 || bVar6 != 0)
		{
			if (iParam2 == 1)
			{
				bVar27 = Function_645();
				STREAMING_REQUEST_ACTOR(bVar27, 1, false);
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var38, bVar27, Var28, Param7);
				STREAMING_EVICT_ACTOR(bVar27, 4294967295);
			}
			else
			{
				bVar27 = Function_657(iParam2, 1, 2, 4294967295, 0);
				if (!Function_644(bVar27, &bVar18))
				{
					bVar18[bVar6] = bVar27;
					cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var38, bVar27, Var28, Param7);
				}
			}
		}
		else if (iVar7 >= 0)
		{
			if (RAND_INT_RANGE(false, 10000) <= (4000 * iVar8))
			{
				if (iParam2 == 1)
				{
					bVar27 = Function_645();
					STREAMING_REQUEST_ACTOR(bVar27, 1, false);
					cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var38, bVar27, Var28, Param7);
					STREAMING_EVICT_ACTOR(bVar27, 4294967295);
					iVar7 = (iVar7 - 1);
					iVar8 = 1;
				}
				else
				{
					bVar27 = Function_657(iParam2, 1, 0, 4294967295, 0);
					if (!Function_644(bVar27, &bVar18))
					{
						bVar18[bVar6] = bVar27;
						cVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &Var38, bVar27, Var28, Param7);
						iVar7 = (iVar7 - 1);
						iVar8 = 1;
					}
				}
			}
			else
			{
				iVar8++;
			}
		}
		if (IS_ACTOR_VALID(&cVar0))
		{
			SET_ACTOR_IN_VEHICLE(&cVar0, &iParam9, bVar6);
			MEMORY_ATTACK_ON_SIGHT(&cVar0, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&cVar0, 1);
			REGISTER_TRAFFIC_ACTOR(&cVar0, 1);
			SET_ACTOR_IS_AMBIENT(&cVar0, 1);
			SQUAD_JOIN(&cVar0, &iParam1);
			Var28 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(1.0f, 0.0f, 1.0f), Var28, StackVal);
		}
		bVar6++;
	}
	return iVar9;
}

bool Function_644(bool bParam0, bool[] bParam1) //Position: 0x28E5B / 167515
{
	int iVar0;
	
	if (bParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_645() //Position: 0x28E8F / 167567
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (!Function_565(&Global_43580 + 108[Global_43580.f_3082], 4) && iVar0 > 20)
	{
		Global_43580.f_308++;
		if (Global_43580.f_308 > Global_43580.f_108)
		{
			Global_43580.f_308 = 0;
		}
		iVar0++;
	}
	if (iVar0 <= 20)
	{
		iVar1 = &Global_43580 + 108[Global_43580.f_3082];
	}
	else
	{
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
	}
	Function_646(0);
	Global_43580.f_308++;
	if (Global_43580.f_308 > Global_43580.f_108)
	{
		Global_43580.f_308 = 0;
	}
	Function_716(524288);
	Function_705(&Global_43580 + 108);
	return iVar1;
}

void Function_646(int iParam0) //Position: 0x28F3B / 167739
{
	int iVar0;
	
	if (Function_565(&Global_43580 + 108[Global_43580.f_3082], 4))
	{
		if (Global_43580.f_316 >= 0)
		{
			Global_43580.f_316 = (Global_43580.f_316 - 1);
		}
	}
	Function_563(&Global_43580 + 108, Global_43580.f_308);
	if (iParam0 || Global_43580.f_316 > 5)
	{
		iVar0 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), Global_43580.f_312);
		while (Function_649(iVar0) || iVar0 != 0)
		{
			Global_43580.f_312++;
			if (Global_43580.f_312 > GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])))
			{
				Global_43580.f_312 = 0;
			}
			iVar0 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), Global_43580.f_312);
		}
		Function_647(&Global_43580 + 108, Global_43580.f_308, iVar0);
		Global_43580.f_316++;
		Global_43580.f_312++;
		if (Global_43580.f_312 > GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])))
		{
			Global_43580.f_312 = 0;
		}
	}
	return;
}

void Function_647(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x2902C / 167980
{
	Param0[iParam12] = iParam2;
	Param0[iParam12].f_8 = 3;
	Function_648(&(Param0[iParam12]), 4);
	return;
}

void Function_648(struct<13> Param0) //Position: 0x29051 / 168017
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

int Function_649(int iParam0) //Position: 0x29064 / 168036
{
	if (iParam0 <= 6)
	{
		return 1;
	}
	if (iParam0 == 17)
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		return 1;
	}
	if (iParam0 < 19 && iParam0 > 25)
	{
		return 1;
	}
	if (iParam0 < 50 && iParam0 > 80)
	{
		return 1;
	}
	if (iParam0 < 211 && iParam0 > 217)
	{
		return 1;
	}
	if (iParam0 < 236 && iParam0 > 254)
	{
		return 1;
	}
	if (iParam0 < 312 && iParam0 > 319)
	{
		return 1;
	}
	return 0;
}

int Function_650(bool bParam0, int iParam1) //Position: 0x290EC / 168172
{
	bool bVar0;
	
	if (!Function_72(bParam0))
	{
		return 133;
	}
	if (!StackVal != 2)
	{
		return 133;
	}
	bVar0 = RAND_INT_RANGE(false, 10000);
	if (Global_44085[bParam09] == Global_46722[0])
	{
		if (bVar0 > 1667 && &iParam1 == 133)
		{
			return 133;
		}
		if (bVar0 > 3333 && &iParam1 == 135)
		{
			return 135;
		}
		if (bVar0 > 5000 && &iParam1 == 136)
		{
			return 136;
		}
		if (bVar0 > 6666 && &iParam1 == 137)
		{
			return 137;
		}
		if (bVar0 > 8333 && &iParam1 == 138)
		{
			return 138;
		}
		if (&iParam1 != 139)
		{
			return 139;
		}
		return 133;
	}
	if (Global_44085[bParam09] == Global_46722[1])
	{
		if (bVar0 > 2500 && &iParam1 == 278)
		{
			return 278;
		}
		if (bVar0 > 5000 && &iParam1 == 279)
		{
			return 279;
		}
		if (bVar0 > 7500 && &iParam1 == 280)
		{
			return 280;
		}
		if (&iParam1 != 281)
		{
			return 281;
		}
		return 278;
	}
	if (Global_44085[bParam09] == Global_46722[2])
	{
		if (bVar0 > 2000 && &iParam1 == 140)
		{
			return 140;
		}
		if (bVar0 > 4000 && &iParam1 == 141)
		{
			return 141;
		}
		if (bVar0 > 6000 && &iParam1 == 142)
		{
			return 142;
		}
		if (bVar0 > 8000 && &iParam1 == 143)
		{
			return 143;
		}
		if (&iParam1 != 144)
		{
			return 144;
		}
		return 140;
	}
	return 230;
}

void Function_651(var uParam0, int iParam1) //Position: 0x29295 / 168597
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

int Function_652(bool bParam0, bool bParam1) //Position: 0x292B4 / 168628
{
	bool bVar0;
	
	if (!Function_72(bParam0))
	{
		return 230;
	}
	if (!StackVal != 2)
	{
		return 230;
	}
	bVar0 = RAND_INT_RANGE(false, 10000);
	if (Global_44085[bParam09] == Global_46722[0])
	{
		if (bVar0 > 1667 && &bParam1 == 46)
		{
			return 46;
		}
		if (bVar0 > 3333 && &bParam1 == 200)
		{
			return 200;
		}
		if (bVar0 > 5000 && &bParam1 == 230)
		{
			return 230;
		}
		if (bVar0 > 6666 && &bParam1 == 205)
		{
			return 205;
		}
		if (bVar0 > 8333 && &bParam1 == 10)
		{
			return 10;
		}
		if (&bParam1 != 48)
		{
			return 48;
		}
		return 46;
	}
	if (Global_44085[bParam09] == Global_46722[1])
	{
		if (bVar0 > 3333 && &bParam1 == 263)
		{
			return 263;
		}
		if (bVar0 > 6666 && &bParam1 == 282)
		{
			return 282;
		}
		if (&bParam1 != 306)
		{
			return 306;
		}
		return 263;
	}
	if (Global_44085[bParam09] == Global_46722[2])
	{
		if (bVar0 > 2000 && &bParam1 == 31)
		{
			return 31;
		}
		if (bVar0 > 4000 && &bParam1 == 120)
		{
			return 120;
		}
		if (bVar0 > 6000 && &bParam1 == 121)
		{
			return 121;
		}
		if (bVar0 > 8000 && &bParam1 == 122)
		{
			return 122;
		}
		if (&bParam1 != 150)
		{
			return 150;
		}
		return 31;
	}
	return 230;
}

var Function_653(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x29445 / 169029
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
			if (Function_147(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_654(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_644(bVar16, &iVar1))
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

var Function_654(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x29698 / 169624
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

struct<32> Function_655(char* cParam0, var uParam1) //Position: 0x296B4 / 169652
{
	struct<8> Var0;
	var uVar8;
	
	if (!IS_STRING_VALID(&cParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656(&cParam0) };
	uVar8 = FIND_OBJECT_IN_LAYOUT(&uParam1, &Var0);
	while (IS_OBJECT_VALID(&uVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656(&cParam0) };
		uVar8 = FIND_OBJECT_IN_LAYOUT(&uParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_656(char* cParam0) //Position: 0x2970B / 169739
{
	char* cVar0[32];
	char* cVar8[16];
	bool bVar12;
	
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(&cParam0);
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &cVar8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151(I2STR(bVar12), &cVar8, ""), 4);
		while (STRING_LENGTH(&cVar8) <= 6)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &cVar8, ""), 4);
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

bool Function_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x297B6 / 169910
{
	return Function_658(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_658(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x297D3 / 169939
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_140(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_140(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_140(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_140(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_140(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_140(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_140(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_140(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_140(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_140(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_140(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_140(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_140(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_140(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_659(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_659(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x29A36 / 170550
{
	int iVar0;
	
	iVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_660(&(Global_46972[0]), &iVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_660(&(Global_46972[1]), &iVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_660(&(Global_46972[2]), &iVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_660(&(Global_46972[3]), &iVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_660(&(Global_46972[4]), &iVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_660(&(Global_46972[5]), &iVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_660(&(Global_46972[6]), &iVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_660(&(Global_46972[7]), &iVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_660(&(Global_46972[8]), &iVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_660(&(Global_46972[9]), &iVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_660(&(Global_46972[10]), &iVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_660(&(Global_46972[11]), &iVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_660(&(Global_46972[12]), &iVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_660(&(Global_46972[13]), &iVar0);
	}
	return Function_140(StackVal, &iVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_660(var uParam0, int iParam1) //Position: 0x29BA5 / 170917
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&iParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&iParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_661(struct<2> Param0) //Position: 0x29C69 / 171113
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_SPHERE(&cVar1, Param0, 180.0f);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	strcpy(&cVar2, "v_coach_stop", 24);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&cVar1);
		return &iVar0;
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

bool Function_662(struct<2> Param0, struct<5> Param2) //Position: 0x29CE6 / 171238
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
		if (!Function_48(StackVal, Param2))
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
			if (!Function_48(StackVal, Param2))
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

vector3 Function_663(struct<189> Param0) //Position: 0x29E29 / 171561
{
	bool bVar0;
	bool bVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_571(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &bVar0);
		Function_570(&bVar0);
		Function_570(&vParam1);
		(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Function_570(&bVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &bVar3);
		Function_570(&bVar3);
		Function_570(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&vParam1), Function_570(&bVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

void Function_664(struct<137> Param0) //Position: 0x29ED3 / 171731
{
	if (!Function_57())
	{
		Function_669(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_668(&Param0 + 8, Param0.f_112);
		}
		else if (Global_6646 || iParam1)
		{
			if (StackVal == 2)
			{
				Param0.f_112 = 4;
			}
			else
			{
				Param0.f_112 = 3;
			}
			Function_668(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_720(131072)) || Function_604(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_668(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_666(StackVal, Param0.f_120);
			Function_668(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_665(StackVal, Param0.f_120);
			Function_668(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_669(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_668(&Param0 + 8, Param0.f_112);
		}
		else if (Function_720(131072) || Function_604(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_668(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_666(StackVal, Param0.f_120);
			Function_668(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_665(StackVal, Param0.f_120);
			Function_668(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_667(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_665(int iParam0, int iParam1) //Position: 0x2A10F / 172303
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_57())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_666(int iParam0, int iParam1) //Position: 0x2A1FB / 172539
{
	if (!Function_57())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

void Function_667(var uParam0, int iParam1) //Position: 0x2A2C6 / 172742
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_668(var uParam0, bool bParam1) //Position: 0x2A2F0 / 172784
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_669(int iParam0) //Position: 0x2A31A / 172826
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_670(struct<157> Param0) //Position: 0x2A342 / 172866
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (Function_625(&Param0 + 36))
	{
		return 0;
	}
	if (Param0.f_144 || bParam1)
	{
		if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
		{
			return 0;
		}
		switch (StackVal)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_MOUNT(Function_536(&Param0 + 8))))
				{
					GET_ACTOR_VELOCITY(GET_MOUNT(Function_536(&Param0 + 8)), &Var0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_536(&Param0 + 8), &Var0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					GET_ACTOR_VELOCITY(&Param0 + 24, &Var0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_536(&Param0 + 8), &Var0);
				}
				break;
			
			default:
				LOG_ERROR("Inheritance for traffic type not defined yet");
				break;
		}
		bVar2 = VMAG(Var0);
		if (bVar2 != 0.0f)
		{
			Var0 = Vector(0.0f, 0.0f, 1.0f);
			ROTATE_VECTOR_XZ(&Var0, GET_HEADING(Function_536(&Param0 + 8)), 0);
		}
		else if (bVar2 > 0,05f)
		{
			VNORMALIZE(&Var0);
		}
		VSCALE(&Var0, -1.0f);
	}
	else if (!Function_48(StackVal, *(&Param0 + 176)))
	{
		Function_570(&Param0 + 36);
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&Param0 + 36), *(&Param0 + 176), StackVal);
	}
	else if (Function_720(16) || Global_6629)
	{
		Function_570(&Param0 + 36);
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&Param0 + 36), Global_54078, StackVal);
	}
	else
	{
		Function_570(&Param0 + 36);
		if (Function_679(StackVal, &Global_54076, Function_570(&Param0 + 36)))
		{
			bVar3 = RAND_INT_RANGE(false, 10000);
			if (bVar3 <= 5000)
			{
				Function_570(&Param0 + 36);
				Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_570(&Param0 + 36), StackVal);
			}
			else
			{
				Function_570(&Param0 + 36);
				Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&Param0 + 36), Global_54078, StackVal);
			}
		}
		else
		{
			Function_570(&Param0 + 36);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_570(&Param0 + 36), Global_54078, StackVal);
		}
	}
	if (Param0.f_32 <= 3)
	{
		Param0.f_152 = 1;
	}
	else
	{
		Param0.f_152 = 0;
	}
	Param0.f_156 = 0;
	if (!Param0.f_144)
	{
		Function_663(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0);
		vVar4 = { StackVal, StackVal, Function_663(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0) };
		if (Function_625(&vVar4))
		{
			Param0 = 16;
			return 0;
		}
	}
	if ((!DECOR_CHECK_EXIST(&Param0 + 8, "coachService") && !Param0.f_144) && !&bParam1)
	{
		Function_671(&Param0);
	}
	if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
	{
		return 0;
	}
	if (!Param0.f_144)
	{
		*(&Param0 + 36) = { StackVal, StackVal, vVar4 };
	}
	Function_617(&Param0, 1, Param0.f_32 > 4);
	return 1;
}

void Function_671(struct<241> Param0) //Position: 0x2A5C5 / 173509
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	
	if (!Function_586(&Param0))
	{
		return;
	}
	Function_570(&Param0 + 36);
	Var2 = Function_570(&Param0 + 36);
	Var0 = Var2;
	if (VDIST(Var0, Global_54078) > 120.0f)
	{
	}
	Function_621(StackVal, Var0, &Param0 + 36);
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	switch (StackVal)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
			{
				Function_674(StackVal, StackVal, &Global_43578, &Param0 + 8, Param0.f_32, Var0, *(&Param0 + 220), &Param0 + 72, GET_ACTORENUM_SPECIES(Function_657(64, 0, 0, 4294967295, 0)));
				Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
			}
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 0);
			Function_642(StackVal, &Param0 + 8, &Param0 + 232);
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
			{
				if (Function_643(StackVal, StackVal, StackVal, &Global_43578, Function_673(&Param0 + 8), 64, 512, Var0, *(&Param0 + 220), &Param0 + 24, 0))
				{
					Param0.f_140 = 1;
				}
			}
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 1);
			Function_642(StackVal, &Param0 + 8, &Param0 + 232);
			break;
		
		default:
			break;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_641(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
	if (IS_OBJECTSET_VALID(&Param0 + 232))
	{
		Global_43580.f_64 = (Global_43580.f_64 + GET_OBJECTSET_SIZE(&Param0 + 232));
	}
	Param0.f_240 = GET_CURRENT_GAME_TIME();
	if (!IS_ACTOR_VALID(Function_536(&Param0 + 8)))
	{
	}
	if (!Function_57())
	{
		bVar4 = false;
		while (bVar4 <= SQUAD_GET_SIZE(&Param0 + 8))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar4), 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar4), 1);
			REGISTER_TRAFFIC_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar4), 1);
			SET_ACTOR_IS_AMBIENT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar4), 1);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar4), 1);
			bVar4++;
		}
	}
	else
	{
		bVar5 = false;
		while (bVar5 <= SQUAD_GET_SIZE(&Param0 + 8))
		{
			MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), &Global_54076, 5);
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 1);
			Function_672(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 100.0f, -1.0f, -1.0f);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 1);
			REGISTER_TRAFFIC_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 1);
			SET_ACTOR_IS_AMBIENT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 1);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), false);
			bVar5++;
		}
	}
	return;
}

void Function_672(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x2A85D / 174173
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

int Function_673(bool bParam0) //Position: 0x2A8AE / 174254
{
	switch (bParam0)
	{
		case 0x00000002:
			return 2;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_CONFIGURE_NODE");
			break;
	}
	return 1;
}

void Function_674(var uParam0, var uParam1, int iParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8) //Position: 0x2A914 / 174356
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	bool bVar8[16];
	int iVar25;
	struct<8> Var26;
	struct<8> Var34;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	if (Function_48(StackVal, Param3))
	{
		return;
	}
	if (!Global_47006[23])
	{
		return;
	}
	if (Function_48(StackVal, Param3))
	{
		return;
	}
	if (iParam2 >= 16)
	{
		iParam2 = 16;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		iVar25 = Function_678(StackVal, 64, Param3, 4, uParam8, 0);
		if (Function_644(iVar25, &bVar8))
		{
			iVar25 = 976;
		}
		bVar8[iVar0] = iVar25;
		iVar0++;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		if (iVar0 == 0)
		{
			Var5 = Param3;
		}
		else
		{
			Function_676(&uParam7, iVar0);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&uVar2), Function_676(&uParam7, iVar0), &Var5);
		}
		if (!Function_662(&Var5, 20.0f, &Var3, 10))
		{
			Var3 = Var5;
		}
		bVar7 = Function_645();
		STREAMING_REQUEST_ACTOR(bVar7, 1, false);
		if (!bVar7 != 4294967295)
		{
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("ntrafrider", &uParam0) };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_655("ntrafhorse", &uParam0) };
			uVar1 = Function_675(StackVal, StackVal, &uParam0, &Var26, bVar7, &Var34, bVar8[iVar0], Var3, Param5);
			STREAMING_EVICT_ACTOR(bVar7, 4294967295);
			SQUAD_JOIN(&uVar1, &uParam1);
			if (iVar0 == 0)
			{
				uVar2 = &uVar1;
			}
		}
		bVar8[iVar0] = bVar7;
		iVar0++;
	}
}

var Function_675(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x2AA8B / 174731
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
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

struct<8> Function_676(vector3 vParam0) //Position: 0x2ABC3 / 175043
{
	struct<2> Var0;
	
	if (!Function_677(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_677(bool bParam0) //Position: 0x2AD10 / 175376
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&bParam0) != 30)
	{
		return 0;
	}
	return 1;
}

var Function_678(int iParam0, struct<2> Param1, int iParam3, int iParam4, bool bParam5) //Position: 0x2AD34 / 175412
{
	return Function_658(StackVal, iParam0, 0, &iParam3, &iParam4, &bParam5, 1, Param1);
}

bool Function_679(int iParam0, struct<2> Param1) //Position: 0x2AD50 / 175440
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	uVar0 = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&uVar0, Function_148(&iParam0), 0);
	GET_POSITION(&iParam0, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1, StackVal);
	if (VDOT(&uVar0, &uVar4) < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_680(struct<145> Param0) //Position: 0x2AD8C / 175500
{
	if (!SQUAD_IS_VALID(&Param0 + 8) || !IS_ACTOR_VALID(Function_536(&Param0 + 8)))
	{
		return 0;
	}
	Function_569(&Param0);
	Function_681(&Param0, 4294967294);
	Global_43580.f_8 = StackVal + 1;
	if (!Function_57())
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_627(&Param0);
	SQUAD_GOALS_CLEAR(&Param0 + 8);
	Function_317(&Param0 + 8);
	(&Param0 + 16) = "";
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return 0;
	}
	if (Function_625(&Param0 + 36))
	{
		return 0;
	}
	Param0.f_144 = 1;
	return 1;
}

void Function_681(struct<245> Param0) //Position: 0x2AE47 / 175687
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	switch (StackVal)
	{
		case 0x00000002:
			Param0.f_32 = 1;
			break;
		
		case 0x00000001:
			iVar1 = (GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15));
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (Global_53524.f_44)
			{
				Param0.f_32 = 1;
			}
			else if (Global_43580.f_60 < 4294967295 && !Function_720(128))
			{
				Param0.f_32 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_43580.f_60))));
			}
			else if (iVar1 <= 6)
			{
				Param0.f_32 = 1;
			}
			else if ((iVar1 > 8 || Function_720(128)) || &iParam1 != 5)
			{
				if (bVar0 <= 6000)
				{
					Param0.f_32 = 1;
				}
				else
				{
					Param0.f_32 = 2;
				}
			}
			else if (bVar0 <= 5000)
			{
				Param0.f_32 = 1;
			}
			else if (bVar0 <= 9000)
			{
				Param0.f_32 = 2;
			}
			else if (((bVar0 > 9400 || 0) || iVar1 > 10) || Global_6629)
			{
				Param0.f_32 = 3;
			}
			else if (bVar0 > 9700 || iVar1 > 12)
			{
				Param0.f_32 = 4;
			}
			else
			{
				Param0.f_32 = 5;
			}
			if (Param0.f_32 > 3)
			{
				Function_704(128);
			}
			else
			{
				Function_716(128);
			}
			if (Global_43789 == Global_46816[1])
			{
				Function_686(1.0f);
				*(&Param0 + 72) = { StackVal, Function_686(1.0f) };
			}
			else
			{
				Function_684(1.0f);
				*(&Param0 + 72) = { StackVal, Function_684(1.0f) };
			}
			break;
		
		case 0x00000003:
			Param0.f_32 = 1;
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_CONFIGURE_NODE");
			break;
	}
	if (Param0.f_244 == 0)
	{
		Param0.f_244 = Function_683();
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		Function_682();
		Var2 = { StackVal, Function_682() };
		*(&Param0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var2));
	}
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 36, 1);
	}
	if (StackVal || (StackVal || StackVal != 1 != 2) != 4)
	{
		Param0.f_136 = 1;
	}
	else
	{
		Param0.f_136 = 0;
	}
	if (StackVal == 0)
	{
		Param0.f_112 = Function_620(StackVal, 0, Param0.f_120);
	}
	else
	{
		Param0.f_112 = Function_665(StackVal, Param0.f_120);
	}
	Param0 = 1;
	return;
}

struct<8> Function_682() //Position: 0x2B099 / 176281
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

var Function_683() //Position: 0x2B0F0 / 176368
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar1 = 0;
	bVar2 = 0.0f;
	iVar3 = STRING_TO_HASH(F2STR(bVar2, 7, 7));
	return iVar0 ^ iVar1 ^ iVar3;
}

struct<8> Function_684(int iParam0) //Position: 0x2B110 / 176400
{
	Function_685(iParam0, 10);
	return StackVal, Function_685(iParam0, 10);
}

struct<8> Function_685(var uParam0, int iParam1) //Position: 0x2B11D / 176413
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

struct<8> Function_686(int iParam0) //Position: 0x2B138 / 176440
{
	Function_685(iParam0, 8);
	return StackVal, Function_685(iParam0, 8);
}

void Function_687(int iParam0, bool bParam1) //Position: 0x2B145 / 176453
{
	if (!SQUAD_IS_VALID(&iParam0 + 8) && !(((iParam0 != 0 || iParam0 != 18) || iParam0 != 16) || iParam0 != 17))
	{
		Function_591(&iParam0, 0);
		if (bParam1)
		{
			Global_43580.f_8 = (StackVal - 1);
		}
		iParam0 = 0;
	}
	return;
}

var Function_688(struct<31>[] Param0, struct<2> Param1, int iParam3) //Position: 0x2B195 / 176533
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	
	iVar0 = Function_700(&Param0);
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	iVar1 = Function_573(&iParam3, Param0[iVar031].f_216);
	fVar2 = Function_699();
	fVar3 = Function_698();
	if (HUD_IS_FADED() || Global_43580 & 16384 == 0)
	{
		if (HUD_IS_FADED())
		{
			fVar2 = 20.0f;
			fVar3 = 50.0f;
		}
		else
		{
			fVar2 = 35.0f;
			fVar3 = 75.0f;
		}
	}
	uVar4 = START_CURVE_QUERY(&Global_43578, Param1, iVar1, fVar2, fVar3, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar4) < 0)
	{
		UNK_0xDF93BD7C(&uVar4);
		return 4294967295;
	}
	if (!Function_694(&Param0, &uVar4, iVar0))
	{
		UNK_0xDF93BD7C(&uVar4);
		return 4294967295;
	}
	if (&iParam3 == 0)
	{
		Param0[iVar031].f_4 = Function_691(&Param0, GET_CURVE_TYPE(&Param0[iVar031] + 192));
	}
	else
	{
		Param0[iVar031].f_4 = &iParam3;
	}
	if (!Function_690(StackVal))
	{
		Param0[iVar031].f_4 = 1;
		if (!Function_690(StackVal))
		{
			Function_591(&(Param0[iVar031]), 0);
			UNK_0xDF93BD7C(&uVar4);
			return 4294967295;
		}
	}
	Function_681(&(Param0[iVar031]), GET_CURVE_TYPE(&Param0[iVar031] + 192));
	Global_43580.f_8 = StackVal + 1;
	if (!Function_57())
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_627(&(Param0[iVar031]));
	Function_689(&Global_43580, 65536);
	UNK_0xDF93BD7C(&uVar4);
	return iVar0;
}

void Function_689(var uParam0, int iParam1) //Position: 0x2B32E / 176942
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_690(int iParam0) //Position: 0x2B356 / 176982
{
	switch (iParam0)
	{
		case 0x00000001:
			if (!Function_561(&Global_43580, 2))
			{
				return 0;
			}
			if (!Global_47006[23])
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_561(&Global_43580, 4))
			{
				return 0;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_43580.f_88, 4294967295))
			{
				return 0;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_43580.f_92, 4294967295))
			{
				return 0;
			}
			if (!Function_147(&(Global_46972[9]), 0, 4294967295, 0))
			{
				return 0;
			}
			if (!Function_147(&(Global_46972[1]), 2, 4294967295, 0))
			{
				return 0;
			}
			if (!Global_47006[23])
			{
				return 0;
			}
			if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) <= 10)
			{
				return 0;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TRAFFIC_CAN_LAUNCH_NODE_OF_TYPE");
			break;
	}
	return 1;
}

int Function_691(int iParam0, int iParam1) //Position: 0x2B441 / 177217
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 1000);
	switch (iParam1)
	{
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000004:
			if (IntToFloat(bVar0) > ((Global_43580.f_48 + Global_43580.f_52) * 1000.0f) && Function_692(&iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
		
		case 0x0000000B:
			if (IntToFloat(bVar0) > ((Global_43580.f_48 + Global_43580.f_52) * 1000.0f) && Function_692(&iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
	}
	return 1;
}

int Function_692(struct<31>[] Param0, int iParam1) //Position: 0x2B4C3 / 177347
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_43580.f_72 >= 20)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0x00000003:
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (Function_561(&Global_43580, 64))
			{
				return 1;
			}
			if (Global_43787 == 2)
			{
				if (!STREAMING_IS_ACTOR_LOADED(1178, 4294967295))
				{
					return 0;
				}
			}
			if (Global_43787 == 1)
			{
				if (!STREAMING_IS_ACTOR_LOADED(1179, 4294967295))
				{
					return 0;
				}
			}
			if (!STREAMING_IS_ACTOR_LOADED(1177, 4294967295))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= Param0)
			{
				if (Function_586(&(Param0[iVar031])))
				{
					if (StackVal == 2)
					{
						return 0;
					}
				}
				iVar0++;
			}
			if (Global_43580.f_68 >= 1)
			{
				return 0;
			}
			if (Global_53524.f_44)
			{
				iVar1 = Function_693(&iVar2);
				if (iVar1 > 4)
				{
					return 0;
				}
				if (iVar2 >= 1)
				{
					return 0;
				}
				if (IS_ACTOR_RIDING_VEHICLE(Function_24()))
				{
					return 0;
				}
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TRAFFIC_SHOULD_LAUNCH_NODE_OF_TYPE");
			break;
	}
	return 1;
}

var Function_693(int iParam0) //Position: 0x2B5E8 / 177640
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	iParam0 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar1 = (iVar1 + Global_120101[bVar088].f_20);
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
			{
				iParam0 = (iParam0 + Global_120101[bVar088].f_20);
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_694(struct<31>[] Param0, var uParam1, int iParam2) //Position: 0x2B640 / 177728
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	struct<5> Var7;
	var uVar13;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	struct<2> Var18;
	float fVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	bool bVar24;
	
	if (!IS_CURVE_QUERY_VALID(&uParam1))
	{
		return 0;
	}
	while (iVar1 > 10 && !bVar6)
	{
		bVar0 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(&uParam1) - 1));
		GET_POINT_FROM_CURVE_QUERY(&uParam1, bVar0, &vVar3);
		iVar1++;
		bVar6 = true;
		Function_570(&vVar3);
		Var7 = Function_570(&vVar3);
		bVar15 = VDIST(Var7, Global_54078);
		if (!Function_720(16384))
		{
			if (bVar15 > Function_699())
			{
				bVar6 = false;
			}
		}
		if (bVar6 && 0)
		{
			bVar17 = false;
			Var18 = Vector(0.0f, 0.0f, 0.0f);
			while (bVar6 && bVar17 > 16)
			{
				if (GET_SLOT_POSITION(bVar17, &Var18) && GET_LOCAL_SLOT() == bVar17)
				{
					bVar16 = VDIST(Var7, Var18);
					if (bVar16 > 120.0f || bVar16 > bVar15)
					{
						bVar6 = false;
					}
				}
				bVar17++;
			}
			if (bVar6)
			{
				if (Function_696(StackVal, Var7))
				{
					bVar6 = false;
				}
			}
		}
		if ((Function_720(32) && !Function_720(16384)) && bVar6)
		{
			uVar13 = Vector(0.0f, 0.0f, -1.0f);
			ROTATE_VECTOR_XZ(&uVar13, GET_HEADING(&Global_54076), 0);
			Function_570(&vVar3);
			uVar11 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_570(&vVar3), StackVal);
			if (VDOT(&uVar13, &uVar11) >= 0.0f)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			fVar20 = 15.0f;
			if ((StackVal || StackVal != 1 != 2) && Global_6629)
			{
				fVar20 = 4.0f;
			}
			if (IS_ANY_ACTOR_IN_SPHERE(&Var7, fVar20))
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			if (!STREAMING_ARE_BOUNDS_LOADED(Var7, 10.0f))
			{
				bVar6 = false;
			}
		}
		if (!HUD_IS_FADED() && bVar6)
		{
			if (VDIST(Var7, Global_54078) > 80.0f)
			{
				if (WOULD_ACTOR_BE_VISIBLE(976, &Var7, 3212836864))
				{
					bVar6 = false;
				}
			}
		}
		if (bVar6)
		{
			bVar2 = false;
			while (bVar2 <= Param0)
			{
				if (!bVar2 != iParam2)
				{
					if (Function_586(&(Param0[bVar231])))
					{
						if (SQUAD_IS_VALID(&Param0[bVar231] + 8))
						{
							if (SQUAD_GET_SIZE(&Param0[bVar231] + 8) >= 0)
							{
								Function_570(&vVar3);
								uVar21 = Function_610(StackVal, Function_570(&vVar3), &Param0[bVar231] + 8);
								if (IS_ACTOR_VALID(&uVar21))
								{
									GET_POSITION(&uVar21, &Var7);
								}
								else
								{
									Function_570(&Param0[bVar231] + 36);
									Var7 = Function_570(&Param0[bVar231] + 36);
								}
								Function_570(&vVar3);
								if (VDIST(Var7, Function_570(&vVar3)) > 20.0f)
								{
									bVar6 = false;
								}
							}
						}
					}
				}
				bVar2++;
			}
			if (Function_586(&Global_43660))
			{
				if (SQUAD_IS_VALID(&Global_43660 + 8))
				{
					if (SQUAD_GET_SIZE(&Global_43660 + 8) >= 0)
					{
						Function_570(&vVar3);
						uVar22 = Function_610(StackVal, Function_570(&vVar3), &Global_43660 + 8);
						if (IS_ACTOR_VALID(&uVar22))
						{
							GET_POSITION(&uVar22, &Var7);
						}
						else
						{
							Function_570(&Global_43660 + 36);
							Var7 = Function_570(&Global_43660 + 36);
						}
						Function_570(&vVar3);
						if (VDIST(Var7, Function_570(&vVar3)) > 20.0f)
						{
							bVar6 = false;
						}
					}
				}
			}
		}
		if (bVar6)
		{
			Function_570(&vVar3);
			Var7 = Function_570(&vVar3);
			Var7.f_4 = (StackVal + 1.0f);
			uVar23 = GET_MATERIAL_AT_VECTOR(&Var7);
			if (uVar23 & 1 == 0)
			{
				bVar6 = false;
				iVar1 += 5;
			}
			Var7.f_4 = (StackVal - 1.0f);
		}
		if (Function_695(&vVar3))
		{
			bVar6 = false;
		}
	}
	if (iVar1 >= 10)
	{
		return 0;
	}
	if (!bVar6)
	{
		return 0;
	}
	if (Function_625(&vVar3))
	{
		return 0;
	}
	if (Global_47267[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uParam1, bVar2, &bVar24);
			Function_570(&bVar24);
			uVar9 = Function_570(&bVar24);
			bVar2++;
		}
		Function_570(&vVar3);
		uVar9 = Function_570(&vVar3);
	}
	*(&Param0[iParam231] + 192) = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uParam1, bVar0);
	Param0[iParam231].f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0[iParam231] + 192, 0.0f, 1.0f, 10);
	*(&Param0[iParam231] + 36) = { StackVal, StackVal, vVar3 };
	Function_570(&Param0[iParam231] + 36);
	Var7 = Function_570(&Param0[iParam231] + 36);
	return 1;
}

bool Function_695(struct<13> Param0) //Position: 0x2B9CE / 178638
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

bool Function_696(struct<2> Param0) //Position: 0x2B9F1 / 178673
{
	var uVar0[8];
	bool bVar9;
	int iVar10;
	
	Function_697(&uVar0);
	bVar9 = Function_163(StackVal, Param0, 1, 1, 0);
	if (Function_72(bVar9))
	{
		if (StackVal == 7)
		{
			return 1;
		}
	}
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		if (IS_VOLUME_VALID(&Global_44085[uVar0[iVar10]9] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[uVar0[iVar10]9] + 8))
			{
				return 1;
			}
		}
		iVar10++;
	}
	return 0;
}

void Function_697(var[] uParam0) //Position: 0x2BA67 / 178791
{
	uParam0[0] = Global_46760[2];
	uParam0[1] = Global_46796[0];
	uParam0[2] = Global_46796[3];
	uParam0[3] = Global_46796[2];
	uParam0[4] = Global_46838[1];
	uParam0[5] = Global_46816[2];
	uParam0[6] = Global_46850[2];
	uParam0[7] = Global_46850[1];
	return;
}

var Function_698() //Position: 0x2BACD / 178893
{
	if (Global_6629 && !Global_53524.f_44)
	{
		if (StackVal == 1)
		{
			return 60.0f;
		}
		if (StackVal == 2)
		{
			return 80.0f;
		}
		if (StackVal == 4)
		{
			return 120.0f;
		}
	}
	return 150.0f;
}

float Function_699() //Position: 0x2BB18 / 178968
{
	if (Global_6629)
	{
		if (StackVal == 1)
		{
			return 25.0f;
		}
		if (StackVal == 2)
		{
			return 50.0f;
		}
		if (StackVal == 4)
		{
			return 80.0f;
		}
	}
	return 120.0f;
}

int Function_700(struct<31>[] Param0) //Position: 0x2BB5C / 179036
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Param0[iVar031] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_701(int iParam0, bool bParam1, int iParam2) //Position: 0x2BB8B / 179083
{
	if (!Function_720(32768))
	{
		return 0;
	}
	if (StackVal > Function_702())
	{
		return 0;
	}
	if (Global_6634 && iParam2)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return 0;
	}
	if (Global_47148 >= 0)
	{
		return 0;
	}
	if (!Function_147(&(Global_46972[6]), 4, 23, 1))
	{
		return 0;
	}
	if (!Function_720(524288))
	{
		return 0;
	}
	if (Function_700(&iParam0) == 4294967295)
	{
		return 0;
	}
	if (StackVal && StackVal != 1 != 2)
	{
		if (bParam1 && GET_CURRENT_GAME_TIME() >= Global_43580.f_16)
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED() && iParam2)
		{
			return 0;
		}
	}
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) <= 5)
	{
		return 0;
	}
	return 1;
}

int Function_702() //Position: 0x2BC4C / 179276
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_43580.f_12;
	if (Global_99472 == 16)
	{
		if (iVar0 >= 1)
		{
			iVar0 = 1;
		}
	}
	else if (Global_99472 == 32)
	{
		iVar0 = 0;
	}
	if (IS_PS3())
	{
		if (Global_43789 != Global_46760[0] && iVar0 < 1)
		{
			iVar0 = 1;
		}
		else if (Global_43789 != Global_46816[1] && iVar0 < 2)
		{
			iVar0 = 2;
		}
	}
	iVar1 = MARKETING_GET_AMBIENT_DENSITY_LEVEL();
	iVar2 = 0;
	switch (iVar1)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			if (iVar0 >= 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			iVar2 = 2;
			break;
		
		case 0x00000004:
			iVar2 = 4;
			break;
	}
	return ((iVar0 + Global_43580.f_56) + iVar2);
}

bool Function_703(struct<2> Param0) //Position: 0x2BD06 / 179462
{
	return ARE_CURVES_IN_RANGE(48, Param0, 150.0f);
}

void Function_704(int iParam0) //Position: 0x2BD1A / 179482
{
	Function_651(&Global_43580, iParam0);
	return;
}

bool Function_705(struct<2>[] Param0) //Position: 0x2BD28 / 179496
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_708();
	iVar1 = 0;
	if (!Function_565(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_648(&(Param0[iVar02]), 8);
		}
		else if (Function_707())
		{
			iVar1 = 1;
			Function_648(&(Param0[iVar02]), 8);
		}
		Function_648(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_565(&(Param0[iVar02]), 4))
		{
			if (!Function_565(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_565(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_565(&(Param0[02]), 8) || iVar1));
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
				Function_648(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_565(&(Param0[iVar02]), 4))
		{
			if (!Function_565(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_648(&(Param0[iVar02]), 2);
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
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_648(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_648(&(Param0[iVar02]), 2);
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
	Function_706();
	return 1;
}

void Function_706() //Position: 0x2C0EB / 180459
{
	if (!Function_4(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_707() //Position: 0x2C12B / 180523
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

void Function_708() //Position: 0x2C159 / 180569
{
	if (!Function_4(128))
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

void Function_709() //Position: 0x2C19B / 180635
{
	int iVar0;
	
	iVar0 = GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0]));
	Global_43580.f_312 = RAND_INT_RANGE(false, (iVar0 - 1));
	Global_43580.f_308 = 0;
	Global_43580.f_308 = 0;
	while (Global_43580.f_308 <= Global_43580.f_108)
	{
		Function_646(HUD_IS_FADED());
		Global_43580.f_308++;
	}
	Global_43580.f_308 = 0;
	Function_705(&Global_43580 + 108);
	Function_704(262144);
	return;
}

void Function_710() //Position: 0x2C205 / 180741
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	float fVar4;
	
	Function_704(2097152);
	return;
	Function_704(2097152);
	return;
	bVar0 = false;
	bVar1 = GET_LOCAL_SLOT();
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	while (bVar0 <= 16)
	{
		if (bVar0 != GET_LOCAL_SLOT())
		{
			if (GET_SLOT_POSITION(bVar0, &Var2))
			{
				fVar4 = VDIST2(Global_54078, Var2);
				if (fVar4 > 25.0f && bVar0 > bVar1)
				{
					Function_716(2097152);
					return;
				}
			}
		}
		bVar0++;
	}
	Function_704(2097152);
	return;
}

bool Function_711(struct<31>[] Param0, bool bParam1) //Position: 0x2C27A / 180858
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	iVar2 = 0;
	if (IS_ACTOR_HORSE(&bParam1))
	{
		if (IS_ACTOR_DRAFTED(&bParam1))
		{
			iVar0 = 2;
			uVar3 = GET_ACTOR_DRAFTED_TO(&bParam1);
			if (Function_579(&Param0, &uVar3, &iVar1))
			{
				Function_715(&(Param0[iVar131]), &bParam1);
			}
			else if (Function_711(&Param0, &uVar3))
			{
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			return 0;
		}
		if (IS_ACTOR_MOUNTED(&bParam1))
		{
			iVar0 = 1;
			iVar4 = GET_RIDER(&bParam1);
			if (IS_ACTOR_PLAYER(&iVar4))
			{
				return 0;
			}
			if (Function_579(&Param0, &iVar4, &iVar1))
			{
				Function_715(&(Param0[iVar131]), &bParam1);
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_713(&Param0, &iVar4, 1, iVar2, &iVar1))
			{
				Function_715(&(Param0[iVar131]), &iVar4);
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_712(&Param0, &iVar4, 1))
			{
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (IS_ACTOR_VEHICLE(&bParam1))
	{
		if (!Function_637(&bParam1, 1, 1, 4294967295))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFT_VEHICLE(&bParam1))
		{
			iVar0 = 2;
		}
		if (Function_712(&Param0, &bParam1, iVar0))
		{
			GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
			REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
			return 1;
		}
		return 0;
	}
	if (IS_ACTOR_HUMAN(&bParam1))
	{
		if (IS_ACTOR_RIDING_VEHICLE(&bParam1))
		{
			iVar5 = GET_VEHICLE(&bParam1);
			if (Function_579(&Param0, &iVar5, &iVar1))
			{
				Function_715(&(Param0[iVar131]), &bParam1);
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iVar5, false) == &bParam1)
				{
					Param0[iVar131] = 3;
					(&Param0[iVar131] + 16) = "";
				}
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_711(&Param0, &iVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			return 0;
		}
		if (IS_ACTOR_RIDING(&bParam1))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 3;
		}
		if (Function_713(&Param0, &bParam1, iVar0, iVar2, &iVar1))
		{
			Function_715(&(Param0[iVar131]), &bParam1);
			GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
			REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
			return 1;
		}
		if (Function_712(&Param0, &bParam1, iVar0))
		{
			GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
			REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_712(struct<31>[] Param0, int iParam1, int iParam2) //Position: 0x2C4FC / 181500
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = Function_700(&Param0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	Param0[iVar031].f_4 = iParam2;
	Function_681(&(Param0[iVar031]), 4294967294);
	Param0[iVar031] = 3;
	iVar1 = 0;
	bVar2 = false;
	switch (iParam2)
	{
		case 0x00000002:
			if (!IS_ACTOR_VEHICLE(&iParam1))
			{
				Function_591(&(Param0[iVar031]), 0);
				return 0;
			}
			iVar1 = (GET_NUM_OCCUPIED_SEATS(&iParam1) + GET_NUM_AVAILABLE_SEATS(&iParam1));
			bVar2 = false;
			bVar2 = false;
			while (bVar2 <= iVar1)
			{
				if (IS_SEAT_OCCUPIED(&iParam1, bVar2))
				{
					uVar3 = GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bVar2);
					if (!IS_ACTOR_PLAYER(&uVar3))
					{
						SQUAD_JOIN(&uVar3, &Param0[iVar031] + 8);
					}
				}
				bVar2++;
			}
			bVar5 = GET_ACTOR_ENUM(&iParam1);
			if ((bVar5 != 1177 || bVar5 != 1178) || bVar5 != 1179)
			{
				Param0[iVar031].f_140 = 1;
			}
			*(&Param0[iVar031] + 24) = &iParam1;
			*(&Param0[iVar031] + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 0);
			Function_642(StackVal, &Param0[iVar031] + 8, &Param0[iVar031] + 232);
			uVar4 = GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, false);
			break;
		
		case 0x00000001:
		case 0x00000003:
			if (!IS_ACTOR_HUMAN(&iParam1))
			{
				Function_591(&(Param0[iVar031]), 0);
				return 0;
			}
			if (IS_ACTOR_PLAYER(&iParam1))
			{
				if (IS_ACTOR_RIDING(&iParam1))
				{
					RELEASE_ACTOR(GET_MOUNT(&iParam1));
				}
				Function_591(&(Param0[iVar031]), 0);
				return 0;
			}
			SQUAD_JOIN(&iParam1, &Param0[iVar031] + 8);
			if (iParam2 == 1)
			{
				Param0[iVar031].f_32 = 1;
				*(&Param0[iVar031] + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 0);
				Function_642(StackVal, &Param0[iVar031] + 8, &Param0[iVar031] + 232);
			}
			uVar4 = &iParam1;
			break;
		
		default:
			break;
	}
	Function_641(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0[iVar031]);
	if (DECOR_CHECK_EXIST(&uVar4, "overrideCurve"))
	{
		Param0[iVar031].f_216 = DECOR_GET_INT(&uVar4, "overrideCurve");
	}
	if (DECOR_CHECK_EXIST(&uVar4, "overrideSpeed"))
	{
		Param0[iVar031].f_120 = DECOR_GET_INT(&uVar4, "overrideSpeed");
	}
	if (DECOR_CHECK_EXIST(&uVar4, "overridePriority"))
	{
		Param0[iVar031].f_124 = DECOR_GET_INT(&uVar4, "overridePriority");
	}
	else
	{
		Param0[iVar031].f_124 = 2;
	}
	if (DECOR_CHECK_EXIST(&uVar4, "overrideDest"))
	{
		DECOR_GET_VECTOR(&uVar4, "overrideDest", &Param0[iVar031] + 176);
	}
	if (DECOR_CHECK_EXIST(&uVar4, "quickRelease"))
	{
		Param0[iVar031].f_164 = 1;
	}
	return 1;
}

bool Function_713(struct<31>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2C7FB / 182267
{
	int iVar0;
	bool bVar1;
	float fVar2;
	var uVar3;
	struct<2> Var5;
	int iVar7;
	
	bVar1 = 0.0f;
	fVar2 = 0.0f;
	if (iParam3 & 0)
	{
		iVar7 = NET_ACTOR_GET_SCRIPT_INT(&iParam1);
		if (iVar7 != 0)
		{
			iVar0 = 0;
			while (iVar0 <= Param0)
			{
				if (Function_586(&(Param0[iVar031])))
				{
					if (iVar7 == Param0[iVar031].f_244)
					{
						iParam4 = iVar0;
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_586(&(Param0[iVar031])))
		{
			if (StackVal == iParam2)
			{
				if (Function_714(&(Param0[iVar031]), &iParam1))
				{
					switch (StackVal)
					{
						case 0x00000001:
						case 0x00000003:
							bVar1 = GET_HEADING(&iParam1);
							GET_OBJECT_POSITION(&iParam1, &Var5);
							Function_570(&Param0[iVar031] + 36);
							uVar3 = Vector(StackVal, StackVal, StackVal) - Vector(Var5, Function_570(&Param0[iVar031] + 36), StackVal);
							fVar2 = UNK_0x9C40E671(&uVar3);
							if (FABS((bVar1 - fVar2)) > 45.0f)
							{
								iParam4 = iVar0;
								return 1;
							}
							break;
						
						case 0x00000002:
							iParam4 = iVar0;
							return 1;
							break;
						
						default:
							break;
						}
					}
				}
		}
		iVar0++;
	}
	iParam4 = 4294967295;
	return 0;
}

bool Function_714(struct<5> Param0) //Position: 0x2C922 / 182562
{
	struct<2> Var0;
	struct<2> Var2;
	float fVar4;
	
	if (!Function_586(&Param0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return 0;
	}
	if (!SQUAD_COMPUTE_CENTROID(&Param0 + 8, &Var0))
	{
		return 0;
	}
	GET_POSITION(&iParam1, &Var2);
	fVar4 = VDIST2(Var0, Var2);
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000003:
			if (fVar4 >= 100.0f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (fVar4 >= 4.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_715(struct<5> Param0) //Position: 0x2C9A2 / 182690
{
	if (!Function_586(&Param0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	SQUAD_JOIN(&iParam1, &Param0 + 8);
	REGISTER_TRAFFIC_ACTOR(&iParam1, 1);
	if (StackVal || StackVal != 2 != 1)
	{
		if (!IS_OBJECTSET_VALID(&Param0 + 232))
		{
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_43578, 15, 0);
		}
		Function_642(StackVal, &Param0 + 8, &Param0 + 232);
	}
	if (Global_53524.f_44)
	{
		switch (Param0)
		{
			case 0x00000001:
			case 0x00000003:
				break;
			
			case 0x00000006:
			case 0x00000007:
				Param0 = 6;
				break;
			
			case 0x00000009:
			case 0x0000000A:
			case 0x0000000B:
				Param0 = 9;
				break;
			
			case 0x0000000C:
			case 0x0000000D:
				Param0 = 12;
				break;
			
			case 0x0000000E:
			case 0x0000000F:
				Param0 = 15;
				break;
			
			case 0x00000010:
			case 0x00000011:
				Param0 = 16;
				break;
			
			default:
				break;
			}
	}
	return;
}

void Function_716(int iParam0) //Position: 0x2CAAB / 182955
{
	Function_689(&Global_43580, iParam0);
	return;
}

void Function_717(struct<31>[] Param0, int iParam1) //Position: 0x2CAB9 / 182969
{
	int iVar0;
	
	if ((((HUD_IS_FADED() && !Function_720(65536)) && !Global_6653) && !Function_720(16384)) || iParam1)
	{
		if (((Global_6634 && !Global_6653) || !STREAMING_IS_WORLD_LOADED()) || iParam1)
		{
			iVar0 = 0;
			while (iVar0 <= Param0)
			{
				if (Function_586(&(Param0[iVar031])))
				{
					Function_591(&(Param0[iVar031]), 0);
				}
				iVar0++;
			}
			if (Function_586(&Global_43660))
			{
				Function_591(&Global_43660, 0);
			}
			if (!Function_720(65536))
			{
				if (!Global_53524.f_44)
				{
					DESTROY_LAYOUT_OBJECTS(&Global_43578);
				}
				else
				{
					RELEASE_LAYOUT_OBJECTS(&Global_43578);
				}
				Function_718(&Global_43578);
			}
			Global_43580.f_16 = 0.0f;
			Global_43580.f_8 = 0;
			Global_43580.f_64 = 0;
			Function_704(65536);
		}
	}
	if (StackVal && (!HUD_IS_FADED() && Function_720(16384)) <= Function_702())
	{
		Function_716(16384);
	}
	return;
}

int Function_718(int iParam0) //Position: 0x2CB94 / 183188
{
	var uVar0;
	
	Function_719(4, 1);
	uVar0 = &uVar0;
	uLocal_13 = &iParam0;
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "henv_coach_park", 2,802597E-45f, Vector(-868,7439f, 91,56226f, 2402,454f), Vector(0.0f, 125.0f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "uprv_coach_park", 2,802597E-45f, Vector(-205,0147f, 84,28522f, 2066,466f), Vector(0.0f, 107.0f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "armv_coach_park", 2,802597E-45f, Vector(-2190,632f, 16,368f, 2636,006f), Vector(0.0f, 167,735f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "behv_coach_park", 2,802597E-45f, Vector(-107,7367f, 119,3326f, 1391,473f), Vector(178,3251f, 238,6079f, -178,0473f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "thiv_coach_park", 2,802597E-45f, Vector(108,8806f, 73,286f, 2322,866f), Vector(0.0f, 310.0f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "mtpv_coach_park", 2,802597E-45f, Vector(-420,042f, 151,043f, 1605,842f), Vector(0.0f, 192,908f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "escv_coach_park", 2,802597E-45f, Vector(-4277,109f, 18,536f, 4471,96f), Vector(0.0f, 232,328f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "chuv_coach_park", 2,802597E-45f, Vector(-2754,504f, 32,125f, 4299,976f), Vector(0.0f, -19,10072f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "casv_coach_park", 2,802597E-45f, Vector(-813,062f, 13,051f, 3756,265f), Vector(0.0f, 15.0f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "blkv_coach_park", 2,802597E-45f, Vector(683,303f, 78,179f, 1315,703f), Vector(0.0f, 2,09f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "benv_coach_park", 2,802597E-45f, Vector(-3710,906f, 9,665366f, 3483,041f), Vector(0.0f, -4,913626f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "henv_coach_stop", 2,802597E-45f, Vector(-938,686f, 90,353f, 2413,753f), Vector(0.0f, 218,151f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "uprv_coach_stop", 2,802597E-45f, Vector(-189,567f, 83,897f, 2060,425f), Vector(0.0f, 10,886f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "armv_coach_stop", 2,802597E-45f, Vector(-2162,952f, 16,325f, 2641,514f), Vector(0.0f, 84,568f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "thiv_coach_stop", 2,802597E-45f, Vector(123,918f, 73,286f, 2315,224f), Vector(0.0f, 90.0f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "mtpv_coach_stop", 2,802597E-45f, Vector(-428,796f, 152,347f, 1658,224f), Vector(0.0f, 283,866f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "escv_coach_stop", 2,802597E-45f, Vector(-4257,397f, 18,111f, 4434,602f), Vector(0.0f, 262,37f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "casv_coach_stop", 2,802597E-45f, Vector(-763,787f, 13,051f, 3722,439f), Vector(0.0f, 239,337f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "blkv_coach_stop", 2,802597E-45f, Vector(661,257f, 78,312f, 1253,194f), Vector(0.0f, 180,1f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "benv_coach_stop", 2,802597E-45f, Vector(-3689,169f, 8,032f, 3455.0f), Vector(0.0f, 95,061f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "lshv_coach_stop", 2,802597E-45f, Vector(-1684,164f, 9,267697f, 4284,834f), Vector(0.0f, 180,1f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "coov_coach_park", 2,802597E-45f, Vector(-1804,95f, 24,45401f, 2810,315f), Vector(0.0f, 292,5032f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "ratv_coach_park", 2,802597E-45f, Vector(-3697,875f, 41,429f, 2148,041f), Vector(0.0f, 303,153f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "rwfv_coach_park", 2,802597E-45f, Vector(-3268,626f, 17,18167f, 2723,903f), Vector(-1,887851f, 146,577f, -1,620206f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "plnv_coach_park", 2,802597E-45f, Vector(-3123,105f, 44,30289f, 3743,079f), Vector(-51,50969f, 267,0967f, 51,70138f), Vector(15.0f, 7,261993f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "lshv_coach_park", 2,802597E-45f, Vector(-1676,463f, 9,493582f, 4276,088f), Vector(0.0f, 252,1856f, 0.0f), Vector(7,926416f, 2,642139f, 5,284277f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "emtv_coach_park", 2,802597E-45f, Vector(-442,52f, 23,97941f, 3955,329f), Vector(-3,804106f, 104,2582f, -3,903749f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "fodv_coach_park", 2,802597E-45f, Vector(-703,5002f, 65,51284f, 3347,808f), Vector(0.0f, 75,30426f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "torv_coach_park", 2,802597E-45f, Vector(381,435f, 31,422f, 3356,736f), Vector(2,753f, -36,2f, 0.0f), Vector(15.0f, 6,160286f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "twrv_coach_park", 2,802597E-45f, Vector(-2437,578f, 23,85255f, 2201,414f), Vector(0.0f, 264,3128f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "tumv_coach_park", 2,802597E-45f, Vector(-3960,237f, 28,57524f, 3084,759f), Vector(0.0f, -32,23166f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "gapv_coach_park", 2,802597E-45f, Vector(-4442,633f, 9,267518f, 3364,521f), Vector(0.0f, 176,2452f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "solv_coach_park", 2,802597E-45f, Vector(-3816,177f, 9,999077f, 3626,925f), Vector(0.0f, 69,53353f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "fomv_coach_park", 2,802597E-45f, Vector(-2597,957f, 69,32348f, 3408,867f), Vector(0.0f, 122,3583f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "pikv_coach_park", 2,802597E-45f, Vector(-1227,648f, 93,50175f, 2110,007f), Vector(0.0f, 1,91647f, 0.0f), Vector(15.0f, 17,4811f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "tesv_coach_park", 2,802597E-45f, Vector(-3191,454f, 38,39717f, 4544,503f), Vector(0.0f, 180,001f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "nosv_coach_park", 2,802597E-45f, Vector(-4600,072f, 4,381839f, 3979,659f), Vector(0.0f, -15,76538f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "cocv_coach_park", 2,802597E-45f, Vector(-698,856f, 170,138f, 743,603f), Vector(0.0f, 152,309f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "serv_coach_park", 2,802597E-45f, Vector(285,854f, 91,353f, 1900,771f), Vector(0.0f, 326,7992f, 0.0f), Vector(15.0f, 5.0f, 10.0f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "hen_pasture", 4,203895E-45f, Vector(-1059,102f, 102,7685f, 2928,799f), Vector(0.0f, 94,725f, 0.0f), Vector(13,05346f, 5,333994f, 13,08851f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "gtr_pasture", 4,203895E-45f, Vector(-4337,467f, 32,144f, 3076,536f), Vector(0.0f, 331,491f, 0.0f), Vector(14,44081f, 8,806858f, 18,50083f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "rio_pasture", 4,203895E-45f, Vector(-3382,033f, 38,94137f, 3242,493f), Vector(0.0f, 75,887f, 0.0f), Vector(12,16677f, 6,046849f, 11,78531f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "cho_pasture", 4,203895E-45f, Vector(-3439,106f, 17,4172f, 3026,709f), Vector(0.0f, 129,618f, 0.0f), Vector(23,05708f, 14,67792f, 18,37475f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "hen_pasture1", 4,203895E-45f, Vector(-1244,302f, 117,459f, 2664,095f), Vector(0.0f, 54,848f, 0.0f), Vector(21,68487f, 9,704492f, 23,8164f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "prd_pasture", 4,203895E-45f, Vector(-1149,83f, 22,96783f, 5059,978f), Vector(0.0f, 261,374f, 0.0f), Vector(20,26593f, 9,249132f, 19,49912f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "prd_pasture1", 4,203895E-45f, Vector(-1444,324f, 22,39532f, 4953,731f), Vector(0.0f, 141,049f, 0.0f), Vector(12,72238f, 4,718087f, 10,57367f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "prd_pasture2", 4,203895E-45f, Vector(-2912,868f, 25,44674f, 4061,587f), Vector(0.0f, 266,929f, 0.0f), Vector(27,10916f, 13,49337f, 27,49792f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "pun_pasture", 4,203895E-45f, Vector(-3898,6f, 6,27f, 4245,527f), Vector(0.0f, 121,75f, 0.0f), Vector(24,32381f, 6,558811f, 23,47421f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "agvv_coach_park", 2,802597E-45f, Vector(-1549,209f, 15,337f, 3939,273f), Vector(0.0f, 315.0f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_13, "criv_coach_park", 2,802597E-45f, Vector(-2904,775f, 15,70748f, 3004,139f), Vector(0.0f, 16,8946f, 0.0f), Vector(3,5f, 5.0f, 7,5f));
	return 1;
}

void Function_719(int iParam0, int iParam1) //Position: 0x2D7FF / 186367
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

bool Function_720(int iParam0) //Position: 0x2D849 / 186441
{
	return Function_561(&Global_43580, iParam0);
}

void Function_721(bool bParam0) //Position: 0x2D857 / 186455
{
	return;
	Global_122919.f_8 = StackVal;
	Function_725();
	Function_724();
	if (!bParam0)
	{
		return;
	}
	Function_722();
	return;
}

void Function_722() //Position: 0x2D879 / 186489
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	Global_122919.f_20 = 0;
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
		ITERATE_IN_LAYOUT(&uVar0, &Global_43578);
		iVar2 = START_OBJECT_ITERATOR(&uVar0);
		while (IS_OBJECT_VALID(&iVar2))
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(&iVar2);
			if (Function_723(&iVar1))
			{
				Global_122919.f_20++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		OBJECT_ITERATOR_RESET(&uVar0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
		ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
		iVar2 = START_OBJECT_ITERATOR(&uVar0);
		while (IS_OBJECT_VALID(&iVar2))
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(&iVar2);
			if (Function_723(&iVar1))
			{
				Global_122919.f_20++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

bool Function_723(int iParam0) //Position: 0x2D945 / 186693
{
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		return 0;
	}
	if (!Function_637(&iParam0, 4294967295, 1, 4294967295))
	{
		return 0;
	}
	return 1;
}

void Function_724() //Position: 0x2D967 / 186727
{
	bool bVar0;
	
	Global_122919.f_16 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((Global_6629 && Global_120101[bVar088] != Global_43789) || Function_589(bVar0))
			{
				Global_122919.f_16 = (Global_122919.f_16 + Global_120101[bVar088].f_12);
			}
		}
		bVar0++;
	}
	return;
}

void Function_725() //Position: 0x2D9BF / 186815
{
	var uVar0;
	int iVar1;
	
	Global_122919.f_12 = 0;
	iVar1 = 0;
	while (iVar1 <= Local_16)
	{
		if (Function_586(&(Local_16[iVar131])))
		{
			if (Function_584(&(Local_16[iVar131]), &uVar0, 1))
			{
				Global_122919.f_12++;
			}
		}
		iVar1++;
	}
	return;
}

var Function_726(struct<31>[] Param0) //Position: 0x2DA08 / 186888
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= Param0)
	{
		if (Function_586(&(Param0[iVar231])))
		{
			if (IS_OBJECTSET_VALID(&Param0[iVar231] + 232))
			{
				iVar1 = GET_OBJECTSET_SIZE(&Param0[iVar231] + 232);
				CLEAN_OBJECTSET(&Param0[iVar231] + 232);
				iVar0 = (iVar0 + iVar1);
				iVar1 = (iVar1 - GET_OBJECTSET_SIZE(&Param0[iVar231] + 232));
				Global_43580.f_64 = (Global_43580.f_64 - iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

void Function_727() //Position: 0x2DA84 / 187012
{
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
		{
			*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
		}
		return;
	}
	Global_43578 = CREATE_LAYOUT("traffic_layout");
	Function_718(&Global_43578);
	EVENT_TRAP_ON_OWNER(&Global_43722, &Global_43578);
	*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	return;
}

void Function_728() //Position: 0x2DB11 / 187153
{
	Global_43580.f_60 = 4294967295;
	Global_43580.f_96 = 4294967295;
	Global_43580.f_88 = 0;
	Global_43580.f_92 = 0;
	Function_689(&Global_43580, 512);
	Global_43580.f_100 = -500.0f;
	Function_582();
	ENABLE_CURVE("rsdGPSTRAIL_home01_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home01_1", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home01_2", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_1", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_2", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch07_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_1", 0);
	STREAMING_REQUEST_ACTOR(976, 1, false);
	Function_704(8192);
	bLocal_639 = Function_71("trafficDebugLite");
	bLocal_640 = Function_71("trafficForceCoach");
	if (bLocal_640)
	{
		Function_651(&Global_43580, 64);
	}
	Function_704(262144);
	if (Function_71("trafficSpew"))
	{
		Global_47151[43] = 1;
		Global_47151[12] = 1;
		Global_47151[13] = 1;
	}
	return;
}

void Function_729(struct<57> Param0) //Position: 0x2DCDA / 187610
{
	strcpy(&Param0 + 24, "LAW", 16);
	Param0 = 187676;
	*(&Param0 + 8) = 187669;
	*(&Param0 + 16) = 187663;
	Param0.f_56 = 1;
	return;
}

void Function_730() //Position: 0x2DD0F / 187663
{
	return;
}

int Function_731() //Position: 0x2DD15 / 187669
{
	return 0;
}

void Function_732() //Position: 0x2DD1C / 187676
{
	return;
}

