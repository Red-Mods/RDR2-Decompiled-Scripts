//Decompiled with MagicRDR v1.0
//Function Count : 824
//Statics Count : 824
//Natives Count : 748
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
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
	int iLocal_14 = 0;
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
	var uLocal_30 = 11;
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
	var uLocal_52 = 11;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
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
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	struct<441> Local_71 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
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
	var uLocal_531 = 27;
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
	bool bLocal_591 = false;
	bool bLocal_592 = true;
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
	struct<18> Local_740 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<53> Local_758 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	char* cLocal_815 = NULL;
	int iLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	int iLocal_823 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	iLocal_14 = 0;
	iLocal_70 = 5;
	iLocal_215 = 0;
	bLocal_216 = false;
	iLocal_217 = 0;
	iLocal_218 = 0;
	iLocal_228 = 0;
	iLocal_229 = 0;
	iLocal_230 = 0;
	iLocal_231 = 2;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_241 = 0;
	iLocal_247 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	fLocal_267 = 0.2f;
	iLocal_268 = 0;
	iLocal_269 = 0;
	iLocal_270 = 0;
	iLocal_272 = 0;
	bLocal_368 = false;
	iLocal_437 = 1;
	bLocal_793 = true;
	iLocal_794 = 0;
	iLocal_801 = 4294967295;
	iLocal_804 = 0;
	iLocal_811 = 0;
	iLocal_812 = 0;
	iLocal_813 = 2;
	iLocal_814 = 5;
	cLocal_815 = "TC_MEX_SONG_01";
	iLocal_438 = 99;
	iLocal_439 = 6;
	Local_440 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_440 };
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(0.0f, 1f, 1);
	while (!IS_EXITFLAG_SET() && Function_194())
	{
		WAIT(false);
	}
	Function_78();
	Function_1(&Local_483);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD7 / 215
{
	if (Function_77())
	{
		Function_70();
	}
	if (UI_ISACTIVE("MissionFailedMenu"))
	{
		UI_POP("MissionFailedMenu");
	}
	SET_WEAPONENUM_LOCKED(33, 1);
	SET_WEAPONENUM_LOCKED(34, 1);
	SET_WEAPONENUM_LOCKED(35, 1);
	SET_WEAPONENUM_LOCKED(36, 1);
	SET_WEAPONENUM_LOCKED(37, 1);
	Function_69();
	if (iLocal_439 == 3)
	{
		Function_50(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Function_49(4096, 0);
	CLEAR_ACTOR_PROOF(Function_48(), 135);
	SET_ACTOR_INVULNERABILITY(Function_48(), 0);
	if (!Function_47(iParam0->f_44, 4))
	{
		UI_EXIT("MPSplash");
	}
	Function_32(iParam0);
	Function_31(iParam0, 0);
	Function_30(iParam0, 0);
	Function_29();
	Function_19();
	Function_18();
	UNK_0x2148AC15(4294967295, 0);
	SET_TIME_ACCELERATION(1.0f);
	REMOVE_ALL_PICKUPS();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	STOP_ALL_FIRES();
	RESET_PROPS_IN_WORLD();
	Function_17();
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
	Function_8(1);
	STREAMING_UNLOAD_SCENE();
	STREAMING_UNLOAD_BOUNDS();
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 0.0f);
	}
	UI_EXIT("NetTimer");
	UI_EXIT("ScoreGraph");
	UI_EXIT("XpHud");
	Function_6(0, 0, 4294967295, 4294967295);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_2();
	return;
}

void Function_2() //Position: 0x212 / 530
{
	Function_3(1024, 0, 1);
	Function_3(1, 0, 0);
	return;
}

void Function_3(bool bParam0, bool bParam1, int iParam2) //Position: 0x226 / 550
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_5(&Global_76905 + 132, bParam0);
	}
	else
	{
		Function_4(&Global_76905 + 132, bParam0);
	}
	return;
}

void Function_4(int iParam0, bool bParam1) //Position: 0x24E / 590
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_5(var uParam0, bool bParam1) //Position: 0x261 / 609
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_6(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x270 / 624
{
	AUDIO_MUSIC_SET_MOOD(Function_7(uParam0), iParam1, iParam2, iParam3);
}

var Function_7(int iParam0) //Position: 0x286 / 646
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
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
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

void Function_8(bool bParam0) //Position: 0x7D9 / 2009
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_15(4))
		{
			Function_13(1);
		}
		else
		{
			return;
		}
	}
	Function_11(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_9(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_9(bool bParam0, bool bParam1) //Position: 0x81D / 2077
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_10(GET_LOCAL_SLOT(), bParam0) && !Function_15(2))
		{
			return;
		}
		if (!Function_15(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_15(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

int Function_10(bool bParam0, bool bParam1) //Position: 0x89A / 2202
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x8BE / 2238
{
	Function_12(&Global_79337, iParam0);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x8CD / 2253
{
	Function_4(uParam0, iParam1);
	return;
}

void Function_13(int iParam0) //Position: 0x8DA / 2266
{
	Function_14(&Global_79337, iParam0);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x8E9 / 2281
{
	Function_5(uParam0, iParam1);
	return;
}

bool Function_15(bool bParam0) //Position: 0x8F6 / 2294
{
	return Function_16(Global_79337, bParam0);
}

bool Function_16(var uParam0, bool bParam1) //Position: 0x905 / 2309
{
	return (uParam0 && bParam1) == 0;
}

void Function_17() //Position: 0x912 / 2322
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_18() //Position: 0x91B / 2331
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_19() //Position: 0x930 / 2352
{
	struct<17> Var0;
	
	Function_21();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_20(&Var0);
	return;
}

void Function_20(int iParam0) //Position: 0x952 / 2386
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_21() //Position: 0x962 / 2402
{
	Function_22();
	return;
}

void Function_22() //Position: 0x96B / 2411
{
	Function_23(4294967286);
	return;
}

void Function_23(bool bParam0) //Position: 0x977 / 2423
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_28(&uVar0);
		Function_27(&vVar1);
		vVar1.z = uVar0;
		Function_20(&vVar1);
	}
	Function_26(&uVar0, bParam0);
	Function_25(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_24(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x9B4 / 2484
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_25(int iParam0) //Position: 0x9C7 / 2503
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x9D6 / 2518
{
	*uParam0 = iParam1;
	return;
}

void Function_27(int iParam0) //Position: 0x9E1 / 2529
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_28(var uParam0) //Position: 0x9F1 / 2545
{
	*uParam0 = Global_78480.f_120;
	return;
}

void Function_29() //Position: 0xA00 / 2560
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_30(int iParam0, bool bParam1) //Position: 0xB1A / 2842
{
	if (bParam1)
	{
		Function_5(iParam0 + 44, 64);
	}
	else
	{
		Function_4(iParam0 + 44, 64);
	}
	return;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0xB3A / 2874
{
	if (bParam1)
	{
		Function_5(bParam0 + 44, 2);
	}
	else
	{
		Function_4(bParam0 + 44, 2);
	}
	return;
}

void Function_32(int iParam0) //Position: 0xB58 / 2904
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_44();
	bVar0 = Function_48();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_188))
	{
		DESTROY_OBJECT(iParam0->f_188);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_42(!Function_43(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_49(81920, 0);
	Function_49(8388608, 0);
	Function_33(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_33(bool bParam0) //Position: 0xC0A / 3082
{
	Function_39(bParam0);
	Function_34(bParam0, 0);
	Function_3(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (IS_SCRIPT_VALID(bParam0->f_84))
	{
		TERMINATE_SCRIPT(bParam0->f_84);
	}
	return;
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xC44 / 3140
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_35(StackVal, StackVal, Function_38(), *(bParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(bParam0->f_120))
	{
		DESTROY_OBJECT(bParam0->f_120);
	}
	if (bParam1)
	{
		bParam0->f_120 = uVar0;
	}
	if (IS_OBJECT_VALID(bParam0->f_156))
	{
		RELEASE_OBJECT_REF(bParam0->f_156);
	}
	if (IS_VOLUME_VALID(bParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
		DESTROY_VOLUME(bParam0->f_424);
	}
	if (IS_OBJECT_VALID(bParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bParam0->f_112);
	}
	if (Function_47(bParam0->f_48, 2))
	{
		Function_4(bParam0 + 48, 2);
	}
	Function_5(bParam0 + 48, 1);
	return;
}

var Function_35(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0xCD5 / 3285
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
		Function_37(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_37(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_36(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_37(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_37(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_37(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_37(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_36(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_36(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0xE0E / 3598
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_37(var uParam0, bool bParam1) //Position: 0xE63 / 3683
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_38() //Position: 0xE7D / 3709
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_39(int iParam0) //Position: 0xEAC / 3756
{
	Function_41(iParam0);
	Function_40(1048576);
	return;
}

void Function_40(int iParam0) //Position: 0xEBE / 3774
{
	Function_12(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_41(int iParam0) //Position: 0xEF7 / 3831
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_42(bool bParam0) //Position: 0xF0E / 3854
{
	if (bParam0)
	{
		UI_EXIT("MPSplash");
	}
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("NotorietyMeter");
	UI_RESTORE("NotorietyMeter");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

bool Function_43(bool bParam0) //Position: 0xF95 / 3989
{
	return Function_16(Global_79336, bParam0);
}

void Function_44() //Position: 0xFA4 / 4004
{
	if (Function_46(8))
	{
		Function_45();
	}
	Function_3(8, 0, 1);
	return;
}

void Function_45() //Position: 0xFBC / 4028
{
	Function_3(32768, 1, 0);
	return;
}

bool Function_46(bool bParam0) //Position: 0xFCB / 4043
{
	return Function_47(Global_76905.f_132, bParam0);
}

bool Function_47(var uParam0, bool bParam1) //Position: 0xFDC / 4060
{
	return (uParam0 && bParam1) == 0;
}

bool Function_48() //Position: 0xFE9 / 4073
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_49(int iParam0, bool bParam1) //Position: 0xFFE / 4094
{
	if (bParam1)
	{
		Function_5(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_4(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_50(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x1039 / 4153
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_48();
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
			if (Function_68())
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
		Function_53(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_18();
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
	Function_51(iParam9);
}

void Function_51(bool bParam0) //Position: 0x1129 / 4393
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
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
		Function_52();
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

void Function_52() //Position: 0x11D8 / 4568
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

int Function_53(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x124A / 4682
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
	Function_67(iParam0, TO_FLOAT(bParam1), 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x146A / 5226
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_65(390))), 32);
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
					bVar19 = (Function_64(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_64(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_62(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_59(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_56(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_55(), &Var9);
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

var Function_55() //Position: 0x1A97 / 6807
{
	int iVar0;
	
	return iVar0;
}

var Function_56(int iParam0) //Position: 0x1A9F / 6815
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1AB0 / 6832
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_58(char* cParam0, bool bParam1) //Position: 0x1BA5 / 7077
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1BBE / 7102
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_61(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x1C23 / 7203
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, bool bParam1) //Position: 0x1C35 / 7221
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1C47 / 7239
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
	if (((Function_63(iParam0) != 19 || Function_63(iParam0) != 17) || Function_63(iParam0) != 10) || Function_63(iParam0) != 9)
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

int Function_63(int iParam0) //Position: 0x1D77 / 7543
{
	return Global_35278[iParam020].f_48;
}

float Function_64(int iParam0) //Position: 0x1D86 / 7558
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_65(int iParam0) //Position: 0x1DBF / 7615
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_66(int iParam0) //Position: 0x1DFC / 7676
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F96 / 8086
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

bool Function_68() //Position: 0x21DA / 8666
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_69() //Position: 0x21E3 / 8675
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_70() //Position: 0x21F7 / 8695
{
	Function_72();
	Function_71(10, 3);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x2206 / 8710
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

void Function_72() //Position: 0x233D / 9021
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_76())
	{
		Function_75(10, 3);
	}
	else
	{
		Function_73();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_48(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_48());
	UI_POP("nDebugMenu");
	return;
}

void Function_73() //Position: 0x2388 / 9096
{
	Function_74(25, 2);
	return;
}

void Function_74(int iParam0, int iParam1) //Position: 0x2394 / 9108
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

void Function_75(int iParam0, int iParam1) //Position: 0x2592 / 9618
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

bool Function_76() //Position: 0x26C9 / 9929
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
				if (!Function_47(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_77() //Position: 0x2730 / 10032
{
	return Global_30920;
}

void Function_78() //Position: 0x2739 / 10041
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_190(&cLocal_234, &uLocal_235, &iLocal_237, &iLocal_264, &uLocal_265, &uLocal_266);
	DESTROY_ITERATOR(bLocal_591);
	Function_188(&iLocal_195);
	Function_182(Local_71);
	if (IS_ACTOR_VALID(Function_48()))
	{
		SET_ACTOR_INVULNERABILITY(Function_48(), 0);
	}
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	Function_173();
	Function_172(&iLocal_250);
	Function_161();
	SET_PHOSPHORUS_AMMO_ACTIVE(0);
	UNK_0x8062BD74(Function_48(), 0, 0.1f);
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_157(&bLocal_592);
	DESTROY_LAYOUT(bLocal_482);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_coffin04x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "MP_OpenCoffin", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	if (IS_LAYOUTREF_VALID(bLocal_795))
	{
		DESTROY_LAYOUT(bLocal_795);
	}
	Function_124(148, iLocal_272);
	Function_182(Local_71);
	Function_123(Local_71);
	DECOR_REMOVE_ALL(Local_71);
	UI_EXIT("MP_OverrunQuit");
	if (iLocal_816 != 19)
	{
		Function_96(iLocal_794, 0);
	}
	Function_80(&iLocal_816);
	Function_79();
	STREAMING_UNLOAD_BOUNDS();
	return;
}

void Function_79() //Position: 0x2876 / 10358
{
	RELEASE_LAYOUT_REF(Local_71);
	return;
}

void Function_80(int iParam0) //Position: 0x2881 / 10369
{
	if (*iParam0 != 19)
	{
		Function_89(iParam0);
	}
	Function_81(iParam0);
	return;
}

void Function_81(int iParam0) //Position: 0x2899 / 10393
{
	if (StackVal >= 0)
	{
		Function_82(TO_FLOAT(StackVal), "XP_Coop_complete", 1);
		iParam0->f_8 = 0;
	}
	return;
}

int Function_82(float fParam0, bool bParam1, bool bParam2) //Position: 0x28CB / 10443
{
	if (!Function_87())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_84(8, fParam0);
	}
	Function_83(487, (fParam0 * Global_3362), bParam1);
	return 1;
}

void Function_83(int iParam0, bool bParam1, int iParam2) //Position: 0x28FB / 10491
{
	Function_53(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_84(var uParam0, float fParam1) //Position: 0x2917 / 10519
{
	Function_85(uParam0, (Function_86(uParam0) + fParam1));
	return;
}

void Function_85(int iParam0, int iParam1) //Position: 0x292A / 10538
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_86(int iParam0) //Position: 0x2953 / 10579
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_87() //Position: 0x2963 / 10595
{
	if (Function_68())
	{
		return (Function_88() != 1 || Function_88() != 0);
	}
	return 0;
}

int Function_88() //Position: 0x297C / 10620
{
	return Global_79349.f_16;
}

void Function_89(int iParam0) //Position: 0x2988 / 10632
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_94(&uVar2, &iVar0, &bVar1);
	if (iVar0 >= 4294967295)
	{
		Function_90(iVar0, &uVar2, iParam0 + 8, bVar1);
	}
	return;
}

void Function_90(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x29AB / 10667
{
	bool bVar0;
	
	*iParam1 = Function_93(iParam0);
	*uParam2 = Function_91(*iParam1, 32, 20);
	*iParam1 = Function_91(*iParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

int Function_91(var uParam0, int iParam1, bool bParam2) //Position: 0x29FC / 10748
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_92((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_92(bool bParam0) //Position: 0x2A1B / 10779
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_93(int iParam0) //Position: 0x2A27 / 10791
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_94(int iParam0, var uParam1, int iParam2) //Position: 0x2A47 / 10823
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_95(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!(DECOR_GET_INT_VERBOSE(bVar0, "total", iParam0) && DECOR_GET_INT_VERBOSE(bVar0, "medal", &iVar1)))
	{
		return 0;
	}
	*iParam2 = DECOR_GET_BOOL(bVar0, "casual");
	*uParam1 = iVar1;
	return 1;
}

var Function_95(int iParam0) //Position: 0x2A9A / 10906
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_38(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && iParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_38(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

void Function_96(bool bParam0, int iParam1) //Position: 0x2AE7 / 10983
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	uVar2 = Function_105(bParam0, &bVar1, &uVar0);
	iParam1 = iParam1;
	PLAYSTAT_INT("Kills", Function_104(29));
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		PLAYSTAT_INT("Deaths", Function_101(GET_LOCAL_SLOT()));
	}
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_104(29), Function_99((Function_100(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_98(uVar0);
		}
		Function_97(5);
	}
	else
	{
		Function_98(4294967295);
	}
	return;
}

void Function_97(int iParam0) //Position: 0x2B66 / 11110
{
	Function_14(&Global_83864 + 1252, iParam0);
	return;
}

void Function_98(int iParam0) //Position: 0x2B78 / 11128
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

var Function_99(int iParam0, bool bParam1) //Position: 0x2B8C / 11148
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "Class_0_desc";
			
			case 0x00000001:
				return "Class_1_desc";
			
			case 0x00000002:
				return "Class_2_desc";
			
			case 0x00000003:
				return "Class_3_desc";
			
			case 0x00000004:
				return "Class_4_desc";
			
			case 0x00000005:
				return "Class_5_desc";
			
			case 0x00000006:
				return "Class_6_desc";
			
			case 0x00000007:
				return "Class_7_desc";
			
			case 0x00000008:
				return "Class_8_desc";
			
			case 0x00000009:
				return "Class_9_desc";
			
			case 0x0000000A:
				return "Class_10_desc";
			
			case 0x0000000B:
				return "Class_11_desc";
			
			case 0x0000000C:
				return "Class_12_desc";
			
			case 0x0000000D:
				return "Class_13_desc";
			
			case 0x0000000E:
				return "Class_14_desc";
			
			case 0x0000000F:
				return "Class_15_desc";
			
			case 0x00000010:
				return "Class_16_desc";
			
			case 0x00000011:
				return "Class_17_desc";
			
			case 0x00000012:
				return "Class_18_desc";
			
			case 0x00000013:
				return "Class_19_desc";
			
			case 0x00000014:
				return "Class_20_desc";
			
			default:
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "Class_0";
		
		case 0x00000001:
			return "Class_1";
		
		case 0x00000002:
			return "Class_2";
		
		case 0x00000003:
			return "Class_3";
		
		case 0x00000004:
			return "Class_4";
		
		case 0x00000005:
			return "Class_5";
		
		case 0x00000006:
			return "Class_6";
		
		case 0x00000007:
			return "Class_7";
		
		case 0x00000008:
			return "Class_8";
		
		case 0x00000009:
			return "Class_9";
		
		case 0x0000000A:
			return "Class_10";
		
		case 0x0000000B:
			return "Class_11";
		
		case 0x0000000C:
			return "Class_12";
		
		case 0x0000000D:
			return "Class_13";
		
		case 0x0000000E:
			return "Class_14";
		
		case 0x0000000F:
			return "Class_15";
		
		case 0x00000010:
			return "Class_16";
		
		case 0x00000011:
			return "Class_17";
		
		case 0x00000012:
			return "Class_18";
		
		case 0x00000013:
			return "Class_19";
		
		case 0x00000014:
			return "Class_20";
		
		default:
	}
	return "Common_Null";
}

int Function_100(int iParam0) //Position: 0x2EFF / 12031
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_101(int iParam0) //Position: 0x2F0F / 12047
{
	return Function_102(12, iParam0);
}

int Function_102(int iParam0, bool bParam1) //Position: 0x2F1C / 12060
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_104(iParam0);
	}
	if (!Function_103(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_103(bool bParam0) //Position: 0x2F8A / 12170
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

int Function_104(int iParam0) //Position: 0x302B / 12331
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_105(bool bParam0, var uParam1, int iParam2) //Position: 0x3044 / 12356
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar5;
	var uVar6;
	
	*uParam1 = 100000.0f;
	if (Function_122(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_121(&Global_78578 + 96);
		}
		*uParam1 = Function_117(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_103(bVar1))
		{
			iVar0 = (iVar0 + Function_115(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_112(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_111(iVar3, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_110();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_108(bVar1, &uVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_107(iVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_106(iVar0, *iParam2, iLocal_804);
	return iVar0;
}

void Function_106(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3115 / 12565
{
	bool bVar0;
	
	bVar0 = Function_95(1);
	if (!DECOR_SET_INT(bVar0, "total", bParam0))
	{
	}
	if (!DECOR_SET_INT(bVar0, "medal", bParam1))
	{
	}
	if (!DECOR_SET_BOOL(bVar0, "casual", bParam2))
	{
	}
	else if (bParam2)
	{
	}
	return;
}

var Function_107(int iParam0) //Position: 0x3163 / 12643
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_90(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

int Function_108(bool bParam0, int iParam1, int iParam2) //Position: 0x3190 / 12688
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_95(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_109(bParam0, 1);
	uVar2 = Function_109(bParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_109(int iParam0, bool bParam1) //Position: 0x31D1 / 12753
{
	bool bVar0;
	
	if (bParam1)
	{
		strcpy(&bVar0, "v", 4);
	}
	else
	{
		strcpy(&bVar0, "n", 4);
	}
	straddi(&bVar0, iParam0, 4);
	return bVar0;
}

int Function_110() //Position: 0x31F7 / 12791
{
	bool bVar0;
	
	bVar0 = Function_95(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "size");
}

void Function_111(int iParam0, int iParam1) //Position: 0x321A / 12826
{
	if (iParam0 == 2)
	{
		*iParam1 = 1000;
	}
	else if (iParam0 == 1)
	{
		*iParam1 = 500;
	}
	else if (iParam0 == 0)
	{
		*iParam1 = 200;
	}
	return;
}

int Function_112(float fParam0) //Position: 0x3249 / 12873
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	Function_113(2, &fVar0, &iVar3);
	Function_113(1, &fVar1, &iVar3);
	Function_113(0, &fVar2, &iVar3);
	iVar3 = iVar3;
	fVar0 = 20.0f;
	fVar1 = 10.0f;
	fVar2 = 5.0f;
	if (fParam0 <= fVar2)
	{
		if (fParam0 <= fVar1)
		{
			if (fParam0 <= fVar0)
			{
				return 2;
			}
			return 1;
		}
		return 0;
	}
	return 4294967295;
}

void Function_113(int iParam0, var uParam1, int iParam2) //Position: 0x329B / 12955
{
	float fVar0;
	
	fVar0 = Function_114(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*uParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_114(int iParam0) //Position: 0x32CC / 13004
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

bool Function_115(bool bParam0) //Position: 0x32EC / 13036
{
	return Function_116(0, bParam0);
}

int Function_116(int iParam0, bool bParam1) //Position: 0x32F8 / 13048
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_100(iParam0);
	}
	if (!Function_103(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

float Function_117(int iParam0) //Position: 0x335F / 13151
{
	if (Function_122(iParam0))
	{
		if (Function_120(iParam0))
		{
			return StackVal;
		}
		Function_118();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_118() //Position: 0x3430 / 13360
{
	if (!Function_119())
	{
	}
	return;
}

bool Function_119() //Position: 0x343D / 13373
{
	return NET_IS_IN_SESSION();
}

bool Function_120(int iParam0) //Position: 0x3446 / 13382
{
	return Function_47(*iParam0, 2);
}

void Function_121(int iParam0) //Position: 0x3453 / 13395
{
	if (Function_122(iParam0))
	{
		if (!Function_120(iParam0))
		{
			Function_118();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_5(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_122(int iParam0) //Position: 0x351B / 13595
{
	return Function_47(*iParam0, 1);
}

void Function_123(bool bParam0) //Position: 0x3528 / 13608
{
	bool bVar0;
	bool bVar1;
	
	if (DECOR_CHECK_EXIST(bParam0, "quitContext"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "quitContext");
		bVar1 = bVar0;
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar1))
		{
			DECOR_REMOVE(bParam0, "quitContext");
			RELEASE_SCRIPT_USE_CONTEXT(bVar1);
		}
	}
	return;
}

void Function_124(var uParam0, int iParam1) //Position: 0x357E / 13694
{
	Function_156(14, 1);
	Function_125(Function_155(), uParam0, iParam1);
	return;
}

void Function_125(int iParam0, var uParam1, int iParam2) //Position: 0x3594 / 13716
{
	bool bVar0;
	
	Function_154(0, iParam0);
	bVar0 = ROUND((-1000.0f * Function_117(&Global_78578 + 96)));
	Function_154(13, iParam0);
	Function_154(11, Function_104(29));
	Function_126(uParam1, 4294967295, 1, bVar0, iParam2);
	return;
}

void Function_126(int iParam0, int iParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x35CF / 13775
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_156(5, 1);
	Function_40(4096);
	Function_147();
	Function_146();
	if (iParam0 < 0 && !bParam4)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_145(&Global_78480 + 220, &uVar0, 0);
			uVar0[66] = uParam3;
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
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
					Function_145(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	else if (bParam4)
	{
	}
	Function_127(bParam2);
}

void Function_127(bool bParam0) //Position: 0x3691 / 13969
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_144(2);
	if (bParam0)
	{
		Function_144(1);
	}
	else
	{
		Function_143(1);
	}
	Function_128();
	return;
}

void Function_128() //Position: 0x371A / 14106
{
	Function_141();
	Function_140();
	Function_140();
	Function_139();
	Function_139();
	Function_138();
	Function_138();
	Function_135(0);
	Function_135(0);
	if (!Function_68())
	{
		Function_133();
		Function_132();
		Function_131();
		Function_130();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_129();
	return;
}

void Function_129() //Position: 0x376C / 14188
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

void Function_130() //Position: 0x3872 / 14450
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

void Function_131() //Position: 0x38A5 / 14501
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

void Function_132() //Position: 0x3A33 / 14899
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

void Function_133() //Position: 0x3BE7 / 15335
{
	Function_134(&Global_28260, 1, 0);
	return;
}

void Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x3BF5 / 15349
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
	
	bVar0 = Function_48();
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

struct<8> Function_135(int iParam0) //Position: 0x3DE6 / 15846
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
					iVar2 = ((Function_137((50 + iVar4)) + Function_137((183 + iVar4))) + Function_137((90 + iVar4)));
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
	Function_136(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_136(int iParam0, bool bParam1, bool bParam2) //Position: 0x3E8C / 16012
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
		Function_67(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_66(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_137(bool bParam0) //Position: 0x4141 / 16705
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_138() //Position: 0x4182 / 16770
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
		iVar2 = ((Function_137((50 + iVar3) + 15) + Function_137((183 + iVar3) + 15)) + Function_137((90 + iVar3) + 15));
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
	Function_136(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_139() //Position: 0x420B / 16907
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
			iVar2 = ((Function_137((50 + iVar3) + 8) + Function_137((183 + iVar3) + 8)) + Function_137((90 + iVar3) + 8));
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
	Function_136(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_140() //Position: 0x42A2 / 17058
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
		iVar2 = ((Function_137((50 + iVar3)) + Function_137((183 + iVar3))) + Function_137((90 + iVar3)));
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
	Function_136(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_141() //Position: 0x4321 / 17185
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_142(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_136(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_142(int iParam0, bool bParam1, int iParam2) //Position: 0x435A / 17242
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
	Function_67(iParam0, bParam1, 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_54(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_143(int iParam0) //Position: 0x4564 / 17764
{
	Function_12(&Global_79338, iParam0);
	return;
}

void Function_144(int iParam0) //Position: 0x4573 / 17779
{
	Function_14(&Global_79338, iParam0);
	return;
}

void Function_145(var uParam0, var uParam1, bool bParam2) //Position: 0x4582 / 17794
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

void Function_146() //Position: 0x45C7 / 17863
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

void Function_147() //Position: 0x45F1 / 17905
{
	if (Global_83864.f_1264 > 6)
	{
		Function_148(&(Global_50170[522]));
		Function_148(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_148(&(Global_50170[722]));
		Function_148(&(Global_50170[822]));
		Function_148(&(Global_50170[922]));
		Function_148(&(Global_50170[1022]));
		Function_148(&(Global_50170[1122]));
	}
	return;
}

void Function_148(bool bParam0) //Position: 0x4651 / 18001
{
	Global_56092[*bParam0] = 0;
	Function_149(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_149(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x466B / 18027
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_152(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_151(iParam0, 4))
	{
		Function_150(Function_153(iParam0), 0);
	}
}

void Function_150(bool bParam0, bool bParam1) //Position: 0x4722 / 18210
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

bool Function_151(int iParam0, bool bParam1) //Position: 0x4747 / 18247
{
	return Function_47(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_152(int iParam0) //Position: 0x475B / 18267
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_153(int iParam0) //Position: 0x478F / 18319
{
	return Global_50170[iParam022].f_24;
}

void Function_154(int iParam0, int iParam1) //Position: 0x479E / 18334
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_155() //Position: 0x47B8 / 18360
{
	return Function_100(0);
}

void Function_156(int iParam0, int iParam1) //Position: 0x47C2 / 18370
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_157(int iParam0) //Position: 0x47E7 / 18407
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_158(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x480D / 18445
{
	if (Function_160(uParam0[iParam13], 4))
	{
		if (Function_160(uParam0[iParam13], 1))
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
			Function_159(uParam0[iParam13], 1);
			Function_159(uParam0[iParam13], 2);
			Function_159(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x493B / 18747
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_160(int iParam0, int iParam1) //Position: 0x4955 / 18773
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_161() //Position: 0x4972 / 18802
{
	Function_171();
	Function_170();
	Function_169();
	Function_168();
	Function_162();
	return;
}

void Function_162() //Position: 0x4987 / 18823
{
	Function_164(&Local_349, 0);
	Function_163(&Local_349);
	return;
}

void Function_163(int iParam0) //Position: 0x499A / 18842
{
	iParam0->f_36 = 0;
	return;
}

void Function_164(int iParam0, bool bParam1) //Position: 0x49A5 / 18853
{
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECTSET_VALID(StackVal))
	{
		DESTROY_OBJECTSET(StackVal);
	}
	if (SQUAD_IS_VALID(iParam0->f_68))
	{
		if (bParam1)
		{
			Function_167(iParam0 + 68);
		}
		else
		{
			Function_165(iParam0 + 68, 0, 0);
		}
		DESTROY_OBJECT(iParam0->f_68);
	}
	if (SQUAD_IS_VALID(iParam0->f_72))
	{
		if (bParam1)
		{
			Function_167(iParam0 + 72);
		}
		else
		{
			Function_165(iParam0 + 72, 0, 0);
		}
		DESTROY_OBJECT(iParam0->f_72);
	}
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1)
		{
			DESTROY_LAYOUT_OBJECTS(*iParam0);
			DESTROY_LAYOUT(*iParam0);
		}
		else
		{
			RELEASE_LAYOUT_OBJECTS(*iParam0);
			RELEASE_LAYOUT_REF(*iParam0);
		}
	}
	return;
}

void Function_165(var uParam0, bool bParam1, bool bParam2) //Position: 0x4A48 / 19016
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
				if (!Function_166(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_166(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4AC4 / 19140
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_167(var uParam0) //Position: 0x4ADE / 19166
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_168() //Position: 0x4B25 / 19237
{
	Function_164(&Local_330, 0);
	Function_163(&Local_330);
	return;
}

void Function_169() //Position: 0x4B38 / 19256
{
	Function_164(&Local_311, 0);
	Function_163(&Local_311);
	return;
}

void Function_170() //Position: 0x4B4B / 19275
{
	Function_164(&Local_292, 0);
	Function_163(&Local_292);
	return;
}

void Function_171() //Position: 0x4B5E / 19294
{
	Function_164(&Local_273, 0);
	Function_163(&Local_273);
	return;
}

void Function_172(int iParam0) //Position: 0x4B71 / 19313
{
	if (*iParam0)
	{
		UI_EXIT("NetTimer");
		*iParam0 = 0;
	}
	return;
}

void Function_173() //Position: 0x4B8F / 19343
{
	Function_180(1, 0);
	Function_179(0.0f, 0.0f);
	Function_174(1, 0, 0);
	return;
}

void Function_174(int iParam0, int iParam1, int iParam2) //Position: 0x4BA5 / 19365
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
		Function_175(Global_16524, bVar0, 1);
	}
	return;
}

void Function_175(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C8B / 19595
{
	int iVar0;
	
	Function_178(iParam0);
	Function_177(bParam1);
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
	Function_176();
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

void Function_176() //Position: 0x4E04 / 19972
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_177(bool bParam0) //Position: 0x4E10 / 19984
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

void Function_178(int iParam0) //Position: 0x4E56 / 20054
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

void Function_179(float fParam0, int iParam1) //Position: 0x4E9C / 20124
{
	Global_16517.f_8 = fParam0;
	Global_16517.f_12 = iParam1;
	Global_16517.f_16 = 1;
	return;
}

void Function_180(int iParam0, int iParam1) //Position: 0x4EB6 / 20150
{
	Function_178(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_181(StackVal, iParam1);
	}
	return;
}

void Function_181(int iParam0, int iParam1) //Position: 0x4EE7 / 20199
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_178(iParam0);
	Function_177(iVar0);
	PRINTNL();
	Function_175(iParam0, iVar0, iParam1);
	return;
}

void Function_182(bool bParam0) //Position: 0x4F0C / 20236
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_187()));
		if (IS_OBJECTSET_VALID(bVar0))
		{
			bVar1 = GET_OBJECTSET_SIZE(bVar0);
			bVar2 = false;
			while (bVar2 <= bVar1)
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar0);
				bVar7 = FIND_OBJECT_IN_OBJECT(bVar6, Function_186());
				if (IS_OBJECT_VALID(bVar7))
				{
					if (DECOR_GET_INT_VERBOSE(bVar7, Function_185(), &uVar3))
					{
						iVar4 = Function_184(uVar3);
						iVar5 = Function_183(uVar3);
						RESET_THIS_TREE_TYPE_CLEARING(iVar4);
						RESET_THIS_TREE_TYPE_CLEARING(iVar5);
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

int Function_183(int iParam0) //Position: 0x4F8C / 20364
{
	return Function_91(iParam0, 32, 16);
}

int Function_184(var uParam0) //Position: 0x4F9A / 20378
{
	return Function_91(uParam0, 16, 0);
}

var Function_185() //Position: 0x4FA8 / 20392
{
	return "PackedGrass";
}

var Function_186() //Position: 0x4FBC / 20412
{
	return "MPItemGiver";
}

var Function_187() //Position: 0x4FD0 / 20432
{
	return "PickupsSet";
}

void Function_188(int iParam0) //Position: 0x4FE3 / 20451
{
	Function_189(iParam0, 0);
	return;
}

void Function_189(var uParam0, bool bParam1) //Position: 0x4FEF / 20463
{
	if (uParam0->f_68)
	{
		uParam0->f_68 = 0;
		UI_HIDE("ScoreGraph");
		UI_DEACTIVATE("ScoreGraph");
		uParam0->f_64 = bParam1;
	}
	return;
}

void Function_190(char* cParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5) //Position: 0x5027 / 20519
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(*cParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(*cParam0);
		if (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
		}
		DESTROY_OBJECT(*cParam0);
	}
	if (IS_OBJECT_VALID(*uParam1))
	{
		DESTROY_OBJECT(*uParam1);
	}
	RESET_THIS_TREE_TYPE_CLEARING(*uParam4);
	RESET_THIS_TREE_TYPE_CLEARING(*uParam5);
	Function_193(cParam0);
	Function_192(iParam2);
	Function_191(iParam3);
}

void Function_191(int iParam0) //Position: 0x507D / 20605
{
	if (IS_POINT_LIGHT_VALID(*iParam0))
	{
		DESTROY_POINT_LIGHT(*iParam0);
	}
	return;
}

void Function_192(int iParam0) //Position: 0x5092 / 20626
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(*iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(*iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			UNK_0xE18028C1(bVar0);
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, *iParam0);
		}
		CLEAN_OBJECTSET(*iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	DESTROY_OBJECTSET(*iParam0);
	return;
}

void Function_193(var uParam0) //Position: 0x50E8 / 20712
{
	bool bVar0;
	
	bVar0 = Function_48();
	if (IS_ACTOR_VALID(bVar0) && !IS_OBJECT_VALID(*uParam0))
	{
		if (IS_ACTOR_ALIVE(bVar0) && !GET_ACTOR_INCAPACITATED(bVar0))
		{
			if (DECOR_CHECK_EXIST(bVar0, "nIsPicking") || DECOR_CHECK_EXIST(bVar0, "PickingFrame"))
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1))
				{
					DECOR_REMOVE(bVar0, "nIsPicking");
					DECOR_REMOVE(bVar0, "PickingFrame");
				}
			}
		}
	}
	return;
}

int Function_194() //Position: 0x516B / 20843
{
	int iVar0;
	
	return Function_815();
	iVar0 = 1;
	Function_813();
	if (NET_IS_SESSION_HOST())
	{
		Function_794();
	}
	if (Function_793(&Local_483))
	{
		Function_374();
	}
	if (iLocal_438 != 99)
	{
		Function_372(3);
		Function_368(&Local_758 + 8, &Local_758 + 12, &Local_758 + 16);
		if (NET_IS_SESSION_HOST())
		{
			Local_740 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (StackVal + StackVal), Local_758 };
		}
		else if (UNK_0xA80C6DE6(&Local_740))
		{
			Local_758 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_740 };
		}
		iVar0 = Function_234(&Local_483, iLocal_794);
		Function_231(&uLocal_251, Local_71);
		Function_227(&uLocal_252, Local_71);
		Function_219(&uLocal_253, &uLocal_254, Local_71, &bLocal_255);
		Function_213(StackVal, StackVal, *(&Local_71 + 12));
		Function_204(&uLocal_256, Local_71, 3, &bLocal_257);
		Function_195(StackVal, StackVal, (bLocal_216 <= 12 || Local_758.f_52), &iLocal_225, Local_71, *(&Local_71 + 12), 3);
	}
	return iVar0;
}

void Function_195(bool bParam0, int iParam1, bool bParam2, vector3 vParam3, int iParam6) //Position: 0x522C / 21036
{
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			if (IS_LAYOUTREF_VALID(bParam2))
			{
				if (Function_202(iParam1))
				{
					Function_199(StackVal, StackVal, vParam3, iParam6);
					Function_196(iParam1, (15.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)));
				}
			}
		}
	}
}

void Function_196(int iParam0, float fParam1) //Position: 0x5270 / 21104
{
	Function_197(iParam0, -fParam1);
	return;
}

void Function_197(int iParam0, float fParam1) //Position: 0x527E / 21118
{
	Function_118();
	Function_198(iParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x5292 / 21138
{
	uParam0->f_4 = iParam1;
	Function_5(uParam0, 1);
	Function_4(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_199(vector3 vParam0, var uParam3) //Position: 0x52AF / 21167
{
	struct<9> Var0;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	bVar11 = RAND_FLOAT_RANGE(50.0f, 100.0f);
	bVar12 = RAND_FLOAT_RANGE(50.0f, 100.0f);
	bVar9 = Function_201();
	bVar10 = Function_201();
	if (bVar9)
	{
		bVar11 = (bVar11 * -1.0f);
	}
	if (bVar10)
	{
		bVar12 = (bVar12 * -1.0f);
	}
	vVar0 = { StackVal, StackVal, vParam0 };
	vVar0.f_4 = (vVar0.y + 20.0f);
	vVar0 = (vVar0.x + bVar11);
	vVar0.f_8 = (vVar0.z + bVar12);
	if (FIND_GROUND_INTERSECTION(&vVar0, 30.0f, &vVar3, &uVar6))
	{
		Function_200(StackVal, StackVal, vVar3, uParam3);
	}
}

void Function_200(vector3 vParam0, var uParam3) //Position: 0x533A / 21306
{
	int iVar0;
	
	iVar0 = uParam3;
	*(&iVar0 + 4) = { StackVal, StackVal, vParam0 };
	NET_SCRIPTMSG_SEND(3, 57, &iVar0, 4, 1);
}

var Function_201() //Position: 0x535B / 21339
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_202(int iParam0) //Position: 0x536E / 21358
{
	if (Function_122(iParam0))
	{
		if (Function_203(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_203(int iParam0) //Position: 0x5389 / 21385
{
	return -Function_117(iParam0);
}

void Function_204(var uParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x5395 / 21397
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	Function_211();
	Function_208(bParam1, uParam3, bParam2);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
			EVENT_TRAP_CLEAR_EVENTS(*uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, *uParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_OBJECT_FROM_EVENT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (DECOR_GET_INT(bVar2, "Weapon") == 35)
				{
					bVar4 = GET_EVENT_PERPETRATOR(bVar1);
					if (IS_OBJECT_VALID(bVar4))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
						if (IS_ACTOR_VALID(bVar5))
						{
							Function_205(bVar2, bParam2, GET_ACTOR_SLOT(bVar5));
							DESTROY_ITERATOR(bVar0);
							EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
							EVENT_TRAP_CLEAR_EVENTS(*uParam0);
							return;
						}
					}
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
		EVENT_TRAP_CLEAR_EVENTS(*uParam0);
	}
}

void Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5481 / 21633
{
	vector3 vVar0;
	
	Function_207(bParam0);
	vVar0 = { StackVal, StackVal, Function_207(bParam0) };
	Function_206(StackVal, StackVal, vVar0, bParam1, bParam2);
	return;
}

void Function_206(vector3 vParam0, var uParam3, int iParam4) //Position: 0x549B / 21659
{
	struct<5> Var0;
	
	if (iParam4 == GET_LOCAL_SLOT())
	{
		Var0 = uParam3;
		*(&Var0 + 8) = { StackVal, StackVal, vParam0 };
		Var0.f_4 = iParam4;
		NET_SCRIPTMSG_SEND(3, 59, &Var0, 5, 1);
	}
}

vector3 Function_207(bool bParam0) //Position: 0x54CA / 21706
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

void Function_208(bool bParam0, var uParam1, bool bParam2) //Position: 0x54F1 / 21745
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	
	if (IS_LAYOUTREF_VALID(bParam0) && IS_OBJECTSET_VALID(*uParam1))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(*uParam1) - 1))
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam1);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar1 = DECOR_GET_INT(bVar4, "NumShotsLeft");
				bVar2 = DECOR_GET_INT(bVar4, "NumShotsCount");
				bVar3 = DECOR_GET_INT(bVar4, "nSlotOwner");
				GET_OBJECT_POSITION(bVar4, &vVar5);
				if (bVar1 < 0)
				{
					DESTROY_OBJECT(bVar4);
				}
				else if (bVar2 < 0)
				{
					Function_209(StackVal, StackVal, bParam0, bVar3, vVar5, bParam2);
					DECOR_SET_INT(bVar4, "NumShotsLeft", (bVar1 - 1));
					DECOR_SET_INT(bVar4, "NumShotsCount", (12 + RAND_INT_RANGE(4294967294, 2)));
				}
				else
				{
					DECOR_SET_INT(bVar4, "NumShotsCount", (bVar2 - 1));
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_209(var uParam0, int iParam1, vector3 vParam2, var uParam5) //Position: 0x55F3 / 22003
{
	struct<9> Var0;
	var uVar9;
	bool bVar12;
	bool bVar13;
	
	if (iParam1 == GET_LOCAL_SLOT())
	{
		vVar0 = { StackVal, StackVal, vVar0 };
		iParam1 = iParam1;
		bVar12 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		bVar13 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		vVar0 = { StackVal, StackVal, vParam2 };
		vVar0.f_4 = (vVar0.y - 5.0f);
		vVar3 = { StackVal, StackVal, vParam2 };
		vVar3.f_4 = (vVar3.y + 15.0f);
		vVar0 = (vVar0.x + bVar12);
		vVar0.f_8 = (vVar0.z + bVar13);
		vVar3 = (vVar3.x + bVar12);
		vVar3.f_8 = (vVar3.z + bVar13);
		uParam0 = uParam0;
		if (FIND_GROUND_INTERSECTION(&vVar3, 20.0f, &vVar6, &uVar9))
		{
			Function_210(StackVal, StackVal, vVar6, uParam5, iParam1);
		}
	}
}

void Function_210(vector3 vParam0, var uParam3, int iParam4) //Position: 0x5694 / 22164
{
	struct<5> Var0;
	
	if (iParam4 == GET_LOCAL_SLOT())
	{
		Var0 = uParam3;
		*(&Var0 + 8) = { StackVal, StackVal, vParam0 };
		Var0.f_4 = iParam4;
		NET_SCRIPTMSG_SEND(3, 58, &Var0, 5, 1);
	}
}

void Function_211() //Position: 0x56C3 / 22211
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln"))
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
		if (bVar0 >= 0)
		{
			bVar0 = (bVar0 - 1);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", bVar0);
			SET_ACTOR_INVULNERABILITY(Function_48(), 1);
		}
		else
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
			if (!Function_212(65536, 1))
			{
				SET_ACTOR_INVULNERABILITY(Function_48(), 0);
			}
			else
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
			}
		}
	}
	return;
}

bool Function_212(int iParam0, bool bParam1) //Position: 0x5768 / 22376
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_213(vector3 vParam0) //Position: 0x5788 / 22408
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), GET_AMBIENT_LAYOUT(), 15, 1);
	bVar1 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		if (Function_215(StackVal, StackVal, vParam0, &bVar0, bVar1, 100.0f))
		{
			Function_214(bVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		if (Function_215(StackVal, StackVal, vParam0, &bVar0, bVar1, 100.0f))
		{
			Function_214(bVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		if (Function_215(StackVal, StackVal, vParam0, &bVar0, bVar1, 100.0f))
		{
			Function_214(bVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		if (Function_215(StackVal, StackVal, vParam0, &bVar0, bVar1, 100.0f))
		{
			Function_214(bVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		if (Function_215(StackVal, StackVal, vParam0, &bVar0, bVar1, 100.0f))
		{
			Function_214(bVar0);
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

void Function_214(bool bParam0) //Position: 0x5896 / 22678
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					if (DECOR_CHECK_EXIST(bVar2, "Baited"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar2, "Baited")) < 10.0f)
						{
							if (IS_SLOT_VALID(false))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
								{
									MEMORY_CONSIDER_AS(bVar2, GET_SLOT_ACTOR(false), 4);
								}
							}
							if (IS_SLOT_VALID(true))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
								{
									MEMORY_CONSIDER_AS(bVar2, GET_SLOT_ACTOR(true), 4);
								}
							}
							if (IS_SLOT_VALID(2))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
								{
									MEMORY_CONSIDER_AS(bVar2, GET_SLOT_ACTOR(2), 4);
								}
							}
							if (IS_SLOT_VALID(3))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
								{
									MEMORY_CONSIDER_AS(bVar2, GET_SLOT_ACTOR(3), 4);
								}
							}
							TASK_PRIORITY_SET(bVar2, 2);
							DECOR_REMOVE(bVar2, "Baited");
						}
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_215(vector3 vParam0, bool bParam3, bool bParam4, float fParam5) //Position: 0x5991 / 22929
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_218(StackVal, StackVal, vParam0) || fParam5 >= 0.0f)
	{
		return 0;
	}
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_55(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam5, 20.0f, fParam5);
	bVar1 = CREATE_OBJECT_ITERATOR(bParam4);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(bVar1, bVar0);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar3);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (Function_216(bVar2) && !IS_OBJECT_IN_OBJECTSET(bVar3, *bParam3))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar3, *bParam3);
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	DESTROY_VOLUME(bVar0);
	if (GET_OBJECTSET_SIZE(*bParam3) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_216(bool bParam0) //Position: 0x5A38 / 23096
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_217(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_217(bool bParam0, int iParam1) //Position: 0x5A83 / 23171
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

bool Function_218(vector3 vParam0) //Position: 0x5AC5 / 23237
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_219(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x5ADD / 23261
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_225(bParam3);
	Function_223(*uParam1, bParam2, *bParam3);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam2);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
			EVENT_TRAP_CLEAR_EVENTS(*uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, *uParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				Function_220(bVar2, bParam3);
				DESTROY_ITERATOR(bVar0);
				EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
				EVENT_TRAP_CLEAR_EVENTS(*uParam0);
				return;
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
		EVENT_TRAP_CLEAR_EVENTS(*uParam0);
	}
}

void Function_220(bool bParam0, var uParam1) //Position: 0x5B97 / 23447
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_216(bVar0))
		{
			if (Function_222(bVar0))
			{
				Function_221();
				Function_221();
				bVar1 = CREATE_POINT_IN_LAYOUT(bVar0, Function_55(), Function_221(), Function_221());
				if (IS_OBJECT_VALID(bVar1))
				{
					Function_221();
					Function_221();
					ATTACH_OBJECTS(bVar1, bVar0, "spine00", Function_221(), Function_221(), 4294967295);
					PLAY_SOUND_FROM_OBJECT(bVar1, "ZOMBIE_TOXIC_PRE_EXPLO_SCREAM_MASTER");
					Function_221();
					bVar2 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_55(), "blood_zombie_anticipateBurst", "spine00", bVar0, Function_221(), bVar1);
					if (IS_OBJECT_VALID(bVar2))
					{
						Function_221();
						UNK_0x6745191B(bVar2, Function_221());
					}
					DECOR_SET_FLOAT(bVar0, "fToxicKilledTime", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(bVar0, "iToxicKilledPerp", Function_48());
					ADD_OBJECT_TO_OBJECTSET(bVar0, *uParam1);
				}
			}
		}
	}
	return;
}

vector3 Function_221() //Position: 0x5CAD / 23725
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_222(bool bParam0) //Position: 0x5CB6 / 23734
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_223(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5CD6 / 23766
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (GET_OBJECT_TYPE(bVar2) == 29)
				{
					if (Function_224(bVar2))
					{
						if (DECOR_CHECK_EXIST(bVar2, "fToxicKilledTime"))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar2, bParam2);
						}
					}
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
	}
	return;
}

bool Function_224(bool bParam0) //Position: 0x5D8D / 23949
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_225(int iParam0) //Position: 0x5DD1 / 24017
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*iParam0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
		if (IS_OBJECT_VALID(bVar2))
		{
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar2);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "fToxicKilledTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar1, "fToxicKilledTime")) <= 2.0f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(bVar1, *iParam0);
							DECOR_REMOVE(bVar1, "fToxicKilledTime");
							bVar3 = "";
							if (DECOR_CHECK_EXIST(bVar1, "iToxicKilledPerp"))
							{
								bVar3 = DECOR_GET_INT(bVar1, "iToxicKilledPerp");
								DECOR_REMOVE(bVar1, "iToxicKilledPerp");
							}
							Function_221();
							vVar4 = { StackVal, StackVal, Function_221() };
							GET_OBJECT_NAMED_BONE_POSITION(bVar1, "spine00", &vVar4);
							SET_DRAW_ACTOR(bVar1, false);
							SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar1, 0);
							DECOR_SET_BOOL(bVar1, "corpse_loot_gringo", false);
							DECOR_SET_BOOL(bVar1, "NoCorpse", true);
							Function_226(&vVar4, "ToxicZombieExplosion", bVar3, 0);
						}
					}
				}
			}
			else if (GET_OBJECT_TYPE(bVar2) == 29)
			{
				if (DECOR_CHECK_EXIST(bVar2, "fToxicKilledTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar2, "fToxicKilledTime")) <= 2.0f)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(bVar2, *iParam0);
						DECOR_REMOVE(bVar2, "fToxicKilledTime");
						bVar7 = "";
						if (DECOR_CHECK_EXIST(bVar2, "iToxicKilledPerp"))
						{
							bVar7 = DECOR_GET_INT(bVar2, "iToxicKilledPerp");
							DECOR_REMOVE(bVar2, "iToxicKilledPerp");
						}
						Function_221();
						vVar8 = { StackVal, StackVal, Function_221() };
						Function_221();
						vVar11 = { StackVal, StackVal, Function_221() };
						GET_OBJECT_NAMED_BONE_POSITION(bVar2, "spine00", &vVar8);
						vVar11 = { StackVal, StackVal, vVar8 };
						vVar8.f_4 = (vVar8.y - 100.0f);
						SET_OBJECT_POSITION(bVar2, vVar8);
						SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), 0);
						SET_DRAW_OBJECT(bVar2, 0);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar2, 0);
						Function_226(&vVar11, "ToxicZombieExplosion", bVar7, 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_226(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x606A / 24682
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_227(var uParam0, bool bParam1) //Position: 0x6086 / 24710
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
			EVENT_TRAP_CLEAR_EVENTS(*uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, *uParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				Function_228(bVar2);
				DESTROY_ITERATOR(bVar0);
				EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
				EVENT_TRAP_CLEAR_EVENTS(*uParam0);
				return;
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
		EVENT_TRAP_CLEAR_EVENTS(*uParam0);
	}
	return;
}

void Function_228(bool bParam0) //Position: 0x6128 / 24872
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_216(bVar0))
		{
			bVar1 = GET_LAST_HIT_WEAPON(bVar0);
			bVar1 = UNK_0xDB679ED9(bVar1);
			if (((bVar1 != 42 || bVar1 != 43) || bVar1 != 41) || bVar1 != 44)
			{
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 23, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 24, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 25, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 26, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar0, 28, false);
				if ((Function_201() || Function_230(bVar0)) || Function_229(bVar0))
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, 29, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, 30, true);
				}
			}
		}
	}
	return;
}

int Function_229(bool bParam0) //Position: 0x61CB / 25035
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_230(bool bParam0) //Position: 0x61EB / 25067
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_231(var uParam0, bool bParam1) //Position: 0x620B / 25099
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
			EVENT_TRAP_CLEAR_EVENTS(*uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, *uParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_OBJECT_FROM_EVENT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (DECOR_GET_STRING_HASH(bVar2, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
				{
					Function_232(bVar2);
					DESTROY_ITERATOR(bVar0);
					EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
					EVENT_TRAP_CLEAR_EVENTS(*uParam0);
					return;
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
		EVENT_TRAP_CLEAR_EVENTS(*uParam0);
	}
	return;
}

void Function_232(bool bParam0) //Position: 0x62DE / 25310
{
	vector3 vVar0;
	
	if (DECOR_GET_STRING_HASH(bParam0, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
	{
		Function_207(bParam0);
		vVar0 = { StackVal, StackVal, Function_207(bParam0) };
		Function_233(StackVal, StackVal, vVar0);
	}
	return;
}

void Function_233(vector3 vParam0) //Position: 0x6325 / 25381
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	NET_SCRIPTMSG_SEND(3, 64, &vVar0, 3, 1);
	return;
}

int Function_234(bool bParam0, bool bParam1) //Position: 0x633E / 25406
{
	int iVar0;
	
	Function_365();
	Function_364();
	if (!iLocal_804 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_804 = 1;
	}
	if (Function_363(bParam0))
	{
		if (!((((((iLocal_439 != 0 || iLocal_439 != 1) || iLocal_439 != 2) || iLocal_439 != 3) || iLocal_439 != 4) || iLocal_439 != 5) || iLocal_439 != 105))
		{
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_347(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	if (*bParam0 != 1 && bParam1)
	{
		Function_346(bParam0, 0);
	}
	else if (*bParam0 != 1 && !bParam1)
	{
		Function_346(bParam0, 1);
	}
	else
	{
		iVar0 = Function_235(bParam0);
		if (iVar0 == 0)
		{
		}
		else if (iVar0 == 2)
		{
		}
		else if (iVar0 == 3)
		{
			return 0;
		}
	}
	return 1;
}

int Function_235(bool bParam0) //Position: 0x6412 / 25618
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
	bool bVar15;
	
	bVar0 = Function_48();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(Global_78617.f_28))
	{
		bParam0->f_64 = 0.0f;
	}
	else
	{
		bParam0->f_64 = Function_345((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_344())
	{
		if (bVar1)
		{
			switch (Function_342())
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
		SET_ACTOR_FACTION(bVar0, bParam0->f_52);
	}
	if (Function_341(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_47(bParam0->f_44, 2) || Function_47(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_340() && IS_PS3())
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, false, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, false, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, true))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					*bParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (((Function_341(bParam0) && Function_339(4096)) && Function_87()) && !Function_43(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_47(bParam0->f_44, 2) || Function_47(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
				{
					bParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, true))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					Function_338(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_337(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
	}
	fVar8 = Function_336();
	if (bVar1)
	{
		bVar9 = Function_335(bVar0);
	}
	switch (*bParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					bParam0->f_112 = bVar5;
				}
			}
			bParam0->f_4 = Global_29006;
			if ((Function_333(8192) || Function_47(bParam0->f_48, 512)) && !Function_212(1, 1))
			{
				iVar6 = Function_330(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_47(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_5(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(false, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_327("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_85(2, NET_GET_NET_TIME());
								Function_325(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_49(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_86(2));
						if (!Function_212(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_4(bParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(false, 1, 1, 1);
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
					Function_49(65536, 0);
					Function_4(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_49(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_212(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_49(8388608, 0);
					}
				}
			}
			if (Function_324(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_47(bParam0->f_44, 16))
					{
						Function_5(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_323(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_4(bParam0 + 48, 32);
					*bParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(bParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0->f_188))
				{
					Function_322(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_3(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_49(65536, 0);
			Function_49(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_47(bParam0->f_44, 8))
			{
				Function_321(0);
			}
			else if (bVar1)
			{
				bParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(false, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(false))
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
			bParam0->f_56 = 4294967295;
			bParam0->f_68 = 0.0f;
			if (Function_320(bParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							bParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						bParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_316(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_300(bParam0, bParam0->f_12 != 0);
			}
			Function_298(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_298(bParam0, 1);
			if ((bParam0->f_12 >= 0 && bParam0->f_64 <= 4.0f) || (bParam0->f_12 < 0 && bParam0->f_64 <= 2.0f))
			{
				if (bParam0->f_12 < 0)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			bParam0->f_64 = 0.0f;
			*bParam0 = 5;
		
		case 0x00000005:
			Function_298(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_47(bParam0->f_44, 512))
				{
					*bParam0 = 8;
				}
				else if (bParam0->f_12 < 1)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_298(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_297();
				Function_3(32, 0, 1);
				Function_42(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_298(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_44();
			}
			break;
		
		case 0x00000008:
			if (Function_47(bParam0->f_44, 2))
			{
				if (Function_47(bParam0->f_44, 512))
				{
					if (!Function_47(bParam0->f_48, 4096))
					{
						Function_34(bParam0, 1);
						Function_5(bParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_212(16384, 1))
						{
							Function_34(bParam0, 0);
							Function_49(16384, 1);
							bParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(bParam0->f_84))
					{
						TERMINATE_SCRIPT(bParam0->f_84);
					}
					Function_298(bParam0, 1);
				}
			}
			else
			{
				Function_298(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_298(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_296(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (bParam0->f_64 > 0.0f)
				{
					bParam0->f_64 = 0.0f;
				}
			}
			if (bParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				bParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_42(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_18();
				Function_44();
				Function_3(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_38(), Function_55(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
				*bParam0 = 10;
				bParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (bParam0->f_108 == Global_76887 || bParam0->f_64 <= 5.0f)
			{
				if (bParam0->f_64 <= 5.0f)
				{
					bParam0->f_64 = 0.0f;
				}
				if (bParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(bParam0->f_108, 4294967295);
				}
				bParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(bParam0->f_108, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(bParam0->f_108, 4294967295))
			{
				*bParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(bParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_47(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_5(bParam0 + 48, 8);
				}
				if (Function_292(StackVal, Function_47(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_277(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_47(bParam0->f_48, 32), 1))
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
				if (Function_47(bParam0->f_44, 1))
				{
					Function_4(bParam0 + 44, 1);
				}
				else
				{
					Function_39(bParam0);
					Function_34(bParam0, 0);
				}
				bVar0 = Function_48();
				Function_276(bVar0);
				if (Function_47(bParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(false, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(false, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(bParam0->f_188))
				{
					DESTROY_OBJECT(bParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(bParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
					DESTROY_VOLUME(bParam0->f_424);
				}
				bParam0->f_64 = 0.0f;
				*bParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_273(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*bParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && bParam0->f_64 > 60.0f)
			{
				if (bParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_272(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_47(bParam0->f_44, 8))
				{
					Function_271(bParam0 + 192, 0, 1, 1);
					Function_265(bParam0 + 192);
					Function_257(&bVar0, 0, 0, 0);
					Function_257(&bVar0, 0, 0, 0);
					Function_256(bVar0);
				}
				else
				{
					Function_271(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_255(bVar0);
					vVar10 = { StackVal, StackVal, Function_255(bVar0) };
					bVar13 = Function_254(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_253(bVar13))
					{
						if (StackVal || Function_87() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_249(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_248(&(Global_29008[StackVal]), 4194304);
				}
				Function_337(32);
				*bParam0 = 13;
			}
			if (!Function_47(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_5(bParam0 + 48, 128);
					Function_4(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_337(32);
				Function_249(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_253(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_246(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_246(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_246(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*bParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_253(bVar14))
					{
						if (StackVal && (!Function_247(bVar14) && !Function_246(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_245(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_244();
			if (!Function_47(bParam0->f_44, 32))
			{
				if (Function_243())
				{
					bVar15 = 4294967295;
					if (bParam0->f_152 >= 4294967295)
					{
						bVar15 = GET_WEAPON_EQUIPPED(bVar0, bParam0->f_152);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
					}
					if (bVar15 == 4294967295)
					{
						bVar15 = Function_242(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_242(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_242(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_242(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_242(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_242(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_242(bVar0, 46);
												if (bVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_47(bParam0->f_44, 64))
				{
					Function_241(0.5f);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_49(16384, 0);
			Function_240(bVar0, !Function_47(bParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(bParam0->f_160);
			bParam0->f_112 = "";
			*bParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(bParam0->f_84))
			{
				TERMINATE_SCRIPT(bParam0->f_84);
			}
			Function_298(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_42(1);
			}
			else if (!Function_238())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_237(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_236(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_298(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_298(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_47(bParam0->f_44, 4))
				{
					*bParam0 = 17;
				}
				else
				{
					*bParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_298(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_296(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_298(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_296(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_298(bParam0, 1);
			if (Function_238())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_296(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_236(int iParam0) //Position: 0x74CD / 29901
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_237(int iParam0) //Position: 0x74E9 / 29929
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_18();
		iVar0 = "";
		if (Function_47(iParam0->f_44, 256))
		{
			if (Function_47(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_122(&Global_78578 + 96))
			{
				if (FABS(Function_203(&Global_78578 + 96)) > 1.0f)
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

bool Function_238() //Position: 0x75DA / 30170
{
	return (HUD_IS_FADED() || Function_239(0));
}

bool Function_239(bool bParam0) //Position: 0x75E8 / 30184
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

void Function_240(bool bParam0, int iParam1) //Position: 0x768C / 30348
{
	struct<5> Var0;
	
	Function_49(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_339(256))
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

void Function_241(bool bParam0) //Position: 0x76E2 / 30434
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

int Function_242(bool bParam0, int iParam1) //Position: 0x76FF / 30463
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_243() //Position: 0x7710 / 30480
{
	return !Function_87();
}

void Function_244() //Position: 0x771A / 30490
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_48();
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

void Function_245(bool bParam0) //Position: 0x7759 / 30553
{
	if (!Function_253(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_248(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_246(var uParam0, int iParam1) //Position: 0x77B4 / 30644
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_247(bool bParam0) //Position: 0x77D0 / 30672
{
	if (!Function_253(bParam0))
	{
		return 1;
	}
	return Function_246(&(Global_29008[bParam0]), 4);
}

void Function_248(var uParam0, int iParam1) //Position: 0x77EC / 30700
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_249(int iParam0, bool bParam1, int iParam2) //Position: 0x77FB / 30715
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
		if (Function_253(Global_29006))
		{
			Function_248(&(Global_29008[Global_29006]), 131072);
			Function_252(&(Global_29008[Global_29006]), 2097152);
			Function_250(Global_29006);
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
				if (Function_246(&(Global_29008[iVar0]), 4) || Function_246(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_252(&(Global_29008[iVar0]), 2097155);
					Function_248(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_68())
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

void Function_250(int iParam0) //Position: 0x7906 / 30982
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_251())
			{
				return;
			}
		}
		if (!Function_246(&(Global_29008[iParam0]), 2048))
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

bool Function_251() //Position: 0x7985 / 31109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_246(&(Global_29008[iVar0]), 4) || Function_246(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_252(var uParam0, int iParam1) //Position: 0x79EE / 31214
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_253(bool bParam0) //Position: 0x7A05 / 31237
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_254(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7A1B / 31259
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

vector3 Function_255(bool bParam0) //Position: 0x7AB6 / 31414
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_256(bool bParam0) //Position: 0x7AC7 / 31431
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		bVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (bVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, bVar1, GET_WEAPON_MAX_AMMO(bVar1));
		}
		bVar0++;
	}
	return;
}

var Function_257(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x7AFA / 31482
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
					if (Function_264(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_263(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_262(bVar2))
					{
						if (Function_261(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_264(bVar3, 1))
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
						if (Function_264(bVar3, 1))
						{
							bVar24 = (Function_263(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar28, &uVar26))
						{
							Function_258(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_264(bVar3, 1))
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
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return iVar0;
}

void Function_258(var uParam0, var uParam1) //Position: 0x7DDD / 32221
{
	*uParam1 = Function_91(uParam0, Function_259(), 0);
	uParam1->f_4 = Function_91(uParam0, Function_259() + 8, Function_259());
	return;
}

bool Function_259() //Position: 0x7E00 / 32256
{
	return Function_260(39);
}

int Function_260(bool bParam0) //Position: 0x7E0B / 32267
{
	int iVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_261(bool bParam0) //Position: 0x7E39 / 32313
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

bool Function_262(bool bParam0) //Position: 0x7E5B / 32347
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_263(int iParam0, bool bParam1) //Position: 0x7E6D / 32365
{
	if (Function_264(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_264(bool bParam0, int iParam1) //Position: 0x7E87 / 32391
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_265(int iParam0) //Position: 0x7E9A / 32410
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_268(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_48()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_267(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_266(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar5, &uVar3))
			{
				Function_258(uVar3, &Var13);
				Function_266(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_266(struct<5> Param0) //Position: 0x7F41 / 32577
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_262(Param0))
	{
		return;
	}
	bVar0 = Function_48();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_264(bVar1, 1))
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

bool Function_267(int iParam0) //Position: 0x7FC1 / 32705
{
	return Function_16(Global_83864.f_1252, iParam0);
}

void Function_268(int iParam0, int iParam1) //Position: 0x7FD3 / 32723
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_48();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_269(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_269(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_269(23, iParam1))
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
			bVar4 = Function_242(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_242(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_269(int iParam0, int iParam1) //Position: 0x8151 / 33105
{
	return Function_270(iParam0, iParam1) < 4294967295;
}

int Function_270(int iParam0, int iParam1) //Position: 0x8160 / 33120
{
	int iVar0;
	
	if (!Function_262(iParam0))
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

void Function_271(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8193 / 33171
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_48();
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
		Function_266(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_272(bool bParam0, bool bParam1, bool bParam2) //Position: 0x81DE / 33246
{
	float fVar0;
	bool bVar1;
	
	if (Function_68() || !bParam1)
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

bool Function_273(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x827B / 33403
{
	int iVar0;
	
	if (bParam1)
	{
		Function_14(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_14(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_14(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_14(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_14(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_14(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_14(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_14(&iVar0, 1048576);
	}
	return Function_274(bParam0, iVar0);
}

bool Function_274(bool bParam0, int iParam1) //Position: 0x82EA / 33514
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_275(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_275(iParam1, 64))
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

bool Function_275(var uParam0, int iParam1) //Position: 0x83C3 / 33731
{
	return (uParam0 && iParam1) == 0;
}

void Function_276(bool bParam0) //Position: 0x83D0 / 33744
{
	Function_49(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_277(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x83F1 / 33777
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_48();
	Function_288();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_287();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_274(bVar0, 3145855);
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
		bVar9 = Function_339(256);
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
		Function_284(bVar0, 0);
		Function_279();
		Function_278(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_254(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_253(uVar14))
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

void Function_278(char* cParam0, vector3 vParam1) //Position: 0x8568 / 34152
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_279() //Position: 0x85A6 / 34214
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_283(iVar1))
		{
			uVar2 = Function_282(iVar1);
			Function_280(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_280(int iParam0, bool bParam1) //Position: 0x85D8 / 34264
{
	if (!Function_283(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_281(222, Global_26401[iParam0], 0);
		if (Function_137(222) <= 0)
		{
			Function_136(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_136((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_281((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_281(222, bParam1, 0);
	}
	return;
}

int Function_281(int iParam0, bool bParam1, int iParam2) //Position: 0x8661 / 34401
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
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_282(int iParam0) //Position: 0x885C / 34908
{
	if (!Function_283(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_283(int iParam0) //Position: 0x8874 / 34932
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_284(bool bParam0, bool bParam1) //Position: 0x8889 / 34953
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_286(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_333(8192) && !Function_212(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_87())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
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
	if (Function_285())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_285() //Position: 0x8991 / 35217
{
	return Function_47(Global_79962, 2048);
}

var Function_286(bool bParam0) //Position: 0x89A1 / 35233
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

void Function_287() //Position: 0x89D6 / 35286
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_288() //Position: 0x89EB / 35307
{
	Function_291();
	Function_147();
	Function_289();
	return;
}

void Function_289() //Position: 0x89FA / 35322
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_290();
	return;
}

void Function_290() //Position: 0x8A2E / 35374
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_291() //Position: 0x8A3F / 35391
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A58 / 35416
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
	Function_295(bParam0);
	Var6 = { StackVal, StackVal, Function_295(bParam0) };
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
	bVar15 = GET_OBJECT_OWNER(bParam0);
	if (IS_OBJECT_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_OBJECT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_207(bVar32);
			vVar12.f_4 = Function_293(StackVal, StackVal, StackVal, StackVal, vVar3, Function_207(bVar32));
		}
	}
	return Function_277(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_293(vector3 vParam0, vector3 vParam3) //Position: 0x8B0F / 35599
{
	var uVar0;
	
	Function_294(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_294(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8B29 / 35625
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_295(bool bParam0) //Position: 0x8B4C / 35660
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_296(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x8B5D / 35677
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

void Function_297() //Position: 0x8B86 / 35718
{
	if (!Function_46(8))
	{
		Function_45();
	}
	Function_3(8, 1, 1);
	return;
}

void Function_298(bool bParam0, int iParam1) //Position: 0x8B9F / 35743
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(bParam0->f_120))
	{
		return;
	}
	if (Function_47(bParam0->f_48, 256) || Function_47(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_47(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_274(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_4(bParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(bParam0->f_128);
				DETACH_CAMERASHOT(bParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_299(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_47(bParam0->f_48, 8192))
		{
			Function_5(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_338(1048576);
			}
			if (IS_OBJECT_VALID(bParam0->f_124) && IS_OBJECT_VALID(bParam0->f_128))
			{
				GET_POSITION(bParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(bParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_128, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_132, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_128, bParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_132, bParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(bParam0->f_112, 1);
		}
	}
	return;
}

void Function_299(int iParam0) //Position: 0x8D9A / 36250
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_124));
	return;
}

void Function_300(int iParam0, int iParam1) //Position: 0x8DDB / 36315
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_48();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_255(bVar0);
		vVar1 = { StackVal, StackVal, Function_255(bVar0) };
		Function_315(bVar0);
		vVar4 = { StackVal, StackVal, Function_315(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	bVar7 = Function_38();
	iParam0->f_156 = FIND_OBJECT_IN_LAYOUT(bVar7, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		SET_OBJECT_POSITION(iParam0->f_156, vVar1);
		SET_OBJECT_ORIENTATION(iParam0->f_156, vVar4);
	}
	else
	{
		iParam0->f_156 = CREATE_POINT_IN_LAYOUT(bVar7, "DeathAnchorPoint", vVar1, vVar4);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_112))
	{
		iParam0->f_120 = Function_311(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_5(iParam0 + 48, 256);
	}
	else
	{
		Function_255(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_255(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_303(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_302(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_5(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_301(iParam0->f_120);
	return;
}

void Function_301(int iParam0) //Position: 0x8F70 / 36720
{
	Function_287();
	Global_63118 = iParam0;
	return;
}

void Function_302(bool bParam0, bool bParam1) //Position: 0x8F7E / 36734
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_303(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x8F93 / 36755
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_304(&bVar0, uParam2, uParam3, uParam4);
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

void Function_304(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9015 / 36885
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_310(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_309(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_308(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_307(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_306(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_305(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0.65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0.25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1.5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0.35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_305(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9130 / 37168
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_306(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9245 / 37445
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_307(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x935E / 37726
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
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

void Function_308(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9468 / 37992
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
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

void Function_309(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x956E / 38254
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3.512409f, 1.385313f, 11.99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.000168f, 1.399967f, 0.006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_310(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x961E / 38430
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6.044836f, 1.844389f, 8.871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.125951f, 1.612884f, -0.415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_311(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x96D5 / 38613
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_312(&bVar0, uParam2);
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

void Function_312(var uParam0, int iParam1) //Position: 0x974C / 38732
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_314(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_313(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_313(var uParam0, bool bParam1) //Position: 0x97B8 / 38840
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.221893f, 12.0f, 0.202029f };
	Function_315(bParam1);
	vVar3 = { StackVal, StackVal, Function_315(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_207(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_207(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_315(bParam1);
	vVar6 = { StackVal, StackVal, Function_315(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_207(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_207(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_314(var uParam0, bool bParam1) //Position: 0x987A / 39034
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.17905f, 10.0f, 0.125767f };
	Function_315(bParam1);
	vVar3 = { StackVal, StackVal, Function_315(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_207(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_207(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_315(bParam1);
	vVar6 = { StackVal, StackVal, Function_315(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_207(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_207(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_315(bool bParam0) //Position: 0x993C / 39228
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

void Function_316(bool bParam0) //Position: 0x9963 / 39267
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_47(bParam0->f_48, 2048))
	{
		Function_5(bParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(bParam0->f_112))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(bParam0->f_112))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				bVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_262(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_318(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_317("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(bParam0->f_112))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(bParam0->f_112));
			bVar2 = GET_WEAPON_IN_HAND(bParam0->f_112);
			bVar1 = true;
		}
		else
		{
			bVar3 = true;
		}
		if (bVar3)
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
			UI_EXIT("NotorietyMeter");
			UI_EXCLUDE("NotorietyMeter");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_262(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(bParam0->f_112, &vVar20);
						bVar23 = CEIL((VDIST(vVar20, *(&Global_78617 + 2604 + 16)) * 1.093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar23), UI_GET_STRING("stat_yd"));
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

var Function_317(int iParam0) //Position: 0x9C89 / 40073
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

struct<64> Function_318(bool bParam0) //Position: 0x9E9D / 40605
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_340())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_319();
	}
	if (!Function_103(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_103(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_319() //Position: 0x9F43 / 40771
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_320(var uParam0, int iParam1) //Position: 0x9F54 / 40788
{
	if (Function_324(uParam0, iParam1))
	{
		Function_323(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_321(int iParam0) //Position: 0x9F6E / 40814
{
	Function_134(&Global_79378, 0, iParam0);
	return;
}

void Function_322(bool bParam0, bool bParam1) //Position: 0x9F7E / 40830
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_38(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_262(bVar2))
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

void Function_323(var uParam0, int iParam1) //Position: 0x9FFA / 40954
{
	*uParam0 = *iParam1;
	return;
}

bool Function_324(var uParam0, int iParam1) //Position: 0xA006 / 40966
{
	return *uParam0 == *iParam1;
}

void Function_325(int iParam0, int iParam1) //Position: 0xA013 / 40979
{
	Function_326(iParam0, (Function_100(iParam0) + iParam1));
	return;
}

void Function_326(int iParam0, int iParam1) //Position: 0xA026 / 40998
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_327(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA04F / 41039
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_328(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_328(int iParam0) //Position: 0xA0CA / 41162
{
	char* cVar0[16];
	
	if (!Function_329())
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

bool Function_329() //Position: 0xA109 / 41225
{
	if (Function_47(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_330(int iParam0, bool bParam1, int iParam2) //Position: 0xA124 / 41252
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_103(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_331(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_331(bool bParam0, int iParam1, bool bParam2) //Position: 0xA16B / 41323
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_212(iParam1, bParam2);
	}
	if (!Function_103(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_332(iParam1), 64);
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

var Function_332(int iParam0) //Position: 0xA1EC / 41452
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

int Function_333(int iParam0) //Position: 0xA505 / 42245
{
	return Function_334(&Global_79349, iParam0);
}

int Function_334(var uParam0, bool bParam1) //Position: 0xA514 / 42260
{
	return Function_47(uParam0->f_44, bParam1);
}

int Function_335(int iParam0) //Position: 0xA523 / 42275
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

float Function_336() //Position: 0xA539 / 42297
{
	if (Function_47(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_47(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_337(int iParam0) //Position: 0xA56F / 42351
{
	Function_12(&Global_78617 + 52, iParam0);
	return;
}

void Function_338(int iParam0) //Position: 0xA580 / 42368
{
	Function_14(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_339(bool bParam0) //Position: 0xA5D9 / 42457
{
	return Function_16(Global_78617.f_52, bParam0);
}

bool Function_340() //Position: 0xA5EA / 42474
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_341(bool bParam0) //Position: 0xA5F8 / 42488
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_342() //Position: 0xA60A / 42506
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_343(GET_LOCAL_SLOT(), 1, 0);
}

int Function_343(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA621 / 42529
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_103(bParam0))
			{
				if (!Function_331(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_344() //Position: 0xA665 / 42597
{
	return Function_333(2);
}

var Function_345(int iParam0, int iParam1) //Position: 0xA66F / 42607
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_346(bool bParam0, bool bParam1) //Position: 0xA682 / 42626
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_48();
	bVar1 = IS_ACTOR_VALID(bVar0);
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	Function_3(32, 0, 1);
	bParam0->f_48 = 0;
	bParam0->f_420 = 0.0f;
	bParam0->f_112 = "";
	bParam0->f_12 = 0;
	Function_5(bParam0 + 48, 2048);
	UNK_0x7E0CDD87();
	Call_Loc(bParam0->f_168);
	Function_49(65536, 0);
	Function_49(8388608, 0);
	SET_HUD_MAP_DRAW_ENABLED(0);
	if (Function_47(bParam0->f_44, 8))
	{
		Function_321(0);
	}
	else if (bVar1)
	{
		bParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(false, 0, 1, 0);
		if (IS_PLAYER_DEADEYE(false))
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
	bParam0->f_56 = 4294967295;
	bParam0->f_68 = 0.0f;
	if (Function_320(bParam0 + 116, &Global_78617 + 2648))
	{
		bParam0->f_112 = "";
	}
	if (bParam1)
	{
		Function_316(bParam0);
	}
	*bParam0 = 2;
	return;
}

void Function_347(bool bParam0, var uParam1, bool bParam2) //Position: 0xA7A2 / 42914
{
	var uVar0;
	var uVar1;
	
	if (iLocal_801 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_797, 1.0f, 0);
	}
	Local_805.f_16 = uParam1;
	Local_805.f_20 = bParam2;
	Function_361(bParam0, 0, 0, 0);
	Function_351(bParam0, 43356);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_122(&Global_78578 + 96))
		{
			Function_121(&Global_78578 + 96);
		}
		Function_98(4294967295);
	}
	CANCEL_DEADEYE();
	Function_349(0, &uVar0, &uVar1);
	UI_EXIT("XpHud");
	if (Function_363(bParam0))
	{
		Function_348(bParam0);
	}
	return;
}

void Function_348(bool bParam0) //Position: 0xA81D / 43037
{
	if (!Function_363(bParam0))
	{
	}
	if (!Function_43(2048))
	{
		Function_338(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

var Function_349(bool bParam0, var uParam1, int iParam2) //Position: 0xA850 / 43088
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	*uParam1 = 100000.0f;
	if (Function_122(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_121(&Global_78578 + 96);
		}
		*uParam1 = Function_117(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_103(bVar1))
		{
			bVar0 = (bVar0 + Function_115(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_350(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_113(iVar3, &uVar4, &iVar2);
		bVar0 = (bVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_110();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_108(bVar1, &iVar6, &iVar2);
			bVar0 = (bVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_107(bVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_106(bVar0, *iParam2, iLocal_804);
	return bVar0;
}

var Function_350(float fParam0) //Position: 0xA923 / 43299
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_113(iVar0, &fVar1, &iVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

void Function_351(bool bParam0, int iParam1) //Position: 0xA950 / 43344
{
	bParam0->f_180 = iParam1;
	return;
}

int Function_352() //Position: 0xA95C / 43356
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (Local_805)
	{
		case 0x00000000:
			Function_360(Local_805.f_16);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(Local_805.f_20, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_359(&Local_805 + 4))
			{
				Function_357(&Local_805 + 4);
			}
			Local_805 = 1;
			break;
		
		case 0x00000001:
			if (Function_355(&Local_805 + 4) <= 7.0f)
			{
				Function_94(&iVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_353() >= 4294967295)
				{
					Function_90(iVar2, &iVar0, &bVar1, bVar3);
					Function_82(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					Local_805 = 3;
				}
				else
				{
					Local_805 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_355(&Local_805 + 4) <= 5.0f)
			{
				Local_805 = 3;
			}
			break;
		
		case 0x00000003:
			UI_POP("MissionFailedMenu");
			HUD_FADE_OUT(0.0f, 1f, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_353() //Position: 0xAA7E / 43646
{
	if (!Function_354())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_354() //Position: 0xAA93 / 43667
{
	return UNK_0xA80C6DE6(&Global_78578);
}

float Function_355(int iParam0) //Position: 0xAAA0 / 43680
{
	if (Function_359(iParam0))
	{
		if (Function_356(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_356(int iParam0) //Position: 0xAB68 / 43880
{
	return Function_47(*iParam0, 2);
}

void Function_357(int iParam0) //Position: 0xAB75 / 43893
{
	if (!Function_359(iParam0))
	{
		Function_358(iParam0, 0.0f);
	}
	return;
}

void Function_358(int iParam0, float fParam1) //Position: 0xAB8A / 43914
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_5(iParam0, 1);
	Function_4(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_359(int iParam0) //Position: 0xABAB / 43947
{
	return Function_47(*iParam0, 1);
}

void Function_360(bool bParam0) //Position: 0xABB8 / 43960
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_361(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAC22 / 44066
{
	if (bParam1)
	{
		Function_156(7, 1);
		Function_156(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_344())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_104(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_362())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_104(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_5(iParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_154(37, 0);
		Function_4(iParam0 + 44, 4);
	}
	else
	{
		Function_156(6, 1);
		Function_154(37, 0);
		Function_4(iParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_5(iParam0 + 44, 256);
	}
	else
	{
		Function_4(iParam0 + 44, 256);
	}
}

bool Function_362() //Position: 0xACD0 / 44240
{
	return Function_333(16);
}

bool Function_363(bool bParam0) //Position: 0xACDB / 44251
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_364() //Position: 0xACEF / 44271
{
	Function_372(4);
	return;
}

void Function_365() //Position: 0xACF9 / 44281
{
	if (Local_454.f_68)
	{
		if (!Function_212(4096, 1))
		{
			Function_49(4096, 1);
		}
		else if (Function_367())
		{
			Function_366(&Local_454);
		}
	}
	return;
}

void Function_366(var uParam0) //Position: 0xAD28 / 44328
{
	if ((uParam0->f_64 && uParam0->f_84 == 1006) && uParam0->f_84 == 1104)
	{
		uParam0->f_84 = 1006;
	}
	if ((!uParam0->f_64 && uParam0->f_84 == 1006) && uParam0->f_84 == 1104)
	{
		uParam0->f_84 = 1104;
	}
	return;
}

bool Function_367() //Position: 0xAD6F / 44399
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_103(bVar0))
		{
			iVar1++;
			if (Function_331(bVar0, 4096, 1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	if (iVar1 != 4 && iVar2 <= 2)
	{
		return 1;
	}
	if (iVar1 != 3 && iVar2 <= 2)
	{
		return 1;
	}
	if (iVar1 != 2 && iVar2 <= 1)
	{
		return 1;
	}
	if (iVar1 != 1 && iVar2 <= 1)
	{
		return 1;
	}
	return 0;
}

void Function_368(var uParam0, bool bParam1, int iParam2) //Position: 0xADF3 / 44531
{
	*uParam0 = bLocal_216;
	*bParam1 = iLocal_217;
	*iParam2 = Function_369();
	return;
}

int Function_369() //Position: 0xAE09 / 44553
{
	return Function_370(bLocal_216);
}

int Function_370(int iParam0) //Position: 0xAE14 / 44564
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar1 = (iVar1 + Function_371(iVar0));
		iVar0++;
	}
	return iVar1;
}

int Function_371(int iParam0) //Position: 0xAE47 / 44615
{
	int iVar0;
	float fVar1;
	bool bVar2;
	
	if (iParam0 <= 0)
	{
		return 0;
	}
	iVar0 = iParam0;
	fVar1 = 3.0f;
	if (iVar0 > 16)
	{
		iVar0 = 15;
		fVar1 = (fVar1 + (IntToFloat((iParam0 - 16)) * 0.25f));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	bVar2 = (IntToFloat(Local_404[iVar02]) * fVar1);
	if (bVar2 > 1500.0f)
	{
		bVar2 = 1500.0f;
	}
	return ROUND(bVar2);
}

void Function_372(int iParam0) //Position: 0xAEA5 / 44709
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
			Function_373(iParam0);
		}
	}
	return;
}

void Function_373(bool bParam0) //Position: 0xAED7 / 44759
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_374() //Position: 0xAEE6 / 44774
{
	switch (iLocal_438)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_681();
			}
			break;
		
		case 0x00000000:
			Function_438();
			break;
		
		case 0x00000065:
			Function_375();
			break;
	}
	return;
}

void Function_375() //Position: 0xAF1E / 44830
{
	if (Function_436())
	{
		Function_435();
	}
	switch (iLocal_439)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_121(&Global_78578 + 96);
			}
			if (IS_ACTOR_VALID(Function_48()))
			{
				SET_ACTOR_PROOF(Function_48(), 159);
			}
			SET_TIME_OF_DAY(Global_63402);
			SET_TIME_ACCELERATION(0.0f);
			Function_161();
			Function_434();
			UI_EXIT("MPScoringDisplays");
			UI_EXIT("NetTimer");
			UI_EXIT("ScoreGraph");
			UI_POP("NetTimer");
			UI_POP("ScoreGraph");
			Function_287();
			NET_LOG(bLocal_793, "Mission StageFinal", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_433();
			Function_432(74);
			break;
		
		case 0x0000004A:
			NET_LOG(bLocal_793, "Mission StageFinal", "Transitioning to GID_COMPLETE", false, false, false, false);
			Function_432(106);
			break;
		
		case 0x0000006A:
			Function_431();
			if (Function_363(&Local_483))
			{
				Function_351(&Local_483, 45473);
				Function_377(&Local_483, "COOP_everyone_dead", 0, 0, 0, 0);
				Function_376(&Local_483, "MEX_MISSION_COMPLETE_SONG_01");
				Function_361(&Local_483, 1, 0, 0);
				Function_348(&Local_483);
			}
			NET_LOG(bLocal_793, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", false, false, false, false);
			break;
	}
	return;
}

void Function_376(var uParam0, bool bParam1) //Position: 0xB126 / 45350
{
	uParam0->f_40 = bParam1;
	return;
}

void Function_377(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB132 / 45362
{
	int iVar0;
	
	iParam0->f_16 = uParam1;
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

int Function_378() //Position: 0xB1A1 / 45473
{
	var uVar0;
	
	switch (Local_447)
	{
		case 0x000003E8:
			if (Function_430(&iLocal_816))
			{
				iLocal_823 = 15;
				Function_429(&Local_447 + 4);
				Function_424();
				Function_3(8, 0, 1);
				Function_423();
				if (UNK_0xCDA6BB6C())
				{
					uVar0 = UNK_0xFF1F1730();
					Local_447.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
				}
				else
				{
					Local_447.f_16 = Function_419(Local_71, 0, Local_71, 1, 0, 0);
					if (IS_OBJECT_VALID(Local_447.f_16))
					{
					}
					else
					{
						LOG_ERROR("Sepulcro_GY_cutsceneFinal - Failed to create mp_gy_Sepulcro_outro_cutscene");
					}
				}
				Local_447 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_447.f_16), false))
			{
				Function_418(Global_34573, 1, 1);
				Local_447 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_417();
				Local_447 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_403(1003, 1, 0x3f800000))
			{
				Function_402();
				Local_447 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (Function_355(&Local_447 + 4) < 2.0f)
			{
				DECOR_SET_BOOL(Local_71, "__CameraReady", true);
				Local_447 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_381(&iLocal_816, 49861) && GET_CUTSCENEOBJECT_SEQUENCE(Local_447.f_16) != 2)
			{
				Function_429(&Local_447 + 4);
				Function_380();
				Local_447 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_239(1))
			{
				Function_418(Global_34573, 0, 1);
				AUDIO_CLEAR_CONVERSATION_HISTORY();
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_379();
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Local_71, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_447.f_16))
				{
					DESTROY_OBJECT(Local_447.f_16);
				}
				Local_447 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_447 = 1104;
			}
			break;
	}
	return 0;
}

void Function_379() //Position: 0xB3B3 / 46003
{
	Function_50(2, 0, 1, 0, 1, 0, 0, 1, 1, 1);
	return;
}

void Function_380() //Position: 0xB3C6 / 46022
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_381(int iParam0, int iParam1) //Position: 0xB3E0 / 46048
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<17> Var7;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = fVar0 <= iParam0->f_20;
	Function_94(&iVar5, &bVar3, &iVar4);
	iVar6 = 5;
	switch (bVar3)
	{
		case 0x00000002:
			iVar6 = 1;
			break;
		
		case 0x00000001:
			iVar6 = 2;
			break;
		
		case 0x00000000:
			iVar6 = 3;
			break;
		
		case 0xFFFFFFFF:
		default:
			iVar6 = 4;
			break;
	}
	switch (*iParam0)
	{
		case 0x00000004:
			HUD_CLEAR_BIG_TEXT();
			HUD_CLEAR_BIG_TEXT_QUEUE();
			Function_423();
			DESTROY_ACTOR(Function_48());
			UI_ENTER("HudMPNoFun");
			HUD_FADE_IN(1.0f, 1065353216);
			iParam0->f_12 = 0;
			iParam0->f_24 = 0;
			*iParam0 = 5;
			break;
		
		case 0x00000005:
			Stack.Push(iVar6);
			Call_Loc(iParam1);
			if (StackVal)
			{
				UI_SET_STYLE("MPSplashTitle", 22);
				Var7.f_16 = 150;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_FIRST_MASTER", &Var7);
				Var7.f_16 = 350;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_UNLOCK_MASTER", &Var7);
				Var7.f_16 = 750;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_SECOND_MASTER", &Var7);
				UI_PUSH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				UI_SET_TEXT("MPSplashTitle", "COOP_victory");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s2", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s3", "Common_Null");
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_INCLUDE("MPSplashItem.s2");
				UI_INCLUDE("MPSplashItem.s3");
				UI_REFRESH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				iParam0->f_20 = (fVar0 + 2.0f);
				Function_89(iParam0);
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_398();
			if (bVar1)
			{
				if (Function_392(iParam0))
				{
					iParam0->f_20 = (fVar0 + 3.3f);
				}
				*iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_398();
			if (bVar1)
			{
				Function_390(iParam0->f_24, 0);
				iParam0->f_12 = 4294967295;
				iParam0->f_16 = 4294967295;
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			Function_398();
			if (bVar1)
			{
				if (Function_389(iParam0))
				{
					bVar2 = Function_388(iParam0->f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_387(iParam0->f_12)), I2STR(bVar2), false);
					Function_386("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					iParam0->f_20 = (fVar0 + 1.8f);
					*iParam0 = 8;
					iParam0->f_24 = (iParam0->f_24 + bVar2);
				}
				else
				{
					iParam0->f_20 = (fVar0 + 0.0f);
					if (Function_385() >= 0)
					{
						*iParam0 = 11;
						iParam0->f_12 = 0;
					}
					else
					{
						iParam0->f_20 = ((1.5f - 1.0f) + fVar0);
						*iParam0 = 13;
					}
				}
			}
			break;
		
		case 0x00000008:
			Function_398();
			if (bVar1)
			{
				Function_390(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x0000000B:
			Function_398();
			if (iParam0->f_12 <= Function_385())
			{
				if (bVar1)
				{
					Function_384(iParam0);
					iParam0->f_20 = (fVar0 + 1.8f);
					*iParam0 = 12;
				}
			}
			else
			{
				iParam0->f_20 = (fVar0 + 1.5f);
				*iParam0 = 13;
			}
			break;
		
		case 0x0000000C:
			Function_398();
			if (bVar1)
			{
				Function_390(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				iParam0->f_12++;
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000D:
			Function_398();
			if (bVar1)
			{
				Function_390(iParam0->f_24, 1);
				Function_106(iParam0->f_24, bVar3, 0);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_398();
			if (bVar1)
			{
				Function_383(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_95(1), "Unlock_Silver"))
				{
					*iParam0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_95(1), "Unlock_Adv"))
				{
					*iParam0 = 16;
				}
				else
				{
					*iParam0 = 17;
				}
			}
			break;
		
		case 0x0000000F:
			Function_398();
			if (bVar1)
			{
				Function_382(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_95(1), "Unlock_Adv"))
				{
					*iParam0 = 16;
				}
				else
				{
					*iParam0 = 17;
				}
			}
			break;
		
		case 0x00000010:
			Function_398();
			if (bVar1)
			{
				Function_382(0);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 17;
			}
			break;
		
		case 0x00000011:
			Function_398();
			if (bVar1)
			{
				Function_81(iParam0);
				iParam0->f_20 = (fVar0 + 0.5f);
				*iParam0 = 19;
			}
			break;
		
		case 0x00000013:
			NET_LOG(true, "VICTORY SEQUENCE", "Sequence complete!", false, false, false, false);
			return 1;
			break;
	}
	return 0;
}

void Function_382(bool bParam0) //Position: 0xB9BA / 47546
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_386("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_386("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_383(bool bParam0) //Position: 0xBA4B / 47691
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_94(&iVar2, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 0x00000002:
			bVar3 = "COOP_victory_gold";
			bVar4 = "HUD_MP_AWARDS_GOLD_MASTER";
			break;
		
		case 0x00000001:
			bVar3 = "COOP_victory_Silver";
			bVar4 = "HUD_MP_AWARDS_SILVER_MASTER";
			break;
		
		case 0x00000000:
			bVar3 = "COOP_victory_Bronze";
			bVar4 = "HUD_MP_AWARDS_BRONZE_MASTER";
			break;
		
		case 0xFFFFFFFF:
		default:
			bVar3 = "coop_victory_nothing";
			bVar4 = "HUD_MP_AWARDS_FAIL_MASTER";
			break;
	}
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND(bVar4);
	}
	Function_386(bVar3);
	return;
}

void Function_384(var uParam0) //Position: 0xBB70 / 47984
{
	bool bVar0;
	int iVar1;
	
	Function_108(uParam0->f_12, &iVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(iVar1), I2STR(bVar0), false);
	Function_386("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	uParam0->f_24 = (uParam0->f_24 + bVar0);
	return;
}

int Function_385() //Position: 0xBC06 / 48134
{
	return Function_110();
}

void Function_386(bool bParam0) //Position: 0xBC0F / 48143
{
	UI_SET_TEXT("MPSplashItem.s1", bParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_387(int iParam0) //Position: 0xBC69 / 48233
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

bool Function_388(bool bParam0) //Position: 0xBE0D / 48653
{
	return Function_115(bParam0);
}

bool Function_389(int iParam0) //Position: 0xBE18 / 48664
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 100000;
	bVar3 = 4294967295;
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar1 = Function_388(bVar0);
			if (iVar1 != iParam0->f_16 && bVar0 < iParam0->f_12)
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
			}
			else if (iVar1 > iVar2 && iVar1 < iParam0->f_16)
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
			}
		}
		bVar0++;
	}
	if (bVar3 == 4294967295)
	{
		return 0;
	}
	iParam0->f_12 = bVar3;
	iParam0->f_16 = iVar2;
	return 1;
}

void Function_390(bool bParam0, bool bParam1) //Position: 0xBE92 / 48786
{
	if (bParam1)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_FINAL_DLC1_MASTER");
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("COOP_victory_grandtotal"), I2STR(bParam0), false, false);
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("COOP_victory_total"), I2STR(bParam0), false, false);
	}
	Function_391(1);
	return;
}

void Function_391(bool bParam0) //Position: 0xBF65 / 48997
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (bParam0)
	{
		Function_386("Common_Null");
	}
	return;
}

bool Function_392(int iParam0) //Position: 0xBFEA / 49130
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_122(&Global_78578 + 96))
	{
		fVar1 = Function_117(&Global_78578 + 96);
	}
	Var2 = { StackVal, StackVal, StackVal, Function_397(fVar1) };
	iVar0 = Function_393(fVar1);
	if (Var2 >= 0)
	{
		straddi(&cVar6, Var2, 32);
		stradd(&cVar6, ":", 32);
		if (StackVal <= 10)
		{
			stradd(&cVar6, "0", 32);
		}
	}
	straddi(&cVar6, StackVal, 32);
	stradd(&cVar6, ":", 32);
	straddi(&cVar6, (StackVal / 10), 32);
	straddi(&cVar6, (StackVal % 10), 32);
	stradd(&cVar6, ".", 32);
	bVar14 = FLOOR((Var2.f_12 * 100.0f));
	straddi(&cVar6, (bVar14 / 10), 32);
	straddi(&cVar6, (bVar14 % 10), 32);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_time"), &cVar6, false, false);
	iParam0->f_24 = (iParam0->f_24 + iVar0);
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_1");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	return 1;
}

int Function_393(int iParam0) //Position: 0xC15F / 49503
{
	int iVar0;
	int iVar1;
	
	if (Function_353() >= 4294967295)
	{
		iVar1 = Function_396(iParam0);
		if (iVar1 >= 4294967295)
		{
			Function_113(iVar1, &iParam0, &iVar0);
		}
	}
	return Function_394(iParam0);
	return iVar0;
}

int Function_394(float fParam0) //Position: 0xC18A / 49546
{
	int iVar0;
	int iVar1;
	
	if (Function_353() >= 4294967295)
	{
		iVar1 = Function_396(fParam0);
		if (iVar1 >= 4294967295)
		{
			Function_395(iVar1, &iVar0);
		}
	}
	return iVar0;
}

void Function_395(int iParam0, int iParam1) //Position: 0xC1AD / 49581
{
	if (iParam0 == 2)
	{
		*iParam1 = 1000;
	}
	else if (iParam0 == 1)
	{
		*iParam1 = 500;
	}
	else if (iParam0 == 0)
	{
		*iParam1 = 200;
	}
	return;
}

int Function_396(float fParam0) //Position: 0xC1DC / 49628
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	Function_113(2, &fVar0, &iVar3);
	Function_113(1, &fVar1, &iVar3);
	Function_113(0, &fVar2, &iVar3);
	iVar3 = iVar3;
	fVar0 = 20.0f;
	fVar1 = 10.0f;
	fVar2 = 5.0f;
	if (fParam0 <= fVar2)
	{
		if (fParam0 <= fVar1)
		{
			if (fParam0 <= fVar0)
			{
				return 2;
			}
			return 1;
		}
		return 0;
	}
	return 4294967295;
}

struct<16> Function_397(var uParam0) //Position: 0xC22E / 49710
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

void Function_398() //Position: 0xC29F / 49823
{
	if (!UI_ISACTIVE("MPSplash"))
	{
		UI_SHOW("MPSplash");
	}
	return;
}

int Function_399(int iParam0) //Position: 0xC2C5 / 49861
{
	switch (iLocal_823)
	{
		case 0x0000000F:
			if (Function_355(&Local_447 + 4) < 2.0f)
			{
				if (iParam0 == 1)
				{
					Function_400("UN_Narr_Outro_didWell", 0);
				}
				else if (iParam0 == 2)
				{
					Function_400("UN_Narr_Outro_didOk", 0);
				}
				else
				{
					Function_400("UN_Narr_Outro_didPoor", 0);
				}
				iLocal_823 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_400(int iParam0, int iParam1) //Position: 0xC365 / 50021
{
	iParam1 = iParam1;
	Function_401(iParam0);
	return;
}

void Function_401(bool bParam0) //Position: 0xC374 / 50036
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		if (STRING_CONTAINS_STRING(bParam0, "UN_Narr_Outro"))
		{
			bVar0 = true;
		}
		bVar1 = "";
		if (bVar0)
		{
			bVar1 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar1, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(bVar0, 0);
	return;
}

void Function_402() //Position: 0xC3D3 / 50131
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

bool Function_403(bool bParam0, bool bParam1, float fParam2) //Position: 0xC402 / 50178
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_416(bParam0);
	}
	Function_27(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_20(&Var0);
	}
	if (Function_415(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_414(&Var0, 0);
		Function_20(&Var0);
		Function_22();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_413(bParam0, iVar6, &uVar7))
	{
		if (Function_412())
		{
			if (!Function_411(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_410(&Var0, 1);
				Function_20(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_20(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_404(bParam0))
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
		Function_20(&Var0);
	}
	return 0;
}

bool Function_404(int iParam0) //Position: 0xC655 / 50773
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_409(bVar0))
		{
			iVar1 = Function_405(bVar0);
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

int Function_405(bool bParam0) //Position: 0xC698 / 50840
{
	int iVar0;
	
	Function_408(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_28(&iVar0);
	}
	else
	{
		Function_407(&iVar0, bParam0);
	}
	return Function_406(&iVar0);
}

int Function_406(int iParam0) //Position: 0xC6BF / 50879
{
	return *iParam0;
}

void Function_407(var uParam0, int iParam1) //Position: 0xC6C8 / 50888
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_408(int iParam0) //Position: 0xC6DB / 50907
{
	Function_26(iParam0, 4294967286);
	return;
}

bool Function_409(bool bParam0) //Position: 0xC6E9 / 50921
{
	return Function_103(bParam0);
}

void Function_410(var uParam0, bool bParam1) //Position: 0xC6F4 / 50932
{
	if (bParam1)
	{
		Function_5(uParam0, 2);
	}
	else
	{
		Function_4(uParam0, 2);
	}
	return;
}

bool Function_411(bool bParam0) //Position: 0xC70E / 50958
{
	return Function_47(*bParam0, 2);
}

bool Function_412() //Position: 0xC71B / 50971
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

bool Function_413(int iParam0, var uParam1, int iParam2) //Position: 0xC739 / 51001
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
		if (Function_409(iVar0))
		{
			iVar1 = Function_405(iVar0);
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

void Function_414(int iParam0, bool bParam1) //Position: 0xC78A / 51082
{
	if (bParam1)
	{
		Function_5(iParam0, 1);
	}
	else
	{
		Function_4(iParam0, 1);
	}
	return;
}

bool Function_415(int iParam0) //Position: 0xC7A4 / 51108
{
	return Function_47(*iParam0, 1);
}

void Function_416(var uParam0) //Position: 0xC7B1 / 51121
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = uParam0;
	Function_28(&uVar1);
	if (Function_406(&uVar1) != bVar0)
	{
		Function_27(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_47(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_23(bVar0);
		Function_410(&Var2, 0);
		Function_20(&Var2);
	}
	return;
}

void Function_417() //Position: 0xC8AE / 51374
{
	*(&Local_454 + 8) = { 0.0f, 0.0f, 0.0f };
	*(&Local_454 + 20) = { 0.0f, 0.0f, 0.0f };
	Local_454.f_32 = 8.0f;
	Local_454.f_36 = "";
	Local_454.f_52 = 0;
	Local_454.f_72 = 1;
	Local_454.f_92 = 1;
	Local_454.f_76 = 1;
	Local_454.f_60 = 1;
	Local_454.f_64 = 1;
	Local_454.f_84 = Local_447;
	Local_454.f_68 = 0;
	Local_454.f_88 = 0;
	Local_454.f_96 = 1;
	Local_447.f_24 = 0;
	Function_49(4096, 0);
	Function_49(8192, 0);
	return;
}

void Function_418(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC92C / 51500
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

var Function_419(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC9C6 / 51654
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "mp_gy_sepulcro_outro", 2, 1);
	}
	Function_420(&bVar0, uParam2);
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

void Function_420(var uParam0, char* cParam1) //Position: 0xCA48 / 51784
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_422(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_421(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_421(int iParam0) //Position: 0xCAAB / 51883
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1375.384f, 13.66542f, 4297.716f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.124402f, -0.444915f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_422(var uParam0) //Position: 0xCB15 / 51989
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1385.251f, 22.04336f, 4313.704f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.419732f, -1.333437f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_423() //Position: 0xCB7F / 52095
{
	Function_3(1024, 1, 0);
	Function_3(1, 0, 0);
	return;
}

void Function_424() //Position: 0xCB93 / 52115
{
	Function_425(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_425(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xCBA8 / 52136
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
	HUD_ENABLE(false);
	Function_18();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_48();
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
			if (Function_68())
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
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_255(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_55(), 2, Function_255(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_53(19, 1, 0, 0);
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
	if (iParam10 && !Function_329())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_428()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_428()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
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
	if (Function_427(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_426(0x4000000);
	}
	if (Function_427(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_426(0x8000000);
	}
}

void Function_426(int iParam0) //Position: 0xCE56 / 52822
{
	int iVar0;
	
	if (Function_47(iParam0, 1) && Function_47(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_427(int iParam0) //Position: 0xCE8A / 52874
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_428() //Position: 0xCEA6 / 52902
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

void Function_429(int iParam0) //Position: 0xCF25 / 53029
{
	Function_358(iParam0, 0.0f);
	return;
}

bool Function_430(int iParam0) //Position: 0xCF31 / 53041
{
	switch (*iParam0)
	{
		case 0x00000000:
			if (!HUD_IS_FADED())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			HUD_ENABLE(false);
			UI_EXIT("MPScoringDisplays");
			UI_ENTER("HudMPNoFun");
			*iParam0 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				*iParam0 = 4;
				return 1;
			}
			if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			break;
		
		case 0x00000002:
			iParam0->f_20 = (iParam0->f_20 + 1.0f);
			if (iParam0->f_20 < 5.0f)
			{
				*iParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_ENTER("LoadingSpinner");
				*iParam0 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_431() //Position: 0xD016 / 53270
{
	return;
}

void Function_432(int iParam0) //Position: 0xD01C / 53276
{
	char* cVar0[32];
	
	iLocal_439 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_438)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "04", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "05", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "06", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "07", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "09", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "10", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
	}
	stradd(&cVar0, " - ", 32);
	if (iParam0 <= 6 && iParam0 >= 104)
	{
		stradd(&cVar0, "GOAL ", 32);
		straddi(&cVar0, (iParam0 + 1 - 6), 32);
	}
	else if (iParam0 == 0)
	{
		stradd(&cVar0, "INITIALIZE", 32);
	}
	else if (iParam0 == 1)
	{
		stradd(&cVar0, "nSTREAMING", 32);
	}
	else if (iParam0 == 3)
	{
		stradd(&cVar0, "CUTSCENE", 32);
	}
	else if (iParam0 == 105)
	{
		stradd(&cVar0, "FADE OUT", 32);
	}
	else if (iParam0 == 106)
	{
		stradd(&cVar0, "COMPLETE", 32);
	}
	return;
}

void Function_433() //Position: 0xD1AF / 53679
{
	return;
}

void Function_434() //Position: 0xD1B5 / 53685
{
	iLocal_794 = 1;
	Function_96(iLocal_794, 0);
	return;
}

void Function_435() //Position: 0xD1C6 / 53702
{
	return;
}

bool Function_436() //Position: 0xD1CC / 53708
{
	return Function_437(iLocal_439);
}

int Function_437(int iParam0) //Position: 0xD1D8 / 53720
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_438() //Position: 0xD220 / 53792
{
	if (Function_436() && iLocal_439 == 6)
	{
		Function_675();
	}
	if ((((iLocal_439 == 0 && iLocal_439 == 1) && iLocal_439 == 3) && iLocal_439 == 4) && !Local_758.f_52)
	{
		Function_671(&iLocal_195, (Function_369() - Function_674()));
	}
	if (GET_PLAYER_COMBATMODE() == 2)
	{
		iLocal_272 = 1;
	}
	Function_669();
	if (((((((iLocal_439 != 6 || iLocal_439 != 7) || iLocal_439 != 8) || iLocal_439 != 9) || iLocal_439 != 10) || iLocal_439 != 11) || iLocal_439 != 12) || iLocal_439 != 13)
	{
		if (Local_758.f_52)
		{
			UI_REMOVE_MESSAGE_IN_QUEUE("COOP_now_dead", 1, 0);
		}
		switch (iLocal_270)
		{
			case 0x00000000:
				Function_666(&iLocal_269, &iLocal_233, Local_758.f_52);
				iLocal_270 = 1;
				break;
			
			case 0x00000001:
				Function_663(&iLocal_268, &iLocal_233);
				iLocal_270 = 2;
				break;
			
			case 0x00000002:
				Function_662();
				iLocal_270 = 3;
				break;
			
			case 0x00000003:
				Function_661(StackVal, StackVal, *(&Local_71 + 12));
				Function_656();
				iLocal_270 = 4;
				break;
			
			case 0x00000004:
				Function_193(&cLocal_234);
				iLocal_270 = 5;
				break;
			
			case 0x00000005:
				Function_655(&Local_758 + 60, ((((Local_758.f_52 || iLocal_439 != 10) || iLocal_439 != 11) || iLocal_439 != 12) || iLocal_439 != 13));
				Function_653(((((Local_758.f_52 || iLocal_439 != 10) || iLocal_439 != 11) || iLocal_439 != 12) || iLocal_439 != 13));
				Function_652();
				iLocal_270 = 6;
				break;
			
			case 0x00000006:
				Function_651(&iLocal_813, Local_758.f_52);
				iLocal_270 = 7;
				break;
			
			case 0x00000007:
				Function_649();
				iLocal_270 = 8;
				break;
			
			case 0x00000008:
				Function_647(&bLocal_271);
				iLocal_270 = 9;
				break;
			
			case 0x00000009:
				Function_645(StackVal, &uLocal_261, Local_71);
				iLocal_270 = 0;
				break;
		}
		Function_644(&Local_758 + 60, &uLocal_248, &iLocal_249, &iLocal_250);
		Function_642(Local_758.f_52);
		if (iLocal_794)
		{
			Function_22();
			Function_432(106);
		}
	}
	if (Local_758.f_52)
	{
		if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
		{
			if (!Function_331(GET_LOCAL_SLOT(), 81922, 0))
			{
				Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 8);
			}
		}
		if (NET_IS_SESSION_HOST() && !Function_120(&Global_78578 + 96))
		{
			Function_121(&Global_78578 + 96);
		}
	}
	switch (iLocal_439)
	{
		case 0x00000000:
			NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_417();
			Function_641();
			Function_639(&iLocal_249);
			Function_425(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			bLocal_591 = CREATE_OBJECT_ITERATOR(Local_71);
			Local_758.f_52 = 0;
			Function_432(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4) && STREAMING_IS_WORLD_LOADED())
			{
				if (Function_403(3, 1, 0x3f800000))
				{
					SET_TIME_OF_DAY(Global_63402);
					SET_TIME_ACCELERATION(0.0f);
					bLocal_214 = Function_635(Local_71, 0, 1, 0, 0);
					Function_628();
					Function_432(3);
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(bLocal_214))
			{
				Function_50(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_30(&Local_483, 0);
				Function_432(4);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_POST_CUTSCENE", false, false, false, false);
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_403(6, 1, 0x3f800000))
				{
					HUD_FADE_IN(1.0f, 1065353216);
					if (NET_IS_SESSION_HOST())
					{
						Function_627(&Global_78578 + 96);
					}
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					if (NET_IS_SESSION_HOST())
					{
						Function_196(&Local_758 + 60, 180.0f);
						Function_121(&Local_758 + 60);
					}
					Function_644(&Local_758 + 60, &uLocal_248, &iLocal_249, &iLocal_250);
					Function_626(&iLocal_250);
					Function_619(&cLocal_242, &uLocal_243);
					NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
					DELETE_WEAPON_FROM_ACTOR(Function_48(), 22);
					GIVE_WEAPON_TO_ACTOR(Function_48(), 33, 0.0f, 0, 0);
					GIVE_WEAPON_TO_ACTOR(Function_48(), 36, 0.0f, 0, 0);
					_ADD_AMMO_OF_TYPE(Function_48(), 3, 2.0f, 0, 0);
					Function_618();
					Function_617(&iLocal_195);
					Function_616(bLocal_216);
					Function_432(6);
				}
			}
			break;
		
		case 0x00000006:
			if (NET_IS_SESSION_HOST())
			{
				Function_627(&Global_78578 + 96);
			}
			Function_556(&bLocal_236, &Local_71, 496, 504, Local_758.f_52);
			Function_196(&iLocal_479, 2.0f);
			Function_555();
			Function_554(Local_71.f_168, &Local_758 + 20, &Local_758 + 32);
			Function_553(Local_71.f_40, &Local_758 + 44, &Local_758 + 48);
			Function_552(Local_758.f_52, 3.0f, "", 0, 0, 0, 0);
			if (Local_758.f_52)
			{
				Function_400("UN_Narr_SuddnDeath", 0);
				Function_551(3.0f, "mp_gy_sudden_death");
			}
			else
			{
				Function_550(3.0f, "mp_gy_wave_starting", I2STR(bLocal_216 + 1));
			}
			if (!Local_758.f_52 && NET_IS_SESSION_HOST())
			{
				Function_627(&Local_758 + 60);
			}
			NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
			Function_432(7);
			break;
		
		case 0x00000007:
			if (Function_548(&iLocal_479))
			{
				Function_547(StackVal, StackVal, StackVal, StackVal, &cLocal_234, &uLocal_235, &iLocal_237, Local_71, *(&Local_758 + 20), *(&Local_758 + 32), &uLocal_238, &uLocal_265, &uLocal_266, 330, Local_758.f_52);
				Function_196(&iLocal_479, 0.2f);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
				Function_432(8);
			}
			break;
		
		case 0x00000008:
			if (Function_548(&iLocal_479))
			{
				Function_546(&cLocal_234, "CallSafeLightning", Local_758.f_52);
				Function_196(&iLocal_479, 2.8f);
				Function_196(&iLocal_219, 22.8f);
				Function_196(&iLocal_222, 10.0f);
				Function_196(&iLocal_244, 10.0f);
				iLocal_218 = 0;
				iLocal_247 = 0;
				Function_543(bLocal_216, &fLocal_267, &iLocal_225, Local_758.f_52);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_FOURTH_GOAL", false, false, false, false);
				Function_432(9);
			}
			break;
		
		case 0x00000009:
			if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
			{
				Function_540(&cLocal_234, &uLocal_235, &iLocal_237, &iLocal_264, &iLocal_241, &(iLocal_776[GET_LOCAL_SLOT()]), 2, Local_758.f_52, bLocal_216);
			}
			Function_538(StackVal, StackVal, StackVal, StackVal, &cLocal_234, &iLocal_237, Local_71, *(&Local_758 + 20), *(&Local_758 + 32), &uLocal_238, Local_758.f_52);
			if (!iLocal_229 && Function_202(&iLocal_479))
			{
				PRINT_HELP_FORMAT(6.0f, "COOP_gy_coffin_help", false, false, 0, 0, 2, 0, 0);
				iLocal_229 = 1;
			}
			if ((!iLocal_230 && Function_202(&iLocal_479)) && Local_758.f_52)
			{
				PRINT_HELP_FORMAT(6.0f, "MP_GY_Overdrive_help", false, false, 0, 0, 2, 0, 0);
				iLocal_230 = 1;
			}
			if (iLocal_218 || Local_758.f_52)
			{
				Function_524(StackVal, StackVal, StackVal, StackVal, &iLocal_182, &iLocal_222, &Local_758 + 56, *(&Local_758 + 20), *(&Local_758 + 32), Local_758.f_52, 1, 0, 0x40000000, 0x42480000);
			}
			else
			{
				Function_524(StackVal, StackVal, StackVal, StackVal, &iLocal_182, &iLocal_222, &Local_758 + 56, *(&Local_758 + 20), *(&Local_758 + 32), Local_758.f_52, 0, 1, 1.0f, 40.0f);
			}
			if (!iLocal_218 && Function_202(&iLocal_219))
			{
				iLocal_218 = 1;
			}
			if (Function_548(&iLocal_244))
			{
				iLocal_247 = 1;
				Function_504(bLocal_216, Local_71, &cLocal_242, &uLocal_243, Local_71.f_40, Local_758.f_44, Local_758.f_48, Local_758.f_52);
				Function_196(&iLocal_258, 0.2f);
			}
			if (Function_548(&iLocal_258))
			{
				Function_503(&cLocal_242, "CallPrizeLightning", Local_758.f_52);
			}
			Function_502();
			if (Function_501(2))
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 2);
				}
			}
			if ((Function_203(&Local_758 + 60) > 60.0f && !iLocal_232) && !Local_758.f_52)
			{
				Function_400("UN_Narr_TimeRuninOut", 0);
				iLocal_232 = 1;
			}
			else if (Function_203(&Local_758 + 60) < 60.0f)
			{
				iLocal_232 = 0;
			}
			if ((Function_499() && Function_202(&iLocal_479)) && !Local_758.f_52)
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 1);
				}
			}
			if (Function_501(1) && !iLocal_794)
			{
				if (Function_403(8, 1, 0x3f800000))
				{
					if (Local_758.f_52)
					{
						Function_196(&iLocal_479, 0.5f);
					}
					else
					{
						Function_196(&iLocal_479, 4.5f);
						if (NET_IS_SESSION_HOST())
						{
							Function_496(&Local_758 + 60, Function_497(Function_498(&Local_758 + 60)));
						}
					}
					if (!Function_495())
					{
						Function_552(Local_758.f_52, 3.0f, "mp_gy_cleanse", 0, 0, 0, 0);
						Function_494(bLocal_216);
					}
					if (NET_IS_SESSION_HOST())
					{
						Function_121(&Local_758 + 60);
					}
					if (NET_IS_SESSION_HOST())
					{
						Function_121(&Global_78578 + 96);
					}
					NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
					Function_432(10);
				}
			}
			else
			{
				Function_21();
			}
			break;
		
		case 0x0000000A:
			if (!Function_495() && Function_202(&iLocal_479))
			{
				Function_493(1);
				Function_492();
				Function_546(&cLocal_234, "KillSafeLightning", 0);
				Function_503(&cLocal_242, "KillPrizeLightning", 0);
				Function_196(&iLocal_479, 0.5f);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_SIXTH_GOAL", false, false, false, false);
				Function_432(11);
			}
			break;
		
		case 0x0000000B:
			if (Function_548(&iLocal_479))
			{
				if (iLocal_231 >= 0)
				{
					if (!Function_501(2))
					{
						Function_327("MP_GY_Coffin_disappeared", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_231 = (iLocal_231 - 1);
					}
				}
				Function_190(&cLocal_234, &uLocal_235, &iLocal_237, &iLocal_264, &uLocal_265, &uLocal_266);
				Function_491(&cLocal_242, &uLocal_243);
				Function_493(2);
				Function_196(&iLocal_479, 0.5f);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
				Function_432(12);
			}
			break;
		
		case 0x0000000C:
			if (Function_501(4))
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 4);
				}
			}
			if ((StackVal || Function_484(StackVal, Function_486(Local_758.f_52, 1), *(&Local_71 + 12), &iLocal_228)) && !Local_758.f_52)
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 4);
				}
			}
			if ((Function_501(4) || Local_758.f_52) && !iLocal_794)
			{
				if (Function_403(13, 1, 0x3f800000))
				{
					if (Local_758.f_52)
					{
						Function_196(&iLocal_479, 0.5f);
					}
					else
					{
						Function_196(&iLocal_479, 4.0f);
					}
					Function_483();
					if (!Function_495())
					{
						Function_552(Local_758.f_52, 3.0f, "", 0, 0, 0, 0);
						if (!Local_758.f_52)
						{
							Function_550(3.0f, "mp_gy_wave_completed", I2STR(bLocal_216));
						}
					}
					Function_616(bLocal_216);
					Function_482();
					NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_EIGHTH_GOAL", false, false, false, false);
					Function_432(13);
				}
			}
			else
			{
				Function_21();
			}
			break;
		
		case 0x0000000D:
			if (!Function_495() && Function_202(&iLocal_479))
			{
				Function_493(1);
				Function_493(4);
				Function_493(2);
				iLocal_232 = 0;
				Function_441(254, &Global_50170[25422] + 4, &Global_50170[25422] + 8, &Global_50170[25422] + 12, Function_100(3), 0);
				NET_LOG(bLocal_793, "SepGY Stage01: %s", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
				Function_432(6);
			}
			break;
		
		case 0x0000006A:
			Function_655(&Local_758 + 60, 1);
			Function_653(1);
			UI_EXIT("MPScoringDisplays");
			if (Function_403(101, 1, 0x3f800000))
			{
				Function_439(StackVal, StackVal, *(&Local_71 + 12));
				Function_423();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_HELP();
				Function_18();
				Local_447 = 1000;
				NET_LOG(bLocal_793, "Mission Stage01", "Transitioning to SID_LAST_STAGE: GID_INITIALIZE", false, false, false, false);
				iLocal_438 = 101;
				Function_432(0);
			}
			break;
	}
	return;
}

void Function_439(vector3 vParam0) //Position: 0xDF88 / 57224
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	return;
}

void Function_440(vector3 vParam0, bool bParam3) //Position: 0xE038 / 57400
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_218(StackVal, StackVal, vParam0))
	{
		return;
	}
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam3, Function_55(), 3, vParam0, 0.0f, 0.0f, 0.0f, 200.0f, 30.0f, 200.0f);
	bVar1 = CREATE_OBJECT_ITERATOR(bParam3);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(bVar1, bVar0);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar3);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (Function_216(bVar2) && !Function_222(bVar2))
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					DELETE_ALL_INVENTORY_FROM_ACTOR(bVar2);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	DESTROY_VOLUME(bVar0);
}

void Function_441(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5) //Position: 0xE0D6 / 57558
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam2)
	{
		case 0x00000000:
			Function_480(bParam0);
			fVar1 = Function_479(bParam0);
			Function_478(bParam0);
			Function_477(bParam0, &bVar0, iParam4, 0);
			if (bVar0 > 2)
			{
				*uParam3 = 0.0f;
				Function_471(bParam0, uParam2, 1, 8006, 50.0f, 100.0f, 4, Function_476(0), 1);
				Function_470(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(2));
				if (*uParam3 == fVar1)
				{
					Function_469(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_480(bParam0);
			fVar1 = Function_479(bParam0);
			Function_478(bParam0);
			Function_477(bParam0, &bVar0, iParam4, 0);
			if (bVar0 > 4)
			{
				*uParam3 = 0.0f;
				Function_471(bParam0, uParam2, 2, 8007, 100.0f, 150.0f, 10, Function_476(0), 1);
				Function_470(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (*uParam3 == fVar1)
				{
					Function_469(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_480(bParam0);
			fVar1 = Function_479(bParam0);
			Function_478(bParam0);
			Function_477(bParam0, &bVar0, iParam4, 0);
			if (bVar0 > 10)
			{
				*uParam3 = 0.0f;
				Function_471(bParam0, uParam2, 3, 8008, 150.0f, 200.0f, 15, Function_476(0), 1);
				Function_470(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (*uParam3 == fVar1)
				{
					Function_469(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000003:
			Function_480(bParam0);
			fVar1 = Function_479(bParam0);
			Function_478(bParam0);
			Function_477(bParam0, &bVar0, iParam4, bParam5);
			if (bVar0 > 15)
			{
				bVar0 = 15;
			}
			bParam5 = Global_56092[246];
			if (bParam5 > 10)
			{
				bParam5 = 10;
			}
			if (bVar0 <= 15 && bParam5 <= 10)
			{
				*uParam3 = 0.0f;
				Function_471(bParam0, uParam2, 4, 8009, 200.0f, 250.0f, 500, Function_476(0), 1);
				Function_470(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT((bVar0 + bParam5)) / TO_FLOAT(25));
				if (*uParam3 == fVar1)
				{
					Function_469(bParam0, *uParam3, 1, bVar0, bParam5, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000004:
			Function_480(bParam0);
			fVar1 = Function_479(bParam0);
			Function_478(bParam0);
			Global_50170[bParam022].f_28++;
			bVar0 = Global_50170[bParam022].f_28;
			if (bVar0 > 500)
			{
				*uParam3 = 0.0f;
				Function_442(bParam0, uParam2, uParam1, 8010, 250.0f, Function_476(0));
				Function_470(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(500));
				if (*uParam3 == fVar1)
				{
					Function_469(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
	}
}

void Function_442(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xE375 / 58229
{
	struct<4> Var0;
	
	Function_467(iParam0, 1);
	*uParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_465(iParam3);
	}
	Function_82(bParam4, 0, 1);
	Function_461(iParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
	Function_456(&Var0, CEIL(bParam4), bParam5);
	Function_455(iParam0, 4);
	Function_443();
}

void Function_443() //Position: 0xE3E1 / 58337
{
	if (!Function_68())
	{
		if (!Function_454(1, 3, 1, 1))
		{
			Function_445(1);
			Function_444(1, 8);
		}
	}
	else
	{
		Function_127(0);
	}
	return;
}

void Function_444(var uParam0, int iParam1) //Position: 0xE40A / 58378
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_68())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_445(bool bParam0) //Position: 0xE44C / 58444
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_446();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_128();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_4(&Global_63095, 1);
		Function_4(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_446() //Position: 0xE49D / 58525
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_329())
	{
		Function_451(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_451(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_447(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_447(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_218(StackVal, StackVal, vVar0))
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

vector3 Function_447(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE558 / 58712
{
	int iVar0;
	
	iVar0 = Function_449(uParam2, uParam3);
	if (Function_448(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_5(&Global_63095, 1);
			Function_4(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_5(&Global_63095, 2);
			Function_4(&Global_63095, 1);
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
		Function_5(&Global_63095, 2);
		Function_4(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_221();
	return StackVal, StackVal, Function_221();
}

bool Function_448(int iParam0) //Position: 0xE63F / 58943
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_449(bool bParam0, bool bParam1) //Position: 0xE655 / 58965
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
				fVar2 = Function_450(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_450(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_448(bVar0) && !bParam1)
	{
		bVar0 = Function_449(bParam0, 1);
	}
	return bVar0;
}

float Function_450(vector3 vParam0, vector3 vParam3) //Position: 0xE71C / 59164
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_451(var uParam0, int iParam1) //Position: 0xE739 / 59193
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_453(Global_34573, &vVar4);
	if (!Function_452(Global_30640[0]))
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
	if (!Function_452(Global_30640[2]))
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
	if (!Function_452(Global_30640[1]))
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
	if (!Function_452(Global_30658[1]))
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
	if (!Function_452(Global_30658[3]))
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
	if (!Function_452(Global_30658[2]))
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
	if (!Function_452(Global_30658[4]))
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
	if (!Function_452(Global_30668[0]))
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
	if (!Function_452(Global_30668[1]))
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
	if (!Function_452(Global_30668[2]))
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
	if (!Function_452(Global_30679[0]))
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
	if (!Function_452(Global_30685[0]))
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
	if (!Function_452(Global_30685[1]))
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
	if (!Function_452(Global_30685[2]))
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
	if (!Function_452(Global_30693[0]))
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
	if (!Function_452(Global_30693[1]))
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
	if (!Function_452(Global_30693[2]))
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
	if (!Function_452(Global_30707[2]))
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
	if (!Function_452(Global_30707[3]))
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
	if (!Function_452(Global_30707[0]))
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
	if (!Function_452(Global_30717[0]))
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
	if (!Function_452(Global_30723[2]))
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
	if (!Function_452(Global_30723[1]))
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
	if (!Function_452(Global_30723[0]))
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
	if (!Function_452(Global_30679[1]))
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
	if (!Function_452(Global_30707[1]))
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
	Function_5(&Global_63095, 2);
	Function_4(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_218(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_452(int iParam0) //Position: 0xEF5E / 61278
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_47(uVar0, 0x1000000) || Function_47(uVar0, 0x2000000)) || Function_47(uVar0, 0x4000000)) || !Function_47(uVar0, 0x10000000));
}

void Function_453(bool bParam0, bool bParam1) //Position: 0xEF99 / 61337
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_454(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xEFA6 / 61350
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

void Function_455(int iParam0, bool bParam1) //Position: 0xF04A / 61514
{
	Function_4(&Global_50170[iParam022] + 32, bParam1);
	return;
}

void Function_456(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF05E / 61534
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_38();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_460(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_459(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_458(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_457(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_460(), iVar1 + 1);
	return;
}

struct<16> Function_457(int iParam0) //Position: 0xF0D0 / 61648
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_458(int iParam0) //Position: 0xF0F1 / 61681
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_459(int iParam0) //Position: 0xF112 / 61714
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_460() //Position: 0xF133 / 61747
{
	return "CQueue_Count";
}

void Function_461(int iParam0, int iParam1) //Position: 0xF148 / 61768
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_464(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_463(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_462(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_153(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_462(int iParam0) //Position: 0xF1CA / 61898
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_463(int iParam0) //Position: 0xF1EA / 61930
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_464(int iParam0) //Position: 0xF21B / 61979
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

void Function_465(int iParam0) //Position: 0xF399 / 62361
{
	Function_466(iParam0, 1);
	return;
}

void Function_466(int iParam0, bool bParam1) //Position: 0xF3A5 / 62373
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_5(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_92((iVar0 % 32)));
	}
	else
	{
		Function_4(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_92((iVar0 % 32)));
	}
	return;
}

void Function_467(bool bParam0, bool bParam1) //Position: 0xF3FB / 62459
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_468();
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

var Function_468() //Position: 0xF547 / 62791
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_469(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0xF594 / 62868
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[24];
	char* cVar18[16];
	char* cVar22[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(bParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_152(bParam0), 6);
		stradd(&cVar0, "_info", 24);
		if (bParam3 >= 4294967295)
		{
			memcpy(&cVar6, StackVal, *(&Global_50170[bParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			memcpy(&cVar12, StackVal, *(&Global_50170[bParam022] + 16), 6);
			stradd(&cVar12, "_num2", 24);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			memcpy(&cVar18, StackVal, *(&Global_50170[bParam022] + 16), 4);
			stradd(&cVar18, "_num3", 16);
			UI_SET_STRING(&cVar18, INT_TO_STRING(bParam5));
		}
		if (bParam6 >= 4294967295)
		{
			memcpy(&cVar22, StackVal, *(&Global_50170[bParam022] + 16), 4);
			stradd(&cVar22, "_num4", 16);
			UI_SET_STRING(&cVar22, INT_TO_STRING(bParam6));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(bParam0), &cVar0, 2, 2, true);
		Function_150(Function_153(bParam0), 0);
	}
}

void Function_470(bool bParam0) //Position: 0xF688 / 63112
{
	Function_480(bParam0);
	return;
}

void Function_471(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xF693 / 63123
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam7))
	{
		bParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(bParam0) };
	Function_456(&Var0, CEIL(bParam4), bParam7);
	*uParam1 = iParam2;
	if (bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(bParam0), (TO_FLOAT(Global_50170[bParam022].f_28) / TO_FLOAT(bParam6)), false, 0);
	}
	Function_472(bParam0, bParam6, CEIL(bParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_465(iParam3);
	}
	Function_455(bParam0, 4);
	Function_443();
}

void Function_472(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF723 / 63267
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_464(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
	if ((bParam3 && Function_151(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_153(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_463(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_475(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_474(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_462(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &Var7, 0, 2, Function_151(iParam0, 4));
			if (!bParam3)
			{
				Function_473(iParam0, 4);
			}
		}
	}
}

void Function_473(int iParam0, bool bParam1) //Position: 0xF7E0 / 63456
{
	Function_5(&Global_50170[iParam022] + 32, bParam1);
	return;
}

struct<24> Function_474(int iParam0) //Position: 0xF7F4 / 63476
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_475(int iParam0) //Position: 0xF822 / 63522
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_476(bool bParam0) //Position: 0xF852 / 63570
{
	if (bParam0)
	{
		return "UN_UNDEADWAVES_64";
	}
	return "UN_UNDEADWAVES_128";
}

void Function_477(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xF88A / 63626
{
	int iVar0;
	
	iVar0 = (iParam2 - Global_56352[bParam0]);
	if (iVar0 >= 0)
	{
		Global_56092[bParam0] = 0;
		Global_56352[bParam0] = iParam2;
	}
	else if (iParam3 == 0)
	{
		Global_56092[bParam0]++;
	}
	*bParam1 = Global_56092[bParam0];
}

void Function_478(bool bParam0) //Position: 0xF8D8 / 63704
{
	if (Global_56352[bParam0] <= 0)
	{
		Global_56352[bParam0] = 0;
	}
	if (Global_56092[bParam0] <= 0)
	{
		Global_56092[bParam0] = 0;
	}
	return;
}

float Function_479(bool bParam0) //Position: 0xF904 / 63748
{
	return Global_50170[bParam022].f_12;
}

void Function_480(bool bParam0) //Position: 0xF913 / 63763
{
	Function_481(bParam0, 0, Global_50170[bParam022].f_28);
	return;
}

int Function_481(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF929 / 63785
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_468();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_482() //Position: 0xF99E / 63902
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SLOT_VALID(false))
	{
		iVar0 = (iVar0 + Function_115(0));
	}
	if (IS_SLOT_VALID(true))
	{
		iVar0 = (iVar0 + Function_115(1));
	}
	if (IS_SLOT_VALID(2))
	{
		iVar0 = (iVar0 + Function_115(2));
	}
	if (IS_SLOT_VALID(3))
	{
		iVar0 = (iVar0 + Function_115(3));
	}
	iVar0 = iVar0;
	bLocal_368 = ROUND(Function_114(4));
	return;
}

void Function_483() //Position: 0xF9F5 / 63989
{
	bLocal_216++;
	if (bLocal_216 > 14)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(99))
		{
			AWARD_ACHIEVEMENT(99);
		}
	}
	return;
}

int Function_484(vector3 vParam0, int iParam3) //Position: 0xFA17 / 64023
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = (StackVal + Function_485(StackVal, iVar0, vParam0, bVar1, 150.0f));
	}
	bVar1 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = (StackVal + Function_485(StackVal, iVar0, vParam0, bVar1, 150.0f));
	}
	bVar1 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = (StackVal + Function_485(StackVal, iVar0, vParam0, bVar1, 150.0f));
	}
	bVar1 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = (StackVal + Function_485(StackVal, iVar0, vParam0, bVar1, 150.0f));
	}
	bVar1 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = (StackVal + Function_485(StackVal, iVar0, vParam0, bVar1, 150.0f));
	}
	*iParam3 = iVar0;
	if (iVar0 >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_485(vector3 vParam0, bool bParam3, float fParam4) //Position: 0xFB0E / 64270
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (Function_218(StackVal, StackVal, vParam0) || fParam4 >= 0.0f)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bParam3, Function_55(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam4, 20.0f, fParam4);
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), GET_AMBIENT_LAYOUT(), 15, 1);
	bVar3 = CREATE_OBJECT_ITERATOR(bParam3);
	ITERATE_ON_OBJECT_TYPE(bVar3, 15);
	ITERATE_IN_VOLUME(bVar3, bVar1);
	bVar5 = START_OBJECT_ITERATOR(bVar3);
	while (IS_OBJECT_VALID(bVar5))
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(bVar5);
		if (IS_ACTOR_VALID(bVar4))
		{
			if (Function_216(bVar4) && !IS_OBJECT_IN_OBJECTSET(bVar5, bVar2))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					ADD_OBJECT_TO_OBJECTSET(bVar5, bVar2);
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar3);
	}
	bVar0 = GET_OBJECTSET_SIZE(bVar2);
	DESTROY_ITERATOR(bVar3);
	DESTROY_VOLUME(bVar1);
	DESTROY_OBJECTSET(bVar2);
	return bVar0;
}

int Function_486(bool bParam0, int iParam1) //Position: 0xFBCB / 64459
{
	if (bParam0)
	{
		return 0;
	}
	if (Function_487(iParam1) < 1)
	{
		return 1;
	}
	return 0;
}

int Function_487(int iParam0) //Position: 0xFBE4 / 64484
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + Function_488(Local_273.f_68, iParam0));
	iVar0 = (iVar0 + Function_488(Local_292.f_68, iParam0));
	iVar0 = (iVar0 + Function_488(Local_311.f_68, iParam0));
	iVar0 = (iVar0 + Function_488(Local_330.f_68, iParam0));
	iVar0 = (iVar0 + Function_488(Local_349.f_68, iParam0));
	return iVar0;
}

int Function_488(bool bParam0, int iParam1) //Position: 0xFC3A / 64570
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				iVar0 = (iVar0 + ROUND(GET_ACTOR_MAX_HEALTH(bVar2)));
				if (!Function_222(bVar2))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2);
				}
				if (0 == GET_TASK_STATUS(bVar2, 90))
				{
					if (Function_222(bVar2))
					{
						TASK_GO_NEAR_ACTORSET(bVar2, Function_490(), 10.0f, 2);
					}
					else
					{
						TASK_GO_NEAR_ACTORSET(bVar2, Function_490(), 5.0f, 2);
					}
				}
				if (Function_216(bVar2) && !Function_489(bVar2))
				{
					if (!DECOR_CHECK_EXIST(bVar2, "WakeUp"))
					{
						DECOR_SET_BOOL(bVar2, "WakeUp", true);
					}
				}
				if ((Function_216(bVar2) && IS_ACTOR_ALIVE(bVar2)) && iParam1)
				{
					if (GET_ACTOR_HEALTH(bVar2) < 10.0f)
					{
						SET_ACTOR_HEALTH(bVar2, 10.0f);
					}
					if (GET_ACTOR_MAX_HEALTH(bVar2) < 10.0f)
					{
						SET_ACTOR_MAX_HEALTH(bVar2, 10.0f);
					}
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_489(bool bParam0) //Position: 0xFD34 / 64820
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

var Function_490() //Position: 0xFD54 / 64852
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

void Function_491(char* cParam0, var uParam1) //Position: 0xFDC0 / 64960
{
	if (IS_OBJECT_VALID(*cParam0))
	{
		DESTROY_OBJECT(*cParam0);
	}
	if (IS_OBJECT_VALID(*uParam1))
	{
		DESTROY_OBJECT(*uParam1);
	}
	return;
}

void Function_492() //Position: 0xFDE4 / 64996
{
	Function_163(&Local_273);
	Function_163(&Local_292);
	Function_163(&Local_311);
	Function_163(&Local_330);
	Function_163(&Local_349);
	Function_40(8192);
	Function_338(16384);
	return;
}

void Function_493(int iParam0) //Position: 0xFE14 / 65044
{
	Function_4(&(iLocal_776[0]), iParam0);
	Function_4(&(iLocal_776[1]), iParam0);
	Function_4(&(iLocal_776[2]), iParam0);
	Function_4(&(iLocal_776[3]), iParam0);
	return;
}

void Function_494(int iParam0) //Position: 0xFE46 / 65094
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			Function_400("UN_Narr_WaveComp1", 0);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			Function_400("UN_Narr_WaveComp2", 0);
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			Function_400("UN_Narr_WaveComp3", 0);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			Function_400("UN_Narr_WaveComp4", 0);
			break;
		
		default:
			Function_400("UN_Narr_WaveComp5", 0);
			break;
	}
	return;
}

bool Function_495() //Position: 0xFF1C / 65308
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 3)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			bVar2 = GET_SLOT_ACTOR(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	if (iVar0 < 0)
	{
		return 1;
	}
	return 0;
}

void Function_496(var uParam0, float fParam1) //Position: 0xFF65 / 65381
{
	uParam0->f_4 = (StackVal + fParam1);
	return;
}

float Function_497(float fParam0) //Position: 0xFF76 / 65398
{
	if (fParam0 < 15.0f)
	{
		return 0.0f;
	}
	return (16.0f - fParam0);
}

float Function_498(int iParam0) //Position: 0xFF91 / 65425
{
	if (Function_122(iParam0))
	{
		return Function_203(iParam0);
	}
	return 0.0f;
}

int Function_499() //Position: 0xFFA6 / 65446
{
	return Function_500(&iLocal_195, (Function_369() - Function_674()));
}

int Function_500(var uParam0, int iParam1) //Position: 0xFFB8 / 65464
{
	return StackVal <= iParam1;
}

bool Function_501(bool bParam0) //Position: 0xFFC5 / 65477
{
	return (((Function_47(iLocal_776[0], bParam0) || Function_47(iLocal_776[1], bParam0)) || Function_47(iLocal_776[2], bParam0)) || Function_47(iLocal_776[3], bParam0));
}

void Function_502() //Position: 0xFFFA / 65530
{
	if (!iLocal_215 && Function_501(2))
	{
		iLocal_215 = 1;
		if (NET_IS_SESSION_HOST())
		{
			Function_496(&Local_758 + 60, 60.0f);
		}
	}
	return;
}

void Function_503(var uParam0, char* cParam1, bool bParam2) //Position: 0x10022 / 65570
{
	if (bParam2)
	{
		return;
	}
	if (IS_OBJECT_VALID(*uParam0))
	{
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_ON_OBJECT(cParam1, "script_lightning_marker", *uParam0, 0.0f, 0.2f, 0.0f, 1, false), 0.0f, 0.0f, 0.0f);
	}
	return;
}

void Function_504(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x10069 / 65641
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* cVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar12;
	
	if (bParam7)
	{
		return;
	}
	if ((iParam0 + 1 % 3) == 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam5, bParam4);
		if (IS_OBJECT_VALID(bVar0))
		{
			cVar7 = GET_OBJECT_NAME(bVar0);
			GET_OBJECT_POSITION(bVar0, &vVar1);
			GET_OBJECT_ORIENTATION(bVar0, &vVar4);
			iVar8 = CLEAR_AREA_OF_GRASS(vVar1, 2.5f);
			iVar9 = CLEAR_AREA_OF_TREE_TYPE(vVar1, 2.5f, "");
			switch (iParam6)
			{
				case 0x00000001:
					Var10 = 34;
					Var10.f_4 = 100;
					break;
				
				case 0x00000002:
					Var10 = 18;
					Var10.f_4 = 100;
					break;
				
				case 0x00000003:
					Var10 = 11;
					Var10.f_4 = 100;
					break;
			}
			Function_509(StackVal, StackVal, StackVal, StackVal, uParam2, uParam3, uParam1, vVar1, vVar4, 1, 1, 1, cVar7, iVar8, iVar9);
			Function_506(StackVal, *uParam3, Var10, iParam6);
			bVar12 = GET_BLIP_ON_OBJECT(*uParam3);
			REMOVE_BLIP(bVar12);
			bVar12 = ADD_BLIP_FOR_OBJECT(*uParam3, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar12, GET_WEAPON_DISPLAY_NAME(Var10));
			Function_400("UN_Narr_NewWeapSpawn", 0);
			Function_505(3.0f, "mp_gy_weapon_spawned", 0, 0, 0, 0, 2, 0);
		}
	}
}

void Function_505(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x10191 / 65937
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	PRINT_BIG_FORMAT(bParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7);
}

void Function_506(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x101F6 / 66038
{
	bool bVar0;
	
	if (Function_262(Param1))
	{
		bVar0 = Function_508(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_507(), bVar0);
	}
}

var Function_507() //Position: 0x1021C / 66076
{
	return "PackedWeapon";
}

var Function_508(struct<5> Param0) //Position: 0x10231 / 66097
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_259())) || SHIFT_LEFT(bParam2, Function_259() + 8));
}

void Function_509(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1024F / 66127
{
	Function_517(StackVal, StackVal, StackVal, StackVal, uParam0, uParam1, uParam9, uParam2, vParam3, vParam6, uParam12);
	Function_513(*uParam0, *uParam1, uParam9, uParam10, uParam11);
	DECOR_SET_INT(*uParam1, Function_512(), Function_511(uParam10, uParam11, uParam9));
	DECOR_SET_INT(*uParam1, Function_185(), Function_510(uParam13, uParam14));
}

var Function_510(var uParam0, bool bParam1) //Position: 0x102A0 / 66208
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_511(bool bParam0, bool bParam1, bool bParam2) //Position: 0x102B0 / 66224
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_512() //Position: 0x102D5 / 66261
{
	return "PackedMetadata";
}

void Function_513(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x102EC / 66284
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_507(), &uVar5))
				{
					Function_258(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_516();
				vVar0 = { StackVal, StackVal, Function_516() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_515();
				vVar0 = { StackVal, StackVal, Function_515() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_514();
				vVar0 = { StackVal, StackVal, Function_514() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_514() //Position: 0x10417 / 66583
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_515() //Position: 0x10428 / 66600
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_516() //Position: 0x10439 / 66617
{
	return 0.0f, 0.158f, -0.163f;
}

int Function_517(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x1044A / 66634
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_523();
			Function_515();
			vVar1 = { StackVal, StackVal, Function_515() };
			break;
		
		case 0x00000001:
			bVar0 = Function_522();
			Function_516();
			vVar1 = { StackVal, StackVal, Function_516() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_521();
			Function_514();
			vVar1 = { StackVal, StackVal, Function_514() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_520(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_518(Function_520()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_186(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

struct<32> Function_518(bool bParam0) //Position: 0x1054E / 66894
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_519("0", &cVar8, ""), 4);
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

struct<32> Function_519(char* cParam0, char* cParam1, char* cParam2) //Position: 0x105B8 / 67000
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_520() //Position: 0x105D7 / 67031
{
	return "PBox_";
}

var Function_521() //Position: 0x105E5 / 67045
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_522() //Position: 0x1060B / 67083
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_523() //Position: 0x10633 / 67123
{
	return "p_gen_crateMultiplayerAmmo01x";
}

void Function_524(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, int iParam11, float fParam12, float fParam13) //Position: 0x10659 / 67161
{
	int iVar0;
	
	if (!bParam9)
	{
		Function_537(iParam1, ROUND(Function_114(4)));
	}
	iVar0 = iParam10;
	if (bParam9)
	{
		iVar0 = 0;
	}
	switch (*uParam2)
	{
		case 0x00000000:
			Function_536(StackVal, StackVal, StackVal, StackVal, vParam3, vParam6, iParam0, iVar0, iParam11, fParam12, fParam13);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			Function_535(StackVal, StackVal, StackVal, StackVal, vParam3, vParam6, iVar0, iParam11, fParam12, fParam13);
			*uParam2 = 2;
			break;
		
		case 0x00000002:
			Function_534(StackVal, StackVal, StackVal, StackVal, vParam3, vParam6, iVar0, iParam11, fParam12, fParam13);
			*uParam2 = 3;
			break;
		
		case 0x00000003:
			Function_533(StackVal, StackVal, StackVal, StackVal, vParam3, vParam6, iVar0, iParam11, fParam12, fParam13);
			*uParam2 = 4;
			break;
		
		case 0x00000004:
			Function_525(StackVal, StackVal, StackVal, StackVal, vParam3, vParam6, iVar0, iParam11, fParam12, fParam13);
			*uParam2 = 0;
			break;
	}
}

void Function_525(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, var uParam8, var uParam9) //Position: 0x10729 / 67369
{
	var uVar0;
	
	uVar0 = 1;
	Function_526(StackVal, StackVal, StackVal, StackVal, "Animal Squad", &Local_349, vParam0, vParam3, &uVar0, 0, 0, bParam6, bParam7, uParam8, uParam9, Local_397.f_12);
}

void Function_526(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, var uParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, var uParam14, int iParam15) //Position: 0x10764 / 67428
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[16];
	char* cVar9[16];
	bool bVar13;
	bool bVar14;
	vector3 vVar15;
	vector3 vVar18;
	bool bVar21;
	
	if (!Function_532(iParam1))
	{
		if (Function_548(iParam1 + 40))
		{
			if (SQUAD_IS_VALID(iParam1->f_68))
			{
				if (iParam1->f_32 > iParam1->f_24 || iParam1->f_64)
				{
					if (SQUAD_GET_SIZE(iParam1->f_68) <= iParam1->f_28)
					{
						iVar0 = (iParam1->f_28 - SQUAD_GET_SIZE(iParam1->f_68));
						if (iVar0 >= iParam15)
						{
							iVar0 = iParam15;
						}
						iVar2 = 0;
						while (iVar2 < (iVar0 - 1))
						{
							if (bParam11)
							{
								bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(StackVal, false);
								if (!IS_OBJECT_VALID(bVar21))
								{
								}
							}
							else if (IS_SLOT_VALID(iParam1->f_36))
							{
								bVar21 = GET_OBJECT_FROM_ACTOR(GET_SLOT_ACTOR(iParam1->f_36));
							}
							if (IS_OBJECT_VALID(bVar21) || bParam12)
							{
								if (bParam12)
								{
									vVar15 = { StackVal, StackVal, vParam2 };
									vVar18 = { StackVal, StackVal, vParam5 };
								}
								else
								{
									GET_OBJECT_POSITION(bVar21, &vVar15);
									GET_OBJECT_ORIENTATION(bVar21, &vVar18);
								}
								bVar1 = Function_531(StackVal, StackVal, vVar15, 0);
								strcpy(&cVar5, ".", 16);
								if (IS_SLOT_VALID(bVar1))
								{
									if (bVar1 == GET_LOCAL_SLOT())
									{
										stradd(&cVar5, I2STR(iParam1->f_36), 16);
										stradd(&cVar5, "_", 16);
										stradd(&cVar5, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(iParam1->f_68)), 16);
										stradd(&cVar5, ".", 16);
										stradd(&cVar5, I2STR(iParam1->f_32), 16);
										if (bParam9)
										{
											bVar13 = (*uParam8)[RAND_INT_RANGE(false, 11)];
										}
										else
										{
											bVar13 = Function_530(iParam1->f_12, iParam1->f_16);
										}
										NET_OBJECT_REPLICATION_MODE_START(15, 6);
										if (iParam1->f_60)
										{
											if (bParam10)
											{
												bVar3 = Function_529(StackVal, StackVal, vVar15, iParam1, bVar13, &cVar5, uParam13, uParam14);
											}
											else
											{
												bVar3 = Function_528(StackVal, StackVal, vVar15, iParam1, bVar13, &cVar5, uParam13, uParam14);
											}
										}
										else
										{
											bVar3 = CREATE_ACTOR_IN_LAYOUT(*iParam1, &cVar5, bVar13, vVar15, vVar18);
										}
										if (IS_ACTOR_VALID(bVar3))
										{
											SQUAD_JOIN(bVar3, iParam1->f_68);
											Stack.Push(bVar3);
											Stack.Push(iParam1->f_36);
											Call_Loc(iParam1->f_20);
											if (iParam1->f_56)
											{
												strcpy(&cVar9, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(iParam1->f_72)), 16);
												stradd(&cVar9, I2STR(iParam1->f_32), 16);
												bVar14 = Function_530(976, 991);
												bVar4 = CREATE_ACTOR_IN_LAYOUT(*iParam1, &cVar9, bVar14, vVar15, vVar18);
												if (IS_ACTOR_VALID(bVar4))
												{
													ACCESSORIZE_HORSE(bVar4, 4);
													ACTOR_MOUNT_ACTOR(bVar3, bVar4);
													SQUAD_JOIN(bVar4, iParam1->f_72);
													TASK_FLEE_ACTORSET(bVar4, Function_490(), -1.0f, -1.0f, 0, 0, 0);
													RELEASE_ACTOR(bVar4);
												}
											}
										}
										NET_OBJECT_REPLICATION_MODE_END(15);
									}
								}
							}
							iParam1->f_32++;
							if (iParam1->f_60)
							{
								if ((iParam1->f_32 % iParam1->f_28) == 0)
								{
									AMBIENT_RESET_USED_CELLS();
								}
							}
							iParam1->f_36++;
							if (iParam1->f_36 > 4)
							{
								iParam1->f_36 = 0;
							}
							iVar2++;
						}
					}
					Function_196(iParam1 + 40, iParam1->f_52);
				}
			}
		}
	}
	Function_527(iParam1);
}

int Function_527(bool bParam0) //Position: 0x109EA / 68074
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (!IS_OBJECT_VALID(StackVal))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(*bParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(StackVal))
	{
		bVar4 = CREATE_OBJECT_ITERATOR(*bParam0);
		if (!IS_ITERATOR_VALID(bVar4))
		{
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(StackVal, bVar4);
		bVar5 = START_OBJECT_ITERATOR(bVar4);
		while (IS_OBJECT_VALID(bVar5))
		{
			bVar7 = GET_EVENT_FROM_OBJECT(bVar5);
			bVar6 = GET_EVENT_TARGET_AS_OBJECT(bVar7);
			bVar8 = GET_ACTOR_FROM_OBJECT(bVar6);
			if (IS_ACTOR_VALID(bVar8))
			{
				bVar1 = GET_ACTOR_NAME(bVar8);
				iVar0++;
				if (STRING_CONTAINS_STRING(bVar1, "NPC"))
				{
					STRING_CLEAR_TOKENIZER();
					SET_OWNERSHIP_STRAGGLER(bVar1, "_");
					bVar2 = STRING_GET_TOKEN(0);
					iVar3 = STRING_TO_INT(bVar2);
					Stack.Push(bVar8);
					Stack.Push(iVar3);
					Call_Loc(bParam0->f_20);
					SQUAD_JOIN(bVar8, bParam0->f_68);
				}
				else if (STRING_CONTAINS_STRING(bVar1, "Horse"))
				{
					TASK_FLEE_ACTORSET(bVar8, Function_490(), -1.0f, -1.0f, 0, 0, 0);
					RELEASE_ACTOR(bVar8);
					SQUAD_JOIN(bVar8, bParam0->f_72);
				}
			}
			bVar5 = OBJECT_ITERATOR_NEXT(bVar4);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(StackVal);
		EVENT_TRAP_CLEAR_EVENTS(StackVal);
		DESTROY_ITERATOR(bVar4);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

var Function_528(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x10AFF / 68351
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	vector3 vVar10;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_SCAN_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		vVar10.x = 0.0f;
		vVar10.f_8 = 0.0f;
		vVar10.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&vVar0, 5.0f, &vVar3, &uVar6))
		{
		}
		else
		{
			vVar3 = { StackVal, StackVal, vVar0 };
		}
		if (!Function_218(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

var Function_529(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x10B9A / 68506
{
	var uVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_SCAN_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	if (bVar10)
	{
	}
	else
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
		bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	}
	if (bVar10)
	{
		vVar11.x = 0.0f;
		vVar11.f_8 = 0.0f;
		vVar11.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&uVar0, 5.0f, &vVar3, &uVar6))
		{
			if (!Function_218(StackVal, StackVal, vVar3))
			{
				bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar11);
			}
		}
	}
	return bVar9;
}

var Function_530(bool bParam0, bool bParam1) //Position: 0x10C48 / 68680
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	bVar1 = RAND_INT_RANGE(bParam0, bParam1);
	bVar0 = bVar1;
	return bVar0;
}

int Function_531(vector3 vParam0, bool bParam3) //Position: 0x10C6F / 68719
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar4 = GET_LOCAL_SLOT();
	bVar5 = Function_48();
	fVar6 = 1E+08.0f;
	if (IS_ACTOR_VALID(bVar5))
	{
		Function_255(bVar5);
		fVar6 = VDIST2(vParam0, Function_255(bVar5));
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (GET_SLOT_POSITION(bVar0, &vVar1))
			{
				bVar5 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					Function_255(bVar5);
					vVar1 = { StackVal, StackVal, Function_255(bVar5) };
				}
				fVar7 = VDIST2(vVar1, vParam0);
				if (fVar7 > fVar6)
				{
					bVar4 = bVar0;
					fVar6 = fVar7;
					if (bParam3)
					{
						return bVar4;
					}
				}
			}
		}
		bVar0++;
	}
	return bVar4;
}

bool Function_532(bool bParam0) //Position: 0x10D0F / 68879
{
	if (bParam0->f_64)
	{
		return 0;
	}
	if (bParam0->f_32 > bParam0->f_24)
	{
		return 1;
	}
	return 0;
}

void Function_533(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, var uParam8, var uParam9) //Position: 0x10D2F / 68911
{
	var uVar0;
	
	uVar0 = 1;
	Function_526(StackVal, StackVal, StackVal, StackVal, "Bruiser Squad", &Local_330, vParam0, vParam3, &uVar0, 0, 1, bParam6, bParam7, uParam8, uParam9, Local_390.f_12);
}

void Function_534(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, var uParam8, var uParam9) //Position: 0x10D6B / 68971
{
	var uVar0;
	
	uVar0 = 1;
	Function_526(StackVal, StackVal, StackVal, StackVal, "Fast Squad", &Local_311, vParam0, vParam3, &uVar0, 0, 1, bParam6, bParam7, uParam8, uParam9, Local_383.f_12);
}

void Function_535(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, var uParam8, var uParam9) //Position: 0x10DA4 / 69028
{
	var uVar0;
	
	uVar0 = 1;
	Function_526(StackVal, StackVal, StackVal, StackVal, "Spitter Squad", &Local_292, vParam0, vParam3, &uVar0, 0, 1, bParam6, bParam7, uParam8, uParam9, Local_376.f_12);
}

void Function_536(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x10DE0 / 69088
{
	Function_526(StackVal, StackVal, StackVal, StackVal, "Standard Squad", &Local_273, vParam0, vParam3, uParam6, 1, 1, uParam7, uParam8, uParam9, uParam10, Local_369.f_12);
}

void Function_537(int iParam0, bool bParam1) //Position: 0x10E18 / 69144
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_202(iParam0))
	{
		iVar0 = (Function_369() - bParam1);
		iVar1 = Function_487(0);
		bVar2 = ROUND((IntToFloat(iVar1) * 0.9f));
		Function_196(iParam0, 0.5f);
	}
	return;
}

void Function_538(var uParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10) //Position: 0x10E4C / 69196
{
	if (bParam10)
	{
		return;
	}
	if (IS_OBJECT_VALID(*uParam0) && IS_OBJECTSET_VALID(*uParam1))
	{
		if (Function_202(iParam9))
		{
			Function_539(StackVal, StackVal, StackVal, StackVal, uParam1, bParam2, vParam3, vParam6, iParam9);
		}
	}
}

void Function_539(var uParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8) //Position: 0x10E85 / 69253
{
	vector3 vVar0;
	struct<5> Var3;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	var uVar15;
	float fVar18;
	bool bVar19;
	
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		Function_192(uParam0);
	}
	if (!IS_OBJECTSET_VALID(*uParam0))
	{
		*uParam0 = CREATE_OBJECTSET_IN_LAYOUT("RingOfFireSet", bParam1, 21, 1);
	}
	vVar0 = { StackVal, StackVal, vParam2 };
	Var3 = { StackVal, StackVal, vParam5 };
	fVar6 = 4.0f;
	bVar7 = CEIL(((6.28318f * fVar6) / 2.5f));
	fVar18 = (360.0f / TO_FLOAT(bVar7));
	bVar8 = false;
	while (bVar8 <= bVar7)
	{
		vVar12 = { fVar6, 0.0f, 0.0f };
		Function_37(StackVal, (&vVar12 + (fVar18 * TO_FLOAT(bVar8))));
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, Function_37(StackVal, (&vVar12 + (fVar18 * TO_FLOAT(bVar8)))), StackVal) };
		if (!FIND_GROUND_INTERSECTION(&vVar9, 5.0f, &vVar12, &uVar15))
		{
			vVar12 = { StackVal, StackVal, vVar9 };
		}
		bVar19 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam1, "", "anim_blacksmith_fire", vVar12);
		UNK_0x6745191B(bVar19, 0.0f, 0.0f, 0.0f);
		ADD_OBJECT_TO_OBJECTSET(bVar19, *uParam0);
		bVar8++;
	}
	Function_196(iParam8, 56.0f);
}

void Function_540(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x10F80 / 69504
{
	bool bVar0;
	bool bVar1;
	
	if (bParam7)
	{
		return;
	}
	if (IS_OBJECT_VALID(*uParam1))
	{
		if (Function_47(*uParam5, bParam6))
		{
			DECOR_SET_INT(*uParam1, "UseStage", false);
			bVar0 = GET_BLIP_ON_OBJECT(*uParam0);
			if (IS_BLIP_VALID(bVar0))
			{
				Function_192(iParam2);
				Function_191(uParam3);
				REMOVE_BLIP(bVar0);
			}
		}
		if (Function_542(*uParam1, uParam4))
		{
			bVar1 = Function_48();
			DECOR_SET_INT(bVar1, "iLockerOpen", true);
			if (!Function_47(*uParam5, bParam6))
			{
				Function_541(GET_LOCAL_SLOT(), uParam8);
			}
			Function_5(uParam5, bParam6);
		}
	}
	else
	{
		*uParam4 = 0;
		if (DECOR_CHECK_EXIST(Function_48(), "PickingFrame"))
		{
			DECOR_REMOVE(Function_48(), "PickingFrame");
		}
	}
}

void Function_541(var uParam0, int iParam1) //Position: 0x1104B / 69707
{
	struct<5> Var0;
	
	Var0 = uParam0;
	Var0.f_4 = iParam1;
	NET_SCRIPTMSG_SEND(3, 62, &Var0, 2, 1);
	return;
}

bool Function_542(bool bParam0, int iParam1) //Position: 0x11066 / 69734
{
	bool bVar0;
	
	bVar0 = Function_48();
	if (!Function_274(bVar0, 8))
	{
		*iParam1 = 0;
		if (DECOR_CHECK_EXIST(bVar0, "PickingFrame"))
		{
			DECOR_REMOVE(bVar0, "PickingFrame");
		}
		return 0;
	}
	if (GET_CURRENT_GRINGO(bVar0) != GET_GRINGO_FROM_OBJECT(bParam0))
	{
		*iParam1 = 0;
		if (DECOR_CHECK_EXIST(bVar0, "PickingFrame"))
		{
			DECOR_REMOVE(bVar0, "PickingFrame");
		}
		return 0;
	}
	if (DECOR_CHECK_EXIST(bVar0, "nIsPicking"))
	{
		if (!DECOR_CHECK_EXIST(bVar0, "PickingFrame"))
		{
			*iParam1 = 75;
			DECOR_SET_INT(bVar0, "PickingFrame", *iParam1);
		}
		else
		{
			*iParam1 = DECOR_GET_INT(bVar0, "PickingFrame");
			*iParam1 = (*iParam1 - 1);
			DECOR_SET_INT(bVar0, "PickingFrame", *iParam1);
			if (*iParam1 < 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_543(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1117A / 70010
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 <= 0 && iParam0 >= 3)
	{
		iVar0 = 13;
	}
	else if (iParam0 <= 4 && iParam0 >= 7)
	{
		iVar0 = 13;
	}
	else if (iParam0 <= 8 && iParam0 >= 11)
	{
		iVar0 = 3;
	}
	else if (iParam0 > 12)
	{
		iVar0 = 3;
		Function_196(iParam2, 10.0f);
	}
	if (bParam3)
	{
		iVar0 = 3;
		Function_196(iParam2, 10.0f);
	}
	if (StackVal == iVar0 || !Global_16524.f_16)
	{
		Function_545(iVar0);
		*uParam1 = (*uParam1 * 1.667f);
		if (*uParam1 < 1.0f || bParam3)
		{
			*uParam1 = 1.0f;
		}
		Function_544(iVar0, 0, 1, 30, 0);
		Function_179(*uParam1, 90.0f);
	}
}

void Function_544(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11232 / 70194
{
	int iVar0;
	bool bVar1;
	
	Function_178(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_181(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_175(StackVal, bVar1, bParam4);
		}
	}
}

void Function_545(int iParam0) //Position: 0x112A4 / 70308
{
	switch (iParam0)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

void Function_546(int iParam0, char* cParam1, bool bParam2) //Position: 0x112D5 / 70357
{
	if (bParam2)
	{
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_ON_OBJECT(cParam1, "script_lightning_marker", *iParam0, 0.0f, 0.25f, 0.0f, 1, false), 0.0f, 0.0f, 0.0f);
	}
	return;
}

void Function_547(var uParam0, var uParam1, var uParam2, bool bParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11, var uParam12, bool bParam13, bool bParam14) //Position: 0x1131B / 70427
{
	vector3 vVar0;
	char* cVar3[16];
	bool bVar7;
	vector3 vVar8;
	
	if (bParam14)
	{
		return;
	}
	vVar0 = { StackVal, StackVal, vParam4 };
	strcpy(&cVar3, "Graveyard_Safe", 16);
	if (!IS_OBJECT_VALID(*uParam0) && IS_OBJECT_VALID(bParam3))
	{
		bVar7 = 0.0f;
		vVar8 = { 0.0f, 0.0f, 0.0f };
		ROTATE_VECTOR_XZ(&vVar8, bVar7, 0);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		*uParam0 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cVar3, bParam3, StackVal) + Vector(vVar8, vVar0, "$/fragments/p_gen_coffin04x"), vParam7, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
		ADD_BLIP_FOR_OBJECT(*uParam0, bParam13, 0f, 2, 0);
		SNAP_OBJECT_TO_GROUND(*uParam0, 5.0f, true, 1092616192);
	}
	*uParam1 = FIND_OBJECT_IN_OBJECT(*uParam0, "MP_OpenCoffin");
	DECOR_SET_INT(*uParam1, "UseStage", true);
	*uParam11 = CLEAR_AREA_OF_GRASS(vVar0, 2.0f);
	*uParam12 = CLEAR_AREA_OF_TREE_TYPE(vVar0, 2.0f, "");
	Function_539(StackVal, StackVal, StackVal, StackVal, uParam2, bParam3, vVar0, vParam7, uParam10);
}

bool Function_548(int iParam0) //Position: 0x1141B / 70683
{
	if (Function_202(iParam0))
	{
		Function_549(iParam0);
		return 1;
	}
	return 0;
}

void Function_549(int iParam0) //Position: 0x11431 / 70705
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_550(float fParam0, bool bParam1, bool bParam2) //Position: 0x11445 / 70725
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	UI_ENTER("MPSplash");
	UNK_0xD792B93B("MPSplash", fParam0);
	UI_INCLUDE("MPSplashTitle");
	UI_INCLUDE("MPSplashItem.s0");
	UI_ENABLE("MPSplashTitle");
	UI_ENABLE("MPSplashItem.s0");
	UI_SET_STYLE("MPSplashTitle", 99);
	UI_SET_STRING("Generic_Dbuffer10_0", bParam2);
	UI_SET_STRING("Generic_Dbuffer128_0", UI_GET_STRING(bParam1));
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_REFRESH("MPSplashTitle");
	UI_REFRESH("MPSplashItem.s0");
	return;
}

void Function_551(float fParam0, bool bParam1) //Position: 0x115C7 / 71111
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	UI_ENTER("MPSplash");
	UNK_0xD792B93B("MPSplash", fParam0);
	UI_INCLUDE("MPSplashTitle");
	UI_INCLUDE("MPSplashItem.s0");
	UI_ENABLE("MPSplashTitle");
	UI_ENABLE("MPSplashItem.s0");
	UI_SET_STYLE("MPSplashTitle", 99);
	UI_SET_STRING("Generic_Dbuffer10_0", "common_null");
	UI_SET_STRING("Generic_Dbuffer128_0", UI_GET_STRING(bParam1));
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_REFRESH("MPSplashTitle");
	UI_REFRESH("MPSplashItem.s0");
	return;
}

void Function_552(bool bParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x11755 / 71509
{
	int iVar0;
	
	if (bParam0)
	{
		return;
	}
	Function_326(1, 1);
	iVar0 = 1;
	Function_49(65536, 0);
	if (IS_STRING_VALID(bParam2))
	{
		Function_505(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6, 2, 0);
	}
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_793, "Local State", "Player was granted an extra life.", false, false, false, false);
		Function_31(&Local_483, 0);
	}
}

void Function_553(bool bParam0, var uParam1, int iParam2) //Position: 0x117D7 / 71639
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		*uParam1 = RAND_INT_RANGE(false, (GET_OBJECTSET_SIZE(bParam0) - 1));
	}
	*iParam2 = (RAND_INT_RANGE(true, 10000) % 3) + 1;
	return;
}

void Function_554(bool bParam0, var uParam1, var uParam2) //Position: 0x11801 / 71681
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = GET_OBJECTSET_SIZE(bParam0);
		bVar1 = RAND_INT_RANGE(false, (bVar0 - 1));
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (IS_OBJECT_VALID(bVar2))
		{
			GET_OBJECT_POSITION(bVar2, uParam1);
			GET_OBJECT_ORIENTATION(bVar2, uParam2);
		}
	}
	return;
}

void Function_555() //Position: 0x11841 / 71745
{
	iLocal_215 = 0;
	return;
}

void Function_556(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1184A / 71754
{
	Function_595(uParam4);
	if (bLocal_216 == 0)
	{
		Function_592(uParam0, uParam1, uParam2, uParam3);
		Function_590(uParam0, uParam1);
		Function_588(uParam0, uParam1);
		Function_584(uParam0, uParam1);
		Function_563(uParam0, uParam1);
	}
	else
	{
		Function_562(uParam0, uParam1, uParam2, uParam3);
		Function_561(uParam0, uParam1);
		Function_560(uParam0, uParam1);
		Function_559(uParam0, uParam1);
		Function_557(uParam0, uParam1);
	}
	Function_338(8192);
	Function_40(16384);
}

void Function_557(var uParam0, bool bParam1) //Position: 0x118BA / 71866
{
	if (Local_397 == 4294967295)
	{
		return;
	}
	if (!Local_397.f_24)
	{
		Function_563(uParam0, bParam1);
	}
	else
	{
		Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_349, Local_397, bParam1, 1204, 1213);
	}
	return;
}

void Function_558(int iParam0, struct<21> Param1) //Position: 0x118EE / 71918
{
	*iParam8 = *iParam8;
	iParam0->f_12 = iParam9;
	iParam0->f_16 = iParam10;
	iParam0->f_24 = StackVal;
	iParam0->f_28 = StackVal;
	iParam0->f_52 = Param1.f_16;
	iParam0->f_56 = 0;
	iParam0->f_60 = 1;
	iParam0->f_64 = Param1.f_20;
	iParam0->f_32 = 0;
	Function_196(iParam0 + 40, iParam0->f_52);
}

void Function_559(var uParam0, int iParam1) //Position: 0x11942 / 72002
{
	if (Local_390 == 4294967295)
	{
		return;
	}
	if (!Local_390.f_24)
	{
		Function_584(uParam0, iParam1);
	}
	else
	{
		Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_330, Local_390, iParam1, 1214, 1221);
	}
	return;
}

void Function_560(var uParam0, int iParam1) //Position: 0x11976 / 72054
{
	if (Local_383 == 4294967295)
	{
		return;
	}
	if (!Local_383.f_24)
	{
		Function_588(uParam0, iParam1);
	}
	else
	{
		Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_311, Local_383, iParam1, 1204, 1213);
	}
	return;
}

void Function_561(var uParam0, int iParam1) //Position: 0x119AA / 72106
{
	if (Local_376 == 4294967295)
	{
		return;
	}
	if (!Local_376.f_24)
	{
		Function_590(uParam0, iParam1);
	}
	else
	{
		Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_292, Local_376, iParam1, 1222, 1227);
	}
	return;
}

void Function_562(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x119DE / 72158
{
	if (Local_369 == 4294967295)
	{
		return;
	}
	if (!Local_369.f_24)
	{
		Function_592(uParam0, uParam1, uParam2, uParam3);
	}
	else
	{
		Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_273, Local_369, uParam1, uParam2, uParam3);
	}
}

void Function_563(var uParam0, int iParam1) //Position: 0x11A18 / 72216
{
	if (Local_397 == 4294967295)
	{
		return;
	}
	Local_349 = *iParam1;
	Local_397.f_24 = 1;
	Function_579(StackVal, StackVal, &Local_349, "al", *uParam0, 1204, 1213, Local_397.f_16, 0, 1, Local_397.f_20);
	Function_564(&Local_349, 72306);
	return;
}

void Function_564(var uParam0, int iParam1) //Position: 0x11A66 / 72294
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_565(bool bParam0, int iParam1) //Position: 0x11A72 / 72306
{
	iParam1 = iParam1;
	Function_568(&bParam0, Local_397, 1);
	Function_566(&bParam0, Local_397, 4);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(bParam0), 104);
	return;
}

void Function_566(bool bParam0, int iParam1, int iParam2) //Position: 0x11A98 / 72344
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		bVar0 = Function_567(iParam1, iParam2);
		SET_ACTOR_HEALTH(*bParam0, bVar0);
		SET_ACTOR_MAX_HEALTH(*bParam0, bVar0);
	}
	return;
}

int Function_567(int iParam0, int iParam1) //Position: 0x11AC0 / 72384
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000002:
			iVar0 = 20.0f;
			break;
		
		case 0x00000000:
			iVar0 = 30.0f;
			break;
		
		case 0x00000001:
			iVar0 = 40.0f;
			break;
		
		case 0x00000003:
			iVar0 = 60.0f;
			break;
		
		case 0x00000004:
			iVar0 = 80.0f;
			break;
	}
	if (iParam0 == 0)
	{
		iVar0 = (iVar0 + 0.0f);
	}
	else if (iParam0 == 1)
	{
		iVar0 = (iVar0 + 10.0f);
	}
	else if (iParam0 == 2)
	{
		iVar0 = (iVar0 + 20.0f);
	}
	else if (iParam0 == 3)
	{
		iVar0 = (iVar0 + 40.0f);
	}
	else if (iParam0 == 4)
	{
		iVar0 = (iVar0 + 80.0f);
	}
	else if (iParam0 == 5)
	{
		iVar0 = (iVar0 + 120.0f);
	}
	else if (iParam0 == 6)
	{
		iVar0 = (iVar0 * 8.0f);
	}
	return iVar0;
}

void Function_568(var uParam0, int iParam1, int iParam2) //Position: 0x11B9D / 72605
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		Function_572(*uParam0);
		if (IS_SLOT_VALID(false))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
			{
				MEMORY_CONSIDER_AS(*uParam0, GET_SLOT_ACTOR(false), 4);
			}
		}
		if (IS_SLOT_VALID(true))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
			{
				MEMORY_CONSIDER_AS(*uParam0, GET_SLOT_ACTOR(true), 4);
			}
		}
		if (IS_SLOT_VALID(2))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
			{
				MEMORY_CONSIDER_AS(*uParam0, GET_SLOT_ACTOR(2), 4);
			}
		}
		if (IS_SLOT_VALID(3))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
			{
				MEMORY_CONSIDER_AS(*uParam0, GET_SLOT_ACTOR(3), 4);
			}
		}
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 24, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 25, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 26, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 27, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 28, true);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 29, false);
		ACTOR_ENABLE_VARIABLE_MESH(*uParam0, 30, false);
		SET_ACTOR_VISION_FIELD_OF_VIEW(*uParam0, 359.0f);
		SET_ACTOR_VISION_XRAY(*uParam0, 1);
		switch (iParam1)
		{
			case 0x00000000:
				SET_ACTOR_VISION_FIELD_OF_VIEW(*uParam0, 359.0f);
				SET_TOUGH_ACTOR(*uParam0, 0);
				break;
			
			case 0x00000001:
				SET_TOUGH_ACTOR(*uParam0, 0);
				break;
			
			case 0x00000002:
				SET_TOUGH_ACTOR(*uParam0, 0);
				break;
			
			case 0x00000003:
				SET_TOUGH_ACTOR(*uParam0, 1);
				break;
			
			case 0x00000004:
				SET_TOUGH_ACTOR(*uParam0, 1);
				SET_ACTOR_VISION_XRAY(*uParam0, 1);
				break;
			
			case 0x00000005:
				SET_TOUGH_ACTOR(*uParam0, 1);
				SET_ACTOR_VISION_XRAY(*uParam0, 1);
				break;
			
			case 0x00000006:
				SET_TOUGH_ACTOR(*uParam0, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(*uParam0, 359.0f);
				SET_ACTOR_VISION_XRAY(*uParam0, 1);
				TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(*uParam0, 30.0f);
				if (Function_222(*uParam0))
				{
					Function_571(*uParam0, 50.0f, -1.0f, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 16, 1);
					SET_ACTOR_PROOF(*uParam0, 522);
				}
				if (Function_570(*uParam0))
				{
					SET_ACTOR_PROOF(*uParam0, 522);
				}
				if (Function_569(*uParam0))
				{
					SET_ACTOR_PROOF(*uParam0, 522);
				}
				break;
		}
		if (!Function_222(*uParam0))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam0);
		}
		if (IS_ACTOR_VALID(*uParam0))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
			{
				ADD_BLIP_FOR_ACTOR(*uParam0, 322, 0, 2, 0);
			}
		}
		SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
		if (Function_222(*uParam0))
		{
			TASK_GO_NEAR_ACTORSET(*uParam0, Function_490(), 10.0f, 2);
		}
		else
		{
			TASK_GO_NEAR_ACTORSET(*uParam0, Function_490(), 5.0f, 2);
		}
		TASK_PRIORITY_SET(*uParam0, iParam2);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*uParam0, 33, 100.0f);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ZOMBIE was passedan invalid actor");
	}
	return;
}

bool Function_569(bool bParam0) //Position: 0x11E35 / 73269
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

bool Function_570(bool bParam0) //Position: 0x11E55 / 73301
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

void Function_571(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x11E75 / 73333
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

void Function_572(bool bParam0) //Position: 0x11EBC / 73404
{
	int iVar0;
	int iVar1;
	
	Function_577(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_576(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
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
	if (Function_574(bParam0))
	{
		SET_ACTOR_SEX(bParam0, 1);
	}
	else
	{
		SET_ACTOR_SEX(bParam0, 0);
	}
	if (Function_222(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "Hogtie_DontGiveWeapons", true);
		AI_SET_TR_PROGRAM_FOR_ACTOR(bParam0, "Zombie");
		MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 0);
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.2f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 3.0f, 3.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 10.0f);
		iVar0 = AI_PREDICATE_FIND_NAMED("ToxicZombie", 0);
		if (AI_PREDICATE_IS_VALID(iVar0))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
		}
	}
	else
	{
		if (Function_569(bParam0))
		{
			DECOR_SET_BOOL(bParam0, "FastZombie", true);
		}
		else if (Function_570(bParam0))
		{
			DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
		}
		iVar1 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
		if (AI_PREDICATE_IS_VALID(iVar1))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar1, 1);
		}
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (Function_569(bParam0))
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
		SET_ACTOR_HARD_LOCK_AQUIRE_BONE(bParam0, "head");
	}
	else if (Function_570(bParam0))
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else if (Function_573(bParam0))
	{
		SET_ACTOR_BASE_SCORE(bParam0, 100.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 1000.0f, 1);
	}
	else if (Function_489(bParam0))
	{
		SET_ACTOR_BASE_SCORE(bParam0, 195.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 1995.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	return;
}

bool Function_573(bool bParam0) //Position: 0x12131 / 74033
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_574(bool bParam0) //Position: 0x12151 / 74065
{
	switch (GET_ACTOR_ENUM(bParam0))
	{
		case 0x000004B7:
		case 0x000004B9:
		case 0x000004BD:
		case 0x000004BE:
		case 0x000004C5:
		case 0x000004CE:
			return 1;
			break;
	}
	if (Function_222(bParam0) || Function_575(bParam0))
	{
		if (!IS_ACTOR_MALE(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_575(bool bParam0) //Position: 0x121A4 / 74148
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(bParam0, "Zombie");
		}
	}
	return 0;
}

void Function_576(bool bParam0) //Position: 0x121E0 / 74208
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

void Function_577(bool bParam0) //Position: 0x12214 / 74260
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
	Function_578(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_578(var uParam0, bool bParam1) //Position: 0x12578 / 75128
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

void Function_579(int iParam0, char* cParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, var uParam10) //Position: 0x1259A / 75162
{
	char* cVar0[32];
	char* cVar8[32];
	char* cVar16[32];
	
	strcpy(&cVar0, cParam1, 32);
	stradd(&cVar0, "_layout", 32);
	*iParam0 = CREATE_LAYOUT(&cVar0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&cVar8, cParam1, 32);
		stradd(&cVar8, "_crtTrap", 32);
		iParam0->f_4 = CREATE_EVENT_TRAP(&cVar8, 70, *iParam0);
		EVENT_TRAP_ON_OWNER(StackVal, *iParam0);
		EVENT_TRAP_STORE_EVENTS(StackVal, 1);
		Function_582(iParam0);
		Function_581(iParam0, uParam2);
		iParam0->f_12 = uParam3;
		iParam0->f_16 = uParam4;
		iParam0->f_24 = iParam5;
		iParam0->f_28 = iParam6;
		iParam0->f_32 = 0;
		iParam0->f_36 = 0;
		iParam0->f_52 = uParam7;
		iParam0->f_56 = iParam8;
		iParam0->f_60 = iParam9;
		iParam0->f_64 = uParam10;
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_NPC", 32);
		iParam0->f_68 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_Horse", 32);
		iParam0->f_72 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		Function_580(iParam0 + 40, iParam0->f_52);
	}
}

void Function_580(int iParam0, float fParam1) //Position: 0x1268F / 75407
{
	if (!Function_122(iParam0))
	{
		Function_196(iParam0, fParam1);
	}
	return;
}

void Function_581(var uParam0, bool bParam1) //Position: 0x126A5 / 75429
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(StackVal))
	{
		DESTROY_OBJECTSET(StackVal);
	}
	uParam0->f_8 = CREATE_OBJECTSET_IN_LAYOUT("ew_spawnSet", *uParam0, 8, 1);
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		if (IS_OBJECT_VALID(bVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(StackVal, bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_582(int iParam0) //Position: 0x1270A / 75530
{
	Function_564(iParam0, 75545);
	return;
}

void Function_583(var uParam0, var uParam1) //Position: 0x12719 / 75545
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return;
}

void Function_584(var uParam0, int iParam1) //Position: 0x12727 / 75559
{
	if (Local_390 == 4294967295)
	{
		return;
	}
	Local_330 = *iParam1;
	Local_390.f_24 = 1;
	Function_579(StackVal, StackVal, &Local_330, "br", *uParam0, 1214, 1221, Local_390.f_16, 0, 1, Local_390.f_20);
	Function_564(&Local_330, 75637);
	return;
}

void Function_585(bool bParam0, int iParam1) //Position: 0x12775 / 75637
{
	iParam1 = iParam1;
	Function_568(&bParam0, Local_390, 2);
	Function_586(bParam0, 1, 1);
	Function_566(&bParam0, Local_390, 3);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(bParam0), 103);
	return;
}

void Function_586(bool bParam0, bool bParam1, bool bParam2) //Position: 0x127A2 / 75682
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
			Function_587(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_587(bool bParam0, int iParam1, bool bParam2) //Position: 0x12854 / 75860
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_55(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_221();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_55(), vVar3, Function_221());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_55(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_221();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_55(), vVar0, Function_221());
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

void Function_588(var uParam0, int iParam1) //Position: 0x12A04 / 76292
{
	if (Local_383 == 4294967295)
	{
		return;
	}
	Local_311 = *iParam1;
	Local_383.f_24 = 1;
	Function_579(StackVal, StackVal, &Local_311, "fa", *uParam0, 1204, 1213, Local_383.f_16, 0, 1, Local_383.f_20);
	Function_564(&Local_311, 76370);
	return;
}

void Function_589(bool bParam0, int iParam1) //Position: 0x12A52 / 76370
{
	iParam1 = iParam1;
	Function_568(&bParam0, Local_383, 2);
	Function_586(bParam0, 1, 1);
	Function_566(&bParam0, Local_383, 2);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(bParam0), 102);
	return;
}

void Function_590(var uParam0, int iParam1) //Position: 0x12A7F / 76415
{
	if (Local_376 == 4294967295)
	{
		return;
	}
	Local_292 = *iParam1;
	Local_376.f_24 = 1;
	Function_579(StackVal, StackVal, &Local_292, "sp", *uParam0, 1222, 1227, Local_376.f_16, 0, 1, Local_376.f_20);
	Function_564(&Local_292, 76493);
	return;
}

void Function_591(bool bParam0, int iParam1) //Position: 0x12ACD / 76493
{
	iParam1 = iParam1;
	Function_568(&bParam0, Local_376, 2);
	Function_586(bParam0, 1, 1);
	Function_566(&bParam0, Local_376, 1);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(bParam0), 101);
	return;
}

void Function_592(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12AFA / 76538
{
	if (Local_369 == 4294967295)
	{
		return;
	}
	Local_273 = *uParam1;
	Local_369.f_24 = 1;
	Function_579(StackVal, StackVal, &Local_273, "sd", *uParam0, uParam2, uParam3, Local_369.f_16, 0, 1, Local_369.f_20);
	Function_564(&Local_273, 76618);
}

void Function_593(bool bParam0, int iParam1) //Position: 0x12B4A / 76618
{
	iParam1 = iParam1;
	Function_568(&bParam0, Local_369, 2);
	Function_594(bParam0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	Function_566(&bParam0, Local_369, 0);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(bParam0), 100);
	return;
}

void Function_594(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x12B7E / 76670
{
	int iVar0;
	
	if (Function_230(bParam0) && !Function_217(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (bParam2 == 4294967294 && bParam3 == 4294967294)
	{
		if (bParam2 == 4294967295)
		{
			bParam2 = RAND_INT_RANGE(false, 4);
		}
		if (bParam3 == 4294967295)
		{
			bParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, bParam2, bParam3))
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
	Function_577(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_576(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
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
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
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
	Function_586(bParam0, bParam4, bParam5);
}

void Function_595(bool bParam0) //Position: 0x12DE1 / 77281
{
	if (bLocal_216 > 15)
	{
		iLocal_217 = 15;
	}
	else
	{
		iLocal_217 = bLocal_216;
	}
	if (bParam0)
	{
		iLocal_217 = 100;
		Function_615(&Local_404);
		return;
	}
	switch (iLocal_217)
	{
		case 0x00000000:
			Function_614(&Local_404);
			break;
		
		case 0x00000001:
			Function_613(&Local_404);
			break;
		
		case 0x00000002:
			Function_612(&Local_404);
			break;
		
		case 0x00000003:
			Function_611(&Local_404);
			break;
		
		case 0x00000004:
			Function_610(&Local_404);
			break;
		
		case 0x00000005:
			Function_609(&Local_404);
			break;
		
		case 0x00000006:
			Function_608(&Local_404);
			break;
		
		case 0x00000007:
			Function_607(&Local_404);
			break;
		
		case 0x00000008:
			Function_606(&Local_404);
			break;
		
		case 0x00000009:
			Function_605(&Local_404);
			break;
		
		case 0x0000000A:
			Function_604(&Local_404);
			break;
		
		case 0x0000000B:
			Function_603(&Local_404);
			break;
		
		case 0x0000000C:
			Function_602(&Local_404);
			break;
		
		case 0x0000000D:
			Function_601(&Local_404);
			break;
		
		case 0x0000000E:
			Function_600(&Local_404);
			break;
		
		case 0x0000000F:
			Function_596(&Local_404);
			break;
	}
	return;
}

void Function_596(int iParam0) //Position: 0x12F00 / 77568
{
	Function_599(&Local_369, 5, 15, 5, 2, 0.3f, iLocal_437);
	Function_599(&Local_376, 5, 24, 8, 3, 0.3f, iLocal_437);
	Function_599(&Local_383, 5, 18, 6, 3, 0.3f, iLocal_437);
	Function_599(&Local_390, 5, 18, 6, 4, 0.3f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[152] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[152]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

var Function_597(vector3 vParam0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, vector3 vParam14, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, vector3 vParam28) //Position: 0x12FA7 / 77735
{
	bool bVar0;
	
	bVar0 = (((((Function_598(vParam0.x, 0) * IntToFloat(vParam0.z)) + (Function_598(vParam7.x, 3) * IntToFloat(vParam7.z))) + (Function_598(vParam14.x, 1) * IntToFloat(vParam14.z))) + (Function_598(vParam21.x, 2) * IntToFloat(vParam21.z))) + (Function_598(vParam28.x, 4) * IntToFloat(vParam28.z)));
	return ROUND(bVar0);
}

int Function_598(int iParam0, int iParam1) //Position: 0x12FF6 / 77814
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0.0f;
	}
	iVar0 = iParam0;
	return Function_567(iVar0, iParam1);
}

void Function_599(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6) //Position: 0x1300F / 77839
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_12 = iParam4;
	uParam0->f_16 = fParam5;
	uParam0->f_20 = iParam6;
}

void Function_600(int iParam0) //Position: 0x1303A / 77882
{
	Function_599(&Local_369, 5, 18, 6, 2, 0.3f, iLocal_437);
	Function_599(&Local_376, 5, 21, 7, 3, 0.3f, iLocal_437);
	Function_599(&Local_383, 5, 18, 6, 3, 0.3f, iLocal_437);
	Function_599(&Local_390, 5, 18, 6, 3, 0.3f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[142] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[142]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_601(int iParam0) //Position: 0x130E1 / 78049
{
	Function_599(&Local_369, 5, 21, 7, 2, 0.3f, iLocal_437);
	Function_599(&Local_376, 5, 21, 7, 3, 0.3f, iLocal_437);
	Function_599(&Local_383, 5, 15, 5, 3, 0.3f, iLocal_437);
	Function_599(&Local_390, 5, 18, 6, 3, 0.3f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[132] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[132]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_602(int iParam0) //Position: 0x13188 / 78216
{
	Function_599(&Local_369, 5, 21, 7, 2, 0.3f, iLocal_437);
	Function_599(&Local_376, 5, 21, 7, 2, 0.3f, iLocal_437);
	Function_599(&Local_383, 5, 15, 5, 3, 0.3f, iLocal_437);
	Function_599(&Local_390, 5, 18, 6, 3, 0.3f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[122] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[122]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_603(int iParam0) //Position: 0x1322F / 78383
{
	Function_599(&Local_369, 5, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 5, 21, 7, 2, 0.3f, iLocal_437);
	Function_599(&Local_383, 5, 15, 5, 2, 0.3f, iLocal_437);
	Function_599(&Local_390, 5, 15, 5, 3, 0.3f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[112] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[112]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_604(int iParam0) //Position: 0x132D2 / 78546
{
	Function_599(&Local_369, 5, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 5, 18, 6, 1, 0.4f, iLocal_437);
	Function_599(&Local_383, 5, 15, 5, 2, 0.4f, iLocal_437);
	Function_599(&Local_390, 5, 12, 4, 2, 0.4f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[102] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[102]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_605(int iParam0) //Position: 0x13375 / 78709
{
	Function_599(&Local_369, 5, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 5, 15, 5, 1, 0.4f, iLocal_437);
	Function_599(&Local_383, 5, 15, 5, 2, 0.4f, iLocal_437);
	Function_599(&Local_390, 5, 12, 4, 2, 0.4f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[92] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[92]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_606(int iParam0) //Position: 0x13418 / 78872
{
	Function_599(&Local_369, 4, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 4, 15, 5, 1, 0.4f, iLocal_437);
	Function_599(&Local_383, 4, 12, 4, 1, 0.4f, iLocal_437);
	Function_599(&Local_390, 4, 12, 4, 1, 0.4f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[82] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[82]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_607(int iParam0) //Position: 0x134BB / 79035
{
	Function_599(&Local_369, 4, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 4, 12, 4, 1, 0.5f, iLocal_437);
	Function_599(&Local_383, 4, 12, 4, 1, 0.5f, iLocal_437);
	Function_599(&Local_390, 4, 12, 4, 1, 0.5f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[72] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[72]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_608(int iParam0) //Position: 0x1355C / 79196
{
	Function_599(&Local_369, 3, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 3, 12, 4, 1, 0.6f, iLocal_437);
	Function_599(&Local_383, 3, 12, 4, 1, 0.6f, iLocal_437);
	Function_599(&Local_390, 3, 12, 4, 1, 0.6f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[62] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[62]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_609(int iParam0) //Position: 0x135FD / 79357
{
	Function_599(&Local_369, 3, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 3, 12, 4, 1, 0.7f, iLocal_437);
	Function_599(&Local_383, 3, 12, 4, 1, 0.7f, iLocal_437);
	Function_599(&Local_390, 2, 9, 3, 1, 0.7f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[52] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[52]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_610(int iParam0) //Position: 0x1369E / 79518
{
	Function_599(&Local_369, 2, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 2, 12, 4, 1, 0.8f, iLocal_437);
	Function_599(&Local_383, 2, 9, 3, 1, 0.8f, iLocal_437);
	Function_599(&Local_390, 1, 9, 3, 1, 0.8f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[42] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[42]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_611(int iParam0) //Position: 0x1373F / 79679
{
	Function_599(&Local_369, 2, 24, 8, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 2, 12, 4, 1, 0.8f, iLocal_437);
	Function_599(&Local_383, 1, 9, 3, 1, 0.8f, iLocal_437);
	Function_599(&Local_390, 0, 6, 2, 1, 0.8f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[32] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[32]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_612(int iParam0) //Position: 0x137DF / 79839
{
	Function_599(&Local_369, 1, 27, 9, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 1, 12, 4, 1, 0.8f, iLocal_437);
	Function_599(&Local_383, 0, 9, 3, 1, 0.8f, iLocal_437);
	Function_599(&Local_390, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[22] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[22]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_613(int iParam0) //Position: 0x1387B / 79995
{
	Function_599(&Local_369, 1, 36, 12, 2, 1.0f, iLocal_437);
	Function_599(&Local_376, 0, 9, 3, 1, 0.8f, iLocal_437);
	Function_599(&Local_383, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_390, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[12] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[12]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_614(int iParam0) //Position: 0x13912 / 80146
{
	Function_599(&Local_369, 0, 42, 14, 3, 1.2f, iLocal_437);
	Function_599(&Local_376, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_383, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_390, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, iLocal_437);
	(*iParam0)[02] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[02]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_615(int iParam0) //Position: 0x139A8 / 80296
{
	Function_599(&Local_369, 6, 1, 3, 3, 0.1f, 1);
	Function_599(&Local_376, 6, 1, 5, 5, 0.1f, 1);
	Function_599(&Local_383, 6, 1, 9, 9, 0.1f, 1);
	Function_599(&Local_390, 6, 1, 7, 7, 0.1f, 1);
	Function_599(&Local_397, 4294967295, 0, 0, 5, 0.0f, 1);
	(*iParam0)[152] = Function_597(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_369, Local_390, Local_376, Local_383, Local_397);
	iParam0[152]->f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_616(bool bParam0) //Position: 0x13A42 / 80450
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
			Function_400("UN_Narr_HordeBegins", 0);
			break;
		
		case 0x00000002:
		case 0x00000003:
			Function_400("UN_Narr_NextWaveDiff1", 0);
			break;
		
		case 0x00000004:
		case 0x00000005:
			Function_400("UN_Narr_NextWaveDiff2", 0);
			break;
		
		case 0x00000006:
		case 0x00000007:
			Function_400("UN_Narr_NextWaveDiff3", 0);
			break;
		
		case 0x00000008:
		case 0x00000009:
			Function_400("UN_Narr_NextWaveDiff4", 0);
			break;
		
		default:
			Function_400("UN_Narr_NextWaveDiff5", 0);
			break;
	}
	return;
}

void Function_617(var uParam0) //Position: 0x13B43 / 80707
{
	uParam0->f_64 = 1;
	return;
}

void Function_618() //Position: 0x13B4E / 80718
{
	Function_614(&Local_404);
	Function_613(&Local_404);
	Function_612(&Local_404);
	Function_611(&Local_404);
	Function_610(&Local_404);
	Function_609(&Local_404);
	Function_608(&Local_404);
	Function_607(&Local_404);
	Function_606(&Local_404);
	Function_605(&Local_404);
	Function_604(&Local_404);
	Function_603(&Local_404);
	Function_602(&Local_404);
	Function_601(&Local_404);
	Function_600(&Local_404);
	Function_596(&Local_404);
	return;
}

void Function_619(var uParam0, int iParam1) //Position: 0x13BB4 / 80820
{
	Function_491(uParam0, iParam1);
	Function_621(&Global_83591, 1, 34, 50, 1);
	Function_621(&Global_83591, 2, 18, 100, 1);
	Function_621(&Global_83591, 3, 11, 20, 1);
	Function_620(&Global_83591, 1, (45.0f * 3.0f));
	Function_620(&Global_83591, 2, (45.0f * 3.0f));
	Function_620(&Global_83591, 3, (45.0f * 3.0f));
	return;
}

void Function_620(int iParam0, int iParam1, int iParam2) //Position: 0x13C12 / 80914
{
	if (iParam1 <= 0)
	{
	}
	else if (iParam1 >= 6)
	{
	}
	(*iParam0 + 276 + 528)[iParam1] = iParam2;
	return;
}

void Function_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13C35 / 80949
{
	Function_622(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_622(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x13C4D / 80973
{
	Function_623(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_623(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x13C64 / 80996
{
	if (!Function_625(iParam1))
	{
		return;
	}
	Function_624(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_624(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x13C87 / 81031
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_625(int iParam0) //Position: 0x13CB1 / 81073
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_626(int iParam0) //Position: 0x13CC1 / 81089
{
	if (!*iParam0)
	{
		UI_ENTER("NetTimer");
		*iParam0 = 1;
	}
	return;
}

void Function_627(int iParam0) //Position: 0x13CE3 / 81123
{
	if (Function_122(iParam0))
	{
		if (Function_120(iParam0))
		{
			Function_118();
			iParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			iParam0->f_8 = 0.0f;
			Function_4(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_628() //Position: 0x13DB3 / 81331
{
	int iVar0;
	
	iVar0 = (RAND_INT_RANGE(false, 1000) % 6);
	switch (iVar0)
	{
		case 0x00000001:
			Function_634();
			break;
		
		case 0x00000002:
			Function_633();
			break;
		
		case 0x00000003:
			Function_632();
			break;
		
		case 0x00000004:
			Function_631();
			break;
		
		case 0x00000005:
			Function_630();
			break;
		
		case 0x00000000:
			Function_629();
			break;
	}
	return;
}

void Function_629() //Position: 0x13E13 / 81427
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines6_v1_AA", "UN_Narr_IntroLines6_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines6_v1_AB", "UN_Narr_IntroLines6_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines6_v1_AC1", "UN_Narr_IntroLines6_v1_AC1", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines6_v1_AC2", "UN_Narr_IntroLines6_v1_AC2", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_630() //Position: 0x13F5D / 81757
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines5_v1_AA", "UN_Narr_IntroLines4_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines5_v1_AB", "UN_Narr_IntroLines5_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines5_v1_AC", "UN_Narr_IntroLines5_v1_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines5_v1_AD", "UN_Narr_IntroLines5_v1_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_631() //Position: 0x140BB / 82107
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines4_v1_AA", "UN_Narr_IntroLines4_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines4_v1_AB", "UN_Narr_IntroLines4_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines4_v1_AC", "UN_Narr_IntroLines4_v1_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_632() //Position: 0x141C0 / 82368
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines3_v1_AA1", "UN_Narr_IntroLines3_v1_AA1", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines3_v1_AA2", "UN_Narr_IntroLines3_v1_AA2", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines3_v1_AB1", "UN_Narr_IntroLines3_v1_AB1", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines3_v1_AB2", "UN_Narr_IntroLines3_v1_AB2", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_633() //Position: 0x1430E / 82702
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines2_v1_AA", "UN_Narr_IntroLines2_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines2_v1_AB1", "UN_Narr_IntroLines2_v1_AB1", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines2_v1_AB2", "UN_Narr_IntroLines2_v1_AB2", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines2_v1_AC", "UN_Narr_IntroLines2_v1_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_634() //Position: 0x14458 / 83032
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines1_v1_AA", "UN_Narr_IntroLines1_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines1_v1_AB", "UN_Narr_IntroLines1_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "UN_Narr_IntroLines1_v1_AC", "UN_Narr_IntroLines1_v1_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_635(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1455D / 83293
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "mp_gy_sepulcro_intro", 2, 1);
	}
	Function_636(&bVar0);
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

void Function_636(int iParam0) //Position: 0x145DD / 83421
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_638(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_637(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(bVar1, 0.0f, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 18.0f, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(bVar1, 1.0f, 0.5f, 1);
	return;
}

void Function_637(int iParam0) //Position: 0x14644 / 83524
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1363.385f, 22.95415f, 4334.812f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.216445f, 0.020458f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_638(int iParam0) //Position: 0x146AE / 83630
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1359.289f, 14.61196f, 4310.336f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.056052f, -1.486091f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_639(int iParam0) //Position: 0x14718 / 83736
{
	UI_EXIT("NetTimer");
	Function_640(0.0f);
	*iParam0 = 0;
	return;
}

void Function_640(bool bParam0) //Position: 0x14734 / 83764
{
	UI_ANIM_SETUP("NetTimer", bParam0, true, 4294967295);
	UI_ANIM_RESTART("NetTimer");
	return;
}

void Function_641() //Position: 0x1475A / 83802
{
	iLocal_182[0] = 21;
	iLocal_182[1] = 24;
	iLocal_182[2] = 25;
	iLocal_182[3] = 31;
	iLocal_182[4] = 44;
	iLocal_182[5] = 46;
	iLocal_182[6] = 245;
	iLocal_182[7] = 254;
	iLocal_182[8] = 257;
	iLocal_182[9] = 278;
	iLocal_182[10] = 284;
	iLocal_182[11] = 300;
	return;
}

void Function_642(bool bParam0) //Position: 0x147BC / 83900
{
	if (Function_548(&Local_758 + 60) && !bParam0)
	{
		Function_643();
	}
	return;
}

void Function_643() //Position: 0x147D4 / 83924
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 39, &uVar0, 1, 1);
	return;
}

void Function_644(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x147E5 / 83941
{
	bool bVar0;
	bool bVar1;
	
	if (Function_120(iParam0) || Function_498(iParam0) >= 0.0f)
	{
		if (*iParam3)
		{
			Function_172(iParam3);
		}
		return;
	}
	if (!*iParam3)
	{
		Function_626(iParam3);
	}
	if (Function_119())
	{
		if (Function_122(iParam0))
		{
			bVar0 = Function_203(iParam0);
			if (!*iParam2)
			{
				*iParam2 = 1;
				Function_640(bVar0);
			}
			bVar1 = CEIL(bVar0);
			if (*uParam1 != bVar1)
			{
				*uParam1 = bVar1;
				if (FABS((UI_ANIM_GET_TIME("NetTimer") - bVar0)) < 1.0f)
				{
					Function_640(bVar0);
				}
				if (bVar1 < 30)
				{
					PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
				}
			}
		}
	}
}

void Function_645(int iParam0, bool bParam1, bool bParam2) //Position: 0x14899 / 84121
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = Function_48();
	if (!IS_ACTOR_IN_VOLUME(bVar0, bParam1))
	{
		if (GET_ACTOR_HEALTH(bVar0) < 0.0f)
		{
			if (!Function_122(iParam0))
			{
				Function_646(iParam0, 0.0f);
				PRINT_BIG("MP_GY_leaving_area", 5f, 0, 2, 0);
			}
			else if (GET_ACTOR_HEALTH(bVar0) < 0.0f && Function_117(iParam0) < 10.0f)
			{
				SET_ACTOR_INVULNERABILITY(bVar0, 0);
				CLEAR_ACTOR_PROOF(bVar0, 159);
				SET_ACTOR_HEALTH(bVar0, 0.0f);
				Function_255(bVar0);
				vVar1 = { StackVal, StackVal, Function_255(bVar0) };
				Function_226(&vVar1, "CannonballExplosion", 0, 1);
				UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam2, Function_55(), "script_lightning_marker", vVar1), 0.0f, 0.0f, 0.0f);
			}
		}
	}
	else if (Function_122(iParam0))
	{
		Function_549(iParam0);
	}
	return;
}

void Function_646(int iParam0, float fParam1) //Position: 0x14977 / 84343
{
	if (!Function_122(iParam0))
	{
		Function_197(iParam0, fParam1);
	}
	return;
}

void Function_647(int iParam0) //Position: 0x1498D / 84365
{
	vector3 vVar0;
	
	Function_255(Function_48());
	vVar0 = { StackVal, StackVal, Function_255(Function_48()) };
	SET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(*iParam0), vVar0);
	Function_648(Local_273.f_68, iParam0);
	Function_648(Local_292.f_68, iParam0);
	Function_648(Local_311.f_68, iParam0);
	Function_648(Local_330.f_68, iParam0);
	Function_648(Local_349.f_68, iParam0);
	return;
}

void Function_648(bool bParam0, var uParam1) //Position: 0x149DD / 84445
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar2 = GET_OBJECT_FROM_ACTOR(bVar1);
				if (!Function_212(65536, 1))
				{
					if (DECOR_CHECK_EXIST(bVar2, "CameraExclusion"))
					{
						DECOR_REMOVE(bVar2, "CameraExclusion");
						REMOVE_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar2);
					}
				}
				else if (IS_ACTOR_IN_VOLUME(bVar1, *uParam1))
				{
					if (!DECOR_CHECK_EXIST(bVar2, "CameraExclusion"))
					{
						DECOR_SET_BOOL(bVar2, "CameraExclusion", true);
						ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar2, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar2, "CameraExclusion"))
				{
					DECOR_REMOVE(bVar2, "CameraExclusion");
					REMOVE_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar2);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_649() //Position: 0x14AEC / 84716
{
	if (UI_ISACTIVE("nPauseMenu"))
	{
		Function_18();
		Function_650();
	}
	return;
}

void Function_650() //Position: 0x14B0A / 84746
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_651(var uParam0, bool bParam1) //Position: 0x14B1C / 84764
{
	bool bVar0;
	
	switch (*uParam0)
	{
		case 0x00000001:
			*uParam0 = 0;
			break;
		
		case 0x00000000:
			if (!Function_212(65536, 1))
			{
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (!bParam1)
			{
				DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", 90);
			}
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if (Function_212(65536, 1))
			{
				*uParam0 = 1;
			}
			break;
	}
	bVar0 = Function_48();
	if (Function_212(65536, 1))
	{
		SET_ACTOR_INVULNERABILITY(Function_48(), 0);
		SET_ACTOR_PROOF(bVar0, 159);
	}
	else
	{
		CLEAR_ACTOR_PROOF(bVar0, 159);
	}
	return;
}

void Function_652() //Position: 0x14BBB / 84923
{
	if (UI_ISACTIVE("RadialWeaponQuickPick"))
	{
		HUD_CLEAR_BIG_TEXT();
		UI_EXIT("MPSplash");
	}
	return;
}

void Function_653(bool bParam0) //Position: 0x14BF0 / 84976
{
	if (((Function_654() || UI_ISACTIVE("RadialWeaponQuickPick")) || (UI_ISACTIVE("HelpBox") && !IS_DISPLAY_WIDESCREEN())) || bParam0)
	{
		UI_HIDE("ScoreGraph");
		return;
	}
	if (!bParam0)
	{
		UI_SHOW("ScoreGraph");
	}
	return;
}

bool Function_654() //Position: 0x14C58 / 85080
{
	return Function_46(16384);
}

void Function_655(int iParam0, bool bParam1) //Position: 0x14C64 / 85092
{
	if ((Function_654() || UI_ISACTIVE("RadialWeaponQuickPick")) || bParam1)
	{
		UI_HIDE("NetTimer");
		return;
	}
	if (!bParam1)
	{
		if (!Function_120(iParam0))
		{
			UI_SHOW("NetTimer");
		}
	}
	return;
}

void Function_656() //Position: 0x14CBE / 85182
{
	if (Function_658() && NET_IS_SESSION_HOST())
	{
		Function_657(bLocal_216);
	}
	return;
}

void Function_657(int iParam0) //Position: 0x14CD3 / 85203
{
	struct<5> Var0;
	
	Var0 = iParam0 < 0;
	Var0.f_4 = iParam0;
	NET_SCRIPTMSG_SEND(3, 40, &Var0, 2, 1);
	return;
}

int Function_658() //Position: 0x14CF0 / 85232
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_660(bVar0))
		{
			if (Function_659(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_659(bool bParam0) //Position: 0x14D1D / 85277
{
	if (Function_660(bParam0))
	{
		if (Function_331(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_660(bool bParam0) //Position: 0x14D42 / 85314
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_103(bParam0);
}

void Function_661(vector3 vParam0) //Position: 0x14D58 / 85336
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_440(StackVal, StackVal, vParam0, bVar0);
	}
	return;
}

void Function_662() //Position: 0x14E08 / 85512
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(Function_48(), "mp_holy"))
	{
		bVar1 = DECOR_GET_FLOAT(Function_48(), "mp_holy");
		if ((GET_CURRENT_GAME_TIME() - bVar1) < 30.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_holy");
			SET_PHOSPHORUS_AMMO_ACTIVE(0);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (DECOR_CHECK_EXIST(Function_48(), "mp_slug_60"))
	{
		bVar2 = DECOR_GET_FLOAT(Function_48(), "mp_slug_60");
		if ((GET_CURRENT_GAME_TIME() - bVar2) < 60.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_slug_60");
			UNK_0x8062BD74(Function_48(), 0, 0.1f);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (DECOR_CHECK_EXIST(Function_48(), "mp_slug_30"))
	{
		bVar3 = DECOR_GET_FLOAT(Function_48(), "mp_slug_30");
		if ((GET_CURRENT_GAME_TIME() - bVar3) < 30.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_slug_30");
			UNK_0x8062BD74(Function_48(), 0, 0.1f);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		SET_DEADEYE_BLINK(0.0f);
	}
	return;
}

void Function_663(var uParam0, int iParam1) //Position: 0x14F2A / 85802
{
	if (StackVal && (StackVal % 10) != 0 == 0)
	{
		if (!*uParam0)
		{
			Function_664("COOP_bonus_combo");
			if (!*iParam1)
			{
				Function_327("MP_GY_Phosphorous_help", 0x41200000, 1, 0, 2, 1, 0);
				*iParam1 = 1;
			}
			*uParam0 = 1;
		}
	}
	else
	{
		*uParam0 = 0;
	}
	return;
}

void Function_664(bool bParam0) //Position: 0x14FA0 / 85920
{
	SET_PHOSPHORUS_AMMO_ACTIVE(1);
	DECOR_SET_FLOAT(Function_48(), "mp_holy", GET_CURRENT_GAME_TIME());
	SET_DEADEYE_BLINK(30.0f);
	ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_400("UN_Narr_PhosLoaded", 0);
	Function_665(bParam0, 3.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_665(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14FF5 / 86005
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
			Var0 = { StackVal, StackVal, StackVal, Function_328(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_666(var uParam0, var uParam1, bool bParam2) //Position: 0x1507A / 86138
{
	int iVar0;
	
	iVar0 = Function_667();
	if (iVar0 > 0)
	{
		if (!*uParam0 && GET_LOCAL_SLOT() != iVar0)
		{
			if (bParam2)
			{
				Function_400("UN_Narr_LastManStandn", 0);
			}
			Function_664("COOP_bonus_lastman");
			if (!*uParam1)
			{
				Function_327("MP_GY_Phosphorous_help", 0x41200000, 1, 0, 2, 1, 0);
				*uParam1 = 1;
			}
			*uParam0 = 1;
		}
	}
	else
	{
		*uParam0 = 0;
	}
	return;
}

var Function_667() //Position: 0x1510E / 86286
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar2 = false;
	while (bVar2 < 15)
	{
		if (IS_SLOT_VALID(bVar2))
		{
			if (Function_668(bVar2) >= 0)
			{
				iVar1++;
				bVar0 = bVar2;
			}
		}
		bVar2++;
	}
	if (iVar1 == 1)
	{
		return bVar0;
	}
	return 4294967295;
}

int Function_668(bool bParam0) //Position: 0x15152 / 86354
{
	if (Function_660(bParam0))
	{
		if (Function_331(bParam0, 81922, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_669() //Position: 0x15178 / 86392
{
	if (iLocal_438 == 101)
	{
		Function_670(6);
	}
	switch (iLocal_814)
	{
		case 0x00000005:
			if (iLocal_439 != 3 || iLocal_439 != 5)
			{
				Function_670(0);
			}
			break;
		
		case 0x00000000:
			if (iLocal_439 == 8)
			{
				Function_670(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_439 != 9 && iLocal_247)
			{
				Function_670(2);
			}
			break;
		
		case 0x00000002:
			if (iLocal_439 != 12 && iLocal_228 > 6)
			{
				Function_670(3);
			}
			break;
		
		case 0x00000003:
			if (iLocal_439 == 13)
			{
				Function_670(4);
			}
			break;
		
		case 0x00000004:
			if (iLocal_439 == 8)
			{
				Function_670(1);
			}
			break;
		
		case 0x00000006:
			break;
	}
	return;
}

void Function_670(int iParam0) //Position: 0x15229 / 86569
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
		
		case 0x00000003:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
		
		case 0x00000004:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
		
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK(cLocal_815, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_814 = iParam0;
			break;
	}
	return;
}

void Function_671(int iParam0, bool bParam1) //Position: 0x15345 / 86853
{
	bool bVar0;
	int iVar1;
	
	if (!iParam0->f_64)
	{
		return;
	}
	if (Function_654())
	{
		Function_189(iParam0, 1);
		return;
	}
	iParam0->f_72 = (iParam0->f_72 - 1);
	if (!iParam0->f_68 || iParam0->f_72 > 0)
	{
		iParam0->f_72 = iLocal_70;
		bVar0 = false;
		if (!iParam0->f_68)
		{
			iParam0->f_68 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
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
			iVar1 = 4;
			NET_SCOREGRAPH_SETUP(iVar1, 65, iParam0->f_60);
			if (StackVal <= 0)
			{
				iParam0->f_4 = 0;
			}
			Function_672(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
		}
	}
	return;
}

void Function_672(struct<21> Param0) //Position: 0x153F2 / 87026
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
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, iParam7, Function_673(5, bParam6), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, iParam7, Function_673(5, bParam6));
	}
}

int Function_673(bool bParam0, bool bParam1) //Position: 0x1545B / 87131
{
	if (bParam0 >= bParam1)
	{
		return 100;
	}
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

int Function_674() //Position: 0x15487 / 87175
{
	return Function_370((bLocal_216 - 1));
}

void Function_675() //Position: 0x15494 / 87188
{
	bool bVar0;
	
	Function_677(bLocal_796, Local_71, 87741, 1);
	bVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_677(bLocal_796, bVar0, 87741, 1);
	}
	bVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_677(bLocal_796, bVar0, 87741, 1);
	}
	bVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_677(bLocal_796, bVar0, 87741, 1);
	}
	bVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_677(bLocal_796, bVar0, 87741, 1);
	}
	bVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		Function_677(bLocal_796, bVar0, 87741, 1);
	}
	if (iLocal_439 == 7)
	{
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_676();
	}
	return;
}

void Function_676() //Position: 0x1557B / 87419
{
	return;
}

int Function_677(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15581 / 87425
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_LAYOUTREF_VALID(bParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar4 = GET_EVENT_PERPETRATOR(bVar5);
			bVar6 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (bParam3)
					{
						if (Function_678(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(iParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(iParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		DESTROY_ITERATOR(bVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_678(bool bParam0) //Position: 0x15663 / 87651
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_679(var uParam0) //Position: 0x156BD / 87741
{
	Function_680(&uParam0);
	return;
}

void Function_680(bool bParam0) //Position: 0x156C8 / 87752
{
	bool bVar0;
	int iVar1;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(*bParam0);
	iVar1 = 0;
	switch (bVar0)
	{
		case 0x00000064:
			SQUAD_JOIN(*bParam0, Local_273.f_68);
			Function_593(*bParam0, iVar1);
			break;
		
		case 0x00000065:
			SQUAD_JOIN(*bParam0, Local_292.f_68);
			Function_591(*bParam0, iVar1);
			break;
		
		case 0x00000066:
			SQUAD_JOIN(*bParam0, Local_311.f_68);
			Function_589(*bParam0, iVar1);
			break;
		
		case 0x00000067:
			SQUAD_JOIN(*bParam0, Local_330.f_68);
			Function_585(*bParam0, iVar1);
			break;
		
		case 0x00000068:
			SQUAD_JOIN(*bParam0, Local_349.f_68);
			Function_565(*bParam0, iVar1);
			break;
	}
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (!Function_222(*bParam0))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(*bParam0);
		}
	}
	return;
}

void Function_681() //Position: 0x15785 / 87941
{
	switch (iLocal_439)
	{
		case 0x00000006:
			SET_TIME_OF_DAY(Global_63402);
			SET_TIME_ACCELERATION(0.0f);
			Function_40(512);
			Function_791();
			bLocal_796 = CREATE_EVENT_TRAP("graveyard_replication_trap", 77, Local_71);
			EVENT_TRAP_STORE_EVENTS(bLocal_796, 1);
			Function_787();
			Function_786(StackVal, &Local_483);
			Function_785(&Local_483, 0);
			Function_783(&Local_483, 105271);
			REGISTER_HOST_BROADCAST_VARIABLES(&Local_740, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&iLocal_776, 17);
			Function_727(&Local_483);
			Function_30(&Local_483, 1);
			HUD_FADE_OUT(0.0f, 1f, 1);
			iLocal_439 = 7;
			break;
		
		case 0x00000007:
			if (Function_721())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_439 = 8;
			}
			break;
		
		case 0x00000008:
			Function_717(&iLocal_195, 93132, UI_GET_STRING("TDM_team_fmt_cpp"));
			CAMERA_RESET(0);
			GRINGO_SETUP_PROP_ASSOCIATION("p_gen_coffin04x", "$/content/DLC/ZombiePack/Gringos/MP_OpenCoffin", "MP_OpenCoffin", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
			UNK_0x2148AC15(322, 6);
			UNK_0x444C3C32(0, 4, 0);
			Function_704();
			HUD_FADE_OUT(0.0f, 1f, 1);
			NET_LOG(bLocal_793, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", false, false, false, false);
			Function_701(StackVal, &uLocal_251, Local_71);
			Function_699(StackVal, &uLocal_252, Local_71);
			Function_697(StackVal, &uLocal_253, &uLocal_254, Local_71);
			bLocal_255 = CREATE_OBJECTSET_IN_LAYOUT("m_ZombieToxicExplosionObjectSet", Local_71, 4294967295, 1);
			Function_692(StackVal, &uLocal_256, Local_71);
			bLocal_257 = CREATE_OBJECTSET_IN_LAYOUT("m_MakeItRainObjectSet", Local_71, 4294967295, 1);
			Function_689();
			Function_687();
			Function_685();
			iLocal_776[0] = 0;
			iLocal_776[1] = 0;
			iLocal_776[2] = 0;
			iLocal_776[3] = 0;
			Local_758.f_56 = 0;
			REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\Ranch08");
			Function_683(Local_71, &bLocal_236);
			if (!ADD_OBJECT_TO_OBJECTSET(Local_71.f_36, bLocal_236))
			{
			}
			Function_255(Function_48());
			bLocal_271 = CREATE_VOLUME_IN_LAYOUT(Local_71, "ExclusionVolume", 3, Function_255(Function_48()), 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
			iLocal_272 = GET_PLAYER_COMBATMODE() != 2;
			Function_682(0, 0.0f);
			Function_682(1, 0.0f);
			Function_682(2, 0.0f);
			Function_682(3, 0.0f);
			Function_682(4, 0.0f);
			iLocal_439 = 9;
			break;
		
		case 0x00000009:
			iLocal_439 = 0;
			iLocal_438 = 0;
			Local_447 = 1000;
			break;
	}
	return;
}

void Function_682(int iParam0, bool bParam1) //Position: 0x15A70 / 88688
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = bParam1;
	return;
}

void Function_683(bool bParam0, var uParam1) //Position: 0x15A91 / 88721
{
	*uParam1 = CREATE_OBJECTSET_IN_LAYOUT("PlayerObjectSet", bParam0, 4294967295, 1);
	Function_684();
	Local_369.f_24 = 0;
	Local_376.f_24 = 0;
	Local_383.f_24 = 0;
	Local_390.f_24 = 0;
	Local_397.f_24 = 0;
	return;
}

void Function_684() //Position: 0x15AD4 / 88788
{
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(32, 2, 1.5f);
	COMBAT_CLASS_SERVER_SET_SCRIPT("$/content/DLC/ZombiePack/zombie_combatclasses");
	return;
}

void Function_685() //Position: 0x15B18 / 88856
{
	NET_SCRIPTMSG_REGISTER_HANDLER(57, 88872);
	return;
}

void Function_686(bool bParam0) //Position: 0x15B28 / 88872
{
	int iVar0;
	bool bVar4;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 4);
	if (iVar0 == 0)
	{
		bVar4 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
	}
	else if (iVar0 == 1)
	{
		bVar4 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
	}
	else if (iVar0 == 2)
	{
		bVar4 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
	}
	else if (iVar0 == 3)
	{
		bVar4 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
	}
	else if (iVar0 == 4)
	{
		bVar4 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
	}
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bVar4, Function_55(), "env_lightningForked_stormy", *(&iVar0 + 4)), 0.0f, 0.0f, 0.0f);
	}
	return;
}

void Function_687() //Position: 0x15C37 / 89143
{
	NET_SCRIPTMSG_REGISTER_HANDLER(61, 89159);
	return;
}

void Function_688(bool bParam0) //Position: 0x15C47 / 89159
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 8);
	return;
}

void Function_689() //Position: 0x15C57 / 89175
{
	NET_SCRIPTMSG_REGISTER_HANDLER(62, 89191);
	return;
}

void Function_690(bool bParam0) //Position: 0x15C67 / 89191
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	bVar2 = Function_48();
	GIVE_WEAPON_TO_ACTOR(bVar2, 24, 0.0f, 0, 0);
	if (Var0 == GET_LOCAL_SLOT())
	{
		Global_56092[246]++;
		if (StackVal == 3)
		{
			Function_441(254, &Global_50170[25422] + 4, &Global_50170[25422] + 8, &Global_50170[25422] + 12, Function_100(3), 1);
		}
		if (!ACTOR_HAS_WEAPON(bVar2, 36))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 36, 0.0f, 0, 0);
		}
		if (_GET_AMMO_AMOUNT(bVar2, 3, 0) > 3.0f)
		{
			_ADD_AMMO_OF_TYPE(bVar2, 3, 1.0f, 0, 1);
		}
		if (StackVal && (StackVal % 2) != 0 == 0)
		{
			if (!ACTOR_HAS_WEAPON(bVar2, 35))
			{
				GIVE_WEAPON_TO_ACTOR(bVar2, 35, 0.0f, 0, 0);
				if (!iLocal_812)
				{
					Function_327("MP_GY_HolyWater_help", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_812 = 1;
				}
			}
			if (_GET_AMMO_AMOUNT(bVar2, 16, 0) > 1.0f)
			{
				_ADD_AMMO_OF_TYPE(bVar2, 16, 1.0f, 0, 1);
			}
		}
		Function_691("COOP_bonus_slugs", 1);
		if (!iLocal_811)
		{
			Function_327("MP_GY_Slugs_help", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_811 = 1;
		}
	}
	else
	{
		Function_691("COOP_bonus_slugs", 0);
		if (!iLocal_811)
		{
			Function_327("MP_GY_Slugs_help", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_811 = 1;
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 43))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 10, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 10))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 10, 40.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 10, 20.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 41))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 8, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 8))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 8, 48.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 8, 24.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 40))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 7, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 7))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 7, 60.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 7, 30.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 39))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 6, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 6))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 6, 60.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 6, 30.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 42))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 9, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 9))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 9, 40.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 9, 20.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 34))
	{
		if (_GET_AMMO_AMOUNT(bVar2, 15, 0) > _GET_MAX_AMMO_AMOUNT(bVar2, 15))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(bVar2, 15, 10.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(bVar2, 15, 5.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(bVar2, 24) && _GET_AMMO_AMOUNT(bVar2, 5, 1) > 8.0f)
	{
		if (Var0 == GET_LOCAL_SLOT())
		{
			_ADD_AMMO_OF_TYPE(bVar2, 5, 3.0f, 1, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(bVar2, 5, 1.0f, 1, 1);
		}
	}
	return;
}

void Function_691(bool bParam0, bool bParam1) //Position: 0x15FAD / 90029
{
	UNK_0x8062BD74(Function_48(), 1, 0.1f);
	if (bParam1)
	{
		DECOR_SET_FLOAT(Function_48(), "mp_slug_60", GET_CURRENT_GAME_TIME());
		SET_DEADEYE_BLINK(60.0f);
	}
	else
	{
		DECOR_SET_FLOAT(Function_48(), "mp_slug_30", GET_CURRENT_GAME_TIME());
		SET_DEADEYE_BLINK(30.0f);
	}
	ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_400("UN_Narr_DoubleSlugsLoaded", 0);
	Function_665(bParam0, 3.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_692(var uParam0, bool bParam1, bool bParam2) //Position: 0x1603B / 90171
{
	*uParam0 = CREATE_EVENT_TRAP("MIRTrap", 5, bParam1);
	EVENT_TRAP_ON_VOLUME(*uParam0, bParam2);
	EVENT_TRAP_STORE_EVENTS(*uParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(58, 90600);
	NET_SCRIPTMSG_REGISTER_HANDLER(59, 90231);
	return;
}

void Function_693(bool bParam0) //Position: 0x16077 / 90231
{
	struct<5> Var0;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 5);
	if (StackVal == GET_LOCAL_SLOT())
	{
		if (Var0 == 0)
		{
			bVar5 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
		}
		else if (Var0 == 1)
		{
			bVar5 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
		}
		else if (Var0 == 2)
		{
			bVar5 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
		}
		else if (Var0 == 3)
		{
			bVar5 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
		}
		else if (Var0 == 4)
		{
			bVar5 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
		}
		if (IS_LAYOUTREF_VALID(bVar5))
		{
			bVar6 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar5, "m_MakeItRainObjectSet"));
			if (IS_OBJECTSET_VALID(bVar6))
			{
				bVar7 = CREATE_POINT_IN_LAYOUT(bVar5, Function_55(), *(&Var0 + 8), 0.0f, 0.0f, 0.0f);
				DECOR_SET_INT(bVar7, "NumShotsLeft", 8);
				DECOR_SET_INT(bVar7, "NumShotsCount", 60);
				DECOR_SET_INT(StackVal, bVar7, "nSlotOwner");
				ADD_OBJECT_TO_OBJECTSET(bVar7, bVar6);
			}
		}
	}
	return;
}

void Function_694(bool bParam0) //Position: 0x161E8 / 90600
{
	struct<5> Var0;
	bool bVar5;
	var uVar6;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 5);
	if (Var0 == 0)
	{
		bVar5 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
	}
	else if (Var0 == 1)
	{
		bVar5 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
	}
	else if (Var0 == 2)
	{
		bVar5 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
	}
	else if (Var0 == 3)
	{
		bVar5 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
	}
	else if (Var0 == 4)
	{
		bVar5 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
	}
	if (IS_LAYOUTREF_VALID(bVar5))
	{
		uVar6 = Function_695(StackVal, StackVal, Function_48(), *(&Var0 + 8), 8.0f);
		if (uVar6 && !Function_212(65536, 1))
		{
			SET_ACTOR_INVULNERABILITY(Function_48(), 1);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", 45);
		}
		if (StackVal == GET_LOCAL_SLOT())
		{
			Function_226(StackVal, &Var0 + 8, GET_SLOT_ACTOR("CannonballExplosion"), 1);
		}
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bVar5, Function_55(), "script_lightning_marker", *(&Var0 + 8)), 0.0f, 0.0f, 0.0f);
	}
	return;
}

int Function_695(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x16364 / 90980
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_696(bParam0);
		if (VDIST(Function_696(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_696(bool bParam0) //Position: 0x163EE / 91118
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

void Function_697(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x16458 / 91224
{
	*uParam0 = CREATE_EVENT_TRAP("ToxicExplosionTrap", 2, bParam2);
	EVENT_TRAP_ON_VOLUME(*uParam0, bParam3);
	EVENT_TRAP_STORE_EVENTS(*uParam0, 1);
	*uParam1 = CREATE_EVENT_TRAP("ToxicExplosionObjectCreateTrap", 16, bParam2);
	EVENT_TRAP_ON_VOLUME(*uParam1, bParam3);
	EVENT_TRAP_STORE_EVENTS(*uParam1, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(60, 91345);
}

void Function_698(bool bParam0) //Position: 0x164D1 / 91345
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	return;
}

void Function_699(var uParam0, bool bParam1, bool bParam2) //Position: 0x164E0 / 91360
{
	*uParam0 = CREATE_EVENT_TRAP("HeadshotTrap", 10, bParam1);
	EVENT_TRAP_ON_VOLUME(*uParam0, bParam2);
	EVENT_TRAP_STORE_EVENTS(*uParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(63, 91416);
	return;
}

void Function_700(bool bParam0) //Position: 0x16518 / 91416
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 3);
	return;
}

void Function_701(var uParam0, bool bParam1, bool bParam2) //Position: 0x16527 / 91431
{
	*uParam0 = CREATE_EVENT_TRAP("ZombieBaitTrap", 17, bParam1);
	EVENT_TRAP_ON_VOLUME(*uParam0, bParam2);
	EVENT_TRAP_STORE_EVENTS(*uParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(64, 91489);
	return;
}

void Function_702(bool bParam0) //Position: 0x16561 / 91489
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), GET_AMBIENT_LAYOUT(), 15, 1);
	vVar4 = { StackVal, StackVal, vVar0 };
	bVar7 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		if (Function_215(StackVal, StackVal, vVar4, &bVar3, bVar7, 0x42480000))
		{
			Function_703(StackVal, StackVal, bVar3, vVar4, 0x40a00000);
		}
	}
	bVar7 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		if (Function_215(StackVal, StackVal, vVar4, &bVar3, bVar7, 0x42480000))
		{
			Function_703(StackVal, StackVal, bVar3, vVar4, 0x40a00000);
		}
	}
	bVar7 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		if (Function_215(StackVal, StackVal, vVar4, &bVar3, bVar7, 0x42480000))
		{
			Function_703(StackVal, StackVal, bVar3, vVar4, 0x40a00000);
		}
	}
	bVar7 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		if (Function_215(StackVal, StackVal, vVar4, &bVar3, bVar7, 0x42480000))
		{
			Function_703(StackVal, StackVal, bVar3, vVar4, 0x40a00000);
		}
	}
	bVar7 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		if (Function_215(StackVal, StackVal, vVar4, &bVar3, bVar7, 0x42480000))
		{
			Function_703(StackVal, StackVal, bVar3, vVar4, 0x40a00000);
		}
	}
	DESTROY_OBJECTSET(bVar3);
	return;
}

void Function_703(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x166AD / 91821
{
	bool bVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_ACTOR_VALID(bVar4))
			{
				DECOR_SET_FLOAT(bVar4, "Baited", GET_CURRENT_GAME_TIME());
				if (Function_222(bVar4))
				{
					fVar1 = 10.0f;
				}
				else
				{
					fVar1 = 5.0f;
				}
				iVar2 = 1;
				MEMORY_CLEAR_ALL(bVar4);
				if (IS_SLOT_VALID(false))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
					{
						MEMORY_CONSIDER_AS(bVar4, GET_SLOT_ACTOR(false), 2);
					}
				}
				if (IS_SLOT_VALID(true))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
					{
						MEMORY_CONSIDER_AS(bVar4, GET_SLOT_ACTOR(true), 2);
					}
				}
				if (IS_SLOT_VALID(2))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
					{
						MEMORY_CONSIDER_AS(bVar4, GET_SLOT_ACTOR(2), 2);
					}
				}
				if (IS_SLOT_VALID(3))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
					{
						MEMORY_CONSIDER_AS(bVar4, GET_SLOT_ACTOR(3), 2);
					}
				}
				bVar5 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uParam1, bParam4, 2);
				TASK_WANDER(false, 10.0f);
				TASK_GO_NEAR_ACTORSET(false, Function_490(), fVar1, 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar4, bVar5);
				TASK_SEQUENCE_RELEASE(bVar5, 1);
				TASK_PRIORITY_SET(bVar4, iVar2);
			}
		}
		bVar0++;
	}
}

void Function_704() //Position: 0x167CA / 92106
{
	NET_SCRIPTMSG_REGISTER_HANDLER(32, 93089);
	NET_SCRIPTMSG_REGISTER_HANDLER(33, 93069);
	NET_SCRIPTMSG_REGISTER_HANDLER(35, 92966);
	NET_SCRIPTMSG_REGISTER_HANDLER(15, 92945);
	NET_SCRIPTMSG_REGISTER_HANDLER(39, 92717);
	NET_SCRIPTMSG_REGISTER_HANDLER(40, 92172);
	return;
}

void Function_705(bool bParam0) //Position: 0x1680C / 92172
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	if (!iLocal_794 && iLocal_438 != 0)
	{
		iLocal_794 = 1;
		bVar2[0] = Function_16(iLocal_776[0], 8);
		bVar2[1] = Function_16(iLocal_776[1], 8);
		bVar2[2] = Function_16(iLocal_776[2], 8);
		bVar2[3] = Function_16(iLocal_776[3], 8);
		Function_708(Local_758.f_52, &bVar2, Var0);
		Function_706(StackVal, Local_758.f_52, Var0);
		SET_ACTOR_INVULNERABILITY(Function_48(), 0);
		SET_ACTOR_HEALTH(Function_48(), 0.0f);
		Local_483.f_112 = "";
		Function_5(&Local_483 + 48, 2048);
		UI_EXIT("MPScoringDisplays");
		UI_ENTER("HudMPNoFun");
	}
	return;
}

void Function_706(bool bParam0, var uParam1, bool bParam2) //Position: 0x168D2 / 92370
{
	bool bVar0;
	
	if (!bParam2)
	{
		return;
	}
	bVar0 = uParam1;
	if (bParam0)
	{
		bVar0 = (bVar0 - 1);
		if (bVar0 <= 0)
		{
			bVar0 = false;
		}
	}
	DECOR_SET_INT(Function_95(1), "nWaveBonus", bVar0);
	UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar0));
	Function_707((1000 * bVar0), "MP_GY_WaveBonus");
	return;
}

void Function_707(bool bParam0, bool bParam1) //Position: 0x16946 / 92486
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = Function_95(1);
	iVar1 = Function_110();
	uVar2 = Function_109(iVar1, 1);
	if (!DECOR_SET_INT(bVar0, &uVar2, bParam0))
	{
	}
	uVar2 = Function_109(iVar1, 0);
	if (!DECOR_SET_INT(bVar0, &uVar2, STRING_TO_HASH(bParam1)))
	{
	}
	DECOR_SET_INT(bVar0, "size", iVar1 + 1);
	return;
}

void Function_708(bool bParam0, var uParam1, bool bParam2) //Position: 0x16995 / 92565
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam2 || !bParam0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_103(bVar1))
		{
			if (Function_102(12, bVar1) >= 1 && (*uParam1)[bVar1])
			{
				bVar0++;
			}
		}
		bVar1++;
	}
	DECOR_SET_INT(Function_95(1), "nLifeBonus", bVar0);
	UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar0));
	Function_707((500 * bVar0), "MP_GY_NDYBonus");
	return;
}

void Function_709(bool bParam0) //Position: 0x16A2D / 92717
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_188(&iLocal_195);
	if (!Local_758.f_52)
	{
		Function_4(&Global_79349 + 44, 8192);
		SET_ACTOR_OVERHEALTH_MODE(Function_48(), false);
		if (Function_212(65536, 1))
		{
			SET_ACTOR_HEALTH(Function_48(), 0.0f);
		}
		Function_710("COOP_failed_out_of_time", 0x40a00000, 0, 2, 0);
		HUD_CLEAR_BIG_TEXT_QUEUE();
	}
	Local_758.f_52 = 1;
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		Function_14(&(iLocal_776[GET_LOCAL_SLOT()]), 1);
	}
	return;
}

void Function_710(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4) //Position: 0x16AB2 / 92850
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	PRINT_BIG(bParam0, fParam1, iParam2, iParam3, iParam4);
}

void Function_711(bool bParam0) //Position: 0x16B11 / 92945
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_348(&Local_483);
	return;
}

void Function_712(bool bParam0) //Position: 0x16B26 / 92966
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			Function_714();
			ENABLE_USE_CONTEXTS(1);
			Function_70();
			Function_18();
			Local_447 = 1000;
			iLocal_439 = 0;
			iLocal_438 = 0;
			break;
		
		case 0x00000065:
			Function_713();
			Function_70();
			Function_18();
			Local_447 = 1000;
			iLocal_439 = 0;
			iLocal_438 = 101;
			break;
	}
	return;
}

void Function_713() //Position: 0x16B81 / 93057
{
	return;
}

void Function_714() //Position: 0x16B87 / 93063
{
	return;
}

void Function_715(bool bParam0) //Position: 0x16B8D / 93069
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	iLocal_438 = iVar0;
	return;
}

void Function_716(bool bParam0) //Position: 0x16BA1 / 93089
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	Function_432(iVar0);
	return;
}

void Function_717(var uParam0, var uParam1, int iParam2) //Position: 0x16BB5 / 93109
{
	uParam0->f_72 = 0;
	uParam0->f_48 = uParam1;
	uParam0->f_60 = iParam2;
	return;
}

var Function_718(int iParam0, var uParam1) //Position: 0x16BCC / 93132
{
	int iVar0;
	
	*uParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, *uParam1 };
	if (StackVal <= 0)
	{
		iParam0->f_4 = 0;
	}
	Function_719(iParam0 + 4, Function_720(ROUND(Function_114(4))), &iVar0);
	return iVar0;
}

int Function_719(var uParam0, int iParam1, int iParam2) //Position: 0x16BFD / 93181
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

var Function_720(int iParam0) //Position: 0x16C17 / 93207
{
	int iVar0;
	
	iVar0 = iParam0;
	iVar0 = (iVar0 - bLocal_368);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_721() //Position: 0x16C34 / 93236
{
	if (!IS_EXITFLAG_SET())
	{
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_722(&bLocal_592))
		{
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(Function_48(), 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_722(int iParam0) //Position: 0x16C64 / 93284
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_726();
	iVar1 = 0;
	if (!Function_160(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_725(iParam0[iVar03], 8);
		}
		else if (Function_724())
		{
			iVar1 = 1;
			Function_725(iParam0[iVar03], 8);
		}
		Function_725(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_160(iParam0[iVar03], 4))
		{
			if (!Function_160(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_160(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_160(iParam0[03], 8) || iVar1));
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
				Function_725(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_160(iParam0[iVar03], 4))
		{
			if (!Function_160(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_725(iParam0[iVar03], 2);
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
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_725(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_725(iParam0[iVar03], 2);
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
	Function_723();
	return 1;
}

void Function_723() //Position: 0x16FDF / 94175
{
	if (!Function_427(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_724() //Position: 0x1701F / 94239
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

void Function_725(var uParam0, int iParam1) //Position: 0x1704A / 94282
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_726() //Position: 0x1705B / 94299
{
	if (!Function_427(128))
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

void Function_727(int iParam0) //Position: 0x1709D / 94365
{
	int iVar0;
	var uVar1;
	struct<57> Var2;
	
	Function_774();
	ADD_IDLEFX_TO_WEAPON(33, "TORCH_IDLE", 0.0f, 0.35f, -0.15f);
	SET_WEAPONENUM_LOCKED(33, 0);
	SET_WEAPONENUM_LOCKED(34, 0);
	SET_WEAPONENUM_LOCKED(35, 0);
	SET_WEAPONENUM_LOCKED(36, 0);
	SET_WEAPONENUM_LOCKED(37, 0);
	Function_773();
	Function_771();
	iVar0 = (Function_100(8) - 1);
	Function_764(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_763(&Global_78578 + 96);
		Function_121(&Global_78578 + 96);
	}
	Function_745(iParam0, 1, 1, 0, 0);
	Function_744(iParam0, 31);
	Function_31(iParam0, 0);
	Function_742(iParam0, 96320);
	Function_741(iParam0, 0);
	Function_326(1, Global_83591);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_336()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_735(iVar0, &uVar1) };
	Function_734(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var2);
	*(&Global_83591 + 276) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_732(1);
	if (Function_731("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.25f);
	Function_730(3, NET_GET_SESSION_GAMER_COUNT());
	Function_8(0);
	Function_728();
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_17();
	SET_POP_DENSITY_MULTIPLIER(0.0f);
	Function_180(13, 0);
	return;
}

void Function_728() //Position: 0x171D9 / 94681
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = ROUND(GET_PROFILE_TIME());
	bVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_729()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(bVar0 ^ bVar1 ^ iVar2);
	return;
}

int Function_729() //Position: 0x17208 / 94728
{
	bool bVar0;
	
	bVar0 = Function_48();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_730(int iParam0, int iParam1) //Position: 0x17222 / 94754
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_731(bool bParam0) //Position: 0x17243 / 94787
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_732(bool bParam0) //Position: 0x17262 / 94818
{
	struct<17> Var0;
	
	Function_27(&Var0);
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
		Function_5(&Var0, 4);
	}
	Function_20(&Var0);
	Function_21();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 94900);
	return;
}

void Function_733(bool bParam0) //Position: 0x172B4 / 94900
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_27(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, true, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_28(&iVar7);
	if (Function_415(&Var2))
	{
	}
	bVar8 = Function_406(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_414(&Var2, 1);
	Function_20(&Var2);
	return;
}

void Function_734(int iParam0, struct<57> Param1) //Position: 0x173B7 / 95159
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

struct<228> Function_735(int iParam0, int iParam1) //Position: 0x173CB / 95179
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_738(&Var0);
	Function_623(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 9, 10, 1);
				Function_623(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 11, 6, 1);
				Function_623(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 17, 10, 1);
				Function_623(&Var0, 2, 5, 6, 1);
				Function_623(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 18, 10, 1);
				Function_623(&Var0, 2, 5, 8, 1);
				Function_623(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 19, 20, 0);
				Function_623(&Var0, 2, 4, 8, 1);
				Function_623(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 20, 20, 0);
				Function_623(&Var0, 2, 4, 10, 1);
				Function_623(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 6, 10, 1);
				Function_623(&Var0, 2, 8, 8, 1);
				Function_623(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_737(iParam0, &Var0, iParam1))
			{
				Function_623(&Var0, 1, 2, 10, 1);
				Function_623(&Var0, 2, 8, 9, 1);
				Function_623(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_736(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_736(int iParam0, int iParam1) //Position: 0x175B0 / 95664
{
	int iVar0;
	int iVar1[17];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	char* cVar24[32];
	struct<5> Var32;
	
	*iParam1 = 1;
	Function_623(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_264(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_263(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_623(StackVal, iParam0, *iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar24, &uVar22))
			{
				Function_258(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_264(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_623(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_737(int iParam0, var uParam1, int iParam2) //Position: 0x176ED / 95981
{
	if (Function_47(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_623(uParam1, 1, 10, 5, 1);
				Function_623(uParam1, 2, 7, 4, 1);
				Function_623(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_623(uParam1, 1, 17, 6, 1);
				Function_623(uParam1, 2, 6, 4, 1);
				Function_623(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_623(uParam1, 1, 13, 8, 1);
				Function_623(uParam1, 2, 16, 9, 1);
				Function_623(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_623(uParam1, 1, 3, 6, 1);
				Function_623(uParam1, 2, 15, 12, 1);
				Function_623(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_738(int iParam0) //Position: 0x177CD / 96205
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_740(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_739(iParam0, 0.0f);
	return;
}

void Function_739(var uParam0, int iParam1) //Position: 0x177FA / 96250
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_740(int iParam0) //Position: 0x17806 / 96262
{
	Function_624(iParam0, 4294967295, 0, 1);
	return;
}

void Function_741(int iParam0, bool bParam1) //Position: 0x17814 / 96276
{
	if (bParam1)
	{
		Function_4(iParam0 + 44, 128);
	}
	else
	{
		Function_5(iParam0 + 44, 128);
	}
	return;
}

void Function_742(var uParam0, int iParam1) //Position: 0x17834 / 96308
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_743() //Position: 0x17840 / 96320
{
	int iVar0;
	
	Function_325(1, 4294967295);
	iVar0 = Function_100(1);
	Function_49(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_793, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", false, false, false, false);
	}
	else
	{
		Function_327("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_31(&Local_483, 1);
		NET_LOG(bLocal_793, "Local State", "Player has lost all their lives.  Disabling Respawning.", false, false, false, false);
	}
	return;
}

void Function_744(var uParam0, int iParam1) //Position: 0x17927 / 96551
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_745(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x17933 / 96563
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
	iParam0->f_152 = 4294967295;
	iParam0->f_12 = 2;
	Function_734(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_271(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_744(iParam0, 2);
	Function_761(iParam0);
	Function_758(iParam0);
	Function_756(iParam0);
	Function_755(iParam0);
	Function_752(iParam0);
	Function_750(iParam0);
	Function_747(iParam0);
	if (bParam2)
	{
		Function_5(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_5(iParam0 + 44, 8);
		Function_265(iParam0 + 192);
	}
	Function_746(iParam0, bParam4);
	Function_49(8388608, 0);
}

void Function_746(int iParam0, bool bParam1) //Position: 0x179FB / 96763
{
	if (bParam1)
	{
		Function_5(iParam0 + 44, 32);
	}
	else
	{
		Function_4(iParam0 + 44, 32);
	}
	return;
}

void Function_747(int iParam0) //Position: 0x17A1B / 96795
{
	Function_748(iParam0, 96822);
	return;
}

void Function_748(var uParam0, var uParam1) //Position: 0x17A2A / 96810
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_749() //Position: 0x17A36 / 96822
{
	return 0;
}

void Function_750(var uParam0) //Position: 0x17A3D / 96829
{
	Function_351(uParam0, 96844);
	return;
}

int Function_751() //Position: 0x17A4C / 96844
{
	return 1;
}

void Function_752(int iParam0) //Position: 0x17A53 / 96851
{
	Function_753(iParam0, 96878);
	return;
}

void Function_753(var uParam0, var uParam1) //Position: 0x17A62 / 96866
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_754() //Position: 0x17A6E / 96878
{
	return;
}

void Function_755(int iParam0) //Position: 0x17A74 / 96884
{
	Function_742(iParam0, 96878);
	return;
}

void Function_756(int iParam0) //Position: 0x17A83 / 96899
{
	Function_757(iParam0, 96878);
	return;
}

void Function_757(var uParam0, int iParam1) //Position: 0x17A92 / 96914
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_758(int iParam0) //Position: 0x17A9E / 96926
{
	Function_759(iParam0, 96953);
	return;
}

void Function_759(var uParam0, var uParam1) //Position: 0x17AAD / 96941
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_760() //Position: 0x17AB9 / 96953
{
	return 0;
}

void Function_761(int iParam0) //Position: 0x17AC0 / 96960
{
	Function_783(iParam0, 96975);
	return;
}

void Function_762(var uParam0) //Position: 0x17ACF / 96975
{
	uParam0 = uParam0;
	return;
}

void Function_763(int iParam0) //Position: 0x17AD9 / 96985
{
	Function_197(iParam0, 0.0f);
	return;
}

void Function_764(int iParam0) //Position: 0x17AE5 / 96997
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
	Function_146();
	Function_147();
	switch (iParam0)
	{
		case 0x00000001:
			Function_338(12288);
			Function_40(16384);
			break;
		
		case 0x00000002:
			Function_338(20480);
			Function_40(8192);
			break;
		
		default:
			Function_40(28672);
			break;
	}
	Function_40(2048);
	Function_765(0, 0);
	Function_291();
	return;
}

void Function_765(bool bParam0, bool bParam1) //Position: 0x17BA9 / 97193
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_770(&Global_78480);
	Function_769(&Global_78480);
	uVar0 = Function_104(37);
	Function_767();
	if (!bParam0)
	{
		Function_154(37, uVar0);
	}
	Function_49(18264, 0);
	Function_766();
	return;
}

void Function_766() //Position: 0x17BF5 / 97269
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_767() //Position: 0x17C14 / 97300
{
	Function_768(&Global_78480 + 220);
	return;
}

void Function_768(int iParam0) //Position: 0x17C23 / 97315
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

void Function_769(int iParam0) //Position: 0x17C44 / 97348
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

void Function_770(int iParam0) //Position: 0x17C68 / 97384
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

void Function_771() //Position: 0x17C8C / 97420
{
	Local_805 = 0;
	Local_805.f_16 = "";
	Function_772(&Local_805 + 4);
	return;
}

void Function_772(var uParam0) //Position: 0x17CA6 / 97446
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_773() //Position: 0x17CBA / 97466
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_774() //Position: 0x17CCE / 97486
{
	struct<321> Var0;
	
	Function_781();
	Function_779();
	Function_777();
	Function_775();
	Var0.f_20 = "TURRET_Gatling";
	Var0.f_4 = 49;
	Var0.f_8 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_16 = 0;
	Var0.f_28 = "";
	Var0.f_32 = "WEAPONS_TURRET_GATLING";
	Var0.f_36 = "WEAPONS_TURRET_GATLING";
	Var0.f_24 = "Gatling_Gun";
	Var0.f_64 = "TUR_Gatling";
	Var0.f_68 = 1.0f;
	Var0.f_72 = "ptl";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 0.5f;
	Var0.f_96 = 85.0f;
	Var0.f_100 = 65.0f;
	Var0.f_104 = 1.5f;
	Var0.f_108 = 3.0f;
	Var0.f_112 = 0.2f;
	Var0.f_116 = 80.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 0.2f;
	Var0.f_128 = 0.6f;
	Var0.f_132 = "MUZZLE_FLASH1";
	Var0.f_136 = "RUMBLE_MACHINEGUN";
	Var0.f_140 = "wrist_r";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 60.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 60.0f;
	Var0.f_160 = 7.0f;
	Var0.f_164 = 70.0f;
	Var0.f_168 = 0.1f;
	Var0.f_172 = 7.0f;
	Var0.f_176 = 70.0f;
	Var0.f_180 = 0.1f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 1;
	Var0.f_204 = 0;
	Var0.f_208 = 0.09f;
	Var0.f_212 = 0.006f;
	Var0.f_216 = 1.0f;
	Var0.f_220 = 1.0f;
	Var0.f_224 = 1.0f;
	Var0.f_228 = 20.0f;
	Var0.f_232 = 30.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 120.0f;
	Var0.f_248 = "";
	Var0.f_252 = 0;
	Var0.f_256 = 10.0f;
	Var0.f_260 = 20.0f;
	Var0.f_264 = 70.0f;
	Var0.f_268 = 9999.0f;
	Var0.f_272 = 1.0f;
	Var0.f_276 = 4.0f;
	Var0.f_280 = 50.0f;
	Var0.f_284 = 1.0f;
	Var0.f_288 = 0;
	Var0.f_292 = 0.0f;
	Var0.f_296 = "Auto";
	Var0.f_300 = 0.5f;
	Var0.f_304 = 9999.0f;
	Var0.f_308 = 0.0f;
	Var0.f_312 = 0.0f;
	Var0.f_316 = 1;
	Var0.f_320 = 1;
	Var0.f_40 = 17;
	Var0.f_44 = 0.5f;
	Var0.f_48 = 0.5f;
	Var0.f_52 = 0.5f;
	Var0.f_56 = 0.5f;
	Var0.f_60 = 0.5f;
	INIT_NATIVE_WEAPONENUM_TURRET(26, "base_turret", &Var0);
	Var81.f_20 = "TURRET_Browning";
	Var81.f_4 = 50;
	Var81.f_8 = 4294967295;
	Var81.f_12 = 4294967295;
	Var81.f_16 = 0;
	Var81.f_28 = "";
	Var81.f_32 = "WEAPONS_TURRET_BROWNING";
	Var81.f_36 = "WEAPONS_TURRET_BROWNING";
	Var81.f_24 = "Browning_Gun";
	Var81.f_64 = "TUR_Browning";
	Var81.f_68 = 1.0f;
	Var81.f_72 = "ptl";
	Var81.f_76 = "";
	Var81.f_80 = "<none>";
	Var81.f_84 = "ndonothing";
	Var81.f_88 = "nDoNothing";
	Var81.f_92 = 1.0f;
	Var81.f_96 = 90.0f;
	Var81.f_100 = 70.0f;
	Var81.f_104 = 1.5f;
	Var81.f_108 = 3.0f;
	Var81.f_112 = 0.2f;
	Var81.f_116 = 100.0f;
	Var81.f_120 = 1.0f;
	Var81.f_124 = 0.2f;
	Var81.f_128 = 0.6f;
	Var81.f_132 = "MUZZLE_FLASH1";
	Var81.f_136 = "RUMBLE_MACHINEGUN";
	Var81.f_140 = "wrist_r";
	Var81.f_144 = 0.8f;
	Var81.f_148 = 80.0f;
	Var81.f_152 = 0.8f;
	Var81.f_156 = 80.0f;
	Var81.f_160 = 5.0f;
	Var81.f_164 = 85.0f;
	Var81.f_168 = 0.1f;
	Var81.f_172 = 5.0f;
	Var81.f_176 = 85.0f;
	Var81.f_180 = 0.1f;
	Var81.f_196 = "AIMER_BALLISTIC";
	Var81.f_200 = 1;
	Var81.f_204 = 0;
	Var81.f_208 = 0.07f;
	Var81.f_212 = 0.004f;
	Var81.f_216 = 1.0f;
	Var81.f_220 = 1.0f;
	Var81.f_224 = 1.0f;
	Var81.f_228 = 40.0f;
	Var81.f_232 = 40.0f;
	Var81.f_236 = 40.0f;
	Var81.f_240 = 40.0f;
	Var81.f_244 = 120.0f;
	Var81.f_248 = "";
	Var81.f_252 = 0;
	Var81.f_256 = 10.0f;
	Var81.f_260 = 30.0f;
	Var81.f_264 = 30.0f;
	Var81.f_268 = 9999.0f;
	Var81.f_272 = 1.0f;
	Var81.f_276 = 4.0f;
	Var81.f_280 = 50.0f;
	Var81.f_284 = 1.0f;
	Var81.f_288 = 0;
	Var81.f_292 = 0.0f;
	Var81.f_296 = "Auto";
	Var81.f_300 = 0.5f;
	Var81.f_304 = 9999.0f;
	Var81.f_308 = 0.0f;
	Var81.f_312 = 0.0f;
	Var81.f_316 = 1;
	Var81.f_320 = 1;
	Var81.f_40 = 17;
	Var81.f_44 = 0.5f;
	Var81.f_48 = 0.5f;
	Var81.f_52 = 0.5f;
	Var81.f_56 = 0.5f;
	Var81.f_60 = 0.5f;
	INIT_NATIVE_WEAPONENUM_TURRET(27, "base_turret", &Var81);
	Var162.f_20 = "DEFAULT_Cannon";
	Var162.f_4 = 51;
	Var162.f_8 = 4294967295;
	Var162.f_12 = 4294967295;
	Var162.f_16 = 0;
	Var162.f_28 = "";
	Var162.f_32 = "WEAPONS_TURRET_CANNON";
	Var162.f_36 = "WEAPONS_TURRET_CANNON";
	Var162.f_24 = "Cannon";
	Var162.f_64 = "TUR_Cannon";
	Var162.f_68 = 1.0f;
	Var162.f_72 = "ptl";
	Var162.f_76 = "";
	Var162.f_80 = "<none>";
	Var162.f_84 = "ndonothing";
	Var162.f_88 = "nDoNothing";
	Var162.f_92 = 1.0f;
	Var162.f_96 = 60.0f;
	Var162.f_100 = 36.0f;
	Var162.f_104 = 1.0f;
	Var162.f_108 = 2.0f;
	Var162.f_112 = 0.2f;
	Var162.f_116 = 120.0f;
	Var162.f_120 = 1.0f;
	Var162.f_124 = 0.2f;
	Var162.f_128 = 0.6f;
	Var162.f_132 = "MUZZLE_CANNON";
	Var162.f_136 = "RUMBLE_CANNON";
	Var162.f_140 = "wrist_r";
	Var162.f_144 = 0.8f;
	Var162.f_148 = 200.0f;
	Var162.f_152 = 0.8f;
	Var162.f_156 = 200.0f;
	Var162.f_160 = 40.0f;
	Var162.f_164 = 60.0f;
	Var162.f_168 = 0.6f;
	Var162.f_172 = 40.0f;
	Var162.f_176 = 60.0f;
	Var162.f_180 = 0.6f;
	Var162.f_196 = "AIMER_SIMPLE";
	Var162.f_200 = 1;
	Var162.f_204 = 0;
	Var162.f_208 = 3.0f;
	Var162.f_212 = 0.02f;
	Var162.f_216 = 1.0f;
	Var162.f_220 = 10.0f;
	Var162.f_224 = 1.0f;
	Var162.f_228 = 50.0f;
	Var162.f_232 = 50.0f;
	Var162.f_236 = 50.0f;
	Var162.f_240 = 50.0f;
	Var162.f_244 = 300.0f;
	Var162.f_248 = "WEAP_CANNON_TRAIL";
	Var162.f_252 = 0;
	Var162.f_256 = 10.0f;
	Var162.f_260 = 40.0f;
	Var162.f_264 = 70.0f;
	Var162.f_268 = 9999.0f;
	Var162.f_272 = 1.0f;
	Var162.f_276 = 4.0f;
	Var162.f_280 = 50.0f;
	Var162.f_284 = 1.0f;
	Var162.f_288 = 0;
	Var162.f_292 = 0.0f;
	Var162.f_296 = "Single";
	Var162.f_300 = 0.5f;
	Var162.f_304 = 9999.0f;
	Var162.f_308 = 0.0f;
	Var162.f_312 = 0.0f;
	Var162.f_316 = 1;
	Var162.f_320 = 1;
	Var162.f_40 = 1;
	Var162.f_44 = 0.5f;
	Var162.f_48 = 0.5f;
	Var162.f_52 = 0.5f;
	Var162.f_56 = 0.5f;
	Var162.f_60 = 0.5f;
	INIT_NATIVE_WEAPONENUM_CANNON(28, "base_cannon", &Var162);
	return;
}

void Function_775() //Position: 0x185D3 / 99795
{
	struct<225> Var0;
	
	Var0.f_20 = "MELEE_TORCH";
	Var0.f_4 = 46;
	Var0.f_8 = 20;
	Var0.f_12 = 20;
	Var0.f_16 = 4294967295;
	Var0.f_28 = "melee_torch01x";
	Var0.f_24 = "TORCH";
	Var0.f_32 = "";
	Var0.f_36 = "";
	Var0.f_64 = "nMEL_Torch";
	Var0.f_68 = 500.0f;
	Var0.f_72 = "trc";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 0.0f;
	Var0.f_96 = 0.0f;
	Var0.f_100 = 0.0f;
	Var0.f_104 = 0.0f;
	Var0.f_108 = 0.0f;
	Var0.f_112 = 0.0f;
	Var0.f_116 = 0.0f;
	Var0.f_120 = 0.0f;
	Var0.f_124 = 0.0f;
	Var0.f_128 = 0.0f;
	Var0.f_132 = "TORCH_IDLE";
	Var0.f_136 = "";
	Var0.f_140 = "wrist_r_Attachment";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 15.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 15.0f;
	Var0.f_160 = 0.0f;
	Var0.f_164 = 1.0f;
	Var0.f_168 = 0.6f;
	Var0.f_196 = "AIMER_SIMPLE";
	Var0.f_200 = 0;
	Var0.f_204 = 0;
	Var0.f_208 = 0.5f;
	Var0.f_212 = 0.03f;
	Var0.f_216 = 1;
	Var0.f_220 = 8.0f;
	Var0.f_224 = 8.0f;
	Var0.f_40 = 35;
	Var0.f_44 = 0.15f;
	Var0.f_48 = 0.0f;
	Var0.f_52 = 0.4f;
	Var0.f_56 = 0.0f;
	Var0.f_60 = 0.0f;
	Function_776(33, "base_melee", &Var0);
	RESOLVE_DLC_WEAPONENUM(33);
	return;
}

void Function_776(var uParam0, var uParam1, var uParam2) //Position: 0x187A8 / 100264
{
	INIT_NATIVE_WEAPONENUM_MELEE(uParam0, uParam1, uParam2);
	return;
}

void Function_777() //Position: 0x187B7 / 100279
{
	struct<33> Var0;
	
	Var0 = "ZOMBIEBAIT";
	Var0.f_4 = "ammo_zombiebait";
	Var0.f_8 = "ammo_zombiebait";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_778(3, &Var0);
	Var0 = "ZOMBIEBOOMBAIT";
	Var0.f_4 = "ammo_zombieboombait";
	Var0.f_8 = "ammo_zombieboombait";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_778(2, &Var0);
	Var0 = "nHOLYWATER";
	Var0.f_4 = "ammo_holywater";
	Var0.f_8 = "ammo_holywater";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_778(16, &Var0);
	Var0 = "ZOMBIEBAIT";
	Var0.f_4 = "ammo_zombiebait";
	Var0.f_8 = "ammo_zombiebait";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_778(3, &Var0);
	Var0 = "ZOMBIEBOOMBAIT";
	Var0.f_4 = "ammo_zombieboombait";
	Var0.f_8 = "ammo_zombieboombait";
	Var0.f_12 = 20.0f;
	Var0.f_16 = 1.0f;
	Var0.f_20 = 0;
	Var0.f_24 = 0.5f;
	Var0.f_28 = 1;
	Var0.f_32 = 1;
	Function_778(2, &Var0);
	return;
}

void Function_778(int iParam0, int iParam1) //Position: 0x189D6 / 100822
{
	INIT_NATIVE_WEAPONENUM_AMMO(iParam0, iParam1);
	return;
}

void Function_779() //Position: 0x189E3 / 100835
{
	struct<341> Var0;
	
	Var0.f_20 = "SHOTGUN_Blunderbuss";
	Var0.f_4 = 43;
	Var0.f_8 = 4294967295;
	Var0.f_12 = 20;
	Var0.f_16 = 15;
	Var0.f_28 = "rifle_blunderbuss01x";
	Var0.f_32 = "WEAPONS_RIFLE_BLUNDERBUSS";
	Var0.f_36 = "WEAPONS_RIFLE_BLUNDERBUSS";
	Var0.f_24 = "BLUNDERBUSS";
	Var0.f_64 = "SHTG_Blunderbuss";
	Var0.f_68 = 200.0f;
	Var0.f_72 = "rfl";
	Var0.f_76 = "rfl_bld";
	Var0.f_80 = "nRifle_bld";
	Var0.f_84 = "rifle_1892Win";
	Var0.f_88 = "rifle_1892Win";
	Var0.f_92 = 1.0f;
	Var0.f_96 = 15.0f;
	Var0.f_100 = 7.0f;
	Var0.f_104 = 1.0f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.4f;
	Var0.f_116 = 10.0f;
	Var0.f_120 = 40.0f;
	Var0.f_124 = 1.0f;
	Var0.f_128 = 0.5f;
	Var0.f_132 = "MUZZLE_BLUNDERBUSS";
	Var0.f_136 = "RUMBLE_SHOTGUN";
	Var0.f_140 = "wrist_r_Attachment";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 50.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 50.0f;
	Var0.f_160 = 30.0f;
	Var0.f_164 = 100.0f;
	Var0.f_168 = 0.5f;
	Var0.f_172 = 30.0f;
	Var0.f_176 = 100.0f;
	Var0.f_180 = 0.5f;
	Var0.f_184 = 0.0f;
	Var0.f_188 = 1.0f;
	Var0.f_192 = 0.0f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 1;
	Var0.f_204 = 0;
	Var0.f_208 = 3.5f;
	Var0.f_212 = 3.5f;
	Var0.f_216 = 0.4f;
	Var0.f_220 = 0.5f;
	Var0.f_224 = 0.5f;
	Var0.f_228 = 300.0f;
	Var0.f_232 = 50.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 1000.0f;
	Var0.f_248 = "";
	Var0.f_252 = 1;
	Var0.f_256 = 5.0f;
	Var0.f_260 = 10.0f;
	Var0.f_264 = 70.0f;
	Var0.f_268 = 6.0f;
	Var0.f_272 = 1.0f;
	Var0.f_276 = 4.0f;
	Var0.f_280 = 50.0f;
	Var0.f_284 = 1.0f;
	Var0.f_288 = 1;
	Var0.f_292 = 10.0f;
	Var0.f_296 = 1.0f;
	Var0.f_300 = 1.0f;
	Var0.f_304 = 1.0f;
	Var0.f_308 = 20.0f;
	Var0.f_312 = 20;
	Var0.f_316 = 1;
	Var0.f_320 = 300.0f;
	Var0.f_324 = 3.5f;
	Var0.f_328 = 0.9f;
	Var0.f_332 = 1.0f;
	Var0.f_336 = 20.0f;
	Var0.f_340 = 20;
	Var0.f_40 = 4294967295;
	Var0.f_44 = 0.67f;
	Var0.f_48 = 0.22f;
	Var0.f_52 = 0.85f;
	Var0.f_56 = 0.5f;
	Var0.f_60 = 0.19f;
	Function_780(34, "base_shotgun", &Var0);
	RESOLVE_DLC_WEAPONENUM(34);
	return;
}

void Function_780(var uParam0, int iParam1, var uParam2) //Position: 0x18D6A / 101738
{
	INIT_NATIVE_WEAPONENUM_SHOTGUN(uParam0, iParam1, uParam2);
	return;
}

void Function_781() //Position: 0x18D79 / 101753
{
	struct<385> Var0;
	
	Var0.f_20 = "THROWN_ZombieBait";
	Var0.f_4 = 47;
	Var0.f_8 = 20;
	Var0.f_12 = 20;
	Var0.f_16 = 3;
	Var0.f_28 = "throw_zombiebait01x";
	Var0.f_32 = "";
	Var0.f_36 = "";
	Var0.f_24 = "ZombieBait";
	Var0.f_64 = "THRX_ZombieBait";
	Var0.f_68 = 500.0f;
	Var0.f_72 = "dyn";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 10.0f;
	Var0.f_96 = 40.0f;
	Var0.f_100 = 20.0f;
	Var0.f_104 = 1.0f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.1f;
	Var0.f_116 = 40.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 1.0f;
	Var0.f_128 = 1.0f;
	Var0.f_132 = "";
	Var0.f_136 = "";
	Var0.f_360 = "";
	*(&Var0 + 364) = { 0.045f, 0.17f, 0.0f };
	Var0.f_140 = "wrist_r";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 100.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 100.0f;
	Var0.f_160 = 20.0f;
	Var0.f_164 = 40.0f;
	Var0.f_168 = 0.6f;
	Var0.f_172 = 20.0f;
	Var0.f_176 = 40.0f;
	Var0.f_180 = 0.6f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 0;
	Var0.f_204 = 0;
	Var0.f_208 = 1.0f;
	Var0.f_212 = 0.1f;
	Var0.f_216 = 1.0f;
	Var0.f_220 = 8.5f;
	Var0.f_224 = 1.5f;
	Var0.f_228 = 30.0f;
	Var0.f_232 = 30.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 60.0f;
	Var0.f_248 = "muzzle_zombie_bait";
	Var0.f_252 = 0;
	Var0.f_256 = 40.0f;
	Var0.f_260 = 20.0f;
	Var0.f_264 = 1.0f;
	Var0.f_268 = 1.0f;
	Var0.f_272 = 10.0f;
	Var0.f_276 = 1.0f;
	Var0.f_280 = 100.0f;
	Var0.f_284 = 0.5f;
	Var0.f_288 = 0;
	Var0.f_292 = 0.0f;
	Var0.f_292 = 0.0f;
	Var0.f_296 = "throw_zombieBait01x";
	*(&Var0 + 300) = { 1.0f, 1.0f, 1.0f };
	Var0.f_316 = 1;
	Var0.f_320 = 0;
	Var0.f_332 = 0;
	Var0.f_336 = 1;
	Var0.f_324 = 1;
	Var0.f_328 = 0;
	Var0.f_340 = 26.0f;
	Var0.f_344 = 0.0f;
	Var0.f_348 = 1;
	Var0.f_352 = 1;
	Var0.f_356 = 4;
	Var0.f_312 = 2.0f;
	Var0.f_380 = -1.0f;
	Var0.f_384 = "ZombieBaitExplosion";
	Var0.f_376 = 30.0f;
	Var0.f_40 = 47;
	Var0.f_44 = 0.65f;
	Var0.f_48 = 0.3f;
	Var0.f_52 = 0.0f;
	Var0.f_56 = 0.0f;
	Var0.f_60 = 0.0f;
	Function_782(36, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(36);
	Var0.f_20 = "THROWN_HolyWater";
	Var0.f_4 = 47;
	Var0.f_8 = 20;
	Var0.f_12 = 20;
	Var0.f_16 = 16;
	Var0.f_28 = "throw_holyWater01x";
	Var0.f_32 = "";
	Var0.f_36 = "";
	Var0.f_24 = "nHolyWater";
	Var0.f_64 = "THRX_HolyWater";
	Var0.f_68 = 500.0f;
	Var0.f_72 = "dyn";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 10.0f;
	Var0.f_96 = 40.0f;
	Var0.f_100 = 20.0f;
	Var0.f_104 = 1.0f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.1f;
	Var0.f_116 = 40.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 1.0f;
	Var0.f_128 = 1.0f;
	Var0.f_132 = "";
	Var0.f_136 = "";
	Var0.f_360 = "";
	*(&Var0 + 364) = { 0.045f, 0.17f, 0.0f };
	Var0.f_140 = "wrist_r";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 100.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 100.0f;
	Var0.f_160 = 20.0f;
	Var0.f_164 = 40.0f;
	Var0.f_168 = 0.6f;
	Var0.f_172 = 20.0f;
	Var0.f_176 = 40.0f;
	Var0.f_180 = 0.6f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 0;
	Var0.f_204 = 0;
	Var0.f_208 = 1.0f;
	Var0.f_212 = 0.1f;
	Var0.f_216 = 1.0f;
	Var0.f_220 = 8.5f;
	Var0.f_224 = 1.5f;
	Var0.f_228 = 30.0f;
	Var0.f_232 = 30.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 60.0f;
	Var0.f_248 = "muzzle_zombie_holywater";
	Var0.f_252 = 0;
	Var0.f_256 = 40.0f;
	Var0.f_260 = 20.0f;
	Var0.f_264 = 1.0f;
	Var0.f_268 = 1.0f;
	Var0.f_272 = 10.0f;
	Var0.f_276 = 1.0f;
	Var0.f_280 = 100.0f;
	Var0.f_284 = 0.5f;
	Var0.f_288 = 0;
	Var0.f_292 = 0.0f;
	Var0.f_292 = 0.0f;
	Var0.f_296 = "throw_holyWater01x";
	*(&Var0 + 300) = { 1.0f, 1.0f, 1.0f };
	Var0.f_316 = 1;
	Var0.f_320 = 0;
	Var0.f_332 = 0;
	Var0.f_336 = 1;
	Var0.f_324 = 1;
	Var0.f_328 = 0;
	Var0.f_340 = 26.0f;
	Var0.f_344 = 0.0f;
	Var0.f_348 = 1;
	Var0.f_352 = 1;
	Var0.f_356 = 4;
	Var0.f_312 = 2.0f;
	Var0.f_380 = -1.0f;
	Var0.f_384 = "HolyWaterExplosion";
	Var0.f_376 = 30.0f;
	Var0.f_40 = 47;
	Var0.f_44 = 0.65f;
	Var0.f_48 = 0.3f;
	Var0.f_52 = 0.0f;
	Var0.f_56 = 0.0f;
	Var0.f_60 = 0.0f;
	Function_782(35, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(35);
	Var0.f_20 = "THROWN_ZombieBoomBait";
	Var0.f_4 = 47;
	Var0.f_8 = 20;
	Var0.f_12 = 20;
	Var0.f_16 = 2;
	Var0.f_28 = "throw_zombiebait02x";
	Var0.f_32 = "";
	Var0.f_36 = "";
	Var0.f_24 = "ZombieBoomBait";
	Var0.f_64 = "THRX_ZombieBoomBait";
	Var0.f_68 = 500.0f;
	Var0.f_72 = "dyn";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 10.0f;
	Var0.f_96 = 40.0f;
	Var0.f_100 = 20.0f;
	Var0.f_104 = 1.0f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.1f;
	Var0.f_116 = 40.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 1.0f;
	Var0.f_128 = 1.0f;
	Var0.f_132 = "";
	Var0.f_136 = "";
	Var0.f_360 = "MUZZLE_DYNAMITE";
	*(&Var0 + 364) = { 0.0f, 0.0f, 0.0f };
	Var0.f_140 = "wrist_r";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 100.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 100.0f;
	Var0.f_160 = 20.0f;
	Var0.f_164 = 40.0f;
	Var0.f_168 = 0.6f;
	Var0.f_172 = 20.0f;
	Var0.f_176 = 40.0f;
	Var0.f_180 = 0.6f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 0;
	Var0.f_204 = 0;
	Var0.f_208 = 1.0f;
	Var0.f_212 = 0.1f;
	Var0.f_216 = 1.0f;
	Var0.f_220 = 8.5f;
	Var0.f_224 = 1.5f;
	Var0.f_228 = 30.0f;
	Var0.f_232 = 30.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 60.0f;
	Var0.f_248 = "weap_dynamite_trail";
	Var0.f_252 = 0;
	Var0.f_256 = 40.0f;
	Var0.f_260 = 20.0f;
	Var0.f_264 = 1.0f;
	Var0.f_268 = 1.0f;
	Var0.f_272 = 10.0f;
	Var0.f_276 = 1.0f;
	Var0.f_280 = 100.0f;
	Var0.f_284 = 0.5f;
	Var0.f_288 = 0;
	Var0.f_292 = 0.0f;
	Var0.f_292 = 0.0f;
	Var0.f_296 = "throw_zombieBait02x";
	*(&Var0 + 300) = { 1.0f, 1.0f, 1.0f };
	Var0.f_316 = 1;
	Var0.f_320 = 0;
	Var0.f_332 = 0;
	Var0.f_336 = 1;
	Var0.f_324 = 1;
	Var0.f_328 = 1;
	Var0.f_340 = 26.0f;
	Var0.f_344 = 0.0f;
	Var0.f_348 = 1;
	Var0.f_352 = 1;
	Var0.f_356 = 4;
	Var0.f_312 = 2.0f;
	Var0.f_380 = 8.9f;
	Var0.f_384 = "ZombieBaitExplosion";
	Var0.f_376 = 30.0f;
	Var0.f_40 = 47;
	Var0.f_44 = 0.65f;
	Var0.f_48 = 0.3f;
	Var0.f_52 = 0.0f;
	Var0.f_56 = 0.0f;
	Var0.f_60 = 0.0f;
	Function_782(37, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(37);
	Var0.f_20 = "THROWN_ZombieSpit";
	Var0.f_4 = 47;
	Var0.f_8 = 20;
	Var0.f_12 = 20;
	Var0.f_16 = 0;
	Var0.f_28 = "throw_zombieSpit01x";
	Var0.f_32 = "";
	Var0.f_36 = "";
	Var0.f_24 = "ZombieSpit";
	Var0.f_64 = "THRX_ZombieSpit";
	Var0.f_68 = 500.0f;
	Var0.f_72 = "dyn";
	Var0.f_76 = "";
	Var0.f_80 = "<none>";
	Var0.f_84 = "ndonothing";
	Var0.f_88 = "nDoNothing";
	Var0.f_92 = 5.0f;
	Var0.f_96 = 15.0f;
	Var0.f_100 = 10.0f;
	Var0.f_104 = 1.0f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.1f;
	Var0.f_116 = 40.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 1.0f;
	Var0.f_128 = 1.0f;
	Var0.f_132 = "";
	Var0.f_136 = "";
	Var0.f_360 = "";
	*(&Var0 + 364) = { 0.045f, 0.17f, 0.0f };
	Var0.f_140 = "head";
	Var0.f_144 = 0.8f;
	Var0.f_148 = 100.0f;
	Var0.f_152 = 0.8f;
	Var0.f_156 = 100.0f;
	Var0.f_160 = 20.0f;
	Var0.f_164 = 40.0f;
	Var0.f_168 = 0.6f;
	Var0.f_172 = 20.0f;
	Var0.f_176 = 40.0f;
	Var0.f_180 = 0.6f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 0;
	Var0.f_204 = 0;
	Var0.f_208 = 1.0f;
	Var0.f_212 = 0.1f;
	Var0.f_216 = 1.0f;
	Var0.f_220 = 8.5f;
	Var0.f_224 = 1.5f;
	Var0.f_228 = 30.0f;
	Var0.f_232 = 30.0f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 30.0f;
	Var0.f_244 = 60.0f;
	Var0.f_248 = "ZOMBIE_SPIT_TRAIL";
	Var0.f_252 = 0;
	Var0.f_256 = 40.0f;
	Var0.f_260 = 10.0f;
	Var0.f_264 = 1.0f;
	Var0.f_268 = 1.0f;
	Var0.f_272 = 10.0f;
	Var0.f_276 = 1.0f;
	Var0.f_280 = 100.0f;
	Var0.f_284 = 0.5f;
	Var0.f_288 = 0;
	Var0.f_292 = 0.0f;
	Var0.f_292 = 0.0f;
	Var0.f_296 = "throw_zombieSpit01x";
	*(&Var0 + 300) = { 1.0f, 1.0f, 1.0f };
	Var0.f_316 = 1;
	Var0.f_320 = 1;
	Var0.f_332 = 0;
	Var0.f_336 = 0;
	Var0.f_324 = 0;
	Var0.f_328 = 0;
	Var0.f_340 = 26.0f;
	Var0.f_344 = 0.0f;
	Var0.f_348 = 1;
	Var0.f_352 = 1;
	Var0.f_356 = 0;
	Var0.f_312 = 2.0f;
	Var0.f_380 = -1.0f;
	Var0.f_384 = "";
	Var0.f_376 = 30.0f;
	Var0.f_40 = 47;
	Var0.f_44 = 0.65f;
	Var0.f_48 = 0.3f;
	Var0.f_52 = 0.0f;
	Var0.f_56 = 0.0f;
	Var0.f_60 = 0.0f;
	Function_782(32, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(32);
	return;
}

void Function_782(var uParam0, int iParam1, int iParam2) //Position: 0x19B1C / 105244
{
	INIT_NATIVE_WEAPONENUM_THROWN_EXPLODING(uParam0, iParam1, iParam2);
	return;
}

void Function_783(var uParam0, int iParam1) //Position: 0x19B2B / 105259
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_784(bool bParam0) //Position: 0x19B37 / 105271
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SNAP_OBJECT_TO_GROUND(bParam0, 3.0f, false, 1092616192);
	}
	return;
}

void Function_785(var uParam0, int iParam1) //Position: 0x19B55 / 105301
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_786(var uParam0, bool bParam1) //Position: 0x19B64 / 105316
{
	if (IS_VOLUME_VALID(bParam1))
	{
		uParam0->f_8 = bParam1;
	}
	return;
}

void Function_787() //Position: 0x19B7B / 105339
{
	Function_790(&bLocal_592, 21, 3, 1);
	Function_790(&bLocal_592, 24, 3, 1);
	Function_790(&bLocal_592, 25, 3, 1);
	Function_790(&bLocal_592, 31, 3, 1);
	Function_790(&bLocal_592, 44, 3, 1);
	Function_790(&bLocal_592, 46, 3, 1);
	Function_790(&bLocal_592, 245, 3, 1);
	Function_790(&bLocal_592, 254, 3, 1);
	Function_790(&bLocal_592, 257, 3, 1);
	Function_790(&bLocal_592, 278, 3, 1);
	Function_790(&bLocal_592, 284, 3, 1);
	Function_790(&bLocal_592, 300, 3, 1);
	Function_790(&bLocal_592, 1204, 3, 1);
	Function_790(&bLocal_592, 1205, 3, 1);
	Function_790(&bLocal_592, 1206, 3, 1);
	Function_790(&bLocal_592, 1207, 3, 1);
	Function_790(&bLocal_592, 1208, 3, 1);
	Function_790(&bLocal_592, 1209, 3, 1);
	Function_790(&bLocal_592, 1210, 3, 1);
	Function_790(&bLocal_592, 1211, 3, 1);
	Function_790(&bLocal_592, 1212, 3, 1);
	Function_790(&bLocal_592, 1213, 3, 1);
	Function_790(&bLocal_592, 1214, 3, 1);
	Function_790(&bLocal_592, 1215, 3, 1);
	Function_790(&bLocal_592, 1216, 3, 1);
	Function_790(&bLocal_592, 1217, 3, 1);
	Function_790(&bLocal_592, 1218, 3, 1);
	Function_790(&bLocal_592, 1219, 3, 1);
	Function_790(&bLocal_592, 1220, 3, 1);
	Function_790(&bLocal_592, 1221, 3, 1);
	Function_790(&bLocal_592, 1222, 3, 1);
	Function_790(&bLocal_592, 1223, 3, 1);
	Function_790(&bLocal_592, 1224, 3, 1);
	Function_790(&bLocal_592, 1225, 3, 1);
	Function_790(&bLocal_592, 1226, 3, 1);
	Function_790(&bLocal_592, 1227, 3, 1);
	Function_788(&bLocal_592, "$/fragments/p_gen_coffin04x", 0, 0);
	Function_788(&bLocal_592, "ZombiePackMPGringos", 12, 0);
	Function_788(&bLocal_592, "$/content/DLC/ZombiePack/Gringos/MP_OpenCoffin", 1, 0);
	return;
}

var Function_788(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x19DAA / 105898
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_789(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_725(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_789(var uParam0, int iParam1, int iParam2) //Position: 0x19DE2 / 105954
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_160(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_725(uParam0[iVar03], 4);
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

var Function_790(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x19EA6 / 106150
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_160(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_725(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_725(uParam0[iVar03], 8);
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

void Function_791() //Position: 0x19F76 / 106358
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
	
	Function_792(4, 1);
	uVar0 = uVar0;
	Local_71 = CREATE_LAYOUT("SepulcroMP_GY_layout");
	Local_71.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_71, "SpawnVol01", 3, -1362.214f, 13.05099f, 4298.659f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_71.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_71, "TrapVolume", 3, -1362.506f, 13.08f, 4298.777f, 0.0f, 20.0f, 0.0f, 200.0f, 20.0f, 200.0f);
	*(&Local_71 + 12) = { -1362.506f, 13.07964f, 4298.777f };
	*(&Local_71 + 12 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_71.f_36 = CREATE_POINT_IN_LAYOUT(Local_71, "LocationCenter", -1362.506f, 13.07964f, 4298.777f, 0.0f, 0.0f, 0.0f);
	Local_71.f_40 = CREATE_OBJECTSET_IN_LAYOUT("WeaponPrizesSet", Local_71, 8, 0);
	*(&Local_71 + 44[06]) = { -1357.843f, 13.071f, 4306.408f };
	*(&Local_71 + 44[06] + 12) = { 0.0f, -148.35f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_71, "weapon_0", -1357.843f, 13.071f, 4306.408f, 0.0f, -148.35f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_71.f_40);
	*(&Local_71 + 44[16]) = { -1344.392f, 13.071f, 4296.108f };
	*(&Local_71 + 44[16] + 12) = { 0.0f, -104.8164f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_71, "weapon_1", -1344.392f, 13.071f, 4296.108f, 0.0f, -104.8164f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_71.f_40);
	*(&Local_71 + 44[26]) = { -1380.642f, 13.051f, 4299.516f };
	*(&Local_71 + 44[26] + 12) = { 0.0f, -59.98898f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_71, "weapon_2", -1380.642f, 13.051f, 4299.516f, 0.0f, -59.98898f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_71.f_40);
	*(&Local_71 + 44[36]) = { -1370.215f, 13.071f, 4317.684f };
	*(&Local_71 + 44[36] + 12) = { 0.0f, 120.6323f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_71, "weapon_3", -1370.215f, 13.071f, 4317.684f, 0.0f, 120.6323f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_71.f_40);
	*(&Local_71 + 44[46]) = { -1351.716f, 13.051f, 4281.87f };
	*(&Local_71 + 44[46] + 12) = { 0.0f, 180.2136f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_71, "weapon_4", -1351.716f, 13.051f, 4281.87f, 0.0f, 180.2136f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_71.f_40);
	Local_71.f_168 = CREATE_OBJECTSET_IN_LAYOUT("CoffinSpawnsSet", Local_71, 8, 0);
	*(&Local_71 + 172[06]) = { -1381.845f, 12.563f, 4272.612f };
	*(&Local_71 + 172[06] + 12) = { 0.0f, 30.6846f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_1", -1381.845f, 12.563f, 4272.612f, 0.0f, 30.6846f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_71.f_168);
	*(&Local_71 + 172[16]) = { -1359.258f, 13.051f, 4328.275f };
	*(&Local_71 + 172[16] + 12) = { 0.0f, 223.015f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_2", -1359.258f, 13.051f, 4328.275f, 0.0f, 223.015f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_71.f_168);
	*(&Local_71 + 172[26]) = { -1336.713f, 13.99f, 4322.852f };
	*(&Local_71 + 172[26] + 12) = { 0.0f, -123.6737f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_3", -1336.713f, 13.99f, 4322.852f, 0.0f, -123.6737f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_71.f_168);
	*(&Local_71 + 172[36]) = { -1311.565f, 13.301f, 4312.418f };
	*(&Local_71 + 172[36] + 12) = { 0.0f, -114.6002f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_4", -1311.565f, 13.301f, 4312.418f, 0.0f, -114.6002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_71.f_168);
	*(&Local_71 + 172[46]) = { -1324.323f, 13.051f, 4272.216f };
	*(&Local_71 + 172[46] + 12) = { 0.0f, -81.6027f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_5", -1324.323f, 13.051f, 4272.216f, 0.0f, -81.6027f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_71.f_168);
	*(&Local_71 + 172[56]) = { -1352.113f, 13.901f, 4250.511f };
	*(&Local_71 + 172[56] + 12) = { 0.0f, 1.81286f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_6", -1352.113f, 13.901f, 4250.511f, 0.0f, 1.81286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_71.f_168);
	*(&Local_71 + 172[66]) = { -1397.458f, 11.347f, 4266.144f };
	*(&Local_71 + 172[66] + 12) = { 0.0f, 37.64457f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_7", -1397.458f, 11.347f, 4266.144f, 0.0f, 37.64457f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_71.f_168);
	*(&Local_71 + 172[76]) = { -1329.791f, 13.05098f, 4309.791f };
	*(&Local_71 + 172[76] + 12) = { 0.0f, 227.8577f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_8", -1329.791f, 13.05098f, 4309.791f, 0.0f, 227.8577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_71.f_168);
	*(&Local_71 + 172[86]) = { -1351.104f, 13.051f, 4301.808f };
	*(&Local_71 + 172[86] + 12) = { 0.0f, -158.0945f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_9", -1351.104f, 13.051f, 4301.808f, 0.0f, -158.0945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_71.f_168);
	*(&Local_71 + 172[96]) = { -1364.441f, 13.051f, 4308.794f };
	*(&Local_71 + 172[96] + 12) = { 0.0f, -158.0945f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_71, "spawn_10", -1364.441f, 13.051f, 4308.794f, 0.0f, -158.0945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_71.f_168);
	*(&Local_71 + 416) = { -1403.48f, 6.838111f, 4336.399f };
	*(&Local_71 + 416 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_71.f_440 = CREATE_POINT_IN_LAYOUT(Local_71, "HidingSpot", -1403.48f, 6.838111f, 4336.399f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_792(int iParam0, int iParam1) //Position: 0x1A63F / 108095
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

bool Function_793(bool bParam0) //Position: 0x1A688 / 108168
{
	return (iLocal_438 != 99 || Function_363(bParam0));
}

void Function_794() //Position: 0x1A69A / 108186
{
	var uVar0[4];
	int iVar5;
	
	if (Function_77())
	{
		uVar0[0] = "Clear kill";
		uVar0[1] = "I don't do anything.  Really.";
		uVar0[2] = "Finish";
		uVar0[3] = "Quit Mission";
		iVar5 = Function_799(&Local_440, &uVar0, "RDR CO-OP MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (Function_798(&iVar5, &iLocal_438, &iLocal_439, &Local_447))
		{
			Function_70();
			Function_18();
		}
		switch (iVar5)
		{
			case 0x00000000:
				Function_797();
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				iLocal_794 = 1;
				Function_796(101);
				break;
			
			case 0x00000003:
				Function_70();
				Function_18();
				Function_795();
				break;
			}
	}
	return;
}

void Function_795() //Position: 0x1A782 / 108418
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 1, 1);
	return;
}

void Function_796(var uParam0) //Position: 0x1A796 / 108438
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 1, 1);
	return;
}

void Function_797() //Position: 0x1A7AB / 108459
{
	return;
}

bool Function_798(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A7B1 / 108465
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_70();
			Function_18();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			*uParam1++;
			*uParam2 = 0;
			*uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(false, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		*uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_360("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_799(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1A857 / 108631
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_812(&Var15, &Var0);
	uVar20 = Function_811(*uParam1, &Var15);
	Function_810(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_809(uParam0, uVar20);
	Function_807(StackVal, uParam0, Var15.f_12);
	Function_805(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_804(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_801(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_800(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_800(int iParam0, int iParam1, int iParam2) //Position: 0x1A91E / 108830
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

bool Function_801(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1A97A / 108922
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
				Function_803(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_803(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_800(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_802(bParam1->f_32);
	}
	else
	{
		Function_802(bParam1->f_32);
	}
	return 0;
}

void Function_802(bool bParam0) //Position: 0x1AB00 / 109312
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

void Function_803(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1AB3A / 109370
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

var Function_804(int iParam0, var uParam1, int iParam2) //Position: 0x1ABE8 / 109544
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_805(var uParam0, int iParam1, int iParam2) //Position: 0x1AC0C / 109580
{
	switch (Function_806())
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

int Function_806() //Position: 0x1ACA8 / 109736
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

void Function_807(var uParam0, int iParam1, int iParam2) //Position: 0x1ACE4 / 109796
{
	switch (Function_808(uParam0))
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

int Function_808(int iParam0) //Position: 0x1AD7C / 109948
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_48()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, false))
	{
		if (!Function_47(*iParam0, 0x40000000))
		{
			Function_5(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, false))
	{
		if (!Function_47(*iParam0, 0x40000000))
		{
			Function_5(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_4(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_48()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, false))
	{
		if (!Function_47(*iParam0, 0x20000000))
		{
			Function_5(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, false))
	{
		if (!Function_47(*iParam0, 0x20000000))
		{
			Function_5(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_4(iParam0, 0x20000000);
	return 0;
}

var Function_809(var uParam0, int iParam1) //Position: 0x1AEC7 / 110279
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_810(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1B016 / 110614
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

var Function_811(int iParam0, int iParam1) //Position: 0x1B0A9 / 110761
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_812(var uParam0, var uParam1) //Position: 0x1B0C3 / 110787
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

void Function_813() //Position: 0x1B111 / 110865
{
	if (iLocal_438 != iLocal_801)
	{
		iLocal_801 = iLocal_438;
		switch (iLocal_438)
		{
			case 0x00000000:
				if (Function_814())
				{
					strcpy(&cLocal_797, "TESAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_797, "TESFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_814())
				{
					strcpy(&cLocal_797, "TESAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_797, "TESFail2", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_814())
				{
					strcpy(&cLocal_797, "TESAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_797, "TESFailLast", 16);
				}
				break;
			}
	}
	return;
}

bool Function_814() //Position: 0x1B1D3 / 111059
{
	return Function_47(Global_79962, 64);
}

int Function_815() //Position: 0x1B1E2 / 111074
{
	int iVar0;
	
	iVar0 = 1;
	Function_813();
	if (NET_IS_SESSION_HOST())
	{
		Function_794();
	}
	if (iLocal_438 != 99)
	{
		Function_823();
		Function_819(Local_71, &Local_483, &iLocal_794, Local_758.f_52);
	}
	if (Function_793(&Local_483))
	{
		Function_374();
	}
	if (iLocal_438 != 99)
	{
		Function_372(3);
		Function_368(&Local_758 + 8, &Local_758 + 12, &Local_758 + 16);
		if (NET_IS_SESSION_HOST())
		{
			Local_740 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_758 };
		}
		else if (UNK_0xA80C6DE6(&Local_740))
		{
			Local_758 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_740 };
		}
		iVar0 = Function_818(&Local_483, iLocal_794, Local_758.f_52);
		Function_231(&uLocal_251, Local_71);
		Function_227(&uLocal_252, Local_71);
		Function_219(&uLocal_253, &uLocal_254, Local_71, &bLocal_255);
		Function_213(StackVal, StackVal, *(&Local_71 + 12));
		Function_817(&uLocal_256, Local_71, 3, &bLocal_257, Local_758.f_52);
		Function_195(StackVal, StackVal, (bLocal_216 <= 12 || Local_758.f_52), &iLocal_225, Local_71, *(&Local_71 + 12), 3);
	}
	if (Function_816(524288))
	{
		return 0;
	}
	return iVar0;
}

bool Function_816(bool bParam0) //Position: 0x1B2D0 / 111312
{
	return Function_47((&Global_83591 + 140)->f_56, bParam0);
}

void Function_817(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1B2E3 / 111331
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	Function_211();
	Function_208(bParam1, uParam3, uParam2);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(*uParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
			EVENT_TRAP_CLEAR_EVENTS(*uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, *uParam0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 3);
		bVar3 = START_OBJECT_ITERATOR(bVar0);
		if (!IS_OBJECT_VALID(bVar3))
		{
		}
		uParam4 = uParam4;
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar1 = GET_EVENT_FROM_OBJECT(bVar3);
			bVar2 = GET_OBJECT_FROM_EVENT(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (DECOR_GET_INT(bVar2, "Weapon") == 35)
				{
					bVar4 = GET_EVENT_PERPETRATOR(bVar1);
					if (IS_OBJECT_VALID(bVar4))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
						if (IS_ACTOR_VALID(bVar5))
						{
							Function_205(bVar2, uParam2, GET_ACTOR_SLOT(bVar5));
							DESTROY_ITERATOR(bVar0);
							EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
							EVENT_TRAP_CLEAR_EVENTS(*uParam0);
							return;
						}
					}
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(*uParam0);
		EVENT_TRAP_CLEAR_EVENTS(*uParam0);
	}
}

int Function_818(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B3D3 / 111571
{
	int iVar0;
	
	Function_365();
	Function_364();
	if (!iLocal_804 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_804 = 1;
	}
	if (Function_363(bParam0))
	{
		if (!((((((iLocal_439 != 0 || iLocal_439 != 1) || iLocal_439 != 2) || iLocal_439 != 3) || iLocal_439 != 4) || iLocal_439 != 5) || iLocal_439 != 105))
		{
			if (GET_NUM_PLAYERS() >= 1 && !bParam2)
			{
				Function_347(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	if (*bParam0 != 1 && bParam1)
	{
		Function_346(bParam0, 0);
	}
	else if (*bParam0 != 1 && !bParam1)
	{
		Function_346(bParam0, 1);
	}
	else
	{
		iVar0 = Function_235(bParam0);
		if (iVar0 == 0)
		{
		}
		else if (iVar0 == 2)
		{
		}
		else if (iVar0 == 3)
		{
			return 0;
		}
	}
	return 1;
}

void Function_819(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1B4AC / 111788
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	*uParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam1 };
	*uParam2 = *uParam2;
	if (bParam3)
	{
		Function_821();
		if (DECOR_CHECK_EXIST(bParam0, "quitContext"))
		{
			bVar0 = DECOR_GET_INT(bParam0, "quitContext");
			bVar1 = bVar0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(bVar1))
			{
				bVar2 = false;
				if (((Function_340() && IS_PS3()) && !UI_ISACTIVE("MP_OverrunQuit")) && !UI_ISACTIVE("MPSplash"))
				{
					bVar2 = IS_BUTTON_PRESSED(Function_729(), 5, 1, true);
				}
				else
				{
					bVar2 = IS_BUTTON_PRESSED(Function_729(), 6, 1, true);
				}
				if ((IS_SCRIPT_USE_CONTEXT_PRESSED(bVar1) || WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bVar1)) || bVar2)
				{
					Function_123(bParam0);
					UI_TRANSITION_TO("MP_OverrunQuit");
				}
			}
		}
		else if (Function_331(GET_LOCAL_SLOT(), 16384, 0) && !UI_ISACTIVE("MP_OverrunQuit"))
		{
			if (!DECOR_CHECK_EXIST(bParam0, "nquitTimer"))
			{
				DECOR_SET_FLOAT(bParam0, "nquitTimer", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "nquitTimer")) <= 5.0f)
			{
				Function_820(bParam0);
			}
		}
	}
}

void Function_820(bool bParam0) //Position: 0x1B5EE / 112110
{
	int iVar0;
	bool bVar1;
	
	if (Function_340() && IS_PS3())
	{
		iVar0 = ADD_SCRIPT_USE_CONTEXT("mp_fe_freeroam", 100, 5, false, 0, 0, 0, 4294967295, 0);
	}
	else
	{
		iVar0 = ADD_SCRIPT_USE_CONTEXT("mp_fe_freeroam", 100, 6, false, 0, 0, 0, 4294967295, 0);
	}
	bVar1 = iVar0;
	DECOR_SET_INT(bParam0, "quitContext", bVar1);
	ENABLE_USE_CONTEXTS(1);
	return;
}

void Function_821() //Position: 0x1B65D / 112221
{
	bool bVar0;
	
	if (UI_ISACTIVE("MP_OverrunQuit"))
	{
		bVar0 = false;
		if (((Function_340() && IS_PS3()) && !UI_ISACTIVE("MP_OverrunQuit")) && !UI_ISACTIVE("MPSplash"))
		{
			bVar0 = IS_BUTTON_PRESSED(Function_729(), 5, 1, true);
		}
		else
		{
			bVar0 = IS_BUTTON_PRESSED(Function_729(), 6, 1, true);
		}
		if (bVar0)
		{
			Function_822(524288, 1);
			iLocal_794 = 1;
			UI_EXIT("MP_OverrunQuit");
		}
	}
	return;
}

void Function_822(int iParam0, bool bParam1) //Position: 0x1B6EB / 112363
{
	if (bParam1)
	{
		Function_5(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_4(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_823() //Position: 0x1B713 / 112403
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar4 = false;
	bVar0 = ROUND(Function_114(0));
	bVar1 = ROUND(Function_114(1));
	bVar2 = ROUND(Function_114(2));
	bVar3 = ROUND(Function_114(3));
	if (IS_SLOT_VALID(false))
	{
		bVar0 = Function_115(0);
	}
	if (IS_SLOT_VALID(true))
	{
		bVar1 = Function_115(1);
	}
	if (IS_SLOT_VALID(2))
	{
		bVar2 = Function_115(2);
	}
	if (IS_SLOT_VALID(3))
	{
		bVar3 = Function_115(3);
	}
	bVar4 = (((bVar0 + bVar1) + bVar2) + bVar3);
	Function_682(0, TO_FLOAT(bVar0));
	Function_682(1, TO_FLOAT(bVar1));
	Function_682(2, TO_FLOAT(bVar2));
	Function_682(3, TO_FLOAT(bVar3));
	Function_682(4, TO_FLOAT(bVar4));
	return;
}

