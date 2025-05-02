//Decompiled with MagicRDR v1.0
//Function Count : 913
//Statics Count : 1087
//Natives Count : 755
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
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
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
	int iLocal_645 = 0;
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
	bool bLocal_662 = false;
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
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	int iLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	struct<2> Local_700[5];
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	struct<2> Local_740 = { 0, 0 } ;
	var uLocal_742 = 0;
	float fLocal_743 = 0.0f;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	var uLocal_747 = 0;
	int iLocal_748 = 0;
	struct<2> Local_749 = { 0, 0 } ;
	var uLocal_751 = 0;
	struct<2> Local_752 = { 0, 0 } ;
	var uLocal_754 = 0;
	bool bLocal_755 = false;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	struct<8> Local_762[20];
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
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
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
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	bool bLocal_1084 = false;
	bool bLocal_1085 = false;
	float fLocal_1086 = 0.0f;
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
	bLocal_662 = true;
	iLocal_663 = 0;
	iLocal_664 = 1;
	iLocal_665 = 1;
	iLocal_666 = 0;
	iLocal_667 = 0;
	iLocal_736 = 0;
	iLocal_737 = 0;
	bLocal_744 = false;
	bLocal_745 = false;
	iLocal_748 = 0;
	Function_802(&(Local_762[48]));
	Function_756(&(Local_762[68]));
	Function_632(&(Local_762[58]));
	Function_615(&(Local_762[78]));
	Function_591(&(Local_762[88]));
	Function_571(&(Local_762[98]));
	Function_563(&(Local_762[108]));
	Function_559(&(Local_762[118]));
	Function_531(&(Local_762[128]));
	Function_501(&(Local_762[138]));
	Function_479(&(Local_762[148]));
	Function_474(&(Local_762[158]));
	Function_470(&(Local_762[168]));
	Function_439(&(Local_762[198]));
	Function_379(&(Local_762[08]));
	Function_181(&(Local_762[18]));
	Function_112(&(Local_762[28]));
	Function_75(&(Local_762[38]));
	Function_33(&(Local_762[178]));
	Function_5(&(Local_762[188]));
	iVar0 = 0;
	while (iVar0 <= Local_762)
	{
		if (!IS_EXITFLAG_SET())
		{
			if (Local_762[iVar08].f_56 || !Global_53524.f_44)
			{
				Call_Loc(Local_762[iVar08]);
				Local_762[iVar08].f_60 = 1;
				if (UNK_0x26884138() <= 50000)
				{
					WAIT(false);
				}
			}
			else
			{
				Local_762[iVar08].f_60 = 0;
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
		bLocal_1084 = 1000;
		SET_DEBUG_DRAW((((((Global_47267[0] || Global_47267[1]) || Global_47267[2]) || Global_47267[3]) || Global_47267[17]) || Global_47267[4]));
		if (GET_DEBUG_DRAW_STATE())
		{
			bLocal_1084 = false;
		}
		iVar0 = 0;
		while (iVar0 <= Local_762)
		{
			if (Local_762[iVar08].f_56 | 1)
			{
				if (bLocal_1085)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&Local_762[iVar08] + 24);
					PRINTSTRING(": ");
					fLocal_1086 = GET_PROFILE_TIME();
				}
				Call_Loc(&Local_762[iVar08] + 8);
				if (StackVal)
				{
					bLocal_1084 = false;
				}
				if (bLocal_1085)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_1086));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !bLocal_1084 != 0)
				{
					bLocal_1084 = (bLocal_1084 - 33);
					WAIT(false);
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_1084);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Local_762)
	{
		if (Local_762[iVar08].f_60)
		{
			Call_Loc(Local_762[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2A1 / 673
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

int Function_2(bool bParam0) //Position: 0x2E8 / 744
{
	if (!Function_3(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_3(int iParam0) //Position: 0x303 / 771
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x31A / 794
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(struct<57> Param0) //Position: 0x336 / 822
{
	strcpy(&Param0 + 24, "SOCIALCLUB", 16);
	Param0 = 4621;
	*(&Param0 + 8) = 888;
	*(&Param0 + 16) = 882;
	Param0.f_56 = 1;
	return;
}

void Function_6() //Position: 0x372 / 882
{
	return;
}

int Function_7() //Position: 0x378 / 888
{
	Function_24();
	Function_19();
	if (Global_53524.f_44)
	{
		Function_8();
	}
	return 0;
}

void Function_8() //Position: 0x390 / 912
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(62) || !HAS_ACHIEVEMENT_BEEN_PASSED(67))
	{
		if (!Function_18((*&Global_132987[0125] + 24)[0], 32))
		{
			Function_9();
		}
	}
	return;
}

void Function_9() //Position: 0x3BE / 958
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_16();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Function_15(iVar0);
		if (iVar1 >= 0)
		{
			if (!Function_18((*&Global_132987[iVar0125] + 24)[0], 1))
			{
				if (Function_11(iVar1, iVar0))
				{
					Function_10(&Global_132987[iVar0125] + 24[0], 1);
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x41B / 1051
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_11(int iParam0, int iParam1) //Position: 0x42C / 1068
{
	var uVar0[67];
	
	if (!Function_18((*&Global_132987[iParam1125] + 24)[0], 2))
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 0))
			{
				Function_10(&Global_132987[iParam1125] + 24[0], 2);
				iLocal_698 = 0;
				iLocal_699 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GAC reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (Function_18((*&Global_132987[iParam1125] + 24)[0], 2))
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar0))
					{
						Function_13(iParam1, uVar0[13]);
					}
				}
				Function_12(&Global_132987[iParam1125] + 24[0], 2);
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_698 <= 30)
			{
				iLocal_698++;
			}
			else
			{
				Function_12(&Global_132987[iParam1125] + 24[0], 2);
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_699 <= 30)
		{
			iLocal_699++;
		}
		else
		{
			Function_12(&Global_132987[iParam1125] + 24[0], 2);
			return 1;
		}
	}
	return 0;
}

void Function_12(int iParam0, int iParam1) //Position: 0x54D / 1357
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_13(int iParam0, int iParam1) //Position: 0x563 / 1379
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000001:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000002:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000003:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000004:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000005:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000006:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000007:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000008:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x00000009:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x0000000A:
			Function_14(iParam0, iParam1);
			break;
		
		case 0x0000000B:
			Function_14(iParam0, iParam1);
			break;
	}
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0x630 / 1584
{
	if (iParam1 >= 0)
	{
		Function_10(&Global_132987[iParam0125] + 24[0], 4);
	}
	return;
}

int Function_15(int iParam0) //Position: 0x64D / 1613
{
	switch (iParam0)
	{
		case 0x00000000:
			return 33;
			break;
		
		case 0x00000001:
			return 34;
			break;
		
		case 0x00000002:
			return 35;
			break;
		
		case 0x00000003:
			return 36;
			break;
		
		case 0x00000004:
			return 38;
			break;
		
		case 0x00000005:
			return 39;
			break;
		
		case 0x00000006:
			return 47;
			break;
		
		case 0x00000007:
			return 88;
			break;
		
		case 0x00000008:
			return 89;
			break;
		
		case 0x00000009:
			return 90;
			break;
		
		case 0x0000000A:
			return 91;
			break;
		
		case 0x0000000B:
			return 92;
			break;
	}
	return 4294967295;
}

void Function_16() //Position: 0x6EB / 1771
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Function_15(iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Function_18((*&Global_132987[iVar0125] + 24)[0], 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	if (iVar1 == iVar2)
	{
		Function_17();
		Function_10(&Global_132987[0125] + 24[0], 32);
	}
	return;
}

void Function_17() //Position: 0x76A / 1898
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_18((*&Global_132987[iVar0125] + 24)[0], 4))
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (Function_18((*&Global_132987[iVar1 + 6125] + 24)[0], 4))
		{
			iVar3++;
		}
		iVar1++;
	}
	if (iVar2 > 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(62))
		{
			AWARD_ACHIEVEMENT(62);
		}
	}
	if (iVar3 > 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(67))
		{
			AWARD_ACHIEVEMENT(67);
		}
	}
	return;
}

bool Function_18(bool bParam0, bool bParam1) //Position: 0x7F4 / 2036
{
	return (bParam0 && bParam1) == 0;
}

void Function_19() //Position: 0x801 / 2049
{
	if (Global_140632)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_140676) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS()) || Global_140676 != 0.0f)
		{
			if (GET_CURRENT_GAME_TIME() - Global_140676) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS())
			{
			}
			else if (Global_140676 != 0.0f)
			{
			}
			Function_20();
		}
		else
		{
			Global_140632 = 0;
		}
	}
	return;
}

void Function_20() //Position: 0x84C / 2124
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_23();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_132987[iVar0125].f_140;
		if (iVar1 >= 0)
		{
			if (!Global_132987[iVar0125].f_128)
			{
				if (Global_132987[iVar0125].f_120)
				{
					if (Function_22(iVar1, iVar0))
					{
						Global_132987[iVar0125].f_128 = 1;
					}
				}
				else if (Function_21(iVar1, iVar0))
				{
					Global_132987[iVar0125].f_128 = 1;
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x8C6 / 2246
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	var uVar204[67];
	
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 0))
			{
				Global_137989[iParam166].f_8 = 1;
				iLocal_698 = 0;
				iLocal_699 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GAC reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_132987[iParam1125] + 212)[111] = TO_FLOAT(uVar0[66]);
						(*&Global_132987[iParam1125] + 212[111] + 56)[0] = uVar0[2] != 1;
						(*&Global_132987[iParam1125] + 212[111] + 56)[1] = uVar0[3] != 1;
						(*&Global_132987[iParam1125] + 212[111] + 56)[2] = uVar0[4] != 1;
						(&Global_132987[iParam1125] + 212[111])->f_4 = uVar0[40];
						strcpy(&Global_132987[iParam1125] + 212[111] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_132987[iParam1125] + 212)[011] = TO_FLOAT(uVar68[66]);
						(*&Global_132987[iParam1125] + 212[011] + 56)[0] = uVar68[2] != 1;
						(*&Global_132987[iParam1125] + 212[011] + 56)[1] = uVar68[3] != 1;
						(*&Global_132987[iParam1125] + 212[011] + 56)[2] = uVar68[4] != 1;
						(&Global_132987[iParam1125] + 212[011])->f_4 = uVar68[40];
						strcpy(&Global_132987[iParam1125] + 212[011] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar204))
					{
						if (StackVal || (StackVal > uVar204[40] != uVar204[40] && (*&Global_132987[iParam1125] + 212)[211] < TO_FLOAT(uVar204[66])))
						{
							(*&Global_132987[iParam1125] + 212)[211] = TO_FLOAT(uVar204[66]);
							(*&Global_132987[iParam1125] + 212[211] + 56)[0] = uVar204[2] != 1;
							(*&Global_132987[iParam1125] + 212[211] + 56)[1] = uVar204[3] != 1;
							(*&Global_132987[iParam1125] + 212[211] + 56)[2] = uVar204[4] != 1;
							(&Global_132987[iParam1125] + 212[211])->f_4 = uVar204[40];
						}
						strcpy(&Global_132987[iParam1125] + 212[211] + 8, NET_CHALLENGE_LB_GET_LOCAL_GAMER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_132987[iParam1125] + 212)[511] = TO_FLOAT(uVar136[66]);
						(*&Global_132987[iParam1125] + 212[511] + 56)[0] = uVar136[2] != 1;
						(*&Global_132987[iParam1125] + 212[511] + 56)[1] = uVar136[3] != 1;
						(*&Global_132987[iParam1125] + 212[511] + 56)[2] = uVar136[4] != 1;
						(&Global_132987[iParam1125] + 212[511])->f_4 = uVar136[40];
						strcpy(&Global_132987[iParam1125] + 212[511] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
					else
					{
						(*&Global_132987[iParam1125] + 212)[511] = 0.0f;
					}
				}
				else
				{
					(*&Global_132987[iParam1125] + 212)[511] = 0.0f;
				}
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_698 <= 30)
			{
				iLocal_698++;
			}
			else
			{
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_699 <= 30)
		{
			iLocal_699++;
		}
		else
		{
			Global_137989[iParam166].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_22(int iParam0, int iParam1) //Position: 0xC90 / 3216
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_18(Global_140678[iParam1], 2))
	{
		return 1;
	}
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 1))
			{
				Global_137989[iParam166].f_8 = 1;
				iLocal_698 = 0;
				iLocal_699 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GS reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_132987[iParam1125] + 212)[111] = TO_FLOAT(uVar0[1]);
						strcpy(&Global_132987[iParam1125] + 212[111] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_132987[iParam1125] + 212)[011] = TO_FLOAT(uVar68[1]);
						strcpy(&Global_132987[iParam1125] + 212[011] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_132987[iParam1125] + 212)[511] = TO_FLOAT(uVar136[1]);
						strcpy(&Global_132987[iParam1125] + 212[511] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
				}
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				if (Function_18(Global_140678[iParam1], 1))
				{
					if (!Function_18(Global_140678[iParam1], 2))
					{
						Function_10(&(Global_140678[iParam1]), 2);
					}
				}
				return 1;
			}
			if (iLocal_698 <= 30)
			{
				iLocal_698++;
			}
			else
			{
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_699 <= 30)
		{
			iLocal_699++;
		}
		else
		{
			Global_137989[iParam166].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_23() //Position: 0xE68 / 3688
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<189> Var3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_132987[iVar0125].f_140 >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_132987[iVar0125].f_128)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	if (iVar1 == iVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 20)
		{
			Global_132987[iVar0125].f_128 = 0;
			iVar0++;
		}
		Global_140632 = 0;
		Global_140676 = GET_CURRENT_GAME_TIME();
		*(&Var3 + 80) = 3;
		RETRIEVE_GAME_STATE(&Var3, 48, 1);
		Var3.f_188 = Global_140676;
		STORE_GAME_STATE(&Var3, 48, 1);
	}
	return;
}

void Function_24() //Position: 0xF1C / 3868
{
	if (Global_140631)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_140677) < IntToFloat(SC_CHALLENGE_GET_MIN_SUBMIT_DELAY_SECS()) && Global_140677 < 0.0f)
		{
			Function_25(1);
			Global_140677 = GET_CURRENT_GAME_TIME();
			Global_140631 = 0;
		}
		else if (Global_140677 != 0.0f)
		{
			Global_140677 = GET_CURRENT_GAME_TIME();
			Global_140631 = 0;
		}
		else
		{
			Global_140631 = 0;
		}
	}
	return;
}

void Function_25(var uParam0) //Position: 0xF70 / 3952
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_132987[iVar0125].f_140;
		if (iVar1 >= 0)
		{
			if (Global_132987[iVar0125].f_124)
			{
				if (Global_132987[iVar0125].f_120 && uParam0)
				{
					Global_137989[iVar066].f_20 = (ROUND((*&Global_132987[iVar0125] + 212)[411]) - Global_137989[iVar066].f_24);
					iVar2 = 0;
					while (iVar2 <= 30)
					{
						(*&Global_137989[iVar066] + 28)[iVar2] = ((*&Global_132987[iVar0125] + 748)[iVar2] - (*&Global_137989[iVar066] + 276)[iVar2]);
						iVar2++;
					}
					if (Global_137989[iVar066].f_20 >= 0)
					{
						Function_28(iVar1, iVar0, 4294967295, Global_132987[iVar0125].f_120);
					}
					Global_137989[iVar066].f_24 = ROUND((*&Global_132987[iVar0125] + 212)[411]);
					Global_137989[iVar066].f_20 = 0;
					iVar2 = 0;
					while (iVar2 <= 30)
					{
						(*&Global_137989[iVar066] + 276)[iVar2] = (*&Global_132987[iVar0125] + 748)[iVar2];
						(*&Global_137989[iVar066] + 28)[iVar2] = 0;
						iVar2++;
					}
				}
			}
			Function_26();
		}
		iVar0++;
	}
	return;
}

void Function_26() //Position: 0x10A9 / 4265
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_27(iVar0);
		iVar0++;
	}
	return;
}

void Function_27(int iParam0) //Position: 0x10C7 / 4295
{
	if (!Global_132987[iParam0125].f_124)
	{
		Global_137989[iParam066].f_24 = 0;
		Global_137989[iParam066].f_20 = 0;
	}
	return;
}

void Function_28(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x10F1 / 4337
{
	int iVar0[67];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	if (iParam0 < 0 && Global_137989[iParam166].f_20 < 0)
	{
		NET_START_LB_UPDATE(&bParam3);
		if (&bParam3)
		{
			iVar0[1] = Global_137989[iParam166].f_20;
			iVar68 = 41;
			iVar69 = 0;
			iVar70 = 5;
			iVar71 = (30 - iVar70);
			iVar69 = 0;
			while (iVar69 <= iVar71)
			{
				iVar0[iVar68] = (*&Global_137989[iParam166] + 28)[iVar69];
				iVar68++;
				iVar69++;
			}
		}
		else
		{
			iVar0[0] = Global_137989[iParam166].f_20;
			iVar0[66] = ROUND((*&Global_132987[iParam1125] + 212)[411]);
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[0])
			{
				iVar0[2] = 1;
			}
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[1])
			{
				iVar0[3] = 1;
			}
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[2])
			{
				iVar0[4] = 1;
			}
			iVar0[40] = StackVal;
		}
		NET_UPDATE_LEADERBOARD(4294967295, iParam0, &uParam2, &iVar0);
		NET_END_LB_UPDATE();
	}
}

void Function_29() //Position: 0x120D / 4621
{
	Function_31(&uLocal_682);
	Function_31(&iLocal_686);
	Function_31(&iLocal_690);
	Function_31(&iLocal_694);
	Function_30();
	return;
}

void Function_30() //Position: 0x122E / 4654
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_12(&Global_132987[iVar0125] + 24[0], 1);
		Function_12(&Global_132987[iVar0125] + 24[0], 2);
		Function_12(&Global_132987[iVar0125] + 24[0], 4);
		Function_12(&Global_132987[iVar0125] + 24[0], 8);
		Function_12(&Global_132987[iVar0125] + 24[0], 16);
		Function_12(&Global_132987[iVar0125] + 24[0], 32);
		iVar0++;
	}
	return;
}

void Function_31(int iParam0) //Position: 0x12B3 / 4787
{
	Function_32(&iParam0, 0.0f);
	return;
}

void Function_32(vector3 vParam0) //Position: 0x12C0 / 4800
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(&vParam0, 1);
	Function_12(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_33(struct<57> Param0) //Position: 0x12E5 / 4837
{
	strcpy(&Param0 + 24, "ITEMEFFECTS", 16);
	Param0 = 11955;
	*(&Param0 + 8) = 4921;
	*(&Param0 + 16) = 4898;
	Param0.f_56 = 1;
	return;
}

void Function_34() //Position: 0x1322 / 4898
{
	if (IS_OBJECT_VALID(&uLocal_760))
	{
		DESTROY_OBJECT(&uLocal_760);
	}
	return;
}

int Function_35() //Position: 0x1339 / 4921
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 <= Local_700)
	{
		switch (bVar0)
		{
			case 0x00000000:
				if (StackVal)
				{
					if (StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						SET_INFINITE_DEADEYE(0, 0);
						SET_DEADEYE_BLINK(0.0f);
						DECOR_REMOVE(&Global_54076, "nmoonshine");
						Local_700[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "nmoonshine"))
				{
					Local_700[bVar02] = DECOR_GET_FLOAT(&Global_54076, "nmoonshine");
					Local_700[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_700[bVar02].f_8 = 1;
					SET_INFINITE_DEADEYE(0, 1);
					SET_DEADEYE_BLINK(10.0f);
				}
				break;
			
			case 0x00000001:
				if (StackVal)
				{
					if (StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						if (IS_ACTOR_VALID(&uLocal_758) && DECOR_CHECK_EXIST(&uLocal_758, "horse_pills_effect"))
						{
							if (HORSE_UNLOCK_FRESHNESS(&uLocal_758))
							{
								DECOR_REMOVE(&uLocal_758, "horse_pills_effect");
								Local_700[bVar02].f_8 = 0;
							}
						}
						else
						{
							Local_700[bVar02].f_8 = 0;
						}
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "horse_pills"))
				{
					Local_700[bVar02] = DECOR_GET_FLOAT(&Global_54076, "horse_pills");
					Local_700[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_700[bVar02].f_8 = 1;
					uLocal_758 = GET_MOUNT(&Global_54076);
					if (IS_ACTOR_VALID(&uLocal_758))
					{
						HORSE_SET_CURR_FRESHNESS(&uLocal_758, 1.0f);
						HORSE_LOCK_FRESHNESS(&uLocal_758);
						DECOR_SET_BOOL(&uLocal_758, "horse_pills_effect", 1);
					}
					DECOR_REMOVE(&Global_54076, "horse_pills");
				}
				break;
			
			case 0x00000002:
				if (StackVal)
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
					{
						Function_73();
						if (!DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
						{
							uLocal_738 = ADD_BLIP_FOR_COORD(&Local_740, 335, 0, 2, 0);
						}
						DECOR_REMOVE(&Global_54076, "CreateDecal");
					}
					if (Function_71(StackVal, &Global_54076, Local_740) > 5.0f && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_68("item_bait_move", 10.0f, 1, 0, 0, 0, 0);
					}
					if (!iLocal_748)
					{
						if (Function_65(StackVal, Local_749))
						{
						}
						else
						{
							if (IS_BLIP_VALID(&uLocal_738))
							{
								REMOVE_BLIP(&uLocal_738);
							}
							DECOR_REMOVE(&Global_54076, "bait");
							DECOR_REMOVE(&Global_54076, "baitSafePos");
							Local_700[bVar02].f_8 = 0;
						}
					}
					else if (iLocal_748)
					{
						iVar3 = 1;
						iVar2 = 0;
						while (iVar2 <= iLocal_722)
						{
							if (IS_ACTOR_VALID(&(iLocal_722[iVar2])))
							{
								iVar3 = 0;
								if (Function_71(StackVal, &(iLocal_722[iVar1]), Local_740) > 4.0f)
								{
									TASK_PRIORITY_SET(&(iLocal_722[iVar2]), 2);
									SET_ACTOR_UPDATE_PRIORITY(&(iLocal_722[iVar2]), false);
								}
							}
							iVar2++;
						}
					}
					if ((StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME() || iVar3)
					{
						if (IS_BLIP_VALID(&uLocal_738))
						{
							REMOVE_BLIP(&uLocal_738);
						}
						iVar1 = 0;
						while (iVar1 <= iLocal_722)
						{
							if (IS_OBJECT_VALID(&(iLocal_722[iVar1])))
							{
								RELEASE_ACTOR_AS_AMBIENT(&(iLocal_722[iVar1]));
							}
							iVar1++;
						}
						iLocal_748 = 0;
						DECOR_REMOVE(&Global_54076, "bait");
						DECOR_REMOVE(&Global_54076, "baitSafePos");
						Local_700[bVar02].f_8 = 0;
					}
					else if (StackVal && Function_71(!Function_64(StackVal, Local_740), &Global_54076, Local_740) < 200.0f)
					{
						if (IS_BLIP_VALID(&uLocal_738))
						{
							REMOVE_BLIP(&uLocal_738);
						}
						iVar1 = 0;
						while (iVar1 <= iLocal_722)
						{
							if (IS_OBJECT_VALID(&(iLocal_722[iVar1])))
							{
								RELEASE_ACTOR_AS_AMBIENT(&(iLocal_722[iVar1]));
							}
							iVar1++;
						}
						iLocal_748 = 0;
						DECOR_REMOVE(&Global_54076, "bait");
						DECOR_REMOVE(&Global_54076, "baitSafePos");
						Local_700[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "bait"))
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
					{
						Function_73();
						uLocal_738 = ADD_BLIP_FOR_COORD(&Local_740, 335, 0, 2, 0);
						DECOR_REMOVE(&Global_54076, "CreateDecal");
					}
					if (iLocal_737 == 0)
					{
						Function_40(bVar0);
					}
					if (iLocal_737 <= 5)
					{
						if (Function_39(&Local_749))
						{
							if (Function_38(StackVal, Local_749))
							{
								bLocal_744 = true;
							}
						}
					}
					else if (iLocal_737 <= 10)
					{
						if (Function_37(&Local_749))
						{
							if (Function_38(StackVal, Local_749))
							{
								bLocal_744 = true;
							}
						}
					}
					iLocal_737++;
					if (bLocal_744)
					{
						if (IS_OBJECT_VALID(&bLocal_746))
						{
							if (NAV_QUERY_IS_DONE(&bLocal_746))
							{
								NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(&bLocal_746, &bLocal_745);
								NAV_QUERY_STOP(&bLocal_746);
								DESTROY_OBJECT(&bLocal_746);
							}
							else
							{
								break;
							}
						}
						if (bLocal_745)
						{
							Local_749 = Local_752;
						}
						else
						{
							bLocal_746 = CREATE_NAV_QUERY(&Global_46715, "item_bait_navquery");
							Local_752 = Local_749;
							NAV_QUERY_START_CAN_PATH_TO_POINT(&bLocal_746, Local_752, Local_740, bLocal_755);
						}
					}
					if (iLocal_737 < 10 && !bLocal_745)
					{
						DECOR_GET_VECTOR(&Global_54076, "baitSafePos", &Local_749);
						bLocal_745 = true;
					}
					if (bLocal_745)
					{
						iLocal_737 = 0;
						if (IS_OBJECT_VALID(&bLocal_746))
						{
							NAV_QUERY_STOP(&bLocal_746);
							DESTROY_OBJECT(&bLocal_746);
						}
						AMBIENT_RESET_USED_CELLS();
						Local_700[bVar02] = DECOR_GET_FLOAT(&Global_54076, "bait");
						Local_700[bVar02].f_4 = GET_CURRENT_GAME_TIME();
						Local_700[bVar02].f_8 = 1;
					}
				}
				break;
			
			case 0x00000003:
				if (StackVal)
				{
					if (StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(&Global_54076, "survivalist");
						Function_68("item_herbs_end", 10.0f, 1, 0, 0, 0, 0);
						Local_700[bVar02].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "survivalist"))
				{
					Local_700[bVar02] = DECOR_GET_FLOAT(&Global_54076, "survivalist");
					Local_700[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_700[bVar02].f_8 = 1;
				}
				break;
			
			case 0x00000004:
				if (StackVal)
				{
					if (StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(&Global_54076, "phosphorous");
						Function_68("phosphorous_end", 10.0f, 1, 0, 0, 0, 0);
						Local_700[bVar02].f_8 = 0;
						SET_PHOSPHORUS_AMMO_ACTIVE(0);
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "phosphorous"))
				{
					Local_700[bVar02] = DECOR_GET_FLOAT(&Global_54076, "phosphorous");
					Local_700[bVar02].f_4 = GET_CURRENT_GAME_TIME();
					Local_700[bVar02].f_8 = 1;
					if (Function_36(19) || Function_36(22))
					{
						Local_700[bVar02] = (Local_700[bVar02] * 2.0f);
					}
					Function_68("phosphorous_start", 10.0f, 1, 0, 0, 0, 0);
					SET_PHOSPHORUS_AMMO_ACTIVE(1);
				}
				break;
			
			default:
				if (StackVal)
				{
					LOG_ERROR("Melissa needs to build an item effect for this!");
					if (StackVal + Local_700[bVar02]) > GET_CURRENT_GAME_TIME()
					{
						Local_700[bVar02].f_8 = 1;
					}
				}
				break;
		}
		bVar0++;
	}
	return 0;
}

bool Function_36(int iParam0) //Position: 0x1B8D / 7053
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_37(int iParam0) //Position: 0x1B9E / 7070
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

bool Function_38(struct<2> Param0) //Position: 0x1C0B / 7179
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

bool Function_39(int iParam0) //Position: 0x1C8A / 7306
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

void Function_40(int iParam0) //Position: 0x1CFB / 7419
{
	iLocal_748 = 0;
	bLocal_744 = false;
	bLocal_745 = false;
	Local_749 = Vector(0.0f, 0.0f, 0.0f);
	Local_752 = Vector(0.0f, 0.0f, 0.0f);
	Local_740 = Global_54078;
	fLocal_743 = Function_63(&Global_54076);
	Function_52(&bLocal_755);
	if (IS_OBJECT_VALID(&bLocal_746))
	{
		NAV_QUERY_STOP(&bLocal_746);
		DESTROY_OBJECT(&bLocal_746);
	}
	if (IS_BLIP_VALID(&uLocal_738))
	{
		REMOVE_BLIP(&uLocal_738);
	}
	if (!Function_48(&Global_54076, 0, 0))
	{
		if (IS_OBJECT_VALID(&uLocal_760))
		{
			DESTROY_OBJECT(&uLocal_760);
		}
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			uLocal_760 = CREATE_GRINGO_IN_LAYOUT(StackVal, &Global_46715, "nitem_bait", "nitem_bait", Local_740, Vector(0.0f, fLocal_743, 0.0f));
			SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_760, "UseCase1", false, 0, 0);
			TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_760), "UseCase1", 1, 1);
			if (DECOR_CHECK_EXIST(&Global_54076, "CreateDecal"))
			{
				Function_73();
				uLocal_738 = ADD_BLIP_FOR_COORD(&Local_740, 335, 0, 2, 0);
				DECOR_REMOVE(&Global_54076, "CreateDecal");
			}
		}
		else
		{
			Function_73();
			uLocal_738 = ADD_BLIP_FOR_COORD(&Local_740, 335, 0, 2, 0);
		}
		if (!Function_47(Global_119937, 32))
		{
			HUD_CLEAR_HELP();
			Function_42(&Global_54076, 32, 4, 0);
		}
	}
	else
	{
		Function_68("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
		DECOR_REMOVE(&Global_54076, "bait");
		DECOR_REMOVE(&Global_54076, "baitSafePos");
		ADD_ITEM(Function_41(6), &Global_54076, 0);
		Local_700[iParam02].f_8 = 0;
	}
	return;
}

var Function_41(bool bParam0) //Position: 0x1EBD / 7869
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

void Function_42(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1FB1 / 8113
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_44(&iParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_43(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		DECOR_SET_INT(&iParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&iParam0, &cVar1, (DECOR_GET_INT(&iParam0, &cVar1) || bVar0));
	}
}

void Function_43(char* cParam0) //Position: 0x2026 / 8230
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

bool Function_44(int iParam0, var uParam1, int iParam2) //Position: 0x2060 / 8288
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
		if (Function_46(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_45(uVar0))
		{
			case 0x00000002:
				if (!Function_47(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_45(char* cParam0) //Position: 0x20DC / 8412
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

int Function_46(int iParam0) //Position: 0x217D / 8573
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
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

bool Function_47(var uParam0, int iParam1) //Position: 0x21BA / 8634
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x21CD / 8653
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
	if (Function_51(&iParam0))
	{
		return 1;
	}
	if (Function_50(&iParam0))
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
	if (Function_49())
	{
		return 1;
	}
	return 0;
}

bool Function_49() //Position: 0x2291 / 8849
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_50(int iParam0) //Position: 0x22A8 / 8872
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_51(int iParam0) //Position: 0x22B4 / 8884
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_52(int iParam0) //Position: 0x22C3 / 8899
{
	if (Function_62(&(Global_46972[10]), 0, 4294967295, 0))
	{
		if (Function_61(&(Global_46972[10]), 0, 0, 0) == 4294967295 && Function_61(&(Global_46972[10]), 0, 0, 0) == 0)
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iParam0 = DECOR_GET_INT(&Global_54076, "fakeBait");
			}
			else
			{
				iParam0 = Function_54(&(Global_46972[10]), 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Function_68("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
			return;
		}
	}
	Function_68("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
	return;
	if (Function_53(iParam0))
	{
		uLocal_756 = GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0);
		if ((STRING_CONTAINS_STRING(&uLocal_756, "Cougar") || STRING_CONTAINS_STRING(&uLocal_756, "Bobcat")) || STRING_CONTAINS_STRING(&uLocal_756, "Bear"))
		{
			iLocal_736 = 1;
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				if (STRING_CONTAINS_STRING(&uLocal_756, "Bobcat"))
				{
					iLocal_736 = 3;
				}
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_756, "Wolf") || STRING_CONTAINS_STRING(&uLocal_756, "Coyote"))
		{
			iLocal_736 = RAND_INT_RANGE(2, 4);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_736 = 4;
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_756, "Buck") || STRING_CONTAINS_STRING(&uLocal_756, "Fox"))
		{
			iLocal_736 = RAND_INT_RANGE(true, 2);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_736 = 3;
			}
		}
		else if (STRING_CONTAINS_STRING(&uLocal_756, "Deer"))
		{
			iLocal_736 = RAND_INT_RANGE(3, 5);
		}
		else if (STRING_CONTAINS_STRING(&uLocal_756, "Boar"))
		{
			iLocal_736 = RAND_INT_RANGE(true, 3);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_736 = 2;
			}
		}
		else
		{
			iLocal_736 = RAND_INT_RANGE(3, 6);
			if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
			{
				iLocal_736 = 4;
			}
		}
	}
	return;
}

bool Function_53(bool bParam0) //Position: 0x2505 / 9477
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_54(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x251C / 9500
{
	return Function_55(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_55(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x253A / 9530
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
		Function_60();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_53(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_59(&iParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_59(&iParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_58(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_53(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_58(bVar0))
				{
					Function_57();
				}
				Function_56(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_53(bVar1))
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

void Function_56(int iParam0) //Position: 0x2833 / 10291
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

void Function_57() //Position: 0x28E7 / 10471
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

bool Function_58(bool bParam0) //Position: 0x2922 / 10530
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

void Function_59(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x294F / 10575
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

void Function_60() //Position: 0x2AAA / 10922
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_57();
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
	Function_57();
	return;
}

int Function_61(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2AF6 / 10998
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &iParam1, &iParam2, &iParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

bool Function_62(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2B12 / 11026
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

var Function_63(int iParam0) //Position: 0x2B3E / 11070
{
	return GET_HEADING(&iParam0);
}

bool Function_64(char* cParam0) //Position: 0x2B4A / 11082
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

bool Function_65(struct<2> Param0) //Position: 0x2B62 / 11106
{
	int iVar0;
	struct<8> Var1;
	
	if (Function_53(bLocal_755))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_736)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("BAIT_ANIMAL") };
			Local_749.f_8 = (StackVal + 0,25f);
			iLocal_722[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_46715, &Var1, bLocal_755, Param0, Vector(0.0f, 0.0f, 0.0f));
			DECOR_SET_BOOL(&(iLocal_722[iVar0]), "bShopDontKill", 1);
			TASK_GO_NEAR_COORD(&(iLocal_722[iVar0]), &Local_740, 1.0f, 4);
			TASK_PRIORITY_SET(&(iLocal_722[iVar0]), false);
			SET_ACTOR_UPDATE_PRIORITY(&(iLocal_722[iVar0]), false);
			iVar0++;
		}
		iLocal_748 = 1;
		return 1;
	}
	return 0;
}

struct<32> Function_66(char* cParam0) //Position: 0x2C19 / 11289
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("0", &cVar8, ""), 4);
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

struct<32> Function_67(char* cParam0) //Position: 0x2C85 / 11397
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_68(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2CA7 / 11431
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_69(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_69(bool bParam0) //Position: 0x2D32 / 11570
{
	char* cVar0[16];
	
	if (!Function_70())
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

bool Function_70() //Position: 0x2D71 / 11633
{
	if (Function_18(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

float Function_71(float fParam0, struct<2> Param1) //Position: 0x2D8C / 11660
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		Function_72(&fParam0);
		Var0 = Function_72(&fParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_72(var uParam0) //Position: 0x2E03 / 11779
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

void Function_73() //Position: 0x2E6F / 11887
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Local_740;
	UNK_0x44986367(&Var2, Function_63(&Global_54076));
	VNORMALIZE(&Var2);
	VSCALE(&Var2, 0,4f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	CREATE_DECAL(2, Var0, 0,8f, 0, 0);
	return;
}

void Function_74() //Position: 0x2EB3 / 11955
{
	return;
}

void Function_75(struct<57> Param0) //Position: 0x2EB9 / 11961
{
	strcpy(&Param0 + 24, "PLAYER HORSE", 16);
	Param0 = 18400;
	(&Param0 + 8) = 12091;
	*(&Param0 + 16) = 12023;
	Param0.f_56 = 1;
	return;
}

void Function_76() //Position: 0x2EF7 / 12023
{
	Function_12(&Global_21369 + 72 + 32, 1);
	Function_12(&Global_21369 + 72 + 32, 32);
	Function_12(&Global_21369 + 72 + 32, 0x40000000);
	Function_12(&Global_21369 + 72 + 32, 128);
	Function_12(&Global_21369 + 72 + 32, 64);
	return;
}

int Function_77() //Position: 0x2F3B / 12091
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	struct<2> Var6;
	var uVar8;
	var uVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	char* cVar16[16];
	bool bVar20;
	var uVar21;
	var uVar23;
	var uVar24;
	
	if ((Global_6606 && !Function_108(2, 0)) && !Function_70())
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (IS_ACTOR_MULE(GET_MOUNT(&Global_54076)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (!Function_70())
			{
				if (!Function_47(Global_119934, 0x8000000))
				{
					Function_42(&Global_54076, 0x8000000, 1, 0);
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
		if (!Function_107(&Global_21369 + 72))
		{
			Function_106(&Global_21369 + 72);
		}
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			if (HUD_IS_FADED() || !Function_105(&Global_21369 + 72))
			{
				*(&Global_21369 + 72 + 36) = 4294967294;
				RELEASE_ACTOR(&Global_21369 + 72);
				(&Global_21369 + 72) = "";
			}
			return 0;
		}
		Function_104(&Global_21369 + 72);
		if (StackVal && Function_71((((((!STREAMING_ARE_BOUNDS_LOADED(Function_104(&Global_21369 + 72), 5.0f) && !Global_6622) && !Global_6623) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !GET_RIDER(&Global_21369 + 72) != &Global_54076), &Global_21369 + 72, Vector(0.0f, 0.0f, 0.0f)) < 75.0f)
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
				uVar3 = Function_99(7, 0, 5);
				iVar4 = Function_99(8, 0, 5);
				iVar2 = ((ROUND(GET_CURRENT_GAME_TIME()) - Function_96(uVar3)) + Function_96(iVar4));
				if (!Global_6624)
				{
					if (iVar2 == 3600)
					{
						SET_STAMINA_BLINK(3.0f);
						SET_ACTOR_MAX_FRESHNESS(&Global_21369 + 72, 100.0f);
						Function_68("mount_bond_stage3", 0x41200000, 1, 0, 2, 1, 0);
					}
					else if (iVar2 == 900)
					{
						SET_STAMINA_BLINK(3.0f);
						SET_ACTOR_MAX_FRESHNESS(&Global_21369 + 72, 85.0f);
						Function_68("mount_bond_stage2", 0x41200000, 1, 0, 2, 1, 0);
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
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 1 && 0)
			{
				Function_93(0, 0x40400000);
			}
		}
		Global_21369.f_396 = 0;
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	if (!Function_92())
	{
		return 0;
	}
	if ((&Global_21369 + 72 + 36 == Global_43789 || &Global_21369 + 72 + 36 != 4294967294) && !DECOR_CHECK_EXIST(&Global_54076, "TempDisableRespawn"))
	{
		if (StackVal && (Function_91() < 1 && !DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DontResetHorseEnum")) + 976 != 993)
		{
			Function_90((&Global_21369 + 72)->f_12, 0, 1);
		}
		uVar5 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_playerHorse");
		if (!IS_OBJECT_VALID(&uVar5))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(&uVar5, "PlayerHouse_NoHorse") && !DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
		{
			return 0;
		}
		Function_89(&uVar5);
		Var6 = Function_89(&uVar5);
		Function_88(&uVar5);
		uVar8 = Function_88(&uVar5);
		if (StackVal && Function_71((!IS_ACTOR_VALID(&Global_21369 + 72) && STREAMING_ARE_BOUNDS_LOADED(Var6, 5.0f)), &Global_54076, Var6) > 60.0f)
		{
			uVar12 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/HitchingPost", &Var6, 6.0f, 0);
			if (IS_GRINGO_VALID(&uVar12))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar12), &Var6);
				Function_87(StackVal, Var6, &uVar10, &iVar11);
				uVar12 = "";
				if (!IS_OBJECT_VALID(Function_86(&uVar10, "UseCase1")))
				{
					uVar12 = &uVar10;
				}
				if (!IS_GRINGO_VALID(&uVar12))
				{
					if (!IS_OBJECT_VALID(Function_86(&iVar11, "UseCase1")))
					{
						uVar12 = &iVar11;
					}
				}
				if (IS_GRINGO_VALID(&uVar12))
				{
					Function_80(1, 0, 0, 0, 0, 0, 1, 0);
					uVar13 = &Global_21369 + 72;
					if (IS_ACTOR_VALID(&uVar13))
					{
						SNAP_ACTOR_TO_GRINGO(&uVar13, GET_OBJECT_FROM_GRINGO(&uVar12), "UseCase1", true, 0, 0);
						TASK_PRIORITY_SET(&uVar13, true);
						TASK_USE_GRINGO(&uVar13, &uVar12, "UseCase1", 4294967295, 1);
						if (DECOR_CHECK_EXIST(&uVar5, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
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
		else if (StackVal && Function_71((!IS_ACTOR_VALID(&Global_21369 + 72) && STREAMING_ARE_BOUNDS_LOADED(Var6, 5.0f)), &Global_54076, Var6) > 60.0f)
		{
			uVar14 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &Var6, 6.0f, 0);
			if (IS_GRINGO_VALID(&uVar14))
			{
				Function_80(1, 0, 0, 0, 0, 0, 1, 0);
				uVar15 = &Global_21369 + 72;
				if (IS_ACTOR_VALID(&uVar15))
				{
					SNAP_ACTOR_TO_GRINGO(&uVar15, GET_OBJECT_FROM_GRINGO(&uVar14), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&uVar15, true);
					TASK_USE_GRINGO(&uVar15, &uVar14, "UseCase1", 4294967295, 1);
					if (DECOR_CHECK_EXIST(&uVar5, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(&Global_54076, "OnLoad_ForceSpawnPlayerHorse"))
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
		if (Function_79(&Global_21369 + 72, &Global_54076) < 20.0f)
		{
			memcpy(&cVar16, &Global_44085[Global_437899] + 32, 4);
			stradd(&cVar16, "_playerHorse", 16);
			bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_46715, &cVar16);
			if (!IS_OBJECT_VALID(&bVar20))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(&bVar20, "PlayerHouse_NoHorse"))
			{
				return 0;
			}
			Function_89(&bVar20);
			uVar21 = Function_89(&bVar20);
			if (Function_79(&Global_21369 + 72, &Global_54076) < 60.0f && !Function_78(&Global_21369 + 72, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				uVar23 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar21, 6.0f, 0);
				if (IS_GRINGO_VALID(&uVar23))
				{
					SNAP_ACTOR_TO_GRINGO(&Global_21369 + 72, GET_OBJECT_FROM_GRINGO(&uVar23), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&Global_21369 + 72, true);
					TASK_USE_GRINGO(&Global_21369 + 72, &uVar23, "UseCase1", 4294967295, 1);
				}
				if (!DOES_HORSE_HAVE_ACCESSORY(&Global_21369 + 72, 4))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
			}
			else if (Function_79(&Global_21369 + 72, &Global_54076) < 60.0f)
			{
				uVar24 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar21, 6.0f, 0);
				if (IS_GRINGO_VALID(&uVar24))
				{
					TASK_PRIORITY_SET(&Global_21369 + 72, true);
					TASK_USE_GRINGO(&Global_21369 + 72, &uVar24, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	return 0;
}

bool Function_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x39EC / 14828
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

float Function_79(var uParam0, bool bParam1) //Position: 0x3A0C / 14860
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

var Function_80(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x3B01 / 15105
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
		Function_90(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_92())
		{
			return "";
		}
	}
	if (!Function_85())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_84();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_89(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_89(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_89(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_89(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_83(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_83(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_82(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_82(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_64(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_82(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_82(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_81(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_81(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3E5E / 15966
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

var Function_82() //Position: 0x3EA8 / 16040
{
	int iVar0;
	
	return &iVar0;
}

int Function_83(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3EB1 / 16049
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

void Function_84() //Position: 0x3F51 / 16209
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

bool Function_85() //Position: 0x3FC9 / 16329
{
	if (Function_91() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

var Function_86(var uParam0, int iParam1) //Position: 0x3FDF / 16351
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_87(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x3FEE / 16366
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_70())
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

struct<8> Function_88(int iParam0) //Position: 0x4145 / 16709
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

struct<8> Function_89(bool bParam0) //Position: 0x416E / 16750
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

void Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x4197 / 16791
{
	Global_21473 = iParam0;
	if (&bParam1)
	{
		Function_10(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_10(&Global_21369 + 72 + 32, 64);
	}
	return;
}

int Function_91() //Position: 0x41C6 / 16838
{
	return Global_21369.f_244;
}

bool Function_92() //Position: 0x41D1 / 16849
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_93(float fParam0, float fParam1) //Position: 0x41F1 / 16881
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
	Function_95();
	Function_94();
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

void Function_94() //Position: 0x4302 / 17154
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_95() //Position: 0x4336 / 17206
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

int Function_96(int iParam0) //Position: 0x443C / 17468
{
	if (!Function_97(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_97(int iParam0) //Position: 0x4456 / 17494
{
	if (!Function_3(iParam0))
	{
		return 0;
	}
	if (!Function_98(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_98(int iParam0) //Position: 0x447A / 17530
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_99(bool bParam0, bool bParam1, bool bParam2) //Position: 0x448F / 17551
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_103(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_100(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_100(bParam0, bParam1, bParam2, 4294967295);
}

int Function_100(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x44ED / 17645
{
	var uVar0;
	
	if (!Function_102(bParam2))
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
	uVar0 = Function_103(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_101(uVar0);
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

var Function_101(int iParam0) //Position: 0x4651 / 18001
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

bool Function_102(int iParam0) //Position: 0x468F / 18063
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_103(int iParam0, int iParam1, int iParam2) //Position: 0x46A4 / 18084
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

struct<8> Function_104(int iParam0) //Position: 0x46C4 / 18116
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_105(int iParam0) //Position: 0x46D6 / 18134
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

void Function_106(int iParam0) //Position: 0x4704 / 18180
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

bool Function_107(int iParam0) //Position: 0x473B / 18235
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

bool Function_108(bool bParam0, bool bParam1) //Position: 0x4772 / 18290
{
	int iVar0;
	
	iVar0 = Function_109(bParam0);
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

int Function_109(int iParam0) //Position: 0x47B0 / 18352
{
	if (!Function_110(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_110(bool bParam0) //Position: 0x47CA / 18378
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_111() //Position: 0x47E0 / 18400
{
	(&Global_21369 + 400) = "";
	(&Global_21369 + 408) = "";
	(&Global_21369 + 128) = "";
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		DESTROY_ACTOR(&Global_21369 + 72);
	}
	Function_10(&Global_21369 + 72 + 32, 0x40000000);
	*(&Global_21369 + 72 + 36) = 4294967294;
	return;
}

void Function_112(struct<57> Param0) //Position: 0x482F / 18479
{
	strcpy(&Param0 + 24, "QUESTMANAGER", 16);
	Param0 = 39396;
	*(&Param0 + 8) = 19834;
	*(&Param0 + 16) = 18541;
	Param0.f_56 = 0;
	return;
}

void Function_113() //Position: 0x486D / 18541
{
	Function_114(&Global_99725);
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

void Function_114(struct<43>[] Param0) //Position: 0x48C3 / 18627
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Function_115(&(Param0[iVar043]), iVar0, 0, 1, 1);
		iVar0++;
	}
	return;
}

void Function_115(struct<229> Param0) //Position: 0x48ED / 18669
{
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (((!&bParam2 || Function_122(bParam1)) || Function_121(bParam1)) || bParam1 != &Param0 + 36)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	else if (&bParam2)
	{
		if (Function_18(Global_99725[bParam143].f_228, 64) && bParam1 == &Param0 + 36)
		{
			Function_117(&Param0, bParam1);
		}
		if (!(Function_122(bParam1) || Function_121(bParam1)))
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
		if (!Function_18(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_12(&Param0 + 228, 32);
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
		Function_116(&Param0);
	}
	Function_12(&Param0 + 228, 256);
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

void Function_116(struct<229> Param0) //Position: 0x4AF0 / 19184
{
	if (Function_18(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_12(&Param0 + 228, 1);
	}
	if (Function_18(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_12(&Param0 + 228, 8);
	}
	if (Function_18(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_12(&Param0 + 228, 2);
	}
	if (Function_18(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_12(&Param0 + 228, 4);
	}
	return;
}

void Function_117(struct<153> Param0) //Position: 0x4B7F / 19327
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_119(Function_120(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_118(iParam1)) || Global_116927[iParam16].f_20 != 1)
	{
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
		UNK_0xFF3DB575(&Param0 + 280, 1);
		SET_BLIP_PRIORITY(&Param0 + 280, true);
		SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, fVar2);
		Global_116927[iParam16].f_20 = 1;
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
	}
	SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
	SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, fVar2);
	SET_BLIP_PRIORITY(&Param0 + 272, 3);
	return;
}

bool Function_118(bool bParam0) //Position: 0x4CEE / 19694
{
	if ((Global_116927[bParam06] != 3 || Global_116927[bParam06] != 4) || Global_116927[bParam06] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_119(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4D1A / 19738
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

bool Function_120(int iParam0) //Position: 0x4D3B / 19771
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_121(bool bParam0) //Position: 0x4D50 / 19792
{
	if (Global_116927[bParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_122(bool bParam0) //Position: 0x4D65 / 19813
{
	if (Global_116927[bParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_123() //Position: 0x4D7A / 19834
{
	if (!Global_6607)
	{
		return 0;
	}
	if (!Function_179(10) && !Function_4(1048576))
	{
		return 0;
	}
	if (Function_124(&Global_99725) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_124(struct<43>[] Param0) //Position: 0x4DAB / 19883
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 1000;
	fVar2 = GET_PROFILE_TIME();
	iVar0 = Global_99717.f_12;
	while (iVar0 < (77 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_47151[30])
		{
			Global_99717.f_12 = iVar0;
			return iVar1;
		}
		Function_125(&(Param0[iVar043]), iVar0);
		iVar0++;
	}
	Global_99717.f_12 = 0;
	return iVar1;
}

void Function_125(struct<249> Param0) //Position: 0x4E0D / 19981
{
	char* cVar0[64];
	bool bVar16;
	
	if (Function_178(bParam1))
	{
		Function_12(&Param0 + 228, 64);
		Function_115(&Param0, bParam1, 0, 0, 1);
		return;
	}
	memcpy(&cVar0, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
	stradd(&cVar0, ": ", 64);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		stradd(&cVar0, "DA: Player invalid.", 64);
		Function_115(&Param0, bParam1, 0, 0, 1);
		return;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!Function_47(Global_119936, 4194304))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &Param0 + 312, 1.0f, 20.0f, 1, 1, 0))
			{
				Function_42(&Global_54076, 4194304, 3, 0);
			}
		}
	}
	if (Function_64(StackVal, *(&Param0 + 184)))
	{
		PRINTSTRING("QUEST INDEX: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("Invalid quest position given. Check TTY for quest index.");
		return;
	}
	if (Function_122(bParam1))
	{
		Function_12(&Param0 + 228, 64);
		if (CONVERT_TIME_OF_DAY_TO_INT(&Param0 + 168) >= 0)
		{
			Function_177(&Param0, bParam1);
		}
		if (!Function_18(Param0.f_228, 256))
		{
			stradd(&cVar0, "DA: Quest already completed.", 64);
			Function_115(&Param0, bParam1, 0, 0, 1);
			return;
		}
	}
	if (Function_121(bParam1))
	{
		stradd(&cVar0, "DA: Quest failed.", 64);
		Function_12(&Param0 + 228, 64);
		Function_115(&Param0, bParam1, 0, 0, 1);
		if (CONVERT_TIME_OF_DAY_TO_INT(&Param0 + 160) >= 0)
		{
			Function_177(&Param0, bParam1);
		}
		return;
	}
	if (!Function_122(bParam1))
	{
		if (!Function_118(bParam1))
		{
			if (!Function_175(&Param0, bParam1, 0, 1))
			{
				stradd(&cVar0, "DA: Quest conditions not met.", 64);
				Function_12(&Param0 + 228, 64);
				Function_115(&Param0, bParam1, 0, 0, 1);
				return;
			}
		}
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			stradd(&cVar0, "DA: Not time for quest to start yet.", 64);
			Function_115(&Param0, bParam1, 0, 0, 1);
			Function_12(&Param0 + 228, 64);
			return;
		}
		Param0.f_248 = 0;
	}
	if ((((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28) && bParam1 == &Param0 + 36)
	{
		stradd(&cVar0, "DA: Story or proc mission running.", 64);
		if (bParam1 != 33 && Global_6625)
		{
		}
		else
		{
			Function_12(&Param0 + 228, 64);
			Function_115(&Param0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (!Function_122(bParam1))
	{
		Function_10(&Param0 + 228, 64);
		if (Global_42827 != 4294967295)
		{
			TARGET_JOURNAL_ENTRY(Global_42265[Global_428279].f_64);
			Function_165(Global_42265[Global_428279].f_64);
		}
		if (!Function_164(6))
		{
			if (Function_161(6))
			{
				if (STRING_CONTAINS_STRING(&Param0 + 4, "CALIFORNIA"))
				{
					Function_165(Global_42265[69].f_64);
				}
			}
		}
		if (!Function_164(2))
		{
			if (Function_161(2))
			{
				Function_165(Global_42265[29].f_64);
			}
		}
		if (!Function_164(8))
		{
			if (Function_161(8))
			{
				if (STRING_CONTAINS_STRING(&Param0 + 4, "DEALER") || STRING_CONTAINS_STRING(&Param0 + 4, "OPIATE"))
				{
					Function_165(Global_42265[89].f_64);
				}
			}
		}
		if (!Function_164(9))
		{
			if (Function_161(9))
			{
				if (STRING_CONTAINS_STRING(&Param0 + 4, "LIGHTS"))
				{
					Function_165(Global_42265[99].f_64);
				}
			}
		}
	}
	if (Function_160(Param0.f_216))
	{
		if (Function_159(&(Global_43791[Param0.f_216]), 256))
		{
			stradd(&cVar0, "DA: Quest region has pers chars disabled.", 64);
			Function_115(&Param0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!Function_155(&Param0, bParam1, 1))
		{
			return;
		}
	}
	if (Function_154(bParam1))
	{
		stradd(&cVar0, "DA: Quests should deactivate.", 64);
		Function_115(&Param0, bParam1, 0, 0, 1);
		return;
	}
	if (!Function_122(bParam1))
	{
		if (!(Function_118(bParam1) || Function_152(&Param0)))
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Param0.f_224, 0))
			{
				if (VDIST(*(&Param0 + 184), Global_54078) > 15.0f)
				{
					if (!Function_18(Param0.f_228, 8192))
					{
						Function_149(&Param0);
						Function_10(&Param0 + 228, 8192);
					}
				}
				else
				{
					Function_12(&Param0 + 228, 8192);
				}
			}
			stradd(&cVar0, "DA: Quest time conditions not met.", 64);
			Function_115(&Param0, bParam1, 1, 0, 1);
			return;
		}
	}
	bVar16 = VDIST(*(&Param0 + 184), Global_54078);
	if (bVar16 < Param0.f_148)
	{
		stradd(&cVar0, "DA: Quest too far.", 64);
		Function_115(&Param0, bParam1, 1, 1, 1);
		return;
	}
	if (bVar16 < Param0.f_144)
	{
		return;
	}
	if (Function_122(bParam1))
	{
		stradd(&cVar0, "DA: Quest already completed.", 64);
		return;
	}
	Function_126(&Param0, bParam1);
	return;
}

void Function_126(struct<229> Param0) //Position: 0x53C3 / 21443
{
	bool bVar0;
	char* cVar1[64];
	int iVar17;
	struct<2> Var18;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (bParam1 == 28)
	{
		if (!Function_122(51))
		{
			if (Function_175(&(Global_99725[5143]), 51, 1, 1))
			{
				return;
			}
		}
	}
	if (bParam1 == 55)
	{
		if (IS_OBJECT_VALID(&Global_99725[5443] + 328))
		{
			return;
		}
	}
	Function_148(&Param0);
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
	Function_143(&Param0);
	iVar17 = 1;
	switch (Param0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(&Param0 + 312))
			{
				if (!Function_18(Param0.f_228, 512))
				{
					if (STREAMING_IS_ACTOR_LOADED(Param0.f_220, 4294967295))
					{
						memcpy(&cVar1, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
						stradd(&cVar1, INT_TO_STRING(bParam1), 64);
						*(&Param0 + 312) = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_99717, &cVar1, Param0.f_220, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f));
						Function_134(&Param0, bParam1);
						Function_128(&Param0, bParam1, 1);
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
					Function_128(&Param0, bParam1, 0);
				}
				Function_104(&Param0 + 312);
				if (VDIST(Function_104(&Param0 + 312), *(&Param0 + 184)) > 2.0f)
				{
					Function_134(&Param0, bParam1);
				}
			}
			if (!IS_GRINGO_VALID(&Param0 + 320))
			{
				if (UNK_0x214AFB8C(&Param0 + 120))
				{
					if (Function_160(Param0.f_216))
					{
						if (Function_18(Param0.f_228, 65536) && !Function_159(&(Global_43791[Param0.f_216]), 32))
						{
							iVar17 = 0;
						}
					}
					if (STREAMING_IS_GRINGO_LOADED(&Param0 + 120) && iVar17)
					{
						*(&Param0 + 320) = LOCATE_GRINGO_OF_TYPE_BY_ID(&Param0 + 120, &Param0 + 184, 2.0f);
						if (bParam1 != 1 || bParam1 != 2)
						{
							Var18 = Vector(-2168,42f, 17,017f, 2592,003f);
							if (IS_LAYOUTREF_VALID(&Global_46715))
							{
								*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "Abandoned_Musician"));
								if (IS_GRINGO_VALID(&Param0 + 320))
								{
									GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &Global_99717);
								}
								else
								{
									uVar20 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, "abandoned_prop_vol", 2,802597E-45f, *(&Global_99725[bParam143] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
									RESET_PROPS_IN_VOLUME(&uVar20, 1);
									uVar21 = LOCATE_PHYSINST_OF_TYPE(Var18, 0,7f, "p_gen_chair05x", 1);
									uVar22 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_table_attach", &Var18, 0,7f, 0));
									if (IS_OBJECT_VALID(&uVar22))
									{
										DESTROY_OBJECT(&uVar22);
									}
									if (IS_PHYSINST_VALID(&uVar21))
									{
										if (!IS_GRINGO_VALID(&Param0 + 320))
										{
											*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar21, "Abandoned_Musician", "$/content/scripting/gringo/SimpleGringo/RCM_04_CS03_Musician", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)));
										}
									}
									else
									{
										LOG_ERROR("Could not find the the musician's chair!");
									}
									if (IS_VOLUME_VALID(&uVar20))
									{
										DESTROY_VOLUME(&uVar20);
									}
									GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &Global_99717);
								}
							}
						}
						else if (bParam1 != 17 || bParam1 != 19)
						{
							if (bParam1 == 17)
							{
								*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_99717, "Cannibal3_Gringo"));
							}
							else if (bParam1 == 19)
							{
								*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_99717, "Cannibal5_Gringo"));
							}
							if (IS_GRINGO_VALID(&Param0 + 320))
							{
								GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &Global_99717);
								Function_10(&Param0 + 228, 32);
							}
							else
							{
								uVar23 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, "cannibal_prop_vol", 2,802597E-45f, *(&Global_99725[bParam143] + 184), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
								if (bParam1 == 17)
								{
									uVar24 = LOCATE_PHYSINST_OF_TYPE(*(&Global_99725[bParam143] + 184), 1,7f, "p_gen_chair01x", 1);
								}
								else if (bParam1 == 19)
								{
									uVar24 = LOCATE_PHYSINST_OF_TYPE(*(&Global_99725[bParam143] + 184), 1,7f, "p_gen_chair05x", 1);
								}
								uVar25 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_attach", &Global_99725[bParam143] + 184, 1,5f, 0));
								if (IS_OBJECT_VALID(&uVar25))
								{
									DESTROY_OBJECT(&uVar25);
								}
								if (IS_PHYSINST_VALID(&uVar24))
								{
									if (!IS_GRINGO_VALID(&Param0 + 320))
									{
										if (bParam1 == 17)
										{
											*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar24, "Cannibal3_Gringo", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", Vector(0,22f, 0.0f, 0,25f), Vector(0.0f, 180.0f, 0.0f)));
										}
										else
										{
											*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar24, "Cannibal5_Gringo", "$/content/scripting/gringo/SimpleGringo/RCM_05_CS03_CryingIdle", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)));
										}
									}
								}
								else
								{
									LOG_ERROR("Could not find the chair!");
								}
								if (IS_VOLUME_VALID(&uVar23))
								{
									DESTROY_VOLUME(&uVar23);
								}
								Function_10(&Param0 + 228, 32);
								GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&Param0 + 320), &Global_99717);
							}
						}
						else
						{
							if (bParam1 == 51)
							{
								uVar26 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_fence_l_talking", &Global_99725[bParam143] + 184, 1,5f, 0));
								if (IS_OBJECT_VALID(&uVar26))
								{
									DESTROY_OBJECT(&uVar26);
								}
							}
							else if (bParam1 == 64)
							{
								uVar26 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_rail", &Global_99725[bParam143] + 184, 1,5f, 0));
								if (IS_OBJECT_VALID(&uVar26))
								{
									DESTROY_OBJECT(&uVar26);
								}
							}
							if (IS_GRINGO_VALID(&Param0 + 320))
							{
								Function_10(&Param0 + 228, 32);
							}
							else
							{
								*(&Param0 + 320) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_99717, Function_82(), &Param0 + 120, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f)));
								Function_12(&Param0 + 228, 32);
							}
						}
						Function_127(&Param0, 0);
					}
					else
					{
						return;
					}
				}
			}
			if (bParam1 == 15)
			{
				if (IS_ACTOR_VALID(&Param0 + 312))
				{
					if (GET_TASK_STATUS(&Param0 + 312, 19) != 1 || GET_TASK_STATUS(&Param0 + 312, 19) != 3)
					{
						Function_104(&Param0 + 312);
						if (VDIST(Function_104(&Param0 + 312), *(&Param0 + 184)) > 2.0f && !IS_OBJECT_VALID(&Param0 + 288))
						{
							Function_134(&Param0, bParam1);
						}
					}
					else
					{
						Function_128(&Param0, bParam1, 0);
						if (IS_OBJECT_VALID(&Param0 + 288))
						{
							DESTROY_OBJECT(&Param0 + 288);
						}
						if (IS_BLIP_VALID(&Param0 + 272))
						{
							REMOVE_BLIP(&Param0 + 272);
							REMOVE_BLIP(&Param0 + 280);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&Param0 + 328))
			{
				if (STREAMING_IS_PROP_LOADED(&Param0 + 128))
				{
					*(&Param0 + 328) = CREATE_PROP_IN_LAYOUT_BY_ID(StackVal, &Global_99717, Function_82(), &Param0 + 128, *(&Param0 + 184), Vector(0.0f, Param0.f_208, 0.0f), 1);
					Function_134(&Param0, bParam1);
				}
				else
				{
					return;
				}
			}
			break;
		
		case 0x00000003:
			Function_134(&Param0, bParam1);
			break;
	}
	return;
}

void Function_127(struct<229> Param0) //Position: 0x5D24 / 23844
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
		if (!Function_18(Param0.f_228, 16384))
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

void Function_128(struct<229> Param0) //Position: 0x5E88 / 24200
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	
	AI_DONT_HARM_ACTOR(&Param0 + 312);
	AI_CONVERSE_DISABLE(&Param0 + 312);
	AI_IGNORE_ACTOR(&Param0 + 312);
	SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 312, false);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 0);
	DECOR_SET_BOOL(&Param0 + 312, "CannotPush", 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 0);
	Function_104(&Param0 + 312);
	uVar0 = Function_104(&Param0 + 312);
	bVar2 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&Param0 + 312), &uVar0, 3212836864);
	bVar3 = Function_119(StackVal, *(&Param0 + 184), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(&Param0 + 120))
	{
		if (!Function_18(Param0.f_228, 16384))
		{
			if (!(bVar2 || bVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		Function_133(&Param0);
	}
	else if (!IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_18(Param0.f_228, 16384))
		{
			if (!(bVar2 || bVar3))
			{
				TELEPORT_ACTOR(&Param0 + 312, &Param0 + 184, 1, 1, 1);
			}
		}
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		if (((bParam1 == 1 && bParam1 == 2) && bParam1 == 70) && bParam1 == 27)
		{
			TASK_STAND_STILL(&Param0 + 312, -1.0f, 0, 0);
		}
	}
	else
	{
		Function_127(&Param0, &iParam2);
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
		SQUAD_JOIN(&Param0 + 312, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_99717, Function_82())));
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
	if (bParam1 == 8)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (bParam1 == 9)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE4");
	}
	if (bParam1 == 52)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PREDEED");
	}
	if (bParam1 == 53)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (bParam1 == 25)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM2");
	}
	if (bParam1 == 55)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM14");
	}
	if (bParam1 == 46)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(&Param0 + 312, "RCM_CALL_OVER", "KILLERPIMP_WAITINGFORPAY");
	}
	if (bParam1 == 48)
	{
		AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
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
	uVar5 = Function_131(&Param0);
	SET_RCM_WAS_JOHN_NOW_JACK(&Param0 + 312, uVar5);
	Function_130(bParam1, &uVar6, &uVar7, &uVar8, &uVar9, &uVar10, &uVar11);
	iVar12 = Function_129(bParam1);
	switch (iVar12)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 0, 1, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11);
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
	if (bParam1 == 2)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 1, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 70)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 1, 1, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 27)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 55)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(&Param0 + 312, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(&Param0 + 312, 15.0f);
	MEMORY_CLEAR_EVENTS(&Param0 + 312, 1);
	return;
}

int Function_129(int iParam0) //Position: 0x6446 / 25670
{
	if (Function_70())
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

void Function_130(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x66C5 / 26309
{
	uParam3 = 2;
	uParam4 = 20.0f;
	uParam5 = 7.0f;
	uParam6 = 1;
	if (Function_70())
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

int Function_131(struct<257> Param0) //Position: 0x68E0 / 26848
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
		if (Function_132(Global_99725[iVar143].f_220, uVar0))
		{
			return 0;
		}
		iVar1 = Global_99725[iVar143].f_256;
	}
	return 0;
}

bool Function_132(int iParam0, int iParam1) //Position: 0x6941 / 26945
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

void Function_133(struct<209> Param0) //Position: 0x698B / 27019
{
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		TASK_CLEAR(&Param0 + 312);
		TASK_PRIORITY_SET(&Param0 + 312, 2);
		TASK_GO_TO_COORD_AND_STAY(&Param0 + 312, &Param0 + 184, 1, Param0.f_208);
	}
	return;
}

void Function_134(struct<229> Param0) //Position: 0x69C8 / 27080
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	
	if (Function_18(Param0.f_228, 2048))
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
		Function_142(&Param0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (GET_BLIP_ICON(&Param0 + 272) == 440)
		{
			Var3 = *(&Param0 + 184);
			Var3.f_4 = (StackVal + 0,5f);
			if (!Function_119(StackVal, Var3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_54078, *(&Param0 + 184)) < 42.0f)
			{
				return;
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
				if (Function_160(Param0.f_216))
				{
					Function_139(StackVal, Param0.f_216, 23, *(&Param0 + 184), 63);
				}
				else
				{
					Function_139(StackVal, Global_43789, 23, *(&Param0 + 184), 63);
				}
			}
		}
		else
		{
			if (bParam1 == &Param0 + 36)
			{
				if (Function_160(Param0.f_216))
				{
					Function_135(StackVal, Param0.f_216, 23, Param0.f_184);
				}
				else
				{
					Function_135(StackVal, Global_43789, 23, Param0.f_184);
				}
				Function_12(&Param0 + 228, 4096);
			}
			if (bParam1 == 2)
			{
				*(&Param0 + 184) = Vector(-2168,505f, 16,879f, 2590,258f);
			}
			if (bParam1 == 33)
			{
				*(&Param0 + 184) = Vector(-3951,709f, 25,098f, 2868,928f);
			}
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 2, 7);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 2, 7);
			SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
			UNK_0xFF3DB575(&Param0 + 280, 1);
			SET_BLIP_PRIORITY(&Param0 + 280, true);
			if (&Param0 + 36 != bParam1)
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, 1.0f);
				SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, 1.0f);
			}
			SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		}
	}
	return;
}

void Function_135(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6C55 / 27733
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
		Function_137(Function_138(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_137(Function_138(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_137(StackVal);
				Var1 = Function_137(StackVal);
				if (Function_136(StackVal, StackVal, Var1, Var3))
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

bool Function_136(struct<2> Param0, struct<2> Param2) //Position: 0x6D60 / 28000
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_137(int iParam0) //Position: 0x6D8C / 28044
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

int Function_138(vector3 vParam0) //Position: 0x6DE3 / 28131
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

int Function_139(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x6E31 / 28209
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_160(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_64(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_141(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_138(StackVal, Param2);
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
		Function_137(uVar3);
		Var6 = Function_137(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_137(StackVal);
				Var4 = Function_137(StackVal);
				if (Function_136(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_140(iParam1), 0.0f, 2, iVar2);
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

int Function_140(int iParam0) //Position: 0x701A / 28698
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

int Function_141(int iParam0) //Position: 0x7151 / 29009
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

void Function_142(struct<229> Param0) //Position: 0x7209 / 29193
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_18(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_82(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_143(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_143(struct<217> Param0) //Position: 0x72D9 / 29401
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_82(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_160(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_82(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_144(&uVar1, 0);
	return;
}

int Function_144(var uParam0, int iParam1) //Position: 0x7397 / 29591
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
	Function_146(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_145(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_145(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7501 / 29953
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_146(int iParam0) //Position: 0x75A9 / 30121
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
						Function_147(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_71(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_147(iVar0);
						}
					}
					else if (Function_71(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_147(iVar0);
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
			Function_147(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_147(int iParam0) //Position: 0x7717 / 30487
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

void Function_148(struct<229> Param0) //Position: 0x777F / 30591
{
	if (!Function_18(Param0.f_228, 1))
	{
		if (Param0.f_220 != 4294967295)
		{
			STREAMING_REQUEST_ACTOR(Param0.f_220, 1, true);
			Function_10(&Param0 + 228, 1);
		}
	}
	if (!Function_18(Param0.f_228, 8))
	{
		REQUEST_STRING_TABLE("RandomCharMissions");
		Function_10(&Param0 + 228, 8);
	}
	if (!Function_18(Param0.f_228, 2))
	{
		if (UNK_0x214AFB8C(&Param0 + 120))
		{
			STREAMING_REQUEST_GRINGO(&Param0 + 120);
			Function_10(&Param0 + 228, 2);
		}
	}
	if (!Function_18(Param0.f_228, 4))
	{
		if (UNK_0x214AFB8C(&Param0 + 128))
		{
			STREAMING_REQUEST_PROP(&Param0 + 128, false);
			Function_10(&Param0 + 228, 4);
		}
	}
	return;
}

void Function_149(struct<261> Param0) //Position: 0x7836 / 30774
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
		iVar0 = Function_151(Param0.f_260);
		iVar1 = Function_150(Param0.f_260);
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

int Function_150(int iParam0) //Position: 0x7AAC / 31404
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

int Function_151(int iParam0) //Position: 0x7B15 / 31509
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

int Function_152(struct<261> Param0) //Position: 0x7B7E / 31614
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_153(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_153(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_153(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_153(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_153(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_153(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_153(var uParam0, int iParam1) //Position: 0x7C39 / 31801
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_154(bool bParam0) //Position: 0x7C56 / 31830
{
	if (!Function_4(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_18(Global_99725[bParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_47(Global_119935, 0x8000000))
			{
				Function_42(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_155(struct<237> Param0) //Position: 0x7CB1 / 31921
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
		if (!Function_158(&Param0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_115(&Param0, bParam1, 0, 0, &bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar17)
				{
					if (Function_70())
					{
						Function_157(bParam1, 1);
					}
					else
					{
						Function_156(bParam1);
					}
				}
				else
				{
					Function_68("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
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
			Function_115(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_115(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_115(&Param0, bParam1, 0, 0, &bParam2);
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
						if (Function_70())
						{
							Function_157(bParam1, 1);
						}
						else
						{
							Function_156(bParam1);
						}
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_68("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_116927[bParam16] = 7;
						*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
					}
				}
				else
				{
					Function_68("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
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
			Function_115(&Param0, bParam1, 0, 0, &bParam2);
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

void Function_156(bool bParam0) //Position: 0x812C / 33068
{
	char* cVar0[32];
	
	Global_116927[bParam06] = 7;
	*(&Global_116927[bParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam06] + 8, &Global_99725[bParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[bParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
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
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam043].f_224, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

void Function_157(bool bParam0, bool bParam1) //Position: 0x8295 / 33429
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
	if (!Function_47(Global_119934, 8192))
	{
		Function_42(&Global_54076, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam043].f_224, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

bool Function_158(struct<237> Param0) //Position: 0x841E / 33822
{
	if (!Param0.f_236)
	{
		if (Function_70())
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

bool Function_159(var uParam0, int iParam1) //Position: 0x84ED / 34029
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_160(bool bParam0) //Position: 0x850A / 34058
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x8520 / 34080
{
	if (!Function_163(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_162(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_162(int iParam0, int iParam1) //Position: 0x8572 / 34162
{
	int iVar0;
	
	if (!Function_163(iParam0))
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

bool Function_163(int iParam0) //Position: 0x859F / 34207
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_164(int iParam0) //Position: 0x85B5 / 34229
{
	if (!Function_163(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_162(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

void Function_165(int iParam0) //Position: 0x8606 / 34310
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_174(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_42833)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_42265)
			{
				if (Function_161(iVar6) && !Function_164(iVar6))
				{
					if (iParam0 == Global_42265[iVar69].f_64)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_173();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_172(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_169();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (&Global_99725[iVar143] + 36 == iVar2)
			{
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 272))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 272);
				}
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 280))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 280);
				}
				if (!Function_18(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_166(&(Global_99725[iVar143]), iVar3))
					{
						Function_10(&Global_99725[iVar143] + 228, 64);
						Function_117(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_142(&(Global_99725[iVar143]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
				{
					DESTROY_OBJECT(&Global_99725[iVar143] + 288);
				}
				iVar1++;
			}
			break;
	}
	return;
}

bool Function_166(struct<249> Param0) //Position: 0x87C0 / 34752
{
	if (Function_18(Global_99725[bParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_120(bParam1))
	{
		Function_10(&Global_99725[bParam143] + 228, 64);
		return 1;
	}
	if ((Function_178(bParam1) || Function_122(bParam1)) || Function_121(bParam1))
	{
		return 0;
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			return 0;
		}
	}
	if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return 0;
	}
	if (Function_160(Param0.f_216))
	{
		if (Function_159(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_154(bParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_158(&Param0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(&Param0 + 312))
			{
				return 0;
			}
		}
	}
	if (!Function_167(&Param0, bParam1))
	{
		return 0;
	}
	Function_10(&Global_99725[bParam143] + 228, 64);
	return 1;
}

bool Function_167(struct<265> Param0) //Position: 0x88F0 / 35056
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_153(&Param0 + 260, 4))
		{
			if (!Function_168(iParam1))
			{
				return 0;
			}
		}
		if (Function_153(&Param0 + 260, 1))
		{
			if (!Function_122(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_153(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_109(Param0.f_264);
			if (Function_97(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_153(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_97(Param0.f_252))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_153(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_153(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_153(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_153(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_153(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_153(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x8A51 / 35409
{
	return Global_116927[iParam06].f_16;
}

void Function_169() //Position: 0x8A61 / 35425
{
	if (Function_163(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_171(Global_42827);
			*(&Global_42827 + 8) = Function_170(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_171(Global_42827);
			*(&Global_42827 + 8) = Function_170(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_170(int iParam0, int iParam1) //Position: 0x8AE1 / 35553
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
					if (Function_108(6, 0) || Function_108(12, 0))
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
					if (Function_122(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_108(5, 0))
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
					if (Function_122(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_122(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_122(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_122(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_108(26, 0))
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
					if (Function_122(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_122(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_122(27) && iVar16)
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
					if (Function_122(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_122(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_122(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_122(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_108(17, 0) && iVar13)
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
					if (Function_122(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_108(6, 0) && Function_122(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_122(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_108(9, 0) && Function_122(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_122(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_108(8, 0) && iVar17)
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
	if (Function_64(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_64(StackVal, vVar2))
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
	if (!Function_64(StackVal, vVar2))
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

int Function_171(int iParam0) //Position: 0x9744 / 38724
{
	int iVar0;
	int iVar1;
	
	if (!Function_163(iParam0))
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

int Function_172(int iParam0) //Position: 0x9793 / 38803
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_163(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_164(iParam0))
	{
		return 0;
	}
	if (!Function_161(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_173() //Position: 0x97FC / 38908
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

void Function_174(int iParam0) //Position: 0x9821 / 38945
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_173();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

bool Function_175(struct<265> Param0) //Position: 0x985B / 39003
{
	if (!Param0.f_260 != 0)
	{
		if (Function_153(&Param0 + 260, 4))
		{
			if (!Function_168(iParam1))
			{
				return 0;
			}
		}
		if (Function_153(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_122(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_153(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_108(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_153(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_176(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_152(&Param0);
	}
	return 1;
}

bool Function_176(int iParam0, bool bParam1) //Position: 0x9927 / 39207
{
	if (!Function_97(iParam0))
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

void Function_177(struct<149> Param0) //Position: 0x995E / 39262
{
	if (IS_LATER_THAN(GET_TIME_OF_DAY(), &Global_116927[bParam16] + 8))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (VDIST((&Param0 + 184), Global_54078) < Param0.f_148)
			{
				Global_116927[bParam16] = 1;
				SET_JOURNAL_ENTRY_PROGRESS(Global_99725[bParam143].f_224, -1.0f, 0, 0);
			}
		}
	}
	return;
}

bool Function_178(int iParam0) //Position: 0x99B3 / 39347
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_179(int iParam0) //Position: 0x99C8 / 39368
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_180() //Position: 0x99E4 / 39396
{
	Global_99717 = CREATE_LAYOUT("QuestLayout");
	return;
}

void Function_181(struct<57> Param0) //Position: 0x9A00 / 39424
{
	strcpy(&Param0 + 24, "nMINIGAMES", 16);
	Param0 = 88582;
	*(&Param0 + 8) = 39483;
	*(&Param0 + 16) = 88582;
	Param0.f_56 = 0;
	return;
}

int Function_182() //Position: 0x9A3B / 39483
{
	if (Function_183(&Global_98318, 0) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_183(struct<28>[] Param0, bool bParam1) //Position: 0x9A50 / 39504
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
				Function_370();
			}
			else if (Global_98253 == 4294967294)
			{
				Function_369();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", 1);
			return bVar1;
		}
	}
	if (!Global_47312 != 0)
	{
		iVar0 = 0;
		while (iVar0 < (Param0 - 1))
		{
			if (IS_SCRIPT_VALID(&Param0[iVar028] + 160))
			{
				TERMINATE_SCRIPT(&Param0[iVar028] + 160);
			}
			iVar0++;
		}
		Global_47312 = 0;
	}
	Function_368(&Param0);
	if (((Global_6646 || Global_6650) || Global_6647) || Function_367(2048))
	{
		Function_366(&Param0);
		return bVar1;
	}
	if (Global_6625)
	{
		Function_366(&Param0);
		return bVar1;
	}
	if (Global_6635)
	{
		Function_366(&Param0);
		return bVar1;
	}
	if (Global_6627)
	{
		Function_366(&Param0);
		if (Global_6626)
		{
			Global_6626 = 0;
		}
		return bVar1;
	}
	if (Global_6623)
	{
		Function_366(&Param0);
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
	if (!bParam1 && Function_365(Global_43789))
	{
		Function_366(&Param0);
		return bVar1;
	}
	if (Global_6622)
	{
		Function_366(&Param0);
		Global_6623 = 1;
		Function_363(1, 0);
		return bVar1;
	}
	if (Global_6626)
	{
		Function_366(&Param0);
		Global_6627 = 1;
		Function_363(0, 0);
		return bVar1;
	}
	if (Global_99146 && !Function_361(&Global_99130))
	{
		Function_366(&Param0);
		return bVar1;
	}
	if ((Function_360(1, 0, 0, 5) && !Global_6627) && !Global_6623)
	{
		Function_366(&Param0);
		return bVar1;
	}
	if (bParam1)
	{
		if (!Global_47341 != 0)
		{
			iVar2 = Function_99(StackVal, StackVal, Global_47341);
			if (Function_97(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_359(&Param0, iVar2) };
				if (!Var3.f_152 != 0)
				{
					Function_246(&Var3, 0, 0, 0);
				}
			}
			Global_47341 = 0;
		}
	}
	if (Global_53524.f_36 && Global_6607)
	{
		if (Function_110(Global_53524.f_20))
		{
			if (!Global_6667[Global_53524.f_2028].f_152 != 0)
			{
				Function_246(&(Global_6667[Global_53524.f_2028]), 0, 1, 1);
				Global_53524.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Param0[iVar028] != Global_43786 || !bParam1)
		{
			Function_184(&(Param0[iVar028]), iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_6649 = 0;
	}
	return bVar1;
}

void Function_184(struct<209> Param0) //Position: 0x9D00 / 40192
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
			Function_245(&Param0, iParam1);
			return;
		}
	}
	if (Function_108(iParam1, 0) && !Param0.f_152 != 2)
	{
		Function_245(&Param0, iParam1);
		return;
	}
	iVar0 = Function_244(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_243(&Param0))
		{
			Function_245(&Param0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(&Param0 + 160))
	{
		Function_245(&Param0, iParam1);
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
					if (!Function_242(&Param0))
					{
						Param0.f_180 = 0;
						Function_241(&Param0 + 144, 0, Param0.f_184);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
							}
						}
					}
					else if (Function_236(&Param0))
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
							Function_241(&Param0 + 144, 0, Param0.f_184);
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
						Function_241(&Param0 + 144, 1, Param0.f_184);
						if (Function_153(&Param0 + 184, 4096))
						{
							Function_235(&Param0 + 184, 4096);
						}
					}
					fVar13 = Function_234(StackVal, StackVal, Global_54078, *(&Param0 + 88));
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
								*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_82(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
								if (fVar13 > 175.0f)
								{
									Function_235(&Param0 + 184, 8388608);
								}
								else
								{
									Function_233(&Param0 + 184, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(&Param0 + 72) && (!Param0.f_172 || Param0.f_180)) && ((!iParam1 != 14 || fVar13 < 100.0f) || Global_6649)) && ((fVar13 < 7,5f || (Param0.f_172 && Param0.f_180)) || Global_6649)) && (!Function_153(&Param0 + 184, 1048576) || Param0.f_180))
					{
						Function_226(&Param0);
						if (Param0.f_184 & 524288 >= 0)
						{
							Function_225(4194304);
						}
						if (Param0.f_180)
						{
							if (IS_BLIP_VALID(&Param0 + 144))
							{
								REMOVE_BLIP(&Param0 + 144);
							}
							*(&Param0 + 72) = Function_224(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, Param0.f_100, 0, 3, Param0.f_136, 3, 1, 3212836864, 3212836864, 1);
							*(&Param0 + 144) = GET_BLIP_ON_OBJECT(&Param0 + 72);
						}
						else if (!IS_BLIP_VALID(&Param0 + 144))
						{
							*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						}
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_241(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					else if (!Param0.f_180 && IS_OBJECT_VALID(&Param0 + 72))
					{
						if (IS_BLIP_VALID(&Param0 + 144))
						{
							REMOVE_BLIP(&Param0 + 144);
						}
						Function_223(&Param0 + 72);
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_241(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					else if (!Param0.f_180 && !IS_BLIP_VALID(&Param0 + 144))
					{
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_241(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					if ((!Param0.f_168 && !Param0.f_180) && iVar0 == 1)
					{
						if (fVar13 > 5.0f)
						{
							if (!Param0.f_172)
							{
								Function_221(&Param0);
								if (IS_OBJECT_VALID(&Param0 + 72))
								{
									Function_223(&Param0 + 72);
									*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
									SET_BLIP_PRIORITY(&Param0 + 144, 3);
									Function_241(&Param0 + 144, Param0.f_180, Param0.f_184);
								}
								Param0.f_172 = 1;
							}
						}
						else if (Param0.f_172)
						{
							Param0.f_172 = 0;
						}
					}
					else if ((Function_153(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
					{
						if (fVar13 > 5.0f && !Function_153(&Param0 + 184, 8388608))
						{
							Function_68("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
					{
						if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && fVar13 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
							{
								Function_68("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
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
			if (!Function_242(&Param0))
			{
				Param0.f_180 = 0;
				Function_241(&Param0 + 144, 0, Param0.f_184);
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
			else if (Function_236(&Param0))
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
					Function_241(&Param0 + 144, 0, Param0.f_184);
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
				Function_241(&Param0 + 144, 1, Param0.f_184);
				if (Function_153(&Param0 + 184, 4096))
				{
					Function_235(&Param0 + 184, 4096);
				}
			}
			fVar13 = Function_234(StackVal, StackVal, Global_54078, *(&Param0 + 88));
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
						*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_82(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
						if (fVar13 > 175.0f)
						{
							Function_235(&Param0 + 184, 8388608);
						}
						else
						{
							Function_233(&Param0 + 184, 8388608);
						}
					}
				}
			}
			if (((!Param0.f_172 && !IS_BLIP_VALID(&Param0 + 144)) && !bVar9) && (!Function_153(&Param0 + 184, 1048576) || Param0.f_180))
			{
				Function_226(&Param0);
				if (Param0.f_184 & 524288 >= 0)
				{
					Function_225(4194304);
				}
				*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
				SET_BLIP_PRIORITY(&Param0 + 144, 3);
				Function_241(&Param0 + 144, Param0.f_180, Param0.f_184);
			}
			if (((!IS_OBJECT_VALID(&Param0 + 72) && !bVar9) && Param0.f_180) && (!Function_153(&Param0 + 184, 4194304) || Function_153(&Param0 + 184, 8388608)))
			{
				*(&Param0 + 72) = Function_224(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 2,5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!Param0.f_168 && !Param0.f_180)
			{
				if (IS_OBJECT_VALID(&Param0 + 72))
				{
					Function_223(&Param0 + 72);
				}
				if (bVar9)
				{
					if (!Param0.f_172)
					{
						Param0.f_172 = 1;
						Function_221(&Param0);
					}
				}
				else if (Param0.f_172)
				{
					Param0.f_172 = 0;
				}
			}
			else if ((Function_153(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
			{
				if (bVar9 && !Function_153(&Param0 + 184, 8388608))
				{
					Function_68("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
			{
				if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						Function_68("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						Param0.f_176 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar14 = iParam1;
			if (!Function_242(&Param0) || Global_6646)
			{
				Param0.f_180 = 0;
			}
			else
			{
				Param0.f_180 = 1;
			}
			iVar16 = Function_220();
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
					bVar17 = Function_219(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 0);
					break;
				
				case 0x00000001:
					bVar17 = Function_219(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 1);
					break;
				
				case 0x00000007:
					bVar17 = Function_218(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000002:
					bVar17 = Function_216(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000008:
					bVar17 = Function_214(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000004:
					bVar17 = Function_211(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000005:
					bVar17 = Function_210(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
			}
			if (iVar14 == 1)
			{
				if (Global_42825 != 1)
				{
					bVar19 = true;
				}
			}
			if (((IS_ACTOR_VALID(&Global_54076) && Function_209(iParam1)) && !bVar15) && !bVar19)
			{
				if (!Param0.f_168 && ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(&Param0 + 64) && IS_LAYOUTREF_VALID(&Global_46715))
					{
						*(&Param0 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, &Global_46715, Function_82(), *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f));
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
						if (!Function_208(iParam1))
						{
							if (Function_207(StackVal, *(&Param0 + 88), 1,25f))
							{
								if (Function_204(iParam1, 1))
								{
									Function_139(StackVal, Param0.f_112, (1 + iParam1), *(&Param0 + 88), Function_203(Param0.f_184));
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
					if ((bVar18 && bVar15) && !Function_47(Global_119936, 8388608))
					{
						Function_42(&Global_54076, 8388608, 1, 1);
					}
					if (bVar20)
					{
						switch (iVar14)
						{
							case 0x00000000:
								Function_200(Param0.f_112, &Param0 + 48, 0);
								break;
							
							case 0x00000001:
								Function_200(Param0.f_112, &Param0 + 48, 1);
								break;
							
							case 0x00000007:
								Function_198(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000002:
								Function_194(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000008:
								Function_192(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000004:
								Function_190(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000005:
								Function_188(Param0.f_112, &Param0 + 48);
								break;
							}
					}
					if (bVar18)
					{
						if (bVar17)
						{
							if (!bVar15)
							{
								if (!Function_48(Function_187(), 0, 0))
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
							if (Function_153(&Param0 + 184, 8192))
							{
								if (Function_185() <= Param0.f_196)
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

int Function_185() //Position: 0xABD4 / 43988
{
	return Function_186(0);
}

int Function_186(bool bParam0) //Position: 0xABDE / 43998
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

int Function_187() //Position: 0xAC1F / 44063
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_188(bool bParam0, var uParam1) //Position: 0xAC34 / 44084
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_189(bParam0, 0);
			Function_189(bParam0, 1);
			if (StackVal > Function_234(StackVal, Function_234(StackVal, StackVal, Global_54078, Function_189(bParam0, 0)), Global_54078, Function_189(bParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_189(bParam0, iVar1);
			uVar2 = Function_189(bParam0, iVar1);
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

struct<8> Function_189(int iParam0, int iParam1) //Position: 0xAD1F / 44319
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

void Function_190(bool bParam0, var uParam1) //Position: 0xAE40 / 44608
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
			Function_191(bParam0);
			uVar2 = Function_191(bParam0);
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

struct<8> Function_191(int iParam0) //Position: 0xAF0A / 44810
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

void Function_192(bool bParam0, var uParam1) //Position: 0xAFBA / 44986
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
			Function_193(bParam0);
			uVar2 = Function_193(bParam0);
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

struct<8> Function_193(int iParam0) //Position: 0xB088 / 45192
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

void Function_194(int iParam0, int iParam1) //Position: 0xB15C / 45404
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
			Function_197(iParam0);
			uVar2 = Function_197(iParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				uVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&uVar4))
				{
					if (Function_195(GET_OBJECT_FROM_ACTOR(&uVar4), GET_OBJECT_FROM_ACTOR(&Global_54076)))
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

bool Function_195(var uParam0, int iParam1) //Position: 0xB296 / 45718
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&iParam1), &Var0);
	return Function_196(StackVal, &uParam0, Var0);
}

int Function_196(var uParam0, struct<2> Param1) //Position: 0xB2B2 / 45746
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

struct<8> Function_197(int iParam0) //Position: 0xB2F0 / 45808
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

void Function_198(int iParam0, int iParam1) //Position: 0xB395 / 45973
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
					Function_199(iParam0, bVar5);
					uVar0 = Function_199(iParam0, bVar5);
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
					Function_199(iParam0, bVar5);
					uVar0 = Function_199(iParam0, bVar5);
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

struct<8> Function_199(int iParam0, bool bParam1) //Position: 0xB52B / 46379
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

void Function_200(int iParam0, var uParam1, bool bParam2) //Position: 0xB818 / 47128
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
					Function_202(iParam0, bVar3, &bParam2);
					uVar0 = Function_201(StackVal, Function_202(iParam0, bVar3, &bParam2));
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
					Function_202(iParam0, bVar3, &bParam2);
					uVar0 = Function_201(StackVal, Function_202(iParam0, bVar3, &bParam2));
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

var Function_201(var uParam0, int iParam1) //Position: 0xB9BD / 47549
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

struct<8> Function_202(int iParam0, bool bParam1, bool bParam2) //Position: 0xB9FF / 47615
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

int Function_203(int iParam0) //Position: 0xBFAB / 49067
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

bool Function_204(int iParam0, int iParam1) //Position: 0xC014 / 49172
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_205(iVar0, &iParam1);
}

int Function_205(int iParam0, bool bParam1) //Position: 0xC028 / 49192
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_39380[iParam0] && (!&bParam1 || !Function_206())) && !bVar0)
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
		Function_68(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_206() //Position: 0xC273 / 49779
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_207(struct<2> Param0, float fParam2) //Position: 0xC2A0 / 49824
{
	return VDIST(Param0, Global_54078) > (GET_RADAR_RADIUS() * &fParam2);
}

bool Function_208(int iParam0) //Position: 0xC2BA / 49850
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_209(int iParam0) //Position: 0xC2DD / 49885
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_39266[iParam0];
}

int Function_210(int iParam0, bool bParam1, int iParam2) //Position: 0xC2F9 / 49913
{
	int iVar0;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	var uVar6;
	
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_189(iParam0, 0);
	iVar0 = Function_189(iParam0, 0);
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
	Function_189(iParam0, 1);
	iVar0 = Function_189(iParam0, 1);
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
			Function_189(iParam0, 0);
			fVar5 = Function_234(StackVal, StackVal, Global_54078, Function_189(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(&uVar4))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar4, "UseCase1"))))
		{
			uVar6 = &uVar4;
			Function_189(iParam0, 1);
			fVar5 = Function_234(StackVal, StackVal, Global_54078, Function_189(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(&uVar6))
	{
		return 0;
	}
	if (fVar5 > 2.0f)
	{
		if (!Function_48(&Global_54076, 1, 1))
		{
			bParam1 = 1;
		}
	}
	return 1;
}

int Function_211(bool bParam0, bool bParam1, int iParam2) //Position: 0xC503 / 50435
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
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_191(bParam0);
	Var6 = Function_191(bParam0);
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
	Function_213(bParam0);
	Var6 = Function_213(bParam0);
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
		fVar9 = Function_234(StackVal, StackVal, Global_54078, Var6);
		if (fVar9 > 2.0f && !Function_48(&Global_54076, 1, 1))
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
		Function_212(bParam0, iVar10);
		Var6 = Function_212(bParam0, iVar10);
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

struct<8> Function_212(int iParam0, int iParam1) //Position: 0xC980 / 51584
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

struct<8> Function_213(int iParam0) //Position: 0xCAB0 / 51888
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

int Function_214(var uParam0, var uParam1, int iParam2) //Position: 0xCB64 / 52068
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
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_193(uParam0);
	Var4 = Function_193(uParam0);
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
	Function_215(uParam0);
	Var4 = Function_215(uParam0);
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
		fVar8 = Function_234(StackVal, StackVal, Global_54078, Var4);
		if (fVar8 > 2.0f)
		{
			if (!Function_48(&Global_54076, 1, 1))
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

struct<8> Function_215(int iParam0) //Position: 0xCE49 / 52809
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

int Function_216(int iParam0, float fParam1, int iParam2) //Position: 0xCF21 / 53025
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
	
	Function_197(iParam0);
	Var4 = Function_197(iParam0);
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
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar8 = true;
	iVar14 = 0;
	fVar15 = -1.0f;
	bVar13 = false;
	while (bVar13 <= 3)
	{
		Function_217(iParam0, bVar13);
		Var4 = Function_217(iParam0, bVar13);
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
				fVar19 = Function_234(StackVal, StackVal, Global_54078, Var4);
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
	else if (!Function_48(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

struct<8> Function_217(int iParam0, int iParam1) //Position: 0xD203 / 53763
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

int Function_218(int iParam0, float fParam1, int iParam2) //Position: 0xD3B8 / 54200
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
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar12 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_199(iParam0, bVar0);
		Var3 = Function_199(iParam0, bVar0);
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
				fVar23 = Function_234(StackVal, StackVal, Global_54078, Var3);
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
	else if (!Function_48(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

int Function_219(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xD603 / 54787
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
		uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), GET_AMBIENT_LAYOUT(), 12, 0);
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
			Function_202(uParam0, bVar0, &iParam3);
			uVar13[bVar0] = Function_201(StackVal, Function_202(uParam0, bVar0, &iParam3));
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
				fVar23 = Function_234(StackVal, StackVal, Global_54078, Var3);
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
	else if (!Function_48(&Global_54076, 1, 1))
	{
		uParam1 = 1;
	}
	return 1;
}

int Function_220() //Position: 0xD806 / 55302
{
	return StackVal;
}

void Function_221(struct<205> Param0) //Position: 0xD811 / 55313
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
		if (Function_236(&Param0))
		{
			if (Function_153(&Param0 + 184, 4194304))
			{
				Function_68("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_68("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_151(Param0.f_184);
		iVar1 = Function_150(Param0.f_184);
		if (Function_153(&Param0 + 184, 4096) && !Function_153(&Param0 + 184, 4194304))
		{
			if (Function_153(&Param0 + 184, 1))
			{
				uVar8 = Function_222(Function_109(Param0.f_188));
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

var Function_222(int iParam0) //Position: 0xDD85 / 56709
{
	if (!Function_97(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return &Global_21684[iParam07] + 40;
}

void Function_223(float fParam0) //Position: 0xDDA5 / 56741
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		if (DECOR_CHECK_EXIST(&fParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&fParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&fParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&fParam0, "voldestroy"))
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
		DESTROY_OBJECT(&fParam0);
	}
	return;
}

bool Function_224(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0xDE3B / 56891
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

void Function_225(bool bParam0) //Position: 0xDF26 / 57126
{
	if (Function_18(bParam0, 1) && !Function_18(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_226(struct<185> Param0) //Position: 0xDF53 / 57171
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 1);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 1);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_227(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_227(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xDFC2 / 57282
{
	int iVar0;
	bool bVar1;
	
	Function_232(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_231(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_228(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_228(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE03C / 57404
{
	int iVar0;
	
	Function_232(bParam0);
	Function_230(&bParam1);
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
	Function_229();
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

void Function_229() //Position: 0xE1BB / 57787
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_230(int iParam0) //Position: 0xE1C7 / 57799
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_231(bool bParam0, bool bParam1) //Position: 0xE211 / 57873
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_232(bParam0);
	Function_230(&bVar0);
	PRINTNL();
	Function_228(bParam0, &bVar0, &bParam1);
	return;
}

void Function_232(int iParam0) //Position: 0xE23A / 57914
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

void Function_233(var uParam0, int iParam1) //Position: 0xE280 / 57984
{
	uParam0 = (uParam0 || iParam1);
	return;
}

float Function_234(struct<2> Param0, struct<2> Param2) //Position: 0xE291 / 58001
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

void Function_235(var uParam0, int iParam1) //Position: 0xE2AE / 58030
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_236(struct<209> Param0) //Position: 0xE2C8 / 58056
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
							Function_240(&Param0 + 216);
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
						if (Function_237(&iVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((Param0.f_56 != 11 || Param0.f_56 != 12) || Param0.f_56 != 13))
						{
							Function_240(&Param0 + 216);
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
						Function_240(&Param0 + 216);
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
	else if (Function_71(StackVal, &Global_54076, *(&Param0 + 88)) < 100.0f)
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

int Function_237(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xE4E1 / 58593
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
		fVar0 = Function_79(&iParam0, &Global_54076);
		if (!Function_18(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_238(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_238(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_238(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_18(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_238(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_238(int iParam0) //Position: 0xE6AA / 59050
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_239(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_239(int iParam0) //Position: 0xE6E7 / 59111
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_240(int iParam0) //Position: 0xE700 / 59136
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

void Function_241(var uParam0, bool bParam1, int iParam2) //Position: 0xE735 / 59189
{
	if (!IS_BLIP_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_153(&iParam2, 4194304) && !Function_153(&iParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(&uParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_SCALE(&uParam0, 1,25f);
	}
	else
	{
		SET_BLIP_COLOR(&uParam0, 1.0f, 1.0f, 1.0f, 0,75f);
		SET_BLIP_SCALE(&uParam0, 1.0f);
	}
	return;
}

bool Function_242(struct<205> Param0) //Position: 0xE797 / 59287
{
	var uVar0;
	var uVar1;
	
	if (!Param0.f_184 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_153(&Param0 + 184, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_153(&Param0 + 184, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_153(&Param0 + 184, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_153(&Param0 + 184, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_153(&Param0 + 184, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_153(&Param0 + 184, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_153(&Param0 + 184, 4096))
		{
			if (Function_153(&Param0 + 184, 1))
			{
				uVar0 = Function_222(Function_109(Param0.f_188));
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

bool Function_243(struct<201> Param0) //Position: 0xE8A2 / 59554
{
	var uVar0;
	
	if (!Param0.f_184 != 0)
	{
		uVar0 = Param0.f_184;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_108(Param0.f_188, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_108(Param0.f_192, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_108(Param0.f_196, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_108(Param0.f_200, 0))
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

int Function_244(int iParam0) //Position: 0xE947 / 59719
{
	if (!Function_97(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_245(struct<181> Param0) //Position: 0xE961 / 59745
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
				Function_223(&Param0 + 72);
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

void Function_246(struct<197> Param0) //Position: 0xEA78 / 60024
{
	struct<4> Var0;
	
	if ((Function_358(StackVal) != 48 && !bParam2) && !Global_6624)
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
				Function_356(&(Global_6667[Function_358(StackVal)28]));
			}
			else if (Function_2(StackVal) == 4)
			{
				Function_355(StackVal, Param0.f_196);
				Global_6626 = 1;
			}
			Function_353();
			Function_363(0, 0);
			*(&Param0 + 160) = Function_248(StackVal, &Param0 + 8, bParam2, 0, &iParam3, 0);
			Param0.f_168 = 0;
			Param0.f_180 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_2(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_247(Function_358(StackVal)) };
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
			Var0 = { StackVal, StackVal, StackVal, Function_247(Function_358(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_356(&(Global_6667[Function_358(StackVal)28]));
		}
		else if (Function_2(StackVal) == 4)
		{
			Function_355(StackVal, Param0.f_196);
			Global_6626 = 1;
		}
		SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
		Function_353();
		Function_363(0, 0);
		*(&Param0 + 160) = Function_248(StackVal, &Param0 + 8, bParam2, 0, 1, 0);
		Param0.f_168 = 0;
		Param0.f_180 = 0;
	}
}

struct<16> Function_247(bool bParam0) //Position: 0xEC2B / 60459
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_110(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16);
}

bool Function_248(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xEC5C / 60508
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<41> Var62;
	
	if (Function_2(iParam1) == 1)
	{
		Function_363(1, 0);
	}
	else
	{
		Function_363(0, 0);
	}
	bVar1 = Function_358(iParam1);
	if (!Global_6606 || Global_6624)
	{
		if (Function_2(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_316(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_315(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_314(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_313(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_312(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_97(Function_109(iVar61)))
					{
						Function_310(Function_109(iVar61));
					}
					iVar61++;
				}
				Function_308();
				Function_306(Function_185(), 0);
				Function_305();
				if (bVar1 == 1)
				{
					Function_310(Function_109(2));
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
		Function_304(18, bVar1, 0);
		Function_302(18, &Global_6667[bVar128] + 16, 0, 1);
		if (!bParam2)
		{
			Function_300(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_53524.f_188 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var68 = { StackVal, StackVal, StackVal, Function_299(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var68), 16);
	Var62.f_36 = bParam2;
	Var62.f_40 = &iParam3;
	Function_295(0);
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
	if (((IS_OBJECT_VALID(&Global_99130 + 32) || Function_18(Global_99130.f_40, 2)) || Function_18(Global_99130.f_40, 1)) || Function_18(Global_99130.f_40, 65536))
	{
		Function_12(&Global_99130 + 40, 2);
		Function_12(&Global_99130 + 40, 1);
		Function_12(&Global_99130 + 40, 65536);
		Function_10(&Global_99130 + 40, 4);
	}
	if (Function_2(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_6657 = 0;
	uVar72 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&uParam0, 4), &Var62, 12, 0);
	if (IS_SCRIPT_VALID(&uVar72))
	{
		if (Function_97(iParam1))
		{
			if (&bParam5)
			{
				Function_294(iParam1, &iParam4);
			}
			else if (Function_244(iParam1) == 1)
			{
				Function_293(iParam1, &iParam4);
			}
			else
			{
				Function_253(iParam1, &iParam4);
			}
		}
		Function_251(2);
		Function_249((15 - Function_250(105)));
		return &uVar72;
	}
	return "";
}

void Function_249(int iParam0) //Position: 0xEFA2 / 61346
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_250(105)), 0);
	return;
}

int Function_250(bool bParam0) //Position: 0xEFC5 / 61381
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_251(int iParam0) //Position: 0xEFDC / 61404
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_230(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_230(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_230(&Global_21369 + 48);
	PRINTNL();
	Function_252(&iParam0);
	return;
}

void Function_252(int iParam0) //Position: 0xF07E / 61566
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_250(90)), 0);
	return;
}

void Function_253(int iParam0, int iParam1) //Position: 0xF0A1 / 61601
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_97(iParam0))
	{
		Function_291();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_2(iParam0);
	if (StackVal != 2)
	{
		Function_290("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_255(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_358(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_69(Global_10966) };
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

struct<24> Function_254(bool bParam0) //Position: 0xF1B2 / 61874
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

void Function_255(bool bParam0) //Position: 0xF408 / 62472
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
	Function_256();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_12(&Global_99144, 1);
		Function_12(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_256() //Position: 0xF45D / 62557
{
	Function_267();
	Function_266();
	Function_266();
	Function_265();
	Function_265();
	Function_264();
	Function_264();
	Function_263(0);
	Function_263(0);
	Function_261();
	Function_260();
	Function_259();
	Function_258();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_257();
	return;
}

void Function_257() //Position: 0xF4A8 / 62632
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

void Function_258() //Position: 0xF5AE / 62894
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

void Function_259() //Position: 0xF5E1 / 62945
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

void Function_260() //Position: 0xF774 / 63348
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

void Function_261() //Position: 0xF92D / 63789
{
	Function_262(&Global_42918, 1, 0);
	return;
}

void Function_262(struct<2317> Param0) //Position: 0xF93B / 63803
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
	
	uVar0 = Function_187();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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

struct<8> Function_263(char* cParam0) //Position: 0xFB58 / 64344
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
					iVar2 = ((Function_186((50 + iVar4)) + Function_186((183 + iVar4))) + Function_186((90 + iVar4)));
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
	Function_304(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_264() //Position: 0xFBFF / 64511
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
		iVar2 = ((Function_186((50 + iVar3) + 15) + Function_186((183 + iVar3) + 15)) + Function_186((90 + iVar3) + 15));
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
	Function_304(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_265() //Position: 0xFC88 / 64648
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
			iVar2 = ((Function_186((50 + iVar3) + 8) + Function_186((183 + iVar3) + 8)) + Function_186((90 + iVar3) + 8));
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
	Function_304(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_266() //Position: 0xFD1F / 64799
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
		iVar2 = ((Function_186((50 + iVar3)) + Function_186((183 + iVar3))) + Function_186((90 + iVar3)));
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
	Function_304(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_267() //Position: 0xFD9E / 64926
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_268(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_304(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_268(int iParam0, bool bParam1, bool bParam2) //Position: 0xFDDB / 64987
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
	Function_281(iParam0, bParam1, 1);
	Function_280(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_269(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_269(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xFFE7 / 65511
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_279(390))), 32);
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
					bVar19 = (Function_278(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_278(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_276(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_273(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_271(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_270(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_82(), &Var9);
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

var Function_270(int iParam0) //Position: 0x10626 / 67110
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_271(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x10637 / 67127
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_272("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_272("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_272("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_272(char* cParam0) //Position: 0x1072E / 67374
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_273(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x10749 / 67401
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_275(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_274(Function_275(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_274(int iParam0, int iParam1) //Position: 0x107B0 / 67504
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_275(int iParam0, bool bParam1) //Position: 0x107C2 / 67522
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_276(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x107D4 / 67540
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
	if (((Function_277(iParam0) != 19 || Function_277(iParam0) != 17) || Function_277(iParam0) != 10) || Function_277(iParam0) != 9)
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

int Function_277(int iParam0) //Position: 0x10908 / 67848
{
	return Global_55480[iParam016].f_96;
}

float Function_278(int iParam0) //Position: 0x10917 / 67863
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_279(int iParam0) //Position: 0x10950 / 67920
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_280(int iParam0) //Position: 0x1098D / 67981
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

int Function_281(int iParam0, bool bParam1, bool bParam2) //Position: 0x10B27 / 68391
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

void Function_282() //Position: 0x10D6B / 68971
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_70())
	{
		Function_287(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_287(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_283(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_283(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_64(StackVal, Var0))
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

struct<8> Function_283(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x10E22 / 69154
{
	int iVar0;
	
	iVar0 = Function_286(&uParam2, &fParam3);
	if (Function_285(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_10(&Global_99144, 1);
			Function_12(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_10(&Global_99144, 2);
			Function_12(&Global_99144, 1);
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
		Function_10(&Global_99144, 2);
		Function_12(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_284();
	return StackVal, Function_284();
}

struct<8> Function_284() //Position: 0x10F1A / 69402
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_285(int iParam0) //Position: 0x10F24 / 69412
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_286(bool bParam0, bool bParam1) //Position: 0x10F3A / 69434
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
				fVar2 = Function_234(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_234(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_285(iVar0) && !&bParam1)
	{
		iVar0 = Function_286(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_287(float fParam0, int iParam1) //Position: 0x11006 / 69638
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_289(&Global_54076, &Var3);
	if (!Function_288(Global_46760[0]))
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
	if (!Function_288(Global_46760[2]))
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
	if (!Function_288(Global_46760[1]))
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
	if (!Function_288(Global_46796[1]))
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
	if (!Function_288(Global_46796[3]))
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
	if (!Function_288(Global_46796[2]))
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
	if (!Function_288(Global_46796[4]))
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
	if (!Function_288(Global_46816[0]))
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
	if (!Function_288(Global_46816[1]))
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
	if (!Function_288(Global_46816[2]))
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
	if (!Function_288(Global_46838[0]))
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
	if (!Function_288(Global_46850[0]))
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
	if (!Function_288(Global_46850[1]))
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
	if (!Function_288(Global_46850[2]))
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
	if (!Function_288(Global_46866[0]))
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
	if (!Function_288(Global_46866[1]))
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
	if (!Function_288(Global_46866[2]))
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
	if (!Function_288(Global_46894[2]))
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
	if (!Function_288(Global_46894[3]))
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
	if (!Function_288(Global_46894[0]))
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
	if (!Function_288(Global_46914[0]))
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
	if (!Function_288(Global_46926[2]))
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
	if (!Function_288(Global_46926[1]))
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
	if (!Function_288(Global_46926[0]))
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
	if (!Function_288(Global_46838[1]))
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
	if (!Function_288(Global_46894[1]))
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
	Function_10(&Global_99144, 2);
	Function_12(&Global_99144, 1);
	iParam1 = 0;
	if (Function_64(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_288(int iParam0) //Position: 0x11832 / 71730
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_18(uVar0, 0x1000000) || Function_18(uVar0, 0x2000000)) || Function_18(uVar0, 0x4000000)) || !Function_18(uVar0, 0x10000000));
}

void Function_289(var uParam0, int iParam1) //Position: 0x1186D / 71789
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_290(bool bParam0, bool bParam1) //Position: 0x1187C / 71804
{
	struct<4> Var0;
	
	if (!Function_97(bParam1))
	{
		return;
	}
	switch (Function_2(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_299(Function_358(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_2(bParam1), Function_358(bParam1));
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

void Function_291() //Position: 0x119A6 / 72102
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
			Function_292(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_292(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x11BED / 72685
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_293(int iParam0, int iParam1) //Position: 0x11C19 / 72729
{
	int iVar0;
	
	if (!Function_97(iParam0))
	{
		Function_291();
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
		Function_255(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_358(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_294(int iParam0, int iParam1) //Position: 0x11C81 / 72833
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_97(iParam0))
	{
		Function_291();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_255(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_358(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_69(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar11);
		APPEND_JOURNAL_ENTRY(cVar11, 0);
	}
	return;
}

void Function_295(bool bParam0) //Position: 0x11D28 / 73000
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
		Function_296();
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

void Function_296() //Position: 0x11DB7 / 73143
{
	int iVar0;
	
	Global_41176 = Function_297(StackVal);
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

bool Function_297(bool bParam0) //Position: 0x11E05 / 73221
{
	if (!Function_298(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

bool Function_298(int iParam0) //Position: 0x11E1D / 73245
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_299(bool bParam0) //Position: 0x11E32 / 73266
{
	char* cVar0[16];
	
	if (!Function_70())
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

void Function_300(int iParam0) //Position: 0x11E6C / 73324
{
	int iVar0;
	
	iVar0 = Function_301(iParam0);
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	Global_53524.f_192 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_53524.f_172 = Function_186(27);
			Global_53524.f_168 = Function_186(42);
			Global_53524.f_176 = CEIL(Function_279(49));
			Global_53524.f_180 = Function_186(49);
			break;
		
		case 0x00000002:
			Global_53524.f_168 = Function_186(355);
			break;
		
		case 0x00000001:
			Global_53524.f_176 = CEIL(Function_279(49));
			Global_53524.f_180 = Function_186(49);
			break;
	}
	return;
}

int Function_301(bool bParam0) //Position: 0x11EF6 / 73462
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

int Function_302(int iParam0, char* cParam1) //Position: 0x11F8B / 73611
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
		Function_303(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_303(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x122E2 / 74466
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

int Function_304(int iParam0, bool bParam1, bool bParam2) //Position: 0x1236A / 74602
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
		Function_281(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_280(iParam0);
	if (&bParam2)
	{
		Function_269(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_305() //Position: 0x12606 / 75270
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_306(bool bParam0, bool bParam1) //Position: 0x12643 / 75331
{
	bool bVar0;
	
	bVar0 = Function_186(0);
	if ((Function_186(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_307(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_186(0));
	return 1;
}

int Function_307(int iParam0, bool bParam1, int iParam2) //Position: 0x126D4 / 75476
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
	Function_280(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_269(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_308() //Position: 0x128D1 / 75985
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
	Function_309();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_309() //Position: 0x12A54 / 76372
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
	uVar2 = Function_187();
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

void Function_310(int iParam0) //Position: 0x12B2D / 76589
{
	Function_311(iParam0);
	return;
}

void Function_311(int iParam0) //Position: 0x12B38 / 76600
{
	int iVar0;
	
	if (!Function_97(iParam0))
	{
		Function_291();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

void Function_312(int iParam0, int iParam1) //Position: 0x12B5C / 76636
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_313(int iParam0, int iParam1) //Position: 0x12B7A / 76666
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_39266[iParam0] = &iParam1;
	return;
}

void Function_314(int iParam0, int iParam1) //Position: 0x12B98 / 76696
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_39258[iParam0] = &iParam1;
	return;
}

void Function_315(int iParam0, int iParam1) //Position: 0x12BB5 / 76725
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_39248[iParam0] = &iParam1;
	return;
}

void Function_316(int iParam0, int[] iParam1, var uParam2, bool bParam3) //Position: 0x12BD2 / 76754
{
	if (Global_6606 && !Global_6624)
	{
		return;
	}
	if (!&bParam3)
	{
		if (!Function_70())
		{
			Function_320(iParam0, &uParam2, 0);
		}
		else
		{
			Function_317(iParam0, &uParam2, 0);
		}
		iParam1[iParam0] = 1;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_188])
		{
			Function_316(Global_6667[iParam028].f_188, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_192])
		{
			Function_316(Global_6667[iParam028].f_192, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_196])
		{
			Function_316(Global_6667[iParam028].f_196, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_200])
		{
			Function_316(Global_6667[iParam028].f_200, &iParam1, &uParam2, 0);
		}
	}
}

void Function_317(int iParam0, var uParam1, bool bParam2) //Position: 0x12CDB / 77019
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_110(iParam0))
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
			Function_318(21, &bParam2, 0);
			Function_318(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_299(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_318(bool bParam0, bool bParam1, int iParam2) //Position: 0x12D7D / 77181
{
	if (!Function_319(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_187(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_187(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_187(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_319(int iParam0) //Position: 0x12DD7 / 77271
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_320(bool bParam0, var uParam1, bool bParam2) //Position: 0x12DE9 / 77289
{
	struct<4> Var0;
	
	if (!Function_110(bParam0))
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
			Function_318(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_351(Global_46760[0]);
			Function_351(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_349(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_351(Global_46816[0]);
			Function_345(0);
			Function_343(2, 1);
			Function_343(0, 1);
			Function_343(1, 1);
			break;
		
		case 0x00000003:
			Function_351(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_351(Global_46816[0]);
			Function_351(Global_46760[0]);
			Function_341(0, 1);
			Function_341(15, 1);
			Function_341(9, 1);
			Function_341(12, 1);
			Function_341(16, 1);
			Function_343(3, 1);
			break;
		
		case 0x00000005:
			Function_351(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_349(21, &bParam2, 4);
			Function_351(Global_46816[0]);
			Function_343(39, 1);
			break;
		
		case 0x00000007:
			Function_351(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_351(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_340())
				{
					if (!Function_161(4))
					{
						Function_333(4, 0, 0, 1, 0);
					}
				}
			}
			Function_351(Global_46760[0]);
			Function_351(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_351(Global_46760[0]);
			Function_351(Global_46816[2]);
			Function_332(&(Global_43791[Global_46816[2]]), 32768);
			Function_331(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_349(9, &bParam2, 4);
			Function_351(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_351(Global_46760[0]);
			Function_351(Global_46796[0]);
			Function_332(&(Global_43791[Global_46796[0]]), 32768);
			Function_331(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_351(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_351(Global_46760[0]);
			Function_351(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_351(Global_46760[1]);
			Function_351(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_351(Global_46838[0]);
			Function_351(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_351(Global_46796[5]);
			Function_351(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_349(21, &bParam2, 4);
			Function_351(Global_46760[4]);
			Function_351(Global_46796[4]);
			Function_330(&Global_119935, 0x2000000);
			Function_330(&Global_119935, 0x4000000);
			Function_330(&Global_119935, 4096);
			Function_330(&Global_119935, 8);
			Function_330(&Global_119935, 8388608);
			Function_330(&Global_119935, 524288);
			Function_330(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_351(Global_46760[4]);
			Function_351(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_331(&(Global_43791[Global_46760[4]]), 256);
			Function_351(Global_46760[4]);
			Function_351(Global_46796[0]);
			Function_332(&(Global_43791[Global_46796[0]]), 32768);
			Function_331(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_351(Global_46760[0]);
			Function_351(Global_46760[5]);
			Function_349(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_351(Global_46796[3]);
			Function_332(&(Global_43791[Global_46796[3]]), 32768);
			Function_331(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_349(9, &bParam2, 4);
			Function_351(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_332(&(Global_43791[Global_46838[1]]), 32768);
			Function_351(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_349(12, &bParam2, 4);
			Function_331(&(Global_43791[Global_46838[1]]), 256);
			Function_351(Global_46816[3]);
			Function_351(Global_46866[0]);
			Function_351(Global_46850[0]);
			Function_345(4);
			Function_341(13, 1);
			Function_341(1, 1);
			Function_341(18, 1);
			Function_343(34, 1);
			Function_343(44, 1);
			Function_343(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_349(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_351(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_351(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_351(Global_46866[0]);
			Function_351(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_351(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_351(Global_46850[0]);
			Function_351(Global_46866[0]);
			Function_351(Global_46866[1]);
			Function_351(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_349(23, &bParam2, 3);
			Function_341(23, 1);
			Function_351(Global_46850[0]);
			Function_351(Global_46850[2]);
			Function_332(&(Global_43791[Global_46850[2]]), 32768);
			Function_331(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_349(19, &bParam2, 4);
			Function_351(Global_46850[0]);
			Function_351(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_349(24, &bParam2, 3);
			Function_341(24, 1);
			Function_351(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_351(Global_46850[0]);
			Function_351(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_351(Global_46866[12]);
			Function_351(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_351(Global_46866[12]);
			Function_351(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_349(25, &bParam2, 10);
			Function_351(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_351(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_351(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_349(13, &bParam2, 4);
			Function_351(Global_46866[2]);
			Function_351(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_161(8))
				{
					Function_333(8, 0, 0, 1, 0);
				}
			}
			Function_351(Global_46850[0]);
			Function_345(9);
			Function_341(7, 1);
			Function_341(11, 1);
			Function_341(3, 1);
			Function_341(20, 1);
			Function_343(57, 1);
			break;
		
		case 0x0000002A:
			Function_349(2, &bParam2, 4);
			Function_351(Global_46914[0]);
			Function_351(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_351(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_351(Global_46914[0]);
			Function_351(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_351(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_351(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_351(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_349(17, &bParam2, 4);
			Function_351(Global_46926[0]);
			Function_351(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_164(15))
				{
					Function_324(15, 0, 1);
				}
			}
			Function_323(2, 26);
			Function_331(&(Global_43791[Global_46914[1]]), 256);
			Function_345(11);
			Function_351(Global_46914[1]);
			Function_351(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_351(Global_46914[1]);
			Function_351(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_351(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_351(Global_46914[1]);
			Function_321(11);
			Function_345(12);
			Global_26200[1114].f_40 = 0;
			Function_343(56, 1);
			if (!&bParam2)
			{
				if (!Function_161(9))
				{
					Function_333(9, 0, 0, 0, 0);
				}
				if (!Function_161(10))
				{
					Function_333(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_321(int iParam0) //Position: 0x13704 / 79620
{
	var uVar0;
	
	if (!Function_285(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_322(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_322(&Global_26200[iParam014] + 88, 0);
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
			Function_135(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_322(var uParam0, int iParam1) //Position: 0x13881 / 80001
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

void Function_323(int iParam0, int iParam1) //Position: 0x138DC / 80092
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

void Function_324(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13946 / 80198
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_163(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_164(bParam0))
	{
		if (!Function_161(bParam0))
		{
			Function_333(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_328(457, 1, 0, 0);
		Function_327(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_255(1);
				Function_326(1, 0);
			}
			else
			{
				Function_325();
			}
		}
	}
	return;
}

void Function_325() //Position: 0x13AE7 / 80615
{
	return;
}

void Function_326(bool bParam0, int iParam1) //Position: 0x13AED / 80621
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

void Function_327(bool bParam0, int iParam1) //Position: 0x13B2C / 80684
{
	if (!Function_163(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_328(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x13B81 / 80769
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
	Function_281(iParam0, TO_FLOAT(bParam1), 1);
	Function_280(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_269(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_329(iParam0);
	return 1;
}

void Function_329(int iParam0) //Position: 0x13DA9 / 81321
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

void Function_330(var uParam0, int iParam1) //Position: 0x13E47 / 81479
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_331(var uParam0, int iParam1) //Position: 0x13E58 / 81496
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_332(var uParam0, int iParam1) //Position: 0x13E72 / 81522
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_333(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13E83 / 81539
{
	char* cVar0[32];
	
	if (!Function_163(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_179(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_161(bParam0))
	{
		Function_328(456, 1, 0, 0);
		Function_327(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_255(1);
				Function_326(1, 5);
			}
			else
			{
				Function_325();
			}
		}
		Function_334(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_206() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_206() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_68(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_70())
		{
			if (!Function_47(Global_119934, 2))
			{
				Function_42(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_334(bool bParam0) //Position: 0x13FDF / 81887
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
			if (Function_338(bParam0, Function_339(bVar24)))
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
			if (Function_338(bParam0, Function_339(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_337(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_336(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_335(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_335(int iParam0) //Position: 0x14190 / 82320
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_163(iParam0))
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

void Function_336(char* cParam0, int iParam1) //Position: 0x141E7 / 82407
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_337(int iParam0) //Position: 0x1420C / 82444
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_163(iParam0))
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

bool Function_338(bool bParam0, int iParam1) //Position: 0x14262 / 82530
{
	int iVar0;
	
	if (!Function_163(bParam0))
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

int Function_339(bool bParam0) //Position: 0x142C1 / 82625
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_340() //Position: 0x142CD / 82637
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_18(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_341(int iParam0, int iParam1) //Position: 0x142FD / 82685
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_342(iParam0, iParam1);
	Function_42(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_342(int iParam0, int iParam1) //Position: 0x14372 / 82802
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_343(int iParam0, int iParam1) //Position: 0x143CF / 82895
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_344(iParam0, iParam1);
	Function_42(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_344(int iParam0, int iParam1) //Position: 0x14442 / 83010
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_345(int iParam0) //Position: 0x1449D / 83101
{
	var uVar0;
	var uVar1;
	
	if (!Function_285(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_348(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_348(&Global_26200[iParam014] + 88, 0);
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
			Function_328(468, 1, 0, 0);
			Function_323(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_68("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_135(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_333(14, 1, 0, 0, 0);
				Function_346(14, 1, 0, 0, 0);
			}
			if (!Function_360(0, 0, 1, 1))
			{
				Function_255(1);
				Function_326(1, 6);
			}
			else
			{
				Function_325();
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
			Function_68("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_328(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_323(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_346(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x1475D / 83805
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_163(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_179(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_162(bParam0, 2))
	{
		Function_328(456, 1, 0, 0);
		Function_327(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_68(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_338(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_327(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_255(1);
				Function_326(1, 0);
			}
			else
			{
				Function_325();
			}
		}
		Function_334(bParam0);
		if (StackVal && !Function_18(((((!Function_206() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_18((((Function_206() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_70())
		{
			if (!Function_47(Global_119934, 2))
			{
				Function_42(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_169();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_347(3, bParam1);
				break;
			
			case 0x00000005:
				Function_347(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_347(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_347(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_347(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_347(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_323(2, 24);
				break;
			
			case 0x00000003:
				Function_323(2, 25);
				break;
			
			case 0x0000000F:
				Function_323(2, 26);
				break;
			
			case 0x0000000D:
				Function_323(2, 27);
				break;
			
			case 0x0000000E:
				Function_323(2, 28);
				break;
			}
	}
}

void Function_347(int iParam0, bool bParam1) //Position: 0x149FC / 84476
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

void Function_348(var uParam0, int iParam1) //Position: 0x14A6B / 84587
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

void Function_349(bool bParam0, bool bParam1, int iParam2) //Position: 0x14AC3 / 84675
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_350(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_318(bParam0, 0, 0);
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

bool Function_350(int iParam0, int iParam1) //Position: 0x14B36 / 84790
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_351(int iParam0) //Position: 0x14B4A / 84810
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_159(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_332(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_328(473, 1, 0, 0);
		iVar0 = Function_352(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_328(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_328(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_328(476, 1, 0, 0);
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
		Function_323(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_323(7, 30);
	}
	if (Function_278(473) <= Function_279(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_352(int iParam0) //Position: 0x14C3B / 85051
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_160(iParam0))
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

void Function_353() //Position: 0x14C93 / 85139
{
	Function_354(512);
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

void Function_354(int iParam0) //Position: 0x14CD3 / 85203
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_355(int iParam0, int iParam1) //Position: 0x14CE6 / 85222
{
	if (!Function_97(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_356(struct<185> Param0) //Position: 0x14D01 / 85249
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_357(4, 0, 0);
		}
	}
	return;
}

void Function_357(bool bParam0, var uParam1, int iParam2) //Position: 0x14D6C / 85356
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
		Function_228(Global_26182, &uVar0, 1);
	}
	return;
}

bool Function_358(bool bParam0) //Position: 0x14E56 / 85590
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

struct<112> Function_359(struct<28>[] Param0, int iParam1) //Position: 0x14E76 / 85622
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

bool Function_360(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x14EB3 / 85683
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

bool Function_361(int iParam0) //Position: 0x14F62 / 85858
{
	return IS_OBJECT_VALID(Function_362(&iParam0));
}

var Function_362(int iParam0) //Position: 0x14F71 / 85873
{
	return &iParam0 + 32;
}

void Function_363(int iParam0, int iParam1) //Position: 0x14F7D / 85885
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
			Function_364(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_364(struct<113> Param0) //Position: 0x15004 / 86020
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

int Function_365(int iParam0) //Position: 0x15062 / 86114
{
	if (!Function_160(iParam0))
	{
		return 0;
	}
	return Function_159(&(Global_43791[iParam0]), 2048);
}

void Function_366(struct<28>[] Param0) //Position: 0x15080 / 86144
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Param0[iVar028].f_132)
		{
			Function_245(&(Param0[iVar028]), iVar0);
		}
		iVar0++;
	}
	return;
}

bool Function_367(int iParam0) //Position: 0x150B3 / 86195
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_368(struct<28>[] Param0) //Position: 0x150D1 / 86225
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
		switch (Function_244(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_243(&(Param0[iVar028])))
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

void Function_369() //Position: 0x151E2 / 86498
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

void Function_370() //Position: 0x15396 / 86934
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 1);
	Function_377(4294967295, 4294967295);
	Function_374();
	Global_98250 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_98254 > 0 || Global_98254 <= Global_6667)
	{
		Global_98253 = 4294967197;
		Global_98254 = 0;
		return;
	}
	Function_372();
	Global_98250 = 1;
	Function_371();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_371() //Position: 0x15457 / 87127
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

void Function_372() //Position: 0x15481 / 87169
{
	Function_373(25, 2);
	return;
}

void Function_373(int iParam0, int iParam1) //Position: 0x1548D / 87181
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

void Function_374() //Position: 0x156B9 / 87737
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_376())
	{
		Function_375(10, 3);
	}
	else
	{
		Function_372();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_187(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_187());
	UI_POP("nDebugMenu");
	return;
}

void Function_375(int iParam0, int iParam1) //Position: 0x15704 / 87812
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

bool Function_376() //Position: 0x15851 / 88145
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
				if (!Function_18(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_377(int iParam0, int iParam1) //Position: 0x158B9 / 88249
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

void Function_378() //Position: 0x15A06 / 88582
{
	return;
}

void Function_379(struct<57> Param0) //Position: 0x15A0C / 88588
{
	strcpy(&Param0 + 24, "MISSIONS", 16);
	Param0 = 88743;
	*(&Param0 + 8) = 88706;
	*(&Param0 + 16) = 88646;
	Param0.f_56 = 0;
	return;
}

void Function_380() //Position: 0x15A46 / 88646
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_98936)
	{
		if (IS_OBJECTSET_VALID(&(Global_98936[iVar0])))
		{
			DESTROY_OBJECTSET(&(Global_98936[iVar0]));
		}
		iVar0++;
	}
	Function_366(&Global_6667);
	return;
}

int Function_381() //Position: 0x15A82 / 88706
{
	if (!Global_6607)
	{
		return 0;
	}
	if (Function_183(&Global_6667, 1) >= 0)
	{
		Global_6633 = 1;
		return 0;
	}
	Global_6633 = 1;
	return 1;
}

void Function_382() //Position: 0x15AA7 / 88743
{
	bool bVar0;
	
	Function_438(StackVal, 2, "Nigel West Dickens", 546, "merchant_brain_injured", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 4, "Marshal Augustus Graham", 547, "marshal_brain", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 3, "Bonnie MacFarlane", 551, "ranchdaughter_brain", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 0, "Irish", 548, "Outlaw_brain", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 1, "Seth", 545, "GraveRobber_brain", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 5, "Old Gunslinger", 558, "Gunslinger_Comp_Br", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 6, "Mexican Tyrant", 556, "MexHenchman_Comp_Br", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 7, "Mexican Rebel", 553, "MexRebel_Comp_Br", Vector(-4809,157f, 44,886f, 4957,521f), 0);
	Function_438(StackVal, 8, "Mexican Girl", 555, "MexGirl_Comp_Br", Vector(-1699,957f, 8,407f, 4196,78f), 0);
	Function_438(StackVal, 9, "Anthropologist", 561, "Anthropologist_Brain", Vector(1333,423f, 78,456f, 748,393f), 0);
	Function_438(StackVal, 10, "nFBI Agent", 559, "FBI_Agent_Brain", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 11, "Wife", 698, "Companion_Wife", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 12, "Son", 638, "Companion_Son", Vector(0.0f, 0.0f, 0.0f), 0);
	Function_438(StackVal, 13, "Uncle", 646, "Companion_LeadWorker", Vector(0.0f, 0.0f, 0.0f), 0);
	if (Global_6666)
	{
		Function_437(StackVal, &Global_6667, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 4294967295, 0, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", Vector(-2091,528f, 16,75f, 2606,137f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 4294967295, 0, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", Vector(-3919,425f, 31,444f, 2900,712f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), Vector(-3911,7f, 31,59f, 2900,8f));
	}
	else
	{
		Function_434(StackVal, &Global_6667, 1, 0, "$/content/Frontier/Missions/Intro01/Intro01", 4294967295, 0, Vector(-2208.0f, 16,5f, 2607,17f));
		Function_434(StackVal, &Global_6667, 2, 0, "$/content/Frontier/Missions/Ranch01/Ranch01", 1, 1, Vector(-788,879f, 94,299f, 2411,818f));
		Function_437(StackVal, &Global_6667, 3, 0, "$/content/Frontier/Missions/Ranch03/Ranch03", 2, 1, 300, 3, "", Vector(-787,022f, 93,636f, 2409,413f), 0x40200000);
		Function_437(StackVal, &Global_6667, 4, 0, "$/content/Frontier/Missions/Ranch02/Ranch02", 3, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp02", Vector(-793,304f, 92,22f, 2418,484f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 5, 0, "$/content/Frontier/Missions/Ranch07/Ranch07", 4, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp07", Vector(-793,739f, 92,404f, 2418,243f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch07"), Vector(-788,844f, 93,669f, 2406,71f));
		Function_437(StackVal, &Global_6667, 6, 0, "$/content/Frontier/Missions/Ranch06/Ranch06", 5, 1, 300, 3, "", Vector(-787,022f, 93,636f, 2409,413f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 7, 0, "$/content/Frontier/Missions/Ranch08/Ranch08", 6, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp08", Vector(-852,8666f, 90,806f, 2440,189f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch08"), Vector(-858,142f, 90,353f, 2432,052f));
		Function_437(StackVal, &Global_6667, 8, 0, "$/content/Frontier/Missions/Marshal01/Marshal01", 3, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp01", Vector(-2091,528f, 16,75f, 2606,137f), 0x40200000);
		Function_437(StackVal, &Global_6667, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 8, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", Vector(-2091,528f, 16,75f, 2606,137f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 10, 0, "$/content/Frontier/Missions/Merchant01/Merchant01", 9, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp01", Vector(-1694,394f, 29,634f, 3068,558f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"), Vector(-1696,57f, 29,634f, 3066,021f));
		Function_437(StackVal, &Global_6667, 21, 0, "$/content/Frontier/Missions/Marshal04/Marshal04", 5, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp04", Vector(-2091,528f, 16,75f, 2606,137f), 0x40200000);
		Function_437(StackVal, &Global_6667, 11, 0, "$/content/Frontier/Missions/Merchant02/Merchant02", 10, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp02", Vector(-2125,509f, 16,485f, 2604,504f), 3,5f);
		Function_436(StackVal, StackVal, &Global_6667, 12, 0, "$/content/Frontier/Missions/Grave01/Grave01", 11, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp01", Vector(-1800,709f, 24,427f, 2865,854f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave01"), Vector(-1803,651f, 23,5f, 2865,918f));
		Function_436(StackVal, StackVal, &Global_6667, 13, 0, "$/content/Frontier/Missions/Grave02/Grave02", 12, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/GraveRobber_Camp02", Vector(-1784,501f, 24,094f, 2838,486f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave02"), Vector(-1777,091f, 24,093f, 2849,859f));
		Function_436(StackVal, StackVal, &Global_6667, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 13, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", Vector(-3919,425f, 31,444f, 2900,712f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), Vector(-3911,7f, 31,59f, 2900,8f));
		Function_437(StackVal, &Global_6667, 15, 0, "$/content/Frontier/Missions/Merchant05/Merchant05", 12, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp05", Vector(-3260,515f, 15,786f, 2732,906f), (2,5f + 2.0f));
		Function_437(StackVal, &Global_6667, 16, 0, "$/content/Frontier/Missions/Merchant03/Merchant03", 15, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp03", Vector(-3139,685f, 43,933f, 3757,126f), 0x40200000);
		Function_437(StackVal, &Global_6667, 17, 0, "$/content/Frontier/Missions/Merchant04/Merchant04", 16, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp04", Vector(-4327,433f, 22,952f, 2727,702f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 18, 0, "$/content/Frontier/Missions/Outlaw01/Outlaw01", 15, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp01", Vector(-2164,184f, 16,436f, 2571,01f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw01"), Vector(-2164,184f, 16,436f, 2571,01f));
		Function_436(StackVal, StackVal, &Global_6667, 19, 0, "$/content/Frontier/Missions/Outlaw02/Outlaw02", 18, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp02", Vector(-3671,614f, 8,197f, 3491,559f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw02"), Vector(-3671,614f, 8,197f, 3491,559f));
		Function_436(StackVal, StackVal, &Global_6667, 20, 0, "$/content/Frontier/Missions/Outlaw03/Outlaw03", 19, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp03", Vector(170,441f, 73,691f, 2219,25f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw03"), Vector(175,211f, 74,677f, 2223,336f));
		Function_437(StackVal, &Global_6667, 22, 0, "$/content/Frontier/Missions/Ranch04/Ranch04", 7, 1, 300, 3, "", Vector(-846,457f, 91,754f, 2391,903f), (2,5f + 2.0f));
		Function_437(StackVal, &Global_6667, 23, 0, "$/content/Frontier/Missions/Marshal03/Marshal03", 22, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp03", Vector(-2091,528f, 16,75f, 2606,137f), 0x40200000);
		Function_437(StackVal, &Global_6667, 24, 0, "$/content/Frontier/Missions/Fort01/Fort01", 23, 1, 304, 4, "", Vector(-2744,267f, 79,1f, 3600,36f), 0x40200000);
		Function_433(&Global_6667, 11, 5);
		Function_433(&Global_6667, 21, 10);
		Function_433(&Global_6667, 12, 6);
		Function_433(&Global_6667, 22, 21);
		Function_433(&Global_6667, 24, 20);
		Function_433(&Global_6667, 24, 14);
		Function_433(&Global_6667, 24, 17);
		Function_432(&Global_6667, 4, 15);
		Function_432(&Global_6667, 3, 31);
		Function_432(&Global_6667, 6, 31);
		Function_432(&Global_6667, 5, 15);
		Function_432(&Global_6667, 11, 31);
		Function_432(&Global_6667, 16, 31);
		Function_432(&Global_6667, 17, 31);
		Function_432(&Global_6667, 15, 31);
		Function_431(&Global_6667, 6, 1, 1);
		Function_431(&Global_6667, 11, 6, 0);
		Function_431(&Global_6667, 13, 1, 1);
		Function_431(&Global_6667, 24, 1, 1);
		Function_430(&Global_6667, 7, 16384);
		Function_233(&Global_6667[328] + 184, 16);
		Function_233(&Global_6667[828] + 184, 16);
		Function_233(&Global_6667[1228] + 184, 16);
		Function_233(&Global_6667[1828] + 184, 16);
		Function_233(&Global_6667[1028] + 184, 16);
		Function_436(StackVal, StackVal, &Global_6667, 25, 1, "$/content/Frontier/Missions/Fort02/Fort02", 24, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Fort_Camp02", Vector(-479,224f, 19,96f, 3033,177f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort02"), Vector(-482,111f, 18,737f, 3039,058f));
		Function_436(StackVal, StackVal, &Global_6667, 26, 1, "$/content/Mexico/Missions/MexArmy02/MexArmy02", 25, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp02", Vector(-4385,229f, 38,64f, 4367,098f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy02"), Vector(-4378,667f, 38,704f, 4360,914f));
		Function_436(StackVal, StackVal, &Global_6667, 27, 1, "$/content/Mexico/Missions/MexArmy01/MexArmy01", 26, 1, 306, 6, "", Vector(-4348,291f, 42,022f, 4346,203f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy01"), Vector(-4348,291f, 42,022f, 4346,203f));
		Function_436(StackVal, StackVal, &Global_6667, 28, 1, "$/content/Mexico/Missions/MexArmy03/MexArmy03", 27, 1, 306, 6, "", Vector(-4383,459f, 38,681f, 4367,18f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy03"), Vector(-4356,495f, 44,261f, 4342,515f));
		Function_436(StackVal, StackVal, &Global_6667, 29, 1, "$/content/Mexico/Missions/MexArmy04/MexArmy04", 28, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp04", Vector(-4364,575f, 41,96442f, 4313,936f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy04"), Vector(-4364,575f, 41,96442f, 4313,936f));
		Function_436(StackVal, StackVal, &Global_6667, 30, 1, "$/content/Mexico/Missions/Gun01/Gun01", 25, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp01", Vector(-2695,355f, 31,217f, 4273,366f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun01"), Vector(-2695,355f, 31,217f, 4273,366f));
		Function_436(StackVal, StackVal, &Global_6667, 32, 1, "$/content/Mexico/Missions/Gun03/Gun03", 30, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp03", Vector(-2695,095f, 32,345f, 4286,654f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), Vector(-2694,746f, 32,158f, 4286,793f));
		Function_436(StackVal, StackVal, &Global_6667, 31, 1, "$/content/Mexico/Missions/Gun05/Gun05", 32, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp05", Vector(-2695,355f, 31,217f, 4273,366f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun05"), Vector(-2695,355f, 31,217f, 4273,366f));
		Function_436(StackVal, StackVal, &Global_6667, 33, 1, "$/content/Mexico/Missions/Gun02/Gun02", 31, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp02", Vector(-2695,095f, 32,345f, 4286,654f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), Vector(-2694,746f, 32,158f, 4286,793f));
		Function_436(StackVal, StackVal, &Global_6667, 34, 1, "$/content/Mexico/Missions/MexGirl01/MexGirl01", 32, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp01", Vector(-2146,062f, 18,239f, 4960,64f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), Vector(-2146,062f, 18,239f, 4960,64f));
		Function_436(StackVal, StackVal, &Global_6667, 35, 1, "$/content/mexico/missions/mexgirl03/mexgirl03", 34, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp03", Vector(-2146,062f, 18,239f, 4960,64f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), Vector(-2146,062f, 18,239f, 4960,64f));
		Function_436(StackVal, StackVal, &Global_6667, 36, 1, "$/content/Mexico/Missions/MexArmy05/MexArmy05", 35, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp05", Vector(-4364,587f, 39,488f, 4353,933f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy05"), Vector(-4356,495f, 44,261f, 4342,515f));
		Function_436(StackVal, StackVal, &Global_6667, 37, 1, "$/content/Mexico/Missions/Rebel03/Rebel03", 36, 1, 310, 7, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp03", Vector(-1477,918f, 16,75f, 3941,318f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel03"), Vector(-1465,541f, 16,54457f, 3946,458f));
		Function_436(StackVal, StackVal, &Global_6667, 38, 1, "$/content/Mexico/Missions/Rebel04/Rebel04", 36, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp04", Vector(-2221,41f, 18,668f, 4895,687f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel04"), Vector(-2221,41f, 18,668f, 4895,687f));
		Function_436(StackVal, StackVal, &Global_6667, 39, 1, "$/content/Mexico/Missions/Rebel02/Rebel02", 38, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp02", Vector(-2281,418f, 22,76f, 4946,628f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel02"), Vector(-2287,62f, 22,76f, 4958,25f));
		Function_437(StackVal, &Global_6667, 40, 1, "$/content/Mexico/Missions/Rebel06/Rebel06", 39, 1, 310, 7, "", Vector(-1514,001f, 17,441f, 3906,868f), 0x40200000);
		Function_437(StackVal, &Global_6667, 41, 1, "$/content/Mexico/Missions/Rebel05/Rebel05", 40, 1, 310, 7, "", Vector(-4340,172f, 27,215f, 4413,33f), 0x40200000);
		Function_433(&Global_6667, 34, 26);
		Function_433(&Global_6667, 36, 29);
		Function_433(&Global_6667, 40, 37);
		Function_433(&Global_6667, 40, 33);
		Function_432(&Global_6667, 27, 30);
		Function_432(&Global_6667, 28, 30);
		Function_432(&Global_6667, 29, 14);
		Function_432(&Global_6667, 36, 30);
		Function_432(&Global_6667, 32, 30);
		Function_432(&Global_6667, 31, 30);
		Function_432(&Global_6667, 34, 7);
		Function_430(&Global_6667, 25, 32768);
		Function_429(&Global_6667, 25);
		Function_437(StackVal, &Global_6667, 42, 2, "$/content/North/Missions/FBI05/FBI05", 41, 1, 302, 10, "", Vector(756,675f, 79,004f, 1234,998f), 4.0f);
		Function_437(StackVal, &Global_6667, 43, 2, "$/content/North/Missions/Fbi01/Fbi01", 42, 1, 302, 10, "", Vector(756,675f, 79,004f, 1234,998f), 4.0f);
		Function_437(StackVal, &Global_6667, 44, 2, "$/content/North/Missions/Native03/Native03", 42, 1, 299, 9, "", Vector(745,322f, 78,456f, 1276,929f), 0x40200000);
		Function_437(StackVal, &Global_6667, 45, 2, "$/content/North/Missions/Anthro01/Anthro01", 44, 1, 299, 9, "", Vector(745,322f, 78,456f, 1276,929f), 0x40200000);
		Function_437(StackVal, &Global_6667, 46, 2, "$/content/North/Missions/Anthro03/Anthro03", 45, 1, 299, 9, "", Vector(742,555f, 78,425f, 1272,168f), 0x40200000);
		Function_437(StackVal, &Global_6667, 47, 2, "$/content/North/Missions/Fbi02/Fbi02", 43, 1, 302, 10, "", Vector(756,139f, 78,525f, 1234,983f), 0x40200000);
		Function_434(StackVal, &Global_6667, 48, 2, "$/content/North/Missions/FBI04/FBI04", 47, 1, Vector(-309,2459f, 141,4889f, 1696,795f));
		Function_433(&Global_6667, 47, 46);
		Function_432(&Global_6667, 43, 30);
		Function_432(&Global_6667, 47, 30);
		Function_432(&Global_6667, 48, 30);
		Function_432(&Global_6667, 42, 30);
		Function_432(&Global_6667, 45, 30);
		Function_432(&Global_6667, 46, 48);
		Function_432(&Global_6667, 44, 30);
		Function_436(StackVal, StackVal, &Global_6667, 49, 3, "$/content/North/Missions/Home01/Home01", 48, 1, 314, 11, "", Vector(-113,859f, 118,869f, 1387,897f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home01"), Vector(-113,859f, 118,869f, 1387,897f));
		Function_436(StackVal, StackVal, &Global_6667, 55, 3, "$/content/North/Missions/Home02/Home02_Ranch01/Home02_Ranch01", 49, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp01", Vector(-80,491f, 117,248f, 1395,851f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch01"), Vector(-76,984f, 116,861f, 1395,305f));
		Function_436(StackVal, StackVal, &Global_6667, 56, 3, "$/content/North/Missions/Home02/Home02_Ranch03/Home02_Ranch03", 55, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp03", Vector(-5,259f, 130,659f, 1445,75f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch03"), Vector(-5,259f, 130,659f, 1445,75f));
		Function_437(StackVal, &Global_6667, 50, 3, "$/content/North/Missions/Home02/Home02_Wife02/Home02_Wife02", 49, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp02", Vector(-111,359f, 119,489f, 1369,446f), 0x40200000);
		Function_437(StackVal, &Global_6667, 51, 3, "$/content/North/Missions/Home02/Home02_Wife03/Home02_Wife03", 50, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp03", Vector(-116,472f, 119,446f, 1374,421f), 0x40200000);
		Function_436(StackVal, StackVal, &Global_6667, 52, 3, "$/content/North/Missions/Home02/Home02_Son01/Home02_Son01", 49, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp01", Vector(-61,155f, 116,688f, 1385,995f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son01"), Vector(-57,72f, 116,695f, 1391,078f));
		Function_436(StackVal, StackVal, &Global_6667, 53, 3, "$/content/North/Missions/Home02/Home02_Son02/Home02_Son02", 52, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp02", Vector(-101,336f, 117,748f, 1404,77f), FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son02"), Vector(-99,05f, 118,72f, 1405,5f));
		Function_437(StackVal, &Global_6667, 54, 3, "$/content/North/Missions/Home02/Home02_Son03/Home02_Son03", 53, 1, 313, 12, "", Vector(-71,003f, 117,865f, 1380,745f), 0x40200000);
		Function_437(StackVal, &Global_6667, 57, 3, "$/content/North/Missions/Home03/Home03", 56, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home_Camp03", Vector(-73,952f, 116,861f, 1407,201f), 0x40200000);
		Function_433(&Global_6667, 57, 51);
		Function_433(&Global_6667, 57, 54);
		Function_432(&Global_6667, 55, 12);
		Function_432(&Global_6667, 56, 15);
		Function_432(&Global_6667, 52, 15);
		Function_432(&Global_6667, 53, 15);
		Function_432(&Global_6667, 54, 15);
		Function_432(&Global_6667, 50, 15);
		Function_432(&Global_6667, 51, 15);
		Function_432(&Global_6667, 57, 15);
		Function_430(&Global_6667, 52, 65536);
		Function_233(&Global_6667[4928] + 184, 16);
		Function_431(&Global_6667, 55, 3, 1);
		Function_431(&Global_6667, 54, 3, 1);
		Function_428(&Global_6667, 55);
		Function_428(&Global_6667, 56);
		Function_428(&Global_6667, 52);
		Function_428(&Global_6667, 53);
		Function_428(&Global_6667, 50);
		Function_428(&Global_6667, 51);
		Function_428(&Global_6667, 57);
	}
	if (Global_6624)
	{
		Function_394(Global_10964, 1);
		Function_389(0);
	}
	else
	{
		bVar0 = Function_387();
		if (bVar0 != 4294967295)
		{
			if (Function_110(bVar0))
			{
				Function_302(25, &Global_6667[bVar028] + 16, 0, 1);
				Function_304(25, bVar0, 0);
				Function_328(10, 1, 0, 0);
			}
		}
		else
		{
			bVar0 = Function_186(25);
			if (Function_110(bVar0))
			{
				Function_302(25, &Global_6667[bVar028] + 16, 0, 1);
			}
			else
			{
				Function_302(25, "fav_non", 0, 1);
			}
		}
		bVar0 = Function_186(18);
		if (Function_110(bVar0))
		{
			Function_302(18, &Global_6667[bVar028] + 16, 0, 1);
		}
		else
		{
			Function_302(18, "fav_non", 0, 1);
		}
		bVar0 = Function_186(24);
		if (Function_110(bVar0))
		{
			Function_302(24, &Global_6667[bVar028] + 16, 0, 1);
		}
		else
		{
			Function_302(24, "fav_non", 0, 1);
		}
		Function_385();
	}
	Function_383();
	ENABLE_JOURNAL_REPLAY(1);
	Global_6617 = 1;
	return;
}

void Function_383() //Position: 0x18373 / 99187
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
					if (Function_108(25, 0))
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
					if (Function_108(25, 0) && !Function_108(26, 0))
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
					if ((Function_108(25, 0) && Function_108(26, 0)) && !Function_108(29, 0))
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
					if ((Function_108(25, 0) && Function_108(26, 0)) && Function_108(29, 0))
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
					if (Function_108(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_108(41, 0))
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
					if (Function_108(22, 0) && !Function_108(41, 0))
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
					if (Function_108(22, 0) && Function_108(41, 0))
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
					if (Function_108(34, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_108(26, 0) || Function_108(30, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_108(40, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_108(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_108(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_108(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_108(21, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_108(57, 0) || Function_384(57))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_108(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_108(28, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_108(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_122(37))
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
					if (Function_108(57, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_108(25, 0))
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
					if (Function_108(32, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_108(20, 0))
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

bool Function_384(int iParam0) //Position: 0x19B48 / 105288
{
	int iVar0;
	
	if (!Function_110(iParam0))
	{
		return 0;
	}
	iVar0 = Function_109(iParam0);
	if (!Function_97(Function_109(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_385() //Position: 0x19B7E / 105342
{
	int iVar0;
	int iVar1;
	
	if (!Function_110(Global_10966))
	{
		return;
	}
	iVar0 = Function_186(24);
	iVar1 = Function_109(Global_10966);
	if (!Function_110(iVar0) && Function_386(iVar1) < 0)
	{
		Function_304(24, Global_10966, 0);
		Function_302(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_386(Function_109(iVar0)))
	{
		Function_304(24, Global_10966, 0);
		Function_302(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_386(int iParam0) //Position: 0x19BFE / 105470
{
	if (!Function_97(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_387() //Position: 0x19C18 / 105496
{
	struct<161> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	iVar24 = Var0.f_152;
	Function_304(11, Var0.f_156, 0);
	Function_388(Function_109(Global_10966), Var0.f_160);
	if (iVar24 != 4294967295)
	{
	}
	return iVar24;
}

void Function_388(int iParam0, int iParam1) //Position: 0x19C55 / 105557
{
	if (!Function_97(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_8 = iParam1;
	return;
}

void Function_389(bool bParam0) //Position: 0x19C70 / 105584
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		if ((!Global_39290[iVar0] && (!&bParam0 || !Function_206())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_108(2, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_393(390, 3.0f);
						Function_304(390, 1, &bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_108(11, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_393(390, 3.0f);
						Function_304(390, 2, &bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_108(30, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_393(390, 3.0f);
						Function_304(390, 3, &bParam0);
					}
					break;
				
				case 0x00000003:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_108(4, 0))
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
					if (Function_108(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_108(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_108(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_108(37, 0))
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_108(2, 0) && !Function_392("npressDemo"))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_108(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_384(1))
					{
						Function_391(1);
						Global_39290[iVar0] = 1;
					}
					else
					{
						Function_391(0);
						Global_39290[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_390(0) == 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_390(1) > 5)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_341(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_390(0) != 10 && Function_390(1) != 10) && Function_390(2) != 10) && Function_390(3) != 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_324(11, 0, 1);
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
		Function_68(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_68(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_390(int iParam0) //Position: 0x1A046 / 106566
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_391(bool bParam0) //Position: 0x1A06E / 106606
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

bool Function_392(int iParam0) //Position: 0x1A0E5 / 106725
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

int Function_393(int iParam0, int iParam1) //Position: 0x1A107 / 106759
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

void Function_394(int iParam0, bool bParam1) //Position: 0x1A147 / 106823
{
	if (!&bParam1)
	{
		Global_21684[47].f_4 = StackVal;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!Function_108(Global_6667[iParam028].f_188, 0))
		{
			Function_394(Global_6667[iParam028].f_188, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!Function_108(Global_6667[iParam028].f_192, 0))
		{
			Function_394(Global_6667[iParam028].f_192, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!Function_108(Global_6667[iParam028].f_196, 0))
		{
			Function_394(Global_6667[iParam028].f_196, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!Function_108(Global_6667[iParam028].f_200, 0))
		{
			Function_394(Global_6667[iParam028].f_200, 0);
		}
	}
	if (!&bParam1)
	{
		Global_21684[07].f_4 = StackVal;
		Function_395(StackVal, 0, 0, 1, 0);
	}
	return;
}

void Function_395(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1A239 / 107065
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_427(12);
	Function_251(2);
	Function_249((15 - Function_250(105)));
	if (Function_2(bParam0) == 1)
	{
		bVar2 = Function_358(bParam0);
		Function_356(&(Global_6667[bVar228]));
		Function_426(4194304);
		if (&bParam3)
		{
			Function_320(bVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_421(bVar2);
			}
		}
		else if (&bParam4)
		{
			Function_320(bVar2, &uVar0, 0);
		}
		bVar1 = Function_420();
		if (&bParam1)
		{
			Function_406(bVar2, bParam0, bVar1);
			Function_405();
		}
	}
	Function_398(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_2(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_397(bVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_2(bParam0) == 1)
		{
			bVar2 = Function_358(bParam0);
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
	Function_396();
}

void Function_396() //Position: 0x1A32D / 107309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_108(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_397(int iParam0, bool bParam1) //Position: 0x1A35F / 107359
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
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
							Function_42(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_397(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_397(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_397(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_397(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_397(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_397(57, 0);
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

void Function_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A65C / 108124
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_97(bParam0))
	{
		Function_291();
		return;
	}
	bVar0 = Function_2(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_404())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_358(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_69(Global_10966) };
		}
		if (Function_404())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_385();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_404())
	{
		Function_403();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_290("DEED_COMPLETE", bParam0);
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
			Function_400(bParam0);
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
						switch (Function_358(bParam0))
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
			Function_255(1);
			Function_326(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_399(bParam0, &Var14);
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

void Function_399(int iParam0, struct<41> Param1) //Position: 0x1A8BA / 108730
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_400(bool bParam0) //Position: 0x1A8F8 / 108792
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
			bVar1 = Function_358(bParam0);
			if (bVar1 <= 1 && bVar1 >= 24)
			{
				Function_328(12, 1, 0, 0);
				Function_323(0, (bVar1 - 1));
			}
			else if (bVar1 <= 25 && bVar1 >= 41)
			{
				Function_328(13, 1, 0, 0);
				Function_323(1, (bVar1 - 25));
			}
			else if (bVar1 <= 42 && bVar1 >= 48)
			{
				Function_328(14, 1, 0, 0);
				Function_323(1, (bVar1 - 25));
			}
			else if (bVar1 <= 49 && bVar1 >= 57)
			{
				Function_328(15, 1, 0, 0);
				Function_323(1, (bVar1 - 49));
			}
			if (bVar1 <= 1 && bVar1 >= 57)
			{
				Function_328(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_358(bParam0))
			{
				case 0x00000000:
					if (Function_402(bParam0) == 1)
					{
						bVar0 = Function_401(bParam0);
						if (Function_160(bVar0))
						{
							if (bVar0 == Global_46926[5])
							{
								Function_323(4, 18);
							}
							else if (bVar0 == Global_46866[3])
							{
								Function_323(4, 10);
							}
							else if (bVar0 == Global_46926[6])
							{
								Function_323(4, 16);
							}
							else if (bVar0 == Global_46816[3])
							{
								Function_323(4, 6);
							}
							else if (bVar0 == Global_46760[13])
							{
								Function_323(4, 3);
							}
							else if (bVar0 == Global_46866[7])
							{
								Function_323(4, 11);
							}
							else if (bVar0 == Global_46760[6])
							{
								Function_323(4, 0);
							}
							else if (bVar0 == Global_46866[10])
							{
								Function_323(4, 15);
							}
							else if (bVar0 == Global_46866[8])
							{
								Function_323(4, 14);
							}
							else if (bVar0 == Global_46760[11])
							{
								Function_323(4, 2);
							}
							else if (bVar0 == Global_46816[6])
							{
								Function_323(4, 7);
							}
							else if (bVar0 == Global_46926[3])
							{
								Function_323(4, 17);
							}
							else if (bVar0 == Global_46850[5])
							{
								Function_323(4, 8);
							}
							else if (bVar0 == Global_46866[9])
							{
								Function_323(4, 13);
							}
							else if (bVar0 == Global_46866[11])
							{
								Function_323(4, 12);
							}
							else if (bVar0 == Global_46760[7])
							{
								Function_323(4, 1);
							}
							else if (bVar0 == Global_46838[3])
							{
								Function_323(4, 5);
							}
							else if (bVar0 == Global_46866[4])
							{
								Function_323(4, 9);
							}
							else if (bVar0 == Global_46796[7])
							{
								Function_323(4, 4);
							}
							else if (bVar0 == Global_46926[4])
							{
								Function_323(4, 19);
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
								Function_328(363, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[1])
							{
								Function_328(364, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[2])
							{
								Function_328(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_401(bParam0) == 0)
			{
				if (Function_402(bParam0) == 1)
				{
					Function_328(458, 1, 0, 0);
					bVar0 = Function_358(bParam0);
					if (Function_160(bVar0))
					{
						if (bVar0 == Global_46816[2])
						{
							Function_323(2, 10);
						}
						else if (bVar0 == Global_46796[2])
						{
							Function_323(2, 11);
						}
						else if (bVar0 == Global_46760[2])
						{
							Function_323(2, 12);
						}
						else if (bVar0 == Global_46796[0])
						{
							Function_323(2, 13);
						}
						else if (bVar0 == Global_46796[3])
						{
							Function_323(2, 14);
						}
						else if (bVar0 == Global_46850[2])
						{
							Function_323(2, 15);
						}
						else if (bVar0 == Global_46850[1])
						{
							Function_323(2, 16);
						}
						else if (bVar0 == Global_46838[1])
						{
							Function_323(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_402(bParam0) == 1)
			{
				Function_328(400, 1, 0, 0);
			}
			switch (Function_358(bParam0))
			{
				case 0x00000001:
					Function_328(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_323(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_323(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_323(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_328(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_323(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_323(6, 9);
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

int Function_401(bool bParam0) //Position: 0x1ADD4 / 110036
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_402(bool bParam0) //Position: 0x1ADF3 / 110067
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_403() //Position: 0x1AE0D / 110093
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
	PLAYSTAT_INT("HC_MONEY", Function_186(0));
	PLAYSTAT_INT("HC_FAME", Function_186(3));
	PLAYSTAT_INT("HC_HONOR", Function_186(1));
	return;
}

bool Function_404() //Position: 0x1AF6F / 110447
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_405() //Position: 0x1AF9A / 110490
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

void Function_406(bool bParam0, int iParam1, bool bParam2) //Position: 0x1AFC8 / 110536
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
	
	if (!Function_110(bParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_301(bParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_186(42) - Global_53524.f_168);
				bVar1 = (Function_186(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_279(49)) - Global_53524.f_176);
				bVar3 = (Function_186(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_186(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_419(bParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_407(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_69(bParam0) };
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

void Function_407(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B264 / 111204
{
	int iVar0;
	bool bVar1;
	
	if (Function_418(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_404())
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
	iVar0 = Function_186(3);
	Function_416();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_414(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_47(Global_119936, 4))
			{
				Function_42(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_328(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_278(3));
	iVar0 = Function_186(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_409(4, Function_413(Global_21369.f_248), 1);
				Function_408(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_409(4, Function_413(Global_21369.f_248), 1);
				Function_408(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_409(4, Function_413(Global_21369.f_248), 1);
				Function_408(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_409(4, Function_413(Global_21369.f_248), 1);
				Function_408(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_409(4, Function_413(Global_21369.f_248), 1);
				Function_408(Global_21369.f_244, Global_21369.f_248);
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

void Function_408(int iParam0, int iParam1) //Position: 0x1B438 / 111672
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

int Function_409(int iParam0, char* cParam1) //Position: 0x1B6A2 / 112290
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
	Function_302(iParam0, &cParam1, 0, 1);
	iVar1 = Function_410();
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

int Function_410() //Position: 0x1B832 / 112690
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
	Function_411();
	return 0;
}

void Function_411() //Position: 0x1B8D3 / 112851
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
		Function_412(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_412(int iParam0) //Position: 0x1B991 / 113041
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

var Function_413(int iParam0) //Position: 0x1B9F7 / 113143
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

int Function_414(int iParam0, bool bParam1) //Position: 0x1BA86 / 113286
{
	bool bVar0;
	int iVar1;
	
	Function_328(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_415(iParam0, 4294967295);
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
	iVar1 = Function_410();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_415(int iParam0, int iParam1) //Position: 0x1BC32 / 113714
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

void Function_416() //Position: 0x1BC77 / 113783
{
	Function_417(3, 0.0f);
	Function_393(3, 10000.0f);
	return;
}

int Function_417(int iParam0, int iParam1) //Position: 0x1BC8D / 113805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_418(int iParam0) //Position: 0x1BCCD / 113869
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_419(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1BCDC / 113884
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

var Function_420() //Position: 0x1BEA4 / 114340
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_421(int iParam0) //Position: 0x1BEC9 / 114377
{
	if (!Function_110(iParam0))
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
			Function_407(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_407(25, 1, 0);
			Function_425(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_425(50, 1, 1);
			Function_407(250, 1, 0);
			Function_422(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_425(50, 1, 1);
			Function_407(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_425(5, 1, 1);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_407(75, 1, 0);
			Function_422(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_425(5, 1, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_425(25, 1, 1);
			Function_407(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_425(10, 1, 1);
			Function_407(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_407(50, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_407(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_422(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_425(20, 1, 1);
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_425(25, 1, 1);
			Function_407(150, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_425(10, 1, 1);
			Function_407(150, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_407(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_422(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_422(100, 1, 0);
			Function_425(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_425(3, 1, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_422(125, 1, 0);
			Function_407(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_425(50, 1, 1);
			Function_407(100, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_425(50, 1, 1);
			Function_407(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_425(75, 1, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_407(250, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_407(75, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_407(200, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_407(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_425(50, 1, 1);
			Function_407(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_425(100, 1, 1);
			Function_407(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_407(200, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_407(500, 1, 0);
			Function_422(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_407(150, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_422(25, 1, 0);
			Function_425(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_407(150, 1, 0);
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_422(150, 1, 0);
			Function_425(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_422(150, 1, 0);
			Function_425(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_422(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C4B7 / 115895
{
	int iVar0;
	bool bVar1;
	
	if (Function_418(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_404())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_186(1);
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
			Function_414(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_47(Global_119936, 1))
				{
					Function_42(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_424(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_47(Global_119936, 2))
				{
					Function_42(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_328(1, bVar1, 0, 0);
	}
	else
	{
		Function_307(1, (4294967295 * bVar1), 0);
	}
	if (Function_186(1) <= 4294962296)
	{
		Function_304(1, 4294962296, 0);
	}
	else if (Function_186(1) >= 5000)
	{
		Function_304(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_278(1));
	iVar0 = Function_186(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_409(2, Function_423(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_409(2, Function_423(Global_21369.f_244), 0);
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
				Function_409(2, Function_423(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_409(2, Function_423(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_409(2, Function_423(Global_21369.f_244), 1);
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
				Function_409(2, Function_423(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_409(2, Function_423(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_409(2, Function_423(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_409(2, Function_423(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_409(2, Function_423(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_409(2, Function_423(Global_21369.f_244), 1);
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
				Function_409(2, Function_423(Global_21369.f_244), 0);
			}
			break;
	}
	Function_408(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_423(int iParam0) //Position: 0x1C7DE / 116702
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

int Function_424(int iParam0, bool bParam1) //Position: 0x1C881 / 116865
{
	bool bVar0;
	int iVar1;
	
	Function_307(iParam0, bParam1, 0);
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
	iVar1 = Function_415(iParam0, 4294967295);
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
	iVar1 = Function_410();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_425(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1CA2C / 117292
{
	bool bVar0;
	
	bVar0 = Function_186(0);
	if ((Function_186(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_328(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_186(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_328(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_186(597) + Function_186(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_426(bool bParam0) //Position: 0x1CAFE / 117502
{
	bool bVar0;
	
	if (Function_18(bParam0, 1) && Function_18(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_427(int iParam0) //Position: 0x1CB32 / 117554
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_428(struct<28>[] Param0, int iParam1) //Position: 0x1CB4F / 117583
{
	Param0[iParam128].f_184 |= 4194304;
	return;
}

void Function_429(struct<28>[] Param0, int iParam1) //Position: 0x1CB6C / 117612
{
	Param0[iParam128].f_184 |= 524288;
	return;
}

void Function_430(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x1CB89 / 117641
{
	Param0[iParam128].f_184 = (Param0[iParam128].f_184 || iParam2);
	return;
}

void Function_431(struct<28>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x1CBA4 / 117668
{
	Param0[iParam128].f_184 |= 4096;
	if (&bParam3)
	{
		Param0[iParam128].f_184 |= 1048576;
	}
	Param0[iParam128].f_204 = iParam2;
}

void Function_432(struct<28>[] Param0, int iParam1, int iParam2) //Position: 0x1CBEA / 117738
{
	int iVar0;
	
	iVar0 = Param0[iParam128].f_184;
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
	Param0[iParam128].f_184 = iVar0;
	return;
}

void Function_433(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x1CC93 / 117907
{
	if (Param0[iParam128].f_192 == 4294967295)
	{
		Param0[iParam128].f_192 = bParam2;
		Param0[iParam128].f_184 |= 2;
		return;
	}
	if (Param0[iParam128].f_196 == 4294967295)
	{
		Param0[iParam128].f_196 = bParam2;
		Param0[iParam128].f_184 |= 4;
		return;
	}
	if (Param0[iParam128].f_200 == 4294967295)
	{
		Param0[iParam128].f_200 = bParam2;
		Param0[iParam128].f_184 |= 8;
		return;
	}
	return;
}

void Function_434(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, float fParam5, struct<2> Param6) //Position: 0x1CD21 / 118049
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	Param0[bParam128] = bParam2;
	Param0[bParam128].f_4 = Function_99(bParam2, bParam1, 1);
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
	if (!Function_70())
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
	if (Function_108(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(&Param0[bParam128] + 16, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_108(bParam1, 1))
		{
			iVar7 = Function_301(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_21684[Global_21684[Global_21684[iVar77].f_327].f_287].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

void Function_435(bool bParam0) //Position: 0x1CED2 / 118482
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	if (!Function_110(bParam0))
	{
		return;
	}
	iVar4 = StackVal;
	iVar5 = Function_301(bParam0);
	cVar0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
	stradd(&cVar0, "_Float2", 16);
	UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_32, 1);
	switch (iVar5)
	{
		case 0x00000000:
			cVar0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_21684[iVar47].f_20), 1);
		
		case 0x00000001:
			cVar0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_28, 1);
			break;
		
		case 0x00000002:
			cVar0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_21684[iVar47].f_20), 1);
			cVar0 = { StackVal, StackVal, StackVal, Function_299(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_21684[iVar47].f_28, 1);
			break;
	}
	return;
}

void Function_436(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, struct<2> Param9, char* cParam11) //Position: 0x1CFD3 / 118739
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
	Param0[bParam128].f_4 = Function_99(bParam2, bParam1, 1);
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
	if (!Function_70())
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
	if (Function_108(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(&Param0[bParam128] + 16, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_108(bParam1, 1))
		{
			iVar7 = Function_301(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_21684[Global_21684[Global_21684[iVar77].f_327].f_287].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

void Function_437(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, struct<2> Param9, int iParam11) //Position: 0x1D1C9 / 119241
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	Param0[bParam128] = bParam2;
	Param0[bParam128].f_4 = Function_99(bParam2, bParam1, 1);
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
	(&Param0[bParam128] + 80) = "";
	Param0[bParam128].f_136 = iParam6;
	Param0[bParam128].f_152 = 3;
	Param0[bParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	if (!Function_70())
	{
		strcpy(&Param0[bParam128] + 16, "miss", 16);
	}
	else
	{
		strcpy(&Param0[bParam128] + 16, "ziss", 16);
	}
	straddi(&Param0[bParam128] + 16, bParam1, 16);
	*(&Param0[bParam128] + 88) = Param9;
	*(&Param0[bParam128] + 120) = Param9;
	Param0[bParam128].f_100 = &iParam11;
	if (STRING_LENGTH(&fParam8) >= 0)
	{
		Param0[bParam128].f_48 = GET_ASSET_ID(&fParam8, 1);
	}
	else
	{
		Param0[bParam128].f_48 = 4294967295;
	}
	if (Function_108(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(&Param0[bParam128] + 16, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_108(bParam1, 1))
		{
			iVar7 = Function_301(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_21684[Global_21684[Global_21684[iVar77].f_327].f_287].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

var Function_438(int iParam0, char* cParam1) //Position: 0x1D3BD / 119741
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	int iVar5;
	int iVar6;
	
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: requires a NAME for each companion.");
		return "";
	}
	iVar1 = iParam0;
	if (iVar1 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return "";
	}
	Global_15402[iParam014] = "";
	(&Global_15402[iParam014] + 16) = iParam2;
	strcpy(&Global_15402[iParam014] + 36, &cParam1, 32);
	*(&Global_15402[iParam014] + 24) = &Global_10992;
	if (&bParam6)
	{
		uVar0 = CREATE_PERS_CHAR_IN_LAYOUT(&Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Param4, 1114636288);
		Global_15402[iParam014] = &uVar0;
		if (!IS_PERS_CHAR_VALID(&uVar0))
		{
			LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to validate the pers char reference");
			return "";
		}
		if (!(STRING_CONTAINS_STRING(&fParam3, "\\") || STRING_CONTAINS_STRING(&fParam3, "/")))
		{
			FILE_START_PATH("$/content/scripting/gringo/gringobrains/cb");
			FILE_ADD_TO_PATH(&fParam3);
			FILE_END_PATH();
			fParam3 = FILE_GET_CURRENT_PATH();
		}
		uVar4 = CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uVar0), "Persistent_Char_Brain", &fParam3, Var2, Var2);
		if (IS_OBJECT_VALID(&uVar4))
		{
			GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(&uVar4), "CompanionSettings", "EnableCompanionBehavior", &iVar5);
			if (iVar5 >= 0)
			{
				ATTACH_OBJECTS(StackVal, StackVal, &uVar4, GET_OBJECT_FROM_PERS_CHAR(&uVar0), Function_82(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
			else
			{
				PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to this Companion: ");
				PRINTSTRING(&cParam1);
				PRINTNL();
				LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to a Companion");
				DESTROY_PERS_CHAR(&uVar0);
				return "";
			}
		}
		PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for this Companion: ");
		PRINTSTRING(&cParam1);
		PRINTNL();
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for a Companion. This is surprisingly bad!");
		DESTROY_PERS_CHAR(&uVar0);
		return "";
		(&iVar6 + 36) = Param4;
		iVar6 = *(&iVar6 + 36);
		*(&iVar6 + 12) = *(&iVar6 + 36);
		*(&iVar6 + 24) = *(&iVar6 + 36);
		*(&iVar6 + 48) = *(&iVar6 + 36);
		*(&iVar6 + 60) = *(&iVar6 + 36);
		*(&iVar6 + 72) = &Global_15402[iParam014] + 24;
		GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar6, 22);
	}
	return &uVar0;
}

void Function_439(struct<57> Param0) //Position: 0x1D872 / 120946
{
	strcpy(&Param0 + 24, "AMBIENT TRAIN", 16);
	Param0 = 126137;
	*(&Param0 + 8) = 121748;
	*(&Param0 + 16) = 121009;
	Param0.f_56 = 0;
	return;
}

void Function_440() //Position: 0x1D8B1 / 121009
{
	if (Global_6665)
	{
		return;
	}
	Function_445(&Global_53580 + 20);
	Function_445(&Global_53580 + 980);
	if (IS_OBJECT_VALID(&Global_53580 + 8))
	{
		DESTROY_OBJECT(&Global_53580 + 8);
		(&Global_53580 + 8) = "";
	}
	Function_441(&Global_53580 + 1956);
	Global_53580.f_16 = 0;
	return;
}

void Function_441(int iParam0) //Position: 0x1D8FB / 121083
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_442(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_442(struct<2>[] Param0, int iParam1) //Position: 0x1D923 / 121123
{
	if (Function_444(&(Param0[iParam12]), 4))
	{
		if (Function_444(&(Param0[iParam12]), 1))
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
			Function_443(&(Param0[iParam12]), 1);
			Function_443(&(Param0[iParam12]), 2);
			Function_443(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_443(struct<13> Param0) //Position: 0x1DA6E / 121454
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_444(struct<13> Param0) //Position: 0x1DA8B / 121483
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_445(int iParam0) //Position: 0x1DAA9 / 121513
{
	Function_450(&iParam0);
	Function_446(&iParam0);
	return;
}

void Function_446(int iParam0) //Position: 0x1DABB / 121531
{
	if (iParam0 != 4294967295)
	{
		Function_449(&iParam0);
		TRAIN_DESTROY_TRAIN(iParam0);
		iParam0 = 4294967295;
		Function_448(&iParam0);
	}
	Function_447(&iParam0);
	if (IS_LAYOUTREF_VALID(&iParam0 + 904))
	{
		RELEASE_LAYOUT_REF(&iParam0 + 904);
	}
	return;
}

void Function_447(struct<417> Param0) //Position: 0x1DAFE / 121598
{
	if (Param0.f_148 != 0)
	{
		Function_441(&Param0 + 152);
		Param0.f_416 = 0;
		Param0.f_148 = 0;
	}
	return;
}

void Function_448(struct<145> Param0) //Position: 0x1DB22 / 121634
{
	switch (Param0.f_144)
	{
		case 0x00000001:
			Global_53579 = Param0;
			break;
		
		case 0x00000002:
			Global_53578 = Param0;
			break;
	}
	return;
}

void Function_449(int iParam0) //Position: 0x1DB52 / 121682
{
	int iVar0;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = TRAIN_GET_NUM_CARS(iParam0);
		while (iVar0 >= 0)
		{
			iVar0 = (iVar0 - 1);
			TRAIN_DESTROY_CAR(iParam0, iVar0);
		}
	}
	return;
}

void Function_450(struct<937> Param0) //Position: 0x1DB81 / 121729
{
	Param0.f_936 = 1;
	Function_449(&Param0);
	return;
}

int Function_451() //Position: 0x1DB94 / 121748
{
	if (Global_6665)
	{
		return 0;
	}
	Function_452(&Global_53580 + 20);
	Function_452(&Global_53580 + 980);
	return 1;
}

int Function_452(struct<941> Param0) //Position: 0x1DBB6 / 121782
{
	float fVar0;
	
	if (Param0.f_912 != 0)
	{
		return 0;
	}
	if (!Function_4(16384) || !bLocal_662)
	{
		Function_450(&Param0);
		Function_446(&Param0);
		if (Param0.f_424)
		{
			Param0.f_424 = 0;
			LOG_ERROR("AMBIENT_TRAIN_UPDATE: train was disabled while stolen...turning stolen flag off");
		}
		return 0;
	}
	if (!Function_468())
	{
		return 0;
	}
	if (Param0 == 4294967295)
	{
		Function_467(&Param0);
		if (Param0 == 4294967295)
		{
			return 0;
		}
		Function_466(Param0);
	}
	if (!Param0.f_424)
	{
		fVar0 = TRAIN_GET_NEAREST_POI_DISTANCE(Param0);
		if (Global_53579 != Param0 && iLocal_666)
		{
		}
		else if (Global_53578 != Param0 && iLocal_667)
		{
		}
		if (!Param0.f_140 && fVar0 > Param0.f_132)
		{
			Param0.f_140 = 1;
		}
		if ((Param0.f_140 && fVar0 < Param0.f_136) && iLocal_665)
		{
			Param0.f_140 = 0;
			Function_450(&Param0);
			return 0;
		}
		if (!Param0.f_140)
		{
			return 0;
		}
	}
	Param0.f_140 = 1;
	if (Param0.f_940 || Param0.f_424)
	{
		if (!Function_457(&Param0))
		{
			return 0;
		}
		Function_453(&Param0);
	}
	return 0;
}

void Function_453(struct<821> Param0) //Position: 0x1DD18 / 122136
{
	char* cVar0[32];
	var uVar8;
	
	if (TRAIN_GET_NUM_CARS(Param0) >= 0)
	{
		return;
	}
	switch (Param0.f_144)
	{
		case 0x00000001:
			strcpy(&cVar0, "FrontierTrain", 32);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1166);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1167);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1165);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1156);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1157);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1158);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1162);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NorthTrain", 32);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1175);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1176);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1168);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1169);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1170);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1171);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(Param0, 1173);
	}
	uVar8 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(Param0, false));
	if (IS_ACTOR_VALID(&uVar8))
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&uVar8), "nTrainName"))
		{
			DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(&uVar8), "nTrainName", &cVar0);
		}
	}
	Function_454(Param0, Param0.f_820);
	return;
}

void Function_454(int iParam0, int iParam1) //Position: 0x1DE49 / 122441
{
	int iVar0;
	
	if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
	{
		iVar0 = Function_455(iParam0);
		if (IS_ACTOR_VALID(&iVar0))
		{
			ENABLE_VEHICLE_SEAT(&iVar0, 14, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 15, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 16, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 17, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 18, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 19, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 20, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 21, iParam1);
		}
	}
	if (Global_53579 == iParam0)
	{
		(&Global_53580 + 20)->f_820 = iParam1;
	}
	else if (Global_53578 == iParam0)
	{
		(&Global_53580 + 980)->f_820 = iParam1;
	}
	return;
}

int Function_455(int iParam0) //Position: 0x1DEE9 / 122601
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	bVar0 = true;
	iVar1 = TRAIN_GET_NUM_CARS(iParam0);
	if (iVar1 > 1)
	{
		bVar0 = true;
		while (bVar0 < (iVar1 - 1))
		{
			iVar2 = TRAIN_GET_CAR(iParam0, bVar0);
			if (IS_OBJECT_VALID(&iVar2))
			{
				if (Function_456(&iVar2) != 1165 || Function_456(&iVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_456(int iParam0) //Position: 0x1DF55 / 122709
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

bool Function_457(struct<417> Param0) //Position: 0x1DF72 / 122738
{
	if (Param0.f_144 == Param0.f_148)
	{
		if (Param0.f_416)
		{
			return 1;
		}
		Param0.f_416 = Function_462(&Param0 + 152);
		return Param0.f_416;
	}
	Param0.f_148 = Param0.f_144;
	switch (Param0.f_144)
	{
		case 0x00000001:
			Function_461(&Param0 + 152, 1166, 2, 0);
			Function_461(&Param0 + 152, 1167, 2, 0);
			Function_461(&Param0 + 152, 1156, 2, 0);
			Function_461(&Param0 + 152, 1165, 2, 0);
			Function_461(&Param0 + 152, 1157, 2, 0);
			Function_461(&Param0 + 152, 1158, 2, 0);
			Function_461(&Param0 + 152, 1162, 2, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000002:
			Function_461(&Param0 + 152, 1175, 2, 0);
			Function_461(&Param0 + 152, 1176, 2, 0);
			Function_461(&Param0 + 152, 1169, 2, 0);
			Function_461(&Param0 + 152, 1168, 2, 0);
			Function_461(&Param0 + 152, 1170, 2, 0);
			Function_461(&Param0 + 152, 1171, 2, 0);
			Function_461(&Param0 + 152, 1173, 2, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_458(&Param0 + 152, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000000:
			break;
	}
	Param0.f_416 = Function_462(&Param0 + 152);
	return Param0.f_416;
}

var Function_458(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1E45A / 123994
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_460(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_459(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_459(struct<13> Param0) //Position: 0x1E498 / 124056
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_460(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1E4AB / 124075
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_444(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_459(&(Param0[iVar02]), 4);
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

var Function_461(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1E57A / 124282
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_444(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_459(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_459(&(Param0[iVar02]), 8);
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

bool Function_462(struct<2>[] Param0) //Position: 0x1E656 / 124502
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_465();
	iVar1 = 0;
	if (!Function_444(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_459(&(Param0[iVar02]), 8);
		}
		else if (Function_464())
		{
			iVar1 = 1;
			Function_459(&(Param0[iVar02]), 8);
		}
		Function_459(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_444(&(Param0[iVar02]), 4))
		{
			if (!Function_444(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_444(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_444(&(Param0[02]), 8) || iVar1));
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
				Function_459(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_444(&(Param0[iVar02]), 4))
		{
			if (!Function_444(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_459(&(Param0[iVar02]), 2);
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
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_459(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_459(&(Param0[iVar02]), 2);
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
	Function_463();
	return 1;
}

void Function_463() //Position: 0x1EA18 / 125464
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

bool Function_464() //Position: 0x1EA58 / 125528
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

void Function_465() //Position: 0x1EA86 / 125574
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

void Function_466(int iParam0) //Position: 0x1EAC8 / 125640
{
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_816 = 16383;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_816 = 16383;
	}
	return;
}

void Function_467(struct<913> Param0) //Position: 0x1EAF8 / 125688
{
	if (Param0 == 4294967295)
	{
		if (!IS_LAYOUTREF_VALID(&Param0 + 904))
		{
			(&Param0 + 904) = CREATE_LAYOUT(Function_82());
		}
		if (!IS_OBJECT_VALID(&Global_53580 + 8))
		{
			if (!Global_53580.f_16)
			{
				Global_53580.f_16 = 1;
				*(&Global_53580 + 8) = CREATE_WORLD_SECTOR(&Global_10992, "swRailRoad");
				return;
			}
		}
		if (!IS_WORLD_SECTOR_LOADED(&Global_53580 + 8))
		{
			return;
		}
		Param0 = TRAIN_CREATE_NEW_TRAIN(8, "rail__rrtrack_02x", 0);
		if (Param0 == 4294967295)
		{
			Param0.f_912 = 1;
			LOG_ERROR("Unable to create train.");
			return;
		}
		TRAIN_SET_MAX_ACCEL(Param0, 1,25f);
		TRAIN_SET_MAX_DECEL(Param0, -0,75f);
		TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
		TRAIN_SET_POSITION_DIRECTION(Param0, &Param0 + 428, &Param0 + 440);
		if (Param0.f_144 != 1 && iLocal_664)
		{
			CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Param0 + 904, "Train", "$/content/scripting/gringo/gringobrains/veh/Train_Brain", Vector(-971,969f, (100.0f + IntToFloat(Param0 * 2)), 2407,337f), Vector(0.0f, 0.0f, 0.0f));
		}
		Function_448(&Param0);
	}
	return;
}

bool Function_468() //Position: 0x1EC64 / 126052
{
	Function_458(&Global_53580 + 1956, "$/content/scripting/gringo/gringobrains/veh/Train_Brain", 1, 0);
	return Function_462(&Global_53580 + 1956);
}

void Function_469() //Position: 0x1ECB9 / 126137
{
	int iVar0;
	
	Global_53580.f_1952 = 1;
	(&Global_53580 + 20)->f_912 = 0;
	(&Global_53580 + 20)->f_132 = 450.0f;
	(&Global_53580 + 20)->f_136 = 500.0f;
	(&Global_53580 + 20)->f_140 = 0;
	(&Global_53580 + 20)->f_144 = 1;
	Global_53580.f_20 = 4294967295;
	*(&Global_53580 + 20 + 428) = Vector(-2210,959f, 16,58f, 2624,5f);
	*(&Global_53580 + 20 + 440) = Vector(-0,372f, 0.0f, 0,921f);
	(&Global_53580 + 20)->f_452 = 0;
	(&Global_53580 + 20)->f_820 = 1;
	(&Global_53580 + 20)->f_424 = 0;
	(&Global_53580 + 20)->f_92 = 5;
	(&Global_53580 + 20)->f_124 = 0;
	(&Global_53580 + 20)->f_848 = 0;
	(&Global_53580 + 20)->f_936 = 0;
	(&Global_53580 + 20)->f_128 = 0;
	(&Global_53580 + 20)->f_852 = 0;
	(&Global_53580 + 980)->f_912 = 0;
	(&Global_53580 + 980)->f_132 = 450.0f;
	(&Global_53580 + 980)->f_136 = 500.0f;
	(&Global_53580 + 980)->f_140 = 0;
	(&Global_53580 + 980)->f_144 = 2;
	Global_53580.f_980 = 4294967295;
	*(&Global_53580 + 980 + 428) = Vector(651,801f, 78,645f, 1275,99f);
	*(&Global_53580 + 980 + 440) = Vector(0.0f, 0.0f, 1.0f);
	(&Global_53580 + 980)->f_452 = 0;
	(&Global_53580 + 980)->f_820 = 1;
	(&Global_53580 + 980)->f_424 = 0;
	(&Global_53580 + 980)->f_92 = 5;
	(&Global_53580 + 980)->f_124 = 0;
	(&Global_53580 + 980)->f_848 = 0;
	(&Global_53580 + 980)->f_936 = 0;
	(&Global_53580 + 980)->f_128 = 0;
	(&Global_53580 + 980)->f_852 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		(*&Global_53580 + 20 + 456)[iVar03] = 0;
		(&Global_53580 + 20 + 456[iVar03])->f_4 = 4294967295;
		(&Global_53580 + 20 + 456[iVar03] + 8) = "";
		(&Global_53580 + 20 + 456[iVar03])->f_16 = 4294967295;
		(*&Global_53580 + 980 + 456)[iVar03] = 0;
		(&Global_53580 + 980 + 456[iVar03])->f_4 = 4294967295;
		(&Global_53580 + 980 + 456[iVar03] + 8) = "";
		(&Global_53580 + 980 + 456[iVar03])->f_16 = 4294967295;
		iVar0++;
	}
	(&Global_53580 + 20)->f_824 = 0;
	(&Global_53580 + 20 + 824)->f_4 = 4294967295;
	(&Global_53580 + 20 + 824 + 8) = "";
	(&Global_53580 + 20 + 824)->f_16 = 4294967295;
	(&Global_53580 + 980)->f_824 = 0;
	(&Global_53580 + 980 + 824)->f_4 = 4294967295;
	(&Global_53580 + 980 + 824 + 8) = "";
	(&Global_53580 + 980 + 824)->f_16 = 4294967295;
	return;
}

void Function_470(struct<57> Param0) //Position: 0x1EF23 / 126755
{
	strcpy(&Param0 + 24, "VOL RESTRICT", 16);
	Param0 = 126852;
	*(&Param0 + 8) = 126840;
	*(&Param0 + 16) = 126817;
	Param0.f_56 = 1;
	return;
}

void Function_471() //Position: 0x1EF61 / 126817
{
	if (IS_LAYOUTREF_VALID(&Global_39615))
	{
		DESTROY_LAYOUT(&Global_39615);
	}
	return;
}

int Function_472() //Position: 0x1EF78 / 126840
{
	Function_146(4294967295);
	return 0;
}

void Function_473() //Position: 0x1EF84 / 126852
{
	if (!IS_LAYOUTREF_VALID(&Global_39615))
	{
		Global_39615 = CREATE_LAYOUT("AmbientVol");
	}
	return;
}

void Function_474(struct<57> Param0) //Position: 0x1EFA9 / 126889
{
	strcpy(&Param0 + 24, "AMBIENT SCORE", 16);
	Param0 = 126986;
	*(&Param0 + 8) = 126958;
	*(&Param0 + 16) = 126952;
	Param0.f_56 = 1;
	return;
}

void Function_475() //Position: 0x1EFE8 / 126952
{
	return;
}

int Function_476() //Position: 0x1EFEE / 126958
{
	Function_477();
	return 0;
}

void Function_477() //Position: 0x1EFF8 / 126968
{
	AUDIO_SET_GLOBAL_LAW_VALUES(Global_6646, Global_6647, Global_6650);
	return;
}

void Function_478() //Position: 0x1F00A / 126986
{
	return;
}

void Function_479(struct<57> Param0) //Position: 0x1F010 / 126992
{
	strcpy(&Param0 + 24, "BEAT LAUNCHER", 16);
	Param0 = 128157;
	*(&Param0 + 8) = 127077;
	*(&Param0 + 16) = 127055;
	Param0.f_56 = 1;
	return;
}

void Function_480() //Position: 0x1F04F / 127055
{
	Function_481();
	return;
}

void Function_481() //Position: 0x1F058 / 127064
{
	DESTROY_OBJECTSET(&Global_39246);
	return;
}

int Function_482() //Position: 0x1F065 / 127077
{
	if (Function_4(4))
	{
		Function_483(&Global_38380);
	}
	return 0;
}

void Function_483(struct<36>[] Param0) //Position: 0x1F079 / 127097
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_SCRIPT_VALID(&Param0[iVar036] + 48))
		{
		}
		else if (Function_488(&(Param0[iVar036]), 1))
		{
			if (!Global_6634)
			{
				if (Function_486(&(Param0[iVar036])))
				{
					Function_485(&(Param0[iVar036]), 1);
					Function_484(&(Param0[iVar036]), 2);
				}
			}
		}
		else if (Function_488(&(Param0[iVar036]), 2))
		{
			if (Param0[iVar036].f_108 + 2.0f) < GET_CURRENT_GAME_TIME()
			{
			}
			Function_485(&(Param0[iVar036]), 2);
			Function_484(&(Param0[iVar036]), 4);
			Function_364(&(Param0[iVar036]));
		}
		else if (Function_488(&(Param0[iVar036]), 4))
		{
		}
		iVar0++;
	}
	return;
}

void Function_484(vector3 vParam0) //Position: 0x1F136 / 127286
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_485(vector3 vParam0) //Position: 0x1F149 / 127305
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

bool Function_486(struct<109> Param0) //Position: 0x1F166 / 127334
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
	Function_487(&Param0 + 112, &Var0 + 72);
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

void Function_487(struct<157> Param0) //Position: 0x1F2CF / 127695
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

bool Function_488(vector3 vParam0) //Position: 0x1F47F / 128127
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_489() //Position: 0x1F49D / 128157
{
	struct<22> Var0;
	
	Function_500(&Global_38380);
	if (Function_499() == 1)
	{
		if (!Function_498())
		{
			*(&Var0 + 28) = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
			if (!Function_70())
			{
				Function_284();
				Function_284();
				if (Function_497(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_284(), Function_284(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
			else
			{
				Function_284();
				Function_284();
				if (Function_497(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_284(), Function_284(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
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
			Function_494(0);
			Function_296();
			Function_490(0, 0, 0);
			Function_490(1, 0, 0);
		}
	}
	return;
}

void Function_490(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F61A / 128538
{
	if ((*&Global_40060 + 32)[iParam0] >= 0)
	{
		Function_493(iParam0, (*&Global_40060 + 32)[iParam0]);
		(*&Global_40060 + 32)[iParam0] = 0;
		if (bParam2)
		{
			Function_491(iParam0, 0, 0, Function_250(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				Function_68("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_491(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1F684 / 128644
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &iParam1, &bParam2, &iParam3, &iParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_492(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_492(int iParam0) //Position: 0x1F6D4 / 128724
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_493(bool bParam0, bool bParam1) //Position: 0x1F6FD / 128765
{
	if (!Function_298(bParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[bParam0] = (Global_40060[bParam0] + bParam1);
	Function_328((*&Global_40060 + 4428)[bParam0], bParam1, 0, 0);
	Function_328(222, bParam1, 0, 0);
	return;
}

void Function_494(int iParam0) //Position: 0x1F742 / 128834
{
	Function_496(0);
	Function_495();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	Global_39906.f_40 = 0;
	if (&iParam0 == 1)
	{
		Function_12(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_495() //Position: 0x1F78B / 128907
{
	Function_12(&Global_39906 + 8, 2);
	Function_12(&Global_39906 + 8, 4);
	Function_12(&Global_39906 + 8, 8);
	Function_12(&Global_39906 + 8, 16);
	Function_12(&Global_39906 + 8, 32);
	Function_12(&Global_39906 + 8, 64);
	Function_12(&Global_39906 + 8, 128);
	Function_12(&Global_39906 + 8, 256);
	Function_12(&Global_39906 + 8, 512);
	Function_12(&Global_39906 + 8, 1024);
	Function_12(&Global_39906 + 8, 2048);
	Function_12(&Global_39906 + 8, 131072);
	Function_12(&Global_39906 + 8, 262144);
	Function_12(&Global_39906 + 8, 524288);
	return;
}

void Function_496(bool bParam0) //Position: 0x1F825 / 129061
{
	if (bParam0 == 1)
	{
		Function_10(&Global_39906 + 8, 1);
	}
	else
	{
		Function_12(&Global_39906 + 8, 1);
	}
	return;
}

bool Function_497(int iParam0, int iParam1, bool bParam2, struct<2> Param3, struct<2> Param5, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20) //Position: 0x1F846 / 129094
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
			if (Function_488(&(Global_38380[iVar036]), 4))
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
					Function_487(&iParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = iParam1;
					Function_484(&(Global_38380[iVar036]), 1);
					Function_485(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_498() //Position: 0x1F994 / 129428
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

int Function_499() //Position: 0x1F9C2 / 129474
{
	return Function_18(StackVal, 1);
}

void Function_500(struct<36>[] Param0) //Position: 0x1F9D1 / 129489
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
	Function_364(&(Param0[036]));
	Function_364(&(Param0[136]));
	Function_364(&(Param0[236]));
	Function_364(&(Param0[336]));
	Function_364(&(Param0[436]));
	Function_364(&(Param0[536]));
	Function_364(&(Param0[636]));
	Function_364(&(Param0[736]));
	Function_364(&(Param0[836]));
	Function_364(&(Param0[936]));
	Function_364(&(Param0[1036]));
	Function_364(&(Param0[1136]));
	Function_484(&(Param0[036]), 4);
	Function_484(&(Param0[136]), 4);
	Function_484(&(Param0[236]), 4);
	Function_484(&(Param0[336]), 4);
	Function_484(&(Param0[436]), 4);
	Function_484(&(Param0[536]), 4);
	Function_484(&(Param0[636]), 4);
	Function_484(&(Param0[736]), 4);
	Function_484(&(Param0[836]), 4);
	Function_484(&(Param0[936]), 4);
	Function_484(&(Param0[1036]), 4);
	Function_484(&(Param0[1136]), 4);
	if (!IS_LAYOUTREF_VALID(&Global_10994))
	{
		Global_10994 = CREATE_LAYOUT("RegionChar");
	}
	Global_124153 = 0;
	Global_124152 = 0.0f;
	Global_39246 = CREATE_OBJECTSET_IN_LAYOUT("DisallowedVols", &Global_10994, 9, 1);
	return;
}

void Function_501(struct<57> Param0) //Position: 0x1FB70 / 129904
{
	strcpy(&Param0 + 24, "BEAT MANAGER", 16);
	Param0 = 131280;
	*(&Param0 + 8) = 129972;
	*(&Param0 + 16) = 129966;
	Param0.f_56 = 1;
	return;
}

void Function_502() //Position: 0x1FBAE / 129966
{
	return;
}

int Function_503() //Position: 0x1FBB4 / 129972
{
	if (Function_4(1024))
	{
		Function_504();
	}
	return 0;
}

void Function_504() //Position: 0x1FBC7 / 129991
{
	int iVar0;
	
	if (bLocal_661)
	{
		if (Global_38377 <= 1)
		{
			return;
		}
		if (Function_512(&iVar0))
		{
		}
		else
		{
			iVar0 = Function_511(&Global_37968, Global_38377);
		}
		if (Global_39611 == 1)
		{
			iVar0 = Global_39612;
		}
		if (Function_505(iVar0, 0))
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

bool Function_505(int iParam0, bool bParam1) //Position: 0x1FC59 / 130137
{
	struct<57> Var0;
	
	if (!Function_510(iParam0))
	{
		return 0;
	}
	if (!&bParam1)
	{
		if (!Function_509(Global_27462[iParam052].f_148))
		{
			return 0;
		}
		if (!Function_508(&Global_27462[iParam052] + 160))
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
	if (!Function_497(StackVal, StackVal, iVar31, Global_27462[iParam052].f_188, &Global_27462[iParam052] + 160, *(&Var0 + 16), *(&Var0 + 28), Global_27462[iParam052].f_144, 0, &Var0 + 8, Global_27462[iParam052].f_156, (*&Global_27462[iParam052] + 64)[0], (*&Global_27462[iParam052] + 64)[1], (*&Global_27462[iParam052] + 64)[2], &Global_27462[iParam052] + 188, Var0.f_56, Global_27462[iParam052].f_404, Global_27462[iParam052].f_136, iParam0, Global_27462[iParam052].f_140, Global_27462[iParam052].f_408))
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
		Function_507(0);
	}
	if (Global_27462[iParam052].f_396)
	{
		Function_506(iParam0);
	}
	return 1;
}

void Function_506(int iParam0) //Position: 0x1FDF6 / 130550
{
	if (!Function_510(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

void Function_507(int iParam0) //Position: 0x1FE18 / 130584
{
	Global_21369 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369, 0, 0, (&iParam0 + Function_250(90)), 0);
	return;
}

bool Function_508(int iParam0) //Position: 0x1FE37 / 130615
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

bool Function_509(int iParam0) //Position: 0x1FE64 / 130660
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_38380 - 1))
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_488(&(Global_38380[iVar036]), 4) && !IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_510(int iParam0) //Position: 0x1FEB4 / 130740
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

var Function_511(var[] uParam0, bool bParam1) //Position: 0x1FECA / 130762
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

bool Function_512(int iParam0) //Position: 0x1FF38 / 130872
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_38377)
	{
		if (Function_18(StackVal, 2))
		{
			if (Global_27462[Global_37968[iVar0]52].f_152 != 0)
			{
				if (!Function_244(Global_27462[Global_37968[iVar0]52].f_152) != 3)
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
				if (Function_161(7) && !Function_338(7, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[2])
			{
				if (Function_161(5) && !Function_338(5, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[0])
			{
				if (Function_161(4) && !Function_338(4, 16))
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
				if (Function_161(7) && !Function_338(7, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[2])
			{
				if (Function_161(5) && !Function_338(5, 16))
				{
					iParam0 = Global_37968[iVar0];
					return 1;
				}
			}
			if (Global_43788 == Global_46736[0])
			{
				if (Function_161(4) && !Function_338(4, 16))
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

void Function_513() //Position: 0x200D0 / 131280
{
	Function_530();
	Function_515();
	Function_514();
	return;
}

void Function_514() //Position: 0x200DF / 131295
{
	return;
}

void Function_515() //Position: 0x200E5 / 131301
{
	Global_38376 = 0;
	Function_528(3, 1, 25, 4294967276, 50, 2, 164032, 3, 4, "$/content/Ambient/Town/beat_crime_horsethief", 63, 2, 70.0f, 8, 65, 0);
	Function_527(&Global_27462[352] + 188, 1, 5.0f, 96, 4294967295);
	Function_526(&Global_27462[352] + 188, 4,5f);
	Function_525(&Global_27462[352] + 188, -5.0f, 2);
	if (!Global_6665)
	{
		Function_528(0, 2, 15, 5, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_coyote_chase", 30, 2, 190.0f, 2, 55, 0);
		Function_527(&Global_27462[052] + 188, 2, 8.0f, 1, 704);
		Function_524(&Global_27462[052] + 188, 19,9f, 0,6f);
		Function_525(&Global_27462[052] + 188, -3.0f, 2);
		Function_523(&Global_27462[052] + 188, 30.0f);
	}
	else
	{
		Function_522(6, "$/content/Ambient/Town/beat_dog_fetch");
		Function_522(0, "$/content/Ambient/Roaming/event_coyote_chase");
	}
	Function_528(4, 2, 50, 4294967271, 50, 2, 32960, 3, 4, "$/content/Ambient/Town/beat_crime_wagonthief", 63, 2, 190.0f, 8, 55, 0);
	Function_527(&Global_27462[452] + 188, 2, 9,5f, 64, 752);
	Function_526(&Global_27462[452] + 188, 10.0f);
	Function_524(&Global_27462[452] + 188, 7,9f, 0,6f);
	Function_525(&Global_27462[452] + 188, -4.0f, 2);
	if (!Global_6665)
	{
		Function_528(5, 2, 75, 4294967286, 25, 2, 96, 1, 4, "$/content/Ambient/Roaming/event_criminal_chase", 31, 3, 190.0f, 8, 55, 0);
		Function_527(&Global_27462[552] + 188, 3, 6.0f, 1, 736);
		Function_524(&Global_27462[552] + 188, 19,9f, 0,7f);
		Function_525(&Global_27462[552] + 188, -3.0f, 2);
		Function_521(&Global_27462[552] + 188);
	}
	else
	{
		Function_522(5, "$/content/Ambient/Roaming/event_criminal_chase");
	}
	Function_528(1, 2, 100, 4294967271, 100, 2, 33808, 0, 4, "$/content/Ambient/Roaming/event_crazy_hermit", 63, 2, 190.0f, 8, 55, 0);
	Function_527(&Global_27462[152] + 188, 1, 6.0f, 1, 240);
	Function_524(&Global_27462[152] + 188, 5,9f, 0,3f);
	Function_523(&Global_27462[152] + 188, 40.0f);
	Function_525(&Global_27462[152] + 188, -4.0f, 2);
	Function_528(43, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_wilderness_dynomite", 63, 2, 190.0f, 8, 55, 0);
	Function_527(&Global_27462[4352] + 188, 1, 5.0f, 1, 752);
	Function_523(&Global_27462[4352] + 188, 30.0f);
	Function_524(&Global_27462[4352] + 188, 5,9f, 0,3f);
	Function_525(&Global_27462[4352] + 188, -5.0f, 2);
	if (!Global_6665)
	{
		Function_528(23, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_lone_stranger", 63, 2, 190.0f, 8, 70, 0);
		Function_527(&Global_27462[2352] + 188, 3, 8.0f, 1, 752);
		Function_524(&Global_27462[2352] + 188, 19,9f, 0,6f);
		Function_523(&Global_27462[2352] + 188, 5.0f);
		Function_525(&Global_27462[2352] + 188, -1.0f, 2);
		Function_528(29, 2, 50, 4294967271, 50, 2, 32776, 0, 4, "$/content/Ambient/Roaming/event_roadside_ambush", 63, 2, 190.0f, 8, 65, 0);
		Function_527(&Global_27462[2952] + 188, 2, 5.0f, 64, 752);
		Function_526(&Global_27462[2952] + 188, 15.0f);
		Function_523(&Global_27462[2952] + 188, 5.0f);
		Function_520(&Global_27462[2952] + 188, 12.0f, 5.0f);
		Function_519(&Global_27462[2952] + 188, 0,4f, 8.0f);
		Function_525(&Global_27462[2952] + 188, -2.0f, 2);
	}
	else
	{
		Function_522(23, "$/content/Ambient/Roaming/event_lone_stranger");
		Function_522(29, "$/content/Ambient/Roaming/event_roadside_ambush");
	}
	Function_528(31, 2, 50, 4294967271, 50, 2, 8, 0, 4, "$/content/Ambient/Roaming/event_roadside_prisoners", 63, 2, 190.0f, 8, 55, 0);
	Function_527(&Global_27462[3152] + 188, 2, 6.0f, 64, 752);
	Function_526(&Global_27462[3152] + 188, 20.0f);
	Function_524(&Global_27462[3152] + 188, 12,5f, 0,4f);
	Function_523(&Global_27462[3152] + 188, 4.0f);
	Function_525(&Global_27462[3152] + 188, 0.0f, 4);
	Function_521(&Global_27462[3152] + 188);
	Function_528(32, 2, 25, 4294967271, 50, 2, 32776, 1, 4, "$/content/Ambient/Roaming/beat_roadside_robbery", 63, 2, 190.0f, 8, 55, 0);
	Function_527(&Global_27462[3252] + 188, 1, 9.0f, 64, 752);
	Function_526(&Global_27462[3252] + 188, 24.0f);
	Function_520(&Global_27462[3252] + 188, 12,5f, 9.0f);
	Function_519(&Global_27462[3252] + 188, 0,45f, 12.0f);
	Function_523(&Global_27462[3252] + 188, 9.0f);
	Function_525(&Global_27462[3252] + 188, -4.0f, 4);
	Function_521(&Global_27462[3252] + 188);
	if (!Global_6665)
	{
		Function_528(42, 2, 60, 0, 70, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_wild_animals", 63, 2, 190.0f, 2, 70, 0);
		Function_527(&Global_27462[4252] + 188, 2, 8.0f, 1, 640);
		Function_524(&Global_27462[4252] + 188, 19,9f, 0,6f);
		Function_523(&Global_27462[4252] + 188, 20.0f);
		Function_525(&Global_27462[4252] + 188, 0.0f, 4);
		Function_521(&Global_27462[4252] + 188);
		Function_528(26, 2, 760, 0, 770, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_predator_prey", 63, 0, 50.0f, 4294967295, 35, 0);
		Function_527(&Global_27462[2652] + 188, 2, 8.0f, 1, 704);
		Function_524(&Global_27462[2652] + 188, 19,9f, 0,6f);
		Function_525(&Global_27462[2652] + 188, 0.0f, 2);
		Function_523(&Global_27462[2652] + 188, 20.0f);
		Function_528(24, 2, 30, 4294967286, 10, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_loot_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_527(&Global_27462[2452] + 188, 0, 3.0f, 1, 752);
		Function_524(&Global_27462[2452] + 188, 1,9f, 0,3f);
		Function_523(&Global_27462[2452] + 188, 10.0f);
		Function_525(&Global_27462[2452] + 188, 0.0f, 4);
		Function_521(&Global_27462[2452] + 188);
		Function_528(25, 2, 30, 10, 10, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_mourn_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_527(&Global_27462[2552] + 188, 1, 3.0f, 1, 752);
		Function_524(&Global_27462[2552] + 188, 5,9f, 0,3f);
		Function_523(&Global_27462[2552] + 188, 10.0f);
		Function_525(&Global_27462[2552] + 188, 0.0f, 4);
		Function_521(&Global_27462[2552] + 188);
		Function_528(17, 2, 15, 0, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_generic_1v1", 31, 2, 190.0f, 2, 60, 0);
		Function_527(&Global_27462[1752] + 188, 2, 8.0f, 1, 704);
		Function_524(&Global_27462[1752] + 188, 19,9f, 0,6f);
		Function_523(&Global_27462[1752] + 188, 30.0f);
		Function_528(38, 2, 100, 4294967271, 100, 2, 32786, 0, 4, "$/content/Ambient/Roaming/event_treasurehunter_intro", 63, 2, 190.0f, 8, 70, 0);
		Function_527(&Global_27462[3852] + 188, 1, 6.0f, 1, 752);
		Function_523(&Global_27462[3852] + 188, 30.0f);
		Function_525(&Global_27462[3852] + 188, -6.0f, 4);
		Function_524(&Global_27462[3852] + 188, 9,9f, 0,4f);
		Function_521(&Global_27462[3852] + 188);
		Function_528(19, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_herbalist_intro", 63, 2, 190.0f, 2, 75, 0);
		Function_527(&Global_27462[1952] + 188, 1, 6.0f, 1, 752);
		Function_523(&Global_27462[1952] + 188, 20.0f);
		Function_524(&Global_27462[1952] + 188, 5,9f, 0,3f);
		Function_525(&Global_27462[1952] + 188, -4.0f, 4);
		Function_521(&Global_27462[1952] + 188);
		Function_528(20, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_hunter_intro", 63, 2, 190.0f, 18, 75, 0);
		Function_527(&Global_27462[2052] + 188, 2, 6.0f, 1, 752);
		Function_523(&Global_27462[2052] + 188, 20.0f);
		Function_524(&Global_27462[2052] + 188, 5,9f, 0,3f);
		Function_525(&Global_27462[2052] + 188, -4.0f, 4);
		Function_521(&Global_27462[2052] + 188);
		Function_528(34, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/Ambient/Roaming/event_sharpshooter_challenge", 63, 2, 190.0f, 2, 55, 0);
		Function_527(&Global_27462[3452] + 188, 0, 5.0f, 1, 752);
		Function_523(&Global_27462[3452] + 188, 16.0f);
		Function_524(&Global_27462[2052] + 188, 8,9f, 0,3f);
		Function_525(&Global_27462[3452] + 188, 0.0f, 4);
		Function_521(&Global_27462[3452] + 188);
	}
	else
	{
		Function_522(42, "$/content/Ambient/Roaming/event_wild_animals");
		Function_522(26, "$/content/Ambient/Roaming/event_predator_prey");
		Function_522(24, "$/content/Ambient/Roaming/event_loot_dead_body");
		Function_522(25, "$/content/Ambient/Roaming/event_mourn_dead_body");
		Function_522(17, "$/content/Ambient/Roaming/event_generic_1v1");
		Function_522(38, "$/content/Ambient/Roaming/event_treasurehunter_intro");
		Function_522(19, "$/content/Ambient/Roaming/event_herbalist_intro");
		Function_522(20, "$/content/Ambient/Roaming/event_hunter_intro");
		Function_522(34, "$/content/Ambient/Roaming/event_sharpshooter_challenge");
		Function_522(40, "$/content/Ambient/Town/event_ultra_high_honor");
		Function_522(39, "$/content/Ambient/Town/event_ultra_high_fame");
	}
	if (!Global_6665)
	{
		Function_528(22, 0, 0, 50, 15, 3, 0, 4, 8, "$/content/Ambient/Traffic/tevent_lone_lawman", 63, 2, 25.0f, 2, 55, 0);
		Function_518(&Global_27462[2252] + 188, 1, 0);
		Function_528(44, 2, 25, 0, 15, 3, 0, 0, 8, "$/content/Ambient/Traffic/tevent_wilderness_pisser", 63, 2, 65.0f, 2, 45, 0);
		Function_518(&Global_27462[4452] + 188, 1, 0);
		Function_528(37, 2, 40, 35, 75, 2, 8, 1, 16, "$/content/Ambient/Beacons/beacon_transport_dynomite", 31, 2, 190.0f, 27, 60, 0);
		Function_527(&Global_27462[3752] + 188, 1, 8.0f, 64, 752);
		Function_526(&Global_27462[3752] + 188, 68.0f);
		Function_520(&Global_27462[3752] + 188, 5,9f, 8.0f);
		Function_519(&Global_27462[3752] + 188, 0,3f, 4.0f);
		Function_523(&Global_27462[3752] + 188, 8.0f);
		Function_525(&Global_27462[3752] + 188, -4.0f, 4);
		Function_517(37, 2);
		Function_521(&Global_27462[3752] + 188);
		Function_528(12, 2, 40, 30, 55, 2, 16, 1, 16, "$/content/Ambient/Beacons/beacon_escort_criminals", 31, 2, 190.0f, 25, 55, 0);
		Function_527(&Global_27462[1252] + 188, 1, 5.0f, 1, 736);
		Function_523(&Global_27462[1252] + 188, 24.0f);
		Function_520(&Global_27462[1252] + 188, 10,9f, 4.0f);
		Function_519(&Global_27462[1252] + 188, 0,3f, 8.0f);
		Function_525(&Global_27462[1252] + 188, 0.0f, 4);
		Function_517(12, 3);
		Function_521(&Global_27462[1252] + 188);
		Function_528(13, 2, 40, 10, 25, 2, 0, 0, 16, "$/content/Ambient/Beacons/beacon_escort_wavedown", 31, 2, 170.0f, 25, 55, 0);
		Function_527(&Global_27462[1352] + 188, 1, 8.0f, 64, 752);
		Function_526(&Global_27462[1352] + 188, 12.0f);
		Function_523(&Global_27462[1352] + 188, 4.0f);
		Function_520(&Global_27462[1352] + 188, 15,9f, 4.0f);
		Function_519(&Global_27462[1352] + 188, 0,4f, 8.0f);
		Function_525(&Global_27462[1352] + 188, 0.0f, 4);
		Function_517(13, 3);
	}
	else
	{
		Function_522(22, "$/content/Ambient/Traffic/tevent_lone_lawman");
		Function_522(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
		Function_522(36, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
		Function_522(44, "$/content/Ambient/Traffic/tevent_wilderness_pisser");
		Function_522(37, "$/content/Ambient/Beacons/beacon_transport_dynomite");
		Function_522(12, "$/content/Ambient/Beacons/beacon_escort_criminals");
		Function_522(13, "$/content/Ambient/Beacons/beacon_escort_wavedown");
		Function_522(13, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
	}
	Function_528(49, 2, 125, 4294967246, 50, 3, 32768, 0, 16, "$/content/Ambient/Roaming/event_proc_matkdef", 31, 2, 160.0f, 8, 70, 0);
	Function_518(&Global_27462[4952] + 188, 2, 1);
	Function_517(49, 1);
	Function_522(45, "$/content/Ambient/Roaming/mh_named_bear");
	Function_522(46, "$/content/Ambient/Roaming/mh_named_boar");
	Function_522(47, "$/content/Ambient/Roaming/mh_named_cougar");
	Function_522(48, "$/content/Ambient/Roaming/mh_named_wolf");
	Function_522(2, "$/content/Ambient/Town/beat_crime_holdup");
	Function_522(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
	Function_522(9, "$/content/Ambient/Town/beat_duel_notoriety");
	Function_522(8, "$/content/Ambient/Town/beat_duel_lowhonor");
	Function_522(10, "$/content/Ambient/Town/beat_duel_rude");
	Function_522(41, "$/content/Ambient/Town/event_unforgiven");
	Function_522(18, "$/content/Ambient/Roaming/event_hangingb");
	Function_522(15, "$/Content/Ambient/Town/first_time_duel");
	Function_522(35, "$/content/Ambient/Town/beat_town_abduction");
	Function_522(14, "$/Content/Ambient/Town/first_time_chuparosa");
	Function_522(11, "$/Content/Ambient/Town/beat_escalera_firesquad");
	Function_522(21, "$/content/Ambient/Roaming/event_last_buffalo");
	Function_522(16, "$/Content/Ambient/Town/first_time_manzanita");
	Function_522(7, "$/content/Ambient/Roaming/event_donkey_lead");
	Function_522(28, "$/content/Ambient/Roaming/event_roadside_aftermath");
	Function_522(27, "$/content/Ambient/MexicanRevolution/mexican_rev_rally");
	Function_522(30, "$/content/Ambient/Roaming/event_roadside_execution");
	Function_516();
	return;
}

void Function_516() //Position: 0x219BF / 137663
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26652)
	{
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_517(int iParam0, int iParam1) //Position: 0x219DC / 137692
{
	Global_27462[iParam052].f_388 = iParam1;
	return;
}

void Function_518(struct<149> Param0) //Position: 0x219EE / 137710
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_519(int iParam0, float fParam1, int iParam2) //Position: 0x21A05 / 137733
{
	(&iParam0 + 84)->f_52 = fParam1;
	(&iParam0 + 84)->f_56 = iParam2;
	return;
}

void Function_520(int iParam0, float fParam1, int iParam2) //Position: 0x21A1D / 137757
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_48 = iParam2;
	return;
}

void Function_521(struct<25> Param0) //Position: 0x21A35 / 137781
{
	Param0.f_24 = 1;
	return;
}

void Function_522(int iParam0, int iParam1) //Position: 0x21A41 / 137793
{
	if (!Function_510(iParam0))
	{
		return;
	}
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&iParam1, 4);
	return;
}

void Function_523(int iParam0, int iParam1) //Position: 0x21A62 / 137826
{
	(&iParam0 + 84)->f_32 = iParam1;
	return;
}

void Function_524(int iParam0, float fParam1, int iParam2) //Position: 0x21A71 / 137841
{
	(&iParam0 + 84)->f_44 = fParam1;
	(&iParam0 + 84)->f_52 = iParam2;
	return;
}

void Function_525(int iParam0, float fParam1, int iParam2) //Position: 0x21A89 / 137865
{
	(&iParam0 + 84)->f_24 = fParam1;
	(&iParam0 + 84)->f_12 = iParam2;
	return;
}

void Function_526(int iParam0, int iParam1) //Position: 0x21AA1 / 137889
{
	(&iParam0 + 84)->f_20 = iParam1;
	return;
}

void Function_527(struct<85> Param0) //Position: 0x21AB0 / 137904
{
	Param0.f_84 = iParam1;
	(&Param0 + 84)->f_4 = fParam2;
	(&Param0 + 84)->f_8 = iParam3;
	(&Param0 + 84)->f_16 = iParam4;
}

void Function_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* cParam9) //Position: 0x21ADA / 137946
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_510(iParam0))
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
	if (!Function_70())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
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
					bVar2 = Function_250(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_529(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_250(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_529(int iParam0, int iParam1) //Position: 0x21E98 / 138904
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

void Function_530() //Position: 0x21EBB / 138939
{
	return;
}

void Function_531(struct<57> Param0) //Position: 0x21EC1 / 138945
{
	strcpy(&Param0 + 24, "BEAT VALIDATORC", 16);
	Param0 = 88582;
	*(&Param0 + 8) = 139010;
	*(&Param0 + 16) = 88582;
	Param0.f_56 = 1;
	return;
}

int Function_532() //Position: 0x21F02 / 139010
{
	if (Function_4(1024))
	{
		Function_533();
	}
	return 0;
}

void Function_533() //Position: 0x21F15 / 139029
{
	var uVar0;
	
	if (bLocal_661)
	{
		Function_534(&uVar0);
	}
	return;
}

void Function_534(int iParam0) //Position: 0x21F26 / 139046
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 35;
	iVar1 = 100;
	iVar2 = iVar0;
	iVar3 = iVar0;
	while (iVar2 <= iVar0 && iVar2 >= iVar1)
	{
		iVar3 = iVar2;
		iVar3++;
		if (Function_536(iVar2, &iParam0))
		{
			Function_535(iVar2);
			Global_27462[iVar252].f_400 = 1;
		}
		else
		{
			Global_27462[iVar252].f_400 = 0;
		}
		iVar2 = iVar3;
	}
	return;
}

void Function_535(int iParam0) //Position: 0x21F84 / 139140
{
	if (Global_38377 > 55)
	{
		LOG_ERROR("giNumValidBeats is higher than CONST_MaxNumValidBeats");
	}
	Global_37968[Global_38377] = iParam0;
	Global_38377++;
	return;
}

bool Function_536(int iParam0, int iParam1) //Position: 0x21FDF / 139231
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
	if (Global_27462[iParam052].f_408)
	{
		Global_39611 = 1;
		Global_39612 = iParam0;
		Function_363(0, 0);
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
	if (!Function_108(StackVal, 0) && Global_6606)
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
		if (Function_402(Global_27462[iParam052].f_152) == 1)
		{
			return 0;
		}
	}
	if (iVar1 & 8192 == 8192)
	{
		if (Function_91() <= 6)
		{
			return 0;
		}
	}
	if (iVar1 & 16384 == 16384)
	{
		if (Function_91() >= 0)
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
		if (!Function_555())
		{
			return 0;
		}
	}
	if (iVar1 & 2048 == 2048)
	{
		if (!Function_554(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4)))
		{
			return 0;
		}
	}
	if (Global_27462[iParam052].f_156 == 4294967294)
	{
		Global_27462[iParam052].f_156 = Global_43789;
	}
	if (!Function_553(Global_27462[iParam052].f_148, &iParam1))
	{
		return 0;
	}
	if (!Function_508(&Global_27462[iParam052] + 160))
	{
		return 0;
	}
	if (!Global_27462[iParam052].f_388 != 4294967295)
	{
		if (!Function_552(Global_27462[iParam052].f_388))
		{
			return 0;
		}
	}
	switch (Global_27462[iParam052].f_188)
	{
		case 0x00000004:
			if (!Function_549((&Global_27462[iParam052] + 188)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Global_27462[iParam052] + 188)->f_156)
			{
				case 0x00000001:
					iVar3 = Function_546(Global_43787, Global_43788, Global_43789, bVar2, 1);
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
						iVar3 = Function_546(Global_43787, Global_43788, Global_43789, (bVar2 + iVar5), 1);
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
			if (iVar1 & 2 == 2)
			{
				if (!Function_545())
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
	}
	if (!(Global_27462[iParam052].f_168 && Global_99472) != Global_99472)
	{
		return 0;
	}
	switch (Global_27462[iParam052].f_144)
	{
		case 0x00000002:
			if (!Function_544())
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
			if (!Function_542())
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_6646 || Global_6648)
			{
				return 0;
			}
			if (!Function_540(1))
			{
				return 0;
			}
			if (!Function_539(StackVal, 0, Global_40000.f_12))
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
			if (!Function_538(1, 0))
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
			if (!Function_537())
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
	if (!Global_27462[iParam052].f_392 != 4294967295 && !Global_27462[iParam052].f_392 != Function_220())
	{
		return 0;
	}
	return 1;
}

bool Function_537() //Position: 0x22539 / 140601
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

bool Function_538(var uParam0, int iParam1) //Position: 0x22596 / 140694
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

bool Function_539(int iParam0, int iParam1, bool bParam2) //Position: 0x225FD / 140797
{
	if (!Function_160(bParam2) && iParam1 != 0)
	{
		return 0;
	}
	if ((!iParam1 != (*&Global_39922 + 116)[iParam0] && !iParam1 != 0) && !Function_367(0x1000000))
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

bool Function_540(bool bParam0) //Position: 0x22650 / 140880
{
	if (Function_367(256))
	{
		return 0;
	}
	if (Function_367(262144))
	{
		return 0;
	}
	if (Function_541())
	{
		return 0;
	}
	if (!Function_367(1))
	{
		return 0;
	}
	if (!Function_367(4096))
	{
		return 0;
	}
	if (bParam0 && Function_36(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_367(2048))
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

bool Function_541() //Position: 0x226C6 / 140998
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

bool Function_542() //Position: 0x226DF / 141023
{
	if (Function_543() != 0 && Global_6606)
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

int Function_543() //Position: 0x2274B / 141131
{
	return Global_21369.f_248;
}

bool Function_544() //Position: 0x22756 / 141142
{
	if (!IS_EARLIER_THAN(&Global_21369, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_545() //Position: 0x2276B / 141163
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

var Function_546(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x227B6 / 141238
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
								return Function_547(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_547(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_547(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_547(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_547(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_547(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_547(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_547(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_547(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_547(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_547(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_547(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_547(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_547(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_547(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_547(&Global_11826, &Global_13998, bParam3);
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
								return Function_547(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_547(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_547(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_547(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_547(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_547(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_547(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_547(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_547(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_547(&Global_12472, &Global_14954, bParam3);
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
		return Function_547(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_547(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_547(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_547(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_547(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_547(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_547(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_547(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_547(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_547(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_547(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_547(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_547(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_547(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_547(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_547(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_547(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_547(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_547(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_547(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_547(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_547(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_547(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_547(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_547(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_547(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_547(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x22DCC / 142796
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_548(&(Param0[iVar02]), 2))
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

bool Function_548(var uParam0, int iParam1) //Position: 0x22E26 / 142886
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_549(int iParam0) //Position: 0x22E43 / 142915
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
			if (Function_550(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_550(int iParam0) //Position: 0x22EAB / 143019
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_551(&iParam0);
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

int Function_551(var uParam0) //Position: 0x22EE9 / 143081
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

bool Function_552(int iParam0) //Position: 0x22F36 / 143158
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_39248[iParam0];
}

bool Function_553(int iParam0, int iParam1) //Position: 0x22F51 / 143185
{
	if ((iParam1 && iParam0) == iParam0)
	{
		return 1;
	}
	if (Function_509(iParam0))
	{
		iParam1 = (iParam1 || iParam0);
		return 1;
	}
	return 0;
}

bool Function_554(int iParam0) //Position: 0x22F7E / 143230
{
	if (STRING_CONTAINS_STRING(&iParam0, "nnotoriety"))
	{
		if (Function_543() >= 1 && Global_6606)
		{
			return 0;
		}
	}
	if (STRING_CONTAINS_STRING(&iParam0, "lowhonor"))
	{
		if (Function_91() <= 3 && Global_6606)
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

bool Function_555() //Position: 0x22FE5 / 143333
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
	if (Function_556())
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

bool Function_556() //Position: 0x2309C / 143516
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
						if (Function_557(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_557(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_557(var uParam0, var uParam1) //Position: 0x2315F / 143711
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_72(&uParam0);
			Var0 = Function_72(&uParam0);
			Function_558(&uParam1);
			Var2 = Function_558(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_558(int iParam0) //Position: 0x23201 / 143873
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

void Function_559(struct<57> Param0) //Position: 0x2326F / 143983
{
	strcpy(&Param0 + 24, "BEAT VALIDATORB", 16);
	Param0 = 88582;
	(&Param0 + 8) = 144048;
	*(&Param0 + 16) = 88582;
	Param0.f_56 = 1;
	return;
}

int Function_560() //Position: 0x232B0 / 144048
{
	if (Function_4(1024))
	{
		Function_561();
	}
	return 0;
}

void Function_561() //Position: 0x232C3 / 144067
{
	var uVar0;
	
	if (bLocal_661)
	{
		Function_562(&uVar0);
	}
	return;
}

void Function_562(int iParam0) //Position: 0x232D4 / 144084
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 17;
	iVar1 = 34;
	iVar2 = iVar0;
	iVar3 = iVar0;
	while (iVar2 <= iVar0 && iVar2 >= iVar1)
	{
		iVar3 = iVar2;
		iVar3++;
		if (Function_536(iVar2, &iParam0))
		{
			Function_535(iVar2);
			Global_27462[iVar252].f_400 = 1;
		}
		else
		{
			Global_27462[iVar252].f_400 = 0;
		}
		iVar2 = iVar3;
	}
	return;
}

void Function_563(struct<57> Param0) //Position: 0x23332 / 144178
{
	strcpy(&Param0 + 24, "BEAT VALIDATORA", 16);
	Param0 = 88582;
	*(&Param0 + 8) = 144243;
	*(&Param0 + 16) = 88582;
	Param0.f_56 = 1;
	return;
}

int Function_564() //Position: 0x23373 / 144243
{
	if (Function_4(1024))
	{
		Function_565();
	}
	return 0;
}

void Function_565() //Position: 0x23386 / 144262
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
			Function_569(0);
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
		Function_363(0, 0);
		bLocal_661 = false;
		return;
	}
	if (Global_6638)
	{
		Function_363(1, 0);
		bLocal_661 = false;
		return;
	}
	if (!Function_568(Global_43789))
	{
		bLocal_661 = false;
		return;
	}
	bLocal_661 = Function_567();
	if (bLocal_661)
	{
		Function_566(&uVar2);
	}
	return;
}

void Function_566(int iParam0) //Position: 0x234D1 / 144593
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 16;
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
		if (Function_536(iVar3, &iParam0))
		{
			Function_535(iVar3);
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

int Function_567() //Position: 0x23555 / 144725
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

bool Function_568(bool bParam0) //Position: 0x23595 / 144789
{
	if (!Function_160(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_43791[bParam0]), 4);
}

void Function_569(bool bParam0) //Position: 0x235B1 / 144817
{
	if (bParam0)
	{
		Function_354(0x10000000);
	}
	else
	{
		Function_570(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_570(int iParam0) //Position: 0x235D6 / 144854
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_571(struct<57> Param0) //Position: 0x235F3 / 144883
{
	strcpy(&Param0 + 24, "JOB HANDLER", 16);
	Param0 = 146619;
	*(&Param0 + 8) = 144950;
	*(&Param0 + 16) = 144944;
	Param0.f_56 = 0;
	return;
}

void Function_572() //Position: 0x23630 / 144944
{
	return;
}

int Function_573() //Position: 0x23636 / 144950
{
	if (0 | Global_6664)
	{
		if (Function_588())
		{
			Function_587(0);
		}
	}
	else if (Global_6646 && Function_588())
	{
		Function_587(0);
	}
	else if (!Global_6646 && !Function_588())
	{
		Function_587(1);
	}
	Function_574(&Global_98256);
	return 0;
}

void Function_574(struct<10>[] Param0) //Position: 0x2367A / 145018
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	uVar1 = Function_187();
	if (!IS_ACTOR_VALID(&uVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (IS_OBJECT_VALID(&Param0[iVar010] + 48))
			{
				Function_586(&Param0, iVar0);
			}
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_PERS_CHAR_VALID(&Param0[iVar010] + 40))
		{
			uVar2 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar010] + 40);
		}
		if (!Function_588() || Global_6623)
		{
			if (IS_OBJECT_VALID(&Param0[iVar010] + 48))
			{
				Function_586(&Param0, iVar0);
			}
		}
		else if (Function_585(&(Param0[iVar010]), 16))
		{
			if ((IS_SCRIPT_VALID(&Param0[iVar010] + 8) || Global_6635) || Function_584(&uVar2))
			{
				Function_586(&Param0, iVar0);
			}
			else if (Function_585(&(Param0[iVar010]), 2))
			{
				Function_583(&(Param0[iVar010]), 2);
				Function_582(&(Param0[iVar010]));
				Function_581(&(Param0[iVar010]), 8);
			}
			else if (Function_585(&(Param0[iVar010]), 8))
			{
				if (Function_577(Param0[iVar010].f_24, Param0[iVar010].f_36, Param0[iVar010].f_72) && !IS_ACTOR_RIDING_VEHICLE(&uVar1))
				{
					if (IS_PERS_CHAR_VALID(&Param0[iVar010] + 40))
					{
						if (!IS_PERS_CHAR_ALIVE(&Param0[iVar010] + 40))
						{
							if (!Function_47(Global_119934, 32768))
							{
								Function_42(Function_187(), 32768, 1, 0);
							}
							Function_586(&Param0, iVar0);
						}
						if (Param0[iVar010].f_24 == 1)
						{
							bVar3 = true;
						}
						else
						{
							bVar3 = IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar010] + 40));
						}
						if (((!IS_OBJECT_VALID(&Param0[iVar010] + 48) && IS_LAYOUTREF_VALID(&Global_46715)) && IS_PERS_CHAR_ALIVE(&Param0[iVar010] + 40)) && bVar3)
						{
							*(&Param0[iVar010] + 48) = Function_224(StackVal, StackVal, &Global_46715, Function_82(), *(&Param0[iVar010] + 56), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 2.0f, 0, 3, Param0[iVar010].f_68, 3, 1, 3212836864, 3212836864, 1);
							if (Function_576(iVar0))
							{
								Function_139(StackVal, Param0[iVar010].f_36, ((10 + iVar0) - 1), *(&Param0[iVar010] + 56), Param0[iVar010].f_72);
							}
							UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(&Param0[iVar010] + 48), 1);
							SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(&Param0[iVar010] + 48), 1,25f);
							if (IS_OBJECT_VALID(&Param0[iVar010] + 48))
							{
							}
						}
						else if (!IS_OBJECT_VALID(&Param0[iVar010] + 48))
						{
						}
					}
				}
				else
				{
					Function_586(&Param0, iVar0);
				}
				if (IS_OBJECT_VALID(&Param0[iVar010] + 48))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0[iVar010] + 48)))
					{
						if (!Function_576(iVar0))
						{
							if (Function_207(StackVal, *(&Param0[iVar010] + 56), 1,25f))
							{
								if (Function_575(iVar0, 1))
								{
									Function_139(StackVal, Param0[iVar010].f_36, ((10 + iVar0) - 1), *(&Param0[iVar010] + 56), Param0[iVar010].f_72);
									SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(&Param0[iVar010] + 48), 1, 0, 10.0f);
								}
							}
						}
					}
				}
			}
			if (!Param0[iVar010].f_36 != Global_43789)
			{
				Function_583(&(Param0[iVar010]), 16);
			}
		}
		else if (Param0[iVar010].f_36 == Global_43789)
		{
			Function_581(&(Param0[iVar010]), 16);
		}
		iVar0++;
	}
	return;
}

bool Function_575(int iParam0, bool bParam1) //Position: 0x239D5 / 145877
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	return Function_205(iVar0, &bParam1);
}

bool Function_576(int iParam0) //Position: 0x239EC / 145900
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_577(bool bParam0, bool bParam1, int iParam2) //Position: 0x23A12 / 145938
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!Function_588())
	{
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		return 0;
	}
	if (!Function_580(bParam0))
	{
		return 0;
	}
	if ((Global_6623 || Global_6627) || Global_6625)
	{
		return 0;
	}
	if (!Global_43789 != bParam1)
	{
		return 0;
	}
	iVar0 = Function_99(bParam1, bParam0, 6);
	if (!Function_3(iVar0))
	{
		return 0;
	}
	if (Global_6606)
	{
		uVar1 = Function_222(iVar0);
		if (GET_DAY(&uVar1) != 0)
		{
			uVar2 = GET_TIME_OF_DAY();
			if (bParam0 != 1)
			{
				if (GET_DAY(&uVar1) > GET_DAY(0))
				{
					return 0;
				}
			}
			uVar3 = Function_222(iVar0);
			ADD_TIME(&uVar3, 0, 16, false, 0);
			if (IS_LATER_THAN(&uVar3, false))
			{
				return 0;
			}
		}
	}
	if (!&iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_579(&iParam2), Function_578(&iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(&Global_98256[bParam010] + 8) || Function_585(&(Global_98256[bParam010]), 2))
	{
		return 0;
	}
	if (Function_585(&(Global_98256[bParam010]), 1))
	{
		return 0;
	}
	return 1;
}

var Function_578(int iParam0) //Position: 0x23B11 / 146193
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_579(int iParam0) //Position: 0x23B7D / 146301
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

bool Function_580(int iParam0) //Position: 0x23BE9 / 146409
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_39258[iParam0];
}

void Function_581(var uParam0, int iParam1) //Position: 0x23C04 / 146436
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_582(int iParam0) //Position: 0x23C15 / 146453
{
	iParam0 = 8;
	return;
}

void Function_583(var uParam0, int iParam1) //Position: 0x23C21 / 146465
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

int Function_584(int iParam0) //Position: 0x23C3B / 146491
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_585(var uParam0, int iParam1) //Position: 0x23C5A / 146522
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_586(struct<10>[] Param0, int iParam1) //Position: 0x23C72 / 146546
{
	if (IS_OBJECT_VALID(&Param0[iParam110] + 48))
	{
		Function_223(&Param0[iParam110] + 48);
	}
	return;
}

void Function_587(bool bParam0) //Position: 0x23C95 / 146581
{
	if (bParam0)
	{
		Function_225(512);
	}
	else
	{
		Function_426(512);
	}
	return;
}

bool Function_588() //Position: 0x23CAF / 146607
{
	return Function_4(512);
}

void Function_589() //Position: 0x23CBB / 146619
{
	Function_590(&Global_98256);
	return;
}

void Function_590(struct<10>[] Param0) //Position: 0x23CC8 / 146632
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_581(&(Param0[iVar010]), 8);
		iVar0++;
	}
	return;
}

void Function_591(struct<57> Param0) //Position: 0x23CEC / 146668
{
	strcpy(&Param0 + 24, "HORSE SERVER", 16);
	Param0 = 149486;
	*(&Param0 + 8) = 146743;
	*(&Param0 + 16) = 146730;
	Param0.f_56 = 1;
	return;
}

void Function_592() //Position: 0x23D2A / 146730
{
	DESTROY_LAYOUT(&uLocal_647);
	return;
}

int Function_593() //Position: 0x23D37 / 146743
{
	var uVar0;
	var uVar1;
	
	while (IS_OBJECT_VALID(OBJECT_ITERATOR_CURRENT(&iLocal_645)))
	{
		uVar0 = OBJECT_ITERATOR_CURRENT(&iLocal_645);
		if (GET_OBJECT_TYPE(&uVar0) == 15)
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_PLAYER(&uVar1))
				{
					Function_613(&uVar1, &iLocal_645);
				}
				else
				{
					Function_594(&uVar1, &iLocal_645);
				}
			}
		}
		OBJECT_ITERATOR_NEXT(&iLocal_645);
		return 0;
	}
	CLEAN_OBJECTSET(&Global_26170);
	START_OBJECT_ITERATOR(&iLocal_645);
	return 0;
}

void Function_594(int iParam0, bool bParam1) //Position: 0x23DAE / 146862
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = Function_612(&iParam0);
	GET_POSITION(&iParam0, &Var1);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (IS_ACTOR_ALIVE(&iVar0))
		{
			GET_POSITION(&iVar0, &Var3);
			iVar5 = GET_MOUNT(&iParam0);
			if (&iVar5 == &iVar0)
			{
				return;
			}
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_611(&iParam0, &iVar5);
				if (Global_47267[3])
				{
					PRINTSTRING("HorseSim noterd that ");
					PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam0)));
					PRINTSTRING(" got on a new horse. They now consider it theirs");
					PRINTNL();
				}
				return;
			}
			iVar6 = GET_MOST_RECENT_RIDER(&iVar0);
			if (IS_ACTOR_VALID(&iVar6))
			{
				if (&iVar6 == &iParam0)
				{
					if (VDIST(Var3, Var1) > 50.0f)
					{
						return;
					}
				}
			}
		}
	}
	LOG_ERROR("get new horse");
	iVar7 = Function_595(StackVal, Var1, 30.0f, &iParam0, &bParam1);
	if (IS_ACTOR_VALID(&iVar7) && IS_ACTOR_VALID(&iParam0))
	{
		Function_611(&iParam0, &iVar7);
		SET_MOST_RECENT_MOUNT(&iParam0, &iVar7);
	}
	return;
}

int Function_595(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4) //Position: 0x23EE8 / 147176
{
	var uVar0;
	struct<2> Var1;
	var uVar3;
	bool bVar4;
	var uVar5;
	struct<2> Var7;
	
	uVar0 = Function_609(GET_GC_LAYOUT(), &uParam0, fParam2);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (Global_47267[3])
		{
			PRINTSTRING("HorseSim is trying to find a place to spawn a horse");
			PRINTNL();
		}
	}
	else
	{
		if (Global_47267[3])
		{
			PRINTSTRING("HorseSim found a horse in the layout for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam3)));
			PRINTNL();
		}
		bVar4 = Function_596(&uParam0, &Var1, &uVar3);
		if (bVar4)
		{
			if (Global_47267[3])
			{
				PRINTSTRING("HorseSim spawned a horse in the layout for ");
				PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam3)));
				PRINTNL();
			}
			if (FIND_GROUND_INTERSECTION(&Var1, 20.0f, &Var1, &uVar5))
			{
				if (OBJECT_ITERATOR_CURRENT(&bParam4) == GET_OBJECT_FROM_ACTOR(&iParam3))
				{
					Var7.f_4 = uVar3;
					uVar0 = CREATE_ACTOR_IN_LAYOUT(GET_GC_LAYOUT(), Function_82(), 976, Var1, Var7);
				}
			}
		}
		else if (Global_47267[3])
		{
			PRINTSTRING("HorseSim failed to find a place to spawn a horse for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam3)));
			PRINTNL();
		}
	}
	return &uVar0;
}

int Function_596(struct<2> Param0, float fParam2) //Position: 0x24085 / 147589
{
	var uVar0;
	struct<6> Var2;
	struct<8> Var8;
	
	Function_607(&uVar0);
	fParam2 = fParam2;
	Function_606(StackVal, &Var2, 0, Param0, 0.0f, 0.0f, 50.0f, 250.0f, 0x40a00000, 0);
	Function_605(&Var8, 1, 2,5f, 0, 512);
	Function_604(&Var8, 10.0f);
	Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2, Var8);
	Param1 = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2, Var8);
	if (Global_47267[3])
	{
		PRINTSTRING("HorseSim found a SPAWN LOCATION:  ");
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal)) < 50.0f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_597(struct<41> Param0) //Position: 0x24134 / 147764
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
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
	else if (!Function_64(StackVal, *(&Param0 + 8)))
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
	Function_603(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_601();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_600(Param0.f_24);
	Function_599(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param0.f_36)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param6.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param6.f_28);
	}
	if (Param6.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param6.f_36, Param6.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_284();
	return StackVal, Function_284();
}

void Function_598(struct<33> Param0) //Position: 0x24269 / 148073
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

void Function_599(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x24395 / 148373
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

void Function_600(bool bParam0) //Position: 0x243E6 / 148454
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

void Function_601() //Position: 0x24499 / 148633
{
	float fVar0;
	bool bVar1;
	
	Function_602(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_602(var uParam0, int iParam1) //Position: 0x244AD / 148653
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

void Function_603(float fParam0) //Position: 0x2453E / 148798
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
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

void Function_604(struct<21> Param0) //Position: 0x24585 / 148869
{
	Param0.f_20 = iParam1;
	return;
}

void Function_605(struct<21> Param0) //Position: 0x24592 / 148882
{
	Param0 = uParam1;
	Param0.f_4 = uParam2;
	Param0.f_8 = uParam3;
	Param0.f_16 = uParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

void Function_606(struct<45> Param0) //Position: 0x245C1 / 148929
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

void Function_607(int iParam0) //Position: 0x24607 / 148999
{
	if (!Function_608(&iParam0))
	{
		Function_32(&iParam0, 0.0f);
	}
	return;
}

bool Function_608(int iParam0) //Position: 0x2461E / 149022
{
	return Function_18(iParam0, 1);
}

var Function_609(var uParam0, struct<2> Param1) //Position: 0x2462C / 149036
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar0, "horse");
	ITERATE_IN_SPHERE(&uVar0, Param1, fParam2);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	bVar3 = false;
	if (Function_610(&iVar2))
	{
		uVar1 = &iVar2;
		bVar3 = true;
	}
	while (IS_OBJECT_VALID(&iVar2))
	{
		if (Function_610(&iVar2))
		{
			bVar3++;
			if (bVar3 >= 1)
			{
				if (RAND_INT_RANGE(false, bVar3) == 1)
				{
					uVar1 = &iVar2;
				}
			}
			else
			{
				uVar1 = &iVar2;
			}
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return GET_ACTOR_FROM_OBJECT(&uVar1);
}

bool Function_610(int iParam0) //Position: 0x246CB / 149195
{
	int iVar0;
	var uVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
	if (!IS_ACTOR_VALID(&iVar0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_RIDER(&iVar0)))
	{
		return 0;
	}
	uVar1 = GET_MOST_RECENT_RIDER(&iVar0);
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (GET_ACTORS_HORSE(&uVar1) == &iVar0)
		{
			return 0;
		}
	}
	return 1;
}

void Function_611(int iParam0, int iParam1) //Position: 0x24721 / 149281
{
	SET_ACTORS_HORSE(&iParam0, &iParam1);
	MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
	return;
}

var Function_612(int iParam0) //Position: 0x2473A / 149306
{
	return GET_ACTORS_HORSE(&iParam0);
}

void Function_613(int iParam0, var uParam1) //Position: 0x24746 / 149318
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&iParam0);
	GET_POSITION(&iParam0, &Var1);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (GET_MOST_RECENT_RIDER(&uVar0) == &iParam0)
		{
			GET_POSITION(&uVar0, &Var3);
			if (VDIST(Var3, Var1) > 50.0f)
			{
				return;
			}
		}
	}
	if (Global_47267[3])
	{
		PRINTSTRING("HorseSim spawning new horse for player");
		PRINTNL();
	}
	uVar5 = Function_595(StackVal, Var1, 30.0f, &iParam0, &uParam1);
	if (IS_ACTOR_VALID(&uVar5))
	{
		SET_MOST_RECENT_MOUNT(&iParam0, &uVar5);
	}
	return;
}

void Function_614() //Position: 0x247EE / 149486
{
	uLocal_647 = CREATE_LAYOUT("HorseServer");
	Global_26170 = CREATE_OBJECTSET_IN_LAYOUT("HorseServerSet", &uLocal_647, 15, 0);
	iLocal_645 = CREATE_OBJECT_ITERATOR(&uLocal_647);
	ITERATE_IN_SET(&iLocal_645, &Global_26170);
	CLEAN_OBJECTSET(&Global_26170);
	START_OBJECT_ITERATOR(&iLocal_645);
	return;
}

void Function_615(struct<57> Param0) //Position: 0x2484D / 149581
{
	strcpy(&Param0 + 24, "WEATHER", 16);
	Param0 = 152492;
	*(&Param0 + 8) = 149644;
	*(&Param0 + 16) = 149638;
	Param0.f_56 = 1;
	return;
}

void Function_616() //Position: 0x24886 / 149638
{
	return;
}

int Function_617() //Position: 0x2488C / 149644
{
	if (!HUD_IS_FADED() || 0)
	{
		Function_622(&Global_26182);
	}
	Function_621(&Global_26182);
	Function_619(&Global_26174);
	Function_618(&Global_26174);
	return 0;
}

void Function_618(struct<25> Param0) //Position: 0x248B4 / 149684
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

void Function_619(struct<21> Param0) //Position: 0x2494A / 149834
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	Function_620(StackVal, &fVar1, &fVar2);
	if (Param0.f_16)
	{
		if (!StackVal != Param0)
		{
			Param0 = StackVal;
			Param0.f_4 = Param0.f_12;
			bVar0 = true;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (Param0.f_20 + 60.0f))
	{
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 2500)
		{
			Param0 = (Param0 + RAND_FLOAT_RANGE(-0,1f, 0,1f));
			bVar0 = true;
		}
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 2500)
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
			if (StackVal && (StackVal || (StackVal || (Global_99472 != 32 && Param0 < 0,175f) != 0 != 1) != 2))
			{
				Param0 = 0,175f;
			}
		}
		SET_WIND(StackVal, Param0, 5.0f);
		Param0.f_20 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_620(int iParam0, var uParam1, int iParam2) //Position: 0x24AEF / 150255
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			uParam1 = 0,25f;
			iParam2 = 0,5f;
			break;
		
		case 0x00000002:
		case 0x00000005:
			uParam1 = 0,25f;
			iParam2 = 0,75f;
			break;
		
		case 0x00000003:
			uParam1 = 0,5f;
			iParam2 = 1.0f;
			break;
		
		case 0x00000004:
			uParam1 = 1,3f;
			iParam2 = 1,6f;
			break;
		
		default:
			uParam1 = 0,25f;
			iParam2 = 0,5f;
			break;
	}
	return;
}

void Function_621(vector3 vParam0) //Position: 0x24B85 / 150405
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

void Function_622(struct<45> Param0) //Position: 0x24CFE / 150782
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	bVar0 = false;
	iVar1 = GET_HOUR(0);
	iVar2 = 0;
	if (bVar0)
	{
		iVar2 = 1;
	}
	else if ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19)
	{
		iVar2 = 1;
	}
	if (Param0.f_24 && iVar2)
	{
		Function_232(StackVal);
		if (!StackVal != StackVal)
		{
			if (HUD_IS_FADED())
			{
				Function_231(StackVal, 0);
			}
			else
			{
				Function_228(StackVal, MAKE_TIME_OF_DAY(false, Function_250(300), 0), bVar0);
			}
		}
		return;
	}
	if (Param0.f_24)
	{
		Function_232(StackVal);
		return;
	}
	Function_232(Param0);
	iVar3 = 4294967295;
	iVar4 = 4294967295;
	bVar5 = true;
	if (bVar0)
	{
		bVar5 = false;
	}
	if (!bVar5 && !iVar4 != 4294967295)
	{
		bVar6 = Function_628(iVar4);
		if (!bVar6 != 4294967295)
		{
			Function_232(bVar6);
			Param0 = bVar6;
			if (!iVar3 != 4294967295)
			{
				Function_627(Param0);
			}
			if (!StackVal != Param0)
			{
				if (HUD_IS_FADED())
				{
					Function_231(bVar6, 1);
				}
				else
				{
					fVar7 = 0.0f;
					bVar8 = (Function_624(iVar4) - fVar7);
					if (bVar8 > 10.0f)
					{
						bVar8 = 10.0f;
					}
					bVar9 = ROUND(bVar8);
					if (!iVar3 != 4294967295)
					{
						Function_623((fVar7 + IntToFloat(bVar9)));
					}
					Function_228(bVar6, MAKE_TIME_OF_DAY(false, Function_250(bVar9), 0), 1);
				}
			}
		}
		return;
	}
	if (IS_EARLIER_THAN(&Param0 + 16, 0))
	{
		bVar10 = RAND_INT_RANGE(false, 10000);
		if ((StackVal != 4294967295 || Param0.f_28) && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			switch (Global_43787)
			{
				case 0x00000001:
					switch (Param0)
					{
						case 0x00000000:
							if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 1;
							}
							Param0.f_40 = 0;
							break;
						
						case 0x00000001:
							if (bVar10 <= (5400 - Param0.f_44 * 100))
							{
								Param0 = 0;
							}
							else if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 2;
							}
							Param0.f_40 = 0;
							break;
						
						case 0x00000002:
							if (bVar10 > (5250 - Param0.f_44 * 100) || Param0.f_40 != 1)
							{
								Param0 = 1;
							}
							else if (bVar10 <= 5625)
							{
								Param0 = 4;
							}
							else if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 3;
							}
							break;
						
						case 0x00000003:
							Param0 = 2;
							Param0.f_40 = 1;
							Param0.f_44 = 0;
							break;
						
						case 0x00000004:
							Param0 = 2;
							Param0.f_40 = 1;
							Param0.f_44 = 0;
							break;
						
						case 0x00000005:
							Param0 = 2;
							Param0.f_40 = 1;
							Param0.f_44 = 0;
							break;
						
						default:
							Param0 = 1;
							break;
					}
					break;
				
				default:
					switch (Param0)
					{
						case 0x00000000:
							if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 1;
							}
							Param0.f_40 = 0;
							break;
						
						case 0x00000001:
							if (bVar10 > (3000 - Param0.f_44 * 100) && Global_43789 == Global_46816[1])
							{
								Param0 = 0;
							}
							else if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 2;
							}
							Param0.f_40 = 0;
							break;
						
						case 0x00000002:
							if (bVar10 > (2000 - Param0.f_44 * 100) || Param0.f_40 != 1)
							{
								Param0 = 1;
							}
							else if (bVar10 <= 4000)
							{
								Param0 = 4;
							}
							else if (bVar10 <= (6000 + Param0.f_44 * 100))
							{
								Param0 = 3;
							}
							break;
						
						case 0x00000003:
							if (bVar10 <= 9000)
							{
								Param0 = 2;
							}
							else
							{
								Param0 = 4;
							}
							Param0.f_40 = 1;
							Param0.f_44 = 0;
							break;
						
						case 0x00000004:
							Param0 = 2;
							Param0.f_40 = 1;
							Param0.f_44 = 0;
							break;
						
						case 0x00000005:
							if (bVar10 <= 3000)
							{
								Param0 = 2;
							}
							else
							{
								Param0 = 3;
							}
							break;
						
						default:
							Param0 = 1;
							break;
					}
					break;
			}
			*(&Param0 + 16) = GET_TIME_OF_DAY();
			if ((Param0 != 3 || Param0 != 4) || Param0 != 5)
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_250(400), 0);
			}
			else
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_250(1200), 0);
			}
			Param0.f_28 = 0;
		}
		else if (bVar10 <= 6000 && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			*(&Param0 + 16) = GET_TIME_OF_DAY();
			if ((Param0 != 3 || Param0 != 4) || Param0 != 5)
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_250(400), 0);
			}
			else
			{
				ADD_TIME(&Param0 + 16, 0, 0, Function_250(1200), 0);
			}
			Param0.f_28 = 1;
		}
		else if (!((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
		}
		if (!StackVal != Param0 && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			if (HUD_IS_FADED())
			{
				Function_231(Param0, 0);
				if (0 && !iVar3 != 4294967295)
				{
					Function_623(0.0f);
				}
			}
			else
			{
				Function_228(Param0, MAKE_TIME_OF_DAY(false, Function_250(300), 0), 0);
				if (0 && !iVar3 != 4294967295)
				{
					Function_623((0.0f + 300.0f));
				}
			}
		}
	}
	if (bVar0 && !iVar3 != 4294967295)
	{
		Function_627(Param0);
	}
	return;
}

void Function_623(int iParam0) //Position: 0x25225 / 152101
{
	Global_122919.f_168 = iParam0;
	return;
}

float Function_624(bool bParam0) //Position: 0x25233 / 152115
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_626();
	}
	if (!Function_625(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_120101[bParam088].f_168;
}

bool Function_625(bool bParam0) //Position: 0x2528C / 152204
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_123163 + 96)[bParam0] > Global_123163.f_92)
	{
		(*&Global_123163 + 96)[bParam0] = Global_123163.f_92;
		(&Global_123163 + 96[bParam0])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_120101, bParam0);
	}
	return StackVal;
}

var Function_626() //Position: 0x2532D / 152365
{
	return Global_122919.f_168;
}

void Function_627(int iParam0) //Position: 0x25339 / 152377
{
	Global_122919.f_164 = iParam0;
	return;
}

var Function_628(bool bParam0) //Position: 0x25347 / 152391
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_629();
	}
	if (!Function_625(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_120101[bParam088].f_164;
}

var Function_629() //Position: 0x253A0 / 152480
{
	return Global_122919.f_164;
}

void Function_630() //Position: 0x253AC / 152492
{
	if (Global_6605)
	{
		Function_631(&Global_26174, 0x3ec00000, 0);
	}
	Global_26182.f_32 = -1.0f;
	Global_26182.f_36 = -1.0f;
	return;
}

void Function_631(struct<21> Param0) //Position: 0x253D0 / 152528
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

void Function_632(struct<57> Param0) //Position: 0x25422 / 152610
{
	strcpy(&Param0 + 24, "PASSENGER COACH", 16);
	Param0 = 88582;
	*(&Param0 + 8) = 152675;
	*(&Param0 + 16) = 88582;
	Param0.f_56 = 1;
	return;
}

var Function_633() //Position: 0x25463 / 152675
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	bool bVar4;
	
	iVar0 = 0;
	Function_753();
	if (Global_43580.f_96 != Global_43787)
	{
		if (Function_752(&Global_43580, 512))
		{
			STREAMING_EVICT_ACTOR(Global_43580.f_88, 4294967295);
		}
		Global_43580.f_88 = Function_751(Global_43788, Global_43580.f_88);
		STREAMING_REQUEST_ACTOR(Global_43580.f_88, 1, false);
		Function_750(&Global_43580, 512);
		if (Function_752(&Global_43580, 2048))
		{
			STREAMING_EVICT_ACTOR(Global_43580.f_92, 4294967295);
		}
		Global_43580.f_92 = Function_749(Global_43788, Global_43580.f_92);
		STREAMING_REQUEST_ACTOR(Global_43580.f_92, 1, false);
		Function_750(&Global_43580, 2048);
		Global_43580.f_96 = Global_43787;
	}
	if (Global_6623)
	{
		if (!Function_384(4))
		{
			if (Function_748(&Global_43660))
			{
				Function_745(&Global_43660, 0);
			}
			return iVar0;
		}
	}
	if (!Function_744(1))
	{
		return iVar0;
	}
	if (Global_6638)
	{
		return iVar0;
	}
	if (Function_744(256) && Function_179(4))
	{
		Function_736();
	}
	if (((Function_744(256) && Function_179(4)) && !Global_6638) && !Global_6653)
	{
		if (Function_636(&Global_43660, 0))
		{
			iVar0 = 1;
		}
		Function_634(&Global_43660, 1);
		if (IS_ACTOR_VALID(&Global_43660 + 24))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_43660 + 24)))
			{
				if (!Function_360(0, 0, 1, 1))
				{
					GET_POSITION(Function_551(&Global_43660 + 8), &Var1);
					ADD_BLIP_FOR_ACTOR(&Global_43660 + 24, 354, 0, 2, 0);
					UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(&Global_43660 + 24), 1);
					SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(&Global_43660 + 24), 1,25f);
					Function_139(StackVal, Function_83(StackVal, Var1, 1, 1, 0), 20, Var1, 63);
				}
			}
		}
	}
	else if (SQUAD_IS_VALID(&Global_43660 + 8))
	{
		if (IS_OBJECTSET_VALID(&Global_43660 + 232))
		{
			bVar4 = false;
			while (bVar4 <= GET_OBJECTSET_SIZE(&Global_43660 + 232))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &Global_43660 + 232))))
				{
					uVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &Global_43660 + 232));
				}
				bVar4++;
			}
		}
		if (IS_ACTOR_VALID(&uVar3))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar3)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uVar3));
			}
		}
	}
	return iVar0;
}

void Function_634(struct<113> Param0) //Position: 0x2565A / 153178
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_748(&Param0))
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
	GET_POSITION(Function_551(&Param0 + 8), &Var0);
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
	Function_635(&Param0 + 36);
	iVar2 = Function_635(&Param0 + 36);
	return;
}

struct<8> Function_635(vector3 vParam0) //Position: 0x257AC / 153516
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

bool Function_636(struct<241> Param0) //Position: 0x257CE / 153550
{
	var uVar0;
	bool bVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	
	iVar4 = &Global_54076;
	Function_735(&Param0, bParam1);
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
			if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
			{
				Param0 = 16;
				return 1;
			}
			if (Function_725(&Param0))
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
				if (!Function_62(&(Global_46972[6]), 4, 23, 1))
				{
					return 0;
				}
			}
			if (Function_715(&Param0, 0))
			{
				Function_709(&Param0, 0);
				Param0 = 7;
			}
			else
			{
				Param0 = 16;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!Function_62(&(Global_46972[6]), 4, 23, 1))
			{
				return 0;
			}
			if (Function_685(&Param0))
			{
				if (IS_ACTOR_VALID(Function_551(&Param0 + 8)))
				{
					if (Global_43788 != Global_46736[2] || Global_43788 != Global_46754[0])
					{
						SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(Function_551(&Param0 + 8), 1);
					}
					SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(Function_551(&Param0 + 8), 0);
					REGISTER_TRAFFIC_ACTOR(Function_551(&Param0 + 8), 0);
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
			if (!Function_684(&Param0 + 8))
			{
				Global_43580.f_100 = GET_CURRENT_GAME_TIME();
				Param0 = 16;
				return 1;
			}
			GET_POSITION(Function_551(&Param0 + 8), &uVar0);
			if (Param0.f_240 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				Function_104(&iVar4);
				if (Function_682(StackVal, &Param0, &uVar0, Function_104(&iVar4), 0))
				{
					return 1;
				}
			}
			if (Function_678(&Param0, &iVar4, 1))
			{
				bVar2 = true;
			}
			break;
		
		case 0x00000006:
			if (!Function_667(&Param0))
			{
				if (Global_53524.f_44)
				{
					if (StackVal || StackVal != 1 != 3)
					{
						Param0 = 12;
					}
					else
					{
						Function_104(&iVar4);
						if (!Function_682(StackVal, &Param0, &uVar0, Function_104(&iVar4), 1))
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
			if (Function_70())
			{
				if (Function_666(&Param0 + 8, &Global_54076, 1))
				{
					Function_665(&Param0 + 8, &Global_54076, 4);
				}
			}
			if (!Function_660(&Param0, 1, Param0.f_32 > 4))
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
			if (!Function_684(&Param0 + 8))
			{
				Param0 = 16;
				return 1;
			}
			GET_POSITION(Function_551(&Param0 + 8), &uVar0);
			if (!(Global_6653 && Param0.f_140))
			{
				if (!Function_654(&Param0, Function_659(Param0.f_164)))
				{
					if (((StackVal || StackVal != 1 != 2) || Param0.f_164) && !Global_53524.f_44)
					{
						Param0.f_160 = 1;
					}
					Param0 = 16;
					return 1;
				}
			}
			if (!Function_650(&Param0))
			{
				Param0 = 6;
				return 1;
			}
			if (Param0.f_240 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				if (Function_682(StackVal, &Param0, &uVar0, Global_54078, 1))
				{
					return 1;
				}
			}
			if (Function_648(&Param0))
			{
				bVar2 = true;
			}
			if (Function_678(&Param0, &Global_54076, 1))
			{
				bVar2 = true;
			}
			if (Function_647(&Param0 + 8))
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
				Function_709(&Param0, iLocal_15);
			}
			break;
		
		case 0x00000009:
			Function_646(&Param0);
			Param0 = 10;
		
		case 0x0000000A:
			if (Function_645(&Param0))
			{
				Param0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (Function_645(&Param0))
			{
				Param0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000C:
			if ((Global_43790 != 3 || Global_43790 != 4) && !Global_53524.f_44)
			{
				Function_644(&Param0);
			}
			else
			{
				Function_640(&Param0);
			}
			Param0 = 13;
		
		case 0x0000000D:
			Param0 = 16;
			return 1;
			break;
		
		case 0x0000000E:
			if (Function_645(&Param0))
			{
				Param0 = 15;
				return 1;
			}
			Function_104(&iVar4);
			if (Function_682(StackVal, &Param0, &uVar0, Function_104(&iVar4), 1))
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			Function_640(&Param0);
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
					Function_639(&Param0 + 8, 0, 1, 1);
				}
				else
				{
					Function_640(&Param0);
					Function_639(&Param0 + 8, 0, 0, 0);
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
					Function_638(&Param0 + 232);
				}
				else
				{
					Function_637(&Param0 + 232);
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
			Function_745(&Param0, 0);
			if (bParam1)
			{
				Global_43580.f_8 = (StackVal - 1);
			}
			return 1;
			break;
	}
	return 0;
}

void Function_637(var uParam0) //Position: 0x25DFC / 155132
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

void Function_638(int iParam0) //Position: 0x25E4B / 155211
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

void Function_639(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x25E9A / 155290
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
					if (!Function_78(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_78(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_78(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_78(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_78(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_640(int iParam0) //Position: 0x260D3 / 155859
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	SQUAD_GOALS_CLEAR(&iParam0 + 8);
	uVar1 = Function_643();
	if (!Global_53524.f_44)
	{
		Function_642(&iParam0 + 8, &Global_54076, 4);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, bVar0);
		Function_641(&iVar2);
		if (!IS_ACTOR_DRAFTED(&iVar2))
		{
			TASK_FLEE_ACTORSET(&iVar2, &uVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iVar2, true);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar2);
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
		iVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 232));
		if (!IS_ACTOR_VEHICLE(&iVar2) && !IS_ACTOR_DRAFTED(&iVar2))
		{
			Function_641(&iVar2);
			TASK_FLEE_ACTORSET(&iVar2, &uVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iVar2, false);
		}
		bVar0++;
	}
	return;
}

void Function_641(int iParam0) //Position: 0x261BB / 156091
{
	MEMORY_REPORT_POSITION(&iParam0, &Global_54076, &Global_54078);
	return;
}

void Function_642(var uParam0, int iParam1, bool bParam2) //Position: 0x261CE / 156110
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

int Function_643() //Position: 0x2624B / 156235
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

void Function_644(int iParam0) //Position: 0x262BC / 156348
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

bool Function_645(struct<5> Param0) //Position: 0x26382 / 156546
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

void Function_646(struct<5> Param0) //Position: 0x2643A / 156730
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

bool Function_647(int iParam0) //Position: 0x2650F / 156943
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

bool Function_648(struct<137> Param0) //Position: 0x2653D / 156989
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_649(&Param0 + 8, &Global_43580 + 40))
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

bool Function_649(var uParam0, int iParam1) //Position: 0x265B6 / 157110
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

bool Function_650(struct<201> Param0) //Position: 0x26644 / 157252
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_635(&Param0 + 36);
	uVar4 = Function_653(StackVal, Function_635(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_635(&Param0 + 36);
	Var2 = Function_635(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_652(StackVal, Param0.f_112);
	}
	if (StackVal > Function_651(VDIST(Var2, Var0), Function_652(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

float Function_651(bool bParam0, int iParam1) //Position: 0x266D6 / 157398
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_652(int iParam0, int iParam1) //Position: 0x266E9 / 157417
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

float Function_653(struct<2> Param0, int iParam2) //Position: 0x267FA / 157690
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_64(StackVal, Param0))
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

bool Function_654(int iParam0, int iParam1) //Position: 0x26979 / 158073
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
	uVar1 = Function_187();
	if (IS_ACTOR_VALID(&uVar1))
	{
		iVar2 = Function_657(&uVar0, &uVar1, iParam1, 1);
		return iVar2 < 0;
	}
	return 0;
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (GET_SLOT_POSITION(bVar3, &Var4))
		{
			iVar2 = Function_655(StackVal, &uVar0, Var4, iParam1, 1);
			if (iVar2 >= 0)
			{
				return 1;
			}
		}
		bVar3++;
	}
	return 0;
}

int Function_655(var uParam0, struct<2> Param1, var uParam3, bool bParam4) //Position: 0x269F9 / 158201
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
			if (Function_656(StackVal, &uVar2, Param1, uParam3))
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

bool Function_656(var uParam0, struct<2> Param1, float fParam3) //Position: 0x26A65 / 158309
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_72(&uParam0);
		if (VDIST(Function_72(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_657(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26AF1 / 158449
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
			if (Function_658(&uVar2, &iParam1, bParam2))
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

bool Function_658(var uParam0, int iParam1, bool bParam2) //Position: 0x26B6A / 158570
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

var Function_659(bool bParam0) //Position: 0x26C7F / 158847
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

bool Function_660(struct<137> Param0) //Position: 0x26CCC / 158924
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_748(&Param0))
	{
		Function_634(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_551(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_635(&Param0 + 36);
	Var2 = Function_635(&Param0 + 36);
	Var0 = Var2;
	Function_664(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_663(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_662(Function_551(&Param0 + 8)), 0);
	}
	Function_661(&Param0);
	return 1;
}

void Function_661(struct<189> Param0) //Position: 0x26D9C / 159132
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_70())
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

int Function_662(int iParam0) //Position: 0x26F97 / 159639
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

int Function_663(int iParam0, int iParam1, int iParam2) //Position: 0x26FBE / 159678
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_70())
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

void Function_664(vector3 vParam0) //Position: 0x27104 / 160004
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_665(var uParam0, var uParam1, bool bParam2) //Position: 0x27122 / 160034
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

bool Function_666(bool bParam0, int iParam1, int iParam2) //Position: 0x2716E / 160110
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

bool Function_667(int iParam0) //Position: 0x271EC / 160236
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_635(&iParam0 + 36);
	uVar2 = Function_653(StackVal, Function_635(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_669(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_669(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_668(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

bool Function_668(struct<21> Param0) //Position: 0x2726E / 160366
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_669(struct<217> Param0) //Position: 0x272A2 / 160418
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
	
	Function_635(&vParam1);
	Var3 = Function_635(&vParam1);
	bVar5 = false;
	uVar7 = Function_677(StackVal, Param0.f_216);
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
	GET_OBJECT_POSITION(Function_551(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 36, 1);
	}
	bVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_651(Function_676(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
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
			Function_675(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_674();
				return StackVal, StackVal, Function_674();
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
					Function_635(&vVar18);
					Function_635(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Function_635(&vVar18), StackVal);
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
		else if (Function_64(StackVal, Var13))
		{
			bVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_635(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_674();
			Var25 = { StackVal, StackVal, Function_674() };
			Function_674();
			Var28 = { StackVal, StackVal, Function_674() };
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_635(&vParam1);
				Function_635(&Var25);
				Function_635(&vParam1);
				Function_635(&Var28);
				if (StackVal > Function_234(StackVal, Function_234(StackVal, StackVal, Function_635(&vParam1), Function_635(&Var25)), Function_635(&vParam1), Function_635(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_673(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_635(&vVar18);
				Function_635(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Function_635(&vVar18), StackVal);
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
			Function_674();
			Var25 = { StackVal, StackVal, Function_674() };
			Function_674();
			Var28 = { StackVal, StackVal, Function_674() };
			Function_635(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_635(&vParam1);
				Function_635(&Var25);
				Function_635(&vParam1);
				Function_635(&Var28);
				if (StackVal > Function_234(StackVal, Function_234(StackVal, StackVal, Function_635(&vParam1), Function_635(&Var25)), Function_635(&vParam1), Function_635(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_635(&vVar18);
				Function_635(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Function_635(&vVar18), StackVal);
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
				Function_674();
				return StackVal, StackVal, Function_674();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar22, &vVar0);
	Function_635(&vVar0);
	uVar32 = Function_635(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_672(StackVal, StackVal, StackVal, Function_672(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
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
			Function_635(&vVar18);
			uVar32 = Function_635(&vVar18);
			bVar5++;
		}
		Function_635(&vVar0);
		uVar32 = Function_635(&vVar0);
	}
	Function_670(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_670(struct<33> Param0) //Position: 0x277F7 / 161783
{
	if (!Function_748(&Param0))
	{
		return;
	}
	if (!Function_671(StackVal))
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

bool Function_671(bool bParam0) //Position: 0x278A6 / 161958
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_672(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0x278BB / 161979
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_635(&iParam0);
	Var0 = Function_635(&iParam0);
	Function_635(&iParam3);
	Var2 = Function_635(&iParam3);
	return VDIST(Var0, Var2);
}

void Function_673(struct<17> Param0) //Position: 0x278DE / 162014
{
	Function_635(&Param0);
	PRINTVECTOR(Function_635(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

vector3 Function_674() //Position: 0x27911 / 162065
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_675(var uParam0) //Position: 0x27920 / 162080
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

int Function_676(struct<113> Param0) //Position: 0x27969 / 162153
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

int Function_677(int iParam0, int iParam1) //Position: 0x27A25 / 162341
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

bool Function_678(struct<173> Param0) //Position: 0x27A57 / 162391
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
	if (Function_681(&Param0 + 24, 0))
	{
		if (Function_680(&Param0 + 24) || !bParam2)
		{
			Function_646(&Param0);
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
	uVar0 = Function_551(&Param0 + 8);
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
		Function_646(&Param0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 24)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 24));
		}
		Global_43580.f_100 = GET_CURRENT_GAME_TIME();
		SAY_SINGLE_LINE_CONTEXT(&uVar0, 171, Function_187(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
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
		if (Function_658(&uVar0, &iParam1, 7.0f))
		{
			if (!DECOR_CHECK_EXIST(&Param0 + 8, "oneshotdialog"))
			{
				DECOR_SET_BOOL(&Param0 + 8, "oneshotdialog", 1);
				Global_43580.f_100 = GET_CURRENT_GAME_TIME();
				SAY_SINGLE_LINE_CONTEXT(&uVar0, 60, Function_187(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
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
				Function_646(&Param0);
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
	if (Function_179(4))
	{
		if (!Param0.f_132)
		{
			if (Param0.f_172 > 1.0f)
			{
				if (&Global_43660 + 8 != &Param0 + 8 && Function_658(&uVar0, &iParam1, 10.0f))
				{
					Param0.f_132 = 1;
					Param0.f_172 = (GET_CURRENT_GAME_TIME() + 20.0f);
					SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 309, Function_187(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
				if (Function_679(&uVar0, 50.0f))
				{
					Param0.f_132 = 1;
					Param0.f_172 = (GET_CURRENT_GAME_TIME() + 60.0f);
					SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 309, Function_187(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
			}
			if (!Function_70())
			{
				if (!Function_47(Global_119934, 64))
				{
					if (Function_658(&Param0 + 24, &iParam1, 35.0f) && Function_78(&Param0 + 24, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_42(&Global_54076, 64, 1, 0);
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
					if (Function_658(&uVar0, &iParam1, 10.0f))
					{
						DECOR_SET_BOOL(&Param0 + 8, "oneshotdialog", 1);
						SET_ACTION_NODE_FOR_ACTOR(&uVar0, "default_character_Main/Vehicle/Jack/React/Left");
						SAY_SINGLE_LINE_CONTEXT(&uVar0, 310, Function_187(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
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
		if (GET_VEHICLE(&iParam1) != &Param0 + 24 && !Function_49())
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

bool Function_679(var uParam0, bool bParam1) //Position: 0x27F83 / 163715
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_WHISTLING(Function_187()))
	{
		if (Function_658(&uParam0, Function_187(), bParam1))
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
				iVar1 = Function_187();
			}
			else
			{
				iVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (IS_ACTOR_WHISTLING(&iVar1))
				{
					if (Function_658(&uParam0, &iVar1, bParam1))
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

int Function_680(int iParam0) //Position: 0x28000 / 163840
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_DRIVING_VEHICLE(Function_187()))
	{
		return GET_VEHICLE(Function_187()) != &iParam0;
	}
	return 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				iVar1 = Function_187();
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

bool Function_681(int iParam0, bool bParam1) //Position: 0x28070 / 163952
{
	bool bVar0;
	int iVar1;
	
	return GET_VEHICLE(Function_187()) != &iParam0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				if (!&bParam1)
				{
					iVar1 = Function_187();
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

bool Function_682(struct<161> Param0) //Position: 0x280D4 / 164052
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
							if (Function_234(StackVal, StackVal, Var1, Var3) < 10.0f)
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
				Function_646(&Param0);
				Param0 = 14;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
			{
				Function_646(&Param0);
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
				Function_646(&Param0);
				Param0 = 14;
				return 1;
			}
			if (!Function_683(&Param0 + 24, 4294967295, 1, 4294967295))
			{
				Function_646(&Param0);
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

bool Function_683(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2836D / 164717
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

bool Function_684(var uParam0) //Position: 0x2843B / 164923
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

bool Function_685(struct<157> Param0) //Position: 0x28499 / 165017
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Function_635(&Param0 + 36);
	Var2 = Function_635(&Param0 + 36);
	Function_707(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0);
	*(&Param0 + 36) = { StackVal, StackVal, Function_707(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0) };
	if (Function_668(&Param0 + 36))
	{
		Param0 = 16;
		return 0;
	}
	if (!Function_706(&Var2, 20.0f, &uVar4, 3))
	{
		Param0 = 16;
		return 0;
	}
	Function_635(&Param0 + 36);
	*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Function_635(&Param0 + 36), StackVal);
	*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	Param0.f_152 = 1;
	Param0.f_156 = 1;
	Function_686(&Param0);
	return 1;
}

void Function_686(struct<31> Param0) //Position: 0x2852B / 165163
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	bool bVar5;
	
	if (!Function_744(256) || !Function_179(4))
	{
		return;
	}
	uVar0 = Function_705(StackVal, Global_54078);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return;
	}
	if (!Function_748(&Param0))
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
	if (!Function_689(StackVal, StackVal, &Global_43578, &Param0 + 8, 2, 64, 512, Var1, Var3, &Param0 + 24, bVar5))
	{
		return;
	}
	Param0.f_140 = 1;
	DECOR_SET_BOOL(&Param0 + 8, "coachService", 1);
	*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 1);
	Function_688(StackVal, &Param0 + 8, &Param0 + 232);
	Param0.f_240 = GET_CURRENT_GAME_TIME();
	Function_687(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
	return;
}

void Function_687(struct<245> Param0) //Position: 0x28636 / 165430
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

void Function_688(var uParam0, var uParam1, bool bParam2) //Position: 0x286B3 / 165555
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

bool Function_689(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, struct<2> Param7, var uParam9, bool bParam10) //Position: 0x288DC / 166108
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
	if (!Function_706(&Param5, 20.0f, &Var1, 10))
	{
		Var1 = Param5;
	}
	if (&bParam10 < 0)
	{
		bParam10 = Function_701(iParam4, 0, 0, 4294967295, 0);
		bVar3 = false;
	}
	if (Function_64(StackVal, Var1))
	{
		LOG_ERROR("Attempting to create stagecoach traffic at 0,0,0!");
	}
	Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("ntrafcoach", &uParam0) };
	uParam9 = Function_697(StackVal, StackVal, &uParam0, &Var10, &bParam10, Function_701(iParam3, 0, 4, 23, 0), Var1, Param7, 1, 976, 976, 976, 4);
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
	if (IS_ACTOR_VALID(&uParam9))
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
		iVar5 = GET_NUM_AVAILABLE_SEATS(&uParam9);
		iVar4 = 1;
	}
	else
	{
		iVar5 = GET_NUM_AVAILABLE_SEATS(&uParam9);
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
		Var38 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("trafpass", &uParam0) };
		if ((bVar6 != 0 || bVar6 != 1) && iVar4)
		{
			if (bVar6 == 0)
			{
				Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("trafdriver", &uParam0) };
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var30, Global_43580.f_88, Var28, Param7);
				if (Function_752(&Global_43580, 512))
				{
					STREAMING_EVICT_ACTOR(Global_43580.f_88, 4294967295);
				}
				bVar18[0] = Global_43580.f_88;
				Global_43580.f_88 = Function_751(Global_43788, Global_43580.f_88);
				STREAMING_REQUEST_ACTOR(Global_43580.f_88, 1, false);
				Function_750(&Global_43580, 512);
			}
			else
			{
				Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("trafshotty", &uParam0) };
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var30, Global_43580.f_92, Var28, Param7);
				if (Function_752(&Global_43580, 2048))
				{
					STREAMING_EVICT_ACTOR(Global_43580.f_92, 4294967295);
				}
				bVar18[1] = Global_43580.f_92;
				Global_43580.f_92 = Function_749(Global_43788, Global_43580.f_92);
				STREAMING_REQUEST_ACTOR(Global_43580.f_92, 1, false);
				Function_750(&Global_43580, 2048);
			}
		}
		else if (bVar6 != 1 || bVar6 != 0)
		{
			if (iParam2 == 1)
			{
				bVar27 = Function_691();
				STREAMING_REQUEST_ACTOR(bVar27, 1, false);
				cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var38, bVar27, Var28, Param7);
				STREAMING_EVICT_ACTOR(bVar27, 4294967295);
			}
			else
			{
				bVar27 = Function_701(iParam2, 1, 2, 4294967295, 0);
				if (!Function_690(bVar27, &bVar18))
				{
					bVar18[bVar6] = bVar27;
					cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var38, bVar27, Var28, Param7);
				}
			}
		}
		else if (iVar7 >= 0)
		{
			if (RAND_INT_RANGE(false, 10000) <= (4000 * iVar8))
			{
				if (iParam2 == 1)
				{
					bVar27 = Function_691();
					STREAMING_REQUEST_ACTOR(bVar27, 1, false);
					cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var38, bVar27, Var28, Param7);
					STREAMING_EVICT_ACTOR(bVar27, 4294967295);
					iVar7 = (iVar7 - 1);
					iVar8 = 1;
				}
				else
				{
					bVar27 = Function_701(iParam2, 1, 0, 4294967295, 0);
					if (!Function_690(bVar27, &bVar18))
					{
						bVar18[bVar6] = bVar27;
						cVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var38, bVar27, Var28, Param7);
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
			SET_ACTOR_IN_VEHICLE(&cVar0, &uParam9, bVar6);
			MEMORY_ATTACK_ON_SIGHT(&cVar0, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&cVar0, 1);
			REGISTER_TRAFFIC_ACTOR(&cVar0, 1);
			SET_ACTOR_IS_AMBIENT(&cVar0, 1);
			SQUAD_JOIN(&cVar0, &uParam1);
			Var28 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(1.0f, 0.0f, 1.0f), Var28, StackVal);
		}
		bVar6++;
	}
	return iVar9;
}

bool Function_690(bool bParam0, bool[] bParam1) //Position: 0x28D79 / 167289
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

bool Function_691() //Position: 0x28DAD / 167341
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (!Function_444(&Global_43580 + 108[Global_43580.f_3082], 4) && iVar0 > 20)
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
	Function_694(0);
	Global_43580.f_308++;
	if (Global_43580.f_308 > Global_43580.f_108)
	{
		Global_43580.f_308 = 0;
	}
	Function_692(524288);
	Function_462(&Global_43580 + 108);
	return iVar1;
}

void Function_692(int iParam0) //Position: 0x28E59 / 167513
{
	Function_693(&Global_43580, iParam0);
	return;
}

void Function_693(var uParam0, int iParam1) //Position: 0x28E67 / 167527
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_694(bool bParam0) //Position: 0x28E8F / 167567
{
	int iVar0;
	
	if (Function_444(&Global_43580 + 108[Global_43580.f_3082], 4))
	{
		if (Global_43580.f_316 >= 0)
		{
			Global_43580.f_316 = (Global_43580.f_316 - 1);
		}
	}
	Function_442(&Global_43580 + 108, Global_43580.f_308);
	if (bParam0 || Global_43580.f_316 > 5)
	{
		iVar0 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), Global_43580.f_312);
		while (Function_696(iVar0) || iVar0 != 0)
		{
			Global_43580.f_312++;
			if (Global_43580.f_312 > GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])))
			{
				Global_43580.f_312 = 0;
			}
			iVar0 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), Global_43580.f_312);
		}
		Function_695(&Global_43580 + 108, Global_43580.f_308, iVar0);
		Global_43580.f_316++;
		Global_43580.f_312++;
		if (Global_43580.f_312 > GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])))
		{
			Global_43580.f_312 = 0;
		}
	}
	return;
}

void Function_695(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x28F80 / 167808
{
	Param0[iParam12] = iParam2;
	Param0[iParam12].f_8 = 3;
	Function_459(&(Param0[iParam12]), 4);
	return;
}

int Function_696(bool bParam0) //Position: 0x28FA5 / 167845
{
	if (bParam0 <= 6)
	{
		return 1;
	}
	if (bParam0 == 17)
	{
		return 1;
	}
	if (bParam0 == 49)
	{
		return 1;
	}
	if (bParam0 < 19 && bParam0 > 25)
	{
		return 1;
	}
	if (bParam0 < 50 && bParam0 > 80)
	{
		return 1;
	}
	if (bParam0 < 211 && bParam0 > 217)
	{
		return 1;
	}
	if (bParam0 < 236 && bParam0 > 254)
	{
		return 1;
	}
	if (bParam0 < 312 && bParam0 > 319)
	{
		return 1;
	}
	return 0;
}

var Function_697(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x2902D / 167981
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
			if (Function_62(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_698(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_690(bVar16, &iVar1))
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

var Function_698(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x29280 / 168576
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

struct<32> Function_699(char* cParam0, var uParam1) //Position: 0x2929C / 168604
{
	struct<8> Var0;
	var uVar8;
	
	if (!IS_STRING_VALID(&cParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_700(&cParam0) };
	uVar8 = FIND_OBJECT_IN_LAYOUT(&uParam1, &Var0);
	while (IS_OBJECT_VALID(&uVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_700(&cParam0) };
		uVar8 = FIND_OBJECT_IN_LAYOUT(&uParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_700(char* cParam0) //Position: 0x292F3 / 168691
{
	char* cVar0[32];
	char* cVar8[16];
	bool bVar12;
	
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(&cParam0);
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("0", &cVar8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(I2STR(bVar12), &cVar8, ""), 4);
		while (STRING_LENGTH(&cVar8) <= 6)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("0", &cVar8, ""), 4);
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

bool Function_701(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2939E / 168862
{
	return Function_702(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_702(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x293BB / 168891
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_55(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_55(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_55(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_55(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_55(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_55(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_55(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_55(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_55(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_55(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_55(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_55(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_55(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_55(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_703(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_703(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x2961E / 169502
{
	int iVar0;
	
	iVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_704(&(Global_46972[0]), &iVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_704(&(Global_46972[1]), &iVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_704(&(Global_46972[2]), &iVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_704(&(Global_46972[3]), &iVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_704(&(Global_46972[4]), &iVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_704(&(Global_46972[5]), &iVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_704(&(Global_46972[6]), &iVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_704(&(Global_46972[7]), &iVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_704(&(Global_46972[8]), &iVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_704(&(Global_46972[9]), &iVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_704(&(Global_46972[10]), &iVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_704(&(Global_46972[11]), &iVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_704(&(Global_46972[12]), &iVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_704(&(Global_46972[13]), &iVar0);
	}
	return Function_55(StackVal, &iVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_704(var uParam0, int iParam1) //Position: 0x2978D / 169869
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

var Function_705(struct<2> Param0) //Position: 0x29851 / 170065
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

bool Function_706(struct<2> Param0, struct<5> Param2) //Position: 0x298CE / 170190
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
		if (!Function_64(StackVal, Param2))
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
			if (!Function_64(StackVal, Param2))
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

vector3 Function_707(struct<189> Param0) //Position: 0x29A11 / 170513
{
	int iVar0;
	int iVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_708(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &iVar0);
		Function_635(&iVar0);
		Function_635(&vParam1);
		(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Function_635(&iVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &iVar3);
		Function_635(&iVar3);
		Function_635(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&vParam1), Function_635(&iVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

int Function_708(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0x29ABB / 170683
{
	int iVar0;
	int iVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &iParam1, &iVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &iParam1, &iVar3);
	Function_635(&iVar0);
	Function_635(&iParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&iParam1), Function_635(&iVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_635(&iVar3);
	Function_635(&iParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&iParam1), Function_635(&iVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

void Function_709(struct<137> Param0) //Position: 0x29B14 / 170772
{
	if (!Function_70())
	{
		Function_714(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_713(&Param0 + 8, Param0.f_112);
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
			Function_713(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_744(131072)) || Function_647(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_713(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_711(StackVal, Param0.f_120);
			Function_713(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_710(StackVal, Param0.f_120);
			Function_713(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_714(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_713(&Param0 + 8, Param0.f_112);
		}
		else if (Function_744(131072) || Function_647(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_713(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_711(StackVal, Param0.f_120);
			Function_713(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_710(StackVal, Param0.f_120);
			Function_713(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_712(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_710(int iParam0, int iParam1) //Position: 0x29D50 / 171344
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_70())
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

int Function_711(int iParam0, int iParam1) //Position: 0x29E3C / 171580
{
	if (!Function_70())
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

void Function_712(var uParam0, int iParam1) //Position: 0x29F07 / 171783
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

void Function_713(var uParam0, bool bParam1) //Position: 0x29F31 / 171825
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

void Function_714(int iParam0) //Position: 0x29F5B / 171867
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

bool Function_715(struct<157> Param0) //Position: 0x29F83 / 171907
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (Function_668(&Param0 + 36))
	{
		return 0;
	}
	if (Param0.f_144 || bParam1)
	{
		if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
		{
			return 0;
		}
		switch (StackVal)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_MOUNT(Function_551(&Param0 + 8))))
				{
					GET_ACTOR_VELOCITY(GET_MOUNT(Function_551(&Param0 + 8)), &Var0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_551(&Param0 + 8), &Var0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					GET_ACTOR_VELOCITY(&Param0 + 24, &Var0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_551(&Param0 + 8), &Var0);
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
			ROTATE_VECTOR_XZ(&Var0, GET_HEADING(Function_551(&Param0 + 8)), 0);
		}
		else if (bVar2 > 0,05f)
		{
			VNORMALIZE(&Var0);
		}
		VSCALE(&Var0, -1.0f);
	}
	else if (!Function_64(StackVal, *(&Param0 + 176)))
	{
		Function_635(&Param0 + 36);
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&Param0 + 36), *(&Param0 + 176), StackVal);
	}
	else if (Function_744(16) || Global_6629)
	{
		Function_635(&Param0 + 36);
		Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&Param0 + 36), Global_54078, StackVal);
	}
	else
	{
		Function_635(&Param0 + 36);
		if (Function_724(StackVal, &Global_54076, Function_635(&Param0 + 36)))
		{
			bVar3 = RAND_INT_RANGE(false, 10000);
			if (bVar3 <= 5000)
			{
				Function_635(&Param0 + 36);
				Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_635(&Param0 + 36), StackVal);
			}
			else
			{
				Function_635(&Param0 + 36);
				Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&Param0 + 36), Global_54078, StackVal);
			}
		}
		else
		{
			Function_635(&Param0 + 36);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_635(&Param0 + 36), Global_54078, StackVal);
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
		Function_707(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0);
		vVar4 = { StackVal, StackVal, Function_707(StackVal, StackVal, StackVal, &Param0, *(&Param0 + 36), &Param0 + 192, Var0) };
		if (Function_668(&vVar4))
		{
			Param0 = 16;
			return 0;
		}
	}
	if ((!DECOR_CHECK_EXIST(&Param0 + 8, "coachService") && !Param0.f_144) && !&bParam1)
	{
		Function_716(&Param0);
	}
	if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
	{
		return 0;
	}
	if (!Param0.f_144)
	{
		*(&Param0 + 36) = { StackVal, StackVal, vVar4 };
	}
	Function_660(&Param0, 1, Param0.f_32 > 4);
	return 1;
}

void Function_716(struct<241> Param0) //Position: 0x2A206 / 172550
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	
	if (!Function_748(&Param0))
	{
		return;
	}
	Function_635(&Param0 + 36);
	Var2 = Function_635(&Param0 + 36);
	Var0 = Var2;
	if (VDIST(Var0, Global_54078) > 120.0f)
	{
	}
	Function_664(StackVal, Var0, &Param0 + 36);
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	switch (StackVal)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
			{
				Function_719(StackVal, StackVal, &Global_43578, &Param0 + 8, Param0.f_32, Var0, *(&Param0 + 220), &Param0 + 72, GET_ACTORENUM_SPECIES(Function_701(64, 0, 0, 4294967295, 0)));
				Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
			}
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 0);
			Function_688(StackVal, &Param0 + 8, &Param0 + 232);
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
			{
				if (Function_689(StackVal, StackVal, StackVal, &Global_43578, Function_718(&Param0 + 8), 64, 512, Var0, *(&Param0 + 220), &Param0 + 24, 0))
				{
					Param0.f_140 = 1;
				}
			}
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 1);
			Function_688(StackVal, &Param0 + 8, &Param0 + 232);
			break;
		
		default:
			break;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_687(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
	if (IS_OBJECTSET_VALID(&Param0 + 232))
	{
		Global_43580.f_64 = (Global_43580.f_64 + GET_OBJECTSET_SIZE(&Param0 + 232));
	}
	Param0.f_240 = GET_CURRENT_GAME_TIME();
	if (!IS_ACTOR_VALID(Function_551(&Param0 + 8)))
	{
	}
	if (!Function_70())
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
			Function_717(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar5), 100.0f, -1.0f, -1.0f);
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

void Function_717(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x2A49E / 173214
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

int Function_718(bool bParam0) //Position: 0x2A4EF / 173295
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

void Function_719(var uParam0, var uParam1, int iParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8) //Position: 0x2A555 / 173397
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
	if (Function_64(StackVal, Param3))
	{
		return;
	}
	if (!Global_47006[23])
	{
		return;
	}
	if (Function_64(StackVal, Param3))
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
		iVar25 = Function_723(StackVal, 64, Param3, 4, uParam8, 0);
		if (Function_690(iVar25, &bVar8))
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
			Function_721(&uParam7, iVar0);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&uVar2), Function_721(&uParam7, iVar0), &Var5);
		}
		if (!Function_706(&Var5, 20.0f, &Var3, 10))
		{
			Var3 = Var5;
		}
		bVar7 = Function_691();
		STREAMING_REQUEST_ACTOR(bVar7, 1, false);
		if (!bVar7 != 4294967295)
		{
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("ntrafrider", &uParam0) };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699("ntrafhorse", &uParam0) };
			uVar1 = Function_720(StackVal, StackVal, &uParam0, &Var26, bVar7, &Var34, bVar8[iVar0], Var3, Param5);
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

var Function_720(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x2A6CC / 173772
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_53(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_53(bParam4))
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

struct<8> Function_721(vector3 vParam0) //Position: 0x2A804 / 174084
{
	struct<2> Var0;
	
	if (!Function_722(&vParam0))
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

bool Function_722(bool bParam0) //Position: 0x2A951 / 174417
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

var Function_723(int iParam0, struct<2> Param1, int iParam3, int iParam4, bool bParam5) //Position: 0x2A975 / 174453
{
	return Function_702(StackVal, iParam0, 0, &iParam3, &iParam4, &bParam5, 1, Param1);
}

bool Function_724(int iParam0, struct<2> Param1) //Position: 0x2A991 / 174481
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	uVar0 = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&uVar0, Function_63(&iParam0), 0);
	GET_POSITION(&iParam0, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1, StackVal);
	if (VDOT(&uVar0, &uVar4) < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_725(struct<145> Param0) //Position: 0x2A9CD / 174541
{
	if (!SQUAD_IS_VALID(&Param0 + 8) || !IS_ACTOR_VALID(Function_551(&Param0 + 8)))
	{
		return 0;
	}
	Function_733(&Param0);
	Function_726(&Param0, 4294967294);
	Global_43580.f_8 = StackVal + 1;
	if (!Function_70())
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_670(&Param0);
	SQUAD_GOALS_CLEAR(&Param0 + 8);
	Function_240(&Param0 + 8);
	(&Param0 + 16) = "";
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return 0;
	}
	if (Function_668(&Param0 + 36))
	{
		return 0;
	}
	Param0.f_144 = 1;
	return 1;
}

void Function_726(struct<245> Param0) //Position: 0x2AA88 / 174728
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
			else if (Global_43580.f_60 < 4294967295 && !Function_744(128))
			{
				Param0.f_32 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_43580.f_60))));
			}
			else if (iVar1 <= 6)
			{
				Param0.f_32 = 1;
			}
			else if ((iVar1 > 8 || Function_744(128)) || &iParam1 != 5)
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
				Function_732(128);
			}
			else
			{
				Function_692(128);
			}
			if (Global_43789 == Global_46816[1])
			{
				Function_731(1.0f);
				*(&Param0 + 72) = { StackVal, Function_731(1.0f) };
			}
			else
			{
				Function_729(1.0f);
				*(&Param0 + 72) = { StackVal, Function_729(1.0f) };
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
		Param0.f_244 = Function_728();
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		Function_727();
		Var2 = { StackVal, Function_727() };
		*(&Param0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var2));
	}
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 36, 1);
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
		Param0.f_112 = Function_663(StackVal, 0, Param0.f_120);
	}
	else
	{
		Param0.f_112 = Function_710(StackVal, Param0.f_120);
	}
	Param0 = 1;
	return;
}

struct<8> Function_727() //Position: 0x2ACDA / 175322
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

var Function_728() //Position: 0x2AD31 / 175409
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

struct<8> Function_729(int iParam0) //Position: 0x2AD51 / 175441
{
	Function_730(iParam0, 10);
	return StackVal, Function_730(iParam0, 10);
}

struct<8> Function_730(var uParam0, int iParam1) //Position: 0x2AD5E / 175454
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

struct<8> Function_731(int iParam0) //Position: 0x2AD79 / 175481
{
	Function_730(iParam0, 8);
	return StackVal, Function_730(iParam0, 8);
}

void Function_732(int iParam0) //Position: 0x2AD86 / 175494
{
	Function_750(&Global_43580, iParam0);
	return;
}

void Function_733(struct<217> Param0) //Position: 0x2AD94 / 175508
{
	int iVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	struct<2> Var9;
	
	if (!Function_748(&Param0))
	{
		return;
	}
	iVar0 = Function_677(StackVal, Param0.f_216);
	GET_POSITION(Function_551(&Param0 + 8), &Var1);
	fVar3 = 0.0f;
	iVar4 = START_CURVE_QUERY(&Global_43578, Var1, iVar0, fVar3, 150.0f, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&iVar4) < 0)
	{
		UNK_0xDF93BD7C(&iVar4);
		return;
	}
	bVar5 = Function_734(StackVal, &iVar4, Var1);
	if (bVar5 == 4294967295)
	{
		UNK_0xDF93BD7C(&iVar4);
		return;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iVar4, bVar5);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&iVar4, bVar5, &vVar6);
	*(&Param0 + 220) = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&Param0 + 220, GET_HEADING(Function_551(&Param0 + 8)), 0);
	Param0.f_188 = Function_708(StackVal, StackVal, StackVal, &Param0 + 192, vVar6, *(&Param0 + 220));
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &Param0 + 36, 0);
	}
	else
	{
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &Param0 + 36, 0);
	}
	Function_635(&Param0 + 36);
	Var9 = Function_635(&Param0 + 36);
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

var Function_734(var uParam0, struct<2> Param1) //Position: 0x2AF16 / 175894
{
	bool bVar0;
	int iVar1;
	bool bVar4;
	bool bVar5;
	
	bVar4 = 100000.0f;
	bVar5 = 4294967295;
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar0, &iVar1);
		Function_635(&iVar1);
		if (VDIST(Param1, Function_635(&iVar1)) > bVar4)
		{
			bVar5 = bVar0;
			Function_635(&iVar1);
			bVar4 = VDIST(Param1, Function_635(&iVar1));
		}
		bVar0++;
	}
	return bVar5;
}

void Function_735(int iParam0, bool bParam1) //Position: 0x2AF6E / 175982
{
	if (!SQUAD_IS_VALID(&iParam0 + 8) && !(((iParam0 != 0 || iParam0 != 18) || iParam0 != 16) || iParam0 != 17))
	{
		Function_745(&iParam0, 0);
		if (bParam1)
		{
			Global_43580.f_8 = (StackVal - 1);
		}
		iParam0 = 0;
	}
	return;
}

void Function_736() //Position: 0x2AFBE / 176062
{
	struct<2> Var0;
	var uVar2;
	float fVar3;
	struct<2> Var4;
	var uVar6;
	
	if (Function_748(&Global_43660))
	{
		if (!SQUAD_IS_VALID(&Global_43660 + 8) && Global_43660 == 17)
		{
			Global_43660 = 16;
			return;
		}
		if (!IS_ACTOR_VALID(Function_551(&Global_43660 + 8)) && Global_43660 == 17)
		{
			Global_43660 = 16;
			return;
		}
		GET_POSITION(Function_551(&Global_43660 + 8), &Var0);
		if (0 || (((VDIST(Global_54078, Var0) < 180.0f && !Global_6653) && !Global_43660 != 17) && !Global_43660 != 0))
		{
			Global_43660 = 16;
		}
	}
	else
	{
		if (Global_43580.f_100 + 300.0f) < GET_CURRENT_GAME_TIME()
		{
			return;
		}
		if (Global_53524.f_28 && HUD_IS_FADED())
		{
			return;
		}
		uVar2 = Function_705(StackVal, Global_54078);
		if (!IS_OBJECT_VALID(&uVar2))
		{
			return;
		}
		GET_OBJECT_POSITION(&uVar2, &Var0);
		fVar3 = Function_234(StackVal, StackVal, Global_54078, Var0);
		Var4 = Var0;
		Var4.f_4 = (StackVal + 2.0f);
		if (((fVar3 < 10.0f && !CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Var4, 1065353216, 1117126656, 1, 1, 0)) || HUD_IS_FADED()) && fVar3 > (180.0f - 10.0f))
		{
			if (!Function_743(Global_43788))
			{
				return;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_43580.f_88, 4294967295))
			{
				return;
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(Var0, 10.0f))
			{
				return;
			}
			if (IS_ANY_ACTOR_IN_SPHERE(&Var0, 5.0f))
			{
				return;
			}
			if (Function_706(&Var0, 50.0f, &uVar6, 2))
			{
				Function_737(StackVal, Var0);
				DECOR_SET_BOOL(&Global_43660 + 8, "coachService", 1);
			}
		}
	}
	return;
}

void Function_737(struct<2> Param0) //Position: 0x2B142 / 176450
{
	var uVar0;
	
	*(&Global_43660 + 192) = Function_739(StackVal, Param0, 16, 0.0f, 35.0f, &uVar0, 1);
	Global_43660.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Global_43660 + 192, 0.0f, 1.0f, 10);
	Function_738(StackVal, Param0);
	*(&Global_43660 + 36) = { StackVal, StackVal, Function_738(StackVal, Param0) };
	Global_43660.f_4 = 2;
	Function_726(&Global_43660, 4294967294);
	Function_670(&Global_43660);
	Global_43660 = 4;
	return;
}

vector3 Function_738(vector3 vParam0) //Position: 0x2B199 / 176537
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_739(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5, bool bParam6) //Position: 0x2B1B7 / 176567
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar6 = -1.0f;
	Function_284();
	uParam5 = Function_284();
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, uParam2, fParam3, fParam4, Function_651(((fParam4 - fParam3) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
		Function_741(StackVal, &uVar2, Param0, iParam2, fParam3, fParam4, Function_651(((fParam4 - fParam3) / 5.0f), 20.0f));
	}
	else
	{
		bVar7 = false;
		while (bVar7 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, bVar7, &vVar3);
			if (!&bParam6 || !Function_740(&vVar3))
			{
				Var0 = vVar3.x;
				Var0.f_4 = vVar3.y;
				Var0.f_8 = vVar3.z;
				if (bVar6 > 0.0f || bVar6 < VDIST(Param0, Var0))
				{
					bVar6 = VDIST(Param0, Var0);
					uParam5 = Var0;
					uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, bVar7);
				}
			}
			bVar7++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar8;
}

bool Function_740(struct<13> Param0) //Position: 0x2B2A0 / 176800
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_741(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x2B2C3 / 176835
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(Param1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam3);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam4);
	PRINTSTRING("/");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTNL();
	Function_742(&uParam0);
}

void Function_742(int iParam0) //Position: 0x2B37D / 177021
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(&iParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&iParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&iParam0, bVar0, &vVar1);
		Function_673(StackVal, StackVal, vVar1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

bool Function_743(bool bParam0) //Position: 0x2B3F1 / 177137
{
	if (!Function_160(bParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (Global_44085[bParam09] == Global_46722[0])
	{
		return STREAMING_IS_ACTOR_LOADED(1177, 4294967295);
	}
	if (Global_44085[bParam09] == Global_46722[1])
	{
		return STREAMING_IS_ACTOR_LOADED(1179, 4294967295);
	}
	if (Global_44085[bParam09] == Global_46722[2])
	{
		return STREAMING_IS_ACTOR_LOADED(1178, 4294967295);
	}
	return 0;
}

bool Function_744(int iParam0) //Position: 0x2B462 / 177250
{
	return Function_752(&Global_43580, iParam0);
}

void Function_745(struct<245> Param0) //Position: 0x2B470 / 177264
{
	Param0 = 0;
	Param0.f_4 = 4294967295;
	if (SQUAD_IS_VALID(&Param0 + 8))
	{
		if (!Global_53524.f_44 && !&bParam1)
		{
			Function_747(&Param0 + 8);
		}
		else
		{
			Function_746(&Param0 + 8);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 8));
	}
	if (IS_OBJECTSET_VALID(&Param0 + 232))
	{
		DESTROY_OBJECTSET(&Param0 + 232);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		Function_675(&Param0 + 64);
		DESTROY_OBJECTSET(&Param0 + 64);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 208))
	{
		Function_675(&Param0 + 208);
		DESTROY_OBJECTSET(&Param0 + 208);
	}
	Param0.f_32 = 0;
	Function_674();
	*(&Param0 + 36) = { StackVal, StackVal, Function_674() };
	(&Param0 + 16) = "";
	Param0.f_112 = 4294967295;
	Param0.f_188 = 0;
	Function_284();
	*(&Param0 + 220) = Function_284();
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

void Function_746(int iParam0) //Position: 0x2B56C / 177516
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

void Function_747(int iParam0) //Position: 0x2B5FC / 177660
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

bool Function_748(int iParam0) //Position: 0x2B68C / 177804
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_749(bool bParam0, int iParam1) //Position: 0x2B69D / 177821
{
	bool bVar0;
	
	if (!Function_160(bParam0))
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

void Function_750(var uParam0, int iParam1) //Position: 0x2B846 / 178246
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

int Function_751(bool bParam0, int iParam1) //Position: 0x2B865 / 178277
{
	bool bVar0;
	
	if (!Function_160(bParam0))
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
		if (bVar0 > 1667 && &iParam1 == 46)
		{
			return 46;
		}
		if (bVar0 > 3333 && &iParam1 == 200)
		{
			return 200;
		}
		if (bVar0 > 5000 && &iParam1 == 230)
		{
			return 230;
		}
		if (bVar0 > 6666 && &iParam1 == 205)
		{
			return 205;
		}
		if (bVar0 > 8333 && &iParam1 == 10)
		{
			return 10;
		}
		if (&iParam1 != 48)
		{
			return 48;
		}
		return 46;
	}
	if (Global_44085[bParam09] == Global_46722[1])
	{
		if (bVar0 > 3333 && &iParam1 == 263)
		{
			return 263;
		}
		if (bVar0 > 6666 && &iParam1 == 282)
		{
			return 282;
		}
		if (&iParam1 != 306)
		{
			return 306;
		}
		return 263;
	}
	if (Global_44085[bParam09] == Global_46722[2])
	{
		if (bVar0 > 2000 && &iParam1 == 31)
		{
			return 31;
		}
		if (bVar0 > 4000 && &iParam1 == 120)
		{
			return 120;
		}
		if (bVar0 > 6000 && &iParam1 == 121)
		{
			return 121;
		}
		if (bVar0 > 8000 && &iParam1 == 122)
		{
			return 122;
		}
		if (&iParam1 != 150)
		{
			return 150;
		}
		return 31;
	}
	return 230;
}

bool Function_752(int iParam0, int iParam1) //Position: 0x2B9F6 / 178678
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_753() //Position: 0x2BA13 / 178707
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
	Function_754(&Global_43578);
	EVENT_TRAP_ON_OWNER(&Global_43722, &Global_43578);
	*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	return;
}

int Function_754(int iParam0) //Position: 0x2BAA0 / 178848
{
	var uVar0;
	
	Function_755(4, 1);
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

void Function_755(int iParam0, int iParam1) //Position: 0x2C710 / 182032
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

void Function_756(struct<57> Param0) //Position: 0x2C75A / 182106
{
	strcpy(&Param0 + 24, "TRAFFIC", 16);
	Param0 = 190521;
	*(&Param0 + 8) = 182317;
	*(&Param0 + 16) = 182163;
	Param0.f_56 = 1;
	return;
}

void Function_757() //Position: 0x2C793 / 182163
{
	Function_441(&Global_43580 + 108);
	Global_43580.f_316 = 0;
	if (Function_752(&Global_43580, 512))
	{
		STREAMING_EVICT_ACTOR(Global_43580.f_88, 4294967295);
	}
	if (Function_752(&Global_43580, 2048))
	{
		STREAMING_EVICT_ACTOR(Global_43580.f_92, 4294967295);
	}
	if (Function_752(&Global_43580, 8192))
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

var Function_758() //Position: 0x2C82D / 182317
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
	Function_753();
	iVar1 = Function_800(&Local_16);
	if (!iVar1 != Global_43580.f_64)
	{
		Global_43580.f_64 = iVar1;
	}
	Function_795(0);
	if (!Function_744(1))
	{
		Function_794(&Local_16, 1);
		if (IS_OBJECT_VALID(&Global_43722))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Global_43722);
			EVENT_TRAP_CLEAR_EVENTS(&Global_43722);
		}
		if (Function_744(262144))
		{
			Function_441(&Global_43580 + 108);
			Function_692(262144);
			Function_692(524288);
			Global_43580.f_316 = 0;
		}
		Function_795(1);
		return iVar0;
	}
	if (Global_6638)
	{
		Function_794(&Local_16, 1);
		return iVar0;
	}
	if (Global_53524.f_44 & 1)
	{
		Function_794(&Local_16, 1);
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
				Function_789(&Local_16, &uVar2);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar2, &Global_43580 + 80);
			CLEAN_OBJECTSET(&Global_43580 + 80);
		}
	}
	if (!Global_53524.f_44)
	{
		Function_794(&Local_16, 0);
	}
	Function_788();
	if (Function_744(1) && Function_744(32768))
	{
		if (Function_744(1048576))
		{
			Function_441(&Global_43580 + 108);
			Function_692(1835008);
			Global_43580.f_316 = 0;
		}
		if (!Function_744(262144))
		{
			if (IS_POPSET_VALID(&(Global_46972[0])) && GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])) < 0)
			{
				Function_787();
			}
		}
		if (Function_744(262144) && !Function_744(524288))
		{
			if (Function_462(&Global_43580 + 108))
			{
				Function_732(524288);
			}
		}
	}
	else
	{
		Function_441(&Global_43580 + 108);
		Function_692(1835008);
		Global_43580.f_316 = 0;
	}
	iVar3 = 0;
	Function_104(Function_187());
	Var4 = Function_104(Function_187());
	if (Function_786(StackVal, Var4))
	{
		while ((Function_744(16384) && Function_784(&Local_16, 0, 0)) && iVar3 > 10)
		{
			iVar6 = 0;
			iVar7 = Function_773(StackVal, &Local_16, Var4, iVar6);
			if (iVar7 < 4294967295 && iVar7 > Local_16)
			{
				Function_636(&(Local_16[iVar731]), 1);
			}
			iVar3++;
		}
	}
	if (Function_744(16384))
	{
	}
	if (Function_784(&Local_16, (0 || !HUD_IS_FADED()), 1))
	{
		if (Function_786(StackVal, Var4))
		{
			iVar8 = 0;
			if (bLocal_640)
			{
				iVar8 = 2;
			}
			Function_773(StackVal, &Local_16, Var4, iVar8);
		}
	}
	iLocal_15 = Function_770();
	iVar9 = 0;
	while (iVar9 <= Local_16)
	{
		if (Function_748(&(Local_16[iVar931])))
		{
			if (Function_636(&(Local_16[iVar931]), 1))
			{
				iVar0 = 1;
			}
			Function_634(&(Local_16[iVar931]), 1);
		}
		Function_768(&(Local_16[iVar931]), iVar9);
		iVar9++;
	}
	Function_767();
	Function_766();
	Function_759();
	Function_795(1);
	EVENT_TRAP_CLEAR_TRAP_FLAG(&Global_43722);
	EVENT_TRAP_CLEAR_EVENTS(&Global_43722);
	REGISTER_TRAFFIC_OBJECTSET(&Global_43580 + 80);
	return iVar0;
}

void Function_759() //Position: 0x2CAEC / 183020
{
	return;
	Function_760();
	return;
}

void Function_760() //Position: 0x2CAF6 / 183030
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
					if (!Function_764(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4), &iVar6))
					{
						if (Function_789(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4)))
						{
						}
						else
						{
							Function_762(GET_ACTOR_FROM_OBJECT(&uVar4));
						}
					}
					else if (!bVar2)
					{
						if (Local_16[iVar631] == 1 && Local_16[iVar631] == 3)
						{
							Function_761(&(Local_16[iVar631]));
							Function_733(&(Local_16[iVar631]));
							Local_16[iVar631] = 6;
						}
					}
				}
				else if (bVar2)
				{
					if (Function_764(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar4), &iVar6))
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

void Function_761(struct<33> Param0) //Position: 0x2CC25 / 183333
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

void Function_762(int iParam0) //Position: 0x2CC6D / 183405
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_MOUNTED(&iParam0))
	{
		uVar0 = GET_RIDER(&iParam0);
		if (!IS_ACTOR_PLAYER(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
			Function_763(&uVar0);
		}
	}
	if (IS_ACTOR_RIDING(&iParam0))
	{
		iVar1 = GET_MOUNT(&iParam0);
		RELEASE_OBJECT_REF(&iVar1);
		Function_763(&iVar1);
	}
	if (!IS_ACTOR_PLAYER(&iParam0))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ACTOR(&iParam0));
		Function_763(&iParam0);
	}
	return;
}

void Function_763(int iParam0) //Position: 0x2CCD5 / 183509
{
	int iVar0;
	
	iVar0 = Function_643();
	Function_641(&iParam0);
	TASK_FLEE_ACTORSET(&iParam0, &iVar0, -1.0f, -1.0f, 0, 0, 0);
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&iParam0);
	return;
}

bool Function_764(struct<31>[] Param0, bool bParam1, int iParam2) //Position: 0x2CD02 / 183554
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_765(&(Param0[iVar031]), &bParam1))
		{
			iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam2 = 4294967295;
	return 0;
}

bool Function_765(int iParam0, int iParam1) //Position: 0x2CD3B / 183611
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

void Function_766() //Position: 0x2CDB1 / 183729
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
			bVar2 = Function_764(&Local_16, GET_ACTOR_FROM_OBJECT(&uVar1), &iVar4);
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

void Function_767() //Position: 0x2CEA3 / 183971
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

void Function_768(int iParam0, int iParam1) //Position: 0x2CF3C / 184124
{
	Global_43724[iParam13] = iParam1;
	Global_43724[iParam13].f_4 = Function_748(&iParam0);
	if (StackVal)
	{
		if (SQUAD_IS_VALID(&iParam0 + 8))
		{
			*(&Global_43724[iParam13] + 8) = Function_551(&iParam0 + 8);
		}
		Global_43724[iParam13].f_16 = Function_769(&iParam0, &Global_43724[iParam13] + 20, 0);
	}
	return;
}

bool Function_769(int iParam0, bool bParam1, bool bParam2) //Position: 0x2CF9E / 184222
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!Function_748(&iParam0) || !SQUAD_IS_VALID(&iParam0 + 8))
	{
		bParam1 = 0.0f;
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
		bParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + iVar5))
	{
		bParam1 = 0,5f;
	}
	else
	{
		bParam1 = 0.0f;
	}
	return bVar2;
}

int Function_770() //Position: 0x2D075 / 184437
{
	bool bVar0;
	
	return 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((Global_6629 && Global_120101[bVar088] != Global_43789) || Function_772(bVar0))
		{
			if (Function_771(bVar0) != 4294967295)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_771(int iParam0) //Position: 0x2D0B5 / 184501
{
	return Global_120101[iParam088].f_176;
}

int Function_772(bool bParam0) //Position: 0x2D0C5 / 184517
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_124113 && SHIFT_LEFT(true, bParam0)) == 0;
}

var Function_773(struct<31>[] Param0, struct<2> Param1, int iParam3) //Position: 0x2D0E7 / 184551
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	
	iVar0 = Function_783(&Param0);
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	iVar1 = Function_677(&iParam3, Param0[iVar031].f_216);
	fVar2 = Function_782();
	fVar3 = Function_781();
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
	if (!Function_778(&Param0, &uVar4, iVar0))
	{
		UNK_0xDF93BD7C(&uVar4);
		return 4294967295;
	}
	if (&iParam3 == 0)
	{
		Param0[iVar031].f_4 = Function_775(&Param0, GET_CURVE_TYPE(&Param0[iVar031] + 192));
	}
	else
	{
		Param0[iVar031].f_4 = &iParam3;
	}
	if (!Function_774(StackVal))
	{
		Param0[iVar031].f_4 = 1;
		if (!Function_774(StackVal))
		{
			Function_745(&(Param0[iVar031]), 0);
			UNK_0xDF93BD7C(&uVar4);
			return 4294967295;
		}
	}
	Function_726(&(Param0[iVar031]), GET_CURVE_TYPE(&Param0[iVar031] + 192));
	Global_43580.f_8 = StackVal + 1;
	if (!Function_70())
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_43580.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_670(&(Param0[iVar031]));
	Function_693(&Global_43580, 65536);
	UNK_0xDF93BD7C(&uVar4);
	return iVar0;
}

bool Function_774(int iParam0) //Position: 0x2D280 / 184960
{
	switch (iParam0)
	{
		case 0x00000001:
			if (!Function_752(&Global_43580, 2))
			{
				return 0;
			}
			if (!Global_47006[23])
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_752(&Global_43580, 4))
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
			if (!Function_62(&(Global_46972[9]), 0, 4294967295, 0))
			{
				return 0;
			}
			if (!Function_62(&(Global_46972[1]), 2, 4294967295, 0))
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

int Function_775(int iParam0, int iParam1) //Position: 0x2D36B / 185195
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 1000);
	switch (iParam1)
	{
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000004:
			if (IntToFloat(bVar0) > ((Global_43580.f_48 + Global_43580.f_52) * 1000.0f) && Function_776(&iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
		
		case 0x0000000B:
			if (IntToFloat(bVar0) > ((Global_43580.f_48 + Global_43580.f_52) * 1000.0f) && Function_776(&iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
	}
	return 1;
}

int Function_776(struct<31>[] Param0, int iParam1) //Position: 0x2D3ED / 185325
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
			if (Function_752(&Global_43580, 64))
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
				if (Function_748(&(Param0[iVar031])))
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
				iVar1 = Function_777(&iVar2);
				if (iVar1 > 4)
				{
					return 0;
				}
				if (iVar2 >= 1)
				{
					return 0;
				}
				if (IS_ACTOR_RIDING_VEHICLE(Function_187()))
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

var Function_777(int iParam0) //Position: 0x2D512 / 185618
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

bool Function_778(struct<31>[] Param0, var uParam1, int iParam2) //Position: 0x2D56A / 185706
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
	int iVar24;
	
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
		Function_635(&vVar3);
		Var7 = Function_635(&vVar3);
		bVar15 = VDIST(Var7, Global_54078);
		if (!Function_744(16384))
		{
			if (bVar15 > Function_782())
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
				if (Function_779(StackVal, Var7))
				{
					bVar6 = false;
				}
			}
		}
		if ((Function_744(32) && !Function_744(16384)) && bVar6)
		{
			uVar13 = Vector(0.0f, 0.0f, -1.0f);
			ROTATE_VECTOR_XZ(&uVar13, GET_HEADING(&Global_54076), 0);
			Function_635(&vVar3);
			uVar11 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_635(&vVar3), StackVal);
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
					if (Function_748(&(Param0[bVar231])))
					{
						if (SQUAD_IS_VALID(&Param0[bVar231] + 8))
						{
							if (SQUAD_GET_SIZE(&Param0[bVar231] + 8) >= 0)
							{
								Function_635(&vVar3);
								uVar21 = Function_653(StackVal, Function_635(&vVar3), &Param0[bVar231] + 8);
								if (IS_ACTOR_VALID(&uVar21))
								{
									GET_POSITION(&uVar21, &Var7);
								}
								else
								{
									Function_635(&Param0[bVar231] + 36);
									Var7 = Function_635(&Param0[bVar231] + 36);
								}
								Function_635(&vVar3);
								if (VDIST(Var7, Function_635(&vVar3)) > 20.0f)
								{
									bVar6 = false;
								}
							}
						}
					}
				}
				bVar2++;
			}
			if (Function_748(&Global_43660))
			{
				if (SQUAD_IS_VALID(&Global_43660 + 8))
				{
					if (SQUAD_GET_SIZE(&Global_43660 + 8) >= 0)
					{
						Function_635(&vVar3);
						uVar22 = Function_653(StackVal, Function_635(&vVar3), &Global_43660 + 8);
						if (IS_ACTOR_VALID(&uVar22))
						{
							GET_POSITION(&uVar22, &Var7);
						}
						else
						{
							Function_635(&Global_43660 + 36);
							Var7 = Function_635(&Global_43660 + 36);
						}
						Function_635(&vVar3);
						if (VDIST(Var7, Function_635(&vVar3)) > 20.0f)
						{
							bVar6 = false;
						}
					}
				}
			}
		}
		if (bVar6)
		{
			Function_635(&vVar3);
			Var7 = Function_635(&vVar3);
			Var7.f_4 = (StackVal + 1.0f);
			uVar23 = GET_MATERIAL_AT_VECTOR(&Var7);
			if (uVar23 & 1 == 0)
			{
				bVar6 = false;
				iVar1 += 5;
			}
			Var7.f_4 = (StackVal - 1.0f);
		}
		if (Function_740(&vVar3))
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
	if (Function_668(&vVar3))
	{
		return 0;
	}
	if (Global_47267[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uParam1, bVar2, &iVar24);
			Function_635(&iVar24);
			uVar9 = Function_635(&iVar24);
			bVar2++;
		}
		Function_635(&vVar3);
		uVar9 = Function_635(&vVar3);
	}
	*(&Param0[iParam231] + 192) = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uParam1, bVar0);
	Param0[iParam231].f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0[iParam231] + 192, 0.0f, 1.0f, 10);
	*(&Param0[iParam231] + 36) = { StackVal, StackVal, vVar3 };
	Function_635(&Param0[iParam231] + 36);
	Var7 = Function_635(&Param0[iParam231] + 36);
	return 1;
}

bool Function_779(struct<2> Param0) //Position: 0x2D8F8 / 186616
{
	var uVar0[8];
	bool bVar9;
	int iVar10;
	
	Function_780(&uVar0);
	bVar9 = Function_83(StackVal, Param0, 1, 1, 0);
	if (Function_160(bVar9))
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

void Function_780(var[] uParam0) //Position: 0x2D96E / 186734
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

var Function_781() //Position: 0x2D9D4 / 186836
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

float Function_782() //Position: 0x2DA1F / 186911
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

int Function_783(struct<31>[] Param0) //Position: 0x2DA63 / 186979
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

bool Function_784(int iParam0, bool bParam1, int iParam2) //Position: 0x2DA92 / 187026
{
	if (!Function_744(32768))
	{
		return 0;
	}
	if (StackVal > Function_785())
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
	if (!Function_62(&(Global_46972[6]), 4, 23, 1))
	{
		return 0;
	}
	if (!Function_744(524288))
	{
		return 0;
	}
	if (Function_783(&iParam0) == 4294967295)
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

int Function_785() //Position: 0x2DB53 / 187219
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

bool Function_786(struct<2> Param0) //Position: 0x2DC0D / 187405
{
	return ARE_CURVES_IN_RANGE(48, Param0, 150.0f);
}

void Function_787() //Position: 0x2DC21 / 187425
{
	int iVar0;
	
	iVar0 = GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0]));
	Global_43580.f_312 = RAND_INT_RANGE(false, (iVar0 - 1));
	Global_43580.f_308 = 0;
	Global_43580.f_308 = 0;
	while (Global_43580.f_308 <= Global_43580.f_108)
	{
		Function_694(HUD_IS_FADED());
		Global_43580.f_308++;
	}
	Global_43580.f_308 = 0;
	Function_462(&Global_43580 + 108);
	Function_732(262144);
	return;
}

void Function_788() //Position: 0x2DC8B / 187531
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	float fVar4;
	
	Function_732(2097152);
	return;
	Function_732(2097152);
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
					Function_692(2097152);
					return;
				}
			}
		}
		bVar0++;
	}
	Function_732(2097152);
	return;
}

bool Function_789(struct<31>[] Param0, bool bParam1) //Position: 0x2DD00 / 187648
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
			if (Function_764(&Param0, &uVar3, &iVar1))
			{
				Function_793(&(Param0[iVar131]), &bParam1);
			}
			else if (Function_789(&Param0, &uVar3))
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
			if (Function_764(&Param0, &iVar4, &iVar1))
			{
				Function_793(&(Param0[iVar131]), &bParam1);
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_791(&Param0, &iVar4, 1, iVar2, &iVar1))
			{
				Function_793(&(Param0[iVar131]), &iVar4);
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_790(&Param0, &iVar4, 1))
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
		if (!Function_683(&bParam1, 1, 1, 4294967295))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFT_VEHICLE(&bParam1))
		{
			iVar0 = 2;
		}
		if (Function_790(&Param0, &bParam1, iVar0))
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
			if (Function_764(&Param0, &iVar5, &iVar1))
			{
				Function_793(&(Param0[iVar131]), &bParam1);
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iVar5, false) == &bParam1)
				{
					Param0[iVar131] = 3;
					(&Param0[iVar131] + 16) = "";
				}
				GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
				REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
				return 1;
			}
			if (Function_789(&Param0, &iVar5))
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
		if (Function_791(&Param0, &bParam1, iVar0, iVar2, &iVar1))
		{
			Function_793(&(Param0[iVar131]), &bParam1);
			GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
			REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
			return 1;
		}
		if (Function_790(&Param0, &bParam1, iVar0))
		{
			GIVE_OBJECT_TO_LAYOUT(&bParam1, &Global_43578);
			REGISTER_TRAFFIC_ACTOR(&bParam1, 1);
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_790(struct<31>[] Param0, int iParam1, int iParam2) //Position: 0x2DF82 / 188290
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = Function_783(&Param0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	Param0[iVar031].f_4 = iParam2;
	Function_726(&(Param0[iVar031]), 4294967294);
	Param0[iVar031] = 3;
	iVar1 = 0;
	bVar2 = false;
	switch (iParam2)
	{
		case 0x00000002:
			if (!IS_ACTOR_VEHICLE(&iParam1))
			{
				Function_745(&(Param0[iVar031]), 0);
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
			*(&Param0[iVar031] + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 0);
			Function_688(StackVal, &Param0[iVar031] + 8, &Param0[iVar031] + 232);
			uVar4 = GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, false);
			break;
		
		case 0x00000001:
		case 0x00000003:
			if (!IS_ACTOR_HUMAN(&iParam1))
			{
				Function_745(&(Param0[iVar031]), 0);
				return 0;
			}
			if (IS_ACTOR_PLAYER(&iParam1))
			{
				if (IS_ACTOR_RIDING(&iParam1))
				{
					RELEASE_ACTOR(GET_MOUNT(&iParam1));
				}
				Function_745(&(Param0[iVar031]), 0);
				return 0;
			}
			SQUAD_JOIN(&iParam1, &Param0[iVar031] + 8);
			if (iParam2 == 1)
			{
				Param0[iVar031].f_32 = 1;
				*(&Param0[iVar031] + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 0);
				Function_688(StackVal, &Param0[iVar031] + 8, &Param0[iVar031] + 232);
			}
			uVar4 = &iParam1;
			break;
		
		default:
			break;
	}
	Function_687(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0[iVar031]);
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

bool Function_791(struct<31>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2E281 / 189057
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
				if (Function_748(&(Param0[iVar031])))
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
		if (Function_748(&(Param0[iVar031])))
		{
			if (StackVal == iParam2)
			{
				if (Function_792(&(Param0[iVar031]), &iParam1))
				{
					switch (StackVal)
					{
						case 0x00000001:
						case 0x00000003:
							bVar1 = GET_HEADING(&iParam1);
							GET_OBJECT_POSITION(&iParam1, &Var5);
							Function_635(&Param0[iVar031] + 36);
							uVar3 = Vector(StackVal, StackVal, StackVal) - Vector(Var5, Function_635(&Param0[iVar031] + 36), StackVal);
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

bool Function_792(struct<5> Param0) //Position: 0x2E3A8 / 189352
{
	struct<2> Var0;
	struct<2> Var2;
	float fVar4;
	
	if (!Function_748(&Param0))
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

void Function_793(struct<5> Param0) //Position: 0x2E428 / 189480
{
	if (!Function_748(&Param0))
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
			*(&Param0 + 232) = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_43578, 15, 0);
		}
		Function_688(StackVal, &Param0 + 8, &Param0 + 232);
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

void Function_794(struct<31>[] Param0, int iParam1) //Position: 0x2E531 / 189745
{
	int iVar0;
	
	if ((((HUD_IS_FADED() && !Function_744(65536)) && !Global_6653) && !Function_744(16384)) || iParam1)
	{
		if (((Global_6634 && !Global_6653) || !STREAMING_IS_WORLD_LOADED()) || iParam1)
		{
			iVar0 = 0;
			while (iVar0 <= Param0)
			{
				if (Function_748(&(Param0[iVar031])))
				{
					Function_745(&(Param0[iVar031]), 0);
				}
				iVar0++;
			}
			if (Function_748(&Global_43660))
			{
				Function_745(&Global_43660, 0);
			}
			if (!Function_744(65536))
			{
				if (!Global_53524.f_44)
				{
					DESTROY_LAYOUT_OBJECTS(&Global_43578);
				}
				else
				{
					RELEASE_LAYOUT_OBJECTS(&Global_43578);
				}
				Function_754(&Global_43578);
			}
			Global_43580.f_16 = 0.0f;
			Global_43580.f_8 = 0;
			Global_43580.f_64 = 0;
			Function_732(65536);
		}
	}
	if (StackVal && (!HUD_IS_FADED() && Function_744(16384)) <= Function_785())
	{
		Function_692(16384);
	}
	return;
}

void Function_795(bool bParam0) //Position: 0x2E60C / 189964
{
	return;
	Global_122919.f_8 = StackVal;
	Function_799();
	Function_798();
	if (!bParam0)
	{
		return;
	}
	Function_796();
	return;
}

void Function_796() //Position: 0x2E62E / 189998
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
			if (Function_797(&iVar1))
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
			if (Function_797(&iVar1))
			{
				Global_122919.f_20++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

bool Function_797(int iParam0) //Position: 0x2E6FA / 190202
{
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		return 0;
	}
	if (!Function_683(&iParam0, 4294967295, 1, 4294967295))
	{
		return 0;
	}
	return 1;
}

void Function_798() //Position: 0x2E71C / 190236
{
	bool bVar0;
	
	Global_122919.f_16 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((Global_6629 && Global_120101[bVar088] != Global_43789) || Function_772(bVar0))
			{
				Global_122919.f_16 = (Global_122919.f_16 + Global_120101[bVar088].f_12);
			}
		}
		bVar0++;
	}
	return;
}

void Function_799() //Position: 0x2E774 / 190324
{
	var uVar0;
	int iVar1;
	
	Global_122919.f_12 = 0;
	iVar1 = 0;
	while (iVar1 <= Local_16)
	{
		if (Function_748(&(Local_16[iVar131])))
		{
			if (Function_769(&(Local_16[iVar131]), &uVar0, 1))
			{
				Global_122919.f_12++;
			}
		}
		iVar1++;
	}
	return;
}

var Function_800(struct<31>[] Param0) //Position: 0x2E7BD / 190397
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= Param0)
	{
		if (Function_748(&(Param0[iVar231])))
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

void Function_801() //Position: 0x2E839 / 190521
{
	Global_43580.f_60 = 4294967295;
	Global_43580.f_96 = 4294967295;
	Global_43580.f_88 = 0;
	Global_43580.f_92 = 0;
	Function_693(&Global_43580, 512);
	Global_43580.f_100 = -500.0f;
	Function_767();
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
	Function_732(8192);
	bLocal_639 = Function_392("trafficDebugLite");
	bLocal_640 = Function_392("trafficForceCoach");
	if (bLocal_640)
	{
		Function_750(&Global_43580, 64);
	}
	Function_732(262144);
	if (Function_392("trafficSpew"))
	{
		Global_47151[43] = 1;
		Global_47151[12] = 1;
		Global_47151[13] = 1;
	}
	return;
}

void Function_802(struct<57> Param0) //Position: 0x2EA02 / 190978
{
	strcpy(&Param0 + 24, "LAW", 16);
	Param0 = 216306;
	*(&Param0 + 8) = 191054;
	*(&Param0 + 16) = 191031;
	Param0.f_56 = 1;
	return;
}

void Function_803() //Position: 0x2EA37 / 191031
{
	if (IS_LAYOUTREF_VALID(&Global_39918))
	{
		DESTROY_LAYOUT(&Global_39918);
	}
	return;
}

int Function_804() //Position: 0x2EA4E / 191054
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iLocal_12 = 0;
	Function_911(&uLocal_4, &uLocal_6, &iLocal_10, &iLocal_8, &Global_98981);
	Function_903();
	Function_902();
	if (Global_6621)
	{
		if (Global_6646)
		{
			Function_295(0);
		}
		Function_901(&uLocal_6, &iLocal_10);
	}
	if (Function_367(64))
	{
		Function_900(&uLocal_6, &iLocal_10, &iLocal_8);
		Function_899(&uLocal_6, &iLocal_10);
		Function_570(64);
	}
	if (Function_367(512))
	{
		Function_898(&uLocal_6, &iLocal_10, &iLocal_8);
		Function_899(&uLocal_6, &iLocal_10);
		Function_570(512);
	}
	if (Function_367(1024))
	{
		Function_897(&uLocal_6, &iLocal_10);
		Function_899(&uLocal_6, &iLocal_10);
		Function_570(1024);
		iLocal_12 = 0;
	}
	Function_871(&uLocal_4, &uLocal_6, &Global_39920, &iLocal_10);
	if (Function_856(&uLocal_6, &iLocal_10, &iLocal_8))
	{
		iLocal_12 = 1;
	}
	if (Function_367(1) && Function_367(4096))
	{
		if (iLocal_12 && Function_540(1))
		{
			if (!Global_6646)
			{
				Function_295(1);
				Global_40060.f_4420 = Function_297(StackVal);
			}
		}
	}
	if (Function_367(2) && Function_367(8192))
	{
		Function_899(&uLocal_6, &iLocal_10);
	}
	if (Function_367(128))
	{
		Function_900(&uLocal_6, &iLocal_10, &iLocal_8);
		Function_899(&uLocal_6, &iLocal_10);
		Function_844(&uLocal_6, &iLocal_8);
		Function_570(128);
	}
	if (GET_OBJECTSET_SIZE(&iLocal_8) >= 25)
	{
		Function_844(&uLocal_6, &iLocal_8);
	}
	if (Function_540(1))
	{
		Function_838();
	}
	else if (Global_6646)
	{
		if (!IS_SCRIPT_VALID(&Global_39922 + 96) && !IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			Function_295(0);
		}
	}
	if (!Function_367(0x1000000))
	{
		Function_284();
		*(&Global_39922 + 280) = Function_284();
	}
	else if (!STREAMING_ARE_BOUNDS_LOADED(*(&Global_39922 + 280), 1.0f))
	{
		if (StackVal > 1000.0f)
		{
			Function_284();
			*(&Global_39922 + 280) = Function_284();
		}
		else if (!STREAMING_ARE_BOUNDS_LOADED(StackVal, Vector(StackVal, StackVal, (Global_39922.f_280 - 1000.0f)), 1.0f))
		{
			Function_284();
			*(&Global_39922 + 280) = Function_284();
		}
	}
	if (IS_OBJECTSET_VALID(&Global_98981))
	{
		if (!Global_6646)
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanObject"))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanTime"))
				{
					if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanTime"))
					{
						uVar0 = DECOR_GET_OBJECT(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanObject");
						if (IS_OBJECT_VALID(&uVar0))
						{
							if (GET_OBJECT_TYPE(&uVar0) == 15)
							{
								iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
							}
							else if (GET_OBJECT_TYPE(&uVar0) == 24)
							{
								iVar1 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar0));
							}
							if (IS_ACTOR_VALID(&iVar1))
							{
								if (!IS_ACTOR_HOGTIED(&iVar1))
								{
									Function_295(1);
									Global_40060.f_4420 = Function_297(StackVal);
								}
							}
						}
						DECOR_REMOVE(&Global_98981, "untiedLawmanTime");
						DECOR_REMOVE(&Global_98981, "untiedLawmanObject");
					}
				}
			}
		}
		else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanObject"))
		{
			DECOR_REMOVE(&Global_98981, "untiedLawmanObject");
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanTime"))
			{
				DECOR_REMOVE(&Global_98981, "untiedLawmanTime");
			}
		}
	}
	if (Function_837())
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0) || Function_367(0x1000000))
		{
			bVar2 = false;
			bVar2 = (*&Global_40060 + 68[12181][35])[StackVal] <= 20;
			if ((StackVal && Function_297(((bVar2 && Function_367(32)) && Function_367(131072))) < 0) && !Function_367(0x1000000))
			{
				Function_835();
			}
			else if (StackVal && Function_297((((StackVal && (((*&Global_39922 + 116)[StackVal] != 3 && !Function_367(0x1000000)) || (Global_99472 != 16 || Global_99472 != 32) > (*&Global_40060 + 68[12181][35])[RAND_INT_RANGE(false, 10000)] * 500)) && Function_367(16)) && Function_367(65536))) < 150)
			{
				Function_831();
			}
			else if (Function_367(8) && Function_367(32768))
			{
				Function_822();
			}
			else
			{
				if (Function_367(0x1000000))
				{
					if (!IS_SCRIPT_VALID(&Global_39922 + 96) && !IS_SCRIPT_VALID(&Global_39922 + 104))
					{
						if (Global_6646)
						{
							Function_295(0);
						}
						Function_570(0x1000000);
					}
				}
				Function_821(StackVal, 0);
			}
		}
		if (!Function_367(0x1000000))
		{
			Function_811();
		}
	}
	else if (Function_367(0x1000000))
	{
		if (!IS_SCRIPT_VALID(&Global_39922 + 96) && !IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			if (Global_6646)
			{
				Function_295(0);
			}
			Function_570(0x1000000);
		}
	}
	if (Function_367(2048))
	{
		Function_806();
	}
	Function_805();
	if (IS_ACTOR_VALID(&Global_54076))
	{
		bVar3 = false;
		bVar3 = (Global_40000.f_80 == 0.0f && (Global_40000.f_80 - GET_CURRENT_GAME_TIME()) < 30.0f);
		if (Global_6646 || bVar3)
		{
			if (!AI_GLOBAL_GET_PERMANENT_DANGER(&Global_54076))
			{
				AI_GLOBAL_SET_PERMANENT_DANGER(&Global_54076, 1);
			}
		}
		else if (AI_GLOBAL_GET_PERMANENT_DANGER(&Global_54076))
		{
			AI_GLOBAL_SET_PERMANENT_DANGER(&Global_54076, 0);
		}
	}
	return 0;
}

void Function_805() //Position: 0x2EFCA / 192458
{
	float fVar0;
	
	fVar0 = (GET_CURRENT_GAME_TIME() - Global_42262);
	Global_42261 = (Global_42261 - (fVar0 * 8.0f));
	if (Global_42261 > 0.0f)
	{
		Global_42261 = 0.0f;
	}
	Global_42262 = GET_CURRENT_GAME_TIME();
	return;
}

void Function_806() //Position: 0x2EFFA / 192506
{
	bool bVar0;
	struct<29> Var1;
	
	if (Global_6623)
	{
		Function_570(2048);
		return;
	}
	if (!IS_ACTOR_VALID(Function_187()))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(Function_187()))
	{
		return;
	}
	Function_490(Global_40060.f_4424, 0, 0);
	bVar0 = Function_297(Global_40060.f_4424) < Function_185();
	if (bVar0)
	{
		Var1.f_20 = (Function_297(Global_40060.f_4424) - Function_185());
	}
	else
	{
		Var1.f_20 = 0;
	}
	if (Global_42263 == 0)
	{
		Var1 = Global_39922[Global_40060.f_4424];
		*(&Var1 + 4) = *(&Global_39922 + 32[Global_40060.f_44242]);
	}
	else
	{
		Var1 = Function_810(Global_42263);
		Function_809(Global_42263);
		*(&Var1 + 4) = Function_809(Global_42263);
	}
	bVar5 = false;
	if (Global_42263 == 0)
	{
		if (Var1 == Global_46760[0])
		{
			if (((Function_808(8) || Function_808(9)) || Function_808(23)) || Function_808(21))
			{
				bVar5 = true;
			}
		}
		else if (Var1 == Global_46914[0])
		{
			if ((Function_808(43) || Function_808(47)) || Function_808(42))
			{
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		Var1 = Global_46816[0];
		*(&Var1 + 4) = Vector(-819,6454f, 93,80083f, 2436,405f);
	}
	Var1.f_16 = Global_40060.f_4424;
	Var1.f_24 = bVar0;
	Var1.f_28 = Var1.f_20;
	Global_39922.f_112 = 4;
	*(&Global_39922 + 96) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_player_in_jail", &Var1, 8, 0);
	bVar6 = Function_297(Global_40060.f_4424);
	Function_807(Global_40060.f_4424, bVar6);
	Global_21575 = 4294967295;
	Global_42263 = 0;
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		Function_570(2048);
		Global_6650 = 1;
		if (bVar0)
		{
			Function_306(Function_185(), 1);
			(*&Global_40060 + 32)[Global_40060.f_4424] = Var1.f_20;
		}
		else
		{
			Function_306(bVar6, 1);
			(*&Global_40060 + 32)[Global_40060.f_4424] = 0;
		}
	}
	return;
}

void Function_807(int iParam0, bool bParam1) //Position: 0x2F1DD / 192989
{
	if (!Function_298(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_40060[iParam0])
	{
		Function_307(222, Global_40060[iParam0], 0);
		if (Function_186(222) <= 0)
		{
			Function_304(222, 0, 0);
		}
		Global_40060[iParam0] = 0;
		Function_304((*&Global_40060 + 4428)[iParam0], 0, 0);
	}
	else
	{
		Global_40060[iParam0] = (Global_40060[iParam0] - bParam1);
		Function_307((*&Global_40060 + 4428)[iParam0], bParam1, 0);
		Function_307(222, bParam1, 0);
	}
	return;
}

int Function_808(int iParam0) //Position: 0x2F266 / 193126
{
	if (Function_244(StackVal) == 0)
	{
		if (Function_243(&(Global_6667[iParam028])))
		{
			return 1;
		}
	}
	return 0;
}

struct<8> Function_809(int iParam0) //Position: 0x2F28C / 193164
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
	Function_284();
	return StackVal, Function_284();
}

int Function_810(int iParam0) //Position: 0x2F338 / 193336
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_46816[0];
			break;
		
		case 0x00000002:
			return Global_46760[0];
			break;
		
		case 0x00000003:
			return Global_46914[0];
			break;
		
		case 0x00000004:
			return Global_46866[0];
			break;
		
		case 0x00000005:
			return Global_46894[1];
			break;
		
		case 0x00000006:
			return Global_46850[0];
			break;
	}
	return 4294967294;
}

void Function_811() //Position: 0x2F3A8 / 193448
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	if (IS_SCRIPT_VALID(&Global_40044 + 48))
	{
		if (StackVal < (GET_CURRENT_GAME_TIME() + 120.0f))
		{
			Global_40044 = 0.0f;
			Global_40044.f_4 = 0.0f;
			Global_40044.f_32 = 0;
			TERMINATE_SCRIPT(&Global_40044 + 48);
		}
	}
	else if (Global_40044 < 2.0f)
	{
		if (GET_OBJECTSET_SIZE(&Global_40044 + 40) < 0 && GET_CURRENT_GAME_TIME() < Global_40044)
		{
			*(&Global_40044 + 48) = Function_820();
			iVar0 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
			uVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Global_40044 + 40);
			if (GET_OBJECT_TYPE(&uVar3) == 15)
			{
				uVar4 = GET_ACTOR_FROM_OBJECT(&uVar3);
			}
			else if (GET_OBJECT_TYPE(&uVar3) == 24)
			{
				uVar4 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar3));
			}
			GET_OBJECT_POSITION(&uVar4, &Var1);
			SET_CRIME_POSITION(&iVar0, Var1);
			SET_CRIME_CRIMINAL(&iVar0, &uVar4);
			SET_CRIME_VICTIM(&iVar0, &Global_40044 + 24);
			uVar5 = Function_812(StackVal, &iVar0, Global_54078, 30.0f, 0, 0);
			if (IS_OBJECT_VALID(&uVar5))
			{
				if (GET_OBJECT_TYPE(&uVar5) == 15)
				{
					SAY_SINGLE_LINE_CONTEXT(GET_ACTOR_FROM_OBJECT(&uVar5), 85, &uVar4, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (GET_OBJECT_TYPE(&uVar5) == 24)
				{
					SAY_SINGLE_LINE_CONTEXT(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar5)), 85, &uVar4, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
			}
			DESTROY_CRIME(&iVar0);
		}
	}
	else if (IS_OBJECTSET_VALID(&Global_40044 + 40))
	{
		if (GET_OBJECTSET_SIZE(&Global_40044 + 40) >= 0)
		{
			bVar6 = false;
			while (bVar6 <= GET_OBJECTSET_SIZE(&Global_40044 + 40))
			{
				if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &Global_40044 + 40)))
				{
					DEREFERENCE_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &Global_40044 + 40));
				}
				bVar6++;
			}
			Function_637(&Global_40044 + 40);
		}
	}
	return;
}

bool Function_812(int iParam0, struct<2> Param1, float fParam3, bool bParam4, int iParam5) //Position: 0x2F545 / 193861
{
	var uVar0;
	
	if (fParam3 < 100.0f)
	{
		return "";
	}
	uVar0 = "";
	Function_819();
	if (IS_LAYOUTREF_VALID(GET_AMBIENT_LAYOUT()))
	{
		uVar0 = Function_813(StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, &iParam0, Param1, fParam3, 0, &iParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10996))
	{
		uVar0 = Function_813(StackVal, StackVal, &Global_10996, 24, &iParam0, Param1, fParam3, 0, &iParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10994))
	{
		uVar0 = Function_813(StackVal, StackVal, &Global_10994, 24, &iParam0, Param1, fParam3, 0, &iParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
	{
		uVar0 = Function_813(StackVal, StackVal, GET_GC_LAYOUT(), 15, &iParam0, Param1, fParam3, 0, &iParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		if (&bParam4)
		{
			uVar0 = Function_813(StackVal, StackVal, &Global_43578, 15, &iParam0, Param1, fParam3, 1, &iParam5, 0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				return &uVar0;
			}
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10998))
	{
		uVar0 = Function_813(StackVal, StackVal, &Global_10998, 15, &iParam0, Param1, fParam3, 0, &iParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return Function_812(StackVal, &iParam0, Param1, (fParam3 * 2.0f), &bParam4, 0);
}

bool Function_813(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, float fParam6, bool bParam7, int iParam8, int iParam9) //Position: 0x2F6C9 / 194249
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	GET_CRIME_POSITION(&uParam3, &Var2);
	Function_818(&Global_39554);
	ITERATE_ON_OBJECT_TYPE(&Global_39554, iParam2);
	if (&iParam9 == "")
	{
		ITERATE_IN_SPHERE(&Global_39554, Var2, fParam6);
	}
	else
	{
		ITERATE_IN_VOLUME(&Global_39554, &iParam9);
	}
	ITERATE_IN_LAYOUT(&Global_39554, &uParam0);
	if (GET_NUM_ITERATOR_MATCHES(&Global_39554) >= 0)
	{
		iVar0 = Function_817(StackVal, &Global_39554, iParam1, GET_CRIME_VICTIM(&uParam3), "nnowitness", Param4, GET_CRIME_CRIMINAL(&uParam3));
		uVar1 = Function_814(&iVar0, &bParam7, &iParam8);
		if (IS_OBJECT_VALID(&uVar1))
		{
			return &uVar1;
		}
		if (iParam1 == 6)
		{
			iVar4 = 4;
		}
		else if (iParam1 == 4)
		{
			iVar4 = 6;
		}
		if (iVar4 != 4 || iVar4 != 6)
		{
			iVar0 = Function_817(StackVal, &Global_39554, iVar4, GET_CRIME_VICTIM(&uParam3), "nnowitness", Param4, GET_CRIME_CRIMINAL(&uParam3));
			uVar1 = Function_814(&iVar0, &bParam7, &iParam8);
			if (IS_OBJECT_VALID(&uVar1))
			{
				return &uVar1;
			}
		}
	}
	return "";
}

int Function_814(int iParam0, bool bParam1, int iParam2) //Position: 0x2F7D0 / 194512
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	iParam2 = &iParam2;
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 15)
		{
			iVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
		}
		else if (GET_OBJECT_TYPE(&iParam0) == 24)
		{
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
		}
		if (&bParam1)
		{
			if (IS_ACTOR_RIDING_VEHICLE(&iVar0))
			{
				bVar1 = false;
				uVar2 = GET_VEHICLE(&iVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					iVar3 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar2, false);
					if (IS_ACTOR_VALID(&iVar3) && &iVar3 == GET_PLAYER_ACTOR(0))
					{
						iParam0 = GET_OBJECT_FROM_ACTOR(&iVar3);
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					DECOR_SET_BOOL(&iParam0, "witnessOutNow", 1);
					MEMORY_PREFER_WALKING(&iVar0, 1);
				}
			}
		}
		if (!Function_816(&iParam0) && !Function_815(&iParam0))
		{
			if (IS_ACTOR_HOGTIED(&iVar0))
			{
				DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
			}
			else
			{
				if (SQUAD_IS_VALID(&Global_43660 + 8))
				{
					if (&iVar0 == Function_551(&Global_43660 + 8))
					{
						Global_43580.f_100 = GET_CURRENT_GAME_TIME();
					}
				}
				DECOR_SET_BOOL(&iParam0, "witness", 1);
				return &iParam0;
			}
		}
	}
	return "";
}

bool Function_815(int iParam0) //Position: 0x2F8F1 / 194801
{
	int iVar0;
	var uVar1;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 15)
		{
			iVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
		}
		else if (GET_OBJECT_TYPE(&iParam0) == 24)
		{
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
		}
		if (IS_ACTOR_VALID(&iVar0))
		{
			uVar1 = GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&iVar0));
			if (IS_OBJECT_VALID(&uVar1))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar1), "sleep"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_816(int iParam0) //Position: 0x2F963 / 194915
{
	int iVar0;
	
	if (GET_OBJECT_TYPE(&iParam0) == 24)
	{
		iVar0 = GET_PERS_CHAR_FROM_OBJECT(&iParam0);
		if (IS_PERS_CHAR_VALID(&iVar0))
		{
			if (Global_43789 == Global_46816[0])
			{
				if (&iVar0 != &Global_13580[183] + 16 || &iVar0 != &Global_13580[23] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
			if (Global_43789 == Global_46796[4])
			{
				if (&iVar0 == &Global_13504[13] + 16)
				{
					if (Function_548(&(Global_11492[12]), 1))
					{
						DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
						return 1;
					}
				}
			}
			if (Global_43789 == Global_46850[0])
			{
				if (&iVar0 != &Global_14012[253] + 16 || &iVar0 != &Global_14012[263] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
			if (Global_43789 == Global_46894[1])
			{
				if (&iVar0 == &Global_14762[103] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_817(var uParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6) //Position: 0x2FA83 / 195203
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	if (!IS_ITERATOR_VALID(&uParam0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid iterator");
		return "";
	}
	if (!IS_FACTION_VALID(iParam1))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid faction");
		return "";
	}
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid local player");
		return "";
	}
	uVar0 = "";
	uVar1 = "";
	fVar2 = 1,001638E+07.0f;
	fVar3 = 1,001638E+07.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var8);
	iVar4 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		switch (GET_OBJECT_TYPE(&iVar4))
		{
			case 0x0000000F:
				if ((IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&iVar4)) && GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar4)) != iParam1) && IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&iVar4)))
				{
					if (!&iVar4 != &iParam2)
					{
						if (!DECOR_CHECK_EXIST(&iVar4, &iParam3))
						{
							GET_OBJECT_POSITION(&iVar4, &Var6);
							fVar5 = (VDIST(Var6, Param4) - (VDIST(Var6, Var8) * 2.0f));
							if (&iParam6 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_OBJECT(&iVar4), &iParam6))
							{
								if (fVar5 > fVar2)
								{
									fVar2 = fVar5;
									uVar0 = &iVar4;
								}
							}
							else if (fVar5 > fVar3)
							{
								fVar3 = fVar5;
								uVar1 = &iVar4;
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(&iVar4)) && IS_PERS_CHAR_ALIVE(GET_PERS_CHAR_FROM_OBJECT(&iVar4)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))))
					{
						if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))) == iParam1)
						{
							if (!GET_OBJECT_FROM_ACTOR(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))) != &iParam2)
							{
								if (!DECOR_CHECK_EXIST(&iVar4, &iParam3) && !DECOR_CHECK_EXIST(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4)), &iParam3))
								{
									GET_OBJECT_POSITION(&iVar4, &Var6);
									fVar5 = (VDIST(Var6, Param4) - (VDIST(Var6, Var8) * 2.0f));
									if (&iParam6 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4)), &iParam6))
									{
										if (fVar5 > fVar2)
										{
											fVar2 = fVar5;
											uVar0 = &iVar4;
										}
									}
									else if (fVar5 > fVar3)
									{
										fVar3 = fVar5;
										uVar1 = &iVar4;
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	if (IS_OBJECT_VALID(&uVar0))
	{
		return &uVar0;
	}
	return &uVar1;
}

int Function_818(int iParam0) //Position: 0x2FD36 / 195894
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_82());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_82());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_819() //Position: 0x2FD6C / 195948
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
	Function_818(&Global_39554);
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	return;
}

var Function_820() //Position: 0x2FE29 / 196137
{
	struct<125> Var0;
	
	Var0 = 10;
	Var0.f_88 = 0;
	Var0.f_104 = Global_40000;
	Var0.f_108 = StackVal;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	Var0.f_124 = Global_40000.f_68;
	(&Var0 + 96) = "";
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_ai", &Var0, 36, 0);
}

void Function_821(int iParam0, bool bParam1) //Position: 0x2FEAC / 196268
{
	bool bVar0;
	
	if (&bParam1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], 0))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_543() > 3)
	{
		bVar0 *= 2;
	}
	if (0 && !&bParam1)
	{
		Function_491(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_491(iParam0, 0, 0, Function_250(bVar0), 0);
	}
	return;
}

void Function_822() //Position: 0x2FF14 / 196372
{
	bool bVar0;
	
	if (!Global_43790 != 2)
	{
		Function_830();
		return;
	}
	if (((Global_6625 || Global_6623) || Global_6628) || Global_6653)
	{
		if (!Function_367(0x1000000))
		{
			if (!Global_6623)
			{
				Function_829();
			}
			return;
		}
	}
	if (Global_6646 && !Function_367(0x1000000))
	{
		return;
	}
	if (Global_6634)
	{
		Function_830();
		return;
	}
	if (Function_361(&Global_99130))
	{
		Function_830();
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_36(12))
	{
		Function_830();
		return;
	}
	if (StackVal == 0)
	{
		if (Function_36(10))
		{
			Function_830();
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_36(8))
		{
			Function_830();
			return;
		}
	}
	if (Function_367(0x1000000))
	{
		if (Function_297(StackVal) < 0)
		{
			Function_830();
			return;
		}
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		Function_830();
		return;
	}
	bVar0 = StackVal;
	if (!Function_826((Function_828(bVar0, Function_297(bVar0)) * 2 + Function_827(Function_297(bVar0)))))
	{
		Function_830();
		return;
	}
	if (Function_297(bVar0) <= 150 || Function_367(0x1000000))
	{
		if (!Function_47(Global_119935, 65536))
		{
			Function_42(&Global_54076, 65536, 2, 0);
		}
		*(&Global_39922 + 96) = Function_823(bVar0);
		Function_328(257, 1, 0, 0);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			Global_39922.f_112 = 1;
		}
		else if (!IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			if (Global_6646)
			{
				Function_295(0);
			}
			Function_570(0x1000000);
		}
	}
	else if (Function_297(bVar0) <= 150)
	{
	}
	return;
}

int Function_823(bool bParam0) //Position: 0x30093 / 196755
{
	struct<141> Var0;
	
	Function_824(bParam0, 4294967295);
	Var0 = 10;
	if (!Function_367(0x1000000))
	{
		Function_296();
	}
	Var0.f_88 = Function_297(bParam0);
	Var0.f_116 = bParam0;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	Var0.f_104 = (*&Global_39922 + 180)[bParam0];
	Var0.f_140 = 0;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_posse", &Var0, 36, 0);
}

void Function_824(int iParam0, int iParam1) //Position: 0x30121 / 196897
{
	*(&Global_39922 + 148[iParam0]) = Function_825();
	iParam1 = &iParam1;
	return;
}

var Function_825() //Position: 0x3013A / 196922
{
	return MAKE_TIME_OF_DAY_EX(0, 0, 0, 1);
}

bool Function_826(int iParam0) //Position: 0x30147 / 196935
{
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > iParam0)
	{
		return 1;
	}
	return 0;
}

int Function_827(int iParam0) //Position: 0x30160 / 196960
{
	if (iParam0 <= 1700)
	{
		return 0;
	}
	if (iParam0 <= 3700)
	{
		return 1;
	}
	if (iParam0 <= 5000)
	{
		return 2;
	}
	if (iParam0 <= 7000)
	{
		return 3;
	}
	return 4;
	return 0;
}

int Function_828(int iParam0, int iParam1) //Position: 0x3019D / 197021
{
	if ((*&Global_39922 + 116)[iParam0] != 3)
	{
		return 3;
	}
	if (iParam1 <= 1700)
	{
		return 4;
	}
	if (iParam1 <= 3700)
	{
		return 6;
	}
	if (iParam1 <= 5000)
	{
		return 8;
	}
	if (iParam1 <= 7000)
	{
		return 10;
	}
	return 12;
	return 4;
}

void Function_829() //Position: 0x301EC / 197100
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(15, 30);
		}
		else
		{
			return;
		}
		if (Function_543() > 3)
		{
			bVar0 *= 2;
		}
		Function_491(StackVal, 0, 0, Function_250(bVar0), 0);
	}
	return;
}

void Function_830() //Position: 0x30241 / 197185
{
	if (Function_367(0x1000000))
	{
		if (!IS_SCRIPT_VALID(&Global_39922 + 96) && !IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			if (Global_6646)
			{
				Function_295(0);
			}
			Function_570(0x1000000);
		}
	}
	return;
}

void Function_831() //Position: 0x3027C / 197244
{
	bool bVar0;
	
	if (!Global_43790 != 2)
	{
		return;
	}
	if (((Global_6625 || Global_6623) || Global_6628) || Global_6653)
	{
		if (!Global_6623)
		{
			Function_829();
		}
		return;
	}
	if (Global_6646)
	{
		return;
	}
	if (Function_36(12))
	{
		return;
	}
	if (Global_6634)
	{
		return;
	}
	if (Function_361(&Global_99130))
	{
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		return;
	}
	bVar0 = StackVal;
	if (!Function_826((Function_834(Function_297(bVar0)) * 2 + Function_833(Function_297(bVar0)))))
	{
		return;
	}
	if (!Function_47(Global_119935, 262144))
	{
		Function_42(&Global_54076, 262144, 2, 0);
	}
	*(&Global_39922 + 96) = Function_832(bVar0);
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		Global_39922.f_112 = 3;
	}
	return;
}

int Function_832(int iParam0) //Position: 0x3033C / 197436
{
	struct<141> Var0;
	
	iParam0 = iParam0;
	Function_824(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_367(0x1000000))
	{
		Function_296();
	}
	Var0.f_104 = Global_40000;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	Var0.f_140 = 0;
	Var0.f_120 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_bounty", &Var0, 36, 0);
}

int Function_833(int iParam0) //Position: 0x303D1 / 197585
{
	if (iParam0 <= 3700)
	{
		return 1;
	}
	if (iParam0 <= 5000)
	{
		return 2;
	}
	if (iParam0 <= 7000)
	{
		return 3;
	}
	return 4;
	return 1;
}

int Function_834(bool bParam0) //Position: 0x30401 / 197633
{
	if (bParam0 <= 1700)
	{
		return 2;
	}
	if (bParam0 <= 3700)
	{
		return 3;
	}
	if (bParam0 <= 5000)
	{
		return 4;
	}
	if (bParam0 <= 7000)
	{
		return 5;
	}
	return 6;
	return 2;
}

void Function_835() //Position: 0x3043E / 197694
{
	bool bVar0;
	
	if (((Global_6625 || Global_6623) || Global_6628) || Global_6653)
	{
		if (!Global_6623)
		{
			Function_829();
		}
		return;
	}
	if (Global_6634)
	{
		return;
	}
	if (Function_361(&Global_99130))
	{
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_36(12))
	{
		return;
	}
	if (StackVal == 0)
	{
		if (Function_36(10))
		{
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_36(8))
		{
			return;
		}
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		return;
	}
	bVar0 = StackVal;
	if (!Function_826(Function_834(Function_297(bVar0)) * 2))
	{
		return;
	}
	if (Function_297(bVar0) >= 0)
	{
		if (!Function_47(Global_119935, 131072))
		{
			Function_42(&Global_54076, 131072, 2, 0);
		}
		*(&Global_39922 + 96) = Function_836(bVar0);
		Function_328(260, 1, 0, 0);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			Global_39922.f_112 = 2;
		}
	}
	return;
}

int Function_836(int iParam0) //Position: 0x3051E / 197918
{
	struct<141> Var0;
	
	Function_824(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_367(0x1000000))
	{
		Function_296();
	}
	Var0.f_104 = Global_40000;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	Var0.f_140 = 0;
	Var0.f_120 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_special", &Var0, 36, 0);
}

bool Function_837() //Position: 0x305B0 / 198064
{
	if (Function_367(256) || Function_367(262144))
	{
		return 0;
	}
	if (Function_360(0, 0, 1, 1) || Function_541())
	{
		if (!Function_367(0x1000000))
		{
			return 0;
		}
	}
	return 1;
}

void Function_838() //Position: 0x305E6 / 198118
{
	if (!Global_6646)
	{
		return;
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		return;
	}
	if (Function_36(12))
	{
		return;
	}
	if (!Function_540(1))
	{
		return;
	}
	if (Function_367(0x1000000))
	{
		return;
	}
	if (Global_43790 == 2 && Global_43790 == 5)
	{
		*(&Global_39922 + 96) = Function_842();
	}
	else if (GET_OBJECTSET_SIZE(&Global_98981) < 0 && 1)
	{
		*(&Global_39922 + 96) = Function_841();
	}
	else if (Function_839() & 1)
	{
		*(&Global_39922 + 96) = Function_841();
	}
	else if (!Global_6647)
	{
		Function_354(0x1000000);
		Function_284();
		*(&Global_39922 + 280) = Function_284();
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		Global_39922.f_112 = 0;
	}
	else if (!Function_367(0x1000000))
	{
		if (!IS_SCRIPT_VALID(&Global_39922 + 96) && !IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			Function_295(0);
		}
	}
	return;
}

int Function_839() //Position: 0x306BE / 198334
{
	if (Function_840(GET_AMBIENT_LAYOUT()))
	{
		return 1;
	}
	if (Function_840(GET_GC_LAYOUT()))
	{
		return 1;
	}
	if (Function_840(&Global_43578))
	{
		return 1;
	}
	if (Function_840(&Global_10998))
	{
		return 1;
	}
	return 0;
}

bool Function_840(int iParam0) //Position: 0x306F3 / 198387
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if ((GET_ACTOR_FACTION(&uVar2) != Global_40000 && IS_ACTOR_ALIVE(&uVar2)) && !IS_ACTOR_HOGTIED(&uVar2))
			{
				DESTROY_ITERATOR(&uVar0);
				return 1;
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

var Function_841() //Position: 0x3076E / 198510
{
	struct<125> Var0;
	
	Var0 = 10;
	Var0.f_88 = Function_297(StackVal);
	Var0.f_104 = Global_40000;
	Var0.f_108 = StackVal;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	Var0.f_124 = Global_40000.f_68;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_wild", &Var0, 36, 0);
}

var Function_842() //Position: 0x307FC / 198652
{
	struct<125> Var0;
	
	Var0 = 10;
	Function_843(Global_40000.f_12);
	Var0.f_88 = Function_297(StackVal);
	Var0.f_104 = Global_40000;
	Var0.f_108 = StackVal;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	Var0.f_124 = Global_40000.f_68;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 36, 0);
}

void Function_843(int iParam0) //Position: 0x30893 / 198803
{
	iParam0 = iParam0;
	return;
}

void Function_844(var uParam0, int iParam1) //Position: 0x3089D / 198813
{
	int iVar0;
	int iVar1;
	
	Function_855(&uParam0, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		iVar1 = GET_CRIME_FROM_OBJECT(&iVar0);
		if (!IS_CRIME_TALLIED(&iVar1))
		{
			if (Function_854(&iVar1))
			{
				Function_846(&iVar1);
				Function_845(&iVar1);
			}
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return;
}

void Function_845(int iParam0) //Position: 0x308F3 / 198899
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(GET_CRIME_OBJECTSET(&iParam0)))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(&iParam0)))
		{
			DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_CRIME_OBJECTSET(&iParam0)));
			bVar0++;
		}
		DESTROY_OBJECTSET(GET_CRIME_OBJECTSET(&iParam0));
	}
	DESTROY_OBJECT(GET_OBJECT_FROM_CRIME(&iParam0));
	return;
}

int Function_846(int iParam0) //Position: 0x3093F / 198975
{
	int iVar0;
	int iVar1;
	
	if (!IS_CRIME_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to tally bounty for an invalid crime");
		return 0;
	}
	if (IS_CRIME_TALLIED(&iParam0))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has already been tallied");
		return 0;
	}
	if (!Function_853(GET_CRIME_TYPE(&iParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	iVar0 = GET_CRIME_FACTION(&iParam0);
	if (!Function_851())
	{
		return 1;
	}
	Function_493(iVar0, Function_850(&iParam0));
	(*&Global_40060 + 68[iVar0181][GET_CRIME_TYPE(&iParam0)5])[GET_CRIME_WITNESSED(&iParam0)]++;
	if (GET_CRIME_WITNESSED(&iParam0) == 3)
	{
		iVar1 = Function_849(GET_CRIME_TYPE(&iParam0));
		if (iVar1 != 4294967295)
		{
			Function_328(iVar1, 1, 0, 0);
		}
	}
	if (Function_297(iVar0) >= Function_186(252))
	{
		Function_304(252, Function_297(iVar0), 0);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96) && Global_39922.f_112 != 2)
	{
		Function_328(261, 1, 0, 0);
	}
	SET_CRIME_TALLIED(&iParam0, 1);
	Function_354(0x20000000);
	Function_847(&iParam0);
	return 1;
}

void Function_847(int iParam0) //Position: 0x30AF0 / 199408
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	char* cVar4[64];
	
	iVar0 = GET_CRIME_TYPE(&iParam0);
	if (iVar0 != 0)
	{
		bVar1 = false;
		if (Function_848(iVar0))
		{
			uVar2 = GET_CRIME_VICTIM(&iParam0);
			if (IS_OBJECT_VALID(&uVar2))
			{
				iVar3 = GET_OBJECT_TYPE(&uVar2);
				if (iVar3 == 15)
				{
					cVar4 = GET_ACTOR_FROM_OBJECT(&uVar2);
				}
				else if (iVar3 == 24)
				{
					cVar4 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar2));
				}
				if (IS_ACTOR_VALID(&cVar4))
				{
					strcpy(&cVar5, UI_GET_STRING(&Global_41252[iVar011] + 4), 64);
					stradd(&cVar5, "", 64);
					stradd(&cVar5, UI_GET_STRING(GET_ACTOR_ENUM_STRING(&cVar4)), 64);
					Global_21543 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar5 };
					bVar1 = true;
					Global_42251 = 1;
				}
			}
		}
		if (!bVar1)
		{
			memcpy(&Global_21543, StackVal, StackVal, StackVal, *(&Global_41252[iVar011] + 4), 16);
			Global_42251 = 0;
		}
		Global_42256 = (GET_CURRENT_GAME_TIME() + 12.0f);
	}
	return;
}

bool Function_848(int iParam0) //Position: 0x30BB7 / 199607
{
	if ((iParam0 != 11 || iParam0 != 6) || iParam0 != 21)
	{
		return 1;
	}
	return 0;
}

int Function_849(int iParam0) //Position: 0x30BD3 / 199635
{
	switch (iParam0)
	{
		case 0x00000001:
			return 226;
			break;
		
		case 0x00000002:
			return 227;
			break;
		
		case 0x00000003:
			return 228;
			break;
		
		case 0x00000004:
			return 229;
			break;
		
		case 0x00000005:
			return 230;
			break;
		
		case 0x00000006:
			return 231;
			break;
		
		case 0x00000007:
			return 232;
			break;
		
		case 0x00000008:
			return 233;
			break;
		
		case 0x00000009:
			return 234;
			break;
		
		case 0x0000000A:
			return 235;
			break;
		
		case 0x0000000B:
			return 236;
			break;
		
		case 0x0000000C:
			return 237;
			break;
		
		case 0x0000000D:
			return 238;
			break;
		
		case 0x0000000E:
			return 239;
			break;
		
		case 0x0000000F:
			return 240;
			break;
		
		case 0x00000010:
		case 0x00000011:
			return 241;
			break;
		
		case 0x00000013:
		case 0x00000014:
			return 242;
			break;
		
		case 0x00000015:
			return 243;
			break;
		
		case 0x00000016:
			return 244;
			break;
		
		case 0x00000019:
			return 245;
			break;
		
		case 0x0000001B:
			return 246;
			break;
		
		case 0x0000001C:
			return 247;
			break;
		
		case 0x0000001E:
			return 248;
			break;
		
		case 0x00000020:
			return 249;
			break;
		
		case 0x00000023:
			return 250;
			break;
		
		default:
			LOG_ERROR("Trying to get a stat for a crime we dont' keep stats for");
			break;
	}
	return 4294967295;
}

bool Function_850(var uParam0) //Position: 0x30D5A / 200026
{
	struct<73> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_41252[GET_CRIME_TYPE(&uParam0)11] };
	if (Var0.f_36 != 2 || (Var0.f_36 != 3 && Var0.f_72 < 0))
	{
		if (Function_543() == 5)
		{
			return CEIL((IntToFloat((Var0.f_40 * GET_CRIME_COUNTER(&uParam0))) / 2.0f));
		}
		return (Var0.f_40 * GET_CRIME_COUNTER(&uParam0));
	}
	if (Function_543() == 5)
	{
		return CEIL((IntToFloat(Var0.f_40) / 2.0f));
	}
	return Var0.f_40;
}

bool Function_851() //Position: 0x30DC5 / 200133
{
	return Function_852(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_40000);
}

int Function_852(vector3 vParam0, var uParam9, var uParam10) //Position: 0x30DD4 / 200148
{
	if (Function_367(256))
	{
		return 0;
	}
	if (Function_367(262144))
	{
		return 0;
	}
	if (Function_541())
	{
		return 0;
	}
	if (Function_36(12))
	{
		return 0;
	}
	if (vParam0.z >= 4294967295 || vParam0.z <= 2)
	{
		return 0;
	}
	return 1;
}

bool Function_853(int iParam0) //Position: 0x30E22 / 200226
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_854(int iParam0) //Position: 0x30E38 / 200248
{
	if (!IS_CRIME_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to tally bounty for an invalid crime");
		return 0;
	}
	if (IS_CRIME_TALLIED(&iParam0))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has already been tallied");
		return 1;
	}
	if (!Function_853(GET_CRIME_TYPE(&iParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	if (!Function_851())
	{
		return 1;
	}
	SET_CRIME_TALLIED(&iParam0, 1);
	strcpy(&Global_21543, "", 64);
	return 1;
}

void Function_855(var uParam0, int iParam1) //Position: 0x30F41 / 200513
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

bool Function_856(float fParam0, int iParam1, var uParam2) //Position: 0x30F77 / 200567
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!Global_47267[0])
	{
	}
	if (GET_OBJECTSET_SIZE(&iParam1) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	Function_855(&fParam0, &iParam1);
	iVar4 = START_OBJECT_ITERATOR(&fParam0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		bVar5 = false;
		iVar3 = GET_CRIME_FROM_OBJECT(&iVar4);
		if (Function_870(&iVar3))
		{
			iVar2++;
		}
		if (Function_860(&iVar3))
		{
			if (GET_CRIME_WORLD_REGION(&iVar3) == Global_40000.f_12)
			{
				bVar5 = true;
			}
		}
		if (IS_CRIME_VALID(&iVar3))
		{
			iVar1 = (iVar1 + GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(&iVar3)));
			if ((!IS_CRIME_IN_PROGRESS(&iVar3) && Function_859(&iVar3)) && (IS_CRIME_TALLIED(&iVar3) || (!Global_6646 && !Global_6647)))
			{
				bVar5 = false;
				Function_845(&iVar3);
			}
			else if (bVar5)
			{
				iVar0 = 1;
			}
			Function_858(&iVar3);
			Function_857(&iVar3);
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&fParam0);
	}
	if (!Global_47267[0])
	{
	}
	return iVar0;
}

void Function_857(int iParam0) //Position: 0x31057 / 200791
{
	var uVar0;
	struct<2> Var2;
	int iVar4;
	
	if (!Global_47267[0])
	{
		return;
	}
	switch (GET_CRIME_TYPE(&iParam0))
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			uVar0 = Vector(0,25f, 0,5f, 0,25f);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			uVar0 = Vector(1.0f, 0,5f, 0.0f);
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			uVar0 = Vector(1.0f, 0,25f, 0,25f);
			break;
		
		case 0x00000011:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000019:
		case 0x0000001B:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000023:
			uVar0 = Vector(0,25f, 0,5f, 0,25f);
			break;
		
		default:
			uVar0 = Vector(0.0f, 0.0f, 0.0f);
			break;
	}
	GET_CRIME_POSITION(&iParam0, &Var2);
	iVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 2.0f, 0.0f), Var2, StackVal);
	return;
}

void Function_858(var uParam0) //Position: 0x31162 / 201058
{
	int iVar0;
	var uVar2;
	
	if (!Global_47267[0])
	{
		return;
	}
	switch (GET_CRIME_WITNESSED(&uParam0))
	{
		case 0x00000001:
			iVar0 = Vector(0,25f, 0,5f, 0,25f);
			break;
		
		case 0x00000002:
			iVar0 = Vector(1.0f, 0,5f, 0.0f);
			break;
		
		case 0x00000003:
			iVar0 = Vector(1.0f, 0,25f, 0,25f);
			break;
		
		default:
			iVar0 = Vector(0.0f, 0.0f, 0.0f);
			break;
	}
	GET_CRIME_POSITION(&uParam0, &uVar2);
	return;
}

bool Function_859(int iParam0) //Position: 0x311D9 / 201177
{
	if (!IS_CRIME_VALID(&iParam0))
	{
		return 0;
	}
	if (GET_CRIME_END_TIMESTAMP(&iParam0) + Global_41252[GET_CRIME_TYPE(&iParam0)11].f_48) > GET_CURRENT_GAME_TIME()
	{
		return 1;
	}
	return 0;
}

bool Function_860(int iParam0) //Position: 0x31209 / 201225
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_CRIME_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_CRIME_WITNESSED(&iParam0);
	if (!bVar0 != 3)
	{
		bVar1 = Function_868(&iParam0, bVar0, 0);
		if (bVar1 >= bVar0)
		{
			if (IS_CRIME_IN_PROGRESS(&iParam0) || !Function_859(&iParam0))
			{
				SET_CRIME_WITNESSED(&iParam0, bVar1);
				bVar0 = bVar1;
				if (bVar1 == 3)
				{
					Function_867();
				}
			}
		}
		if (((((GET_CRIME_WITNESSED(&iParam0) != 2 && !IS_SCRIPT_VALID(&Global_39922 + 104)) && Function_540(1)) && !Global_6646) && (Global_40000.f_72 > Global_40000.f_76 || Global_40000.f_80 > GET_CURRENT_GAME_TIME())) && Global_41252[GET_CRIME_TYPE(&iParam0)11].f_60)
		{
			(&Global_39922 + 104) = Function_861(&iParam0, 0, 0, 0);
		}
		else if (!GET_CRIME_WITNESSED(&iParam0) != 2)
		{
		}
		else if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
		}
		else if (!Function_540(1))
		{
		}
		else if (Global_6646)
		{
			SET_CRIME_WITNESSED(&iParam0, 3);
			Function_867();
		}
		else if (Global_40000.f_72 <= Global_40000.f_76 && Global_40000.f_80 < GET_CURRENT_GAME_TIME())
		{
		}
		else if (!Global_41252[GET_CRIME_TYPE(&iParam0)11].f_60)
		{
		}
	}
	else
	{
		return 1;
	}
	if (GET_CRIME_WITNESSED(&iParam0) == 3)
	{
		return 1;
	}
	return 0;
}

var Function_861(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x31336 / 201526
{
	struct<37> Var0;
	
	uVar5 = "";
	Var0 = &iParam0;
	Var0.f_24 = Global_40000;
	Var0.f_28 = StackVal;
	Var0.f_36 = Global_40000.f_12;
	if (Function_367(0x8000000))
	{
		return "";
	}
	if (Function_91() == 0)
	{
		if (GET_CRIME_TYPE(&iParam0) == 11 && GET_CRIME_TYPE(&iParam0) == 12)
		{
			return "";
		}
	}
	uVar10 = "";
	if (&bParam2)
	{
		if (GET_CRIME_TYPE(&iParam0) != 32)
		{
			uVar10 = GET_CRIME_VICTIM(&iParam0);
			if (IS_OBJECT_VALID(&uVar10))
			{
				if (GET_OBJECT_TYPE(&uVar10) == 15)
				{
					uVar11 = GET_ACTOR_FROM_OBJECT(&uVar10);
					if (IS_ACTOR_VALID(&uVar11))
					{
						iVar12 = GET_MOST_RECENT_RIDER(&uVar11);
						if (IS_ACTOR_VALID(&iVar12))
						{
							if (&iVar12 != Function_187())
							{
								uVar5 = GET_OBJECT_FROM_ACTOR(&iVar12);
							}
						}
						else
						{
							iVar12 = GET_ACTOR_DRAFTED_TO(&uVar11);
							if (!IS_ACTOR_VALID(&iVar12))
							{
								if (!IS_ACTOR_ALIVE(&uVar11))
								{
									iVar12 = Function_865(&uVar11);
								}
							}
							if (IS_ACTOR_VALID(&iVar12))
							{
								uVar10 = GET_OBJECT_FROM_ACTOR(&iVar12);
								bParam3 = 1;
								bParam2 = 0;
							}
							else
							{
								Function_864(&iParam0);
								if (Global_42261 > 600.0f)
								{
									return "";
								}
							}
						}
					}
				}
			}
		}
		Function_864(&iParam0);
		if (Global_42261 > 600.0f)
		{
			return "";
		}
	}
	if (&bParam3)
	{
		if (!IS_OBJECT_VALID(&uVar10))
		{
			uVar10 = GET_CRIME_VICTIM(&iParam0);
		}
		if (IS_OBJECT_VALID(&uVar10))
		{
			if (GET_OBJECT_TYPE(&uVar10) == 15)
			{
				uVar13 = GET_ACTOR_FROM_OBJECT(&uVar10);
				if (IS_ACTOR_VALID(&uVar13))
				{
					iVar14 = (GET_NUM_OCCUPIED_SEATS(&uVar13) + GET_NUM_AVAILABLE_SEATS(&uVar13));
					bVar15 = false;
					while (bVar15 <= iVar14)
					{
						if (!IS_OBJECT_VALID(&uVar5))
						{
							iVar16 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar13, bVar15);
							if (IS_ACTOR_VALID(&iVar16))
							{
								if (&iVar16 != Function_187())
								{
									uVar5 = GET_OBJECT_FROM_ACTOR(&iVar16);
								}
							}
						}
						bVar15++;
					}
					if (!IS_OBJECT_VALID(&uVar5))
					{
						Function_864(&iParam0);
						if (Global_42261 > 600.0f)
						{
							return "";
						}
					}
				}
			}
		}
	}
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar5 = Function_814(&uVar5, 1, 0);
	}
	if (IS_ITERATOR_VALID(&Global_40000 + 24))
	{
		ITERATE_EVERYWHERE(&Global_40000 + 24);
		ITERATE_ON_OBJECT_TYPE(&Global_40000 + 24, 8);
		ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
		GET_CRIME_POSITION(&iParam0, &Var6);
		(&Var0 + 16) = Function_863(StackVal, &Global_40000 + 24, Var6, 1.0f);
	}
	if (IS_OBJECT_VALID(&Var0 + 16))
	{
		GET_OBJECT_POSITION(&Var0 + 16, &Var8);
	}
	if (!IS_OBJECT_VALID(&uVar5))
	{
		if (!&bParam1)
		{
			*(&Var0 + 8) = Function_812(StackVal, &iParam0, Var8, 10.0f, 1, 0);
		}
		else
		{
			*(&Var0 + 8) = Function_862(&iParam0);
			if (!IS_OBJECT_VALID(&Var0 + 8))
			{
				Function_864(&iParam0);
				if (Global_42261 > 600.0f)
				{
					return "";
				}
				(&Var0 + 8) = Function_812(StackVal, &iParam0, Var8, 10.0f, 1, 0);
			}
		}
	}
	else
	{
		*(&Var0 + 8) = &uVar5;
	}
	if (!IS_OBJECT_VALID(&Var0 + 8))
	{
		return "";
	}
	if (Global_40000.f_80 > GET_CURRENT_GAME_TIME() && Global_40000.f_72 <= Global_40000.f_76)
	{
		Global_40000.f_72 = 0;
		Global_40000.f_80 = 0.0f;
	}
	Global_42261 = 0.0f;
	Global_40000.f_72++;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_report_crime", &Var0, 10, 0);
}

var Function_862(int iParam0) //Position: 0x316A4 / 202404
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = "";
	iVar1 = "";
	Function_819();
	uVar2 = GET_CRIME_VICTIM(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		if (GET_OBJECT_TYPE(&uVar2) != 9 || GET_OBJECT_TYPE(&uVar2) != 10)
		{
			iVar1 = GET_VOLUME_FROM_OBJECT(&uVar2);
		}
	}
	if (!IS_VOLUME_VALID(&iVar1))
	{
		return "";
	}
	Function_284();
	iVar0 = Function_813(StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, &iParam0, Function_284(), 9999.0f, 0, 0, &iVar1);
	if (IS_OBJECT_VALID(&iVar0))
	{
		return &iVar0;
	}
	Function_284();
	iVar0 = Function_813(StackVal, StackVal, &Global_10996, 24, &iParam0, Function_284(), 9999.0f, 0, 0, &iVar1);
	if (IS_OBJECT_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

var Function_863(var uParam0, struct<2> Param1, float fParam3) //Position: 0x31752 / 202578
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

void Function_864(int iParam0) //Position: 0x317D8 / 202712
{
	switch (GET_CRIME_TYPE(&iParam0))
	{
		case 0x0000000A:
		case 0x00000008:
		case 0x00000009:
		case 0x00000020:
			Global_42261 = (Global_42261 + 100.0f);
			break;
		
		case 0x0000000F:
		case 0x0000000D:
		case 0x0000000E:
			Global_42261 = (Global_42261 + 300.0f);
			break;
	}
	return;
}

int Function_865(var uParam0) //Position: 0x31831 / 202801
{
	var uVar0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_ALIVE(&uParam0))
		{
			uVar0 = Vector(-3.0f, 0.0f, 0.0f);
			GET_ACTOR_OFFSET_WORLD_COORDS(&uParam0, &uVar0, &Var2);
			return Function_866(StackVal, Var2);
		}
	}
	return "";
}

int Function_866(struct<2> Param0) //Position: 0x3186A / 202858
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar2, &Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 15);
	uVar0 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&uVar0))
	{
		iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_DRAFT_VEHICLE(&iVar1))
			{
				if (GET_NUM_DRAFT_POSITIONS(&iVar1) >= GET_NUM_DRAFTED_ACTORS(&iVar1))
				{
					Function_104(&iVar1);
					if (VDIST(Param0, Function_104(&iVar1)) >= 5.0f)
					{
						DESTROY_ITERATOR(&uVar2);
						return &iVar1;
					}
				}
			}
		}
		uVar0 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_ITERATOR(&uVar2);
	return "";
}

void Function_867() //Position: 0x318F8 / 203000
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_855(&uVar0, &iVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&uVar3))
		{
			SET_CRIME_WITNESSED(&uVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_868(int iParam0, int iParam1, bool bParam2) //Position: 0x3196B / 203115
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam2)
	{
		iVar1 = GET_CRIME_VICTIM(&iParam0);
		if (!IS_OBJECT_VALID(&iVar1))
		{
			iVar1 = GET_OBJECT_FROM_CRIME(&iParam0);
		}
	}
	iVar0 = GET_OBJECT_FROM_ACTOR(GET_CRIME_CRIMINAL(&iParam0));
	switch (iParam1)
	{
		case 0x00000002:
			if (&iVar1 != "")
			{
				iVar2 = 1;
				if (GET_CRIME_TYPE(&iParam0) == 30)
				{
					iVar2 = 0;
				}
				if (Function_869(Global_40000, &iVar1, iVar2))
				{
					return 3;
				}
			}
			if (&iVar0 != "")
			{
				if (Function_869(Global_40000, &iVar0, 1))
				{
					return 3;
				}
			}
			break;
		
		case 0x00000001:
			if (&iVar1 != "")
			{
				if (Function_869(StackVal, &iVar1, 1))
				{
					return 2;
				}
			}
			if (&iVar0 != "")
			{
				if (Function_869(StackVal, &iVar0, 1))
				{
					return 2;
				}
			}
			break;
		
		default:
			break;
	}
	return 1;
}

bool Function_869(int iParam0, int iParam1, bool bParam2) //Position: 0x31A2E / 203310
{
	int iVar0;
	struct<2> Var1;
	
	if (GET_OBJECT_TYPE(&iParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, &iParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		return 0;
	}
	if (&bParam2)
	{
		if (!IS_ITERATOR_VALID(&Global_39554))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(&iParam1, &Var1);
		Function_818(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 15);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0)) == iParam0)
			{
				return 1;
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
		Function_818(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, &Global_10996);
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 24);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))) == iParam0)
				{
					return 1;
				}
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
	}
	return 0;
}

bool Function_870(int iParam0) //Position: 0x31BBE / 203710
{
	if (!IS_CRIME_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_CRIME_IN_PROGRESS(&iParam0))
	{
		return 0;
	}
	switch (Global_41252[GET_CRIME_TYPE(&iParam0)11].f_36)
	{
		case 0x00000000:
			return 0;
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (GET_CRIME_END_TIMESTAMP(&iParam0) + Global_41252[GET_CRIME_TYPE(&iParam0)11].f_84) > GET_CURRENT_GAME_TIME()
			{
				SET_CRIME_IN_PROGRESS(&iParam0, 0);
				return 0;
			}
			break;
		
		case 0x00000004:
			if (GET_CRIME_BEGIN_TIMESTAMP(&iParam0) + Global_41252[GET_CRIME_TYPE(&iParam0)11].f_76) > GET_CURRENT_GAME_TIME()
			{
				SET_CRIME_END_TIMESTAMP(&iParam0, GET_CURRENT_GAME_TIME());
				SET_CRIME_IN_PROGRESS(&iParam0, 0);
				return 0;
			}
			switch (GET_CRIME_TYPE(&iParam0))
			{
				case 0x00000011:
					if (!GET_MOUNT(GET_CRIME_CRIMINAL(&iParam0)) != GET_ACTOR_FROM_OBJECT(GET_CRIME_VICTIM(&iParam0)))
					{
						Function_845(&iParam0);
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void Function_871(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0x31CA1 / 203937
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	if (GET_OBJECTSET_SIZE(&iParam2) == 0)
	{
		return;
	}
	bVar2 = false;
	Function_896(&uParam0, &iParam2);
	uVar4 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&uVar4))
	{
		uVar5 = GET_EVENT_FROM_OBJECT(&uVar4);
		uVar1 = GET_EVENT_PERPETRATOR(&uVar5);
		if (DECOR_CHECK_EXIST(&uVar4, "Perpetrator"))
		{
			uVar1 = DECOR_GET_OBJECT(&uVar4, "Perpetrator");
			if (!IS_OBJECT_VALID(&uVar1))
			{
				uVar1 = GET_EVENT_PERPETRATOR(&uVar5);
			}
		}
		if (GET_OBJECT_TYPE(&uVar1) == 15)
		{
			iVar0 = GET_ACTOR_FROM_OBJECT(&uVar1);
		}
		else if (GET_OBJECT_TYPE(&uVar1) == 24)
		{
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar1));
		}
		if (!&iVar0 != Function_187())
		{
			Function_893(&uVar5);
		}
		else
		{
			iVar6 = Function_891(&uVar5, &uParam1, &iParam2, &uParam3);
			if (!IS_CRIME_VALID(&iVar6))
			{
				iVar6 = Function_877(&uVar5, &iParam2, &uParam3, &bVar2);
				if (IS_CRIME_VALID(&iVar6))
				{
					if (GET_CRIME_WITNESSED(&iVar6) == 1)
					{
						if (Function_868(&iVar6, 1, 0) == 2)
						{
							SET_CRIME_WITNESSED(&iVar6, 2);
						}
					}
					if (Global_43790 == 3 && Global_43790 == 4)
					{
						if (!Global_6646 && !Global_6647)
						{
							if (GET_CRIME_WITNESSED(&iVar6) == 3)
							{
								iVar7 = GET_CRIME_TYPE(&iVar6);
								if (iVar7 == 12)
								{
									if (!Function_876(&iVar6, 30.0f) && !Function_875(&iVar6, 30.0f))
									{
										if (!Function_868(&iVar6, 2, 0) != 3)
										{
											if (Function_868(&iVar6, 1, 0) == 2)
											{
												SET_CRIME_WITNESSED(&iVar6, 2);
											}
											else
											{
												SET_CRIME_WITNESSED(&iVar6, true);
											}
										}
									}
								}
							}
						}
					}
					if ((((GET_CRIME_WITNESSED(&iVar6) != 2 && !IS_SCRIPT_VALID(&Global_39922 + 104)) && Function_540(1)) && !Global_6646) && (Global_40000.f_72 > Global_40000.f_76 || Global_40000.f_80 > GET_CURRENT_GAME_TIME()))
					{
						if (Global_41252[GET_CRIME_TYPE(&iVar6)11].f_60)
						{
							(&Global_39922 + 104) = Function_861(&iVar6, 0, 0, 0);
						}
						else if (Function_874(&iVar6))
						{
							*(&Global_39922 + 104) = Function_861(&iVar6, 1, 0, 0);
						}
						else if (Function_873(&iVar6))
						{
							*(&Global_39922 + 104) = Function_861(&iVar6, 0, 1, 0);
						}
						else if (Function_872(&iVar6))
						{
							*(&Global_39922 + 104) = Function_861(&iVar6, 0, 0, 1);
						}
					}
				}
				else
				{
					uVar3 = &uVar4;
				}
			}
		}
		uVar4 = OBJECT_ITERATOR_NEXT(&uParam0);
		if (IS_OBJECT_VALID(&uVar3))
		{
			DESTROY_OBJECT(&uVar3);
		}
	}
	CLEAN_OBJECTSET(&iParam2);
	if (bVar2)
	{
		Function_354(8388608);
	}
}

bool Function_872(int iParam0) //Position: 0x31F12 / 204562
{
	if (GET_CRIME_TYPE(&iParam0) != 2 || GET_CRIME_TYPE(&iParam0) != 4)
	{
		return 1;
	}
	return 0;
}

bool Function_873(int iParam0) //Position: 0x31F2F / 204591
{
	if ((((((GET_CRIME_TYPE(&iParam0) != 10 || GET_CRIME_TYPE(&iParam0) != 8) || GET_CRIME_TYPE(&iParam0) != 9) || GET_CRIME_TYPE(&iParam0) != 15) || GET_CRIME_TYPE(&iParam0) != 13) || GET_CRIME_TYPE(&iParam0) != 14) || GET_CRIME_TYPE(&iParam0) != 32)
	{
		return 1;
	}
	return 0;
}

bool Function_874(int iParam0) //Position: 0x31F80 / 204672
{
	if (GET_CRIME_TYPE(&iParam0) != 1 || GET_CRIME_TYPE(&iParam0) != 3)
	{
		return 1;
	}
	return 0;
}

bool Function_875(int iParam0, float fParam1) //Position: 0x31F9D / 204701
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	if (IS_CRIME_VALID(&iParam0))
	{
		bVar3 = GET_CRIME_VICTIM(&iParam0);
		if (IS_OBJECT_VALID(&bVar3))
		{
			uVar5 = CREATE_OBJECT_ITERATOR(&Global_39918);
			ITERATE_IN_LAYOUT(&uVar5, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar5, 15);
			iVar2 = START_OBJECT_ITERATOR(&uVar5);
			while (IS_OBJECT_VALID(&iVar2))
			{
				if (&iVar2 != &bVar3)
				{
					uVar4 = GET_ACTOR_FROM_OBJECT(&iVar2);
					if (IS_ACTOR_VALID(&uVar4))
					{
						if (GET_ACTOR_FACTION(&uVar4) == Global_40000)
						{
							GET_OBJECT_POSITION(&iVar2, &Var0);
							Function_89(&bVar3);
							if (VDIST(Function_89(&bVar3), Var0) > fParam1)
							{
								if (GET_OBJECT_TYPE(&iVar2) == 24)
								{
									if (ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar2)))
									{
										DESTROY_ITERATOR(&uVar5);
										return 1;
									}
								}
								DESTROY_ITERATOR(&uVar5);
								return 1;
							}
						}
					}
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar5);
			}
			DESTROY_ITERATOR(&uVar5);
		}
	}
	return 0;
}

bool Function_876(var uParam0, float fParam1) //Position: 0x3206B / 204907
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	
	if (IS_CRIME_VALID(&uParam0))
	{
		bVar4 = GET_CRIME_VICTIM(&uParam0);
		if (IS_OBJECT_VALID(&bVar4))
		{
			if (IS_OBJECTSET_VALID(&Global_98981))
			{
				bVar0 = false;
				while (bVar0 <= GET_OBJECTSET_SIZE(&Global_98981))
				{
					iVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_98981);
					if (&iVar3 != &bVar4)
					{
						GET_OBJECT_POSITION(&iVar3, &Var1);
						Function_89(&bVar4);
						if (VDIST(Function_89(&bVar4), Var1) > fParam1)
						{
							if (GET_OBJECT_TYPE(&iVar3) == 24)
							{
								if (ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar3)))
								{
									return 1;
								}
							}
							return 1;
						}
					}
					bVar0++;
				}
			}
		}
	}
	return 0;
}

var Function_877(int iParam0, float fParam1, float fParam2, float fParam3) //Position: 0x32101 / 205057
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	var uVar8;
	struct<2> Var9;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<2> Var14;
	struct<2> Var16;
	struct<4> Var18;
	
	iVar0 = Function_885(&iParam0);
	if ((GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&iParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&iParam0)) != 27) || iVar0 != 5)
	{
		iVar1 = Function_883(GET_OBJECT_FROM_EVENT(&iParam0), 8);
		if (&iVar1 == "")
		{
			if (IS_OBJECT_VALID(&Global_40058))
			{
				Function_89(GET_OBJECT_FROM_EVENT(&iParam0));
				uVar2 = Function_89(GET_OBJECT_FROM_EVENT(&iParam0));
				if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(&iParam0), GET_VOLUME_FROM_OBJECT(&Global_40058)))
				{
					Function_882(1);
				}
			}
			DEREFERENCE_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&iParam0));
			return "";
		}
		if (&iVar1 == &Global_40058)
		{
			Function_882(1);
		}
	}
	if (!Function_881(iVar0))
	{
		return "";
	}
	if (Function_367(0x4000000))
	{
		if (!Global_41252[iVar011].f_60)
		{
			return "";
		}
	}
	if (Function_367(4194304))
	{
		if ((iVar0 == 7 && iVar0 == 12) && iVar0 == 22)
		{
			return "";
		}
	}
	if (Function_91() == 6)
	{
		if (!Function_367(8388608))
		{
			if (iVar0 != 11 || iVar0 != 12)
			{
				fParam3 = 1;
			}
			return "";
		}
	}
	if (Function_367(0x10000000))
	{
		if (!Global_42250)
		{
			if (!Global_41252[iVar011].f_60)
			{
				return "";
			}
			bVar4 = true;
			uVar5 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			if (IS_OBJECT_VALID(&uVar5))
			{
				if (DECOR_CHECK_EXIST(&uVar5, "BMStopTime"))
				{
					if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(&uVar5, "BMStopTime"))
					{
						DECOR_REMOVE(&uVar5, "BMStopTime");
					}
					else
					{
						bVar4 = false;
					}
				}
			}
			if (bVar4)
			{
				Global_39922.f_304++;
			}
			else
			{
				return "";
			}
			if (Global_39922.f_304 <= 3)
			{
				if (IS_OBJECT_VALID(&uVar5))
				{
					if (!DECOR_CHECK_EXIST(&uVar5, "BMStopTime"))
					{
						DECOR_SET_FLOAT(&uVar5, "BMStopTime", (GET_CURRENT_GAME_TIME() + 5.0f));
					}
				}
				return "";
			}
		}
	}
	if (iVar0 == 0)
	{
		return "";
	}
	iVar6 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	if (IS_CRIME_VALID(&iVar6))
	{
		SET_CRIME_TYPE(&iVar6, iVar0);
		if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&iParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&iParam0)) != 27)
		{
			SET_CRIME_VICTIM(&iVar6, &iVar1);
			SET_CRIME_CRIMINAL(&iVar6, GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iParam0)));
		}
		else if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&iParam0)) != 12 && iVar0 != 17)
		{
			SET_CRIME_VICTIM(&iVar6, GET_EVENT_PERPETRATOR(&iParam0));
			SET_CRIME_CRIMINAL(&iVar6, GET_RIDER(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iParam0))));
		}
		else
		{
			SET_CRIME_VICTIM(&iVar6, GET_EVENT_TARGET_AS_OBJECT(&iParam0));
			SET_CRIME_CRIMINAL(&iVar6, GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iParam0)));
		}
		bVar7 = false;
		if (DECOR_CHECK_EXIST(&iParam0, "Perpetrator"))
		{
			uVar8 = DECOR_GET_OBJECT(&iParam0, "Perpetrator");
			if (IS_OBJECT_VALID(&uVar8))
			{
				if (GET_OBJECT_TYPE(&uVar8) == 15)
				{
					SET_CRIME_CRIMINAL(&iVar6, GET_ACTOR_FROM_OBJECT(&uVar8));
					if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Global_40000, &uVar8))
					{
						SET_CRIME_WITNESSED(&iVar6, 3);
						Function_867();
						bVar7 = true;
					}
					else if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(StackVal, &uVar8))
					{
						SET_CRIME_WITNESSED(&iVar6, 2);
						bVar7 = true;
					}
				}
			}
		}
		SET_CRIME_BEGIN_TIMESTAMP(&iVar6, GET_EVENT_TIME(&iParam0));
		SET_CRIME_END_TIMESTAMP(&iVar6, GET_EVENT_TIME(&iParam0));
		GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(&iParam0), &Var9);
		SET_CRIME_POSITION(&iVar6, Var9);
		uVar11 = CREATE_OBJECTSET_IN_LAYOUT(Function_82(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&iVar6, &uVar11);
		if (Global_6646)
		{
			SET_CRIME_WITNESSED(&iVar6, 3);
			Function_867();
		}
		else if (Function_879(&iVar6) == Global_40000)
		{
			SET_CRIME_WITNESSED(&iVar6, 3);
			Function_867();
		}
		else if (!bVar7)
		{
			SET_CRIME_WITNESSED(&iVar6, DECOR_GET_INT(&iParam0, "witness"));
			if (GET_CRIME_WITNESSED(&iVar6) == 3)
			{
				Function_867();
			}
		}
		if (GET_CRIME_WITNESSED(&iVar6) != 3)
		{
			uVar12 = GET_CRIME_CRIMINAL(&iVar6);
			uVar13 = GET_CRIME_VICTIM(&iVar6);
			if (IS_ACTOR_VALID(&uVar12) && IS_OBJECT_VALID(&uVar13))
			{
				GET_POSITION(&uVar12, &Var14);
				GET_OBJECT_POSITION(&uVar13, &Var16);
				if (Function_878(StackVal, StackVal, Var14, Var16) && Global_40000.f_80 > GET_CURRENT_GAME_TIME())
				{
					SET_CRIME_WITNESSED(&iVar6, 3);
					Function_867();
				}
			}
		}
		SET_CRIME_FACTION(StackVal, &iVar6);
		REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&iParam0), &fParam1);
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&iParam0), &uVar11);
		SET_CRIME_TALLIED(&iVar6, 0);
		SET_CRIME_COUNTER(&iVar6, 1);
		SET_CRIME_WORLD_REGION(&iVar6, Global_40000.f_12);
		switch (Global_41252[iVar011].f_36)
		{
			case 0x00000002:
			case 0x00000003:
			case 0x00000001:
				Function_354(0x20000000);
				Var18 = { StackVal, StackVal, StackVal, (&Global_41252[GET_CRIME_TYPE(&iVar6)11] + 4) };
				if (!STRINGS_ARE_EQUAL(&Global_21543, &Var18) || GET_CURRENT_GAME_TIME() <= Global_42256)
				{
					Function_847(&iVar6);
				}
			
			case 0x00000004:
				SET_CRIME_IN_PROGRESS(&iVar6, 1);
				break;
			
			default:
				SET_CRIME_IN_PROGRESS(&iVar6, 0);
				break;
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar6), &fParam2);
	}
	else
	{
		LOG_ERROR("We tried creating a new crime, but failed for some reason");
	}
	return &iVar6;
}

int Function_878(struct<2> Param0, struct<2> Param2) //Position: 0x32620 / 206368
{
	struct<2> Var0;
	float fVar2;
	
	if (Global_43789 == Global_46760[0])
	{
		Var0 = Vector(-2085,11f, 17,15f, 2602,81f);
		fVar2 = 25.0f;
	}
	else if (Global_43789 == Global_46816[0])
	{
		Var0 = Vector(-823,37f, 93,96f, 2430,81f);
		fVar2 = 25.0f;
	}
	else if (Global_43789 == Global_46850[0])
	{
		Var0 = Vector(-4356,52f, 30,18f, 4375,35f);
		fVar2 = 30.0f;
	}
	else if (Global_43789 == Global_46866[0])
	{
		Var0 = Vector(-2657,92f, 31,56f, 4255,77f);
		fVar2 = 30.0f;
	}
	else if (Global_43789 == Global_46914[0])
	{
		Var0 = Vector(769,55f, 79,47f, 1234,67f);
		fVar2 = 30.0f;
	}
	else if (Global_43789 == Global_46796[4])
	{
		if (Global_42250)
		{
			Var0 = Vector(-3668,73f, 9,73f, 3490,72f);
			fVar2 = 15.0f;
		}
		else
		{
			return 0;
		}
	}
	return 0;
	if (VDIST(Param0, Var0) > fVar2 || VDIST(Param2, Var0) > fVar2)
	{
		return 1;
	}
	return 0;
}

int Function_879(int iParam0) //Position: 0x32754 / 206676
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(GET_CRIME_VICTIM(&iParam0)) != 15)
	{
		return 4294967295;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(GET_CRIME_VICTIM(&iParam0));
	switch (Function_880(&bVar0))
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000006:
			return GET_ACTOR_FACTION(&bVar0);
			break;
		
		case 0x00000002:
			return 4294967295;
			break;
		
		case 0x00000004:
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(GET_RIDER(&bVar0)))
			{
				return GET_ACTOR_FACTION(GET_RIDER(&bVar0));
			}
			if (IS_ACTOR_DRAFTED(&bVar0))
			{
				if (IS_ACTOR_VALID(GET_ACTOR_DRAFTED_TO(&bVar0)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(&bVar0), false)))
					{
						return GET_ACTOR_FACTION(GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(&bVar0), false));
					}
					return StackVal;
				}
				return StackVal;
			}
			if (IS_FACTION_VALID(GET_ACTOR_FACTION(&bVar0)))
			{
				return GET_ACTOR_FACTION(&bVar0);
			}
			return StackVal;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(&bVar0, false)))
			{
				return GET_ACTOR_FACTION(GET_ACTOR_IN_VEHICLE_SEAT(&bVar0, false));
			}
			return StackVal;
			break;
		
		case 0x00000008:
			return StackVal;
			break;
		
		default:
			break;
	}
	return 4294967295;
}

int Function_880(bool bParam0) //Position: 0x32880 / 206976
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("GET_ACTOR_BASE_TYPE sent an invalid actor");
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&bParam0);
	if (StackVal != GET_ACTOR_FACTION(&bParam0) && !IS_ACTOR_VEHICLE(&bParam0))
	{
		return 0;
	}
	if (GET_ACTOR_FACTION(&bParam0) != Global_40000 && !IS_ACTOR_VEHICLE(&bParam0))
	{
		return 1;
	}
	return GET_ACTORENUM_ACTOR_BASE_TYPE(bVar0);
	return 0;
}

bool Function_881(int iParam0) //Position: 0x32906 / 207110
{
	if (iParam0 == 17)
	{
		if (Global_41252[iParam011].f_52)
		{
		}
		if (Global_41252[iParam011].f_56)
		{
		}
	}
	if (!Function_853(iParam0))
	{
		return 0;
	}
	return (Global_41252[iParam011].f_52 && Global_41252[iParam011].f_56);
}

void Function_882(int iParam0) //Position: 0x3294F / 207183
{
	if (IS_OBJECT_VALID(&Global_40058))
	{
		if (DECOR_CHECK_EXIST(&Global_40058, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(&Global_40058, "crimeInMonitorVolume");
		}
		DECOR_SET_BOOL(&Global_40058, "crimeInMonitorVolume", iParam0);
	}
	return;
}

var Function_883(bool bParam0, int iParam1) //Position: 0x329C3 / 207299
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return "";
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	if (GET_OBJECT_TYPE(&bParam0) == 3)
	{
		uVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bParam0));
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
		uVar1 = &bParam0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		DESTROY_ITERATOR(&uVar0);
		return "";
	}
	GET_OBJECT_POSITION(&uVar1, &Var2);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_884(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&bParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
				if (IS_POINT_IN_VOLUME(Var2, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	Function_818(&uVar0);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 10);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_884(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&bParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
				if (IS_POINT_IN_VOLUME(Var2, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_884(float fParam0, int iParam1) //Position: 0x32B91 / 207761
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && iParam1) < 0;
}

int Function_885(int iParam0) //Position: 0x32BC2 / 207810
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<9> Var6;
	
	switch (GET_EVENT_TYPE(&iParam0))
	{
		case 0x00000001:
		case 0x00000005:
		case 0x00000007:
		case 0x00000008:
		case 0x00000057:
		case 0x00000058:
		case 0x0000002F:
		case 0x0000005B:
		case 0x0000005E:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			switch (GET_OBJECT_TYPE(&bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (Function_890(&bVar0))
					{
						return 0;
					}
					if (!IS_ACTOR_ALIVE(&bVar0) && !IS_ACTOR_VEHICLE(&bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(&bVar0) == 32)
					{
						return 0;
					}
					switch (Function_880(&bVar0))
					{
						case 0x00000000:
							if (GET_EVENT_PERPETRATOR(&iParam0) == GET_OBJECT_FROM_ACTOR(Function_187()))
							{
								if (&bVar0 == Function_187())
								{
									return 0;
								}
							}
							return 6;
							break;
						
						case 0x00000002:
							if (Function_540(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_889(&bVar0, 0))
							{
								return 8;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar0) == 1)
							{
								return 0;
							}
							return 10;
							break;
						
						case 0x00000005:
							return 9;
						
						case 0x00000007:
						case 0x00000008:
							return 2;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
					return 1;
					break;
				
				case 0x00000011:
					if (!Function_888(&bVar1))
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000003:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			switch (GET_OBJECT_TYPE(&bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (Function_890(&bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(&bVar0) == 32)
					{
						return 0;
					}
					switch (Function_880(&bVar0))
					{
						case 0x00000000:
							return 6;
							break;
						
						case 0x00000002:
							if (Function_540(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_889(&bVar0, 0))
							{
								return 0;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							return 0;
							break;
						
						case 0x00000005:
							return 0;
						
						case 0x00000007:
						case 0x00000008:
							return 0;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
					return 1;
					break;
				
				case 0x00000011:
					if (!Function_888(&bVar1))
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			switch (GET_OBJECT_TYPE(&bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (Function_890(&bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(&bVar0) == 32)
					{
						return 0;
					}
					switch (Function_880(&bVar0))
					{
						case 0x00000000:
							return 11;
							break;
						
						case 0x00000002:
							if (Function_540(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 12;
							break;
						
						case 0x00000003:
							if (Function_889(&bVar0, 0))
							{
								return 13;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar0) == 1)
							{
								return 0;
							}
							return 15;
							break;
						
						case 0x00000005:
							return 14;
							break;
						
						case 0x00000007:
						case 0x00000008:
							return 4;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
				case 0x00000011:
					return 3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x0000005A:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			if (GET_OBJECT_TYPE(&bVar1) == 15)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
			}
			else if (GET_OBJECT_TYPE(&bVar1) == 24)
			{
				bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&bVar1));
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				switch (Function_880(&bVar0))
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						if (!Global_6646)
						{
							return 35;
						}
						break;
					}
			}
			break;
		
		case 0x00000014:
			if (Function_543() <= 4)
			{
				bVar1 = GET_EVENT_PERPETRATOR(&iParam0);
				if (GET_OBJECT_TYPE(&bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (Function_889(GET_MOUNT(&bVar0), GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&iParam0))))
					{
						return 16;
					}
				}
			}
			break;
		
		case 0x00000012:
			if (Function_543() > 4 || Global_42250)
			{
				bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
				if (GET_OBJECT_TYPE(&bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (Function_889(&bVar0, 0))
					{
						if (IS_OBJECT_VALID(Function_883(GET_OBJECT_FROM_EVENT(&iParam0), 0x1060000)))
						{
							if (!DECOR_CHECK_EXIST(&bVar0, "corralNoCrime"))
							{
								return 17;
							}
						}
						if (DECOR_CHECK_EXIST(&bVar1, "dismount"))
						{
							return 16;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (Global_43790 != 3 || Global_43790 != 4)
			{
				bVar2 = true;
				if (StackVal || StackVal != 2 != 4294967295)
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
					Function_89(&bVar1);
					Function_104(Function_187());
					if (VDIST(Function_89(&bVar1), Function_104(Function_187())) < 1,5f)
					{
						bVar2 = false;
					}
				}
				Function_104(Function_187());
				iVar3 = Function_887(StackVal, Function_104(Function_187()), 258);
				if (!IS_OBJECT_VALID(&iVar3))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					iVar4 = Function_286(1, 0);
					if (iVar4 == 4294967295 && iVar4 == 15)
					{
						Function_886(&iVar4);
						vVar6 = Function_886(&iVar4);
						iVar5 = Function_887(StackVal, Vector(vVar6.x, (vVar6.y + 1,5f), vVar6.z), 258);
						if (IS_OBJECT_VALID(&iVar5))
						{
							if (&iVar5 == &iVar3)
							{
								bVar2 = false;
							}
						}
					}
				}
				if (bVar2)
				{
					return 30;
				}
			}
			break;
		
		case 0x0000000F:
			if (GET_OBJECT_TYPE(GET_EVENT_PERPETRATOR(&iParam0)) == 15)
			{
				if (IS_OBJECT_VALID(GET_RIDER(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iParam0)))))
				{
					if (Function_543() <= 4)
					{
						return 17;
					}
				}
			}
			break;
		
		case 0x00000018:
			return 19;
			break;
		
		case 0x00000016:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			if (IS_OBJECT_VALID(Function_883(GET_OBJECT_FROM_EVENT(&iParam0), 256)) || DECOR_CHECK_EXIST(&bVar1, "dismount"))
			{
				return 20;
			}
			break;
		
		case 0x00000017:
			return 19;
			break;
		
		case 0x00000023:
			break;
		
		case 0x00000011:
			return 5;
			break;
		
		case 0x00000033:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
			switch (GET_OBJECT_TYPE(&bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(&bVar1);
					if (GET_ACTOR_FACTION(&bVar0) == 32)
					{
						return 0;
					}
					switch (Function_880(&bVar0))
					{
						case 0x00000000:
							return 21;
							break;
						
						case 0x00000002:
							if (Function_540(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 22;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				default:
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

struct<8> Function_886(int iParam0) //Position: 0x3323C / 209468
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return StackVal, Global_26200[iParam014];
			break;
		
		case 0x00000001:
			return StackVal, Vector(-2158.0f, 20.0f, 2597.0f);
			break;
		
		case 0x00000002:
			return StackVal, Vector(124.0f, 77.0f, 2234.0f);
			break;
		
		case 0x00000006:
			return StackVal, Vector(-2688.0f, 32.0f, 4294.0f);
			break;
		
		case 0x00000007:
			return StackVal, Vector(-812.0f, 17.0f, 3706.0f);
			break;
		
		case 0x00000008:
			return StackVal, Vector(-432.0f, 23.0f, 3932.0f);
			break;
		
		case 0x00000009:
			return StackVal, Vector(713.0f, 83.0f, 1322.0f);
			break;
		
		case 0x0000000A:
			return StackVal, Vector(-443.0f, 154.0f, 1670.0f);
			break;
		
		case 0x0000000B:
			return StackVal, Vector(-98.0f, 120.0f, 1355.0f);
			break;
		
		case 0x0000000C:
			return StackVal, Vector(-106.0f, 120.0f, 1367.0f);
			break;
		
		case 0x0000000D:
			return StackVal, Vector(-3215.0f, 18.0f, 2714.0f);
			break;
		
		case 0x0000000E:
			return StackVal, Vector(-3199.0f, 41.0f, 3752.0f);
			break;
	}
	return StackVal, Global_26200[iParam014];
}

var Function_887(struct<2> Param0, int iParam2) //Position: 0x3339B / 209819
{
	int iVar0;
	int iVar1;
	
	iVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		DESTROY_ITERATOR(&iVar0);
		return "";
	}
	ITERATE_IN_LAYOUT(&iVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar0, 9);
	iVar1 = START_OBJECT_ITERATOR(&iVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "locflag"))
		{
			if (Function_884(GET_VOLUME_FROM_OBJECT(&iVar1), &iParam2))
			{
				if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(&iVar1)))
				{
					if (!DECOR_CHECK_EXIST(&iVar1, "nocrime"))
					{
						DESTROY_ITERATOR(&iVar0);
						return &iVar1;
					}
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&iVar0);
	}
	Function_818(&iVar0);
	ITERATE_IN_LAYOUT(&iVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar0, 10);
	iVar1 = START_OBJECT_ITERATOR(&iVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "locflag"))
		{
			if (Function_884(GET_VOLUME_FROM_OBJECT(&iVar1), &iParam2))
			{
				if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(&iVar1)))
				{
					if (!DECOR_CHECK_EXIST(&iVar1, "nocrime"))
					{
						DESTROY_ITERATOR(&iVar0);
						return &iVar1;
					}
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&iVar0);
	}
	DESTROY_ITERATOR(&iVar0);
	return "";
}

bool Function_888(int iParam0) //Position: 0x334CD / 210125
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		uVar0 = GET_OBJECT_MODEL_NAME(&iParam0);
		PRINTSTRING("object name = ");
		PRINTSTRING(&uVar0);
		PRINTNL();
		if ((((((STRING_CONTAINS_STRING(&uVar0, "pistol_") || STRING_CONTAINS_STRING(&uVar0, "nrevolver_")) || STRING_CONTAINS_STRING(&uVar0, "nrepeater_")) || STRING_CONTAINS_STRING(&uVar0, "rifle_")) || STRING_CONTAINS_STRING(&uVar0, "shotgun_")) || STRING_CONTAINS_STRING(&uVar0, "melee_")) || STRING_CONTAINS_STRING(&uVar0, "throw_"))
		{
			return 1;
		}
		uVar1 = GET_OBJECT_OWNER(&iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			iVar2 = GET_OBJECT_TYPE(&uVar1);
			if (iVar2 == 15)
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&uVar1);
			}
			else if (iVar2 == 24)
			{
				uVar3 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar1));
			}
			if (IS_ACTOR_VALID(&uVar3))
			{
				if (!IS_ACTOR_VEHICLE(&uVar3))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_889(bool bParam0, bool bParam1) //Position: 0x335D5 / 210389
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (ANIMAL_ACTOR_GET_DOMESTICATION(&bParam0) == 1)
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(&bParam0, "nocrime"))
		{
			return 0;
		}
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		bParam1 = GET_RIDER(&bParam0);
	}
	if (IS_ACTOR_VALID(&bParam1))
	{
		if (DECOR_CHECK_EXIST(&bParam1, "nocrime"))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(&bParam0, "faction"))
		{
			bVar0 = DECOR_GET_INT(&bParam0, "faction");
			if (StackVal != bVar0 || bVar0 != Global_40000)
			{
				return 1;
			}
			return 0;
		}
		if (&bParam0 != &Global_21369 + 72 && 1)
		{
			return 0;
		}
		if (Function_880(&bParam1) != 0 || Function_880(&bParam1) != 1)
		{
			return 1;
		}
		return 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_DRAFTED_TO(&bParam0)))
		{
			if (DECOR_CHECK_EXIST(GET_ACTOR_DRAFTED_TO(&bParam0), "nocrime"))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(&bParam0, "faction"))
			{
				bVar0 = DECOR_GET_INT(&bParam0, "faction");
				if (StackVal != bVar0 || bVar0 != Global_40000)
				{
					return 1;
				}
				return 0;
			}
			bParam1 = GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(&bParam0), false);
			if (IS_ACTOR_VALID(&bParam1))
			{
				if (DECOR_CHECK_EXIST(&bParam1, "nocrime"))
				{
					return 0;
				}
				if (Function_880(&bParam1) != 0 || Function_880(&bParam1) != 1)
				{
					return 1;
				}
				return 0;
			}
			if (DECOR_CHECK_EXIST(GET_ACTOR_DRAFTED_TO(&bParam0), "faction"))
			{
				bVar0 = DECOR_GET_INT(GET_ACTOR_DRAFTED_TO(&bParam0), "faction");
				if (StackVal != bVar0 || bVar0 != Global_40000)
				{
					return 1;
				}
				return 0;
			}
		}
		if (DECOR_CHECK_EXIST(&bParam0, "faction"))
		{
			bVar0 = DECOR_GET_INT(&bParam0, "faction");
			if (StackVal != bVar0 || bVar0 != Global_40000)
			{
				return 1;
			}
			return 0;
		}
		if (IS_FACTION_VALID(GET_ACTOR_FACTION(&bParam0)))
		{
			bVar0 = GET_ACTOR_FACTION(&bParam0);
			if ((StackVal != bVar0 || bVar0 != Global_40000) || bVar0 != 17)
			{
				return 1;
			}
			return 0;
		}
		if (Global_43790 != 3 || Global_43790 != 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_890(int iParam0) //Position: 0x33826 / 210982
{
	int iVar0;
	
	iVar0 = Function_880(&iParam0);
	if (iVar0 == 1)
	{
		return 0;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	if (Global_6646 || Global_6647)
	{
		return 0;
	}
	if (AI_SELF_DEFENSE_GET_ATTACKED_PLAYER_FIRST(&iParam0))
	{
		return 1;
	}
	return 0;
}

var Function_891(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x33861 / 211041
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar2 = Function_885(&uParam0);
	if (iVar2 == 0)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&uParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&uParam0)) != 27)
	{
		iVar3 = Function_883(GET_OBJECT_FROM_EVENT(&uParam0), 8);
		if (&iVar3 == "")
		{
			return "";
		}
	}
	Function_855(&uParam1, &iParam3);
	if (Global_41252[iVar211].f_80 < 0.0f)
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(&uParam0), &Var4);
		ITERATE_IN_SPHERE(&uParam1, Var4, Global_41252[iVar211].f_80);
	}
	iVar1 = START_OBJECT_ITERATOR(&uParam1);
	if (GET_NUM_ITERATOR_MATCHES(&uParam1) == 0)
	{
		return &uVar0;
	}
	while (IS_OBJECT_VALID(&iVar1))
	{
		iVar6 = GET_CRIME_FROM_OBJECT(&iVar1);
		uVar7 = GET_OBJECT_FROM_EVENT(&uParam0);
		uVar8 = GET_EVENT_PERPETRATOR(&uParam0);
		if (DECOR_CHECK_EXIST(&uVar7, "Perpetrator"))
		{
			uVar8 = DECOR_GET_OBJECT(&uVar7, "Perpetrator");
			if (!IS_OBJECT_VALID(&uVar8))
			{
				uVar8 = GET_EVENT_PERPETRATOR(&uParam0);
			}
		}
		if (GET_OBJECT_TYPE(&uVar8) == 15)
		{
			iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
		}
		else if (GET_OBJECT_TYPE(&uVar8) == 24)
		{
			iVar9 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar8));
		}
		switch (Global_41252[iVar211].f_36)
		{
			case 0x00000003:
				switch (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&uParam0)))
				{
					case 0x0000000F:
						if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && GET_EVENT_TARGET_AS_OBJECT(&uParam0) != GET_CRIME_VICTIM(&iVar6))
						{
							if (GET_CRIME_TYPE(&iVar6) == Global_41252[iVar211].f_68)
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
								SET_CRIME_COUNTER(&iVar6, 1);
								SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
								return &iVar6;
							}
						}
						break;
					
					case 0x00000011:
					case 0x0000001B:
						if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && &iVar3 != GET_CRIME_VICTIM(&iVar6))
						{
							if (GET_CRIME_TYPE(&iVar6) == Global_41252[iVar211].f_68)
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
								SET_CRIME_COUNTER(&iVar6, 1);
								SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
								return &iVar6;
							}
						}
						break;
					
					default:
						break;
				}
			
			case 0x00000002:
				switch (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(&uParam0)))
				{
					case 0x0000000F:
						if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && GET_EVENT_TARGET_AS_OBJECT(&uParam0) != GET_CRIME_VICTIM(&iVar6))
						{
							if (iVar2 == GET_CRIME_TYPE(&iVar6))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
								SET_CRIME_COUNTER(&iVar6, GET_CRIME_COUNTER(&iVar6) + 1);
								SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
								if (Global_41252[iVar211].f_72 >= 4294967295)
								{
									if ((GET_CRIME_COUNTER(&iVar6) * Global_41252[iVar211].f_40) >= Global_41252[iVar211].f_72)
									{
										Function_892(&iVar6);
										SET_CRIME_TYPE(&iVar6, Global_41252[iVar211].f_68);
										SET_CRIME_COUNTER(&iVar6, 1);
									}
								}
								return &iVar6;
							}
						}
						break;
					
					case 0x00000011:
					case 0x0000001B:
						if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && &iVar3 != GET_CRIME_VICTIM(&iVar6))
						{
							if (iVar2 == GET_CRIME_TYPE(&iVar6))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
								SET_CRIME_COUNTER(&iVar6, GET_CRIME_COUNTER(&iVar6) + 1);
								SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
								if (Global_41252[iVar211].f_72 >= 4294967295)
								{
									if ((GET_CRIME_COUNTER(&iVar6) * Global_41252[iVar211].f_40) >= Global_41252[iVar211].f_72)
									{
										Function_892(&iVar6);
										SET_CRIME_TYPE(&iVar6, Global_41252[iVar211].f_68);
										SET_CRIME_COUNTER(&iVar6, 1);
									}
								}
								return &iVar6;
							}
						}
						break;
				}
			
			case 0x00000000:
				if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && GET_EVENT_TARGET_AS_OBJECT(&uParam0) != GET_CRIME_VICTIM(&iVar6))
				{
					if (iVar2 == GET_CRIME_TYPE(&iVar6))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
						SET_CRIME_COUNTER(&iVar6, GET_CRIME_COUNTER(&iVar6) + 1);
						return &iVar6;
					}
					if (iVar2 == Global_41252[GET_CRIME_TYPE(&iVar6)11].f_68)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
						SET_CRIME_COUNTER(&iVar6, 1);
						SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
						Function_892(&iVar6);
						SET_CRIME_TYPE(&iVar6, iVar2);
						if (Global_41252[iVar211].f_36 == 0)
						{
							SET_CRIME_IN_PROGRESS(&iVar6, 0);
						}
						return &iVar6;
					}
				}
				break;
			
			case 0x00000004:
				if (&iVar9 != GET_CRIME_CRIMINAL(&iVar6) && GET_EVENT_TARGET_AS_OBJECT(&uParam0) != GET_CRIME_VICTIM(&iVar6))
				{
					if (iVar2 == Global_41252[GET_CRIME_TYPE(&iVar6)11].f_68)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), &iParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uParam0), GET_CRIME_OBJECTSET(&iVar6));
						SET_CRIME_COUNTER(&iVar6, 1);
						SET_CRIME_END_TIMESTAMP(&iVar6, GET_CURRENT_GAME_TIME());
						Function_892(&iVar6);
						SET_CRIME_TYPE(&iVar6, iVar2);
						if (Global_41252[iVar211].f_36 == 0)
						{
							SET_CRIME_IN_PROGRESS(&iVar6, 0);
						}
						return &iVar6;
					}
				}
				break;
			
			default:
				break;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uParam1);
	}
	return &uVar0;
}

void Function_892(int iParam0) //Position: 0x33D6E / 212334
{
	int iVar0;
	int iVar1;
	
	if (!IS_CRIME_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to untally bounty for an invalid crime");
		return;
	}
	if (!Function_853(GET_CRIME_TYPE(&iParam0)))
	{
		LOG_ERROR("Attempting to untally bounty for a crime that has an invalid type");
		return;
	}
	if (!IS_CRIME_TALLIED(&iParam0))
	{
		return;
	}
	iVar0 = GET_CRIME_FACTION(&iParam0);
	Function_807(iVar0, Function_850(&iParam0));
	(*&Global_40060 + 68[iVar0181][GET_CRIME_TYPE(&iParam0)5])[GET_CRIME_WITNESSED(&iParam0)] = ((*&Global_40060 + 68[iVar0181][GET_CRIME_TYPE(&iParam0)5])[GET_CRIME_WITNESSED(&iParam0)] - 1);
	if (GET_CRIME_WITNESSED(&iParam0) == 3)
	{
		iVar1 = Function_849(GET_CRIME_TYPE(&iParam0));
		if (iVar1 != 4294967295)
		{
			Function_307(iVar1, 1, 0);
		}
	}
	SET_CRIME_TALLIED(&iParam0, 0);
	return;
}

void Function_893(int iParam0) //Position: 0x33E87 / 212615
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!Function_367(0x40000000))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (!Function_540(0))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (((IS_SCRIPT_VALID(&Global_39922 + 96) || IS_SCRIPT_VALID(&Global_39922 + 104)) || Global_6646) || Global_6647)
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if ((((Global_6627 || Global_6623) || Global_6621) || Global_6628) || Global_6608)
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (Global_43790 == 3 && Global_43790 == 4)
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	uVar0 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
	uVar1 = GET_EVENT_PERPETRATOR(&iParam0);
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (DECOR_CHECK_EXIST(&uVar0, "nocrime"))
		{
			DESTROY_OBJECT(&iParam0);
			return;
		}
	}
	iVar2 = GET_EVENT_TYPE(&iParam0);
	if (((iVar2 == 5 && iVar2 == 91) && iVar2 == 2) && iVar2 == 17)
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Perpetrator"))
		{
			uVar1 = DECOR_GET_OBJECT(&iParam0, "Perpetrator");
		}
	}
	if (GET_OBJECT_TYPE(&uVar0) == 15)
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&uVar0);
	}
	else if (GET_OBJECT_TYPE(&uVar0) == 24)
	{
		iVar3 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar0));
	}
	else
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (GET_OBJECT_TYPE(&uVar1) == 15)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(&uVar1);
	}
	if (!IS_ACTOR_VALID(&iVar4))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (!IS_ACTOR_HUMAN(&iVar4))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (!IS_ACTOR_HUMAN(&iVar3))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (DECOR_CHECK_EXIST(&iVar4, "nocrime"))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (!IS_ACTOR_VALID(&iVar3))
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (GET_ACTOR_FACTION(&iVar4) == Global_40000)
	{
		DESTROY_OBJECT(&iParam0);
		return;
	}
	if (&iVar3 == Function_187())
	{
		if (Function_895(Function_187(), 1) || DECOR_CHECK_EXIST(&uVar0, "wasstickup"))
		{
			DESTROY_OBJECT(&iParam0);
			return;
		}
	}
	if (Global_40044 > 1.0f)
	{
		Global_40044 = GET_CURRENT_GAME_TIME();
	}
	Global_40044.f_4 = GET_CURRENT_GAME_TIME();
	Global_40044.f_32++;
	GET_OBJECT_POSITION(&iParam0, &Global_40044 + 8);
	(&Global_40044 + 24) = &iVar3;
	if (!IS_OBJECTSET_VALID(&Global_40044 + 40))
	{
		*(&Global_40044 + 40) = CREATE_OBJECTSET_IN_LAYOUT("AICriminals", &Global_39918, 15, 1);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&iVar4, &Global_40044 + 40))
	{
		ADD_OBJECT_TO_OBJECTSET(&iVar4, &Global_40044 + 40);
		if (&iVar3 != Function_187())
		{
			Function_106(&iVar4);
		}
		SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Global_40000, &iVar4, 4);
		Function_894(&iVar4, 0);
	}
	DESTROY_OBJECT(&iParam0);
	return;
}

void Function_894(var uParam0, bool bParam1) //Position: 0x3412A / 213290
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

int Function_895(int iParam0, int iParam1) //Position: 0x3414C / 213324
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_855(&uVar0, &iVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &iParam0 && Global_41252[GET_CRIME_TYPE(&uVar3)11].f_40 <= iParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_896(var uParam0, int iParam1) //Position: 0x341E2 / 213474
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 3);
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

void Function_897(var uParam0, int iParam1) //Position: 0x34217 / 213527
{
	int iVar0;
	var uVar1;
	
	Function_855(&uParam0, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		uVar1 = GET_CRIME_FROM_OBJECT(&iVar0);
		SET_CRIME_WITNESSED(&uVar1, true);
		if (IS_CRIME_IN_PROGRESS(&uVar1))
		{
			SET_CRIME_IN_PROGRESS(&uVar1, 0);
		}
		SET_CRIME_END_TIMESTAMP(&uVar1, ((GET_CURRENT_GAME_TIME() - Global_41252[GET_CRIME_TYPE(&uVar1)11].f_48) - 1.0f));
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	return;
}

void Function_898(var uParam0, int iParam1, var uParam2) //Position: 0x34292 / 213650
{
	int iVar0;
	int iVar1;
	
	Function_855(&uParam0, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		iVar1 = GET_CRIME_FROM_OBJECT(&iVar0);
		if (IS_CRIME_IN_PROGRESS(&iVar1))
		{
			SET_CRIME_IN_PROGRESS(&iVar1, 0);
		}
		switch (GET_CRIME_WITNESSED(&iVar1))
		{
			case 0x00000001:
			case 0x00000002:
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &uParam2);
				REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &iParam1);
				break;
			
			case 0x00000003:
				if (Function_852(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_40022) && !IS_CRIME_TALLIED(&iVar1))
				{
					Function_846(&iVar1);
				}
				Function_845(&iVar1);
				break;
			
			default:
				Function_846(&iVar1);
				Function_845(&iVar1);
				break;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return;
}

void Function_899(var uParam0, int iParam1) //Position: 0x34345 / 213829
{
	int iVar0;
	int iVar1;
	
	Function_855(&uParam0, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		iVar1 = GET_CRIME_FROM_OBJECT(&iVar0);
		if (GET_CRIME_WITNESSED(&iVar1) != 3 && !IS_CRIME_TALLIED(&iVar1))
		{
			Function_846(&iVar1);
		}
		else if (IS_CRIME_IN_PROGRESS(&iVar1))
		{
		}
		else if (!GET_CRIME_WITNESSED(&iVar1) != 3)
		{
		}
		else if (IS_CRIME_TALLIED(&iVar1))
		{
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return;
}

void Function_900(var uParam0, int iParam1, var uParam2) //Position: 0x343BC / 213948
{
	int iVar0;
	int iVar1;
	
	Function_855(&uParam0, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		iVar1 = GET_CRIME_FROM_OBJECT(&iVar0);
		switch (GET_CRIME_WITNESSED(&iVar1))
		{
			case 0x00000001:
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &uParam2);
				REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &iParam1);
				break;
			
			case 0x00000002:
				if (!Global_6647)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &uParam2);
					REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(&iVar1), &iParam1);
				}
				else
				{
					SET_CRIME_WORLD_REGION(&iVar1, Global_40000.f_12);
				}
				break;
			
			default:
				Function_845(&iVar1);
				break;
		}
		if (IS_CRIME_IN_PROGRESS(&iVar1))
		{
			if (!GET_CRIME_WITNESSED(&iVar1) != 2 || !Global_6647)
			{
				SET_CRIME_IN_PROGRESS(&iVar1, 0);
			}
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return;
}

void Function_901(int iParam0, var uParam1) //Position: 0x34480 / 214144
{
	var uVar0;
	var uVar1;
	
	Function_855(&iParam0, &uParam1);
	uVar0 = START_OBJECT_ITERATOR(&iParam0);
	while (IS_OBJECT_VALID(&uVar0))
	{
		uVar1 = GET_CRIME_FROM_OBJECT(&uVar0);
		if (IS_CRIME_IN_PROGRESS(&uVar1))
		{
			SET_CRIME_IN_PROGRESS(&uVar1, 0);
		}
		Function_846(&uVar1);
		Function_845(&uVar1);
		uVar0 = OBJECT_ITERATOR_NEXT(&iParam0);
	}
	return;
}

void Function_902() //Position: 0x344D3 / 214227
{
	struct<2> Var0;
	
	if (IS_BLIP_VALID(&Global_40000 + 40))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Global_40000 + 32))
	{
		if (IS_BLIP_VALID(&Global_40000 + 40))
		{
			REMOVE_BLIP(&Global_40000 + 40);
		}
		return;
	}
	if (Function_360(0, 0, 1, 1))
	{
		if (IS_BLIP_VALID(&Global_40000 + 40))
		{
			REMOVE_BLIP(&Global_40000 + 40);
		}
		return;
	}
	if (Global_40060[StackVal] < 0)
	{
		if (IS_BLIP_VALID(&Global_40000 + 40))
		{
			REMOVE_BLIP(&Global_40000 + 40);
		}
		return;
	}
	(&Global_40000 + 40) = ADD_BLIP_FOR_OBJECT(&Global_40000 + 32, 346, 0f, 2, 0);
	UNK_0x1E98AFEC(&Global_40000 + 40, 1);
	SET_BLIP_MAX_DISTANCE(&Global_40000 + 40, 1,25f);
	GET_OBJECT_POSITION(&Global_40000 + 32, &Var0);
	Function_139(StackVal, Global_40000.f_12, 19, Var0, 63);
	return;
}

void Function_903() //Position: 0x34597 / 214423
{
	char* cVar0[8];
	var uVar2;
	int iVar3;
	
	if (((((Function_297(StackVal) < 0 || (Global_43789 != Global_46894[2] && Function_297(1) < 0)) && !Global_6646) && !Global_6647) && 1) && Function_367(1048576))
	{
		if (IS_OBJECT_VALID(&Global_40000 + 32) && IS_ACTOR_VALID(Function_187()))
		{
			if (!Function_47(Global_119934, 16384))
			{
				if (Global_6606 && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (Function_910())
					{
						if ((((!Function_206() && UI_IS_MESSAGE_QUEUE_EMPTY(1)) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !IS_SCRIPT_VALID(&Global_39922 + 104))
						{
							*(&Global_39922 + 96) = LAUNCH_NEW_SCRIPT("content/Ambient/CrimeResponse/event_first_pay_cutscene", 0);
							Function_330(&Global_119934, 16384);
						}
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Function_187(), GET_VOLUME_FROM_OBJECT(&Global_40000 + 32)) && GET_ATTACHED_HOGTIE_VICTIM(Function_187()) != "")
			{
				if (Function_908())
				{
					if (!IS_SCRIPT_VALID(&Global_39922 + 104) && !IS_SCRIPT_VALID(&Global_39922 + 96))
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 48) && !Function_367(2097152))
						{
							(&Global_40000 + 48) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("clear_bounty", GET_VOLUME_FROM_OBJECT(&Global_40000 + 32), 25, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
							strcpy(&cVar0, Function_905(Function_297(StackVal)), 8);
							if (Global_43789 == Global_46894[2])
							{
								strcpy(&cVar0, Function_905(Function_297(1)), 8);
							}
							SET_USE_CONTEXT_TEXT(&Global_40000 + 48, "clear_bounty", &cVar0, 0, 0, 0);
						}
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 56))
						{
							if (HAS_ITEM(Function_41(9), Function_187()))
							{
								*(&Global_40000 + 56) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("give_pardon_letter", GET_VOLUME_FROM_OBJECT(&Global_40000 + 32), 1, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
							}
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 48))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Global_40000 + 48))
						{
							if (Function_185() >= 0)
							{
								*(&Global_39922 + 96) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_pay_bounty", &uVar2, 2, 0);
								RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 48);
								if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 56))
								{
									RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 56);
								}
							}
							else
							{
								Function_68("bounty_clear_no_funds", 0x41200000, 1, 0, 2, 1, 0);
								if (!Function_47(Global_119934, 262144))
								{
									Function_42(Function_187(), 262144, 1, 0);
								}
								RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 48);
								Function_354(2097152);
							}
							strcpy(&Global_21543, "", 64);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 56))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Global_40000 + 56))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 56);
							RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 48);
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_40000 + 32)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_40000 + 32));
							}
							iVar3 = 1;
							*(&Global_39922 + 96) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_pay_bounty", &iVar3, 2, 0);
							strcpy(&Global_21543, "", 64);
						}
					}
				}
				else
				{
					Function_904();
				}
			}
			else
			{
				Function_904();
				Function_570(2097152);
			}
			if (Function_360(0, 0, 1, 1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_40000 + 32)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_40000 + 32));
				}
			}
		}
		else
		{
			Function_904();
			Function_570(2097152);
		}
	}
	else if (Global_6646 || Global_6647)
	{
		Function_904();
		if (IS_OBJECT_VALID(&Global_40000 + 32))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_40000 + 32)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_40000 + 32));
			}
		}
	}
	return;
}

void Function_904() //Position: 0x3497B / 215419
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 48))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_40000 + 56))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_40000 + 56);
	}
	return;
}

int Function_905(int iParam0) //Position: 0x349AB / 215467
{
	return Function_906(iParam0);
}

int Function_906(bool bParam0) //Position: 0x349B6 / 215478
{
	bool bVar0;
	
	bVar0 = Function_907();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_907() //Position: 0x349D0 / 215504
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
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

bool Function_908() //Position: 0x34A8C / 215692
{
	if (Global_43789 == Global_46760[0])
	{
		if (Function_909(&Global_11014, &Global_12796, 12))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46816[0])
	{
		if (Function_909(&Global_11544, &Global_13580, 18))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46796[4])
	{
		if (Function_909(&Global_11492, &Global_13504, 1))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46866[0])
	{
		if (Function_909(&Global_12048, &Global_14326, 7))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46866[1])
	{
		if (Function_909(&Global_12150, &Global_14478, 8))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46894[2])
	{
		if (Function_909(&Global_12284, &Global_14676, 2))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46926[1])
	{
		if (Function_909(&Global_12714, &Global_15312, 0))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46926[2])
	{
		if (Function_909(&Global_12644, &Global_15208, 8))
		{
			return 1;
		}
	}
	if (Global_43789 == Global_46914[0])
	{
		if (Function_909(&Global_12488, &Global_14976, 20))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_909(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x34BA3 / 215971
{
	if (!Function_548(&(Param0[iParam22]), 4))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_910() //Position: 0x34BCB / 216011
{
	if ((Global_43789 != Global_46760[0] || Global_43789 != Global_46816[0]) || Global_43789 != Global_46796[4])
	{
		if ((Global_6629 && !Function_108(12, 0)) && !Function_360(0, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_911(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4) //Position: 0x34C0E / 216078
{
	if (!IS_LAYOUTREF_VALID(&Global_39918))
	{
		Global_39918 = CREATE_LAYOUT("Crime");
	}
	if (!IS_ITERATOR_VALID(&iParam0))
	{
		iParam0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	}
	if (!IS_ITERATOR_VALID(&iParam1))
	{
		iParam1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	}
	if (!IS_OBJECTSET_VALID(&Global_39920))
	{
		Global_39920 = CREATE_OBJECTSET_IN_LAYOUT("nNewCrimes", &Global_39918, 3, 1);
	}
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT("CurrentCrimes", &Global_39918, 31, 1);
	}
	if (!IS_OBJECTSET_VALID(&iParam3))
	{
		iParam3 = CREATE_OBJECTSET_IN_LAYOUT("nOldCrimes", &Global_39918, 31, 1);
	}
	if (!IS_OBJECTSET_VALID(&uParam4))
	{
		uParam4 = CREATE_OBJECTSET_IN_LAYOUT("nSharedLaw", &Global_39918, 4294967295, 1);
	}
}

void Function_912() //Position: 0x34CF2 / 216306
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_492(&Global_39922 + 148[iVar0]) || Global_6605)
		{
			Function_491(iVar0, 2, CEIL((IntToFloat(Function_250(RAND_INT_RANGE(1800, 2400))) / 60.0f)), 0, 0);
		}
		iVar0++;
	}
	return;
}

