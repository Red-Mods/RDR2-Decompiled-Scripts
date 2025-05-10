//Decompiled with MagicRDR v1.0
//Function Count : 269
//Statics Count : 941
//Natives Count : 444
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
	struct<253> Local_108 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_774 = 21;
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
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	bool bLocal_838 = true;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
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
	Function_268(&Var0, 3);
	Function_267();
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
						Function_260(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_259(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_257())
				{
					Function_256();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_255())
				{
					Function_254();
					Function_253(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_250())
				{
					Function_248(bScriptParam_0);
					if (bLocal_107)
					{
						Function_246(&iLocal_11, Function_247(), bScriptParam_0);
						Function_245(&iLocal_11, Function_247());
					}
					Function_253(&(Global_29008[bScriptParam_0]), 16);
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
				Function_244(&uLocal_8);
				Function_241();
				Function_238(bScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_237() && Function_236(Global_29155[bScriptParam_010])) && Function_235(&iLocal_11))
				{
					Function_234();
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
					Function_222(&iLocal_11, bScriptParam_0, Function_247());
				}
				Function_221(bScriptParam_0);
				Function_220();
				Function_219();
				Function_253(&(Global_29008[bScriptParam_0]), 8);
				if (Function_218(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_217(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_216(bScriptParam_0);
				Function_215();
				Function_214(bScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_209(bScriptParam_0);
				Function_208(64);
				Function_253(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_207(Function_247(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_206(&Var0, 5.0f);
				Function_253(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_218(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_107)
				{
					Function_88(&iLocal_11, bScriptParam_0);
				}
				Function_52(&uLocal_8, &iLocal_774, Function_87(), bScriptParam_0);
				Function_47(&bLocal_838, 0);
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
	Function_9(&uLocal_8, &iLocal_774);
	Function_8(&bLocal_838);
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
	SET_DUST_LEVEL(1);
	return;
}

void Function_2(int iParam0) //Position: 0x3D3 / 979
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

void Function_3(int iParam0) //Position: 0x409 / 1033
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x42B / 1067
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x441 / 1089
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x457 / 1111
{
	Function_7();
	return;
}

void Function_7() //Position: 0x460 / 1120
{
	RELEASE_LAYOUT_REF(Local_172);
	return;
}

void Function_8(int iParam0) //Position: 0x46B / 1131
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

void Function_9(var uParam0, int iParam1) //Position: 0x4C5 / 1221
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

void Function_10(bool bParam0, bool bParam1, int iParam2) //Position: 0x51D / 1309
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_11(Global_16524, bVar0, 1);
	}
	return;
}

void Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0x603 / 1539
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

void Function_12() //Position: 0x77C / 1916
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_13(bool bParam0) //Position: 0x788 / 1928
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

void Function_14(int iParam0) //Position: 0x7CE / 1998
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

void Function_15(int iParam0, int iParam1) //Position: 0x814 / 2068
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x82E / 2094
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x84B / 2123
{
	return;
}

void Function_18() //Position: 0x851 / 2129
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
	return;
}

void Function_19() //Position: 0x89A / 2202
{
	Function_20();
	return;
}

void Function_20() //Position: 0x8A3 / 2211
{
	Function_21(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_21(int iParam0) //Position: 0x8B5 / 2229
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

void Function_22(var uParam0, int iParam1) //Position: 0x8DB / 2267
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

void Function_23(var uParam0, int iParam1) //Position: 0xA09 / 2569
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_24(var uParam0, int iParam1) //Position: 0xA23 / 2595
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0xA40 / 2624
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

bool Function_26(int iParam0) //Position: 0xAE7 / 2791
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0xB03 / 2819
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

bool Function_28(int iParam0) //Position: 0xB76 / 2934
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(int iParam0, bool bParam1) //Position: 0xB93 / 2963
{
	return (iParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xBA0 / 2976
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

void Function_31(int iParam0) //Position: 0xEE6 / 3814
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

var Function_32(int iParam0) //Position: 0xF4A / 3914
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

void Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x1277 / 4727
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

void Function_34(int iParam0, bool bParam1) //Position: 0x1531 / 5425
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

bool Function_35(int iParam0) //Position: 0x1C87 / 7303
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(bool bParam0) //Position: 0x1C9C / 7324
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1CBB / 7355
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

bool Function_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1D37 / 7479
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D51 / 7505
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

void Function_40(char* cParam0, int iParam1) //Position: 0x1DBD / 7613
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x1DF4 / 7668
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

int Function_42(char* cParam0) //Position: 0x1E6C / 7788
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

int Function_43(int iParam0) //Position: 0x1F0D / 7949
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

void Function_44(int iParam0, int iParam1) //Position: 0x1F4A / 8010
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x1F5D / 8029
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1F70 / 8048
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x1F87 / 8071
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

void Function_48(var uParam0, int iParam1) //Position: 0x2353 / 9043
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2364 / 9060
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x237E / 9086
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_51() //Position: 0x2390 / 9104
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2399 / 9113
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

bool Function_53(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x241A / 9242
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

void Function_54(int iParam0) //Position: 0x2833 / 10291
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
	Function_253(&(Global_29008[iParam0]), 4096);
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

float Function_55(int iParam0) //Position: 0x2932 / 10546
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_56(int iParam0) //Position: 0x296F / 10607
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x29A8 / 10664
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

var Function_58(int iParam0) //Position: 0x2A0F / 10767
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

int Function_59(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2A67 / 10855
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2C87 / 11399
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_61() //Position: 0x32B4 / 12980
{
	int iVar0;
	
	return iVar0;
}

var Function_62(int iParam0) //Position: 0x32BC / 12988
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x32CD / 13005
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

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x33C2 / 13250
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x33DB / 13275
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x3440 / 13376
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3452 / 13394
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

int Function_68(int iParam0) //Position: 0x3582 / 13698
{
	return Global_35278[iParam020].f_48;
}

void Function_69(int iParam0) //Position: 0x3591 / 13713
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x372B / 14123
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

void Function_71(var uParam0, int iParam1) //Position: 0x396F / 14703
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(struct<5> Param0) //Position: 0x397C / 14716
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x39A2 / 14754
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
			SET_CRIME_WITNESSED(bVar3, true);
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

void Function_74() //Position: 0x3C32 / 15410
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

void Function_75(bool bParam0, bool bParam1) //Position: 0x3C95 / 15509
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

bool Function_76(bool bParam0) //Position: 0x3CC4 / 15556
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

int Function_77(int iParam0) //Position: 0x3D3A / 15674
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3D4B / 15691
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

bool Function_79(int iParam0) //Position: 0x3D64 / 15716
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3D7A / 15738
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x3D8F / 15759
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3DAD / 15789
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

void Function_83(int iParam0, int iParam1) //Position: 0x3E51 / 15953
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3E62 / 15970
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
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_11(StackVal, bVar1, bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x3ED4 / 16084
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_14(iParam0);
	Function_13(iVar0);
	PRINTNL();
	Function_11(iParam0, iVar0, iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x3EF9 / 16121
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

var Function_87() //Position: 0x3F16 / 16150
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(int iParam0, bool bParam1) //Position: 0x3F2B / 16171
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
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_259(bParam1, 1);
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
					Function_259(bParam1, 0);
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
			Function_260(iParam0, bParam1, 1);
			Function_246(iParam0, Global_30616, bParam1);
			Function_245(iParam0, Global_30616);
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
				Function_259(bParam1, 1);
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

void Function_89(bool bParam0, struct<365> Param1) //Position: 0x5247 / 21063
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

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x5296 / 21142
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

var Function_91(int iParam0) //Position: 0x5491 / 21649
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
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
					iVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					iVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					iVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					iVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					iVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					iVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					iVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					iVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					iVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					iVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					iVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					iVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					iVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					iVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					iVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					iVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					iVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					iVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					iVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					iVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					iVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_29(iVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int iParam0, int iParam1) //Position: 0x567B / 22139
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

var Function_93(int iParam0) //Position: 0x5A57 / 23127
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

void Function_94(int iParam0) //Position: 0x5BDD / 23517
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

void Function_95(int iParam0) //Position: 0x5C2C / 23596
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

void Function_96(int iParam0) //Position: 0x5C64 / 23652
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

bool Function_97(int iParam0) //Position: 0x5C98 / 23704
{
	return Function_98(iParam0 + 352);
}

int Function_98(int iParam0) //Position: 0x5CA6 / 23718
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
		Function_253(&(Global_29008[Global_29006]), 0x20000000);
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

void Function_99(int iParam0) //Position: 0x5ECC / 24268
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

float Function_100(bool bParam0, vector3 vParam1) //Position: 0x5F1B / 24347
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

vector3 Function_101(bool bParam0) //Position: 0x5F95 / 24469
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

bool Function_102(bool bParam0) //Position: 0x5FFF / 24575
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

void Function_103(int iParam0, bool bParam1) //Position: 0x616E / 24942
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
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
	bVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, bVar10, 1);
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

var Function_104(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x643C / 25660
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

void Function_105(var uParam0, int iParam1) //Position: 0x64BB / 25787
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

void Function_106(var uParam0, bool bParam1) //Position: 0x6518 / 25880
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

void Function_107(var uParam0, bool bParam1) //Position: 0x6598 / 26008
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

void Function_108(var uParam0, bool bParam1) //Position: 0x6618 / 26136
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

bool Function_109(bool bParam0, vector3 vParam1) //Position: 0x669C / 26268
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

void Function_110(int iParam0, float fParam1) //Position: 0x66DA / 26330
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x671C / 26396
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

void Function_112() //Position: 0x6853 / 26707
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6865 / 26725
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x687A / 26746
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

void Function_115(int iParam0) //Position: 0x6B5C / 27484
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

var Function_116(bool bParam0) //Position: 0x6DCD / 28109
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

var Function_117(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6E90 / 28304
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

void Function_118() //Position: 0x7297 / 29335
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

void Function_119() //Position: 0x72E9 / 29417
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

void Function_120() //Position: 0x73EF / 29679
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

void Function_121() //Position: 0x7422 / 29730
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

void Function_122() //Position: 0x75B0 / 30128
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

void Function_123() //Position: 0x7764 / 30564
{
	Function_124(&Global_28260, 1, 0);
	return;
}

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x7772 / 30578
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
	
	bVar0 = Function_87();
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

struct<8> Function_125(int iParam0) //Position: 0x7963 / 31075
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

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x7A09 / 31241
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

int Function_127(bool bParam0) //Position: 0x7CA4 / 31908
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_128() //Position: 0x7CE5 / 31973
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

struct<8> Function_129() //Position: 0x7D6E / 32110
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

struct<8> Function_130() //Position: 0x7E05 / 32261
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

void Function_131() //Position: 0x7E84 / 32388
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

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x7EBD / 32445
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

int Function_133(int iParam0) //Position: 0x80D6 / 32982
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x80F0 / 33008
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(vector3 vParam0, bool bParam3) //Position: 0x8106 / 33030
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

var Function_136(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8171 / 33137
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

int Function_137(int iParam0) //Position: 0x826B / 33387
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

bool Function_138(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x82C3 / 33475
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

vector3 Function_139(int iParam0) //Position: 0x846D / 33901
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_140(vector3 vParam0) //Position: 0x848C / 33932
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x84AC / 33964
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(var uParam0, var uParam1, int iParam2) //Position: 0x84BF / 33983
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

var Function_143(bool bParam0) //Position: 0x86F3 / 34547
{
	return GET_HEADING(bParam0);
}

vector3 Function_144(bool bParam0) //Position: 0x86FE / 34558
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_145(vector3 vParam0) //Position: 0x870F / 34575
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(var uParam0, bool bParam1, int iParam2) //Position: 0x8727 / 34599
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

float Function_147(bool bParam0, bool bParam1) //Position: 0x8AB7 / 35511
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

bool Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8BA8 / 35752
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
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

bool Function_149() //Position: 0x8C5E / 35934
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_150(bool bParam0) //Position: 0x8C75 / 35957
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_151(bool bParam0) //Position: 0x8C80 / 35968
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_152(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8C8E / 35982
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
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8D09 / 36105
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

bool Function_154() //Position: 0x8D48 / 36168
{
	if (Function_29(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8D63 / 36195
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8DE8 / 36328
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

void Function_157(bool bParam0) //Position: 0x8EA0 / 36512
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

void Function_158(int iParam0) //Position: 0x9053 / 36947
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	bVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(1))
	{
		iVar0 = 1;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(2))
	{
		iVar0 = 2;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(3))
	{
		iVar0 = 3;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(4))
	{
		iVar0 = 4;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(5))
	{
		iVar0 = 5;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(8))
	{
		iVar0 = 8;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(9))
	{
		iVar0 = 9;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(11))
	{
		iVar0 = 11;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(12))
	{
		iVar0 = 12;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(13))
	{
		iVar0 = 13;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(14))
	{
		iVar0 = 14;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(15))
	{
		iVar0 = 15;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(16))
	{
		iVar0 = 16;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(17))
	{
		iVar0 = 17;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(18))
	{
		iVar0 = 18;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(19))
	{
		iVar0 = 19;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(21))
	{
		iVar0 = 21;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(22))
	{
		iVar0 = 22;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(23))
	{
		iVar0 = 23;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(24))
	{
		iVar0 = 24;
		bVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = bVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x9367 / 37735
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x938B / 37771
{
	while (bParam4 > 60)
	{
		bParam4 = (bParam4 - 60);
		bParam3++;
	}
	while (bParam3 > 60)
	{
		bParam3 = (bParam3 - 60);
		bParam2++;
	}
	while (bParam2 > 24)
	{
		bParam2 = (bParam2 - 24);
		bParam1++;
	}
	switch (bParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
	}
}

void Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x964B / 38475
{
	switch (bParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
	}
}

var Function_162(bool bParam0, bool bParam1, float fParam2) //Position: 0x988A / 39050
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == bParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, bParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0x98D7 / 39127
{
	Function_169(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_169(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_169(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_164(iParam0 + 192);
	return;
}

bool Function_164(int iParam0) //Position: 0x9943 / 39235
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_24(iParam0[03], 8) || iVar1));
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

void Function_165() //Position: 0x9CBE / 40126
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

bool Function_166() //Position: 0x9CFE / 40190
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

void Function_167(var uParam0, int iParam1) //Position: 0x9D29 / 40233
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x9D3A / 40250
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

var Function_169(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9D7C / 40316
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_170(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_167(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0x9DB4 / 40372
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

bool Function_171() //Position: 0x9E78 / 40568
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

void Function_172(bool bParam0, var uParam1, struct<365> Param2) //Position: 0x9F5D / 40797
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

var Function_173(struct<365> Param0) //Position: 0xA0CB / 41163
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_174(int iParam0) //Position: 0xA0DF / 41183
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

void Function_175(int iParam0, int iParam1) //Position: 0xA196 / 41366
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

bool Function_176(var uParam0, float fParam1, bool bParam2) //Position: 0xA5D5 / 42453
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

void Function_177(int iParam0, int iParam1, float fParam2) //Position: 0xA652 / 42578
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

var Function_178(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xA92E / 43310
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_179(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_179(bool bParam0, var uParam1, bool bParam2) //Position: 0xA961 / 43361
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

bool Function_180(bool bParam0) //Position: 0xAA2B / 43563
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

bool Function_181(bool bParam0, int iParam1) //Position: 0xAA76 / 43638
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xAAB8 / 43704
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

float Function_183(int iParam0, int iParam1) //Position: 0xAB06 / 43782
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xAB19 / 43801
{
	if (Function_29(iParam0, 1) && !Function_29(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xAB46 / 43846
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

void Function_186(bool bParam0, bool bParam1, int iParam2) //Position: 0xAC2A / 44074
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

void Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAC79 / 44153
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

bool Function_188(int iParam0) //Position: 0xACC3 / 44227
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

void Function_189(int iParam0) //Position: 0xAD02 / 44290
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

void Function_190(int iParam0) //Position: 0xADC3 / 44483
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

var Function_191(bool bParam0) //Position: 0xAE86 / 44678
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

var Function_192(int iParam0) //Position: 0xAEE0 / 44768
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

int Function_193(bool bParam0) //Position: 0xB023 / 45091
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

void Function_194() //Position: 0xB1A9 / 45481
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

var Function_195(bool bParam0, int iParam1) //Position: 0xB207 / 45575
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

void Function_196(bool bParam0, bool bParam1) //Position: 0xB328 / 45864
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xB34B / 45899
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xB35A / 45914
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

bool Function_199(int iParam0) //Position: 0xB397 / 45975
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB3AE / 45998
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

int Function_201(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB40C / 46092
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

int Function_202(int iParam0) //Position: 0xB561 / 46433
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

bool Function_203(int iParam0) //Position: 0xB59F / 46495
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB5B4 / 46516
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xB5D4 / 46548
{
	iParam0 = iParam0;
	return;
}

void Function_206(bool bParam0, float fParam1) //Position: 0xB5DE / 46558
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

void Function_207(bool bParam0, bool bParam1) //Position: 0xB61C / 46620
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

void Function_208(int iParam0) //Position: 0xB716 / 46870
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_209(bool bParam0) //Position: 0xB729 / 46889
{
	Function_210(StackVal, 1, 0.0f, 2, Local_108, 1);
	return;
}

void Function_210(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB741 / 46913
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

void Function_211(int iParam0) //Position: 0xB854 / 47188
{
	Function_212(&Global_28842, iParam0);
	return;
}

void Function_212(var uParam0, var uParam1) //Position: 0xB862 / 47202
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_213() //Position: 0xB87D / 47229
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_211(16384);
	}
	return;
}

void Function_214(var uParam0) //Position: 0xB899 / 47257
{
	uParam0 = uParam0;
	return;
}

void Function_215() //Position: 0xB8A3 / 47267
{
	return;
}

void Function_216(int iParam0) //Position: 0xB8A9 / 47273
{
	iParam0 = iParam0;
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xB8B3 / 47283
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_218(int iParam0, int iParam1) //Position: 0xB8CA / 47306
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0xB8E6 / 47334
{
	return;
}

void Function_220() //Position: 0xB8EC / 47340
{
	return;
}

void Function_221(int iParam0) //Position: 0xB8F2 / 47346
{
	iParam0 = iParam0;
	return;
}

void Function_222(int iParam0, bool bParam1, bool bParam2) //Position: 0xB8FC / 47356
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

void Function_223(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBBC9 / 48073
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

void Function_224(var uParam0, int iParam1) //Position: 0xBDB5 / 48565
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_225(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xBDC4 / 48580
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

var Function_226(bool bParam0, bool bParam1) //Position: 0xC43D / 50237
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_227(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xC44A / 50250
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

void Function_228(bool bParam0, bool bParam1) //Position: 0xC491 / 50321
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

void Function_229(bool bParam0, bool bParam1) //Position: 0xC4D7 / 50391
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

bool Function_230(var uParam0, int iParam1) //Position: 0xC506 / 50438
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_231(bool bParam0, int iParam1) //Position: 0xC522 / 50466
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

struct<32> Function_232(bool bParam0) //Position: 0xC5C6 / 50630
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

struct<32> Function_233(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC630 / 50736
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_234() //Position: 0xC64F / 50767
{
	return;
}

bool Function_235(int iParam0) //Position: 0xC655 / 50773
{
	if (Function_29(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_164(iParam0 + 192);
}

int Function_236(int iParam0) //Position: 0xC674 / 50804
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_218(&(Global_29008[iParam0]), 4);
}

int Function_237() //Position: 0xC690 / 50832
{
	return 1;
}

void Function_238(bool bParam0) //Position: 0xC697 / 50839
{
	Function_239(&bLocal_838, bLocal_7, "nbrothel01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "nbrothel01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "nbrothel01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "nbrothel01", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "gunsmith01", 1, &Global_29155[bParam010] + 20, 0, Local_172.f_548, 1, 0);
	Function_239(&bLocal_838, bLocal_7, "gunsmith01", 2, &Global_29155[bParam010] + 20, 0, Local_172.f_548, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "npigFarm01", 2, &Global_29155[bParam010] + 20, 0, Local_172.f_152, 0, 1);
	Function_239(&bLocal_838, bLocal_7, "pawnShop01", 1, &Global_29155[bParam010] + 20, 0, Local_172.f_692, 1, 0);
	Function_239(&bLocal_838, bLocal_7, "pawnShop01", 2, &Global_29155[bParam010] + 20, 0, Local_172.f_692, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "pawnShop01", 3, &Global_29155[bParam010] + 20, 0, Local_172.f_692, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "stable01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "stable01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "tailorsDoctors01", 1, &Global_29155[bParam010] + 20, 0, Local_172.f_644, 1, 0);
	Function_239(&bLocal_838, bLocal_7, "tailorsDoctors01", 2, &Global_29155[bParam010] + 20, 0, Local_172.f_644, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "tailorsDoctors01", 3, &Global_29155[bParam010] + 20, 0, Local_172.f_644, 1, 0);
	Function_239(&bLocal_838, bLocal_7, "tailorsDoctors01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "tailorsDoctors01", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "workShed01", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "workShed01", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_239(&bLocal_838, bLocal_7, "workShed02", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_239(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xC9A5 / 51621
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
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], true);
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

var Function_240(int iParam0) //Position: 0xCA91 / 51857
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

void Function_241() //Position: 0xCABF / 51903
{
	Function_243(StackVal, &uLocal_8, &iLocal_774, 4, 4294967295, 4);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_148, 4294967295, 2097410);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_180, 4294967295, 0);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_692, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_368, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_164, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_152, 4294967295, 258);
	Function_243(StackVal, &uLocal_8, &iLocal_774, 5, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_12, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_16, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_384, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_548, 4294967295, 4106);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_644, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_20, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_24, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_400, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_468, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_432, 4294967295, 778);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_596, 4294967295, 1290);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_412, 4294967295, 266);
	Function_243(&uLocal_8, &iLocal_774, 5, Local_172.f_480, 4294967295, 266);
	Function_242(Local_172.f_180, 14, 3);
	return;
}

void Function_242(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCC3C / 52284
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (64 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 64);
	}
	DECOR_SET_INT(bParam0, "factionswap", bParam1);
	DECOR_SET_INT(bParam0, "relationship", bParam2);
	return;
}

void Function_243(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xCCB8 / 52408
{
	if (*uParam0 >= (*iParam1 - 1))
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
	iParam1[*uParam03]->f_4 = bParam3;
	(*iParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_244(int iParam0) //Position: 0xCD93 / 52627
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_245(int iParam0, bool bParam1) //Position: 0xCDA2 / 52642
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

void Function_246(int iParam0, bool bParam1, bool bParam2) //Position: 0xCE0A / 52746
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

var Function_247() //Position: 0xCE98 / 52888
{
	return Local_108;
}

void Function_248(int iParam0) //Position: 0xCEA0 / 52896
{
	bLocal_7 = Function_249(Local_108, "thieveslanding", iParam0);
	return;
}

var Function_249(bool bParam0, bool bParam1, int iParam2) //Position: 0xCEC0 / 52928
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_250() //Position: 0xCEDF / 52959
{
	return Function_251();
}

int Function_251() //Position: 0xCEE8 / 52968
{
	var uVar0;
	
	Function_252(3, 3);
	uVar0 = uVar0;
	Local_172 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(Local_172))
	{
		Local_172 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	Local_172.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_region", 3, 157.8245f, 77.20833f, 2276.947f, 0.0f, -22.30548f, 0.0f, 89.25361f, 10.78109f, 139.5651f);
	Local_172.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_blacksmt01", 2, 155.0737f, 75.32324f, 2192.331f, 0.0f, 24.30487f, 0.0f, 8.257821f, 3.328563f, 10.61006f);
	Local_172.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_worksh01", 2, 98.48085f, 74.91336f, 2345.588f, 0.0f, 25.29357f, 0.0f, 5.144279f, 2.5817f, 4.15656f);
	Local_172.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_worksh02", 2, 157.0168f, 74.82978f, 2379.273f, 0.0f, 29.80754f, 0.0f, 4.726314f, 2.392609f, 3.92419f);
	Local_172.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_ferryman01", 2, 215.3889f, 74.94729f, 2173.373f, 0.0f, -5.316506f, 0.0f, 5.914793f, 2.659859f, 6.658119f);
	Local_172.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_ferryman04", 2, 207.6205f, 74.71249f, 2190.771f, 0.0f, -38.85465f, 0.0f, 3.912973f, 2.591383f, 3.651981f);
	Local_172.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_pigsty", 3, 121.0913f, 74.47209f, 2221.84f, 0.0f, 20.0f, 0.0f, 4.415372f, 1.538621f, 4.68723f);
	Local_172.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_corral", 3, 132.6118f, 74.85609f, 2205.204f, 0.0f, 37.27501f, 0.0f, 8.423597f, 2.028155f, 9.89547f);
	Local_172.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_bridge01", 2, 123.5683f, 76.1812f, 2258.931f, 0.0f, -18.98038f, 0.0f, 4.802093f, 5.22128f, 41.84421f);
	Local_172.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pop_north_set");
	(*&Local_172 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north2", 2, 148.9712f, 74.61581f, 2232.105f, 0.0f, 59.90944f, 0.0f, 29.94332f, 4.137205f, 3.242121f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[0]);
	(*&Local_172 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north3", 3, 161.0608f, 73.28625f, 2199.01f, 0.0f, 20.0f, 0.0f, 11.27883f, 2.028646f, 3.151433f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[1]);
	(*&Local_172 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north4", 3, 180.1783f, 73.28625f, 2186.629f, 0.0f, 54.99836f, 0.0f, 9.59743f, 2.119859f, 2.339096f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[2]);
	(*&Local_172 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north5", 3, 170.0913f, 73.28625f, 2192.372f, 0.0f, 51.98636f, 0.0f, 7.597484f, 1.673949f, 3.685028f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[3]);
	(*&Local_172 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north6", 3, 163.4919f, 74.39963f, 2221.517f, 0.0f, -29.38599f, 0.0f, 4.483838f, 1.278007f, 13.89938f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[4]);
	(*&Local_172 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north7", 3, 174.3521f, 74.30711f, 2215.813f, 0.0f, 58.73527f, 0.0f, 6.468067f, 1.177251f, 1.650964f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[5]);
	(*&Local_172 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north8", 3, 208.8567f, 73.79001f, 2175.116f, 0.0f, -3.115066f, 0.0f, 3.412357f, 1.703234f, 11.6397f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[6]);
	(*&Local_172 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north9", 2, 155.0827f, 75.76617f, 2212.868f, 0.0f, 0.0f, 0.0f, 8.62606f, 5.306758f, 21.52649f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[7]);
	(*&Local_172 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north10", 2, 170.386f, 75.34389f, 2205.873f, 0.0f, 8.564591f, 0.0f, 6.534302f, 4.662615f, 20.98273f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[8]);
	(*&Local_172 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north12", 2, 194.8183f, 75.03023f, 2174.369f, 0.0f, 24.81448f, 0.0f, 29.09678f, 4.176528f, 6.199813f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[9]);
	(*&Local_172 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north13", 2, 201.3135f, 75.03023f, 2151.0f, 0.0f, -17.54939f, 0.0f, 7.605684f, 4.176528f, 7.066369f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[10]);
	(*&Local_172 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north14", 2, 203.9715f, 75.03023f, 2159.952f, 0.0f, -78.53359f, 0.0f, 18.65768f, 4.176528f, 6.754061f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[11]);
	(*&Local_172 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_north15", 2, 170.7682f, 73.91237f, 2187.09f, 0.0f, -33.51815f, 0.0f, 19.16839f, 4.176528f, 5.257403f);
	ADD_TO_VOLUME_SET(Local_172.f_96, (*&Local_172 + 40)[12]);
	Local_172.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pop_south_set");
	(*&Local_172 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south1", 3, 131.6314f, 74.36719f, 2317.052f, 0.0f, 6.218808f, 0.0f, 3.231898f, 1.673781f, 6.658037f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[0]);
	(*&Local_172 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south2", 3, 126.3273f, 74.67719f, 2294.984f, 0.0f, -0.3511052f, 0.0f, 3.358616f, 1.918939f, 6.924263f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[1]);
	(*&Local_172 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south3", 3, 103.02f, 74.46542f, 2279.74f, 0.0f, -8.911319f, 0.0f, 11.79638f, 1.800613f, 2.512699f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[2]);
	(*&Local_172 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south4", 3, 134.0428f, 74.78855f, 2289.881f, 0.0f, 2.408496f, 0.0f, 9.666465f, 1.504253f, 1.852265f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[3]);
	(*&Local_172 + 100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south6", 2, 138.6402f, 75.12931f, 2310.72f, 0.0f, 5.263243f, 0.0f, 13.18791f, 3.131549f, 2.460358f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[4]);
	(*&Local_172 + 100)[5] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south7", 2, 143.3963f, 75.07148f, 2305.959f, 0.0f, 32.35434f, 0.0f, 1.811151f, 3.024818f, 8.032286f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[5]);
	(*&Local_172 + 100)[6] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_south8", 2, 140.8847f, 75.43229f, 2295.153f, 0.0f, 3.502279f, 0.0f, 2.536997f, 3.37885f, 15.25817f);
	ADD_TO_VOLUME_SET(Local_172.f_132, (*&Local_172 + 100)[6]);
	Local_172.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_warehouse_set");
	(*&Local_172 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_wareho01", 2, 135.1248f, 75.8347f, 2338.297f, 0.0f, 4.759178f, 0.0f, 21.32398f, 4.709299f, 25.56081f);
	ADD_TO_VOLUME_SET(Local_172.f_148, (*&Local_172 + 136)[0]);
	(*&Local_172 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_office01", 2, 139.8391f, 77.93958f, 2327.406f, 0.0f, 4.699532f, 0.0f, 10.79547f, 3.02961f, 5.482237f);
	ADD_TO_VOLUME_SET(Local_172.f_148, (*&Local_172 + 136)[1]);
	Local_172.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_players_room", 2, 123.8812f, 77.78061f, 2234.642f, 0.0f, -14.37626f, 0.0f, 5.919429f, 2.313397f, 5.384371f);
	Local_172.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pigfarm_set");
	(*&Local_172 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pigfarm04", 2, 129.0281f, 74.09282f, 2222.838f, 0.0f, -14.37626f, 0.0f, 1.831691f, 3.168309f, 2.649456f);
	ADD_TO_VOLUME_SET(Local_172.f_164, (*&Local_172 + 156)[0]);
	Local_172.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pop_crateyard_set");
	(*&Local_172 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_crates1", 2, 131.0275f, 74.21799f, 2374.853f, 0.0f, 29.39362f, 0.0f, 33.21996f, 2.804292f, 32.51464f);
	ADD_TO_VOLUME_SET(Local_172.f_180, (*&Local_172 + 168)[0]);
	(*&Local_172 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_crates2", 2, 113.4024f, 74.10799f, 2352.969f, 0.0f, 29.8776f, 0.0f, 19.11635f, 2.806043f, 22.6374f);
	ADD_TO_VOLUME_SET(Local_172.f_180, (*&Local_172 + 168)[1]);
	Local_172.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pop_northdocks_set");
	(*&Local_172 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks1", 2, 172.1815f, 74.71363f, 2241.527f, 0.0f, -30.73822f, 0.0f, 30.36309f, 2.639271f, 1.591717f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[0]);
	(*&Local_172 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks2", 2, 187.7822f, 74.39242f, 2221.338f, 0.0f, -29.92439f, 0.0f, 3.584551f, 2.939461f, 14.95464f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[1]);
	(*&Local_172 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks3", 2, 162.9147f, 73.76353f, 2247.728f, 0.0f, -29.64138f, 0.0f, 4.707134f, 2.658041f, 16.98589f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[2]);
	(*&Local_172 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks4", 2, 178.1139f, 74.65788f, 2233.946f, 0.0f, 59.87977f, 0.0f, 20.47495f, 2.801744f, 2.671454f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[3]);
	(*&Local_172 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks5", 2, 180.2033f, 74.17239f, 2225.094f, 0.0f, -29.69154f, 0.0f, 8.943483f, 1.715685f, 3.834709f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[4]);
	(*&Local_172 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks6", 2, 194.8357f, 74.28354f, 2221.869f, 0.0f, -29.92439f, 0.0f, 9.852716f, 2.170028f, 2.578543f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[5]);
	(*&Local_172 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks7", 2, 207.1491f, 74.22011f, 2195.217f, 0.0f, -39.65355f, 0.0f, 13.42332f, 2.388399f, 2.713911f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[6]);
	(*&Local_172 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks8", 2, 225.8905f, 74.50317f, 2172.428f, 0.0f, -4.654152f, 0.0f, 13.20809f, 2.179824f, 2.973737f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[7]);
	(*&Local_172 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks9", 2, 218.9882f, 74.71426f, 2192.958f, 0.0f, -38.31281f, 0.0f, 9.433097f, 2.848837f, 5.725534f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[8]);
	(*&Local_172 + 184)[9] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks10", 2, 220.5834f, 74.36482f, 2173.678f, 0.0f, -4.504617f, 0.0f, 3.07258f, 1.787071f, 8.043092f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[9]);
	(*&Local_172 + 184)[10] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks11", 2, 213.7891f, 74.88496f, 2167.769f, 0.0f, 0.0f, 0.0f, 14.8581f, 3.339006f, 3.194078f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[10]);
	(*&Local_172 + 184)[11] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks12", 2, 219.4471f, 74.93797f, 2181.675f, 0.0f, -2.504592f, 0.0f, 2.055929f, 3.388585f, 8.079159f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[11]);
	(*&Local_172 + 184)[12] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks13", 2, 213.2854f, 74.59535f, 2194.456f, 0.0f, 49.89083f, 0.0f, 3.238196f, 2.892637f, 8.673741f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[12]);
	(*&Local_172 + 184)[13] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks14", 2, 197.5356f, 74.17527f, 2207.253f, 0.0f, -35.26958f, 0.0f, 15.30875f, 4.494629f, 3.494829f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[13]);
	(*&Local_172 + 184)[14] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks15", 2, 176.6877f, 74.34927f, 2241.519f, 0.0f, 60.33823f, 0.0f, 3.14028f, 1.720393f, 2.034568f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[14]);
	(*&Local_172 + 184)[15] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks16", 2, 218.5803f, 74.57835f, 2186.756f, 0.0f, 66.9302f, 0.0f, 3.988917f, 2.759111f, 2.043288f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[15]);
	(*&Local_172 + 184)[16] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks17", 2, 205.4821f, 72.42951f, 2134.435f, 0.0f, -15.49101f, 0.0f, 12.13918f, 6.384386f, 3.348497f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[16]);
	(*&Local_172 + 184)[17] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks18", 2, 201.5668f, 73.50565f, 2142.833f, 0.0f, -15.49101f, 0.0f, 17.01977f, 9.259377f, 15.96081f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[17]);
	(*&Local_172 + 184)[18] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_northdocks19", 2, 210.6772f, 72.42951f, 2130.707f, 0.0f, -15.49101f, 0.0f, 4.276744f, 6.384386f, 10.22227f);
	ADD_TO_VOLUME_SET(Local_172.f_264, (*&Local_172 + 184)[18]);
	Local_172.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pop_southdocks_set");
	(*&Local_172 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks1", 2, 156.1884f, 75.67006f, 2291.035f, 0.0f, 2.882253f, 0.0f, 32.14539f, 3.962106f, 7.934261f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[0]);
	(*&Local_172 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks2", 2, 164.5897f, 75.18113f, 2371.237f, 0.0f, 29.74934f, 0.0f, 16.20259f, 3.630186f, 7.947024f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[1]);
	(*&Local_172 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks3", 2, 152.9703f, 74.94196f, 2371.393f, 0.0f, 27.99167f, 0.0f, 2.538574f, 3.227758f, 10.06952f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[2]);
	(*&Local_172 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks4", 2, 148.8927f, 74.99253f, 2338.732f, 0.0f, 2.403996f, 0.0f, 3.074283f, 3.550352f, 34.88313f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[3]);
	(*&Local_172 + 268)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks5", 2, 162.1826f, 74.59475f, 2337.542f, 0.0f, 4.571398f, 0.0f, 2.662015f, 2.993632f, 13.35226f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[4]);
	(*&Local_172 + 268)[5] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks6", 2, 152.1147f, 74.57105f, 2312.998f, 0.05646981f, 4.612943f, 0.04799045f, 10.38041f, 2.962653f, 1.916626f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[5]);
	(*&Local_172 + 268)[6] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks7", 2, 160.6471f, 73.77319f, 2360.302f, 0.0f, 28.09342f, 0.0f, 9.390365f, 2.595971f, 1.685766f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[6]);
	(*&Local_172 + 268)[7] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks8", 2, 155.2133f, 74.94331f, 2333.888f, 0.0f, 4.678422f, 0.0f, 12.1155f, 2.992439f, 5.188836f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[7]);
	(*&Local_172 + 268)[8] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks19", 2, 155.0281f, 74.32098f, 2366.398f, 0.0f, -27.77507f, 0.0f, 1.498345f, 3.33414f, 7.20486f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[8]);
	(*&Local_172 + 268)[9] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks9", 2, 163.1333f, 73.72407f, 2356.023f, 0.0f, -60.03222f, 0.0f, 9.706104f, 2.277886f, 3.192596f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[9]);
	(*&Local_172 + 268)[10] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks10", 2, 145.456f, 75.9418f, 2361.889f, 0.0f, 22.23526f, 0.0f, 2.365049f, 3.247642f, 6.78305f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[10]);
	(*&Local_172 + 268)[11] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks11", 2, 148.8764f, 75.15415f, 2366.036f, 0.0f, -37.07431f, 0.0f, 6.320905f, 3.462404f, 2.525241f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[11]);
	(*&Local_172 + 268)[12] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks12", 2, 145.7576f, 75.34636f, 2354.855f, 0.0f, -20.13278f, 0.0f, 2.153852f, 3.667864f, 8.4843f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[12]);
	(*&Local_172 + 268)[13] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks13", 2, 147.9558f, 74.79824f, 2315.291f, 0.0f, 4.555128f, 0.0f, 2.866811f, 2.667118f, 13.42069f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[13]);
	(*&Local_172 + 268)[14] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks14", 2, 140.1953f, 74.77529f, 2310.54f, 0.0f, 5.202918f, 0.0f, 16.77729f, 3.01864f, 2.360362f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[14]);
	(*&Local_172 + 268)[15] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks15", 2, 162.6083f, 73.82494f, 2313.707f, 0.0f, 5.351533f, 0.0f, 2.939902f, 3.270328f, 13.09575f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[15]);
	(*&Local_172 + 268)[16] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks16", 2, 142.6087f, 75.11625f, 2304.028f, 0.0f, 21.87864f, 0.0f, 1.443187f, 3.094059f, 13.12396f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[16]);
	(*&Local_172 + 268)[17] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks17", 2, 144.7532f, 74.0296f, 2297.847f, 0.0f, 3.632941f, 0.0f, 1.829312f, 3.289502f, 7.645639f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[17]);
	(*&Local_172 + 268)[18] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks18", 2, 169.6506f, 75.50861f, 2302.314f, 0.0f, 3.251671f, 0.0f, 6.457269f, 3.611866f, 14.85462f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[18]);
	(*&Local_172 + 268)[19] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pop_southdocks20", 2, 147.7927f, 74.19041f, 2307.472f, 0.0f, 8.845689f, 0.0f, 1.591461f, 3.528893f, 5.777983f);
	ADD_TO_VOLUME_SET(Local_172.f_352, (*&Local_172 + 268)[19]);
	Local_172.f_368 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_tick_set");
	(*&Local_172 + 356)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_tickets01", 2, 134.6121f, 75.05765f, 2297.663f, 0.0f, 3.155584f, 0.0f, 9.3f, 2.777297f, 6.971455f);
	ADD_TO_VOLUME_SET(Local_172.f_368, (*&Local_172 + 356)[0]);
	(*&Local_172 + 356)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_tickets02", 2, 137.0244f, 74.94027f, 2292.842f, 0.0f, 3.469327f, 0.0f, 3.710651f, 2.530684f, 2.352687f);
	ADD_TO_VOLUME_SET(Local_172.f_368, (*&Local_172 + 356)[1]);
	Local_172.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_stab_set");
	(*&Local_172 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_stable01", 2, 121.4266f, 74.60543f, 2193.456f, 0.0f, -38.40697f, 0.0f, 11.74311f, 2.650494f, 18.00607f);
	ADD_TO_VOLUME_SET(Local_172.f_384, (*&Local_172 + 372)[0]);
	(*&Local_172 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_stable02", 2, 115.6494f, 74.49019f, 2188.974f, 0.0f, -37.70505f, 0.0f, 2.51588f, 2.444366f, 7.176547f);
	ADD_TO_VOLUME_SET(Local_172.f_384, (*&Local_172 + 372)[1]);
	Local_172.f_400 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_ferr_set");
	(*&Local_172 + 388)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_ferryman03", 2, 213.2688f, 74.57431f, 2190.573f, 0.0f, -37.15548f, 0.0f, 1.552559f, 2.343711f, 1.0f);
	ADD_TO_VOLUME_SET(Local_172.f_400, (*&Local_172 + 388)[0]);
	(*&Local_172 + 388)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_ferryman02", 2, 213.0947f, 74.77226f, 2187.277f, 0.0f, -39.20383f, 0.0f, 5.891003f, 2.736348f, 4.013329f);
	ADD_TO_VOLUME_SET(Local_172.f_400, (*&Local_172 + 388)[1]);
	Local_172.f_412 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_ver1_set");
	(*&Local_172 + 404)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "Box1", 2, 146.792f, 77.95094f, 2246.844f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_172.f_412, (*&Local_172 + 404)[0]);
	Local_172.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_saloon_set");
	(*&Local_172 + 416)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_saloon01", 2, 167.3334f, 72.76504f, 2228.25f, 0.0f, -30.02197f, 0.0f, 8.410011f, 7.87994f, 14.35492f);
	ADD_TO_VOLUME_SET(Local_172.f_432, (*&Local_172 + 416)[0]);
	(*&Local_172 + 416)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_saloon02", 2, 169.5157f, 75.0048f, 2236.319f, 0.0f, -31.09248f, 0.0f, 3.782452f, 2.932232f, 2.417991f);
	ADD_TO_VOLUME_SET(Local_172.f_432, (*&Local_172 + 416)[1]);
	(*&Local_172 + 416)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_saloon03", 2, 175.664f, 74.9073f, 2227.199f, 0.0f, -30.36341f, 0.0f, 5.027802f, 2.689279f, 3.169497f);
	ADD_TO_VOLUME_SET(Local_172.f_432, (*&Local_172 + 416)[2]);
	Local_172.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_tailor_set");
	(*&Local_172 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_tailor01", 2, 174.9852f, 74.38473f, 2182.238f, 0.0f, -34.22879f, 0.0f, 8.198368f, 2.81773f, 6.801184f);
	ADD_TO_VOLUME_SET(Local_172.f_448, (*&Local_172 + 436)[0]);
	(*&Local_172 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_tailor02", 2, 178.9408f, 74.89482f, 2184.014f, 0.0f, -34.22879f, 0.0f, 0.2f, 2.470744f, 4.960597f);
	ADD_TO_VOLUME_SET(Local_172.f_448, (*&Local_172 + 436)[1]);
	Local_172.f_468 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_harbor_set");
	(*&Local_172 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_harbor01", 2, 178.0712f, 74.80824f, 2217.597f, -1.417288f, -30.91833f, 0.1854929f, 4.383923f, 2.767432f, 6.597141f);
	ADD_TO_VOLUME_SET(Local_172.f_468, (*&Local_172 + 452)[0]);
	(*&Local_172 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_harbor02", 2, 182.5987f, 74.80365f, 2220.344f, 0.0f, -30.42979f, 0.0f, 6.913052f, 2.767432f, 6.563572f);
	ADD_TO_VOLUME_SET(Local_172.f_468, (*&Local_172 + 452)[1]);
	(*&Local_172 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_harbor03", 2, 185.8507f, 74.42982f, 2216.803f, 0.0f, -29.54564f, 0.0f, 4.152111f, 2.514276f, 2.603718f);
	ADD_TO_VOLUME_SET(Local_172.f_468, (*&Local_172 + 452)[2]);
	Local_172.f_480 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_ver2_set");
	(*&Local_172 + 472)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "Box", 2, 145.6494f, 77.41088f, 2238.687f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_172.f_480, (*&Local_172 + 472)[0]);
	Local_172.f_508 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_chickens_set");
	(*&Local_172 + 484)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thi_chicken1", 3, 133.907f, 73.28625f, 2223.728f, 0.0f, 20.0f, 0.0f, 7.688399f, 7.688399f, 7.688399f);
	ADD_TO_VOLUME_SET(Local_172.f_508, (*&Local_172 + 484)[0]);
	(*&Local_172 + 484)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thi_chicken2", 3, 145.2967f, 73.28625f, 2195.21f, 0.0f, 20.0f, 0.0f, 6.056266f, 7.688399f, 10.436f);
	ADD_TO_VOLUME_SET(Local_172.f_508, (*&Local_172 + 484)[1]);
	(*&Local_172 + 484)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thi_chicken3", 3, 161.3603f, 73.28625f, 2209.09f, 0.0f, 20.0f, 0.0f, 7.688399f, 7.688399f, 7.688399f);
	ADD_TO_VOLUME_SET(Local_172.f_508, (*&Local_172 + 484)[2]);
	(*&Local_172 + 484)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thi_chicken4", 3, 191.068f, 73.28625f, 2203.912f, 0.0f, 20.0f, 0.0f, 8.943166f, 8.943166f, 8.943166f);
	ADD_TO_VOLUME_SET(Local_172.f_508, (*&Local_172 + 484)[3]);
	(*&Local_172 + 484)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thi_chicken5", 3, 106.1528f, 73.28625f, 2295.609f, 0.0f, -5.160184f, 0.0f, 19.327f, 7.688399f, 13.47398f);
	ADD_TO_VOLUME_SET(Local_172.f_508, (*&Local_172 + 484)[4]);
	Local_172.f_532 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_fish_set");
	(*&Local_172 + 512)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_fish_01", 3, 107.9999f, 62.3486f, 2252.0f, 0.0f, -20.16817f, 0.0f, 46.7114f, 9.114058f, 13.40402f);
	ADD_TO_VOLUME_SET(Local_172.f_532, (*&Local_172 + 512)[0]);
	(*&Local_172 + 512)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_fish_02", 3, 161.5966f, 64.9888f, 2273.518f, 0.0f, -20.16817f, 0.0f, 26.60962f, 6.602382f, 25.74983f);
	ADD_TO_VOLUME_SET(Local_172.f_532, (*&Local_172 + 512)[1]);
	(*&Local_172 + 512)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_fish_03", 3, 166.6306f, 65.35305f, 2330.964f, 0.0f, -82.76395f, 0.0f, 66.15244f, 6.602382f, 25.74983f);
	ADD_TO_VOLUME_SET(Local_172.f_532, (*&Local_172 + 512)[2]);
	(*&Local_172 + 512)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_fish_04", 3, 200.9797f, 65.33083f, 2229.694f, 0.0f, 223.0254f, 0.0f, 66.15244f, 6.602382f, 25.74983f);
	ADD_TO_VOLUME_SET(Local_172.f_532, (*&Local_172 + 512)[3]);
	Local_172.f_548 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_gunsmith_set");
	(*&Local_172 + 536)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_gunsmith01", 2, 166.4479f, 74.23535f, 2188.54f, 0.0f, -33.61417f, 0.0f, 5.711356f, 4.484836f, 9.172855f);
	ADD_TO_VOLUME_SET(Local_172.f_548, (*&Local_172 + 536)[0]);
	(*&Local_172 + 536)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_gunsmith02", 2, 169.3781f, 75.1996f, 2188.938f, 0.0f, -33.61417f, 0.0f, 0.6203356f, 2.133884f, 6.604735f);
	ADD_TO_VOLUME_SET(Local_172.f_548, (*&Local_172 + 536)[1]);
	Local_172.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_fff", 2, 161.5258f, 74.70499f, 2293.978f, 0.0f, 92.26971f, 0.0f, 2.852055f, 3.342353f, 6.901263f);
	Local_172.f_568 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_brothel_more_set");
	(*&Local_172 + 556)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_brothel06", 2, 145.4312f, 75.41055f, 2239.007f, 0.0f, -29.94305f, 0.0f, 2.231024f, 8.803533f, 15.85239f);
	ADD_TO_VOLUME_SET(Local_172.f_568, (*&Local_172 + 556)[0]);
	(*&Local_172 + 556)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_brothel07", 2, 151.7391f, 74.98534f, 2242.705f, 0.0f, -29.94305f, 0.0f, 10.28458f, 2.640776f, 10.87477f);
	ADD_TO_VOLUME_SET(Local_172.f_568, (*&Local_172 + 556)[1]);
	Local_172.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_brothel_rooms", 2, 149.8487f, 78.25007f, 2244.917f, 0.0f, -29.21607f, 0.0f, 11.11006f, 3.394601f, 4.577099f);
	Local_172.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_blackjack", 2, 171.3108f, 73.64671f, 2224.382f, 0.0f, -30.87644f, 0.0f, 3.569148f, 5.059165f, 2.888656f);
	Local_172.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_liarsdice", 2, 168.1322f, 73.64671f, 2222.92f, 0.0f, -30.87644f, 0.0f, 4.159747f, 4.159747f, 3.881289f);
	Local_172.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_poker", 2, 164.1496f, 73.64671f, 2231.487f, 0.0f, -30.87644f, 0.0f, 4.615512f, 4.615512f, 4.901088f);
	Local_172.f_596 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_brothel1_set");
	(*&Local_172 + 588)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_brothel", 2, 150.4911f, 75.13766f, 2242.012f, 0.0f, -29.94305f, 0.0f, 12.88916f, 8.803533f, 15.34764f);
	ADD_TO_VOLUME_SET(Local_172.f_596, (*&Local_172 + 588)[0]);
	Local_172.f_612 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_toughGuys_set");
	(*&Local_172 + 600)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "toughGuys2", 3, 160.5707f, 74.59276f, 2220.309f, 0.0f, 20.0f, 0.0f, 3.701838f, 2.931919f, 3.701838f);
	ADD_TO_VOLUME_SET(Local_172.f_612, (*&Local_172 + 600)[0]);
	(*&Local_172 + 600)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "toughGuys1", 3, 168.9522f, 74.93501f, 2228.21f, 0.0f, 20.0f, 0.0f, 2.362861f, 1.270516f, 2.316527f);
	ADD_TO_VOLUME_SET(Local_172.f_612, (*&Local_172 + 600)[1]);
	Local_172.f_628 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_birds_set");
	(*&Local_172 + 616)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "birdPop2", 2, 171.3679f, 80.75795f, 2206.437f, 0.0f, 37.66278f, 0.0f, 134.9081f, 11.5013f, 72.34597f);
	ADD_TO_VOLUME_SET(Local_172.f_628, (*&Local_172 + 616)[0]);
	(*&Local_172 + 616)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "birdPop1", 2, 124.2394f, 82.49654f, 2330.436f, 0.0f, 94.87074f, 0.0f, 143.8678f, 13.00599f, 88.99593f);
	ADD_TO_VOLUME_SET(Local_172.f_628, (*&Local_172 + 616)[1]);
	Local_172.f_644 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_doctor_set");
	(*&Local_172 + 632)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_doctor01", 2, 173.3407f, 75.70671f, 2181.098f, 0.0f, -33.72612f, 0.0f, 11.94255f, 7.309404f, 7.48098f);
	ADD_TO_VOLUME_SET(Local_172.f_644, (*&Local_172 + 632)[0]);
	(*&Local_172 + 632)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_doctor02", 2, 177.9076f, 78.04267f, 2184.987f, 0.0f, -33.72612f, 0.0f, 0.9548771f, 1.689583f, 4.540689f);
	ADD_TO_VOLUME_SET(Local_172.f_644, (*&Local_172 + 632)[1]);
	Local_172.f_660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_streetSpawn_set");
	(*&Local_172 + 648)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_streetSpawn1", 2, 164.2035f, 73.21194f, 2194.947f, 0.0f, -32.85844f, 0.0f, 46.02656f, 33.92661f, 98.30106f);
	ADD_TO_VOLUME_SET(Local_172.f_660, (*&Local_172 + 648)[0]);
	(*&Local_172 + 648)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_streetSpawn2", 2, 110.2687f, 73.03625f, 2301.83f, 0.0f, -26.29476f, 0.0f, 22.16118f, 15.8923f, 43.49994f);
	ADD_TO_VOLUME_SET(Local_172.f_660, (*&Local_172 + 648)[1]);
	Local_172.f_692 = CREATE_VOLUME_SET_IN_LAYOUT(Local_172, "thiv_pawnshop_set");
	(*&Local_172 + 664)[0] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh01", 2, 143.1704f, 75.28658f, 2311.763f, 0.0f, 5.286093f, 0.0f, 2.540473f, 1.622967f, 0.4586426f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[0]);
	(*&Local_172 + 664)[1] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh02", 2, 140.4967f, 74.90644f, 2316.956f, 0.0f, 5.286093f, 0.0f, 11.60371f, 2.53916f, 10.38338f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[1]);
	(*&Local_172 + 664)[2] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh03", 2, 137.5464f, 75.28658f, 2312.284f, 0.0f, 5.286093f, 0.0f, 2.883379f, 1.622967f, 0.4586426f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[2]);
	(*&Local_172 + 664)[3] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh04", 2, 134.6031f, 75.12867f, 2314.741f, 0.0f, 5.286093f, 0.0f, 0.3003308f, 1.423614f, 3.293785f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[3]);
	(*&Local_172 + 664)[4] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh05", 2, 135.1282f, 75.12867f, 2320.417f, 0.0f, 5.286093f, 0.0f, 0.3003308f, 1.423614f, 3.056028f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[4]);
	(*&Local_172 + 664)[5] = CREATE_VOLUME_IN_LAYOUT(Local_172, "thiv_pawnsh06", 2, 146.4621f, 75.30753f, 2317.895f, 0.0f, 5.286093f, 0.0f, 0.3003308f, 1.639946f, 3.849716f);
	ADD_TO_VOLUME_SET(Local_172.f_692, (*&Local_172 + 664)[5]);
	Local_172.f_696 = CREATE_VOLUME_IN_LAYOUT(Local_172, "v_THIAddKO", 2, 171.9999f, 73.51794f, 2232.0f, 0.0f, -29.87128f, 0.0f, 3.811612f, 5.526439f, 9.257933f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos1", 189.071f, 76.102f, 2371.522f, -1.13f, 58.516f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos2", 120.251f, 80.408f, 2404.159f, -6.327f, -21.946f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos3", 83.686f, 75.128f, 2263.773f, -0.747f, -72.009f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos4", 212.498f, 76.362f, 2249.836f, 3.909f, 13.82f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos5", 234.667f, 80.681f, 2188.146f, -8.892f, 115.727f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos6", 47.261f, 74.871f, 2341.825f, 2.419f, -75.984f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos7", 188.877f, 75.248f, 2247.235f, 0.484f, 92.289f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos8", 125.199f, 78.28f, 2239.857f, -5.205f, -62.702f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos9", 172.968f, 75.417f, 2294.387f, -1.214f, 42.594f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_172, "thi_vista_cam_pos10", 173.783f, 75.551f, 2300.971f, 0.37f, 150.334f, 0.0f);
	*(&Local_172 + 700) = { 121.146f, 73.286f, 2312.448f };
	*(&Local_172 + 700 + 12) = { 0.0f, 132.303f, 0.0f };
	Local_172.f_724 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_playerDuel1", 121.146f, 73.286f, 2312.448f, 0.0f, 132.303f, 0.0f);
	*(&Local_172 + 728) = { 114.742f, 73.286f, 2319.227f };
	*(&Local_172 + 728 + 12) = { 0.0f, -38.61496f, 0.0f };
	Local_172.f_752 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_enDuel1", 114.742f, 73.286f, 2319.227f, 0.0f, -38.61496f, 0.0f);
	*(&Local_172 + 756) = { 151.327f, 73.036f, 2220.009f };
	*(&Local_172 + 756 + 12) = { 0.0f, 148.03f, 0.0f };
	Local_172.f_780 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_playerDuel2", 151.327f, 73.036f, 2220.009f, 0.0f, 148.03f, 0.0f);
	*(&Local_172 + 784) = { 146.572f, 73.286f, 2227.233f };
	*(&Local_172 + 784 + 12) = { 0.0f, -32.77494f, 0.0f };
	Local_172.f_808 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_enDuel2", 146.572f, 73.286f, 2227.233f, 0.0f, -32.77494f, 0.0f);
	*(&Local_172 + 812) = { 190.938f, 73.036f, 2183.411f };
	*(&Local_172 + 812 + 12) = { 0.0f, 137.353f, 0.0f };
	Local_172.f_836 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_playerDuel3", 190.938f, 73.036f, 2183.411f, 0.0f, 137.353f, 0.0f);
	*(&Local_172 + 840) = { 184.741f, 73.036f, 2189.819f };
	*(&Local_172 + 840 + 12) = { 0.0f, -45.35883f, 0.0f };
	Local_172.f_864 = CREATE_POINT_IN_LAYOUT(Local_172, "armf_enDuel3", 184.741f, 73.036f, 2189.819f, 0.0f, -45.35883f, 0.0f);
	*(&Local_172 + 868) = { 174.3415f, 71.90105f, 2411.603f };
	*(&Local_172 + 868 + 12) = { 0.0f, -77.5631f, 0.0f };
	Local_172.f_892 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_01", 174.3415f, 71.90105f, 2411.603f, 0.0f, -77.5631f, 0.0f);
	*(&Local_172 + 896) = { 169.2869f, 72.59053f, 2395.41f };
	*(&Local_172 + 896 + 12) = { 0.0f, -49.11977f, 0.0f };
	Local_172.f_920 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_02", 169.2869f, 72.59053f, 2395.41f, 0.0f, -49.11977f, 0.0f);
	*(&Local_172 + 924) = { 160.9603f, 72.34877f, 2383.063f };
	*(&Local_172 + 924 + 12) = { 0.0f, -59.00187f, 0.0f };
	Local_172.f_948 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_03", 160.9603f, 72.34877f, 2383.063f, 0.0f, -59.00187f, 0.0f);
	*(&Local_172 + 952) = { 170.5094f, 73.36586f, 2367.597f };
	*(&Local_172 + 952 + 12) = { 0.0f, -59.00187f, 0.0f };
	Local_172.f_976 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_04", 170.5094f, 73.36586f, 2367.597f, 0.0f, -59.00187f, 0.0f);
	*(&Local_172 + 980) = { 162.9955f, 72.08791f, 2354.723f };
	*(&Local_172 + 980 + 12) = { 0.0f, -59.00187f, 0.0f };
	Local_172.f_1004 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_05", 162.9955f, 72.08791f, 2354.723f, 0.0f, -59.00187f, 0.0f);
	*(&Local_172 + 1008) = { 163.1924f, 73.44358f, 2338.085f };
	*(&Local_172 + 1008 + 12) = { 0.0f, -59.00187f, 0.0f };
	Local_172.f_1032 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_06", 163.1924f, 73.44358f, 2338.085f, 0.0f, -59.00187f, 0.0f);
	*(&Local_172 + 1036) = { 149.1169f, 73.09775f, 2322.514f };
	*(&Local_172 + 1036 + 12) = { 0.0f, -80.08842f, 0.0f };
	Local_172.f_1060 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_07", 149.1169f, 73.09775f, 2322.514f, 0.0f, -80.08842f, 0.0f);
	*(&Local_172 + 1064) = { 173.3731f, 74.22238f, 2308.269f };
	*(&Local_172 + 1064 + 12) = { 0.0f, -80.08842f, 0.0f };
	Local_172.f_1088 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_08", 173.3731f, 74.22238f, 2308.269f, 0.0f, -80.08842f, 0.0f);
	*(&Local_172 + 1092) = { 163.6363f, 72.1502f, 2313.983f };
	*(&Local_172 + 1092 + 12) = { 0.0f, -80.08842f, 0.0f };
	Local_172.f_1116 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_09", 163.6363f, 72.1502f, 2313.983f, 0.0f, -80.08842f, 0.0f);
	*(&Local_172 + 1120) = { 145.7547f, 72.30187f, 2301.504f };
	*(&Local_172 + 1120 + 12) = { 0.0f, -80.08842f, 0.0f };
	Local_172.f_1144 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_010", 145.7547f, 72.30187f, 2301.504f, 0.0f, -80.08842f, 0.0f);
	*(&Local_172 + 1148) = { 144.223f, 73.83006f, 2288.575f };
	*(&Local_172 + 1148 + 12) = { 0.0f, -0.4146861f, 0.0f };
	Local_172.f_1172 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_011", 144.223f, 73.83006f, 2288.575f, 0.0f, -0.4146861f, 0.0f);
	*(&Local_172 + 1176) = { 128.9439f, 72.42185f, 2279.316f };
	*(&Local_172 + 1176 + 12) = { 0.0f, -0.4146861f, 0.0f };
	Local_172.f_1200 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_012", 128.9439f, 72.42185f, 2279.316f, 0.0f, -0.4146861f, 0.0f);
	*(&Local_172 + 1204) = { 96.69703f, 72.54664f, 2253.653f };
	*(&Local_172 + 1204 + 12) = { 0.0f, -0.4146861f, 0.0f };
	Local_172.f_1228 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_013", 96.69703f, 72.54664f, 2253.653f, 0.0f, -0.4146861f, 0.0f);
	*(&Local_172 + 1232) = { 123.789f, 72.82449f, 2258.633f };
	*(&Local_172 + 1232 + 12) = { 0.0f, -0.4146861f, 0.0f };
	Local_172.f_1256 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_014", 123.789f, 72.82449f, 2258.633f, 0.0f, -0.4146861f, 0.0f);
	*(&Local_172 + 1260) = { 111.9999f, 72.28235f, 2236.0f };
	*(&Local_172 + 1260 + 12) = { 0.0f, 141.7191f, 0.0f };
	Local_172.f_1284 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_015", 111.9999f, 72.28235f, 2236.0f, 0.0f, 141.7191f, 0.0f);
	*(&Local_172 + 1288) = { 137.8561f, 72.81793f, 2244.347f };
	*(&Local_172 + 1288 + 12) = { 0.0f, 141.7191f, 0.0f };
	Local_172.f_1312 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_016", 137.8561f, 72.81793f, 2244.347f, 0.0f, 141.7191f, 0.0f);
	*(&Local_172 + 1316) = { 162.2157f, 72.65971f, 2253.01f };
	*(&Local_172 + 1316 + 12) = { 0.0f, 244.458f, 0.0f };
	Local_172.f_1340 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_017", 162.2157f, 72.65971f, 2253.01f, 0.0f, 244.458f, 0.0f);
	*(&Local_172 + 1344) = { 166.8038f, 72.65971f, 2244.803f };
	*(&Local_172 + 1344 + 12) = { 0.0f, 244.458f, 0.0f };
	Local_172.f_1368 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_018", 166.8038f, 72.65971f, 2244.803f, 0.0f, 244.458f, 0.0f);
	*(&Local_172 + 1372) = { 185.0596f, 73.55966f, 2248.912f };
	*(&Local_172 + 1372 + 12) = { 0.0f, 239.6449f, 0.0f };
	Local_172.f_1396 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_019", 185.0596f, 73.55966f, 2248.912f, 0.0f, 239.6449f, 0.0f);
	*(&Local_172 + 1400) = { 184.2704f, 73.20306f, 2229.011f };
	*(&Local_172 + 1400 + 12) = { 0.0f, 141.23f, 0.0f };
	Local_172.f_1424 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_020", 184.2704f, 73.20306f, 2229.011f, 0.0f, 141.23f, 0.0f);
	*(&Local_172 + 1428) = { 198.4751f, 73.29941f, 2224.86f };
	*(&Local_172 + 1428 + 12) = { 0.0f, 240.0101f, 0.0f };
	Local_172.f_1452 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_021", 198.4751f, 73.29941f, 2224.86f, 0.0f, 240.0101f, 0.0f);
	*(&Local_172 + 1456) = { 188.4787f, 73.37904f, 2210.481f };
	*(&Local_172 + 1456 + 12) = { 0.0f, 240.0101f, 0.0f };
	Local_172.f_1480 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_022", 188.4787f, 73.37904f, 2210.481f, 0.0f, 240.0101f, 0.0f);
	*(&Local_172 + 1484) = { 200.085f, 72.26197f, 2199.923f };
	*(&Local_172 + 1484 + 12) = { 0.0f, 240.0101f, 0.0f };
	Local_172.f_1508 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_023", 200.085f, 72.26197f, 2199.923f, 0.0f, 240.0101f, 0.0f);
	*(&Local_172 + 1512) = { 201.4553f, 72.46182f, 2210.378f };
	*(&Local_172 + 1512 + 12) = { 0.0f, 240.0101f, 0.0f };
	Local_172.f_1536 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_024", 201.4553f, 72.46182f, 2210.378f, 0.0f, 240.0101f, 0.0f);
	*(&Local_172 + 1540) = { 213.1302f, 72.97697f, 2200.751f };
	*(&Local_172 + 1540 + 12) = { 0.0f, 240.0101f, 0.0f };
	Local_172.f_1564 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_025", 213.1302f, 72.97697f, 2200.751f, 0.0f, 240.0101f, 0.0f);
	*(&Local_172 + 1568) = { 225.3965f, 73.35677f, 2197.582f };
	*(&Local_172 + 1568 + 12) = { 0.0f, 231.5099f, 0.0f };
	Local_172.f_1592 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_026", 225.3965f, 73.35677f, 2197.582f, 0.0f, 231.5099f, 0.0f);
	*(&Local_172 + 1596) = { 232.1205f, 73.5583f, 2172.583f };
	*(&Local_172 + 1596 + 12) = { 0.0f, 278.1251f, 0.0f };
	Local_172.f_1620 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_027", 232.1205f, 73.5583f, 2172.583f, 0.0f, 278.1251f, 0.0f);
	*(&Local_172 + 1624) = { 212.8745f, 72.65473f, 2156.622f };
	*(&Local_172 + 1624 + 12) = { 0.0f, 278.1251f, 0.0f };
	Local_172.f_1648 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_028", 212.8745f, 72.65473f, 2156.622f, 0.0f, 278.1251f, 0.0f);
	*(&Local_172 + 1652) = { 211.7295f, 73.26682f, 2131.409f };
	*(&Local_172 + 1652 + 12) = { 0.0f, 245.2664f, 0.0f };
	Local_172.f_1676 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_029", 211.7295f, 73.26682f, 2131.409f, 0.0f, 245.2664f, 0.0f);
	*(&Local_172 + 1680) = { 187.7853f, 72.86517f, 2147.021f };
	*(&Local_172 + 1680 + 12) = { 0.0f, 352.7331f, 0.0f };
	Local_172.f_1704 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_030", 187.7853f, 72.86517f, 2147.021f, 0.0f, 352.7331f, 0.0f);
	*(&Local_172 + 1708) = { 175.9999f, 72.3225f, 2136.0f };
	*(&Local_172 + 1708 + 12) = { 0.0f, 281.2891f, 0.0f };
	Local_172.f_1732 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_031", 175.9999f, 72.3225f, 2136.0f, 0.0f, 281.2891f, 0.0f);
	*(&Local_172 + 1736) = { 186.7025f, 72.52797f, 2052.782f };
	*(&Local_172 + 1736 + 12) = { 0.0f, 281.2891f, 0.0f };
	Local_172.f_1760 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_respawn_water_033", 186.7025f, 72.52797f, 2052.782f, 0.0f, 281.2891f, 0.0f);
	*(&Local_172 + 1764) = { 137.2898f, 73.65411f, 2316.914f };
	*(&Local_172 + 1764 + 12) = { 0.0f, 93.67333f, 0.0f };
	Local_172.f_1788 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_store", 137.2898f, 73.65411f, 2316.914f, 0.0f, 93.67333f, 0.0f);
	*(&Local_172 + 1792) = { 126.2348f, 76.257f, 2309.524f };
	*(&Local_172 + 1792 + 12) = { 0.0f, 252.9277f, 0.0f };
	Local_172.f_1816 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos1_store", 126.2348f, 76.257f, 2309.524f, 0.0f, 252.9277f, 0.0f);
	*(&Local_172 + 1820) = { 130.6668f, 76.106f, 2311.561f };
	*(&Local_172 + 1820 + 12) = { 0.0f, 252.9277f, 0.0f };
	Local_172.f_1844 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos2_store", 130.6668f, 76.106f, 2311.561f, 0.0f, 252.9277f, 0.0f);
	*(&Local_172 + 1848) = { 129.3975f, 73.193f, 2308.753f };
	*(&Local_172 + 1848 + 12) = { 0.0f, 252.9277f, 0.0f };
	Local_172.f_1872 = CREATE_POINT_IN_LAYOUT(Local_172, "return_gateway_pos_store", 129.3975f, 73.193f, 2308.753f, 0.0f, 252.9277f, 0.0f);
	*(&Local_172 + 1876) = { 131.797f, 73.286f, 2308.278f };
	*(&Local_172 + 1876 + 12) = { 0.0f, 252.9277f, 0.0f };
	Local_172.f_1900 = CREATE_POINT_IN_LAYOUT(Local_172, "return_stand_pos_store", 131.797f, 73.286f, 2308.278f, 0.0f, 252.9277f, 0.0f);
	*(&Local_172 + 1904) = { 175.9791f, 73.47179f, 2183.501f };
	*(&Local_172 + 1904 + 12) = { 0.0f, 203.3782f, 0.0f };
	Local_172.f_1928 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_store1", 175.9791f, 73.47179f, 2183.501f, 0.0f, 203.3782f, 0.0f);
	*(&Local_172 + 1932) = { 176.7663f, 76.257f, 2195.01f };
	*(&Local_172 + 1932 + 12) = { 0.0f, 1.279809f, 0.0f };
	Local_172.f_1956 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos1_store1", 176.7663f, 76.257f, 2195.01f, 0.0f, 1.279809f, 0.0f);
	*(&Local_172 + 1960) = { 177.1958f, 76.106f, 2190.152f };
	*(&Local_172 + 1960 + 12) = { 0.0f, 1.279809f, 0.0f };
	Local_172.f_1984 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos2_store1", 177.1958f, 76.106f, 2190.152f, 0.0f, 1.279809f, 0.0f);
	*(&Local_172 + 1988) = { 174.9771f, 73.193f, 2192.291f };
	*(&Local_172 + 1988 + 12) = { 0.0f, 1.279809f, 0.0f };
	Local_172.f_2012 = CREATE_POINT_IN_LAYOUT(Local_172, "return_gateway_pos_store1", 174.9771f, 73.193f, 2192.291f, 0.0f, 1.279809f, 0.0f);
	*(&Local_172 + 2016) = { 173.7238f, 73.286f, 2190.19f };
	*(&Local_172 + 2016 + 12) = { 0.0f, 1.279809f, 0.0f };
	Local_172.f_2040 = CREATE_POINT_IN_LAYOUT(Local_172, "return_stand_pos_store1", 173.7238f, 73.286f, 2190.19f, 0.0f, 1.279809f, 0.0f);
	*(&Local_172 + 2044) = { 166.6709f, 73.48386f, 2186.76f };
	*(&Local_172 + 2044 + 12) = { 0.0f, 195.8555f, 0.0f };
	Local_172.f_2068 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_store2", 166.6709f, 73.48386f, 2186.76f, 0.0f, 195.8555f, 0.0f);
	*(&Local_172 + 2072) = { 171.092f, 73.288f, 2193.133f };
	*(&Local_172 + 2072 + 12) = { 0.0f, 27.08022f, 0.0f };
	Local_172.f_2096 = CREATE_POINT_IN_LAYOUT(Local_172, "return_stand_pos_store2", 171.092f, 73.288f, 2193.133f, 0.0f, 27.08022f, 0.0f);
	*(&Local_172 + 2100) = { 173.1345f, 73.195f, 2194.479f };
	*(&Local_172 + 2100 + 12) = { 0.0f, 27.08022f, 0.0f };
	Local_172.f_2124 = CREATE_POINT_IN_LAYOUT(Local_172, "return_gateway_pos_store2", 173.1345f, 73.195f, 2194.479f, 0.0f, 27.08022f, 0.0f);
	*(&Local_172 + 2128) = { 174.2011f, 76.108f, 2191.587f };
	*(&Local_172 + 2128 + 12) = { 0.0f, 27.08022f, 0.0f };
	Local_172.f_2152 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos2_store2", 174.2011f, 76.108f, 2191.587f, 0.0f, 27.08022f, 0.0f);
	*(&Local_172 + 2156) = { 175.9291f, 76.259f, 2196.149f };
	*(&Local_172 + 2156 + 12) = { 0.0f, 27.08022f, 0.0f };
	Local_172.f_2180 = CREATE_POINT_IN_LAYOUT(Local_172, "camera_cut_pos1_store2", 175.9291f, 76.259f, 2196.149f, 0.0f, 27.08022f, 0.0f);
	*(&Local_172 + 2184) = { 156.3038f, 73.75475f, 2193.409f };
	*(&Local_172 + 2184 + 12) = { 0.0f, 229.9398f, 0.0f };
	Local_172.f_2208 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_blacksmith", 156.3038f, 73.75475f, 2193.409f, 0.0f, 229.9398f, 0.0f);
	*(&Local_172 + 2212) = { 124.1311f, 76.74467f, 2235.329f };
	*(&Local_172 + 2212 + 12) = { 0.0f, 197.4766f, 0.0f };
	Local_172.f_2236 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_house", 124.1311f, 76.74467f, 2235.329f, 0.0f, 197.4766f, 0.0f);
	*(&Local_172 + 2240) = { 165.1226f, 73.75176f, 2227.55f };
	*(&Local_172 + 2240 + 12) = { 0.0f, 59.80434f, 0.0f };
	Local_172.f_2264 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_saloon", 165.1226f, 73.75176f, 2227.55f, 0.0f, 59.80434f, 0.0f);
	*(&Local_172 + 2268) = { 149.6569f, 73.81389f, 2240.985f };
	*(&Local_172 + 2268 + 12) = { 0.0f, 63.98124f, 0.0f };
	Local_172.f_2292 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_brothel", 149.6569f, 73.81389f, 2240.985f, 0.0f, 63.98124f, 0.0f);
	*(&Local_172 + 2296) = { 127.5364f, 73.57987f, 2345.956f };
	*(&Local_172 + 2296 + 12) = { 0.0f, 98.3925f, 0.0f };
	Local_172.f_2320 = CREATE_POINT_IN_LAYOUT(Local_172, "thif_interiorPoint_factory", 127.5364f, 73.57987f, 2345.956f, 0.0f, 98.3925f, 0.0f);
	*(&Local_172 + 2324) = { 126.933f, 73.286f, 2313.945f };
	*(&Local_172 + 2324 + 12) = { 0.0f, 93.67333f, 0.0f };
	Local_172.f_2348 = CREATE_POINT_IN_LAYOUT(Local_172, "horse_pos_store", 126.933f, 73.286f, 2313.945f, 0.0f, 93.67333f, 0.0f);
	*(&Local_172 + 2352) = { 180.694f, 73.149f, 2189.489f };
	*(&Local_172 + 2352 + 12) = { 0.0f, 93.67333f, 0.0f };
	Local_172.f_2376 = CREATE_POINT_IN_LAYOUT(Local_172, "horse_pos_store1", 180.694f, 73.149f, 2189.489f, 0.0f, 93.67333f, 0.0f);
	*(&Local_172 + 2380) = { 180.694f, 73.149f, 2189.489f };
	*(&Local_172 + 2380 + 12) = { 0.0f, 93.67333f, 0.0f };
	Local_172.f_2404 = CREATE_POINT_IN_LAYOUT(Local_172, "horse_pos_store2", 180.694f, 73.149f, 2189.489f, 0.0f, 93.67333f, 0.0f);
	return 1;
}

void Function_252(int iParam0, int iParam1) //Position: 0x1129D / 70301
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

void Function_253(var uParam0, int iParam1) //Position: 0x112E6 / 70374
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_254() //Position: 0x112F5 / 70389
{
	return;
}

bool Function_255() //Position: 0x112FB / 70395
{
	return 1;
}

void Function_256() //Position: 0x11302 / 70402
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
	return;
}

bool Function_257() //Position: 0x11355 / 70485
{
	return Function_258();
}

int Function_258() //Position: 0x1135E / 70494
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
	
	Function_252(3, 3);
	uVar0 = uVar0;
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_kneel_rfl", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_164(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_1", 2, 174.544f, 74.69175f, 2174.881f, 0.0f, -33.54822f, 0.0f, 7.831867f, 9.831814f, 6.802049f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_2", 2, 168.8183f, 75.98361f, 2190.271f, 0.0f, 56.89217f, 0.0f, 10.18482f, 9.831814f, 6.68057f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_3", 2, 133.9549f, 77.14455f, 2328.435f, 0.0f, 94.10937f, 0.0f, 11.69902f, 17.78174f, 26.64502f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_4", 2, 127.1507f, 76.83834f, 2226.163f, 0.0f, 76.57873f, 0.0f, 6.595797f, 8.33664f, 5.207145f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_5", 2, 210.416f, 76.67583f, 2189.287f, 0.0f, 49.66166f, 0.0f, 12.05783f, 8.33664f, 8.408677f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_6", 2, 86.64233f, 77.86023f, 2310.672f, 0.0f, -9.134888f, 0.0f, 10.16262f, 9.162944f, 8.732252f);
	Local_108.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_7", 2, 123.1021f, 75.28691f, 2399.494f, 0.0f, -65.29062f, 0.0f, 9.574632f, 13.32759f, 7.410429f);
	Local_108.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_8", 2, 135.2089f, 74.68356f, 2377.938f, 0.0f, -61.57181f, 0.0f, 10.57188f, 10.5548f, 6.818066f);
	Local_108.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_9", 2, 119.9468f, 74.68356f, 2367.582f, 0.0f, -90.21614f, 0.0f, 9.035792f, 10.5548f, 11.38101f);
	Local_108.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_10", 2, 134.5067f, 74.78526f, 2296.865f, 0.0f, -87.87088f, 0.0f, 12.57496f, 12.5237f, 12.60422f);
	Local_108.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_11", 2, 103.5688f, 75.83162f, 2271.843f, 0.0f, -100.1456f, 0.0f, 12.70806f, 12.5237f, 18.05608f);
	Local_108.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_12", 2, 151.8736f, 75.83162f, 2241.574f, 0.0f, -119.6021f, 0.0f, 19.79422f, 13.25341f, 19.52035f);
	Local_108.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_13", 2, 123.6351f, 76.83834f, 2234.387f, 0.0f, 76.57873f, 0.0f, 7.173061f, 11.47652f, 10.68787f);
	Local_108.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_14", 2, 179.8192f, 75.83162f, 2218.513f, 0.0f, -119.6021f, 0.0f, 10.10013f, 13.25341f, 16.10051f);
	Local_108.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_15", 2, 168.0644f, 79.79874f, 2228.53f, 0.0f, -119.6021f, 0.0f, 15.48685f, 6.925322f, 19.11614f);
	Local_108.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_16", 2, 215.5513f, 76.67583f, 2173.553f, 0.0f, 84.77409f, 0.0f, 9.335411f, 8.33664f, 8.408677f);
	Local_108.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_17", 2, 203.4639f, 76.67583f, 2141.447f, 0.0f, 74.82314f, 0.0f, 8.045826f, 8.33664f, 10.36656f);
	Local_108.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_1", 2, 151.8736f, 79.61604f, 2241.574f, 0.0f, -119.6021f, 0.0f, 19.79422f, 6.67893f, 19.52035f);
	CREATE_POINT_IN_LAYOUT(Local_108, "MoveObj1", 115.9999f, 73.28625f, 2344.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "MoveObj2", 115.9999f, 73.28625f, 2346.276f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "MoveObj3", 114.4476f, 73.28625f, 2344.968f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "feedchickens2", 137.9044f, 73.28625f, 2226.084f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "feedchickens3", 146.5031f, 73.28625f, 2201.902f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "feedchickens4", 183.9999f, 73.28625f, 2204.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "feedchickens1", 157.5594f, 73.28625f, 2215.079f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_enDuel5", 145.3168f, 73.28625f, 2229.293f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_enDuel4", 142.8837f, 73.28625f, 2227.011f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_enDuel3", 143.4786f, 73.28625f, 2227.54f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_enDuel2", 144.5947f, 73.28625f, 2228.695f, 0.0f, -86.91833f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_enDuel1", 143.9999f, 73.28625f, 2228.0f, 0.0f, -89.7602f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_108, "thif_playerDuel", 135.9999f, 73.28625f, 2236.0f, 0.0f, 92.19331f, 0.0f);
	*(&Local_108 + 140) = { 115.8303f, 73.29681f, 2230.878f };
	*(&Local_108 + 140 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_164 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PlayerHorse", 115.8303f, 73.29681f, 2230.878f, 0.0f, 0.0f, 0.0f);
	Local_108.f_168 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_defSet", Local_108, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def01", 121.7043f, 76.48626f, 2398.92f, 0.0f, -59.84791f, 0.0f);
	DECOR_SET_INT(bVar1, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_168);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def03", 175.3167f, 75.98838f, 2175.709f, 0.0f, 300.0f, 0.0f);
	DECOR_SET_INT(bVar2, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_168);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def04", 124.2711f, 80.11531f, 2325.561f, 0.0f, 36.68593f, 0.0f);
	DECOR_SET_INT(bVar3, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_168);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def02_core", 167.9342f, 76.34333f, 2193.422f, 0.0f, -164.5166f, 0.0f);
	DECOR_SET_BOOL(bVar4, "Core", true);
	DECOR_SET_INT(bVar4, "Accuracy", 100);
	DECOR_SET_INT(bVar4, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_168);
	Local_108.f_172 = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", Local_108, 8, 0);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_player", 121.581f, 76.48626f, 2399.488f, 0.0f, 384.4727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_172);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_surv", 120.9343f, 76.48626f, 2398.087f, 0.0f, 204.7049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_172);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_player", 168.3087f, 76.34333f, 2192.669f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_108.f_172);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_surv", 168.3078f, 76.34333f, 2194.069f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_108.f_172);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_player", 174.51f, 75.87855f, 2174.437f, 0.0f, 237.6988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_108.f_172);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_surv", 175.7192f, 75.89238f, 2175.204f, 0.0f, 417.5107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_108.f_172);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_player", 125.5868f, 80.11531f, 2325.487f, 0.0f, 92.91433f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_108.f_172);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_04_surv", 124.1873f, 80.11531f, 2325.565f, 0.0f, -86.71516f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_108.f_172);
	Local_108.f_176 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group01_defSet", Local_108, 8, 0);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def05", 127.4689f, 77.27717f, 2226.244f, 0.0f, -115.0f, 0.0f);
	DECOR_SET_INT(bVar13, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_108.f_176);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def07", 149.0447f, 76.79934f, 2233.231f, 0.0f, 65.0f, 0.0f);
	DECOR_SET_INT(bVar14, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_108.f_176);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def08", 134.6663f, 75.24979f, 2377.515f, 0.0f, 82.50484f, 0.0f);
	DECOR_SET_INT(bVar15, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_108.f_176);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def06_core", 171.4195f, 76.33035f, 2189.537f, 0.0f, -130.9768f, 0.0f);
	DECOR_SET_BOOL(bVar16, "Core", true);
	DECOR_SET_INT(bVar16, "Accuracy", 100);
	DECOR_SET_INT(bVar16, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_108.f_176);
	Local_108.f_180 = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", Local_108, 8, 0);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_05_player", 127.859f, 77.27717f, 2224.85f, 0.0f, 163.8281f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_108.f_180);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_05_surv", 127.4689f, 77.27717f, 2226.244f, 0.0f, -14.73684f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_108.f_180);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_06_player", 172.2835f, 76.33035f, 2188.188f, 0.0f, 147.142f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_108.f_180);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_06_surv", 171.4195f, 76.33035f, 2189.537f, 0.0f, -32.47766f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_108.f_180);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_player", 148.7638f, 76.79934f, 2238.5f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_108.f_180);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_07_surv", 148.7638f, 76.79934f, 2233.1f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_108.f_180);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_player", 133.8032f, 75.24979f, 2376.165f, 0.0f, 207.6586f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_108.f_180);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_08_surv", 134.5552f, 75.24979f, 2377.579f, 0.0f, 29.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_108.f_180);
	Local_108.f_184 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group02_defSet", Local_108, 8, 0);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def09", 128.9454f, 80.09619f, 2324.829f, 0.0f, 34.96332f, 0.0f);
	DECOR_SET_INT(bVar25, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_108.f_184);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def010", 89.47846f, 77.36099f, 2311.899f, 0.0f, -121.9764f, 0.0f);
	DECOR_SET_INT(bVar26, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_108.f_184);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def012", 123.3789f, 76.48625f, 2401.905f, 0.0f, -10.51537f, 0.0f);
	DECOR_SET_INT(bVar27, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_108.f_184);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def011_core", 149.0447f, 76.79934f, 2233.231f, 0.0f, 65.0f, 0.0f);
	DECOR_SET_BOOL(bVar28, "Core", true);
	DECOR_SET_INT(bVar28, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_108.f_184);
	Local_108.f_188 = CREATE_OBJECTSET_IN_LAYOUT("ammo_02Set", Local_108, 8, 0);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_09_player", 130.3447f, 80.09619f, 2324.726f, 0.0f, 94.58057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_108.f_188);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_09_surv", 128.9454f, 80.09619f, 2324.829f, 0.0f, -85.73938f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_108.f_188);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_10_player", 89.5689f, 77.36099f, 2310.499f, 0.0f, 175.075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_108.f_188);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_10_surv", 89.47846f, 77.36099f, 2311.899f, 0.0f, -1.851742f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_108.f_188);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_12_player", 123.1889f, 76.48625f, 2401.909f, 0.0f, -98.32234f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_108.f_188);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_12_surv", 124.5989f, 76.48625f, 2402.09f, 0.0f, 83.17812f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_108.f_188);
	Local_108.f_192 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group03_difSet", Local_108, 8, 0);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def014", 127.4689f, 77.27717f, 2226.244f, 0.0f, -115.0f, 0.0f);
	DECOR_SET_INT(bVar35, "Accuracy", 100);
	DECOR_SET_INT(bVar35, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_108.f_192);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def015", 89.47846f, 77.36099f, 2311.899f, 0.0f, 238.7791f, 0.0f);
	DECOR_SET_INT(bVar36, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_108.f_192);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def016", 120.2402f, 75.28333f, 2367.329f, 0.0f, 15.49156f, 0.0f);
	DECOR_SET_INT(bVar37, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_108.f_192);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def013_core", 175.3167f, 75.98838f, 2175.709f, 0.0f, 300.0f, 0.0f);
	DECOR_SET_BOOL(bVar38, "Core", true);
	DECOR_SET_INT(bVar38, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_108.f_192);
	Local_108.f_196 = CREATE_OBJECTSET_IN_LAYOUT("ammo_03Set", Local_108, 8, 0);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_16_surv", 120.9578f, 75.28333f, 2367.316f, 0.0f, 91.03364f, 0.0f);
	DECOR_SET_INT(bVar39, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_108.f_196);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_03_16_player", 119.5495f, 75.28333f, 2367.342f, 0.0f, -88.97911f, 0.0f);
	DECOR_SET_INT(bVar40, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_108.f_196);
	Local_108.f_200 = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_safeSet", Local_108, 8, 0);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe01", 162.8147f, 73.70523f, 2224.827f, 0.0f, 83.50972f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_108.f_200);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe02", 168.3775f, 76.24969f, 2194.507f, -1.749283f, -123.0648f, 1.803591f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_108.f_200);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe03", 202.3295f, 74.69861f, 2145.999f, -1.311285f, 161.9073f, -0.9580678f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_108.f_200);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe04", 161.5648f, 73.72762f, 2226.139f, 0.0f, 15.02913f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_108.f_200);
	Local_108.f_204 = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", Local_108, 8, 0);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_2", 133.6698f, 76.51495f, 2328.986f, 0.0f, 95.03049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_108.f_204);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_3", 161.2562f, 73.75426f, 2232.002f, 0.0f, -78.0676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_108.f_204);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_4", 122.7642f, 73.28625f, 2196.526f, 0.0f, -81.30568f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_108.f_204);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_5", 157.3851f, 73.71989f, 2380.386f, 0.0f, 30.87349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_108.f_204);
	*(&Local_108 + 208) = { 124.6513f, 76.73672f, 2235.506f };
	*(&Local_108 + 208 + 12) = { 0.0f, 165.375f, 0.0f };
	Local_108.f_232 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", 124.6513f, 76.73672f, 2235.506f, 0.0f, 165.375f, 0.0f);
	Local_108.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand", "rand_idle_stand", 162.8577f, 73.72521f, 2224.827f, 0.0f, 83.9965f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_236), 0);
	Local_108.f_240 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", 168.3634f, 76.31242f, 2194.509f, 0.0f, -123.4614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_240), 0);
	Local_108.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_kneel_rfl", "DLC_survivor_kneel_rfl", 202.3271f, 74.72832f, 2146.015f, 0.0f, 162.881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_244), 0);
	Local_108.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_108, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", 161.5955f, 73.72762f, 2226.258f, 0.0f, 14.82758f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_108.f_248), 0);
	Local_108.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_108, "ZombiePack_player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", 125.5958f, 76.74279f, 2234.163f, 0.0f, -13.84706f, 0.0f);
	return 1;
}

void Function_259(bool bParam0, bool bParam1) //Position: 0x12BE6 / 76774
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

void Function_260(int iParam0, bool bParam1, bool bParam2) //Position: 0x12C7C / 76924
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_262(bParam1))
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
			Function_261(iParam0 + 192, iVar1[iVar0], 3, 1);
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

var Function_261(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x12D77 / 77175
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

bool Function_262(int iParam0) //Position: 0x12E47 / 77383
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_266(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_264(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_263(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_263(int iParam0) //Position: 0x12EC2 / 77506
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_264(int iParam0) //Position: 0x12ED7 / 77527
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_265(iParam0)11].f_12 < 0;
}

int Function_265(int iParam0) //Position: 0x12F3D / 77629
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

bool Function_266(int iParam0, int iParam1) //Position: 0x12FFF / 77823
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_267() //Position: 0x1301B / 77851
{
	SET_DUST_LEVEL(0);
	return;
}

void Function_268(bool bParam0, var uParam1) //Position: 0x13026 / 77862
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

