//Decompiled with MagicRDR v1.0
//Function Count : 601
//Statics Count : 964
//Natives Count : 763
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<721> Local_4 = { 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_725 = 0;
	int iLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	struct<2> Local_732 = { 0, 0 } ;
	var uLocal_734 = 0;
	bool bLocal_735 = false;
	int iLocal_736 = 0;
	struct<2> Local_737[19];
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
	int iLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 13;
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
	struct<15> Local_874[2];
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
	var uLocal_924 = 5;
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
	int iLocal_944 = 0;
	bool bLocal_945 = false;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	int iLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_496 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_508 = 99;
	iLocal_509 = 6;
	iLocal_510 = 1000;
	while (Function_278())
	{
		Function_223();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	START_VEHICLE(&Local_4 + 336[02]);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_533);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_535);
	if (bLocal_523 || bLocal_524)
	{
		if (IS_ACTOR_VALID(&Local_4 + 336[02]))
		{
			DESTROY_ACTOR(&Local_4 + 336[02]);
		}
	}
	Function_222(&Local_4 + 504);
	SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_533, false);
	RESET_PLAYER_TARGET_WEIGHT();
	Function_220(Global_53579);
	CLEAR_ACTOR_PROOF(&Global_54076, 16);
	Function_217(1, 1, 0, 1, 1);
	Function_216();
	Function_215();
	Function_214(&uLocal_494);
	Function_214(&Local_4);
	SET_WEAPONENUM_LOCKED(23, 1);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	if (IS_BLIP_VALID(&uLocal_710))
	{
		REMOVE_BLIP(&uLocal_710);
	}
	Function_212(1);
	Function_211();
	Function_181(bLocal_523, 1, 0, 1, 1, 1, 1, 1);
	Function_177(&iLocal_560);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_646))
	{
		DESTROY_ITERATOR(&uLocal_646);
	}
	RELEASE_LAYOUT_REF(&uLocal_494);
	if (bLocal_522)
	{
		Function_26(Local_496, 1, 1, 1, 0);
	}
	else if (bLocal_523)
	{
		Function_22(Local_496);
	}
	else
	{
		Function_2(Local_496);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x14A / 330
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x16B / 363
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x188 / 392
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1AB / 427
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x1C2 / 450
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x264 / 612
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x287 / 647
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

void Function_9() //Position: 0x2D1 / 721
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x2EA / 746
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x33D / 829
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x467 / 1127
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x4A1 / 1185
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x4BC / 1212
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x4C9 / 1225
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x4E9 / 1257
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x500 / 1280
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x51B / 1307
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
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x762 / 1890
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x78E / 1934
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x7B2 / 1970
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x7C7 / 1991
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x7E5 / 2021
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x88B / 2187
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x8CA / 2250
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB20 / 2848
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xC14 / 3092
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

bool Function_28(int iParam0, bool bParam1) //Position: 0xC46 / 3142
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xC84 / 3204
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC9E / 3230
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xCB4 / 3252
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xFB1 / 4017
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x1026 / 4134
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1060 / 4192
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x10DC / 4316
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10EF / 4335
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

int Function_37(int iParam0) //Position: 0x1190 / 4496
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x11CD / 4557
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11E3 / 4579
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
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
			Function_84(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1441 / 5185
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x147F / 5247
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

void Function_42(bool bParam0) //Position: 0x14BE / 5310
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x1513 / 5395
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x155E / 5470
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

void Function_45() //Position: 0x1664 / 5732
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

void Function_46() //Position: 0x1697 / 5783
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

void Function_47() //Position: 0x182A / 6186
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

void Function_48() //Position: 0x19E3 / 6627
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19F1 / 6641
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
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

var Function_50() //Position: 0x1C0E / 7182
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1C23 / 7203
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CCA / 7370
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F66 / 8038
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x25A4 / 9636
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x25AD / 9645
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25BE / 9662
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x26B5 / 9909
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26D0 / 9936
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2737 / 10039
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2749 / 10057
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x275B / 10075
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x288F / 10383
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x289E / 10398
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x28D7 / 10455
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2914 / 10516
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AAE / 10926
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

int Function_67(bool bParam0) //Position: 0x2CF2 / 11506
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D33 / 11571
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2DBC / 11708
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2E53 / 11859
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2ED2 / 11986
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2F0F / 12047
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x311B / 12571
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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

bool Function_74(char* cParam0) //Position: 0x31D2 / 12754
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31EA / 12778
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x32E2 / 13026
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32EC / 13036
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32FD / 13053
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3313 / 13075
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x33DF / 13279
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33FC / 13308
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3C28 / 15400
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C63 / 15459
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C72 / 15474
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 != Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x414F / 16719
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x4165 / 16741
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4184 / 16772
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x419E / 16798
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4208 / 16904
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x4430 / 17456
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

void Function_91() //Position: 0x44CE / 17614
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x4630 / 17968
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x46B0 / 18096
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4A07 / 18951
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

int Function_95(int iParam0) //Position: 0x4A8F / 19087
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4AA9 / 19113
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4AD4 / 19156
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4B02 / 19202
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
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D9E / 19870
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F72 / 20338
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

int Function_101(int iParam0, char* cParam1) //Position: 0x51DC / 20956
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x536C / 21356
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x540D / 21517
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x54CB / 21707
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

var Function_105(int iParam0) //Position: 0x5531 / 21809
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

int Function_106(int iParam0, bool bParam1) //Position: 0x55C0 / 21952
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x576C / 22380
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

void Function_108() //Position: 0x57B1 / 22449
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x57C7 / 22471
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5807 / 22535
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5847 / 22599
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5856 / 22614
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
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

int Function_113(int iParam0) //Position: 0x5A1E / 23070
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

var Function_114() //Position: 0x5AB3 / 23219
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5AD8 / 23256
{
	if (!Function_30(iParam0))
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
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5FA7 / 24487
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
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
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x62CE / 25294
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6371 / 25457
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x656E / 25966
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6719 / 26393
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67EB / 26603
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
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
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(int iParam0) //Position: 0x7106 / 28934
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
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
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7283 / 29315
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
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x738E / 29582
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x73BA / 29626
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

var Function_126(vector3 vParam0) //Position: 0x7411 / 29713
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

void Function_127(var uParam0, int iParam1) //Position: 0x745F / 29791
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74BA / 29882
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x765B / 30299
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7661 / 30305
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7710 / 30480
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7765 / 30565
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x777B / 30587
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x77CC / 30668
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x77F9 / 30713
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x780A / 30730
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7824 / 30756
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7835 / 30773
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7991 / 31121
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7A1C / 31260
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A49 / 31305
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7BF9 / 31737
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C50 / 31824
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

var Function_144(int iParam0) //Position: 0x7C75 / 31861
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x7CCB / 31947
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

int Function_146(bool bParam0) //Position: 0x7D2A / 32042
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D36 / 32054
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D52 / 32082
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7DA4 / 32164
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DD4 / 32212
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7E49 / 32329
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7EA6 / 32422
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7F19 / 32537
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F74 / 32628
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
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
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
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
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x823A / 33338
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x84D9 / 34009
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

void Function_157() //Position: 0x8548 / 34120
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x85C8 / 34248
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_159(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
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
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_159(int iParam0) //Position: 0x922B / 37419
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9240 / 37440
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(var uParam0, int iParam1) //Position: 0x928F / 37519
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x92E7 / 37607
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x935A / 37722
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x936E / 37742
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
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
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x945F / 37983
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x94B7 / 38071
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94D4 / 38100
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x952E / 38190
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x9540 / 38208
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_170(struct<185> Param0) //Position: 0x9574 / 38260
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
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x95DF / 38367
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
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x96C9 / 38601
{
	int iVar0;
	
	Function_174(iParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, &iParam1);
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x9848 / 38984
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9854 / 38996
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

void Function_175() //Position: 0x989A / 39066
{
	Function_176();
	return;
}

void Function_176() //Position: 0x98A3 / 39075
{
	Function_177(&Local_4 + 8);
	Function_177(&Local_4 + 288);
	Function_177(&Local_4 + 312);
	RELEASE_LAYOUT_REF(&Local_4);
	return;
}

void Function_177(int iParam0) //Position: 0x98C6 / 39110
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_178(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x98EE / 39150
{
	if (Function_180(&(Param0[iParam12]), 4))
	{
		if (Function_180(&(Param0[iParam12]), 1))
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
			Function_179(&(Param0[iParam12]), 1);
			Function_179(&(Param0[iParam12]), 2);
			Function_179(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_179(struct<13> Param0) //Position: 0x9A39 / 39481
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x9A56 / 39510
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9A74 / 39540
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_210());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_209();
	CLEAR_PRINTED_OBJECTIVE();
	Function_208();
	Function_206(0);
	Function_205();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_204();
	Function_203();
	Function_209();
	ENABLE_JOURNAL_REPLAY(1);
	Function_202(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_201(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_198(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_197();
	Function_196(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(4194560);
	Function_191();
	Function_190();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_187(0, 1, 1);
	}
	else
	{
		Function_187(0, 1, 1);
	}
	Function_186();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_182();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_182() //Position: 0x9C80 / 40064
{
	int iVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			iVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_185() > 3)
		{
			iVar0 *= 2;
		}
		Function_183(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9CD7 / 40151
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_184(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_184(bool bParam0) //Position: 0x9D27 / 40231
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_185() //Position: 0x9D50 / 40272
{
	return Global_21369.f_248;
}

void Function_186() //Position: 0x9D5B / 40283
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_187(int iParam0, bool bParam1, int iParam2) //Position: 0x9D85 / 40325
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_188(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_188(int iParam0) //Position: 0x9E91 / 40593
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_189())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_189() //Position: 0x9F10 / 40720
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_190() //Position: 0x9F79 / 40825
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_191() //Position: 0x9F9F / 40863
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_192(int iParam0) //Position: 0x9FC5 / 40901
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_193(int iParam0) //Position: 0x9FE2 / 40930
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_194(int iParam0) //Position: 0x9FF5 / 40949
{
	Function_195(&Global_43580, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0xA003 / 40963
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_196(bool bParam0) //Position: 0xA022 / 40994
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_197() //Position: 0xA04F / 41039
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

void Function_198(int iParam0) //Position: 0xA0C7 / 41159
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_199(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_199(bool bParam0, bool bParam1, int iParam2) //Position: 0xA1FD / 41469
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_200(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_200(bool bParam0) //Position: 0xA24B / 41547
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

void Function_201(int iParam0) //Position: 0xA33F / 41791
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_202(bool bParam0) //Position: 0xA3C2 / 41922
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

void Function_203() //Position: 0xA439 / 42041
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_204() //Position: 0xA47D / 42109
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_205() //Position: 0xA4C1 / 42177
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_206(int iParam0) //Position: 0xA4D7 / 42199
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_207())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_207() //Position: 0xA517 / 42263
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

void Function_208() //Position: 0xA53C / 42300
{
	Global_15862 = 0.0f;
	return;
}

void Function_209() //Position: 0xA546 / 42310
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_210() //Position: 0xA571 / 42353
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_211() //Position: 0xA58E / 42382
{
	if (VMAG(*(&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_212(bool bParam0) //Position: 0xA6C0 / 42688
{
	if (bParam0)
	{
		Function_213("rsdTRAIL_curve20", 5, 50);
		Function_213("rsdTRAIL_curve21", 5, 50);
		Function_213("rsdGPSTRAIL_curve20", 18, 50);
		Function_213("rsdGPSTRAIL_curve21", 18, 50);
		Function_213("rsdGPSTRAIL_curve624", 18, 50);
		Function_213("rsdGPSTRAIL_curve626", 18, 50);
	}
	else
	{
		Function_213("rsdTRAIL_curve20", 5, 10);
		Function_213("rsdTRAIL_curve21", 5, 10);
		Function_213("rsdGPSTRAIL_curve20", 18, 10);
		Function_213("rsdGPSTRAIL_curve21", 18, 10);
		Function_213("rsdGPSTRAIL_curve624", 18, 10);
		Function_213("rsdGPSTRAIL_curve626", 18, 10);
	}
	return;
}

void Function_213(var uParam0, int iParam1, int iParam2) //Position: 0xA816 / 43030
{
	var uVar0;
	
	uVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME(&uParam0, iParam1));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_CURVE_WEIGHT(&uVar0, iParam2);
		PRINTSTRING(GET_CURVE_NAME(&uVar0));
		PRINTSTRING(" has been configured");
		PRINTNL();
	}
	else
	{
		PRINTSTRING(GET_CURVE_NAME(&uVar0));
		PRINTSTRING(" is invalid. Could not configure.");
		PRINTNL();
	}
	return;
}

void Function_214(int iParam0) //Position: 0xA897 / 43159
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&uVar1))
	{
		while (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&uVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_215() //Position: 0xA8FF / 43263
{
	Function_177(&Local_4 + 312);
	return;
}

void Function_216() //Position: 0xA90D / 43277
{
	Function_177(&Local_4 + 288);
	return;
}

int Function_217(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA91B / 43291
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (uParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_219(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_218(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_218(int iParam0) //Position: 0xAC5D / 44125
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_219(int iParam0) //Position: 0xAC90 / 44176
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

int Function_220(int iParam0) //Position: 0xACA7 / 44199
{
	if (!Function_221(iParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 0;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
	return 1;
}

bool Function_221(int iParam0, int iParam1) //Position: 0xACF6 / 44278
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_222(bool bParam0) //Position: 0xAD05 / 44293
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_223() //Position: 0xAD53 / 44371
{
	var uVar0[12];
	int iVar13;
	
	if (Function_277())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Last Stage";
		uVar0[6] = "nFlame on!";
		uVar0[7] = "turn off the fire";
		uVar0[8] = "HAT!";
		uVar0[9] = "nShoot 135";
		uVar0[10] = "nShoot 180";
		uVar0[11] = "nShoot 225";
		iVar13 = Function_263(&uLocal_525, &uVar0, &Local_496 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_262(&iVar13, &iLocal_508, &iLocal_509, &iLocal_510))
		{
			Function_255();
			Function_254();
		}
		if (iVar13 == 0)
		{
			Function_255();
			Function_254();
			Function_253(&bLocal_522, 8);
		}
		else if (iVar13 == 1)
		{
			Function_255();
			Function_254();
			Function_249(iLocal_508);
			Function_245(StackVal, 5, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
		}
		else if (iVar13 == 2)
		{
			Function_255();
			Function_254();
			Function_240(&bLocal_524, 4);
		}
		else if (iVar13 == 3)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&bLocal_648);
			iLocal_508 = 1;
			iLocal_509 = 0;
			iLocal_510 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&bLocal_648);
			iLocal_508 = 2;
			iLocal_509 = 0;
			iLocal_510 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&bLocal_648);
			iLocal_508 = 101;
			iLocal_509 = 0;
			iLocal_510 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_255();
			Function_254();
			Function_225();
		}
		else if (iVar13 == 7)
		{
			Function_255();
			Function_254();
			iLocal_691 = 0;
			Function_224();
		}
		else if (iVar13 == 8)
		{
			Function_255();
			Function_254();
			EQUIP_ACCESSORY(&iLocal_533, 0, 1);
		}
		else if (iVar13 == 9)
		{
			Function_255();
			Function_254();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Gun/Fire_135");
		}
		else if (iVar13 == 10)
		{
			Function_255();
			Function_254();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Gun/Fire_180");
		}
		else if (iVar13 == 11)
		{
			Function_255();
			Function_254();
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Gun/Fire_225");
		}
	}
	return;
}

void Function_224() //Position: 0xB03C / 45116
{
	UNK_0x1A59E608(&uLocal_720);
	UNK_0x1A59E608(&uLocal_718);
	UNK_0x1A59E608(&uLocal_722);
	return;
}

void Function_225() //Position: 0xB05A / 45146
{
	Function_224();
	if ((RAND_INT_RANGE(0, 3) % 2) == 0)
	{
		uLocal_720 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_54(), "script_wagon_fire_grave02", &Local_4 + 336[02], Vector(0,648f, 2,266f, 0,536f), 1, 0);
		UNK_0x6745191B(StackVal, &uLocal_720, Vector(0.0f, 0.0f, 0.0f));
		Function_237();
	}
	else
	{
		uLocal_718 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_54(), "script_wagon_fire_grave02", &Local_4 + 336[02], Vector(-0,688f, 2,266f, 0,536f), 1, 0);
		UNK_0x6745191B(StackVal, &uLocal_718, Vector(0.0f, 0.0f, 0.0f));
		Function_235();
	}
	uLocal_722 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_54(), "script_wagonfire_grave02_allWagon", &Local_4 + 336[02], Vector(0.0f, 0.0f, 0.0f), 1, 0);
	UNK_0x6745191B(StackVal, &uLocal_722, Vector(0.0f, 0.0f, 0.0f));
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_229();
	fLocal_693 = GET_CURRENT_GAME_TIME();
	Function_226(&bLocal_664);
	if (IS_OBJECT_VALID(&uLocal_712))
	{
		DESTROY_OBJECT(&uLocal_712);
	}
	if (iLocal_680 != 1)
	{
		iLocal_681 = iLocal_680;
		if (iLocal_681 == 7)
		{
			iLocal_681 = 5;
		}
		iLocal_680 = 1;
		SET_PLAYER_CONTROL_RUMBLE(0, 1);
	}
	iLocal_691++;
	return;
}

void Function_226(vector3 vParam0) //Position: 0xB1AF / 45487
{
	if (Function_228(&vParam0))
	{
		if (!Function_227(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_77(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_227(bool bParam0) //Position: 0xB273 / 45683
{
	return Function_14(bParam0, 2);
}

bool Function_228(bool bParam0) //Position: 0xB281 / 45697
{
	return Function_14(bParam0, 1);
}

void Function_229() //Position: 0xB28F / 45711
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_WagonOnFire", "Grave02_WagonOnFire", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_230(int iParam0) //Position: 0xB2DE / 45790
{
	Function_234(0, &Global_54076, iParam0, 0);
	Function_234(1, &iLocal_533, iParam0, 0);
	if (SQUAD_IS_VALID(&Local_4 + 392))
	{
		Function_234(2, Function_231(&Local_4 + 392, 505, 1), iParam0, 0);
	}
	Function_234(3, &Local_4 + 544[02], iParam0, 0);
	return;
}

int Function_231(var uParam0, int iParam1, int iParam2) //Position: 0xB32A / 45866
{
	bool bVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	bVar0 = false;
	bVar4 = false;
	fVar3 = 999999,9f;
	uVar1 = "";
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_GET_SIZE(&uParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (!Function_233(&uVar1, 0) || iParam2)
				{
					fVar2 = Function_232(&uVar1, &Global_54076);
					if (fVar2 > fVar3)
					{
						if (GET_ACTOR_ENUM(&uVar1) == iParam1)
						{
							fVar3 = fVar2;
							bVar4 = bVar0;
						}
					}
				}
				bVar0++;
			}
		}
		else
		{
			return "";
		}
	}
	return "";
	return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar4);
}

var Function_232(var uParam0, int iParam1) //Position: 0xB3C3 / 46019
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

bool Function_233(int iParam0, int iParam1) //Position: 0xB4B8 / 46264
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_234(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xB50A / 46346
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_235() //Position: 0xB532 / 46386
{
	Function_236();
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Fire_L");
	iLocal_682 = 9;
	return;
}

void Function_236() //Position: 0xB564 / 46436
{
	if (!ACTOR_HAS_ANIM_SET(&iLocal_533, "graverobber"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_533, 0);
		SET_ANIM_SET_FOR_ACTOR(&iLocal_533, "graverobber", 0);
		SET_REACT_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Reaction");
	}
	return;
}

void Function_237() //Position: 0xB5C8 / 46536
{
	Function_236();
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Fire_R");
	iLocal_682 = 9;
	return;
}

void Function_238(bool bParam0) //Position: 0xB5FA / 46586
{
	Function_239(&bParam0, 0.0f);
	return;
}

void Function_239(vector3 vParam0) //Position: 0xB607 / 46599
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_240(bool bParam0, int iParam1) //Position: 0xB62C / 46636
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_241(&iParam1);
	bParam0 = 1;
	return;
}

void Function_241(int iParam0) //Position: 0xB651 / 46673
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_244("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_243(2) || Function_243(8)) || Function_243(9)) || Function_243(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_244("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_244("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_244("");
	}
	else if (iParam0 == 8)
	{
		Function_242();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_242();
	}
	return;
}

void Function_242() //Position: 0xB748 / 46920
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_243(int iParam0) //Position: 0xB754 / 46932
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_244(char* cParam0) //Position: 0xB78A / 46986
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_245(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB7F6 / 47094
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_246(StackVal, Param4, uParam3, &iParam6);
		Function_241(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_246(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB837 / 47159
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_248(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_247(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_247(int iParam0) //Position: 0xB8B9 / 47289
{
	if (!Function_85(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_248(struct<2> Param0, bool bParam2) //Position: 0xBD67 / 48487
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
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_249(int iParam0) //Position: 0xBDD3 / 48595
{
	Function_250(iParam0 + 1);
	return StackVal, Function_250(iParam0 + 1);
}

struct<8> Function_250(int iParam0) //Position: 0xBDE0 / 48608
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, *(&Local_4 + 944[03]);
			break;
		
		case 0x00000001:
			return StackVal, *(&Local_4 + 1104[03]);
			break;
		
		case 0x00000002:
			return StackVal, *(&Local_4 + 1168[03]);
			break;
		
		case 0x00000003:
			return StackVal, *(&Local_4 + 1296[03]);
			break;
		
		default:
			return StackVal, *(&Local_4 + 1296[03]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, *(&Local_4 + 1296[03]);
}

int Function_251(int iParam0) //Position: 0xBEB9 / 48825
{
	return Function_252(iParam0 + 1);
}

int Function_252(int iParam0) //Position: 0xBEC6 / 48838
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return -374,804f;
			break;
		
		default:
			return -374,804f;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_253(bool bParam0, int iParam1) //Position: 0xBF9D / 49053
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_241(&iParam1);
	bParam0 = 1;
	return;
}

void Function_254() //Position: 0xBFC2 / 49090
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_255() //Position: 0xBFD7 / 49111
{
	Function_257();
	Function_256(10, 3);
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xBFE6 / 49126
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

void Function_257() //Position: 0xC134 / 49460
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_261())
	{
		Function_260(10, 3);
	}
	else
	{
		Function_258();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_258() //Position: 0xC17F / 49535
{
	Function_259(25, 2);
	return;
}

void Function_259(int iParam0, int iParam1) //Position: 0xC18B / 49547
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

void Function_260(int iParam0, int iParam1) //Position: 0xC3B7 / 50103
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

bool Function_261() //Position: 0xC504 / 50436
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
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_262(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC56C / 50540
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_244("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_263(struct<17> Param0) //Position: 0xC61B / 50715
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_276(&Var12, &Var0);
	uVar15 = Function_275(uParam1, &Var12);
	Function_274(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_273(&Param0, uVar15);
	Function_271(StackVal, &Param0, Var12.f_12);
	Function_269(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_268(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_265(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_264(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_264(int iParam0, int iParam1, int iParam2) //Position: 0xC70F / 50959
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

bool Function_265(struct<17> Param0) //Position: 0xC76F / 51055
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
				Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_264(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_266(Param1.f_64);
	}
	else
	{
		Function_266(Param1.f_64);
	}
	return 0;
}

void Function_266(bool bParam0) //Position: 0xC902 / 51458
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

void Function_267(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC940 / 51520
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

var Function_268(int iParam0, struct<21> Param1) //Position: 0xC9F6 / 51702
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_269(vector3 vParam0) //Position: 0xCA1D / 51741
{
	switch (Function_270())
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

int Function_270() //Position: 0xCAC9 / 51913
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

void Function_271(vector3 vParam0) //Position: 0xCB05 / 51973
{
	switch (Function_272(&vParam0))
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

int Function_272(bool bParam0) //Position: 0xCBAE / 52142
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_273(struct<21> Param0) //Position: 0xCCCE / 52430
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

void Function_274(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCE88 / 52872
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

var Function_275(int iParam0, struct<13> Param1) //Position: 0xCF24 / 53028
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_276(struct<17> Param0) //Position: 0xCF40 / 53056
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

bool Function_277() //Position: 0xCF9A / 53146
{
	return Global_47307;
}

bool Function_278() //Position: 0xCFA3 / 53155
{
	if (IS_EXITFLAG_SET())
	{
		Function_249(iLocal_508);
		Function_245(StackVal, 4, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
		return 0;
	}
	Function_600(StackVal, StackVal, StackVal, StackVal, StackVal, Local_496, iLocal_508, iLocal_509, &bLocal_524, &bLocal_522, &bLocal_523);
	if (iLocal_508 == 99 && iLocal_508 == 100)
	{
		Function_599();
		if (IS_ACTOR_ALIVE(&Global_54076))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
			{
				FIRE_STOP_ON_ACTOR(&Global_54076);
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_533))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(&iLocal_533))
			{
				FIRE_STOP_ON_ACTOR(&iLocal_533);
			}
		}
		Function_595(Function_597(&uLocal_685, &uLocal_687, 1, 7.0f, iLocal_815));
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_249(iLocal_508);
			Function_245(StackVal, 1, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
			return 1;
		}
		if (Function_594(2048))
		{
			Function_249(iLocal_508);
			Function_245(StackVal, 3, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
			return 1;
		}
		if (Function_574(&Local_874, &uLocal_820, &uLocal_936, &uLocal_646, iLocal_815))
		{
			if (Function_572(&uLocal_936))
			{
				Function_249(iLocal_508);
				Function_245(StackVal, 5, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
				return 1;
			}
		}
		Function_571();
	}
	switch (iLocal_508)
	{
		case 0x00000063:
			Function_530();
			break;
		
		case 0x00000000:
			Function_501();
			break;
		
		case 0x00000001:
			Function_487();
			break;
		
		case 0x00000002:
			Function_332();
			break;
		
		case 0x00000065:
			Function_281();
			break;
		
		case 0x00000064:
			if (Function_280(&bLocal_523))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_279(&iLocal_508, &iLocal_509, &iLocal_510))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_524)
	{
		Function_240(&bLocal_524, 4);
		Function_1();
		return 0;
	}
	if (bLocal_522)
	{
		Function_253(&bLocal_522, 8);
		Function_1();
		return 0;
	}
	if (bLocal_523 && iLocal_508 == 100)
	{
		Function_249(iLocal_508);
		Function_245(StackVal, 5, &bLocal_523, &iLocal_508, Function_251(iLocal_508), Function_249(iLocal_508), 0);
	}
	return 1;
}

bool Function_279(var uParam0, var uParam1, int iParam2) //Position: 0xD176 / 53622
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_280(int iParam0) //Position: 0xD1BF / 53695
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_281() //Position: 0xD1D3 / 53715
{
	switch (iLocal_509)
	{
		case 0x00000000:
			Function_328(0);
			TASK_CLEAR(&Global_54076);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_327();
			Function_324();
			iLocal_537 = Function_323(StackVal, *(&Local_4 + 1296[03]), 0, 1, 1);
			if (!Function_322(iLocal_537))
			{
				Function_321(&Local_496);
			}
			if (!iLocal_538[2])
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 1296[03]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_533, *(&Local_4 + 1296[23]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1296[43]), 1, 1, 1);
				Function_238(&bLocal_648);
				iLocal_509 = 1;
			}
			else
			{
				Function_238(&bLocal_648);
				iLocal_509 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_537) || iLocal_537 != 4294967295))
			{
				Function_238(&bLocal_648);
				iLocal_509 = 2;
			}
			break;
		
		case 0x00000002:
			Function_250(iLocal_508);
			Function_313(StackVal, Function_250(iLocal_508), iLocal_508, Global_46736[2], Function_252(iLocal_508), 3);
			Function_312(&(Local_874[015]));
			Function_312(&(Local_874[115]));
			Function_224();
			iLocal_510 = 1000;
			Function_238(&bLocal_648);
			iLocal_509 = 3;
			break;
		
		case 0x00000003:
			if (Function_284())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_535, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
				if (StackVal || !Function_282(!IS_ACTOR_DRIVING_VEHICLE(&Global_54076), &Local_4 + 336[02], *(&Local_4 + 1296[83]), 10.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1296[83]), 1, 1, 1);
					SET_ACTOR_IN_VEHICLE(&Global_54076, &Local_4 + 336[02], false);
				}
				Function_238(&bLocal_648);
				iLocal_509 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_ACTOR_SPEED(&Local_4 + 336[02], 0.0f);
				bLocal_522 = true;
			}
			break;
	}
	return;
}

bool Function_282(var uParam0, struct<2> Param1, float fParam3) //Position: 0xD3ED / 54253
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_283(&uParam0);
		if (VDIST(Function_283(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_283(var uParam0) //Position: 0xD479 / 54393
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

bool Function_284() //Position: 0xD4E5 / 54501
{
	Function_309(&iLocal_510, 0);
	switch (iLocal_510)
	{
		case 0x000003E8:
			if (iLocal_508 != 99 && (Function_308(&Local_496) || Local_496.f_40 < 1))
			{
				iLocal_510 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GRAVE_02_END/GRAVE_02_END"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_510 = 1106;
				return 0;
			}
			Function_305(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1.0f, 1);
			Function_303(StackVal, &uLocal_494, *(&Local_4 + 1296[03]), &Local_4 + 680[1], 0, 0, 0, 0, 1, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			Function_300();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_299(&Global_54076, 1, 1);
			DECOR_SET_BOOL(&Global_54076, "NoIdle", 1);
			Function_299(&iLocal_533, 1, 1);
			if (!SQUAD_IS_VALID(&Local_4 + 664))
			{
				Function_298();
			}
			if (!SQUAD_IS_VALID(&Local_4 + 672))
			{
				Function_297();
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_533);
			TASK_STAND_STILL(&iLocal_533, -1.0f, 0, 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!IS_ACTOR_VALID(&Local_4 + 336[02]))
			{
				Function_292();
			}
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/GRAVE_02_END/GRAVE_02_END", 0, 2, 1, 2, 2);
			}
			Function_238(&iLocal_510 + 4);
			iLocal_510 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_291(&iLocal_510 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_510 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_533, true);
				Global_99147 = 0;
				iLocal_704 = 0;
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_533, 0);
				TELEPORT_ACTOR(&iLocal_533, &Local_4 + 1296[73], 1, 1, 1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_535, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
				Function_238(&iLocal_510 + 4);
				iLocal_510 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (!iLocal_706)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1296[103]), 1, 1, 1);
				CUTSCENE_MANAGER_HIDE_ACTOR(&Local_4 + 336[02]);
				iLocal_706 = 1;
			}
			if (!iLocal_704)
			{
				if (Function_291(&iLocal_510 + 4) <= 0,75f)
				{
					Function_290(&Local_4 + 664);
					Function_289(StackVal, &Local_4 + 664, *(&Local_4 + 1296[113]), 10.0f, 5.0f, 15.0f, -1.0f);
					Function_290(&Local_4 + 672);
					Function_289(StackVal, &Local_4 + 672, *(&Local_4 + 1296[123]), 10.0f, 5.0f, 15.0f, -1.0f);
					iLocal_704 = 1;
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_510 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1296[133]), 1, 1, 1);
				SNAP_OBJECT_TO_GROUND(&Local_4 + 336[02], 0,2f, true, 1092616192);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_535, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_533, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
				if (!Function_288())
				{
					SET_ACTOR_IN_VEHICLE(&Global_54076, &Local_4 + 336[02], false);
				}
				CAMERA_RESET(0);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_510 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_510 + 32);
				DESTROY_VOLUME(&iLocal_510 + 32);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_533, false);
				Function_286(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				Function_285(1, 1);
				START_VEHICLE(&Local_4 + 336[02]);
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_533, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
				Function_299(&Global_54076, 0, 1);
				Function_299(&iLocal_533, 0, 1);
				iLocal_510 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				iLocal_510 = 1104;
			}
			break;
		
		case 0x00000452:
			iLocal_510 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_285(bool bParam0, bool bParam1) //Position: 0xD9AD / 55725
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xDA03 / 55811
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
		uVar0 = Function_50();
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
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_254();
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
	Function_287(&iParam9, &iParam10);
}

void Function_287(var uParam0, bool bParam1) //Position: 0xDAD2 / 56018
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
		Function_197();
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

bool Function_288() //Position: 0xDBA1 / 56225
{
	if (IS_ACTOR_VALID(&Local_4 + 336[02]))
	{
		if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
		{
			if (GET_VEHICLE(&Global_54076) == &Local_4 + 336[02])
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_289(var uParam0, vector3 vParam1) //Position: 0xDBD6 / 56278
{
	bool bVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar3))
		{
			fVar1 = RAND_FLOAT_RANGE(fParam4, fParam5);
			vParam1.f_4 = (vParam1.y + fVar1);
			fVar2 = RAND_FLOAT_RANGE(-fParam3, fParam3);
			vParam1 = (vParam1.x + fVar2);
			fVar2 = RAND_FLOAT_RANGE(-fParam3, fParam3);
			vParam1.f_8 = (vParam1.z + fVar2);
			TASK_BIRD_SOAR_AT_COORD(&uVar3, &vParam1, fParam6, 1106247680);
		}
		bVar0++;
	}
}

void Function_290(int iParam0) //Position: 0xDC52 / 56402
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

float Function_291(vector3 vParam0) //Position: 0xDC87 / 56455
{
	if (Function_228(&vParam0))
	{
		if (Function_227(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_292() //Position: 0xDD54 / 56660
{
	*(&Local_4 + 360) = CREATE_ACTORSET_IN_LAYOUT(&Local_4, "WagonGroupset", 0);
	*(&Local_4 + 336[02]) = Function_293(StackVal, StackVal, &Local_4, "nbodyWagon", 1199, 996, Vector(-1816f, 24,0941f, 2870,82f), Vector(0.0f, 51,68236f, 0.0f), 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(&Local_4 + 360, &Local_4 + 336[02]);
	ENABLE_VEHICLE_SEAT(&Local_4 + 336[02], 2, 0);
	ENABLE_VEHICLE_SEAT(&Local_4 + 336[02], 3, 0);
	return;
}

int Function_293(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xDDEC / 56812
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
			if (Function_296(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_295(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_294(bVar16, &iVar1))
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

bool Function_294(int iParam0, bool[] bParam1) //Position: 0xE03F / 57407
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_295(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xE073 / 57459
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_296(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xE08F / 57487
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

void Function_297() //Position: 0xE0BB / 57531
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	(&Local_4 + 672) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "endCrows_2"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_4", 1132, Vector(-3899,151f, 38,02156f, 2926,544f), Vector(0.0f, 191,8601f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_4 + 672);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_5", 1132, Vector(-3896,262f, 36,23165f, 2927,41f), Vector(0.0f, 141,3497f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_4 + 672);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_6", 1132, Vector(-3897,528f, 36,89534f, 2927,032f), Vector(0.0f, 208,3905f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_4 + 672);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	return;
}

void Function_298() //Position: 0xE1B8 / 57784
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_4 + 664) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "endCrows_1"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_1", 1132, Vector(-3900,938f, 37,60048f, 2926,275f), Vector(0.0f, 250,7659f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 664);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_2", 1132, Vector(-3901,612f, 37,1395f, 2926,186f), Vector(0.0f, 141,3497f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 664);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendCrow_3", 1132, Vector(-3902,771f, 36,47616f, 2925,83f), Vector(0.0f, 208,3905f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 664);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	return;
}

void Function_299(int iParam0, bool bParam1, bool bParam2) //Position: 0xE2B5 / 58037
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&iParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			FIRE_STOP_ON_ACTOR(&iParam0);
		}
		SET_ACTOR_INVULNERABILITY(&iParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&iParam0);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&iParam0);
		RESET_ACTOR_GAITS(&iParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&iParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&iParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&iParam0);
		SET_ACTOR_INVULNERABILITY(&iParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
	}
	return;
}

void Function_300() //Position: 0xE365 / 58213
{
	var uVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&uLocal_535))
	{
		iVar1 = GET_MOST_RECENT_MOUNT(&Global_54076);
	}
	else
	{
		iVar1 = &uLocal_535;
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iVar1, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "unmountedHorses"));
	Function_302(&Local_4, &uVar0, &iVar1);
	Function_222(&uVar0);
	if (IS_ACTOR_VALID(&iVar1))
	{
		PRINTSTRING("GOT PLAYER HORSE! It's at ");
		Function_301(&iVar1);
		PRINTVECTOR(Function_301(&iVar1));
		PRINTNL();
	}
	return;
}

struct<8> Function_301(int iParam0) //Position: 0xE3FE / 58366
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_302(char* cParam0, var uParam1, bool bParam2) //Position: 0xE410 / 58384
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&cParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar2))
	{
		iVar0 = GET_ACTOR_FROM_OBJECT(&iVar2);
		if (IS_ACTOR_VALID(&iVar0))
		{
			PRINTSTRING("Got a valid actor named ");
			PRINTSTRING(GET_ACTOR_NAME(&iVar0));
			PRINTNL();
			if (IS_ACTOR_HORSE(&iVar0) && !IS_ACTOR_MOUNTED(&iVar0))
			{
				if (&iVar0 != &bParam2)
				{
					PRINTSTRING(GET_ACTOR_NAME(&iVar0));
					PRINTSTRING(" is a horse, put him in the horse squad");
					PRINTNL();
					SQUAD_JOIN(&iVar0, &uParam1);
				}
			}
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return;
}

void Function_303(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xE4E4 / 58596
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_304(&uVar1, &uParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_304(var uParam0, float fParam1) //Position: 0xE784 / 59268
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_305(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, int iParam13) //Position: 0xE806 / 59398
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_254();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_301(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_301(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_307()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_307()));
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
	if (Function_306(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_306(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&fParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_306(int iParam0) //Position: 0xEAB8 / 60088
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_307() //Position: 0xEAD4 / 60116
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

bool Function_308(struct<37> Param0) //Position: 0xEB62 / 60258
{
	return Param0.f_36;
}

void Function_309(int iParam0, int iParam1) //Position: 0xEB6D / 60269
{
	Function_310(&iParam0, &iParam1, 0);
	return;
}

void Function_310(var uParam0, bool bParam1, bool bParam2) //Position: 0xEB7D / 60285
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_311(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_311(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_311(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xECF5 / 60661
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

void Function_312(struct<69> Param0) //Position: 0xED1F / 60703
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_313(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xEDDF / 60895
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_320())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_319(0);
	Function_318();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_316(iParam2);
	}
	Function_315(uParam3, iVar0, iVar1);
	Function_314();
}

void Function_314() //Position: 0xEE88 / 61064
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_315(int iParam0, bool bParam1, bool bParam2) //Position: 0xEEC9 / 61129
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_316(bool bParam0) //Position: 0xF032 / 61490
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_317() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_317() //Position: 0xF1CA / 61898
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_318() //Position: 0xF210 / 61968
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_319(bool bParam0) //Position: 0xF234 / 62004
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_320() //Position: 0xF263 / 62051
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_321(int iParam0) //Position: 0xF27E / 62078
{
	if (!Function_308(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_187(1, 0, 1);
		}
	}
	return;
}

bool Function_322(int iParam0) //Position: 0xF29A / 62106
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

int Function_323(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0xF2B6 / 62134
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_324() //Position: 0xF35C / 62300
{
	Function_192(47);
	Function_193(256);
	Function_325(9);
	return;
}

void Function_325(int iParam0) //Position: 0xF372 / 62322
{
	Function_326(&Global_43580, iParam0);
	return;
}

void Function_326(var uParam0, var uParam1) //Position: 0xF380 / 62336
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_327() //Position: 0xF3A8 / 62376
{
	Function_236();
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Idle");
	iLocal_682 = 2;
	return;
}

void Function_328(bool bParam0) //Position: 0xF3D7 / 62423
{
	Function_329(0, 0x40400000);
	Function_204();
	Function_203();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_329(float fParam0, float fParam1) //Position: 0xF40D / 62477
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
	Function_331();
	Function_330();
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

void Function_330() //Position: 0xF51E / 62750
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_331() //Position: 0xF552 / 62802
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

void Function_332() //Position: 0xF658 / 63064
{
	if (iLocal_509 < 3 && iLocal_509 > 105)
	{
		Function_457();
		Function_450();
		if (iLocal_689 <= 6)
		{
			Function_428();
		}
		if (Function_282(StackVal, &Global_54076, *(&Local_4 + 1776), 160.0f))
		{
			Function_427();
		}
		if (IS_VOLUME_ENABLED(&Local_4 + 816[7]) || IS_VOLUME_ENABLED(&Local_4 + 816[8]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 816[7]) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 816[8]))
			{
				SET_VOLUME_ENABLED(&Local_4 + 816[7], 0);
				SET_VOLUME_ENABLED(&Local_4 + 816[8], 0);
			}
		}
		if (IS_VOLUME_VALID(&Local_4 + 816[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 816[2]))
			{
				DESTROY_VOLUME(&Local_4 + 816[2]);
			}
		}
		if (IS_VOLUME_VALID(&Local_4 + 816[5]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 816[5]))
			{
				DESTROY_VOLUME(&Local_4 + 816[5]);
			}
		}
		Function_423();
		Function_421();
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 904))
	{
		if (iLocal_509 <= 9)
		{
			if (SQUAD_IS_VALID(&Local_4 + 392))
			{
				Function_384();
			}
		}
	}
	switch (iLocal_509)
	{
		case 0x00000000:
			Function_328(0);
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			iLocal_815 = 1;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_538[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_383(&Local_4 + 400, 1);
				iLocal_680 = 8;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_324();
				SET_VOLUME_ENABLED(&Local_4 + 720[0], 0);
				SET_VOLUME_ENABLED(&Local_4 + 720[1], 0);
				iLocal_537 = Function_323(StackVal, *(&Local_4 + 1168[03]), 0, 1, 1);
				if (!Function_322(iLocal_537))
				{
					Function_321(&Local_496);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 1168[03]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1168[13]), 1, 1, 1);
				Function_238(&bLocal_648);
				iLocal_509 = 1;
			}
			else
			{
				Function_238(&bLocal_648);
				iLocal_509 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_537) || iLocal_537 != 4294967295))
			{
				Function_238(&bLocal_648);
				iLocal_509 = 2;
			}
			break;
		
		case 0x00000002:
			Function_250(iLocal_508);
			Function_313(StackVal, Function_250(iLocal_508), iLocal_508, Global_46736[2], Function_252(iLocal_508), 3);
			TOGGLE_COVER_PROPS(0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (IS_BLIP_VALID(&uLocal_710))
			{
				REMOVE_BLIP(&uLocal_710);
			}
			if (iLocal_538[1] == 0)
			{
				Function_382();
				Function_381();
				Function_378();
				iLocal_944 = 2;
				SET_ACTOR_IN_VEHICLE(&Global_54076, &Local_4 + 336[02], false);
				Function_327();
				SET_REACT_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Idle");
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_376();
				Function_375(&Local_4 + 392);
				Function_239(&bLocal_660, (30.0f - 8.0f));
			}
			if (IS_OBJECT_VALID(&iLocal_726))
			{
				Function_374(&iLocal_726);
			}
			iLocal_726 = Function_373(StackVal, StackVal, &Local_4, "tumblegatewoooo", *(&Local_4 + 1776), *(&Local_4 + 1776 + 12), &Global_54076, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_371(StackVal, *(&Local_4 + 1776), 0, 48, 1);
			Function_164(Global_46796[0]);
			Function_364(&(Local_874[015]), &iLocal_533, "GraveRobber", 1, 0x5f5e100, 1);
			Function_364(&(Local_874[115]), &Local_4 + 336[02], "Wagon", 1, 0x5f5e100, 1);
			Function_239(&bLocal_660, 16.0f);
			Function_238(&bLocal_664);
			Function_238(&bLocal_648);
			iLocal_509 = 6;
			break;
		
		case 0x00000006:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_291(&bLocal_648) <= 7.0f)
			{
				Function_363();
				Function_238(&bLocal_648);
				iLocal_509 = 7;
			}
			break;
		
		case 0x00000007:
			Function_362();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_291(&bLocal_648) <= 7.0f)
			{
				Function_361("Grave02_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_238(&bLocal_648);
				iLocal_509 = 8;
			}
			break;
		
		case 0x00000008:
			Function_362();
			if (Function_282(StackVal, &Global_54076, *(&Local_4 + 1776), 160.0f))
			{
				SQUAD_GOALS_CLEAR(&Local_4 + 392);
				Function_290(&Local_4 + 392);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 392, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 1, 0, 0);
				if (Function_360(&Local_4 + 392, &iLocal_533, 75.0f, 0) >= 0)
				{
					Function_359();
				}
				else
				{
					SET_VOLUME_ENABLED(&Local_4 + 816[6], 1);
				}
				Function_238(&bLocal_648);
				Function_238(&bLocal_652);
				Function_238(&bLocal_656);
				iLocal_509 = 9;
			}
			break;
		
		case 0x00000009:
			Function_356(&Local_4 + 392, &Global_54076, (Function_358() + 50.0f), 1);
			if (IS_VOLUME_ENABLED(&Local_4 + 816[6]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 816[6]) && Function_288())
				{
					Function_355();
					SET_VOLUME_ENABLED(&Local_4 + 816[6], 0);
					Function_298();
					Function_297();
					iLocal_949 = 0;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_354(&Local_4 + 392);
					Function_352(&Local_4 + 392, 0, 0);
				}
			}
			if (GATEWAY_UPDATE(&iLocal_726))
			{
				Function_374(&iLocal_726);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_238(&bLocal_648);
				iLocal_509 = 106;
			}
			break;
		
		case 0x0000005F:
			Function_343(&bLocal_656, 60.0f, 200.0f, &iLocal_533, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_523, 0, 0, 0, 325, 1);
			if (Function_291(&bLocal_652) <= 9.0f)
			{
				if (Function_340(&Global_54076, &iLocal_533, 16.0f))
				{
					Function_339();
				}
				else
				{
					Function_338();
				}
				Function_238(&bLocal_652);
			}
			if (!Function_288())
			{
				if (Function_291(&bLocal_648) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(&bLocal_708))
					{
						bLocal_708 = ADD_BLIP_FOR_ACTOR(&Local_4 + 336[02], 325, 0, 2, 0);
						Function_361("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_509 = iLocal_684;
				Function_238(&bLocal_648);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(iLocal_509);
				PRINTNL();
				if (IS_BLIP_VALID(&bLocal_708))
				{
					REMOVE_BLIP(&bLocal_708);
				}
				if (IS_BLIP_VALID(&uLocal_710))
				{
					REMOVE_BLIP(&uLocal_710);
				}
				Function_337();
				iLocal_726 = Function_373(StackVal, StackVal, &Local_4, "tumblegatewoooo", *(&Local_4 + 1776), *(&Local_4 + 1776 + 12), &Global_54076, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_371(StackVal, *(&Local_4 + 1776), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			if ((IS_ACTOR_RIDING_VEHICLE(&Global_54076) && GET_NUM_DRAFTED_ACTORS(&Local_4 + 336[02]) < 0) && !Function_333())
			{
				TASK_CLEAR(&Global_54076);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				iLocal_538[2] = 1;
				Function_238(&bLocal_648);
				iLocal_508 = 101;
				bLocal_509 = false;
			}
			break;
	}
	return;
}

bool Function_333() //Position: 0xFDD7 / 64983
{
	var uVar0;
	var uVar2;
	var uVar4;
	var uVar6;
	
	GET_POSITION(&Local_4 + 336[02], &uVar0);
	GET_OBJECT_AXIS(&Local_4 + 336[02], &uVar2, 1);
	FIND_GROUND_INTERSECTION(&uVar0, 10.0f, &uVar6, &uVar4);
	if (VDOT(&uVar2, &uVar4) > 0,2f)
	{
		if (Function_228(&bLocal_945))
		{
			if (Function_291(&bLocal_945) < 2.0f)
			{
				Function_335();
				return 1;
			}
		}
	}
	if (!Function_228(&bLocal_945))
	{
		Function_334(&bLocal_945);
	}
	else
	{
		Function_238(&bLocal_945);
	}
	return 0;
}

void Function_334(bool bParam0) //Position: 0xFE50 / 65104
{
	if (!Function_228(&bParam0))
	{
		Function_239(&bParam0, 0.0f);
	}
	return;
}

void Function_335() //Position: 0xFE67 / 65127
{
	Function_336();
	REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_533, 0);
	return;
}

void Function_336() //Position: 0xFE82 / 65154
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	uVar1 = Vector(0.0f, 0,01f, 0.0f);
	REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&Local_4 + 1944));
	ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&Local_4 + 1944));
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&Local_4 + 1944), &uVar1);
	iVar0 = 0;
	while (iVar0 < (Local_4.f_400 - 1))
	{
		if (IS_OBJECT_VALID(&Local_4 + 400[iVar02]))
		{
			REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&Local_4 + 400[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_337() //Position: 0xFEF5 / 65269
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DrivingTooSlow", "Grave02_DrivingTooSlow", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_338() //Position: 0xFF4A / 65354
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_RunsAwayWagon", "Grave02_RunsAwayWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_339() //Position: 0xFF9D / 65437
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_NoGetBackWagon", "Grave02_NoGetBackWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_340(var uParam0, int iParam1, float fParam2) //Position: 0xFFF2 / 65522
{
	float fVar0;
	
	fVar0 = Function_341(&uParam0, &iParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_341(var uParam0, int iParam1) //Position: 0x10011 / 65553
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_342(&uVar0, &uVar2);
	return iVar4;
}

var Function_342(struct<2> Param0) //Position: 0x10032 / 65586
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_343(struct<2> Param0, bool bParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x10051 / 65617
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_351(&Global_54076, &iParam3, bParam2))
	{
		Function_244(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_351(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_350(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_361(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_349(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_348(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_348(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_350(2))
	{
		Function_347(2);
		if (!Function_346())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_345();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_218(&iParam3);
				Function_344(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_348(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_348(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_344(bool bParam0) //Position: 0x1020F / 66063
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_345() //Position: 0x10242 / 66114
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_346() //Position: 0x10270 / 66160
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_347(int iParam0) //Position: 0x102B7 / 66231
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, iParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_348(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1031E / 66334
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && iParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_349(int iParam0) //Position: 0x103D9 / 66521
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, iParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_350(bool bParam0) //Position: 0x10440 / 66624
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_351(var uParam0, var uParam1, bool bParam2) //Position: 0x1048A / 66698
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

void Function_352(var uParam0, bool bParam1, bool bParam2) //Position: 0x1059F / 66975
{
	bool bVar0;
	var uVar1;
	
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
			if (&bParam2)
			{
				if (!Function_353(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_353(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10628 / 67112
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_354(bool bParam0) //Position: 0x10648 / 67144
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_355() //Position: 0x1069C / 67228
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_ArriveTumbBanter_v1_AA", "Grave02_ArriveTumbBanter_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_ArriveTumbBanter_v1_AB", "Grave02_ArriveTumbBanter_v1_AB", 1, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_356(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1074C / 67404
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 4294967295;
	}
	bVar0 = false;
	iVar2 = 0;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (!Function_351(&uParam1, &bVar1, bParam2))
			{
				PRINTSTRING("Destroying ");
				PRINTSTRING(GET_ACTOR_NAME(&bVar1));
				PRINTSTRING("n, he was ");
				Function_357(&bVar1);
				Function_301(&Global_54076);
				PRINTFLOAT(VDIST(Function_357(&bVar1), Function_301(&Global_54076)));
				PRINTSTRING("m away.");
				PRINTNL();
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&bVar1)))
					{
						PRINTSTRING("He was riding a horse, we'll destroy it too.");
						DESTROY_ACTOR(GET_MOUNT(&bVar1));
					}
				}
				SQUAD_LEAVE(&bVar1);
				DESTROY_ACTOR(&bVar1);
				PRINTNL();
				iVar2++;
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return iVar2;
}

struct<8> Function_357(bool bParam0) //Position: 0x10869 / 67689
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

float Function_358() //Position: 0x10892 / 67730
{
	return 70.0f;
}

void Function_359() //Position: 0x1089D / 67741
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_NearTumbBanter_v1_AA", "Grave02_NearTumbBanter_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_NearTumbBanter_v1_AB", "Grave02_NearTumbBanter_v1_AB", 1, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_360(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x10945 / 67909
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
			if (Function_351(&uVar2, &iParam1, bParam2))
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

void Function_361(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x109BE / 68030
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_362() //Position: 0x10A53 / 68179
{
	return;
}

void Function_363() //Position: 0x10A59 / 68185
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SeesMap", "Grave02_SeesMap", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_364(struct<69> Param0) //Position: 0x10AA0 / 68256
{
	if (!Function_370(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_369(&Param0, &iParam2))
	{
		return 0;
	}
	Function_368(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_365(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_365(var uParam0, int iParam1, int iParam2) //Position: 0x10AE6 / 68326
{
	if (iParam1 != 100000000)
	{
		Function_367(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_366(&uParam0, &iParam2);
	}
	return;
}

void Function_366(struct<69> Param0) //Position: 0x10B0D / 68365
{
	Param0.f_68 = 0;
	Function_367(&Param0, 2, &bParam1);
	Function_367(&Param0, 4, &bParam1);
	Function_367(&Param0, 8, &bParam1);
	Function_367(&Param0, 16, &bParam1);
	Function_367(&Param0, 32, &bParam1);
	Function_367(&Param0, 64, &bParam1);
	Function_367(&Param0, 128, &bParam1);
	Function_367(&Param0, 256, &bParam1);
	Function_367(&Param0, 512, &bParam1);
	Function_367(&Param0, 1024, &bParam1);
	return;
}

void Function_367(int iParam0, int iParam1, bool bParam2) //Position: 0x10B88 / 68488
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_368(struct<65> Param0) //Position: 0x10BC7 / 68551
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_369(int iParam0, char* cParam1) //Position: 0x10BD4 / 68564
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_370(struct<61> Param0) //Position: 0x10C61 / 68705
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_371(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x10E14 / 69140
{
	(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_372(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_372(float fParam0) //Position: 0x10ED5 / 69333
{
	float fVar0;
	
	if (!IS_OBJECTSET_VALID(&fParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&fParam0) >= 0)
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &fParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&fVar0, &fParam0);
		CLEAN_OBJECTSET(&fParam0);
		if (IS_OBJECT_VALID(&fVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&fVar0));
		}
	}
	return;
}

var Function_373(var uParam0, char* cParam1, float fParam9, int iParam10, int iParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x10F1E / 69406
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &iParam11, 0, &iParam12, &bParam15);
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

void Function_374(int iParam0) //Position: 0x11009 / 69641
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

void Function_375(bool bParam0) //Position: 0x1109F / 69791
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_376() //Position: 0x1112F / 69935
{
	Function_377(&Local_4 + 336[02], 0,45f);
	return;
}

void Function_377(var uParam0, float fParam1) //Position: 0x11146 / 69958
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_378() //Position: 0x1118D / 70029
{
	*(&Local_4 + 392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "Riders"));
	*(&Local_4 + 368[02]) = Function_379(StackVal, StackVal, &Local_4, "rider_1", 506, Function_54(), 977, Vector(-2043,931f, 15,81273f, 2587,596f), Vector(0.0f, -68,72905f, 0.0f));
	SQUAD_JOIN(&Local_4 + 368[02], &Local_4 + 392);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 368[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 368[02], 23, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 368[02], 19);
	return;
}

int Function_379(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x11226 / 70182
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_380(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_380(bParam4))
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

bool Function_380(int iParam0) //Position: 0x1135E / 70494
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_381() //Position: 0x11375 / 70517
{
	ATTACH_OBJECTS(StackVal, StackVal, &Local_4 + 1944, &Local_4 + 336[02], "", Vector(0,23f, 1,2f, 0,62f), Vector(-180.0f, -6,24f, -176,98f), 4294967295);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_4 + 1944, &Local_4 + 336[02], 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_4 + 1944, &iLocal_533, 0);
	return;
}

void Function_382() //Position: 0x113D3 / 70611
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	int iVar8;
	
	if (IS_OBJECT_ATTACHED(&iLocal_533))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
	}
	Function_381();
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR(&Local_4 + 336[02]), "passengerGraveRobber_wag2_attach", &Var4, &Var6);
	Var4.f_4 = (StackVal + 0,08f);
	GET_OBJECT_RELATIVE_POSITION(&Local_4 + 336[02], Var4, &Var0);
	GET_OBJECT_RELATIVE_ORIENTATION(&Local_4 + 336[02], Var6, &Var2);
	iVar8 = CREATE_POINT_IN_LAYOUT(&Local_4, "Seth_attach_pos", Var0, Var2);
	ATTACH_OBJECTS_CONTINUOUS(&iVar8, &Local_4 + 336[02], 4294967295);
	if (IS_ACTOR_VALID(&iLocal_533))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &iLocal_533, &iVar8, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		TASK_STAND_STILL(&iLocal_533, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&iLocal_533, true);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_533, &Local_4 + 336[02], 0);
		SET_ACTOR_PROOF(&iLocal_533, 16);
		SET_ACTOR_FACTION(&iLocal_533, 20);
		SET_ACTOR_INVULNERABILITY(&iLocal_533, 1);
	}
	return;
}

void Function_383(struct<2>[] Param0, bool bParam1) //Position: 0x114ED / 70893
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_MOUNT(&(Param0[iVar02]));
			if (IS_ACTOR_VALID(&uVar1) && bParam1)
			{
				DESTROY_ACTOR(&uVar1);
			}
			DESTROY_ACTOR(&(Param0[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_384() //Position: 0x11547 / 70983
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	
	iVar0 = 0;
	bVar1 = false;
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 392) >= 0)
	{
		if (!iLocal_703)
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_703 = 1;
		}
	}
	else if (iLocal_703)
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		iLocal_703 = 0;
	}
	iVar0 = (iVar0 - Function_356(&Local_4 + 392, &Global_54076, (Function_358() * 1,6f), 1));
	if (iVar0 >= 0)
	{
		Function_239(&bLocal_660, 16.0f);
	}
	GET_OBJECT_AXIS(&Local_4 + 336[02], &Var3, 2);
	VSCALE(&Var3, -16.0f);
	Function_357(&Local_4 + 336[02]);
	Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Function_357(&Local_4 + 336[02]), Var3, StackVal);
	bVar1 = (SQUAD_GET_SIZE(&Local_4 + 392) - 1);
	while (bVar1 > 0)
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar1);
		if (IS_ACTOR_ALIVE(&iVar2))
		{
			Function_420(&iVar2);
			if (IS_ACTOR_RIDING(&iVar2))
			{
				if (!DECOR_GET_BOOL(&iVar2, "bottlethrower"))
				{
					if (!IS_ACTOR_VALID(&uVar5))
					{
						uVar5 = &iVar2;
					}
					else
					{
						Function_283(&iVar2);
						Function_283(&Global_54076);
						Function_283(&uVar5);
						Function_283(&Global_54076);
						if (VDIST(Function_283(&iVar2), Function_283(&Global_54076)) > VDIST(Function_283(&uVar5), Function_283(&Global_54076)))
						{
							uVar5 = &iVar2;
						}
					}
				}
				if (Function_419(&iVar2))
				{
					TASK_FLEE_ACTOR(&iVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				Function_301(&iVar2);
				if (VDIST(Function_301(&iVar2), Var3) > 30.0f)
				{
				}
			}
			else
			{
				SQUAD_LEAVE(&iVar2);
				RELEASE_ACTOR(&iVar2);
				TASK_FLEE_ACTOR(&iVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				MEMORY_ALLOW_SHOOTING(&iVar2, false);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar2)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar2));
				}
				RELEASE_ACTOR(&iVar2);
			}
		}
		bVar1 = (bVar1 + 4294967295);
	}
	if (IS_ACTOR_VALID(&uVar5))
	{
		Function_418(&uVar5);
	}
	switch (iLocal_683)
	{
		case 0x00000000:
			if (Function_417(&Local_4 + 336[02], 0) <= 8.0f)
			{
				fLocal_694 = 0.0f;
				Function_416();
				SQUAD_GOALS_CLEAR(&Local_4 + 392);
				Function_415(&Local_4 + 392, 27, 1.0f);
				iLocal_683 = 1;
			}
			else if (Function_288())
			{
				if (Function_291(&bLocal_652) <= 8.0f)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_417(&Local_4 + 336[02], 0) >= 0,5f)
						{
							if (fLocal_694 >= 0.0f)
							{
								fLocal_694 = GET_CURRENT_GAME_TIME();
							}
							if ((GET_CURRENT_GAME_TIME() - fLocal_694) < 6.0f)
							{
								Function_414();
							}
						}
						else
						{
							fLocal_694 = 0.0f;
							Function_337();
						}
					}
					Function_238(&bLocal_652);
				}
			}
			break;
		
		case 0x00000001:
			Function_390();
			Function_388();
			if (Function_417(&Local_4 + 336[02], 0) > 8.0f)
			{
				if (Function_288())
				{
					Function_337();
				}
				Function_238(&bLocal_652);
				Function_387(&Local_4 + 392);
				Function_386(&Local_4 + 392, 41, 1.0f);
				Function_415(&Local_4 + 392, 27, 0.0f);
				Function_385();
				iLocal_683 = 0;
			}
			break;
	}
	return;
}

void Function_385() //Position: 0x117F8 / 71672
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&Local_4 + 392))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Local_4 + 392))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "tasked"))
				{
					DECOR_REMOVE(&uVar1, "tasked");
				}
				if (DECOR_CHECK_EXIST(&uVar1, "onright"))
				{
					DECOR_REMOVE(&uVar1, "onright");
				}
				if (DECOR_CHECK_EXIST(&uVar1, "atHorseLevel"))
				{
					DECOR_REMOVE(&uVar1, "atHorseLevel");
				}
				if (DECOR_CHECK_EXIST(&uVar1, "atWagonLevel"))
				{
					DECOR_REMOVE(&uVar1, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(&uVar1, "atSethLevel"))
				{
					DECOR_REMOVE(&uVar1, "atSethLevel");
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_386(var uParam0, bool bParam1, bool bParam2) //Position: 0x11909 / 71945
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_VALID(&uVar1))
				{
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_387(bool bParam0) //Position: 0x1195C / 72028
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ANIMAL(&uVar1))
			{
				if (!IS_ACTOR_VEHICLE(&uVar1))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_388() //Position: 0x119A9 / 72105
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar7;
	var uVar8;
	float fVar10;
	float fVar12;
	var uVar13;
	var uVar15;
	
	if (SQUAD_IS_VALID(&Local_4 + 392))
	{
		bVar0 = false;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(&Local_4 + 392))
		{
			iVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar3);
			if (IS_ACTOR_ALIVE(&iVar4))
			{
				if (!DECOR_CHECK_EXIST(&iVar4, "tasked"))
				{
					if (Function_340(&iVar4, &Local_4 + 336[02], 40.0f))
					{
						DECOR_SET_BOOL(&iVar4, "tasked", 1);
						fVar5 = Vector(0.0f, 0.0f, 0.0f);
						Function_283(&iVar4);
						GET_OBJECT_RELATIVE_OFFSET(&Local_4 + 336[02], Function_283(&iVar4), &fVar5);
						fVar7 = 10.0f;
						if (fVar5 > 0.0f)
						{
							fVar7 = -10.0f;
							DECOR_SET_BOOL(&iVar4, "onright", 0);
						}
						else
						{
							DECOR_SET_BOOL(&iVar4, "onright", 1);
						}
						uVar8 = Vector(fVar7, 0.0f, -16.0f);
						Function_389(&iVar4, &uVar8);
					}
				}
				else
				{
					fVar10 = Vector(0.0f, 0.0f, 0.0f);
					Function_283(&iVar4);
					GET_OBJECT_RELATIVE_OFFSET(&Local_4 + 336[02], Function_283(&iVar4), &fVar10);
					fVar12 = 10.0f;
					if (fVar10 > 0.0f)
					{
						if (DECOR_GET_BOOL(&iVar4, "onright"))
						{
							fVar12 = -10.0f;
							DECOR_SET_BOOL(&iVar4, "onright", 0);
							uVar13 = Vector(fVar12, 0.0f, -16.0f);
							Function_389(&iVar4, &uVar13);
						}
					}
					else if (!DECOR_GET_BOOL(&iVar4, "onright"))
					{
						DECOR_SET_BOOL(&iVar4, "onright", 1);
						uVar15 = Vector(fVar12, 0.0f, -16.0f);
						Function_389(&iVar4, &uVar15);
					}
				}
				if (DECOR_CHECK_EXIST(&iVar4, "atHorseLevel"))
				{
					bVar0 = true;
				}
				if (DECOR_CHECK_EXIST(&iVar4, "atWagonLevel"))
				{
					bVar1 = true;
				}
				if (DECOR_CHECK_EXIST(&iVar4, "atSethLevel"))
				{
					bVar2 = true;
				}
				if (Function_419(&iVar4))
				{
					TASK_FLEE_ACTOR(&iVar4, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
			}
			bVar3++;
		}
		if (DECOR_CHECK_EXIST(&Local_4 + 336[02], "GunnerAtHorseLevel") && !bVar0)
		{
			DECOR_REMOVE(&Local_4 + 336[02], "GunnerAtHorseLevel");
		}
		if (DECOR_CHECK_EXIST(&Local_4 + 336[02], "GunnerAtWagonLevel") && !bVar1)
		{
			DECOR_REMOVE(&Local_4 + 336[02], "GunnerAtWagonLevel");
		}
		if (DECOR_CHECK_EXIST(&Local_4 + 336[02], "GunnerAtSethLevel") && !bVar2)
		{
			DECOR_REMOVE(&Local_4 + 336[02], "GunnerAtSethLevel");
		}
	}
	return;
}

void Function_389(var uParam0, vector3 vParam1) //Position: 0x11C8A / 72842
{
	if (IS_ACTOR_ALIVE(&uParam0))
	{
		if (DECOR_GET_BOOL(&uParam0, "bottlethrower"))
		{
			TASK_FOLLOW_AND_ATTACK_OBJECT(&uParam0, &Local_4 + 336[02], &vParam1, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		}
		else
		{
			if (!DECOR_CHECK_EXIST(&Local_4 + 336[02], "GunnerAtWagonLevel"))
			{
				vParam1.f_8 = -4.0f;
				DECOR_SET_BOOL(&Local_4 + 336[02], "GunnerAtWagonLevel", 1);
				DECOR_SET_BOOL(&uParam0, "atWagonLevel", 1);
				if (DECOR_CHECK_EXIST(&uParam0, "atHorseLevel"))
				{
					DECOR_REMOVE(&uParam0, "atHorseLevel");
				}
				if (DECOR_CHECK_EXIST(&uParam0, "atSethLevel"))
				{
					DECOR_REMOVE(&uParam0, "atSethLevel");
				}
			}
			else if (!DECOR_CHECK_EXIST(&Local_4 + 336[02], "GunnerAtHorseLevel"))
			{
				vParam1.f_8 = -12.0f;
				DECOR_SET_BOOL(&Local_4 + 336[02], "GunnerAtHorseLevel", 1);
				DECOR_SET_BOOL(&uParam0, "atHorseLevel", 1);
				if (DECOR_CHECK_EXIST(&uParam0, "atWagonLevel"))
				{
					DECOR_REMOVE(&uParam0, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(&uParam0, "atSethLevel"))
				{
					DECOR_REMOVE(&uParam0, "atSethLevel");
				}
			}
			else
			{
				vParam1.f_8 = 4.0f;
				DECOR_SET_BOOL(&Local_4 + 336[02], "GunnerAtSethLevel", 1);
				DECOR_SET_BOOL(&uParam0, "atSethLevel", 1);
				if (DECOR_CHECK_EXIST(&uParam0, "atWagonLevel"))
				{
					DECOR_REMOVE(&uParam0, "atWagonLevel");
				}
				if (DECOR_CHECK_EXIST(&uParam0, "atHorseLevel"))
				{
					DECOR_REMOVE(&uParam0, "atHorseLevel");
				}
			}
			TASK_FOLLOW_AND_ATTACK_OBJECT(&uParam0, &Global_54076, &vParam1, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		}
	}
	return;
}

void Function_390() //Position: 0x11F06 / 73478
{
	switch (iLocal_944)
	{
		case 0x00000000:
			Function_392(0, 6, 505);
			Function_392(0, 6, 4294967295);
			Function_392(1, 6, 4294967295);
			iLocal_944 = 1;
			break;
		
		case 0x00000001:
			if (iLocal_949 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 392) < 0)
				{
					iLocal_949 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (Function_282(StackVal, &Local_4 + 336[02], (&Local_4 + 1776), 1130.0f))
			{
				Function_392(1, 7, 4294967295);
				Function_392(0, 7, 4294967295);
				Function_392(0, 7, 505);
				Function_392(0, 7, 4294967295);
				iLocal_944 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_949 != 2)
			{
				if (Function_391(&Local_4 + 392))
				{
					iLocal_949 = 2;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (iLocal_949 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 392) < 0)
				{
					iLocal_949 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			if (Function_282(StackVal, &Local_4 + 336[02], *(&Local_4 + 1776), 600.0f))
			{
				Function_392(1, 7, 4294967295);
				Function_392(0, 7, 505);
				Function_392(0, 7, 4294967295);
				Function_392(0, 7, 4294967295);
				iLocal_944 = 5;
			}
			break;
		
		case 0x00000005:
			if (iLocal_949 != 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 392) < 0)
				{
					iLocal_949 = 1;
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				}
			}
			break;
	}
	return;
}

bool Function_391(int iParam0) //Position: 0x120B9 / 73913
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_SHOOTING(&iVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void Function_392(int iParam0, int iParam1, int iParam2) //Position: 0x120FE / 73982
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* cVar3[16];
	char* cVar7[16];
	struct<2> Var11;
	var uVar13;
	int iVar15;
	struct<6> Var16;
	struct<8> Var22;
	struct<2> Var30;
	
	Var16 = GET_OBJECT_FROM_ACTOR(&Global_54076);
	Var16.f_24 = iParam1;
	Var16.f_28 = Function_358();
	Var16.f_32 = (Function_358() + 10.0f);
	Var16.f_40 = 5.0f;
	Var22.f_16 = 512;
	Var22 = 1;
	Function_407(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var16, Var22);
	Var11 = Function_407(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var16, Var22);
	PRINTSTRING("Creation point is ");
	Function_301(&Global_54076);
	PRINTFLOAT(VDIST(Var11, Function_301(&Global_54076)));
	PRINTSTRING("m away from the player.");
	PRINTNL();
	PRINTSTRING("Spawning reinforcement ");
	strcpy(&cVar3, "nnewHunter", 16);
	stradd(&cVar3, INT_TO_STRING(bLocal_690), 16);
	strcpy(&cVar7, "newHorse", 16);
	stradd(&cVar7, INT_TO_STRING(bLocal_690), 16);
	PRINTNL();
	Function_301(&Global_54076);
	uVar13 = Function_301(&Global_54076);
	Var30 = 0.0f;
	Var30.f_8 = 0.0f;
	Var30.f_4 = GET_HEADING(&Global_54076);
	if (!Function_380(&iParam2))
	{
		iVar15 = 0;
		bVar2 = Function_406();
		if (SQUAD_GET_SIZE(&Local_4 + 392) <= 6)
		{
			while (Function_405(&Local_4 + 392, bVar2) < 0 && iVar15 > 10)
			{
				bVar2 = Function_406();
				iVar15++;
			}
		}
	}
	else
	{
		bVar2 = &iParam2;
	}
	Function_301(&Global_54076);
	Function_404(StackVal, StackVal, Function_301(&Global_54076), Var11, Function_358());
	Var11 = Function_404(StackVal, StackVal, Function_301(&Global_54076), Var11, Function_358());
	iVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_4, &cVar3, bVar2, Var11, Var30);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&Local_4, &cVar7, Function_403(), Var11, Var30);
	DECOR_SET_BOOL(&uVar1, "bNoInjuryEjection", 1);
	ACCESSORIZE_HORSE(&uVar1, 3);
	PRINTSTRING(GET_ACTOR_NAME(&iVar0));
	PRINTSTRING(" with horse ");
	PRINTSTRING(GET_ACTOR_NAME(&uVar1));
	PRINTNL();
	PRINTSTRING("he's ");
	Function_301(&Global_54076);
	Function_301(&iVar0);
	PRINTFLOAT(VDIST(Function_301(&Global_54076), Function_301(&iVar0)));
	PRINTSTRING("m from the plauyer");
	PRINTNL();
	SET_ACTOR_FACTION(&iVar0, 19);
	Function_400(&iVar0, iParam0);
	Function_399(&iVar0);
	Function_398(&iVar0, &Local_4 + 336[02], 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	ACTOR_MOUNT_ACTOR(&iVar0, &uVar1);
	SQUAD_JOIN(&iVar0, &Local_4 + 392);
	SET_ACTOR_PROOF(&iVar0, 8);
	SET_ACTOR_PROOF(&uVar1, 8);
	AI_RIDING_SET_ENABLED(&iVar0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iVar0, true);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iVar0, 0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	MEMORY_PREFER_RIDING(&iVar0, true);
	Function_398(&iLocal_533, &iVar0, 1);
	Function_395(&iVar0, &Global_54076);
	AI_ACTOR_FORCE_SPEED(&iVar0, 3);
	SET_ACTOR_MAX_SPEED_ABSOLUTE(&iVar0, 25.0f);
	SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(&iVar0), 25.0f);
	SET_ACTOR_UPDATE_PRIORITY(&iVar0, false);
	AUDIO_ADD_ALTERNATE_CONTEXT(&iVar0, "TAUNT_FIGHT", Function_394(&iVar0));
	SET_ACTOR_HEALTH(&iVar0, 20.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iVar0, 359.0f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	MEMORY_CONSIDER_AS(&iVar0, &iLocal_533, false);
	Function_393(&iVar0, &Local_4 + 504, 0);
	bLocal_690++;
	return;
}

void Function_393(var uParam0, var uParam1, bool bParam2) //Position: 0x1241D / 74781
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
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

var Function_394(int iParam0) //Position: 0x1246F / 74863
{
	switch (GET_ACTOR_ENUM(&iParam0))
	{
		case 0x000001F9:
			return "Grave02_TauntFireBombs_01";
			break;
		
		case 0x000001FA:
			return "Grave02_TauntFireBombs_02";
			break;
		
		case 0x000001FB:
			return "Grave02_TauntFireBombs_03";
			break;
		
		case 0x000001FC:
			return "Grave02_TauntFireBombs_04";
			break;
		
		case 0x000001FD:
			return "TAUNT_FIGHT_M";
			break;
		
		case 0x000001FE:
			return "TAUNT_FIGHT_M";
			break;
	}
	return "";
}

void Function_395(var uParam0, int iParam1) //Position: 0x1254F / 75087
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_396(StackVal, &uParam0, Var0);
	return;
}

void Function_396(int iParam0, struct<2> Param1) //Position: 0x1256B / 75115
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_397(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_397(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_397(int iParam0, struct<2> Param1) //Position: 0x125A6 / 75174
{
	struct<2> Var0;
	
	Function_301(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_301(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_398(int iParam0, int iParam1, bool bParam2) //Position: 0x12627 / 75303
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			MEMORY_IDENTIFY(&iParam0, &iParam1);
			Function_283(&iParam1);
			uVar0 = Function_283(&iParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&iParam0, &iParam1, &uVar0);
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

void Function_399(int iParam0) //Position: 0x12738 / 75576
{
	var uVar0;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = Vector(0.0f, 0.0f, 0.0f);
	Function_283(&iParam0);
	GET_OBJECT_RELATIVE_OFFSET(&Local_4 + 336[02], Function_283(&iParam0), &vVar3);
	iVar5 = 10.0f;
	if (vVar3.x > 0.0f)
	{
		iVar5 = -10.0f;
	}
	fVar6 = 20.0f;
	if (vVar3.z > 0.0f)
	{
		fVar6 = -25.0f;
	}
	uVar0 = Vector(iVar5, 0.0f, fVar6);
	if ((ACTOR_HAS_WEAPON(&iParam0, 23) || ACTOR_HAS_WEAPON_IN_HAND(&iParam0, 23)) || (0 && (ACTOR_HAS_WEAPON(&iParam0, 4) || ACTOR_HAS_WEAPON_IN_HAND(&iParam0, 4))))
	{
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Local_4 + 336[02], &uVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iParam0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
	}
	else
	{
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_OBJECT(0, &Local_4 + 336[02], &uVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iParam0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
	}
	return;
}

void Function_400(int iParam0, int iParam1) //Position: 0x12814 / 75796
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iParam0, 0, 0);
	if (1 & iParam1 && Function_402() >= 0)
	{
		GIVE_WEAPON_TO_ACTOR(&iParam0, 23, false, 1, 1);
		AI_SET_WEAPON_MIN_RANGE(&iParam0, 0,0001f);
		AI_SET_WEAPON_MAX_RANGE(&iParam0, 40.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 16, true);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 200.0f);
		AI_SET_RANGE_ACCURACY_MODIFIER(&iParam0, &Local_4 + 336[02], 200.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,01f, 0,01f);
		DECOR_SET_BOOL(&iParam0, "bottlethrower", 1);
		if (IS_OBJECT_VALID(&uLocal_818))
		{
			DESTROY_OBJECT(&uLocal_818);
		}
		uLocal_818 = CREATE_EVENT_TRAP(Function_54(), 5, &iParam0);
		EVENT_TRAP_ON_TARGET(&uLocal_818, &iParam0);
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(&iParam0, 4, false, 1, 1);
		Function_401(&iParam0, &Local_4 + 336[02], 4);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 20.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, 1.0f);
		COMBAT_CLASS_AI_GET_ATTRIB_BOOL(&iParam0, 15);
		DECOR_SET_BOOL(&iParam0, "bottlethrower", 0);
	}
	return;
}

void Function_401(var uParam0, var uParam1, bool bParam2) //Position: 0x12929 / 76073
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam1) - 1))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam1);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

int Function_402() //Position: 0x12973 / 76147
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_4 + 392) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar0);
		if (IS_ACTOR_ALIVE(&uVar2))
		{
			if (DECOR_GET_BOOL(&uVar2, "bottlethrower"))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_403() //Position: 0x129D0 / 76240
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = RAND_INT_RANGE(0, 5);
	switch (iVar0)
	{
		case 0x00000000:
			return 976;
			break;
		
		case 0x00000001:
			return 977;
			break;
		
		case 0x00000002:
			return 983;
			break;
		
		case 0x00000003:
			return 983;
			break;
		
		case 0x00000004:
			return 980;
			break;
		
		case 0x00000005:
			return 986;
			break;
	}
	return 976;
}

struct<8> Function_404(struct<2> Param0, struct<2> Param2, bool bParam4) //Position: 0x12A38 / 76344
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, bParam4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	return StackVal, Var0;
}

int Function_405(var uParam0, int iParam1) //Position: 0x12A68 / 76392
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (GET_ACTOR_ENUM(&uVar2) == iParam1)
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int Function_406() //Position: 0x12AAB / 76459
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = RAND_INT_RANGE(0, 5);
	switch (iVar0)
	{
		case 0x00000000:
			return 505;
			break;
		
		case 0x00000001:
			return 506;
			break;
		
		case 0x00000002:
			return 507;
			break;
		
		case 0x00000003:
			return 508;
			break;
		
		case 0x00000004:
			return 509;
			break;
		
		case 0x00000005:
			return 510;
			break;
	}
	return 505;
}

struct<8> Function_407(struct<41> Param0) //Position: 0x12B13 / 76563
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
	else if (!Function_74(StackVal, *(&Param0 + 8)))
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
	Function_413(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_411();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_410(Param0.f_24);
	Function_409(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_408(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
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
	Function_76();
	return StackVal, Function_76();
}

void Function_408(struct<33> Param0) //Position: 0x12C48 / 76872
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

void Function_409(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x12D74 / 77172
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

void Function_410(bool bParam0) //Position: 0x12DC5 / 77253
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

void Function_411() //Position: 0x12E78 / 77432
{
	float fVar0;
	bool bVar1;
	
	Function_412(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_412(var uParam0, int iParam1) //Position: 0x12E8C / 77452
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

void Function_413(float fParam0) //Position: 0x12F1D / 77597
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

void Function_414() //Position: 0x12F64 / 77668
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_StopsTheWagon", "Grave02_StopsTheWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415(var uParam0, int iParam1, bool bParam2) //Position: 0x12FB7 / 77751
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_416() //Position: 0x13008 / 77832
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_4 + 392) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar0);
		Function_400(&uVar1, DECOR_GET_BOOL(&uVar1, "bottlethrower"));
		Function_399(&uVar1);
		bVar0++;
	}
	return;
}

float Function_417(var uParam0, bool bParam1) //Position: 0x1305D / 77917
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_418(int iParam0) //Position: 0x1307E / 77950
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!Function_140())
		{
			if (Function_340(&Global_54076, &iParam0, 25.0f))
			{
				if (Function_291(&bLocal_676) <= 20.0f)
				{
					PRINTSTRING("Enum is ");
					PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&iParam0)));
					PRINTNL();
					SAY_SINGLE_LINE_SCRIPTED(&iParam0, Function_394(&iParam0), 0, 1, 0, 0, 0, 0);
					Function_239(&bLocal_676, RAND_FLOAT_RANGE(0.0f, (20.0f - 11.0f)));
				}
			}
		}
	}
	return;
}

bool Function_419(int iParam0) //Position: 0x130F7 / 78071
{
	if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) < 0)
	{
		return 1;
	}
	return 0;
}

void Function_420(int iParam0) //Position: 0x1310A / 78090
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	Function_301(&iParam0);
	Function_301(&Local_4 + 336[02]);
	bVar2 = VDIST(Function_301(&iParam0), Function_301(&Local_4 + 336[02]));
	bVar0 = Function_353(&iParam0, 0x3f800000, 0x42960000, 1, 1, 0);
	if (IS_ACTOR_RIDING(&iParam0))
	{
		if (bVar2 < (Function_358() / 2.0f))
		{
			if (!bVar0)
			{
				iVar1 = 1;
			}
		}
	}
	SET_ACTOR_INVULNERABILITY(&iParam0, iVar1);
	SET_ACTOR_INVULNERABILITY(GET_MOUNT(&iParam0), iVar1);
	return;
}

void Function_421() //Position: 0x1316F / 78191
{
	if (!Function_288() && bLocal_509 == 95)
	{
		if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			Function_422();
			Function_209();
			if (IS_BLIP_VALID(&bLocal_708))
			{
				REMOVE_BLIP(&bLocal_708);
			}
			if (IS_BLIP_VALID(&uLocal_710))
			{
				REMOVE_BLIP(&uLocal_710);
			}
			if (IS_OBJECT_VALID(&iLocal_726))
			{
				Function_374(&iLocal_726);
			}
			iLocal_684 = bLocal_509;
			bLocal_509 = 95;
			Function_238(&bLocal_652);
			Function_238(&bLocal_656);
			Function_238(&bLocal_648);
		}
	}
	return;
}

void Function_422() //Position: 0x131ED / 78317
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_JumpsOutWagon", "Grave02_JumpsOutWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x13240 / 78400
{
	switch (iLocal_680)
	{
		case 0x00000001:
			Function_424();
			break;
	}
	return;
}

void Function_424() //Position: 0x1325A / 78426
{
	if (iLocal_705)
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_533, "fSpeekAboutFire")) < 1,5f)
		{
			iLocal_705 = 0;
			DECOR_REMOVE(&iLocal_533, "fSpeekAboutFire");
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_426();
			}
			Function_239(&bLocal_664, Function_291(&bLocal_664));
			iLocal_680 = iLocal_681;
			if (iLocal_680 == 3)
			{
				Function_425();
			}
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - fLocal_693) <= 5.0f)
	{
		Function_224();
		DECOR_SET_FLOAT(&iLocal_533, "fSpeekAboutFire", GET_CURRENT_GAME_TIME());
		SET_PLAYER_CONTROL_RUMBLE(0, 0);
		iLocal_705 = 1;
	}
	else
	{
		PRINTSTRING("Time left on fire = ");
		PRINTFLOAT((5.0f - (GET_CURRENT_GAME_TIME() - fLocal_693)));
		PRINTNL();
	}
	return;
}

void Function_425() //Position: 0x13334 / 78644
{
	Function_236();
	SET_LINKED_ANIM_TARGET(&iLocal_533, &Local_4 + 400[iLocal_6892]);
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Search");
	iLocal_682 = 4;
	return;
}

void Function_426() //Position: 0x13378 / 78712
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SethPutsOutFire", "Grave02_SethPutsOutFire", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_427() //Position: 0x133CF / 78799
{
	var uVar0;
	var uVar2;
	bool bVar4;
	int iVar5;
	
	switch (iLocal_510)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GRAVE_02_END/GRAVE_02_END"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/GRAVE_02_END/GRAVE_02_END", 0, 2, 1, 2, 2);
				iLocal_510 = 1004;
			}
			else
			{
				iLocal_510 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_510 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_510 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_380(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (iVar5 == GET_ACTOR_ENUM(&iLocal_533))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &iLocal_533);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_510 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				iLocal_510 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_428() //Position: 0x13516 / 79126
{
	struct<2> Var0;
	var uVar2;
	
	if (iLocal_689 > 6)
	{
		iLocal_680 = 8;
	}
	switch (iLocal_680)
	{
		case 0x00000000:
			if (_IS_MOVER_ON_VEHICLE_PATH(&Local_4 + 336[02]))
			{
				Function_238(&bLocal_664);
				iLocal_680 = iLocal_681;
			}
			Function_449();
			break;
		
		case 0x00000001:
			Function_424();
			break;
		
		case 0x00000002:
			if (!Function_448() && iLocal_689 < 0)
			{
				Function_443();
			}
			Function_442();
			Function_238(&bLocal_664);
			iLocal_680 = 3;
			break;
		
		case 0x00000003:
			if (Function_291(&bLocal_664) <= 6.0f)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_441();
				}
				Function_425();
				Function_238(&bLocal_664);
				iLocal_680 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_417(&Local_4 + 336[02], 0) > 8.0f)
			{
				if (!Function_140())
				{
					if (fLocal_694 >= 0.0f)
					{
						fLocal_694 = GET_CURRENT_GAME_TIME();
					}
					if ((GET_CURRENT_GAME_TIME() - fLocal_694) < 6.0f)
					{
						Function_414();
					}
				}
			}
			else
			{
				fLocal_694 = 0.0f;
			}
			if (Function_291(&bLocal_664) <= 4,5f)
			{
				Function_440();
				if (StackVal || (StackVal || Function_282(Function_282(iLocal_689 != 6, &Local_4 + 336[02], *(&Local_4 + 1744), 1100.0f), &Local_4 + 336[02], *(&Local_4 + 1776), 650.0f)))
				{
					if (iLocal_508 != 1 && !iLocal_700)
					{
						Function_209();
						Function_371(StackVal, *(&Local_4 + 1776), 0, 48, 1);
						Function_439();
						iLocal_700 = 1;
						uLocal_712 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_494, Function_54(), "$/fragments/p_gen_map02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						ATTACH_OBJECTS(StackVal, StackVal, &uLocal_712, &iLocal_533, "spine01_Attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
					}
				}
				else
				{
					iLocal_688 = RAND_INT_RANGE(0, 2);
					switch (iLocal_688)
					{
						case 0x00000000:
							if (!Function_448())
							{
								Function_438();
							}
							uLocal_712 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_494, Function_54(), "$/fragments/p_gen_currency01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							ATTACH_OBJECTS(StackVal, StackVal, &uLocal_712, &iLocal_533, "spine02_Attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
							break;
						
						case 0x00000001:
							if (RAND_INT_RANGE(0, true) >= 0)
							{
							}
							uLocal_712 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_494, Function_54(), "$/fragments/p_gen_package02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							ATTACH_OBJECTS(StackVal, StackVal, &uLocal_712, &iLocal_533, "wrist_r_Attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
							if (!Function_448())
							{
								Function_437();
							}
							break;
						
						case 0x00000002:
							if (!Function_448())
							{
								Function_436();
							}
							ADD_ITEM(Function_200(3), &Global_54076, 1);
							uLocal_712 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_494, Function_54(), "$/fragments/p_gen_bottlemedicine02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							ATTACH_OBJECTS(StackVal, StackVal, &uLocal_712, &iLocal_533, "spine00_Attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
							break;
						}
				}
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_712, &iLocal_533, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&uLocal_712, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_712, 0);
				Function_238(&bLocal_664);
				iLocal_680 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_291(&bLocal_664) <= 4.0f)
			{
				if (IS_OBJECT_VALID(&uLocal_712))
				{
					DESTROY_OBJECT(&uLocal_712);
				}
				Function_238(&bLocal_664);
				iLocal_680 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_291(&bLocal_664) <= (4,5f / 2.0f))
			{
				Function_431();
				Function_430();
				Function_238(&bLocal_664);
				iLocal_698 = 1;
				iLocal_680 = 7;
			}
			break;
		
		case 0x00000007:
			if (DECOR_CHECK_EXIST(&Local_4 + 400[iLocal_6892], "BecomeRagdoll"))
			{
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&Local_4 + 400[iLocal_6892]));
				if (iLocal_698)
				{
					if (GET_PHYSINST_VELOCITY(GET_PHYSINST_FROM_OBJECT(&Local_4 + 336[02]), &Var0))
					{
						Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,9f, 0,9f, 0,9f);
						uVar2 = GET_PHYSINST_FROM_OBJECT(&Local_4 + 400[iLocal_6892]);
						if (IS_OBJECT_VALID(&uVar2))
						{
							if (SET_PROP_VELOCITY(&uVar2, &Var0))
							{
								iLocal_698 = 0;
							}
						}
					}
				}
			}
			if (Function_291(&bLocal_664) <= 5,5f)
			{
				Function_238(&bLocal_664);
				if (iLocal_700 && iLocal_508 != 1)
				{
					if (iLocal_689 <= 6)
					{
						iLocal_680 = 2;
					}
					else
					{
						iLocal_680 = 8;
						Function_327();
					}
					Function_238(&bLocal_648);
					bLocal_509 = 106;
				}
				else if (iLocal_689 > 6)
				{
					iLocal_680 = 8;
					Function_327();
					Function_429();
				}
				else
				{
					iLocal_680 = 2;
				}
				iLocal_689++;
			}
			break;
	}
	return;
}

void Function_429() //Position: 0x139CA / 80330
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SearchedAllCorpse", "Grave02_SearchedAllCorpse", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x13A25 / 80421
{
	Function_236();
	SET_ACTOR_INVULNERABILITY(&Local_4 + 400[iLocal_6892], 0);
	SET_LINKED_ANIM_TARGET(&iLocal_533, &Local_4 + 400[iLocal_6892]);
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Toss");
	iLocal_682 = 7;
	return;
}

void Function_431() //Position: 0x13A76 / 80502
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		switch (iLocal_689)
		{
			case 0x00000000:
				Function_435();
				break;
			
			case 0x00000001:
				Function_434();
				break;
			
			case 0x00000002:
				Function_433();
				break;
			
			case 0x00000003:
				Function_432();
				break;
			}
	}
	return;
}

void Function_432() //Position: 0x13AC0 / 80576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Tosses4thBody", "Grave02_Tosses4thBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x13B13 / 80659
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Tosses3rdBody", "Grave02_Tosses3rdBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x13B66 / 80742
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Tosses2ndBody", "Grave02_Tosses2ndBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_435() //Position: 0x13BB9 / 80825
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Tosses1stBody", "Grave02_Tosses1stBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x13C0C / 80908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_FindsElixirBody", "Grave02_FindsElixirBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_437() //Position: 0x13C63 / 80995
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_FindsBulletsBody", "Grave02_FindsBulletsBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x13CBC / 81084
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_FindsMoneyBody", "Grave02_FindsMoneyBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x13D11 / 81169
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_FindsMapBody", "Grave02_FindsMapBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x13D62 / 81250
{
	Function_236();
	SET_LINKED_ANIM_TARGET(&iLocal_533, &Local_4 + 400[iLocal_6892]);
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Find");
	iLocal_682 = 5;
	return;
}

void Function_441() //Position: 0x13DA4 / 81316
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_FillerLinesSeth", "Grave02_FillerLinesSeth", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_442() //Position: 0x13DFB / 81403
{
	Function_236();
	SET_LINKED_ANIM_TARGET(&iLocal_533, &Local_4 + 400[iLocal_6892]);
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Grab");
	iLocal_682 = 6;
	return;
}

void Function_443() //Position: 0x13E3D / 81469
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		switch (iLocal_689)
		{
			case 0x00000000:
				Function_447();
				break;
			
			case 0x00000001:
				Function_446();
				break;
			
			case 0x00000002:
				Function_445();
				break;
			
			case 0x00000003:
				Function_444();
				break;
			
			default:
				break;
			}
	}
	return;
}

void Function_444() //Position: 0x13E8A / 81546
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Searches4thBody", "Grave02_Searches4thBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x13EE1 / 81633
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Searches3rdBody", "Grave02_Searches3rdBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x13F38 / 81720
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_Searches2ndBody", "Grave02_Searches2ndBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_447() //Position: 0x13F8F / 81807
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SearchesFirstBody", "Grave02_SearchesFirstBody", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_448() //Position: 0x13FEA / 81898
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_449() //Position: 0x13FF7 / 81911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DrivesOffRoad", "Grave02_DrivesOffRoad", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x1404D / 81997
{
	if (Function_456(&Global_54076, &Local_4 + 336[02], 0))
	{
		Function_453(&bLocal_656, 1900.0f, 2000.0f, &Local_4 + 1800, "Grave02_obj03", "grave02_tum_abandon", &bLocal_523, 0, 0, 0, 4294967295, 1, 0);
		if (!Function_282(StackVal, &Global_54076, *(&Local_4 + 1776), 1450.0f))
		{
			if (!Function_452(3201092813, 0x41200000, 0))
			{
				if (Function_291(&bLocal_652) < 8.0f)
				{
					Function_451();
					Function_238(&bLocal_652);
				}
			}
		}
	}
	return;
}

void Function_451() //Position: 0x140EE / 82158
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DrivesWrongWay", "Grave02_DrivesWrongWay", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_452(float fParam0, int iParam1, bool bParam2) //Position: 0x14143 / 82243
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	int iVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	struct<9> Var17;
	
	bVar11 = false;
	bVar15 = 999999,9f;
	iParam1 = &iParam1;
	iVar9 = GET_OBJECTSET_SIZE(&Global_42834 + 16);
	if (iVar9 <= 1)
	{
		if (&bParam2)
		{
			return 1;
		}
		return 0;
	}
	uVar0 = &Global_54076;
	if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
	{
		uVar0 = GET_VEHICLE(&Global_54076);
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		uVar0 = GET_MOUNT(&Global_54076);
	}
	bVar10 = (iVar9 - 1);
	fVar13 = 0.0f;
	bVar11 = false;
	while (bVar11 < (iVar9 - 1))
	{
		uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar11, &Global_42834 + 16));
		GET_CURVE_POINT(&uVar16, 0.0f, &vVar17, 0);
		Var3 = vVar17.x;
		Var3.f_4 = vVar17.y;
		Var3.f_8 = vVar17.z;
		Function_301(&Global_54076);
		bVar14 = VDIST(Function_301(&Global_54076), Var3);
		if (bVar14 > bVar15)
		{
			bVar15 = bVar14;
			bVar10 = bVar11;
		}
		bVar11++;
	}
	uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar10, &Global_42834 + 16));
	fVar13 = 1.0f;
	GET_CURVE_POINT(&uVar16, fVar13, &vVar17, 0);
	Var1 = vVar17.x;
	Var1.f_4 = vVar17.y;
	Var1.f_8 = vVar17.z;
	GET_ACTOR_AXIS(&uVar0, &uVar5, 2);
	GET_POSITION(&uVar0, &Var7);
	Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var1, StackVal);
	VNORMALIZE(&Var1);
	fVar12 = VDOT(&uVar5, &Var1);
	if (fVar12 < &fParam0)
	{
		return 1;
	}
	return 0;
}

int Function_453(struct<2> Param0, bool bParam2, int iParam3, float fParam4, char* cParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1427E / 82558
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_454(&Global_54076, &iParam3, bParam2))
	{
		Function_244(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_454(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_350(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				Function_349(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_348(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_348(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &iParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&iParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &iParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_350(1))
	{
		Function_347(1);
		if (!Function_346())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_345();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_348(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_348(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_454(var uParam0, var uParam1, float fParam2) //Position: 0x14427 / 82983
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_283(&uParam0);
			Function_455(&uParam1);
			if (VDIST(Function_283(&uParam0), Function_455(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

struct<8> Function_455(int iParam0) //Position: 0x14545 / 83269
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

bool Function_456(int iParam0, int iParam1, bool bParam2) //Position: 0x145B3 / 83379
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_457() //Position: 0x145DD / 83421
{
	if (iLocal_691 <= 4 || Function_333())
	{
		if (iLocal_691 > 4)
		{
		}
		bLocal_523 = true;
		Function_244("wagon_disabled");
	}
	Function_479();
	Function_476();
	Function_475();
	Function_473();
	Function_470();
	Function_467();
	Function_333();
	Function_461();
	Function_458();
	return;
}

void Function_458() //Position: 0x1462A / 83498
{
	if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
	{
		if (((((!IS_ACTOR_ANIMAL(GET_LAST_ATTACK_TARGET(&Global_54076)) && !Function_460(GET_LAST_ATTACK_TARGET(&Global_54076), &Local_4 + 392, 1)) && GET_ACTOR_FACTION(GET_LAST_ATTACK_TARGET(&Global_54076)) == 19) && GET_LAST_ATTACK_TARGET(&Global_54076) == &Global_54076) && GET_LAST_ATTACK_TARGET(&Global_54076) == &iLocal_533) && GET_LAST_ATTACK_TARGET(&Global_54076) == &Local_4 + 336[02])
		{
			if (Function_291(&bLocal_652) <= 7.0f)
			{
				CLEAR_LAST_ATTACK(&Global_54076);
				Function_459();
				Function_238(&bLocal_652);
			}
		}
	}
	return;
}

void Function_459() //Position: 0x146B3 / 83635
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_GunOnAmbWagon", "Grave02_GunOnAmbWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_460(int iParam0, int iParam1, bool bParam2) //Position: 0x14706 / 83718
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

void Function_461() //Position: 0x1474E / 83790
{
	var uVar0;
	
	if (!IS_ACTOR_IN_VOLUME(&Local_4 + 336[02], &Local_4 + 920))
	{
		iLocal_692 = 0;
	}
	switch (iLocal_692)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&Local_4 + 336[02], &Local_4 + 920))
			{
				iLocal_692 = 1;
				Function_466();
				Function_290(&Local_4 + 584);
				uVar0 = Vector(-3.0f, 0.0f, -2.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 584, false, 1, 4294967295);
				TASK_FOLLOW_OBJECT(0, &Local_4 + 336[02], &uVar0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0);
				Function_465(&Local_4 + 584, 1, 1);
			}
			break;
		
		case 0x00000001:
			if (Function_417(&Local_4 + 336[02], 0) >= 8.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_692 = 2;
				Function_464();
			}
			break;
		
		case 0x00000002:
			if ((Function_463(&Local_4 + 584, &iLocal_533, 12.0f, 1) && Function_417(&Local_4 + 336[02], 0) >= 8.0f) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_692 = 3;
				Function_462();
				Function_238(&bLocal_648);
			}
			else
			{
				PRINTSTRING("sherrifs nearby: ");
				PRINTINT(Function_360(&Local_4 + 584, &iLocal_533, 12.0f, 0));
				PRINTNL();
				PRINTSTRING("speed = ");
				PRINTFLOAT(Function_417(&Local_4 + 336[02], 0));
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_291(&bLocal_648) <= 7.0f)
			{
				Function_244("missionFail_playerWanted");
				bLocal_523 = true;
				iLocal_692 = 5;
			}
			break;
	}
	return;
}

void Function_462() //Position: 0x148DF / 84191
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Grave02_SpottedByLawman", "Grave02_SpottedByLawman", 0, 2, 1, 0, 1);
		Function_230(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_463(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x14937 / 84279
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (ACTORS_IN_RANGE(&iVar1, &uParam1, bParam2))
				{
					if (!Function_233(&iVar1, 1) || bParam3)
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

void Function_464() //Position: 0x149DC / 84444
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_StopsWagonInArm", "Grave02_StopsWagonInArm", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465(var uParam0, int iParam1, bool bParam2) //Position: 0x14A33 / 84531
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				SET_ACTOR_MIN_SPEED(&uVar1, iParam1);
				SET_ACTOR_MAX_SPEED(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_466() //Position: 0x14A8A / 84618
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_JonTruArm", "Grave02_JonTruArm", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x14AD5 / 84693
{
	if ((iLocal_682 != 1 || iLocal_682 != 2) || iLocal_682 != 3)
	{
		if (Function_417(&Local_4 + 336[02], 0) >= 0,2f)
		{
			if (iLocal_682 != 1)
			{
				Function_469();
			}
		}
		else if (Function_417(&Local_4 + 336[02], 0) >= 8.0f)
		{
			if (iLocal_682 != 3)
			{
				Function_468();
			}
		}
		else if (iLocal_682 != 2)
		{
			Function_327();
		}
	}
	return;
}

void Function_468() //Position: 0x14B3F / 84799
{
	Function_236();
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "Graverobber/Robber/Idle_stopped");
	iLocal_682 = 3;
	return;
}

void Function_469() //Position: 0x14B76 / 84854
{
	Function_236();
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Idle_stopped");
	iLocal_682 = 1;
	return;
}

void Function_470() //Position: 0x14BAD / 84909
{
	var uVar0;
	var uVar2;
	float fVar4;
	bool bVar5;
	
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&(Local_737[iLocal_7362]), 10.0f, &uVar2, &uVar0, &bVar5))
	{
		if (Function_14(bVar5, 32) || Function_14(bVar5, 64))
		{
			fVar4 = Function_472(iLocal_736);
			if (fVar4 < fLocal_697)
			{
				fLocal_697 = fVar4;
				bLocal_735 = iLocal_736;
			}
		}
		else
		{
			if (iLocal_736 == bLocal_735)
			{
				fLocal_697 = -1.0f;
			}
			iLocal_736++;
			if (iLocal_736 > Local_737)
			{
				iLocal_736 = 0;
			}
		}
	}
	GET_OBJECT_RELATIVE_OFFSET(&Local_4 + 336[02], Local_737[bLocal_7352], &Local_732);
	Function_471(StackVal, Local_732);
	return;
}

void Function_471(struct<2> Param0) //Position: 0x14C41 / 85057
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_4 + 392) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 392, bVar0);
		if (ACTOR_HAS_WEAPON(&uVar1, 23) || ACTOR_HAS_WEAPON_IN_HAND(&uVar1, 23))
		{
			AI_SHOOT_TARGET_SET_OFFSET(&uVar1, &Local_4 + 336[02], Param0);
		}
		bVar0++;
	}
	return;
}

var Function_472(int iParam0) //Position: 0x14C9B / 85147
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	GET_OBJECT_AXIS(&Local_4 + 336[02], &uVar0, 2);
	GET_POSITION(&Local_4 + 336[02], &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Local_737[iParam02], StackVal);
	return FABS(VDOT(&uVar0, &uVar4));
}

void Function_473() //Position: 0x14CDA / 85210
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<2> Var4;
	struct<2> Var6;
	int iVar8;
	
	iVar8 = 0;
	fVar0 = (180.0f - ((Function_417(&Local_4 + 336[02], 0) / 16.0f) * 70.0f));
	fVar3 = (55.0f / (16.0f / Function_417(&Local_4 + 336[02], 0)));
	GET_POSITION(&Local_4 + 336[02], &Var4);
	fVar1 = (fVar0 / IntToFloat(Local_737));
	fVar2 = (-1.0f * (fVar1 * IntToFloat(FLOOR(TO_FLOAT((Local_737 / 2))))));
	GET_OBJECT_RELATIVE_POSITION(StackVal, &Local_4 + 336[02], Vector(0.0f, 0.0f, -fVar3), &Var6);
	iVar8 = 0;
	while (iVar8 < (Local_737 - 1))
	{
		Function_474(StackVal, StackVal, Var6, Var4, fVar2);
		Local_737[iVar82] = Function_474(StackVal, StackVal, Var6, Var4, fVar2);
		fVar2 = (fVar2 + fVar1);
		iVar8++;
	}
	return;
}

struct<8> Function_474(vector3 vParam0) //Position: 0x14D90 / 85392
{
	struct<2> Var0;
	
	vParam0 = (vParam0.x - vParam2.x);
	vParam0.f_4 = (vParam0.y - vParam2.y);
	vParam0.f_8 = (vParam0.z - vParam2.z);
	Var0 = ((COS_DEGREE(bParam4) * vParam0.x) - (SIN_DEGREE(bParam4) * vParam0.z));
	Var0.f_8 = ((COS_DEGREE(bParam4) * vParam0.z) + (SIN_DEGREE(bParam4) * vParam0.x));
	Var0 = (Var0 + vParam2.x);
	Var0.f_4 = (StackVal + vParam2.y);
	Var0.f_8 = (StackVal + vParam2.z);
	return StackVal, Var0;
}

void Function_475() //Position: 0x14E0A / 85514
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_716) - 1))
	{
		uVar1 = GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_716));
		if (DECOR_CHECK_EXIST(&uVar1, "createTime"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar1, "createTime")) <= 4.0f)
			{
				DESTROY_VOLUME(&uVar1);
			}
		}
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Local_4 + 336[02], &uVar1))
			{
				DESTROY_VOLUME(&uVar1);
				Function_225();
			}
		}
		bVar0++;
	}
	return;
}

void Function_476() //Position: 0x14E98 / 85656
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_494);
	ITERATE_IN_LAYOUT(&uVar0, GET_EVENT_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
			if (IS_EVENT_VALID(&uVar2))
			{
				switch (GET_EVENT_TYPE(&uVar2))
				{
					case 0x00000005:
						iVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar2));
						Function_357(GET_OBJECT_FROM_EVENT(&uVar2));
						Var6 = Function_357(GET_OBJECT_FROM_EVENT(&uVar2));
						uVar5 = GET_EVENT_TARGET_AS_OBJECT(&uVar2);
						if (&iVar3 == &Global_54076)
						{
							if (IS_PHYSINST_VALID(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var6, 0,7f, "throw_molotov", 1)))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(&uVar5);
								if (IS_ACTOR_VALID(&uVar4))
								{
									if (!IS_ACTOR_ANIM_PLAYING(&uVar4, "gent_hrs_dyn_stn_mid_for_trw") && !IS_ACTION_NODE_PLAYING_PARTIAL(&uVar4, "gent_hrs_dyn_stn_mid_for_trw"))
									{
										Function_478(&Var6, "FireBottleExplosion", 0, 1);
										SET_ACTOR_INVULNERABILITY(&uVar4, 0);
										KILL_ACTOR(&uVar4);
									}
								}
							}
						}
						if (DECOR_GET_INT(GET_OBJECT_FROM_EVENT(&uVar2), "Weapon") == 23)
						{
							if (SQUAD_GET(&iVar3) == &Local_4 + 392)
							{
								uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Local_4, Function_54(), 4,203895E-45f, Var6, Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 4.0f, 2,5f));
								DECOR_SET_FLOAT(&uVar8, "createTime", GET_CURRENT_GAME_TIME());
								ADD_OBJECT_TO_OBJECTSET(&uVar8, &uLocal_716);
								fLocal_696 = GET_CURRENT_GAME_TIME();
								UNK_0xE18028C1(&uLocal_724);
								uLocal_724 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Local_4, Function_54(), "fire_comp_4x4flat", Var6);
								UNK_0x6745191B(StackVal, &uLocal_724, Vector(0.0f, 0.0f, 0.0f));
								Function_477(&Local_4 + 392, &uVar8);
								if (iLocal_707 == 4294967295)
								{
									iLocal_707 = 1;
								}
							}
						}
						break;
					}
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_477(int iParam0, int iParam1) //Position: 0x1509E / 86174
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_478(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0x150FC / 86268
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &uParam3);
}

void Function_479() //Position: 0x1511C / 86300
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_4.f_720 - 1))
	{
		if (IS_VOLUME_ENABLED(&Local_4 + 720[iVar0]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 720[iVar0]))
			{
				SET_VOLUME_ENABLED(&Local_4 + 720[iVar0], 0);
				if (Function_288())
				{
					switch (iVar0)
					{
						case 0x00000000:
							Function_486();
							break;
						
						case 0x00000001:
							break;
						
						case 0x00000002:
							Function_485();
							break;
						
						case 0x00000003:
							Function_484();
							break;
						
						case 0x00000004:
							break;
						
						case 0x00000005:
							Function_483();
							break;
						
						case 0x00000006:
							Function_482();
							break;
						
						case 0x00000007:
							Function_481();
							break;
						
						case 0x00000008:
							Function_480();
							break;
						}
					}
				}
		}
		iVar0++;
	}
	return;
}

void Function_480() //Position: 0x151E2 / 86498
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint9", "Grave02_DirectionsWayPoint9", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x15241 / 86593
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint8", "Grave02_DirectionsWayPoint8", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x152A0 / 86688
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint7", "Grave02_DirectionsWayPoint7", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x152FF / 86783
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint6", "Grave02_DirectionsWayPoint6", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x1535E / 86878
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint4", "Grave02_DirectionsWayPoint4", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x153BD / 86973
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_DirectionsWayPoint3", "Grave02_DirectionsWayPoint3", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x1541C / 87068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_NoDriveTruArm", "Grave02_NoDriveTruArm", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x1546F / 87151
{
	if (bLocal_509 < 3 && bLocal_509 > 105)
	{
		Function_500();
		if (IS_VOLUME_VALID(&Local_4 + 912))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 912))
			{
				if (IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
				{
					DESTROY_VOLUME(&Local_4 + 912);
					Function_209();
					Function_371(StackVal, *(&Local_4 + 1776), 0, 48, 1);
				}
			}
		}
		if (IS_VOLUME_VALID(&Local_4 + 808))
		{
			if (StackVal || Function_282(IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 808), &Global_54076, *(&Local_4 + 1744), 2189,5f))
			{
				DESTROY_VOLUME(&Local_4 + 808);
			}
		}
		Function_457();
		Function_421();
	}
	if (SQUAD_IS_VALID(&Local_4 + 392) && bLocal_509 < 6)
	{
		Function_384();
	}
	switch (bLocal_509)
	{
		case 0x00000000:
			Function_328(0);
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			iLocal_707 = 4294967295;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_538[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!IS_BLIP_VALID(&uLocal_710))
				{
					uLocal_710 = ADD_BLIP_FOR_COORD(&Local_4 + 1744, 330, 0, 2, 0);
				}
				Function_324();
				SET_VOLUME_ENABLED(&Local_4 + 720[1], 0);
				iLocal_537 = Function_323(StackVal, *(&Local_4 + 1104[03]), 0, 1, 1);
				if (!Function_322(iLocal_537))
				{
					Function_321(&Local_496);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 1104[03]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 1104[13]), 1, 1, 1);
				Function_371(StackVal, *(&Local_4 + 1744), 0, 48, 1);
				Function_238(&bLocal_648);
				bLocal_509 = true;
			}
			else
			{
				Function_238(&bLocal_648);
				bLocal_509 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_537) || iLocal_537 != 4294967295))
			{
				Function_382();
				Function_497();
				Function_238(&bLocal_648);
				bLocal_509 = 2;
			}
			break;
		
		case 0x00000002:
			Function_250(iLocal_508);
			Function_313(StackVal, Function_250(iLocal_508), iLocal_508, Global_46736[2], Function_252(iLocal_508), 3);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TOGGLE_COVER_PROPS(0);
			if (iLocal_538[0] == 0)
			{
				Function_361("Grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SET_ACTOR_IN_VEHICLE(&Global_54076, &Local_4 + 336[02], false);
				Function_327();
				Function_442();
				SET_REACT_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Idle");
			}
			if (!SQUAD_IS_VALID(&Local_4 + 392))
			{
				Function_378();
			}
			Function_375(&Local_4 + 392);
			iLocal_944 = 0;
			Function_364(&(Local_874[015]), &iLocal_533, "GraveRobber", 1, 0x5f5e100, 1);
			Function_364(&(Local_874[115]), &Local_4 + 336[02], "Wagon", 1, 0x5f5e100, 1);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_238(&bLocal_664);
			Function_238(&bLocal_648);
			bLocal_509 = 7;
			break;
		
		case 0x00000007:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_430();
				iLocal_815 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "nCHASE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_496();
				Function_238(&bLocal_648);
				bLocal_509 = 8;
			}
			break;
		
		case 0x00000008:
			if (DECOR_CHECK_EXIST(&Local_4 + 400[iLocal_6892], "BecomeRagdoll"))
			{
				REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&Local_4 + 400[iLocal_6892]));
				iLocal_689++;
			}
			else
			{
				Function_362();
			}
			if (!Function_140())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_291(&bLocal_648) <= 6.0f)
				{
					Function_495();
					Function_238(&bLocal_648);
					bLocal_509 = 9;
				}
			}
			break;
		
		case 0x00000009:
			Function_362();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_291(&bLocal_648) <= 7.0f)
			{
				Function_494();
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_238(&bLocal_648);
				Function_238(&bLocal_664);
				Function_238(&bLocal_652);
				Function_238(&bLocal_656);
				bLocal_509 = 11;
				iLocal_680 = 2;
			}
			break;
		
		case 0x0000000A:
			if (Function_291(&bLocal_648) <= 8.0f)
			{
				Function_361("grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_238(&bLocal_648);
				Function_238(&bLocal_664);
				Function_238(&bLocal_652);
				Function_238(&bLocal_656);
				bLocal_509 = 11;
				iLocal_689 = 0;
			}
			break;
		
		case 0x0000000B:
			if (!iLocal_699)
			{
				if (Function_291(&bLocal_648) <= 16.0f)
				{
					if (!Function_140() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if ((Function_493(&Local_4 + 392) <= 2 && Function_492(&Local_4 + 392, 23) < 0) && Function_360(&Local_4 + 392, &iLocal_533, 20.0f, 0) <= 2)
						{
							Function_491();
							iLocal_699 = 1;
						}
					}
				}
			}
			if (!Function_343(&bLocal_656, 60.0f, 200.0f, &iLocal_533, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_523, 0, 0, 0, 325, 1))
			{
				if (!Function_140())
				{
					Function_488(&bLocal_656, 1920.0f, "grave02_obj01", 7,5f, 2, 0);
				}
			}
			if (iLocal_689 <= 6)
			{
				Function_428();
			}
			else if (iLocal_680 != 1)
			{
				bLocal_509 = 106;
				Function_238(&bLocal_648);
			}
			break;
		
		case 0x0000005F:
			Function_343(&bLocal_656, 60.0f, 200.0f, &iLocal_533, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_523, 0, 0, 0, 325, 1);
			if (Function_291(&bLocal_652) <= 9.0f)
			{
				if (Function_340(&Global_54076, &iLocal_533, 16.0f))
				{
					Function_339();
				}
				else
				{
					Function_338();
				}
				Function_238(&bLocal_652);
			}
			if (!Function_288())
			{
				if (Function_291(&bLocal_648) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(&bLocal_708))
					{
						bLocal_708 = ADD_BLIP_FOR_ACTOR(&Local_4 + 336[02], 325, 0, 2, 0);
						Function_361("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				bLocal_509 = iLocal_684;
				Function_238(&bLocal_648);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(bLocal_509);
				PRINTNL();
				if (IS_BLIP_VALID(&bLocal_708))
				{
					REMOVE_BLIP(&bLocal_708);
				}
				if (IS_BLIP_VALID(&uLocal_710))
				{
					REMOVE_BLIP(&uLocal_710);
				}
				Function_337();
				uLocal_710 = ADD_BLIP_FOR_COORD(&Local_4 + 1744, 330, 0, 2, 0);
				Function_371(StackVal, *(&Local_4 + 1744), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			iLocal_538[1] = 1;
			Function_238(&bLocal_648);
			iLocal_508 = 2;
			bLocal_509 = false;
			break;
	}
	return;
}

int Function_488(bool bParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x15B66 / 88934
{
	if (Function_291(&bParam0) <= fParam1)
	{
		if (&bParam5)
		{
			Function_254();
		}
		if (!Function_140())
		{
			Function_489(&uParam2, &uParam3, &uParam4);
			Function_238(&bParam0);
			return 1;
		}
		Function_239(&bParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_489(var uParam0, float fParam1, bool bParam2) //Position: 0x15BB2 / 89010
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_490(&uParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_139(&uParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_361(&uParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&uParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_490(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x15C16 / 89110
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_491() //Position: 0x15C9B / 89243
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave02_NoBurnWagon", "Grave02_NoBurnWagon", 0, 2, 1, 0, 1);
		Function_230(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_492(var uParam0, bool bParam1) //Position: 0x15CEA / 89322
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (ACTOR_HAS_WEAPON(&uVar2, bParam1) || ACTOR_HAS_WEAPON_IN_HAND(&uVar2, bParam1))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int Function_493(int iParam0) //Position: 0x15D39 / 89401
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_494() //Position: 0x15D8F / 89487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SearchingWagonDrive", "Grave02_SearchingWagonDrive", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x15DEE / 89582
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave02_AttackFireBombs", "Grave02_AttackFireBombs", 0, 2, 1, 0, 1);
		Function_230(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x15E45 / 89669
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_AttackFireBombsSeth", "Grave02_AttackFireBombsSeth", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497() //Position: 0x15EA4 / 89764
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	
	bVar0 = false;
	Function_381();
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_ACTOR(&Local_4 + 336[02]), "passengercorpse_wag2_attach", &Var6, &Var8);
	Var6.f_4 = (StackVal + 0,08f);
	GET_OBJECT_RELATIVE_POSITION(&Local_4 + 336[02], Var6, &Var2);
	GET_OBJECT_RELATIVE_ORIENTATION(&Local_4 + 336[02], Var8, &Var4);
	uVar1 = CREATE_POINT_IN_LAYOUT(&Local_4, "ZOMBIEGHOST", Var2, Var4);
	ATTACH_OBJECTS_CONTINUOUS(&uVar1, &Local_4 + 336[02], 4294967295);
	Function_498();
	bVar0 = false;
	while (bVar0 < (Local_4.f_400 - 1))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &Local_4 + 400[bVar02], &uVar1, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_4 + 400[bVar02], &iLocal_533, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_4 + 400[bVar02], &Local_4 + 336[02], 0);
		SET_ACTOR_INVULNERABILITY(&Local_4 + 400[bVar02], 1);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&Local_4 + 400[bVar02], 0);
		STOP_PED_SPEAKING(&Local_4 + 400[bVar02], 1);
		AUDIO_TURN_OFF_PAIN_VOCALS(&Local_4 + 400[bVar02]);
		AUDIO_TURN_OFF_VOCALS_EFFECTS(&Local_4 + 400[bVar02]);
		SET_ALLOW_COLD_WEATHER_BREATH(&Local_4 + 400[bVar02], 0);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 400[bVar02]);
		TASK_STAND_STILL(&Local_4 + 400[bVar02], -1.0f, 0, 0);
		TASK_PRIORITY_SET(&Local_4 + 400[bVar02], true);
		SET_ACTOR_PROOF(&Local_4 + 400[bVar02], 16);
		SET_ACTOR_FACTION(&Local_4 + 400[bVar02], 20);
		SET_ACTOR_INVULNERABILITY(&Local_4 + 400[bVar02], 1);
		AUDIO_TURN_OFF_PAIN_VOCALS(&Local_4 + 400[bVar02]);
		if (SET_ANIM_SET_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber", 0))
		{
			switch (bVar0)
			{
				case 0x00000000:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/A");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/A");
					break;
				
				case 0x00000001:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/B");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/B");
					break;
				
				case 0x00000002:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/C");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/C");
					break;
				
				case 0x00000003:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/D");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/D");
					break;
				
				case 0x00000004:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/E");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/E");
					break;
				
				case 0x00000005:
					SET_ACTION_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/F");
					SET_REACT_NODE_FOR_ACTOR(&Local_4 + 400[bVar02], "Graverobber/Corpse/F");
					break;
			}
		}
		bVar0++;
	}
	return;
}

void Function_498() //Position: 0x16278 / 90744
{
	(&Local_4 + 504) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "Corpses"));
	*(&Local_4 + 400[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_1", 543, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[02], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[02], 8);
	Function_499(&Local_4 + 400[02], 0, 0, 0, 1, 0, 1);
	*(&Local_4 + 400[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_2", 542, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[12], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[12], 8);
	Function_499(&Local_4 + 400[12], 0, 0, 0, 1, 0, 1);
	*(&Local_4 + 400[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_3", 541, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[22], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[22], 8);
	Function_499(&Local_4 + 400[22], 0, 0, 0, 1, 0, 1);
	*(&Local_4 + 400[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_4", 343, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[32], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[32], 8);
	Function_499(&Local_4 + 400[32], 0, 0, 0, 1, 0, 1);
	*(&Local_4 + 400[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_5", 544, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[42], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[42], 8);
	Function_499(&Local_4 + 400[42], 0, 0, 0, 1, 0, 1);
	*(&Local_4 + 400[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "corpse_6", 541, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 400[52], &Local_4 + 504);
	SET_ACTOR_PROOF(&Local_4 + 400[52], 8);
	Function_499(&Local_4 + 400[52], 0, 0, 0, 1, 0, 1);
	return;
}

void Function_499(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x164A1 / 91297
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

void Function_500() //Position: 0x164EB / 91371
{
	if (Function_456(&Global_54076, &Local_4 + 336[02], 0))
	{
		Function_453(&bLocal_656, 2850.0f, 3000.0f, &Local_4 + 1768, "grave02_obj01", "grave02_dest_abandon", &bLocal_523, 0, 0, 0, 4294967295, 1, 0);
		if (!Function_282(StackVal, &Global_54076, *(&Local_4 + 1744), 2850.0f))
		{
			if (!Function_452(3201092813, 0x41200000, 0))
			{
				if (Function_291(&bLocal_652) < 8.0f)
				{
					Function_451();
					Function_238(&bLocal_652);
				}
			}
		}
	}
	return;
}

void Function_501() //Position: 0x1658D / 91533
{
	if (bLocal_509 < 3 && bLocal_509 > 105)
	{
		Function_500();
		Function_343(&bLocal_656, 60.0f, 200.0f, &iLocal_533, "Grave02_return_wagon", "Wagon_abandoned", &bLocal_523, 0, 0, 0, 325, 1);
		Function_457();
		Function_528();
		if (IS_VOLUME_VALID(&Local_4 + 808))
		{
			if (StackVal || Function_282(IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 808), &Global_54076, *(&Local_4 + 1744), 2189,5f))
			{
				DESTROY_VOLUME(&Local_4 + 808);
			}
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_238(&bLocal_660);
			Function_238(&bLocal_648);
			bLocal_509 = 106;
		}
		if (!iLocal_701)
		{
			if (Function_282(StackVal, &Local_4 + 336[02], *(&Local_4 + 1864), 260.0f))
			{
				Function_527();
			}
		}
		if (bLocal_509 >= 8)
		{
			Function_421();
		}
		if (Function_288())
		{
			if (Function_291(&bLocal_652) <= 12.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_417(&Local_4 + 336[02], 0) >= 0,5f)
					{
						if (fLocal_694 >= 0.0f)
						{
							fLocal_694 = GET_CURRENT_GAME_TIME();
						}
						if ((GET_CURRENT_GAME_TIME() - fLocal_694) < 6.0f)
						{
							Function_414();
						}
					}
					else if (Function_417(&Local_4 + 336[02], 0) >= 8.0f)
					{
						Function_337();
						fLocal_694 = 0.0f;
					}
					else
					{
						fLocal_694 = 0.0f;
					}
				}
				Function_238(&bLocal_652);
			}
		}
	}
	switch (bLocal_509)
	{
		case 0x00000000:
			Function_328(0);
			bLocal_735 = CEIL(TO_FLOAT((Local_737 / 2)));
			iLocal_815 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_324();
			iLocal_537 = Function_323(StackVal, *(&Local_4 + 944[03]), 0, 1, 1);
			if (!Function_322(iLocal_537))
			{
				if (Function_308(&Local_496))
				{
					Function_321(&Local_496);
				}
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 944[13]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_533, *(&Local_4 + 944[33]), 1, 1, 1);
			Function_238(&bLocal_648);
			bLocal_509 = true;
			break;
		
		case 0x00000001:
			Function_516();
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_322(iLocal_537) || iLocal_537 != 4294967295)
				{
					if (Function_512() || Function_291(&bLocal_652) <= 15.0f)
					{
						Function_238(&bLocal_648);
						bLocal_509 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			TOGGLE_COVER_PROPS(0);
			Function_497();
			Function_378();
			Function_376();
			Function_375(&Local_4 + 392);
			Function_238(&bLocal_648);
			bLocal_509 = 3;
			Function_250(iLocal_508);
			Function_313(StackVal, Function_250(iLocal_508), iLocal_508, Global_46736[2], Function_252(iLocal_508), 0);
			break;
		
		case 0x00000003:
			if (Function_516())
			{
				Function_238(&bLocal_648);
				bLocal_509 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				if (!Function_308(&Local_496))
				{
					Function_510();
				}
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (StackVal || !Function_282(Function_308(&Local_496), &Local_4 + 336[02], *(&Local_4 + 944[43]), 10.0f))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 944[43]), 1, 1, 1);
			}
			Function_364(&(Local_874[015]), &iLocal_533, "GraveRobber", 1, 0x5f5e100, 1);
			Function_364(&(Local_874[115]), &Local_4 + 336[02], "Wagon", 1, 0x5f5e100, 1);
			Global_53524.f_72++;
			Global_53524.f_168++;
			ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Local_4 + 336[02]));
			Function_238(&bLocal_664);
			Function_238(&bLocal_648);
			bLocal_509 = 6;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_509();
				if (Function_308(&Local_496))
				{
					Function_510();
				}
				Function_238(&bLocal_648);
				bLocal_509 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_456(&Global_54076, &Local_4 + 336[02], 0))
				{
					ADD_BLIP_FOR_ACTOR(&Local_4 + 336[02], 325, 0, 2, 0);
					Function_361("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				Function_238(&bLocal_652);
				Function_238(&bLocal_648);
				bLocal_509 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_340(&Global_54076, &iLocal_533, 16.0f))
			{
				if (Function_291(&bLocal_652) <= 15.0f)
				{
					Function_509();
					Function_238(&bLocal_652);
				}
			}
			else if (Function_291(&bLocal_652) <= 7.0f)
			{
				Function_338();
				Function_238(&bLocal_652);
			}
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
				{
					Function_382();
					Function_327();
					SET_REACT_NODE_FOR_ACTOR(&iLocal_533, "graverobber/Robber/Idle");
					AI_GOAL_LOOK_CLEAR(&iLocal_533);
					STOP_FORCE_LOOK_AT_COORD(&iLocal_533);
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 336[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_4 + 336[02]));
					}
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_SMALL_TEXT();
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					Function_508();
					uLocal_710 = ADD_BLIP_FOR_COORD(&Local_4 + 1744, 330, 0, 2, 0);
					Function_371(StackVal, *(&Local_4 + 1744), 0, 48, 1);
					Function_238(&bLocal_660);
					Function_238(&bLocal_648);
					Function_238(&bLocal_652);
					bLocal_509 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_291(&bLocal_648) <= 10.0f)
				{
					Function_361("Grave02_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_238(&bLocal_660);
					Function_238(&bLocal_648);
					bLocal_509 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_291(&bLocal_648) <= 8.0f)
			{
				if (!IS_VOLUME_ENABLED(&Local_4 + 720[0]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_442();
					Function_238(&bLocal_648);
					if (Function_28(19, 0))
					{
						bLocal_509 = 56;
					}
					else
					{
						bLocal_509 = 11;
					}
				}
			}
			break;
		
		case 0x00000038:
			if (!Global_6658)
			{
				Function_507();
				Global_6658 = 1;
			}
			Function_238(&bLocal_660);
			Function_238(&bLocal_648);
			Function_238(&bLocal_652);
			bLocal_509 = 11;
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_291(&bLocal_648) <= 3.0f)
			{
				PRINTSTRING("num runs = ");
				PRINTINT(Function_506());
				PRINTNL();
				switch (Function_506())
				{
					case 0x00000000:
						Function_505();
						break;
					
					case 0x00000001:
						Function_504();
						break;
					
					case 0x00000002:
						Function_503();
						break;
					
					default:
						Function_502();
						break;
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_238(&bLocal_660);
					Function_238(&bLocal_648);
					bLocal_509 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000005F:
			if (Function_291(&bLocal_652) <= 9.0f)
			{
				if (Function_340(&Global_54076, &iLocal_533, 16.0f))
				{
					Function_339();
				}
				else
				{
					Function_338();
				}
				Function_238(&bLocal_652);
			}
			if (!Function_288())
			{
				if (Function_291(&bLocal_648) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!IS_BLIP_VALID(&bLocal_708))
					{
						bLocal_708 = ADD_BLIP_FOR_ACTOR(&Local_4 + 336[02], 325, 0, 2, 0);
						Function_361("Grave02_return_wagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				bLocal_509 = iLocal_684;
				Function_238(&bLocal_648);
				PRINTSTRING("STAGE 1 - GOAL ");
				PRINTINT(bLocal_509);
				PRINTNL();
				if (IS_BLIP_VALID(&bLocal_708))
				{
					REMOVE_BLIP(&bLocal_708);
				}
				if (IS_BLIP_VALID(&uLocal_710))
				{
					REMOVE_BLIP(&uLocal_710);
				}
				Function_337();
				uLocal_710 = ADD_BLIP_FOR_COORD(&Local_4 + 1744, 330, 0, 2, 0);
				Function_371(StackVal, *(&Local_4 + 1744), 0, 48, 1);
			}
			break;
		
		case 0x0000006A:
			Function_425();
			iLocal_538[0] = 1;
			Function_238(&bLocal_648);
			iLocal_508 = 1;
			bLocal_509 = false;
			break;
	}
	return;
}

void Function_502() //Position: 0x16D88 / 93576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_NoMoreTalk", "Grave02_NoMoreTalk", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x16DD5 / 93653
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v3_AA", "Grave02_BanterB4Attack_v3_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v3_AB", "Grave02_BanterB4Attack_v3_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v3_AC1", "Grave02_BanterB4Attack_v3_AC1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v3_AC2", "Grave02_BanterB4Attack_v3_AC2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v3_AD", "Grave02_BanterB4Attack_v3_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v3_AE", "Grave02_BanterB4Attack_v3_AE", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x16F9D / 94109
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v2_AA", "Grave02_BanterB4Attack_v2_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v2_AB", "Grave02_BanterB4Attack_v2_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v2_AC", "Grave02_BanterB4Attack_v2_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v2_AD1", "Grave02_BanterB4Attack_v2_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v2_AD2", "Grave02_BanterB4Attack_v2_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v2_AE", "Grave02_BanterB4Attack_v2_AE", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v2_AF", "Grave02_BanterB4Attack_v2_AF", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x171AC / 94636
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AA", "Grave02_BanterB4Attack_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v1_AB", "Grave02_BanterB4Attack_v1_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AC", "Grave02_BanterB4Attack_v1_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v1_AD", "Grave02_BanterB4Attack_v1_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AE1", "Grave02_BanterB4Attack_v1_AE1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AE2", "Grave02_BanterB4Attack_v1_AE2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v1_AF", "Grave02_BanterB4Attack_v1_AF", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AG1", "Grave02_BanterB4Attack_v1_AG1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AG2", "Grave02_BanterB4Attack_v1_AG2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave02_BanterB4Attack_v1_AG3", "Grave02_BanterB4Attack_v1_AG3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v1_AH1", "Grave02_BanterB4Attack_v1_AH1", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave02_BanterB4Attack_v1_AH2", "Grave02_BanterB4Attack_v1_AH2", 1, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_506() //Position: 0x17528 / 95528
{
	return Global_53524.f_68;
}

void Function_507() //Position: 0x17533 / 95539
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave03_MachGunMissingAmmo_v1_AA", "Grave02_MachGunMissingAmmo_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave03_MachGunMissingAmmo_v1_AB", "Grave02_MachGunMissingAmmo_v1_AB", 1, 1, 0, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x175EB / 95723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_SetOff", "Grave02_SetOff", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x17630 / 95792
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_WaitingJonGetOnWagon", "Grave02_WaitingJonGetOnWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x17691 / 95889
{
	if (IS_OBJECT_ATTACHED(&iLocal_533))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&iLocal_533));
	}
	if (!IS_OBJECT_ATTACHED(&iLocal_533))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &iLocal_533, &Local_4 + 336[02], "", Vector(0.0f, 1,2f, 1,9f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		TASK_STAND_STILL(&iLocal_533, -1.0f, 0, 0);
		Function_511();
	}
	return;
}

void Function_511() //Position: 0x176E8 / 95976
{
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_533, 0);
	if (SET_ANIM_SET_FOR_ACTOR(&iLocal_533, "graverobber_climbin", 0))
	{
		SET_ACTION_NODE_FOR_ACTOR(&iLocal_533, "graverobber_climbin");
		iLocal_682 = 0;
		FORCE_LOOK_AT_ACTOR(&iLocal_533, &Global_54076, -1.0f);
	}
	return;
}

int Function_512() //Position: 0x17748 / 96072
{
	var uVar0;
	
	UNK_0x44986367(StackVal, &uVar0);
	uLocal_714 = Function_515(Global_53579, 1);
	if (Function_514(Global_53579))
	{
		if (IS_OBJECT_VALID(&uLocal_714))
		{
			TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_4 + 1864, &uVar0);
			TRAIN_SET_TARGET_POS(Global_53579, &Local_4 + 1864);
			TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 0);
			TRAIN_SET_SPEED(Global_53579, 0.0f);
			TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
			Function_513(Global_53579, 2, "TRAIN_BOARDING", 0);
			return 1;
		}
	}
	return 0;
}

void Function_513(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x177C6 / 96198
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	uVar1 = TRAIN_GET_CAR(iParam0, iParam1);
	iVar5 = 0;
	if (IS_OBJECT_VALID(&uVar1))
	{
		uVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(&uVar1, "myLayoutObj"));
		if (IS_LAYOUTREF_VALID(&uVar4))
		{
			uVar2 = CREATE_OBJECT_ITERATOR(&uVar4);
			ITERATE_ON_OBJECT_TYPE(&uVar2, 12);
			ITERATE_IN_LAYOUT(&uVar2, &uVar4);
			iVar3 = START_OBJECT_ITERATOR(&uVar2);
			while (IS_OBJECT_VALID(&iVar3))
			{
				uVar0 = GET_GRINGO_FROM_OBJECT(&iVar3);
				if (IS_GRINGO_VALID(&uVar0))
				{
					if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&iVar3), &iParam2))
					{
						GRINGO_SET_USABLE_BY_PLAYER(&uVar0, "nPlayerUse", iParam3);
						iVar5++;
					}
				}
				iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
			}
			if (IS_ITERATOR_VALID(&uVar2))
			{
				DESTROY_ITERATOR(&uVar2);
			}
		}
	}
	if (iVar5 == 0)
	{
	}
}

bool Function_514(int iParam0) //Position: 0x17892 / 96402
{
	if (!Function_221(iParam0, "TRAIN_HAS_BEEN_STOLEN"))
	{
		return 0;
	}
	if (!TRAIN_GET_NUM_CARS(iParam0) < 0)
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		return (&Global_53580 + 20)->f_424;
	}
	if (iParam0 == Global_53578)
	{
		return (&Global_53580 + 980)->f_424;
	}
	return 0;
}

var Function_515(int iParam0, bool bParam1) //Position: 0x178EF / 96495
{
	bool bVar0;
	
	Function_196(16384);
	if (iParam0 == 4294967295)
	{
		return "";
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 1;
	}
	if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 1;
	}
	if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
	{
		bVar0 = TRAIN_GET_CAR(iParam0, 0);
	}
	else
	{
		bVar0 = "";
	}
	if (IS_OBJECT_VALID(&bVar0))
	{
		if (bParam1)
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
		}
		else
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 0);
		}
		return &bVar0;
	}
	return "";
}

bool Function_516() //Position: 0x17966 / 96614
{
	Function_309(&iLocal_510, 1);
	switch (iLocal_510)
	{
		case 0x000003E8:
			if (Function_308(&Local_496) || Local_496.f_40 < 1)
			{
				iLocal_510 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Grave_02/Grave_02"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				iLocal_510 = 1106;
			}
			else
			{
				Function_305(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				Function_303(StackVal, &uLocal_494, (&Global_6667[1328] + 88), &uLocal_816, 1, 0, 0, 0, 1, 1);
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/Grave_02/Grave_02", 0, 1, 1, 2, 2);
				Function_324();
				Function_187(1, 0, 1);
				Global_99147 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				if (Function_228(&iLocal_510 + 4))
				{
					Function_238(&iLocal_510 + 4);
				}
				else
				{
					Function_334(&iLocal_510 + 4);
				}
				iLocal_510 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_291(&iLocal_510 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				iLocal_510 = 1105;
			}
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) && STREAMING_IS_WORLD_LOADED())
			{
				Function_526(StackVal, StackVal, Vector(-1781,559f, 26,166f, 2841,432f), Vector(-0,631f, -0,214f, -0,746f));
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_99147 = 0;
				iLocal_510 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_522();
			Function_517(&iLocal_560);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_510 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 336[02], *(&Local_4 + 944[43]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 944[13]), 1, 1, 1);
				Function_510();
				UI_POP("nCutscenes");
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				iLocal_510 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (bLocal_509 != 3 && iLocal_508 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					Global_99147 = 0;
					Function_286(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					iLocal_510 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000452:
			iLocal_510 = 1000;
			return 1;
			break;
	}
	return 0;
}

bool Function_517(struct<2>[] Param0) //Position: 0x17C30 / 97328
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_521();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_520(&(Param0[iVar02]), 8);
		}
		else if (Function_519())
		{
			iVar1 = 1;
			Function_520(&(Param0[iVar02]), 8);
		}
		Function_520(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_180(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_180(&(Param0[02]), 8) || iVar1));
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
				Function_520(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_520(&(Param0[iVar02]), 2);
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
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_520(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_520(&(Param0[iVar02]), 2);
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
	Function_518();
	return 1;
}

void Function_518() //Position: 0x17FF2 / 98290
{
	if (!Function_306(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_519() //Position: 0x18032 / 98354
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

void Function_520(struct<13> Param0) //Position: 0x18060 / 98400
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_521() //Position: 0x18073 / 98419
{
	if (!Function_306(128))
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

bool Function_522() //Position: 0x180B5 / 98485
{
	Function_525(&Local_4 + 8, 1199, 2, 0);
	Function_525(&Local_4 + 8, 996, 2, 0);
	Function_525(&Local_4 + 8, 506, 2, 0);
	Function_525(&Local_4 + 8, 977, 2, 0);
	Function_525(&Local_4 + 8, 543, 2, 0);
	Function_525(&Local_4 + 8, 542, 2, 0);
	Function_525(&Local_4 + 8, 541, 2, 0);
	Function_525(&Local_4 + 8, 343, 2, 0);
	Function_525(&Local_4 + 8, 544, 2, 0);
	Function_525(&Local_4 + 8, 9, 2, 0);
	Function_525(&Local_4 + 8, 435, 2, 0);
	Function_525(&Local_4 + 8, 437, 2, 0);
	Function_525(&Local_4 + 8, 173, 2, 0);
	Function_525(&Local_4 + 8, 1132, 2, 0);
	Function_523(&Local_4 + 8, "p_gen_coffinEmpty01x", 0, 0);
	Function_523(&Local_4 + 8, "p_gen_hayPile02x", 0, 0);
	Function_523(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/pitch_hay", 1, 0);
	if (Function_517(&Local_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_523(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x181F8 / 98808
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_524(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_520(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_524(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x18236 / 98870
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_520(&(Param0[iVar02]), 4);
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

var Function_525(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18305 / 99077
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_520(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_520(&(Param0[iVar02]), 8);
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

void Function_526(struct<2> Param0, struct<2> Param2) //Position: 0x183E1 / 99297
{
	struct<2> Var0;
	
	Var0 = Param2;
	VSCALE(&Var0, 5.0f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Var0, 0, 0);
}

void Function_527() //Position: 0x1840B / 99339
{
	iLocal_701 = 1;
	TRAIN_SET_MAX_ACCEL(Global_53579, 3,5f);
	TRAIN_SET_TARGET_SPEED(Global_53579, 8,75f);
	TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
	TRAIN_SET_TARGET_POS(Global_53579, &Local_4 + 1896);
	return;
}

void Function_528() //Position: 0x1843D / 99389
{
	if (Function_288())
	{
		if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			if (!iLocal_815)
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_291(&bLocal_652) <= 10.0f)
					{
						Function_529();
						Function_238(&bLocal_652);
					}
				}
			}
		}
	}
	return;
}

void Function_529() //Position: 0x18480 / 99456
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_ShootsGunRandWagon", "Grave02_ShootsGunRandWagon", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x184DD / 99549
{
	switch (bLocal_509)
	{
		case 0x00000006:
			iLocal_949 = 0;
			Function_561(&Local_496, 1);
			uLocal_494 = CREATE_LAYOUT(Function_54());
			Function_560();
			iLocal_510 = 1000;
			bLocal_509 = 7;
			break;
		
		case 0x00000007:
			if (iLocal_510 != 1004 || Function_516())
			{
				bLocal_509 = 8;
			}
			break;
		
		case 0x00000008:
			Function_516();
			if (Function_544())
			{
				Function_542();
				bLocal_509 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&Local_4))
			{
				uLocal_646 = CREATE_OBJECT_ITERATOR(&Local_4);
			}
			Function_541();
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_212(1);
			Function_540(1, 1, 1);
			RESET_ACTOR_GAITS(&iLocal_533, 0);
			SET_CRIPPLE_ENABLE(&iLocal_533, 0);
			SET_ACTOR_FACTION(&iLocal_533, 20);
			TASK_PRIORITY_SET(&iLocal_533, true);
			TASK_STAND_STILL(&iLocal_533, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_533, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_533, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_533, GET_ACTOR_MAX_HEALTH(&iLocal_533));
			SET_ACTOR_PROOF(&iLocal_533, 16);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_533, false);
			RESET_ACTOR_GAITS(&uLocal_535, 0);
			TASK_PRIORITY_SET(&uLocal_535, true);
			TASK_STAND_STILL(&uLocal_535, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&uLocal_535, 50.0f);
			SET_ACTOR_HEALTH(&uLocal_535, GET_ACTOR_MAX_HEALTH(&uLocal_535));
			SET_PLAYER_TARGET_WEIGHT(-20.0f);
			SET_ACTOR_PROOF(&Global_54076, 16);
			Function_540(1, 0, 1);
			uLocal_716 = CREATE_OBJECTSET_IN_LAYOUT("FireVols", &Local_4, 4294967295, 1);
			FIRE_STOP_ALL_FIRES();
			SET_WEAPONENUM_LOCKED(23, 0);
			Function_538(&uLocal_820, &uLocal_494);
			EQUIP_ACCESSORY(&iLocal_533, 0, 1);
			ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iLocal_533, 0, 0);
			if (!IS_ACTOR_VALID(&Local_4 + 336[02]))
			{
				Function_292();
				TASK_STAND_STILL(&Local_4 + 336[02], -1.0f, 0, 0);
			}
			Function_537(&Local_4 + 336[02], 16.0f);
			if (!IS_OBJECT_VALID(&uLocal_728))
			{
				uLocal_728 = CREATE_POINT_IN_LAYOUT(Function_542(), &Local_4, "TEH_TARGET_GHOOOOST", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 928);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 928);
			Function_536(70.0f);
			Function_535();
			TASK_USE_GRINGO(&Local_4 + 640[02], GET_GRINGO_FROM_OBJECT(&Local_4 + 1928), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET(&Local_4 + 640[02], 2);
			SET_ACTOR_PROOF(&Global_54076, 16);
			Function_334(&bLocal_648);
			Function_334(&bLocal_652);
			Function_334(&bLocal_656);
			Function_334(&bLocal_664);
			Function_334(&bLocal_660);
			Function_334(&bLocal_668);
			Function_334(&bLocal_672);
			Function_334(&bLocal_676);
			iLocal_508 = 0;
			bLocal_509 = false;
			Function_532(&Local_496, &iLocal_508, &bLocal_509);
			Function_531(StackVal, StackVal, StackVal, StackVal, StackVal, Local_496);
			break;
	}
	return;
}

void Function_531(struct<41> Param0) //Position: 0x1876F / 100207
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_508 = 0;
			break;
		
		case 0x00000002:
			iLocal_508 = 1;
			break;
		
		case 0x00000003:
			iLocal_508 = 2;
			break;
		
		case 0x00000004:
			iLocal_508 = 3;
			break;
		
		case 0x00000005:
			iLocal_508 = 4;
			break;
		
		case 0x00000006:
			iLocal_508 = 5;
			break;
		
		case 0x00000007:
			iLocal_508 = 6;
			break;
		
		case 0x00000008:
			iLocal_508 = 7;
			break;
		
		case 0x00000009:
			iLocal_508 = 8;
			break;
		
		case 0x0000000A:
			iLocal_508 = 101;
			break;
	}
}

void Function_532(int iParam0, var uParam1, int iParam2) //Position: 0x18804 / 100356
{
	if (Function_308(&iParam0))
	{
		uParam1 = Function_534(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_533();
	}
	return;
}

void Function_533() //Position: 0x18840 / 100416
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

var Function_534(int iParam0) //Position: 0x18891 / 100497
{
	if (Function_308(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_535() //Position: 0x188AA / 100522
{
	*(&Local_4 + 640[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "farmer_1", 173, Vector(-3288,714f, 17,56864f, 2703,287f), Vector(0.0f, 176,2757f, 0.0f));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 640[02], 1);
	return;
}

void Function_536(int iParam0) //Position: 0x188F1 / 100593
{
	if (Global_15862 < 0,1f)
	{
		return;
	}
	Global_15862 = iParam0;
	return;
}

void Function_537(var uParam0, float fParam1) //Position: 0x18909 / 100617
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&uVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

int Function_538(struct<2>[] Param0) //Position: 0x18950 / 100688
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_539(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_539(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_539(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_539(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_539(struct<13> Param0) //Position: 0x19029 / 102441
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_540(bool bParam0, bool bParam1, bool bParam2) //Position: 0x190F8 / 102648
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[bParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[bParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[bParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[bParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			*(&Global_15402[bParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[bParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[bParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[bParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[bParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_218(&uVar1);
					}
				}
				Function_344(&uVar0);
			}
		}
	}
	return;
}

void Function_541() //Position: 0x19207 / 102919
{
	*(&Local_4 + 584) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "Sheriffs"));
	*(&Local_4 + 544[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nsheriff_1", 435, Vector(-2091,581f, 16,97577f, 2604,329f), Vector(0.0f, 111,0403f, 0.0f));
	SQUAD_JOIN(&Local_4 + 544[02], &Local_4 + 584);
	TASK_STAND_STILL(&Local_4 + 544[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 544[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 544[02], 20);
	*(&Local_4 + 544[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nsheriff_2", 437, Vector(-2092,082f, 16,98099f, 2603,421f), Vector(0.0f, 155,5813f, 0.0f));
	SQUAD_JOIN(&Local_4 + 544[12], &Local_4 + 584);
	TASK_STAND_STILL(&Local_4 + 544[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 544[12], 1);
	SET_ACTOR_FACTION(&Local_4 + 544[12], 20);
	return;
}

vector3 Function_542() //Position: 0x1930B / 103179
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	
	Function_543(4, 1);
	uVar0 = &uVar0;
	Local_4 = CREATE_LAYOUT("Grave02_layout");
	*(&Local_4 + 712) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "CutsceneVol_set");
	*(&Local_4 + 680[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "cutScene01Vol", 2,802597E-45f, Vector(-1784,874f, 30,38342f, 2852,7f), Vector(0.0f, 24,25881f, 0.0f), Vector(119,284f, 17,75799f, 114,9585f));
	ADD_TO_VOLUME_SET(&Local_4 + 712, &Local_4 + 680[0]);
	*(&Local_4 + 680[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "cutScene02Vol", 2,802597E-45f, Vector(-3863,011f, 35,39275f, 2937,816f), Vector(0.0f, -0,4973582f, 0.0f), Vector(147,7574f, 33,94793f, 81,58124f));
	ADD_TO_VOLUME_SET(&Local_4 + 712, &Local_4 + 680[1]);
	*(&Local_4 + 680[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "ncs_endVol", 2,802597E-45f, Vector(-3900,286f, 31,30791f, 2923,297f), Vector(0.0f, 85,49361f, 0.0f), Vector(146,1966f, 48,09691f, 155,5584f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 680[2]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 680[2]);
	ADD_TO_VOLUME_SET(&Local_4 + 712, &Local_4 + 680[2]);
	*(&Local_4 + 800) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "wayPoints_set");
	*(&Local_4 + 720[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp1", 2,802597E-45f, Vector(-1817,697f, 56,71944f, 2672,806f), Vector(0.0f, -54,48228f, 0.0f), Vector(1.0f, 114,674f, 1086,22f));
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[0]);
	*(&Local_4 + 720[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp2", 2,802597E-45f, Vector(-2108,043f, 22,72487f, 2610,201f), Vector(0.0f, -4,524146f, 0.0f), Vector(1.0f, 21,4371f, 22,57171f));
	SET_VOLUME_ENABLED(&Local_4 + 720[1], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[1]);
	*(&Local_4 + 720[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp3", 2,802597E-45f, Vector(-3677,538f, 32,37743f, 2889,629f), Vector(0.0f, 35,65868f, 0.0f), Vector(1.0f, 21,4371f, 28,74409f));
	SET_VOLUME_ENABLED(&Local_4 + 720[2], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[2]);
	*(&Local_4 + 720[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp4", 2,802597E-45f, Vector(-3778,447f, 28,27812f, 2849,701f), Vector(0.0f, 1,726415f, 0.0f), Vector(80,17427f, 21,4371f, 559,6367f));
	SET_VOLUME_ENABLED(&Local_4 + 720[3], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[3]);
	*(&Local_4 + 720[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp5", 2,802597E-45f, Vector(-3257,779f, 15,66438f, 2715,407f), Vector(0.0f, -0,08823329f, 0.0f), Vector(1.0f, 21,4371f, 128,6963f));
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[4]);
	*(&Local_4 + 720[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp6", 2,802597E-45f, Vector(-2990,432f, 20,87183f, 2977,733f), Vector(0.0f, -27,34535f, 0.0f), Vector(1.0f, 21,4371f, 129,0698f));
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[5]);
	*(&Local_4 + 720[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp7", 2,802597E-45f, Vector(-2990,432f, 20,87183f, 2977,733f), Vector(0.0f, -27,34535f, 0.0f), Vector(1.0f, 21,4371f, 129,0698f));
	SET_VOLUME_ENABLED(&Local_4 + 720[6], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[6]);
	*(&Local_4 + 720[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp8", 2,802597E-45f, Vector(-3294,29f, 18,43323f, 2981,916f), Vector(0.0f, 20,30192f, 0.0f), Vector(1.0f, 27,54663f, 129,0698f));
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[7]);
	*(&Local_4 + 720[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "wp9", 2,802597E-45f, Vector(-3473,839f, 19,99458f, 3079,855f), Vector(0.0f, 42,2181f, 0.0f), Vector(1.0f, 27,54663f, 270,9615f));
	SET_VOLUME_ENABLED(&Local_4 + 720[8], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 800, &Local_4 + 720[8]);
	*(&Local_4 + 808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "StartChase", 2,802597E-45f, Vector(-2282,808f, 20,64789f, 2572.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3,445665f, 42,75916f, 976,4644f));
	*(&Local_4 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "NearTumbleweed_set");
	*(&Local_4 + 816[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_1", 2,802597E-45f, Vector(-3756,831f, 24,58898f, 3132,468f), Vector(0.0f, 10,21842f, 0.0f), Vector(148,046f, 35,46769f, 88,74331f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[0]);
	*(&Local_4 + 816[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_2", 2,802597E-45f, Vector(-3890,407f, 29,37399f, 2494,944f), Vector(0.0f, 20,52201f, 0.0f), Vector(1.0f, 30,28998f, 344,2773f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[1]);
	*(&Local_4 + 816[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_3", 2,802597E-45f, Vector(-3706,045f, 32,68417f, 2902,495f), Vector(0.0f, -67,52518f, 0.0f), Vector(65,46023f, 35,46769f, 110,0182f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[2]);
	*(&Local_4 + 816[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_4", 2,802597E-45f, Vector(-4063,283f, 28,6417f, 3132,336f), Vector(0.0f, -5,964409f, 0.0f), Vector(46,14125f, 35,46769f, 55,79634f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[3]);
	*(&Local_4 + 816[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_5", 2,802597E-45f, Vector(-4046,68f, 31,54537f, 2581,501f), Vector(0.0f, 108,9376f, 0.0f), Vector(1.0f, 30,28998f, 353,1234f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[4]);
	*(&Local_4 + 816[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_6", 2,802597E-45f, Vector(-3795,432f, 31,81162f, 2941,531f), Vector(0.0f, -85,73697f, 0.0f), Vector(65,46023f, 35,46769f, 21,89343f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[5]);
	*(&Local_4 + 816[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_7", 2,802597E-45f, Vector(-3796,307f, 32,1452f, 2941,596f), Vector(0.0f, -85,73697f, 0.0f), Vector(65,46023f, 35,46769f, 21,89343f));
	SET_VOLUME_ENABLED(&Local_4 + 816[6], 0);
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[6]);
	*(&Local_4 + 816[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_8", 2,802597E-45f, Vector(-3568,311f, 20,85993f, 3057,725f), Vector(0.0f, -169,3741f, 0.0f), Vector(46,7217f, 35,46769f, 21,89343f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[7]);
	*(&Local_4 + 816[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "NearTumble_9", 2,802597E-45f, Vector(-3579,803f, 30,01072f, 2778,824f), Vector(0.0f, -42,54221f, 0.0f), Vector(46,7217f, 35,46769f, 21,89343f));
	ADD_TO_VOLUME_SET(&Local_4 + 896, &Local_4 + 816[8]);
	*(&Local_4 + 904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S3_WaitBeforeAttack", 4,203895E-45f, Vector(-3748,738f, 13,20617f, 3581,713f), Vector(0.0f, 20.0f, 0.0f), Vector(20,41554f, 6,411139f, 20,6894f));
	*(&Local_4 + 912) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "gpsShift", 2,802597E-45f, Vector(-3473,839f, 19,99458f, 3079,855f), Vector(0.0f, 42,2181f, 0.0f), Vector(1.0f, 27,54663f, 270,9615f));
	*(&Local_4 + 920) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "armVol", 2,802597E-45f, Vector(-2137,558f, 26,20729f, 2611,129f), Vector(0.0f, 0.0f, 0.0f), Vector(143,7562f, 25,84402f, 110,7974f));
	*(&Local_4 + 928) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "noAmbients", 2,802597E-45f, Vector(-1842,325f, 35,42273f, 2739,988f), Vector(0.0f, 23,13683f, 0.0f), Vector(95,02532f, 61,09915f, 255,0979f));
	*(&Local_4 + 936) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &Local_4, 8, 0);
	*(&Local_4 + 944[03]) = Vector(-1783,1f, 24,0941f, 2839,921f);
	*(&Local_4 + 944[03] + 12) = Vector(0.0f, 388,91f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart01", Vector(-1783,1f, 24,0941f, 2839,921f), Vector(0.0f, 388,91f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &Local_4 + 936);
	*(&Local_4 + 944[13]) = Vector(-1783,1f, 24,0941f, 2839,921f);
	*(&Local_4 + 944[13] + 12) = Vector(0.0f, 388,91f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEnd01", Vector(-1783,1f, 24,0941f, 2839,921f), Vector(0.0f, 388,91f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &Local_4 + 936);
	*(&Local_4 + 944[23]) = Vector(-1781,062f, 24,0941f, 2840.0f);
	*(&Local_4 + 944[23] + 12) = Vector(0.0f, 49,31619f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart01", Vector(-1781,062f, 24,0941f, 2840.0f), Vector(0.0f, 49,31619f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &Local_4 + 936);
	*(&Local_4 + 944[33]) = Vector(-1782,013f, 23,939f, 2838,665f);
	*(&Local_4 + 944[33] + 12) = Vector(0.0f, 46,88945f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEnd01", Vector(-1782,013f, 23,939f, 2838,665f), Vector(0.0f, 46,88945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &Local_4 + 936);
	*(&Local_4 + 944[43]) = Vector(-1784,156f, 24,07471f, 2836,673f);
	*(&Local_4 + 944[43] + 12) = Vector(0.0f, 46,88945f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "wagonStart01", Vector(-1784,156f, 24,07471f, 2836,673f), Vector(0.0f, 46,88945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &Local_4 + 936);
	*(&Local_4 + 944[53]) = Vector(-1789,979f, 24,06899f, 2839,873f);
	*(&Local_4 + 944[53] + 12) = Vector(0.0f, -154,4233f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseStart01", Vector(-1789,979f, 24,06899f, 2839,873f), Vector(0.0f, -154,4233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &Local_4 + 936);
	*(&Local_4 + 1096) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &Local_4, 8, 0);
	*(&Local_4 + 1104[03]) = Vector(-2227,17f, 15,02873f, 2800,633f);
	*(&Local_4 + 1104[03] + 12) = Vector(0.0f, -545,2394f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart02", Vector(-2227,17f, 15,02873f, 2800,633f), Vector(0.0f, -545,2394f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &Local_4 + 1096);
	*(&Local_4 + 1104[13]) = Vector(-2223,875f, 14,78665f, 2803,763f);
	*(&Local_4 + 1104[13] + 12) = Vector(0.0f, -233,6988f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonStart02", Vector(-2223,875f, 14,78665f, 2803,763f), Vector(0.0f, -233,6988f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &Local_4 + 1096);
	*(&Local_4 + 1160) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &Local_4, 8, 0);
	*(&Local_4 + 1168[03]) = Vector(-3318,61f, 11,10652f, 3017,124f);
	*(&Local_4 + 1168[03] + 12) = Vector(0.0f, -267,6695f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart03", Vector(-3318,61f, 11,10652f, 3017,124f), Vector(0.0f, -267,6695f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &Local_4 + 1160);
	*(&Local_4 + 1168[13]) = Vector(-3320,185f, 10,79314f, 3012,853f);
	*(&Local_4 + 1168[13] + 12) = Vector(0.0f, -253,8054f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonStart03", Vector(-3320,185f, 10,79314f, 3012,853f), Vector(0.0f, -253,8054f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &Local_4 + 1160);
	*(&Local_4 + 1224) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &Local_4, 8, 0);
	*(&Local_4 + 1232[03]) = Vector(-3744,223f, 7,846857f, 3579,611f);
	*(&Local_4 + 1232[03] + 12) = Vector(0.0f, -348,291f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart04", Vector(-3744,223f, 7,846857f, 3579,611f), Vector(0.0f, -348,291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &Local_4 + 1224);
	*(&Local_4 + 1232[13]) = Vector(-3747,878f, 8,164696f, 3583,967f);
	*(&Local_4 + 1232[13] + 12) = Vector(0.0f, -348,291f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonStart04", Vector(-3747,878f, 8,164696f, 3583,967f), Vector(0.0f, -348,291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &Local_4 + 1224);
	*(&Local_4 + 1288) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", &Local_4, 8, 0);
	*(&Local_4 + 1296[03]) = Vector(-3898,977f, 30,22297f, 2943,812f);
	*(&Local_4 + 1296[03] + 12) = Vector(0.0f, -374,8042f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart10", Vector(-3898,977f, 30,22297f, 2943,812f), Vector(0.0f, -374,8042f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &Local_4 + 1288);
	*(&Local_4 + 1296[13]) = Vector(-3896,39f, 30,58775f, 2941,646f);
	*(&Local_4 + 1296[13] + 12) = Vector(0.0f, -338,0822f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEnd10", Vector(-3896,39f, 30,58775f, 2941,646f), Vector(0.0f, -338,0822f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &Local_4 + 1288);
	*(&Local_4 + 1296[23]) = Vector(-3899,538f, 30,83667f, 2936,644f);
	*(&Local_4 + 1296[23] + 12) = Vector(0.0f, -269,3444f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart10", Vector(-3899,538f, 30,83667f, 2936,644f), Vector(0.0f, -269,3444f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &Local_4 + 1288);
	*(&Local_4 + 1296[33]) = Vector(-3899,97f, 31,84533f, 2927,26f);
	*(&Local_4 + 1296[33] + 12) = Vector(0.0f, -16,29702f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEnd10", Vector(-3899,97f, 31,84533f, 2927,26f), Vector(0.0f, -16,29702f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &Local_4 + 1288);
	*(&Local_4 + 1296[43]) = Vector(-3884,487f, 31,22706f, 2939,691f);
	*(&Local_4 + 1296[43] + 12) = Vector(0.0f, -263,6578f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonStart10", Vector(-3884,487f, 31,22706f, 2939,691f), Vector(0.0f, -263,6578f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &Local_4 + 1288);
	*(&Local_4 + 1296[53]) = Vector(-3899,663f, 30,89977f, 2935,03f);
	*(&Local_4 + 1296[53] + 12) = Vector(0.0f, -348,3313f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionGoto_10", Vector(-3899,663f, 30,89977f, 2935,03f), Vector(0.0f, -348,3313f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &Local_4 + 1288);
	*(&Local_4 + 1296[63]) = Vector(-3902,977f, 32,25705f, 2937,675f);
	*(&Local_4 + 1296[63] + 12) = Vector(0.0f, -356,802f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerLookAt_10", Vector(-3902,977f, 32,25705f, 2937,675f), Vector(0.0f, -356,802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &Local_4 + 1288);
	*(&Local_4 + 1296[73]) = Vector(-3904,068f, 30,65091f, 2936,238f);
	*(&Local_4 + 1296[73] + 12) = Vector(0.0f, -523,0786f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionGoto_10_1", Vector(-3904,068f, 30,65091f, 2936,238f), Vector(0.0f, -523,0786f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &Local_4 + 1288);
	*(&Local_4 + 1296[83]) = Vector(-3899,912f, 30,50125f, 2939,669f);
	*(&Local_4 + 1296[83] + 12) = Vector(0.0f, -257,1525f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonStartGoTo", Vector(-3899,912f, 30,50125f, 2939,669f), Vector(0.0f, -257,1525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &Local_4 + 1288);
	*(&Local_4 + 1296[93]) = Vector(-3787,974f, 32,08393f, 2935,996f);
	*(&Local_4 + 1296[93] + 12) = Vector(0.0f, -250,8537f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "playerHorse10", Vector(-3787,974f, 32,08393f, 2935,996f), Vector(0.0f, -250,8537f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &Local_4 + 1288);
	*(&Local_4 + 1296[103]) = Vector(-3792,298f, 31,94429f, 2937,93f);
	*(&Local_4 + 1296[103] + 12) = Vector(0.0f, -257,1525f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonHide10", Vector(-3792,298f, 31,94429f, 2937,93f), Vector(0.0f, -257,1525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &Local_4 + 1288);
	*(&Local_4 + 1296[113]) = Vector(-3938,491f, 52,53443f, 2966,577f);
	*(&Local_4 + 1296[113] + 12) = Vector(0.0f, -257,1525f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "birdsFly_1", Vector(-3938,491f, 52,53443f, 2966,577f), Vector(0.0f, -257,1525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &Local_4 + 1288);
	*(&Local_4 + 1296[123]) = Vector(-3887,951f, 52,53443f, 2995,584f);
	*(&Local_4 + 1296[123] + 12) = Vector(0.0f, -257,1525f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "birdsFly_2", Vector(-3887,951f, 52,53443f, 2995,584f), Vector(0.0f, -257,1525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &Local_4 + 1288);
	*(&Local_4 + 1296[133]) = Vector(-3898,579f, 30,64741f, 2940,24f);
	*(&Local_4 + 1296[133] + 12) = Vector(0.0f, -265,4376f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WagonEnd10", Vector(-3898,579f, 30,64741f, 2940,24f), Vector(0.0f, -265,4376f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &Local_4 + 1288);
	*(&Local_4 + 1640) = Vector(-953,5786f, 103,3968f, 2564f);
	*(&Local_4 + 1640 + 12) = Vector(0.0f, -165,7462f, 0.0f);
	*(&Local_4 + 1664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "riderStartS2_1", Vector(-953,5786f, 103,3968f, 2564f), Vector(0.0f, -165,7462f, 0.0f));
	*(&Local_4 + 1672) = Vector(-925,407f, 106,9779f, 2568f);
	*(&Local_4 + 1672 + 12) = Vector(0.0f, -127,3655f, 0.0f);
	*(&Local_4 + 1696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "riderStartS2_2", Vector(-925,407f, 106,9779f, 2568f), Vector(0.0f, -127,3655f, 0.0f));
	*(&Local_4 + 1704) = Vector(-2687,626f, 34,82334f, 2789,865f);
	*(&Local_4 + 1704 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_4 + 1728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "huntersGoAway", Vector(-2687,626f, 34,82334f, 2789,865f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_4 + 1736) = CREATE_OBJECTSET_IN_LAYOUT("SheriffSpawnPosSet", &Local_4, 8, 0);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_1", Vector(-3940,188f, 21,33431f, 2703,452f), Vector(0.0f, -42,49853f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &Local_4 + 1736);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_2", Vector(-4032,48f, 28,84756f, 2938,977f), Vector(0.0f, -86,6069f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &Local_4 + 1736);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_3", Vector(-3857,533f, 26,19585f, 3094,447f), Vector(0.0f, -66,65485f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &Local_4 + 1736);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_4", Vector(-3731,986f, 31,72861f, 2949,577f), Vector(0.0f, -30,27116f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &Local_4 + 1736);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_5", Vector(-4069,922f, 31,58713f, 3086,458f), Vector(0.0f, -138,278f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &Local_4 + 1736);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_6", Vector(-4026,865f, 26,60113f, 2858,064f), Vector(0.0f, -368,7701f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &Local_4 + 1736);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "sheriff_spawn_7", Vector(-4012f, 22,68958f, 2663,902f), Vector(0.0f, 21,98278f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &Local_4 + 1736);
	*(&Local_4 + 1744) = Vector(-4472.0f, 27,63686f, 2973,542f);
	*(&Local_4 + 1744 + 12) = Vector(0.0f, 158,4548f, 0.0f);
	*(&Local_4 + 1768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "secretSpot", Vector(-4472.0f, 27,63686f, 2973,542f), Vector(0.0f, 158,4548f, 0.0f));
	*(&Local_4 + 1776) = Vector(-3896,935f, 30,92446f, 2940,903f);
	*(&Local_4 + 1776 + 12) = Vector(0.0f, 87,50251f, 0.0f);
	*(&Local_4 + 1800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "S2_End", Vector(-3896,935f, 30,92446f, 2940,903f), Vector(0.0f, 87,50251f, 0.0f));
	*(&Local_4 + 1808[03]) = Vector(-3768,549f, 32,3289f, 2931,339f);
	*(&Local_4 + 1808[03] + 12) = Vector(0.0f, -81,11816f, 0.0f);
	*(&Local_4 + 1808[13]) = Vector(-3768,379f, 32,33361f, 2934,468f);
	*(&Local_4 + 1808[13] + 12) = Vector(0.0f, -79,90369f, 0.0f);
	*(&Local_4 + 1864) = Vector(-2213,148f, 16,25004f, 2628,07f);
	*(&Local_4 + 1864 + 12) = Vector(0.0f, -184,0029f, 0.0f);
	*(&Local_4 + 1888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "trainStart", Vector(-2213,148f, 16,25004f, 2628,07f), Vector(0.0f, -184,0029f, 0.0f));
	*(&Local_4 + 1896) = Vector(-3699,367f, 8,972512f, 3468,752f);
	*(&Local_4 + 1896 + 12) = Vector(0.0f, -184,0029f, 0.0f);
	*(&Local_4 + 1920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "trainEnd", Vector(-3699,367f, 8,972512f, 3468,752f), Vector(0.0f, -184,0029f, 0.0f));
	*(&Local_4 + 1928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "npitch_hay", "npitch_hay", Vector(-3288,855f, 17,46142f, 2704f), Vector(0.0f, -162,2986f, 0.0f));
	PushArrayP();
	*(&Local_4 + 1936) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "gr_path_end");
	*(&Local_4 + 1944) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "coffinEmpty01x0", "p_gen_coffinEmpty01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&Local_4 + 1952) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "hayPile02x0", "p_gen_hayPile02x", Vector(-3287,969f, 17,31392f, 2705,584f), Vector(-4,524558f, 186,5832f, 6,706206f), 1);
	return;
}

void Function_543(int iParam0, int iParam1) //Position: 0x1AD72 / 109938
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

bool Function_544() //Position: 0x1ADBC / 110012
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_559(0))
		{
			return 0;
		}
		if (!Function_522())
		{
			return 0;
		}
		if (!Function_517(&iLocal_560))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_533))
		{
			iLocal_533 = Function_551(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_535))
		{
			uLocal_535 = Function_545(1, 0, 0, 0, 0, 0, 1, 0);
			if (Function_282(StackVal, &uLocal_535, *(&Global_6667[1328] + 88), 20.0f))
			{
				if (!Function_282(StackVal, &uLocal_535, *(&Local_4 + 944[53]), 2.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_535, *(&Local_4 + 944[53]), 1, 1, 1);
				}
			}
			return 0;
		}
	}
	return 1;
}

var Function_545(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1AE72 / 110194
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
		Function_550(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_549())
		{
			return "";
		}
	}
	if (!Function_547())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_197();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_357(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_357(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_357(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_357(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_546(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_546(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_499(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_546(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B1CF / 111055
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

bool Function_547() //Position: 0x1B26F / 111215
{
	if (Function_548() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_548() //Position: 0x1B285 / 111237
{
	return Global_21369.f_244;
}

bool Function_549() //Position: 0x1B290 / 111248
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_550(var uParam0, bool bParam1, bool bParam2) //Position: 0x1B2B0 / 111280
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

var Function_551(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1B2DF / 111327
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	uParam2 = &uParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_540(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_558(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_554(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_553(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_552(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_552(var uParam0, bool bParam1) //Position: 0x1B81F / 112671
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_553(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1B841 / 112705
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_554(int iParam0, int iParam1) //Position: 0x1B8A2 / 112802
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_380(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_555(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_555(var uParam0, int iParam1) //Position: 0x1B930 / 112944
{
	Function_557(&uParam0);
	Function_556(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_556(int iParam0) //Position: 0x1B95C / 112988
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_557(int iParam0) //Position: 0x1B982 / 113026
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

var Function_558(int iParam0, var uParam1) //Position: 0x1BA58 / 113240
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_559(bool bParam0) //Position: 0x1BAFE / 113406
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_560() //Position: 0x1BB2E / 113454
{
	Function_523(&iLocal_560, "$/fragments/p_gen_currency01x", 0, 0);
	Function_523(&iLocal_560, "$/fragments/p_gen_package02x", 0, 0);
	Function_523(&iLocal_560, "$/fragments/p_gen_bottlemedicine02x", 0, 0);
	Function_523(&iLocal_560, "$/fragments/p_gen_map02x", 0, 0);
	Function_523(&iLocal_560, "graverobber", 5, 0);
	Function_523(&iLocal_560, "custom/graverobber", 8, 0);
	Function_523(&iLocal_560, "dead_ground_male", 5, 0);
	Function_523(&iLocal_560, "custom/dead_ground_male", 8, 0);
	Function_523(&iLocal_560, "graverobber_climbin", 5, 0);
	Function_523(&iLocal_560, "custom/graverobber_climbin", 8, 0);
	Function_525(&iLocal_560, 505, 2, 0);
	Function_525(&iLocal_560, 507, 2, 0);
	Function_525(&iLocal_560, 508, 2, 0);
	Function_525(&iLocal_560, 509, 2, 0);
	Function_525(&iLocal_560, 510, 2, 0);
	Function_525(&iLocal_560, 976, 2, 0);
	Function_525(&iLocal_560, 977, 2, 0);
	Function_525(&iLocal_560, 983, 2, 0);
	Function_525(&iLocal_560, 980, 2, 0);
	Function_525(&iLocal_560, 986, 2, 0);
	Function_523(&iLocal_560, "grave02", 10, 0);
	return;
}

void Function_561(int iParam0, bool bParam1) //Position: 0x1BD20 / 113952
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_569(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_308(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_308(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_568();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_254();
	Function_567();
	Function_244("");
	Function_566(0);
	Function_565();
	Function_204();
	Function_203();
	ENABLE_JOURNAL_REPLAY(0);
	Function_564();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_545(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_329(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_563(13);
	Function_563(14);
	Function_563(25);
	Function_563(24);
	Function_563(12);
	Function_563(27);
	Function_563(26);
	Function_563(15);
	Function_562();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_562() //Position: 0x1C161 / 115041
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_563(int iParam0) //Position: 0x1C1E6 / 115174
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_564() //Position: 0x1C206 / 115206
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_565() //Position: 0x1C24C / 115276
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_566(int iParam0) //Position: 0x1C262 / 115298
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_207())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_567() //Position: 0x1C29B / 115355
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_568() //Position: 0x1C2AD / 115373
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_569(int iParam0, int iParam1) //Position: 0x1C2B6 / 115382
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
			Function_570(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_570(struct<113> Param0) //Position: 0x1C33D / 115517
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

void Function_571() //Position: 0x1C39B / 115611
{
	return;
}

bool Function_572(struct<25> Param0) //Position: 0x1C3A1 / 115617
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_573(&Param0, 1);
			return 1;
		}
	}
	Function_573(&Param0, 0);
	return 0;
}

void Function_573(struct<25> Param0) //Position: 0x1C42D / 115757
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_574(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1C458 / 115800
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_573(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_593(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_592(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_592(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_578(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_573(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_577(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_576(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_577(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_575(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_244(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_576(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_573(&Param2, 0);
	return 0;
}

void Function_575(char* cParam0) //Position: 0x1C86E / 116846
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_576(struct<25> Param0) //Position: 0x1C962 / 117090
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_577(bool bParam0) //Position: 0x1C9DA / 117210
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_578(struct<57> Param0) //Position: 0x1C9FE / 117246
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_582(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_579(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_579(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_579(int iParam0, bool bParam1) //Position: 0x1CB6F / 117615
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_581(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_580(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_581(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_580(256);
			}
		}
	}
	return bParam1;
}

bool Function_580(int iParam0) //Position: 0x1CCAB / 117931
{
	return 2 | iParam0;
}

int Function_581(int iParam0) //Position: 0x1CCB5 / 117941
{
	return 4 | iParam0;
}

int Function_582(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1CCBF / 117951
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_588(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_580(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_583(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_580(16);
		}
	}
	return 0;
}

int Function_583(int iParam0, vector3 vParam1) //Position: 0x1CD7A / 118138
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_587(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_586(iVar0, 3, 1, bParam3))
			{
				if (!Function_592(&iParam0, 8, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam3))
			{
				if (!Function_592(&iParam0, 32, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 64, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_586(iVar0, 3, 1, bParam3))
			{
				if (!Function_592(&iParam0, 128, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_584(int iParam0, int iParam1, bool bParam2) //Position: 0x1CF42 / 118594
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_585(int iParam0, int iParam1, bool bParam2) //Position: 0x1CF57 / 118615
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_586(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1CF6C / 118636
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_587(int iParam0) //Position: 0x1CF89 / 118665
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_588(var uParam0, vector3 vParam1) //Position: 0x1CFFC / 118780
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_587(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 8, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000009:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 8, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000006E:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 16, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 32, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000031:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 64, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000007:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 128, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000008:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 256, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000014:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 512, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000018:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 512, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_589(struct<65> Param0) //Position: 0x1D225 / 119333
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_588(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_592(&Param0, 4, 1))
					{
						return Function_581(16);
					}
					return Function_580(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_583(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_592(&Param0, 2, 1))
						{
							return Function_581(128);
						}
						return Function_580(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_592(&Param0, 4, 1))
						{
							return Function_581(256);
						}
						return Function_580(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_583(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_592(&Param0, 4, 1))
					{
						return Function_581(16);
					}
					return Function_580(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_591(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (!Function_592(&Param0, 4, 1))
				{
					return Function_581(16);
				}
				return Function_580(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_583(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_590(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_580(128);
							}
							if (!Function_592(&Param0, 2, 1))
							{
								return Function_581(8);
							}
							return Function_580(8);
						}
						if (iParam4 == 2)
						{
							if (Function_590(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_580(256);
							}
							if (!Function_592(&Param0, 4, 1))
							{
								return Function_581(16);
							}
							return Function_580(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_590(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1D50B / 120075
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

int Function_591(int iParam0, vector3 vParam1) //Position: 0x1D5D9 / 120281
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_587(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&iParam0, 16, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&iParam0, 32, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_592(struct<69> Param0) //Position: 0x1D6FB / 120571
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_593(int iParam0) //Position: 0x1D725 / 120613
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_594(int iParam0) //Position: 0x1D75B / 120667
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_595(int iParam0) //Position: 0x1D779 / 120697
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (&iParam0 == &iLocal_533)
		{
			if (MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076))
			{
				Function_596();
			}
		}
	}
	return;
}

void Function_596() //Position: 0x1D7A2 / 120738
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave02_GunOnSeth", "Grave02_GunOnSeth", 0, 2, 1, 0, 1);
		Function_230(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_597(bool bParam0, int iParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1D7ED / 120813
{
	bool bVar0;
	
	if (Function_598(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			if (GET_CURRENT_GAME_TIME() <= iParam1)
			{
				bVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
				if (IS_ACTOR_VALID(&bVar0))
				{
					if (IS_ACTOR_VALID(&bParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - iParam1) <= 5,5f) || (!&bParam4 && (GET_CURRENT_GAME_TIME() - iParam1) <= 2,5f))
						{
							if (Function_340(&bParam0, &Global_54076, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(&bVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(&bVar0, &Global_54076))
									{
										if (&bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										iParam1 = (GET_CURRENT_GAME_TIME() + &fParam3);
										return &bVar0;
									}
								}
							}
						}
					}
					if (iParam1 <= 0.0f)
					{
						bParam0 = &bVar0;
						iParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					bParam0 = "";
					iParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_598(bool bParam0) //Position: 0x1D8CF / 121039
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

void Function_599() //Position: 0x1D915 / 121109
{
	if (IS_ACTOR_ALIVE(&Local_4 + 640[02]))
	{
		if (!DECOR_CHECK_EXIST(&Local_4 + 640[02], "bSpoke"))
		{
			if (Function_340(&Local_4 + 640[02], &Global_54076, 25.0f))
			{
				DECOR_SET_BOOL(&Local_4 + 640[02], "bSpoke", 1);
				SAY_SINGLE_LINE_SCRIPTED(&Local_4 + 640[02], "Grave02_TruAFarm", &Global_54076, 1, 0, 0, 0, 0);
			}
		}
	}
	return;
}

void Function_600(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1D99A / 121242
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

