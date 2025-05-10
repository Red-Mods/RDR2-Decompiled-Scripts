//Decompiled with MagicRDR v1.0
//Function Count : 547
//Statics Count : 993
//Natives Count : 485
//Parameters Count : 0

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
	int iLocal_10 = 0;
	float fLocal_11 = 0.0f;
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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	struct<9> Local_52 = { 0, 0, 0, 0, 0, 4, 0, 0, 0 } ;
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
	var uLocal_77 = -1;
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
	var uLocal_98 = 27;
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
	int iLocal_158 = 0;
	struct<233> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_671 = 3;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 16;
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
	var uLocal_785 = 16;
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
	var uLocal_838 = 0;
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
	var uLocal_891 = 16;
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
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	bool bLocal_992 = false;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar2;
	bool bVar3;
	
	iLocal_10 = 5;
	fLocal_11 = 1.0f;
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_49 = 0;
	bLocal_50 = 16;
	bLocal_51 = false;
	bLocal_305 = true;
	iLocal_992 = 1;
	Function_505();
	Function_504("TDM_team_fmt", 1);
	Function_503();
	iVar0 = NET_GET_PLAYMODE();
	while ((!IS_EXITFLAG_SET() && !iLocal_158) && NET_IS_IN_SESSION())
	{
		switch (Local_159.f_24)
		{
			case 0x00000000:
				if (Function_501(65340) && UNK_0xA80C6DE6(&Local_247))
				{
					NET_LOG(true, "DM Data", "DATA SUNK. MOVING ON.", 0, 0, 0, 0);
					Local_159.f_24 = 1;
				}
				else if (Function_500())
				{
					NET_LOG(true, "DM Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_158 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_394())
				{
					NET_LOG(true, "DM Data", "DATA SUNK AND INITED. MOVING ON.", 0, 0, 0, 0);
					Local_159.f_24 = 2;
				}
				else if (Function_500())
				{
					NET_LOG(true, "DM Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_158 = 1;
				}
				break;
			
			case 0x00000002:
				if (!Function_143())
				{
					NET_LOG(iLocal_992, "GameType State", "UPDATE_GAMETYPE_DEATHMATCH_BASIC returned false, transitioning to GAMETYPE_QUIT state.", 0, 0, 0, 0);
					iLocal_158 = 1;
				}
				break;
		}
		WAIT(false);
	}
	Function_141();
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_159.f_16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_159.f_16);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_159.f_20))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_159.f_20);
	}
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar2 = 0;
	}
	else if (Function_138())
	{
		iVar2 = Function_137();
	}
	else
	{
		iVar2 = Function_133();
	}
	bVar3 = false;
	if (NET_IS_IN_SESSION())
	{
		if (Function_500())
		{
			if (iVar2 >= 0)
			{
			}
			if (Function_138())
			{
				Function_87(iVar2, Function_127(), 1, 1);
			}
			else
			{
				Function_87(iVar2, 4294967295, 1, 1);
			}
		}
		else
		{
			if (iVar2 >= 0)
			{
			}
			bVar3 = true;
		}
	}
	else
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		Function_44(iVar2);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x296 / 662
{
	Function_42(Function_43());
	Function_26(&vLocal_52);
	Function_12(&Local_159 + 36, 1);
	Function_4(&Local_159 + 236);
	Function_2(&Local_159 + 148);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_2(int iParam0) //Position: 0x2C6 / 710
{
	Function_3(iParam0, 0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x2D2 / 722
{
	if (uParam0->f_72)
	{
		uParam0->f_72 = 0;
		UI_HIDE("ScoreGraph");
		UI_DEACTIVATE("ScoreGraph");
		uParam0->f_68 = iParam1;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x30A / 778
{
	PPP_UNLOAD_PRESET(iParam0->f_52);
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	Function_8(iParam0 + 64);
	if (IS_OBJECT_VALID(iParam0->f_28))
	{
		DESTROY_OBJECT(iParam0->f_28);
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	UI_EXIT("LoadingSpinner");
	UI_INCLUDE("FameText");
	if (!UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		UI_SHOW("FameText");
	}
	HUD_ENABLE(true);
	Function_5(5);
	if (iParam0->f_108 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_108);
		iParam0->f_108 = 0;
	}
	if (iParam0->f_112 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_112);
		iParam0->f_112 = 0;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3B7 / 951
{
	Function_6(&Global_83864 + 1252, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x3C9 / 969
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x3D6 / 982
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x3E9 / 1001
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_9(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x40F / 1039
{
	if (Function_11(uParam0[iParam13], 4))
	{
		if (Function_11(uParam0[iParam13], 1))
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
			Function_10(uParam0[iParam13], 1);
			Function_10(uParam0[iParam13], 2);
			Function_10(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x53D / 1341
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x557 / 1367
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(int iParam0, bool bParam1) //Position: 0x574 / 1396
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (IS_VOLUME_VALID(iParam0->f_84))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		DESTROY_VOLUME(iParam0->f_84);
	}
	if (IS_OBJECT_VALID(iParam0->f_40))
	{
		DESTROY_OBJECT(iParam0->f_40);
	}
	if (Function_24(iParam0, 8))
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
		UI_EXIT("MpWeaponSuppressor");
	}
	Function_23(0);
	if (bParam1)
	{
		if (IS_ACTOR_VALID(Function_22()))
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(Function_22(), 0,1f, 0,9f, 0);
		}
		UI_EXIT("XpHud");
		UI_EXIT("MpWeaponSuppressor");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	else if (!Function_24(iParam0, 64))
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
		UI_SHOW("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_RESTORE("WeaponAmmo");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	UI_EXIT("HudMPNoFun");
	Function_16(iParam0, bParam1);
	Function_13();
	if (iParam0->f_96 >= 4294967295)
	{
		NET_GAMER_SET_TEAM(iParam0->f_96, 3);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
		bVar0 = Function_22();
		if (IS_ACTOR_VALID(bVar0))
		{
			DECOR_REMOVE(bVar0, "ForceAim");
		}
	}
	Function_8(iParam0 + 48);
	return;
}

void Function_13() //Position: 0x6D9 / 1753
{
	Function_14(1024, 0, 1);
	Function_14(1, 0, 0);
	return;
}

void Function_14(int iParam0, bool bParam1, int iParam2) //Position: 0x6ED / 1773
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_15(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x715 / 1813
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(int iParam0, bool bParam1) //Position: 0x724 / 1828
{
	if (Function_24(iParam0, 2))
	{
		PPP_UNLOAD_PRESET(Function_21());
		PPP_UNLOAD_PRESET(Function_20());
		Function_19(iParam0, 2);
	}
	if (IS_OBJECT_VALID(iParam0->f_100))
	{
		DESTROY_OBJECT(iParam0->f_100);
	}
	if (Function_24(iParam0, 4))
	{
		PPP_UNLOAD_PRESET(Function_18());
		Function_19(iParam0, 4);
	}
	if (bParam1)
	{
		Function_17();
	}
	return;
}

void Function_17() //Position: 0x773 / 1907
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	return;
}

var Function_18() //Position: 0x77C / 1916
{
	return "MP_ShowdownBlueTeam.ppp";
}

void Function_19(int iParam0, int iParam1) //Position: 0x79C / 1948
{
	Function_7(iParam0 + 24, iParam1);
	return;
}

var Function_20() //Position: 0x7AB / 1963
{
	return "MP_WinningFrame.ppp";
}

var Function_21() //Position: 0x7C7 / 1991
{
	return "MP_ShowdownRedTeam.ppp";
}

bool Function_22() //Position: 0x7E6 / 2022
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_23(bool bParam0) //Position: 0x7FB / 2043
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bParam0)
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 2);
			}
			else
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 0);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_24(int iParam0, int iParam1) //Position: 0x830 / 2096
{
	return Function_25(iParam0->f_24, iParam1);
}

bool Function_25(var uParam0, int iParam1) //Position: 0x83F / 2111
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(int iParam0) //Position: 0x84C / 2124
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_39();
	bVar0 = Function_22();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_180))
	{
		DESTROY_OBJECT(iParam0->f_180);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	if (!Function_37(1))
	{
		UI_EXIT("MPSplash");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_36(81920, 0);
	Function_36(8388608, 0);
	Function_27(iParam0);
	if (iParam0->f_100 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
	}
	return;
}

void Function_27(int iParam0) //Position: 0x952 / 2386
{
	Function_33(iParam0);
	Function_28(iParam0, 0);
	Function_14(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_28(int iParam0, bool bParam1) //Position: 0x98C / 2444
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_29(StackVal, StackVal, Function_32(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		DESTROY_OBJECT(iParam0->f_112);
	}
	if (bParam1)
	{
		iParam0->f_112 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		RELEASE_OBJECT_REF(iParam0->f_148);
	}
	if (IS_VOLUME_VALID(iParam0->f_416))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
		DESTROY_VOLUME(iParam0->f_416);
	}
	if (IS_OBJECT_VALID(iParam0->f_104))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
	}
	if (Function_25(iParam0->f_48, 2))
	{
		Function_7(iParam0 + 48, 2);
	}
	Function_15(iParam0 + 48, 1);
	return;
}

var Function_29(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0xA1D / 2589
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	bVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_31(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_31(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_30(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_31(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_31(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_31(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_31(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_30(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(bVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(bVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar2;
}

void Function_30(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0xB56 / 2902
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_31(var uParam0, bool bParam1) //Position: 0xBAB / 2987
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_32() //Position: 0xBC5 / 3013
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_33(int iParam0) //Position: 0xBF4 / 3060
{
	Function_35(iParam0);
	Function_34(1048576);
	return;
}

void Function_34(int iParam0) //Position: 0xC06 / 3078
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_35(int iParam0) //Position: 0xC3F / 3135
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_92);
	}
	return;
}

void Function_36(int iParam0, bool bParam1) //Position: 0xC56 / 3158
{
	if (bParam1)
	{
		Function_15(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_7(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_37(int iParam0) //Position: 0xC91 / 3217
{
	return Function_38(Global_79336, iParam0);
}

int Function_38(var uParam0, bool bParam1) //Position: 0xCA0 / 3232
{
	return (uParam0 && bParam1) == 0;
}

void Function_39() //Position: 0xCAD / 3245
{
	if (Function_41(8))
	{
		Function_40();
	}
	Function_14(8, 0, 1);
	return;
}

void Function_40() //Position: 0xCC5 / 3269
{
	Function_14(32768, 1, 0);
	return;
}

bool Function_41(int iParam0) //Position: 0xCD4 / 3284
{
	return Function_25(Global_76905.f_132, iParam0);
}

void Function_42(bool bParam0) //Position: 0xCE5 / 3301
{
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	return;
}

bool Function_43() //Position: 0xCF5 / 3317
{
	return Global_83591.f_140;
}

void Function_44(int iParam0) //Position: 0xD01 / 3329
{
	bool bVar0;
	int iVar1[67];
	int iVar69;
	
	Function_81();
	Function_80();
	UI_EXIT("XpHud");
	if (iParam0 >= 0)
	{
		bVar0 = 4294967295;
		if (NET_IS_IN_SESSION())
		{
			bVar0 = GET_LOCAL_SLOT();
		}
		NET_START_LB_UPDATE(0);
		iVar1[6] = 1;
		NET_UPDATE_LEADERBOARD(bVar0, iParam0, 4294967295, &iVar1);
		NET_UPDATE_LEADERBOARD(bVar0, 3, 4294967295, &iVar1);
		NET_END_LB_UPDATE();
		Global_84364.f_776 = 4294967295;
		Function_46(0);
		if (NET_IS_IN_SESSION())
		{
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar69 = UNK_0xA684E813();
				if (iVar69 >= 4294967295)
				{
					Function_45(&Global_76943[iVar6996] + 220, &iVar1, 1);
					NET_REPORT_FRIEND_SCORES(iVar69, iParam0, &iVar1);
				}
			}
		}
	}
	return;
}

void Function_45(var uParam0, int iParam1, bool bParam2) //Position: 0xD93 / 3475
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*iParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*iParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_46(bool bParam0) //Position: 0xDD8 / 3544
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_78(2);
	if (bParam0)
	{
		Function_78(1);
	}
	else
	{
		Function_77(1);
	}
	Function_47();
	return;
}

void Function_47() //Position: 0xE61 / 3681
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_55();
	Function_55();
	if (!Function_54())
	{
		Function_52();
		Function_51();
		Function_50();
		Function_49();
	}
	Function_48();
	return;
}

void Function_48() //Position: 0xE94 / 3732
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

void Function_49() //Position: 0xF9A / 3994
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

void Function_50() //Position: 0xFCD / 4045
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

void Function_51() //Position: 0x115B / 4443
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

void Function_52() //Position: 0x130F / 4879
{
	Function_53(&Global_28260, 1, 0);
	return;
}

void Function_53(int iParam0, bool bParam1, var uParam2) //Position: 0x131D / 4893
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
	
	bVar0 = Function_22();
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

bool Function_54() //Position: 0x150E / 5390
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_55() //Position: 0x1517 / 5399
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
				iVar2 = ((Function_71((50 + iVar4)) + Function_71((183 + iVar4))) + Function_71((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x15B2 / 5554
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
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x184D / 6221
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_68(390))), 32);
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
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_58(), &Var9);
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

var Function_58() //Position: 0x1E7A / 7802
{
	int iVar0;
	
	return iVar0;
}

var Function_59(int iParam0) //Position: 0x1E82 / 7810
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E93 / 7827
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0, char* cParam1) //Position: 0x1F88 / 8072
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1FA1 / 8097
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_64(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, bool bParam1) //Position: 0x2006 / 8198
{
	if (iParam0 >= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x2018 / 8216
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x202A / 8234
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
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
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

int Function_66(int iParam0) //Position: 0x215A / 8538
{
	return Global_35278[iParam020].f_48;
}

float Function_67(int iParam0) //Position: 0x2169 / 8553
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_68(int iParam0) //Position: 0x21A2 / 8610
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_69(int iParam0) //Position: 0x21DF / 8671
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x2379 / 9081
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

int Function_71(bool bParam0) //Position: 0x2593 / 9619
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_72() //Position: 0x25D4 / 9684
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
		iVar2 = ((Function_71((50 + iVar3) + 15) + Function_71((183 + iVar3) + 15)) + Function_71((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x265D / 9821
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
			iVar2 = ((Function_71((50 + iVar3) + 8) + Function_71((183 + iVar3) + 8)) + Function_71((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x26F4 / 9972
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
		iVar2 = ((Function_71((50 + iVar3)) + Function_71((183 + iVar3))) + Function_71((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x2773 / 10099
{
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x2799 / 10137
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
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77(int iParam0) //Position: 0x29A3 / 10659
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_78(int iParam0) //Position: 0x29B2 / 10674
{
	Function_79(&Global_79338, iParam0);
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x29C1 / 10689
{
	Function_15(uParam0, iParam1);
	return;
}

void Function_80() //Position: 0x29CE / 10702
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

void Function_81() //Position: 0x29F8 / 10744
{
	Function_82(&(Global_50170[522]));
	Function_82(&(Global_50170[622]));
	Function_82(&(Global_50170[722]));
	Function_82(&(Global_50170[822]));
	Function_82(&(Global_50170[922]));
	Function_82(&(Global_50170[1022]));
	Function_82(&(Global_50170[1122]));
	return;
}

void Function_82(bool bParam0) //Position: 0x2A41 / 10817
{
	Global_56092[*bParam0] = 0;
	Function_83(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_83(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A5B / 10843
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_86(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_85(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_86(iParam0), &cVar0, 2, 2, true);
		Function_84(Function_86(iParam0), 0);
	}
}

void Function_84(bool bParam0, bool bParam1) //Position: 0x2B09 / 11017
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

struct<16> Function_85(int iParam0) //Position: 0x2B2E / 11054
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_86(int iParam0) //Position: 0x2B62 / 11106
{
	return Global_50170[iParam022].f_24;
}

void Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B71 / 11121
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_126(5, 1);
	Function_34(4096);
	switch (Function_125())
	{
		case 0x00000011:
		case 0x00000002:
			Function_88(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_81();
	Function_80();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_45(&Global_78480 + 220, &uVar0, 0);
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
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_45(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_46(bParam2);
}

void Function_88(var uParam0, var uParam1, int iParam2) //Position: 0x2C83 / 11395
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_116(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_123(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_83(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_124(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_116(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_123(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_83(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_124(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_89(17, 150, Function_123(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_83(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_89(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2E2C / 11820
{
	Function_113(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_86(iParam0), 1.0f, false, 0);
	Function_109(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_106(iParam3);
	}
	Function_101(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_90();
}

void Function_90() //Position: 0x2E92 / 11922
{
	if (!Function_54())
	{
		if (!Function_100(1, 3, 1, 1))
		{
			Function_92(1);
			Function_91(1, 8);
		}
	}
	else
	{
		Function_46(0);
	}
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x2EBB / 11963
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_54())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_92(bool bParam0) //Position: 0x2EFD / 12029
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_93();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_7(&Global_63095, 1);
		Function_7(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_93() //Position: 0x2F4E / 12110
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_95(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_95(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_94(StackVal, StackVal, vVar0))
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

bool Function_94(vector3 vParam0) //Position: 0x2FEF / 12271
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_95(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3007 / 12295
{
	int iVar0;
	
	iVar0 = Function_98(uParam2, uParam3);
	if (Function_97(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_15(&Global_63095, 1);
			Function_7(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_15(&Global_63095, 2);
			Function_7(&Global_63095, 1);
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
		Function_15(&Global_63095, 2);
		Function_7(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_96();
	return StackVal, StackVal, Function_96();
}

vector3 Function_96() //Position: 0x30EE / 12526
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_97(int iParam0) //Position: 0x30F7 / 12535
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_98(bool bParam0, bool bParam1) //Position: 0x310D / 12557
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
				fVar2 = Function_99(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_99(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_97(bVar0) && !bParam1)
	{
		bVar0 = Function_98(bParam0, 1);
	}
	return bVar0;
}

float Function_99(vector3 vParam0, vector3 vParam3) //Position: 0x31D4 / 12756
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_100(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x31F1 / 12785
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

void Function_101(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3295 / 12949
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_32();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_105(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_104(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_103(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_102(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_105(), iVar1 + 1);
	return;
}

struct<16> Function_102(int iParam0) //Position: 0x3307 / 13063
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_103(int iParam0) //Position: 0x3328 / 13096
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_104(int iParam0) //Position: 0x3349 / 13129
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_105() //Position: 0x336A / 13162
{
	return "CQueue_Count";
}

void Function_106(int iParam0) //Position: 0x337F / 13183
{
	Function_107(iParam0, 1);
	return;
}

void Function_107(int iParam0, bool bParam1) //Position: 0x338B / 13195
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_15(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_108((iVar0 % 32)));
	}
	else
	{
		Function_7(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_108((iVar0 % 32)));
	}
	return;
}

int Function_108(bool bParam0) //Position: 0x33E1 / 13281
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_109(int iParam0, int iParam1) //Position: 0x33ED / 13293
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_112(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_86(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_110(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_86(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_86(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_86(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_110(int iParam0) //Position: 0x346F / 13423
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_111(int iParam0) //Position: 0x348F / 13455
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_112(int iParam0) //Position: 0x34C0 / 13504
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

void Function_113(bool bParam0, bool bParam1) //Position: 0x363E / 13886
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_114();
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

var Function_114() //Position: 0x378A / 14218
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_115(var uParam0, bool bParam1, bool bParam2) //Position: 0x37D7 / 14295
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_116(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x37EF / 14319
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
	Function_101(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_115(&fParam5, bParam8, iParam9);
	Function_83(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_118(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_106(iParam12);
	}
	Function_117(iParam0, 4);
	Function_90();
}

void Function_117(int iParam0, int iParam1) //Position: 0x3865 / 14437
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_118(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3879 / 14457
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_112(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_86(iParam0));
	if ((bParam3 && Function_122(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_86(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_110(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_86(iParam0), &Var7, 0, 2, Function_122(iParam0, 4));
			if (!bParam3)
			{
				Function_119(iParam0, 4);
			}
		}
	}
}

void Function_119(int iParam0, int iParam1) //Position: 0x3936 / 14646
{
	Function_15(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_120(int iParam0) //Position: 0x394A / 14666
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_121(int iParam0) //Position: 0x3978 / 14712
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_122(int iParam0, bool bParam1) //Position: 0x39A8 / 14760
{
	return Function_25(Global_50170[iParam022].f_32, bParam1);
}

bool Function_123() //Position: 0x39BC / 14780
{
	return "MP_Unstoppable_Icon_128";
}

float Function_124(int iParam0) //Position: 0x39DC / 14812
{
	return Global_50170[iParam022].f_12;
}

int Function_125() //Position: 0x39EB / 14827
{
	return Global_79349.f_16;
}

void Function_126(int iParam0, int iParam1) //Position: 0x39F7 / 14839
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_127() //Position: 0x3A1C / 14876
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_128(GET_LOCAL_SLOT(), 1, 0);
}

bool Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3A33 / 14899
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_132(bParam0))
			{
				if (!Function_129(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_129(bool bParam0, int iParam1, bool bParam2) //Position: 0x3A77 / 14967
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_131(iParam1, bParam2);
	}
	if (!Function_132(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_130(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_130(int iParam0) //Position: 0x3AF8 / 15096
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
	}
	return "UNKNOWN";
}

bool Function_131(int iParam0, bool bParam1) //Position: 0x3D81 / 15745
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_132(bool bParam0) //Position: 0x3DA1 / 15777
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

int Function_133() //Position: 0x3E42 / 15938
{
	if (Function_136())
	{
		return 93;
	}
	if (Function_135())
	{
		return 95;
	}
	if (Function_134())
	{
		return 94;
	}
	return 4;
}

bool Function_134() //Position: 0x3E6A / 15978
{
	return Function_25(Global_79962, 512);
}

bool Function_135() //Position: 0x3E7A / 15994
{
	return Function_25(Global_79962, 256);
}

bool Function_136() //Position: 0x3E8A / 16010
{
	return Function_25(Global_79962, 16384);
}

int Function_137() //Position: 0x3E9A / 16026
{
	if (Function_136())
	{
		return 96;
	}
	if (Function_135())
	{
		return 98;
	}
	if (Function_134())
	{
		return 97;
	}
	return 1;
}

bool Function_138() //Position: 0x3EC2 / 16066
{
	return Function_139(2);
}

int Function_139(int iParam0) //Position: 0x3ECC / 16076
{
	return Function_140(&Global_79349, iParam0);
}

int Function_140(var uParam0, var uParam1) //Position: 0x3EDB / 16091
{
	return Function_25(uParam0->f_44, uParam1);
}

void Function_141() //Position: 0x3EEA / 16106
{
	if (bLocal_305)
	{
		Function_142();
		PRINTSTRING("Game End");
		PRINTNL();
	}
	return;
}

void Function_142() //Position: 0x3F0A / 16138
{
	if (bLocal_305)
	{
		PRINTSTRING("[RESPAWNLOG],");
		PRINTFLOAT(NET_GET_NET_TIME());
		PRINTSTRING(",");
		if (NET_IS_IN_SESSION())
		{
			PRINTSTRING(GET_SLOT_NAME(GET_LOCAL_SLOT()));
		}
		else
		{
			PRINTSTRING("OutOfSession");
		}
		PRINTSTRING(",");
	}
	return;
}

bool Function_143() //Position: 0x3F61 / 16225
{
	int iVar0;
	
	iVar0 = 1;
	Function_392(2);
	if (NET_IS_SESSION_HOST())
	{
		Function_382();
	}
	iVar0 = (iVar0 && Function_144());
	return iVar0;
}

int Function_144() //Position: 0x3F82 / 16258
{
	int iVar0;
	
	Function_375(&Global_78578 + 96, &Local_159, &Local_159 + 8, Global_83591.f_16, 0);
	if (Function_373())
	{
		if (!Function_25(StackVal, 64))
		{
			Function_15(&Local_159 + 4, 64);
			AUDIO_MUSIC_SET_MOOD("OVERTIME", 0, 4294967295, 4294967295);
			if (Function_138())
			{
				Function_372("TDM_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_372("DM_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			Function_371("GENMESS_OTENGAGED", 0);
		}
		Function_366(&Local_159 + 148, 4294967295);
	}
	else
	{
		Function_366(&Local_159 + 148, Global_83591);
	}
	if (Function_365(&vLocal_52))
	{
		if (Function_500())
		{
			Function_364(&vLocal_52);
		}
	}
	if (Function_269(&Local_159 + 36, &Local_247))
	{
		if (!Local_159.f_228)
		{
			Local_159.f_228 = 1;
			Function_266(&vLocal_52);
			if (Function_265(&vLocal_52))
			{
				Function_264(&vLocal_52, 0);
				Function_263(&vLocal_52);
			}
			Function_262(&vLocal_52, 0);
			Function_261(&Local_159 + 148);
		}
		if (NET_IS_SESSION_HOST())
		{
			if (!Function_260(&Global_78578 + 96))
			{
				Function_257(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	iVar0 = Function_145(&vLocal_52);
	if (iVar0 == 0)
	{
	}
	else if (iVar0 == 3)
	{
		return 0;
	}
	if (iVar0 == 2)
	{
		return 0;
	}
	return 1;
}

int Function_145(int iParam0) //Position: 0x40E6 / 16614
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	void fVar15;
	
	bVar0 = Function_22();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	iParam0->f_64 = Function_256((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_138())
	{
		if (bVar1)
		{
			switch (Function_127())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(bVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(bVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(bVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(bVar0, iParam0->f_52);
	}
	if (Function_255(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_25(iParam0->f_44, 2) || Function_25(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					iParam0->f_96 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	fVar8 = Function_254();
	if (bVar1)
	{
		bVar9 = Function_253(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_104 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_139(8192) || Function_25(iParam0->f_48, 512)) && !Function_131(1, 1))
			{
				iVar6 = Function_252(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_25(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_15(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_372("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_251(2, NET_GET_NET_TIME());
								Function_248(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_36(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(bVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_247(2));
						if (!Function_131(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_7(iParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(bVar0, 60.0f);
							DECOR_REMOVE(bVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(bVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(bVar0, "Drowned", true);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", true);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_36(65536, 0);
					Function_7(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_36(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_131(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_36(8388608, 0);
					}
				}
			}
			if (Function_246(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_25(iParam0->f_44, 16))
					{
						Function_15(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_245(iParam0 + 108, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_7(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_180))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_180))
				{
					Function_244(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_14(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_36(65536, 0);
			Function_36(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_25(iParam0->f_44, 8))
			{
				Function_243(0);
			}
			else if (bVar1)
			{
				iParam0->f_144 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			iParam0->f_56 = 4294967295;
			iParam0->f_68 = 0.0f;
			if (Function_242(iParam0 + 108, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_104 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_104 = "";
						break;
					
					default:
						break;
					}
			}
			Function_238(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_222(iParam0, iParam0->f_12 != 0);
			}
			Function_219(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_219(iParam0, 1);
			if ((iParam0->f_12 >= 0 && iParam0->f_64 <= 4.0f) || (iParam0->f_12 < 0 && iParam0->f_64 <= 2.0f))
			{
				if (iParam0->f_12 < 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iParam0->f_64 = 0.0f;
			*iParam0 = 5;
		
		case 0x00000005:
			Function_219(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_25(iParam0->f_44, 512))
				{
					*iParam0 = 8;
				}
				else if (iParam0->f_12 < 1)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_219(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_218();
				Function_14(32, 0, 1);
				Function_217();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_219(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_39();
			}
			break;
		
		case 0x00000008:
			if (Function_25(iParam0->f_44, 2))
			{
				if (Function_25(iParam0->f_44, 512))
				{
					if (!Function_25(iParam0->f_48, 4096))
					{
						Function_28(iParam0, 1);
						Function_15(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_131(16384, 1))
						{
							Function_28(iParam0, 0);
							Function_36(16384, 1);
							iParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(iParam0->f_84))
					{
						TERMINATE_SCRIPT(iParam0->f_84);
					}
					Function_219(iParam0, 1);
				}
			}
			else
			{
				Function_219(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_219(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_216(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
				if (iParam0->f_64 > 0.0f)
				{
					iParam0->f_64 = 0.0f;
				}
			}
			if (iParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				iParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_217();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_215();
				Function_39();
				Function_14(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_32(), Function_58(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_100 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_100 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
				}
				iParam0->f_100 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_100, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_100, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_168);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_25(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_15(iParam0 + 48, 8);
				}
				if (Function_210(StackVal, Function_25(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_195(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_25(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_25(iParam0->f_44, 1))
				{
					Function_7(iParam0 + 44, 1);
				}
				else
				{
					Function_33(iParam0);
					Function_28(iParam0, 0);
				}
				bVar0 = Function_22();
				Function_194(bVar0);
				if (Function_25(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_180))
				{
					DESTROY_OBJECT(iParam0->f_180);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_416))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
					DESTROY_VOLUME(iParam0->f_416);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_191(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*iParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && iParam0->f_64 > 60.0f)
			{
				if (iParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_190(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_25(iParam0->f_44, 8))
				{
					Function_189(iParam0 + 184, 0, 1, 1);
					Function_184(iParam0 + 184);
					Function_175(&bVar0, 0, 0, 0);
					Function_175(&bVar0, 0, 0, 0);
					Function_174(bVar0);
				}
				else
				{
					Function_189(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_173(bVar0);
					vVar10 = { StackVal, StackVal, Function_173(bVar0) };
					bVar13 = Function_172(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_171(bVar13))
					{
						iParam0->f_4 = bVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_167(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_166(&(Global_29008[StackVal]), 4194304);
				}
				Function_165(32);
				*iParam0 = 13;
			}
			if (!Function_25(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
				if (StackVal)
				{
					Function_15(iParam0 + 48, 128);
					Function_7(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_165(32);
				Function_167(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_171(StackVal))
			{
				if (Function_164(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_163(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_163(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_163(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*iParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_171(bVar14))
					{
						if (StackVal && (!Function_164(bVar14) && !Function_163(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_162(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_161();
			if (!Function_25(iParam0->f_44, 32))
			{
				if (Function_159())
				{
					fVar15 = 4294967295;
					if (iParam0->f_144 >= 4294967295)
					{
						fVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_144);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
					}
					if (fVar15 == 4294967295)
					{
						fVar15 = Function_158(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_158(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_158(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_158(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_158(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_158(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_158(bVar0, 46);
												if (fVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_25(iParam0->f_44, 64))
				{
					Function_157(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_36(16384, 0);
			Function_155(bVar0, !Function_25(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_152);
			iParam0->f_104 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_219(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_217();
			}
			else if (!Function_153())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_147(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_146(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_219(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_219(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_25(iParam0->f_44, 4))
				{
					*iParam0 = 17;
				}
				else
				{
					*iParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_219(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_216(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_219(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_216(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_219(iParam0, 1);
			if (Function_153())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_216(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_146(int iParam0) //Position: 0x4FDE / 20446
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_147(int iParam0) //Position: 0x4FFA / 20474
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_215();
		iVar0 = "";
		if (Function_25(iParam0->f_44, 256))
		{
			if (Function_25(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_260(&Global_78578 + 96))
			{
				if (FABS(Function_148(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, iVar0);
		NET_LOG(true, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

float Function_148(int iParam0) //Position: 0x50EB / 20715
{
	return -Function_149(iParam0);
}

float Function_149(int iParam0) //Position: 0x50F7 / 20727
{
	if (Function_260(iParam0))
	{
		if (Function_152(iParam0))
		{
			return StackVal;
		}
		Function_150();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_150() //Position: 0x51C8 / 20936
{
	if (!Function_151())
	{
	}
	return;
}

bool Function_151() //Position: 0x51D5 / 20949
{
	return NET_IS_IN_SESSION();
}

bool Function_152(int iParam0) //Position: 0x51DE / 20958
{
	return Function_25(*iParam0, 2);
}

bool Function_153() //Position: 0x51EB / 20971
{
	return (HUD_IS_FADED() || Function_154(0));
}

bool Function_154(bool bParam0) //Position: 0x51F9 / 20985
{
	bool bVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			bVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (bParam0)
		{
		}
	}
	else if (bParam0)
	{
	}
	return 0;
}

void Function_155(bool bParam0, int iParam1) //Position: 0x529D / 21149
{
	struct<5> Var0;
	
	Function_36(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_156(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

bool Function_156(bool bParam0) //Position: 0x52F3 / 21235
{
	return Function_38(Global_78617.f_52, bParam0);
}

void Function_157(bool bParam0) //Position: 0x5304 / 21252
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

int Function_158(bool bParam0, int iParam1) //Position: 0x5321 / 21281
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_159() //Position: 0x5332 / 21298
{
	return !Function_160();
}

bool Function_160() //Position: 0x533C / 21308
{
	if (Function_54())
	{
		return (Function_125() != 1 || Function_125() != 0);
	}
	return 0;
}

void Function_161() //Position: 0x5355 / 21333
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_22();
	if (IS_ACTOR_VALID(bVar1))
	{
		bVar0 = false;
		while (bVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, bVar0))
			{
				SET_WEAPON_GOLD(bVar1, bVar0, Global_83823[bVar0]);
			}
			bVar0++;
		}
	}
	return;
}

void Function_162(bool bParam0) //Position: 0x5394 / 21396
{
	if (!Function_171(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_166(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_163(var uParam0, int iParam1) //Position: 0x53EF / 21487
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_164(bool bParam0) //Position: 0x540B / 21515
{
	if (!Function_171(bParam0))
	{
		return 1;
	}
	return Function_163(&(Global_29008[bParam0]), 4);
}

void Function_165(int iParam0) //Position: 0x5427 / 21543
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x5438 / 21560
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_167(int iParam0, bool bParam1, int iParam2) //Position: 0x5447 / 21575
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_171(Global_29006))
		{
			Function_166(&(Global_29008[Global_29006]), 131072);
			Function_170(&(Global_29008[Global_29006]), 2097152);
			Function_168(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_163(&(Global_29008[iVar0]), 4) || Function_163(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_170(&(Global_29008[iVar0]), 2097155);
					Function_166(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_54())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_168(int iParam0) //Position: 0x5552 / 21842
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_169())
			{
				return;
			}
		}
		if (!Function_163(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_169() //Position: 0x55D1 / 21969
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_163(&(Global_29008[iVar0]), 4) || Function_163(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_170(var uParam0, int iParam1) //Position: 0x562E / 22062
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_171(bool bParam0) //Position: 0x5645 / 22085
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_172(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x565B / 22107
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

vector3 Function_173(bool bParam0) //Position: 0x56F6 / 22262
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_174(bool bParam0) //Position: 0x5707 / 22279
{
	bool bVar0;
	void fVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (fVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, fVar1, GET_WEAPON_MAX_AMMO(fVar1));
		}
		bVar0++;
	}
	return;
}

var Function_175(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x573A / 22330
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*bParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			bVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(*bParam0, bVar2))
				{
					bVar3 = GET_AMMO_ENUM(bVar2);
					if (Function_183(bVar3, 1))
					{
						iVar5[bVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				bVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_182(&Global_83591 + 276, bVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					bVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_181(bVar2))
					{
						if (Function_180(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_183(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				bVar2 = false;
				while (bVar2 <= 40)
				{
					if (Global_84559[bVar2])
					{
						bVar3 = GET_AMMO_ENUM(bVar2);
						if (Function_183(bVar3, 1))
						{
							bVar24 = (Function_182(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
							}
						}
					}
					bVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_32(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_32(), &cVar28, &uVar26))
						{
							Function_176(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_183(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return iVar0;
}

void Function_176(var uParam0, int iParam1) //Position: 0x5A1D / 23069
{
	*iParam1 = Function_177(uParam0, Function_178(), 0);
	iParam1->f_4 = Function_177(uParam0, Function_178() + 8, Function_178());
	return;
}

var Function_177(var uParam0, int iParam1, int iParam2) //Position: 0x5A40 / 23104
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_108((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

int Function_178() //Position: 0x5A5F / 23135
{
	return Function_179(39);
}

int Function_179(int iParam0) //Position: 0x5A6A / 23146
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool Function_180(bool bParam0) //Position: 0x5A98 / 23192
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_181(bool bParam0) //Position: 0x5ABA / 23226
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_182(int iParam0, bool bParam1) //Position: 0x5ACC / 23244
{
	if (Function_183(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_183(bool bParam0, int iParam1) //Position: 0x5AE6 / 23270
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_184(int iParam0) //Position: 0x5AF9 / 23289
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_186(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_32(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_32(), &cVar3, &uVar1))
			{
				Function_176(uVar1, &Var11);
				Function_185(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_185(struct<5> Param0) //Position: 0x5B70 / 23408
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_181(Param0))
	{
		return;
	}
	bVar0 = Function_22();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_183(bVar1, 1))
			{
				bVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					bVar2 = (bVar2 - _GET_AMMO_AMOUNT(bVar0, bVar1, 0));
				}
				if (bVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, bVar1, bVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

void Function_186(int iParam0, int iParam1) //Position: 0x5BE4 / 23524
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_22();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_187(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_187(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_187(23, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, (*iParam0 + 1088)[iVar1]);
			}
			iVar1++;
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1124))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1124);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1128))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1128);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1120 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1120))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1120);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			bVar4 = Function_158(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_158(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_187(int iParam0, int iParam1) //Position: 0x5D61 / 23905
{
	return Function_188(iParam0, iParam1) < 4294967295;
}

int Function_188(int iParam0, int iParam1) //Position: 0x5D70 / 23920
{
	int iVar0;
	
	if (!Function_181(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == (*iParam1)[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_189(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5DA3 / 23971
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_22();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(bVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(bVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_185(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_190(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5DEE / 24046
{
	float fVar0;
	bool bVar1;
	
	if (Function_54() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x5E8B / 24203
{
	int iVar0;
	
	if (bParam1)
	{
		Function_79(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_79(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_79(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_79(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_79(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_79(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_79(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_79(&iVar0, 1048576);
	}
	return Function_192(bParam0, iVar0);
}

bool Function_192(bool bParam0, int iParam1) //Position: 0x5EFA / 24314
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_193(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_193(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_193(var uParam0, int iParam1) //Position: 0x5FD3 / 24531
{
	return (uParam0 && iParam1) == 0;
}

void Function_194(bool bParam0) //Position: 0x5FE0 / 24544
{
	Function_36(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_195(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x6001 / 24577
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_22();
	Function_206();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_205();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_192(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, true, 1);
	}
	else
	{
		bVar9 = Function_156(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_202(bVar0, 0);
		Function_197();
		Function_196(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_172(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_171(uVar14))
			{
				Var10.f_4 = uVar14;
			}
			else
			{
				Var10.f_4 = Global_29006;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var10, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var10, 4, 1);
		}
	}
	return 1;
}

void Function_196(char* cParam0, vector3 vParam1) //Position: 0x6178 / 24952
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_197() //Position: 0x61B6 / 25014
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_201(iVar1))
		{
			uVar2 = Function_200(iVar1);
			Function_198(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_198(int iParam0, bool bParam1) //Position: 0x61E8 / 25064
{
	if (!Function_201(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_199(222, Global_26401[iParam0], 0);
		if (Function_71(222) <= 0)
		{
			Function_56(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_56((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_199((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_199(222, bParam1, 0);
	}
	return;
}

int Function_199(int iParam0, bool bParam1, int iParam2) //Position: 0x6271 / 25201
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
		Function_57(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_200(int iParam0) //Position: 0x646C / 25708
{
	if (!Function_201(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_201(int iParam0) //Position: 0x6484 / 25732
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_202(bool bParam0, bool bParam1) //Position: 0x6499 / 25753
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_204(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_139(8192) && !Function_131(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_160())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	iVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(iVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(iVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_203())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_203() //Position: 0x6599 / 26009
{
	return Function_25(Global_79962, 2048);
}

var Function_204(bool bParam0) //Position: 0x65A9 / 26025
{
	bool bVar0;
	
	bVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return bVar0;
	}
	bVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return bVar0;
}

void Function_205() //Position: 0x65DE / 26078
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_206() //Position: 0x65F3 / 26099
{
	Function_209();
	Function_81();
	Function_207();
	return;
}

void Function_207() //Position: 0x6602 / 26114
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_208();
	return;
}

void Function_208() //Position: 0x6636 / 26166
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_209() //Position: 0x6647 / 26183
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_210(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6660 / 26208
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	bool bVar15;
	char* cVar16[64];
	bool bVar32;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_214(bParam0);
	Var6 = { StackVal, StackVal, Function_214(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	bVar15 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bParam0));
	if (IS_LAYOUTREF_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_LAYOUT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_213(bVar32);
			vVar12.f_4 = Function_211(StackVal, StackVal, StackVal, StackVal, vVar3, Function_213(bVar32));
		}
	}
	return Function_195(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_211(vector3 vParam0, vector3 vParam3) //Position: 0x671A / 26394
{
	var uVar0;
	
	Function_212(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6734 / 26420
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_213(bool bParam0) //Position: 0x6757 / 26455
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

vector3 Function_214(bool bParam0) //Position: 0x677E / 26494
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_215() //Position: 0x678F / 26511
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_216(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x67A4 / 26532
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

void Function_217() //Position: 0x67CD / 26573
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_218() //Position: 0x6827 / 26663
{
	if (!Function_41(8))
	{
		Function_40();
	}
	Function_14(8, 1, 1);
	return;
}

void Function_219(int iParam0, int iParam1) //Position: 0x6840 / 26688
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_112))
	{
		return;
	}
	if (Function_25(iParam0->f_48, 256) || Function_25(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_25(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_192(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_7(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_120);
				DETACH_CAMERASHOT(iParam0->f_124);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_221(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_25(iParam0->f_48, 8192))
		{
			Function_15(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_220(1048576);
			if (IS_OBJECT_VALID(iParam0->f_116) && IS_OBJECT_VALID(iParam0->f_120))
			{
				GET_POSITION(iParam0->f_104, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_120, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_124, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_120, iParam0->f_104, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_124, iParam0->f_104, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_104, 1);
		}
	}
	return;
}

void Function_220(int iParam0) //Position: 0x6A31 / 27185
{
	Function_79(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_221(int iParam0) //Position: 0x6A8A / 27274
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_116));
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0x6ACB / 27339
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_22();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_32();
	Function_173(bVar0);
	vVar2 = { StackVal, StackVal, Function_173(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_237(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_237(bVar0));
	}
	else
	{
		Function_237(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_237(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_233(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_15(iParam0 + 48, 256);
	}
	else
	{
		Function_173(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_173(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_225(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_224(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_15(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_223(iParam0->f_112);
	return;
}

void Function_223(int iParam0) //Position: 0x6C3D / 27709
{
	Function_205();
	Global_63118 = iParam0;
	return;
}

void Function_224(bool bParam0, bool bParam1) //Position: 0x6C4B / 27723
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_225(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x6C60 / 27744
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_226(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_226(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6CE2 / 27874
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_232(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_231(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_230(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_229(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_228(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_227(&iVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0,65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0,25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1,5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0,35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0,35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_227(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6DFD / 28157
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_228(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6F12 / 28434
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_229(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x702B / 28715
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_230(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7135 / 28981
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_231(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x723B / 29243
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3,512409f, 1,385313f, 11,99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,000168f, 1,399967f, 0,006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_232(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x72EB / 29419
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6,044836f, 1,844389f, 8,871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,125951f, 1,612884f, -0,415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_233(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x73A2 / 29602
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_234(&bVar0, uParam2);
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

void Function_234(var uParam0, int iParam1) //Position: 0x7419 / 29721
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_236(&iVar0, iParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_235(&iVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_235(var uParam0, bool bParam1) //Position: 0x7485 / 29829
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,221893f, 12.0f, 0,202029f };
	Function_237(bParam1);
	vVar3 = { StackVal, StackVal, Function_237(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_213(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_213(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_237(bParam1);
	vVar6 = { StackVal, StackVal, Function_237(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_213(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_213(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_236(var uParam0, bool bParam1) //Position: 0x7547 / 30023
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,17905f, 10.0f, 0,125767f };
	Function_237(bParam1);
	vVar3 = { StackVal, StackVal, Function_237(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_213(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_213(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_237(bParam1);
	vVar6 = { StackVal, StackVal, Function_237(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_213(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_213(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_237(bool bParam0) //Position: 0x7609 / 30217
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

void Function_238(int iParam0) //Position: 0x7630 / 30256
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_25(iParam0->f_48, 2048))
	{
		Function_15(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		if (!IS_ACTOR_VALID(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_104))
		{
			bVar2 = (&Global_78617 + 2604)->f_12;
			if (Function_181(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_239("MPSplashItem.s1"));
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_104));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_104);
			bVar1 = true;
		}
		else
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_181(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_104, &vVar19);
						bVar22 = CEIL((VDIST(vVar19, *(&Global_78617 + 2604 + 16)) * 1,093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar22), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

bool Function_239(bool bParam0) //Position: 0x7951 / 31057
{
	switch (bParam0)
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

struct<64> Function_240(bool bParam0) //Position: 0x7B65 / 31589
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241();
	}
	if (!Function_132(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_241() //Position: 0x7BC3 / 31683
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_242(var uParam0, int iParam1) //Position: 0x7BD4 / 31700
{
	if (Function_246(uParam0, iParam1))
	{
		Function_245(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_243(int iParam0) //Position: 0x7BEE / 31726
{
	Function_53(&Global_79378, 0, iParam0);
	return;
}

void Function_244(bool bParam0, bool bParam1) //Position: 0x7BFE / 31742
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_32(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_181(bVar2))
			{
				SET_WEAPON_GOLD(bParam1, bVar2, Global_83823[bVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(bParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_245(var uParam0, int iParam1) //Position: 0x7C7A / 31866
{
	*uParam0 = *iParam1;
	return;
}

bool Function_246(var uParam0, int iParam1) //Position: 0x7C86 / 31878
{
	return *uParam0 == *iParam1;
}

float Function_247(int iParam0) //Position: 0x7C93 / 31891
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_248(int iParam0, int iParam1) //Position: 0x7CA3 / 31907
{
	Function_249(iParam0, (Function_250(iParam0) + iParam1));
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0x7CB6 / 31926
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_250(int iParam0) //Position: 0x7CDF / 31967
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_251(int iParam0, int iParam1) //Position: 0x7CEF / 31983
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_252(int iParam0, bool bParam1, int iParam2) //Position: 0x7D18 / 32024
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_132(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_129(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_253(int iParam0) //Position: 0x7D5F / 32095
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_254() //Position: 0x7D75 / 32117
{
	if (Function_25(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_255(int iParam0) //Position: 0x7D95 / 32149
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_256(int iParam0, int iParam1) //Position: 0x7DA7 / 32167
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_257(int iParam0, float fParam1) //Position: 0x7DBA / 32186
{
	Function_258(iParam0, -fParam1);
	return;
}

void Function_258(var uParam0, float fParam1) //Position: 0x7DC8 / 32200
{
	Function_150();
	Function_259(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_259(var uParam0, int iParam1) //Position: 0x7DDC / 32220
{
	uParam0->f_4 = iParam1;
	Function_15(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_260(int iParam0) //Position: 0x7DF9 / 32249
{
	return Function_25(*iParam0, 1);
}

void Function_261(int iParam0) //Position: 0x7E06 / 32262
{
	iParam0->f_68 = 1;
	return;
}

void Function_262(int iParam0, bool bParam1) //Position: 0x7E11 / 32273
{
	if (bParam1)
	{
		Function_15(iParam0 + 44, 32);
	}
	else
	{
		Function_7(iParam0 + 44, 32);
	}
	return;
}

void Function_263(int iParam0) //Position: 0x7E31 / 32305
{
	Function_7(iParam0 + 44, 512);
	return;
}

void Function_264(int iParam0, bool bParam1) //Position: 0x7E41 / 32321
{
	if (bParam1)
	{
		Function_15(iParam0 + 44, 2);
	}
	else
	{
		Function_7(iParam0 + 44, 2);
	}
	return;
}

bool Function_265(int iParam0) //Position: 0x7E5F / 32351
{
	return Function_25(iParam0->f_44, 32);
}

void Function_266(int iParam0) //Position: 0x7E6E / 32366
{
	Function_267(iParam0, 32393);
	return;
}

void Function_267(int iParam0, int iParam1) //Position: 0x7E7D / 32381
{
	iParam0->f_168 = iParam1;
	return;
}

int Function_268() //Position: 0x7E89 / 32393
{
	return 0;
}

bool Function_269(int iParam0, int iParam1) //Position: 0x7E90 / 32400
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = "";
	if (!Function_363() && *iParam0 > 9)
	{
		*iParam0 = 9;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_357(iParam0 + 48))
			{
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_24(iParam0, 1) || Function_24(iParam0, 64))
			{
				if (Function_24(iParam0, 64))
				{
					Function_356(1);
				}
				else
				{
					Function_355();
				}
				bVar1 = Function_22();
				if (Function_24(iParam0, 8))
				{
				}
				else
				{
					Function_354(bVar1);
				}
				if (Function_260(iParam1) || Function_353(2))
				{
					Function_352(iParam0);
					if (Function_24(iParam0, 8))
					{
						*iParam0 = 5;
					}
					else
					{
						Function_351(bVar1, iParam0);
						*iParam0 = 7;
					}
				}
				else
				{
					*iParam0 = 2;
					iParam0->f_108 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_349(iParam1, 0, (iParam0->f_108 % 30) != 0))
			{
				Function_356(1);
				*iParam0 = 3;
				iParam0->f_108 = 0;
			}
			else
			{
				Function_342(iParam0, iParam1);
				iParam0->f_108++;
			}
			break;
		
		case 0x00000003:
			if (Function_349(iParam1, 1, (iParam0->f_108 % 30) != 0))
			{
				Function_352(iParam0);
				iParam0->f_44 = 4294967295;
				if (Function_24(iParam0, 8))
				{
					Function_339(iParam1);
					if (Function_24(iParam0, 64))
					{
						*iParam0 = 5;
					}
					else
					{
						iParam0->f_36 = Function_325(Function_43(), Function_127());
						Function_318(iParam0);
						*iParam0 = 4;
						Function_23(1);
					}
				}
				else
				{
					if (IS_STRING_VALID(&Global_83591 + 28[09]))
					{
						Function_317(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
					}
					if (Function_24(iParam0, 64))
					{
						*iParam0 = 7;
					}
					else
					{
						iParam0->f_36 = Function_303(Function_43(), iParam0);
						Function_297(iParam0, iParam1);
						*iParam0 = 8;
						Function_296(iParam0);
					}
				}
				if (NET_IS_SESSION_HOST())
				{
					Function_295(2, 1);
				}
			}
			else
			{
				iParam0->f_108++;
				Function_342(iParam0, iParam1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_318(iParam0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				Function_16(iParam0, 1);
				*iParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (!Function_260(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_257(iParam1, 6.0f);
				}
			}
			else if (Function_294(iParam1))
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_293("showdown_draw", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_371("GENMESS_SDOWNSTARTS", 0);
				DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
				if (!Function_24(iParam0, 64))
				{
					Function_290();
					bVar1 = Function_22();
					Function_289(bVar1, iParam0);
				}
				Function_13();
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_148(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					switch (StackVal)
					{
						case 0x00000004:
							Function_293("showdown_ready", iVar2, 2.0f, 0, 0, 0, 0);
							Function_371("GENMESS_SDABOUTSTART", 0);
							break;
						}
					}
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_297(iParam0, iParam1);
			}
			else
			{
				if (!Function_24(iParam0, 64))
				{
					UI_SHOW("Reticle");
					SET_PLAYER_CONTROL(0, 1, 1, 1);
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
				}
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (!Function_260(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_257(iParam1, (4.0f + 1.0f));
				}
			}
			else if (Function_294(iParam1))
			{
				if (!Function_24(iParam0, 64))
				{
					Function_16(iParam0, 1);
					Function_290();
					UI_EXIT("MPSplash");
					Function_288(Function_22(), iParam0);
				}
				Function_13();
				Function_293("standoff_go", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_371("GENMESS_STANDSTART", 0);
				AUDIO_MUSIC_SUSPEND(0);
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_148(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					if (bVar0 != 4 && 0)
					{
						Function_293("standoff_wait", iVar2, 2.0f, 0, 0, 0, 0);
					}
					else if (bVar0 == 4)
					{
						Function_371("GENMESS_STANDABOUTSTART", 0);
						Function_293("showdown_ready", iVar2, 3.0f, 0, 0, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			Function_12(iParam0, 0);
			if (NET_IS_SESSION_HOST())
			{
				Function_287(iParam1 + 12);
			}
			*iParam0 = 10;
		
		case 0x0000000A:
			Function_285(iParam0);
			if (Function_272(iParam0, iParam1))
			{
				*iParam0 = 11;
				Function_271();
				iParam0->f_88 = GET_CURRENT_GAME_TIME();
			}
			break;
		
		case 0x0000000B:
			Function_285(iParam0);
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 6.0f)
			{
				UI_HIDE("XpHud");
				Function_12(iParam0, 1);
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (NET_IS_SESSION_HOST())
			{
				Function_295(3, 0);
			}
			Function_285(iParam0);
			if (!Function_24(iParam0, 128))
			{
				if (iParam0->f_88 != 0.0f || (GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 10.0f)
				{
					if (Function_151())
					{
						if (Function_260(&Global_78578 + 96))
						{
							if (Function_148(&Global_78578 + 96) < (Global_83591.f_16 * 0,5f))
							{
								if (IS_STRING_VALID(&Global_83591 + 28[09]))
								{
									Function_317(&Global_83591 + 28[09], (&Global_83591 + 28[09])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
							else if (Function_148(&Global_78578 + 96) < 30.0f)
							{
								if (IS_STRING_VALID(&Global_83591 + 28[19]))
								{
									Function_317(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
						}
					}
					Function_270(iParam0, 128);
				}
			}
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_270(int iParam0, int iParam1) //Position: 0x846E / 33902
{
	Function_15(iParam0 + 24, iParam1);
	return;
}

void Function_271() //Position: 0x847D / 33917
{
	float fVar0;
	bool bVar1;
	
	fVar0 = (UI_ANIM_GET_TIME("XpComboTimer") / 20.0f);
	bVar1 = FLOOR((32.0f * fVar0));
	UI_ANIM_SETUP("XpComboTimer", 0.0f, bVar1, bVar1);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

bool Function_272(int iParam0, int iParam1) //Position: 0x84D3 / 34003
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;
	
	if (NET_IS_SESSION_HOST() && iParam1->f_16 != 4294967295)
	{
		Function_283(iParam0, iParam1);
	}
	if (iParam1->f_16 == 4294967295)
	{
		return 0;
	}
	iVar0 = "";
	if (iParam1->f_16 == 4294967292)
	{
		if (Function_24(iParam0, 8))
		{
			Function_293("showdown_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_371("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_293("standoff_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_371("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		Function_281("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		return 1;
	}
	if (iParam1->f_16 == 4294967291)
	{
		Function_293("showdown_tie", iVar0, 2.0f, 0, 0, 0, 0);
		Function_281("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (Function_24(iParam0, 8))
		{
			Function_371("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_371("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		return 1;
	}
	if (Function_24(iParam0, 8))
	{
		bVar1 = Function_25(iParam1->f_16, 4);
		iVar2 = iParam1->f_16 & 1;
		Var3 = { StackVal, StackVal, StackVal, Function_277(iVar2, 0) };
		if (iVar2 == Function_127())
		{
			bVar7 = "mp_teammsg_blue_start";
			iVar8 = "mp_teammsg_blue_end";
			Function_281("FTR_BOUNTY_HUNTER_COMPLETE_SONG_01", 1, 0, 0, 0, 0);
			if (Function_276(iParam1, GET_LOCAL_SLOT()))
			{
				if (bVar1)
				{
					Function_273(100.0f, "xp_showdown_flawless");
					Function_371("GENMESS_SDSURVIVEUNTOUCH", 0);
				}
				else
				{
					Function_273(50.0f, "xp_showdown_flawless");
					Function_371("GENMESS_GANGWINSSDOWN", 0);
				}
			}
			else
			{
				Function_371("GENMESS_GANGWINSSDOWN", 0);
			}
		}
		else
		{
			Function_281("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
			bVar7 = "mp_teammsg_red_start";
			iVar8 = "mp_teammsg_red_end";
			Function_371("GENMESS_GANGLOSESDSTART", 0);
		}
		Function_17();
		Function_293("showdown_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, bVar7, &Var3, iVar8, 0);
		if (bVar1)
		{
			Function_293("showdown_flawless", "HUD_MP_PRINT_AWESOME_MASTER", 2.0f, 0, 0, 0, 0);
		}
	}
	else
	{
		Function_281("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (iParam1->f_16 == GET_LOCAL_SLOT())
		{
			Function_273(75.0f, "xp_standoff");
			Function_293("standoff_won_you", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, 0, 0, 0, 0);
			Function_371("GENMESS_WINSOSTARTMATCH", 0);
		}
		else
		{
			Function_371("GENMESS_LOSESOSTARTMATCH", 0);
			Function_293("standoff_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, Function_239(iParam1->f_16), 0, 0, 0);
		}
	}
	return 1;
}

int Function_273(bool bParam0, int iParam1) //Position: 0x897E / 35198
{
	if (!Function_160())
	{
		Global_83822 = 1;
	}
	Function_274(487, (bParam0 * Global_3362), iParam1);
	return 1;
}

void Function_274(var uParam0, bool bParam1, int iParam2) //Position: 0x899F / 35231
{
	Function_275(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_275(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x89BB / 35259
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
	if (uParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_276(int iParam0, bool bParam1) //Position: 0x8BDB / 35803
{
	return ((!Function_129(bParam1, 2, 1) && !Function_129(bParam1, 16384, 1)) && (*iParam0 + 20)[bParam1] == 4294967295);
}

struct<16> Function_277(int iParam0, int iParam1) //Position: 0x8BFF / 35839
{
	return StackVal, StackVal, StackVal, Function_278(Function_279(iParam0), iParam1);
}

struct<16> Function_278(bool bParam0, bool bParam1) //Position: 0x8C11 / 35857
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_279(int iParam0) //Position: 0x8C46 / 35910
{
	if (!Function_280())
	{
		return 0;
	}
	return StackVal;
}

bool Function_280() //Position: 0x8C5F / 35935
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_281(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8C6C / 35948
{
	AUDIO_MUSIC_ONE_SHOT(uParam0, Function_282(iParam1), iParam2, iParam3, iParam4, iParam5);
}

var Function_282(int iParam0) //Position: 0x8C86 / 35974
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_283(int iParam0, int iParam1) //Position: 0x91C3 / 37315
{
	bool bVar0;
	var uVar1[2];
	var uVar4[2];
	int iVar7;
	bool bVar8;
	
	if (!Function_260(iParam1))
	{
	}
	else if (Function_149(iParam1) < 20.0f)
	{
		iParam1->f_16 = 4294967292;
		return;
	}
	if (Function_24(iParam0, 8))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_284(bVar0))
			{
				iVar7 = Function_128(bVar0, 0, 0);
				if (iVar7 >= 4294967295)
				{
					uVar4[iVar7]++;
					if (Function_276(iParam1, bVar0))
					{
						uVar1[iVar7]++;
					}
				}
			}
			bVar0++;
		}
		if (uVar1[0] < 0 && uVar1[1] < 0)
		{
			return;
		}
		if (uVar1[0] >= 0 && uVar1[1] >= 0)
		{
			iParam1->f_16 = 4294967291;
			return;
		}
		bVar0 = false;
		while (bVar0 <= 2)
		{
			if (uVar1[bVar0] >= 0)
			{
				iParam1->f_16 = bVar0;
				if (uVar1[bVar0] == uVar4[bVar0])
				{
					Function_15(iParam1 + 16, 4);
				}
				return;
			}
			bVar0++;
		}
	}
	else
	{
		bVar8 = 4294967295;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_284(bVar0))
			{
				if (Function_276(iParam1, bVar0))
				{
					if (bVar8 == 4294967295)
					{
						bVar8 = bVar0;
					}
					else
					{
						return;
					}
				}
			}
			bVar0++;
		}
		if (bVar8 >= 4294967295)
		{
			iParam1->f_16 = bVar8;
		}
		else
		{
			iParam1->f_16 = 4294967292;
		}
	}
	return;
}

bool Function_284(bool bParam0) //Position: 0x9308 / 37640
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_132(bParam0);
}

void Function_285(int iParam0) //Position: 0x931E / 37662
{
	bool bVar0;
	
	if (Function_24(iParam0, 8))
	{
		if (!Function_24(iParam0, 256))
		{
			bVar0 = Function_22();
			if (!Function_192(bVar0, 0))
			{
				Function_270(iParam0, 256);
			}
			else if (!ACTOR_HAS_ANIM_SET(bVar0, Function_286()))
			{
				Function_270(iParam0, 256);
			}
			else if (!IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "MP_Showdown/Idles"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				Function_270(iParam0, 256);
			}
		}
	}
	return;
}

var Function_286() //Position: 0x9396 / 37782
{
	return "mp_showdown";
}

void Function_287(int iParam0) //Position: 0x93AA / 37802
{
	*iParam0++;
	return;
}

void Function_288(bool bParam0, int iParam1) //Position: 0x93B8 / 37816
{
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, iParam1->f_28);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_MAX_SPEED(bParam0, 3);
	}
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_289(bool bParam0, var uParam1) //Position: 0x9403 / 37891
{
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_END_FORCE_HOLSTER(bParam0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, uParam1->f_28);
	}
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_290() //Position: 0x9441 / 37953
{
	UI_SHOW("XpHud");
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	UI_SHOW("XPMultiplier");
	UI_SHOW("XPComboTimer");
	UI_SET_TEXT("XPComboLevel", Function_291(0));
	UI_ANIM_SETUP("XpComboTimer", 20.0f, 32, false);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

var Function_291(bool bParam0) //Position: 0x94CD / 38093
{
	bool bVar0;
	
	bVar0 = Function_292();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_292() //Position: 0x94E4 / 38116
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

void Function_293(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x95A0 / 38304
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(bParam2, bParam0, bParam3, iParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(bParam0, bParam2, 0, 0, iParam1);
	}
}

bool Function_294(int iParam0) //Position: 0x95D0 / 38352
{
	if (Function_260(iParam0))
	{
		if (Function_148(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_295(int iParam0, bool bParam1) //Position: 0x95EB / 38379
{
	if (!NET_IS_SESSION_HOST() && NET_IS_IN_SESSION())
	{
		return;
	}
	if (bParam1)
	{
		Function_15(&Global_78578 + 88, iParam0);
	}
	else
	{
		Function_7(&Global_78578 + 88, iParam0);
	}
	return;
}

void Function_296(int iParam0) //Position: 0x961B / 38427
{
	if (iParam0->f_96 != 4294967295)
	{
		NET_GAMER_ICON_FORCE_VISIBILITY(iParam0->f_96, 2);
	}
	NET_GAMER_ICON_FORCE_VISIBILITY(GET_LOCAL_SLOT(), 2);
	return;
}

void Function_297(int iParam0, int iParam1) //Position: 0x9638 / 38456
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_24(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_302();
			Function_371(&Global_79349 + 48, 0);
			Function_270(iParam0, 32);
		}
	}
	UI_SUPPRESS("WeaponAmmo");
	UI_EXCLUDE("WeaponAmmo");
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0x00000000:
				iParam0->f_96 = Function_301(iParam1);
				NET_GAMER_SET_TEAM(iParam0->f_96, 0);
				break;
			
			case 0x00000001:
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000002:
				DECOR_SET_BOOL(Function_22(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				Function_300("standoff_title");
				break;
			
			case 0x00000003:
				DECOR_SET_BOOL(Function_22(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				PPP_LOAD_PRESET(Function_20());
				iParam0->f_100 = Function_299(Function_22());
				Function_270(iParam0, 2);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				Function_16(iParam0, 0);
				if (iParam0->f_96 != 4294967295)
				{
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("standoff_help_target"), UI_GET_STRING(Function_239(iParam0->f_96)), 0, 0);
					UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_1");
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s1", "standoff_help");
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				break;
			
			case 0x00000009:
				break;
			
			case 0x0000000A:
				break;
			
			case 0x0000000B:
				Function_298(8, 0.0f, 4000, 1000);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			}
	}
	return;
}

void Function_298(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9860 / 39008
{
	AUDIO_MUSIC_SET_MOOD(Function_282(iParam0), iParam1, iParam2, iParam3);
}

var Function_299(bool bParam0) //Position: 0x9876 / 39030
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_173(bParam0);
	vVar6 = { StackVal, StackVal, Function_173(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0,5f, -0,5f, -0,5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_22(), "LookItMeLight", vVar6, 6.0f, 6.0f, 6.0f, 2,5f);
}

void Function_300(bool bParam0) //Position: 0x98EB / 39147
{
	UI_SET_TEXT("MPSplashItem.s0", bParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

var Function_301(bool bParam0) //Position: 0x994E / 39246
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if ((*bParam0 + 20)[bVar1] == 4294967295 && bVar1 == bVar2)
		{
			iVar0++;
		}
		bVar1++;
	}
	if (iVar0 < 0)
	{
		return 4294967295;
	}
	iVar3 = (RAND_INT_RANGE(false, 1000) % iVar0);
	iVar4 = 0;
	bVar1 = (bVar2 + 1 % 16);
	bVar5 = false;
	while (!bVar5 && iVar4 > 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*bParam0 + 20)[bVar1] == 4294967295 && iVar4 <= iVar3)
			{
				bVar5 = true;
			}
			else
			{
				iVar4++;
			}
		}
		if (!bVar5)
		{
			bVar1 = (bVar1 + 1 % 16);
		}
	}
	if (!bVar5)
	{
		return 4294967295;
	}
	return bVar1;
}

void Function_302() //Position: 0x99F7 / 39415
{
	Function_372("DM_game_help_0", 0x41200000, 1, 0, 2, 1, 0);
	return;
}

int Function_303(bool bParam0, bool bParam1) //Position: 0x9A1B / 39451
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_316(Function_22(), "Me");
	uVar1 = Function_315(bParam0);
	bParam1->f_40 = CREATE_OBJECT_LOCATOR(iVar0, "gunLocator");
	if (!OBJECT_LOCATOR_ATTACH_TO_OBJECT_BONE(bParam1->f_40, iVar0, "wrist_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
	}
	return Function_304(bParam0, 0, iVar0, uVar1, bParam1->f_40, 1, 0, 0);
}

int Function_304(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x9A84 / 39556
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Standoff", 9, 1);
	}
	Function_305(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_305(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9B03 / 39683
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_314(&iVar0, uParam1, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_313(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_312(&iVar0, uParam1, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_311(&iVar0, uParam1, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_310(&iVar0, uParam1, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_309(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_308(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_307(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_306(&iVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 0,05f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2,5f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 1,5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 4, 5, 2,5f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 0,45f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 5, 6, 4.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 0,5f, 9);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 6, 7, 1,5f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 7, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 7, 8, 0,2f, 12, 0);
}

void Function_306(var uParam0, bool bParam1) //Position: 0x9C67 / 40039
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_307(var uParam0, bool bParam1) //Position: 0x9CDC / 40156
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 8,6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_308(var uParam0, bool bParam1) //Position: 0x9D89 / 40329
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,928657f, 42,53037f, -0,03432f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_309(var uParam0, bool bParam1) //Position: 0x9E32 / 40498
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,441266f, 1,590829f, 0,323404f, -3,052203f, -37,19361f, -0,093048f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_310(var uParam0, bool bParam1, bool bParam2) //Position: 0x9EDB / 40667
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,441266f, 1,590829f, 0,323404f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 8,6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_311(var uParam0, bool bParam1, bool bParam2) //Position: 0x9F90 / 40848
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.0f, 18,23245f, 4,313523f, -67,08659f, 0,237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0,380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31,69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_312(var uParam0, bool bParam1, bool bParam2) //Position: 0xA053 / 41043
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.0f, 18,23245f, 4,313523f, -67,08659f, 0,237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0,380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31,69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_313(var uParam0, bool bParam1) //Position: 0xA11A / 41242
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45,75f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,562671f, 1,496117f, -1,597335f, -3,967331f, 158,1299f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,103045f, 1,372172f, 0,061185f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,964602f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 19,216f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 5,9696f);
	return;
}

void Function_314(var uParam0, bool bParam1, bool bParam2) //Position: 0xA1E6 / 41446
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,8127f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,351376f, 1,457621f, -1,083728f, -1,094235f, 158,9572f, -10,40062f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,06695f, 1,435368f, 0,003617f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0,181525f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,04f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_315(bool bParam0) //Position: 0xA2D0 / 41680
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, "StandoffCenter");
}

var Function_316(bool bParam0, bool bParam1) //Position: 0xA2EC / 41708
{
	if (IS_ACTOR_VALID(bParam0))
	{
	}
	else
	{
		bParam0 = Function_22();
	}
	return GET_OBJECT_FROM_ACTOR(bParam0);
}

void Function_317(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA307 / 41735
{
	AUDIO_MUSIC_FORCE_TRACK(bParam0, Function_282(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_318(int iParam0) //Position: 0xA323 / 41763
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_24(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_324();
			Function_371(&Global_79349 + 48, 0);
			Function_270(iParam0, 32);
		}
	}
	bVar1 = iVar0;
	if (iParam0->f_92 < 0.0f)
	{
		iParam0->f_92 = (iParam0->f_92 - GET_UNWARPED_REALTIME_SECONDS());
		if (iParam0->f_92 >= 0.0f)
		{
			switch (bVar1)
			{
				case 0x00000002:
					DECOR_SET_INT(Function_22(), "Go", true);
					break;
				
				case 0x00000004:
					DECOR_SET_INT(Function_22(), "Go2", true);
					break;
				
				case 0x00000006:
					DECOR_SET_INT(Function_22(), "Go3", true);
					break;
				}
			}
	}
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		switch (bVar1)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_18());
				Function_270(iParam0, 4);
				UI_SET_STYLE("MPSplashTitle", 16);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Var2 = { StackVal, StackVal, StackVal, Function_277(Function_127(), 1) };
				Function_323(Function_127());
				UI_SET_TEXT("MPSplashTitle", &Var2);
				break;
			
			case 0x00000003:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_22(), "Go");
				Function_16(iParam0, 1);
				Function_371("ANNOUNCE_VS", 0);
				CANCEL_TIME_WARP(0);
				break;
			
			case 0x00000004:
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_21());
				Function_270(iParam0, 2);
				Var2 = { StackVal, StackVal, StackVal, Function_277(Function_321(Function_127()), 1) };
				Function_323(Function_321(Function_127()));
				UI_SET_TEXT("MPSplashTitle", &Var2);
				UI_SET_STYLE("MPSplashTitle", 15);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000005:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_22(), "Go2");
				Function_16(iParam0, 1);
				CANCEL_TIME_WARP(0);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000006:
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_18());
				iParam0->f_100 = Function_320(Function_22());
				Function_270(iParam0, 4);
				Function_371("ANNOUNCE_YOU", 0);
				UI_SET_TEXT("MPSplashItem.s0", Function_319(GET_LOCAL_SLOT()));
				UI_SET_STRING("Generic_Dbuffer128_0", &Global_78480 + 32);
				UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
				UI_SET_STYLE("MPSplashTitle", 17);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000007:
				DECOR_REMOVE(Function_22(), "Go3");
				CANCEL_TIME_WARP(1);
				UI_EXIT("MPSplash");
				Function_16(iParam0, 1);
				if (IS_PS3())
				{
					Function_372("showdown_draw_help_ps3", (2,5f + 1.0f), 0, 0, 2, 1, 0);
				}
				else
				{
					Function_372("showdown_draw_help", (2,5f + 1.0f), 0, 0, 2, 1, 0);
				}
				break;
			}
	}
	return;
}

var Function_319(int iParam0) //Position: 0xA75B / 42843
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerName_0";
		
		case 0x00000001:
			return "MPPlayerName_1";
		
		case 0x00000002:
			return "MPPlayerName_2";
		
		case 0x00000003:
			return "MPPlayerName_3";
		
		case 0x00000004:
			return "MPPlayerName_4";
		
		case 0x00000005:
			return "MPPlayerName_5";
		
		case 0x00000006:
			return "MPPlayerName_6";
		
		case 0x00000007:
			return "MPPlayerName_7";
		
		case 0x00000008:
			return "MPPlayerName_8";
		
		case 0x00000009:
			return "MPPlayerName_9";
		
		case 0x0000000A:
			return "MPPlayerName_10";
		
		case 0x0000000B:
			return "MPPlayerName_11";
		
		case 0x0000000C:
			return "MPPlayerName_12";
		
		case 0x0000000D:
			return "MPPlayerName_13";
		
		case 0x0000000E:
			return "MPPlayerName_14";
		
		case 0x0000000F:
			return "MPPlayerName_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

var Function_320(bool bParam0) //Position: 0xA8FF / 43263
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_173(bParam0);
	vVar6 = { StackVal, StackVal, Function_173(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0,5f, -0,5f, -0,5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_22(), "LookItMeLight", vVar6, 1.0f, 1.0f, 1.0f, 2,5f);
}

int Function_321(int iParam0) //Position: 0xA974 / 43380
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	return Function_322(iParam0);
}

int Function_322(int iParam0) //Position: 0xA987 / 43399
{
	return (iParam0 + 1 % 2);
}

void Function_323(int iParam0) //Position: 0xA993 / 43411
{
	struct<16> Var0;
	
	strcpy(&Var0, "ANNOUNCE_TEAM_", 64);
	straddi(&Var0, Function_279(iParam0), 64);
	Function_371(&Var0, 0);
	return;
}

void Function_324() //Position: 0xA9BD / 43453
{
	Function_372("TDM_game_help_0", 0x41200000, 1, 0, 2, 1, 0);
	return;
}

int Function_325(bool bParam0, bool bParam1) //Position: 0xA9E2 / 43490
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = Function_321(bParam1);
	uVar1 = Function_337(bParam0, bParam1);
	uVar2 = Function_337(bParam0, iVar0);
	uVar3 = Function_316(Function_22(), "Me");
	return Function_326(bParam0, 0, uVar3, uVar1, uVar2, 0, 0, 0);
}

int Function_326(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xAA1D / 43549
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Showdown2", 9, 1);
	}
	Function_327(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 2.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_327(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0xAA9D / 43677
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_336(&iVar0, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_335(&iVar0, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_334(&iVar0, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_333(&iVar0, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_332(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_331(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_330(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_329(&iVar0, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_328(&iVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 12,5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 1,5f, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "Go", 2, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 1,5f, 3, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "Go2", 4, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 2,5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 5, cParam1, "Go3", 6, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 4,5f, 7);
}

void Function_328(var uParam0, bool bParam1, bool bParam2) //Position: 0xABD2 / 43986
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65,44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,5f, 6,064114f, 4,464365f, -37,3141f, -2,927814f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42,778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_329(var uParam0, bool bParam1, bool bParam2) //Position: 0xAC8E / 44174
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65,44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,5f, 6,064114f, 4,4647f, -37,3141f, -2,927871f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42,778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_330(var uParam0, bool bParam1) //Position: 0xAD4A / 44362
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 18,542f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 1,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,674432f, 0,879538f, 1,537114f, -0,349963f, 9,024257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,41889f, 0,869587f, -0,071906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_331(var uParam0, bool bParam1) //Position: 0xADD6 / 44502
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 7,228f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,725417f, 1,294801f, -2,751867f, 2,473631f, 165,6309f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,533f, -0,21f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,64f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18,028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_332(var uParam0, bool bParam1) //Position: 0xAE9E / 44702
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 6,728f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,07f, 1,175f, -4,092f, 0.0f, 179,5041f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,074344f, 1,538012f, -0,054681f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18,028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 1,8226f);
	return;
}

void Function_333(var uParam0, bool bParam1) //Position: 0xAF62 / 44898
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8,5f, 1,469942f, -1,747687f, -1,032928f, -98,24805f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,161f, 1,317305f, 0,622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_334(var uParam0, bool bParam1) //Position: 0xB02A / 45098
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8,5f, 1,469955f, -0,105855f, -1,02399f, -89,95139f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,024f, 1,317f, -0,115f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_335(var uParam0, bool bParam1) //Position: 0xB0F2 / 45298
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8,5f, 1,47f, -1,747912f, -1,011041f, 105,8626f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,153f, 1,316862f, 0,622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 1.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_336(var uParam0, bool bParam1) //Position: 0xB1BA / 45498
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8,5f, 1,469824f, -0,105534f, -1,030178f, 89,93437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,023677f, 1,317106f, -0,115403f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_337(bool bParam0, int iParam1) //Position: 0xB282 / 45698
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, Function_338(iParam1));
}

var Function_338(int iParam0) //Position: 0xB292 / 45714
{
	if (iParam0 == 0)
	{
		return "Showdown_A";
	}
	if (iParam0 == 1)
	{
		return "Showdown_B";
	}
	return "__invalid__";
}

void Function_339(int iParam0) //Position: 0xB2D4 / 45780
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((*iParam0 + 20)[bVar0] != 4294967295)
				{
					Function_340(bVar1, 0, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_340(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB318 / 45848
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, Function_286()))
	{
		if (!SET_ANIM_SET_FOR_ACTOR(bParam0, Function_286(), 0))
		{
			return 0;
		}
	}
	if (bParam1)
	{
		return 1;
	}
	if (bParam2)
	{
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_341());
	}
	TASK_ACTION_PERFORM(bParam0, Function_341());
	return 1;
}

var Function_341() //Position: 0xB35A / 45914
{
	return "MP_Showdown/Idles";
}

void Function_342(int iParam0, int iParam1) //Position: 0xB374 / 45940
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar9;
	
	bVar0 = GET_LOCAL_SLOT();
	if (bVar0 != 4294967295)
	{
		iVar1 = (*iParam1 + 20)[bVar0];
		if (iVar1 != 4294967295)
		{
			bVar2 = false;
			if (Function_24(iParam0, 8))
			{
				iVar9 = Function_127();
				if (iVar9 != 4294967295)
				{
					bVar2 = Function_345(Function_43(), iVar9, &vVar3, &uVar6, iVar1, (*iParam1 + 88)[iVar9]);
				}
			}
			else
			{
				bVar2 = Function_343(Function_43(), &vVar3, &uVar6, iVar1, 16);
			}
			if (bVar2)
			{
				SET_OBJECT_POSITION(Function_22(), vVar3);
			}
		}
	}
	return;
}

int Function_343(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB3E8 / 46056
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = Function_315(bParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		return 0;
	}
	if (bParam3 >= 4294967295)
	{
		bVar5 = TO_FLOAT(bParam4);
		bVar4 = TO_FLOAT(bParam3);
	}
	else
	{
		bVar5 = TO_FLOAT(NET_GET_SESSION_GAMER_COUNT());
		bVar4 = TO_FLOAT(Function_344(GET_LOCAL_SLOT()));
	}
	*uParam2 = { 0.0f, ((360.0f / bVar5) * bVar4), 0.0f };
	UNK_0x44986367(StackVal, &vVar6);
	if (DECOR_CHECK_EXIST(bVar0, "Narrow"))
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(2,8f, 2,8f, 2,8f), StackVal, StackVal) };
	}
	else
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal) };
	}
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, iParam1, &uVar12))
	{
		*iParam1 = { StackVal, StackVal, vVar9 };
	}
	return 1;
}

var Function_344(bool bParam0) //Position: 0xB4B3 / 46259
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
			if (bVar0 == bParam0)
			{
				return iVar1;
			}
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

bool Function_345(bool bParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xB4EE / 46318
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	bVar0 = Function_337(bParam0, iParam1);
	if (!IS_OBJECT_VALID(bVar0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (bParam4 >= 4294967295)
	{
		bVar4 = TO_FLOAT(bParam5);
		bVar5 = TO_FLOAT(bParam4);
	}
	else
	{
		bVar4 = TO_FLOAT(Function_347(iParam1));
		bVar5 = TO_FLOAT(Function_346(GET_LOCAL_SLOT(), 1));
	}
	fVar6 = (bVar5 - ((bVar4 - 1.0f) / 2.0f));
	GET_OBJECT_ORIENTATION(bVar0, uParam3);
	DECOR_GET_VECTOR(bVar0, "Right", &vVar7);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar7, vVar1, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) * Vector(fVar6, fVar6, fVar6), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar10, 2.0f, iParam2, &uVar13))
	{
		if (bParam4 == 4294967295)
		{
		}
		*iParam2 = { StackVal, StackVal, vVar10 };
	}
	return 1;
}

var Function_346(bool bParam0, bool bParam1) //Position: 0xB5BF / 46527
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_128(bParam0, bParam1, 0);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 == bParam0)
		{
			return iVar1;
		}
		if (Function_128(bVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

int Function_347(int iParam0) //Position: 0xB606 / 46598
{
	return Function_348(iParam0, 1);
}

int Function_348(int iParam0, bool bParam1) //Position: 0xB612 / 46610
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1) || !bParam1)
		{
			if (Function_128(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_349(int iParam0, bool bParam1, bool bParam2) //Position: 0xB64F / 46671
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar5 = NET_IS_SESSION_HOST();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*iParam0 + 20)[bVar1] == 4294967295)
			{
				iVar2++;
				if (bParam2)
				{
				}
			}
			else if (Function_132(bVar1))
			{
				if (Function_350(bVar1) || !bParam1)
				{
					bVar4 = GET_SLOT_ACTOR(bVar1);
					if (IS_ACTOR_VALID(bVar4))
					{
						if (Function_190(bVar4, 1, 0x41700000))
						{
							iVar0++;
							if (bParam2)
							{
							}
						}
						else if (bParam2)
						{
							iVar3++;
						}
					}
					else if (bParam2)
					{
						iVar3++;
					}
				}
				else if (bParam2)
				{
					iVar3++;
				}
			}
			else if (bParam2)
			{
				iVar3++;
			}
		}
		else
		{
			if (bParam2)
			{
				if ((*iParam0 + 20)[bVar1] != 4294967295)
				{
				}
			}
			if (bVar5 && (*iParam0 + 20)[bVar1] == 4294967295)
			{
				(*iParam0 + 20)[bVar1] = 4294967295;
			}
		}
		bVar1++;
	}
	if (bParam2)
	{
		if ((iVar3 + iVar2) + iVar0) != NET_GET_SESSION_GAMER_COUNT()
		{
		}
	}
	return iVar0 != (NET_GET_SESSION_GAMER_COUNT() - iVar2);
}

bool Function_350(bool bParam0) //Position: 0xB74F / 46927
{
	return Function_129(bParam0, 4, 1);
}

void Function_351(bool bParam0, int iParam1) //Position: 0xB75C / 46940
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "ForceAim", true);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_FORCE_PLAYER_AIM_MODE(0, 1);
		iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
		SET_PLAYER_CONTROL_CONFIG(0, 4);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
	}
	UI_SUPPRESS("Reticle");
	UI_ENTER("MpWeaponSuppressor");
	return;
}

void Function_352(int iParam0) //Position: 0xB7C1 / 47041
{
	if (!Function_24(iParam0, 16))
	{
		HUD_FADE_IN(1,5f, 1065353216);
		SET_HUD_MAP_DRAW_ENABLED(0);
		UI_SUPPRESS("Reticle");
		UI_SUPPRESS("WeaponAmmo");
		UI_EXCLUDE("WeaponAmmo");
		NET_GAMER_ICONS_SHOW_LOCAL(1);
		if (Function_24(iParam0, 8))
		{
			if (Function_24(iParam0, 64))
			{
				Function_300("common_null");
				UI_EXIT("HudMPNoFun");
			}
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", iParam0 + 76);
			if (IS_STRING_VALID(&Global_83591 + 28[09]))
			{
				Function_317(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
			}
		}
		else if (Function_24(iParam0, 64))
		{
			Function_300("standoff_title");
			UI_EXIT("HudMPNoFun");
		}
		Function_270(iParam0, 16);
	}
	return;
}

int Function_353(int iParam0) //Position: 0xB8CE / 47310
{
	if (!Function_280())
	{
		return 0;
	}
	return Function_25(Global_78578.f_88, iParam0);
}

int Function_354(int iParam0) //Position: 0xB8E8 / 47336
{
	iParam0 = iParam0;
	UI_ENTER("MpWeaponSuppressor");
	return 1;
}

void Function_355() //Position: 0xB90B / 47371
{
	Function_14(1024, 1, 0);
	Function_14(1, 0, 0);
	return;
}

void Function_356(int iParam0) //Position: 0xB91F / 47391
{
	Function_36(4, iParam0);
	return;
}

bool Function_357(int iParam0) //Position: 0xB92B / 47403
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_362();
	iVar1 = 0;
	if (!Function_11(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_361(iParam0[iVar03], 8);
		}
		else if (Function_360())
		{
			iVar1 = 1;
			Function_361(iParam0[iVar03], 8);
		}
		Function_361(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_11(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_11(iParam0[03], 8) || iVar1));
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
				Function_361(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_361(iParam0[iVar03], 2);
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
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_361(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_361(iParam0[iVar03], 2);
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
	Function_358();
	return 1;
}

void Function_358() //Position: 0xBCA6 / 48294
{
	if (!Function_359(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_359(int iParam0) //Position: 0xBCE6 / 48358
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_360() //Position: 0xBD02 / 48386
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

void Function_361(var uParam0, int iParam1) //Position: 0xBD2D / 48429
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_362() //Position: 0xBD3E / 48446
{
	if (!Function_359(128))
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

bool Function_363() //Position: 0xBD80 / 48512
{
	return Function_353(1);
}

void Function_364(int iParam0) //Position: 0xBD8A / 48522
{
	if (!Function_365(iParam0))
	{
	}
	if (!Function_37(2048))
	{
		Function_220(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*iParam0 = 15;
	return;
}

bool Function_365(int iParam0) //Position: 0xBDBD / 48573
{
	return !(*iParam0 <= 15 && *iParam0 >= 20);
}

void Function_366(int iParam0, bool bParam1) //Position: 0xBDD1 / 48593
{
	bool bVar0;
	int iVar1;
	
	if (!iParam0->f_68)
	{
		return;
	}
	if (Function_370())
	{
		Function_3(iParam0, 1);
		return;
	}
	iParam0->f_76 = (iParam0->f_76 - 1);
	if (!iParam0->f_72 || iParam0->f_76 > 0)
	{
		iParam0->f_76 = iLocal_10;
		bVar0 = false;
		if (!iParam0->f_72)
		{
			iParam0->f_72 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
		}
		if (!iParam0->f_64)
		{
			iVar1 = NET_GET_SESSION_GAMER_COUNT();
			if (iParam0->f_52 != iVar1)
			{
				iParam0->f_52 = iVar1;
				bVar0 = true;
			}
		}
		if (iParam0->f_56 != bParam1)
		{
			iParam0->f_56 = bParam1;
			bVar0 = true;
		}
		Stack.Push(bVar0);
		Stack.Push(iParam0);
		Stack.Push(iParam0 + 24);
		Call_Loc(iParam0->f_48);
		bVar0 = (StackVal || StackVal);
		if (bVar0)
		{
			NET_SCOREGRAPH_CLEAR_MARKERS();
			if (iParam0->f_64)
			{
				NET_SCOREGRAPH_SETUP(2, 1, iParam0->f_60);
				if (StackVal > StackVal)
				{
					Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 0);
					Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 5);
				}
				else
				{
					Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 0);
					Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 5);
				}
			}
			else
			{
				NET_SCOREGRAPH_SETUP(iParam0->f_52, 0, iParam0->f_60);
				if (StackVal >= 4294967295)
				{
					if (*iParam0 == iParam0->f_24)
					{
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 1);
					}
					else if (*iParam0 <= iParam0->f_24)
					{
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
					}
					else
					{
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
						Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
					}
				}
				else
				{
					Function_367(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
				}
			}
		}
	}
	return;
}

void Function_367(struct<21> Param0) //Position: 0xBF4A / 48970
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_PLAYER_LABEL(StackVal, StackVal, Function_368((Param0 + iParam7), bParam6), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_PLAYER_SCORE(StackVal, StackVal, StackVal, Function_368((Param0 + iParam7), bParam6));
	}
}

var Function_368(bool bParam0, bool bParam1) //Position: 0xBFBF / 49087
{
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

void Function_369(struct<21> Param0) //Position: 0xBFE1 / 49121
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, iParam8, Function_368(bParam6, bParam7), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, iParam8, Function_368(bParam6, bParam7));
	}
}

bool Function_370() //Position: 0xC04E / 49230
{
	return Function_41(16384);
}

void Function_371(char* cParam0, bool bParam1) //Position: 0xC05A / 49242
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, cParam0, iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_372(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC09A / 49306
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

bool Function_373() //Position: 0xC0E5 / 49381
{
	return Function_374() != 4294967290;
}

int Function_374() //Position: 0xC0F2 / 49394
{
	if (!Function_280())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

void Function_375(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4) //Position: 0xC107 / 49415
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (Function_151())
	{
		if (Function_260(iParam0))
		{
			bVar0 = CEIL(Function_148(iParam0));
			bVar1 = CEIL((fParam3 * 0,5f));
			if (*uParam1 != bVar0)
			{
				*uParam1 = bVar0;
				if (bVar0 < 22)
				{
					if (*uParam2 != 6)
					{
						if (*uParam2 == 5)
						{
							AUDIO_MUSIC_PLAY_PREPARED();
							*uParam2 = 6;
						}
						else
						{
							fVar2 = ((((22.0f - Function_148(iParam0)) + 1.0f) * 1000.0f) / 178979.0f);
							if (bVar0 >= 1)
							{
								Function_281(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, fVar2, 1, 1);
								*uParam2 = 5;
							}
							else
							{
								AUDIO_MUSIC_ONE_SHOT(&Global_83591 + 28[29], "OVERTIME", 0.0f, fVar2, 0, 1);
								*uParam2 = 6;
							}
						}
					}
				}
				else if (bVar0 < 23)
				{
					if (*uParam2 != 5)
					{
						*uParam2 = 5;
						if (IS_STRING_VALID(&Global_83591 + 28[29]))
						{
							Function_281(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, 0.0f, 1, 1);
						}
					}
				}
				else if (bVar0 < 31)
				{
					if (*uParam2 != 4)
					{
						*uParam2 = 4;
						AUDIO_MUSIC_SUSPEND(8000);
					}
				}
				else if (bVar0 < 60)
				{
					if (*uParam2 != 3)
					{
						AUDIO_MUSIC_SET_MOOD("LOUD_TENSION", 0, 4294967295, 4294967295);
						Function_371("GENMESS_GCRUNNINGDOWN", 0);
						*uParam2 = 3;
					}
				}
				else if (bVar0 < 66)
				{
					if (*uParam2 != 2)
					{
						AUDIO_MUSIC_SET_MOOD("QUIET_TENSION", 0, 4294967295, 4294967295);
						*uParam2 = 2;
					}
				}
				else if (bVar0 < bVar1)
				{
					if (*uParam2 != 1)
					{
						if (IS_STRING_VALID(&Global_83591 + 28[19]))
						{
							Function_317(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0, 4294967295, 4294967295, 3212836864, 0);
						}
						*uParam2 = 1;
					}
				}
				if ((bVar0 <= (bVar1 - 10) && bVar0 >= bVar1 + 10) || (bVar0 >= 15 && bVar0 <= 0))
				{
					Function_381();
					if (bVar0 >= 5 && (Global_76905.f_128 % 2) != 1)
					{
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
					if (bVar0 == bVar1)
					{
						Function_380("mp_match_half_over");
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
				}
				else if (!bParam4)
				{
					Function_379();
				}
			}
			if (!Function_373())
			{
				Function_377("mp_time_remaining_header");
				Function_376(Function_63(0, bVar0), bVar0 >= 5);
			}
			else
			{
				Function_377("mp_time_overtime_header");
				Function_376(ABS(bVar0), bVar0 < 4294967291);
			}
		}
	}
}

void Function_376(bool bParam0, bool bParam1) //Position: 0xC3D6 / 50134
{
	if (Global_76905.f_128 != bParam0)
	{
		Function_14(0x20000000, 1, 1);
	}
	Global_76905.f_128 = bParam0;
	Function_14(65536, bParam1, 1);
	return;
}

void Function_377(char* cParam0) //Position: 0xC403 / 50179
{
	if (Function_378(cParam0, &Global_76905))
	{
		Function_14(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_378(bool bParam0, bool bParam1) //Position: 0xC427 / 50215
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_379() //Position: 0xC45B / 50267
{
	if (Function_41(1048576))
	{
		Function_14(0x10000000, 1, 1);
	}
	Function_14(1048576, 0, 1);
	return;
}

void Function_380(bool bParam0) //Position: 0xC47E / 50302
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

void Function_381() //Position: 0xC492 / 50322
{
	if (!Function_41(1048576))
	{
		Function_14(0x10000000, 1, 1);
	}
	Function_14(1048576, 1, 1);
	return;
}

int Function_382() //Position: 0xC4B6 / 50358
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_500())
	{
		if (GET_NUM_PLAYERS() < 1)
		{
			NET_LOG(bLocal_992, "Local State", "\I'm the only player left in the session, quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
			Function_391(4294967293);
		}
		if (Function_138())
		{
			if (Function_390())
			{
				NET_LOG(bLocal_992, "Local State", "Team DM has determined that there's only one team remaining, we're quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
				Function_391(4294967294);
			}
		}
	}
	if (!Function_500())
	{
		bVar1 = false;
		iVar2 = Global_83591;
		if (Function_294(&Global_78578 + 96))
		{
			iVar2 = 4294967295;
			bVar1 = true;
		}
		if (Function_138())
		{
			bVar0 = Function_388(iVar2);
		}
		else
		{
			bVar0 = Function_385(iVar2);
		}
		if (bVar1 && bVar0 != 4294967291)
		{
			if (!Function_373())
			{
				NET_LOG(bLocal_992, "Rules State", "Overtime entered because scores are tied.", 0, 0, 0, 0);
				Function_384();
			}
		}
		else if (bVar0 != 4294967295)
		{
			NET_LOG(bLocal_992, "Rules State", "Player/Team %s won the match.", I2STR(bVar0), 0, 0, 0);
			Function_383(bVar0);
		}
		else if (bVar1)
		{
		}
	}
	return 1;
}

void Function_383(int iParam0) //Position: 0xC6CE / 50894
{
	int iVar0;
	
	if (Function_25(StackVal, 4))
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_391(iParam0);
		return;
	}
	Function_15(&Local_159 + 4, 4);
	iVar0 = iParam0;
	NET_SCRIPTMSG_SEND(2, 5, &iVar0, 1, 1);
	return;
}

void Function_384() //Position: 0xC702 / 50946
{
	Function_391(4294967290);
	return;
}

var Function_385(int iParam0) //Position: 0xC70E / 50958
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = 4294967295;
	iVar1 = iParam0;
	bVar4 = false;
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (Function_284(bVar3))
		{
			iVar2 = Function_386(bVar3);
			if (iVar2 >= iVar1)
			{
				iVar1 = iVar2;
				bVar0 = bVar3;
				bVar4 = false;
			}
			else if (iVar2 == iVar1)
			{
				if (bVar0 == 4294967295)
				{
					bVar4 = false;
					bVar0 = bVar3;
					iVar1 = iVar2;
				}
				else
				{
					bVar4 = true;
				}
			}
		}
		bVar3++;
	}
	if (bVar4)
	{
		return 4294967291;
	}
	return bVar0;
}

int Function_386(bool bParam0) //Position: 0xC77E / 51070
{
	return Function_387(0, bParam0);
}

int Function_387(int iParam0, bool bParam1) //Position: 0xC78A / 51082
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_250(iParam0);
	}
	if (!Function_132(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_388(int iParam0) //Position: 0xC7F1 / 51185
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_389(0);
	iVar1 = Function_389(1);
	if (iVar0 <= iParam0 || iVar1 <= iParam0)
	{
		if (iVar0 == iVar1)
		{
			return 4294967291;
		}
		if (iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	return 4294967295;
}

bool Function_389(int iParam0) //Position: 0xC82E / 51246
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_390() //Position: 0xC84A / 51274
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 4294967295;
	bVar2 = false;
	while (bVar2 <= 16)
	{
		iVar1 = Function_128(bVar2, 1, 0);
		if (iVar1 >= 4294967295)
		{
			if (iVar0 == 4294967295)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 != iVar1)
			{
				return 0;
			}
		}
		bVar2++;
	}
	return 1;
}

void Function_391(int iParam0) //Position: 0xC88C / 51340
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_392(int iParam0) //Position: 0xC8A0 / 51360
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
			Function_393(iParam0);
		}
	}
	return;
}

void Function_393(int iParam0) //Position: 0xC8D2 / 51410
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

bool Function_394() //Position: 0xC8E1 / 51425
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	if (Function_138())
	{
		bVar1 = false;
		if (!Function_499(Function_43()))
		{
		}
		else if ((Function_37(1024) && !Function_363()) && Function_260(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		bVar1 = true;
		if (Local_247.f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_497(&Local_247, 1);
			}
			return 0;
		}
		if ((*&Local_247 + 20)[bVar0] == 4294967295)
		{
			Function_270(&Local_159 + 36, 64);
			Function_484(&vLocal_52, 0, 0, 0, 1);
		}
		else
		{
			Function_484(&vLocal_52, 1, 0, 0, 1);
			Function_267(&vLocal_52, 64020);
		}
		Function_264(&vLocal_52, 1);
		Function_481(Function_43(), &Local_159 + 36);
		Function_480(StackVal, StackVal, &vLocal_52, Function_481(Function_43(), &Local_159 + 36));
		if (NET_IS_SESSION_HOST())
		{
			Function_479(&Global_78578 + 96);
		}
		if (!bVar1)
		{
			Function_484(&vLocal_52, 1, 0, 0, 0);
			Function_478(&Local_159 + 36);
			if (NET_IS_SESSION_HOST())
			{
				Function_257(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	else
	{
		bVar2 = false;
		if (!Function_477(Function_43()))
		{
		}
		else if ((Function_37(1024) && !Function_363()) && Function_260(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		if (Local_247.f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_497(&Local_247, 0);
			}
			return 0;
		}
		if ((*&Local_247 + 20)[bVar0] == 4294967295)
		{
			Function_270(&Local_159 + 36, 64);
			Function_484(&vLocal_52, 0, 0, 0, 1);
		}
		else
		{
			Function_484(&vLocal_52, 1, 0, 0, 1);
			Function_267(&vLocal_52, 63706);
		}
		Function_264(&vLocal_52, 1);
		Function_481(Function_43(), &Local_159 + 36);
		Function_480(StackVal, StackVal, &vLocal_52, Function_481(Function_43(), &Local_159 + 36));
		bVar2 = true;
		if (!bVar2)
		{
			Function_484(&vLocal_52, 1, 0, 0, 0);
			Function_478(&Local_159 + 36);
			if (NET_IS_SESSION_HOST())
			{
				Function_257(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	Function_474(&vLocal_52, 2);
	Function_416(&vLocal_52, 54168);
	Function_405(&vLocal_52, 52519);
	Function_400(&vLocal_52, 52157);
	Function_396(&vLocal_52, 51948);
	Function_395(&vLocal_52, 30);
	return 1;
}

void Function_395(int iParam0, int iParam1) //Position: 0xCAD4 / 51924
{
	iParam0->f_52 = iParam1;
	return;
}

void Function_396(int iParam0, int iParam1) //Position: 0xCAE0 / 51936
{
	iParam0->f_176 = iParam1;
	return;
}

int Function_397() //Position: 0xCAEC / 51948
{
	return Function_398(&uLocal_306);
}

int Function_398(int iParam0) //Position: 0xCAF8 / 51960
{
	bool bVar0;
	struct<5> Var1;
	
	if (iParam0->f_1452 < 4294967295)
	{
		return 0;
	}
	fVar3 = NET_GET_NET_TIME();
	bVar4 = GET_LOCAL_SLOT();
	iVar5 = Function_127();
	if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iParam0->f_14526]))
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 != bVar4)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (iVar5 != 4294967295 || Function_128(bVar0, 1, 0) == iVar5)
				{
					if (Function_399(bVar0, &Var1))
					{
						if (StackVal && StackVal > (StackVal && (Var1 != iParam0->f_1452 - fVar3) >= 15.0f))
						{
							return 1;
						}
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_399(bool bParam0, int iParam1) //Position: 0xCB90 / 52112
{
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_272, bParam0))
	{
		*iParam1 = { StackVal, Local_272[bParam02] };
		return 1;
	}
	return 0;
}

void Function_400(int iParam0, int iParam1) //Position: 0xCBB1 / 52145
{
	iParam0->f_152 = iParam1;
	return;
}

void Function_401(var uParam0) //Position: 0xCBBD / 52157
{
	if (!Function_403(uParam0, &Local_159 + 36))
	{
		if (Function_138())
		{
			Function_402("TDM_obj_team", 7,5f, !Local_159.f_232, 2, 0, 0, 0);
		}
		else if (Function_125() == 2)
		{
			Function_402("DM_obj_FFA", 7,5f, !Local_159.f_232, 2, 0, 0, 0);
		}
		Local_159.f_232 = 1;
	}
	return;
}

void Function_402(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xCC23 / 52259
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

bool Function_403(bool bParam0, int iParam1) //Position: 0xCC76 / 52342
{
	bool bVar0;
	
	Function_270(iParam1, 1);
	if (Function_363() && !Function_404(iParam1))
	{
		SET_ACTOR_POSTURE(bParam0, 0);
		bVar0 = Function_158(bParam0, 40);
		if (bVar0 == 4294967295)
		{
			bVar0 = Function_158(bParam0, 39);
			if (bVar0 == 4294967295)
			{
				bVar0 = 22;
			}
		}
		if (Function_24(iParam1, 8))
		{
			ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 1, 0);
			ACTOR_SET_NEXT_WEAPON(bParam0, bVar0);
		}
		else
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(bParam0, 0,1f, 0,9f, 1);
			SET_ACTOR_MAX_SPEED(bParam0, 5);
			iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
			SET_PLAYER_CONTROL_CONFIG(0, 4);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 0);
		}
		return 1;
	}
	return 0;
}

bool Function_404(int iParam0) //Position: 0xCD0F / 52495
{
	return *iParam0 <= 12;
}

void Function_405(int iParam0, int iParam1) //Position: 0xCD1B / 52507
{
	iParam0->f_156 = iParam1;
	return;
}

void Function_406() //Position: 0xCD27 / 52519
{
	Function_412(&uLocal_306, Function_138());
	vLocal_52.f_8 = Function_407(&uLocal_306, 1);
	return;
}

var Function_407(int iParam0, int iParam1) //Position: 0xCD41 / 52545
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9[60];
	int iVar70;
	
	iVar3 = 0;
	iParam0->f_2736 = NET_GET_NET_TIME();
	bVar6 = GET_LOCAL_SLOT();
	iVar7 = Function_127();
	bVar8 = (IS_VOLUME_VALID(iParam0->f_1448) && iParam1);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1444)
	{
		iParam0[iVar06]->f_20 = 0.0f;
		if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iVar06]))
		{
			iParam0[iVar06]->f_20 = -1000.0f;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if ((iParam0 + 1460[iVar1106])->f_420)
			{
				bVar2 = false;
				while (bVar2 <= 16)
				{
					if ((iParam0 + 1460[iVar1106] + 28[bVar26])->f_16)
					{
						if (iVar1 != 2)
						{
							if (IS_VOLUME_VALID(StackVal) && iParam1)
							{
								if (IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 1460[iVar1106] + 28[bVar26])))
								{
									iParam0[iVar06]->f_20 = (iParam0[iVar06]->f_20 + (307.0f * (*iParam0 + 1460)[iVar1106]));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 2.0f, 0.0f));
								}
							}
							else if (bVar8)
							{
								if (IS_POINT_IN_VOLUME(*(iParam0 + 1460[iVar1106] + 28[bVar26]), iParam0->f_1448))
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 1.0f, 0,5f));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
								}
							}
							else
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
							}
						}
						else if (bVar2 != bVar6 || Function_410(iParam0 + 1460[iVar1106] + 28[bVar26], iParam0->f_2736))
						{
							iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
						}
						else
						{
							(iParam0 + 1460[iVar1106] + 28[bVar26])->f_16 = 0;
						}
					}
					bVar2++;
				}
			}
			iVar1++;
		}
		bVar2 = false;
		while (bVar2 <= 16)
		{
			if (bVar2 != bVar6)
			{
				if (IS_SLOT_VALID(bVar2))
				{
					if (iVar7 != 4294967295 || Function_128(bVar2, 1, 0) == iVar7)
					{
						if (Function_399(bVar2, &Var4))
						{
							if (StackVal && (Var4 < 4294967295 - iParam0->f_2736) >= 15.0f)
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_411(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0[Var46] + 8), *(iParam0 + 1460[2106]), 0x3f800000, 0x3f800000));
							}
						}
					}
				}
			}
			bVar2++;
		}
		if (bLocal_305)
		{
			if ((iVar3 % 10) == 0)
			{
				PRINTNL();
				Function_142();
				PRINTSTRING("Weighting,");
			}
			PRINTSTRING(GET_OBJECT_NAME((*iParam0)[iVar06]));
			PRINTSTRING(",");
			Function_409(iParam0[iVar06]->f_20);
			PRINTSTRING(",");
			iVar3++;
		}
		iVar0++;
	}
	if (bLocal_305)
	{
		PRINTNL();
	}
	iVar70 = 1;
	iVar0 = 1;
	while (iVar0 < (iParam0->f_1444 - 1))
	{
		if (iParam0[iVar06]->f_20 < iParam0[iVar9[0]6]->f_20)
		{
			iVar9[0] = iVar0;
			iVar70 = 1;
		}
		else if (iParam0[iVar06]->f_20 != iParam0[iVar9[0]6]->f_20)
		{
			iVar9[iVar70] = iVar0;
			iVar70++;
		}
		iVar0++;
	}
	iVar0 = iVar9[(RAND_INT_RANGE(false, 10000) % iVar70)];
	iParam0->f_1452 = iVar0;
	(iParam0 + 1452)->f_4 = NET_GET_NET_TIME();
	Function_408(iParam0 + 1452);
	return (*iParam0)[iVar06];
}

void Function_408(int iParam0) //Position: 0xD170 / 53616
{
	Local_272[GET_LOCAL_SLOT()2] = { StackVal, *iParam0 };
	return;
}

void Function_409(bool bParam0) //Position: 0xD184 / 53636
{
	if (bLocal_305)
	{
		PRINTINT(ROUND(bParam0));
	}
	return;
}

var Function_410(var uParam0, float fParam1) //Position: 0xD198 / 53656
{
	return (fParam1 - uParam0->f_12) >= 20.0f;
}

float Function_411(vector3 vParam0, vector3 vParam3, struct<25> Param6) //Position: 0xD1AB / 53675
{
	float fVar0;
	float fVar1;
	
	if (fParam14 != 0.0f)
	{
		return 0.0f;
	}
	fVar0 = (VDIST2(vParam0, vParam3) * fParam13);
	fVar1 = 0.0f;
	if (StackVal >= fVar0)
	{
		fVar1 = (StackVal * Param6);
	}
	else if (fVar0 >= Param6.f_12)
	{
		fVar1 = (Param6.f_16 * Param6);
	}
	else if (fVar0 >= Param6.f_20)
	{
		fVar1 = (Param6.f_24 * Param6);
	}
	return (fVar1 * fParam14);
}

void Function_412(int iParam0, bool bParam1) //Position: 0xD215 / 53781
{
	(iParam0 + 1460[0106])->f_420 = 1;
	if (bParam1)
	{
		Function_413(iParam0, 0, Function_321(Function_127()));
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	else
	{
		Function_413(iParam0, 0, 4294967295);
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	return;
}

void Function_413(int iParam0, int iParam1, int iParam2) //Position: 0xD25A / 53850
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != GET_LOCAL_SLOT())
		{
			Function_414(iParam0, iVar0, iParam1, iParam2);
		}
		else
		{
			(iParam0 + 1460[iParam1106] + 28[iVar06])->f_16 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_414(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xD29B / 53915
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 0;
	if (IS_SLOT_VALID(bParam1))
	{
		bVar3 = false;
		if (iParam3 != 4294967295 || Function_128(bParam1, 1, 0) != iParam3)
		{
			bVar4 = GET_SLOT_ACTOR(bParam1);
			if (IS_ACTOR_VALID(bVar4))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					Function_415(bVar4, &vVar0);
					bVar3 = true;
				}
			}
			else if (Function_132(bParam1))
			{
				if (!Function_129(bParam1, 2, 1))
				{
					if (GET_SLOT_POSITION(bParam1, &vVar0))
					{
						bVar3 = true;
					}
				}
			}
			if (bVar3)
			{
				(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 1;
				*(iParam0 + 1460[iParam2106] + 28[bParam16]) = { StackVal, StackVal, vVar0 };
				if (IS_VOLUME_VALID(iParam0->f_1448))
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = IS_POINT_IN_VOLUME(vVar0, iParam0->f_1448);
				}
				else
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = 0;
				}
			}
		}
	}
}

void Function_415(bool bParam0, int iParam1) //Position: 0xD37F / 54143
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_416(int iParam0, int iParam1) //Position: 0xD38C / 54156
{
	iParam0->f_164 = iParam1;
	return;
}

void Function_417() //Position: 0xD398 / 54168
{
	if (Function_473(&vLocal_52, Function_374()))
	{
		Function_371("GENMESS_GAMEOVER", 0);
		switch (Function_374())
		{
			case 0xFFFFFFFE:
			case 0xFFFFFFFD:
				Function_471(&vLocal_52, 1, 1, 0);
				break;
			
			default:
				Function_471(&vLocal_52, 0, 1, 0);
				break;
		}
	}
	else
	{
		Function_455(&vLocal_52, 59580);
		Function_2(&Local_159 + 148);
		Function_418(Function_374());
	}
	return;
}

void Function_418(bool bParam0) //Position: 0xD403 / 54275
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	uVar1 = "";
	if (Function_138())
	{
		if (Function_25(Global_79962, 512))
		{
			bVar0 = CEIL(50.0f);
			uVar1 = "xp_hardcore";
		}
		else if (Function_25(Global_79962, 256))
		{
			bVar0 = CEIL(100.0f);
			uVar1 = "xp_veteran";
		}
		iVar2 = Function_127();
		if (bParam0 == iVar2)
		{
			Function_471(&vLocal_52, 1, 1, 0);
			Function_126(9, 1);
			Function_454(0, 1);
			Function_452(&vLocal_52, Function_453(iVar2), "mp_teammsg_blue_start", "mp_teammsg_blue_end", 0, 0);
			Function_442(&Local_159 + 236, Function_447(bParam0, CEIL(25.0f)), CEIL(100.0f), 1, iVar2, uVar1, bVar0);
			Function_441(Function_279(iVar2));
		}
		else
		{
			iVar3 = Function_321(iVar2);
			Function_442(&Local_159 + 236, Function_447(iVar3, CEIL(25.0f)), 0, 0, iVar3, uVar1, bVar0);
			Function_452(&vLocal_52, Function_453(iVar3), "mp_teammsg_red_start", "mp_teammsg_red_end", 0, 0);
			Function_471(&vLocal_52, 0, 1, 0);
			Function_439(&Global_50170[422] + 4, &Global_50170[422] + 8, &Global_50170[422] + 12);
			Function_438(Function_279(iVar3));
		}
		Function_436(&Global_50170[322] + 4, &Global_50170[322] + 8, &Global_50170[322] + 12);
		Function_434(&Global_50170[222] + 4, &Global_50170[222] + 8, &Global_50170[222] + 12);
		Function_433(&Global_50170[1322] + 4, &Global_50170[1322] + 8, &Global_50170[1322] + 12);
		Function_432(&Global_50170[1622] + 4, &Global_50170[1622] + 8, &Global_50170[1622] + 12);
	}
	else
	{
		if (Function_25(Global_79962, 512))
		{
			bVar0 = CEIL(50.0f);
			uVar1 = "xp_hardcore";
		}
		else if (Function_25(Global_79962, 256))
		{
			bVar0 = CEIL(100.0f);
			uVar1 = "xp_veteran";
		}
		if (bParam0 == GET_LOCAL_SLOT())
		{
			Function_471(&vLocal_52, 1, 1, 0);
			Function_126(8, 1);
			Function_454(0, 1);
			Function_452(&vLocal_52, "DM_victory", Function_239(bParam0), 0, 0, 0);
			Function_442(&Local_159 + 236, bParam0, 0, 1, 4294967295, uVar1, bVar0);
			Function_431();
			Function_430(&Global_50170[122] + 4, &Global_50170[122] + 8, &Global_50170[122] + 12, bParam0);
		}
		else
		{
			Function_471(&vLocal_52, 0, 1, 0);
			Function_452(&vLocal_52, "DM_victory", Function_239(bParam0), 0, 0, 0);
			Function_442(&Local_159 + 236, bParam0, 0, 0, 4294967295, uVar1, bVar0);
			Function_429();
		}
		Function_425(&Global_50170[022] + 4, &Global_50170[022] + 8, &Global_50170[022] + 12);
		Function_422(&Global_50170[1222] + 4, &Global_50170[1222] + 8, &Global_50170[1222] + 12);
		Function_419(&Global_50170[1522] + 4, &Global_50170[1522] + 8, &Global_50170[1522] + 12);
	}
	Function_2(&Local_159 + 148);
	return;
}

void Function_419(var uParam0, var uParam1, var uParam2) //Position: 0xD730 / 55088
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(15);
				if (Function_420() == 0)
				{
					Global_50170[1522].f_28++;
					bVar0 = Global_50170[1522].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_89(15, 150, Function_123(), 3029);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(15, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

int Function_420() //Position: 0xD7BD / 55229
{
	return Function_421(12);
}

int Function_421(int iParam0) //Position: 0xD7C8 / 55240
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_422(var uParam0, var uParam1, var uParam2) //Position: 0xD7E1 / 55265
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(12);
				if (Function_420() >= 0)
				{
					if ((Function_424() / Function_420()) > 5)
					{
						Global_50170[1222].f_28++;
						bVar0 = Global_50170[1222].f_28;
					}
				}
				else if (Function_424() > 5)
				{
					Global_50170[1222].f_28++;
					bVar0 = Global_50170[1222].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_89(12, 150, Function_423(), 3026);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(12, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_423() //Position: 0xD8A2 / 55458
{
	return "MP_KDR_Icon_128";
}

int Function_424() //Position: 0xD8BA / 55482
{
	return Function_421(11);
}

void Function_425(var uParam0, var uParam1, var uParam2) //Position: 0xD8C5 / 55493
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(0);
				if (Function_427(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 1)
				{
					Function_116(0, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_426(), 3105);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_124(0);
				if (Function_427(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 5)
				{
					Function_116(0, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_426(), 3001);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_83(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_124(0);
				if (Function_427(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 20)
				{
					Function_89(0, 150, Function_426(), 3002);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_83(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_426() //Position: 0xDA4A / 55882
{
	return "MP_DM_Icon_128";
}

bool Function_427(int iParam0) //Position: 0xDA61 / 55905
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = Function_428();
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_284(bVar2))
		{
			if (Function_386(bVar2) >= iVar0)
			{
				iVar1++;
				if (iVar1 > iParam0)
				{
					return 0;
				}
			}
		}
		bVar2++;
	}
	return 1;
}

int Function_428() //Position: 0xDAA1 / 55969
{
	return Function_250(0);
}

void Function_429() //Position: 0xDAAB / 55979
{
	Function_371("GENMESS_GAMELOST", 0);
	return;
}

void Function_430(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xDAC8 / 56008
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 1)
				{
					Function_116(1, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_426(), 3003);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_124(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 5)
				{
					Function_116(1, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_426(), 3004);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_83(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_124(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 20)
				{
					Function_89(1, 150, Function_426(), 3005);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_83(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_431() //Position: 0xDC52 / 56402
{
	Function_371("GENMESS_GAMEWON", 0);
	return;
}

void Function_432(var uParam0, var uParam1, int iParam2) //Position: 0xDC6E / 56430
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(16);
				if (Function_420() == 0)
				{
					Global_50170[1622].f_28++;
					bVar0 = Global_50170[1622].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_89(16, 150, Function_123(), 3030);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_83(16, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_433(var uParam0, var uParam1, int iParam2) //Position: 0xDCFB / 56571
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(13);
				if (Function_420() >= 0)
				{
					if ((Function_424() / Function_420()) > 5)
					{
						Global_50170[1322].f_28++;
						bVar0 = Global_50170[1322].f_28;
					}
				}
				else if (Function_424() > 5)
				{
					Global_50170[1322].f_28++;
					bVar0 = Global_50170[1322].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_89(13, 150, Function_423(), 3027);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_83(13, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_434(var uParam0, var uParam1, var uParam2) //Position: 0xDDBC / 56764
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(2);
				if (Function_427(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 1)
				{
					Function_116(2, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_435(), 3006);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_124(2);
				if (Function_427(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 5)
				{
					Function_116(2, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_435(), 3007);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_83(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_124(2);
				if (Function_427(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 20)
				{
					Function_89(2, 150, Function_435(), 3008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_83(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_435() //Position: 0xDF41 / 57153
{
	return "MP_TDM_Icon_128";
}

void Function_436(var uParam0, var uParam1, var uParam2) //Position: 0xDF59 / 57177
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(3);
				if (Function_437())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 1)
				{
					Function_116(3, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_435(), 3009);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_124(3);
				if (Function_437())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 5)
				{
					Function_116(3, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_435(), 3010);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_83(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_124(3);
				if (Function_437())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 20)
				{
					Function_89(3, 150, Function_435(), 3011);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_83(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_437() //Position: 0xE0DB / 57563
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_428();
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_284(bVar1) && bVar2 == bVar1)
		{
			if (iVar0 < Function_386(bVar1))
			{
				return 0;
			}
		}
		bVar1++;
	}
	return 1;
}

void Function_438(int iParam0) //Position: 0xE119 / 57625
{
	struct<16> Var0;
	
	strcpy(&Var0, "GENMESS_LOSE_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_371(&Var0, 0);
	return;
}

void Function_439(var uParam0, var uParam1, var uParam2) //Position: 0xE144 / 57668
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_124(4);
				if (Function_440())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_89(4, 150, Function_435(), 3012);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_115(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_83(4, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_440() //Position: 0xE1B4 / 57780
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	iVar1 = Function_386(bVar0);
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_284(bVar2) && bVar0 == bVar2)
		{
			if ((*&Global_78578 + 20)[bVar2] == (*&Global_78578 + 20)[bVar0])
			{
				if (iVar1 < Function_386(bVar2))
				{
					return 0;
				}
			}
		}
		bVar2++;
	}
	return 1;
}

void Function_441(int iParam0) //Position: 0xE20B / 57867
{
	struct<16> Var0;
	
	strcpy(&Var0, "GENMESS_WIN_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_371(&Var0, 0);
	return;
}

void Function_442(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0xE235 / 57909
{
	iParam0->f_24 = bParam1;
	iParam0->f_32 = iParam3;
	iParam0->f_36 = iParam4;
	iParam0->f_40 = iParam2;
	iParam0->f_48 = uParam5;
	iParam0->f_44 = bParam6;
	if (bParam1 > 0)
	{
		iParam0->f_20 = Function_387(9, bParam1);
		Function_446(iParam0 + 64, iParam0->f_20, 3, 0);
	}
	else
	{
		iParam0->f_20 = 4294967295;
	}
	Function_444(iParam0 + 64, "MP_victory", 5, 0);
	Function_444(iParam0 + 64, "custom/mp_victory", 8, 0);
	Function_357(iParam0 + 64);
	Function_443(5);
	Function_355();
}

void Function_443(int iParam0) //Position: 0xE2CD / 58061
{
	Function_79(&Global_83864 + 1252, iParam0);
	return;
}

var Function_444(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE2DF / 58079
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_445(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_361(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_445(var uParam0, int iParam1, int iParam2) //Position: 0xE317 / 58135
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_361(uParam0[iVar03], 4);
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

var Function_446(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xE3DB / 58331
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_361(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_361(uParam0[iVar03], 8);
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

bool Function_447(int iParam0, bool bParam1) //Position: 0xE4AB / 58539
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 4294957296;
	bVar2 = 4294967295;
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (Function_284(bVar3))
		{
			if ((*&Global_78578 + 20)[bVar3] == iParam0)
			{
				iVar1 = Function_448(bVar3, bParam1);
				if (iVar0 < iVar1)
				{
					iVar0 = iVar1;
					bVar2 = bVar3;
				}
			}
		}
		bVar3++;
	}
	return bVar2;
}

var Function_448(int iParam0, int iParam1) //Position: 0xE4FD / 58621
{
	return ((((Function_386(iParam0) / iParam1) * 100000) + Function_451(iParam0) * 100) - Function_449(iParam0));
}

int Function_449(bool bParam0) //Position: 0xE51E / 58654
{
	return Function_450(12, bParam0);
}

bool Function_450(int iParam0, bool bParam1) //Position: 0xE52B / 58667
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_421(iParam0);
	}
	if (!Function_132(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_451(bool bParam0) //Position: 0xE599 / 58777
{
	return Function_450(11, bParam0);
}

void Function_452(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE5A6 / 58790
{
	int iVar0;
	
	iParam0->f_16 = bParam1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(*iParam0 + 20)[iVar0] = "";
		iVar0++;
	}
	if (IS_STRING_VALID(bParam2))
	{
		(*iParam0 + 20)[0] = bParam2;
	}
	if (IS_STRING_VALID(bParam3))
	{
		(*iParam0 + 20)[1] = bParam3;
	}
	if (IS_STRING_VALID(bParam4))
	{
		(*iParam0 + 20)[2] = bParam4;
	}
	if (IS_STRING_VALID(bParam5))
	{
		(*iParam0 + 20)[3] = bParam5;
	}
}

bool Function_453(int iParam0) //Position: 0xE615 / 58901
{
	switch (Function_279(iParam0))
	{
		case 0xFFFFFFF6:
			return "TeamWin_-10";
		
		case 0xFFFFFFF7:
			return "TeamWin_-9";
		
		case 0xFFFFFFF8:
			return "TeamWin_-8";
		
		case 0xFFFFFFF9:
			return "TeamWin_-7";
		
		case 0xFFFFFFFA:
			return "TeamWin_-6";
		
		case 0xFFFFFFFB:
			return "TeamWin_-5";
		
		case 0xFFFFFFFC:
			return "TeamWin_-4";
		
		case 0xFFFFFFFD:
			return "TeamWin_-3";
		
		case 0xFFFFFFFE:
			return "TeamWin_-2";
		
		case 0xFFFFFFFF:
			return "TeamWin_-1";
		
		case 0x00000000:
			return "nTeamWin_0";
		
		case 0x00000001:
			return "nTeamWin_1";
		
		case 0x00000002:
			return "nTeamWin_2";
		
		case 0x00000003:
			return "nTeamWin_3";
		
		case 0x00000004:
			return "nTeamWin_4";
		
		case 0x00000005:
			return "nTeamWin_5";
		
		case 0x00000006:
			return "nTeamWin_6";
		
		case 0x00000007:
			return "nTeamWin_7";
		
		case 0x00000008:
			return "nTeamWin_8";
		
		case 0x00000009:
			return "nTeamWin_9";
		
		case 0x0000000A:
			return "TeamWin_10";
		
		case 0x0000000B:
			return "TeamWin_11";
		
		case 0x0000000C:
			return "TeamWin_12";
		
		case 0x0000000D:
			return "TeamWin_13";
		
		case 0x0000000E:
			return "TeamWin_14";
		
		case 0x0000000F:
			return "TeamWin_15";
		
		case 0x00000010:
			return "TeamWin_16";
		
		case 0x00000011:
			return "TeamWin_17";
		
		case 0x00000012:
			return "TeamWin_18";
		
		case 0x00000013:
			return "TeamWin_19";
		
		case 0x00000014:
			return "TeamWin_20";
		
		default:
	}
	return "TeamWin_unx";
}

void Function_454(int iParam0, int iParam1) //Position: 0xE896 / 59542
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_455(int iParam0, int iParam1) //Position: 0xE8B0 / 59568
{
	iParam0->f_172 = iParam1;
	return;
}

int Function_456() //Position: 0xE8BC / 59580
{
	if (Function_457(&Local_159 + 236, Function_43()))
	{
		Function_4(&Local_159 + 236);
		return 1;
	}
	return 0;
}

bool Function_457(int iParam0, bool bParam1) //Position: 0xE8D9 / 59609
{
	int iVar0;
	
	if (!iParam0->f_32)
	{
		iVar0 = 5;
	}
	switch (iParam0->f_56)
	{
		case 0x00000000:
			Function_470();
			UI_HIDE("FameText");
			UI_EXCLUDE("FameText");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			CANCEL_DEADEYE();
			UI_PUSH("MPSplash");
			UI_ENTER("HudMPNoFun");
			UI_SET_STYLE("MPSplashTitle", (0 + iVar0));
			Function_469(iParam0, 1, "VS_WAITING_FOR_MOVIE_TO_BE_READY");
			break;
		
		case 0x00000001:
			if (!UNK_0x9D20BDC4("networking"))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1000.0f, 1065353216);
				}
			}
			else
			{
				if (iParam0->f_104 < 5.0f)
				{
					Function_469(iParam0, 2, "VS_STREAMING");
				}
				iParam0->f_104 = (iParam0->f_104 + 1.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_357(iParam0 + 64) && FLASH_GET_INT("networking", "splashDone") < 0)
			{
				UI_ENTER("LoadingSpinner");
				UI_HIDE("WeaponAmmo");
				UI_EXIT("XpHud");
				HUD_CLEAR_HELP();
				HUD_ENABLE(false);
				UI_EXCLUDE("MPSplashItem.s0");
				UI_EXCLUDE("MPSplashItem.s1");
				UI_EXCLUDE("MPSplashItem.s2");
				UI_EXCLUDE("MPSplashItem.s3");
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_REFRESH("MPSplash");
				if (VDIST(*(&Global_79349 + 28), Global_34574) >= 200.0f)
				{
					*(iParam0 + 8) = { StackVal, StackVal, *(&Global_79349 + 28) };
				}
				else
				{
					Function_467(StackVal, StackVal, Global_34574);
					*(iParam0 + 8) = { StackVal, StackVal, Function_467(StackVal, StackVal, Global_34574) };
					iParam0->f_108 = CLEAR_AREA_OF_GRASS(*(iParam0 + 8), 2.0f);
					iParam0->f_112 = CLEAR_AREA_OF_TREE_TYPE(*(iParam0 + 8), 5.0f, "");
				}
				*iParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "CloneAnchor", *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
				iParam0->f_28 = Function_464(bParam1, 0, *iParam0, 1, 0, 0);
				if (!iParam0->f_32)
				{
					SET_CAMERASHOT_TARGET_OBJECT_ROLL(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.0f);
					SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0,180749f, 1,206322f, -0,246788f, 0.0f, 0.0f, 0.0f, 0);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					DESTROY_ACTOR(Global_34573);
				}
				Function_469(iParam0, 4, "VS_LOADING");
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (iParam0->f_20 != 4294967295)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 0);
					iParam0->f_4 = CREATE_ACTOR_IN_LAYOUT(bParam1, "Clone", iParam0->f_20, *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(15);
					SET_AMBIENT_VOICE_NAME(StackVal, Function_204(GET_ACTOR_ENUM(StackVal)));
					SET_ACTOR_INVULNERABILITY(StackVal, true);
					SET_ACTOR_PROOF(StackVal, 4294967295);
				}
				if (!IS_POINT_LIGHT_VALID(CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(*(iParam0 + 8), "winLight", bParam1) + Vector(-0,75f, 1,5f, -0,75f), 1.0f, 1.0f, 1.0f, 2,5f)))
				{
				}
				if (iParam0->f_32)
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_won_header");
				}
				else
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_lost_header");
				}
				if (iParam0->f_36 == 4294967295)
				{
					UI_SET_TEXT("MPSplashItem.s0", Function_319(iParam0->f_24));
					Function_463(iParam0->f_24);
				}
				else
				{
					Function_462("MPSplashItem.s0", iParam0->f_36);
					if (iParam0->f_20 != 4294967295)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_mvp"), UI_GET_STRING(Function_319(iParam0->f_24)), 0, 0);
						UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
					}
					else
					{
						UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
					}
				}
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_REFRESH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				Function_469(iParam0, 3, "VS_WAITING_FOR_READY");
			}
			break;
		
		case 0x00000003:
			if (StackVal || (StackVal && Function_190(HAS_INVENTORY_COMPONENT(iParam0->f_20 != 4294967295), 1, 0x41700000)))
			{
				if (iParam0->f_20 != 4294967295)
				{
					Function_460(StackVal);
					SET_ANIM_SET_FOR_ACTOR(StackVal, "mp_victory", 1);
					SET_ACTION_NODE_FOR_ACTOR(StackVal, "mp_victory");
				}
				PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM_MASTER");
				if (iParam0->f_36 == 4294967295)
				{
					if (iParam0->f_32)
					{
						iParam0->f_52 = "MP_VS_White.ppp";
					}
					else
					{
						iParam0->f_52 = "MP_VS_Red.ppp";
					}
				}
				else if (iParam0->f_32)
				{
					iParam0->f_52 = "MP_VS_Blue.ppp";
				}
				else
				{
					iParam0->f_52 = "MP_VS_Red.ppp";
				}
				PPP_LOAD_PRESET(iParam0->f_52);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				Function_470();
				Function_469(iParam0, 6, "VS_SPLASH_APPEAR");
			}
			break;
		
		case 0x00000006:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_SET_STYLE("MPSplashTitle", (2 + iVar0));
				HUD_FADE_IN(0.0f, 1065353216);
				Function_469(iParam0, 7, "VS_SPLASH_APPEAR_WAIT");
			}
			break;
		
		case 0x00000007:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0,5f)
				{
					if (iParam0->f_20 != 4294967295)
					{
						SAY_SINGLE_LINE_STRING(StackVal, "MPTAUNT", true, true, 4, 0, true, false);
						Function_469(iParam0, 10, "VS_WAIT_FOR_CHATTY_CATHY");
					}
					else if (iParam0->f_104 < 5.0f)
					{
						Function_469(iParam0, 11, "VS_MATCH_BONUS");
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_ANY_SPEECH_PLAYING(StackVal))
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 1.0f)
				{
					Function_469(iParam0, 11, "VS_MATCH_BONUS");
				}
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_40 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_459(iParam0->f_40);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_273(TO_FLOAT(iParam0->f_40), 0);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_40 >= 0)
			{
				Function_469(iParam0, 12, "VS_AIM_BONUS");
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_44 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_458(iParam0);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_273(TO_FLOAT(iParam0->f_44), 0);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_44 >= 0)
			{
				if (iParam0->f_20 != 4294967295)
				{
					DECOR_SET_BOOL(StackVal, "HolsterTheDamnedThing", true);
					Function_469(iParam0, 13, "VS_WAIT_FOR_START_HOLSTER");
				}
				else
				{
					Function_469(iParam0, 14, "VS_OUTRO");
				}
			}
			break;
		
		case 0x0000000D:
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_104 < 15.0f)
			{
				Function_469(iParam0, 14, "VS_OUTRO");
			}
			break;
		
		case 0x0000000E:
			if (!DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_20 != 4294967295)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0,6f)
				{
					UI_SET_STYLE("MPSplashTitle", (4 + iVar0));
					Function_469(iParam0, 15, "VS_OUTRO_FADE");
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_154(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_458(int iParam0) //Position: 0xF2DA / 62170
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0->f_44, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", iParam0->f_48);
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_459(int iParam0) //Position: 0xF368 / 62312
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", "mp_plist_match_bonus");
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_460(bool bParam0) //Position: 0xF407 / 62471
{
	bool bVar0;
	
	bVar0 = Function_461();
	GIVE_WEAPON_TO_ACTOR(bParam0, bVar0, false, 1, 1);
	ACTOR_SET_WEAPON_AMMO(bParam0, bVar0, 9.0f);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 1);
	return;
}

int Function_461() //Position: 0xF431 / 62513
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		switch (UNK_0xDB679ED9((*&Global_83591 + 276)[iVar02]))
		{
			case 0x00000027:
			case 0x00000028:
				return (*&Global_83591 + 276)[iVar02];
			
			default:
		}
		iVar0++;
	}
	return 5;
}

void Function_462(char* cParam0, int iParam1) //Position: 0xF476 / 62582
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_277(iParam1, 1) };
	UI_SET_TEXT(cParam0, &Var0);
	return;
}

void Function_463(bool bParam0) //Position: 0xF48D / 62605
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(bParam0) };
	UI_SET_STRING("Generic_Dbuffer128_0", &Var0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	return;
}

var Function_464(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xF4E5 / 62693
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_58(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Victory", 1, 1);
	}
	Function_465(&bVar0, uParam2);
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

void Function_465(var uParam0, int iParam1) //Position: 0xF55D / 62813
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_466(&iVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_466(var uParam0, bool bParam1) //Position: 0xF583 / 62851
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,004f, 1,051545f, -0,924536f, 9,279476f, -164,752f, 29,3796f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,180749f, 1,166322f, -0,246788f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0,512771f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_467(vector3 vParam0) //Position: 0xF61E / 63006
{
	vector3 vVar0;
	
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 100.0f);
	Function_468(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	return StackVal, StackVal, vParam0;
}

void Function_468(bool bParam0) //Position: 0xF681 / 63105
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

void Function_469(var uParam0, int iParam1, int iParam2) //Position: 0xF734 / 63284
{
	uParam0->f_56 = iParam1;
	uParam0->f_104 = 0.0f;
	return;
}

void Function_470() //Position: 0xF745 / 63301
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_471(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF757 / 63319
{
	if (bParam1)
	{
		Function_126(7, 1);
		Function_126(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_138())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_421(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_472())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_421(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_15(bParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_454(37, 0);
		Function_7(bParam0 + 44, 4);
	}
	else
	{
		Function_126(6, 1);
		Function_454(37, 0);
		Function_7(bParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_15(bParam0 + 44, 256);
	}
	else
	{
		Function_7(bParam0 + 44, 256);
	}
}

bool Function_472() //Position: 0xF805 / 63493
{
	return Function_139(16);
}

bool Function_473(var uParam0, int iParam1) //Position: 0xF810 / 63504
{
	switch (iParam1)
	{
		case 0xFFFFFFFE:
			Function_452(uParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_452(uParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_452(uParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_452(uParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_474(var uParam0, var uParam1) //Position: 0xF8CB / 63691
{
	uParam0->f_12 = 2;
	uParam1 = uParam1;
	return;
}

int Function_475() //Position: 0xF8DA / 63706
{
	return Function_476(&Local_159 + 36, &Local_247, 0);
}

int Function_476(int iParam0, int iParam1, bool bParam2) //Position: 0xF8EA / 63722
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_246(iParam0 + 32, iParam1 + 12))
	{
		if (!bParam2)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 20)[bVar7];
				if (bVar8 != 4294967295)
				{
					bVar6 = Function_343(Function_43(), &vVar0, &vVar3, bVar8, 16);
				}
				else
				{
					return 0;
				}
			}
			return 2;
		}
		bVar6 = Function_343(Function_43(), &vVar0, &vVar3, bLocal_51, bLocal_50);
		if (bVar6)
		{
			if (Function_195(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
			{
				return 1;
			}
			return 2;
		}
		return 0;
	}
	return 2;
}

bool Function_477(bool bParam0) //Position: 0xF96E / 63854
{
	return IS_OBJECT_VALID(Function_315(bParam0));
}

void Function_478(int iParam0) //Position: 0xF97C / 63868
{
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MPSplash");
	*iParam0 = 12;
	return;
}

void Function_479(int iParam0) //Position: 0xF9A5 / 63909
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_480(int iParam0, vector3 vParam1) //Position: 0xF9B9 / 63929
{
	Function_15(iParam0 + 44, 512);
	*(iParam0 + 72) = { StackVal, StackVal, vParam1 };
}

vector3 Function_481(bool bParam0, var uParam1) //Position: 0xF9D5 / 63957
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_24(uParam1, 8))
	{
		bVar0 = Function_337(bParam0, 0);
		bVar1 = Function_337(bParam0, 1);
		Function_213(bVar0);
		Function_213(bVar1);
		return StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_213(bVar1), Function_213(bVar0), StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	}
	bVar2 = Function_315(bParam0);
	Function_213(bVar2);
	return StackVal, StackVal, Function_213(bVar2);
}

int Function_482() //Position: 0xFA14 / 64020
{
	return Function_483(&Local_159 + 36, &Local_247);
}

int Function_483(int iParam0, int iParam1) //Position: 0xFA23 / 64035
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_246(iParam0 + 32, iParam1 + 12))
	{
		iVar6 = Function_127();
		if (iVar6 != 4294967295)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 20)[bVar7];
				if (bVar8 != 4294967295)
				{
					if (Function_345(Function_43(), iVar6, &vVar0, &vVar3, bVar8, (*iParam1 + 88)[iVar6]))
					{
						if (Function_195(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
						{
							return 1;
						}
						return 2;
					}
					return 0;
				}
				return 0;
			}
			return 2;
		}
		return 2;
	}
	return 2;
}

void Function_484(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFA9F / 64159
{
	if (bParam1)
	{
		*iParam0 = 9;
	}
	else if (bParam4)
	{
		*iParam0 = 8;
	}
	else
	{
		*iParam0 = 0;
	}
	iParam0->f_64 = 0.0f;
	iParam0->f_44 = 0;
	iParam0->f_48 = 0;
	iParam0->f_144 = 4294967295;
	iParam0->f_12 = 2;
	Function_496(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_189(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_395(iParam0, 2);
	Function_494(iParam0);
	Function_266(iParam0);
	Function_493(iParam0);
	Function_491(iParam0);
	Function_489(iParam0);
	Function_487(iParam0);
	Function_485(iParam0);
	if (bParam2)
	{
		Function_15(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_15(iParam0 + 44, 8);
		Function_184(iParam0 + 184);
	}
	Function_262(iParam0, bParam4);
	Function_36(8388608, 0);
}

void Function_485(var uParam0) //Position: 0xFB67 / 64359
{
	Function_396(uParam0, 64374);
	return;
}

int Function_486() //Position: 0xFB76 / 64374
{
	return 0;
}

void Function_487(var uParam0) //Position: 0xFB7D / 64381
{
	Function_455(uParam0, 64396);
	return;
}

int Function_488() //Position: 0xFB8C / 64396
{
	return 1;
}

void Function_489(var uParam0) //Position: 0xFB93 / 64403
{
	Function_405(uParam0, 64418);
	return;
}

void Function_490() //Position: 0xFBA2 / 64418
{
	return;
}

void Function_491(int iParam0) //Position: 0xFBA8 / 64424
{
	Function_492(iParam0, 64418);
	return;
}

void Function_492(var uParam0, int iParam1) //Position: 0xFBB7 / 64439
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_493(int iParam0) //Position: 0xFBC3 / 64451
{
	Function_416(iParam0, 64418);
	return;
}

void Function_494(int iParam0) //Position: 0xFBD2 / 64466
{
	Function_400(iParam0, 64481);
	return;
}

void Function_495(var uParam0) //Position: 0xFBE1 / 64481
{
	uParam0 = uParam0;
	return;
}

void Function_496(int iParam0, struct<57> Param1) //Position: 0xFBEB / 64491
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_497(int iParam0, bool bParam1) //Position: 0xFBFF / 64511
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3[2];
	int iVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	
	Function_295(1, 1);
	Function_295(2, 0);
	Function_479(iParam0);
	iParam0->f_16 = 4294967295;
	if (bParam1)
	{
		Function_498(&iVar1, &iVar2, 1, 1);
		(*iParam0 + 88)[0] = (iVar1 + (iVar1 % 2));
		(*iParam0 + 88)[1] = (iVar2 + (iVar2 % 2));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			(*iParam0 + 20)[bVar0] = 4294967295;
			if (IS_SLOT_VALID(bVar0))
			{
				if (Function_132(bVar0))
				{
					if (Function_129(bVar0, 2048, 1))
					{
						iVar6 = Function_128(bVar0, 0, 0);
						if (iVar6 > 0)
						{
							(*iParam0 + 20)[bVar0] = uVar3[iVar6];
							uVar3[iVar6]++;
						}
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		fVar7 = 0.0f;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_284(bVar0))
			{
				if (Function_129(bVar0, 2048, 1))
				{
					bVar8++;
				}
			}
			bVar0++;
		}
		fVar9 = (TO_FLOAT(16) / TO_FLOAT(bVar8));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_284(bVar0))
			{
				if (Function_129(bVar0, 2048, 1))
				{
					(*iParam0 + 20)[bVar0] = FLOOR((fVar7 * fVar9));
					fVar7 = (fVar7 + 1.0f);
				}
				else
				{
					(*iParam0 + 20)[bVar0] = 4294967295;
				}
			}
			else
			{
				(*iParam0 + 20)[bVar0] = 4294967295;
			}
			bVar0++;
		}
	}
	Function_287(iParam0 + 12);
	return;
}

void Function_498(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xFD53 / 64851
{
	int iVar0;
	
	*uParam0 = 0;
	*uParam1 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		switch (Function_128(iVar0, uParam2, uParam3))
		{
			case 0x00000000:
				*uParam0++;
				break;
			
			case 0x00000001:
				*uParam1++;
				break;
		}
		iVar0++;
	}
}

bool Function_499(int iParam0) //Position: 0xFDA6 / 64934
{
	if (!IS_OBJECT_VALID(Function_337(iParam0, 0)))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Function_337(iParam0, 1)))
	{
		return 0;
	}
	return 1;
}

bool Function_500() //Position: 0xFDCB / 64971
{
	return (Function_374() == 4294967295 && !Function_373());
}

var Function_501(int iParam0) //Position: 0xFDDB / 64987
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 1;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_132(bVar0))
			{
				if (Function_129(bVar0, 2048, 1))
				{
					Stack.Push(bVar0);
					Call_Loc(iParam0);
					if (StackVal)
					{
						iVar1 = 1;
					}
					else
					{
						NET_LOG(true, "GameSync", "Slot #%s, (%s) skipped because their gamedata isn't valid yet", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
						iVar2 = 0;
					}
				}
				else
				{
					NET_LOG(true, "GameSync", "Slot #%s, (%s) skipped because they haven't joined the game", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
				}
			}
			else
			{
				NET_LOG(true, "GameSync", "Slot #%s, (%s)'s slot is valid, but has invalid CBA data", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
			}
		}
		bVar0++;
	}
	return (iVar1 && iVar2);
}

var Function_502(bool bParam0) //Position: 0xFF3C / 65340
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_272, bParam0);
}

void Function_503() //Position: 0xFF4A / 65354
{
	if (bLocal_305)
	{
		Function_142();
		PRINTSTRING("Game Started");
		PRINTNL();
	}
	return;
}

void Function_504(bool bParam0, bool bParam1) //Position: 0xFF6E / 65390
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(bParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", bParam0);
	}
	return;
}

void Function_505() //Position: 0xFFA3 / 65443
{
	int iVar0;
	
	iLocal_158 = 0;
	Local_159.f_4 = 0;
	Local_159.f_24 = 0;
	Function_542(&Local_159 + 36, &Local_247, Function_138());
	Function_391(4294967295);
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_247, 25);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_272, 33);
	Function_541(0);
	Function_534(0);
	iVar0 = NET_GET_PLAYMODE();
	if (iVar0 != 1 || iVar0 != 3)
	{
		Global_84364.f_776 = 4294967295;
	}
	else if (Function_138())
	{
		Global_84364.f_776 = Function_137();
	}
	else
	{
		Global_84364.f_776 = Function_133();
	}
	Function_46(0);
	if (IS_ACTOR_VALID(Function_22()))
	{
		DESTROY_ACTOR(Function_22());
	}
	Function_532();
	Function_524(Function_43(), &uLocal_306, 0, 1);
	if (Function_138())
	{
		Function_521(&Local_159 + 148, 1, 67583, UI_GET_STRING("TDM_team_fmt_cpp"));
	}
	else
	{
		Function_521(&Local_159 + 148, 0, 67296, UI_GET_STRING("TDM_team_fmt_cpp"));
	}
	Function_506();
	return;
}

void Function_506() //Position: 0x1008A / 65674
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 65718);
	NET_SCRIPTMSG_REGISTER_HANDLER(5, 65698);
	return;
}

void Function_507(int iParam0) //Position: 0x100A2 / 65698
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	Function_391(iVar0);
	return;
}

void Function_508(int iParam0) //Position: 0x100B6 / 65718
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 11);
	Function_516(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uLocal_306, Var0);
	if (Var0.f_32 >= 0)
	{
		return;
	}
	if (Function_500())
	{
		return;
	}
	switch (StackVal)
	{
		case default:
			break;
		
		case 0x00000002:
			if (StackVal == GET_LOCAL_SLOT())
			{
				Function_514(0, &Local_159 + 28);
			}
			break;
		
		case 0x00000009:
			if (IS_SLOT_VALID(Var0))
			{
				if (StackVal || !Function_138() == Function_128(Function_128(Var0, 1, 0), 1, 0))
				{
					if (Var0 == GET_LOCAL_SLOT())
					{
						Function_513(CEIL(25.0f));
						Function_273(25.0f, "nXP_assist");
					}
				}
			}
			break;
		
		case 0x00000001:
			if (StackVal && IS_SLOT_VALID(IS_SLOT_VALID(Var0)))
			{
				bVar11 = Function_138();
				if (StackVal || !bVar11 == Function_128(Function_128(Var0, 1, 0), 1, 0))
				{
					if (StackVal == GET_LOCAL_SLOT())
					{
						Function_513(CEIL(50.0f));
						Function_273(50.0f, 0);
						Function_511(&Local_159 + 36, &Local_247, Var0);
					}
					if (bVar11)
					{
						Function_509(Function_510(StackVal), CEIL(50.0f));
					}
				}
			}
			break;
	}
	return;
}

void Function_509(int iParam0, int iParam1) //Position: 0x101D1 / 66001
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = (Global_78578[iParam02] + iParam1);
		Function_287(&Global_78578 + 92);
	}
	return;
}

bool Function_510(bool bParam0) //Position: 0x10206 / 66054
{
	return Function_128(bParam0, 1, 0);
}

void Function_511(var uParam0, var uParam1, int iParam2) //Position: 0x10213 / 66067
{
	struct<5> Var0;
	
	if (uParam1->f_16 == 4294967295)
	{
		Var0.f_4 = Function_512(uParam0->f_104);
		uParam0->f_104++;
		UI_SET_TEXT("XPComboLevel", Function_291(uParam0->f_104));
		UI_REFRESH("XPComboLevel");
		PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var0);
		if (iParam2 == uParam0->f_96)
		{
			Function_273(100.0f, "xp_standoff_kill_target");
		}
	}
	return;
}

var Function_512(int iParam0) //Position: 0x102B0 / 66224
{
	return (4294966996 + iParam0 * 100);
}

void Function_513(bool bParam0) //Position: 0x102BE / 66238
{
	Function_248(0, bParam0);
	return;
}

void Function_514(int iParam0, int iParam1) //Position: 0x102CA / 66250
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_22();
	iVar1 = Function_515(iParam0, iParam1);
	switch (iParam0)
	{
		case 0x00000000:
			switch (iVar1)
			{
				case 0x00000002:
					if (IS_ACTOR_VALID(bVar0))
					{
						if (IS_ACTOR_ALIVE(bVar0))
						{
							Function_372("mp_griefing_teamkill_offense", 0x41200000, 1, 0, 2, 1, 0);
							KILL_ACTOR(Function_22());
						}
					}
					break;
				
				case 0x00000000:
					Function_372("mp_griefing_teamkill_warning", 0x41200000, 1, 0, 2, 1, 0);
					break;
				
				case 0x00000001:
					Function_372("mp_griefing_teamkill_warning_2", 0x41200000, 1, 0, 2, 1, 0);
					break;
			}
			break;
	}
	return;
}

int Function_515(int iParam0, bool bParam1) //Position: 0x103AC / 66476
{
	(*bParam1)[iParam0]++;
	switch ((*bParam1)[iParam0])
	{
		case 0x00000001:
			return 0;
		
		case 0x00000002:
			return 1;
		
		default:
	}
	return 2;
}

void Function_516(var uParam0, struct<29> Param1) //Position: 0x103DC / 66524
{
	bool bVar0;
	struct<9> Var1;
	
	bVar0 = GET_LOCAL_SLOT();
	if (StackVal == 1)
	{
		if (StackVal != bVar0)
		{
			if (!Function_138() || Function_127() != Function_128(Param1, 1, 0))
			{
				Function_518(StackVal, StackVal, uParam0, *(&Param1 + 16));
			}
		}
	}
	if (Param1 == bVar0)
	{
		Function_142();
		PRINTSTRING("Died,");
		bVar4 = Function_22();
		if (IS_ACTOR_VALID(bVar4))
		{
			Function_415(bVar4, &vVar1);
			PRINTFLOAT(vVar1.x);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.y);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.z);
			PRINTSTRING(",");
		}
		else
		{
			PRINTSTRING(",,,");
		}
		bVar5 = Param1.f_12;
		if (Function_181(bVar5))
		{
			GET_WEAPON_DISPLAY_NAME(bVar5);
		}
		PRINTSTRING(",");
		bVar6 = true;
		switch (StackVal)
		{
			case 0x00000003:
				PRINTSTRING("nSuicide,,");
				bVar6 = false;
				break;
			
			case 0x00000001:
				PRINTSTRING("Player,");
				break;
			
			case 0x00000002:
				PRINTSTRING("nTeamKill,");
				break;
			
			case 0x00000006:
				PRINTSTRING("KO,");
				break;
			
			case 0x00000004:
				PRINTSTRING("NPC,");
				PRINTSTRING(Function_517(StackVal));
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000005:
				PRINTSTRING("Animal,");
				PRINTINT(StackVal);
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000000:
				PRINTSTRING("nDefault,,");
				bVar6 = false;
				break;
			
			default:
				PRINTSTRING("Other,,");
				bVar6 = false;
				break;
		}
		if (bVar6)
		{
			bVar4 = GET_SLOT_ACTOR(StackVal);
			if (IS_ACTOR_VALID(bVar4))
			{
				Function_415(bVar4, &vVar1);
				PRINTFLOAT(vVar1.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.z);
				PRINTSTRING(",");
			}
			else
			{
				PRINTSTRING(",,,");
			}
		}
		else
		{
			PRINTSTRING(",,,");
		}
		if (Param1.f_28)
		{
			PRINTSTRING("HeadShot");
		}
		PRINTNL();
	}
}

var Function_517(int iParam0) //Position: 0x105E8 / 67048
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000019:
			iVar0 = "gang_name_dnd";
			break;
		
		case 0x0000000E:
			iVar0 = "gang_name_rustlers";
			break;
		
		case 0x00000018:
			iVar0 = "gang_name_treasure";
			break;
		
		default:
			iVar0 = "proc_grp_neutral";
			break;
	}
	return iVar0;
}

void Function_518(int iParam0, vector3 vParam1) //Position: 0x1066A / 67178
{
	(iParam0 + 1460[2106])->f_416 = ((iParam0 + 1460[2106])->f_416 + 1 % 16);
	*(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166]) = { StackVal, StackVal, vParam1 };
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_12 = NET_GET_NET_TIME();
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_16 = 1;
}

var Function_519(int iParam0, int iParam1) //Position: 0x106E0 / 67296
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	
	bVar1 = GET_LOCAL_SLOT();
	iVar2 = Function_428();
	bVar3 = 4294967295;
	bVar4 = 4294967295;
	iVar5 = 0;
	bVar6 = 4294967295;
	bVar7 = 4294967295;
	bVar8 = false;
	while (bVar8 <= 16)
	{
		if (bVar8 != bVar1)
		{
			if (Function_284(bVar8))
			{
				iVar9 = Function_386(bVar8);
				if (iVar9 >= iVar2)
				{
					iVar5++;
					if (iVar9 >= bVar4)
					{
						bVar4 = iVar9;
						bVar3 = bVar8;
					}
				}
				else if (iVar9 >= bVar7)
				{
					bVar7 = iVar9;
					bVar6 = bVar8;
				}
			}
		}
		bVar8++;
	}
	Function_520(iParam0, iVar5, &iVar0);
	Function_520(iParam0 + 4, iVar2, &iVar0);
	Function_520(iParam0 + 8, bVar1, &iVar0);
	if (*iParam0 == 0)
	{
		Function_520(iParam1, 1, &iVar0);
		Function_520(iParam1 + 4, bVar7, &iVar0);
		Function_520(iParam1 + 8, bVar6, &iVar0);
	}
	else
	{
		Function_520(iParam1, 0, &iVar0);
		Function_520(iParam1 + 4, bVar4, &iVar0);
		Function_520(iParam1 + 8, bVar3, &iVar0);
	}
	return iVar0;
}

int Function_520(int iParam0, bool bParam1, int iParam2) //Position: 0x107C6 / 67526
{
	if (*iParam0 != bParam1)
	{
		*iParam0 = bParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

void Function_521(var uParam0, var uParam1, int iParam2, char* cParam3) //Position: 0x107E0 / 67552
{
	uParam0->f_76 = 0;
	uParam0->f_64 = uParam1;
	uParam0->f_48 = iParam2;
	uParam0->f_60 = cParam3;
}

var Function_522(int iParam0, int iParam1) //Position: 0x107FF / 67583
{
	int iVar0;
	
	Function_520(iParam0 + 4, Function_523(), &iVar0);
	Function_520(iParam1 + 4, Function_389(Function_321(Function_127())), &iVar0);
	return iVar0;
}

bool Function_523() //Position: 0x10827 / 67623
{
	if (Function_127() > 0 || Function_127() < 2)
	{
		return 4294967295;
	}
	return Function_389(Function_127());
}

int Function_524(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x10843 / 67651
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<9> Var5;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return 0;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	if (bLocal_305)
	{
		Function_142();
		PRINTSTRING("Init_Layout,");
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTNL();
	}
	Function_531(iParam1 + 1460[0106]);
	Function_531(iParam1 + 1460[1106]);
	Function_531(iParam1 + 1460[2106]);
	(*iParam1 + 1460)[1106] = 0,1f;
	(*iParam1 + 1460)[2106] = -3.0f;
	(iParam1 + 1460[2106])->f_12 = 0.0f;
	(iParam1 + 1460[2106])->f_20 = 0.0f;
	(iParam1 + 1460[0106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_416 = 0;
	Function_530(iParam1);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = 1;
		bVar4 = Function_127();
	}
	else
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		bVar4 = 4294967295;
	}
	iParam1->f_1444 = 0;
	iVar3 = iVar1;
	while (iVar3 < iVar2)
	{
		if (bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_527(iVar3) };
			ITERATE_ON_PARTIAL_NAME(bVar0, &Var8);
		}
		else
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, Function_526());
		}
		bVar14 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		while (IS_VOLUME_VALID(bVar14) && iParam1->f_1444 > 60)
		{
			if (bLocal_305)
			{
				Function_142();
				PRINTSTRING("Init_");
				PRINTSTRING(GET_OBJECT_NAME(bVar14));
				PRINTSTRING(",");
				GET_VOLUME_CENTER(bVar14, &vVar5);
				PRINTFLOAT(vVar5.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.z);
				PRINTSTRING(",");
			}
			if (iVar3 == bVar4)
			{
				(*iParam1)[iParam1->f_14446] = bVar14;
				if (DECOR_CHECK_EXIST(bVar14, "IntSpawn"))
				{
					iParam1[iParam1->f_14446]->f_4 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bVar14, "IntSpawn"));
					if (bLocal_305)
					{
						PRINTSTRING(GET_OBJECT_NAME(StackVal));
					}
				}
				GET_VOLUME_CENTER(bVar14, iParam1[iParam1->f_14446] + 8);
				iParam1->f_1444++;
			}
			if (bLocal_305)
			{
				PRINTNL();
			}
			bVar14 = GET_VOLUME_FROM_OBJECT(OBJECT_ITERATOR_NEXT(bVar0));
		}
		if (iParam1->f_1444 > 60)
		{
		}
		iVar3++;
	}
	iParam1->f_1448 = FIND_VOLUME_IN_LAYOUT(bParam0, "Interiors_Set");
	if (IS_VOLUME_VALID(iParam1->f_1448))
	{
	}
	if (iParam1->f_1444 < 0)
	{
	}
	if (bLocal_305)
	{
		Function_142();
		PRINTSTRING("Init_Respawn,");
		PRINTINT(bVar4);
		PRINTSTRING(",");
		PRINTINT(iParam1->f_1444);
		PRINTNL();
	}
	DESTROY_ITERATOR(bVar0);
	if (bParam3)
	{
		Function_525(iParam1 + 1460[0106], "Enemy Players");
		Function_525(iParam1 + 1460[1106], "Friendly Players");
		Function_525(iParam1 + 1460[2106], "Player Deaths");
	}
	return 1;
}

void Function_525(var uParam0, var uParam1) //Position: 0x10B36 / 68406
{
	return;
}

var Function_526() //Position: 0x10B3C / 68412
{
	return "nSpawnVol_";
}

struct<24> Function_527(var uParam0) //Position: 0x10B4E / 68430
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_529(), 24);
	stradd(&cVar0, Function_528(uParam0), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_528(int iParam0) //Position: 0x10B6A / 68458
{
	switch (iParam0)
	{
		case 0x00000000:
			return "A";
		
		case 0x00000001:
			return "B";
		
		case 0x00000002:
			return "C";
		
		case 0x00000003:
			return "D";
		
		case 0x00000004:
			return "E";
		
		case 0x00000005:
			return "F";
		
		case 0x00000006:
			return "G";
		
		case 0x00000007:
			return "H";
		
		case 0x00000008:
			return "I";
		
		case 0x00000009:
			return "J";
		
		case 0x0000000A:
			return "K";
		
		case 0x0000000B:
			return "L";
		
		case 0x0000000C:
			return "M";
		
		case 0x0000000D:
			return "N";
		
		case 0x0000000E:
			return "O";
		
		case 0x0000000F:
			return "P";
		
		default:
	}
	return "Z";
}

var Function_529() //Position: 0x10C2B / 68651
{
	return "T_SpawnVol_";
}

void Function_530(int iParam0) //Position: 0x10C3F / 68671
{
	iParam0->f_1452 = 4294967295;
	Function_408(iParam0 + 1452);
	return;
}

void Function_531(var uParam0) //Position: 0x10C53 / 68691
{
	uParam0->f_4 = 225.0f;
	uParam0->f_8 = 157.0f;
	uParam0->f_12 = 625.0f;
	uParam0->f_16 = 53.0f;
	uParam0->f_20 = 2500.0f;
	uParam0->f_24 = 11.0f;
	*uParam0 = -1.0f;
	return;
}

void Function_532() //Position: 0x10C93 / 68755
{
	int iVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Function_533(iVar0, 0);
			iVar0++;
		}
	}
	return;
}

void Function_533(int iParam0, int iParam1) //Position: 0x10CB7 / 68791
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = iParam1;
		Function_287(&Global_78578 + 92);
	}
	return;
}

void Function_534(int iParam0) //Position: 0x10CE3 / 68835
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
	Function_80();
	Function_81();
	switch (iParam0)
	{
		case 0x00000001:
			Function_220(12288);
			Function_34(16384);
			break;
		
		case 0x00000002:
			Function_220(20480);
			Function_34(8192);
			break;
		
		default:
			Function_34(28672);
			break;
	}
	Function_34(2048);
	Function_535(0, 0);
	Function_209();
	return;
}

void Function_535(bool bParam0, bool bParam1) //Position: 0x10DA7 / 69031
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_540(&Global_78480);
	Function_539(&Global_78480);
	uVar0 = Function_421(37);
	Function_537();
	if (!bParam0)
	{
		Function_454(37, uVar0);
	}
	Function_36(18264, 0);
	Function_536();
	return;
}

void Function_536() //Position: 0x10DF3 / 69107
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_537() //Position: 0x10E12 / 69138
{
	Function_538(&Global_78480 + 220);
	return;
}

void Function_538(int iParam0) //Position: 0x10E21 / 69153
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

void Function_539(int iParam0) //Position: 0x10E42 / 69186
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

void Function_540(int iParam0) //Position: 0x10E66 / 69222
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

void Function_541(int iParam0) //Position: 0x10E8A / 69258
{
	Function_249(0, iParam0);
	return;
}

int Function_542(int iParam0, int iParam1, bool bParam2) //Position: 0x10E96 / 69270
{
	Function_546(iParam0 + 32);
	Function_546(iParam1 + 12);
	iParam0->f_96 = 4294967295;
	if (NET_IS_SESSION_HOST())
	{
		Function_497(iParam1, bParam2);
	}
	*iParam0 = 0;
	Function_356(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	UI_SET_STRING("mp_killchain_header", UI_GET_STRING("mp_plist_kills1"));
	iParam0->f_24 = 0;
	if (bParam2)
	{
		Function_270(iParam0, 8);
		Function_545(Function_43(), iParam0);
		Function_444(iParam0 + 48, Function_286(), 5, 0);
		Function_444(iParam0 + 48, Function_544(), 8, 0);
	}
	else
	{
		Function_543(Function_43(), iParam0);
	}
	UI_ENTER("HudMPNoFun");
	return 1;
}

void Function_543(bool bParam0, var uParam1) //Position: 0x10F47 / 69447
{
	bool bVar0;
	
	bVar0 = Function_315(uParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	Function_213(bVar0);
	uParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(uParam0, "ShowdownStayOut", 2, Function_213(bVar0), 0.0f, 0.0f, 0.0f, (4.0f * 3.0f), (4.0f * 3.0f), (4.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	return;
}

bool Function_544() //Position: 0x10F99 / 69529
{
	return "Custom/MP_Showdown";
}

void Function_545(bool bParam0, int iParam1) //Position: 0x10FB4 / 69556
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	var uVar26;
	
	bVar0 = Function_337(bParam0, 0);
	bVar1 = Function_337(bParam0, 1);
	if (!(IS_OBJECT_VALID(bVar0) && IS_OBJECT_VALID(bVar1)))
	{
		return;
	}
	if (!(GET_OBJECT_POSITION(bVar0, &vVar2) && GET_OBJECT_POSITION(bVar1, &vVar5)))
	{
		return;
	}
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
	VSCALE(&vVar8, 0,5f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
	VNORMALIZE(&vVar11);
	vVar17 = { 0.0f, -1.0f, 0.0f };
	VCROSS(&vVar17, &vVar11, &vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	VNORMALIZE(&vVar14);
	SET_OBJECT_POSITION(bVar0, vVar23);
	SET_OBJECT_ORIENTATION(bVar0, 0.0f, UNK_0x9C40E671(&vVar11), 0.0f);
	DECOR_SET_VECTOR(bVar0, "Right", vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	SET_OBJECT_POSITION(bVar1, vVar23);
	SET_OBJECT_ORIENTATION(bVar1, 0.0f, (UNK_0x9C40E671(&vVar11) + 180.0f), 0.0f);
	DECOR_SET_VECTOR(bVar1, "Right", vVar14);
	iParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(bParam0, "ShowdownStayOut", 2, vVar8, vVar11, (8.0f * 3.0f), (8.0f * 3.0f), (8.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	return;
}

void Function_546(var uParam0) //Position: 0x1112D / 69933
{
	*uParam0 = 0;
	return;
}

