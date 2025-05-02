//Decompiled with MagicRDR v1.0
//Function Count : 395
//Statics Count : 899
//Natives Count : 572
//Parameters Count : 14

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	var uLocal_2[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34[4] = { false, false, false, false };
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = false;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0.0f;
	float fLocal_57 = 0.0f;
	float fLocal_58 = 0.0f;
	bool bLocal_59 = false;
	float fLocal_60 = 0.0f;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	float fLocal_63 = 0.0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	int iLocal_70 = 0;
	bool bLocal_71 = false;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	char* cLocal_102[32] = "";
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	struct<2> Local_118 = { 0, 0 } ;
	var uLocal_120 = 0;
	struct<2> Local_121 = { 0, 0 } ;
	var uLocal_123 = 0;
	struct<2> Local_124 = { 0, 0 } ;
	var uLocal_126 = 0;
	struct<2> Local_127 = { 0, 0 } ;
	var uLocal_129 = 0;
	struct<2> Local_130 = { 0, 0 } ;
	var uLocal_132 = 0;
	struct<2> Local_133 = { 0, 0 } ;
	var uLocal_135 = 0;
	struct<2> Local_136 = { 0, 0 } ;
	var uLocal_138 = 0;
	struct<2> Local_139 = { 0, 0 } ;
	var uLocal_141 = 0;
	struct<2> Local_142 = { 0, 0 } ;
	var uLocal_144 = 0;
	struct<2> Local_145 = { 0, 0 } ;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<2> Local_154 = { 0, 0 } ;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	struct<2> Local_160 = { 0, 0 } ;
	var uLocal_162 = 0;
	struct<2> Local_163 = { 0, 0 } ;
	var uLocal_165 = 0;
	struct<2> Local_166 = { 0, 0 } ;
	var uLocal_168 = 0;
	struct<2> Local_169 = { 0, 0 } ;
	var uLocal_171 = 0;
	struct<2> Local_172 = { 0, 0 } ;
	var uLocal_174 = 0;
	struct<2> Local_175[64];
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
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
	var uLocal_323 = 0;
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
	struct<2> Local_436 = { 0, 0 } ;
	var uLocal_438 = 0;
	struct<2> Local_439 = { 0, 0 } ;
	var uLocal_441 = 0;
	struct<2> Local_442 = { 0, 0 } ;
	var uLocal_444 = 0;
	struct<2> Local_445 = { 0, 0 } ;
	var uLocal_447 = 0;
	struct<2> Local_448 = { 0, 0 } ;
	var uLocal_450 = 0;
	struct<2> Local_451 = { 0, 0 } ;
	var uLocal_453 = 0;
	struct<2> Local_454 = { 0, 0 } ;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	struct<2> Local_460 = { 0, 0 } ;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	struct<2> Local_469 = { 0, 0 } ;
	var uLocal_471 = 0;
	struct<2> Local_472 = { 0, 0 } ;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	struct<2> Local_478 = { 0, 0 } ;
	var uLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	int iLocal_483 = 0;
	var uLocal_484 = 0;
	bool bLocal_485 = false;
	var uLocal_486 = 0;
	bool bLocal_487 = false;
	var uLocal_488 = 0;
	bool bLocal_489 = false;
	var uLocal_490 = 0;
	bool bLocal_491 = false;
	var uLocal_492 = 0;
	int iLocal_493 = 0;
	var uLocal_494 = 0;
	int iLocal_495 = 0;
	var uLocal_496 = 0;
	bool bLocal_497 = false;
	var uLocal_498 = 0;
	int iLocal_499 = 0;
	var uLocal_500 = 0;
	int iLocal_501 = 0;
	var uLocal_502 = 0;
	int iLocal_503 = 0;
	var uLocal_504 = 0;
	char[] cLocal_505[4] = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	char[] cLocal_509[4] = 0;
	var uLocal_510 = 0;
	char[] cLocal_511[4] = 0;
	var uLocal_512 = 0;
	char[] cLocal_513[4] = 0;
	var uLocal_514 = 0;
	char[] cLocal_515[4] = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	int iLocal_525 = 0;
	var uLocal_526 = 0;
	bool bLocal_527 = false;
	var uLocal_528 = 0;
	int iLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	int iLocal_535 = 0;
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
	int iLocal_547 = 0;
	var uLocal_548 = 0;
	int iLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
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
	int iLocal_579 = 0;
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
	struct<8> Local_621 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	struct<6> Local_637 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	int iLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	struct<2> Local_653 = { 0, 0 } ;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	int iLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	int iLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	int iLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	int iLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	int iLocal_677 = 38;
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
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 2;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	bool bLocal_863 = false;
	bool bLocal_864 = false;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bLocal_0 = false;
	iLocal_1 = 2;
	iLocal_31 = 0;
	iLocal_32 = 0;
	iLocal_33 = 0;
	iLocal_44 = 0;
	iLocal_45 = 0;
	iLocal_49 = 0;
	iLocal_50 = 4294967295;
	iLocal_51 = 10;
	iLocal_52 = 10;
	iLocal_55 = 0;
	fLocal_56 = 1.0f;
	fLocal_57 = 200.0f;
	fLocal_58 = 300.0f;
	fLocal_63 = 3.0f;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	bLocal_68 = false;
	bLocal_69 = false;
	iLocal_70 = 0;
	bLocal_71 = false;
	iLocal_72 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_77 = 1;
	iLocal_78 = 0;
	iLocal_79 = 0;
	iLocal_80 = 1;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 1;
	iLocal_98 = 0;
	iLocal_832 = 0;
	iLocal_833 = 0;
	bLocal_863 = false;
	bLocal_864 = false;
	iLocal_871 = 31;
	iLocal_872 = 33;
	iLocal_873 = 1;
	iLocal_874 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_875 = 0;
	while (!IS_EXITFLAG_SET())
	{
		uLocal_880 = GET_PLAYER_ACTOR(0);
		Function_394(&uLocal_880, &uLocal_882);
		ScriptParam_0.f_48 = 0.0f;
		if (!Function_104(&ScriptParam_0))
		{
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		WAIT(false);
	}
	Function_1(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<7> Param0) //Position: 0x11A / 282
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	Function_102(1);
	Function_100();
	if (IS_ACTOR_VALID(&iLocal_481))
	{
		ACTOR_HOLSTER_WEAPON(&iLocal_481, 1);
	}
	if (IS_BLIP_VALID(&uLocal_543))
	{
		REMOVE_BLIP(&uLocal_543);
	}
	if (IS_BLIP_VALID(&uLocal_545))
	{
		REMOVE_BLIP(&uLocal_545);
	}
	if (IS_BLIP_VALID(&iLocal_547))
	{
		REMOVE_BLIP(&iLocal_547);
	}
	if (IS_BLIP_VALID(&iLocal_551))
	{
		REMOVE_BLIP(&iLocal_551);
	}
	if (IS_BLIP_VALID(&iLocal_549))
	{
		REMOVE_BLIP(&iLocal_549);
	}
	if (IS_ACTOR_VALID(&bLocal_485))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 0);
		Function_99(&bLocal_485);
	}
	if (IS_ACTOR_VALID(&bLocal_487))
	{
		Function_99(&bLocal_487);
	}
	if (IS_ACTOR_VALID(&bLocal_489))
	{
		Function_99(&bLocal_489);
	}
	if (IS_ACTOR_VALID(&bLocal_491))
	{
		Function_99(&bLocal_491);
	}
	if (IS_OBJECTSET_VALID(&uLocal_595))
	{
		DESTROY_OBJECTSET(&uLocal_595);
	}
	if (Global_99146 == 1)
	{
		Function_95(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	if (IS_OBJECTSET_VALID(&uLocal_597))
	{
		DESTROY_OBJECTSET(&uLocal_597);
	}
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 0);
		SET_ACTOR_FACTION(&bLocal_497, 21);
		SET_ACTOR_CAN_BE_TARGETED(&bLocal_497, true);
		SET_ACTOR_MAX_HEALTH(&bLocal_497, 8.0f);
		Function_94(&bLocal_497);
		MEMORY_CLEAR_ALL(&bLocal_497);
		TASK_WANDER(&bLocal_497, -1.0f);
		TASK_PRIORITY_SET(&bLocal_497, 2);
		RELEASE_ACTOR(&bLocal_497);
	}
	if (IS_ACTOR_VALID(&iLocal_483))
	{
		TASK_WANDER(&iLocal_483, 30.0f);
		MEMORY_CLEAR_ALL(&iLocal_483);
		TASK_WANDER(&iLocal_483, -1.0f);
		TASK_PRIORITY_SET(&iLocal_483, 2);
		RELEASE_ACTOR(&iLocal_483);
	}
	if (IS_ACTOR_VALID(&cLocal_505))
	{
		DESTROY_ACTOR(&cLocal_505);
	}
	if (SQUAD_IS_VALID(&iLocal_525))
	{
		Function_93(&iLocal_525);
	}
	if (IS_ACTOR_VALID(&iLocal_499))
	{
		DESTROY_ACTOR(&iLocal_499);
	}
	if (IS_ACTOR_VALID(&iLocal_493))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_493, 0);
		RELEASE_ACTOR(&iLocal_493);
	}
	if (IS_ACTOR_VALID(&iLocal_495))
	{
		RELEASE_ACTOR(&iLocal_495);
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_495, 1);
	}
	if (IS_ACTOR_VALID(&uLocal_507))
	{
		RELEASE_ACTOR(&uLocal_507);
	}
	if (IS_ACTORSET_VALID(&uLocal_531))
	{
		Function_92(&uLocal_531);
		Function_91(&uLocal_531);
	}
	if (IS_ACTORSET_VALID(&iLocal_535))
	{
		Function_92(&iLocal_535);
		Function_91(&iLocal_535);
	}
	if (IS_ACTORSET_VALID(&uLocal_537))
	{
		Function_92(&uLocal_537);
	}
	if (IS_ACTORSET_VALID(&uLocal_533))
	{
		Function_92(&uLocal_537);
	}
	if (IS_DOOR_VALID(&uLocal_609))
	{
		if (!IS_DOOR_LOCKED(&uLocal_609))
		{
			Function_90(&uLocal_609, 1);
		}
	}
	if (IS_DOOR_VALID(&uLocal_611))
	{
		if (!IS_DOOR_LOCKED(&uLocal_611))
		{
			Function_90(&uLocal_611, 1);
		}
	}
	if (IS_DOOR_VALID(&uLocal_613))
	{
		if (!IS_DOOR_LOCKED(&uLocal_613))
		{
			Function_90(&uLocal_613, 1);
		}
	}
	if (IS_DOOR_VALID(&uLocal_615))
	{
		if (!IS_DOOR_LOCKED(&uLocal_615))
		{
			Function_90(&uLocal_615, 1);
		}
	}
	if (IS_DOOR_VALID(&uLocal_617))
	{
		if (!IS_DOOR_LOCKED(&uLocal_617))
		{
			Function_90(&uLocal_617, 1);
		}
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_HELP();
	RELEASE_LAYOUT_REF(&uLocal_539);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_497, 1.0f);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	if (Function_89(iLocal_831) == 2)
	{
		if (bLocal_863)
		{
			Function_27(iLocal_831, 1, 1, 0);
		}
		else if (bLocal_864)
		{
			*(&Global_21684[iLocal_8317] + 40) = GET_TIME_OF_DAY();
			Function_16(iLocal_831);
		}
	}
	Function_15();
	Function_10();
	Function_8(28);
	Function_7(16);
	Function_5(1);
	Function_2(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
}

void Function_2(bool bParam0) //Position: 0x47D / 1149
{
	if (bParam0)
	{
		Function_4(0x10000000);
	}
	else
	{
		Function_3(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_3(int iParam0) //Position: 0x4A2 / 1186
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_4(int iParam0) //Position: 0x4BF / 1215
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_5(int iParam0) //Position: 0x4D2 / 1234
{
	Function_6(&Global_43580, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x4E0 / 1248
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_7(int iParam0) //Position: 0x4FF / 1279
{
	int iVar0;
	
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 1;
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		if (!Global_47006[iVar0])
		{
			Global_47146 = 1;
			return;
		}
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_8(bool bParam0) //Position: 0x543 / 1347
{
	if (Function_9(bParam0, 1) && !Function_9(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_9(bool bParam0, bool bParam1) //Position: 0x570 / 1392
{
	return (bParam0 && bParam1) == 0;
}

void Function_10() //Position: 0x57D / 1405
{
	Function_11(&iLocal_677);
	return;
}

void Function_11(int iParam0) //Position: 0x589 / 1417
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_12(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_12(struct<2>[] Param0, int iParam1) //Position: 0x5B1 / 1457
{
	if (Function_14(&(Param0[iParam12]), 4))
	{
		if (Function_14(&(Param0[iParam12]), 1))
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
			Function_13(&(Param0[iParam12]), 1);
			Function_13(&(Param0[iParam12]), 2);
			Function_13(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_13(struct<13> Param0) //Position: 0x6FC / 1788
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_14(struct<13> Param0) //Position: 0x719 / 1817
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_15() //Position: 0x737 / 1847
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_16(int iParam0) //Position: 0x74D / 1869
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_25(iParam0))
	{
		return;
	}
	iVar0 = Function_24(iParam0);
	if (StackVal == 2)
	{
		Function_20("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_17(int iParam0) //Position: 0x7F3 / 2035
{
	char* cVar0[16];
	
	if (!Function_18())
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

bool Function_18() //Position: 0x832 / 2098
{
	if (Function_9(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<24> Function_19(char* cParam0) //Position: 0x84D / 2125
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

void Function_20(bool bParam0, int iParam1) //Position: 0xAA3 / 2723
{
	struct<4> Var0;
	
	if (!Function_25(iParam1))
	{
		return;
	}
	switch (Function_24(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_21(Function_22(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_24(iParam1), Function_22(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_24(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_24(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_24(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_24(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_24(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_21(int iParam0) //Position: 0xBCD / 3021
{
	char* cVar0[16];
	
	if (!Function_18())
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

int Function_22(int iParam0) //Position: 0xC07 / 3079
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_23(int iParam0) //Position: 0xC27 / 3111
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_24(int iParam0) //Position: 0xC3E / 3134
{
	if (!Function_23(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_25(int iParam0) //Position: 0xC59 / 3161
{
	if (!Function_23(iParam0))
	{
		return 0;
	}
	if (!Function_26(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_26(int iParam0) //Position: 0xC7D / 3197
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC92 / 3218
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_25(iParam0))
	{
		Function_87();
		return;
	}
	bVar0 = Function_24(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_86())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_22(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
		}
		if (Function_86())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_80();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_86())
	{
		Function_79();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_20("DEED_COMPLETE", iParam0);
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
			Function_72(iParam0);
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
						switch (Function_22(iParam0))
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
			Function_30(1);
			Function_29(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_28(iParam0, &Var14);
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

void Function_28(int iParam0, struct<41> Param1) //Position: 0xEF0 / 3824
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF2E / 3886
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_30(bool bParam0) //Position: 0xF6D / 3949
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_62();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_32();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_31(&Global_99144, 1);
		Function_31(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0xFC2 / 4034
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_32() //Position: 0xFD8 / 4056
{
	Function_60();
	Function_59();
	Function_59();
	Function_58();
	Function_58();
	Function_57();
	Function_57();
	Function_40(0);
	Function_40(0);
	Function_37();
	Function_36();
	Function_35();
	Function_34();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_33();
	return;
}

void Function_33() //Position: 0x1023 / 4131
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

void Function_34() //Position: 0x1129 / 4393
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

void Function_35() //Position: 0x115C / 4444
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

void Function_36() //Position: 0x12EF / 4847
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

void Function_37() //Position: 0x14A8 / 5288
{
	Function_38(&Global_42918, 1, 0);
	return;
}

void Function_38(struct<2317> Param0) //Position: 0x14B6 / 5302
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
	
	uVar0 = Function_39();
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

var Function_39() //Position: 0x16D3 / 5843
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_40(int iParam0) //Position: 0x16E8 / 5864
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
					iVar2 = ((Function_56((50 + iVar4)) + Function_56((183 + iVar4))) + Function_56((90 + iVar4)));
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
	Function_41(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x178F / 6031
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
		Function_55(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_54(iParam0);
	if (&bParam2)
	{
		Function_42(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_42(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1A2B / 6699
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_53(390))), 32);
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
					bVar19 = (Function_52(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_52(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_50(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_47(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_44(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_43(), &Var9);
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

var Function_43() //Position: 0x2069 / 8297
{
	int iVar0;
	
	return &iVar0;
}

var Function_44(int iParam0) //Position: 0x2072 / 8306
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_45(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2083 / 8323
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_46(char* cParam0) //Position: 0x217A / 8570
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_47(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2195 / 8597
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_49(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_48(Function_49(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_48(int iParam0, int iParam1) //Position: 0x21FC / 8700
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_49(int iParam0, bool bParam1) //Position: 0x220E / 8718
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_50(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2220 / 8736
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
	if (((Function_51(iParam0) != 19 || Function_51(iParam0) != 17) || Function_51(iParam0) != 10) || Function_51(iParam0) != 9)
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

int Function_51(int iParam0) //Position: 0x2354 / 9044
{
	return Global_55480[iParam016].f_96;
}

float Function_52(int iParam0) //Position: 0x2363 / 9059
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_53(int iParam0) //Position: 0x239C / 9116
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_54(int iParam0) //Position: 0x23D9 / 9177
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

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x2573 / 9587
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

int Function_56(bool bParam0) //Position: 0x27B7 / 10167
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_57() //Position: 0x27F8 / 10232
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
		iVar2 = ((Function_56((50 + iVar3) + 15) + Function_56((183 + iVar3) + 15)) + Function_56((90 + iVar3) + 15));
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
	Function_41(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_58() //Position: 0x2881 / 10369
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
			iVar2 = ((Function_56((50 + iVar3) + 8) + Function_56((183 + iVar3) + 8)) + Function_56((90 + iVar3) + 8));
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
	Function_41(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_59() //Position: 0x2918 / 10520
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
		iVar2 = ((Function_56((50 + iVar3)) + Function_56((183 + iVar3))) + Function_56((90 + iVar3)));
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
	Function_41(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_60() //Position: 0x2997 / 10647
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_61(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_41(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_61(int iParam0, bool bParam1, int iParam2) //Position: 0x29D4 / 10708
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
	Function_55(iParam0, bParam1, 1);
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_42(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_62() //Position: 0x2BE0 / 11232
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_18())
	{
		Function_70(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_70(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_64(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_64(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_63(StackVal, Var0))
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

bool Function_63(char* cParam0) //Position: 0x2C97 / 11415
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_64(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x2CAF / 11439
{
	int iVar0;
	
	iVar0 = Function_68(&uParam2, &fParam3);
	if (Function_67(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_66(&Global_99144, 1);
			Function_31(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_66(&Global_99144, 2);
			Function_31(&Global_99144, 1);
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
		Function_66(&Global_99144, 2);
		Function_31(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_65();
	return StackVal, Function_65();
}

struct<8> Function_65() //Position: 0x2DA7 / 11687
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_66(var uParam0, int iParam1) //Position: 0x2DB1 / 11697
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_67(int iParam0) //Position: 0x2DC2 / 11714
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_68(bool bParam0, bool bParam1) //Position: 0x2DD8 / 11736
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
				fVar2 = Function_69(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_69(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_67(iVar0) && !&bParam1)
	{
		iVar0 = Function_68(&bParam0, 1);
	}
	return iVar0;
}

float Function_69(struct<2> Param0, struct<2> Param2) //Position: 0x2EA4 / 11940
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_70(float fParam0, int iParam1) //Position: 0x2EC1 / 11969
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_394(&Global_54076, &Var3);
	if (!Function_71(Global_46760[0]))
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
	if (!Function_71(Global_46760[2]))
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
	if (!Function_71(Global_46760[1]))
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
	if (!Function_71(Global_46796[1]))
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
	if (!Function_71(Global_46796[3]))
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
	if (!Function_71(Global_46796[2]))
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
	if (!Function_71(Global_46796[4]))
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
	if (!Function_71(Global_46816[0]))
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
	if (!Function_71(Global_46816[1]))
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
	if (!Function_71(Global_46816[2]))
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
	if (!Function_71(Global_46838[0]))
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
	if (!Function_71(Global_46850[0]))
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
	if (!Function_71(Global_46850[1]))
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
	if (!Function_71(Global_46850[2]))
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
	if (!Function_71(Global_46866[0]))
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
	if (!Function_71(Global_46866[1]))
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
	if (!Function_71(Global_46866[2]))
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
	if (!Function_71(Global_46894[2]))
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
	if (!Function_71(Global_46894[3]))
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
	if (!Function_71(Global_46894[0]))
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
	if (!Function_71(Global_46914[0]))
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
	if (!Function_71(Global_46926[2]))
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
	if (!Function_71(Global_46926[1]))
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
	if (!Function_71(Global_46926[0]))
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
	if (!Function_71(Global_46838[1]))
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
	if (!Function_71(Global_46894[1]))
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
	Function_66(&Global_99144, 2);
	Function_31(&Global_99144, 1);
	iParam1 = 0;
	if (Function_63(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_71(int iParam0) //Position: 0x36ED / 14061
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || !Function_9(uVar0, 0x10000000));
}

void Function_72(int iParam0) //Position: 0x3728 / 14120
{
	int iVar0;
	int iVar1;
	
	if (!Function_23(iParam0))
	{
		return;
	}
	switch (Function_24(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_22(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_77(12, 1, 0, 0);
				Function_76(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_77(13, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_77(14, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_77(15, 1, 0, 0);
				Function_76(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_77(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_22(iParam0))
			{
				case 0x00000000:
					if (Function_75(iParam0) == 1)
					{
						iVar0 = Function_74(iParam0);
						if (Function_73(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_76(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_76(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_76(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_76(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_76(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_76(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_76(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_76(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_76(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_76(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_76(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_76(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_76(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_76(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_76(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_76(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_76(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_76(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_76(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_76(4, 19);
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
								Function_77(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_77(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_77(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_74(iParam0) == 0)
			{
				if (Function_75(iParam0) == 1)
				{
					Function_77(458, 1, 0, 0);
					iVar0 = Function_22(iParam0);
					if (Function_73(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_76(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_76(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_76(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_76(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_76(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_76(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_76(2, 16);
						}
						else if (iVar0 == Global_46838[1])
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
			if (Function_75(iParam0) == 1)
			{
				Function_77(400, 1, 0, 0);
			}
			switch (Function_22(iParam0))
			{
				case 0x00000001:
					Function_77(402, 1, 0, 0);
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
					Function_77(403, 1, 0, 0);
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

bool Function_73(int iParam0) //Position: 0x3C04 / 15364
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_74(int iParam0) //Position: 0x3C1A / 15386
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_75(int iParam0) //Position: 0x3C39 / 15417
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_76(int iParam0, int iParam1) //Position: 0x3C53 / 15443
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

int Function_77(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3CBD / 15549
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
	Function_55(iParam0, TO_FLOAT(bParam1), 1);
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_42(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_78(iParam0);
	return 1;
}

void Function_78(int iParam0) //Position: 0x3EE5 / 16101
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

void Function_79() //Position: 0x3F83 / 16259
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
	PLAYSTAT_INT("HC_MONEY", Function_56(0));
	PLAYSTAT_INT("HC_FAME", Function_56(3));
	PLAYSTAT_INT("HC_HONOR", Function_56(1));
	return;
}

void Function_80() //Position: 0x40E9 / 16617
{
	int iVar0;
	int iVar1;
	
	if (!Function_85(Global_10966))
	{
		return;
	}
	iVar0 = Function_56(24);
	iVar1 = Function_84(Global_10966);
	if (!Function_85(iVar0) && Function_83(iVar1) < 0)
	{
		Function_41(24, Global_10966, 0);
		Function_81(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_83(Function_84(iVar0)))
	{
		Function_41(24, Global_10966, 0);
		Function_81(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_81(int iParam0, char* cParam1) //Position: 0x4169 / 16745
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
		Function_82(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_82(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x44C0 / 17600
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

int Function_83(int iParam0) //Position: 0x4548 / 17736
{
	if (!Function_25(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_84(int iParam0) //Position: 0x4562 / 17762
{
	if (!Function_85(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_85(int iParam0) //Position: 0x457C / 17788
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_86() //Position: 0x4592 / 17810
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_87() //Position: 0x45BD / 17853
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
			Function_88(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4804 / 18436
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_89(int iParam0) //Position: 0x4830 / 18480
{
	if (!Function_25(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90(var uParam0, int iParam1) //Position: 0x484A / 18506
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

void Function_91(int iParam0) //Position: 0x48A5 / 18597
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				RESET_ANIM_SET_FOR_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0), 0);
				TASK_CLEAR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
				AI_SET_ENABLE_STICKUP_OVERRIDE(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0), 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_92(var uParam0) //Position: 0x4904 / 18692
{
	int iVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1)))
			{
				if (IS_ACTOR_RIDING_VEHICLE(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1)))
				{
					iVar0 = GET_VEHICLE(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1));
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1));
					RELEASE_ACTOR(&iVar0);
				}
				else if (IS_ACTOR_RIDING(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1)))
				{
					iVar0 = GET_MOUNT(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1));
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1));
					RELEASE_ACTOR(&iVar0);
				}
				else
				{
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1));
				}
			}
			bVar1++;
		}
	}
	return;
}

void Function_93(int iParam0) //Position: 0x49AB / 18859
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
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_94(bool bParam0) //Position: 0x49F6 / 18934
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			SET_ACTOR_HEALTH(&bParam0, GET_ACTOR_MAX_HEALTH(&bParam0));
		}
	}
	return;
}

void Function_95(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x4A1A / 18970
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
		uVar0 = Function_39();
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
		Function_77(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_98();
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
	Function_96(&iParam9, &iParam10);
}

void Function_96(var uParam0, bool bParam1) //Position: 0x4AE9 / 19177
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
		Function_97();
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

void Function_97() //Position: 0x4BB8 / 19384
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

void Function_98() //Position: 0x4C30 / 19504
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_99(bool bParam0) //Position: 0x4C45 / 19525
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		uVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
			uVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

void Function_100() //Position: 0x4C78 / 19576
{
	if (IS_VOLUME_VALID(&uLocal_553))
	{
		DESTROY_VOLUME(&uLocal_553);
	}
	if (IS_OBJECT_VALID(&uLocal_577))
	{
		Function_101(&uLocal_577);
	}
	if (IS_BLIP_VALID(&uLocal_541))
	{
		REMOVE_BLIP(&uLocal_541);
	}
	return;
}

void Function_101(int iParam0) //Position: 0x4CB1 / 19633
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
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
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_102(int iParam0) //Position: 0x4D47 / 19783
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_103())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_103() //Position: 0x4D87 / 19847
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

bool Function_104(struct<7> Param0) //Position: 0x4DAC / 19884
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	switch (iLocal_875)
	{
		case 0x00000000:
			if (Function_385(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0) == 1)
			{
				iLocal_875 = 1;
			}
			break;
		
		case 0x00000001:
			Function_378(&Param0);
			Global_42259 = 1;
			if (!Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0))
			{
				return 0;
			}
			iLocal_875 = 4;
			break;
		
		case 0x00000004:
			if (Function_376(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0))
			{
				Function_375(&iLocal_876);
				iLocal_875 = 9;
			}
			break;
		
		case 0x00000009:
			if (Param0.f_40 < 0.0f && Function_374(&iLocal_876, Param0.f_40))
			{
				iLocal_875 = 11;
			}
			else
			{
				Function_159(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0, &iLocal_875);
			}
			break;
		
		case 0x0000000A:
			Function_127(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
			Function_108(5, 1, 0);
			iLocal_875 = 13;
			break;
		
		case 0x0000000B:
			Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
			iLocal_875 = 13;
			break;
		
		case 0x0000000C:
			Function_106(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
			iLocal_875 = 13;
			break;
		
		case 0x0000000D:
			Function_105(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0);
			iLocal_875 = 14;
			break;
		
		case 0x0000000E:
			return 0;
			break;
	}
	return 1;
}

void Function_105(struct<7> Param0) //Position: 0x4EBD / 20157
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
}

void Function_106(struct<7> Param0) //Position: 0x4ECD / 20173
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
}

void Function_107(struct<7> Param0) //Position: 0x4EDD / 20189
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	bLocal_864 = true;
	if (bLocal_864)
	{
		*(&Global_21684[iLocal_8317] + 40) = GET_TIME_OF_DAY();
		Function_16(iLocal_831);
	}
}

void Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F0B / 20235
{
	int iVar0;
	bool bVar1;
	
	if (Function_126(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_86())
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
	iVar0 = Function_56(3);
	Function_123();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_121(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_120(Global_119936, 4))
			{
				Function_115(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_77(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_52(3));
	iVar0 = Function_56(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_110(4, Function_114(Global_21369.f_248), 1);
				Function_109(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_110(4, Function_114(Global_21369.f_248), 1);
				Function_109(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_110(4, Function_114(Global_21369.f_248), 1);
				Function_109(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_110(4, Function_114(Global_21369.f_248), 1);
				Function_109(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_110(4, Function_114(Global_21369.f_248), 1);
				Function_109(Global_21369.f_244, Global_21369.f_248);
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

void Function_109(int iParam0, int iParam1) //Position: 0x50DF / 20703
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

int Function_110(int iParam0, char* cParam1) //Position: 0x5349 / 21321
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
	Function_81(iParam0, &cParam1, 0, 1);
	iVar1 = Function_111();
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

int Function_111() //Position: 0x54D9 / 21721
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
	Function_112();
	return 0;
}

void Function_112() //Position: 0x557A / 21882
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
		Function_113(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x5638 / 22072
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

var Function_114(int iParam0) //Position: 0x569E / 22174
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

void Function_115(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x572D / 22317
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_117(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_116(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_116(char* cParam0) //Position: 0x57A2 / 22434
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

bool Function_117(int iParam0, var uParam1, int iParam2) //Position: 0x57DC / 22492
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
		if (Function_119(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_118(uVar0))
		{
			case 0x00000002:
				if (!Function_120(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_118(char* cParam0) //Position: 0x5858 / 22616
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

int Function_119(int iParam0) //Position: 0x58F9 / 22777
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_31(&iVar1, 2147483648);
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

bool Function_120(var uParam0, int iParam1) //Position: 0x5936 / 22838
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_121(int iParam0, bool bParam1) //Position: 0x5949 / 22857
{
	bool bVar0;
	int iVar1;
	
	Function_77(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_122(iParam0, 4294967295);
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
	iVar1 = Function_111();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_122(int iParam0, int iParam1) //Position: 0x5AF5 / 23285
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

void Function_123() //Position: 0x5B3A / 23354
{
	Function_125(3, 0.0f);
	Function_124(3, 10000.0f);
	return;
}

int Function_124(int iParam0, int iParam1) //Position: 0x5B50 / 23376
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_125(int iParam0, int iParam1) //Position: 0x5B90 / 23440
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_126(int iParam0) //Position: 0x5BD0 / 23504
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_127(struct<45> Param0) //Position: 0x5BDF / 23519
{
	int iVar0;
	
	Param0.f_44 = ((iLocal_31 + iLocal_32) * Function_157(1, 0, 1, 0, 1));
	if (Function_156() > 4)
	{
		Param0.f_44 *= 2;
	}
	if (Param0.f_44 < 15)
	{
		Param0.f_44 = 15;
	}
	if (Param0.f_44 >= Function_157(2, 1, 1, 0, 0) * 2)
	{
		Param0.f_44 = Function_157(2, 1, 1, 0, 0) * 2;
	}
	iVar0 = Function_155(StackVal);
	if (iVar0 >= 0)
	{
		if (Param0.f_44 * 2 >= iVar0)
		{
			Function_152(StackVal, iVar0);
		}
		else
		{
			Function_152(StackVal, Param0.f_44 * 2);
			Param0.f_44 = (Param0.f_44 * 2 - iVar0);
		}
	}
	if (Param0.f_44 >= 0)
	{
		Function_151(Param0.f_44, 1, 1);
	}
	Function_128(StackVal, 1);
	bLocal_863 = true;
	if (bLocal_863)
	{
		Function_27(iLocal_831, 1, 1, 0);
	}
}

void Function_128(int iParam0, int iParam1) //Position: 0x5CA8 / 23720
{
	if (!Function_150(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			if (iParam1 == Global_46816[0])
			{
				Function_130(5, 2, 0, 0, 1);
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_130(9, 16, 0, 0, 1);
			}
			else if (iParam1 == Global_46866[0])
			{
				Function_130(7, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46866[0])
			{
				Function_130(8, 4, 0, 0, 1);
			}
			else if (iParam1 == Global_46760[1])
			{
				if (IS_PS3() || Function_129())
				{
					Function_130(4, 2, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_129() //Position: 0x5D44 / 23876
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_9(GET_GAME_EDITION(), 16);
	}
	return 0;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5D74 / 23924
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_149(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_150(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0, 2))
	{
		Function_77(456, 1, 0, 0);
		Function_147(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_146(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_147(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_144(0, 0, 1, 1))
			{
				Function_30(1);
				Function_29(1, 0);
			}
			else
			{
				Function_143();
			}
		}
		Function_138(bParam0);
		if (StackVal && !Function_9(((((!Function_137() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_137() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_18())
		{
			if (!Function_120(Global_119934, 2))
			{
				Function_115(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_132();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_131(3, bParam1);
				break;
			
			case 0x00000005:
				Function_131(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_131(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_131(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_131(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_131(2, SHIFT_LEFT(bParam1, 18));
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

void Function_131(int iParam0, bool bParam1) //Position: 0x6013 / 24595
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

void Function_132() //Position: 0x6082 / 24706
{
	if (Function_149(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_136(Global_42827);
			*(&Global_42827 + 8) = Function_133(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_136(Global_42827);
			*(&Global_42827 + 8) = Function_133(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_133(int iParam0, int iParam1) //Position: 0x6102 / 24834
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
					if (Function_135(6, 0) || Function_135(12, 0))
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
					if (Function_134(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_135(5, 0))
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
					if (Function_134(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_134(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_134(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_134(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_135(26, 0))
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
					if (Function_134(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_134(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_134(27) && iVar16)
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
					if (Function_134(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_134(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_134(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_134(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_135(17, 0) && iVar13)
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
					if (Function_134(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_135(6, 0) && Function_134(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_134(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_135(9, 0) && Function_134(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_134(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_135(8, 0) && iVar17)
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
	if (Function_63(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_63(StackVal, vVar2))
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
	if (!Function_63(StackVal, vVar2))
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

int Function_134(int iParam0) //Position: 0x6D65 / 28005
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0, bool bParam1) //Position: 0x6D7A / 28026
{
	int iVar0;
	
	iVar0 = Function_84(iParam0);
	if (!Function_23(iVar0))
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

int Function_136(int iParam0) //Position: 0x6DB8 / 28088
{
	int iVar0;
	int iVar1;
	
	if (!Function_149(iParam0))
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

bool Function_137() //Position: 0x6E07 / 28167
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_138(bool bParam0) //Position: 0x6E34 / 28212
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
			if (Function_145(bParam0, Function_142(bVar24)))
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
			if (Function_145(bParam0, Function_142(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_141(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_140(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_139(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_139(int iParam0) //Position: 0x6FE4 / 28644
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_149(iParam0))
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

void Function_140(char* cParam0, int iParam1) //Position: 0x703B / 28731
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

var Function_141(int iParam0) //Position: 0x7060 / 28768
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_149(iParam0))
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

int Function_142(bool bParam0) //Position: 0x70B6 / 28854
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_143() //Position: 0x70C2 / 28866
{
	return;
}

bool Function_144(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x70C8 / 28872
{
	uParam0 = &uParam0;
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
	if (Global_6636 && uParam2)
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
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_145(bool bParam0, int iParam1) //Position: 0x7177 / 29047
{
	int iVar0;
	
	if (!Function_149(bParam0))
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

void Function_146(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x71D6 / 29142
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_147(int iParam0, int iParam1) //Position: 0x7261 / 29281
{
	if (!Function_149(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_148(int iParam0, int iParam1) //Position: 0x72B6 / 29366
{
	int iVar0;
	
	if (!Function_149(iParam0))
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

bool Function_149(int iParam0) //Position: 0x72E3 / 29411
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_150(int iParam0) //Position: 0x72F9 / 29433
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_151(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7315 / 29461
{
	bool bVar0;
	
	bVar0 = Function_56(0);
	if ((Function_56(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_77(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_56(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_77(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_56(597) + Function_56(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_152(int iParam0, bool bParam1) //Position: 0x73E7 / 29671
{
	if (!Function_154(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_40060[iParam0])
	{
		Function_153(222, Global_40060[iParam0], 0);
		if (Function_56(222) <= 0)
		{
			Function_41(222, 0, 0);
		}
		Global_40060[iParam0] = 0;
		Function_41((*&Global_40060 + 4428)[iParam0], 0, 0);
	}
	else
	{
		Global_40060[iParam0] = (Global_40060[iParam0] - bParam1);
		Function_153((*&Global_40060 + 4428)[iParam0], bParam1, 0);
		Function_153(222, bParam1, 0);
	}
	return;
}

int Function_153(int iParam0, bool bParam1, int iParam2) //Position: 0x7470 / 29808
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
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_42(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

bool Function_154(int iParam0) //Position: 0x766D / 30317
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_155(int iParam0) //Position: 0x7682 / 30338
{
	if (!Function_154(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

int Function_156() //Position: 0x769A / 30362
{
	return Global_21369.f_244;
}

int Function_157(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x76A5 / 30373
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_56(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_158(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_158(bool bParam0) //Position: 0x77AC / 30636
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

void Function_159(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x78A0 / 30880
{
	var uVar0;
	
	iLocal_834 = Global_43789;
	uParam7 = uParam7;
	uVar0 = GET_PLAYER_ACTOR(0);
	if (IS_ACTOR_VALID(&uLocal_523))
	{
		DESTROY_ACTOR(&uLocal_523);
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Local_118);
	if (Global_43789 == Global_46816[0])
	{
		Function_373(&Global_46715);
	}
	if (IS_ACTOR_VALID(&iLocal_503))
	{
		GET_POSITION(&iLocal_503, &Local_142);
	}
	if (IS_ACTOR_VALID(&uLocal_507))
	{
		GET_POSITION(&uLocal_507, &uLocal_157);
	}
	if (IS_ACTOR_VALID(&iLocal_499))
	{
		GET_POSITION(&iLocal_499, &Local_139);
	}
	if (DECOR_CHECK_EXIST(GET_LAST_ATTACK_TARGET(&Global_54076), "PlayerHogtied") == 1)
	{
		DECOR_REMOVE(GET_LAST_ATTACK_TARGET(&Global_54076), "PlayerHogtied");
		iLocal_31 = (iLocal_31 - 1);
	}
	if (iLocal_79 != 1 && IS_ACTOR_ALIVE(&iLocal_493))
	{
		if (!Function_371(&iLocal_493))
		{
		}
	}
	if (Global_43789 == Global_46866[0])
	{
		if (IS_VOLUME_VALID(&uLocal_571))
		{
			if (IS_ACTOR_IN_VOLUME(&bLocal_497, &uLocal_571))
			{
				Function_370(&Local_621, 2, 3.0f, 0, 4294967295);
				Function_369(StackVal, &Local_637, 0, Local_118, 0.0f, 0.0f, 10.0f, 0.0f, 2.0f, 1);
				Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_637, Local_621, 1);
				Local_454 = Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_637, Local_621, 1);
				if (!Function_63(StackVal, Local_454))
				{
					TELEPORT_ACTOR(&bLocal_497, &Local_454, 1, 1, 1);
				}
				else
				{
					KILL_ACTOR(&bLocal_497);
				}
			}
		}
	}
	if (iLocal_874 < 5 && iLocal_874 > 17)
	{
		if (Global_99146 != 1 && iLocal_89 != 0)
		{
			iLocal_89 = 1;
			Function_361(&iLocal_661);
			Function_361(&iLocal_673);
			Function_361(&iLocal_649);
			Function_361(&Local_653);
			if (IS_ACTOR_VALID(&bLocal_485))
			{
				Function_360(&bLocal_485);
			}
			if (IS_ACTOR_VALID(&iLocal_503))
			{
				Function_360(&iLocal_503);
			}
		}
		else if (Global_99146 != 0 && iLocal_89 != 1)
		{
			Function_359(&iLocal_661);
			Function_359(&iLocal_673);
			Function_359(&iLocal_649);
			Function_359(&Local_653);
			if (IS_ACTOR_VALID(&bLocal_485))
			{
				Function_358(&bLocal_485);
			}
			if (IS_ACTOR_VALID(&iLocal_503))
			{
				Function_358(&iLocal_503);
			}
			iLocal_89 = 0;
		}
	}
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		if (IS_ACTOR_ALIVE(&bLocal_497) == 0)
		{
			iLocal_874 = 23;
			if (Global_43789 == Global_46816[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_98();
			Function_357("JOB_NIGHT_DogDied", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_356();
		}
		else if ((bLocal_71 != 1 && iLocal_70 != 0) && Function_355(&iLocal_673) < 35.0f)
		{
			iLocal_874 = 23;
			if (Global_43789 == Global_46816[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_98();
			Function_357("JOB_NIGHT_DogAbandoned", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_356();
		}
	}
	if (IS_ACTOR_VALID(&iLocal_483))
	{
		if (IS_ACTOR_ALIVE(&iLocal_483) != 0 || GET_LAST_ATTACKER(&iLocal_483) != &Global_54076)
		{
			iLocal_874 = 23;
			if (Global_43789 == Global_46816[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_98();
			Function_357("JOB_NIGHT_ForemanDied", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
	}
	if (GET_LAST_ATTACKER(&iLocal_495) == &Global_54076)
	{
		iLocal_874 = 23;
		if (Global_43789 == Global_46816[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46914[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46866[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_98();
		Function_357("JOB_NIGHT_HorseAttacked", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_356();
	}
	if (GET_LAST_ATTACKER(&iLocal_493) == &Global_54076)
	{
		iLocal_874 = 23;
		if (Global_43789 == Global_46816[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46914[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46866[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_98();
		Function_357("JOB_NIGHT_ProctorAttacked", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_356();
	}
	if ((Global_99472 != 2 && iLocal_87 != 0) && (IS_HUD_MAP_VISIBLE() != 1 && !IS_BLIP_VALID(&iLocal_547)))
	{
		if (((10 * iLocal_31) + (5 * iLocal_32)) == 0)
		{
			iLocal_874 = 23;
			if (Global_43789 == Global_46816[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_98();
			Function_357("JOB_NIGHT_TimeUp", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_356();
		}
		else
		{
			iLocal_1 = 0;
			iLocal_87 = 1;
		}
	}
	if (StackVal != iLocal_834)
	{
		iLocal_874 = 23;
		if (Global_43789 == Global_46816[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46914[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46866[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_98();
		Function_357("JOB_NIGHT_LeftRegion", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_356();
	}
	if (Global_6647 || Global_6646)
	{
		iLocal_874 = 23;
		if (Global_43789 == Global_46816[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46914[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_43789 == Global_46866[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_98();
		Function_357("JOB_NIGHT_BrokeLaw", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_356();
	}
	if (IS_ACTOR_ALIVE(&iLocal_483))
	{
		if (Function_351(&iLocal_483, &uLocal_101, &fLocal_56, uLocal_54, 0, 0x40400000))
		{
			if (!iLocal_64)
			{
				TASK_PRIORITY_SET(&iLocal_483, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_483, 1);
				AI_SET_ENABLE_STICKUP_OVERRIDE(&iLocal_483, 1);
				iLocal_64 = 1;
			}
		}
	}
	if (!(IS_ACTOR_ALIVE(&uVar0) && IS_ACTOR_VALID(&uVar0)))
	{
		uParam7 = 11;
	}
	else
	{
		if (bLocal_69)
		{
			Function_322(iLocal_831);
			if (!Function_89(iLocal_831) != 2)
			{
				if (bLocal_864)
				{
					uParam7 = 11;
				}
				else
				{
					uParam7 = 10;
				}
			}
		}
		switch (iLocal_874)
		{
			case 0x00000000:
				GET_POSITION(&Global_54076, &Local_118);
				bLocal_0 = RAND_INT_RANGE(0, 2);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_565);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_565);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_565, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uLocal_565);
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
				iLocal_833 = 1;
				Function_321(&Global_46715);
				Function_304();
				if (Global_43789 != Global_46866[0] || Global_43789 != Global_46816[0])
				{
					uLocal_585 = CREATE_GRINGO_IN_LAYOUT(&uLocal_539, "nw_dog_sit", "dog_sitting", Local_130, Local_133);
				}
				iLocal_874 = 1;
				break;
			
			case 0x00000001:
				TASK_STAND_STILL(&iLocal_483, -1.0f, 0, 0);
				GET_POSITION(&iLocal_493, &Local_166);
				Function_303(&Global_54076, 0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_300(&iLocal_493, &Global_54076);
				TASK_CLEAR(&Global_54076);
				TASK_FACE_COORD(&Global_54076, &Local_166, 1);
				bLocal_46 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD_AND_STAY(0, &uLocal_457, 1, fLocal_60);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_493, bLocal_46);
				TASK_SEQUENCE_RELEASE(bLocal_46, 1);
				TASK_PRIORITY_SET(&iLocal_493, true);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_493, &Global_54076, -1.0f, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iLocal_493, 10.0f, 0);
				SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, false);
				SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_493, false);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(&iLocal_493, 0);
				Function_375(&iLocal_661);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_121, bLocal_59, 1, 1, 0);
				Function_296(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				TELEPORT_ACTOR(&uLocal_521, &uLocal_475, 1, 1, 1);
				if (Global_43789 == Global_46816[0])
				{
					iLocal_1 = 0;
					Function_292(&uLocal_539, 0, 1, 0, 0);
					uLocal_599 = CREATE_OBJECTSET_IN_LAYOUT("nightwatchdoors", &uLocal_539, 4294967295, 0);
					Function_289();
					TASK_USE_GRINGO(&bLocal_497, GET_GRINGO_FROM_OBJECT(&uLocal_585), "UseCase1", 4294967295, 1);
				}
				else if (Global_43789 == Global_46914[0])
				{
					Function_284(&uLocal_539, 0, 1, 0, 0);
					Function_375(&iLocal_661);
					TASK_FOLLOW_ACTOR(&bLocal_497, &iLocal_493);
				}
				else if (Global_43789 == Global_46866[0])
				{
					Function_280(&uLocal_539, 0, 1, 0, 0);
					uLocal_571 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_nightwatchTeleportVol");
					TASK_USE_GRINGO(&bLocal_497, GET_GRINGO_FROM_OBJECT(&uLocal_585), "UseCase1", 4294967295, 1);
					Function_375(&iLocal_661);
				}
				Function_276();
				iLocal_874 = 3;
				break;
			
			case 0x00000003:
				if (Global_43789 == Global_46866[0])
				{
					if (Function_355(&iLocal_661) <= 5,7f)
					{
						SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 199, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iLocal_493, 6.0f, 0);
						TASK_CLEAR(&Global_54076);
						FORCE_LOOK_AT_ACTOR(&Global_54076, &iLocal_493, 5.0f);
						Function_375(&iLocal_661);
						iLocal_874 = 4;
					}
				}
				else if (Global_43789 == Global_46914[0])
				{
					if (Function_355(&iLocal_661) <= 4.0f)
					{
						SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 199, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iLocal_493, 6.0f, 0);
						TASK_CLEAR(&Global_54076);
						FORCE_LOOK_AT_ACTOR(&Global_54076, &iLocal_493, 5.0f);
						Function_375(&iLocal_661);
						iLocal_874 = 4;
					}
				}
				else if (Global_43789 == Global_46816[0])
				{
					if (Function_355(&iLocal_661) <= 6,5f)
					{
						SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 199, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						TASK_FACE_ACTOR(&Global_54076, &iLocal_493, 0, 2.0f);
						Function_375(&iLocal_661);
						iLocal_874 = 4;
					}
				}
				break;
			
			case 0x00000004:
				if (Function_273())
				{
					if (Global_43789 != Global_46816[0] && !IS_GRINGO_VALID(&uLocal_603))
					{
						uLocal_603 = LOCATE_GRINGO_OF_TYPE("bench_chair", &Local_124, 17.0f, 0);
					}
					else if (Global_43789 != Global_46866[0] && !IS_GRINGO_VALID(&uLocal_603))
					{
						uLocal_603 = LOCATE_GRINGO_OF_TYPE("mex_bench_chair_sit", &Local_124, 7.0f, 0);
						uLocal_605 = LOCATE_GRINGO_OF_TYPE("mex_bench_stool_sit", &Local_118, 15.0f, 0);
					}
					if (Global_43789 == Global_46816[0])
					{
						if (Function_355(&iLocal_661) <= 3,5f)
						{
							Function_95(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							DESTROY_VOLUME(&uLocal_565);
							Function_375(&iLocal_661);
							iLocal_874 = 5;
						}
					}
					else if (Global_43789 == Global_46866[0])
					{
						if (Function_355(&iLocal_661) <= 5.0f)
						{
							Function_95(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							DESTROY_VOLUME(&uLocal_565);
							Function_375(&iLocal_661);
							iLocal_874 = 5;
						}
					}
					else if (Global_43789 == Global_46914[0])
					{
						if (Function_355(&iLocal_661) <= 3,5f)
						{
							Function_95(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							DESTROY_VOLUME(&uLocal_565);
							Function_375(&iLocal_661);
							iLocal_874 = 5;
						}
					}
				}
				else if (Function_355(&iLocal_661) <= 20.0f)
				{
					iLocal_874 = 23;
					if (Global_43789 == Global_46816[0])
					{
						AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_43789 == Global_46914[0])
					{
						AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_43789 == Global_46866[0])
					{
						AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					Function_98();
					Function_272();
				}
				break;
			
			case 0x00000005:
				iLocal_72 = 0;
				if (iLocal_73 == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 202, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					TASK_CLEAR(&iLocal_493);
					TASK_CLEAR(&Global_54076);
					TASK_CLEAR(&iLocal_483);
					if (Global_43789 == Global_46816[0])
					{
						if (IS_GRINGO_VALID(&uLocal_605))
						{
							TASK_USE_GRINGO(&iLocal_493, &uLocal_605, "UseCase1", 1, 1);
						}
						else
						{
							TASK_GO_TO_OBJECT(&iLocal_493, &iLocal_495, 1, 0, 1);
						}
					}
					else
					{
						TASK_GO_TO_COORD(&iLocal_493, &Local_163, 1);
					}
					Function_357("JOB_NIGHT_FollowDog", 0x40f00000, 1, 2, 0, 0, 0, 0);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					TASK_GO_TO_COORD(&bLocal_497, &uLocal_466, 1);
					SET_ACTOR_UPDATE_PRIORITY(&bLocal_497, false);
					uLocal_593 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_539, Function_43(), &bLocal_497, Vector(0.0f, 0.0f, 0.0f), fLocal_57, fLocal_58);
					SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_593, 0);
					iLocal_73 = 1;
				}
				if (Function_355(&iLocal_661) <= 7,5f)
				{
					iLocal_79 = 1;
					if (IS_GRINGO_VALID(&uLocal_603))
					{
						TASK_CLEAR(&iLocal_483);
						TASK_USE_GRINGO(&iLocal_483, &uLocal_603, "UseCase1", 4294967295, 1);
					}
					if (ACTOR_HAS_WEAPON(&Global_54076, 21))
					{
						Function_146("JOB_NIGHT_RewardHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					else
					{
						Function_146("JOB_NIGHT_RewardHelpNoLasso", 0x41200000, 1, 0, 2, 1, 0);
					}
					TASK_MOUNT(&iLocal_493, &iLocal_495, 0, 1, 2, 2147483647);
					if (Global_43789 == Global_46816[0])
					{
						Function_375(&iLocal_665);
						iLocal_874 = 6;
					}
					else
					{
						iLocal_874 = 8;
					}
				}
				break;
			
			case 0x00000006:
				uLocal_591 = Function_271(&uLocal_595);
				GET_OBJECT_POSITION(&uLocal_591, &Local_478);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
				Function_269(StackVal, Local_478, 2);
				iLocal_874 = 7;
				break;
			
			case 0x00000007:
				if (GET_TASK_STATUS(&bLocal_497, 64) != 4 || GET_TASK_STATUS(&bLocal_497, 64) != 0)
				{
					iLocal_874 = 6;
				}
				if (Function_355(&iLocal_665) < 75.0f)
				{
					iLocal_874 = 8;
				}
				Function_268();
				break;
			
			case 0x00000008:
				Function_100();
				iLocal_67 = 0;
				if (!iLocal_45 < iLocal_1)
				{
					Function_266();
					Local_169 = Function_266();
					STREAMING_UNLOAD_BOUNDS();
					if (!Function_63(StackVal, Local_169))
					{
						iLocal_874 = 9;
					}
				}
				else if (Function_355(&iLocal_661) <= 5.0f)
				{
					if (((10 * iLocal_31) + (5 * iLocal_32)) == 0)
					{
						iLocal_874 = 23;
						Function_357("JOB_NIGHT_FailNoCrimes", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_356();
					}
					else
					{
						if (Global_43789 == Global_46866[0])
						{
							Function_357("JOB_NIGHT_ShiftOver_chu", 0x40f00000, 1, 2, 0, 0, 0, 0);
							if (!Function_265(&iLocal_483, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								SNAP_ACTOR_TO_GRINGO(&iLocal_483, GET_OBJECT_FROM_GRINGO(&uLocal_603), "UseCase1", true, 0, 0);
								TASK_USE_GRINGO(&iLocal_483, &uLocal_603, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_483, true);
							}
							else
							{
								TASK_USE_GRINGO(&iLocal_483, &uLocal_603, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_483, true);
							}
						}
						else
						{
							Function_357("JOB_NIGHT_ShiftOver_fore", 0x40f00000, 1, 2, 0, 0, 0, 0);
							if (StackVal && !Function_264(!Function_265(&iLocal_483, 0x3f800000, 0x42960000, 1, 1, 0), Local_124, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Global_43789 == Global_46914[0])
								{
									TELEPORT_ACTOR(&iLocal_483, &Local_469, 1, 1, 1);
									SNAP_ACTOR_TO_GRINGO(&iLocal_483, &uLocal_589, "UseCase1", true, 0, 0);
									TASK_USE_GRINGO(&iLocal_483, GET_GRINGO_FROM_OBJECT(&uLocal_589), "UseCase1", 4294967295, 2);
								}
								else
								{
									SNAP_ACTOR_TO_GRINGO(&iLocal_483, GET_OBJECT_FROM_GRINGO(&uLocal_603), "UseCase1", true, 0, 0);
									TASK_USE_GRINGO(&iLocal_483, &uLocal_603, "UseCase1", 4294967295, 1);
									TASK_PRIORITY_SET(&iLocal_483, true);
								}
							}
							else if (Global_43789 != Global_46914[0])
							{
								TASK_USE_GRINGO(&iLocal_483, &uLocal_603, "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_483, true);
							}
							else
							{
								TASK_USE_GRINGO(&iLocal_483, GET_GRINGO_FROM_OBJECT(&uLocal_589), "UseCase1", 4294967295, 2);
							}
						}
						uLocal_577 = Function_263(StackVal, StackVal, &uLocal_539, Function_43(), Local_445, Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						DESTROY_OBJECT(&uLocal_593);
						if (IS_BLIP_VALID(&uLocal_545))
						{
							REMOVE_BLIP(&uLocal_545);
						}
						iLocal_874 = 16;
					}
				}
				break;
			
			case 0x00000009:
				if (iLocal_45 == 0)
				{
					LOG_ERROR("tasking dog immediately");
					iLocal_70 = 0;
					TASK_CLEAR(&bLocal_497);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
					Function_269(StackVal, Local_145, 2);
					iLocal_874 = 10;
				}
				else if (Function_355(&iLocal_661) <= 5.0f)
				{
					iLocal_70 = 0;
					TASK_CLEAR(&bLocal_497);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
					Function_269(StackVal, Local_145, 2);
					AUDIO_SET_PLAYER_MOOD(0, 0);
					iLocal_874 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!Function_258(&iLocal_874))
				{
					if (Function_355(&iLocal_661) <= 5.0f)
					{
						Function_357("JOB_NIGHT_ShiftOver_fore", 0x40f00000, 1, 2, 0, 0, 0, 0);
						uLocal_543 = ADD_BLIP_FOR_ACTOR(&iLocal_483, 330, 0, 2, 0);
						iLocal_874 = 16;
					}
				}
				break;
			
			case 0x0000000B:
				iLocal_85 = 0;
				iLocal_90 = 0;
				iLocal_91 = 0;
				iLocal_98 = 0;
				iLocal_99 = 0;
				iLocal_100 = 0;
				if (IS_VOLUME_VALID(&uLocal_575))
				{
					DESTROY_VOLUME(&uLocal_575);
				}
				Function_375(&iLocal_649);
				Function_375(&iLocal_669);
				Function_375(&iLocal_673);
				MEMORY_EVERYBODY_FORGET_ABOUT(&Global_54076);
				if (!STREAMING_ARE_BOUNDS_LOADED(Local_172, 5.0f))
				{
					STREAMING_LOAD_BOUNDS(Local_172, 5.0f, 1);
				}
				if (Function_252(&iLocal_677))
				{
					if (((iLocal_49 != 0 || iLocal_49 != 1) || iLocal_49 != 3) || iLocal_49 != 4)
					{
						Function_251(&uLocal_539);
					}
					else if (iLocal_49 == 2)
					{
						Function_250(&uLocal_539);
					}
					else if (iLocal_49 == 5)
					{
						Function_249(&uLocal_539);
					}
					else if (iLocal_49 == 6)
					{
						Function_248(&uLocal_539);
					}
					else if (iLocal_49 == 7)
					{
						Function_246(&uLocal_539);
					}
					else if (iLocal_49 == 8)
					{
						Function_240(&uLocal_539);
					}
					else
					{
						iLocal_874 = 12;
					}
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
					Function_269(StackVal, Local_145, 2);
					iLocal_874 = 14;
				}
				break;
			
			case 0x0000000C:
				if (bLocal_68)
				{
					iLocal_874 = 15;
				}
				else if (VDIST(Local_118, Local_172) > 10.0f)
				{
					iLocal_32++;
					iLocal_874 = 8;
				}
				break;
			
			case 0x0000000E:
				if (!Function_182())
				{
					iLocal_83 = 0;
					iLocal_874 = 8;
				}
				if (iLocal_49 != 7)
				{
					if ((!IS_BLIP_VALID(&iLocal_547) || !IS_BLIP_VALID(&iLocal_551)) || !IS_BLIP_VALID(&iLocal_549))
					{
						if (Function_179())
						{
							if (!iLocal_70)
							{
								iLocal_70 = 1;
								TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
								TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 5,5f);
								Function_269(StackVal, Local_145, 3);
								iLocal_874 = 15;
							}
						}
					}
				}
				else if (Function_178(&iLocal_529))
				{
					if (Function_179())
					{
						if (!iLocal_70)
						{
							iLocal_70 = 1;
							TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
							TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 5,5f);
							Function_269(StackVal, Local_145, 3);
							iLocal_874 = 15;
						}
					}
				}
				if (((IS_BLIP_VALID(&iLocal_547) || IS_BLIP_VALID(&iLocal_551)) || IS_BLIP_VALID(&iLocal_549)) || Function_177(&iLocal_529, 1))
				{
					iLocal_70 = 1;
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 5,5f);
					Function_269(StackVal, Local_145, 3);
					iLocal_874 = 15;
				}
				break;
			
			case 0x0000000F:
				if (!Function_182())
				{
					Function_375(&iLocal_661);
					iLocal_874 = 8;
				}
				break;
			
			case 0x00000010:
				if (iLocal_82 == 0)
				{
					TASK_CLEAR(&bLocal_497);
					TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
					iLocal_82 = 1;
				}
				if (GATEWAY_UPDATE(&uLocal_577) == 1)
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					uLocal_569 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "nwEndClearVol", 2,802597E-45f, Local_445, Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 7.0f));
					uLocal_521 = GET_ACTORS_HORSE(&Global_54076);
					if (IS_ACTOR_VALID(&uLocal_521))
					{
						if (IS_ACTOR_IN_VOLUME(&uLocal_521, &uLocal_569))
						{
							TELEPORT_ACTOR(&uLocal_521, &uLocal_475, 1, 1, 1);
						}
					}
					Function_174(&uLocal_577, 0, 1, 1, 1, 0);
					iLocal_874 = 17;
				}
				break;
			
			case 0x00000011:
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				if (IS_OBJECT_VALID(&uLocal_577))
				{
					DESTROY_OBJECT(&uLocal_577);
				}
				Function_303(&Global_54076, 0);
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (IS_VOLUME_VALID(&uLocal_569))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_569);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_569, 15);
				}
				iLocal_874 = 18;
				break;
			
			case 0x00000012:
				GET_POSITION(&iLocal_493, &Local_166);
				if (VDIST(Local_166, Local_124) >= 10.0f)
				{
					Function_173(StackVal, &iLocal_493, Local_163, 1, 1, 1);
				}
				TASK_CLEAR(&Global_54076);
				TASK_CLEAR(&iLocal_483);
				if (GET_TASK_STATUS(&iLocal_483, 19) == 1)
				{
					AI_QUICK_EXIT_GRINGO(&iLocal_483, 1);
				}
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_483, 0);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_442, bLocal_61, 1, 1, 0);
				TELEPORT_ACTOR_WITH_HEADING(&iLocal_483, Local_124, bLocal_62, 1, 1, 0);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_483, -1.0f, 0, 0);
				if (IS_ACTORSET_VALID(&uLocal_531))
				{
					Function_172(&uLocal_531);
				}
				if (Global_43789 == Global_46816[0])
				{
					Function_296(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					Function_168(&uLocal_539, 0, 1, 0, 0);
				}
				else if (Global_43789 == Global_46914[0])
				{
					Function_296(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					CAMERA_RESET(0);
					Function_164(&uLocal_539, 0, 1, 0, 0);
				}
				else if (Global_43789 == Global_46866[0])
				{
					Function_296(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					Function_160(&uLocal_539, 0, 1, 0, 0);
				}
				Function_375(&iLocal_661);
				iLocal_874 = 19;
				break;
			
			case 0x00000013:
				if (Global_43789 == Global_46866[0])
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_483, "handoff", 0);
					SET_LINKED_ANIM_TARGET(&iLocal_483, &Global_54076);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_483, "handoff");
					SAY_SINGLE_LINE_CONTEXT(&iLocal_483, 103, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					TASK_CLEAR(&bLocal_497);
					Function_375(&iLocal_661);
					iLocal_874 = 20;
				}
				else if (Function_355(&iLocal_661) <= 1.0f)
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_483, "handoff", 0);
					SET_LINKED_ANIM_TARGET(&iLocal_483, &Global_54076);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_483, "handoff");
					SAY_SINGLE_LINE_CONTEXT(&iLocal_483, 103, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					TASK_CLEAR(&bLocal_497);
					Function_375(&iLocal_661);
					iLocal_874 = 20;
				}
				break;
			
			case 0x00000014:
				if (Function_355(&iLocal_661) <= 5.0f)
				{
					Function_95(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
					RESET_ANIM_SET_FOR_ACTOR(&iLocal_483, 0);
					ACTOR_END_FORCE_HOLSTER(&Global_54076);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&bLocal_497);
					TASK_CLEAR(&iLocal_493);
					iLocal_874 = 22;
				}
				break;
			
			case 0x00000016:
				uParam7 = 10;
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
					Function_303(&Global_54076, 0);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_2(0);
					TASK_WANDER(&iLocal_493, 30.0f);
				}
				break;
			
			case 0x00000017:
				uParam7 = 11;
				break;
			}
	}
}

var Function_160(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x92B5 / 37557
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_chu_end", 2, 1);
	}
	Function_161(&uVar0);
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

void Function_161(var uParam0) //Position: 0x9341 / 37697
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_163(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_162(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 7.0f, 0, 1);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1.0f, 0, 0.0f);
	return;
}

void Function_162(int iParam0) //Position: 0x9392 / 37778
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,86999f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2747,75f, 33,87614f, 4252,167f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,006568f, -2,315368f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_163(int iParam0) //Position: 0x9407 / 37895
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,86999f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2748,182f, 33,91851f, 4250,685f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,016169f, -1,636895f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_164(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x947C / 38012
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_blk_end", 2, 1);
	}
	Function_165(&uVar0);
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

void Function_165(int iParam0) //Position: 0x9508 / 38152
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_167(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_166(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 5.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_166(int iParam0) //Position: 0x954E / 38222
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(687,9427f, 79,30278f, 1373,953f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,098651f, -0,76738f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_167(int iParam0) //Position: 0x95C3 / 38339
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(689,8436f, 80,9686f, 1376,145f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,40827f, -0,812226f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_168(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9638 / 38456
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_hen_end", 2, 1);
	}
	Function_169(&uVar0);
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

void Function_169(int iParam0) //Position: 0x96C4 / 38596
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_171(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_170(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 0, 5.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1,5f, 1);
	return;
}

void Function_170(int iParam0) //Position: 0x970E / 38670
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-827,9062f, 94,63351f, 2419,163f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,169246f, -2,670755f, 0,010927f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_171(int iParam0) //Position: 0x9787 / 38791
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-825,986f, 94,62144f, 2418,435f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,029986f, -2,623744f, 0,010776f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_172(bool bParam0) //Position: 0x9800 / 38912
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&bParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(&bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_173(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x984B / 38987
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
			else
			{
				TELEPORT_ACTOR(&uParam0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

int Function_174(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x98ED / 39149
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_303(&uVar1, &bParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_176(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_176(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_175(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_175(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_175(vector3 vParam0) //Position: 0x9B22 / 39714
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_63(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_63(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_176(var uParam0, bool bParam1) //Position: 0x9B98 / 39832
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_177(int iParam0, bool bParam1) //Position: 0x9BB9 / 39865
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_178(int iParam0) //Position: 0x9C15 / 39957
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_179() //Position: 0x9C5F / 40031
{
	if (Function_180(&iLocal_649, 25.0f) && bLocal_71 != 0)
	{
		if (STREAMING_ARE_BOUNDS_LOADED(Local_172, 5.0f) == 0)
		{
			STREAMING_LOAD_BOUNDS(Local_172, 5.0f, 1);
		}
		Function_375(&iLocal_669);
		iLocal_77 = 0;
		if ((iLocal_49 != 0 || iLocal_49 != 1) || iLocal_49 != 6)
		{
			if (!Function_265(&bLocal_485, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REVOLVER_FAR_HI_POWER_MULTI", Local_145);
			}
		}
		else if (iLocal_49 != 2 || iLocal_49 != 7)
		{
			AUDIO_PLAY_VOCAL_EFFECT(&iLocal_503, 9, 1);
		}
		else if (iLocal_49 == 3)
		{
			AUDIO_PLAY_VOCAL_EFFECT(&uLocal_519, 9, 1);
		}
		else if (iLocal_49 == 5)
		{
			PLAY_SOUND_FROM_POSITION("COYOTE_HOWL_MASTER", Local_145);
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 210, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&Local_653);
		if (iLocal_49 != 5)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 216, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_180(int iParam0, float fParam1) //Position: 0x9D77 / 40311
{
	if (Function_374(&iParam0, fParam1))
	{
		Function_181(&iParam0);
		return 1;
	}
	return 0;
}

void Function_181(vector3 vParam0) //Position: 0x9D91 / 40337
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_182() //Position: 0x9DA8 / 40360
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Local_118);
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		GET_POSITION(&bLocal_497, &Var1);
	}
	switch (iLocal_832)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			if (!Function_371(&iLocal_493))
			{
				Function_239("JOB_NIGHT_ProctorDead", 4.0f);
			}
			break;
		
		case 0x00000004:
			if (iLocal_49 == 0)
			{
				iVar0 = Function_238(&bLocal_485, &iLocal_503);
			}
			else if (iLocal_49 == 1)
			{
				iVar0 = Function_237(&bLocal_485, &iLocal_503);
			}
			else if (iLocal_49 == 2)
			{
				iVar0 = Function_235(&bLocal_485, &iLocal_503);
			}
			else if (iLocal_49 == 3)
			{
				iVar0 = Function_232(&bLocal_485, &iLocal_503);
			}
			else if (iLocal_49 == 4)
			{
				iVar0 = Function_230(&bLocal_485, &iLocal_503);
			}
			else if (iLocal_49 == 5)
			{
				iVar0 = Function_220(&cLocal_505);
			}
			else if (iLocal_49 == 6)
			{
				iVar0 = Function_217(&bLocal_485, &iLocal_503, &uLocal_507);
			}
			else if (iLocal_49 == 7)
			{
				iVar0 = Function_201(&iLocal_529, &iLocal_503);
			}
			else if (iLocal_49 == 8)
			{
				iVar0 = Function_185(&bLocal_485, &iLocal_503);
			}
			if (bLocal_71)
			{
				if (VDIST(Local_118, Var1) > 10.0f)
				{
					if (iLocal_70)
					{
						iLocal_78 = 0;
						TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 5,5f);
						Function_269(StackVal, Local_145, 3);
					}
					else
					{
						iLocal_78 = 0;
						TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 1);
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
						Function_269(StackVal, Local_145, 2);
					}
				}
			}
			else if (Function_355(&iLocal_661) <= 5.0f)
			{
				if (iLocal_49 != 7)
				{
					if (((VDIST(Local_118, Var1) < 20.0f && !IS_BLIP_VALID(&iLocal_549)) && !IS_BLIP_VALID(&iLocal_551)) && !IS_BLIP_VALID(&iLocal_547))
					{
						if (iLocal_78 == 0)
						{
							PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
							iLocal_78 = 1;
						}
						Function_183();
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							Function_357("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0, 0);
						}
					}
				}
				else if (VDIST(Local_118, Var1) < 20.0f && Function_178(&iLocal_529))
				{
					if (iLocal_78 == 0)
					{
						PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
						iLocal_78 = 1;
					}
					Function_183();
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_357("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0, 0);
					}
				}
			}
			break;
	}
	return iVar0;
}

void Function_183() //Position: 0xA057 / 41047
{
	Function_375(&iLocal_673);
	TASK_CLEAR(&bLocal_497);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_497, "dog_sniffing/sniff_for_pre");
	TASK_PRIORITY_SET(&bLocal_497, true);
	if (Function_184(&iLocal_649))
	{
		Function_361(&iLocal_649);
	}
	bLocal_71 = true;
	return;
}

bool Function_184(int iParam0) //Position: 0xA0A9 / 41129
{
	return Function_9(iParam0, 1);
}

int Function_185(bool bParam0, bool bParam1) //Position: 0xA0B7 / 41143
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
			TASK_CLEAR(&bParam1);
			Function_200(&bParam1, &uLocal_563, 2, 0);
			DESTROY_OBJECT(&uLocal_587);
		}
		Function_94(&bLocal_497);
		iLocal_83 = 0;
		Function_199(&bParam0, 73);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		iLocal_32++;
		if (IS_ACTOR_VALID(&bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
			TASK_CLEAR(&bParam1);
			Function_200(&bParam1, &uLocal_563, 2, 0);
			DESTROY_OBJECT(&uLocal_587);
		}
		if (VDIST(Local_118, Local_130) > 10.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&iLocal_661);
		Function_94(&bLocal_497);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		Function_199(&bParam0, 73);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(&bParam0) || UNK_0x7A207FFE(&bParam0)) || iLocal_91 != 1)
	{
		iLocal_32++;
		iLocal_31++;
		DECOR_SET_BOOL(&bLocal_485, "PlayerHogtied", 1);
		Function_196(50, 1, 0);
		if (iLocal_91 == 1)
		{
			Function_146("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		if (!UNK_0x7A207FFE(&bParam0) && iLocal_91 != 0)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 213, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		}
		if (IS_ACTOR_VALID(&bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
			TASK_CLEAR(&bParam1);
			Function_200(&bParam1, &uLocal_563, 2, 0);
			DESTROY_OBJECT(&uLocal_587);
		}
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		Function_94(&bLocal_497);
		Function_195(&bParam0, 4294967291);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		Function_199(&bParam0, 73);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	iVar0 = Function_193(&bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 67);
			break;
		
		case 0x00000043:
			if (iLocal_52 == 10)
			{
				iLocal_52 = 8;
			}
			else
			{
				iLocal_51 = 8;
			}
			if (Function_192(StackVal, &uLocal_599, Local_145, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(&uLocal_609))
			{
				Function_191(&uLocal_609, 1);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_609, 0);
			}
			else if (Function_192(StackVal, &uLocal_599, Local_145, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(&uLocal_613))
			{
				Function_191(&uLocal_613, 1);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_613, 0);
			}
			else if (Function_192(StackVal, &uLocal_599, Local_145, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(&uLocal_615))
			{
				Function_191(&uLocal_615, 1);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_615, 0);
			}
			else if (Function_192(StackVal, &uLocal_599, Local_145, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(&uLocal_617))
			{
				Function_191(&uLocal_617, 1);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_617, 0);
			}
			Function_191(&uLocal_611, 1);
			OPEN_DOOR_DIRECTION_FAST(&uLocal_611, 0);
			GET_OBJECT_AXIS(&iLocal_579, &Local_448, 2);
			Local_460 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Local_448, Local_145, StackVal) * Vector(2.0f, 2.0f, 2.0f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Local_460, 10.0f, &Local_460, &uVar1);
			REFERENCE_ACTOR(&bParam0);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			SET_ACTOR_FACTION(&bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			SET_ACTOR_FACTION(&bParam1, 1);
			uLocal_563 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_nwcorral");
			Function_375(&Local_653);
			Function_190(&bParam1);
			Function_190(&bParam0);
			Function_195(&bParam0, 0);
			uLocal_561 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, Function_43(), 2,802597E-45f, Local_127, Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			if (IS_VOLUME_VALID(&uLocal_561))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_561);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_561);
				Function_199(&bParam0, 72);
			}
			break;
		
		case 0x00000048:
			if (IS_ACTOR_VALID(&bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				GET_POSITION(&bParam1, &Local_142);
				TASK_STAND_STILL(&bParam1, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_127);
				AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 0);
				TELEPORT_ACTOR(&bParam0, &Local_460, 1, 1, 1);
				TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
				PRINTVECTOR(Local_460);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			Function_189(&bParam1, &bParam0);
			uLocal_587 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uLocal_539, "nw_cow", "$/content/scripting/gringo/SimpleGringo/pull_cow", Local_142, Vector(0.0f, 0.0f, 0.0f));
			uLocal_619 = CREATE_LEASH_OBJECT(&uLocal_539, Function_43(), RAND_FLOAT_RANGE(1,8f, 2.0f), 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
			Function_199(&bParam0, 68);
			break;
		
		case 0x00000044:
			if (IS_OBJECT_VALID(&uLocal_587))
			{
				TASK_CLEAR(&bParam0);
				TASK_CLEAR(&bParam1);
				SNAP_ACTOR_TO_GRINGO(&bParam0, &uLocal_587, "Pull", true, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&bParam1, &uLocal_587, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&bParam0, GET_GRINGO_FROM_OBJECT(&uLocal_587), "Pull", 4294967295, 1);
				TASK_USE_GRINGO(&bParam1, GET_GRINGO_FROM_OBJECT(&uLocal_587), "UseCase1", 4294967295, 1);
				LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_619, &bParam0, "finger_11_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 0);
				LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_619, &bParam1, "neck02", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
				Function_199(&bParam0, 69);
			}
			break;
		
		case 0x00000045:
			if ((((VDIST(Local_118, Local_127) >= 25.0f && (Function_265(&bParam0, 0,65f, 0x42960000, 1, 1, 0) || Function_265(&bParam1, 0,65f, 0x42960000, 1, 1, 0))) || VDIST(Local_118, Local_127) >= 10.0f) || GET_LAST_ATTACKER(&bParam0) != &Global_54076) || GET_LAST_ATTACKER(&bParam1) != &Global_54076)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				Function_375(&iLocal_661);
				Function_357("JOB_NIGHT_SubdueCowThief", 5.0f, 1, 2, 0, 0, 0, 0);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 70);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x00000046:
			GET_POSITION(&bParam0, &Local_127);
			if (GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &bParam0);
				iLocal_98 = 1;
			}
			if (((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || Function_187(&bParam1)) || GET_LAST_ATTACKER(&bParam1) != &Global_54076) || VDIST2(Local_118, Local_127) > 1.0f)
			{
				LEASH_DETACH_OBJECT(&uLocal_619, 0);
				LEASH_DETACH_OBJECT(&uLocal_619, 1);
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				DESTROY_OBJECT(&uLocal_619);
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					TASK_CLEAR(&bParam1);
					Function_200(&bParam1, &uLocal_563, 2, 0);
				}
				Function_199(&bParam0, 73);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(0, &bParam0, 1) && iLocal_90 != 0) && VDIST(Local_118, Local_127) >= 15.0f)
			{
				Function_375(&iLocal_661);
				iLocal_90 = 1;
			}
			else if ((iLocal_90 != 1 && Function_355(&iLocal_661) < 2.0f) && IS_PLAYER_TARGETTING_ACTOR(0, &bParam0, 1))
			{
				TASK_FLEE_COORD(&bParam0, &uLocal_463, 3, -1.0f, 20.0f, 0);
				SET_ACTOR_UPDATE_PRIORITY(&bParam0, false);
				LEASH_DETACH_OBJECT(&uLocal_619, 0);
				LEASH_DETACH_OBJECT(&uLocal_619, 1);
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					TASK_CLEAR(&bParam1);
					Function_200(&bParam1, &uLocal_563, 2, 0);
				}
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				Function_375(&iLocal_661);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(&uLocal_619);
				Function_199(&bParam0, 71);
			}
			else if (Function_355(&iLocal_661) < 15.0f)
			{
				LEASH_DETACH_OBJECT(&uLocal_619, 0);
				LEASH_DETACH_OBJECT(&uLocal_619, 1);
				TASK_SHOOT_FROM_POSITION(&bParam0, &bParam1, &Local_127);
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					TASK_CLEAR(&bParam1);
					Function_200(&bParam1, &uLocal_563, 2, 0);
				}
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(&uLocal_619);
				Function_199(&bParam0, 73);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && GET_LAST_ATTACKER(&bParam0) == &Global_54076)
			{
				TASK_FLEE_COORD(&bParam0, &uLocal_463, 3, -1.0f, 20.0f, 0);
				SET_ACTOR_UPDATE_PRIORITY(&bParam0, false);
				LEASH_DETACH_OBJECT(&uLocal_619, 0);
				LEASH_DETACH_OBJECT(&uLocal_619, 1);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					TASK_CLEAR(&bParam1);
					Function_200(&bParam1, &uLocal_563, 2, 0);
				}
				Function_375(&iLocal_661);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(&uLocal_619);
				Function_199(&bParam0, 71);
			}
			break;
		
		case 0x00000047:
			Function_394(&bParam0, &Local_127);
			if (IS_ACTOR_ALIVE(&bParam0))
			{
				if (Function_355(&iLocal_661) < 10.0f && VDIST(Local_118, Local_127) <= 10.0f)
				{
					iLocal_91 = 1;
					Function_199(&bParam0, 49);
				}
				if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || Function_187(&bParam0)) || Function_355(&iLocal_661) < 12.0f)
				{
					iLocal_91 = 0;
					TASK_KILL_CHAR(&bParam0, &Global_54076);
					TASK_KILL_CHAR(&bLocal_497, &bParam0);
					Function_199(&bParam0, 73);
					if (Function_355(&iLocal_661) < 12.0f)
					{
					}
				}
			}
			break;
		
		case 0x00000049:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_186(bool bParam0) //Position: 0xABB8 / 43960
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

bool Function_187(bool bParam0) //Position: 0xABFE / 44030
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

int Function_188(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xAC0D / 44045
{
	if (((Function_374(&iParam2, 55.0f) && !WOULD_ACTOR_BE_VISIBLE(397, &uParam0, 3212836864)) && !((IS_BLIP_VALID(&iLocal_547) || IS_BLIP_VALID(&iLocal_551)) || IS_BLIP_VALID(&iLocal_549))) || GET_TASK_STATUS(&bLocal_497, 64) != 4)
	{
		if (GET_TASK_STATUS(&bLocal_497, 64) == 4)
		{
		}
		RESET_ANIM_SET_FOR_ACTOR(&bParam5, 0);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 0);
		DESTROY_ACTOR(&bParam4);
		DESTROY_ACTOR(&bParam5);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		return 0;
	}
	return 1;
	return 1;
}

void Function_189(var uParam0, int iParam1) //Position: 0xAC99 / 44185
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	
	GET_POSITION(&uParam0, &Var1);
	GET_POSITION(&iParam1, &Var3);
	uVar5 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Var3, StackVal);
	fVar0 = UNK_0x9C40E671(&uVar5);
	SET_ACTOR_HEADING(&uParam0, fVar0, 1);
	return;
}

void Function_190(bool bParam0) //Position: 0xACCB / 44235
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

void Function_191(var uParam0, int iParam1) //Position: 0xAD02 / 44290
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

int Function_192(var uParam0, struct<2> Param1, float fParam3, float fParam4) //Position: 0xAD5A / 44378
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

int Function_193(bool bParam0) //Position: 0xADE8 / 44520
{
	if (!DECOR_CHECK_EXIST(&bParam0, "nightwatch_state"))
	{
		return 0;
	}
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&bParam0), "nightwatch_state");
}

bool Function_194(bool bParam0) //Position: 0xAE29 / 44585
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0xAE3B / 44603
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	DECOR_SET_INT(&bParam0, "honor", bParam1);
	return;
}

void Function_196(int iParam0, bool bParam1, bool bParam2) //Position: 0xAE5D / 44637
{
	int iVar0;
	bool bVar1;
	
	if (Function_126(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_86())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_56(1);
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
			Function_121(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_120(Global_119936, 1))
				{
					Function_115(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_198(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_120(Global_119936, 2))
				{
					Function_115(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_77(1, bVar1, 0, 0);
	}
	else
	{
		Function_153(1, (4294967295 * bVar1), 0);
	}
	if (Function_56(1) <= 4294962296)
	{
		Function_41(1, 4294962296, 0);
	}
	else if (Function_56(1) >= 5000)
	{
		Function_41(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_52(1));
	iVar0 = Function_56(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_110(2, Function_197(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_110(2, Function_197(Global_21369.f_244), 0);
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
				Function_110(2, Function_197(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_110(2, Function_197(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_110(2, Function_197(Global_21369.f_244), 1);
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
				Function_110(2, Function_197(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_110(2, Function_197(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_110(2, Function_197(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_110(2, Function_197(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_110(2, Function_197(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_110(2, Function_197(Global_21369.f_244), 1);
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
				Function_110(2, Function_197(Global_21369.f_244), 0);
			}
			break;
	}
	Function_109(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_197(int iParam0) //Position: 0xB184 / 45444
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

int Function_198(int iParam0, bool bParam1) //Position: 0xB227 / 45607
{
	bool bVar0;
	int iVar1;
	
	Function_153(iParam0, bParam1, 0);
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
	iVar1 = Function_122(iParam0, 4294967295);
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
	iVar1 = Function_111();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_199(bool bParam0, bool bParam1) //Position: 0xB3D2 / 46034
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&bParam0), "nightwatch_state", bParam1);
	return;
}

void Function_200(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xB3F7 / 46071
{
	var uVar0;
	var uVar2;
	
	GET_VOLUME_CENTER(&uParam1, &uVar0);
	FIND_GROUND_INTERSECTION(&uVar0, 10.0f, &uVar0, &uVar2);
	TASK_GO_TO_COORD(&bParam0, &uVar0, iParam2);
	TASK_PRIORITY_SET(&bParam0, bParam3);
}

int Function_201(bool bParam0, int iParam1) //Position: 0xB428 / 46120
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		AI_STOP_IGNORING_ACTOR(&bLocal_497);
		Function_216(&bParam0, 49);
		return 0;
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bParam0) == 0)
	{
		iLocal_32++;
		if (IS_ACTOR_VALID(&bLocal_485))
		{
			if (UNK_0x7A207FFE(&bLocal_485) || IS_ACTOR_HOGTIED(&bLocal_485))
			{
				iLocal_31++;
				DECOR_SET_BOOL(&bLocal_485, "PlayerHogtied", 1);
				Function_195(&bLocal_485, 4294967291);
				Function_99(&bLocal_485);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_487))
		{
			if (UNK_0x7A207FFE(&bLocal_487) || IS_ACTOR_HOGTIED(&bLocal_487))
			{
				iLocal_31++;
				DECOR_SET_BOOL(&bLocal_487, "PlayerHogtied", 1);
				Function_195(&bLocal_487, 4294967291);
				Function_99(&bLocal_487);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_489))
		{
			if (UNK_0x7A207FFE(&bLocal_489) || IS_ACTOR_HOGTIED(&bLocal_489))
			{
				iLocal_31++;
				DECOR_SET_BOOL(&bLocal_489, "PlayerHogtied", 1);
				Function_195(&bLocal_489, 4294967291);
				Function_99(&bLocal_489);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_491))
		{
			if (UNK_0x7A207FFE(&bLocal_491) || IS_ACTOR_HOGTIED(&bLocal_491))
			{
				iLocal_31++;
				DECOR_SET_BOOL(&bLocal_491, "PlayerHogtied", 1);
				Function_195(&bLocal_491, 4294967291);
				Function_99(&bLocal_491);
			}
		}
		if (SQUAD_IS_VALID(&bParam0))
		{
			Function_215(&bParam0);
			Function_214(&bParam0);
		}
		if (VDIST(Local_118, Local_130) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		AI_STOP_IGNORING_ACTOR(&bLocal_497);
		if (IS_ACTOR_VALID(&iParam1))
		{
			TASK_FLEE_ACTOR(&iParam1, &Global_54076, -1.0f, 10.0f, 0, 0, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam1, 1);
		}
		Function_216(&bParam0, 49);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	iVar0 = Function_213(&bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_216(&bParam0, 44);
			break;
		
		case 0x0000002C:
			uLocal_148 = Vector(0,1f, 0.0f, 0.0f);
			if (iLocal_52 == 10)
			{
				iLocal_52 = 7;
			}
			else
			{
				iLocal_51 = 7;
			}
			if (SQUAD_IS_VALID(&bParam0))
			{
				GET_POSITION(&bLocal_485, &Local_127);
				SQUAD_SET_FACTION(&bParam0, 1);
				Function_212(&bParam0, 1);
			}
			if (IS_ACTOR_VALID(&iParam1))
			{
				GET_POSITION(&iParam1, &Local_142);
				RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
				SET_ACTOR_FACTION(&iParam1, 20);
				SET_ACTOR_ONE_SHOT_DEATH(&iParam1, 1);
			}
			Function_375(&Local_653);
			uLocal_583 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uLocal_539, "Harass", "$/content/scripting/gringo/simplegringo/bandito_harass", Local_142, Vector(0.0f, 0.0f, 0.0f));
			Function_216(&bParam0, 45);
			break;
		
		case 0x0000002D:
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_583)))
			{
				SNAP_ACTOR_TO_GRINGO(&bLocal_485, &uLocal_583, "harass_A", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&bLocal_487, &uLocal_583, "harass_B", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&bLocal_489, &uLocal_583, "harass_C", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&bLocal_491, &uLocal_583, "harass_D", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&iParam1, &uLocal_583, "victim", false, 0, 0);
				TASK_USE_GRINGO(&bLocal_485, GET_GRINGO_FROM_OBJECT(&uLocal_583), "harass_A", 4294967295, 1);
				TASK_USE_GRINGO(&bLocal_487, GET_GRINGO_FROM_OBJECT(&uLocal_583), "harass_B", 4294967295, 1);
				TASK_USE_GRINGO(&bLocal_489, GET_GRINGO_FROM_OBJECT(&uLocal_583), "harass_C", 4294967295, 1);
				TASK_USE_GRINGO(&bLocal_491, GET_GRINGO_FROM_OBJECT(&uLocal_583), "harass_D", 4294967295, 1);
				TASK_USE_GRINGO(&iParam1, GET_GRINGO_FROM_OBJECT(&uLocal_583), "victim", 4294967295, 1);
				Function_216(&bParam0, 46);
			}
			return Function_211(StackVal, StackVal, StackVal, Local_118, Local_127, Local_653, &bParam0, &iParam1);
			break;
		
		case 0x0000002E:
			if (Function_210(&bParam0, 1.0f, 50.0f, 1, 1) || Function_209(&bParam0, &Global_54076, 0))
			{
				Function_208(&bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_357("JOB_NIGHT_SaveWoman", 5.0f, 1, 2, 0, 0, 0, 0);
				Function_375(&iLocal_661);
				iLocal_70 = 1;
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_375(&iLocal_665);
				Function_216(&bParam0, 47);
			}
			return Function_211(StackVal, StackVal, StackVal, Local_118, Local_127, Local_653, &bParam0, &iParam1);
			break;
		
		case 0x0000002F:
			if (GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &bLocal_485);
				iLocal_98 = 1;
			}
			if (Function_355(&iLocal_665) < fLocal_63)
			{
				AUDIO_PLAY_VOCAL_EFFECT(&iParam1, 9, 1);
				Function_375(&iLocal_665);
				fLocal_63 = RAND_FLOAT_RANGE(5.0f, 10.0f);
			}
			if (((((Function_355(&iLocal_661) < 8.0f && VDIST(Local_118, Local_142) > 8.0f) || Function_209(&bParam0, &Global_54076, 0)) || GET_LAST_ATTACKER(&iParam1) != &Global_54076) || Function_209(&bParam0, &bLocal_497, 0)) || Function_355(&iLocal_661) < 30.0f)
			{
				TASK_CLEAR(&bLocal_497);
				Function_205(&bLocal_497, &bParam0, 1);
				Function_204(&bLocal_497, &uLocal_533);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_215(&bParam0);
				Function_203(&bParam0, &Global_54076, 4);
				Function_202(&bParam0, &Global_54076);
				SET_ACTOR_FACTION(&iParam1, 3);
				AI_IGNORE_ACTOR(&bLocal_497);
				TASK_CLEAR(&iParam1);
				TASK_CROUCH(&iParam1, 3.0f);
				Function_216(&bParam0, 49);
			}
			break;
		
		case 0x00000031:
			if (UNK_0x7A207FFE(&bLocal_485) && iLocal_93 != 0)
			{
				Function_99(&bLocal_485);
				iLocal_93 = 1;
			}
			if (UNK_0x7A207FFE(&bLocal_487) && iLocal_94 != 0)
			{
				Function_99(&bLocal_487);
				iLocal_94 = 1;
			}
			if (UNK_0x7A207FFE(&bLocal_489) && iLocal_95 != 0)
			{
				Function_99(&bLocal_489);
				iLocal_95 = 1;
			}
			if (UNK_0x7A207FFE(&bLocal_491) && iLocal_96 != 0)
			{
				Function_99(&bLocal_491);
				iLocal_96 = 1;
			}
			if (GET_TASK_STATUS(&bLocal_497, 5) == 1 && iLocal_97 != 1)
			{
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				iLocal_97 = 0;
			}
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_202(var uParam0, int iParam1) //Position: 0xBAD6 / 47830
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

void Function_203(var uParam0, var uParam1, bool bParam2) //Position: 0xBB31 / 47921
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

void Function_204(var uParam0, int iParam1) //Position: 0xBB7D / 47997
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6[20];
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_ACTORSET_SIZE(&iParam1);
		if (iVar0 >= 20)
		{
			iVar0 = 20;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			iVar6[iVar2] = iVar2;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar4 = RAND_INT_RANGE(0, (iVar0 - 1));
			iVar5 = iVar6[bVar4];
			iVar6[bVar4] = iVar6[iVar2];
			iVar6[iVar2] = iVar5;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar3 = iVar6[iVar2];
			uVar1 = GET_ACTOR_FROM_ACTORSET(&iParam1, bVar3);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					TASK_KILL_CHAR(&uParam0, &uVar1);
					MEMORY_CONSIDER_AS_ENEMY(&uParam0, &uVar1);
				}
			}
			iVar2++;
		}
	}
	return;
}

void Function_205(var uParam0, var uParam1, int iParam2) //Position: 0xBC49 / 48201
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_206(&uParam0, &uVar1, &iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_206(var uParam0, var uParam1, bool bParam2) //Position: 0xBC9B / 48283
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_207(&uParam1);
			uVar0 = Function_207(&uParam1);
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

struct<8> Function_207(bool bParam0) //Position: 0xBDAC / 48556
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_208(var uParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0xBE18 / 48664
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

int Function_209(bool bParam0, bool bParam1, int iParam2) //Position: 0xBF28 / 48936
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_LAST_ATTACKER(&iVar1) == &bParam1)
			{
				return 1;
			}
			if (&iParam2 == 1)
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
				{
					if (GET_LAST_ATTACKER(GET_MOUNT(&iVar1)) == &bParam1)
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

int Function_210(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xBFA6 / 49062
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (Function_265(&bVar1, &iParam1, &iParam2, &iParam3, &bParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_211(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xBFF4 / 49140
{
	if ((((VDIST(Param0, Param2) < 20.0f && Function_374(&iParam4, 55.0f)) && !WOULD_ACTOR_BE_VISIBLE(397, &Param2, 3212836864)) && !(((IS_BLIP_VALID(&iLocal_547) || IS_BLIP_VALID(&iLocal_551)) || IS_BLIP_VALID(&iLocal_549)) || Function_177(&iLocal_529, 1))) || GET_TASK_STATUS(&bLocal_497, 64) != 4)
	{
		if (GET_TASK_STATUS(&bLocal_497, 64) == 4)
		{
		}
		RESET_ANIM_SET_FOR_ACTOR(&uParam7, 0);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 0);
		Function_93(&bParam6);
		DESTROY_ACTOR(&uParam7);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		return 0;
	}
	return 1;
	return 1;
}

void Function_212(var uParam0, int iParam1) //Position: 0xC09D / 49309
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
			RESET_ANIM_SET_FOR_ACTOR(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return;
}

int Function_213(bool bParam0) //Position: 0xC0E4 / 49380
{
	if (!DECOR_CHECK_EXIST(&bParam0, "nightwatch_state"))
	{
		return 0;
	}
	return DECOR_GET_INT(GET_OBJECT_FROM_SQUAD(&bParam0), "nightwatch_state");
}

void Function_214(int iParam0) //Position: 0xC125 / 49445
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

void Function_215(bool bParam0) //Position: 0xC15D / 49501
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_216(bool bParam0, bool bParam1) //Position: 0xC192 / 49554
{
	DECOR_SET_INT(GET_OBJECT_FROM_SQUAD(&bParam0), "nightwatch_state", bParam1);
	return;
}

int Function_217(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC1B7 / 49591
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			if (((!IS_ACTOR_HOGTIED(&bParam1) && !UNK_0x7A207FFE(&bParam1)) && VDIST(Local_142, Local_118) > 10.0f) && IS_ACTOR_ALIVE(&bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				SAY_SINGLE_LINE_CONTEXT(&bParam1, 103, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (IS_ACTOR_VALID(&uLocal_507))
				{
					TASK_MOUNT(&bParam1, &uLocal_507, 0, 1, 2, 2147483647);
				}
			}
		}
		Function_94(&bLocal_497);
		iLocal_83 = 0;
		Function_199(&bParam0, 65);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		iLocal_32++;
		if (IS_ACTOR_VALID(&bParam1))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
			if (((!IS_ACTOR_HOGTIED(&bParam1) && !UNK_0x7A207FFE(&bParam1)) && IS_ACTOR_ALIVE(&bParam1)) && VDIST(Local_142, Local_118) > 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam1, 103, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
			}
			else
			{
				MEMORY_CONSIDER_AS(&bParam1, &Global_54076, 2);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 50.0f, 20.0f, 0, 0, 0);
			}
		}
		if (VDIST(Local_118, Local_130) > 15.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&iLocal_661);
		Function_94(&bLocal_497);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		DEREFERENCE_ACTOR(&bParam2);
		Function_199(&bParam0, 65);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(&bParam0) || UNK_0x7A207FFE(&bParam0))
	{
		iLocal_32++;
		iLocal_31++;
		Function_375(&iLocal_661);
		DECOR_SET_BOOL(&bLocal_485, "PlayerHogtied", 1);
		Function_196(50, 1, 0);
		Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (!UNK_0x7A207FFE(&bParam0))
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 213, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(Local_118, Local_130) > 15.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (IS_ACTOR_VALID(&bParam1))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
			TASK_FLEE_ACTOR(&bParam1, &Global_54076, 20.0f, 20.0f, 0, 0, 0);
		}
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		Function_94(&bLocal_497);
		Function_195(&bParam0, 4294967291);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		DEREFERENCE_ACTOR(&bParam2);
		Function_199(&bParam0, 65);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	bVar0 = Function_193(&bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 56);
			break;
		
		case 0x00000038:
			if (iLocal_52 == 10)
			{
				iLocal_52 = 6;
			}
			else
			{
				iLocal_51 = 6;
			}
			REFERENCE_ACTOR(&bParam0);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			SET_ACTOR_FACTION(&bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &Global_54076);
			REFERENCE_ACTOR(&bParam2);
			TASK_CLEAR(&bParam2);
			TASK_PRIORITY_SET(&bParam2, false);
			SET_ACTOR_FACTION(&bParam2, 1);
			Function_375(&Local_653);
			Function_199(&bParam0, 57);
			Function_190(&bParam1);
			Function_190(&bParam0);
			Function_195(&bParam0, 0);
			Function_190(&bParam2);
			break;
		
		case 0x00000039:
			if (IS_ACTOR_VALID(&bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				GET_POSITION(&bParam1, &Local_142);
				SET_ACTOR_FACTION(&bParam1, 21);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam1);
				SET_ANIM_SET_FOR_ACTOR(&bParam1, "stand_surrender", 0);
				TASK_CLEAR(&bParam1);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				TASK_DRAW_HOLSTER_WEAPON(&bParam0, 1);
				GET_POSITION(&bParam0, &Local_127);
				AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 0);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			if (IS_ACTOR_VALID(&bParam2))
			{
				TASK_CLEAR(&bParam2);
			}
			else
			{
				LOG_ERROR("The Horse is not valid");
			}
			Function_199(&bParam0, 58);
			break;
		
		case 0x0000003A:
			uLocal_148 = Vector(2.0f, 0.0f, 0.0f);
			if (!IS_ACTOR_MOUNTED(&bParam2))
			{
				ACTOR_MOUNT_ACTOR(&bParam1, &bParam2);
				GET_ACTOR_OFFSET_WORLD_COORDS(&bParam2, &uLocal_148, &uLocal_151);
				FIND_GROUND_INTERSECTION(&uLocal_151, 10.0f, &Local_154, &uVar1);
				TELEPORT_ACTOR(&bParam0, &Local_154, 1, 1, 1);
				PRINTVECTOR(Local_154);
			}
			if (IS_ACTOR_MOUNTED(&bParam2))
			{
				Function_300(&bParam0, &bParam1);
				TASK_DRAW_HOLSTER_WEAPON(&bParam0, 1);
				AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 0);
				TASK_POINT_GUN_AT_OBJECT(&bParam0, &bParam1, -1.0f, 0);
				Function_199(&bParam0, 59);
			}
			break;
		
		case 0x0000003B:
			if ((!IS_ACTION_NODE_PLAYING(&bParam1, "stand_surrender/horse_surrender") && IS_ACTOR_RIDING(&bParam1)) && IS_ACTOR_VALID(&bParam1))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iLocal_503, "stand_surrender/horse_surrender");
				TASK_PRIORITY_SET(&bParam1, true);
				Function_199(&bParam0, 61);
			}
			break;
		
		case 0x0000003D:
			if (VDIST(Local_118, Local_127) >= 30.0f && iLocal_85 != 0)
			{
				Function_218(StackVal, Local_145);
				iLocal_85 = 1;
			}
			if ((((VDIST(Local_118, Local_127) >= 40.0f && (Function_265(&bParam0, 0,65f, 0x42960000, 1, 1, 0) || Function_265(&bParam1, 0,65f, 0x42960000, 1, 1, 0))) || VDIST(Local_118, Local_127) >= 10.0f) || GET_LAST_ATTACKER(&bParam0) != &Global_54076) || GET_LAST_ATTACKER(&bParam1) != &Global_54076)
			{
				SET_ACTOR_HEALTH(&bParam1, 1.0f);
				TASK_CLEAR(&bParam0);
				TASK_CLEAR(&bParam1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				SET_ACTOR_FACTION(&bParam1, 20);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				bLocal_48 = TASK_SEQUENCE_OPEN();
				TASK_CLEAR(false);
				TASK_MOUNT(false, &bParam2, 1, 1, 2, 2147483647);
				TASK_KILL_CHAR(false, &bParam1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, bLocal_48);
				TASK_SEQUENCE_RELEASE(bLocal_48, 1);
				Function_375(&iLocal_661);
				Function_357("JOB_NIGHT_SubdueHorseThief", 5.0f, 1, 2, 0, 0, 0, 0);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 62);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x0000003E:
			if (Function_355(&iLocal_661) <= 2.0f || GET_LAST_ATTACKER(&bParam0) != &Global_54076)
			{
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					TASK_KILL_CHAR(&bLocal_497, &bParam0);
					TASK_FLEE_ACTOR(&bParam1, &Global_54076, 50.0f, 25.0f, 1, 0, 0);
					SET_ACTOR_FACTION(&bParam0, 19);
				}
				Function_199(&bParam0, 63);
			}
			break;
		
		case 0x0000003F:
			GET_POSITION(&bParam2, &uLocal_157);
			GET_POSITION(&bParam1, &Local_142);
			if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam0) != &bLocal_497) || GET_LAST_ATTACKER(&bParam1) != &bParam0)
			{
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				Function_199(&bParam0, 65);
			}
			if (!IS_ACTOR_ALIVE(&bParam1) || VDIST(Local_127, Local_142) < 10.0f)
			{
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_199(&bParam0, 65);
			}
			break;
		
		case 0x00000041:
			break;
		
		case 0x00000042:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_218(struct<2> Param0) //Position: 0xCA13 / 51731
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 3;
	iVar7 = 324;
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_539);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "rustlerVol", 2,802597E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	if (IS_VOLUME_VALID(&uVar2))
	{
		ITERATE_IN_VOLUME(&uVar0, GET_OBJECT_FROM_VOLUME(&uVar2));
	}
	else
	{
		LOG_ERROR("AlertNerbyActors: Unable to create search volume.");
	}
	uVar4 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_539, "nwActorSet", 0);
	if (!IS_ACTORSET_VALID(&uVar4))
	{
		LOG_ERROR("AlertNerbyActors: Unable to create actor set.");
	}
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&uVar1);
		bVar5 = GET_ACTOR_ENUM(&iVar3);
		if (((&iVar3 == &bLocal_485 && &iVar3 == &iLocal_503) && &iVar3 == &bLocal_497) && &iVar3 == &iLocal_483)
		{
			if (bVar5 <= iVar6 && bVar5 >= iVar7)
			{
				ADD_ACTORSET_MEMBER(&uVar4, &iVar3);
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	if (GET_ACTORSET_SIZE(&uVar4) >= 0)
	{
		PRINTINT(GET_ACTORSET_SIZE(&uVar4));
		Function_219(&uVar4, &bLocal_485, 40.0f, 10.0f, 0, 0);
	}
	if (IS_ACTORSET_VALID(&uVar4))
	{
		DESTROY_ACTORSET(&uVar4);
	}
	if (IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
	}
	if (IS_VOLUME_VALID(&uVar2))
	{
		DESTROY_VOLUME(&uVar2);
	}
	return;
}

void Function_219(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xCBCE / 52174
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&uParam0) - 1))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

int Function_220(bool bParam0) //Position: 0xCC1C / 52252
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("INVALID COYOTE");
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0) || iLocal_81 != 1)
	{
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 209, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		DESTROY_VOLUME(&uLocal_555);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		iLocal_32++;
		return 0;
	}
	bVar0 = Function_193(&bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 50);
			break;
		
		case 0x00000032:
			if (iLocal_52 == 10)
			{
				iLocal_52 = 5;
			}
			else
			{
				iLocal_51 = 5;
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_136);
				PRINTSTRING("aCoyote is spawned here:");
				PRINTVECTOR(Local_136);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bParam0, 11, 0);
				Function_190(&bParam0);
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(&bParam0, &uLocal_148, &uLocal_151);
			FIND_GROUND_INTERSECTION(&uLocal_151, 10.0f, &uLocal_151, &uVar1);
			if (SQUAD_IS_VALID(&iLocal_525))
			{
				Function_226(&iLocal_525, &bParam0, 3, 1.0f, 0.0f, 1);
			}
			REFERENCE_ACTOR(&bParam0);
			Function_375(&Local_653);
			Function_199(&bParam0, 51);
			break;
		
		case 0x00000033:
			cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("nCoyoteVol") };
			GET_POSITION(&bParam0, &Local_136);
			uLocal_555 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, &cLocal_102, 2,802597E-45f, Local_136, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
			Function_199(&bParam0, 52);
			break;
		
		case 0x00000034:
			if (IS_VOLUME_VALID(&uLocal_555))
			{
				TASK_CLEAR(&bParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bParam0, &uLocal_555, 4, true);
				Function_223(&iLocal_525, &uLocal_555, 4, 1);
				SQUAD_SET_FACTION(&iLocal_525, 20);
				SET_ACTOR_FACTION(&cLocal_505, 19);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_525, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &uLocal_555, -1.0f);
				KILL_ACTOR(&uLocal_517);
				Function_199(&bParam0, 53);
			}
			break;
		
		case 0x00000035:
			GET_POSITION(&cLocal_505, &Local_136);
			if (Function_265(&bParam0, 0,65f, 50.0f, 1, 1, 0) || VDIST(Local_136, Local_118) >= 15.0f)
			{
				if (IS_BLIP_VALID(&iLocal_549) == 0)
				{
					iLocal_549 = ADD_BLIP_FOR_ACTOR(&bParam0, 322, 0, 2, 0);
					iLocal_70 = 1;
					Function_357("JOB_NIGHT_CoyoteKill", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_222(&iLocal_525);
					PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
					MEMORY_IDENTIFY(&bParam0, &Global_54076);
					TASK_KILL_CHAR(&bParam0, &Global_54076);
					SET_MOTIVE_BY_ENUM(&bParam0, 0, 0.0f);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					Function_199(&bParam0, 54);
				}
			}
			if ((VDIST(Local_118, Local_136) < 20.0f && Function_374(&Local_653, 55.0f)) || (!WOULD_ACTOR_BE_VISIBLE(397, &Local_136, 3212836864) && Function_374(&Local_653, 55.0f)))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 208, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_ACTOR(&bParam0);
				Function_221(&iLocal_525);
				iLocal_81 = 1;
				iLocal_83 = 0;
				Function_375(&iLocal_661);
				return 0;
			}
			if (GET_TASK_STATUS(&bLocal_497, 64) == 4)
			{
				DESTROY_ACTOR(&bParam0);
				Function_221(&iLocal_525);
				iLocal_81 = 1;
				iLocal_83 = 0;
				Function_375(&iLocal_661);
				return 0;
			}
			break;
		
		case 0x00000036:
			if (((GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0) || IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_555)) || IS_ACTOR_IN_VOLUME(&bLocal_497, &uLocal_555))
			{
				TASK_CLEAR(&bLocal_497);
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				iLocal_98 = 1;
				Function_199(&bParam0, 55);
			}
			break;
		
		case 0x00000037:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_221(int iParam0) //Position: 0xCFD6 / 53206
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_222(int iParam0) //Position: 0xD02D / 53293
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_223(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xD07C / 53372
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

struct<32> Function_224(char* cParam0) //Position: 0xD0D4 / 53460
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_225("0", &cVar8, ""), 4);
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

struct<32> Function_225(char* cParam0) //Position: 0xD140 / 53568
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_226(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0xD162 / 53602
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<5> Var7;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_229(&iParam1);
			Var3 = Function_229(&iParam1);
			Function_228(&iParam1);
			Var7 = Function_228(&iParam1);
			Var5 = Var3;
			Var5.f_4 = (StackVal + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						Var5 = Var3;
						Var5.f_8 = (StackVal + fParam3);
					}
					if (bParam5)
					{
						Var7.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_227(StackVal, StackVal, &uVar2, Var5, 1, 1, 1);
					iVar1++;
					Var5 = (Var5 + fParam3);
				}
				bVar0++;
			}
		}
	}
}

void Function_227(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xD21C / 53788
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

struct<8> Function_228(int iParam0) //Position: 0xD2EB / 53995
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

struct<8> Function_229(int iParam0) //Position: 0xD314 / 54036
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_230(bool bParam0, bool bParam1) //Position: 0xD33D / 54077
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		Function_199(&bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		iLocal_32++;
		if (VDIST(Local_118, Local_130) > 10.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
		TASK_CLEAR(&bParam1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		iLocal_88 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		Function_199(&bParam0, 49);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(&bParam0) || UNK_0x7A207FFE(&bParam0))
	{
		iLocal_32++;
		iLocal_31++;
		DECOR_SET_BOOL(&bParam0, "PlayerHogtied", 1);
		Function_196(50, 1, 0);
		Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
		TASK_CLEAR(&bParam1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
		Function_195(&bParam0, 4294967291);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		iLocal_88 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	bVar0 = Function_193(&bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 39);
			break;
		
		case 0x00000027:
			iLocal_72 = 0;
			REFERENCE_ACTOR(&bParam0);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			SET_ACTOR_FACTION(&bParam0, 1);
			Function_300(&bParam0, &bParam1);
			Function_300(&bParam1, &bParam0);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &Global_54076);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &bParam0);
			Function_375(&Local_653);
			Function_190(&bParam0);
			Function_195(&bParam0, 0);
			Function_231(&bParam1);
			Function_199(&bParam0, 40);
			break;
		
		case 0x00000028:
			if (iLocal_52 == 10)
			{
				iLocal_52 = 4;
			}
			else
			{
				iLocal_51 = 4;
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				TASK_STAND_STILL(&bParam1, -1.0f, 1, 0);
				SET_ANIM_SET_FOR_ACTOR(&bParam1, "stand_ambient", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bParam1, "stand_ambient/help_loop");
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				TASK_STAND_STILL(&bParam0, -1.0f, 1, 0);
				GET_POSITION(&bParam0, &Local_127);
				SET_ANIM_SET_FOR_ACTOR(&bParam0, "stand_yelling", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bParam0, "stand_yelling/YellingMid");
			}
			Function_199(&bParam0, 41);
			break;
		
		case 0x00000029:
			GET_POSITION(&bParam0, &Local_127);
			if ((VDIST(Local_118, Local_127) >= 25.0f && (Function_265(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0) || Function_265(&bParam1, 0x3f800000, 0x42960000, 1, 1, 0))) || VDIST(Local_118, Local_127) >= 10.0f)
			{
				Function_375(&iLocal_661);
				AUDIO_PLAY_VOCAL_EFFECT(&bParam0, 9, 1);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				Function_357("JOB_NIGHT_SubdueThief", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				TASK_CLEAR(&bLocal_497);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				TASK_PRIORITY_SET(&bLocal_497, true);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 42);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x0000002A:
			if (Function_355(&iLocal_661) < 4.0f && iLocal_98 != 0)
			{
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_CLEAR(&bParam1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, -1.0f, 5.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_98 = 1;
			}
			if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || VDIST(Local_118, Local_127) > 10.0f) || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
			{
				if (VDIST(Local_118, Local_130) >= 15.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				Function_199(&bParam0, 43);
			}
			if ((VDIST(Local_118, Local_142) > 5.0f || Function_355(&iLocal_661) < 7.0f) && iLocal_88 != 0)
			{
				if (VDIST(Local_118, Local_130) >= 15.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				Function_199(&bParam0, 43);
				iLocal_88 = 1;
			}
			break;
		
		case 0x0000002B:
			if (Function_355(&iLocal_661) < 5.0f)
			{
				TASK_CLEAR(&bParam1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_199(&bParam0, 49);
			}
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_231(bool bParam0) //Position: 0xD988 / 55688
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_REMOVE(&bParam0, "nocrime");
	}
	return;
}

int Function_232(bool bParam0, bool bParam1) //Position: 0xD9BD / 55741
{
	int iVar0;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		Function_199(&bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		iLocal_32++;
		if (VDIST(Local_118, Local_130) > 10.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		TASK_FLEE_ACTOR(&bParam1, &bParam0, 50.0f, 20.0f, 0, 0, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
		Function_375(&iLocal_661);
		TASK_CLEAR(&bParam1);
		RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		DESTROY_VOLUME(&uLocal_573);
		DESTROY_ACTOR(&uLocal_519);
		Function_199(&bParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(&bParam0) || UNK_0x7A207FFE(&bParam0)) || iLocal_91 != 1)
	{
		iLocal_32++;
		iLocal_31++;
		Function_196(50, 1, 0);
		if (iLocal_91 == 0)
		{
			DECOR_SET_BOOL(&bParam0, "PlayerHogtied", 1);
			Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_146("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			if (VDIST(Local_118, Local_130) > 8.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		TASK_CLEAR(&bParam1);
		RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
		Function_195(&bParam0, 4294967291);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		DESTROY_VOLUME(&uLocal_573);
		DESTROY_ACTOR(&uLocal_519);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	iVar0 = Function_193(&bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 33);
			break;
		
		case 0x00000021:
			iLocal_72 = 0;
			REFERENCE_ACTOR(&bParam0);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			SET_ACTOR_FACTION(&bParam0, 1);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &Global_54076);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &bParam0);
			GET_OBJECT_AXIS(&iLocal_579, &Local_448, 2);
			uLocal_433 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Local_448, Local_145, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal);
			Function_375(&Local_653);
			Function_190(&bParam0);
			Function_195(&bParam0, 0);
			Function_199(&bParam0, 34);
			break;
		
		case 0x00000022:
			if (iLocal_52 == 10)
			{
				iLocal_52 = 3;
			}
			else
			{
				iLocal_51 = 3;
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_127);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(&bParam0, "look_in_window", 0);
				TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				TELEPORT_ACTOR(&bParam1, &uLocal_433, 1, 1, 1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 100.0f, -1.0f, 0, 0, 0);
			}
			FIND_GROUND_INTERSECTION(&Local_145, 5.0f, &Local_145, &uVar3);
			GET_OBJECT_AXIS(&iLocal_579, &Local_448, 2);
			Local_451 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Local_448, Local_145, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal);
			uLocal_573 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, Function_43(), 2,802597E-45f, Local_127, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
			if (IS_VOLUME_VALID(&uLocal_573))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_573);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_573);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_573, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uLocal_573);
			}
			Function_199(&bParam0, 35);
			break;
		
		case 0x00000023:
			if (HAS_ANIM_SET_LOADED("look_in_window"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bParam0, "look_in_window");
				TASK_PRIORITY_SET(&bParam0, true);
				if (Global_43789 == Global_46816[0])
				{
					Function_228(&iLocal_579);
					uLocal_519 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, Function_43(), 54, Local_451, Function_228(&iLocal_579));
				}
				else if (Global_43789 == Global_46914[0])
				{
					Function_228(&iLocal_579);
					uLocal_519 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, Function_43(), 76, Local_451, Function_228(&iLocal_579));
				}
				else if (Global_43789 == Global_46866[0])
				{
					Function_228(&iLocal_579);
					uLocal_519 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, Function_43(), 253, Local_451, Function_228(&iLocal_579));
				}
				TASK_STAND_STILL(&uLocal_519, -1.0f, 0, 0);
				Function_199(&bParam0, 36);
			}
			if (VDIST(Local_118, Local_127) > 10.0f)
			{
				Function_199(&bParam0, 36);
			}
			break;
		
		case 0x00000024:
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_127);
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				GET_POSITION(&bParam1, &Local_142);
			}
			if ((VDIST(Local_118, Local_142) > 15.0f && iLocal_72 != 0) && !Function_265(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam1, 63, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&bParam1);
				Function_303(&bParam1, 0);
				Function_234(&bParam1, &bParam0);
				Function_233(&iLocal_649, 28.0f);
				iLocal_72 = 1;
			}
			if (Function_265(&bParam0, 0,65f, 20.0f, 1, 1, 0) || GET_LAST_ATTACKER(&bParam0) != &Global_54076)
			{
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bParam0, 322, 0, 2, 0);
					iLocal_70 = 1;
					TASK_CLEAR(&bParam1);
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					Function_357("JOB_NIGHT_StopBreakIn", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				Function_375(&iLocal_661);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 37);
			}
			if (VDIST(Local_118, Local_127) >= 3.0f)
			{
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bParam0, 322, 0, 2, 0);
					iLocal_70 = 1;
					TASK_CLEAR(&bParam1);
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
					Function_357("JOB_NIGHT_StopBreakIn", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 207, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				Function_375(&iLocal_661);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 38);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x00000025:
			if (GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &bParam0);
				iLocal_98 = 1;
			}
			if (GET_LAST_ATTACKER(&bParam0) != &Global_54076 || Function_187(&bParam0))
			{
				Function_199(&bParam0, 48);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(0, &bParam0, 1) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && iLocal_90 != 0)
			{
				Function_375(&iLocal_661);
				iLocal_90 = 1;
			}
			else if ((iLocal_90 != 1 && Function_355(&iLocal_661) < 0,75f) && IS_PLAYER_TARGETTING_ACTOR(0, &bParam0, 1))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&bParam1);
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				Function_199(&bParam0, 38);
			}
			else if (Function_355(&iLocal_661) < 4.0f)
			{
				Function_375(&iLocal_661);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 207, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_199(&bParam0, 38);
			}
			else if (VDIST2(Local_118, Local_127) >= 1.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_375(&iLocal_661);
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_199(&bParam0, 38);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && !(GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam1) != &Global_54076))
			{
				TASK_CLEAR(&bParam0);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				Function_199(&bParam0, 38);
			}
			break;
		
		case 0x00000026:
			GET_POSITION(&bParam0, &Local_127);
			if (IS_ACTOR_ALIVE(&bParam0))
			{
				if (Function_355(&iLocal_661) < 10.0f && VDIST(Local_118, Local_127) <= 10.0f)
				{
					iLocal_91 = 1;
					Function_199(&bParam0, 49);
				}
				if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || Function_187(&bParam0)) || Function_355(&iLocal_661) < 13.0f)
				{
					iLocal_91 = 0;
					Function_199(&bParam0, 48);
				}
			}
			break;
		
		case 0x00000030:
			if (VDIST(Local_130, Local_118) > 5.0f && !IS_ACTOR_IN_HOGTIE(&bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(&bLocal_497, &bParam0);
			TASK_CLEAR(&bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			SAY_SINGLE_LINE_CONTEXT(&bParam0, 28, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			TASK_KILL_CHAR(&bParam0, &Global_54076);
			Function_375(&iLocal_661);
			Function_199(&bParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_233(vector3 vParam0) //Position: 0xE401 / 58369
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_66(&vParam0, 1);
	Function_31(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_234(var uParam0, int iParam1) //Position: 0xE426 / 58406
{
	struct<9> Var0;
	
	GET_POSITION(&uParam0, &vVar0);
	GET_POSITION(&iParam1, &vVar2);
	uVar4 = Vector((vVar2.x - vVar0.x), 0.0f, (vVar2.z - vVar0.z));
	fVar6 = (GET_HEADING(&uParam0) - UNK_0x9C40E671(&uVar4));
	SET_ANIM_SET_FOR_ACTOR(&uParam0, "pointing", 0);
	while (fVar6 > -0,1f || fVar6 < 360,1f)
	{
		if (fVar6 > -0,1f)
		{
			fVar6 = (fVar6 + 360.0f);
		}
		else if (fVar6 < 360,1f)
		{
			fVar6 = (fVar6 - 360.0f);
		}
	}
	if (fVar6 > 22,5f || fVar6 < 337,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/000");
	}
	else if (fVar6 > 67,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/045");
	}
	else if (fVar6 > 112,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/090");
	}
	else if (fVar6 > 157,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/135");
	}
	else if (fVar6 > 202,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/180");
	}
	else if (fVar6 > 247,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/225");
	}
	else if (fVar6 > 292,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/270");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "pointing/315");
	}
	return;
}

int Function_235(bool bParam0, bool bParam1) //Position: 0xE5CF / 58831
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0) && !IS_BLIP_VALID(&iLocal_551))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		Function_199(&bParam0, 49);
		return 0;
	}
	if ((!IS_ACTOR_ALIVE(&bParam0) && !IS_BLIP_VALID(&iLocal_551)) || (UNK_0x7A207FFE(&bParam0) && !IS_BLIP_VALID(&iLocal_551)))
	{
		iLocal_32++;
		if (IS_VOLUME_VALID(&uLocal_557))
		{
			DESTROY_VOLUME(&uLocal_557);
		}
		if (UNK_0x7A207FFE(&bParam0))
		{
			iLocal_31++;
			TASK_CLEAR(&bParam0);
			MEMORY_CLEAR_ALL(&bParam0);
			if (IS_BLIP_VALID(&iLocal_547))
			{
				REMOVE_BLIP(&iLocal_547);
			}
			Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if (!IS_ACTOR_ALIVE(&bParam1))
		{
		}
		if (IS_ACTOR_ALIVE(&bParam1))
		{
			MEMORY_CONSIDER_AS(&bParam1, &Global_54076, 2);
			if (VDIST(Local_118, Local_130) > 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (IS_ACTOR_HOGTIED(&bParam1))
			{
				iLocal_31++;
				DECOR_SET_BOOL(&bParam1, "PlayerHogtied", 1);
				Function_195(&bParam1, 4294967291);
				DEREFERENCE_ACTOR(&bParam1);
			}
			else
			{
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 50.0f, 20.0f, 0, 0, 0);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
			}
		}
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		Function_199(&bParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(&bParam0) && !IS_BLIP_VALID(&iLocal_551)) || ((iLocal_84 != 1 && !IS_BLIP_VALID(&iLocal_551)) && !IS_BLIP_VALID(&iLocal_547)))
	{
		iLocal_32++;
		iLocal_31++;
		DECOR_SET_BOOL(&bParam0, "PlayerHogtied", 1);
		Function_196(50, 1, 0);
		if (IS_ACTOR_HOGTIED(&bParam1))
		{
			iLocal_31++;
			DECOR_SET_BOOL(&bParam1, "PlayerHogtied", 1);
			if (!IS_GRINGO_VALID(&uLocal_607))
			{
				uLocal_607 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &Local_142, 5.0f, 0);
			}
			if (IS_GRINGO_VALID(&uLocal_607) && IS_ACTOR_ALIVE(&bParam1))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uLocal_607), "DisablePlayerCarry", 1);
			}
			Function_195(&bParam1, 4294967291);
			DEREFERENCE_ACTOR(&bParam1);
		}
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		if (iLocal_84 == 1)
		{
			MEMORY_CLEAR_ALL(&bParam0);
			MEMORY_CLEAR_ALL(&bParam1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&bParam0, 1);
			TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
			TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
			if (((!IS_ACTOR_HOGTIED(&bParam0) && IS_ACTOR_ALIVE(&bParam0)) && !UNK_0x7A207FFE(&bParam0)) && ((!IS_ACTOR_HOGTIED(&bParam1) && IS_ACTOR_ALIVE(&bParam1)) && !UNK_0x7A207FFE(&bParam1)))
			{
				Function_146("JOB_NIGHT_FleeHelpPlural", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_146("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (iLocal_84 == 0)
		{
			Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 213, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(Local_118, Local_130) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		iLocal_84 = 0;
		Function_195(&bParam0, 4294967291);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		return 0;
	}
	if ((IS_ACTOR_HOGTIED(&bParam1) || UNK_0x7A207FFE(&bParam1)) && IS_BLIP_VALID(&iLocal_551))
	{
		REMOVE_BLIP(&iLocal_551);
		Function_375(&iLocal_661);
		if (!IS_GRINGO_VALID(&uLocal_607))
		{
			uLocal_607 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &Local_142, 5.0f, 0);
		}
		if (IS_GRINGO_VALID(&uLocal_607) && IS_ACTOR_ALIVE(&bParam1))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uLocal_607), "DisablePlayerCarry", 1);
		}
	}
	if ((IS_ACTOR_HOGTIED(&bParam0) || UNK_0x7A207FFE(&bParam0)) && IS_BLIP_VALID(&iLocal_547))
	{
		REMOVE_BLIP(&iLocal_547);
		Function_375(&iLocal_661);
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam1)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam1) != 0) && iLocal_100 != 0) && GET_TASK_STATUS(&bParam1, 5) != 1)
	{
		iLocal_100 = 1;
		TASK_MELEE_ATTACK(&bParam1, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	if (iLocal_100 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam1)))
	{
		TASK_CLEAR(&bParam1);
		TASK_KILL_CHAR(&bParam1, &Global_54076);
		iLocal_100 = 0;
	}
	iVar0 = Function_213(&bLocal_527);
	switch (iVar0)
	{
		case 0x00000000:
			Function_216(&bLocal_527, 26);
			break;
		
		case 0x0000001A:
			iLocal_72 = 0;
			REFERENCE_ACTOR(&bParam0);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			Function_375(&Local_653);
			Function_190(&bParam1);
			Function_195(&bParam0, 0);
			Function_195(&bParam1, 0);
			Function_190(&bParam0);
			Function_216(&bLocal_527, 27);
			break;
		
		case 0x0000001B:
			uLocal_148 = Vector(1.0f, 0.0f, 0.0f);
			iLocal_80 = 1;
			if (iLocal_52 == 10)
			{
				iLocal_52 = 2;
			}
			else
			{
				iLocal_51 = 2;
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				TASK_CLEAR(&bParam1);
				GET_POSITION(&bParam1, &Local_142);
				MEMORY_PREFER_MELEE(&bParam1, 1);
				_SET_ACTOR_HEALTH_3(&bParam1, 180.0f);
				ACTOR_START_FORCE_HOLSTER(&bParam1, 0, 0);
				DECOR_SET_BOOL(&bParam1, "bDisableCutFree", 1);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				TASK_CLEAR(&bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				_SET_ACTOR_HEALTH_3(&bParam0, 180.0f);
				GET_POSITION(&bParam0, &Local_127);
				MEMORY_PREFER_MELEE(&bParam0, 1);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 0, 0);
			}
			else
			{
				LOG_ERROR("The Rustler is not valid");
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(&bParam0, &uLocal_148, &uLocal_151);
			FIND_GROUND_INTERSECTION(&uLocal_151, 10.0f, &uLocal_151, &uVar1);
			TELEPORT_ACTOR(&bParam1, &uLocal_151, 1, 1, 1);
			uLocal_557 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, Function_43(), 2,802597E-45f, Local_127, Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			if (IS_VOLUME_VALID(&uLocal_557))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&bParam1, &uLocal_557, 2, true);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bParam0, &uLocal_557, 2, true);
				Function_216(&bLocal_527, 28);
			}
			break;
		
		case 0x0000001C:
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_127);
				SET_ACTOR_KO_POINTS(&bParam0, 100.0f);
				TASK_MELEE_ATTACK(&bParam0, &bParam1, -1.0f);
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				GET_POSITION(&bParam1, &Local_142);
				SET_ACTOR_KO_POINTS(&bParam1, 100.0f);
				TASK_MELEE_ATTACK(&bParam1, &bParam0, -1.0f);
			}
			else
			{
				TASK_KILL_CHAR(&bParam0, &Global_54076);
			}
			if (Function_265(&bParam0, 0,75f, 45.0f, 1, 1, 0) || Function_265(&bParam1, 0,75f, 45.0f, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					if (IS_BLIP_VALID(&iLocal_547) == 0)
					{
						iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
						iLocal_70 = 1;
					}
				}
				if (IS_ACTOR_VALID(&bParam1))
				{
					if (IS_BLIP_VALID(&iLocal_551) == 0)
					{
						iLocal_551 = ADD_BLIP_FOR_ACTOR(&bParam1, 322, 0, 2, 0);
						iLocal_70 = 1;
					}
				}
				Function_357("JOB_NIGHT_BrawlStart", 5.0f, 1, 2, 0, 0, 0, 0);
				Function_146("JOB_NIGHT_BrawlHelp", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				if (VDIST(Local_118, Local_130) > 5.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 216, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_375(&iLocal_661);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				Function_216(&bLocal_527, 29);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x0000001D:
			if (iLocal_98 != 0 && GET_TASK_STATUS(&bLocal_497, 4294967295) != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &bParam0);
				iLocal_98 = 1;
			}
			if ((iLocal_90 != 0 && VDIST(Local_118, Local_127) >= 15.0f) && (Function_236(0, &bLocal_527, 1) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))))
			{
				Function_375(&iLocal_661);
				iLocal_90 = 1;
			}
			if ((iLocal_80 != 1 && Function_355(&iLocal_661) <= 15.0f) || Function_355(&iLocal_661) <= 20.0f)
			{
				DECOR_SET_BOOL(&bParam1, "bDoNotBlock", 1);
				SET_ACTOR_KO_POINTS(&bParam1, 1.0f);
				iLocal_80 = 0;
				SAY_SINGLE_LINE_CONTEXT(&bParam1, 99, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_216(&bLocal_527, 30);
			}
			else if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
				TASK_PRIORITY_SET(&bParam1, true);
				Function_375(&iLocal_661);
				Function_216(&bLocal_527, 32);
			}
			else if (UNK_0x7A207FFE(&bParam1) != 1 || UNK_0x7A207FFE(&bParam0) != 1)
			{
				MEMORY_PREFER_MELEE(&bParam0, 0);
				MEMORY_PREFER_MELEE(&bParam1, 0);
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam0);
				GIVE_WEAPON_TO_ACTOR(&bParam0, 22, 1.0f, 0, 1);
				if (UNK_0x7A207FFE(&bParam1) == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(&bParam1, 99, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&bParam1, 22, 1.0f, 0, 1);
					TASK_MELEE_ATTACK(&bParam1, &Global_54076, -1.0f);
					MEMORY_IDENTIFY(&bLocal_497, &bParam1);
					TASK_KILL_CHAR(&bLocal_497, &bParam1);
					TASK_PRIORITY_SET(&bLocal_497, true);
				}
				else
				{
					TASK_KILL_CHAR(&bLocal_497, &bParam0);
					SAY_SINGLE_LINE_CONTEXT(&bParam0, 27, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
				}
				if (UNK_0x7A207FFE(&bParam0) == 1)
				{
					Function_216(&bLocal_527, 31);
				}
				else
				{
					Function_216(&bLocal_527, 49);
				}
			}
			else if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam1) != &Global_54076) || !IS_ACTOR_ALIVE(&bParam0))
			{
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				CLEAR_LAST_HIT(&bParam0);
				bLocal_53 = RAND_INT_RANGE(0, 2);
				if ((bLocal_53 != 0 || (GET_LAST_HIT_FLAGS(&bParam0) != 2 && GET_LAST_ATTACKER(&bParam0) != &Global_54076)) || (GET_LAST_HIT_FLAGS(&bParam1) != 2 && GET_LAST_ATTACKER(&bParam1) != &Global_54076))
				{
					TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
					TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
					Function_375(&iLocal_661);
					CLEAR_LAST_ATTACK(&Global_54076);
					CLEAR_LAST_HIT(&bParam1);
					Function_216(&bLocal_527, 32);
				}
				else
				{
					MEMORY_PREFER_MELEE(&bParam0, 0);
					MEMORY_PREFER_MELEE(&bParam1, 0);
					SAY_SINGLE_LINE_CONTEXT(&bParam0, 27, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					ACTOR_END_FORCE_HOLSTER(&bParam0);
					ACTOR_END_FORCE_HOLSTER(&bParam1);
					TASK_DRAW_HOLSTER_WEAPON(&bParam0, 1);
					TASK_DRAW_HOLSTER_WEAPON(&bParam1, 1);
					TASK_KILL_CHAR(&bParam1, &Global_54076);
					TASK_KILL_CHAR(&bParam0, &Global_54076);
					TASK_KILL_CHAR(&bLocal_497, &bParam0);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam1, 28, 0.0f);
					Function_216(&bLocal_527, 31);
				}
			}
			else if ((iLocal_90 != 1 && Function_355(&iLocal_661) < 1.0f) && Function_236(0, &bLocal_527, 1))
			{
				Function_375(&iLocal_661);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				CLEAR_LAST_HIT(&bParam0);
				CLEAR_LAST_HIT(&bParam1);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
				TASK_PRIORITY_SET(&bParam1, true);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				Function_216(&bLocal_527, 32);
			}
			break;
		
		case 0x0000001E:
			if (UNK_0x7A207FFE(&bParam1))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				GIVE_WEAPON_TO_ACTOR(&bParam0, 22, 1.0f, 0, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&bParam0, 22, 1);
				TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
				if (IS_BLIP_VALID(&iLocal_551))
				{
					REMOVE_BLIP(&iLocal_551);
				}
				SET_ACTOR_KO_POINTS(&bParam0, 30.0f);
				Function_375(&iLocal_661);
				SAY_SINGLE_LINE_CONTEXT(&bParam0, 27, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_216(&bLocal_527, 49);
			}
			else if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam1) != &Global_54076) || !IS_ACTOR_ALIVE(&bParam0))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				CLEAR_LAST_HIT(&bParam0);
				CLEAR_LAST_ATTACK(&Global_54076);
				ACTOR_END_FORCE_HOLSTER(&bParam1);
				if (IS_ACTOR_VALID(&bParam0))
				{
					ACTOR_END_FORCE_HOLSTER(&bParam0);
				}
				GIVE_WEAPON_TO_ACTOR(&bParam1, 22, 1.0f, 0, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&bParam1, 22, 1);
				Function_216(&bLocal_527, 31);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && !(GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam1) != &Global_54076))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				Function_216(&bLocal_527, 32);
			}
			break;
		
		case 0x0000001F:
			if ((((UNK_0x7A207FFE(&bParam1) || !IS_ACTOR_ALIVE(&bParam1)) || IS_ACTOR_HOGTIED(&bParam1)) && IS_BLIP_VALID(&iLocal_551)) || GET_LAST_ATTACKER(&bParam1) != &Global_54076)
			{
				if (!((UNK_0x7A207FFE(&bParam1) || !IS_ACTOR_ALIVE(&bParam1)) || IS_ACTOR_HOGTIED(&bParam1)))
				{
					TASK_MELEE_ATTACK(&bParam1, &Global_54076, -1.0f);
				}
				else
				{
					REMOVE_BLIP(&iLocal_551);
				}
				Function_216(&bLocal_527, 48);
			}
			if (iLocal_86 != 0 && ((UNK_0x7A207FFE(&bParam0) || IS_ACTOR_HOGTIED(&bParam0)) || !IS_ACTOR_ALIVE(&bParam0)))
			{
				if (IS_BLIP_VALID(&iLocal_551))
				{
					SAY_SINGLE_LINE_CONTEXT(&bParam1, 27, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					MEMORY_IDENTIFY(&bLocal_497, &bParam1);
					TASK_KILL_CHAR(&bLocal_497, &bParam1);
					TASK_KILL_CHAR(&bParam1, &Global_54076);
				}
				if (IS_BLIP_VALID(&iLocal_547))
				{
					REMOVE_BLIP(&iLocal_547);
				}
				iLocal_86 = 1;
			}
			if ((GET_LAST_HIT_FLAGS(&bParam0) != 2 && GET_LAST_ATTACKER(&bParam0) != &Global_54076) || (GET_LAST_HIT_FLAGS(&bParam1) != 2 && GET_LAST_ATTACKER(&bParam1) != &Global_54076))
			{
				Function_375(&iLocal_661);
				SET_ACTOR_KO_POINTS(&bParam0, 1.0f);
				TASK_CLEAR(&bParam1);
				TASK_CLEAR(&bParam0);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				if (iLocal_88 == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_88 = 1;
				}
				else
				{
					Function_216(&bLocal_527, 48);
				}
				CLEAR_LAST_HIT(&bParam0);
				CLEAR_LAST_HIT(&bParam1);
				CLEAR_LAST_ATTACK(&Global_54076);
				Function_216(&bLocal_527, 32);
			}
			break;
		
		case 0x00000020:
			if (Function_355(&iLocal_661) <= 10.0f)
			{
				if (IS_BLIP_VALID(&iLocal_551))
				{
					REMOVE_BLIP(&iLocal_551);
					MEMORY_CLEAR_ALL(&bParam1);
					ACTOR_HOLSTER_WEAPON(&bParam1, 1);
				}
				if (IS_BLIP_VALID(&iLocal_547))
				{
					REMOVE_BLIP(&iLocal_547);
					MEMORY_CLEAR_ALL(&bParam0);
					ACTOR_HOLSTER_WEAPON(&bParam0, 1);
				}
				iLocal_84 = 1;
				CLEAR_LAST_HIT(&bParam0);
				CLEAR_LAST_ATTACK(&bParam0);
				Function_216(&bLocal_527, 49);
			}
			if ((GET_LAST_ATTACKER(&bParam0) != &Global_54076 && GET_LAST_HIT_FLAGS(&bParam0) == 2) || (GET_LAST_ATTACKER(&bParam1) != &Global_54076 && GET_LAST_HIT_FLAGS(&bParam1) == 2))
			{
				MEMORY_PREFER_MELEE(&bParam0, 0);
				MEMORY_PREFER_MELEE(&bParam1, 0);
				TASK_CLEAR(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				TASK_DRAW_HOLSTER_WEAPON(&bParam0, 1);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				if (!UNK_0x7A207FFE(&bParam1))
				{
					TASK_CLEAR(&bParam1);
					ACTOR_END_FORCE_HOLSTER(&bParam1);
					TASK_DRAW_HOLSTER_WEAPON(&bParam1, 1);
					TASK_KILL_CHAR(&bParam1, &Global_54076);
					SET_ACTOR_UPDATE_PRIORITY(&bParam1, false);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam1, 28, 0.0f);
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam1);
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				Function_216(&bLocal_527, 31);
			}
			break;
		
		case 0x00000030:
			GET_POSITION(&bLocal_497, &Local_130);
			if (VDIST(Local_130, Local_118) > 15.0f && !IS_ACTOR_IN_HOGTIE(&bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(&bLocal_497, &bParam0);
			TASK_CLEAR(&bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			bLocal_48 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, 3.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, &Global_54076);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bParam0, bLocal_48);
			TASK_SEQUENCE_RELEASE(bLocal_48, 1);
			Function_375(&iLocal_661);
			CLEAR_LAST_HIT(&bParam0);
			Function_216(&bLocal_527, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_236(int iParam0, bool bParam1, int iParam2) //Position: 0xF869 / 63593
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(iParam0, &iVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_237(bool bParam0, bool bParam1) //Position: 0xF8C1 / 63681
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		Function_199(&bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		iLocal_32++;
		if (IS_ACTOR_ALIVE(&bParam1))
		{
			MEMORY_CONSIDER_AS(&bParam1, &Global_54076, 2);
			TASK_FLEE_ACTOR(&bParam1, &bParam0, -1.0f, 5.0f, 0, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
			iLocal_32++;
		}
		if (GET_LAST_ATTACKER(&bParam0) == &bLocal_497)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		Function_199(&bParam0, 49);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(&bParam0) || UNK_0x7A207FFE(&bParam0))
	{
		iLocal_32++;
		iLocal_31++;
		DECOR_SET_BOOL(&bParam0, "PlayerHogtied", 1);
		Function_196(50, 1, 0);
		Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		if (VDIST(Local_118, Local_130) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (IS_ACTOR_ALIVE(&bParam1))
		{
			MEMORY_CLEAR_ALL(&bParam1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam1, 1);
		}
		Function_195(&bParam0, 4294967291);
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&bParam1);
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&bParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&bParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&bParam0)))
	{
		TASK_CLEAR(&bParam0);
		TASK_KILL_CHAR(&bParam0, &Global_54076);
		iLocal_99 = 0;
	}
	iVar0 = Function_193(&bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_199(&bParam0, 18);
			break;
		
		case 0x00000012:
			iLocal_72 = 0;
			iLocal_74 = 0;
			REFERENCE_ACTOR(&bParam0);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, false);
			SET_ACTOR_FACTION(&bParam0, 1);
			REFERENCE_ACTOR(&bParam1);
			TASK_CLEAR(&bParam1);
			TASK_PRIORITY_SET(&bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &Global_54076);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bParam1, &bParam0);
			Function_375(&Local_653);
			Function_190(&bParam0);
			Function_195(&bParam0, 0);
			Function_231(&bParam1);
			Function_199(&bParam0, 19);
			break;
		
		case 0x00000013:
			uLocal_148 = Vector(1,5f, 0.0f, 0.0f);
			if (iLocal_52 == 10)
			{
				iLocal_52 = 1;
			}
			else
			{
				iLocal_51 = 1;
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				GET_POSITION(&bParam1, &Local_142);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				SET_ANIM_SET_FOR_ACTOR(&bParam1, "stand_surrender", 0);
				SET_ACTOR_FACTION(&bParam1, 23);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam1);
				TASK_STAND_STILL(&bParam1, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(&bParam0))
			{
				TASK_DRAW_HOLSTER_WEAPON(&bParam0, 1);
				GET_POSITION(&bParam0, &Local_127);
				GET_ACTOR_OFFSET_WORLD_COORDS(&bParam0, &uLocal_148, &uLocal_151);
				AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 0);
				TASK_POINT_GUN_AT_OBJECT(&bParam0, &bParam1, -1.0f, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			FIND_GROUND_INTERSECTION(&uLocal_151, 10.0f, &uLocal_151, &uVar1);
			TELEPORT_ACTOR(&bParam1, &uLocal_151, 1, 1, 1);
			if (VDIST(Local_142, Local_127) > 10.0f && SET_ANIM_SET_FOR_ACTOR(&bParam1, "stand_surrender", 0) != 1)
			{
				Function_199(&bParam0, 20);
			}
			break;
		
		case 0x00000014:
			if (IS_ACTOR_VALID(&bParam0))
			{
				GET_POSITION(&bParam0, &Local_127);
			}
			if (IS_ACTOR_VALID(&bParam1))
			{
				GET_POSITION(&bParam1, &Local_142);
			}
			if (VDIST(Local_142, Local_127) > 5.0f && IS_ACTOR_VALID(&bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				Function_300(&bParam1, &bParam0);
				Function_300(&bParam0, &bParam1);
				SET_ACTION_NODE_FOR_ACTOR(&bParam1, "stand_surrender");
				Function_199(&bParam0, 21);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x00000015:
			GET_POSITION(&bParam0, &Local_127);
			if (IS_ACTOR_ALIVE(&bParam0) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_199(&bParam0, 22);
			}
			if ((((Function_265(&bParam0, 1.0f, 40.0f, 1, 1, 0) || Function_265(&bParam1, 1.0f, 40.0f, 1, 1, 0)) || VDIST(Local_118, Local_127) >= 5.0f) || GET_LAST_ATTACKER(&bParam0) != &Global_54076) || GET_LAST_ATTACKER(&bParam1) != &Global_54076)
			{
				Function_357("JOB_NIGHT_SubdueCriminal", 5.0f, 1, 2, 0, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				if (!IS_BLIP_VALID(&iLocal_547))
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				Function_375(&iLocal_661);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&bParam0, 22);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &bParam0, &bParam1);
			break;
		
		case 0x00000016:
			if (GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &bParam0);
				iLocal_98 = 1;
			}
			if (VDIST(Local_127, Local_142) < 10.0f)
			{
				if ((!IS_ACTOR_ALIVE(&bParam0) || IS_ACTOR_HOGTIED(&bParam0)) || Function_187(&bParam0))
				{
					PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
					TASK_CLEAR(&bParam1);
					TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
					Function_199(&bParam0, 49);
				}
				else if (IS_ACTOR_ALIVE(&bParam0))
				{
					PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
					TASK_KILL_CHAR(&bParam0, &Global_54076);
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
					TASK_CLEAR(&bParam1);
					TASK_FLEE_ACTOR(&bParam1, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
					Function_199(&bParam0, 48);
				}
			}
			if (Function_355(&iLocal_661) < 5.0f && iLocal_75 != 0)
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam1, 51, &bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_75 = 1;
			}
			if (Function_355(&iLocal_661) < 10.0f && iLocal_76 != 0)
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam0, 27, &bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_76 = 1;
			}
			if (((VDIST(Local_118, Local_127) >= 20.0f && IS_PLAYER_TARGETTING_ACTOR(0, &bParam0, 1)) && iLocal_74 != 0) || Function_355(&iLocal_661) < 15.0f)
			{
				SET_ACTOR_HEALTH(&bParam1, 5.0f);
				Function_375(&iLocal_665);
				iLocal_74 = 1;
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_199(&bParam0, 23);
			}
			if (((VDIST(Local_118, Local_127) >= 2.0f || GET_LAST_ATTACKER(&bParam0) != &bLocal_497) || GET_LAST_ATTACKER(&bParam0) != &Global_54076) || iLocal_92 != 1)
			{
				SET_ACTOR_HEALTH(&bParam1, 5.0f);
				TASK_SHOOT_FROM_POSITION(&bParam0, &bParam1, &Local_127);
				TASK_CLEAR(&bLocal_497);
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				MEMORY_IDENTIFY(&bLocal_497, &bParam0);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				SET_ACTOR_UPDATE_PRIORITY(&bLocal_497, false);
				TASK_KILL_CHAR(&bLocal_497, &bParam0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 75.0f, -1.0f, 0, 0, 0);
				Function_199(&bParam0, 24);
			}
			if (!IS_ACTOR_ALIVE(&bParam0) || IS_ACTOR_HOGTIED(&bParam0))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 75.0f, -1.0f, 0, 0, 0);
			}
			if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && !(GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam1) != &Global_54076))
			{
				iLocal_92 = 1;
			}
			break;
		
		case 0x00000017:
			if (((iLocal_74 != 1 && Function_355(&iLocal_665) <= 2.0f) || VDIST(Local_118, Local_127) >= 3.0f) || Function_187(&bParam1))
			{
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					SET_ACTOR_HEALTH(&bParam1, 5.0f);
					TASK_SHOOT_FROM_POSITION(&bParam0, &bParam1, &Local_127);
					if (VDIST(Local_118, Local_127) >= 3.0f)
					{
						Function_146("JOB_NIGHT_HoldupHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_199(&bParam0, 24);
				}
				else
				{
					TASK_KILL_CHAR(&bParam0, &Global_54076);
					Function_199(&bParam0, 49);
				}
			}
			if (GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
			{
				TASK_CLEAR(&bParam1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 50.0f, 20.0f, 0, 0, 0);
				Function_199(&bParam0, 48);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				Function_199(&bParam0, 25);
			}
			else
			{
				TASK_KILL_CHAR(&bParam0, &Global_54076);
				Function_199(&bParam0, 49);
			}
			break;
		
		case 0x00000019:
			if (!IS_ACTOR_ALIVE(&bParam1))
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam0, 27, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_199(&bParam0, 48);
			}
			if (GET_LAST_ATTACKER(&bParam0) != &Global_54076 || GET_LAST_ATTACKER(&bParam0) != &bLocal_497)
			{
				TASK_CLEAR(&bParam1);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 50.0f, 20.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(&bParam0, 3, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_199(&bParam0, 48);
			}
			if (VDIST(Local_127, Local_142) < 10.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				TASK_CLEAR(&bParam1);
				TASK_FLEE_ACTOR(&bParam1, &bParam0, 75.0f, -1.0f, 0, 0, 0);
				Function_199(&bParam0, 48);
			}
			if (Function_187(&bParam1))
			{
				TASK_SHOOT_FROM_POSITION(&bParam0, &bParam1, &Local_127);
				Function_199(&bParam0, 48);
			}
			break;
		
		case 0x00000030:
			if (VDIST(Local_130, Local_118) > 5.0f && !IS_ACTOR_IN_HOGTIE(&bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&bParam0, 28, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(&bLocal_497, &bParam0);
			TASK_CLEAR(&bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
			bLocal_48 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_FLEE_ACTOR(false, &bLocal_497, -1.0f, 1.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, &Global_54076);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bParam0, bLocal_48);
			TASK_SEQUENCE_RELEASE(bLocal_48, 1);
			Function_375(&iLocal_661);
			Function_199(&bParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_238(int iParam0, int iParam1) //Position: 0x103E8 / 66536
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		iLocal_83 = 0;
		Function_375(&iLocal_661);
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (IS_ACTOR_ALIVE(&iParam1))
			{
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
			}
		}
		Function_199(&iParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		iLocal_32++;
		if (VDIST(Local_118, Local_130) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 215, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_375(&iLocal_661);
		iLocal_83 = 0;
		DEREFERENCE_ACTOR(&iParam1);
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (IS_ACTOR_ALIVE(&iParam1))
			{
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
			}
		}
		Function_199(&iParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_HOGTIED(&iParam0) || UNK_0x7A207FFE(&iParam0)) || iLocal_91 != 1)
	{
		iLocal_32++;
		iLocal_31++;
		if (iLocal_91 == 0)
		{
			DECOR_SET_BOOL(&iParam0, "PlayerHogtied", 1);
			Function_146("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 213, &iParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(Local_118, Local_130) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(&Global_54076, 206, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (iLocal_91 == 1)
		{
			Function_146("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		}
		Function_196(50, 1, 0);
		if (IS_BLIP_VALID(&iLocal_547))
		{
			REMOVE_BLIP(&iLocal_547);
		}
		Function_195(&iParam0, 4294967291);
		Function_375(&iLocal_661);
		DEREFERENCE_ACTOR(&iParam1);
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (IS_ACTOR_ALIVE(&iParam1))
			{
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
			}
		}
		iLocal_83 = 0;
		return 0;
	}
	if (Function_355(&iLocal_669) <= 1,5f && iLocal_77 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
		iLocal_77 = 1;
	}
	if (((!Function_194(GET_WEAPON_IN_HAND(&iParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) != 0) && iLocal_99 != 0) && GET_TASK_STATUS(&iParam0, 5) != 1)
	{
		iLocal_99 = 1;
		TASK_MELEE_ATTACK(&iParam0, &Global_54076, -1.0f);
	}
	if (iLocal_99 != 1 && Function_194(GET_WEAPON_IN_HAND(&iParam0)))
	{
		TASK_CLEAR(&iParam0);
		TASK_KILL_CHAR(&iParam0, &Global_54076);
		iLocal_99 = 0;
	}
	bVar0 = Function_193(&iParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_199(&iParam0, 12);
			break;
		
		case 0x0000000C:
			iLocal_72 = 0;
			REFERENCE_ACTOR(&iParam0);
			TASK_CLEAR(&iParam0);
			TASK_PRIORITY_SET(&iParam0, false);
			SET_ACTOR_FACTION(&iParam0, 1);
			REFERENCE_ACTOR(&iParam1);
			TASK_CLEAR(&iParam1);
			TASK_PRIORITY_SET(&iParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&iParam1, &Global_54076);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(&iParam1, &iParam0);
			Function_375(&Local_653);
			Function_190(&iParam1);
			Function_195(&iParam1, 0);
			Function_190(&iParam0);
			Function_195(&iParam0, 0);
			Function_199(&iParam0, 13);
			break;
		
		case 0x0000000D:
			uLocal_148 = Vector(0,1f, 0.0f, 0.0f);
			if (iLocal_52 == 10)
			{
				iLocal_52 = 0;
			}
			else
			{
				iLocal_51 = 0;
			}
			if (IS_ACTOR_VALID(&iParam0))
			{
				GET_POSITION(&iParam0, &Local_127);
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				TASK_STAND_STILL(&iParam0, -1.0f, 0, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
			}
			if (IS_ACTOR_VALID(&iParam1))
			{
				GET_POSITION(&iParam1, &Local_142);
				RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
				SET_ACTOR_INVULNERABILITY(&iParam1, 1);
				SET_ALLOW_EXECUTE(&iParam1, 0);
				SET_ALLOW_COLD_WEATHER_BREATH(&iParam1, 0);
				SET_ACTOR_CAN_BE_TARGETED(&iParam1, false);
			}
			SET_LINKED_ANIM_TARGET(&iParam0, &iParam1);
			GET_ACTOR_OFFSET_WORLD_COORDS(&iParam0, &uLocal_148, &uLocal_151);
			FIND_GROUND_INTERSECTION(&uLocal_151, 1.0f, &uLocal_151, &uVar1);
			TELEPORT_ACTOR(&iParam1, &uLocal_151, 1, 1, 1);
			uLocal_581 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uLocal_539, "Corpse", "$/content/scripting/gringo/SimpleGringo/body_left_for_dead_gped_loot", Local_142, Vector(0.0f, 0.0f, 0.0f));
			Function_199(&iParam0, 14);
			break;
		
		case 0x0000000E:
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_581)))
			{
				TASK_CLEAR(&iParam0);
				TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_581), "Robber", 4294967295, 1);
				TASK_USE_GRINGO(&iParam1, GET_GRINGO_FROM_OBJECT(&uLocal_581), "UseCase1", 4294967295, 1);
				Function_199(&iParam0, 15);
			}
			else
			{
				LOG_ERROR("invalid corpse gringo");
			}
			if (IS_ACTOR_VALID(&iParam0))
			{
				GET_POSITION(&iParam0, &Local_127);
				Function_300(&iParam0, &iParam1);
			}
			else
			{
				LOG_ERROR("The corpse looter is not valid");
			}
			if (IS_ACTOR_VALID(&iParam1))
			{
				GET_POSITION(&iParam1, &Local_142);
				DECOR_SET_BOOL(&iParam1, "CanBeLasso", 0);
			}
			else
			{
				LOG_ERROR("The Corpse is not valid");
			}
			if ((VDIST(Local_118, Local_127) >= 20.0f && iLocal_72 != 0) && Function_265(&iParam0, 0,65f, 0x42960000, 1, 1, 0))
			{
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				Function_357("JOB_NIGHT_SubdueLooter", 7.0f, 1, 2, 0, 0, 0, 0);
				iLocal_72 = 1;
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&iParam0, 15);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &iParam0, &iParam1);
			break;
		
		case 0x0000000F:
			GET_POSITION(&iParam0, &Local_127);
			if (((VDIST(Local_118, Local_127) >= 25.0f && iLocal_72 != 0) && Function_265(&iParam0, 0,75f, 0x42960000, 1, 1, 0)) || GET_LAST_ATTACKER(&iParam0) != &Global_54076)
			{
				if (IS_BLIP_VALID(&iLocal_547) == 0)
				{
					iLocal_547 = ADD_BLIP_FOR_ACTOR(&bLocal_485, 322, 0, 2, 0);
					iLocal_70 = 1;
				}
				if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
				{
					TASK_KILL_CHAR(&bLocal_497, &iParam0);
					Function_199(&iParam0, 48);
				}
				Function_357("JOB_NIGHT_SubdueLooter", 7.0f, 1, 2, 0, 0, 0, 0);
				Function_375(&iLocal_661);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_199(&iParam0, 16);
			}
			return Function_188(StackVal, StackVal, Local_127, Local_653, &iParam0, &iParam1);
			break;
		
		case 0x00000010:
			if (GET_TASK_STATUS(&bLocal_497, 4294967295) != 0 && iLocal_98 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(&bLocal_497, &iParam0);
				iLocal_98 = 1;
			}
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				TASK_KILL_CHAR(&bLocal_497, &iParam0);
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
				Function_199(&iParam0, 48);
			}
			else if (((IS_PLAYER_TARGETTING_ACTOR(0, &iParam0, 1) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && iLocal_90 != 0) && VDIST(Local_118, Local_127) >= 15.0f)
			{
				Function_375(&iLocal_661);
				iLocal_90 = 1;
			}
			else if (((iLocal_90 != 1 && Function_355(&iLocal_661) < 2.0f) && IS_PLAYER_TARGETTING_ACTOR(0, &iParam0, 1)) || VDIST(Local_118, Local_127) >= 3.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &iParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&iParam0);
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				Function_375(&iLocal_661);
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
				Function_199(&iParam0, 17);
			}
			else if (Function_355(&iLocal_661) < 8.0f && Function_265(&iParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 214, &iParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&iParam0);
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
				MEMORY_IDENTIFY(&bLocal_497, &iParam0);
				TASK_CLEAR(&bLocal_497);
				TASK_KILL_CHAR(&bLocal_497, &iParam0);
				PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_GROWL_MASTER", 0);
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
				Function_199(&iParam0, 48);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 2.0f) && Function_186(GET_WEAPON_IN_HAND(&Global_54076))) && !(GET_LAST_ATTACKER(&iParam0) != &Global_54076 || GET_LAST_ATTACKER(&iParam1) != &Global_54076))
			{
				AI_QUICK_EXIT_GRINGO(&iParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
				TASK_CLEAR(&iParam0);
				TASK_FOLLOW_ACTOR(&bLocal_497, &Global_54076);
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 211, &iParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, 75.0f, -1.0f, 0, 0, 0);
				SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
				Function_375(&iLocal_661);
				SET_ACTOR_INVULNERABILITY(&iParam1, 0);
				KILL_ACTOR(&iParam1);
				Function_199(&iParam0, 17);
			}
			break;
		
		case 0x00000011:
			GET_POSITION(&iParam0, &Local_127);
			if (IS_ACTOR_ALIVE(&iParam0))
			{
				if (Function_355(&iLocal_661) < 10.0f && VDIST(Local_118, Local_127) <= 10.0f)
				{
					iLocal_91 = 1;
					Function_199(&iParam0, 49);
				}
				if ((GET_LAST_ATTACKER(&iParam0) != &Global_54076 || Function_187(&iParam0)) || Function_355(&iLocal_661) < 12.0f)
				{
					iLocal_91 = 0;
					Function_199(&iParam0, 48);
				}
			}
			break;
		
		case 0x00000030:
			if (VDIST(Local_130, Local_118) > 5.0f && !IS_ACTOR_IN_HOGTIE(&iParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 212, &bLocal_497, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(&bLocal_497, &iParam0);
			TASK_CLEAR(&iParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 28, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			bLocal_48 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, 3.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, &Global_54076);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iParam0, bLocal_48);
			TASK_SEQUENCE_RELEASE(bLocal_48, 1);
			Function_375(&iLocal_661);
			Function_199(&iParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_239(var uParam0, float fParam1) //Position: 0x10DF8 / 69112
{
	if (!Function_184(&iLocal_657))
	{
		Function_375(&iLocal_657);
		Function_146(&uParam0, fParam1, 1, 0, 2, 1, 0);
	}
	if (Function_180(&iLocal_657, (fParam1 * 2.0f)))
	{
	}
	return;
}

int Function_240(int iParam0) //Position: 0x10E28 / 69160
{
	bool bVar0;
	
	iParam0 = &iParam0;
	Local_160 = Local_172;
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	strcpy(&cLocal_102, "Rustler", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	bVar0 = RAND_INT_RANGE(0, 5);
	PRINTSTRING("SpawnedRustlerCowTheft - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	Local_160 = (Local_160 + 0,1f);
	iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, Function_43(), 1009, Local_160, Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_535, &iLocal_503);
	Local_160 = (Local_160 + 0,2f);
	if (bLocal_0 == 0)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	ADD_ACTORSET_MEMBER(&uLocal_531, &bLocal_485);
	DECOR_SET_BOOL(&bLocal_485, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_485, "bDisableCutFree", 1);
	_SET_ACTOR_HEALTH_3(&bLocal_485, 180.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_485, true);
	SET_ACTOR_MAX_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_485, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_485, 0, 0);
	uLocal_575 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "CrimeVol", 2,802597E-45f, Local_160, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	if (IS_VOLUME_VALID(&uLocal_575))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_575, 15);
	}
	if (!IS_ACTOR_VALID(&bLocal_485))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_503))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Victim.");
		return 0;
	}
	return 1;
}

int Function_241() //Position: 0x110B2 / 69810
{
	if (Function_243(iLocal_55, 1))
	{
		Function_242(&iLocal_55, 1);
		return 477;
	}
	if (Function_243(iLocal_55, 2))
	{
		Function_242(&iLocal_55, 2);
		return 478;
	}
	if (Function_243(iLocal_55, 4))
	{
		Function_242(&iLocal_55, 4);
		return 398;
	}
	if (Function_243(iLocal_55, 8))
	{
		Function_242(&iLocal_55, 8);
		return 399;
	}
	if (Function_243(iLocal_55, 16))
	{
		Function_242(&iLocal_55, 16);
		return 479;
	}
	if (Function_243(iLocal_55, 32))
	{
		Function_242(&iLocal_55, 32);
		return 397;
	}
	if (Function_243(iLocal_55, 64))
	{
		Function_242(&iLocal_55, 64);
		return 475;
	}
	if (Function_243(iLocal_55, 128))
	{
		Function_242(&iLocal_55, 128);
		return 476;
	}
	if (Function_243(iLocal_55, 256))
	{
		Function_242(&iLocal_55, 256);
		return 397;
	}
	if (Function_243(iLocal_55, 512))
	{
		Function_242(&iLocal_55, 512);
		return 398;
	}
	if (Function_243(iLocal_55, 1024))
	{
		Function_242(&iLocal_55, 1024);
		return 399;
	}
	if (Function_243(iLocal_55, 2048))
	{
		Function_242(&iLocal_55, 2048);
		return 474;
	}
	if (Function_243(iLocal_55, 4096))
	{
		Function_242(&iLocal_55, 4096);
		return 502;
	}
	if (Function_243(iLocal_55, 8192))
	{
		Function_242(&iLocal_55, 8192);
		return 410;
	}
	if (Function_243(iLocal_55, 16384))
	{
		Function_242(&iLocal_55, 16384);
		return 500;
	}
	if (Function_243(iLocal_55, 32768))
	{
		Function_242(&iLocal_55, 32768);
		return 501;
	}
	if (Function_243(iLocal_55, 65536))
	{
		Function_242(&iLocal_55, 65536);
		return 411;
	}
	if (Function_243(iLocal_55, 131072))
	{
		Function_242(&iLocal_55, 131072);
		return 499;
	}
	return 4294967295;
}

void Function_242(int iParam0, int iParam1) //Position: 0x11247 / 70215
{
	Function_31(&iParam0, iParam1);
	return;
}

bool Function_243(int iParam0, bool bParam1) //Position: 0x11255 / 70229
{
	return (iParam0 && bParam1) == 0;
}

int Function_244() //Position: 0x11262 / 70242
{
	if (Function_243(iLocal_55, 1))
	{
		Function_242(&iLocal_55, 1);
		return 479;
	}
	if (Function_243(iLocal_55, 2))
	{
		Function_242(&iLocal_55, 2);
		return 397;
	}
	if (Function_243(iLocal_55, 4))
	{
		Function_242(&iLocal_55, 4);
		return 398;
	}
	if (Function_243(iLocal_55, 8))
	{
		Function_242(&iLocal_55, 8);
		return 399;
	}
	if (Function_243(iLocal_55, 16))
	{
		Function_242(&iLocal_55, 16);
		return 477;
	}
	if (Function_243(iLocal_55, 32))
	{
		Function_242(&iLocal_55, 32);
		return 478;
	}
	if (Function_243(iLocal_55, 64))
	{
		Function_242(&iLocal_55, 64);
		return 399;
	}
	if (Function_243(iLocal_55, 128))
	{
		Function_242(&iLocal_55, 128);
		return 474;
	}
	if (Function_243(iLocal_55, 256))
	{
		Function_242(&iLocal_55, 256);
		return 475;
	}
	if (Function_243(iLocal_55, 512))
	{
		Function_242(&iLocal_55, 512);
		return 476;
	}
	if (Function_243(iLocal_55, 1024))
	{
		Function_242(&iLocal_55, 1024);
		return 397;
	}
	if (Function_243(iLocal_55, 2048))
	{
		Function_242(&iLocal_55, 2048);
		return 398;
	}
	if (Function_243(iLocal_55, 4096))
	{
		Function_242(&iLocal_55, 4096);
		return 411;
	}
	if (Function_243(iLocal_55, 8192))
	{
		Function_242(&iLocal_55, 8192);
		return 499;
	}
	if (Function_243(iLocal_55, 16384))
	{
		Function_242(&iLocal_55, 16384);
		return 500;
	}
	if (Function_243(iLocal_55, 32768))
	{
		Function_242(&iLocal_55, 32768);
		return 501;
	}
	if (Function_243(iLocal_55, 65536))
	{
		Function_242(&iLocal_55, 65536);
		return 502;
	}
	if (Function_243(iLocal_55, 131072))
	{
		Function_242(&iLocal_55, 131072);
		return 410;
	}
	return 4294967295;
}

int Function_245() //Position: 0x113F7 / 70647
{
	if (Function_243(iLocal_55, 1))
	{
		Function_242(&iLocal_55, 1);
		return 477;
	}
	if (Function_243(iLocal_55, 2))
	{
		Function_242(&iLocal_55, 2);
		return 478;
	}
	if (Function_243(iLocal_55, 4))
	{
		Function_242(&iLocal_55, 4);
		return 479;
	}
	if (Function_243(iLocal_55, 8))
	{
		Function_242(&iLocal_55, 8);
		return 397;
	}
	if (Function_243(iLocal_55, 16))
	{
		Function_242(&iLocal_55, 16);
		return 398;
	}
	if (Function_243(iLocal_55, 32))
	{
		Function_242(&iLocal_55, 32);
		return 399;
	}
	if (Function_243(iLocal_55, 64))
	{
		Function_242(&iLocal_55, 64);
		return 397;
	}
	if (Function_243(iLocal_55, 128))
	{
		Function_242(&iLocal_55, 128);
		return 398;
	}
	if (Function_243(iLocal_55, 256))
	{
		Function_242(&iLocal_55, 256);
		return 399;
	}
	if (Function_243(iLocal_55, 512))
	{
		Function_242(&iLocal_55, 512);
		return 474;
	}
	if (Function_243(iLocal_55, 1024))
	{
		Function_242(&iLocal_55, 1024);
		return 475;
	}
	if (Function_243(iLocal_55, 2048))
	{
		Function_242(&iLocal_55, 2048);
		return 476;
	}
	if (Function_243(iLocal_55, 4096))
	{
		Function_242(&iLocal_55, 4096);
		return 502;
	}
	if (Function_243(iLocal_55, 8192))
	{
		Function_242(&iLocal_55, 8192);
		return 410;
	}
	if (Function_243(iLocal_55, 16384))
	{
		Function_242(&iLocal_55, 16384);
		return 411;
	}
	if (Function_243(iLocal_55, 32768))
	{
		Function_242(&iLocal_55, 32768);
		return 499;
	}
	if (Function_243(iLocal_55, 65536))
	{
		Function_242(&iLocal_55, 65536);
		return 500;
	}
	if (Function_243(iLocal_55, 131072))
	{
		Function_242(&iLocal_55, 131072);
		return 501;
	}
	return 4294967295;
}

int Function_246(char* cParam0) //Position: 0x1158C / 71052
{
	cParam0 = &cParam0;
	Local_160 = Local_172;
	iLocal_529 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_539, "nwHarassSquad"));
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	strcpy(&cLocal_102, "Rustler", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	PRINTSTRING("spawning RustlerSquadHarass ");
	PRINTNL();
	if (bLocal_0 == 0)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_485, &uLocal_559, 4, false);
	ADD_ACTORSET_MEMBER(&uLocal_533, &bLocal_485);
	_SET_ACTOR_HEALTH_3(&bLocal_485, 180.0f);
	Function_190(&bLocal_485);
	Function_195(&bLocal_485, 0);
	DECOR_SET_BOOL(&bLocal_485, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_485, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_485, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_485, 0);
	strcpy(&cLocal_102, "nRustler_A", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (bLocal_0 == 0)
	{
		bLocal_487 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_487 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_487 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_487, &uLocal_559, 4, false);
	ADD_ACTORSET_MEMBER(&uLocal_533, &bLocal_487);
	_SET_ACTOR_HEALTH_3(&bLocal_487, 180.0f);
	Function_190(&bLocal_487);
	Function_195(&bLocal_487, 0);
	DECOR_SET_BOOL(&bLocal_487, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_487, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_487, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_487, 0);
	Local_160 = (Local_160 + 0,1f);
	strcpy(&cLocal_102, "nRustler_B", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (bLocal_0 == 0)
	{
		bLocal_489 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_489 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_489 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_485, &uLocal_559, 4, false);
	ADD_ACTORSET_MEMBER(&uLocal_533, &bLocal_489);
	_SET_ACTOR_HEALTH_3(&bLocal_489, 180.0f);
	Function_190(&bLocal_489);
	Function_195(&bLocal_489, 0);
	DECOR_SET_BOOL(&bLocal_489, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_489, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_489, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_489, 0);
	Local_160 = (Local_160 + 0,1f);
	strcpy(&cLocal_102, "nRustler_C", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (bLocal_0 == 0)
	{
		bLocal_491 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_491 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_491 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_485, &uLocal_559, 4, false);
	ADD_ACTORSET_MEMBER(&uLocal_533, &bLocal_491);
	_SET_ACTOR_HEALTH_3(&bLocal_491, 180.0f);
	Function_190(&bLocal_491);
	Function_195(&bLocal_491, 0);
	DECOR_SET_BOOL(&bLocal_491, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_491, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_491, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_491, 0);
	Local_160 = (Local_160 + 0,1f);
	strcpy(&cLocal_102, "Victim", 32);
	if (Global_43789 == Global_46914[0])
	{
		iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 76, Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (Global_43789 == Global_46866[0])
	{
		iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 253, Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	_SET_ACTOR_HEALTH_3(&iLocal_503, 180.0f);
	Function_190(&iLocal_503);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_503, 0);
	uLocal_575 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "CrimeVol", 2,802597E-45f, Local_160, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	if (IS_VOLUME_VALID(&uLocal_575))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_575, 15);
	}
	if (!IS_ACTOR_VALID(&bLocal_485))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_487))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerA.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_489))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerB.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_491))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerC.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_503))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create Victim.");
		return 0;
	}
	Function_247(&uLocal_533, &iLocal_529, 0);
	SQUAD_SET_FACTION(&iLocal_529, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_529, 526848);
	return 1;
}

void Function_247(var uParam0, var uParam1, bool bParam2) //Position: 0x11C20 / 72736
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		uVar2 = GET_OBJECT_FROM_SQUAD(&uParam1);
		if (IS_OBJECT_VALID(&uVar2))
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(&uParam0))
			{
				uVar1 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					SQUAD_JOIN(&uVar1, &uParam1);
					if (bParam2)
					{
						TASK_CLEAR(&uVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

int Function_248(int iParam0) //Position: 0x11C89 / 72841
{
	bool bVar0;
	
	iParam0 = &iParam0;
	Local_160 = Local_172;
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	strcpy(&cLocal_102, "Rustler", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	bVar0 = RAND_INT_RANGE(0, 5);
	PRINTSTRING("SpawnedRustlerHorseTheft - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	uLocal_507 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, Function_43(), bLocal_30, Local_160, Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&uLocal_537, &uLocal_507);
	ACCESSORIZE_HORSE(&uLocal_507, false);
	Local_160 = (Local_160 + 0,2f);
	iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, Function_43(), iLocal_16[bVar0], Local_160, Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_535, &iLocal_503);
	_SET_ACTOR_HEALTH_3(&iLocal_503, 180.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_503, 0);
	Local_160 = (Local_160 + 0,2f);
	if (bLocal_0 == 0)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	ADD_ACTORSET_MEMBER(&uLocal_531, &bLocal_485);
	DECOR_SET_BOOL(&bLocal_485, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_485, "bDisableCutFree", 1);
	_SET_ACTOR_HEALTH_3(&bLocal_485, 180.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_485, true);
	SET_ACTOR_MAX_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_485, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_485, 0, 0);
	uLocal_575 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "CrimeVol", 2,802597E-45f, Local_160, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	if (IS_VOLUME_VALID(&uLocal_575))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_575, 15);
	}
	if (!IS_ACTOR_VALID(&bLocal_485))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_503))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Victim.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&uLocal_507))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Horse.");
		return 0;
	}
	return 1;
}

int Function_249(int iParam0) //Position: 0x11F9F / 73631
{
	iParam0 = &iParam0;
	Local_160 = Local_172;
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("nwCoyote") };
	cLocal_505 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 1049, Local_160, Vector(0.0f, 0.0f, 0.0f));
	ANIMAL_TUNING_SET_ATTRIB_FLOAT(&cLocal_505, 46, 2.0f);
	ANIMAL_TUNING_SET_ATTRIB_FLOAT(&cLocal_505, 47, 2.0f);
	Local_160 = (Local_160 + 0,1f);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("Chicken") };
	cLocal_509 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, 1016, Local_160, Vector(0.0f, 0.0f, 0.0f));
	Local_160 = (Local_160 + 0,1f);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("Chicken") };
	cLocal_511 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, 1016, Local_160, Vector(0.0f, 0.0f, 0.0f));
	Local_160 = (Local_160 + 0,1f);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("Chicken") };
	Local_160 = (Local_160 + 0,1f);
	cLocal_513 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, 1016, Local_160, Vector(0.0f, 0.0f, 0.0f));
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("Chicken") };
	Local_160 = (Local_160 + 0,1f);
	cLocal_515 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, 1016, Local_160, Vector(0.0f, 0.0f, 0.0f));
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224("Chicken") };
	Local_160 = (Local_160 + 0,1f);
	uLocal_517 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, 1016, Local_160, Vector(0.0f, 0.0f, 0.0f));
	iLocal_525 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_539, "nwChickens"));
	SQUAD_JOIN(&cLocal_509, &iLocal_525);
	SQUAD_JOIN(&cLocal_511, &iLocal_525);
	SQUAD_JOIN(&cLocal_515, &iLocal_525);
	SQUAD_JOIN(&uLocal_517, &iLocal_525);
	PRINTSTRING("aCoyote is being spawned at : ");
	PRINTVECTOR(Local_160);
	PRINTNL();
	if (!IS_ACTOR_VALID(&cLocal_505))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create aCoyote.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&cLocal_509))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken1.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&cLocal_511))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken2.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&cLocal_513))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken3.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&cLocal_515))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken4.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&uLocal_517))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken5.");
		return 0;
	}
	return 1;
}

int Function_250(int iParam0) //Position: 0x12316 / 74518
{
	bool bVar0;
	
	iParam0 = &iParam0;
	Local_160 = Local_172;
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	strcpy(&cLocal_102, "Rustler", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	bVar0 = RAND_INT_RANGE(0, 5);
	PRINTSTRING("SpawnedRustlerSquadAttack - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	if (bLocal_0 == 0)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_245(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 1)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_244(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	else if (bLocal_0 == 2)
	{
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &cLocal_102, Function_241(), Local_160, Vector(0.0f, 0.0f, 0.0f));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_485, &uLocal_559, 4, false);
	ADD_ACTORSET_MEMBER(&uLocal_531, &bLocal_485);
	_SET_ACTOR_HEALTH_3(&bLocal_485, 180.0f);
	DECOR_SET_BOOL(&bLocal_485, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_485, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_485, true);
	SET_ACTOR_MAX_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_485, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_485, 0, 0);
	Local_160 = (Local_160 + 0,1f);
	iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, Function_43(), iLocal_16[bVar0], Local_160, Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&uLocal_531, &iLocal_503);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iLocal_503, true);
	_SET_ACTOR_HEALTH_3(&iLocal_503, 180.0f);
	SET_ACTOR_MAX_HEALTH(&iLocal_503, 32.0f);
	SET_ACTOR_HEALTH(&iLocal_503, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_503, 0);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_503, 0, 0);
	uLocal_575 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "CrimeVol", 2,802597E-45f, Local_160, Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
	if (IS_VOLUME_VALID(&uLocal_575))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_575, 15);
	}
	if (!IS_ACTOR_VALID(&bLocal_485))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_503))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Victim.");
		return 0;
	}
	bLocal_527 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_539, "nwFightSquad"));
	Function_247(&uLocal_531, &bLocal_527, 0);
	return 1;
}

int Function_251(int iParam0) //Position: 0x12607 / 75271
{
	bool bVar0;
	
	iParam0 = &iParam0;
	Local_160 = Local_172;
	if (Function_63(StackVal, Local_160))
	{
		return 0;
	}
	strcpy(&cLocal_102, "Rustler", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	bVar0 = RAND_INT_RANGE(0, 5);
	PRINTSTRING("SpawnedRustlerAttack - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	if (bLocal_0 == 0)
	{
		Function_228(&iLocal_579);
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &cLocal_102, Function_245(), Local_160, Function_228(&iLocal_579));
	}
	else if (bLocal_0 == 1)
	{
		Function_228(&iLocal_579);
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &cLocal_102, Function_244(), Local_160, Function_228(&iLocal_579));
	}
	else if (bLocal_0 == 2)
	{
		Function_228(&iLocal_579);
		bLocal_485 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &cLocal_102, Function_241(), Local_160, Function_228(&iLocal_579));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_485, &uLocal_559, 4, false);
	_SET_ACTOR_HEALTH_3(&bLocal_485, 180.0f);
	ADD_ACTORSET_MEMBER(&uLocal_531, &bLocal_485);
	DECOR_SET_BOOL(&bLocal_485, "MinigameAttack", 1);
	DECOR_SET_BOOL(&bLocal_485, "bDisableCutFree", 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_485, true);
	SET_ACTOR_MAX_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_HEALTH(&bLocal_485, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_485, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_485, 0, 0);
	if (iLocal_49 == 4)
	{
		Local_160 = (Local_160 + 1.0f);
	}
	else
	{
		Local_160 = (Local_160 + 0,1f);
	}
	iLocal_503 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, Function_43(), iLocal_16[bVar0], Local_160, Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_535, &iLocal_503);
	_SET_ACTOR_HEALTH_3(&iLocal_503, 180.0f);
	SET_ACTOR_MAX_HEALTH(&iLocal_503, 32.0f);
	SET_ACTOR_HEALTH(&iLocal_503, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_503, 0);
	uLocal_575 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "CrimeVol", 2,802597E-45f, Local_160, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	if (IS_VOLUME_VALID(&uLocal_575))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_483, &uLocal_575))
		{
			TASK_FLEE_ACTOR(&iLocal_483, &bLocal_485, 50.0f, 50.0f, 0, 0, 0);
		}
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_575);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_575, 15);
	}
	if (!IS_ACTOR_VALID(&bLocal_485))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_503))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Victim.");
		return 0;
	}
	return 1;
}

bool Function_252(struct<2>[] Param0) //Position: 0x128F7 / 76023
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_257();
	iVar1 = 0;
	if (!Function_14(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_256(&(Param0[iVar02]), 8);
		}
		else if (Function_255())
		{
			iVar1 = 1;
			Function_256(&(Param0[iVar02]), 8);
		}
		Function_256(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_14(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_14(&(Param0[02]), 8) || iVar1));
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
				Function_256(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_256(&(Param0[iVar02]), 2);
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
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_256(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_256(&(Param0[iVar02]), 2);
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
	Function_253();
	return 1;
}

void Function_253() //Position: 0x12CB9 / 76985
{
	if (!Function_254(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_254(int iParam0) //Position: 0x12CF9 / 77049
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_255() //Position: 0x12D15 / 77077
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

void Function_256(struct<13> Param0) //Position: 0x12D43 / 77123
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_257() //Position: 0x12D56 / 77142
{
	if (!Function_254(128))
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

bool Function_258(int iParam0) //Position: 0x12D98 / 77208
{
	switch (iLocal_833)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			Function_259(&iParam0);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void Function_259(var uParam0) //Position: 0x12DC4 / 77252
{
	var uVar0;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Local_118);
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		GET_POSITION(&bLocal_497, &uVar0);
	}
	if (IS_ACTOR_VALID(&bLocal_485))
	{
		GET_POSITION(&bLocal_485, &Local_127);
	}
	if (!iLocal_67)
	{
		if (!Function_184(&iLocal_649))
		{
			Function_375(&iLocal_649);
		}
		if (iLocal_83 == 0)
		{
			Function_260();
			Local_172 = Function_260();
			iLocal_83 = 1;
			uParam0 = 11;
		}
	}
	return;
}

struct<8> Function_260() //Position: 0x12E24 / 77348
{
	while ((iLocal_50 != iLocal_51 || iLocal_50 != iLocal_52) || iLocal_50 != 4294967295)
	{
		iLocal_579 = Function_262(StackVal, &uLocal_595, Local_118, 45.0f, 95.0f);
		if (IS_OBJECT_VALID(&iLocal_579))
		{
			if (DECOR_GET_INT(&iLocal_579, "FlagType") == 0)
			{
				iLocal_49 = 0;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 1)
			{
				iLocal_49 = 1;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 2)
			{
				iLocal_49 = 2;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 3)
			{
				iLocal_49 = 3;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 4)
			{
				iLocal_49 = 4;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 5)
			{
				iLocal_49 = 5;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 6)
			{
				iLocal_49 = 6;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 7)
			{
				iLocal_49 = 7;
			}
			else if (DECOR_GET_INT(&iLocal_579, "FlagType") == 8)
			{
				iLocal_49 = 8;
			}
		}
		iLocal_50 = iLocal_49;
	}
	GET_OBJECT_POSITION(&iLocal_579, &Local_145);
	PRINTSTRING("Nightwatch scanner found a point at: ");
	PRINTVECTOR(Local_145);
	PRINTNL();
	if (!Function_63(StackVal, Local_145))
	{
		Function_100();
		iLocal_67 = 1;
		Function_375(&iLocal_665);
		bLocal_68 = Function_261(StackVal, Local_145);
	}
	else
	{
		LOG_ERROR("FAILED TO GET A VALID BLIP POSITION");
	}
	return StackVal, Local_145;
}

int Function_261(struct<2> Param0) //Position: 0x12FF0 / 77808
{
	Param0 = Param0;
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	switch (iLocal_833)
	{
		case 0x00000000:
			iLocal_832 = 3;
			break;
		
		case 0x00000001:
			iLocal_832 = 4;
			break;
		
		default:
			break;
	}
	return 1;
}

var Function_262(var uParam0, struct<2> Param1, float fParam3, float fParam4) //Position: 0x1302C / 77868
{
	var uVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	struct<2> Var5;
	bool bVar7;
	
	uVar2 = CREATE_LAYOUT(Function_43());
	if (!IS_LAYOUTREF_VALID(&uVar2))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(&uParam0) < 0)
	{
		return "";
	}
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), &uVar2, 4294967295, 0);
	if (!IS_OBJECTSET_VALID(&uVar3))
	{
		DESTROY_OBJECTSET(&uVar3);
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, &uParam0);
		GET_OBJECT_POSITION(&uVar0, &Var5);
		bVar4 = VDIST(Param1, Var5);
		PRINTSTRING("*_*currentDistance: ");
		PRINTFLOAT(bVar4);
		PRINTNL();
		if (bVar4 < fParam3 && bVar4 > fParam4)
		{
			ADD_OBJECT_TO_OBJECTSET(&uVar0, &uVar3);
			PRINTSTRING("*_*Within range, so volume object added");
			PRINTNL();
		}
		bVar7++;
	}
	PRINTSTRING("*_*Finished culling objects");
	PRINTNL();
	fVar1 = Function_271(&uVar3);
	DESTROY_OBJECTSET(&uVar3);
	DESTROY_LAYOUT(&uVar2);
	return &fVar1;
}

var Function_263(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x13160 / 78176
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &bParam11, 0, &uParam12, &bParam15);
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

bool Function_264(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1324B / 78411
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_265(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1326C / 78444
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

struct<8> Function_266() //Position: 0x1328C / 78476
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	while (!bVar1)
	{
		bVar0 = RAND_INT_RANGE(0, (iLocal_33 - 1));
		if (!Function_267(bVar0))
		{
			bLocal_34[iLocal_44] = bVar0;
			iLocal_44++;
			iLocal_45++;
			if (iLocal_44 >= 3)
			{
				iLocal_44 = 0;
			}
			bVar1 = true;
		}
	}
	PRINTSTRING("JobNightwatch_GetPatrolPos: Patrol position found: ");
	PRINTVECTOR(Local_175[bVar02]);
	PRINTNL();
	return StackVal, Local_175[bVar02];
}

bool Function_267(int iParam0) //Position: 0x13329 / 78633
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iParam0 == bLocal_34[iVar0])
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_268() //Position: 0x13357 / 78679
{
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		GET_POSITION(&bLocal_497, &Local_130);
	}
	if (bLocal_71)
	{
		if (Function_69(StackVal, StackVal, Local_118, Local_130) > 10.0f)
		{
			if (iLocal_70)
			{
				iLocal_78 = 0;
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 5,5f);
				Function_269(StackVal, Local_145, 3);
			}
			else
			{
				iLocal_78 = 0;
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_497);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 1);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_497, 2.0f);
				Function_269(StackVal, Local_145, 2);
			}
		}
	}
	else if (Function_69(StackVal, StackVal, Local_118, Local_130) < 20.0f)
	{
		if (iLocal_78 == 0)
		{
			PLAY_SOUND_FROM_ACTOR(&bLocal_497, "DOG_BARK_NOW_MASTER", 0);
			iLocal_78 = 1;
		}
		Function_183();
		if (!HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_357("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0, 0);
		}
	}
	return;
}

void Function_269(var uParam0, var uParam1, int iParam2) //Position: 0x13442 / 78914
{
	TASK_CLEAR(&bLocal_497);
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_497, 1);
	TASK_GO_TO_COORD_NONSTOP(&bLocal_497, &uParam0, iParam2, 1.0f);
	TASK_PRIORITY_SET(&bLocal_497, true);
	if (Function_270(&iLocal_649))
	{
		Function_359(&iLocal_649);
	}
	bLocal_71 = false;
	return;
}

bool Function_270(int iParam0) //Position: 0x1347D / 78973
{
	return Function_9(iParam0, 2);
}

float Function_271(var uParam0) //Position: 0x1348B / 78987
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	uVar0 = "";
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(&uParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return &uVar0;
}

void Function_272() //Position: 0x134F7 / 79095
{
	iLocal_843 = 0;
	return;
}

bool Function_273() //Position: 0x13501 / 79105
{
	if (Function_275() == 1)
	{
		DELETE_PROJECTILES_IN_VOLUME(&uLocal_565);
		if (IS_ACTOR_VALID(&uLocal_523))
		{
			DESTROY_ACTOR(&uLocal_523);
		}
	}
	else
	{
		return 0;
	}
	Function_274(1);
	return 1;
}

void Function_274(int iParam0) //Position: 0x13530 / 79152
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_103())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

int Function_275() //Position: 0x13569 / 79209
{
	if (!Function_252(&iLocal_677))
	{
		return 0;
	}
	return 1;
}

void Function_276() //Position: 0x1357C / 79228
{
	Function_279(&iLocal_677, 87, 3, 0);
	if (Global_43789 == Global_46816[0])
	{
		Function_279(&iLocal_677, 54, 3, 0);
		Function_279(&iLocal_677, 1049, 3, 0);
		Function_279(&iLocal_677, 1016, 3, 0);
		Function_279(&iLocal_677, 1009, 3, 0);
		Function_279(&iLocal_677, 397, 2, 0);
		Function_279(&iLocal_677, 398, 2, 0);
		Function_279(&iLocal_677, 399, 2, 0);
		Function_279(&iLocal_677, 477, 2, 0);
		Function_279(&iLocal_677, 478, 2, 0);
		Function_279(&iLocal_677, 479, 2, 0);
		Function_277(&iLocal_677, "$/content/scripting/gringo/simplegringo/pull_cow", 1, 0);
	}
	if (Global_43789 == Global_46914[0])
	{
		Function_279(&iLocal_677, 76, 3, 0);
		Function_279(&iLocal_677, 474, 2, 0);
		Function_279(&iLocal_677, 475, 2, 0);
		Function_279(&iLocal_677, 476, 2, 0);
		Function_279(&iLocal_677, 397, 2, 0);
		Function_279(&iLocal_677, 398, 2, 0);
		Function_279(&iLocal_677, 399, 2, 0);
		Function_277(&iLocal_677, "stand_yelling", 5, 0);
		Function_277(&iLocal_677, "custom/stand_yelling", 8, 0);
		Function_277(&iLocal_677, "stolen_pleading", 5, 0);
		Function_277(&iLocal_677, "custom/stolen_pleading", 8, 0);
		Function_277(&iLocal_677, "$/content/scripting/gringo/simplegringo/smoking_stand_loose", 1, 0);
	}
	if (Global_43789 == Global_46866[0])
	{
		Function_279(&iLocal_677, 253, 3, 0);
		Function_279(&iLocal_677, 502, 2, 0);
		Function_279(&iLocal_677, 410, 2, 0);
		Function_279(&iLocal_677, 411, 2, 0);
		Function_279(&iLocal_677, 499, 2, 0);
		Function_279(&iLocal_677, 500, 2, 0);
		Function_279(&iLocal_677, 501, 2, 0);
		Function_277(&iLocal_677, "$/content/scripting/gringo/simplegringo/bandito_harass", 1, 0);
		Function_277(&iLocal_677, "stand_yelling", 5, 0);
		Function_277(&iLocal_677, "custom/stand_yelling", 8, 0);
		Function_277(&iLocal_677, "stolen_pleading", 5, 0);
		Function_277(&iLocal_677, "custom/stolen_pleading", 8, 0);
	}
	Function_277(&iLocal_677, "stand_ambient", 5, 0);
	Function_277(&iLocal_677, "custom/stand_ambient", 8, 0);
	Function_277(&iLocal_677, "stand_surrender", 5, 0);
	Function_277(&iLocal_677, "custom/stand_surrender", 8, 0);
	Function_277(&iLocal_677, "body_left_for_dead_gped_loot", 5, 0);
	Function_277(&iLocal_677, "custom/body_left_for_dead_gped_loot", 8, 0);
	Function_277(&iLocal_677, "$/content/scripting/gringo/SimpleGringo/body_left_for_dead_gped_loot", 1, 0);
	Function_277(&iLocal_677, "handoff", 5, 0);
	Function_277(&iLocal_677, "custom/handoff", 8, 0);
	Function_277(&iLocal_677, "pointing", 5, 0);
	Function_277(&iLocal_677, "custom/pointing", 8, 0);
	Function_277(&iLocal_677, "look_in_window", 5, 0);
	Function_277(&iLocal_677, "custom/look_in_window", 8, 0);
	return;
}

var Function_277(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x13A3D / 80445
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_278(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_256(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_278(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x13A7B / 80507
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_14(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_256(&(Param0[iVar02]), 4);
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

var Function_279(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x13B4A / 80714
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_14(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_256(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_256(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_280(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x13C26 / 80934
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_chu_intro", 2, 1);
	}
	Function_281(&uVar0);
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

void Function_281(int iParam0) //Position: 0x13CB4 / 81076
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_283(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_282(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 4.0f, 1);
	return;
}

void Function_282(int iParam0) //Position: 0x13CFE / 81150
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,7196f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2729,017f, 33,36131f, 4251,337f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,033152f, 1,254023f, 0,001078f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_283(int iParam0) //Position: 0x13D77 / 81271
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,7196f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2729,305f, 34,64253f, 4251,197f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,357295f, 1,484761f, 0,00115f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_284(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x13DF0 / 81392
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_blk_intro", 3, 1);
	}
	Function_285(&uVar0);
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

void Function_285(int iParam0) //Position: 0x13E7E / 81534
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_288(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_287(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_286(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_286(int iParam0) //Position: 0x13ED8 / 81624
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(688,1966f, 79,57518f, 1363,217f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,07177f, 1,87541f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_287(int iParam0) //Position: 0x13F4D / 81741
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,61139f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(681,9458f, 79,82878f, 1365,838f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,039237f, 0,804415f, -0,001725f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_288(var uParam0) //Position: 0x13FC6 / 81862
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 53,61139f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(683,1879f, 79,90371f, 1364,341f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,031627f, 0,37632f, -0,001724f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_289() //Position: 0x14042 / 81986
{
	uLocal_609 = Function_290("hennigansRanch", "stable02", 3);
	uLocal_611 = Function_290("hennigansRanch", "stable02", 5);
	uLocal_613 = Function_290("hennigansRanch", "stable02", 11);
	uLocal_615 = Function_290("hennigansRanch", "stable02", 8);
	uLocal_617 = Function_290("hennigansRanch", "stable02", 7);
	if (IS_DOOR_VALID(&uLocal_609))
	{
		ADD_OBJECT_TO_OBJECTSET(&uLocal_609, &uLocal_599);
	}
	else
	{
		LOG_ERROR("dDoor1 is not valid");
	}
	if (IS_DOOR_VALID(&uLocal_611))
	{
		ADD_OBJECT_TO_OBJECTSET(&uLocal_611, &uLocal_599);
	}
	else
	{
		LOG_ERROR("dDoor2) is not valid");
	}
	if (IS_DOOR_VALID(&uLocal_613))
	{
		ADD_OBJECT_TO_OBJECTSET(&uLocal_613, &uLocal_599);
	}
	else
	{
		LOG_ERROR("dDoor3) is not valid");
	}
	if (IS_DOOR_VALID(&uLocal_615))
	{
		ADD_OBJECT_TO_OBJECTSET(&uLocal_615, &uLocal_599);
	}
	else
	{
		LOG_ERROR("dDoor4) is not valid");
	}
	if (IS_DOOR_VALID(&uLocal_617))
	{
		ADD_OBJECT_TO_OBJECTSET(&uLocal_617, &uLocal_599);
	}
	else
	{
		LOG_ERROR("dDoor5) is not valid");
	}
	return;
}

int Function_290(var uParam0, var uParam1, int iParam2) //Position: 0x141FC / 82428
{
	return Function_291(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_291(int iParam0, char* cParam1, bool bParam3) //Position: 0x14210 / 82448
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_73(iParam0))
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

var Function_292(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x142B5 / 82613
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_43(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nightwatch_hen_intro", 2, 1);
	}
	Function_293(&uVar0);
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

void Function_293(int iParam0) //Position: 0x14343 / 82755
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_295(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_294(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 10.0f, 1, 1);
	return;
}

void Function_294(int iParam0) //Position: 0x14391 / 82833
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,85058f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-821,0756f, 94,41666f, 2417,594f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,016686f, 2,992479f, -0,003264f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_295(float fParam0) //Position: 0x1440A / 82954
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 40,85058f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-821,364f, 95,734f, 2418,143f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,263473f, 3,036014f, -0,003381f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x14483 / 83075
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
	Function_98();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_39();
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
				Function_299(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_43(), 2,802597E-45f, Function_299(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_77(19, 1, 0, 0);
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
	if (iParam10 && !Function_18())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_298()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_298()));
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
	if (Function_254(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_297(0x4000000);
	}
	if (Function_254(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_297(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_297(int iParam0) //Position: 0x14735 / 83765
{
	int iVar0;
	
	if (Function_9(iParam0, 1) && Function_9(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_298() //Position: 0x14769 / 83817
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

struct<8> Function_299(int iParam0) //Position: 0x147F7 / 83959
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_300(bool bParam0, bool bParam1) //Position: 0x14809 / 83977
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&bParam1), &Var0);
	Function_301(StackVal, &bParam0, Var0);
	return;
}

void Function_301(var uParam0, struct<2> Param1) //Position: 0x14825 / 84005
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_302(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_302(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_302(var uParam0, struct<2> Param1) //Position: 0x14860 / 84064
{
	struct<2> Var0;
	
	Function_299(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_299(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_303(var uParam0, bool bParam1) //Position: 0x148E1 / 84193
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
	else if (!&bParam1 || Function_176(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_304() //Position: 0x1494B / 84299
{
	var uVar0;
	int iVar1;
	
	strcpy(&cLocal_102, "nnwForeman", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (Global_43789 == Global_46866[0])
	{
		iLocal_483 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_539, &cLocal_102, 460, Vector(-2748,45f, 32,61f, 4250,71f), Vector(0.0f, 0.0f, 0.0f));
	}
	else if (Global_43789 == Global_46816[0])
	{
		iLocal_483 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_539, &cLocal_102, 436, Vector(-832,14f, 93,36f, 2435,72f), Vector(0.0f, 0.0f, 0.0f));
	}
	else if (Global_43789 == Global_46914[0])
	{
		iLocal_483 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 185, Local_124, Vector(0.0f, 0.0f, 0.0f));
		uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_539, "nwvolEndguy", 2,802597E-45f, Vector(686,35f, 78,3f, 1370,36f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 10.0f));
		uLocal_589 = CREATE_GRINGO_IN_LAYOUT(&uLocal_539, "nwEndGringo", "smoking_stand_loose", Local_469, Local_472);
	}
	if (!IS_ACTOR_VALID(&iLocal_483))
	{
		LOG_ERROR("NIGHTWATCH: Invalid actor nightwatchEndguy.");
	}
	Function_320(StackVal, Local_130);
	TASK_PRIORITY_SET(&iLocal_483, true);
	SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_483, &uVar0, 4, false);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,5f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_497, 0,01f);
	strcpy(&cLocal_102, "nnwProctor", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (&Global_46715 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		iLocal_493 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, &cLocal_102, 35, Local_436, Local_439);
	}
	else if (&Global_46715 == FIND_NAMED_LAYOUT("Blackwater_layout"))
	{
		iLocal_493 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, &cLocal_102, 184, Local_436, Local_439);
	}
	else if (&Global_46715 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		iLocal_493 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 396, Local_436, Vector(0.0f, 247,615f, 0.0f));
	}
	SET_ACTOR_FACTION(&iLocal_493, 23);
	DECOR_SET_BOOL(&iLocal_493, "CanBeLasso", 0);
	strcpy(&cLocal_102, "nwProctorHorse", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	iLocal_495 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_539, &cLocal_102, 976, Local_163, Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_495, 23);
	DECOR_SET_BOOL(&iLocal_495, "CanBeLasso", 0);
	SET_ALLOW_RIDE_BY_PLAYER(&iLocal_495, 0);
	Function_300(&iLocal_493, &iLocal_481);
	Function_300(&iLocal_495, &iLocal_481);
	TASK_STAND_STILL(&iLocal_493, -1.0f, 0, 0);
	TASK_STAND_STILL(&iLocal_495, -1.0f, 0, 0);
	uLocal_531 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_539, "actsetRustlers", 0);
	uLocal_533 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_539, "actsetHarass", 0);
	iLocal_535 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_539, "actsetVictims", 0);
	uLocal_537 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_539, "actsetHorses", 0);
	iVar1 = 0;
	Function_318();
	if (Function_317(2))
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			iLocal_16[iVar1] = Function_306(2, 1, 2, 4294967295, 1);
			Function_279(&iLocal_677, iLocal_16[iVar1], 2, 0);
			PRINTSTRING("STREAMING: VICTIM ACTOR ENUM: ");
			PRINTINT(iLocal_16[iVar1]);
			PRINTNL();
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			iLocal_16[iVar1] = 87;
			Function_279(&iLocal_677, iLocal_16[iVar1], 2, 0);
			iVar1++;
		}
	}
	if (Function_317(64))
	{
		bLocal_30 = Function_305(983, 991, 1000, 4294967295, 4294967295);
		Function_279(&iLocal_677, bLocal_30, 2, 0);
	}
	else
	{
		bLocal_30 = 983;
		Function_279(&iLocal_677, bLocal_30, 2, 0);
	}
	return;
}

var Function_305(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14D86 / 85382
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == &iParam2 && bVar43 == &iParam3) && bVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(0, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

var Function_306(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14EA1 / 85665
{
	return Function_307(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_307(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x14EBE / 85694
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_310(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_310(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_310(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_310(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_310(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_310(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_310(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_310(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_310(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_310(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_310(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_310(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_310(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_310(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_308(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_308(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x15121 / 86305
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_309(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_309(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_309(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_309(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_309(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_309(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_309(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_309(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_309(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_309(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_309(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_309(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_309(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_309(&(Global_46972[13]), &bVar0);
	}
	return Function_310(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_309(var uParam0, bool bParam1) //Position: 0x15290 / 86672
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

var Function_310(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x15354 / 86868
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_316();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_315(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_314(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_314(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_313(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_315(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_313(bVar0))
				{
					Function_312();
				}
				Function_311(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_315(bVar1))
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

void Function_311(int iParam0) //Position: 0x1564D / 87629
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

void Function_312() //Position: 0x15701 / 87809
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

bool Function_313(bool bParam0) //Position: 0x1573C / 87868
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

void Function_314(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x15769 / 87913
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

bool Function_315(bool bParam0) //Position: 0x158C4 / 88260
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_316() //Position: 0x158DB / 88283
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_312();
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
	Function_312();
	return;
}

bool Function_317(bool bParam0) //Position: 0x15927 / 88359
{
	bool bVar0;
	
	switch (bParam0)
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

void Function_318() //Position: 0x15AA7 / 88743
{
	if (Global_43789 == Global_46816[0])
	{
		Function_319(&iLocal_55, 1);
		Function_319(&iLocal_55, 2);
		Function_319(&iLocal_55, 4);
		Function_319(&iLocal_55, 8);
		Function_319(&iLocal_55, 16);
		Function_319(&iLocal_55, 32);
	}
	else if (Global_43789 == Global_46914[0])
	{
		Function_319(&iLocal_55, 64);
		Function_319(&iLocal_55, 128);
		Function_319(&iLocal_55, 256);
		Function_319(&iLocal_55, 512);
		Function_319(&iLocal_55, 1024);
		Function_319(&iLocal_55, 2048);
	}
	else if (Global_43789 == Global_46866[0])
	{
		Function_319(&iLocal_55, 4096);
		Function_319(&iLocal_55, 8192);
		Function_319(&iLocal_55, 16384);
		Function_319(&iLocal_55, 32768);
		Function_319(&iLocal_55, 65536);
		Function_319(&iLocal_55, 131072);
	}
	return;
}

void Function_319(int iParam0, int iParam1) //Position: 0x15B5F / 88927
{
	Function_66(&iParam0, iParam1);
	return;
}

int Function_320(struct<2> Param0) //Position: 0x15B6D / 88941
{
	strcpy(&cLocal_102, "nwWatchDog", 32);
	cLocal_102 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_224(&cLocal_102) };
	if (!IS_ACTOR_VALID(&bLocal_497) && Global_43789 != Global_46816[0])
	{
		bLocal_497 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, &cLocal_102, 1037, Param0, Local_133);
	}
	else if (!IS_ACTOR_VALID(&bLocal_497) && Global_43789 != Global_46866[0])
	{
		bLocal_497 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, &cLocal_102, 1033, Param0, Local_133);
	}
	else if (!IS_ACTOR_VALID(&bLocal_497) && Global_43789 != Global_46914[0])
	{
		bLocal_497 = CREATE_ACTOR_IN_LAYOUT(&uLocal_539, &cLocal_102, 1045, Param0, Local_133);
	}
	else
	{
		LOG_ERROR("FAILED TO CREATE NIGHTWATCH DOG");
	}
	if (IS_ACTOR_VALID(&bLocal_497))
	{
		uLocal_545 = ADD_BLIP_FOR_ACTOR(&bLocal_497, 325, 0, 2, 0);
		SET_ACTOR_FACTION(&bLocal_497, 20);
		SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_497, &uLocal_559, 1, 3);
		SET_ACTOR_CAN_BE_TARGETED(&bLocal_497, false);
		AI_IGNORE_ACTOR(&bLocal_497);
		DECOR_SET_BOOL(&bLocal_497, "CanBeLasso", 0);
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_497, 3212836864, 3212836864, 4, 1, 0);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_497, 46, 2.0f);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_497, 47, 2.0f);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_497, 0, 50.0f);
		ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_497, 5, 0);
		SET_ACTOR_USE_COARSE_BOUNDS(&bLocal_497, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_497, 0);
		SET_ACTOR_MAX_HEALTH(&bLocal_497, 40.0f);
		Function_94(&bLocal_497);
		SET_CRIPPLE_ENABLE(&bLocal_497, 0);
		DECOR_SET_BOOL(&bLocal_497, "NoBleedOut", 1);
		uLocal_559 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_nightwatchVol");
		if (IS_VOLUME_VALID(&uLocal_559))
		{
		}
		return 1;
	}
	return 0;
}

void Function_321(int iParam0) //Position: 0x15D4E / 89422
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar1 = 0;
	bVar2 = false;
	iVar5 = 31;
	uVar7 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&iParam0, "nwFlagGroupSet"));
	if (Global_43789 == Global_46914[0])
	{
		bVar2 = false;
		while (bVar2 <= GET_OBJECTSET_SIZE(&uVar7))
		{
			iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uVar7);
			switch (bVar2)
			{
				case 0x00000000:
					Function_229(&iVar0);
					Local_121 = Function_229(&iVar0);
					bLocal_59 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_121, 10.0f, &Local_121, &uVar3);
					break;
				
				case 0x00000001:
					Function_229(&iVar0);
					uLocal_457 = Function_229(&iVar0);
					fLocal_60 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&uLocal_457, 10.0f, &uLocal_457, &uVar3);
					break;
				
				case 0x00000002:
					Function_229(&iVar0);
					Local_124 = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_124, 10.0f, &Local_124, &uVar3);
					bLocal_62 = GET_OBJECT_HEADING(&iVar0);
					break;
				
				case 0x00000003:
					Function_229(&iVar0);
					Local_130 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_133 = Function_228(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000004:
					Function_229(&iVar0);
					Local_163 = Function_229(&iVar0);
					break;
				
				case 0x00000005:
					Function_229(&iVar0);
					uLocal_466 = Function_229(&iVar0);
					break;
				
				case 0x00000006:
					Function_229(&iVar0);
					Local_436 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_439 = Function_228(&iVar0);
					break;
				
				case 0x00000007:
					Function_229(&iVar0);
					Local_442 = Function_229(&iVar0);
					bLocal_61 = GET_OBJECT_HEADING(&iVar0);
					break;
				
				case 0x00000008:
					Function_229(&iVar0);
					Local_445 = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000009:
					Function_229(&iVar0);
					Local_469 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_472 = Function_228(&iVar0);
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
				case 0x00000010:
				case 0x00000011:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 2);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", true);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001A:
				case 0x0000001B:
				case 0x0000001C:
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
				case 0x00000020:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", false);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
				case 0x00000024:
				case 0x00000025:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 3);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000026:
				case 0x00000027:
				case 0x00000028:
				case 0x00000029:
				case 0x0000002A:
				case 0x0000002B:
				case 0x0000002C:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 6);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000002D:
				case 0x0000002E:
				case 0x0000002F:
				case 0x00000030:
				case 0x00000031:
				case 0x00000032:
				case 0x00000033:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 4);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	else if (Global_43789 == Global_46866[0])
	{
		bVar2 = false;
		while (bVar2 <= GET_OBJECTSET_SIZE(&uVar7))
		{
			iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uVar7);
			switch (bVar2)
			{
				case 0x00000000:
					Function_229(&iVar0);
					Local_121 = Function_229(&iVar0);
					bLocal_59 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_121, 10.0f, &Local_121, &uVar3);
					break;
				
				case 0x00000001:
					Function_229(&iVar0);
					uLocal_457 = Function_229(&iVar0);
					fLocal_60 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&uLocal_457, 10.0f, &uLocal_457, &uVar3);
					break;
				
				case 0x00000002:
					Function_229(&iVar0);
					Local_124 = Function_229(&iVar0);
					bLocal_62 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_124, 10.0f, &Local_124, &uVar3);
					break;
				
				case 0x00000003:
					Function_229(&iVar0);
					Local_130 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_133 = Function_228(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000004:
					Function_229(&iVar0);
					Local_163 = Function_229(&iVar0);
					break;
				
				case 0x00000005:
					Function_229(&iVar0);
					uLocal_466 = Function_229(&iVar0);
					break;
				
				case 0x00000006:
					Function_229(&iVar0);
					Local_436 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_439 = Function_228(&iVar0);
					break;
				
				case 0x00000007:
					Function_229(&iVar0);
					Local_442 = Function_229(&iVar0);
					bLocal_61 = GET_OBJECT_HEADING(&iVar0);
					break;
				
				case 0x00000008:
					Function_229(&iVar0);
					Local_445 = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000009:
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 2);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000010:
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", true);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
				case 0x0000001A:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", false);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001B:
				case 0x0000001C:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 3);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
				case 0x00000020:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 6);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
				case 0x00000024:
				case 0x00000025:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 4);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000026:
				case 0x00000027:
				case 0x00000028:
				case 0x00000029:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 7);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	else if (Global_43789 == Global_46816[0])
	{
		if (!Function_135(22, 0))
		{
			iVar6 = iVar5;
		}
		else
		{
			iVar6 = GET_OBJECTSET_SIZE(&uVar7);
		}
		bVar2 = false;
		while (bVar2 <= iVar6)
		{
			iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uVar7);
			switch (bVar2)
			{
				case 0x00000000:
					Function_229(&iVar0);
					Local_121 = Function_229(&iVar0);
					bLocal_59 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_121, 10.0f, &Local_121, &uVar3);
					break;
				
				case 0x00000001:
					Function_229(&iVar0);
					uLocal_457 = Function_229(&iVar0);
					fLocal_60 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&uLocal_457, 10.0f, &uLocal_457, &uVar3);
					break;
				
				case 0x00000002:
					Function_229(&iVar0);
					Local_124 = Function_229(&iVar0);
					bLocal_62 = GET_OBJECT_HEADING(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_124, 10.0f, &Local_124, &uVar3);
					break;
				
				case 0x00000003:
					Function_229(&iVar0);
					Local_130 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_133 = Function_228(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000004:
					Function_229(&iVar0);
					Local_163 = Function_229(&iVar0);
					break;
				
				case 0x00000005:
					Function_229(&iVar0);
					uLocal_466 = Function_229(&iVar0);
					break;
				
				case 0x00000006:
					Function_229(&iVar0);
					Local_436 = Function_229(&iVar0);
					Function_228(&iVar0);
					Local_439 = Function_228(&iVar0);
					break;
				
				case 0x00000007:
					Function_229(&iVar0);
					Local_442 = Function_229(&iVar0);
					bLocal_61 = GET_OBJECT_HEADING(&iVar0);
					break;
				
				case 0x00000008:
					Function_229(&iVar0);
					Local_445 = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&Local_130, 10.0f, &Local_130, &uVar3);
					break;
				
				case 0x00000009:
					Function_229(&iVar0);
					uLocal_463 = Function_229(&iVar0);
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
				case 0x00000010:
				case 0x00000011:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 2);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 8);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 3);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000019:
				case 0x0000001A:
				case 0x0000001B:
				case 0x0000001C:
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 6);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000020:
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_595);
					DECOR_SET_INT(&iVar0, "FlagType", 5);
					Function_229(&iVar0);
					Local_175[iVar12] = Function_229(&iVar0);
					FIND_GROUND_INTERSECTION(&(Local_175[iVar12]), 10.0f, &(Local_175[iVar12]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		bLocal_34[iVar1] = 4294967295;
		iVar1++;
	}
	iLocal_33 = GET_OBJECTSET_SIZE(&uLocal_595);
	return;
}

void Function_322(int iParam0) //Position: 0x169A4 / 92580
{
	var uVar0[3];
	int iVar4;
	
	if (Function_349(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_335(&uLocal_845, &uVar0, "RDR JOB MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_334(iParam0);
			bLocal_863 = true;
			Function_327();
			Function_326();
		}
		else if (iVar4 == 1)
		{
			Function_325(iParam0);
			bLocal_864 = true;
			Function_327();
			Function_326();
		}
		else if (iVar4 == 2)
		{
			Function_327();
			Function_323(iParam0);
			Function_327();
		}
	}
	return;
}

void Function_323(int iParam0) //Position: 0x16A3D / 92733
{
	Function_324(iParam0);
	return;
}

void Function_324(int iParam0) //Position: 0x16A48 / 92744
{
	int iVar0;
	
	if (!Function_25(iParam0))
	{
		Function_87();
		return;
	}
	iVar0 = Function_24(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_20("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_325(var uParam0) //Position: 0x16A9B / 92827
{
	bLocal_864 = true;
	if (bLocal_864)
	{
		Function_16(uParam0);
	}
	return;
}

void Function_326() //Position: 0x16AB0 / 92848
{
	return;
}

void Function_327() //Position: 0x16AB6 / 92854
{
	Function_329();
	Function_328(10, 3);
	return;
}

void Function_328(int iParam0, int iParam1) //Position: 0x16AC5 / 92869
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

void Function_329() //Position: 0x16C12 / 93202
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_333())
	{
		Function_332(10, 3);
	}
	else
	{
		Function_330();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_39(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_39());
	UI_POP("nDebugMenu");
	return;
}

void Function_330() //Position: 0x16C5D / 93277
{
	Function_331(25, 2);
	return;
}

void Function_331(int iParam0, int iParam1) //Position: 0x16C69 / 93289
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

void Function_332(int iParam0, int iParam1) //Position: 0x16E95 / 93845
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

bool Function_333() //Position: 0x16FE2 / 94178
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
				if (!Function_9(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_334(int iParam0) //Position: 0x1704A / 94282
{
	bLocal_863 = true;
	if (bLocal_863)
	{
		Function_27(iParam0, 1, 1, 0);
	}
	return;
}

var Function_335(struct<17> Param0) //Position: 0x17062 / 94306
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_348(&Var12, &Var0);
	uVar15 = Function_347(uParam1, &Var12);
	Function_346(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_345(&Param0, uVar15);
	Function_343(StackVal, &Param0, Var12.f_12);
	Function_341(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_340(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_337(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_336(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_336(int iParam0, int iParam1, int iParam2) //Position: 0x17156 / 94550
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

bool Function_337(struct<17> Param0) //Position: 0x171B6 / 94646
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
				Function_339(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_339(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_336(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_338(Param1.f_64);
	}
	else
	{
		Function_338(Param1.f_64);
	}
	return 0;
}

void Function_338(bool bParam0) //Position: 0x17349 / 95049
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

void Function_339(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x17387 / 95111
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

var Function_340(int iParam0, struct<21> Param1) //Position: 0x1743D / 95293
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_341(vector3 vParam0) //Position: 0x17464 / 95332
{
	switch (Function_342())
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

int Function_342() //Position: 0x17510 / 95504
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

void Function_343(vector3 vParam0) //Position: 0x1754C / 95564
{
	switch (Function_344(&vParam0))
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

int Function_344(int iParam0) //Position: 0x175F5 / 95733
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_9(iParam0, 0x40000000))
		{
			Function_66(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_9(iParam0, 0x40000000))
		{
			Function_66(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_31(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_9(iParam0, 0x20000000))
		{
			Function_66(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_9(iParam0, 0x20000000))
		{
			Function_66(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_31(&iParam0, 0x20000000);
	return 0;
}

var Function_345(struct<21> Param0) //Position: 0x17715 / 96021
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

void Function_346(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x178CF / 96463
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

var Function_347(int iParam0, struct<13> Param1) //Position: 0x1796B / 96619
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_348(struct<17> Param0) //Position: 0x17987 / 96647
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

bool Function_349(int iParam0) //Position: 0x179E1 / 96737
{
	if (!Function_350(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_350(bool bParam0) //Position: 0x179F6 / 96758
{
	if (bParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

bool Function_351(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x17A1D / 96797
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
		fVar0 = Function_354(&iParam0, &Global_54076);
		if (!Function_9(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_352(&iParam0);
				return 1;
			}
		}
		if (!Function_9(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_352(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_352(&iParam0);
				return 1;
			}
		}
		if (!Function_9(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_352(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_352(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_9(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_352(&iParam0);
				return 1;
			}
		}
		if (!Function_9(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_352(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_352(int iParam0) //Position: 0x17BE6 / 97254
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_353(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_353(int iParam0) //Position: 0x17C23 / 97315
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_354(var uParam0, int iParam1) //Position: 0x17C3C / 97340
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

float Function_355(vector3 vParam0) //Position: 0x17D31 / 97585
{
	if (Function_184(&vParam0))
	{
		if (Function_270(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_356() //Position: 0x17DFE / 97790
{
	iLocal_843 = 2;
	return;
}

void Function_357(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x17E08 / 97800
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
			Var0 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_358(int iParam0) //Position: 0x17E9D / 97949
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	}
	return;
}

void Function_359(vector3 vParam0) //Position: 0x17EC5 / 97989
{
	if (Function_184(&vParam0))
	{
		if (Function_270(&vParam0))
		{
			vParam0.f_4 = (GET_CURRENT_GAME_TIME() - vParam0.z);
			vParam0.f_8 = 0.0f;
			Function_31(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_360(int iParam0) //Position: 0x17F92 / 98194
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
	}
	return;
}

void Function_361(vector3 vParam0) //Position: 0x17FBB / 98235
{
	if (Function_184(&vParam0))
	{
		if (!Function_270(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_66(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

struct<8> Function_362(struct<45> Param0) //Position: 0x18094 / 98452
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
	else if (!Function_63(StackVal, (&Param0 + 8)))
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
	Function_368(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_366();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_365(Param0.f_24);
	Function_364(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_363(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
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

void Function_363(struct<33> Param0) //Position: 0x181C7 / 98759
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

void Function_364(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x182F3 / 99059
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

void Function_365(bool bParam0) //Position: 0x18344 / 99140
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

void Function_366() //Position: 0x183F7 / 99319
{
	float fVar0;
	bool bVar1;
	
	Function_367(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x1840B / 99339
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

void Function_368(bool bParam0) //Position: 0x1849C / 99484
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

void Function_369(struct<45> Param0) //Position: 0x184E3 / 99555
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

void Function_370(struct<21> Param0) //Position: 0x18529 / 99625
{
	Param0 = uParam1;
	Param0.f_4 = uParam2;
	Param0.f_8 = uParam3;
	Param0.f_16 = uParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

bool Function_371(int iParam0) //Position: 0x18558 / 99672
{
	bool bVar0;
	struct<2> Var1;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		Function_199(&iParam0, 10);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		Function_199(&iParam0, 10);
		return 0;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Local_166);
	}
	if (IS_ACTOR_VALID(&iLocal_501))
	{
		if (!Function_265(&iLocal_501, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Local_118, Local_124) < 25.0f)
		{
			DESTROY_ACTOR(&iLocal_501);
		}
	}
	bVar0 = Function_193(&iParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_199(&iParam0, 1);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&iParam0))
			{
				DECOR_SET_BOOL(&iParam0, "CanBeLasso", 0);
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
			GIVE_WEAPON_TO_ACTOR(&iParam0, 21, false, 1, 1);
			ACTOR_SET_NEXT_WEAPON(&iParam0, 21);
			TASK_PRIORITY_SET(&iParam0, false);
			MEMORY_ATTACK_ON_SIGHT(&iParam0, 0);
			Function_199(&iParam0, 2);
			break;
		
		case 0x00000002:
			if (IS_ACTOR_MOUNTED(&iLocal_495))
			{
				TASK_CLEAR(&iLocal_493);
				TASK_CLEAR(&iLocal_495);
				TASK_WANDER(&iParam0, 3212836864);
				Function_199(&iParam0, 3);
			}
			else if (IS_ACTOR_IN_HOGTIE(&bLocal_485))
			{
				ACTOR_MOUNT_ACTOR(&iParam0, &iLocal_495);
				iLocal_499 = &bLocal_485;
				TASK_GO_NEAR_ACTOR(&iLocal_493, &iLocal_499, 4.0f, 4);
				if (IS_ACTOR_VALID(&iLocal_499))
				{
					GET_POSITION(&iLocal_499, &Local_139);
				}
				Function_199(&iParam0, 4);
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_HOGTIE(&bLocal_485))
			{
				TASK_CLEAR(&iLocal_493);
				TASK_CLEAR(&iLocal_495);
				iLocal_499 = &bLocal_485;
				TASK_GO_NEAR_ACTOR(&iLocal_493, &iLocal_499, 4.0f, 4);
				if (IS_ACTOR_VALID(&iLocal_499))
				{
					GET_POSITION(&iLocal_499, &Local_139);
				}
				Function_199(&iParam0, 4);
			}
			break;
		
		case 0x00000004:
			if (!IS_GRINGO_VALID(&uLocal_601))
			{
				uLocal_601 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &Local_139, 5.0f, 0);
			}
			if (IS_GRINGO_VALID(&uLocal_601) && IS_ACTOR_ALIVE(&iLocal_499))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uLocal_601), "DisablePlayerCarry", 1);
				SET_INTENDED_HOGTIE_MASTER(&iLocal_493, &iLocal_495);
				SET_LINKED_ANIM_TARGET(&iLocal_499, &iLocal_495);
				if (IS_ACTOR_VALID(&iLocal_499))
				{
					if (VDIST(Local_166, Local_139) >= 15.0f)
					{
						TASK_CLEAR(&iLocal_493);
						bLocal_46 = TASK_SEQUENCE_OPEN();
						TASK_DISMOUNT(0, 1);
						TASK_USE_GRINGO(false, &uLocal_601, "Pickup_Ground", 1, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_493, bLocal_46);
						TASK_SEQUENCE_RELEASE(bLocal_46, 1);
						TASK_PRIORITY_SET(&iParam0, true);
						TASK_STAND_STILL(&iLocal_495, -1.0f, 0, 0);
						Function_199(&iParam0, 5);
					}
				}
			}
			if (IS_ACTOR_ALIVE(&iLocal_499) == 0)
			{
				TASK_CLEAR(&iLocal_493);
				TASK_CLEAR(&iLocal_495);
				TASK_WANDER(&iLocal_493, 3212836864);
				Function_199(&iParam0, 2);
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&iLocal_493, 0) != 1)
			{
				if (!Function_372(&iLocal_493, &iLocal_495, 0, 1))
				{
					Function_372(&iLocal_493, &iLocal_495, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 200, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_199(&iParam0, 6);
				}
			}
			else if (GET_TASK_STATUS(&iLocal_493, 0) != 4 && !Function_265(&iParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_ACTOR(&iLocal_499);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_601));
				Function_199(&iParam0, 2);
			}
			break;
		
		case 0x00000006:
			if (GET_ATTACHED_HOGTIE_VICTIM(&iLocal_495) == &iLocal_499)
			{
				TASK_MOUNT(&iLocal_493, &iLocal_495, 0, 1, 2, 2147483647);
				Function_199(&iParam0, 7);
			}
			else if (GET_TASK_STATUS(&iLocal_493, 0) != 4 && !Function_265(&iParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_ACTOR(&iLocal_499);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_601));
				TASK_CLEAR(&iLocal_493);
				TASK_MOUNT(&iLocal_493, &iLocal_495, 0, 1, 2, 2147483647);
				Function_199(&iParam0, 2);
			}
			break;
		
		case 0x00000007:
			GET_POSITION(&iLocal_495, &Var1);
			if (IS_ACTOR_MOUNTED(&iLocal_495))
			{
				SAY_SINGLE_LINE_CONTEXT(&iLocal_493, 203, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(&iLocal_495);
				TASK_GO_NEAR_COORD(&iLocal_493, &Local_124, 10.0f, 3);
				Function_199(&iParam0, 8);
			}
			break;
		
		case 0x00000008:
			GET_POSITION(&iLocal_495, &Var1);
			if (VDIST(Var1, Local_124) > 15.0f)
			{
				TASK_CLEAR(&iLocal_495);
				TASK_CLEAR(&iLocal_493);
				TASK_STAND_STILL(&iLocal_495, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_493, -1.0f, 0, 0);
				Function_199(&iParam0, 9);
			}
			if ((!Function_265(&iLocal_499, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_265(&iLocal_493, 0x3f800000, 0x42960000, 1, 1, 0)) && !Function_265(&iLocal_495, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (VDIST(Local_118, Var1) < 50.0f)
				{
					DESTROY_ACTOR(&iLocal_499);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_601));
					Function_199(&iParam0, 2);
				}
			}
			break;
		
		case 0x00000009:
			GET_POSITION(&iLocal_495, &Var1);
			if ((!Function_265(&iLocal_499, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_265(&iLocal_493, 0x3f800000, 0x42960000, 1, 1, 0)) && !Function_265(&iLocal_495, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (VDIST(Local_118, Var1) < 25.0f)
				{
					DESTROY_ACTOR(&iLocal_499);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_601));
					Function_199(&iParam0, 2);
				}
			}
			if (IS_GRINGO_VALID(&uLocal_601))
			{
				TASK_CLEAR(&iLocal_493);
				bLocal_47 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(0, 1);
				TASK_USE_GRINGO(false, &uLocal_601, "Pickup_Horse", 1, 1);
				TASK_GO_NEAR_COORD(false, &Local_124, 3.0f, 4);
				TASK_USE_GRINGO(false, &uLocal_601, "nDrop_Body", 1, 1);
				TASK_MOUNT(false, &iLocal_495, 0, 1, 2, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_493, bLocal_47);
				TASK_SEQUENCE_RELEASE(bLocal_47, 1);
				Function_199(&iParam0, 11);
			}
			break;
		
		case 0x0000000B:
			if (GET_TASK_STATUS(&iLocal_493, 0) != 1)
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_601));
				iLocal_501 = &iLocal_499;
				Function_199(&iParam0, 2);
			}
			break;
		
		case 0x0000000A:
			break;
		
		default:
			break;
	}
	return 1;
}

bool Function_372(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x18BAE / 101294
{
	var uVar0;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar8;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("HOGTIE CARRIER not valid.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		LOG_ERROR("HOGTIE VICTIM not valid.");
		return 0;
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam0, "head", &uVar0))
	{
		LOG_ERROR("NAMED BONE not valid for actor.");
		return 0;
	}
	iVar2 = 0;
	uVar4 = GET_ATTACHED_HOGTIE_VICTIM(&uParam0);
	if (IS_ACTOR_VALID(&uVar4))
	{
		uVar3 = GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(&uVar4, "HogtieGringoAttached"));
	}
	while (!IS_GRINGO_VALID(&uVar3) && iVar2 > 5)
	{
		GET_OBJECT_NAMED_BONE_POSITION(&uParam0, "head", &uVar0);
		uVar3 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,5f, 1);
		iVar2++;
	}
	if (iVar2 > 5)
	{
		return 0;
	}
	TASK_PRIORITY_SET(&uParam1, true);
	TASK_STAND_STILL(&uParam1, -1.0f, 0, 0);
	bVar5 = GET_HEADING(&uParam1);
	uVar6 = Vector(0.0f, 0.0f, 0.0f);
	if (bParam2)
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, &uParam1, Vector(1,0011f, 0,0002f, 0,2262f), &uVar6);
		DECOR_SET_BOOL(&uParam0, "Hogtie_PutOnHorse_L", 0);
		bVar5 = (bVar5 + 90.0f);
	}
	else
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, &uParam1, Vector(-1,3385f, 0,0002f, 0,0723f), &uVar6);
		DECOR_SET_BOOL(&uParam0, "Hogtie_PutOnHorse_L", 1);
		bVar5 = (bVar5 + 250.0f);
	}
	bVar8 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_PRECISELY(0, &uVar6, &iParam3, bVar5, 0,1f, 0.0f, 0, 0);
	TASK_USE_GRINGO(false, &uVar3, "PutOn_Horse", 1, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar8);
	TASK_SEQUENCE_RELEASE(bVar8, 1);
	return 1;
}

void Function_373(var uParam0) //Position: 0x18DCA / 101834
{
	var uVar0;
	int iVar1;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				while (IS_OBJECT_VALID(&iVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iVar1)))
					{
						if ((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1030 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1031) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1032) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1037) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1038) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1039) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar1)) != 1040)
						{
							DESTROY_OBJECT(&iVar1);
						}
					}
					iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
				}
			}
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

bool Function_374(int iParam0, float fParam1) //Position: 0x18EA5 / 102053
{
	if (Function_184(&iParam0))
	{
		if (Function_355(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_375(int iParam0) //Position: 0x18EC3 / 102083
{
	Function_233(&iParam0, 0.0f);
	return;
}

bool Function_376(struct<7> Param0) //Position: 0x18ED0 / 102096
{
	iLocal_79 = 0;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iLocal_832 = iLocal_832;
	Function_303(&Global_54076, 0);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (Function_184(&iLocal_661) == 0)
	{
		Function_375(&iLocal_661);
	}
	if (Function_184(&iLocal_673) == 0)
	{
		Function_375(&iLocal_673);
	}
	if (Function_184(&iLocal_649) == 0)
	{
		Function_375(&iLocal_649);
	}
	if (Function_184(&iLocal_669) == 0)
	{
		Function_375(&iLocal_669);
	}
	iLocal_481 = GET_PLAYER_ACTOR(0);
	if (IS_ACTOR_VALID(&iLocal_481))
	{
		GET_POSITION(&iLocal_481, &Local_118);
	}
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 0);
	if (IS_ACTOR_DRUNK(&Global_54076))
	{
		SET_ACTOR_DRUNK(&Global_54076, 0);
	}
	if (iLocal_66 == 0)
	{
		if (!IS_OBJECTSET_VALID(&uLocal_595))
		{
			uLocal_595 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), &uLocal_539, 8, 0);
		}
		if (!IS_OBJECTSET_VALID(&uLocal_597))
		{
			uLocal_597 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), &uLocal_539, 9, 0);
		}
		iLocal_66 = 1;
	}
	HUD_CLEAR_HELP();
	return 1;
}

bool Function_377(struct<7> Param0) //Position: 0x18FB2 / 102322
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return 1;
}

void Function_378(struct<45> Param0) //Position: 0x18FC3 / 102339
{
	Param0.f_44 = 0;
	Param0.f_40 = -1.0f;
	Function_383(1);
	Function_297(28);
	Function_381(0, 0);
	Function_2(1);
	Function_380(StackVal, 1, 10);
	Function_379();
	ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
	if (Global_43789 == Global_46914[0])
	{
		SET_POP_DENSITY_MULTIPLIER(0,25f);
	}
	else
	{
		SET_POP_DENSITY_MULTIPLIER(0,5f);
	}
	if (Global_43789 == Global_46816[0])
	{
		uLocal_475 = Vector(-813,79f, 92,84f, 2420,51f);
	}
	else if (Global_43789 == Global_46914[0])
	{
		uLocal_475 = Vector(687,02f, 78,31f, 1378,38f);
	}
	else if (Global_43789 == Global_46866[0])
	{
		uLocal_475 = Vector(-2739,24f, 32,45f, 4260,57f);
		uLocal_523 = LOCATE_NAMED_ACTOR(StackVal, Vector(-2730,673f, 32,29004f, 4250,744f), 5.0f, "nBankWagon", 0);
	}
	Function_66(&uLocal_54, 1);
	Function_66(&uLocal_54, 16);
	return;
}

void Function_379() //Position: 0x190B5 / 102581
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_380(bool bParam0, int iParam1, int iParam2) //Position: 0x190CB / 102603
{
	if (bParam0)
	{
		PRINTSTRING("CALLING DESTROY GC OBJECTS!");
		PRINTNL();
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAR_ALL_CORPSES();
	Function_98();
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(iParam1);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_379();
	STREAMING_EVICT_ALL();
	iParam2 = iParam2;
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_277(&uLocal_853, "jobs", 10, 0);
	Function_297(8192);
	return;
}

void Function_381(int iParam0, int iParam1) //Position: 0x1913C / 102716
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
			Function_382(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_382(struct<113> Param0) //Position: 0x191C3 / 102851
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

void Function_383(int iParam0) //Position: 0x19221 / 102945
{
	Function_384(&Global_43580, iParam0);
	return;
}

void Function_384(var uParam0, int iParam1) //Position: 0x1922F / 102959
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

int Function_385(struct<7> Param0) //Position: 0x19257 / 102999
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	GET_POSITION(&Global_54076, &Local_118);
	if (!bLocal_69)
	{
		iLocal_831 = Function_389(StackVal, 1, 6);
		Function_388(iLocal_831, 1);
		bLocal_69 = true;
	}
	if (!Function_386(64, 0, 4294967295, 0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&uLocal_539))
	{
		uLocal_539 = CREATE_LAYOUT("nightwatchLayout");
	}
	if (!IS_VOLUME_VALID(&uLocal_565))
	{
		uLocal_565 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "IntroCutscene", 2,802597E-45f, Local_118, Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
		uLocal_567 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_539, "IntroHorse", 2,802597E-45f, Local_118, Vector(0.0f, 0.0f, 0.0f), Vector(50.0f, 50.0f, 50.0f));
		uLocal_521 = GET_ACTORS_HORSE(&Global_54076);
		if (IS_ACTOR_VALID(&uLocal_521))
		{
			if (IS_ACTOR_IN_VOLUME(&uLocal_521, &uLocal_567))
			{
				Function_303(&uLocal_521, 0);
			}
		}
	}
	iLocal_481 = GET_PLAYER_ACTOR(0);
	if (!iLocal_65)
	{
		iLocal_65 = 1;
		Function_279(&iLocal_677, 976, 3, 0);
		if (Global_43789 == Global_46816[0])
		{
			Function_279(&iLocal_677, 35, 3, 0);
			Function_279(&iLocal_677, 436, 3, 0);
			Function_279(&iLocal_677, 1037, 3, 0);
			Function_277(&iLocal_677, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
		}
		if (Global_43789 == Global_46914[0])
		{
			Function_279(&iLocal_677, 184, 3, 0);
			Function_279(&iLocal_677, 185, 3, 0);
			Function_279(&iLocal_677, 1045, 3, 0);
		}
		if (Global_43789 == Global_46866[0])
		{
			Function_279(&iLocal_677, 396, 3, 0);
			Function_279(&iLocal_677, 1033, 3, 0);
			Function_279(&iLocal_677, 460, 2, 0);
			Function_277(&iLocal_677, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
		}
		Function_277(&iLocal_677, "jobs", 10, 0);
		Function_277(&iLocal_677, "custom/dog_sniffing", 8, 0);
	}
	if (Function_275() == 1)
	{
		DELETE_PROJECTILES_IN_VOLUME(&uLocal_565);
		if (IS_ACTOR_VALID(&uLocal_523))
		{
			DESTROY_ACTOR(&uLocal_523);
		}
	}
	else
	{
		return 0;
	}
	Function_274(1);
	return 1;
}

bool Function_386(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x194E0 / 103648
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_387(&(Global_46972[0]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_387(&(Global_46972[1]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_387(&(Global_46972[2]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_387(&(Global_46972[3]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_387(&(Global_46972[4]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_387(&(Global_46972[5]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_387(&(Global_46972[6]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_387(&(Global_46972[7]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_387(&(Global_46972[8]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_387(&(Global_46972[9]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_387(&(Global_46972[10]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_387(&(Global_46972[11]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_387(&(Global_46972[12]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_387(&(Global_46972[13]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x40000000:
			iVar0 = 0;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_387(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x196E0 / 104160
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

void Function_388(int iParam0, int iParam1) //Position: 0x1970C / 104204
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_25(iParam0))
	{
		Function_87();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_24(iParam0);
	if (StackVal != 2)
	{
		Function_20("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_30(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_22(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
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

int Function_389(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1981D / 104477
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_393(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_390(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_390(bParam0, bParam1, bParam2, 4294967295);
}

int Function_390(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1987B / 104571
{
	var uVar0;
	
	if (!Function_392(bParam2))
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
	uVar0 = Function_393(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_391(uVar0);
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

var Function_391(int iParam0) //Position: 0x199DF / 104927
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

bool Function_392(int iParam0) //Position: 0x19A1D / 104989
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_393(int iParam0, int iParam1, int iParam2) //Position: 0x19A32 / 105010
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_394(bool bParam0, var uParam1) //Position: 0x19A52 / 105042
{
	GET_POSITION(&bParam0, &uParam1);
	return;
}

