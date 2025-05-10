//Decompiled with MagicRDR v1.0
//Function Count : 1050
//Statics Count : 1164
//Natives Count : 812
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
	var uLocal_11 = 0;
	int iLocal_12 = 0;
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
	var uLocal_28 = 11;
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
	var uLocal_50 = 11;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	float fLocal_71 = 0.0f;
	struct<1137> Local_72 = { 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	iLocal_12 = 0;
	iLocal_68 = 31;
	iLocal_69 = 33;
	iLocal_70 = 1;
	fLocal_71 = 2.0f;
	iLocal_687 = 1;
	iLocal_726 = 0;
	iLocal_727 = 0;
	iLocal_728 = 0;
	iLocal_729 = 0;
	iLocal_730 = 0;
	iLocal_731 = 0;
	iLocal_732 = 0;
	iLocal_733 = 0;
	iLocal_752 = 999;
	iLocal_753 = 0;
	iLocal_756 = 0;
	iLocal_757 = 0;
	iLocal_758 = 0;
	iLocal_763 = 4294967295;
	iLocal_766 = 0;
	iLocal_793 = 1;
	fLocal_801 = 1.0f;
	iLocal_802 = 10;
	vLocal_804 = { 0.0f, 0.3f, 0.0f };
	vLocal_807 = { 0.0f, 1.0f, 0.0f };
	iLocal_810 = 1;
	iLocal_811 = 4194304;
	iLocal_812 = 0;
	iLocal_1163 = 0;
	NET_ACTOR_SET_EQUIP_TYPE(3);
	STREAMING_REQUEST_ACTOR(1203, 1, false);
	while (!STREAMING_IS_ACTOR_LOADED(1203, 4294967295))
	{
		WAIT(false);
	}
	iLocal_359 = 99;
	iLocal_360 = 6;
	Local_361 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_361 };
	iLocal_728 = Function_1049("nogapcoopbadguys");
	while (!IS_EXITFLAG_SET() && Function_186())
	{
		WAIT(false);
	}
	Function_75();
	Function_1(&bLocal_406);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF8 / 248
{
	if (Function_74())
	{
		Function_67();
	}
	if (UI_ISACTIVE("MissionFailedMenu"))
	{
		UI_POP("MissionFailedMenu");
	}
	Function_66();
	if (iLocal_360 == 3)
	{
		Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Function_46(4096, 0);
	if (!Function_45(iParam0->f_44, 4))
	{
		UI_EXIT("MPSplash");
	}
	Function_28(iParam0);
	Function_27(iParam0, 0);
	Function_26(iParam0, 0);
	Function_25();
	Function_15();
	Function_14();
	UNK_0x2148AC15(4294967295, 0);
	SET_TIME_ACCELERATION(1.0f);
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	STOP_ALL_FIRES();
	RESET_PROPS_IN_WORLD();
	Function_13();
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
	Function_2(1);
	STREAMING_UNLOAD_SCENE();
	STREAMING_UNLOAD_BOUNDS();
	UI_EXIT("XpHud");
	return;
}

void Function_2(bool bParam0) //Position: 0x1BE / 446
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_11(4))
		{
			Function_8(1);
		}
		else
		{
			return;
		}
	}
	Function_5(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_3(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_3(bool bParam0, bool bParam1) //Position: 0x202 / 514
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_4(GET_LOCAL_SLOT(), bParam0) && !Function_11(2))
		{
			return;
		}
		if (!Function_11(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_11(4))
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

int Function_4(bool bParam0, bool bParam1) //Position: 0x27F / 639
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

void Function_5(int iParam0) //Position: 0x2A3 / 675
{
	Function_6(&Global_79337, iParam0);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0x2B2 / 690
{
	Function_7(iParam0, iParam1);
	return;
}

void Function_7(bool bParam0, int iParam1) //Position: 0x2BF / 703
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x2D2 / 722
{
	Function_9(&Global_79337, iParam0);
	return;
}

void Function_9(int iParam0, int iParam1) //Position: 0x2E1 / 737
{
	Function_10(iParam0, iParam1);
	return;
}

void Function_10(int iParam0, int iParam1) //Position: 0x2EE / 750
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_11(bool bParam0) //Position: 0x2FD / 765
{
	return Function_12(Global_79337, bParam0);
}

bool Function_12(int iParam0, bool bParam1) //Position: 0x30C / 780
{
	return (iParam0 && bParam1) == 0;
}

void Function_13() //Position: 0x319 / 793
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_14() //Position: 0x322 / 802
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_15() //Position: 0x337 / 823
{
	struct<17> Var0;
	
	Function_17();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_16(&Var0);
	return;
}

void Function_16(int iParam0) //Position: 0x359 / 857
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x369 / 873
{
	Function_18();
	return;
}

void Function_18() //Position: 0x372 / 882
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x37E / 894
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_24(&uVar0);
		Function_23(&vVar1);
		vVar1.z = uVar0;
		Function_16(&vVar1);
	}
	Function_22(&uVar0, bParam0);
	Function_21(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_20(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x3BB / 955
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x3CE / 974
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x3DD / 989
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x3E8 / 1000
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_24(var uParam0) //Position: 0x3F8 / 1016
{
	*uParam0 = Global_78480.f_120;
	return;
}

void Function_25() //Position: 0x407 / 1031
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

void Function_26(int iParam0, bool bParam1) //Position: 0x521 / 1313
{
	if (bParam1)
	{
		Function_10(iParam0 + 44, 64);
	}
	else
	{
		Function_7(iParam0 + 44, 64);
	}
	return;
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x541 / 1345
{
	if (bParam1)
	{
		Function_10(bParam0 + 44, 2);
	}
	else
	{
		Function_7(bParam0 + 44, 2);
	}
	return;
}

void Function_28(int iParam0) //Position: 0x55F / 1375
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_42();
	bVar0 = Function_41();
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
	Function_39(!Function_40(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_46(81920, 0);
	Function_46(8388608, 0);
	Function_29(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_29(bool bParam0) //Position: 0x611 / 1553
{
	Function_36(bParam0);
	Function_31(bParam0, 0);
	Function_30(32, 0, 1);
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

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x64B / 1611
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x673 / 1651
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_32(StackVal, StackVal, Function_35(), *(bParam0 + 72), !HUD_IS_FADED());
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
	if (Function_45(bParam0->f_48, 2))
	{
		Function_7(bParam0 + 48, 2);
	}
	Function_10(bParam0 + 48, 1);
	return;
}

var Function_32(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x704 / 1796
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
		Function_34(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_34(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_33(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_34(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_34(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_34(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_34(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_33(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_33(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x83D / 2109
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

vector3 Function_34(var uParam0, bool bParam1) //Position: 0x892 / 2194
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_35() //Position: 0x8AC / 2220
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_36(int iParam0) //Position: 0x8DB / 2267
{
	Function_38(iParam0);
	Function_37(1048576);
	return;
}

void Function_37(int iParam0) //Position: 0x8ED / 2285
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x926 / 2342
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_39(bool bParam0) //Position: 0x93D / 2365
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

bool Function_40(bool bParam0) //Position: 0x9C4 / 2500
{
	return Function_12(Global_79336, bParam0);
}

bool Function_41() //Position: 0x9D3 / 2515
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42() //Position: 0x9E8 / 2536
{
	if (Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 0, 1);
	return;
}

void Function_43() //Position: 0xA00 / 2560
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_44(int iParam0) //Position: 0xA0F / 2575
{
	return Function_45(Global_76905.f_132, iParam0);
}

bool Function_45(int iParam0, int iParam1) //Position: 0xA20 / 2592
{
	return (iParam0 && iParam1) == 0;
}

void Function_46(int iParam0, bool bParam1) //Position: 0xA2D / 2605
{
	if (bParam1)
	{
		Function_10(&Global_78480 + 124, iParam0);
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xA68 / 2664
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
		bVar0 = Function_41();
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
			if (Function_65())
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
		Function_50(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_14();
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
	Function_48(iParam9);
}

void Function_48(bool bParam0) //Position: 0xB58 / 2904
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
		Function_49();
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

void Function_49() //Position: 0xC07 / 3079
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

int Function_50(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC79 / 3193
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
	Function_64(iParam0, TO_FLOAT(bParam1), 1);
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE99 / 3737
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_62(390))), 32);
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
					bVar19 = (Function_61(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_61(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_59(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_56(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_53(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_52(), &Var9);
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

var Function_52() //Position: 0x14C6 / 5318
{
	int iVar0;
	
	return iVar0;
}

var Function_53(int iParam0) //Position: 0x14CE / 5326
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14DF / 5343
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_55(char* cParam0, bool bParam1) //Position: 0x15D4 / 5588
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x15ED / 5613
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_58(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_57(int iParam0, int iParam1) //Position: 0x1652 / 5714
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_58(int iParam0, bool bParam1) //Position: 0x1664 / 5732
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1676 / 5750
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
	if (((Function_60(iParam0) != 19 || Function_60(iParam0) != 17) || Function_60(iParam0) != 10) || Function_60(iParam0) != 9)
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

int Function_60(int iParam0) //Position: 0x17A6 / 6054
{
	return Global_35278[iParam020].f_48;
}

float Function_61(int iParam0) //Position: 0x17B5 / 6069
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_62(int iParam0) //Position: 0x17EE / 6126
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_63(int iParam0) //Position: 0x182B / 6187
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x19C5 / 6597
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

bool Function_65() //Position: 0x1C09 / 7177
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_66() //Position: 0x1C12 / 7186
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_67() //Position: 0x1C26 / 7206
{
	Function_69();
	Function_68(10, 3);
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x1C35 / 7221
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

void Function_69() //Position: 0x1D6C / 7532
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_73())
	{
		Function_72(10, 3);
	}
	else
	{
		Function_70();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_41(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_41());
	UI_POP("nDebugMenu");
	return;
}

void Function_70() //Position: 0x1DB7 / 7607
{
	Function_71(25, 2);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x1DC3 / 7619
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

void Function_72(int iParam0, int iParam1) //Position: 0x1FC1 / 8129
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

bool Function_73() //Position: 0x20F8 / 8440
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
				if (!Function_45(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_74() //Position: 0x215F / 8543
{
	return Global_30920;
}

void Function_75() //Position: 0x2168 / 8552
{
	NET_ACTOR_SET_EQUIP_TYPE(1);
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_41()), "nmineRider"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_41()), "nmineRider");
	}
	Function_185();
	SET_ACTOR_INVULNERABILITY(Function_41(), 0);
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_181(&bLocal_514);
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	Function_180();
	Function_167(1);
	Function_164();
	Function_163();
	if (IS_ACTOR_VALID(bLocal_694))
	{
		RELEASE_ACTOR(bLocal_694);
	}
	if (IS_OBJECT_VALID(bLocal_695))
	{
		RELEASE_OBJECT_REF(bLocal_695);
	}
	if (IS_LAYOUTREF_VALID(bLocal_688))
	{
		DESTROY_LAYOUT(bLocal_688);
	}
	Function_156(&uLocal_794);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING_RELEASE_MAIN_POI();
	if (Function_155())
	{
		Function_76(88);
	}
	else
	{
		Function_76(34);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x2231 / 8753
{
	Function_154(14, 1);
	Function_77(Function_152(), iParam0);
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x2245 / 8773
{
	Function_151(0, iParam0);
	Function_151(13, iParam0);
	Function_151(11, Function_150(29));
	Function_78(iParam1, 4294967295, 0, 0, 0);
	return;
}

void Function_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x226A / 8810
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_154(5, 1);
	Function_37(4096);
	switch (Function_149())
	{
		case 0x00000011:
		case 0x00000002:
			Function_109(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_102();
	Function_101();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_100(&Global_78480 + 220, &uVar0, 0);
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
			if (bParam4)
			{
				Function_97(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_100(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_79(bParam2);
}

void Function_79(bool bParam0) //Position: 0x2386 / 9094
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_96(2);
	if (bParam0)
	{
		Function_96(1);
	}
	else
	{
		Function_95(1);
	}
	Function_80();
	return;
}

void Function_80() //Position: 0x240F / 9231
{
	Function_93();
	Function_92();
	Function_92();
	Function_91();
	Function_91();
	Function_90();
	Function_90();
	Function_87(0);
	Function_87(0);
	if (!Function_65())
	{
		Function_85();
		Function_84();
		Function_83();
		Function_82();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_81();
	return;
}

void Function_81() //Position: 0x2461 / 9313
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

void Function_82() //Position: 0x2567 / 9575
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

void Function_83() //Position: 0x259A / 9626
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

void Function_84() //Position: 0x2728 / 10024
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

void Function_85() //Position: 0x28DC / 10460
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, int iParam2) //Position: 0x28EA / 10474
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
	
	bVar0 = Function_41();
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

struct<8> Function_87(int iParam0) //Position: 0x2ADB / 10971
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
					iVar2 = ((Function_89((50 + iVar4)) + Function_89((183 + iVar4))) + Function_89((90 + iVar4)));
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
	Function_88(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B81 / 11137
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
		Function_64(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_63(iParam0);
	if (bParam2)
	{
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_89(bool bParam0) //Position: 0x2E1C / 11804
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_90() //Position: 0x2E5D / 11869
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
		iVar2 = ((Function_89((50 + iVar3) + 15) + Function_89((183 + iVar3) + 15)) + Function_89((90 + iVar3) + 15));
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
	Function_88(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_91() //Position: 0x2EE6 / 12006
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
			iVar2 = ((Function_89((50 + iVar3) + 8) + Function_89((183 + iVar3) + 8)) + Function_89((90 + iVar3) + 8));
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
	Function_88(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_92() //Position: 0x2F7D / 12157
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
		iVar2 = ((Function_89((50 + iVar3)) + Function_89((183 + iVar3))) + Function_89((90 + iVar3)));
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
	Function_88(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_93() //Position: 0x2FFC / 12284
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_94(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_88(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_94(int iParam0, bool bParam1, int iParam2) //Position: 0x3035 / 12341
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
	Function_64(iParam0, bParam1, 1);
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_51(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_95(int iParam0) //Position: 0x323F / 12863
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x324E / 12878
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x325D / 12893
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_10(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_99(8));
	bVar0[0] = FLOOR(Function_99(8));
	if (Function_99(8) < 0.0f)
	{
		if (Function_98())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_99(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_99(7));
		bVar68[0] = bVar68[13];
		if (Function_98())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_98() //Position: 0x3304 / 13060
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_99(int iParam0) //Position: 0x330F / 13071
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_100(var uParam0, var uParam1, bool bParam2) //Position: 0x331F / 13087
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

void Function_101() //Position: 0x3364 / 13156
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

void Function_102() //Position: 0x338E / 13198
{
	if (Global_83864.f_1264 > 6)
	{
		Function_103(&(Global_50170[522]));
		Function_103(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_103(&(Global_50170[722]));
		Function_103(&(Global_50170[822]));
		Function_103(&(Global_50170[922]));
		Function_103(&(Global_50170[1022]));
		Function_103(&(Global_50170[1122]));
	}
	return;
}

void Function_103(bool bParam0) //Position: 0x33EE / 13294
{
	Global_56092[*bParam0] = 0;
	Function_104(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_104(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3408 / 13320
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_107(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_108(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_106(iParam0, 4))
	{
		Function_105(Function_108(iParam0), 0);
	}
}

void Function_105(char* cParam0, int iParam1) //Position: 0x34BF / 13503
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

bool Function_106(int iParam0, int iParam1) //Position: 0x34E4 / 13540
{
	return Function_45(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_107(int iParam0) //Position: 0x34F8 / 13560
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_108(int iParam0) //Position: 0x352C / 13612
{
	return Global_50170[iParam022].f_24;
}

void Function_109(var uParam0, var uParam1, int iParam2) //Position: 0x353B / 13627
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_141(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_147(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_104(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_141(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_147(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_104(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_110(17, 150, Function_147(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_104(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_110(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x36E4 / 14052
{
	Function_138(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), 1.0f, 0, 0);
	Function_134(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_131(iParam3);
	}
	Function_126(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_111();
}

void Function_111() //Position: 0x374A / 14154
{
	if (!Function_65())
	{
		if (!Function_125(1, 3, 1, 1))
		{
			Function_113(1);
			Function_112(1, 8);
		}
	}
	else
	{
		Function_79(0);
	}
	return;
}

void Function_112(var uParam0, int iParam1) //Position: 0x3773 / 14195
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_65())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_113(bool bParam0) //Position: 0x37B5 / 14261
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_114();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_80();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_7(&Global_63095, 1);
		Function_7(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_114() //Position: 0x3806 / 14342
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_124())
	{
		Function_121(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_121(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_116(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_116(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_115(StackVal, StackVal, vVar0))
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

bool Function_115(vector3 vParam0) //Position: 0x38C1 / 14529
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_116(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x38D9 / 14553
{
	int iVar0;
	
	iVar0 = Function_119(uParam2, uParam3);
	if (Function_118(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_10(&Global_63095, 1);
			Function_7(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_10(&Global_63095, 2);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_10(&Global_63095, 2);
		Function_7(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_117();
	return StackVal, StackVal, Function_117();
}

vector3 Function_117() //Position: 0x39C0 / 14784
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_118(int iParam0) //Position: 0x39C9 / 14793
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_119(bool bParam0, bool bParam1) //Position: 0x39DF / 14815
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
				fVar2 = Function_120(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_120(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_118(bVar0) && !bParam1)
	{
		bVar0 = Function_119(bParam0, 1);
	}
	return bVar0;
}

float Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x3AA6 / 15014
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_121(var uParam0, int iParam1) //Position: 0x3AC3 / 15043
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_123(Global_34573, &vVar4);
	if (!Function_122(Global_30640[0]))
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
	if (!Function_122(Global_30640[2]))
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
	if (!Function_122(Global_30640[1]))
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
	if (!Function_122(Global_30658[1]))
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
	if (!Function_122(Global_30658[3]))
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
	if (!Function_122(Global_30658[2]))
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
	if (!Function_122(Global_30658[4]))
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
	if (!Function_122(Global_30668[0]))
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
	if (!Function_122(Global_30668[1]))
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
	if (!Function_122(Global_30668[2]))
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
	if (!Function_122(Global_30679[0]))
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
	if (!Function_122(Global_30685[0]))
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
	if (!Function_122(Global_30685[1]))
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
	if (!Function_122(Global_30685[2]))
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
	if (!Function_122(Global_30693[0]))
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
	if (!Function_122(Global_30693[1]))
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
	if (!Function_122(Global_30693[2]))
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
	if (!Function_122(Global_30707[2]))
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
	if (!Function_122(Global_30707[3]))
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
	if (!Function_122(Global_30707[0]))
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
	if (!Function_122(Global_30717[0]))
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
	if (!Function_122(Global_30723[2]))
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
	if (!Function_122(Global_30723[1]))
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
	if (!Function_122(Global_30723[0]))
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
	if (!Function_122(Global_30679[1]))
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
	if (!Function_122(Global_30707[1]))
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
	Function_10(&Global_63095, 2);
	Function_7(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_115(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_122(int iParam0) //Position: 0x42EB / 17131
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_45(iVar0, 0x1000000) || Function_45(iVar0, 0x2000000)) || Function_45(iVar0, 0x4000000)) || !Function_45(iVar0, 0x10000000));
}

void Function_123(bool bParam0, int iParam1) //Position: 0x4326 / 17190
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_124() //Position: 0x4333 / 17203
{
	if (Function_45(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_125(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x434E / 17230
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

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x43F2 / 17394
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_35();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_130(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_129(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_128(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_127(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_130(), iVar1 + 1);
	return;
}

struct<16> Function_127(int iParam0) //Position: 0x4464 / 17508
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_128(int iParam0) //Position: 0x4485 / 17541
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_129(int iParam0) //Position: 0x44A6 / 17574
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_130() //Position: 0x44C7 / 17607
{
	return "CQueue_Count";
}

void Function_131(int iParam0) //Position: 0x44DC / 17628
{
	Function_132(iParam0, 1);
	return;
}

void Function_132(int iParam0, bool bParam1) //Position: 0x44E8 / 17640
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_10(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_133((iVar0 % 32)));
	}
	else
	{
		Function_7(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_133((iVar0 % 32)));
	}
	return;
}

int Function_133(bool bParam0) //Position: 0x453E / 17726
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_134(int iParam0, int iParam1) //Position: 0x454A / 17738
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_137(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_108(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_135(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_108(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_108(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_135(int iParam0) //Position: 0x45CC / 17868
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_136(int iParam0) //Position: 0x45EC / 17900
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_137(int iParam0) //Position: 0x461D / 17949
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x479B / 18331
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_139();
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

var Function_139() //Position: 0x48E7 / 18663
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x4934 / 18740
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_141(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x494C / 18764
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
	Function_126(&Var0, bParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_140(&fParam5, bParam8, bParam9);
	Function_104(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_143(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_131(iParam12);
	}
	Function_142(iParam0, 4);
	Function_111();
}

void Function_142(int iParam0, int iParam1) //Position: 0x49C2 / 18882
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x49D6 / 18902
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_137(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_108(iParam0));
	if ((bParam3 && Function_106(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_108(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_146(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_145(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_135(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_108(iParam0), &Var7, 0, 2, Function_106(iParam0, 4));
			if (!bParam3)
			{
				Function_144(iParam0, 4);
			}
		}
	}
}

void Function_144(int iParam0, int iParam1) //Position: 0x4A93 / 19091
{
	Function_10(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_145(int iParam0) //Position: 0x4AA7 / 19111
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_146(int iParam0) //Position: 0x4AD5 / 19157
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_147() //Position: 0x4B05 / 19205
{
	return "MP_Unstoppable_Icon_128";
}

float Function_148(int iParam0) //Position: 0x4B25 / 19237
{
	return Global_50170[iParam022].f_12;
}

int Function_149() //Position: 0x4B34 / 19252
{
	return Global_79349.f_16;
}

int Function_150(int iParam0) //Position: 0x4B40 / 19264
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_151(int iParam0, int iParam1) //Position: 0x4B59 / 19289
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

bool Function_152() //Position: 0x4B73 / 19315
{
	return Function_153(0);
}

int Function_153(int iParam0) //Position: 0x4B7D / 19325
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_154(int iParam0, int iParam1) //Position: 0x4B8D / 19341
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

bool Function_155() //Position: 0x4BB2 / 19378
{
	return Function_45(Global_79962, 64);
}

void Function_156(int iParam0) //Position: 0x4BC1 / 19393
{
	Function_157(iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x4BCC / 19404
{
	if (StackVal >= 0)
	{
		Function_158(TO_FLOAT(StackVal), "XP_Coop_complete", 1);
		iParam0->f_8 = 0;
	}
	return;
}

int Function_158(float fParam0, bool bParam1, bool bParam2) //Position: 0x4BFE / 19454
{
	if (!Function_162())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_160(8, fParam0);
	}
	Function_159(487, (fParam0 * Global_3362), bParam1);
	return 1;
}

void Function_159(int iParam0, bool bParam1, int iParam2) //Position: 0x4C2E / 19502
{
	Function_50(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_160(int iParam0, float fParam1) //Position: 0x4C4A / 19530
{
	Function_161(iParam0, (Function_99(iParam0) + fParam1));
	return;
}

void Function_161(int iParam0, float fParam1) //Position: 0x4C5D / 19549
{
	(*&Global_78480 + 176)[iParam0] = fParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = fParam1;
	}
	return;
}

bool Function_162() //Position: 0x4C86 / 19590
{
	if (Function_65())
	{
		return (Function_149() != 1 || Function_149() != 0);
	}
	return 0;
}

void Function_163() //Position: 0x4C9F / 19615
{
	Function_181(&Local_72 + 4);
	RELEASE_LAYOUT_REF(Local_72);
	return;
}

void Function_164() //Position: 0x4CB1 / 19633
{
	bool bVar0;
	bool bVar1;
	
	Function_165(&Local_72 + 224, 0, 0);
	Function_165(&Local_72 + 228, 0, 0);
	Function_165(&Local_72 + 232, 0, 0);
	Function_165(&Local_72 + 236, 0, 0);
	Function_165(&Local_72 + 240, 0, 0);
	Function_165(&Local_72 + 280, 0, 0);
	Function_165(&Local_72 + 284, 0, 0);
	Function_165(&Local_72 + 288, 0, 0);
	Function_165(&Local_72 + 292, 0, 0);
	Function_165(&Local_72 + 296, 0, 0);
	Function_165(&Local_72 + 300, 0, 0);
	Function_165(&Local_72 + 304, 0, 0);
	Function_165(&Local_72 + 308, 0, 0);
	Function_165(&Local_72 + 312, 0, 0);
	Function_165(&Local_72 + 316, 0, 0);
	Function_165(&Local_72 + 244, 0, 0);
	Function_165(&Local_72 + 248, 0, 0);
	Function_165(&Local_72 + 252, 0, 0);
	Function_165(&Local_72 + 256, 0, 0);
	Function_165(&Local_72 + 260, 0, 0);
	Function_165(&Local_72 + 276, 0, 0);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner");
	if (IS_ACTOR_VALID(bVar0))
	{
		RELEASE_ACTOR(bVar0);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		RELEASE_ACTOR(bVar1);
	}
	return;
}

void Function_165(var uParam0, bool bParam1, bool bParam2) //Position: 0x4DD1 / 19921
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

bool Function_166(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4E4D / 20045
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_167(bool bParam0) //Position: 0x4E67 / 20071
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if ((&Local_944 + 616[bVar05])->f_16 >= 4294967295)
		{
			RESET_THIS_TREE_TYPE_CLEARING((&Local_944 + 616[bVar05])->f_16);
		}
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_944 + 616[bVar05])->f_16 = 4294967295;
		bVar0++;
	}
	if (Function_177())
	{
		bVar0 = false;
		while (bVar0 <= Local_944.f_744)
		{
			Function_174(Function_175(bVar0, 1));
			bVar0++;
		}
	}
	bVar0 = false;
	while (bVar0 <= 18)
	{
		Function_170(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bVar0, 4294967295);
		bVar0++;
	}
	UNK_0x2148AC15(4294967295, 0);
	Function_169(Local_944.f_608);
	if (IS_LAYOUTREF_VALID(Local_944.f_756))
	{
		DESTROY_LAYOUT(Local_944.f_756);
	}
	Function_168(&Local_944 + 812);
	Function_168(&Local_944 + 816);
	Function_181(&Local_944 + 760);
	return;
}

void Function_168(int iParam0) //Position: 0x4F65 / 20325
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	return;
}

int Function_169(bool bParam0) //Position: 0x4F7A / 20346
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

int Function_170(bool bParam0, bool bParam1) //Position: 0x4F90 / 20368
{
	Function_173("DESPAWN_BAG", bParam0);
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_172(StackVal);
		if (!bParam1 || !NET_IS_IN_SESSION())
		{
			DESTROY_OBJECT(StackVal);
		}
		else
		{
			RELEASE_OBJECT_REF(StackVal);
		}
	}
	Function_171(bParam0);
	if (IS_BLIP_VALID(Local_944[bParam08]))
	{
		REMOVE_BLIP(Local_944[bParam08]);
	}
	return 1;
}

void Function_171(int iParam0) //Position: 0x5007 / 20487
{
	Function_173("REMOVE_GLOW_FROM_BAG", iParam0);
	if (!Function_45(Local_944[iParam08].f_24, 1))
	{
		return;
	}
	Function_7(&Local_944[iParam08] + 24, 1);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT_GLOW(StackVal);
	}
	return;
}

void Function_172(bool bParam0) //Position: 0x5063 / 20579
{
	var uVar0;
	char* cVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		uVar0 = _GET_OBJECT_ATTACHMENT(bParam0);
		if (IS_ATTACHMENT_VALID(uVar0))
		{
			REMOVE_OBJECT_ATTACHMENT(uVar0);
		}
		cVar1 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
		if (IS_OBJECT_ANIMATOR_VALID(cVar1))
		{
			DESTROY_OBJECT_ANIMATOR(cVar1);
		}
	}
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x5099 / 20633
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return;
}

void Function_174(bool bParam0) //Position: 0x50A7 / 20647
{
	int iVar0;
	
	if (DECOR_GET_INT_VERBOSE(bParam0, "ClearRequest", &iVar0))
	{
		RESET_THIS_TREE_TYPE_CLEARING(iVar0);
	}
	return;
}

var Function_175(bool bParam0, bool bParam1) //Position: 0x50CE / 20686
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_176(), 24);
	if (bParam1)
	{
		stradd(&cVar0, I2STR(bParam0), 24);
	}
	else
	{
		stradd(&cVar0, I2STR(Local_813[bParam07]), 24);
	}
	return FIND_OBJECT_IN_LAYOUT(Local_944.f_752, &cVar0);
}

var Function_176() //Position: 0x5105 / 20741
{
	return "FlagSpawn_";
}

bool Function_177() //Position: 0x5118 / 20760
{
	return !(Function_179() || Function_178());
}

bool Function_178() //Position: 0x5126 / 20774
{
	return Local_944.f_836 != 2;
}

bool Function_179() //Position: 0x5134 / 20788
{
	return Local_944.f_836 != 3;
}

void Function_180() //Position: 0x5142 / 20802
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_72, "BlockedEntrance1Prop");
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_72, "BlockedEntrance2Prop");
	bVar2 = FIND_OBJECT_IN_LAYOUT(Local_72, "BlockedEntrance3Prop");
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	if (IS_OBJECT_VALID(bVar2))
	{
		DESTROY_OBJECT(bVar2);
	}
	return;
}

void Function_181(bool bParam0) //Position: 0x51C9 / 20937
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_182(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_182(var uParam0, int iParam1) //Position: 0x51EF / 20975
{
	if (Function_184(uParam0[iParam13], 4))
	{
		if (Function_184(uParam0[iParam13], 1))
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
			Function_183(uParam0[iParam13], 1);
			Function_183(uParam0[iParam13], 2);
			Function_183(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_183(var uParam0, int iParam1) //Position: 0x531D / 21277
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_184(int iParam0, int iParam1) //Position: 0x5337 / 21303
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185() //Position: 0x5354 / 21332
{
	if (iLocal_729)
	{
		UI_EXIT("NetTimer");
		iLocal_729 = 0;
	}
	return;
}

var Function_186() //Position: 0x5372 / 21362
{
	int iVar0;
	
	iVar0 = 1;
	Function_1048();
	if (NET_IS_SESSION_HOST())
	{
		Function_1029();
	}
	if (Function_1028(&bLocal_406))
	{
		Function_370();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_369(StackVal, &Local_590, Local_592);
	}
	else if (UNK_0xA80C6DE6(&Local_590))
	{
		Function_369(StackVal, &Local_592, Local_590);
	}
	if (NET_IS_IN_SESSION())
	{
		if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
		{
			Function_368(StackVal, StackVal, StackVal, StackVal, &(Local_599[GET_LOCAL_SLOT()5]), Local_594);
		}
	}
	if (iLocal_359 != 99)
	{
		Function_366(3);
		iVar0 = Function_211(&bLocal_406);
		Function_208(bLocal_718, bLocal_719, 27860, 1);
		Function_208(bLocal_717, Local_72, 21517, 1);
	}
	return iVar0;
}

void Function_187(bool bParam0) //Position: 0x540D / 21517
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
		if (bVar0 <= 101 && bVar0 >= 210)
		{
			SET_ACTOR_FACTION(bParam0, 19);
			SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
			ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
		}
		switch (bVar0)
		{
			case 0x00000065:
				Function_205(&bParam0, iLocal_777);
				break;
			
			case 0x00000066:
				Function_205(&bParam0, iLocal_777);
				break;
			
			case 0x000000C8:
				SQUAD_JOIN(bParam0, Local_72.f_280);
				Function_204(&bParam0, 9, 5, bLocal_779);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000C9:
				SQUAD_JOIN(bParam0, Local_72.f_284);
				Function_188(&bParam0, bLocal_781);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000CA:
				SQUAD_JOIN(bParam0, Local_72.f_288);
				Function_188(&bParam0, bLocal_783);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000CB:
				SQUAD_JOIN(bParam0, Local_72.f_292);
				Function_188(&bParam0, bLocal_785);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000CC:
				SQUAD_JOIN(bParam0, Local_72.f_296);
				Function_188(&bParam0, bLocal_786);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000CD:
				SQUAD_JOIN(bParam0, Local_72.f_300);
				Function_204(&bParam0, 16, 1, bLocal_787);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000CE:
				SQUAD_JOIN(bParam0, Local_72.f_304);
				Function_204(&bParam0, 16, 1, bLocal_788);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000D0:
				SQUAD_JOIN(bParam0, Local_72.f_308);
				Function_204(&bParam0, 17, 0, bLocal_780);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000D1:
				SQUAD_JOIN(bParam0, Local_72.f_312);
				Function_204(&bParam0, 17, 0, bLocal_782);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			
			case 0x000000D2:
				SQUAD_JOIN(bParam0, Local_72.f_316);
				Function_204(&bParam0, 17, 0, bLocal_784);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				break;
			}
	}
	return;
}

void Function_188(bool bParam0, bool bParam1) //Position: 0x55C4 / 21956
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_203(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 3.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 4);
				Function_202(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_201(bParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_203(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 5);
				Function_202(bParam0, 1.0f);
				Function_201(bParam0, 9, 0);
				break;
			
			case 0x00000002:
				Function_200(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 6);
				Function_202(bParam0, 2.0f);
				Function_201(bParam0, 10, 1);
				break;
			
			case 0x00000003:
				Function_196(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 11);
				Function_202(bParam0, 3.0f);
				Function_201(bParam0, 11, 2);
				break;
			
			case 0x00000004:
				Function_196(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 45.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 9, 30.0f);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 11);
				Function_202(bParam0, 4.0f);
				Function_201(bParam0, 11, 2);
				break;
			
			case 0x00000005:
				Function_196(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 9, 15.0f);
				AI_SET_BURST_DURATION(*bParam0, 1.5f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 5);
				Function_202(bParam0, 5.0f);
				Function_201(bParam0, 18, 3);
				break;
		}
		Function_189(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SUPPRESSION was passed an invalid actor");
	}
	return;
}

void Function_189(int iParam0) //Position: 0x57AA / 22442
{
	int iVar0;
	bool bVar1;
	
	if (Function_155())
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 3)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if (Function_190(bVar1) >= 0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(*iParam0, 210.0f);
	switch (iVar0)
	{
		case 0x00000001:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(*iParam0) * 0.6f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 53, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 53) * 0.6f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 55, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 55) * 0.6f));
			break;
		
		case 0x00000002:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(*iParam0) * 0.7f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 53, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 53) * 0.7f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 55, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 55) * 0.7f));
			break;
		
		case 0x00000003:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(*iParam0) * 0.8f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 53, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 53) * 0.8f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 55, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 55) * 0.8f));
			break;
		
		case 0x00000004:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(*iParam0) * 0.9f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 53, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 53) * 0.7f));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 55, (COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(*iParam0, 55) * 0.7f));
			break;
	}
	return;
}

int Function_190(bool bParam0) //Position: 0x5912 / 22802
{
	if (Function_195(bParam0))
	{
		if (Function_191(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_191(bool bParam0, int iParam1, bool bParam2) //Position: 0x5934 / 22836
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_194(iParam1, bParam2);
	}
	if (!Function_193(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_192(iParam1), 64);
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

var Function_192(int iParam0) //Position: 0x59B5 / 22965
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

bool Function_193(bool bParam0) //Position: 0x5CCE / 23758
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

bool Function_194(int iParam0, bool bParam1) //Position: 0x5D6F / 23919
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_195(bool bParam0) //Position: 0x5D8F / 23951
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_193(bParam0);
}

void Function_196(bool bParam0) //Position: 0x5DA5 / 23973
{
	Function_198(bParam0);
	Function_197(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	return;
}

void Function_197(bool bParam0, int iParam1) //Position: 0x5F2D / 24365
{
	var uVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	uVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, iParam1);
	}
	return;
}

void Function_198(bool bParam0) //Position: 0x5F60 / 24416
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
	Function_199(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_199(var uParam0, bool bParam1) //Position: 0x62C4 / 25284
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

void Function_200(bool bParam0) //Position: 0x62E6 / 25318
{
	Function_198(bParam0);
	Function_197(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	return;
}

void Function_201(var uParam0, bool bParam1, bool bParam2) //Position: 0x6440 / 25664
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam0);
	if (bParam2 != 4294967295)
	{
		GIVE_WEAPON_TO_ACTOR(*uParam0, bParam2, 0.0f, 1, 1);
	}
	GIVE_WEAPON_TO_ACTOR(*uParam0, bParam1, 1.0f, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(*uParam0, bParam1, 1);
	return;
}

void Function_202(var uParam0, float fParam1) //Position: 0x6472 / 25714
{
	float fVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_ALIVE(*uParam0) && fParam1 < 0.0f)
		{
			fVar0 = (18.0f * fParam1);
			SET_ACTOR_MAX_HEALTH(*uParam0, fVar0);
			SET_ACTOR_HEALTH(*uParam0, fVar0);
		}
	}
	else
	{
		if (!IS_ACTOR_VALID(*uParam0))
		{
			LOG_ERROR("ERROR:  SET_ACTOR_HEALTH_BY_SHOT was passed an invalid squad");
		}
		if (fParam1 >= 0.0f)
		{
			LOG_ERROR("ERROR:  SET_ACTOR_HEALTH_BY_SHOT was passed a value <= 0");
		}
	}
	return;
}

void Function_203(bool bParam0) //Position: 0x653D / 25917
{
	Function_198(bParam0);
	Function_197(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x667B / 26235
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam3)
		{
			case 0x00000000:
				Function_203(*bParam0);
				Function_202(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_201(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000001:
				Function_203(*bParam0);
				Function_202(bParam0, 1.0f);
				Function_201(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000002:
				Function_200(*bParam0);
				Function_202(bParam0, 2.0f);
				Function_201(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000003:
				Function_196(*bParam0);
				Function_202(bParam0, 3.0f);
				Function_201(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000004:
				Function_196(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				Function_202(bParam0, 4.0f);
				Function_201(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000005:
				Function_196(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_202(bParam0, 5.0f);
				Function_201(bParam0, bParam1, bParam2);
				break;
		}
		Function_189(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ASSAULT was passed an invalid actor");
	}
}

void Function_205(bool bParam0, int iParam1) //Position: 0x67D7 / 26583
{
	SET_ACTOR_FACTION(*bParam0, 19);
	Function_206(bParam0, iParam1);
	SET_ACTOR_VISION_MAX_RANGE(*bParam0, 100.0f, 1);
	SET_ACTOR_VISION_XRAY(*bParam0, 1);
	AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(*bParam0, 180.0f);
	SET_ACTOR_UPDATE_PRIORITY(*bParam0, false);
	TASK_STAND_STILL(*bParam0, -1.0f, 0, 0);
	return;
}

void Function_206(int iParam0, int iParam1) //Position: 0x681C / 26652
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		switch (iParam1)
		{
			case 0x00000000:
				Function_207(*iParam0);
				AI_SET_BURST_DURATION(*iParam0, 2.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 5);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 70.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 0);
				Function_202(iParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 15, 1);
				Function_201(iParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_203(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*iParam0, 3.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 10);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 75.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 0);
				Function_202(iParam0, 1.0f);
				Function_201(iParam0, 9, 0);
				break;
			
			case 0x00000002:
				Function_200(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*iParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 15);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 100.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				Function_202(iParam0, 2.0f);
				Function_201(iParam0, 10, 1);
				break;
			
			case 0x00000003:
				Function_196(*iParam0);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 125.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*iParam0, 5.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 20);
				Function_202(iParam0, 3.0f);
				Function_201(iParam0, 11, 2);
				break;
			
			case 0x00000004:
				Function_196(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 45.0f);
				AI_SET_BURST_DURATION(*iParam0, 6.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 25);
				Function_202(iParam0, 4.0f);
				Function_201(iParam0, 11, 2);
				break;
			
			case 0x00000005:
				Function_196(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 200.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				AI_SET_BURST_DURATION(*iParam0, 7.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 30);
				Function_202(iParam0, 5.0f);
				Function_201(iParam0, 18, 3);
				break;
		}
		Function_189(iParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_GATLING was passed an invalid actor");
	}
	return;
}

void Function_207(bool bParam0) //Position: 0x6A66 / 27238
{
	Function_198(bParam0);
	Function_197(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

int Function_208(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6B98 / 27544
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
						if (Function_209(bVar4) == bParam1)
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

int Function_209(bool bParam0) //Position: 0x6C7A / 27770
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

void Function_210(bool bParam0) //Position: 0x6CD4 / 27860
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
		switch (bVar0)
		{
			case 0x00000063:
				bLocal_694 = bParam0;
				STOP_VEHICLE(bLocal_694);
				SET_ACTOR_INVULNERABILITY(bLocal_694, 1);
				TRAIN_SET_ENGINE_ENABLED(iLocal_693, 0);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_693, 0);
				VEHICLE_SET_HANDBRAKE(bLocal_694, 1.0f);
				TRAIN_SET_TARGET_SPEED(iLocal_693, 0.0f);
				ENABLE_VEHICLE_SEAT(bLocal_694, 0, 0);
				ENABLE_VEHICLE_SEAT(bLocal_694, 1, 0);
				SET_ALLOW_JACK(bLocal_694, 0);
				break;
			}
	}
	return;
}

int Function_211(bool bParam0) //Position: 0x6D40 / 27968
{
	int iVar0;
	
	Function_363();
	Function_362();
	if (!iLocal_766 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_766 = 1;
	}
	if (Function_361(bParam0))
	{
		if (!((((((iLocal_360 != 0 || iLocal_360 != 1) || iLocal_360 != 2) || iLocal_360 != 3) || iLocal_360 != 4) || iLocal_360 != 5) || iLocal_360 != 105))
		{
			if (Function_359())
			{
				NET_LOG(iLocal_687, "Local State", "All players have run out of lives, ending", false, false, false, false);
				Function_328(bParam0, "COOP_failed_everyone_dead", "GEN_DEATH_01");
			}
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_328(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	iVar0 = Function_212(bParam0);
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
	return 1;
}

int Function_212(bool bParam0) //Position: 0x6E65 / 28261
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
	
	bVar0 = Function_41();
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
		bParam0->f_64 = Function_327((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_326())
	{
		if (bVar1)
		{
			switch (Function_324())
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
	if (Function_323(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_45(bParam0->f_44, 2) || Function_45(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_322() && IS_PS3())
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
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
	if (((Function_323(bParam0) && Function_321(4096)) && Function_162()) && !Function_40(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_45(bParam0->f_44, 2) || Function_45(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
				{
					bParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					Function_320(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_319(4096);
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
	fVar8 = Function_318();
	if (bVar1)
	{
		bVar9 = Function_317(bVar0);
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
			if ((Function_315(8192) || Function_45(bParam0->f_48, 512)) && !Function_194(1, 1))
			{
				iVar6 = Function_314(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_45(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_10(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_312("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_161(2, NET_GET_NET_TIME());
								Function_310(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_46(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_99(2));
						if (!Function_194(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_7(bParam0 + 48, 512);
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
					Function_46(65536, 0);
					Function_7(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_46(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_194(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_46(8388608, 0);
					}
				}
			}
			if (Function_309(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_45(bParam0->f_44, 16))
					{
						Function_10(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_308(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_7(bParam0 + 48, 32);
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
					Function_307(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_30(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_46(65536, 0);
			Function_46(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_45(bParam0->f_44, 8))
			{
				Function_306(0);
			}
			else if (bVar1)
			{
				bParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
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
			bParam0->f_56 = 4294967295;
			bParam0->f_68 = 0.0f;
			if (Function_305(bParam0 + 116, &Global_78617 + 2648))
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
			Function_301(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_285(bParam0, bParam0->f_12 != 0);
			}
			Function_283(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_283(bParam0, 1);
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
			Function_283(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_45(bParam0->f_44, 512))
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
			Function_283(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_282();
				Function_30(32, 0, 1);
				Function_39(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_283(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_42();
			}
			break;
		
		case 0x00000008:
			if (Function_45(bParam0->f_44, 2))
			{
				if (Function_45(bParam0->f_44, 512))
				{
					if (!Function_45(bParam0->f_48, 4096))
					{
						Function_31(bParam0, 1);
						Function_10(bParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_194(16384, 1))
						{
							Function_31(bParam0, 0);
							Function_46(16384, 1);
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
					Function_283(bParam0, 1);
				}
			}
			else
			{
				Function_283(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_283(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_281(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				Function_39(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_14();
				Function_42();
				Function_30(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_35(), Function_52(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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
				STREAMING_REQUEST_ACTOR(bParam0->f_108, 1, false);
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
				if (!Function_45(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_10(bParam0 + 48, 8);
				}
				if (Function_276(StackVal, Function_45(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_261(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_45(bParam0->f_48, 32), 1))
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
				if (Function_45(bParam0->f_44, 1))
				{
					Function_7(bParam0 + 44, 1);
				}
				else
				{
					Function_36(bParam0);
					Function_31(bParam0, 0);
				}
				bVar0 = Function_41();
				Function_260(bVar0);
				if (Function_45(bParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
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
			if (!Function_257(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_256(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_45(bParam0->f_44, 8))
				{
					Function_255(bParam0 + 192, 0, 1, 1);
					Function_249(bParam0 + 192);
					Function_240(&bVar0, 0, 0, 0);
					Function_240(&bVar0, 0, 0, 0);
					Function_239(bVar0);
				}
				else
				{
					Function_255(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_238(bVar0);
					vVar10 = { StackVal, StackVal, Function_238(bVar0) };
					bVar13 = Function_237(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_236(bVar13))
					{
						if (StackVal || Function_162() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_232(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_231(&(Global_29008[StackVal]), 4194304);
				}
				Function_319(32);
				*bParam0 = 13;
			}
			if (!Function_45(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_10(bParam0 + 48, 128);
					Function_7(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_319(32);
				Function_232(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_236(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_229(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_229(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_229(&(Global_29008[StackVal]), 4194304))
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
					if (Function_236(bVar14))
					{
						if (StackVal && (!Function_230(bVar14) && !Function_229(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_228(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_227();
			if (!Function_45(bParam0->f_44, 32))
			{
				if (Function_226())
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
						bVar15 = Function_225(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_225(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_225(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_225(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_225(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_225(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_225(bVar0, 46);
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
				if (!Function_45(bParam0->f_44, 64))
				{
					Function_224(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_46(16384, 0);
			Function_223(bVar0, !Function_45(bParam0->f_44, 96));
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
			Function_283(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_39(1);
			}
			else if (!Function_221())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_214(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_213(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_283(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_283(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_45(bParam0->f_44, 4))
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
			Function_283(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_281(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_283(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_281(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_283(bParam0, 1);
			if (Function_221())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_281(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_213(int iParam0) //Position: 0x7F20 / 32544
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_214(int iParam0) //Position: 0x7F3C / 32572
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_14();
		iVar0 = "";
		if (Function_45(iParam0->f_44, 256))
		{
			if (Function_45(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_220(&Global_78578 + 96))
			{
				if (FABS(Function_215(&Global_78578 + 96)) > 1.0f)
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

float Function_215(bool bParam0) //Position: 0x8033 / 32819
{
	return -Function_216(bParam0);
}

float Function_216(bool bParam0) //Position: 0x803F / 32831
{
	if (Function_220(bParam0))
	{
		if (Function_219(bParam0))
		{
			return StackVal;
		}
		Function_217();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_217() //Position: 0x8110 / 33040
{
	if (!Function_218())
	{
	}
	return;
}

bool Function_218() //Position: 0x811D / 33053
{
	return NET_IS_IN_SESSION();
}

bool Function_219(bool bParam0) //Position: 0x8126 / 33062
{
	return Function_45(*bParam0, 2);
}

bool Function_220(bool bParam0) //Position: 0x8133 / 33075
{
	return Function_45(*bParam0, 1);
}

bool Function_221() //Position: 0x8140 / 33088
{
	return (HUD_IS_FADED() || Function_222(0));
}

bool Function_222(bool bParam0) //Position: 0x814E / 33102
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

void Function_223(bool bParam0, int iParam1) //Position: 0x81F2 / 33266
{
	struct<5> Var0;
	
	Function_46(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_321(256))
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

void Function_224(bool bParam0) //Position: 0x8248 / 33352
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

int Function_225(bool bParam0, int iParam1) //Position: 0x8265 / 33381
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_226() //Position: 0x8276 / 33398
{
	return !Function_162();
}

void Function_227() //Position: 0x8280 / 33408
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_41();
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

void Function_228(bool bParam0) //Position: 0x82BF / 33471
{
	if (!Function_236(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_231(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_229(var uParam0, int iParam1) //Position: 0x831A / 33562
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_230(bool bParam0) //Position: 0x8336 / 33590
{
	if (!Function_236(bParam0))
	{
		return 1;
	}
	return Function_229(&(Global_29008[bParam0]), 4);
}

void Function_231(var uParam0, int iParam1) //Position: 0x8352 / 33618
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_232(int iParam0, bool bParam1, int iParam2) //Position: 0x8361 / 33633
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
		if (Function_236(Global_29006))
		{
			Function_231(&(Global_29008[Global_29006]), 131072);
			Function_235(&(Global_29008[Global_29006]), 2097152);
			Function_233(Global_29006);
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
				if (Function_229(&(Global_29008[iVar0]), 4) || Function_229(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_235(&(Global_29008[iVar0]), 2097155);
					Function_231(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_65())
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

void Function_233(int iParam0) //Position: 0x846C / 33900
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_234())
			{
				return;
			}
		}
		if (!Function_229(&(Global_29008[iParam0]), 2048))
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

bool Function_234() //Position: 0x84EB / 34027
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_229(&(Global_29008[iVar0]), 4) || Function_229(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_235(var uParam0, int iParam1) //Position: 0x8554 / 34132
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_236(bool bParam0) //Position: 0x856B / 34155
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_237(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8581 / 34177
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

vector3 Function_238(bool bParam0) //Position: 0x861C / 34332
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_239(bool bParam0) //Position: 0x862D / 34349
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

var Function_240(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x8660 / 34400
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
					if (Function_248(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_247(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_246(bVar2))
					{
						if (Function_245(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_248(bVar3, 1))
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
						if (Function_248(bVar3, 1))
						{
							bVar24 = (Function_247(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_35(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_35(), &cVar28, &uVar26))
						{
							Function_241(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_248(bVar3, 1))
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
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 5f, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return iVar0;
}

void Function_241(var uParam0, int iParam1) //Position: 0x8943 / 35139
{
	*iParam1 = Function_242(uParam0, Function_243(), 0);
	iParam1->f_4 = Function_242(uParam0, Function_243() + 8, Function_243());
	return;
}

var Function_242(var uParam0, int iParam1, bool bParam2) //Position: 0x8966 / 35174
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_133((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_243() //Position: 0x8985 / 35205
{
	return Function_244(39);
}

int Function_244(bool bParam0) //Position: 0x8990 / 35216
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

bool Function_245(bool bParam0) //Position: 0x89BE / 35262
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

bool Function_246(bool bParam0) //Position: 0x89E0 / 35296
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_247(int iParam0, bool bParam1) //Position: 0x89F2 / 35314
{
	if (Function_248(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_248(bool bParam0, int iParam1) //Position: 0x8A0C / 35340
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_249(int iParam0) //Position: 0x8A1F / 35359
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_252(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_41()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_251(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_250(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_35(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_35(), &cVar5, &uVar3))
			{
				Function_241(uVar3, &Var13);
				Function_250(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_250(struct<5> Param0) //Position: 0x8AC6 / 35526
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_246(Param0))
	{
		return;
	}
	bVar0 = Function_41();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_248(bVar1, 1))
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

bool Function_251(int iParam0) //Position: 0x8B46 / 35654
{
	return Function_12(Global_83864.f_1252, iParam0);
}

void Function_252(int iParam0, int iParam1) //Position: 0x8B58 / 35672
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_41();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_253(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_253(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_253(23, iParam1))
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
			bVar4 = Function_225(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_225(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_253(int iParam0, int iParam1) //Position: 0x8CD5 / 36053
{
	return Function_254(iParam0, iParam1) < 4294967295;
}

int Function_254(int iParam0, int iParam1) //Position: 0x8CE4 / 36068
{
	int iVar0;
	
	if (!Function_246(iParam0))
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

void Function_255(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8D17 / 36119
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_41();
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
		Function_250(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_256(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8D62 / 36194
{
	float fVar0;
	bool bVar1;
	
	if (Function_65() || !bParam1)
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

bool Function_257(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x8DFF / 36351
{
	int iVar0;
	
	if (bParam1)
	{
		Function_9(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_9(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_9(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_9(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_9(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_9(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_9(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_9(&iVar0, 1048576);
	}
	return Function_258(bParam0, iVar0);
}

bool Function_258(bool bParam0, int iParam1) //Position: 0x8E6E / 36462
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_259(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_259(iParam1, 64))
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

bool Function_259(var uParam0, int iParam1) //Position: 0x8F47 / 36679
{
	return (uParam0 && iParam1) == 0;
}

void Function_260(bool bParam0) //Position: 0x8F54 / 36692
{
	Function_46(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_261(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x8F75 / 36725
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_41();
	Function_272();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_271();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_258(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_321(256);
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
		Function_268(bVar0, 0);
		Function_263();
		Function_262(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_237(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_236(uVar14))
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

void Function_262(char* cParam0, vector3 vParam1) //Position: 0x90EC / 37100
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_263() //Position: 0x912A / 37162
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_267(iVar1))
		{
			uVar2 = Function_266(iVar1);
			Function_264(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_264(int iParam0, bool bParam1) //Position: 0x915C / 37212
{
	if (!Function_267(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_265(222, Global_26401[iParam0], 0);
		if (Function_89(222) <= 0)
		{
			Function_88(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_88((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_265((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_265(222, bParam1, 0);
	}
	return;
}

int Function_265(int iParam0, bool bParam1, int iParam2) //Position: 0x91E5 / 37349
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
	Function_63(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_51(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_266(int iParam0) //Position: 0x93E0 / 37856
{
	if (!Function_267(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_267(int iParam0) //Position: 0x93F8 / 37880
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_268(bool bParam0, bool bParam1) //Position: 0x940D / 37901
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_270(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_315(8192) && !Function_194(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_162())
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
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_269())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_269() //Position: 0x9515 / 38165
{
	return Function_45(Global_79962, 2048);
}

var Function_270(int iParam0) //Position: 0x9525 / 38181
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

void Function_271() //Position: 0x955A / 38234
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_272() //Position: 0x956F / 38255
{
	Function_275();
	Function_102();
	Function_273();
	return;
}

void Function_273() //Position: 0x957E / 38270
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_274();
	return;
}

void Function_274() //Position: 0x95B2 / 38322
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_275() //Position: 0x95C3 / 38339
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_276(bool bParam0, bool bParam1, bool bParam2) //Position: 0x95DC / 38364
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
	Function_280(bParam0);
	Var6 = { StackVal, StackVal, Function_280(bParam0) };
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
			Function_279(bVar32);
			vVar12.f_4 = Function_277(StackVal, StackVal, StackVal, StackVal, vVar3, Function_279(bVar32));
		}
	}
	return Function_261(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_277(vector3 vParam0, vector3 vParam3) //Position: 0x9693 / 38547
{
	var uVar0;
	
	Function_278(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_278(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x96AD / 38573
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_279(bool bParam0) //Position: 0x96D0 / 38608
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

vector3 Function_280(bool bParam0) //Position: 0x96F7 / 38647
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_281(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x9708 / 38664
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

void Function_282() //Position: 0x9731 / 38705
{
	if (!Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 1, 1);
	return;
}

void Function_283(bool bParam0, int iParam1) //Position: 0x974A / 38730
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
	if (Function_45(bParam0->f_48, 256) || Function_45(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_45(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_258(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_7(bParam0 + 48, 1024);
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
		Function_284(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_45(bParam0->f_48, 8192))
		{
			Function_10(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_320(1048576);
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

void Function_284(int iParam0) //Position: 0x9945 / 39237
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

void Function_285(int iParam0, int iParam1) //Position: 0x9986 / 39302
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_41();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_238(bVar0);
		vVar1 = { StackVal, StackVal, Function_238(bVar0) };
		Function_300(bVar0);
		vVar4 = { StackVal, StackVal, Function_300(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	bVar7 = Function_35();
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
		iParam0->f_120 = Function_296(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_10(iParam0 + 48, 256);
	}
	else
	{
		Function_238(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_238(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_288(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_287(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_10(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_286(iParam0->f_120);
	return;
}

void Function_286(int iParam0) //Position: 0x9B1B / 39707
{
	Function_271();
	Global_63118 = iParam0;
	return;
}

void Function_287(bool bParam0, bool bParam1) //Position: 0x9B29 / 39721
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_288(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x9B3E / 39742
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_289(&bVar0, uParam2, uParam3, uParam4);
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

void Function_289(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9BC0 / 39872
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_295(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_294(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_293(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_292(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_291(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_290(&bVar0, uParam1, uParam2, uParam3);
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

void Function_290(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9CDB / 40155
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

void Function_291(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9DF0 / 40432
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

void Function_292(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9F09 / 40713
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

void Function_293(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA013 / 40979
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

void Function_294(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA119 / 41241
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

void Function_295(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA1C9 / 41417
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

var Function_296(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA280 / 41600
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_297(&bVar0, uParam2);
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

void Function_297(var uParam0, int iParam1) //Position: 0xA2F7 / 41719
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_299(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_298(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_298(var uParam0, bool bParam1) //Position: 0xA363 / 41827
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
	Function_300(bParam1);
	vVar3 = { StackVal, StackVal, Function_300(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_279(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_279(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_300(bParam1);
	vVar6 = { StackVal, StackVal, Function_300(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_279(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_279(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_299(var uParam0, bool bParam1) //Position: 0xA425 / 42021
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
	Function_300(bParam1);
	vVar3 = { StackVal, StackVal, Function_300(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_279(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_279(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_300(bParam1);
	vVar6 = { StackVal, StackVal, Function_300(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_279(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_279(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_300(bool bParam0) //Position: 0xA4E7 / 42215
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

void Function_301(int iParam0) //Position: 0xA50E / 42254
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_45(iParam0->f_48, 2048))
	{
		Function_10(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(iParam0->f_112))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_112))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				bVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_246(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_303(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_302("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_112))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_112));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_112);
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
				if (Function_246(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_112, &vVar20);
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

var Function_302(int iParam0) //Position: 0xA834 / 43060
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

struct<64> Function_303(bool bParam0) //Position: 0xAA48 / 43592
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_322())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_304();
	}
	if (!Function_193(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_193(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_304() //Position: 0xAAEE / 43758
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_305(var uParam0, int iParam1) //Position: 0xAAFF / 43775
{
	if (Function_309(uParam0, iParam1))
	{
		Function_308(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_306(int iParam0) //Position: 0xAB19 / 43801
{
	Function_86(&Global_79378, 0, iParam0);
	return;
}

void Function_307(bool bParam0, bool bParam1) //Position: 0xAB29 / 43817
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_35(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_246(bVar2))
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

void Function_308(var uParam0, int iParam1) //Position: 0xABA5 / 43941
{
	*uParam0 = *iParam1;
	return;
}

bool Function_309(var uParam0, int iParam1) //Position: 0xABB1 / 43953
{
	return *uParam0 == *iParam1;
}

void Function_310(int iParam0, int iParam1) //Position: 0xABBE / 43966
{
	Function_311(iParam0, (Function_153(iParam0) + iParam1));
	return;
}

void Function_311(int iParam0, int iParam1) //Position: 0xABD1 / 43985
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xABFA / 44026
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_313(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_313(int iParam0) //Position: 0xAC75 / 44149
{
	char* cVar0[16];
	
	if (!Function_124())
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

var Function_314(int iParam0, bool bParam1, int iParam2) //Position: 0xACB4 / 44212
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_193(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_191(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_315(int iParam0) //Position: 0xACFB / 44283
{
	return Function_316(&Global_79349, iParam0);
}

int Function_316(var uParam0, int iParam1) //Position: 0xAD0A / 44298
{
	return Function_45(uParam0->f_44, iParam1);
}

int Function_317(int iParam0) //Position: 0xAD19 / 44313
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

float Function_318() //Position: 0xAD2F / 44335
{
	if (Function_45(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_45(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_319(int iParam0) //Position: 0xAD65 / 44389
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_320(int iParam0) //Position: 0xAD76 / 44406
{
	Function_9(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_321(bool bParam0) //Position: 0xADCF / 44495
{
	return Function_12(Global_78617.f_52, bParam0);
}

bool Function_322() //Position: 0xADE0 / 44512
{
	return HAS_STRING_TABLE_LOADED("jp");
}

bool Function_323(bool bParam0) //Position: 0xADEE / 44526
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_324() //Position: 0xAE00 / 44544
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_325(GET_LOCAL_SLOT(), 1, 0);
}

int Function_325(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAE17 / 44567
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_193(bParam0))
			{
				if (!Function_191(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_326() //Position: 0xAE5B / 44635
{
	return Function_315(2);
}

var Function_327(int iParam0, int iParam1) //Position: 0xAE65 / 44645
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_328(bool bParam0, var uParam1, bool bParam2) //Position: 0xAE78 / 44664
{
	var uVar0;
	var uVar1;
	
	if (iLocal_763 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_759, 1.0f, 0);
	}
	Local_767.f_16 = uParam1;
	Local_767.f_20 = bParam2;
	Function_357(bParam0, 0, 0, 0);
	Function_346(bParam0, 45973);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_220(&Global_78578 + 96))
		{
			Function_345(&Global_78578 + 96);
		}
		Function_344(4294967295);
	}
	CANCEL_DEADEYE();
	Function_330(0, &uVar0, &uVar1);
	UI_EXIT("XpHud");
	if (Function_361(bParam0))
	{
		Function_329(bParam0);
	}
	return;
}

void Function_329(bool bParam0) //Position: 0xAEF3 / 44787
{
	if (!Function_361(bParam0))
	{
	}
	if (!Function_40(2048))
	{
		Function_320(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

var Function_330(bool bParam0, var uParam1, int iParam2) //Position: 0xAF26 / 44838
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	*uParam1 = 100000.0f;
	if (Function_220(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_345(&Global_78578 + 96);
		}
		*uParam1 = Function_216(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_193(bVar1))
		{
			iVar0 = (iVar0 + Function_342(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_341(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_339(iVar3, &uVar4, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_338();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_336(bVar1, &uVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_333(iVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_331(iVar0, *iParam2, iLocal_766);
	return iVar0;
}

void Function_331(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAFF9 / 45049
{
	bool bVar0;
	
	bVar0 = Function_332(1);
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

var Function_332(int iParam0) //Position: 0xB047 / 45127
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_35(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && iParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_35(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_333(int iParam0) //Position: 0xB094 / 45204
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_334(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

void Function_334(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB0C1 / 45249
{
	bool bVar0;
	
	*iParam1 = Function_335(iParam0);
	*uParam2 = Function_242(*iParam1, 32, 20);
	*iParam1 = Function_242(*iParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

int Function_335(int iParam0) //Position: 0xB112 / 45330
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_336(int iParam0, int iParam1, int iParam2) //Position: 0xB132 / 45362
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_332(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_337(iParam0, 1);
	uVar2 = Function_337(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_337(int iParam0, bool bParam1) //Position: 0xB173 / 45427
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

int Function_338() //Position: 0xB199 / 45465
{
	bool bVar0;
	
	bVar0 = Function_332(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "size");
}

void Function_339(int iParam0, float fParam1, int iParam2) //Position: 0xB1BC / 45500
{
	float fVar0;
	
	fVar0 = Function_340(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*fParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_340(int iParam0) //Position: 0xB1ED / 45549
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_341(float fParam0) //Position: 0xB20D / 45581
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_339(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_342(int iParam0) //Position: 0xB23A / 45626
{
	return Function_343(0, iParam0);
}

int Function_343(int iParam0, bool bParam1) //Position: 0xB246 / 45638
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_153(iParam0);
	}
	if (!Function_193(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_344(int iParam0) //Position: 0xB2AD / 45741
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_345(bool bParam0) //Position: 0xB2C1 / 45761
{
	if (Function_220(bParam0))
	{
		if (!Function_219(bParam0))
		{
			Function_217();
			bParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_10(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_346(bool bParam0, int iParam1) //Position: 0xB389 / 45961
{
	bParam0->f_180 = iParam1;
	return;
}

int Function_347() //Position: 0xB395 / 45973
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (Local_767)
	{
		case 0x00000000:
			Function_356(Local_767.f_16);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(Local_767.f_20, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_355(&Local_767 + 4))
			{
				Function_353(&Local_767 + 4);
			}
			Local_767 = 1;
			break;
		
		case 0x00000001:
			if (Function_351(&Local_767 + 4) <= 7.0f)
			{
				Function_350(&uVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_348() >= 4294967295)
				{
					Function_334(iVar2, &uVar0, &bVar1, bVar3);
					Function_158(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					Local_767 = 3;
				}
				else
				{
					Local_767 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_351(&Local_767 + 4) <= 5.0f)
			{
				Local_767 = 3;
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

int Function_348() //Position: 0xB4B7 / 46263
{
	if (!Function_349())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_349() //Position: 0xB4CC / 46284
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_350(int iParam0, var uParam1, int iParam2) //Position: 0xB4D9 / 46297
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_332(0);
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

float Function_351(int iParam0) //Position: 0xB52C / 46380
{
	if (Function_355(iParam0))
	{
		if (Function_352(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_352(int iParam0) //Position: 0xB5F4 / 46580
{
	return Function_45(*iParam0, 2);
}

void Function_353(int iParam0) //Position: 0xB601 / 46593
{
	if (!Function_355(iParam0))
	{
		Function_354(iParam0, 0.0f);
	}
	return;
}

void Function_354(int iParam0, float fParam1) //Position: 0xB616 / 46614
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(iParam0, 1);
	Function_7(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_355(int iParam0) //Position: 0xB637 / 46647
{
	return Function_45(*iParam0, 1);
}

void Function_356(bool bParam0) //Position: 0xB644 / 46660
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_357(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB6AE / 46766
{
	if (bParam1)
	{
		Function_154(7, 1);
		Function_154(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_326())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_150(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_358())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_150(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_10(bParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_151(37, 0);
		Function_7(bParam0 + 44, 4);
	}
	else
	{
		Function_154(6, 1);
		Function_151(37, 0);
		Function_7(bParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_10(bParam0 + 44, 256);
	}
	else
	{
		Function_7(bParam0 + 44, 256);
	}
}

bool Function_358() //Position: 0xB75C / 46940
{
	return Function_315(16);
}

bool Function_359() //Position: 0xB767 / 46951
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_195(bVar0))
		{
			if (Function_360(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_360(bool bParam0) //Position: 0xB794 / 46996
{
	if (Function_195(bParam0))
	{
		if (Function_191(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_361(bool bParam0) //Position: 0xB7B9 / 47033
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_362() //Position: 0xB7CD / 47053
{
	Function_366(4);
	return;
}

void Function_363() //Position: 0xB7D7 / 47063
{
	if (Local_375.f_68)
	{
		if (!Function_194(4096, 1))
		{
			Function_46(4096, 1);
		}
		else if (Function_365())
		{
			Function_364(&Local_375);
		}
	}
	return;
}

void Function_364(var uParam0) //Position: 0xB806 / 47110
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

bool Function_365() //Position: 0xB84D / 47181
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
		if (Function_193(bVar0))
		{
			iVar1++;
			if (Function_191(bVar0, 4096, 1))
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

void Function_366(int iParam0) //Position: 0xB8D1 / 47313
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
			Function_367(iParam0);
		}
	}
	return;
}

void Function_367(bool bParam0) //Position: 0xB903 / 47363
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_368(var uParam0, struct<17> Param1) //Position: 0xB912 / 47378
{
	*uParam0 = Param1;
	uParam0->f_4 = StackVal;
	uParam0->f_8 = StackVal;
	uParam0->f_12 = Param1.f_12;
	uParam0->f_16 = Param1.f_16;
}

void Function_369(var uParam0, struct<5> Param1) //Position: 0xB93F / 47423
{
	*uParam0 = Param1;
	uParam0->f_4 = StackVal;
	return;
}

void Function_370() //Position: 0xB952 / 47442
{
	switch (iLocal_359)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_899();
			}
			else
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			break;
		
		case 0x00000000:
			Function_801();
			break;
		
		case 0x00000001:
			Function_668();
			break;
		
		case 0x00000002:
			Function_482();
			break;
		
		case 0x00000065:
			Function_371();
			break;
	}
	return;
}

void Function_371() //Position: 0xB9B6 / 47542
{
	if (Function_480())
	{
		Function_479();
	}
	switch (iLocal_360)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_345(&Global_78578 + 96);
			}
			if (Function_155())
			{
				Function_448(iLocal_731, 88);
				if (iLocal_731)
				{
					UPDATE_PROFILE_STAT("CoopGAPAdvPassed", 1.0f, 0);
				}
			}
			else
			{
				Function_448(iLocal_731, 34);
				if (iLocal_731)
				{
					UPDATE_PROFILE_STAT("CoopGAPPassed", 1.0f, 0);
				}
			}
			Function_447();
			NET_LOG(bLocal_687, "Mission StageFinal", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_446();
			Function_445();
			Function_444();
			Function_443(106);
			break;
		
		case 0x00000003:
			break;
		
		case 0x0000006A:
			Function_442(&iLocal_755, 0, 0, 4294967295, 4294967295);
			Function_438();
			if (Function_361(&bLocal_406))
			{
				if (iLocal_731)
				{
					Function_437(&bLocal_406, "mp_you_won", 0, 0, 0, 0);
					Function_436("MPCOOP_LASTOBJMISSCOMPLETE", 0);
				}
				else
				{
					Function_437(&bLocal_406, "mp_you_lost", 0, 0, 0, 0);
				}
				Function_346(&bLocal_406, 48048);
				Function_372(&bLocal_406, "FTR_MISSION_COMPLETE_SONG_01");
				Function_357(&bLocal_406, iLocal_731, 0, 0);
				Function_329(&bLocal_406);
			}
			NET_LOG(bLocal_687, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", false, false, false, false);
			break;
	}
	return;
}

void Function_372(var uParam0, var uParam1) //Position: 0xBBA4 / 48036
{
	uParam0->f_40 = uParam1;
	return;
}

int Function_373() //Position: 0xBBB0 / 48048
{
	if (Function_12(iLocal_727, 2097152) || Function_12(iLocal_727, 4194304))
	{
		if (!Function_12(iLocal_727, 0x2000000))
		{
			if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			else
			{
				Function_435();
				Function_9(&iLocal_727, 0x2000000);
			}
		}
		else if (Function_423())
		{
			return 1;
		}
	}
	if (Function_374())
	{
		return 1;
	}
	return 0;
}

bool Function_374() //Position: 0xBC1D / 48157
{
	switch (Local_368)
	{
		case 0x000003E8:
			if (Function_422(&uLocal_794))
			{
				iLocal_1160 = 15;
				Function_421(&Local_368 + 4);
				Function_419("FTR_SONG_07", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				Function_418();
				Function_413();
				Local_368.f_16 = Function_409(Local_72, 0, Local_72, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_368.f_16))
				{
				}
				else
				{
					LOG_ERROR("GapCoop_Cutscene_3 - Failed to create GapCoop_Cutscene_3_cutscene");
				}
				Local_368 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_368.f_16), false))
			{
				Local_368 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Local_368 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_395(1003, 1, 0x3f800000))
			{
				Function_394();
				Local_368 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_351(&Local_368 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Local_72, "__CameraReady", true);
					Local_368 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (Function_377(&uLocal_794, 52210) && GET_CUTSCENEOBJECT_SEQUENCE(Local_368.f_16) != 2)
			{
				Function_421(&Local_368 + 4);
				Local_368 = 1104;
				Function_376();
			}
			break;
		
		case 0x00000450:
			if (Function_222(1))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_375();
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Local_72, "__CameraReady");
				if (IS_OBJECT_VALID(Local_368.f_16))
				{
					DESTROY_OBJECT(Local_368.f_16);
				}
				Local_368 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_368 = 1104;
			}
			break;
	}
	return 0;
}

void Function_375() //Position: 0xBE09 / 48649
{
	Function_47(2, 0, 1, 0, 1, 0, 0, 1, 1, 1);
	return;
}

void Function_376() //Position: 0xBE1C / 48668
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_377(int iParam0, int iParam1) //Position: 0xBE36 / 48694
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	struct<17> Var3;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = fVar0 <= iParam0->f_20;
	switch (*iParam0)
	{
		case 0x00000004:
			UI_ENTER("HudMPNoFun");
			HUD_FADE_IN(1.0f, 1065353216);
			iParam0->f_12 = 0;
			iParam0->f_24 = 0;
			*iParam0 = 5;
			break;
		
		case 0x00000005:
			Call_Loc(iParam1);
			if (StackVal)
			{
				UI_SET_STYLE("MPSplashTitle", 22);
				Var3.f_16 = 150;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_FIRST_MASTER", &Var3);
				Var3.f_16 = 350;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_UNLOCK_MASTER", &Var3);
				Var3.f_16 = 750;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_SECOND_MASTER", &Var3);
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
				Function_391(iParam0);
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (bVar1)
			{
				if (Function_388(iParam0))
				{
					iParam0->f_20 = (fVar0 + 3.3f);
				}
				*iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bVar1)
			{
				Function_386(iParam0->f_24, 0);
				iParam0->f_12 = 4294967295;
				iParam0->f_16 = 4294967295;
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (bVar1)
			{
				if (Function_385(iParam0))
				{
					bVar2 = Function_384(iParam0->f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_383(iParam0->f_12)), I2STR(bVar2), false);
					Function_382("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					iParam0->f_20 = (fVar0 + 1.8f);
					*iParam0 = 8;
					iParam0->f_24 = (iParam0->f_24 + bVar2);
				}
				else
				{
					iParam0->f_20 = (fVar0 + 0.0f);
					if (Function_381() >= 0)
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
			if (bVar1)
			{
				Function_386(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_12 <= Function_381())
			{
				if (bVar1)
				{
					Function_380(iParam0);
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
			if (bVar1)
			{
				Function_386(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				iParam0->f_12++;
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000D:
			if (bVar1)
			{
				Function_386(iParam0->f_24, 1);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bVar1)
			{
				Function_379(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_332(1), "Unlock_Silver"))
				{
					*iParam0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_332(1), "Unlock_Adv"))
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
			if (bVar1)
			{
				Function_378(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_332(1), "Unlock_Adv"))
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
			if (bVar1)
			{
				Function_378(0);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 17;
			}
			break;
		
		case 0x00000011:
			if (bVar1)
			{
				Function_157(iParam0);
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

void Function_378(bool bParam0) //Position: 0xC395 / 50069
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_382("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_382("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_379(bool bParam0) //Position: 0xC426 / 50214
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_350(&iVar2, &iVar0, &iVar1);
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
	Function_382(bVar3);
	return;
}

void Function_380(var uParam0) //Position: 0xC54B / 50507
{
	bool bVar0;
	int iVar1;
	
	Function_336(uParam0->f_12, &iVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(iVar1), I2STR(bVar0), false);
	Function_382("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	uParam0->f_24 = (uParam0->f_24 + bVar0);
	return;
}

int Function_381() //Position: 0xC5E1 / 50657
{
	return Function_338();
}

void Function_382(bool bParam0) //Position: 0xC5EA / 50666
{
	UI_SET_TEXT("MPSplashItem.s1", bParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_383(bool bParam0) //Position: 0xC644 / 50756
{
	switch (bParam0)
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

int Function_384(int iParam0) //Position: 0xC7E8 / 51176
{
	return Function_342(iParam0);
}

bool Function_385(int iParam0) //Position: 0xC7F3 / 51187
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
			iVar1 = Function_384(bVar0);
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

void Function_386(bool bParam0, bool bParam1) //Position: 0xC86D / 51309
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
	Function_387(1);
	return;
}

void Function_387(bool bParam0) //Position: 0xC940 / 51520
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (bParam0)
	{
		Function_382("Common_Null");
	}
	return;
}

bool Function_388(int iParam0) //Position: 0xC9C5 / 51653
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_220(&Global_78578 + 96))
	{
		fVar1 = Function_216(&Global_78578 + 96);
	}
	Var2 = { StackVal, StackVal, StackVal, Function_390(fVar1) };
	iVar0 = Function_389(fVar1);
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

var Function_389(float fParam0) //Position: 0xCB39 / 52025
{
	int iVar0;
	int iVar1;
	
	if (Function_348() >= 4294967295)
	{
		iVar1 = Function_341(fParam0);
		if (iVar1 >= 4294967295)
		{
			Function_339(iVar1, &fParam0, &iVar0);
		}
	}
	return iVar0;
}

struct<16> Function_390(var uParam0) //Position: 0xCB5E / 52062
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

void Function_391(int iParam0) //Position: 0xCBCF / 52175
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	Function_350(&iVar2, &iVar0, &bVar1);
	if (iVar0 >= 4294967295)
	{
		Function_334(iVar0, &iVar2, iParam0 + 8, bVar1);
	}
	return;
}

int Function_392() //Position: 0xCBF2 / 52210
{
	switch (iLocal_1160)
	{
		case 0x0000000F:
			if (Function_351(&Local_368 + 4) < 2.0f)
			{
				Function_393();
				iLocal_1160 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_393() //Position: 0xCC31 / 52273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene3_v1_AA", "WG_Scene3_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene3_v1_AB", "WG_Scene3_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene3_v1_AC", "WG_Scene3_v1_AC", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_394() //Position: 0xCCDD / 52445
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

bool Function_395(bool bParam0, bool bParam1, float fParam2) //Position: 0xCD0C / 52492
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_408(bParam0);
	}
	Function_23(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_16(&Var0);
	}
	if (Function_407(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_406(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_405(bParam0, iVar6, &uVar7))
	{
		if (Function_404())
		{
			if (!Function_403(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_402(&Var0, 1);
				Function_16(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_16(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_396(bParam0))
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
		Function_16(&Var0);
	}
	return 0;
}

bool Function_396(int iParam0) //Position: 0xCF5F / 53087
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_401(iVar0))
		{
			iVar1 = Function_397(iVar0);
			if (iVar1 == iParam0)
			{
				if (iVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_397(int iParam0) //Position: 0xCFA2 / 53154
{
	int iVar0;
	
	Function_400(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_399(&iVar0, iParam0);
	}
	return Function_398(&iVar0);
}

int Function_398(int iParam0) //Position: 0xCFC9 / 53193
{
	return *iParam0;
}

void Function_399(var uParam0, int iParam1) //Position: 0xCFD2 / 53202
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_400(int iParam0) //Position: 0xCFE5 / 53221
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_401(int iParam0) //Position: 0xCFF3 / 53235
{
	return Function_193(iParam0);
}

void Function_402(var uParam0, bool bParam1) //Position: 0xCFFE / 53246
{
	if (bParam1)
	{
		Function_10(uParam0, 2);
	}
	else
	{
		Function_7(uParam0, 2);
	}
	return;
}

bool Function_403(bool bParam0) //Position: 0xD018 / 53272
{
	return Function_45(*bParam0, 2);
}

bool Function_404() //Position: 0xD025 / 53285
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

bool Function_405(int iParam0, var uParam1, int iParam2) //Position: 0xD043 / 53315
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
		if (Function_401(iVar0))
		{
			iVar1 = Function_397(iVar0);
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

void Function_406(int iParam0, bool bParam1) //Position: 0xD094 / 53396
{
	if (bParam1)
	{
		Function_10(iParam0, 1);
	}
	else
	{
		Function_7(iParam0, 1);
	}
	return;
}

bool Function_407(int iParam0) //Position: 0xD0AE / 53422
{
	return Function_45(*iParam0, 1);
}

void Function_408(bool bParam0) //Position: 0xD0BB / 53435
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = bParam0;
	Function_24(&uVar1);
	if (Function_398(&uVar1) != bVar0)
	{
		Function_23(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_45(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_19(bVar0);
		Function_402(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

var Function_409(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD1B8 / 53688
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GapCoop_Cutscene_3", 2, 1);
	}
	Function_410(&bVar0, uParam2);
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

void Function_410(var uParam0, char* cParam1) //Position: 0xD238 / 53816
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_412(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_411(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 32.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_411(int iParam0) //Position: 0xD29B / 53915
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4419.673f, 16.14983f, 3234.169f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.077546f, 1.667418f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_412(var uParam0) //Position: 0xD2FE / 54014
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4419.673f, 16.14983f, 3234.169f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.019541f, 0.306215f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_413() //Position: 0xD361 / 54113
{
	Function_414(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_414(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xD376 / 54134
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
	Function_14();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_41();
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
			if (Function_65())
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
				Function_238(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_52(), 2, Function_238(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_50(19, 1, 0, 0);
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
	if (iParam10 && !Function_124())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_417()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_417()));
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
	if (Function_416(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_415(0x4000000);
	}
	if (Function_416(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_415(0x8000000);
	}
}

void Function_415(int iParam0) //Position: 0xD624 / 54820
{
	int iVar0;
	
	if (Function_45(iParam0, 1) && Function_45(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_416(int iParam0) //Position: 0xD658 / 54872
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_417() //Position: 0xD674 / 54900
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

void Function_418() //Position: 0xD6F3 / 55027
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_419(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xD705 / 55045
{
	AUDIO_MUSIC_FORCE_TRACK(iParam0, Function_420(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_420(int iParam0) //Position: 0xD721 / 55073
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

void Function_421(int iParam0) //Position: 0xDC74 / 56436
{
	Function_354(iParam0, 0.0f);
	return;
}

bool Function_422(int iParam0) //Position: 0xDC80 / 56448
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

bool Function_423() //Position: 0xDD65 / 56677
{
	var uVar0;
	
	switch (Local_368)
	{
		case 0x000003E8:
			Function_414(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				Local_368.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_368.f_16 = Function_431(Local_72, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_368.f_16))
				{
				}
				else
				{
					LOG_ERROR("GapCoop_Cutscene_Exp - Failed to create GapCoop_Cutscene_Exp_cutscene");
				}
			}
			Local_368 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_368.f_16), false))
			{
				Function_430(Global_34573, 1, 1);
				Function_421(&Local_368 + 4);
				Local_368 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_368 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_351(&Local_368 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_421(&Local_368 + 4);
					iLocal_1161 = 15;
					Local_368 = 1004;
				}
			}
			else
			{
				Function_421(&Local_368 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_424())
			{
				Function_421(&Local_368 + 4);
				Local_368 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_430(Global_34573, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_368.f_16))
				{
					DESTROY_OBJECT(Local_368.f_16);
				}
				Local_368 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_368 = 1104;
			}
			break;
	}
	return 0;
}

bool Function_424() //Position: 0xDF64 / 57188
{
	switch (iLocal_1161)
	{
		case 0x0000000F:
			if (Function_351(&Local_368 + 4) < 0.0f)
			{
				iLocal_1161 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_351(&Local_368 + 4) < 3.5f)
			{
				Function_429();
				iLocal_1161 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_351(&Local_368 + 4) < 5.0f)
			{
				Function_428();
				iLocal_1161 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_351(&Local_368 + 4) < 6.5f)
			{
				Function_427();
				iLocal_1161 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_351(&Local_368 + 4) < 7.5f)
			{
				Function_425();
				iLocal_1161 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_351(&Local_368 + 4) < 16.0f)
			{
				SHOW_RMPTFX_EFFECT(bLocal_1162);
				DESTROY_OBJECT(bLocal_1162);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_425() //Position: 0xE03B / 57403
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;
	vector3 vVar34;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4429.943f, 8.939f, 3203.673f };
		vVar3 = { -4425.369f, 8.785f, 3203.213f };
		vVar6 = { -4427.872f, 8.654f, 3203.021f };
		vVar9 = { -4428.479f, 8.773f, 3202.085f };
		vVar12 = { -4425.321f, 8.734f, 3202.301f };
		vVar15 = { -4429.721f, 13.054f, 3203.294f };
		vVar18 = { -4425.722f, 12.963f, 3203.294f };
		vVar21 = { -4427.399f, 12.589f, 3202.539f };
		vVar24 = { -4428.052f, 9.822f, 3201.6f };
		vVar27 = { -4427.571f, 8.8f, 3206.604f };
		vVar30 = { 0.0f, -0.337f, 0.0f };
		UNK_0xE18028C1(bLocal_1162);
		DESTROY_OBJECT(bLocal_1162);
		bLocal_1162 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_72, "mineExp2", "script_tunnel_cavein_01", vVar27);
		SET_RMPTFX_SCALE(bLocal_1162, 10.0f);
		UNK_0x6745191B(bLocal_1162, vVar30);
		SHOW_RMPTFX_EFFECT(bLocal_1162);
		bVar33 = "";
		vVar34 = { 20.0f, 178.754f, 0.0f };
		_CREATE_EXPLOSION(&vVar0, "Rebel06WagonExplosion", bVar33, &vVar34, 1);
		_CREATE_EXPLOSION(&vVar3, "Rebel06WagonExplosion", bVar33, &vVar34, 1);
		_CREATE_EXPLOSION(&vVar6, "Rebel06WagonExplosion", bVar33, &vVar34, 1);
		Function_426(&vVar9, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar12, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar15, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar18, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar21, "FireBottleExplosion", 0, 1);
		Function_426(&vVar24, "FireBottleExplosion", 0, 1);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance1Prop", "$/fragments/p_gen_caveIn02x", -4428.27f, 8.596933f, 3201.186f, 0.0f, -187.6697f, 0.0f, 1);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance2Prop", "$/fragments/p_gen_caveIn02x", -4427.186f, 8.618516f, 3200.496f, 0.0f, -5.885397f, 0.0f, 1);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance3Prop", "$/fragments/p_gen_caveIn02x", -4427.661f, 8.731054f, 3201.742f, 0.0f, -270.205f, 0.0f, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_426(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xE3A4 / 58276
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

void Function_427() //Position: 0xE3C0 / 58304
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar27;
	vector3 vVar28;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4428.132f, 9.707f, 3202.706f };
		vVar3 = { -4427.835f, 9.086f, 3199.199f };
		vVar6 = { -4427.003f, 11.042f, 3202.767f };
		vVar9 = { -4428.771f, 11.207f, 3200.855f };
		vVar12 = { -4426.747f, 9.629f, 3195.448f };
		vVar15 = { -4427.629f, 12.386f, 3200.554f };
		vVar18 = { -4427.35f, 10.149f, 3199.064f };
		vVar21 = { -4427.571f, 8.8f, 3206.604f };
		vVar24 = { 0.0f, -0.337f, 0.0f };
		bLocal_1162 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_72, "mineExp1", "script_tunnel_cavein_01", vVar21);
		SET_RMPTFX_SCALE(bLocal_1162, 10.0f);
		UNK_0x6745191B(bLocal_1162, vVar24);
		SHOW_RMPTFX_EFFECT(bLocal_1162);
		bVar27 = "";
		vVar28 = { 20.0f, 178.754f, 0.0f };
		_CREATE_EXPLOSION(&vVar0, "Rebel06WagonExplosion", bVar27, &vVar28, 1);
		_CREATE_EXPLOSION(&vVar3, "Rebel06WagonExplosion", bVar27, &vVar28, 1);
		Function_426(&vVar6, "DynamiteExplosion", 0, 1);
		Function_426(&vVar9, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar12, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar15, "FireBottleExplosion", 0, 1);
		Function_426(&vVar18, "FireBottleExplosion", 0, 1);
	}
	return;
}

void Function_428() //Position: 0xE5AC / 58796
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4426.0f, 9.641f, 3196.193f };
		vVar3 = { -4427.693f, 9.984f, 3192.327f };
		Function_426(&vVar0, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar3, "BuriedDynamiteExplosion", 0, 1);
	}
	return;
}

void Function_429() //Position: 0xE620 / 58912
{
	vector3 vVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4423.946f, 8.737f, 3187.783f };
		Function_426(&vVar0, "DynamiteExplosion", 0, 1);
	}
	return;
}

void Function_430(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE65A / 58970
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

var Function_431(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xE6F4 / 59124
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GapCoop_Cutscene_Exp", 2, 1);
	}
	Function_432(&bVar0);
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

void Function_432(int iParam0) //Position: 0xE774 / 59252
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_434(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_433(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(uVar1, 0.0f, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.0f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 4.0f, 2);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(uVar1, 1.0f, 2.0f, 1);
	return;
}

void Function_433(int iParam0) //Position: 0xE7D3 / 59347
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4430.652f, 9.052114f, 3222.729f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.084715f, -0.165592f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_434(var uParam0) //Position: 0xE836 / 59446
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4446.193f, 15.83568f, 3216.575f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.166776f, -1.030823f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_435() //Position: 0xE899 / 59545
{
	int iVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		iVar0 = 4;
		*(&iVar0 + 20) = 4;
		*(&iVar0 + 72) = 4;
		NET_SCRIPTMSG_SEND(3, 47, &iVar0, 23, 1);
	}
	return;
}

void Function_436(bool bParam0, bool bParam1) //Position: 0xE8C4 / 59588
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_437(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE904 / 59652
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

void Function_438() //Position: 0xE973 / 59763
{
	Function_439();
	Function_180();
	if (IS_ACTOR_VALID(bLocal_694))
	{
		RELEASE_ACTOR(bLocal_694);
	}
	if (IS_OBJECT_VALID(bLocal_695))
	{
		RELEASE_OBJECT_REF(bLocal_695);
	}
	return;
}

void Function_439() //Position: 0xE99D / 59805
{
	bool bVar0;
	bool bVar1;
	
	Function_440(&Local_72 + 224);
	Function_440(&Local_72 + 228);
	Function_440(&Local_72 + 232);
	Function_440(&Local_72 + 236);
	Function_440(&Local_72 + 240);
	Function_440(&Local_72 + 280);
	Function_440(&Local_72 + 284);
	Function_440(&Local_72 + 288);
	Function_440(&Local_72 + 292);
	Function_440(&Local_72 + 296);
	Function_440(&Local_72 + 300);
	Function_440(&Local_72 + 304);
	Function_440(&Local_72 + 308);
	Function_440(&Local_72 + 312);
	Function_440(&Local_72 + 316);
	Function_440(&Local_72 + 244);
	Function_440(&Local_72 + 248);
	Function_440(&Local_72 + 252);
	Function_440(&Local_72 + 256);
	Function_440(&Local_72 + 260);
	Function_440(&Local_72 + 276);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner");
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		DESTROY_ACTOR(bVar1);
	}
	return;
}

void Function_440(int iParam0) //Position: 0xEA93 / 60051
{
	if (SQUAD_IS_VALID(*iParam0))
	{
		Function_441(iParam0);
	}
	return;
}

void Function_441(int iParam0) //Position: 0xEAA7 / 60071
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xEAEE / 60142
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_420(*uParam0), iParam2, iParam3, iParam4);
	}
}

void Function_443(int iParam0) //Position: 0xEB12 / 60178
{
	char* cVar0[32];
	
	iLocal_360 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_359)
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

void Function_444() //Position: 0xECA5 / 60581
{
	return;
}

void Function_445() //Position: 0xECAB / 60587
{
	return;
}

void Function_446() //Position: 0xECB1 / 60593
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Function_12(Local_599[iVar15].f_16, 1))
		{
			iVar2++;
		}
		if (Function_12(Local_599[iVar15].f_16, 2))
		{
			iVar3++;
		}
		if (Function_12(Local_599[iVar15].f_16, 4))
		{
			iVar4++;
		}
		iVar1++;
	}
	if (iVar2 == iVar0)
	{
	}
	if (iVar3 == iVar0)
	{
	}
	if (iVar4 == iVar0)
	{
	}
	if (((Function_12(Local_599[05].f_16, 8) || Function_12(Local_599[15].f_16, 8)) || Function_12(Local_599[25].f_16, 8)) || Function_12(Local_599[35].f_16, 8))
	{
	}
	if (((Function_12(Local_599[05].f_16, 16) || Function_12(Local_599[15].f_16, 16)) || Function_12(Local_599[25].f_16, 16)) || Function_12(Local_599[35].f_16, 16))
	{
	}
	iVar5 = (((Local_599[05].f_12 + Local_599[15].f_12) + Local_599[25].f_12) + Local_599[35].f_12);
	if (iVar5 > 18)
	{
	}
	return;
}

void Function_447() //Position: 0xEDE3 / 60899
{
	*(&Local_375 + 8) = { 0.0f, 0.0f, 0.0f };
	*(&Local_375 + 20) = { 0.0f, 0.0f, 0.0f };
	Local_375.f_32 = 8.0f;
	Local_375.f_36 = "";
	Local_375.f_52 = 0;
	Local_375.f_72 = 1;
	Local_375.f_92 = 1;
	Local_375.f_76 = 1;
	Local_375.f_60 = 1;
	Local_375.f_64 = 1;
	Local_375.f_84 = Local_368;
	Local_375.f_68 = 0;
	Local_375.f_88 = 0;
	Local_375.f_96 = 1;
	Local_368.f_24 = 0;
	Function_46(4096, 0);
	Function_46(8192, 0);
	return;
}

void Function_448(bool bParam0, int iParam1) //Position: 0xEE61 / 61025
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	uVar2 = Function_330(bParam0, &bVar1, &iVar0);
	PLAYSTAT_INT("Deaths", Function_478(GET_LOCAL_SLOT()));
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_150(29), Function_477((Function_153(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_344(iVar0);
		}
		Function_9(&Global_84364, Function_476(iParam1));
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(49))
		{
			AWARD_ACHIEVEMENT(49);
		}
		if (iVar0 == 2)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(52))
			{
				AWARD_ACHIEVEMENT(52);
			}
		}
		Function_475(5);
		Function_474(iParam1, bVar1);
		Function_472(iParam1);
		Function_468(&Global_50170, 58, 0, 0, 250.0f, 5);
		Function_468(&Global_50170, 60, 2, 0, 500.0f, 5);
		if (Global_50170[6022].f_28 > 1)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(58))
			{
				AWARD_ACHIEVEMENT(58);
			}
		}
		Function_468(&Global_50170, 59, 1, 0, 500.0f, 5);
		Function_468(&Global_50170, 62, 3, 0, 250.0f, 5);
		Function_468(&Global_50170, 61, 4, 0, 250.0f, 5);
		Function_468(&Global_50170, 63, 5, 0, 250.0f, 5);
		Function_468(&Global_50170, 64, 6, 0, 250.0f, 5);
		Function_467(iParam1);
		Function_461(iParam1);
		Function_468(&Global_50170, 161, 0, 1, 250.0f, 5);
		Function_468(&Global_50170, 163, 2, 1, 500.0f, 5);
		Function_468(&Global_50170, 162, 1, 1, 500.0f, 5);
		Function_468(&Global_50170, 165, 3, 1, 250.0f, 5);
		Function_468(&Global_50170, 164, 4, 1, 250.0f, 5);
		Function_468(&Global_50170, 166, 5, 1, 250.0f, 5);
		Function_468(&Global_50170, 167, 6, 1, 250.0f, 5);
		Function_468(&Global_50170, 168, 7, 1, 250.0f, 5);
		if (Global_84364 & 63 == 63)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
			{
				AWARD_ACHIEVEMENT(50);
			}
			Function_459(38);
			if (!Function_45(Global_84364.f_740, 1))
			{
				Function_10(&Global_84364 + 740, 1);
				Function_458();
				DECOR_SET_BOOL(Function_332(1), "Unlock_Adv", true);
			}
		}
		if (iVar0 != 2 || iVar0 != 1)
		{
			if (!Function_457(1))
			{
				Function_456(1);
			}
			if (Function_454(iParam1))
			{
				DECOR_SET_BOOL(Function_332(1), "Unlock_Silver", true);
			}
			if (iVar0 == 2)
			{
				Function_453(iParam1);
				Function_452(iParam1);
			}
		}
		Function_451();
		Function_450();
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
		{
			if (Function_335(3) == 2)
			{
				AWARD_ACHIEVEMENT(51);
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(54))
		{
			bVar3 = false;
			while (bVar3 <= 4)
			{
				if (Function_193(bVar3))
				{
					iVar4 = (iVar4 + Function_449(12, bVar3));
				}
				bVar3++;
			}
			if (iVar4 == 0)
			{
				AWARD_ACHIEVEMENT(54);
			}
		}
		if (StackVal == 2)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(55))
			{
				AWARD_ACHIEVEMENT(55);
			}
		}
	}
	else
	{
		Function_344(4294967295);
	}
	return;
}

int Function_449(int iParam0, bool bParam1) //Position: 0xF127 / 61735
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_150(iParam0);
	}
	if (!Function_193(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_450() //Position: 0xF195 / 61845
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_45((*&Global_84364 + 712)[iVar0], 4))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(56))
		{
			AWARD_ACHIEVEMENT(56);
		}
	}
	return;
}

void Function_451() //Position: 0xF1DA / 61914
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_45((*&Global_84364 + 712)[iVar0], 2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(53))
		{
			AWARD_ACHIEVEMENT(53);
		}
	}
	return;
}

int Function_452(int iParam0) //Position: 0xF21F / 61983
{
	switch (iParam0)
	{
		case 0x0000005A:
			if (!Function_45((*&Global_84364 + 712)[0], 4))
			{
				Function_10(&Global_84364 + 712[0], 4);
				return 1;
			}
			break;
		
		case 0x0000002F:
			if (!Function_45((*&Global_84364 + 712)[1], 4))
			{
				Function_10(&Global_84364 + 712[1], 4);
				return 1;
			}
			break;
		
		case 0x0000005B:
			if (!Function_45((*&Global_84364 + 712)[2], 4))
			{
				Function_10(&Global_84364 + 712[2], 4);
				return 1;
			}
			break;
		
		case 0x00000058:
			if (!Function_45((*&Global_84364 + 712)[3], 4))
			{
				Function_10(&Global_84364 + 712[3], 4);
				return 1;
			}
			break;
		
		case 0x0000005C:
			if (!Function_45((*&Global_84364 + 712)[4], 4))
			{
				Function_10(&Global_84364 + 712[4], 4);
				return 1;
			}
			break;
		
		case 0x00000059:
			if (!Function_45((*&Global_84364 + 712)[5], 4))
			{
				Function_10(&Global_84364 + 712[5], 4);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

int Function_453(int iParam0) //Position: 0xF331 / 62257
{
	switch (iParam0)
	{
		case 0x00000024:
			if (!Function_45((*&Global_84364 + 712)[0], 2))
			{
				Function_10(&Global_84364 + 712[0], 2);
				return 1;
			}
			break;
		
		case 0x00000021:
			if (!Function_45((*&Global_84364 + 712)[1], 2))
			{
				Function_10(&Global_84364 + 712[1], 2);
				return 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_45((*&Global_84364 + 712)[2], 2))
			{
				Function_10(&Global_84364 + 712[2], 2);
				return 1;
			}
			break;
		
		case 0x00000022:
			if (!Function_45((*&Global_84364 + 712)[3], 2))
			{
				Function_10(&Global_84364 + 712[3], 2);
				return 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_45((*&Global_84364 + 712)[4], 2))
			{
				Function_10(&Global_84364 + 712[4], 2);
				return 1;
			}
			break;
		
		case 0x00000023:
			if (!Function_45((*&Global_84364 + 712)[5], 2))
			{
				Function_10(&Global_84364 + 712[5], 2);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

bool Function_454(int iParam0) //Position: 0xF443 / 62531
{
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			if (!Function_45((*&Global_84364 + 712)[0], 1))
			{
				Function_10(&Global_84364 + 712[0], 1);
				Function_455(0);
				return 1;
			}
			break;
		
		case 0x00000021:
		case 0x0000002F:
			if (!Function_45((*&Global_84364 + 712)[1], 1))
			{
				Function_10(&Global_84364 + 712[1], 1);
				Function_455(1);
				return 1;
			}
			break;
		
		case 0x00000026:
		case 0x0000005B:
			if (!Function_45((*&Global_84364 + 712)[2], 1))
			{
				Function_10(&Global_84364 + 712[2], 1);
				Function_455(2);
				return 1;
			}
			break;
		
		case 0x00000022:
		case 0x00000058:
			if (!Function_45((*&Global_84364 + 712)[3], 1))
			{
				Function_10(&Global_84364 + 712[3], 1);
				Function_455(3);
				return 1;
			}
			break;
		
		case 0x00000027:
		case 0x0000005C:
			if (!Function_45((*&Global_84364 + 712)[4], 1))
			{
				Function_10(&Global_84364 + 712[4], 1);
				Function_455(4);
				return 1;
			}
			break;
		
		case 0x00000023:
		case 0x00000059:
			if (!Function_45((*&Global_84364 + 712)[5], 1))
			{
				Function_10(&Global_84364 + 712[5], 1);
				Function_455(5);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

void Function_455(int iParam0) //Position: 0xF591 / 62865
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_106(77, 2))
			{
				Function_144(77, 2);
				Function_143(77, 0, 0, 0);
			}
			if (!Function_106(80, 2))
			{
				Function_144(80, 2);
				Function_143(80, 0, 0, 0);
			}
			if (!Function_106(83, 2))
			{
				Function_144(83, 2);
				Function_143(83, 0, 0, 0);
			}
			if (!Function_106(86, 2))
			{
				Function_144(86, 2);
				Function_143(86, 0, 0, 0);
			}
			if (!Function_106(87, 2))
			{
				Function_144(87, 2);
				Function_143(87, 0, 0, 0);
			}
			if (!Function_106(88, 2))
			{
				Function_144(88, 2);
				Function_143(88, 0, 0, 0);
			}
			break;
		
		case 0x00000001:
			if (!Function_106(91, 2))
			{
				Function_144(91, 2);
				Function_143(91, 0, 0, 0);
			}
			if (!Function_106(94, 2))
			{
				Function_144(94, 2);
				Function_143(94, 0, 0, 0);
			}
			if (!Function_106(97, 2))
			{
				Function_144(97, 2);
				Function_143(97, 0, 0, 0);
			}
			if (!Function_106(100, 2))
			{
				Function_144(100, 2);
				Function_143(100, 0, 0, 0);
			}
			if (!Function_106(101, 2))
			{
				Function_144(101, 2);
				Function_143(101, 0, 0, 0);
			}
			if (!Function_106(102, 2))
			{
				Function_144(102, 2);
				Function_143(102, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			if (!Function_106(105, 2))
			{
				Function_144(105, 2);
				Function_143(105, 0, 0, 0);
			}
			if (!Function_106(108, 2))
			{
				Function_144(108, 2);
				Function_143(108, 0, 0, 0);
			}
			if (!Function_106(111, 2))
			{
				Function_144(111, 2);
				Function_143(111, 0, 0, 0);
			}
			if (!Function_106(114, 2))
			{
				Function_144(114, 2);
				Function_143(114, 0, 0, 0);
			}
			if (!Function_106(115, 2))
			{
				Function_144(115, 2);
				Function_143(115, 0, 0, 0);
			}
			if (!Function_106(116, 2))
			{
				Function_144(116, 2);
				Function_143(116, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (!Function_106(119, 2))
			{
				Function_144(119, 2);
				Function_143(119, 0, 0, 0);
			}
			if (!Function_106(122, 2))
			{
				Function_144(122, 2);
				Function_143(122, 0, 0, 0);
			}
			if (!Function_106(125, 2))
			{
				Function_144(125, 2);
				Function_143(125, 0, 0, 0);
			}
			if (!Function_106(128, 2))
			{
				Function_144(128, 2);
				Function_143(128, 0, 0, 0);
			}
			if (!Function_106(129, 2))
			{
				Function_144(129, 2);
				Function_143(129, 0, 0, 0);
			}
			if (!Function_106(130, 2))
			{
				Function_144(130, 2);
				Function_143(130, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (!Function_106(133, 2))
			{
				Function_144(133, 2);
				Function_143(133, 0, 0, 0);
			}
			if (!Function_106(136, 2))
			{
				Function_144(136, 2);
				Function_143(136, 0, 0, 0);
			}
			if (!Function_106(139, 2))
			{
				Function_144(139, 2);
				Function_143(139, 0, 0, 0);
			}
			if (!Function_106(142, 2))
			{
				Function_144(142, 2);
				Function_143(142, 0, 0, 0);
			}
			if (!Function_106(143, 2))
			{
				Function_144(143, 2);
				Function_143(143, 0, 0, 0);
			}
			if (!Function_106(144, 2))
			{
				Function_144(144, 2);
				Function_143(144, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (!Function_106(147, 2))
			{
				Function_144(147, 2);
				Function_143(147, 0, 0, 0);
			}
			if (!Function_106(150, 2))
			{
				Function_144(150, 2);
				Function_143(150, 0, 0, 0);
			}
			if (!Function_106(153, 2))
			{
				Function_144(153, 2);
				Function_143(153, 0, 0, 0);
			}
			if (!Function_106(156, 2))
			{
				Function_144(156, 2);
				Function_143(156, 0, 0, 0);
			}
			if (!Function_106(157, 2))
			{
				Function_144(157, 2);
				Function_143(157, 0, 0, 0);
			}
			if (!Function_106(158, 2))
			{
				Function_144(158, 2);
				Function_143(158, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_456(int iParam0) //Position: 0xF934 / 63796
{
	Function_9(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_457(bool bParam0) //Position: 0xF946 / 63814
{
	return Function_12(Global_83864.f_1256, bParam0);
}

void Function_458() //Position: 0xF958 / 63832
{
	if (!Function_106(161, 2))
	{
		Function_144(161, 2);
		Function_143(161, 0, 0, 0);
	}
	if (!Function_106(162, 2))
	{
		Function_144(162, 2);
		Function_143(162, 0, 0, 0);
	}
	if (!Function_106(163, 2))
	{
		Function_144(163, 2);
		Function_143(163, 0, 0, 0);
	}
	if (!Function_106(164, 2))
	{
		Function_144(164, 2);
		Function_143(164, 0, 0, 0);
	}
	if (!Function_106(165, 2))
	{
		Function_144(165, 2);
		Function_143(165, 0, 0, 0);
	}
	if (!Function_106(166, 2))
	{
		Function_144(166, 2);
		Function_143(166, 0, 0, 0);
	}
	if (!Function_106(167, 2))
	{
		Function_144(167, 2);
		Function_143(167, 0, 0, 0);
	}
	if (!Function_106(168, 2))
	{
		Function_144(168, 2);
		Function_143(168, 0, 0, 0);
	}
	if (!Function_106(169, 2))
	{
		Function_144(169, 2);
		Function_143(169, 0, 0, 0);
	}
	if (!Function_106(172, 2))
	{
		Function_144(172, 2);
		Function_143(172, 0, 0, 0);
	}
	if (!Function_106(175, 2))
	{
		Function_144(175, 2);
		Function_143(175, 0, 0, 0);
	}
	if (!Function_106(178, 2))
	{
		Function_144(178, 2);
		Function_143(178, 0, 0, 0);
	}
	if (!Function_106(181, 2))
	{
		Function_144(181, 2);
		Function_143(181, 0, 0, 0);
	}
	if (!Function_106(184, 2))
	{
		Function_144(184, 2);
		Function_143(184, 0, 0, 0);
	}
	return;
}

void Function_459(int iParam0) //Position: 0xFAAE / 64174
{
	if (!Function_45((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_460(iParam0);
		Function_10(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_460(int iParam0) //Position: 0xFADB / 64219
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		if (Function_45(Var0.f_656, 4))
		{
			Function_7(&Var0 + 656, 4);
			NET_SET_PLAYLIST_LOCKED(&Var0, 0);
			ADD_PLAYLIST_TO_DB(iParam0, &Var0);
		}
	}
	return;
}

void Function_461(int iParam0) //Position: 0xFB18 / 64280
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_466(iParam0)], 1);
	if (bVar0)
	{
		if (Function_153(3) == 0)
		{
			switch (iParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_462(&Global_50170, 87, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_462(&Global_50170, 101, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_462(&Global_50170, 115, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_462(&Global_50170, 129, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_462(&Global_50170, 143, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_462(&Global_50170, 157, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_462(var uParam0, int iParam1, float fParam2, int iParam3) //Position: 0xFBF5 / 64501
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_463(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, 1, 1, fParam2, iParam3, 0);
			break;
	}
}

void Function_463(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, int iParam8) //Position: 0xFC37 / 64567
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_148(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_465(iParam0);
		Function_464(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
	}
	else if (bParam4 >= 4294967295)
	{
		*uParam3 = TO_FLOAT(bParam4);
		*uParam3 = (*uParam3 / IntToFloat(iParam5));
		if (*uParam3 == fVar0)
		{
			Function_104(iParam0, *uParam3, (iParam8 && Function_106(iParam0, 4)), bParam4, 4294967295, 4294967295);
		}
	}
}

void Function_464(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xFC9E / 64670
{
	var uVar0;
	
	*uParam2 = 10;
	*uParam1 = 2;
	*uParam3 = 1.0f;
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_01_128";
	}
	Function_126(&Global_50170[iParam022] + 16, CEIL(bParam4), bParam6);
	if (iParam5 != 5)
	{
		uVar0 = iParam0 + 1;
		Function_143(uVar0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY(Function_108(iParam0));
		REMOVE_JOURNAL_ENTRY(Function_108(iParam0), 0);
		Function_142(iParam0, 4);
	}
	else
	{
		Function_134(iParam0, 0);
	}
	Function_111();
}

var Function_465(int iParam0) //Position: 0xFD1B / 64795
{
	int iVar0;
	
	iVar0 = "COOP_icon_128";
	switch (iParam0)
	{
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x000000A9:
		case 0x000000AA:
		case 0x000000AB:
			iVar0 = "SC_AA_Pikes_Icon_128";
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x000000AC:
		case 0x000000AD:
		case 0x000000AE:
			iVar0 = "SC_AA_Mercer_Icon_128";
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000076:
		case 0x000000AF:
		case 0x000000B0:
		case 0x000000B1:
			iVar0 = "SC_AA_Tesoro_Icon_128";
			break;
		
		case 0x00000077:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000B4:
			iVar0 = "SC_AA_Gaptooth_Icon_128";
			break;
		
		case 0x00000085:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			iVar0 = "SC_AA_TwinRocks_Icon_128";
			break;
		
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
		case 0x00000096:
		case 0x00000097:
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
			iVar0 = "SC_AA_Nosalida_Icon_128";
			break;
		
		default:
			iVar0 = "COOP_icon_128";
			break;
	}
	return iVar0;
}

int Function_466(int iParam0) //Position: 0x10076 / 65654
{
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			return 0;
			break;
		
		case 0x00000021:
		case 0x0000002F:
			return 1;
			break;
		
		case 0x00000026:
		case 0x0000005B:
			return 2;
			break;
		
		case 0x00000022:
		case 0x00000058:
			return 3;
			break;
		
		case 0x00000027:
		case 0x0000005C:
			return 4;
			break;
		
		case 0x00000023:
		case 0x00000059:
			return 5;
			break;
	}
	return 4294967295;
}

void Function_467(bool bParam0) //Position: 0x100EA / 65770
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_466(bParam0)], 1);
	if (bVar0)
	{
		if (Function_150(12) == 0)
		{
			switch (bParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_462(&Global_50170, 86, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_462(&Global_50170, 100, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_462(&Global_50170, 114, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_462(&Global_50170, 128, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_462(&Global_50170, 142, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_462(&Global_50170, 156, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_468(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5) //Position: 0x101C8 / 65992
{
	bool bVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((Function_471(iVar1, 0, iParam2) && !bParam3) && !Function_470(iVar1, 0, iParam2))
				{
					uParam0[iParam122]->f_28++;
					Function_469(iVar1, 0, iParam2);
				}
				else if ((Function_471(iVar1, 1, iParam2) && !Function_470(iVar1, 1, iParam2)) && bParam3)
				{
					uParam0[iParam122]->f_28++;
					Function_469(iVar1, 1, iParam2);
				}
				iVar1++;
			}
			bVar0 = uParam0[iParam122]->f_28;
			Function_463(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, 6, fParam4, iParam5, 0);
			break;
	}
}

void Function_469(int iParam0, int iParam1, int iParam2) //Position: 0x1028F / 66191
{
	Function_10(&Global_55869[iParam037][iParam118] + 36[iParam2], 1);
	return;
}

bool Function_470(int iParam0, int iParam1, int iParam2) //Position: 0x102AA / 66218
{
	return Function_45((*&Global_55869[iParam037][iParam118] + 36)[iParam2], 1);
}

bool Function_471(int iParam0, int iParam1, int iParam2) //Position: 0x102C5 / 66245
{
	return Function_45(Global_55869[iParam037][iParam118][iParam2], 1);
}

void Function_472(int iParam0) //Position: 0x102DE / 66270
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Function_45(Global_79962, 128) && Function_45(Global_84364.f_740, 1))
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = 0;
	}
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			iVar0 = 0;
			break;
		
		case 0x00000021:
		case 0x0000002F:
			iVar0 = 1;
			break;
		
		case 0x00000026:
		case 0x0000005B:
			iVar0 = 2;
			break;
		
		case 0x00000022:
		case 0x00000058:
			iVar0 = 3;
			break;
		
		case 0x00000027:
		case 0x0000005C:
			iVar0 = 4;
			break;
		
		case 0x00000023:
		case 0x00000059:
			iVar0 = 5;
			break;
		
		default:
			return;
	}
	iVar3 = (Function_153(8) - 1);
	switch (iVar3)
	{
		case 0x00000000:
		case 0x00000004:
			iVar1 = 3;
			break;
		
		case 0x00000002:
		case 0x00000006:
			iVar1 = 4;
			break;
		
		case 0x00000001:
		case 0x00000005:
			iVar1 = 5;
			break;
		
		case 0x00000003:
		case 0x00000007:
			iVar1 = 6;
			break;
		
		case 0x00000008:
			iVar1 = 7;
			break;
	}
	Function_473(iVar0, iVar2, 0);
	Function_473(iVar0, iVar2, iVar1);
	if (Function_150(12) == 0)
	{
		Function_473(iVar0, iVar2, 2);
	}
	if (Function_153(3) != 0 && Function_150(12) != 0)
	{
		Function_473(iVar0, iVar2, 1);
	}
	return;
}

void Function_473(int iParam0, int iParam1, int iParam2) //Position: 0x10418 / 66584
{
	Function_10(&(Global_55869[iParam037][iParam118][iParam2]), 1);
	return;
}

void Function_474(int iParam0, float fParam1) //Position: 0x10431 / 66609
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_466(iParam0)], 1);
	bVar1 = Function_45(Global_84364.f_740, 1);
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0x00000024:
			case 0x0000005A:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 77, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 78, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_462(&Global_50170, 79, 500.0f, 5);
				}
				break;
			
			case 0x00000021:
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_462(&Global_50170, 91, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 92, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_462(&Global_50170, 93, 500.0f, 5);
				}
				break;
			
			case 0x00000026:
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 105, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_462(&Global_50170, 106, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 107, 500.0f, 5);
				}
				break;
			
			case 0x00000022:
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_462(&Global_50170, 119, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_462(&Global_50170, 120, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_462(&Global_50170, 121, 500.0f, 5);
				}
				break;
			
			case 0x00000027:
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 133, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_462(&Global_50170, 134, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 135, 500.0f, 5);
				}
				break;
			
			case 0x00000023:
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_462(&Global_50170, 147, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_462(&Global_50170, 148, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_462(&Global_50170, 149, 500.0f, 5);
				}
				break;
			
			default:
				return;
			}
	}
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000005A:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 169, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 170, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_462(&Global_50170, 171, 500.0f, 5);
				}
				break;
			
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_462(&Global_50170, 172, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 173, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_462(&Global_50170, 174, 500.0f, 5);
				}
				break;
			
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 175, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_462(&Global_50170, 176, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 177, 500.0f, 5);
				}
				break;
			
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_462(&Global_50170, 178, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_462(&Global_50170, 179, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_462(&Global_50170, 180, 500.0f, 5);
				}
				break;
			
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_462(&Global_50170, 181, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_462(&Global_50170, 182, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_462(&Global_50170, 183, 500.0f, 5);
				}
				break;
			
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_462(&Global_50170, 184, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_462(&Global_50170, 185, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_462(&Global_50170, 186, 500.0f, 5);
				}
				break;
			
			default:
				return;
			}
	}
	return;
}

void Function_475(int iParam0) //Position: 0x10886 / 67718
{
	Function_9(&Global_83864 + 1252, iParam0);
	return;
}

int Function_476(int iParam0) //Position: 0x10898 / 67736
{
	switch (iParam0)
	{
		case 0x0000002F:
		case 0x00000021:
			return 1;
		
		case 0x00000058:
		case 0x00000022:
			return 2;
		
		case 0x00000059:
		case 0x00000023:
			return 4;
		
		case 0x0000005A:
		case 0x00000024:
			return 8;
		
		case 0x0000005B:
		case 0x00000026:
			return 16;
		
		case 0x0000005C:
		case 0x00000027:
			return 32;
		
		default:
	}
	return 0;
}

var Function_477(int iParam0, bool bParam1) //Position: 0x108FD / 67837
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

int Function_478(var uParam0) //Position: 0x10C70 / 68720
{
	return Function_449(12, uParam0);
}

void Function_479() //Position: 0x10C7D / 68733
{
	return;
}

bool Function_480() //Position: 0x10C83 / 68739
{
	return Function_481(iLocal_360);
}

int Function_481(int iParam0) //Position: 0x10C8F / 68751
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

void Function_482() //Position: 0x10CD7 / 68823
{
	if (Function_480())
	{
		Function_665();
	}
	Function_663();
	switch (iLocal_360)
	{
		case 0x00000000:
			Function_662(0);
			Function_661(&bLocal_680);
			Function_658(&bLocal_406, 99904);
			Function_657(&bLocal_406, Local_72.f_348);
			Function_421(&vLocal_734);
			Function_656();
			Function_653(&bLocal_698, &iLocal_752);
			Function_650();
			ENABLE_VEHICLE_SEAT(bLocal_694, 1, 1);
			VEHICLE_SET_HANDBRAKE(bLocal_694, 0.0f);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_694), 0);
			Function_568(325, "GAP_CO_minecart", 0);
			if (IS_OBJECT_VALID(bLocal_720))
			{
				GATEWAY_DISABLE(bLocal_720, 1);
				Function_567(bLocal_720);
			}
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_694));
			NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_566();
			Function_443(6);
			break;
		
		case 0x00000006:
			Function_653(&bLocal_698, &iLocal_752);
			Function_650();
			Function_568(325, "GAP_CO_minecart", 0);
			if (!HUD_IS_FADING())
			{
				Function_353(&iLocal_403);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_565("GAP_CO_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_733 = 1;
				NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_443(7);
			}
			break;
		
		case 0x00000007:
			Function_653(&bLocal_698, &iLocal_752);
			Function_650();
			Function_568(325, "GAP_CO_minecart", 0);
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_384))
			{
				Function_9(&Local_594 + 16, 32);
			}
			if (((Function_564(&bLocal_698) && !iLocal_728) && !Function_12(iLocal_727, 0x4000000)) && !Function_12(iLocal_727, 0x1000000))
			{
				iLocal_731 = 0;
				Function_9(&iLocal_727, 4194304);
				iLocal_359 = 101;
				Function_443(0);
			}
			if (Function_563())
			{
				if (Function_395(105, 1, 0x3f800000))
				{
					HUD_FADE_OUT(2.0f, 1f, 1);
					NET_LOG(bLocal_687, "TUMco Stage01", "Transitioning to GID_FADE_OUT", false, false, false, false);
					Function_443(105);
				}
			}
			else if (!IS_OBJECT_VALID(bLocal_722))
			{
				if (Function_395(105, 1, 0x3f800000))
				{
					HUD_FADE_OUT(2.0f, 1f, 1);
					NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_FADE_OUT", false, false, false, false);
					Function_443(105);
				}
			}
			else if (IS_ACTOR_VALID(Function_41()) && IS_OBJECT_VALID(bLocal_722))
			{
				if (Function_562(Local_72.f_320))
				{
					Function_556(StackVal, StackVal, &bLocal_722, &iLocal_732, &iLocal_733, "GAP_CO_obj03", vLocal_734);
				}
				if (!IS_ACTOR_IN_VOLUME(bLocal_694, Local_72.f_320) || Function_12(iLocal_727, 0x1000000))
				{
					if (Function_395(105, 1, 0x3f800000))
					{
						HUD_FADE_OUT(2.0f, 1f, 1);
						if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_694, true) == Function_41())
						{
							Function_9(&Local_594 + 16, 64);
							Function_9(&Local_594 + 16, 32);
						}
						Function_662(0);
						SET_ACTOR_INVULNERABILITY(Function_41(), 1);
						NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_FADE_OUT", false, false, false, false);
						Function_443(105);
					}
					if (!Function_12(iLocal_727, 8388608))
					{
						Function_9(&iLocal_727, 8388608);
						Function_555();
						Function_354(&iLocal_737, 0.0f);
					}
					if ((Function_12(iLocal_727, 8388608) && Function_554(&iLocal_737, 12.0f)) || Function_553(Local_72.f_320))
					{
						Function_552();
					}
				}
				else if (Function_12(iLocal_727, 8388608))
				{
					if (Function_355(&iLocal_737))
					{
						Function_551(&iLocal_737);
					}
					Function_6(&iLocal_727, 8388608);
				}
			}
			break;
		
		case 0x00000069:
			Function_9(&iLocal_727, 0x1000000);
			if (HUD_IS_FADED() || Function_563())
			{
				if (Function_395(104, 1, 0x3f800000))
				{
					Function_185();
					Function_548(&bLocal_746, 3.0f);
					NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_NINETYNINTH_GOAL", false, false, false, false);
					Function_443(104);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000068:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(1, 1, 0x3f800000))
				{
					NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_STREAMING_GOAL", false, false, false, false);
					Function_443(1);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000001:
			STREAMING_UNLOAD_BOUNDS();
			Function_345(&bLocal_680);
			Local_594.f_12 = Function_150(15);
			if (Function_547() == 0)
			{
				Function_9(&Local_594 + 16, 16);
			}
			SET_TIME_OF_DAY(Global_63400);
			Function_541(0, 0);
			SET_TIME_ACCELERATION(0.0f);
			Function_540();
			Function_439();
			CLEAR_ALL_CORPSES();
			CLEAR_DECALS();
			CLEAR_CHARACTER_BLOOD();
			Function_167(0);
			ENABLE_VEHICLE_SEAT(bLocal_694, 1, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_694), 1);
			VEHICLE_SET_HANDBRAKE(bLocal_694, 1.0f);
			ACTOR_PUT_WEAPON_IN_HAND(Function_41(), 5, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_FACTION(Function_41(), 20);
			ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			Function_539();
			Function_447();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_538(Function_41(), 0);
			ACTOR_HOLSTER_WEAPON(Function_41(), 0);
			REMOVE_BLIP(bLocal_751);
			REMOVE_BLIP(bLocal_749);
			Function_537();
			STREAMING_SET_CUTSCENE_MODE(1);
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_POST_STREAMING", false, false, false, false);
			Function_345(&Global_78578 + 96);
			Function_443(2);
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4))
			{
				if (Function_395(5, 1, 0x3f800000))
				{
					if (!iLocal_728)
					{
						Function_531();
						Function_526();
					}
					Function_525();
					Function_524();
					Function_522();
					bLocal_754 = CREATE_OBJECT_ITERATOR(Local_72);
					NET_LOG(bLocal_687, "Mission STAGE03", "Transitioning to GID_FADE_IN", false, false, false, false);
					Function_443(5);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000005:
			SET_TIME_OF_DAY(Global_63400);
			Function_541(0, 0);
			SET_TIME_ACCELERATION(0.25f);
			Function_524();
			Function_520();
			Function_518();
			Function_548(&bLocal_746, 2.0f);
			Function_443(3);
			break;
		
		case 0x00000003:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(4, 1, 0x3f800000))
				{
					Function_443(4);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000004:
			Function_524();
			if (Function_502())
			{
				Function_435();
				Function_501();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ACTOR_FACTION(Function_41(), 2);
				Function_443(10);
				NET_LOG(bLocal_687, "Mission Stage03", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
			}
			break;
		
		case 0x0000000A:
			Function_661(&bLocal_680);
			HUD_FADE_IN(2.0f, 1065353216);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_FACTION(Function_41(), 2);
			STREAMING_SET_CUTSCENE_MODE(0);
			STREAMING_UNLOAD_SCENE();
			SET_ACTOR_INVULNERABILITY(Function_41(), 0);
			Function_443(11);
			NET_LOG(bLocal_687, "Mission Stage03", "Transitioning to GID_SIXTH_GOAL", false, false, false, false);
			break;
		
		case 0x0000000B:
			if (Function_45((*&Global_84364 + 712)[3], 1))
			{
				if (Global_56092[130] > 12)
				{
					Function_462(&Global_50170, 130, 50.0f, 0);
				}
				if (Global_56092[131] > 15)
				{
					Function_462(&Global_50170, 131, 250.0f, 1);
				}
				if (Global_56092[132] > 18)
				{
					Function_462(&Global_50170, 132, 500.0f, 5);
				}
			}
			Function_661(&Global_78578 + 96);
			Function_565("GAP_CO_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_500(&bLocal_708, 1.0f);
			Function_443(12);
			break;
		
		case 0x0000000C:
			if (Function_498(&bLocal_708))
			{
				Function_491();
				Function_443(13);
			}
			break;
		
		case 0x0000000D:
			Function_489();
			Function_484();
			if (iLocal_731)
			{
				if (Function_395(106, 1, 0x3f800000))
				{
					Function_443(106);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x0000006A:
			if (Function_395(101, 1, 0x3f800000))
			{
				Function_345(&bLocal_680);
				if (IS_ACTOR_VALID(Function_41()))
				{
					if (IS_ACTOR_ALIVE(Function_41()))
					{
						Function_9(&Local_594 + 16, 4);
					}
				}
				Local_594.f_8 = Function_150(29);
				DESTROY_ITERATOR(bLocal_754);
				Function_439();
				Function_483();
				iLocal_731 = 1;
				iLocal_359 = 101;
				Function_443(0);
			}
			break;
	}
	return;
}

void Function_483() //Position: 0x11606 / 71174
{
	return;
}

void Function_484() //Position: 0x1160C / 71180
{
	if (Function_486() < 0)
	{
		Function_485();
	}
	return;
}

void Function_485() //Position: 0x1161C / 71196
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 60, &uVar0, 1, 1);
	return;
}

int Function_486() //Position: 0x1162D / 71213
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + Function_488());
	if (SQUAD_IS_VALID(Local_72.f_276))
	{
		iVar0 = (iVar0 + Function_487(Local_72.f_276));
	}
	return iVar0;
}

int Function_487(bool bParam0) //Position: 0x11658 / 71256
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

int Function_488() //Position: 0x116A8 / 71336
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ITERATOR_VALID(bLocal_754))
	{
		LOG_ERROR("Failed to create iterator");
		return 4294967295;
	}
	OBJECT_ITERATOR_RESET(bLocal_754);
	ITERATE_IN_LAYOUT(bLocal_754, Local_72);
	ITERATE_ON_OBJECT_TYPE(bLocal_754, 15);
	iVar0 = 0;
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bLocal_754);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ALIVE(bVar3))
			{
				bVar1 = NET_ACTOR_GET_SCRIPT_INT(bVar3);
				if (bVar1 <= 300 && bVar1 >= 308)
				{
					iVar0++;
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bLocal_754);
	}
	return iVar0;
}

void Function_489() //Position: 0x11746 / 71494
{
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_727, 65536))
		{
			if (Function_486() <= 12)
			{
				Function_490(1);
			}
		}
		else if (!Function_12(iLocal_727, 131072))
		{
			if (Function_486() <= 12)
			{
				Function_490(2);
			}
		}
		else if (!Function_12(iLocal_727, 262144))
		{
			if (Function_486() <= 15)
			{
				Function_490(3);
			}
		}
	}
	return;
}

void Function_490(int iParam0) //Position: 0x117A6 / 71590
{
	var uVar0;
	
	uVar0 = iParam0;
	if (iParam0 == 1)
	{
		Function_9(&iLocal_727, 65536);
	}
	else if (iParam0 == 2)
	{
		Function_9(&iLocal_727, 131072);
	}
	else if (iParam0 == 3)
	{
		Function_9(&iLocal_727, 262144);
	}
	NET_SCRIPTMSG_SEND(3, 48, &uVar0, 1, 1);
	return;
}

void Function_491() //Position: 0x117F1 / 71665
{
	if (SQUAD_IS_VALID(Local_72.f_244))
	{
		Function_497(&Local_72 + 244);
		Function_496(&Local_72 + 244);
		Function_492(&Local_72 + 244);
	}
	if (SQUAD_IS_VALID(Local_72.f_248))
	{
		Function_497(&Local_72 + 248);
		Function_496(&Local_72 + 248);
		Function_492(&Local_72 + 248);
	}
	if (SQUAD_IS_VALID(Local_72.f_252))
	{
		Function_497(&Local_72 + 252);
		Function_496(&Local_72 + 252);
		Function_492(&Local_72 + 252);
	}
	if (SQUAD_IS_VALID(Local_72.f_256))
	{
		Function_497(&Local_72 + 256);
		Function_496(&Local_72 + 256);
		Function_492(&Local_72 + 256);
	}
	if (SQUAD_IS_VALID(Local_72.f_260))
	{
		Function_497(&Local_72 + 260);
		Function_496(&Local_72 + 260);
		Function_492(&Local_72 + 260);
	}
	if (SQUAD_IS_VALID(Local_72.f_276))
	{
		Function_497(&Local_72 + 276);
		Function_496(&Local_72 + 276);
		Function_492(&Local_72 + 276);
	}
	return;
}

void Function_492(bool bParam0) //Position: 0x118BD / 71869
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					Function_495(*bParam0, GET_SLOT_ACTOR(bVar0));
					Function_494(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_493(*bParam0, GET_SLOT_ACTOR(bVar0), 4);
				}
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_IDENTIFY_NET_PLAYERS was passed an invalid squad");
	}
	return;
}

void Function_493(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1195E / 72030
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_494(bool bParam0, bool bParam1, bool bParam2) //Position: 0x119A3 / 72099
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_495(bool bParam0, bool bParam1) //Position: 0x11A0E / 72206
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_496(int iParam0) //Position: 0x11A60 / 72288
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*iParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				ACTOR_END_FORCE_HOLSTER(bVar1);
				ACTOR_DRAW_ANY_WEAPON(bVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_497(int iParam0) //Position: 0x11AAA / 72362
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*iParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				MEMORY_ALLOW_SHOOTING(bVar1, 1);
				MEMORY_ALLOW_THROWING_EXPLOSIVES(bVar1, 1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_FIRE_AT_WILL was passed an invalid squad");
	}
	return;
}

bool Function_498(bool bParam0) //Position: 0x11B32 / 72498
{
	if (Function_564(bParam0))
	{
		Function_499(bParam0);
		return 1;
	}
	return 0;
}

void Function_499(bool bParam0) //Position: 0x11B48 / 72520
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_500(bool bParam0, float fParam1) //Position: 0x11B5C / 72540
{
	if (!Function_220(bParam0))
	{
		Function_548(bParam0, fParam1);
	}
	return;
}

void Function_501() //Position: 0x11B72 / 72562
{
	bool bVar0[4];
	int iVar5;
	
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_0");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_1");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_2");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_3");
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 3)
	{
		if (IS_ACTOR_VALID(bVar0[iVar5]))
		{
			DESTROY_ACTOR(bVar0[iVar5]);
		}
		iVar5++;
	}
	return;
}

bool Function_502() //Position: 0x11BEF / 72687
{
	bool bVar0;
	var uVar1;
	
	Function_517(&Local_368, 1);
	bVar0 = false;
	if (((Local_368 != 1001 || Local_368 != 1002) || Local_368 != 1003) || Local_368 != 1004)
	{
		bVar0 = Function_511();
	}
	switch (Local_368)
	{
		case 0x000003E8:
			iLocal_1158 = 15;
			Function_421(&Local_368 + 4);
			Function_418();
			Function_414(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_368.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_368.f_16 = Function_503(Local_72, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_368.f_16))
				{
				}
				else
				{
					LOG_ERROR("GapCoop_Cutscene_2 - Failed to create GapCoop_Cutscene_2_cutscene");
				}
			}
			Local_368 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_368.f_16), false))
			{
				Local_368 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_368 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_351(&Local_368 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Local_368 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_421(&Local_368 + 4);
				Local_368 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_368.f_16))
				{
					DESTROY_OBJECT(Local_368.f_16);
				}
				Local_368 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_368 = 1104;
			}
			break;
	}
	return 0;
}

var Function_503(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11DFF / 73215
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GapCoop_Cutscene_2", 6, 1);
	}
	Function_504(&bVar0);
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

void Function_504(int iParam0) //Position: 0x11E7D / 73341
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_510(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_509(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_508(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_507(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_506(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_505(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(uVar1, 0.0f, 2.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 9.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 4, 5, 9.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 1.0f, 4);
	return;
}

void Function_505(int iParam0) //Position: 0x11F2B / 73515
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4451.494f, 11.19053f, 3236.64f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.068596f, 0.32936f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_506(int iParam0) //Position: 0x11F95 / 73621
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4455.438f, 11.16528f, 3239.467f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.058584f, -0.175526f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_507(int iParam0) //Position: 0x11FFF / 73727
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4461.12f, 16.22526f, 3228.047f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.274849f, -2.543853f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_508(int iParam0) //Position: 0x12069 / 73833
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4458.581f, 17.00282f, 3222.608f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.204363f, -2.811473f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_509(int iParam0) //Position: 0x120D3 / 73939
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4433.368f, 9.944088f, 3223.184f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.002316f, -0.187114f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_510(var uParam0) //Position: 0x1213D / 74045
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4439.253f, 9.871015f, 3223.713f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.037868f, -0.403015f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_511() //Position: 0x121A7 / 74151
{
	switch (iLocal_1158)
	{
		case 0x0000000F:
			if (Function_351(&Local_368 + 4) < 1.0f)
			{
				iLocal_1158 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_351(&Local_368 + 4) < 1.5f)
			{
				Function_516();
				iLocal_1158 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_351(&Local_368 + 4) < 2.8f)
			{
				Function_515();
				iLocal_1158 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_351(&Local_368 + 4) < 3.5f)
			{
				Function_514();
				iLocal_1158 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_351(&Local_368 + 4) < 4.1f)
			{
				Function_513();
				iLocal_1158 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_351(&Local_368 + 4) < 10.0f)
			{
				Function_512();
				iLocal_1158 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_351(&Local_368 + 4) < 24.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_512() //Position: 0x1229C / 74396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene2_v1_AA", "WG_Scene2_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene2_v1_AB", "WG_Scene2_v1_AB", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1231B / 74523
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;
	vector3 vVar34;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4429.943f, 8.939f, 3203.673f };
		vVar3 = { -4425.369f, 8.785f, 3203.213f };
		vVar6 = { -4427.872f, 8.654f, 3203.021f };
		vVar9 = { -4428.479f, 8.773f, 3202.085f };
		vVar12 = { -4425.321f, 8.734f, 3202.301f };
		vVar15 = { -4429.721f, 13.054f, 3203.294f };
		vVar18 = { -4425.722f, 12.963f, 3203.294f };
		vVar21 = { -4427.399f, 12.589f, 3202.539f };
		vVar24 = { -4428.052f, 9.822f, 3201.6f };
		vVar27 = { -4427.571f, 8.8f, 3206.604f };
		vVar30 = { 0.0f, -0.337f, 0.0f };
		UNK_0xE18028C1(bLocal_1159);
		DESTROY_OBJECT(bLocal_1159);
		bLocal_1159 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_72, "mineExp2", "script_tunnel_cavein_01", vVar27);
		SET_RMPTFX_SCALE(bLocal_1159, 10.0f);
		UNK_0x6745191B(bLocal_1159, vVar30);
		SHOW_RMPTFX_EFFECT(bLocal_1159);
		bVar33 = "";
		vVar34 = { 20.0f, 178.754f, 0.0f };
		_CREATE_EXPLOSION(&vVar0, "Rebel06WagonExplosion", bVar33, &vVar34, 1);
		Function_426(&vVar9, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar21, "FireBottleExplosion", 0, 1);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance1Prop", "$/fragments/p_gen_caveIn02x", -4428.27f, 8.596933f, 3201.186f, 0.0f, -187.6697f, 0.0f, 1);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance2Prop", "$/fragments/p_gen_caveIn02x", -4427.186f, 8.618516f, 3200.496f, 0.0f, -5.885397f, 0.0f, 1);
		CREATE_PROP_IN_LAYOUT(Local_72, "BlockedEntrance3Prop", "$/fragments/p_gen_caveIn02x", -4427.661f, 8.731054f, 3201.742f, 0.0f, -270.205f, 0.0f, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_514() //Position: 0x125C0 / 75200
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar27;
	vector3 vVar28;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4428.132f, 9.707f, 3202.706f };
		vVar3 = { -4427.835f, 9.086f, 3199.199f };
		vVar6 = { -4427.003f, 11.042f, 3202.767f };
		vVar9 = { -4428.771f, 11.207f, 3200.855f };
		vVar12 = { -4426.747f, 9.629f, 3195.448f };
		vVar15 = { -4427.629f, 12.386f, 3200.554f };
		vVar18 = { -4427.35f, 10.149f, 3199.064f };
		vVar21 = { -4427.571f, 8.8f, 3206.604f };
		vVar24 = { 0.0f, -0.337f, 0.0f };
		bLocal_1159 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_72, "mineExp1", "script_tunnel_cavein_01", vVar21);
		SET_RMPTFX_SCALE(bLocal_1159, 10.0f);
		UNK_0x6745191B(bLocal_1159, vVar24);
		SHOW_RMPTFX_EFFECT(bLocal_1159);
		bVar27 = "";
		vVar28 = { 20.0f, 178.754f, 0.0f };
		_CREATE_EXPLOSION(&vVar0, "Rebel06WagonExplosion", bVar27, &vVar28, 1);
		_CREATE_EXPLOSION(&vVar3, "Rebel06WagonExplosion", bVar27, &vVar28, 1);
		Function_426(&vVar6, "DynamiteExplosion", 0, 1);
		Function_426(&vVar9, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar15, "FireBottleExplosion", 0, 1);
	}
	return;
}

void Function_515() //Position: 0x1276E / 75630
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4426.0f, 9.641f, 3196.193f };
		vVar3 = { -4427.693f, 9.984f, 3192.327f };
		Function_426(&vVar0, "BuriedDynamiteExplosion", 0, 1);
		Function_426(&vVar3, "BuriedDynamiteExplosion", 0, 1);
	}
	return;
}

void Function_516() //Position: 0x127E2 / 75746
{
	vector3 vVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		vVar0 = { -4423.946f, 8.737f, 3187.783f };
		Function_426(&vVar0, "DynamiteExplosion", 0, 1);
	}
	return;
}

void Function_517(int iParam0, bool bParam1) //Position: 0x1281C / 75804
{
	if (!iParam0->f_24)
	{
		if (((((((((*iParam0 == 1000 && *iParam0 == 1001) && *iParam0 == 1002) && *iParam0 == 1003) && *iParam0 == 1103) && *iParam0 == 1104) && *iParam0 == 1105) && *iParam0 == 1106) && !UI_ISACTIVE("Cutscenes_Paused")) && !UI_ISACTIVE("PauseScene"))
		{
			if (IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
			{
				if (!Function_194(4096, 1))
				{
					Function_46(4096, 1);
				}
			}
			if (Function_365())
			{
				iParam0->f_24 = 1;
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					if (!HUD_IS_FADED())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
				}
				Function_50(20, 1, 0, 0);
				*iParam0 = 1105;
			}
		}
	}
	return;
}

void Function_518() //Position: 0x128F6 / 76022
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(Local_72.f_244);
	SQUAD_GOALS_CLEAR(Local_72.f_248);
	SQUAD_GOALS_CLEAR(Local_72.f_252);
	SQUAD_GOALS_CLEAR(Local_72.f_256);
	SQUAD_GOALS_CLEAR(Local_72.f_260);
	SQUAD_GOALS_CLEAR(Local_72.f_276);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4444.173f, 8.533f, 3248.795f, 17.29f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4446.172f, 8.531f, 3248.78f, 17.29f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4473.937f, 8.534f, 3266.522f, 350.368f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4451.012f, 8.528f, 3256.517f, 18.166f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4434.43f, 8.534f, 3245.191f, 62.379f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4436.436f, 8.649f, 3245.36f, 25.41f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_7");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4441.392f, 8.617f, 3232.995f, 74.4f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4460.087f, 8.564f, 3268.712f, 350.368f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4478.685f, 9.035f, 3244.831f, 17.29f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4431.21f, 8.58f, 3229.154f, 91.539f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4453.354f, 8.528f, 3257.429f, 347.571f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4430.898f, 8.569f, 3219.599f, 109.825f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4438.392f, 8.612f, 3244.924f, 15.058f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4489.84f, 9.036f, 3250.217f, 350.368f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4436.859f, 8.823f, 3251.305f, 46.108f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4438.79f, 8.587f, 3218.49f, 120.288f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_boss");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_519(&bVar0, -4439.732f, 8.595f, 3236.614f, 34.67f);
	}
	return;
}

void Function_519(bool bParam0, float fParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x12CBF / 76991
{
	int iVar0;
	
	TASK_CLEAR(*bParam0);
	iVar0 = FIND_NEAREST_COVER_LOCATION(&fParam1, 1.0f, bParam4, 180.0f, 7);
	if (!IS_COVER_LOCATION_VALID(iVar0))
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(*bParam0, &fParam1, bParam4, -1.0f);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(*bParam0, iVar0, -1.0f, 1086324736);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
}

void Function_520() //Position: 0x12D10 / 77072
{
	Function_521(&Local_72 + 244);
	Function_521(&Local_72 + 248);
	Function_521(&Local_72 + 252);
	Function_521(&Local_72 + 256);
	Function_521(&Local_72 + 260);
	Function_521(&Local_72 + 276);
	return;
}

void Function_521(var uParam0) //Position: 0x12D43 / 77123
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				MEMORY_ALLOW_SHOOTING(bVar1, 0);
				MEMORY_ALLOW_THROWING_EXPLOSIVES(bVar1, 0);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_HOLD_FIRE was passed an invalid squad");
	}
	return;
}

void Function_522() //Position: 0x12DC8 / 77256
{
	if (IS_SLOT_VALID(false))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)) && Function_360(0) < 0)
		{
			Function_523(GET_SLOT_ACTOR(false), 1);
			TASK_CLEAR(GET_SLOT_ACTOR(false));
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(false), -4455.279f, 9.205f, 3219.285f, 175.967f, 1, 0, 1);
		}
	}
	if (IS_SLOT_VALID(true))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)) && Function_360(1) < 0)
		{
			Function_523(GET_SLOT_ACTOR(true), 1);
			TASK_CLEAR(GET_SLOT_ACTOR(true));
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(true), -4455.279f, 9.205f, 3219.285f, 166.958f, 1, 0, 1);
		}
	}
	if (IS_SLOT_VALID(2))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)) && Function_360(2) < 0)
		{
			Function_523(GET_SLOT_ACTOR(2), 1);
			TASK_CLEAR(GET_SLOT_ACTOR(2));
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(2), -4455.279f, 9.205f, 3219.285f, 159.115f, 1, 0, 1);
		}
	}
	if (IS_SLOT_VALID(3))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)) && Function_360(3) < 0)
		{
			Function_523(GET_SLOT_ACTOR(3), 1);
			TASK_CLEAR(GET_SLOT_ACTOR(3));
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(3), -4455.279f, 9.205f, 3219.285f, 153.184f, 1, 0, 1);
		}
	}
	return;
}

bool Function_523(bool bParam0, int iParam1) //Position: 0x12EE6 / 77542
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && !GET_ACTOR_INCAPACITATED(bParam0))
		{
			return MAKE_ACTOR_READY_FOR_ACTION(bParam0, iParam1);
		}
	}
	return 0;
}

void Function_524() //Position: 0x12F0C / 77580
{
	bool bVar0[4];
	bool bVar5;
	int iVar6;
	
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_0");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_1");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_2");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(Local_72, "Sub_3");
	bVar5 = false;
	bVar5 = false;
	while (bVar5 < 3)
	{
		if (IS_ACTOR_VALID(bVar0[bVar5]))
		{
			if (Function_360(bVar5) >= 0)
			{
				if (!Function_12(Local_599[bVar55].f_16, 32))
				{
					iVar6 = GET_TASK_STATUS(bVar0[bVar5], 43);
					if (2 != iVar6 || 4 != iVar6)
					{
						TASK_CLEAR(bVar0[bVar5]);
						switch (bVar5)
						{
							case 0x00000000:
							case 0x00000001:
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0[bVar5], Local_72.f_1132, 3, 0, 0, 1, 0);
								break;
							
							case 0x00000002:
							case 0x00000003:
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0[bVar5], Local_72.f_1136, 3, 0, 0, 1, 0);
								break;
						}
						TASK_PRIORITY_SET(bVar0[0], 1);
					}
				}
			}
		}
		bVar5++;
	}
	return;
}

void Function_525() //Position: 0x13011 / 77841
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -4447.705f, 8.757f, 3238.036f };
	vVar3 = { -1.0f, 0.0f, 0.0f };
	TRAIN_SET_POSITION_DIRECTION(iLocal_693, &vVar0, &vVar3);
	return;
}

void Function_526() //Position: 0x1303B / 77883
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_530();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_529(Local_72.f_276, 322, 3212836864);
	SQUAD_SET_FACTION(Local_72.f_276, 19);
	SQUAD_GOALS_CLEAR(Local_72.f_276);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_276, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_527(&Local_72 + 276);
	Function_521(&Local_72 + 276);
	return;
}

void Function_527(int iParam0) //Position: 0x13094 / 77972
{
	Function_528(iParam0, iLocal_791);
	return;
}

void Function_528(var uParam0, int iParam1) //Position: 0x130A2 / 77986
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		LOG_ERROR("SETUP_STANDARD_MP_SUPPRESSION_SQUAD - Invalid squad");
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_188(&bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_529(bool bParam0, int iParam1, float fParam2) //Position: 0x1311E / 78110
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, iParam1, 0, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar2, fParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_530() //Position: 0x13176 / 78198
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_276 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_boss"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_boss", 492, -4461.741f, 8.135591f, 3320.163f, 0.0f, -17.64818f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_276);
	GIVE_WEAPON_TO_ACTOR(bVar0, 14, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 308);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_531() //Position: 0x131FF / 78335
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_536();
	Function_535();
	Function_534();
	Function_533();
	Function_533();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_529(Local_72.f_244, 322, 3212836864);
	Function_529(Local_72.f_248, 322, 3212836864);
	Function_529(Local_72.f_252, 322, 3212836864);
	Function_529(Local_72.f_256, 322, 3212836864);
	Function_529(Local_72.f_260, 322, 3212836864);
	SQUAD_GOALS_CLEAR(Local_72.f_244);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_244, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_72.f_248);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_248, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_72.f_252);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_252, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_72.f_256);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_256, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_72.f_260);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_260, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_532();
	Function_521(&Local_72 + 244);
	Function_521(&Local_72 + 248);
	Function_521(&Local_72 + 252);
	Function_521(&Local_72 + 256);
	Function_521(&Local_72 + 260);
	return;
}

void Function_532() //Position: 0x13315 / 78613
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_7");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_792);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 5, bLocal_792);
	}
	return;
}

void Function_533() //Position: 0x13583 / 79235
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_256 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_lts_sec_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_5", 491, -4394.324f, 9.154933f, 3240.856f, 0.0f, 98.39671f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_256);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 303);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_6", 490, -4403.172f, 8.482657f, 3249.336f, 0.0f, 98.39671f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_256);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 303);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_5", 488, -4398.382f, 8.734753f, 3245.47f, 0.0f, 98.39671f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_256);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 303);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_3", 486, -4408.499f, 8.387402f, 3255.529f, 0.0f, 98.39671f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_256);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 303);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_534() //Position: 0x136D1 / 79569
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_252 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_lts_main_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_4", 489, -4465.105f, 7.778368f, 3312.986f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_252);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 302);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_4", 489, -4469.253f, 8.624214f, 3319.993f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_252);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 302);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_2", 491, -4455.456f, 7.91584f, 3332.325f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_252);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 302);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_535() //Position: 0x137C9 / 79817
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_248 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_lts_main_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_3", 492, -4461.189f, 7.780599f, 3307.945f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_248);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 301);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_1", 486, -4457.334f, 8.103577f, 3324.271f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_248);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 301);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_dy_1", 486, -4456.886f, 7.896435f, 3313.86f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_248);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 301);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_536() //Position: 0x138C1 / 80065
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_244 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_lts_main_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_1", 493, -4456.179f, 7.781173f, 3305.769f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_244);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 300);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_as_2", 493, -4462.551f, 7.826433f, 3316.355f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_244);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 300);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_su_2", 487, -4466.623f, 8.825346f, 3327.237f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_244);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 300);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_537() //Position: 0x139B9 / 80313
{
	bool bVar0[4];
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	if (IS_SLOT_VALID(false))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)) && Function_360(0) < 0)
		{
			bVar5 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(false));
			Function_523(GET_SLOT_ACTOR(false), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(false), -4451.696f, 9.035246f, 3226.521f, -149.32f, 1, 0, 1);
			if (!Function_12(Local_599[05].f_16, 32))
			{
				bVar0[0] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_0", bVar5, -4426.321f, 8.559f, 3191.751f, 0.0f, 171.727f, 0.0f);
			}
			else
			{
				bVar0[0] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_0", bVar5, -4451.696f, 9.035246f, 3226.521f, 0.0f, -149.32f, 0.0f);
			}
			SET_ACTOR_FACTION(bVar0[0], 1);
		}
	}
	if (IS_SLOT_VALID(true))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)) && Function_360(1) < 0)
		{
			bVar6 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(true));
			Function_523(GET_SLOT_ACTOR(true), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(true), -4453.983f, 9.035381f, 3227.863f, -149.32f, 1, 0, 1);
			if (!Function_12(Local_599[15].f_16, 32))
			{
				bVar0[1] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_1", bVar6, -4423.883f, 8.399f, 3186.389f, 0.0f, 171.727f, 0.0f);
			}
			else
			{
				bVar0[1] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_1", bVar6, -4453.983f, 9.035381f, 3227.863f, 0.0f, -149.32f, 0.0f);
			}
			SET_ACTOR_FACTION(bVar0[1], 1);
		}
	}
	if (IS_SLOT_VALID(2))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)) && Function_360(2) < 0)
		{
			bVar7 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(2));
			Function_523(GET_SLOT_ACTOR(2), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(2), -4455.907f, 9.035381f, 3228.852f, -149.32f, 1, 0, 1);
			if (!Function_12(Local_599[25].f_16, 32))
			{
				bVar0[2] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_2", bVar7, -4424.555f, 8.552f, 3189.125f, 0.0f, 171.727f, 0.0f);
			}
			else
			{
				bVar0[2] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_2", bVar7, -4455.907f, 9.035381f, 3228.852f, 0.0f, -149.32f, 0.0f);
			}
			SET_ACTOR_FACTION(bVar0[2], 1);
		}
	}
	if (IS_SLOT_VALID(3))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)) && Function_360(3) < 0)
		{
			bVar8 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(3));
			Function_523(GET_SLOT_ACTOR(3), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(3), -4458.07f, 9.035381f, 3230.183f, -149.32f, 1, 0, 1);
			if (!Function_12(Local_599[35].f_16, 32))
			{
				bVar0[3] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_3", bVar8, -4426.83f, 8.547f, 3194.631f, 0.0f, 171.727f, 0.0f);
			}
			else
			{
				bVar0[3] = CREATE_ACTOR_IN_LAYOUT(Local_72, "Sub_3", bVar8, -4458.07f, 9.035381f, 3230.183f, 0.0f, -149.32f, 0.0f);
			}
			SET_ACTOR_FACTION(bVar0[3], 1);
		}
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

int Function_538(bool bParam0, int iParam1) //Position: 0x13CB3 / 81075
{
	if (ACTOR_HAS_WEAPON(bParam0, 3))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 3, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, 7))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 7, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, 2))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 2, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, false))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, false, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, true))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, true, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, 6))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 6, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, 5))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 5, iParam1);
	}
	if (ACTOR_HAS_WEAPON(bParam0, 4))
	{
		return ACTOR_PUT_WEAPON_IN_HAND(bParam0, 4, iParam1);
	}
	return 0;
}

void Function_539() //Position: 0x13D5F / 81247
{
	if (IS_SLOT_VALID(false))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)) && Function_360(0) < 0)
		{
			Function_523(GET_SLOT_ACTOR(false), 1);
			TASK_VEHICLE_LEAVE(GET_SLOT_ACTOR(false));
		}
	}
	if (IS_SLOT_VALID(true))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)) && Function_360(1) < 0)
		{
			Function_523(GET_SLOT_ACTOR(true), 1);
			TASK_VEHICLE_LEAVE(GET_SLOT_ACTOR(true));
		}
	}
	if (IS_SLOT_VALID(2))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)) && Function_360(2) < 0)
		{
			Function_523(GET_SLOT_ACTOR(2), 1);
			TASK_VEHICLE_LEAVE(GET_SLOT_ACTOR(2));
		}
	}
	if (IS_SLOT_VALID(3))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)) && Function_360(30) < 0)
		{
			Function_523(GET_SLOT_ACTOR(3), 1);
			TASK_VEHICLE_LEAVE(GET_SLOT_ACTOR(3));
		}
	}
	return;
}

void Function_540() //Position: 0x13E06 / 81414
{
	Function_567(bLocal_722);
	return;
}

void Function_541(int iParam0, int iParam1) //Position: 0x13E12 / 81426
{
	Function_546(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_542(StackVal, iParam1);
	}
	return;
}

void Function_542(int iParam0, int iParam1) //Position: 0x13E43 / 81475
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_546(iParam0);
	Function_545(iVar0);
	PRINTNL();
	Function_543(iParam0, iVar0, iParam1);
	return;
}

void Function_543(int iParam0, bool bParam1, bool bParam2) //Position: 0x13E68 / 81512
{
	int iVar0;
	
	Function_546(iParam0);
	Function_545(bParam1);
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
	Function_544();
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

void Function_544() //Position: 0x13FE1 / 81889
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_545(bool bParam0) //Position: 0x13FED / 81901
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

void Function_546(int iParam0) //Position: 0x14035 / 81973
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

int Function_547() //Position: 0x1407B / 82043
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ITERATOR_VALID(bLocal_754))
	{
		LOG_ERROR("Failed to create iterator");
		return 4294967295;
	}
	OBJECT_ITERATOR_RESET(bLocal_754);
	ITERATE_IN_LAYOUT(bLocal_754, Local_72);
	ITERATE_ON_OBJECT_TYPE(bLocal_754, 15);
	iVar0 = 0;
	bVar1 = START_OBJECT_ITERATOR(bLocal_754);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (GET_ACTOR_FACTION(bVar2) == 19)
				{
					if (STRING_CONTAINS_STRING(GET_ACTOR_NAME(bVar2), "s02_"))
					{
						iVar0++;
					}
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bLocal_754);
	}
	return iVar0;
}

void Function_548(bool bParam0, bool bParam1) //Position: 0x1411B / 82203
{
	Function_549(bParam0, -bParam1);
	return;
}

void Function_549(bool bParam0, float fParam1) //Position: 0x14129 / 82217
{
	Function_217();
	Function_550(bParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_550(var uParam0, int iParam1) //Position: 0x1413D / 82237
{
	uParam0->f_4 = iParam1;
	Function_10(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_551(int iParam0) //Position: 0x1415A / 82266
{
	if (Function_355(iParam0))
	{
		if (!Function_352(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_10(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_552() //Position: 0x14219 / 82457
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 61, &uVar0, 1, 1);
	return;
}

int Function_553(bool bParam0) //Position: 0x1422A / 82474
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				if (GET_SLOT_POSITION(bVar1, &vVar2))
				{
					if (IS_POINT_IN_VOLUME(vVar2, bParam0))
					{
						iVar0++;
					}
				}
			}
			bVar1++;
		}
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int Function_554(int iParam0, float fParam1) //Position: 0x1427A / 82554
{
	if (Function_355(iParam0))
	{
		if (Function_351(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_555() //Position: 0x14296 / 82582
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 62, &uVar0, 1, 1);
	return;
}

void Function_556(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6) //Position: 0x142A7 / 82599
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_OBJECT_VALID(*uParam0))
	{
		if (IS_POINT_IN_VOLUME(vVar0, GATEWAY_GET_VOLUME(*uParam0)))
		{
			if (!*uParam1)
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_OBJECTIVE();
				GATEWAY_DISABLE(*uParam0, 1);
				*uParam1 = 1;
				*uParam2 = 0;
				Function_561("COOP_wait_for_players", 0x40f00000, 1, 2, 0);
			}
			else
			{
				Function_557(&iParam4, 1920.0f, "COOP_wait_for_players", 4.0f, 1, 0);
			}
		}
		else if (!*uParam2)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_OBJECTIVE();
			GATEWAY_DISABLE(*uParam0, 0);
			*uParam2 = 1;
			*uParam1 = 0;
			Function_561(bParam3, 7.5f, 1, 1, 1);
		}
		else
		{
			Function_557(&iParam4, 1920.0f, bParam3, 4.0f, 1, 0);
		}
	}
	else
	{
		LOG_ERROR("Invalid gateway passed to UPDATE_COOP_SAFE_ALL_PLAYERS_IN_VOLUME_OBJECTIVES_WITH_GATEWAY");
	}
}

int Function_557(int iParam0, float fParam1, bool bParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x143D9 / 82905
{
	if (Function_351(iParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_14();
		}
		if (!Function_560())
		{
			Function_558(bParam2, fParam3, iParam4);
			Function_421(iParam0);
			return 1;
		}
		Function_354(iParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_558(bool bParam0, float fParam1, bool bParam2) //Position: 0x1441E / 82974
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_559(bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_312(bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_565(bParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_559(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1447D / 83069
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_313(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_560() //Position: 0x144F4 / 83188
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_561(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x14521 / 83233
{
	if (!Function_194(16384, 1))
	{
		Function_565(bParam0, iParam1, bParam2, iParam3, bParam4, 0, 0, 0);
	}
}

bool Function_562(bool bParam0) //Position: 0x14544 / 83268
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				bVar2 = GET_SLOT_ACTOR(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_IN_VOLUME(bVar2, bParam0))
					{
						iVar0++;
					}
				}
				else if (Function_360(bVar1) < 0)
				{
					iVar0++;
				}
			}
			bVar1++;
		}
	}
	if (iVar0 == GET_NUM_PLAYERS())
	{
		return 1;
	}
	return 0;
}

bool Function_563() //Position: 0x145AB / 83371
{
	return Function_194(16386, 0);
}

bool Function_564(bool bParam0) //Position: 0x145B8 / 83384
{
	if (Function_220(bParam0))
	{
		if (Function_215(bParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_565(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x145D3 / 83411
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
			Var0 = { StackVal, StackVal, StackVal, Function_313(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_566() //Position: 0x14658 / 83544
{
	vector3 vVar0;
	vector3 vVar3;
	
	NET_OBJECT_REPLICATION_MODE_START(35, 4);
	vVar0 = { -4428.167f, 8.728f, 3211.876f };
	vVar3 = { 0.0f, -4.351f, 0.0f };
	bLocal_722 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Local_72, "Gaptooth_Mine_Gateway_Stage03", vVar0, vVar3, 10.0f, 5.0f, 10.0f, 3, Function_41(), 2, 4294967295, 0, 1, 1);
	NET_OBJECT_REPLICATION_MODE_END(35);
	ADD_BLIP_FOR_OBJECT(bLocal_722, 330, -1.0f, 2, 0);
	return;
}

void Function_567(bool bParam0) //Position: 0x146D8 / 83672
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_568(int iParam0, int iParam1, int iParam2) //Position: 0x14762 / 83810
{
	Function_570();
	Function_569(iParam0, iParam1, iParam2);
	return;
}

void Function_569(int iParam0, bool bParam1, var uParam2) //Position: 0x14774 / 83828
{
	if (Function_178())
	{
		if (IS_BLIP_VALID(StackVal))
		{
			if (GET_BLIP_ICON(StackVal) == iParam0 || uParam2)
			{
				CHANGE_BLIP_ICON(StackVal, iParam0);
				SET_BLIP_NAME(StackVal, bParam1);
			}
		}
		else
		{
			(&Local_944 + 616[05])->f_4 = ADD_BLIP_FOR_OBJECT((*&Local_944 + 616)[05], iParam0, 0f, 2, 0);
			SET_BLIP_NAME(StackVal, bParam1);
		}
	}
	return;
}

void Function_570() //Position: 0x147F7 / 83959
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	float fVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	var uVar24;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;
	bool bVar34;
	int iVar35;
	bool bVar36;
	var uVar37;
	var uVar38;
	var uVar41;
	var uVar44;
	struct<5> Var47;
	
	Function_643(Local_944.f_608);
	bVar0 = Function_41();
	if (Function_642())
	{
		if (Function_305(&Local_944 + 720, &Local_813 + 520))
		{
			Function_640();
		}
	}
	else if (Function_639())
	{
		if (Function_305(&Local_944 + 720, &Local_813 + 520))
		{
			Function_635();
			Function_7(&Local_944 + 820, 4);
		}
	}
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	Local_944.f_728 = 0;
	bVar4 = Function_258(bVar0, 95);
	if (bVar4)
	{
		iVar6 = Function_634(bVar0);
	}
	if (bVar4)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(bVar0))
		{
			if (IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "default_character_Main\\ReactionProcessing\\ReactionProcessing_Player\\Fire"))
			{
				bVar4 = false;
			}
		}
	}
	if (bVar4 && iVar6)
	{
		bVar5 = (Function_633(bVar0) || Function_632(bVar0));
		if (!bVar5 && Local_944.f_592 > 2)
		{
			Local_944.f_728 = Function_631(bVar0);
		}
	}
	if (Local_944.f_728)
	{
		Function_630(Local_944.f_592);
		vVar11 = { StackVal, StackVal, Function_630(Local_944.f_592) };
		if (!GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vVar11, &vVar1))
		{
			GET_POSITION(bVar0, &vVar1);
		}
		if (GET_ACTOR_VELOCITY(bVar0, &vVar14))
		{
			Function_629();
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(Function_629(), vVar14, vVar1), StackVal, StackVal) };
		}
	}
	bVar17 = Function_628();
	if (Local_944.f_600 != 4294967295)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GET_OBJECT_POSITION(StackVal, &vVar7);
		}
	}
	fVar18 = GET_CURRENT_GAME_TIME();
	if (Local_944.f_600 < 4294967295 && Local_944.f_728)
	{
		if (!Function_627(Local_944.f_600))
		{
			Function_626();
		}
		else if (!Function_625(Local_944.f_600))
		{
			Function_626();
		}
		else
		{
			Function_622(Local_944.f_600, &vVar1);
		}
	}
	if (Local_944.f_592 >= 0)
	{
		if (!bVar4)
		{
			if (!IS_ACTOR_IN_WATER(bVar0))
			{
				if (Local_944.f_592 == 2)
				{
					Function_621((*&Local_944 + 580)[0], 0, (*&Local_944 + 580)[1]);
					Function_617((*&Local_944 + 580)[1], 0);
				}
				else
				{
					Function_621((*&Local_944 + 580)[0], 0, 4294967295);
				}
				Function_617((*&Local_944 + 580)[0], 0);
			}
			else
			{
				if (Local_944.f_592 == 2)
				{
					Function_615((*&Local_944 + 580)[1], 0, GET_LOCAL_SLOT());
					Function_617((*&Local_944 + 580)[1], 0);
				}
				Function_615((*&Local_944 + 580)[0], 0, GET_LOCAL_SLOT());
				Function_617((*&Local_944 + 580)[0], 0);
			}
		}
		else if (!IS_ACTOR_IN_VOLUME(bVar0, Local_944.f_612))
		{
			Function_312("CTF_ran_too_far_help", 0x41200000, 1, 0, 2, 1, 0);
			if (Local_944.f_592 == 2)
			{
				Function_615((*&Local_944 + 580)[1], 1, GET_LOCAL_SLOT());
				Function_617((*&Local_944 + 580)[1], 0);
			}
			Function_615((*&Local_944 + 580)[0], 1, GET_LOCAL_SLOT());
			Function_617((*&Local_944 + 580)[0], 0);
		}
	}
	bVar20 = NET_IS_SESSION_HOST();
	iVar19 = 0;
	while (iVar19 <= Function_58(3, bVar17))
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			if (NET_IS_OBJECT_LOCAL(StackVal))
			{
				Function_279(StackVal);
				vVar27 = { StackVal, StackVal, Function_279(StackVal) };
				vVar30 = { StackVal, StackVal, vVar27 };
				vVar30.f_4 = (vVar30.y + 8.0f);
				if (!IS_OBJECT_IN_VOLUME(StackVal, Local_944.f_612) || FIND_WATER_INTERSECTION(vVar30, vVar27, &uVar21, &uVar24))
				{
					NET_LOG(true, "CTF", "Bag #%s, locally owned and carried by %s, went out of bounds or Underwater. Returning", I2STR(Local_944.f_596), I2STR(Function_614(Local_944.f_596)), false, false);
					Function_615(Local_944.f_596, 1, 4294967293);
				}
			}
		}
		if (Local_944.f_596 == 0)
		{
			if (Local_944.f_600 == 4294967295)
			{
				Function_626();
			}
			else if (!Function_627(Local_944.f_600) || Function_613(Local_944.f_600, 4294967291))
			{
				Function_626();
			}
		}
		if (bVar20)
		{
			bVar33 = Function_614(Local_944.f_596);
			if (bVar33 != 4294967294)
			{
				if (!IS_SLOT_VALID(bVar33))
				{
					Function_621(Local_944.f_596, 1, 4294967295);
				}
			}
		}
		if (Function_627(Local_944.f_596))
		{
			switch (StackVal)
			{
				case 0x00000000:
					Function_612(Local_944.f_596);
					if (bVar20 && !Function_610())
					{
						if (Function_177())
						{
							if (Function_609(&Local_813[Local_944.f_5967] + 12, 5.0f))
							{
								Function_608(Local_944.f_596);
							}
						}
						else if (Function_609(&Local_813[Local_944.f_5967] + 12, 2.0f))
						{
							Function_608(Local_944.f_596);
						}
					}
					break;
				
				case 0x00000005:
					if (GATEWAY_UPDATE((&Local_944 + 616[25])->f_12))
					{
						if (Function_45(Local_944.f_820, 4))
						{
							Function_7(&Local_944 + 820, 4);
							if (!Function_607(1))
							{
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_565("CTF_one_obj_stayonpoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
							}
						}
					}
					else if (!Function_45(Local_944.f_820, 4))
					{
						Function_10(&Local_944 + 820, 4);
						if (!Function_607(1))
						{
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_565("CTF_one_obj_get2point", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
					}
				
				case 0x00000004:
					Function_612(Local_944.f_596);
					if (bVar20)
					{
						if (Function_642())
						{
							if (Local_813.f_508 >= 4294967295)
							{
								if (Local_944.f_596 != Local_813.f_508 && !Function_610())
								{
									if (Function_609(&Local_813[Local_944.f_5967] + 12, 10.0f))
									{
										Local_813.f_508 = 4294967294;
										Local_813.f_512 = Function_606();
										Local_813.f_516 = Function_604();
										Function_603(&Local_813 + 520);
										Function_602(Local_813.f_512, Local_813.f_516);
									}
								}
							}
							else if (Local_813.f_508 == 4294967294)
							{
								if (Local_944.f_596 <= Local_813.f_512)
								{
									if (Function_609(&Local_813[Local_944.f_5967] + 12, (0.2f * IntToFloat(Local_944.f_596))))
									{
										Function_601(Local_944.f_596);
										Function_608(Local_944.f_596);
									}
								}
							}
						}
						else if (Function_639())
						{
							if (Local_813.f_508 >= 4294967295)
							{
								if (Local_944.f_596 != Local_813.f_508 && !Function_610())
								{
									if (Function_609(&Local_813[Local_944.f_5967] + 12, 15.0f))
									{
										Local_813.f_508 = 4294967294;
										Function_601(Local_944.f_596);
										Function_599(Local_944.f_596);
										Function_603(&Local_813 + 520);
									}
								}
							}
							else if (Local_813.f_508 == 4294967294)
							{
								if (Function_609(&Local_813[Local_944.f_5967] + 12, 15.0f))
								{
									Function_602(Local_813.f_512, 0);
									Function_608(Local_944.f_596);
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_591(Local_944.f_596);
					if (bVar20)
					{
						if (Function_590(&Local_813[Local_944.f_5967] + 12, 60.0f))
						{
							NET_LOG(true, "CTF", "Bag %s deemed on ground too long, returning", I2STR(Local_944.f_596), false, false, false);
							Function_615(Local_944.f_596, 1, 4294967293);
						}
					}
					if (Local_944.f_728)
					{
						if (Function_589(Local_944.f_596))
						{
							Function_622(Local_944.f_596, &vVar1);
						}
					}
					break;
				
				case 0x00000001:
					Function_591(Local_944.f_596);
					if (Local_944.f_728 && Function_589(Local_944.f_596))
					{
						Function_622(Local_944.f_596, &vVar1);
					}
					break;
				
				case 0x00000003:
					Function_591(Local_944.f_596);
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (bVar20)
			{
				if (Local_813.f_508 == 4294967294)
				{
					if (Local_944.f_596 <= Local_813.f_512)
					{
						Function_601(Local_944.f_596);
						Function_608(Local_944.f_596);
					}
				}
			}
			Function_612(Local_944.f_596);
		}
		Local_944.f_596 = (Local_944.f_596 + 1 % bVar17);
		iVar19++;
	}
	if (Function_642())
	{
		Function_587();
	}
	if (!Function_610())
	{
		bVar34 = false;
		iVar35 = 0;
		bVar36 = false;
		if (Local_944.f_728)
		{
			if (Local_944.f_600 < 4294967295 && Local_944.f_604 >= 2.5f)
			{
				if (GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vLocal_807, &uVar38))
				{
					Var47 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_804, vVar7, StackVal) };
					if (Function_586(Local_944.f_600))
					{
						Var47.f_4 = (StackVal + 0.1f);
					}
					if (!FIND_INTERSECTION(&uVar38, &Var47, &uVar44, &uVar41, iLocal_812, iLocal_810, iLocal_811))
					{
						if ((fVar18 - Local_944.f_736) >= 1.5f)
						{
							Function_168(&Local_944 + 812);
						}
						else if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_944.f_812))
						{
							bVar34 = true;
						}
						else if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_944.f_812))
						{
							Function_585(Local_944.f_600, Local_944.f_592 < 0);
							Local_944.f_736 = fVar18;
							Function_168(&Local_944 + 812);
						}
					}
					else
					{
						Function_168(&Local_944 + 812);
					}
				}
				else
				{
					Function_168(&Local_944 + 812);
				}
			}
			else
			{
				Function_168(&Local_944 + 812);
			}
		}
		else
		{
			Function_168(&Local_944 + 812);
		}
		if (Local_944.f_592 >= 0)
		{
			Function_584(1, 1);
			Function_583(1, bVar0);
			if (Local_944.f_592 == 2)
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0.8f);
			}
			else
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0.9f);
			}
			if (Function_45(Local_944.f_820, 2))
			{
				if (!IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, false))
				{
					Function_7(&Local_944 + 820, 2);
				}
			}
			if (Function_581() && iVar6)
			{
				if ((fVar18 - Local_944.f_740) >= 1.5f)
				{
				}
				else if (!Function_632(bVar0))
				{
					Function_579((*&Local_944 + 580)[0], (*&Local_944 + 580)[1]);
					iVar50 = (*&Local_944 + 580)[0];
					Function_577(iVar50);
					Function_172(StackVal);
					Function_279(StackVal);
					SET_OBJECT_POSITION(StackVal, Vector(Function_279(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
					DESTROY_OBJECT(StackVal);
					if (Local_944.f_592 == 1)
					{
						iVar50 = (*&Local_944 + 580)[1];
						Function_577(iVar50);
						Function_172(StackVal);
						Function_279(StackVal);
						SET_OBJECT_POSITION(StackVal, Vector(Function_279(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
						DESTROY_OBJECT(StackVal);
					}
					Function_168(&Local_944 + 816);
				}
			}
			if (Local_944.f_592 >= 0)
			{
				if (Local_944.f_828)
				{
					if ((IS_ATTACHMENT_VALID(Local_944.f_824) || DECOR_CHECK_EXIST(bVar0, "CTF_FastAttach")) || (fVar18 - Local_944.f_832) <= 3.0f)
					{
						if (DECOR_CHECK_EXIST(bVar0, "CTF_AttachNow") || (fVar18 - Local_944.f_832) <= 3.0f)
						{
							Local_944.f_828 = 0;
							REMOVE_OBJECT_ATTACHMENT(Local_944.f_824);
							Local_944.f_824 = "";
							uVar37 = Function_576(bVar0);
							Function_574((Local_944.f_592 - 1), uVar37);
							Function_573((Local_944.f_592 - 1), uVar37);
							ATTACH_OBJECTS(StackVal, bVar0, Function_575((Local_944.f_592 - 1)), Function_574((Local_944.f_592 - 1), uVar37), Function_573((Local_944.f_592 - 1), uVar37), 4294967295);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
							DECOR_REMOVE(bVar0, "CTF_AttachNow");
							DECOR_REMOVE(bVar0, "CTF_FastAttach");
						}
					}
					else if (DECOR_CHECK_EXIST(bVar0, "CTF_Attach1st"))
					{
						Local_944.f_824 = ATTACH_OBJECTS_USING_LOCATOR(StackVal, bVar0, Function_572((Local_944.f_592 - 1)), "grab", Local_944.f_592 + 1);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
						DECOR_REMOVE(bVar0, "CTF_Attach1st");
						Local_944.f_832 = fVar18;
					}
				}
			}
		}
		else
		{
			Function_571();
			Local_944.f_828 = 0;
		}
		if (bVar5)
		{
			Function_168(&Local_944 + 816);
			Function_168(&Local_944 + 812);
		}
		else if (bVar34)
		{
			if (bVar36)
			{
				Local_944.f_812 = ADD_SCRIPT_USE_CONTEXT("CTF_action_return", iLocal_802, 4, 0, 0, 0, 0, 4294967295, 0);
			}
			else if (Local_944.f_592 <= 2)
			{
				if (Local_944.f_592 == 0)
				{
					Local_944.f_812 = ADD_SCRIPT_USE_CONTEXT("CTF_action_grab", iLocal_802, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else
				{
					Local_944.f_812 = ADD_SCRIPT_USE_CONTEXT("CTF_action_dblgrab", iLocal_802, 4, 0, 0, 0, 0, 4294967295, 0);
				}
			}
		}
	}
	else
	{
		Function_168(&Local_944 + 816);
		Function_168(&Local_944 + 812);
	}
	return;
}

void Function_571() //Position: 0x1554B / 87371
{
	Function_584(1, 0);
	Function_583(0, 0);
	return;
}

var Function_572(int iParam0) //Position: 0x1555B / 87387
{
	if (iParam0 == 0)
	{
		return "clavicle_l_attachment";
	}
	if (iParam0 == 1)
	{
		return "clavicle_r_attachment";
	}
	return "";
}

vector3 Function_573(int iParam0, bool bParam1) //Position: 0x155A5 / 87461
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -17.8245f, 182.8487f, 9.7832f;
		}
		if (iParam0 == 1)
		{
			return 172.679f, 8.9688f, -196.476f;
		}
	}
	if (iParam0 == 0)
	{
		return -6.8245f, 182.8487f, 18.7832f;
	}
	if (iParam0 == 1)
	{
		return 172.679f, 8.9688f, -196.476f;
	}
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_574(int iParam0, bool bParam1) //Position: 0x15614 / 87572
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -0.0936f, -0.0867f, -0.0455f;
		}
		if (iParam0 == 1)
		{
			return 0.0422f, -0.0717f, -0.0232f;
		}
	}
	if (iParam0 == 0)
	{
		return -0.0362f, -0.137f, -0.0356f;
	}
	if (iParam0 == 1)
	{
		return 0.0398f, -0.133f, -0.0272f;
	}
	return 0.0f, 0.0f, 0.0f;
}

var Function_575(int iParam0) //Position: 0x15683 / 87683
{
	if (iParam0 == 0)
	{
		return "clavicle_l";
	}
	if (iParam0 == 1)
	{
		return "clavicle_r";
	}
	return "";
}

bool Function_576(bool bParam0) //Position: 0x156B7 / 87735
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_MP_ANIM_SET_NAME(GET_ACTOR_ENUM(bParam0));
	if (STRINGS_ARE_EQUAL(bVar0, "fat"))
	{
		return 1;
	}
	return 0;
}

void Function_577(int iParam0) //Position: 0x156D8 / 87768
{
	int iVar0;
	
	Function_173("ENSURE_BAG_CARRYING_FIDELITY", iParam0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((*&Local_944 + 580)[iVar0] == iParam0)
		{
			(*&Local_944 + 580)[iVar0] = 4294967295;
			Function_578();
		}
		iVar0++;
	}
	return;
}

void Function_578() //Position: 0x15731 / 87857
{
	Local_944.f_592 = Function_57(0, (Local_944.f_592 - 1));
	return;
}

void Function_579(int iParam0, int iParam1) //Position: 0x15749 / 87881
{
	struct<13> Var0;
	
	if (!Function_580(iParam0, 74))
	{
		return;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam1;
	Var0.f_12 = NET_GET_NET_TIME();
	if (iParam1 == 4294967295)
	{
		Function_262(StackVal, StackVal, "CTF_Cap", Global_34574);
	}
	else
	{
		Function_262(StackVal, StackVal, "CTF_CapDbl", Global_34574);
	}
	NET_LOG(StackVal, 1, "CTF", "SENDing cap. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 74, &Var0, 4, 1);
	return;
}

bool Function_580(int iParam0, int iParam1) //Position: 0x15803 / 88067
{
	float fVar0;
	
	fVar0 = NET_GET_NET_TIME();
	if (StackVal || (StackVal == iParam1 - fVar0) <= 1.0f)
	{
		Local_944[iParam08].f_8 = iParam1;
		(&Local_944[iParam08] + 8)->f_4 = fVar0;
		return 1;
	}
	return 0;
}

int Function_581() //Position: 0x15849 / 88137
{
	bool bVar0;
	
	if (Function_642())
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= 5)
		{
			if (Function_582(Local_813.f_516, bVar0))
			{
				if (GATEWAY_UPDATE((&Local_944 + 616[bVar05])->f_12))
				{
					return 1;
				}
			}
			bVar0++;
		}
		return 0;
	}
	if (Function_178())
	{
		if (bLocal_803)
		{
			return 0;
		}
		return GATEWAY_UPDATE((&Local_944 + 616[05])->f_12);
	}
	return GATEWAY_UPDATE((&Local_944 + 616[Function_324()5])->f_12);
}

bool Function_582(var uParam0, bool bParam1) //Position: 0x158BE / 88254
{
	return Function_45(uParam0, Function_133(bParam1));
}

void Function_583(bool bParam0, bool bParam1) //Position: 0x158CE / 88270
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	var uVar11;
	
	iVar2 = 2;
	bVar3 = false;
	if (Function_178())
	{
		iVar2 = 1;
	}
	else if (Function_642())
	{
		iVar2 = 5;
		bVar3 = true;
	}
	bVar4 = 4294967295;
	if ((Function_642() && bParam0) && IS_ACTOR_VALID(bParam1))
	{
		fVar5 = 1E+08.0f;
		Function_238(bParam1);
		vVar6 = { StackVal, StackVal, Function_238(bParam1) };
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			if (Function_582(Local_813.f_516, bVar1))
			{
				Function_279((*&Local_944 + 616)[bVar15]);
				fVar9 = VDIST2(vVar6, Function_279((*&Local_944 + 616)[bVar15]));
				if (fVar9 > fVar5)
				{
					fVar5 = fVar9;
					bVar4 = bVar1;
				}
			}
			bVar1++;
		}
	}
	bVar1 = false;
	while (bVar1 <= iVar2)
	{
		if (Function_582(Local_813.f_516, bVar1) || !bVar3)
		{
			bVar10 = false;
			if (Function_178())
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 330;
				}
			}
			else if (bVar3)
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 485;
				}
			}
			else if (bVar1 == Function_324())
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 494;
				}
			}
			else
			{
				iVar0 = 491;
			}
			if (IS_BLIP_VALID(StackVal))
			{
				if (GET_BLIP_ICON(StackVal) != iVar0)
				{
					CHANGE_BLIP_ICON(StackVal, iVar0);
				}
			}
			else
			{
				(&Local_944 + 616[bVar15])->f_4 = ADD_BLIP_FOR_OBJECT((*&Local_944 + 616)[bVar15], iVar0, 0f, 2, 0);
			}
			if (bVar10)
			{
				SET_BLIP_PRIORITY(StackVal, 4);
			}
			else
			{
				SET_BLIP_PRIORITY(StackVal, 2);
			}
			if (Function_642())
			{
				if (bParam0 && bVar1 == bVar4)
				{
					SET_BLIP_SCALE(StackVal, 0.75f);
				}
				else
				{
					SET_BLIP_SCALE(StackVal, 1.0f);
				}
			}
			if (bParam0 && ((bVar3 || Function_178()) || bVar1 != Function_324()))
			{
				if (!IS_OBJECT_VALID((&Local_944 + 616[bVar15])->f_12))
				{
					(&Local_944 + 616[bVar15])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_944.f_752, "", (*&Local_944 + 616)[bVar15], Function_41(), 2, 4294967295, 0, false, 1, 1);
					uVar11 = _GET_OBJECT_ATTACHMENT((*&Local_944 + 616)[bVar15]);
					if (IS_ATTACHMENT_VALID(uVar11))
					{
						ATTACH_OBJECTS((&Local_944 + 616[bVar15])->f_12, GET_OBJECT_ATTACHED_TO(uVar11), "", 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
			}
			else if (IS_OBJECT_VALID((&Local_944 + 616[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_944 + 616[bVar15])->f_12);
			}
		}
		else
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			if (IS_OBJECT_VALID((&Local_944 + 616[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_944 + 616[bVar15])->f_12);
			}
		}
		bVar1++;
	}
	return;
}

void Function_584(int iParam0, bool bParam1) //Position: 0x15B8F / 88975
{
	if (bParam1)
	{
		Function_10(&Global_78480 + 128, iParam0);
	}
	else
	{
		Function_7(&Global_78480 + 128, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_585(int iParam0, bool bParam1) //Position: 0x15BCA / 89034
{
	struct<13> Var0;
	
	if (!Function_580(iParam0, 70))
	{
		return;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		Var0.f_8 = 2;
	}
	else
	{
		Var0.f_8 = 1;
	}
	NET_LOG(StackVal, 1, "CTF", "SENDing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 70, &Var0, 4, 1);
	return;
}

bool Function_586(bool bParam0) //Position: 0x15C60 / 89184
{
	Function_173("CTF_IS_BAG_AT_BASE", bParam0);
	return StackVal != 1;
}

void Function_587() //Position: 0x15C8B / 89227
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = GET_CURRENT_GAME_TIME();
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		if (Function_613(iVar0, 4294967291))
		{
			if (IS_BLIP_VALID(Local_944[iVar08]))
			{
				fVar2 = (((fVar1 - Local_944[iVar08].f_16) - 3.5f) - 0.5f);
				if (fVar2 < 0.0f)
				{
					fVar2 = (1.0f - (fVar2 / 0.75f));
					Function_588(StackVal);
					vVar3 = { StackVal, StackVal, Function_588(StackVal) };
					SET_BLIP_COLOR(Local_944[iVar08], vVar3.x, vVar3.y, vVar3.z, fVar2);
				}
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_588(int iParam0) //Position: 0x15D14 / 89364
{
	vector3 vVar0;
	
	if (!NET_GET_GAMER_RGB_COLOR(iParam0, &vVar0, &vVar0 + 4, &vVar0 + 8))
	{
		vVar0 = { (68.0f / 255.0f), (68.0f / 255.0f), (68.0f / 255.0f) };
	}
	return StackVal, StackVal, vVar0;
}

bool Function_589(int iParam0) //Position: 0x15D56 / 89430
{
	Function_173("CTF_FLAG_IS_OUR_TEAMS", iParam0);
	return (!Function_179() || iParam0 == Function_324());
}

bool Function_590(bool bParam0, float fParam1) //Position: 0x15D84 / 89476
{
	if (Function_609(bParam0, fParam1))
	{
		Function_499(bParam0);
		return 1;
	}
	return 0;
}

int Function_591(int iParam0) //Position: 0x15D9C / 89500
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<9> Var5;
	
	Function_173("ENSURE_BAG_EXISTS", iParam0);
	if (!IS_OBJECT_VALID(StackVal))
	{
		if (!Function_177() || Function_598(iParam0))
		{
			if (Function_595(iParam0))
			{
				if (Function_639())
				{
					if (IS_OBJECT_VALID((&Local_944 + 616[25])->f_12))
					{
						DESTROY_OBJECT((&Local_944 + 616[25])->f_12);
					}
				}
				if (Function_177())
				{
					bVar0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, 1, false);
					UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
				}
				Function_308(&Local_944[iParam08] + 28, &Local_813[iParam07] + 24);
			}
			else
			{
				return 0;
			}
		}
		return 0;
	}
	bVar1 = false;
	iVar2 = 4294967295;
	bVar3 = false;
	bVar4 = false;
	fVar8 = 1.0f;
	if (Function_613(iParam0, GET_LOCAL_SLOT()) || (Function_194(16384, 1) && Function_613(iParam0, Global_78617.f_48)))
	{
		bVar1 = true;
		Function_171(iParam0);
	}
	else
	{
		Function_593(iParam0, 1);
		if (Function_179())
		{
			if (Function_613(iParam0, 4294967291))
			{
				if (iParam0 == Function_324())
				{
					iVar2 = 480;
				}
				else
				{
					iVar2 = 473;
				}
				bVar1 = true;
			}
			else if (iParam0 == Function_324())
			{
				iVar2 = 478;
			}
			else
			{
				iVar2 = 471;
			}
		}
		else if (Function_642())
		{
			if (Function_613(iParam0, 4294967291))
			{
				iVar2 = 459;
				fVar9 = (GET_CURRENT_GAME_TIME() - Local_944[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar9 > 3.5f))
				{
					bVar1 = true;
				}
				else
				{
					Function_588(StackVal);
					vVar5 = { StackVal, StackVal, Function_588(StackVal) };
					if (fVar9 <= 3.5f && fVar9 > ((3.5f + 0.75f) + 0.5f))
					{
						bVar4 = true;
						fVar8 = 0.8f;
					}
					else
					{
						Local_944[iParam08].f_16 = GET_CURRENT_GAME_TIME();
						bVar1 = true;
					}
					bVar3 = true;
				}
			}
			else if (Local_944.f_592 < 0)
			{
				iVar2 = 457;
				bVar3 = true;
				vVar5 = { (214.0f / 255.0f), (167.0f / 255.0f), (92.0f / 255.0f) };
			}
			else
			{
				iVar2 = 457;
			}
		}
		else if (Function_639())
		{
			if (Function_613(iParam0, 4294967291))
			{
				if (IS_BLIP_VALID(StackVal))
				{
					REMOVE_BLIP(StackVal);
				}
				if (Function_592(Function_614(iParam0)))
				{
					iVar2 = 480;
				}
				else
				{
					iVar2 = 473;
				}
				fVar10 = (GET_CURRENT_GAME_TIME() - Local_944[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar10 > 3.5f))
				{
					bVar1 = true;
				}
				else if (fVar10 <= 3.5f && fVar10 > ((3.5f + 0.75f) + 0.5f))
				{
					bVar4 = true;
					fVar8 = 0.8f;
				}
				else
				{
					Local_944[iParam08].f_16 = GET_CURRENT_GAME_TIME();
					bVar1 = true;
				}
			}
			else
			{
				iVar2 = 464;
			}
		}
		else if (Function_178())
		{
			if (Function_613(iParam0, 4294967291))
			{
				iVar2 = 480;
			}
			else if (Local_944.f_592 < 0)
			{
				iVar2 = 457;
				bVar3 = true;
				vVar5 = { (105.0f / 255.0f), (145.0f / 255.0f), (59.0f / 255.0f) };
			}
			else
			{
				iVar2 = 457;
			}
		}
	}
	if (!Function_178())
	{
		bVar11 = Function_614(iParam0);
		if (Local_944[iParam08].f_20 != bVar11)
		{
			if (bVar11 == 4294967294)
			{
				NET_GAMER_SET_BLIP_OVERRIDE(Local_944[iParam08].f_20, 4294967295);
			}
			else
			{
				NET_GAMER_SET_BLIP_OVERRIDE(bVar11, iVar2);
			}
			Local_944[iParam08].f_20 = bVar11;
		}
	}
	iVar12 = 0;
	if (bVar1)
	{
		if (IS_BLIP_VALID(Local_944[iParam08]))
		{
			REMOVE_BLIP(Local_944[iParam08]);
		}
	}
	else if (!IS_BLIP_VALID(Local_944[iParam08]))
	{
		if (bVar4)
		{
			Function_279(StackVal);
			vVar13 = { StackVal, StackVal, Function_279(StackVal) };
			Local_944[iParam08] = ADD_BLIP_FOR_COORD(&vVar13, iVar2, 0.0f, 4, 0);
		}
		else
		{
			Local_944[iParam08] = ADD_BLIP_FOR_OBJECT(StackVal, iVar2, 0.0f, 3, 0);
		}
		iVar12 = 1;
	}
	else if (GET_BLIP_ICON(Local_944[iParam08]) != iVar2)
	{
		CHANGE_BLIP_ICON(Local_944[iParam08], iVar2);
		iVar12 = 1;
	}
	if (iVar12 || (Function_45(Local_944[iParam08].f_24, 2) == bVar3 && !bVar1))
	{
		if (bVar3)
		{
			SET_BLIP_COLOR(Local_944[iParam08], vVar5.x, vVar5.y, vVar5.z, 1.0f);
			Function_10(&Local_944[iParam08] + 24, 2);
		}
		else if (Function_45(Local_944[iParam08].f_24, 2))
		{
			SET_BLIP_COLOR(Local_944[iParam08], 1.0f, 1.0f, 1.0f, 1.0f);
			Function_7(&Local_944[iParam08] + 24, 2);
		}
		SET_BLIP_SCALE(Local_944[iParam08], fVar8);
	}
	return 1;
}

bool Function_592(bool bParam0) //Position: 0x16231 / 90673
{
	if (Function_325(bParam0, 1, 0) != 4294967295 && Function_324() != 4294967295)
	{
		return 0;
	}
	return Function_325(bParam0, 1, 0) != Function_324();
}

void Function_593(int iParam0, bool bParam1) //Position: 0x16259 / 90713
{
	int iVar0;
	
	Function_173("ADD_GLOW_TO_BAG", iParam0);
	if (Function_45(Local_944[iParam08].f_24, 1))
	{
		return;
	}
	iVar0 = 4;
	if (Function_179())
	{
		if (iParam0 == Function_324())
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (Function_178())
	{
		iVar0 = 3;
	}
	if (bParam1)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			Function_594();
			CREATE_OBJECT_GLOW(StackVal, iVar0, Function_594(), 1);
			Function_10(&Local_944[iParam08] + 24, 1);
		}
	}
	else if (IS_OBJECT_VALID(StackVal))
	{
		Function_594();
		CREATE_OBJECT_GLOW(StackVal, iVar0, Function_594(), 1);
		Function_10(&Local_944[iParam08] + 24, 1);
	}
	return;
}

vector3 Function_594() //Position: 0x16317 / 90903
{
	return 0.0f, 0.2f, 0.0f;
}

bool Function_595(bool bParam0) //Position: 0x16324 / 90916
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	
	Function_173("nSPAWN_BAG", bParam0);
	strcpy(&cVar0, "CTFBag_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	if (!Function_597(bParam0, &vVar16, &vVar19, 1))
	{
		strcpy(&cVar0, "Couldn't find base #", 64);
		stradd(&cVar0, I2STR(Local_813[bParam07]), 64);
		return 0;
	}
	bVar22 = "";
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 6);
		bVar22 = CREATE_PROP_IN_LAYOUT(Local_944.f_756, &cVar0, Function_596(), vVar16, vVar19, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
		if (IS_OBJECT_VALID(bVar22))
		{
			NET_OBJECT_SET_SCRIPT_INT(bVar22, bParam0 + 100);
			UNK_0x1306549E(bVar22, Local_944.f_756);
			Local_944[bParam08].f_4 = bVar22;
		}
		else
		{
			return 0;
		}
	}
	bVar23 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_944.f_756, "nBagFinder"));
	if (!IS_ITERATOR_VALID(bVar23))
	{
		bVar23 = CREATE_NAMED_OBJECT_ITERATOR(Local_944.f_756, "nBagFinder");
		ITERATE_IN_LAYOUT(bVar23, Local_944.f_756);
		ITERATE_ON_OBJECT_TYPE(bVar23, 17);
	}
	bVar24 = START_OBJECT_ITERATOR(bVar23);
	bVar26 = false;
	while (IS_OBJECT_VALID(bVar24) && !bVar26)
	{
		iVar25 = NET_OBJECT_GET_SCRIPT_INT(bVar24);
		if (bParam0 == (iVar25 - 100))
		{
			bVar22 = bVar24;
			bVar26 = true;
		}
		bVar24 = OBJECT_ITERATOR_NEXT(bVar23);
	}
	if (IS_OBJECT_VALID(bVar22))
	{
	}
	else
	{
		return 0;
	}
	Local_944[bParam08].f_4 = bVar22;
	return 1;
}

bool Function_596() //Position: 0x16485 / 91269
{
	return "p_gen_moneybag03x";
}

bool Function_597(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1649F / 91295
{
	struct<5> Var0;
	vector3 vVar6;
	var uVar9;
	char* cVar12[64];
	bool bVar28;
	char* cVar29[64];
	
	if (Function_179())
	{
		if (IS_VOLUME_VALID((*&Local_944 + 616)[bParam05]))
		{
			GET_VOLUME_SCALE((*&Local_944 + 616)[bParam05], &Var0);
			GET_VOLUME_CENTER((*&Local_944 + 616)[bParam05], &vVar3);
			GET_OBJECT_ORIENTATION((*&Local_944 + 616)[bParam05], uParam2);
			if (FIND_GROUND_INTERSECTION(StackVal, (&vVar3 * 0.5f), &vVar6, &uVar9))
			{
				*uParam1 = { StackVal, StackVal, vVar6 };
			}
			else
			{
				*uParam1 = { StackVal, StackVal, vVar3 };
			}
			if (bParam3)
			{
				uParam2->f_4 = (StackVal + 90.0f);
				uParam1->f_4 = (StackVal + 0.15f);
			}
			return 1;
		}
		strcpy(&cVar12, "CTF: Invalid volume in GET_BASE for flag #", 64);
		stradd(&cVar12, I2STR(bParam0), 64);
	}
	else
	{
		bVar28 = Function_175(bParam0, 0);
		if (IS_OBJECT_VALID(bVar28))
		{
			GET_OBJECT_POSITION(bVar28, uParam1);
			GET_OBJECT_ORIENTATION(bVar28, uParam2);
			if (bParam3 && Function_639())
			{
				uParam2->f_4 = (StackVal + 90.0f);
				uParam1->f_4 = (StackVal + 0.15f);
			}
			return 1;
		}
		strcpy(&cVar29, "CTF: Unable to find Base #", 64);
		stradd(&cVar29, I2STR(Local_813[bParam07]), 64);
		stradd(&cVar29, " for bag #", 64);
		stradd(&cVar29, I2STR(bParam0), 64);
	}
	return 0;
}

int Function_598(int iParam0) //Position: 0x1660F / 91663
{
	Function_173("HAS_HOST_PICKED_NEW_BASE", iParam0);
	if (!UNK_0xA80C6DE6(&Local_813))
	{
		return 0;
	}
	return Function_309(&Local_944[iParam08] + 28, &Local_813[iParam07] + 24);
}

void Function_599(int iParam0) //Position: 0x16656 / 91734
{
	Function_173("CTF_HOST_BAG_PRE_SPAWNING", iParam0);
	Local_813[iParam07].f_8 = 4294967294;
	Local_813[iParam07].f_4 = 5;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

void Function_600(int iParam0) //Position: 0x166AB / 91819
{
	Function_549(iParam0, 0.0f);
	return;
}

void Function_601(int iParam0) //Position: 0x166B7 / 91831
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!NET_IS_SESSION_HOST())
	{
		return;
	}
	Function_173("PICK_NEW_RANDOM_BASE", iParam0);
	iVar0 = (RAND_INT_RANGE(false, 5000) % Local_944.f_744);
	bVar1 = true;
	if (Function_642())
	{
		iVar2 = iVar0;
		bVar4 = true;
		while (bVar4)
		{
			bVar1 = true;
			bVar3 = false;
			while (bVar3 > 18 && bVar1)
			{
				if ((bVar3 == iParam0 && Local_813[bVar37] != iVar0) && Function_627(bVar3))
				{
					bVar1 = false;
				}
				bVar3++;
			}
			if (bVar1)
			{
				bVar4 = false;
			}
			else
			{
				iVar0 = (iVar0 + 1 % Local_944.f_744);
				if (iVar0 == iVar2)
				{
					bVar4 = false;
				}
			}
		}
	}
	if (bVar1)
	{
		Local_813[iParam07] = iVar0;
	}
	Function_603(&Local_813[iParam07] + 24);
	return;
}

void Function_602(int iParam0, int iParam1) //Position: 0x1677E / 92030
{
	struct<13> Var0;
	
	Var0 = 4294967294;
	Var0.f_12 = iParam0;
	Var0.f_8 = iParam1;
	iVar4 = 0;
	while (iVar4 <= (iParam0 - 1))
	{
		Function_600(&Local_813[iVar47] + 12);
		iVar4++;
	}
	NET_LOG(true, "CTF", "SENDing bag replenish.", false, false, false, false);
	NET_SCRIPTMSG_SEND(3, 4, &Var0, 4, 1);
	return;
}

void Function_603(var uParam0) //Position: 0x167E7 / 92135
{
	*uParam0++;
	return;
}

var Function_604() //Position: 0x167F5 / 92149
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = Function_58((Function_57(1, (NET_GET_SESSION_GAMER_COUNT() - 1)) / 4) + 2, Local_944.f_748);
	bVar1 = false;
	bVar2 = true;
	if (iVar0 >= (Local_944.f_748 / 2))
	{
		bVar1 = (SHIFT_LEFT(true, Local_944.f_748) - 1);
		bVar2 = false;
	}
	iVar4 = iVar0;
	if (!bVar2)
	{
		iVar4 = (Local_944.f_748 - iVar0);
	}
	iVar3 = 0;
	while (iVar3 <= iVar4)
	{
		bVar5 = (RAND_INT_RANGE(false, 100000) % Local_944.f_748);
		iVar6 = Function_133(bVar5);
		while (bVar2 == Function_45(bVar1, iVar6))
		{
			bVar5 = (bVar5 + 1 % Local_944.f_748);
			iVar6 = Function_133(bVar5);
		}
		if (bVar2)
		{
			Function_10(&bVar1, iVar6);
		}
		else
		{
			Function_7(&bVar1, iVar6);
		}
		iVar3++;
	}
	Function_605(bVar1, Local_944.f_748);
	PRINTNL();
	return bVar1;
}

void Function_605(int iParam0, int iParam1) //Position: 0x168C3 / 92355
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_45(iParam0, Function_133(bVar0)))
		{
			PRINTINT(true);
		}
		else
		{
			PRINTINT(false);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

int Function_606() //Position: 0x1690A / 92426
{
	if (Function_178())
	{
		return (3 * GET_NUM_PLAYERS());
	}
	return Function_58(Function_57(1, (NET_GET_SESSION_GAMER_COUNT() - 1)), Local_944.f_744);
}

bool Function_607(int iParam0) //Position: 0x1692E / 92462
{
	if (!Function_349())
	{
		return 0;
	}
	return Function_45(Global_78578.f_88, iParam0);
}

void Function_608(int iParam0) //Position: 0x16948 / 92488
{
	Function_173("CTF_HOST_BAG_AT_BASE", iParam0);
	Local_813[iParam07].f_8 = 4294967294;
	Local_813[iParam07].f_4 = 1;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

bool Function_609(bool bParam0, float fParam1) //Position: 0x16998 / 92568
{
	if (Function_220(bParam0))
	{
		if (Function_216(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_610() //Position: 0x169B4 / 92596
{
	return (Function_348() == 4294967295 && !Function_611());
}

bool Function_611() //Position: 0x169C4 / 92612
{
	return Function_348() != 4294967290;
}

int Function_612(int iParam0) //Position: 0x169D1 / 92625
{
	Function_173("ENSURE_BAG_DOESNT_EXIST", iParam0);
	Function_577(iParam0);
	if (Local_944[iParam08].f_20 != 4294967294)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(Local_944[iParam08].f_20, 4294967295);
		Local_944[iParam08].f_20 = 4294967294;
	}
	return Function_170(iParam0, 0);
}

bool Function_613(int iParam0, bool bParam1) //Position: 0x16A29 / 92713
{
	Function_173("CTF_IS_BAG_CARRIED", iParam0);
	if (bParam1 != 4294967291)
	{
		return Function_614(iParam0) != bParam1;
	}
	return Function_614(iParam0) == 4294967294;
}

int Function_614(int iParam0) //Position: 0x16A63 / 92771
{
	Function_173("CTF_WHO_HAS_BAG", iParam0);
	return StackVal;
}

void Function_615(int iParam0, bool bParam1, bool bParam2) //Position: 0x16A89 / 92809
{
	struct<13> Var0;
	
	if (!Function_580(iParam0, 75))
	{
		return;
	}
	if (bParam1)
	{
		Var0.f_8 = bParam2;
		Function_616(iParam0);
		Function_262(StackVal, StackVal, "CTF_Timeout", Function_616(iParam0));
	}
	else
	{
		Function_616(iParam0);
		Function_262(StackVal, StackVal, "CTF_Return", Function_616(iParam0));
		Var0.f_8 = 4294967295;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		if (bParam2 == 4294967293)
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, Timed out"), F2STR(Var0.f_12, 5, 5), false, false);
		}
		else
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, ringed out by me, slot #%s"), F2STR(Var0.f_12, 5, 5), I2STR(bParam2), false);
		}
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "SENDing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	NET_SCRIPTMSG_SEND(3, 75, &Var0, 4, 1);
	return;
}

vector3 Function_616(int iParam0) //Position: 0x16C1A / 93210
{
	vector3 vVar0;
	
	Function_173("GET_BAG_POS", iParam0);
	if (GET_OBJECT_POSITION(StackVal, &vVar0))
	{
		return StackVal, StackVal, vVar0;
	}
	return -1.0f, -1.0f, -1.0f;
}

void Function_617(int iParam0, int iParam1) //Position: 0x16C4C / 93260
{
	Function_577(iParam0);
	Function_7(&Local_944[iParam08] + 24, 1);
	Function_618(StackVal, Function_41(), Local_944.f_592, iParam1);
	REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA());
	return;
}

void Function_618(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16C8A / 93322
{
	bool bVar0;
	struct<5> Var1;
	
	Function_620(bParam1, bParam0);
	Function_619(bParam1);
	bVar0 = GET_PHYSINST_FROM_OBJECT(bParam1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		if (IS_PHYSINST_READY(bVar0))
		{
			SET_PROP_FIXED(bVar0, 0);
			Var1 = { 0.0f, 0.0f, 0.0f };
			if (bParam3)
			{
				vVar4 = { 0.0f, 0.0f, 0.0f };
				if (IS_ACTOR_VALID(bParam0))
				{
					GET_ACTOR_VELOCITY(bParam0, &Var1);
					GET_ACTOR_AXIS(bParam0, &vVar4, 0);
				}
				if (iParam2 == 0)
				{
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, Var1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
				}
				else if (iParam2 == 1)
				{
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, Var1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
				}
			}
			Var1.f_4 = (StackVal - 3.0f);
			if (SET_PROP_VELOCITY(bVar0, &Var1))
			{
			}
			ACTIVATE_PHYSINST(bVar0);
		}
	}
}

void Function_619(bool bParam0) //Position: 0x16D40 / 93504
{
	char* cVar0;
	
	cVar0 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
	if (IS_OBJECT_ANIMATOR_VALID(cVar0))
	{
		DESTROY_OBJECT_ANIMATOR(cVar0);
	}
	return;
}

void Function_620(bool bParam0, bool bParam1) //Position: 0x16D5A / 93530
{
	if (IS_ACTOR_VALID(bParam1))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 1);
	}
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 1);
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	return;
}

void Function_621(int iParam0, bool bParam1, int iParam2) //Position: 0x16D84 / 93572
{
	struct<13> Var0;
	
	if (bParam1)
	{
		Var0 = 4294967293;
		Function_616(iParam0);
		Function_262(StackVal, StackVal, "CTF_TimeoutDrop", Function_616(iParam0));
	}
	else
	{
		if (!Function_580(iParam0, 73))
		{
			return;
		}
		Var0 = GET_LOCAL_SLOT();
		if (iParam2 == 4294967295)
		{
			Function_616(iParam0);
			Function_262(StackVal, StackVal, "CTF_Drop", Function_616(iParam0));
		}
		else
		{
			Function_616(iParam0);
			Function_262(StackVal, StackVal, "CTF_DropDbl", Function_616(iParam0));
		}
	}
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam2;
	Var0.f_12 = NET_GET_NET_TIME();
	NET_SCRIPTMSG_SEND(3, 73, &Var0, 4, 1);
	NET_LOG(StackVal, 1, "CTF", "SENDing drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	return;
}

void Function_622(int iParam0, int iParam1) //Position: 0x16E68 / 93800
{
	float fVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		fVar0 = Function_623(StackVal, StackVal, StackVal, *iParam1);
		if (iParam0 == Local_944.f_600)
		{
			Local_944.f_604 = fVar0;
		}
		else if (fVar0 > Local_944.f_604)
		{
			Local_944.f_600 = iParam0;
			Local_944.f_604 = fVar0;
		}
	}
	return;
}

var Function_623(bool bParam0, vector3 vParam1) //Position: 0x16EC1 / 93889
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!Function_115(StackVal, StackVal, vParam1))
		{
			Function_624(bParam0);
			vVar0 = { StackVal, StackVal, Function_624(bParam0) };
			return VDIST(vVar0, vParam1);
		}
		LOG_ERROR("Attempting to get distance between an obj and some coords, but the coords are <<0,0,0>>. Returning 0.0!");
	}
	else
	{
		LOG_ERROR("Attempting to get distance between an obj and some coords, but the obj is invalid. Returning 0.0!");
	}
	return 0.0f;
}

vector3 Function_624(bool bParam0) //Position: 0x16FCE / 94158
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_625(bool bParam0) //Position: 0x1703A / 94266
{
	Function_173("CTF_IS_BAG_IN_WORLD", bParam0);
	return StackVal == 0;
}

void Function_626() //Position: 0x17066 / 94310
{
	Local_944.f_600 = 4294967295;
	Local_944.f_604 = 1E+08.0f;
	return;
}

bool Function_627(bool bParam0) //Position: 0x1707E / 94334
{
	Function_173("CTF_IS_BAG_IN_PLAY", bParam0);
	return StackVal == 4294967295;
}

int Function_628() //Position: 0x170A9 / 94377
{
	if (Function_642() || Function_178())
	{
		return 18;
	}
	if (Function_179())
	{
		return 2;
	}
	return 1;
}

vector3 Function_629() //Position: 0x170C8 / 94408
{
	return 0.25f, 0.0f, 0.25f;
}

vector3 Function_630(int iParam0) //Position: 0x170D9 / 94425
{
	if (iParam0 == 0)
	{
		return -0.317f, 0.0f, -0.364f;
	}
	if (iParam0 == 1)
	{
		return 0.313f, 0.0f, -0.387f;
	}
	return 0.0f, 0.0f, 0.0f;
}

int Function_631(bool bParam0) //Position: 0x17109 / 94473
{
	if (!IS_ACTOR_ON_FOOT(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_JUMPING(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_USING_COVER(bParam0))
	{
		return 0;
	}
	if (GET_PLAYER_ZOOM_STATE(0) != 0)
	{
		return 0;
	}
	if (!IS_ACTOR_READY_FOR_ACTION(bParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_632(bool bParam0) //Position: 0x17150 / 94544
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Lifting");
}

var Function_633(bool bParam0) //Position: 0x17169 / 94569
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Dropping");
}

int Function_634(bool bParam0) //Position: 0x17183 / 94595
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

void Function_635() //Position: 0x171D3 / 94675
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (Function_597(0, &vVar0, &vVar3, 0))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		(&Local_944 + 616[25])->f_8 = Function_637(StackVal, StackVal, StackVal, StackVal, Function_638(), "chest", vVar0, vVar3, 2.0f);
		NET_OBJECT_REPLICATION_MODE_END(17);
		Function_636();
		bVar6 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, 1, false);
		UNK_0x6745191B(bVar6, 0.0f, 0.0f, 0.0f);
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_944 + 616[25])->f_4 = ADD_BLIP_FOR_OBJECT(StackVal, 330, 0f, 2, 0);
		if (IS_OBJECT_VALID((&Local_944 + 616[25])->f_12))
		{
			DESTROY_OBJECT((&Local_944 + 616[25])->f_12);
		}
		if (IS_VOLUME_VALID((*&Local_944 + 616)[25]))
		{
			DESTROY_VOLUME((*&Local_944 + 616)[25]);
		}
		(*&Local_944 + 616)[25] = CREATE_VOLUME_IN_LAYOUT(Local_944.f_752, "standHereVol", 3, vVar0, vVar3, 3.0f, 3.0f, 3.0f);
		(&Local_944 + 616[25])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_944.f_752, "", (*&Local_944 + 616)[25], Function_41(), 2, 4294967295, 0, false, 1, 1);
	}
	return;
}

void Function_636() //Position: 0x17346 / 95046
{
	Function_436("CTSBAG_CHESTAPPEARSNEWRND", 0);
	return;
}

bool Function_637(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, float fParam8) //Position: 0x1736C / 95084
{
	bool bVar0;
	
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_944.f_756, bParam1, bParam0, vParam2, vParam5, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!SNAP_OBJECT_TO_GROUND(bVar0, fParam8, false, 1092616192))
		{
		}
	}
	return bVar0;
}

bool Function_638() //Position: 0x173A7 / 95143
{
	return "$/fragments/p_gen_mpChestYellow01x";
}

bool Function_639() //Position: 0x173D2 / 95186
{
	return Local_944.f_836 != 1;
}

void Function_640() //Position: 0x173E0 / 95200
{
	int iVar0;
	
	iVar0 = 0;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_582(Local_813.f_516, iVar0))
		{
			if (!IS_OBJECT_VALID(StackVal))
			{
				(&Local_944 + 616[iVar05])->f_8 = Function_641(Function_638(), (*&Local_944 + 616)[iVar05]);
			}
		}
		else if (IS_OBJECT_VALID(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

bool Function_641(var uParam0, bool bParam1) //Position: 0x1746D / 95341
{
	char* cVar0[32];
	struct<5> Var8;
	vector3 vVar14;
	
	strcpy(&cVar0, GET_OBJECT_NAME(bParam1), 32);
	stradd(&cVar0, "marker", 32);
	GET_OBJECT_POSITION(bParam1, &vVar11);
	GET_VOLUME_SCALE(bParam1, &Var8);
	GET_OBJECT_ORIENTATION(bParam1, &vVar14);
	return Function_637(StackVal, StackVal, StackVal, StackVal, StackVal, uParam0, &cVar0, vVar11, (vVar14 * 0.5f));
}

bool Function_642() //Position: 0x174B9 / 95417
{
	return Local_944.f_836 != 0;
}

void Function_643(bool bParam0) //Position: 0x174C7 / 95431
{
	bool bVar0;
	int iVar1;
	
	bVar0 = "";
	iVar1 = Function_649(bParam0, &bVar0);
	while (IS_OBJECT_VALID(bVar0))
	{
		switch (iVar1)
		{
			case 0x00000045:
				Function_647(bVar0);
				break;
			
			case 0x0000004C:
				Function_646(bVar0);
				break;
			
			case 0x00000046:
				Function_645(bVar0);
				break;
		}
		iVar1 = Function_649(bParam0, &bVar0);
	}
	Function_644(bParam0);
	return;
}

void Function_644(bool bParam0) //Position: 0x17524 / 95524
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_645(bool bParam0) //Position: 0x17537 / 95543
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	return;
}

void Function_646(bool bParam0) //Position: 0x1754B / 95563
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	iVar2 = 0;
	while (iVar2 <= Local_944.f_592)
	{
		if (StackVal == bVar1)
		{
			if (NET_IS_OBJECT_LOCAL(bVar1))
			{
				if (!NET_OBJECT_LOCK_OWNERSHIP(bVar1, 1))
				{
				}
			}
		}
		iVar2++;
	}
	return;
}

void Function_647(bool bParam0) //Position: 0x175A1 / 95649
{
	var uVar0;
	int iVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		if (DECOR_GET_INT_VERBOSE(bParam0, "Slot", &uVar0))
		{
			iVar1 = 0;
			while (iVar1 <= 18)
			{
				if (Function_613(iVar1, uVar0))
				{
					Function_648(iVar1);
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_648(int iParam0) //Position: 0x175E0 / 95712
{
	Function_173("CTF_HOST_DROP_BAG", iParam0);
	Local_813[iParam07].f_8 = 4294967294;
	Local_813[iParam07].f_4 = 2;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

int Function_649(bool bParam0, bool bParam1) //Position: 0x1762D / 95789
{
	bool bVar0;
	
	*bParam1 = "";
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		*bParam1 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		bVar0 = GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(*bParam1));
		REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, bParam0);
		return bVar0;
	}
	return 0;
}

void Function_650() //Position: 0x1766C / 95852
{
	float fVar0;
	struct<6> Var1;
	
	if (!Function_220(&bLocal_701))
	{
		Function_652();
	}
	if (Function_498(&bLocal_701))
	{
		fVar0 = Function_215(&bLocal_701);
		if (fVar0 > 300.0f && fVar0 < 270.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(17.0f, 24.0f);
		}
		else if (fVar0 > 270.0f && fVar0 < 240.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(15.0f, 20.0f);
		}
		else if (fVar0 > 240.0f && fVar0 < 210.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(13.0f, 17.0f);
		}
		else if (fVar0 > 210.0f && fVar0 < 180.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(11.0f, 15.0f);
		}
		else if (fVar0 > 180.0f && fVar0 < 150.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(9.0f, 13.0f);
		}
		else if (fVar0 > 150.0f && fVar0 < 120.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(7.0f, 11.0f);
		}
		else if (fVar0 > 120.0f && fVar0 < 90.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(5.0f, 9.0f);
		}
		else if (fVar0 > 90.0f && fVar0 < 60.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(3.0f, 7.0f);
		}
		else if (fVar0 > 60.0f && fVar0 < 30.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		}
		else if (fVar0 > 30.0f && fVar0 < 0.0f)
		{
			bLocal_704 = RAND_FLOAT_RANGE(0.5f, 3.0f);
		}
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_651() };
		Function_426(&Var1, "CaveExplosion", 0, 1);
		Function_548(&bLocal_701, bLocal_704);
	}
	return;
}

struct<24> Function_651() //Position: 0x1781A / 96282
{
	struct<6> Var0;
	bool bVar6;
	
	bVar6 = RAND_INT_RANGE(false, 79);
	switch (bVar6)
	{
		case 0x00000000:
			Var0 = { -4435.001f, 6.57464f, 3102.044f };
			*(&Var0 + 12) = { 0.0f, -173.9234f, 0.0f };
			break;
		
		case 0x00000001:
			Var0 = { -4428.198f, 5.745153f, 3106.27f };
			*(&Var0 + 12) = { 0.0f, -56.0523f, 0.0f };
			break;
		
		case 0x00000002:
			Var0 = { -4417.415f, 5.056671f, 3100.999f };
			*(&Var0 + 12) = { 0.0f, -23.55607f, 0.0f };
			break;
		
		case 0x00000003:
			Var0 = { -4411.475f, 3.631434f, 3105.122f };
			*(&Var0 + 12) = { 0.0f, -71.89397f, 0.0f };
			break;
		
		case 0x00000004:
			Var0 = { -4406.291f, 4.03725f, 3097.921f };
			*(&Var0 + 12) = { 0.0f, 150.8896f, 0.0f };
			break;
		
		case 0x00000005:
			Var0 = { -4401.993f, 4.375932f, 3105.354f };
			*(&Var0 + 12) = { 0.0f, 83.46505f, 0.0f };
			break;
		
		case 0x00000006:
			Var0 = { -4410.387f, 3.698318f, 3113.608f };
			*(&Var0 + 12) = { 0.0f, -154.4906f, 0.0f };
			break;
		
		case 0x00000007:
			Var0 = { -4413.978f, 3.76639f, 3119.217f };
			*(&Var0 + 12) = { 0.0f, 76.23858f, 0.0f };
			break;
		
		case 0x00000008:
			Var0 = { -4422.568f, 1.874278f, 3111.76f };
			*(&Var0 + 12) = { 0.0f, -177.5843f, 0.0f };
			break;
		
		case 0x00000009:
			Var0 = { -4434.925f, 0.509985f, 3130.117f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000000A:
			Var0 = { -4440.643f, 0.6561674f, 3127.449f };
			*(&Var0 + 12) = { 0.0f, -43.93981f, 0.0f };
			break;
		
		case 0x0000000B:
			Var0 = { -4446.625f, 0.008888654f, 3120.156f };
			*(&Var0 + 12) = { 0.0f, -71.67073f, 0.0f };
			break;
		
		case 0x0000000C:
			Var0 = { -4449.267f, 1.250197f, 3112.841f };
			*(&Var0 + 12) = { 0.0f, -42.8411f, 0.0f };
			break;
		
		case 0x0000000D:
			Var0 = { -4445.997f, 3.763678f, 3106.86f };
			*(&Var0 + 12) = { 0.0f, -192.9265f, 0.0f };
			break;
		
		case 0x0000000E:
			Var0 = { -4442.473f, 0.6923146f, 3107.74f };
			*(&Var0 + 12) = { 0.0f, -205.1385f, 0.0f };
			break;
		
		case 0x0000000F:
			Var0 = { -4438.125f, 0.5900583f, 3117.725f };
			*(&Var0 + 12) = { 0.0f, 158.1546f, 0.0f };
			break;
		
		case 0x00000010:
			Var0 = { -4425.9f, 2.088263f, 3125.529f };
			*(&Var0 + 12) = { 0.0f, 69.52394f, 0.0f };
			break;
		
		case 0x00000011:
			Var0 = { -4428.579f, 0.400778f, 3137.823f };
			*(&Var0 + 12) = { 0.0f, 80.31163f, 0.0f };
			break;
		
		case 0x00000012:
			Var0 = { -4432.039f, 3.022045f, 3147.386f };
			*(&Var0 + 12) = { 0.0f, -103.0508f, 0.0f };
			break;
		
		case 0x00000013:
			Var0 = { -4437.799f, 2.77542f, 3155.124f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000014:
			Var0 = { -4446.182f, 3.49841f, 3150.916f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000015:
			Var0 = { -4449.981f, 3.619747f, 3147.155f };
			*(&Var0 + 12) = { 0.0f, -185.9496f, 0.0f };
			break;
		
		case 0x00000016:
			Var0 = { -4462.591f, 3.991092f, 3142.111f };
			*(&Var0 + 12) = { 0.0f, -179.8082f, 0.0f };
			break;
		
		case 0x00000017:
			Var0 = { -4458.338f, 4.399065f, 3145.675f };
			*(&Var0 + 12) = { 0.0f, -40.60495f, 0.1950751f };
			break;
		
		case 0x00000018:
			Var0 = { -4452.687f, 5.022297f, 3138.032f };
			*(&Var0 + 12) = { 0.0f, 37.49261f, 0.0f };
			break;
		
		case 0x00000019:
			Var0 = { -4452.539f, 5.101877f, 3128.926f };
			*(&Var0 + 12) = { 0.0f, -58.11081f, 0.0f };
			break;
		
		case 0x0000001A:
			Var0 = { -4455.431f, 5.430453f, 3124.801f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000001B:
			Var0 = { -4460.361f, 6.72214f, 3125.64f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000001C:
			Var0 = { -4461.679f, 5.56561f, 3117.056f };
			*(&Var0 + 12) = { 0.0f, 53.48229f, 0.0f };
			break;
		
		case 0x0000001D:
			Var0 = { -4469.186f, 6.497299f, 3121.12f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000001E:
			Var0 = { -4476.321f, 5.986492f, 3117.337f };
			*(&Var0 + 12) = { 0.0f, -136.3137f, 0.0f };
			break;
		
		case 0x0000001F:
			Var0 = { -4474.888f, 5.23385f, 3125.859f };
			*(&Var0 + 12) = { 0.0f, 57.92608f, 0.0f };
			break;
		
		case 0x00000020:
			Var0 = { -4484.319f, 4.265044f, 3128.85f };
			*(&Var0 + 12) = { 0.0f, -109.4876f, 0.0f };
			break;
		
		case 0x00000021:
			Var0 = { -4480.212f, 3.521408f, 3140.661f };
			*(&Var0 + 12) = { 0.0f, -72.72752f, 0.0f };
			break;
		
		case 0x00000022:
			Var0 = { -4480.723f, 3.26719f, 3145.922f };
			*(&Var0 + 12) = { 0.0f, -123.349f, 0.0f };
			break;
		
		case 0x00000023:
			Var0 = { -4473.945f, 3.946614f, 3149.972f };
			*(&Var0 + 12) = { 0.0f, 41.38025f, 0.0f };
			break;
		
		case 0x00000024:
			Var0 = { -4469.879f, 4.294717f, 3146.772f };
			*(&Var0 + 12) = { 0.0f, 38.44637f, 0.0f };
			break;
		
		case 0x00000025:
			Var0 = { -4469.464f, 2.772666f, 3140.053f };
			*(&Var0 + 12) = { 0.0f, 128.5431f, 0.0f };
			break;
		
		case 0x00000026:
			Var0 = { -4473.526f, 3.537501f, 3136.518f };
			*(&Var0 + 12) = { 0.0f, 130.1636f, 0.0f };
			break;
		
		case 0x00000027:
			Var0 = { -4476.378f, 3.853997f, 3133.127f };
			*(&Var0 + 12) = { 0.0f, 112.8743f, 0.0f };
			break;
		
		case 0x00000028:
			Var0 = { -4445.698f, 6.24664f, 3100.727f };
			*(&Var0 + 12) = { 0.0f, 175.1395f, 0.0f };
			break;
		
		case 0x00000029:
			Var0 = { -4438.797f, 6.638618f, 3107.357f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000002A:
			Var0 = { -4450.103f, 7.514062f, 3107.149f };
			*(&Var0 + 12) = { 0.0f, -69.33781f, 0.0f };
			break;
		
		case 0x0000002B:
			Var0 = { -4455.004f, 7.357948f, 3101.783f };
			*(&Var0 + 12) = { 0.0f, 187.8438f, 0.0f };
			break;
		
		case 0x0000002C:
			Var0 = { -4459.836f, 7.31952f, 3102.75f };
			*(&Var0 + 12) = { 0.0f, -20.26655f, 0.0f };
			break;
		
		case 0x0000002D:
			Var0 = { -4463.037f, 7.807151f, 3095.287f };
			*(&Var0 + 12) = { 0.0f, -163.0736f, 0.0f };
			break;
		
		case 0x0000002E:
			Var0 = { -4466.751f, 7.850227f, 3104.173f };
			*(&Var0 + 12) = { 0.0f, 43.21085f, 0.0f };
			break;
		
		case 0x0000002F:
			Var0 = { -4472.077f, 6.201949f, 3109.034f };
			*(&Var0 + 12) = { 0.0f, -46.63321f, 0.0f };
			break;
		
		case 0x00000030:
			Var0 = { -4464.652f, 7.209315f, 3109.797f };
			*(&Var0 + 12) = { 0.0f, 148.0108f, 0.0f };
			break;
		
		case 0x00000031:
			Var0 = { -4461.277f, 5.777646f, 3115.16f };
			*(&Var0 + 12) = { 0.0f, 49.31841f, 0.0f };
			break;
		
		case 0x00000032:
			Var0 = { -4442.243f, 4.201535f, 3156.514f };
			*(&Var0 + 12) = { 0.0f, 48.23455f, 0.0f };
			break;
		
		case 0x00000033:
			Var0 = { -4446.824f, 4.519683f, 3159.485f };
			*(&Var0 + 12) = { 0.0f, -89.37306f, 0.0f };
			break;
		
		case 0x00000034:
			Var0 = { -4442.567f, 5.421104f, 3162.463f };
			*(&Var0 + 12) = { 0.0f, 131.7441f, 0.0f };
			break;
		
		case 0x00000035:
			Var0 = { -4447.294f, 5.193451f, 3166.433f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000036:
			Var0 = { -4438.817f, 6.016003f, 3168.657f };
			*(&Var0 + 12) = { 0.0f, -27.33611f, 0.0f };
			break;
		
		case 0x00000037:
			Var0 = { -4431.092f, 7.642756f, 3168.51f };
			*(&Var0 + 12) = { 0.0f, 152.9663f, 0.0f };
			break;
		
		case 0x00000038:
			Var0 = { -4426.959f, 8.522723f, 3176.711f };
			*(&Var0 + 12) = { 0.0f, -50.59538f, 0.0f };
			break;
		
		case 0x00000039:
			Var0 = { -4419.947f, 9.904797f, 3181.842f };
			*(&Var0 + 12) = { 0.0f, 22.02254f, 0.0f };
			break;
		
		case 0x0000003A:
			Var0 = { -4426.48f, 10.69374f, 3188.79f };
			*(&Var0 + 12) = { 0.0f, -119.5963f, 0.0f };
			break;
		
		case 0x0000003B:
			Var0 = { -4425.144f, 10.5997f, 3196.451f };
			*(&Var0 + 12) = { 0.0f, 72.56651f, 0.0f };
			break;
		
		case 0x0000003C:
			Var0 = { -4444.002f, 2.171631f, 3127.979f };
			*(&Var0 + 12) = { 0.0f, -44.54036f, 0.0f };
			break;
		
		case 0x0000003D:
			Var0 = { -4448.873f, 3.579385f, 3122.146f };
			*(&Var0 + 12) = { 0.0f, -27.68447f, 0.0f };
			break;
		
		case 0x0000003E:
			Var0 = { -4450.488f, 4.888725f, 3114.43f };
			*(&Var0 + 12) = { 0.0f, -97.68817f, 0.0f };
			break;
		
		case 0x0000003F:
			Var0 = { -4434.789f, 2.980238f, 3114.468f };
			*(&Var0 + 12) = { 0.0f, 188.0775f, 0.0f };
			break;
		
		case 0x00000040:
			Var0 = { -4437.336f, 5.323256f, 3111.469f };
			*(&Var0 + 12) = { 0.0f, 205.8031f, 0.0f };
			break;
		
		case 0x00000041:
			Var0 = { -4425.247f, 5.049134f, 3119.751f };
			*(&Var0 + 12) = { 0.0f, 87.572f, 0.0f };
			break;
		
		case 0x00000042:
			Var0 = { -4426.065f, 7.364205f, 3126.861f };
			*(&Var0 + 12) = { 0.0f, 90.87046f, 0.0f };
			break;
		
		case 0x00000043:
			Var0 = { -4436.004f, 3.972075f, 3130.519f };
			*(&Var0 + 12) = { 0.0f, -17.18844f, 0.0f };
			break;
		
		case 0x00000044:
			Var0 = { -4439.989f, 5.991723f, 3129.39f };
			*(&Var0 + 12) = { 0.0f, -14.51488f, 0.0f };
			break;
		
		case 0x00000045:
			Var0 = { -4433.112f, 9.427613f, 3128.451f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000046:
			Var0 = { -4479.887f, 7.778562f, 3141.89f };
			*(&Var0 + 12) = { 0.0f, -90.2598f, 0.0f };
			break;
		
		case 0x00000047:
			Var0 = { -4473.265f, 7.27041f, 3136.177f };
			*(&Var0 + 12) = { 0.0f, 110.951f, 0.0f };
			break;
		
		case 0x00000048:
			Var0 = { -4476.057f, 8.01081f, 3133.408f };
			*(&Var0 + 12) = { 0.0f, 124.1076f, 0.0f };
			break;
		
		case 0x00000049:
			Var0 = { -4481.899f, 8.238979f, 3128.476f };
			*(&Var0 + 12) = { 0.0f, -100.7373f, 0.0f };
			break;
		
		case 0x0000004A:
			Var0 = { -4476.481f, 6.963705f, 3128.953f };
			*(&Var0 + 12) = { 0.0f, 42.87389f, 0.0f };
			break;
		
		case 0x0000004B:
			Var0 = { -4470.37f, 7.642533f, 3145.348f };
			*(&Var0 + 12) = { 0.0f, 36.54575f, 0.0f };
			break;
		
		case 0x0000004C:
			Var0 = { -4473.508f, 7.802081f, 3147.791f };
			*(&Var0 + 12) = { 0.0f, 17.2652f, 0.0f };
			break;
		
		case 0x0000004D:
			Var0 = { -4477.391f, 6.179331f, 3153.26f };
			*(&Var0 + 12) = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x0000004E:
			Var0 = { -4481.607f, 6.739383f, 3151.116f };
			*(&Var0 + 12) = { 0.0f, -50.28259f, 0.0f };
			break;
		
		case 0x0000004F:
			Var0 = { -4480.701f, 6.298752f, 3145.881f };
			*(&Var0 + 12) = { 0.0f, -88.92613f, 0.0f };
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_652() //Position: 0x184E2 / 99554
{
	bLocal_704 = 3.0f;
	Function_548(&bLocal_701, bLocal_704);
	return;
}

void Function_653(bool bParam0, int iParam1) //Position: 0x184F5 / 99573
{
	bool bVar0;
	bool bVar1;
	
	if (Function_655() || Function_194(65536, 1))
	{
		if (iLocal_729)
		{
			Function_185();
		}
		return;
	}
	if (!iLocal_729)
	{
		Function_656();
	}
	if (Function_218())
	{
		if (Function_220(bParam0))
		{
			bVar0 = Function_215(bParam0);
			if (!iLocal_730)
			{
				iLocal_730 = 1;
				Function_654(bVar0);
			}
			bVar1 = CEIL(bVar0);
			if (*iParam1 != bVar1)
			{
				*iParam1 = bVar1;
				if ((*iParam1 % 5) == 0)
				{
					if (FABS((UI_ANIM_GET_TIME("NetTimer") - bVar0)) < 1.0f)
					{
						Function_654(bVar0);
					}
				}
				if (bVar1 < 30)
				{
					PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
				}
			}
		}
	}
	return;
}

void Function_654(bool bParam0) //Position: 0x185A9 / 99753
{
	UI_ANIM_SETUP("NetTimer", bParam0, true, 4294967295);
	UI_ANIM_RESTART("NetTimer");
	return;
}

int Function_655() //Position: 0x185CF / 99791
{
	bool bVar0;
	
	bVar0 = Function_41();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_CHECK_EXIST(bVar0, "StartedHealing");
}

void Function_656() //Position: 0x185FB / 99835
{
	if (!iLocal_729)
	{
		UI_ENTER("NetTimer");
		iLocal_729 = 1;
	}
	return;
}

void Function_657(bool bParam0, bool bParam1) //Position: 0x1861D / 99869
{
	if (IS_VOLUME_VALID(bParam1))
	{
		bParam0->f_8 = bParam1;
	}
	return;
}

void Function_658(bool bParam0, int iParam1) //Position: 0x18634 / 99892
{
	bParam0->f_160 = iParam1;
	return;
}

void Function_659(var uParam0) //Position: 0x18640 / 99904
{
	uParam0 = uParam0;
	if (iLocal_359 == 1)
	{
		Function_656();
		Function_653(&bLocal_698, &iLocal_752);
	}
	else if (iLocal_359 == 2)
	{
		if ((iLocal_360 != 0 || iLocal_360 != 6) || iLocal_360 != 7)
		{
			Function_656();
			Function_653(&bLocal_698, &iLocal_752);
		}
		else
		{
			Function_185();
		}
	}
	else
	{
		Function_185();
	}
	Function_660();
	return;
}

void Function_660() //Position: 0x18696 / 99990
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 36, &uVar0, 1, 1);
	return;
}

void Function_661(bool bParam0) //Position: 0x186A7 / 100007
{
	if (Function_220(bParam0))
	{
		if (Function_219(bParam0))
		{
			Function_217();
			bParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			bParam0->f_8 = 0.0f;
			Function_7(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_662(bool bParam0) //Position: 0x18777 / 100215
{
	int iVar0;
	
	Function_311(1, 1);
	iVar0 = 1;
	Function_46(65536, 0);
	if (!IS_STRING_VALID(bParam0))
	{
		PRINT_BIG("COOP_Checkpoint", 3.0f, 0, 2, 0);
	}
	else
	{
		PRINT_BIG(bParam0, 3.0f, 0, 2, 0);
	}
	PLAY_SOUND_FRONTEND("HUD_MP_CHECKPOINT_MASTER");
	Function_436("MPCOOP_CHEKPOINTCOOP", 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_687, "Local State", "Player was granted an extra life.", false, false, false, false);
		Function_27(&bLocal_406, 0);
	}
	return;
}

void Function_663() //Position: 0x1883D / 100413
{
	switch (iLocal_758)
	{
		case 0x00000000:
			if (iLocal_360 != 0 || iLocal_360 != 6)
			{
				Function_664(1);
			}
			break;
		
		case 0x00000001:
			if (Function_12(iLocal_727, 0x1000000))
			{
				Function_664(2);
			}
			break;
		
		case 0x00000002:
			if ((iLocal_360 != 4 || iLocal_360 != 8) || iLocal_360 != 9)
			{
				Function_664(3);
			}
			break;
		
		case 0x00000003:
			if (iLocal_360 != 12 || iLocal_360 != 13)
			{
				Function_664(4);
			}
			break;
		
		case 0x00000004:
			if (iLocal_731)
			{
				Function_664(5);
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
	}
	return;
}

void Function_664(int iParam0) //Position: 0x188E6 / 100582
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_419("FTR_SONG_07", 10, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 10;
			iLocal_758 = iParam0;
			break;
		
		case 0x00000002:
			Function_419("FTR_SONG_07", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 0;
			iLocal_758 = iParam0;
			break;
		
		case 0x00000003:
			Function_419("FTR_SONG_07", 1, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 7;
			iLocal_758 = iParam0;
			break;
		
		case 0x00000004:
			Function_419("FTR_SONG_07", 38, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 38;
			iLocal_758 = iParam0;
			break;
		
		case 0x00000005:
			Function_419("FTR_SONG_07", 1, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 1;
			iLocal_758 = iParam0;
			break;
		
		case 0x00000000:
		case 0x00000006:
			Function_419("FTR_SONG_07", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 0;
			iLocal_758 = iParam0;
			break;
	}
	return;
}

void Function_665() //Position: 0x18A0B / 100875
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_667();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_666();
	}
	Function_557(&iLocal_403, 1920.0f, "GAP_CO_cut_02", 4.0f, 2, 0);
	return;
}

void Function_666() //Position: 0x18A42 / 100930
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
		Function_421(&iLocal_400);
	}
	return;
}

void Function_667() //Position: 0x18A69 / 100969
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
	}
	return;
}

void Function_668() //Position: 0x18A8A / 101002
{
	if (Function_480())
	{
		Function_796();
	}
	if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Global_63401, Global_63404) && iLocal_360 == 0)
	{
		SET_TIME_ACCELERATION(0.0f);
	}
	Function_794();
	switch (iLocal_360)
	{
		case 0x00000000:
			Function_793(Local_72.f_328);
			Function_658(&bLocal_406, 99904);
			Function_657(&bLocal_406, Local_72.f_336);
			SET_WEATHER(0, Global_63401);
			SET_TIME_ACCELERATION(0.0f);
			Function_704();
			Function_701();
			REMOVE_BLIP(bLocal_750);
			Function_548(&bLocal_746, 0.5f);
			NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
			Function_443(6);
			break;
		
		case 0x00000006:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(7, 1, 0x3f800000))
				{
					Function_548(&bLocal_746, 0.5f);
					Function_700();
					Function_697();
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
					Function_443(7);
				}
			}
			break;
		
		case 0x00000007:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(8, 1, 0x3f800000))
				{
					Function_548(&bLocal_746, 0.5f);
					Function_696();
					Function_692();
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
					Function_443(8);
				}
			}
			break;
		
		case 0x00000008:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(9, 1, 0x3f800000))
				{
					Function_548(&bLocal_746, 0.5f);
					Function_691();
					Function_687();
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_FOURTH_GOAL", false, false, false, false);
					Function_443(9);
				}
			}
			break;
		
		case 0x00000009:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(10, 1, 0x3f800000))
				{
					Function_661(&bLocal_680);
					SET_WEATHER(0, Global_63401);
					SET_TIME_ACCELERATION(0.0f);
					HUD_FADE_IN(1.0f, 1065353216);
					HUD_CLEAR_HELP_QUEUE();
					Function_684();
					Function_568(330, "GAP_CO_minecart", 1);
					Function_548(&bLocal_740, 0.1f);
					Function_678();
					Function_548(&bLocal_746, 3.0f);
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
					Function_443(10);
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(11, 1, 0x3f800000))
				{
					Function_565("GAP_CO_obj02", 6.0f, 1, 2, 0, 0, 0, 0);
					Function_548(&bLocal_746, 3.0f);
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_SIXTH_GOAL", false, false, false, false);
					Function_443(11);
				}
			}
			Function_568(330, "GAP_CO_minecart", 0);
			Function_678();
			break;
		
		case 0x0000000B:
			if (Function_564(&bLocal_746))
			{
				if (Function_395(12, 1, 0x3f800000))
				{
					Function_548(&bLocal_711, 8.0f);
					Function_548(&bLocal_698, 300.0f);
					Function_652();
					Function_653(&bLocal_698, &iLocal_752);
					Function_656();
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
					Function_443(12);
				}
			}
			Function_568(330, "GAP_CO_minecart", 0);
			Function_678();
			break;
		
		case 0x0000000C:
			Function_568(330, "GAP_CO_minecart", 0);
			Function_678();
			Function_650();
			Function_653(&bLocal_698, &iLocal_752);
			if (Function_564(&bLocal_711))
			{
				Function_548(&bLocal_714, 8.0f);
				PRINT_OBJECTIVE_FORMAT(7.0f, "GAP_CO_obj01a", Function_676(iLocal_697), false, 0, 0, 0, 2, 0, 0, 0);
				Function_673();
				NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_EIGHTH_GOAL", false, false, false, false);
				Function_443(13);
			}
			break;
		
		case 0x0000000D:
			Function_568(330, "GAP_CO_minecart", 0);
			Function_678();
			Function_671();
			Function_653(&bLocal_698, &iLocal_752);
			Function_650();
			if (IS_OBJECT_VALID(bLocal_720))
			{
				if (GATEWAY_UPDATE(bLocal_720))
				{
				}
			}
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (!iLocal_1163 && IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_344))
				{
					iLocal_1163 = 1;
				}
			}
			if (Function_498(&bLocal_714))
			{
				Function_670();
			}
			if (Function_12(iLocal_727, 32768))
			{
				if (Function_395(1, 1, 0x3f800000))
				{
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to GID_COMPLETE", false, false, false, false);
					Function_443(106);
				}
			}
			else if (Function_564(&bLocal_698) && !iLocal_728)
			{
				if (Function_395(101, 1, 0x3f800000))
				{
					iLocal_731 = 0;
					Function_328(&bLocal_406, "GAP_CO_fail_not_escape_mine", "FTR_MISSION_FAIL_SONG_01");
					Function_9(&iLocal_727, 2097152);
					NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to SID_LAST_STAGE: GID_INITIALIZE", false, false, false, false);
					iLocal_359 = 101;
					Function_443(0);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x0000006A:
			Function_345(&bLocal_680);
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_ALIVE(Function_41()))
				{
					Function_9(&Local_594 + 16, 2);
				}
			}
			Local_594.f_4 = Function_150(29);
			Function_669();
			NET_LOG(bLocal_687, "Mission STAGE02", "Transitioning to SID_THIRD_STAGE: GID_INITIALIZE", false, false, false, false);
			iLocal_359 = 2;
			Function_443(0);
			break;
	}
	return;
}

void Function_669() //Position: 0x1916D / 102765
{
	if (Function_323(&bLocal_406))
	{
		Function_185();
	}
	Function_662(0);
	return;
}

void Function_670() //Position: 0x19183 / 102787
{
	struct<5> Var0;
	
	NET_LOG(bLocal_687, "GAPco Stage01", "Bag reminder", false, false, false, false);
	if (NET_IS_SESSION_HOST())
	{
		NET_LOG(bLocal_687, "GAPco", "Display bag Count", false, false, false, false);
		Var0 = Local_813.f_508;
		Var0.f_4 = 4294967294;
		NET_LOG(bLocal_687, "GAPco Stage01", "Host is reporting this many bags = ", I2STR(Var0), false, false, false);
		NET_SCRIPTMSG_SEND(3, 46, &Var0, 2, 1);
	}
	return;
}

void Function_671() //Position: 0x1923C / 102972
{
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_355(&iLocal_723))
		{
			Function_421(&iLocal_723);
		}
		if (Function_351(&iLocal_723) < 2.0f)
		{
			Function_672(&Local_72 + 280);
			Function_672(&Local_72 + 284);
			Function_672(&Local_72 + 288);
			Function_672(&Local_72 + 292);
			Function_672(&Local_72 + 296);
			Function_672(&Local_72 + 300);
			Function_672(&Local_72 + 304);
			Function_672(&Local_72 + 308);
			Function_672(&Local_72 + 312);
			Function_672(&Local_72 + 316);
			Function_421(&iLocal_723);
		}
	}
	return;
}

void Function_672(var uParam0) //Position: 0x192B9 / 103097
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		vVar2 = { -4475.167f, 8.374514f, 3145.057f };
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1) && !IS_ACTOR_IN_VOLUME(bVar1, Local_72.f_320))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_673() //Position: 0x19327 / 103207
{
	Function_674(&Local_72 + 224);
	Function_674(&Local_72 + 228);
	Function_674(&Local_72 + 232);
	Function_674(&Local_72 + 236);
	Function_674(&Local_72 + 240);
	return;
}

void Function_674(int iParam0) //Position: 0x19350 / 103248
{
	if (SQUAD_IS_VALID(*iParam0))
	{
		Function_675(*iParam0);
		SQUAD_GOALS_CLEAR(*iParam0);
		SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(*iParam0, false, Local_72.f_320, 4, 0);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(*iParam0, true, Local_72.f_320, 4294967295);
	}
	return;
}

void Function_675(bool bParam0) //Position: 0x19388 / 103304
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_676(bool bParam0) //Position: 0x193BA / 103354
{
	bool bVar0;
	
	bVar0 = Function_677();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_677() //Position: 0x193D1 / 103377
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

void Function_678() //Position: 0x1948D / 103565
{
	if (Function_498(&bLocal_740))
	{
		if (iLocal_753 == 0)
		{
			Function_679(Local_72.f_280);
			Function_679(Local_72.f_284);
		}
		else if (iLocal_753 == 1)
		{
			Function_679(Local_72.f_288);
			Function_679(Local_72.f_292);
		}
		else if (iLocal_753 == 2)
		{
			Function_679(Local_72.f_296);
			Function_679(Local_72.f_300);
			Function_679(Local_72.f_304);
		}
		else
		{
			Function_679(Local_72.f_308);
			Function_679(Local_72.f_312);
			Function_679(Local_72.f_316);
			iLocal_753 = 4294967295;
		}
		iLocal_753++;
		Function_548(&bLocal_740, 0.25f);
	}
	if (Function_219(&bLocal_740) || !Function_220(&bLocal_740))
	{
		Function_548(&bLocal_740, 0.25f);
	}
	return;
}

void Function_679(bool bParam0) //Position: 0x1953D / 103741
{
	int iVar0;
	int iVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = Function_683(bParam0);
		if ((Function_680(bParam0) && !Function_45(iLocal_726, iVar0)) && iVar0 < 0)
		{
			iVar1 = iVar0;
			NET_LOG(bLocal_687, "GAPco Stage01", "NetMsg send - UPDATE_ENEMY_SQUAD_VISIBILITY", false, false, false, false);
			NET_SCRIPTMSG_SEND(3, 41, &iVar1, 1, 1);
		}
	}
	return;
}

int Function_680(bool bParam0) //Position: 0x195C0 / 103872
{
	if ((SQUAD_IS_VALID(bParam0) && IS_ACTOR_VALID(Function_41())) && Function_360(GET_LOCAL_SLOT()) < 0)
	{
		return Function_681(Function_41(), bParam0, 1, 0, 1, 25.0f);
	}
	return 0;
}

int Function_681(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x195F0 / 103920
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_682(bParam0, bVar1, uParam2, uParam3, uParam4, uParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_682(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x19650 / 104016
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_683(int iParam0) //Position: 0x1973D / 104253
{
	if (iParam0 == Local_72.f_284)
	{
		return 1;
	}
	if (iParam0 == Local_72.f_288)
	{
		return 2;
	}
	if (iParam0 == Local_72.f_292)
	{
		return 3;
	}
	if (iParam0 == Local_72.f_296)
	{
		return 4;
	}
	if (iParam0 == Local_72.f_300)
	{
		return 5;
	}
	if (iParam0 == Local_72.f_304)
	{
		return 6;
	}
	if (iParam0 == Local_72.f_280)
	{
		return 8;
	}
	if (iParam0 == Local_72.f_312)
	{
		return 9;
	}
	if (iParam0 == Local_72.f_316)
	{
		return 10;
	}
	if (iParam0 == Local_72.f_308)
	{
		return 11;
	}
	return 4294967295;
}

void Function_684() //Position: 0x197DB / 104411
{
	if (iLocal_728)
	{
		return;
	}
	Function_686(&Local_72 + 308, 17, 0, bLocal_780);
	Function_686(&Local_72 + 312, 17, 0, bLocal_782);
	Function_686(&Local_72 + 316, 17, 0, bLocal_784);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_308, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_312, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_316, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_529(Local_72.f_308, 322, 3212836864);
	Function_529(Local_72.f_312, 322, 3212836864);
	Function_529(Local_72.f_316, 322, 3212836864);
	Function_685(&Local_72 + 308, 0);
	Function_685(&Local_72 + 312, 0);
	Function_685(&Local_72 + 316, 0);
	return;
}

void Function_685(var uParam0, bool bParam1) //Position: 0x19890 / 104592
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_SET_UPDATE_PRIORTY was passed an invalid squad");
	}
	return;
}

void Function_686(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x19919 / 104729
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		LOG_ERROR("SETUP_STANDARD_MP_ASSAULT_SQUAD - Invalid squad");
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_204(&bVar1, iParam1, iParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_687() //Position: 0x19999 / 104857
{
	if (!iLocal_728)
	{
		if (NET_IS_SESSION_HOST())
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 5);
			Function_690();
			Function_689();
			Function_688();
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
		else
		{
			Local_72.f_312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_depot_guards_1_backup"));
			Local_72.f_316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_depot_guards_2_backup"));
			Local_72.f_308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_core_2_guards"));
		}
	}
	return;
}

void Function_688() //Position: 0x19A36 / 105014
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_core_2_guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_8_1", 505, -4435.195f, 0.4250039f, 3122.323f, 0.0f, 222.6132f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_308);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 208);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_8_2", 509, -4437.386f, 0.1904319f, 3126.367f, 0.0f, -151.4528f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_308);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 208);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_689() //Position: 0x19AEF / 105199
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_depot_guards_2_backup"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_10_1", 509, -4475.397f, 1.560948f, 3137.665f, 0.0f, -65.33521f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_316);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 210);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_10_2", 510, -4463.818f, 2.502068f, 3143.591f, 0.0f, 262.6038f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_316);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 210);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_690() //Position: 0x19BB2 / 105394
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_depot_guards_1_backup"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_9_1", 509, -4408.169f, 2.567934f, 3112.727f, 0.0f, 186.4829f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_312);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 209);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_9_2", 510, -4407.593f, 2.349106f, 3102.275f, 0.0f, 207.0218f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_312);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 209);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_691() //Position: 0x19C73 / 105587
{
	if (iLocal_728)
	{
		return;
	}
	Function_528(&Local_72 + 296, bLocal_786);
	Function_686(&Local_72 + 300, 16, 1, bLocal_787);
	Function_686(&Local_72 + 304, 16, 1, bLocal_788);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_296, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_300, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_304, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_529(Local_72.f_296, 322, 3212836864);
	Function_529(Local_72.f_300, 322, 3212836864);
	Function_529(Local_72.f_304, 322, 3212836864);
	Function_685(&Local_72 + 296, 0);
	Function_685(&Local_72 + 300, 0);
	Function_685(&Local_72 + 304, 0);
	return;
}

void Function_692() //Position: 0x19D25 / 105765
{
	if (!iLocal_728)
	{
		if (NET_IS_SESSION_HOST())
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 5);
			Function_695();
			Function_694();
			Function_693();
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
		else
		{
			Local_72.f_296 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_4"));
			Local_72.f_300 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_5"));
			Local_72.f_304 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_6"));
		}
	}
	return;
}

void Function_693() //Position: 0x19DD0 / 105936
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_304 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_6"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_6_1", 515, -4460.921f, 4.607415f, 3112.259f, 0.0f, 105.7045f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_304);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 206);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_6_2", 507, -4461.281f, 6.634823f, 3097.892f, 0.0f, -180.4125f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_304);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 206);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_694() //Position: 0x19E93 / 106131
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_300 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_5"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_5_1", 513, -4441.919f, 4.67545f, 3106.112f, 0.0f, 173.09f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_300);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 205);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_5_2", 509, -4445.188f, 5.412057f, 3105.261f, 0.0f, 186.9415f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_300);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 205);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_695() //Position: 0x19F56 / 106326
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_296 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_4"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_4_1", 505, -4430.289f, 1.409283f, 3145.999f, 0.0f, 129.325f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_296);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 204);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_4_2", 514, -4430.271f, 1.381849f, 3141.776f, 0.0f, 129.325f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_296);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 204);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_696() //Position: 0x1A019 / 106521
{
	if (iLocal_728)
	{
		return;
	}
	Function_528(&Local_72 + 288, bLocal_783);
	Function_528(&Local_72 + 292, bLocal_785);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_288, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_292, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_529(Local_72.f_288, 322, 3212836864);
	Function_529(Local_72.f_292, 322, 3212836864);
	Function_685(&Local_72 + 288, 0);
	Function_685(&Local_72 + 292, 0);
	return;
}

void Function_697() //Position: 0x1A090 / 106640
{
	if (!iLocal_728)
	{
		if (NET_IS_SESSION_HOST())
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 5);
			Function_699();
			Function_698();
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
		else
		{
			Local_72.f_288 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_2"));
			Local_72.f_292 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_3"));
		}
	}
	return;
}

void Function_698() //Position: 0x1A10D / 106765
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_292 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_3_1", 505, -4451.561f, 3.49954f, 3135.751f, 0.0f, 135.1089f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_292);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 203);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_3_2", 514, -4448.881f, 3.508251f, 3132.887f, 0.0f, 135.1089f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_292);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 203);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_3_3", 515, -4453.467f, 3.547494f, 3137.336f, 0.0f, 135.1089f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_292);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 203);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_699() //Position: 0x1A215 / 107029
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_288 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_2_1", 515, -4479.655f, 2.386931f, 3135.948f, 0.0f, 232.7504f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_288);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 202);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_2_2", 506, -4475.442f, 8.410054f, 3141.678f, 0.0f, -102.0412f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_288);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 202);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_2_3", 507, -4472.478f, 5.370922f, 3138.636f, 0.0f, 50.08994f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_288);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 202);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_700() //Position: 0x1A31D / 107293
{
	if (iLocal_728)
	{
		return;
	}
	Function_686(&Local_72 + 280, 9, 5, bLocal_779);
	Function_528(&Local_72 + 284, bLocal_781);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_280, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_284, 0, 2, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_529(Local_72.f_280, 322, 3212836864);
	Function_529(Local_72.f_284, 322, 3212836864);
	Function_685(&Local_72 + 280, 0);
	Function_685(&Local_72 + 284, 0);
	return;
}

void Function_701() //Position: 0x1A397 / 107415
{
	if (!iLocal_728)
	{
		if (NET_IS_SESSION_HOST())
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 5);
			Function_703();
			Function_702();
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
		else
		{
			Local_72.f_280 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_core_guards"));
			Local_72.f_284 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_1"));
		}
	}
	return;
}

void Function_702() //Position: 0x1A408 / 107528
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_284 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_treasure_depot_guards_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_1_1", 514, -4407.773f, 2.354023f, 3104.072f, 0.0f, -174.7968f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_284);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 201);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_1_2", 506, -4408.475f, 2.400197f, 3108.335f, 0.0f, -173.5171f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_284);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 201);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_1_3", 507, -4405.49f, 2.251048f, 3110.195f, 0.0f, -173.5171f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_284);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 201);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_703() //Position: 0x1A510 / 107792
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_280 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_core_guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_0_1", 508, -4429.306f, 0.5060618f, 3123.615f, 0.0f, 190.5796f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_280);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 200);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_0_2", 505, -4439.458f, -0.4864276f, 3119.021f, 0.0f, 194.4743f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_280);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 200);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s02_td_0_3", 506, -4432.837f, 0.430745f, 3124.576f, 0.0f, 173.7976f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_280);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 200);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_704() //Position: 0x1A60C / 108044
{
	NET_OBJECT_REPLICATION_MODE_START(9, 4);
	Function_238(bLocal_694);
	Function_117();
	bLocal_696 = CREATE_VOLUME_IN_LAYOUT(Local_72, "CapVol_A", false, Function_238(bLocal_694), Function_117(), 3.0f, 3.0f, 3.0f);
	Function_117();
	Function_117();
	ATTACH_OBJECTS(bLocal_696, bLocal_694, Function_52(), Function_117(), Function_117(), 4294967295);
	NET_OBJECT_REPLICATION_MODE_END(9);
	Function_705(2, &Local_72, 1);
	return;
}

int Function_705(int iParam0, var uParam1, bool bParam2) //Position: 0x1A659 / 108121
{
	int iVar0;
	struct<9> Var1;
	bool bVar23;
	int iVar24;
	float fVar25;
	bool bVar26;
	var uVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	
	if (!Function_792())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
	}
	Local_944.f_836 = iParam0;
	Local_944.f_600 = 4294967295;
	Local_944.f_604 = 1E+08.0f;
	Local_944.f_592 = 0;
	(*&Local_944 + 580)[0] = 4294967295;
	(*&Local_944 + 580)[1] = 4294967295;
	Local_944.f_608 = Function_790("nQueue_CTF");
	Local_944.f_752 = *uParam1;
	Local_944.f_840 = 0;
	Local_944.f_844 = 0;
	Local_944.f_848 = 0;
	Local_944.f_612 = FIND_VOLUME_IN_LAYOUT(*uParam1, Function_789());
	if (!IS_VOLUME_VALID(Local_944.f_612))
	{
		Function_788();
		Local_944.f_612 = CREATE_VOLUME_IN_LAYOUT(*uParam1, Function_789(), 3, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_788());
	}
	iVar24 = 2;
	if (Function_642())
	{
		iVar24 = 5;
		if (!Function_787(&bVar23, uParam1))
		{
			return 0;
		}
	}
	if (Function_178())
	{
		iVar24 = 1;
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar24)
	{
		strcpy(&cVar7, Function_786(), 64);
		if (Function_642())
		{
			if (iVar0 == 0)
			{
				bVar26 = START_OBJECT_ITERATOR(bVar23);
			}
			else
			{
				bVar26 = OBJECT_ITERATOR_NEXT(bVar23);
			}
			if (!IS_OBJECT_VALID(bVar26))
			{
				DESTROY_ITERATOR(bVar23);
				return 0;
			}
			(*&Local_944 + 616)[iVar05] = GET_VOLUME_FROM_OBJECT(bVar26);
		}
		else
		{
			stradd(&cVar7, Function_785(iVar0), 64);
			(*&Local_944 + 616)[iVar05] = FIND_VOLUME_IN_LAYOUT(*uParam1, &cVar7);
			if (!IS_VOLUME_VALID((*&Local_944 + 616)[iVar05]))
			{
				return 0;
			}
		}
		GET_VOLUME_SCALE((*&Local_944 + 616)[iVar05], &vVar1);
		fVar25 = Function_784(vVar1.x, vVar1.z);
		if (fVar25 > 2.5f)
		{
			strcpy(&cVar7, GET_OBJECT_NAME((*&Local_944 + 616)[iVar05]), 64);
			stradd(&cVar7, " was deemed too small and was scaled up.", 64);
			SCALE_VOLUME((*&Local_944 + 616)[iVar05], (2.5f / fVar25));
		}
		GET_OBJECT_POSITION((*&Local_944 + 616)[iVar05], &vVar4);
		(&Local_944 + 616[iVar05])->f_16 = CLEAR_AREA_OF_GRASS(vVar4, Function_784(vVar1.y, 0.0f));
		(&Local_944 + 616[iVar05])->f_4 = "";
		(&Local_944 + 616[iVar05])->f_12 = "";
		(&Local_944 + 616[iVar05])->f_8 = "";
		if (!(Function_642() || Function_178()))
		{
			if (iVar0 == Function_324())
			{
				uVar27 = Function_783();
			}
			else
			{
				uVar27 = Function_782();
			}
			(&Local_944 + 616[iVar05])->f_8 = Function_641(uVar27, (*&Local_944 + 616)[iVar05]);
		}
		Local_944.f_748++;
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (Function_642())
	{
		DESTROY_ITERATOR(bVar23);
	}
	if (Function_177())
	{
		WAIT(false);
		iVar0 = 0;
		while (iVar0 <= Local_944.f_744)
		{
			bVar29 = Function_175(iVar0, 1);
			GET_OBJECT_POSITION(bVar29, &vVar4);
			bVar28 = CLEAR_AREA_OF_GRASS(vVar4, 0.0f);
			DECOR_SET_INT(bVar29, "ClearRequest", bVar28);
			iVar0++;
		}
	}
	if (!bParam2)
	{
		Function_781(&Local_944 + 760);
		Function_779(&Local_944 + 760, "MP_CTF", 10, 0);
		while (!Function_774(&Local_944 + 760) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	NET_SCRIPTMSG_REGISTER_HANDLER(70, 120690);
	NET_SCRIPTMSG_REGISTER_HANDLER(71, 116992);
	NET_SCRIPTMSG_REGISTER_HANDLER(73, 115370);
	NET_SCRIPTMSG_REGISTER_HANDLER(74, 111985);
	NET_SCRIPTMSG_REGISTER_HANDLER(75, 111110);
	NET_SCRIPTMSG_REGISTER_HANDLER(4, 109338);
	bVar30 = NET_IS_SESSION_HOST();
	if (Function_642())
	{
		iVar31 = 18;
		Function_706(&Local_944 + 720);
		UNK_0x2148AC15(457, 4);
		UNK_0x444C3C32(0, 20, 0);
		if (bVar30)
		{
			Function_706(&Local_813 + 520);
			Local_813.f_508 = 0;
			Local_813.f_512 = Function_606();
			Local_813.f_516 = 0;
			Function_603(&Local_813 + 520);
		}
	}
	else if (Function_178())
	{
		iVar31 = 18;
		if (bVar30)
		{
			Local_813.f_508 = 4294967295;
			Local_813.f_512 = 18;
		}
	}
	else if (Function_639())
	{
		iVar31 = 1;
		Local_813.f_512 = 1;
	}
	else if (Function_179())
	{
		iVar31 = 2;
		Local_813.f_512 = 2;
	}
	iVar0 = 0;
	while (iVar0 <= iVar31)
	{
		Function_706(&Local_944[iVar08] + 28);
		Local_944[iVar08].f_20 = 4294967294;
		if (bVar30)
		{
			Function_600(&Local_813[iVar07] + 12);
			Local_813[iVar07].f_8 = 4294967294;
			Function_706(&Local_813[iVar07] + 24);
			if (iVar0 <= Local_813.f_512)
			{
				if (Function_177())
				{
					Local_813[iVar07].f_4 = 4;
				}
				else
				{
					Local_813[iVar07].f_4 = 0;
					Local_813[iVar07] = iVar0;
				}
			}
			else
			{
				Local_813[iVar07].f_4 = 4294967295;
				Local_813[iVar07] = 4294967295;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_706(int iParam0) //Position: 0x1AB10 / 109328
{
	*iParam0 = 0;
	return;
}

void Function_707(bool bParam0) //Position: 0x1AB1A / 109338
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, StackVal, 1, "CTF", I2STR("RECVing score. Team %s by player %s with bag %s for %s"), I2STR(Var0), I2STR(I2STR(Var0.f_12)));
	if (Var0 == 4294967294)
	{
		if (Function_639())
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
		}
		if (!Function_607(1))
		{
			if (Function_639())
			{
				Function_724("CTF_one_replenished");
				Function_723();
				if (!(Function_611() || Function_610()))
				{
					Function_721(Function_722(Function_324()));
				}
			}
			else if (Var0.f_12 >= 1)
			{
				Function_724("CTF_mul_replenished_pl");
				Function_720();
			}
			else
			{
				Function_724("CTF_mul_replenished");
				Function_723();
			}
		}
	}
	else if (Var0 == 4294967291)
	{
		if (StackVal > Var0.f_12)
		{
			Function_719();
		}
		else if (StackVal && (Var0.f_12 < 3 - Var0.f_12) != 1)
		{
			Function_718();
		}
	}
	else if (Var0 == GET_LOCAL_SLOT())
	{
		if (Function_179())
		{
			if (StackVal == Function_324())
			{
				Function_717();
				Function_724("CTF_sym_capped_self_their");
			}
			if (!(Function_611() || Function_610()))
			{
				Function_721(StackVal);
			}
		}
		else if (Function_639())
		{
			Function_716();
			Function_724("CTF_one_capped_self");
		}
		else if (Function_642())
		{
			if (!(Function_611() || Function_610()))
			{
				Function_721(StackVal);
			}
			if (StackVal == 2)
			{
				Local_944.f_844++;
				Function_724("CTF_mul_dblcapped_self");
				Function_714();
			}
			else
			{
				Function_724("CTF_mul_capped_self");
			}
		}
	}
	else
	{
		if (Function_178())
		{
		}
		else if (Function_642())
		{
			Function_721(Function_152());
		}
		else if (StackVal == Function_324())
		{
			Function_721(StackVal);
		}
		else
		{
			Function_721(Function_713());
		}
		if (IS_SLOT_VALID(Var0))
		{
			if (Function_179())
			{
				if (StackVal == Function_324())
				{
					Function_712();
					Function_710("CTF_sym_capped_their_by", Var0);
				}
				else
				{
					Function_709();
					Function_710("CTF_sym_capped_your_by", Var0);
				}
			}
			else if (Function_639())
			{
				if (StackVal == Function_324())
				{
					Function_716();
				}
				else
				{
					Function_708();
				}
				Function_710("CTF_one_capped_by", Var0);
			}
			else if (Function_642())
			{
				if (StackVal == 2)
				{
					Function_710("CTF_mul_dblcapped_by", Var0);
				}
				else
				{
					Function_710("CTF_mul_capped_by", Var0);
				}
			}
		}
	}
	return;
}

void Function_708() //Position: 0x1AE5F / 110175
{
	Function_436("CTSBAG_ENEMCAPTBAG", 0);
	return;
}

void Function_709() //Position: 0x1AE7E / 110206
{
	Function_436("CTBCLASS_ENEMCAPTURESBAG", 0);
	return;
}

void Function_710(bool bParam0, bool bParam1) //Position: 0x1AEA3 / 110243
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_711(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_711(bool bParam0) //Position: 0x1AEC3 / 110275
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55("g", I2STR(bParam0));
}

void Function_712() //Position: 0x1AED7 / 110295
{
	Function_436("CTBCLASS_URGANGCAPTURSBAG", 0);
	return;
}

bool Function_713() //Position: 0x1AEFD / 110333
{
	if (Function_324() > 0 || Function_324() < 2)
	{
		return 4294967295;
	}
	return Function_722(Function_324());
}

void Function_714() //Position: 0x1AF19 / 110361
{
	if (Function_251(32))
	{
		if (Function_715() > 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(62))
			{
				AWARD_ACHIEVEMENT(62);
			}
		}
	}
	return;
}

int Function_715() //Position: 0x1AF3D / 110397
{
	return Local_944.f_844;
}

void Function_716() //Position: 0x1AF49 / 110409
{
	Function_436("CTSBAG_FRENDCAPTSBAG", 0);
	return;
}

void Function_717() //Position: 0x1AF6A / 110442
{
	Function_436("CTBCLASS_UCAPTUREBAG", 0);
	return;
}

void Function_718() //Position: 0x1AF8B / 110475
{
	Function_436("CTSBAG_1BAGLEFT", 0);
	return;
}

void Function_719() //Position: 0x1AFA7 / 110503
{
	Function_436("CTSBAG_ALLBAGSCAPTURED", 0);
	return;
}

void Function_720() //Position: 0x1AFCA / 110538
{
	Function_436("GRFFA_BAGSAPPEARALLMAP", 0);
	return;
}

void Function_721(bool bParam0) //Position: 0x1AFED / 110573
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	bVar0 = bParam0;
	if (!Function_178())
	{
		bVar0 = (Global_83591 - bParam0);
	}
	if (bVar0 != 0 || Function_610())
	{
		return;
	}
	if (Function_642())
	{
		iVar2 = 4294967295;
		if (Function_611() && bParam0 != iVar2)
		{
			bVar1 = "CTF_mul_obj_capped_overtime";
		}
		else if (bParam0 == 0)
		{
			bVar1 = "CTF_mul_objective";
		}
		else
		{
			bVar1 = "CTF_mul_obj_capped";
		}
		Function_565(bVar1, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	else if (Function_178())
	{
		PRINT_OBJECTIVE_FORMAT(7.5f, "GAP_CO_bag_update", Function_676(bParam0), false, 0, 0, 0, 2, 0, 0, 0);
	}
	else
	{
		if (Function_179())
		{
			if (bVar0 != 1 || Function_611())
			{
				bVar0 = true;
				bVar1 = "CTF_sym_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				bVar1 = "CTF_sym_objective";
			}
			else
			{
				bVar1 = "CTF_sym_obj_capped";
			}
		}
		else if (Function_639())
		{
			if (bVar0 != 1 || Function_611())
			{
				bVar0 = true;
				bVar1 = "CTF_one_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				bVar1 = "CTF_one_objective";
			}
			else
			{
				bVar1 = "CTF_one_obj_capped";
			}
		}
		PRINT_OBJECTIVE_FORMAT(7.5f, bVar1, Function_676(bVar0), false, 0, 0, 0, 2, 0, 0, 0);
	}
	return;
}

int Function_722(int iParam0) //Position: 0x1B1B5 / 111029
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

void Function_723() //Position: 0x1B1D1 / 111057
{
	Function_436("CTSBAG_BAGAPPSNEWRND", 0);
	return;
}

void Function_724(bool bParam0) //Position: 0x1B1F2 / 111090
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, 0, 0, 0, 0, 0);
	return;
}

void Function_725(bool bParam0) //Position: 0x1B206 / 111110
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	if (StackVal != 4294967295)
	{
		NET_LOG(StackVal, 1, "CTF", I2STR("RECVing timed out return for bag %s @ %s"), F2STR(Var0.f_12, 5, 5), false, false);
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "RECVing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	if (StackVal && Function_613(StackVal, 4294967291) != 4294967295)
	{
	}
	if (StackVal != 4294967295)
	{
		if (StackVal == 4294967293)
		{
			if (Function_179())
			{
				if (Function_589(StackVal))
				{
					Function_730();
					Function_724("CTF_sym_returned_their_auto");
				}
				else
				{
					Function_729();
					Function_724("CTF_sym_returned_your_auto");
				}
			}
			else if (Function_642())
			{
			}
			else if (Function_639())
			{
				Function_724("CTF_one_ran_too_far");
				Function_728();
			}
		}
		else if (Function_179())
		{
			if (Function_589(StackVal))
			{
				Function_724("CTF_sym_ran_too_far_their");
			}
			else
			{
				Function_724("CTF_sym_ran_too_far_your");
			}
		}
		else if (Function_642())
		{
			Function_724("CTF_mul_ran_too_far");
		}
		else if (Function_639())
		{
			Function_724("CTF_one_ran_too_far");
		}
	}
	else if (!IS_SLOT_VALID(Var0))
	{
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_727(StackVal);
		NET_LOG(true, "CTF", "Bag returned", false, false, false, false);
	}
	else
	{
		NET_LOG(true, "CTF", "Bag return ignored, not the host (%s is)", Function_726(), false, false, false);
	}
	return;
}

var Function_726() //Position: 0x1B478 / 111736
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return "NOT IN SESSION";
	}
	bVar0 = GET_SLOT_FOR_HOST();
	if (!IS_SLOT_VALID(bVar0))
	{
		return "INVALIDSLOT";
	}
	return GET_SLOT_NAME(bVar0);
}

void Function_727(int iParam0) //Position: 0x1B4B9 / 111801
{
	Function_173("CTF_HOST_RETURN_BAG", iParam0);
	Local_813[iParam07].f_8 = 4294967294;
	Local_813[iParam07].f_4 = 0;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

void Function_728() //Position: 0x1B508 / 111880
{
	Function_436("CTSBAG_BAGRETURNS", 0);
	return;
}

void Function_729() //Position: 0x1B526 / 111910
{
	Function_436("CTBCLASS_FRENDLYBAGRETURNS", 0);
	return;
}

void Function_730() //Position: 0x1B54D / 111949
{
	Function_436("CTBCLASS_ENEMBAGRETURNS", 0);
	return;
}

void Function_731(bool bParam0) //Position: 0x1B571 / 111985
{
	struct<9> Var0;
	int iVar9;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 4);
	NET_LOG(true, "CTF", "RECVing cap. Player %s (%s) for bags %s, %s", I2STR(vVar0.x), UI_GET_STRING(Function_383(vVar0.x)), I2STR(vVar0.y), I2STR(vVar0.z));
	if (!Function_613(vVar0.y, vVar0.x))
	{
	}
	iVar4 = 1;
	if (vVar0.z >= 4294967295)
	{
		iVar4 = 2;
		if (!Function_613(vVar0.z, vVar0.x))
		{
		}
	}
	if (Function_639())
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	if (!IS_SLOT_VALID(vVar0.x))
	{
	}
	else if (!Function_610())
	{
		bVar5 = vVar0.x != GET_LOCAL_SLOT();
		if (Function_178())
		{
			if (bVar5)
			{
				Function_154(15, iVar4);
			}
		}
		else
		{
			if (bVar5)
			{
				Function_747(iVar4);
				Function_154(15, iVar4);
				if (Function_179())
				{
					Function_746(&Global_50170[3122] + 4, &Global_50170[3122] + 8, &Global_50170[3122] + 12, iVar4);
					Function_744(&Global_50170[3522] + 4, &Global_50170[3522] + 8, &Global_50170[3522] + 12, iVar4);
					Function_158(200.0f, "XP_CTF_cap", 1);
				}
				else if (Function_639())
				{
					Function_742(&Global_50170[3922] + 4, &Global_50170[3922] + 8, &Global_50170[3922] + 12, iVar4);
					Function_740(&Global_50170[4322] + 4, &Global_50170[4322] + 8, &Global_50170[4322] + 12, iVar4);
					Function_158(200.0f, "XP_CTF_cap", 1);
				}
				else if (Function_642())
				{
					Function_738(&Global_50170[4622] + 4, &Global_50170[4622] + 8, &Global_50170[4622] + 12, iVar4);
					if (iVar4 == 1)
					{
						Function_158(50.0f, "XP_CTF_cap", 1);
						Function_737();
					}
					else
					{
						Function_158(150.0f, "XP_CTF_dblcap", 1);
						Function_736();
					}
				}
			}
			if (Function_642())
			{
				if (bVar5)
				{
					Function_735(vVar0.x, iVar4, Function_152(), vVar0.y);
				}
			}
			else if (NET_IS_SESSION_HOST())
			{
				iVar6 = Function_325(vVar0.x, 1, 0);
				Function_734(iVar6, iVar4);
				Function_735(vVar0.x, iVar6, Function_722(iVar6), vVar0.y);
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_610())
		{
			if (Function_639())
			{
				Function_733(vVar0.y);
				Local_813.f_508 = vVar0.y;
				NET_LOG(true, "CTF", "Bag capped", false, false, false, false);
			}
			else if (Function_642() || Function_178())
			{
				Function_733(vVar0.y);
				NET_LOG(true, "CTF", "Bag capped", false, false, false, false);
				if (vVar0.z >= 4294967295)
				{
					Function_733(vVar0.z);
				}
				bVar7 = false;
				while (bVar7 <= 18)
				{
					if (Function_627(bVar7))
					{
						if (Function_732(bVar7))
						{
							iVar8++;
						}
						iVar9++;
					}
					bVar7++;
				}
				if (Function_178())
				{
					Local_813.f_508 = iVar8;
					Function_735(vVar0.x, iVar4, Local_813.f_508, vVar0.y);
				}
				else
				{
					Function_735(4294967291, 0, iVar8, iVar9);
					if (iVar8 > iVar9)
					{
						Local_813.f_516 = 0;
						Function_603(&Local_813 + 520);
						Local_813.f_508 = vVar0.y;
					}
					else
					{
						Local_813.f_508 = 4294967295;
					}
				}
			}
			else
			{
				Function_727(vVar0.y);
				NET_LOG(true, "CTF", "Bag capped", false, false, false, false);
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Cap ignored, not the host (%s is)", Function_726(), false, false, false);
	}
	return;
}

bool Function_732(int iParam0) //Position: 0x1B929 / 112937
{
	Function_173("CTF_IS_BAG_CAPPED", iParam0);
	return StackVal != 4;
}

void Function_733(int iParam0) //Position: 0x1B953 / 112979
{
	Function_173("CTF_HOST_CAP_BAG", iParam0);
	Local_813[iParam07].f_8 = 4294967294;
	Local_813[iParam07].f_4 = 4;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

void Function_734(int iParam0, int iParam1) //Position: 0x1B99F / 113055
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = (Global_78578[iParam02] + iParam1);
		Function_603(&Global_78578 + 92);
	}
	return;
}

void Function_735(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1B9D4 / 113108
{
	struct<13> Var0;
	
	Var0 = iParam0;
	Var0.f_4 = bParam1;
	Var0.f_8 = iParam2;
	Var0.f_12 = iParam3;
	NET_LOG(StackVal, StackVal, 1, "CTF", I2STR("SENDing score. Team %s by player %s with bag %s for %s"), I2STR(Var0), I2STR(I2STR(Var0.f_12)));
	NET_SCRIPTMSG_SEND(3, 4, &Var0, 4, 1);
	NET_SCRIPTMSG_SEND(3, 65, &Var0, 4, 1);
}

void Function_736() //Position: 0x1BA64 / 113252
{
	Function_436("CTSBAG_UCAPT2BAGS", 0);
	return;
}

void Function_737() //Position: 0x1BA82 / 113282
{
	Function_436("CTSBAG_UCAPT1BAG", 0);
	return;
}

void Function_738(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1BA9F / 113311
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 1)
				{
					Function_141(46, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_739(), 3084);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_104(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 15)
				{
					Function_141(46, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_739(), 3085);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_104(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 50)
				{
					Function_110(46, 150, Function_739(), 3086);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_104(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_739() //Position: 0x1BC27 / 113703
{
	return "MP_Goldrush_icon_128";
}

void Function_740(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1BC44 / 113732
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 3)
				{
					Function_141(43, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_741(), 3079);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_104(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 5)
				{
					Function_141(43, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 7, 150, Function_741(), 3080);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_104(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 7)
				{
					Function_110(43, 150, Function_741(), 3081);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 7);
					if (*uParam2 == fVar1)
					{
						Function_104(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_741() //Position: 0x1BDB7 / 114103
{
	return "MP_GrabtheBag2_Icon_128";
}

void Function_742(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1BDD7 / 114135
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 1)
				{
					Function_141(39, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_743(), 3065);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_104(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 15)
				{
					Function_141(39, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_743(), 3066);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_104(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 50)
				{
					Function_110(39, 150, Function_743(), 3067);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_104(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_743() //Position: 0x1BF60 / 114528
{
	return "MP_GrabTheBag_Icon_128";
}

void Function_744(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1BF7F / 114559
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 1)
				{
					Function_141(35, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 2, 100, Function_745(), 3059);
					Function_140(uParam2, bVar0, 2);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_104(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 2)
				{
					Function_141(35, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 3, 150, Function_745(), 3060);
					Function_140(uParam2, bVar0, 3);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 2);
					if (*uParam2 == fVar1)
					{
						Function_104(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 3)
				{
					Function_110(35, 150, Function_745(), 3061);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_104(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_745() //Position: 0x1C0F6 / 114934
{
	return "MP_HoldYourOwn_Icon_128";
}

void Function_746(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1C116 / 114966
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 1)
				{
					Function_141(31, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_745(), 3045);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_104(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 15)
				{
					Function_141(31, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_745(), 3046);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_104(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 50)
				{
					Function_110(31, 150, Function_745(), 3047);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_104(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_747(int iParam0) //Position: 0x1C29E / 115358
{
	Function_310(0, iParam0);
	return;
}

void Function_748(bool bParam0) //Position: 0x1C2AA / 115370
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing Drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == 4294967293)
	{
		if (Function_179())
		{
			if (Function_589(StackVal))
			{
				Function_724("CTF_sym_dropped_auto_their");
			}
			else
			{
				Function_724("CTF_sym_dropped_auto_your");
			}
		}
		else if (Function_639())
		{
			Function_724("CTF_one_dropped_auto");
		}
		else if (Function_642())
		{
			Function_724("CTF_mul_dropped_auto");
		}
	}
	else
	{
		if (StackVal != StackVal)
		{
		}
		if (Var0 == GET_LOCAL_SLOT())
		{
			if (Function_179())
			{
				if (Function_589(StackVal))
				{
					Function_753();
					Function_724("CTF_sym_dropped_self_their");
				}
			}
			else if (Function_639())
			{
				Function_753();
				Function_724("CTF_one_dropped_self");
			}
			else if (Function_642())
			{
				if (StackVal != 4294967295)
				{
					Function_724("CTF_mul_dropped_self_dbl");
				}
				else
				{
					Function_724("CTF_mul_dropped_self");
				}
			}
		}
		else if (IS_SLOT_VALID(Var0))
		{
			Function_619(StackVal);
			if (Function_179())
			{
				if (Function_589(StackVal))
				{
					Function_752();
					Function_710("CTF_sym_dropped_their_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_sym_obj_drop_theirs", false, false, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					Function_751();
					Function_710("CTF_sym_dropped_your_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_sym_obj_drop_yours", false, false, 0, 0, 0, 2, 0, 0, 0);
				}
			}
			else if (Function_639())
			{
				if (Function_592(Var0))
				{
					Function_750();
				}
				else
				{
					Function_749();
				}
				Function_710("CTF_one_dropped_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_one_obj_drop", false, false, 0, 0, 0, 2, 0, 0, 0);
			}
			else if (Function_642())
			{
				if (StackVal != 4294967295)
				{
					Function_619(StackVal);
					Function_710("CTF_mul_dropped_by_dbl", Var0);
				}
				else
				{
					Function_710("CTF_mul_dropped_by", Var0);
				}
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (Var0 == 4294967293)
		{
			Function_648(StackVal);
			NET_LOG(true, "CTF", "Time out drop received by me, the host", false, false, false, false);
		}
		else
		{
			if (Function_613(StackVal, 4294967291))
			{
				if (Function_613(StackVal, Var0))
				{
					Function_648(StackVal);
					NET_LOG(true, "CTF", "Drop received by me, the host", false, false, false, false);
				}
				else
				{
					NET_LOG(StackVal, StackVal, StackVal, true, I2STR(I2STR("CTF")), I2STR(Var0), false);
				}
			}
			else
			{
				NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), false, false, false);
			}
			if (StackVal != 4294967295)
			{
				if (Function_613(StackVal, 4294967291))
				{
					if (Function_613(StackVal, Var0))
					{
						Function_648(StackVal);
						NET_LOG(true, "CTF", "Drop second bag received by me, the host", false, false, false, false);
					}
					else
					{
						NET_LOG(StackVal, StackVal, StackVal, true, I2STR(I2STR("CTF")), I2STR(Var0), false);
					}
				}
				else
				{
					NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), false, false, false);
				}
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Drop ignored, not the host", false, false, false, false);
	}
	return;
}

void Function_749() //Position: 0x1C85B / 116827
{
	Function_436("CTSBAG_ENEMDROPSBAG", 0);
	return;
}

void Function_750() //Position: 0x1C87B / 116859
{
	Function_436("CTSBAG_FRENDDROPSBAG", 0);
	return;
}

void Function_751() //Position: 0x1C89C / 116892
{
	Function_436("CTBCLASS_ENEMDROPSBAG", 0);
	return;
}

void Function_752() //Position: 0x1C8BE / 116926
{
	Function_436("CTBCLASS_URGANGDROPSBAG", 0);
	return;
}

void Function_753() //Position: 0x1C8E2 / 116962
{
	Function_436("CTBCLASS_UDROPBAG", 0);
	return;
}

void Function_754(bool bParam0) //Position: 0x1C900 / 116992
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == GET_LOCAL_SLOT())
	{
		NET_LOG(true, "CTF", "Bag confirmed for me!", false, false, false, false);
		Function_616("CTF_Pickup");
		Function_262(StackVal, StackVal, StackVal, Function_616("CTF_Pickup"));
		bVar4 = Function_41();
		bVar5 = true;
		if (!IS_ACTOR_VALID(bVar4))
		{
			bVar5 = false;
		}
		else if (!IS_ACTOR_ALIVE(bVar4))
		{
			bVar5 = false;
		}
		else if (Local_944.f_592 > 2)
		{
			Function_621(StackVal, 0, 4294967295);
			return;
		}
		if (bVar5)
		{
			if (Function_179())
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_565("CTF_sym_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_769(&Global_50170[3322] + 4, &Global_50170[3322] + 8, &Global_50170[3322] + 12);
				if (Function_589(StackVal))
				{
					Function_768();
					Function_724("CTF_sym_picked_up_self_their");
				}
			}
			else if (Function_639())
			{
				Function_767(&Global_50170[4122] + 4, &Global_50170[4122] + 8, &Global_50170[4122] + 12);
				Function_766();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_565("CTF_one_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_724("CTF_one_picked_up_self");
			}
			else if (Function_642())
			{
				Function_765(&Global_50170[4822] + 4, &Global_50170[4822] + 8, &Global_50170[4822] + 12);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (StackVal == 1)
				{
					Function_565("CTF_mul_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_565("CTF_mul_obj_dblget", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				Local_944[GET_CURRENT_GAME_TIME()8].f_16 = StackVal;
			}
		}
		Function_763(StackVal, 1, !Local_944.f_728);
	}
	else if (IS_SLOT_VALID(Var0))
	{
		NET_LOG(true, "CTF", "Somebody else, slot #%s, picked up a Bag", I2STR(Var0), false, false, false);
		bVar6 = GET_SLOT_ACTOR(Var0);
		if (IS_ACTOR_VALID(bVar6))
		{
			Function_758(StackVal, StackVal, (StackVal - 1), 1);
		}
		if (Function_179())
		{
			if (Function_589(StackVal))
			{
				Function_710("CTF_sym_picked_up_their_by", Var0);
				Function_757();
			}
			else
			{
				Function_756();
				Function_710("CTF_sym_picked_up_your_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_565("CTF_sym_obj_get_back", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (IS_BLIP_VALID(Local_944[StackVal8]))
				{
					SET_BLIP_BLINK(Local_944[StackVal8], 1, 0, 5f);
				}
			}
		}
		else if (Function_639())
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (Function_592(Var0))
			{
				Function_766();
				Function_565("CTF_one_obj_we_pickup", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_755();
				Function_565("CTF_one_obj_they_pickup", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			Function_710("CTF_one_picked_up_by", Var0);
		}
		else if (Function_642())
		{
			if (StackVal == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	return;
}

void Function_755() //Position: 0x1CD11 / 118033
{
	Function_436("CTSBAG_ENEMTAKESBAG", 0);
	return;
}

void Function_756() //Position: 0x1CD31 / 118065
{
	Function_436("CTBCLASS_ENEMTAKESLOCBAG", 0);
	return;
}

void Function_757() //Position: 0x1CD56 / 118102
{
	Function_436("CTBCLASS_URGANGTAKESBAG", 0);
	return;
}

var Function_758(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1CD7A / 118138
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char* cVar3;
	
	bVar0 = GET_PHYSINST_FROM_OBJECT(bParam1);
	iVar1 = iParam2;
	bVar2 = iVar1 + 2;
	if (IS_PHYSINST_READY(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
		if (ATTACH_PROP_TO_ANIM(bParam0, bVar0, Function_572(iVar1), "grab", false, bVar2))
		{
		}
		cVar3 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar0);
		if (IS_OBJECT_ANIMATOR_VALID(cVar3))
		{
			DESTROY_OBJECT_ANIMATOR(cVar3);
		}
		cVar3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar0, Function_762(), Function_761(0), Function_760(iVar1));
		if (IS_OBJECT_ANIMATOR_VALID(cVar3))
		{
			if (LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar3, bParam0, bVar2))
			{
			}
		}
	}
	if (Function_576(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "FatGuy", true);
	}
	else
	{
		DECOR_REMOVE(bParam0, "FatGuy");
	}
	if (bParam3)
	{
		return "";
	}
	SET_ANIM_SET_FOR_ACTOR(bParam0, Function_762(), 0);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_759(iVar1));
	return "";
}

var Function_759(int iParam0) //Position: 0x1CE4C / 118348
{
	if (iParam0 == 0)
	{
		return "CTF_new/One/left_pre";
	}
	if (iParam0 == 1)
	{
		return "CTF_new/Two/right_pre";
	}
	return "";
}

var Function_760(int iParam0) //Position: 0x1CE95 / 118421
{
	iParam0 = iParam0;
	return "CTF_new";
}

bool Function_761(bool bParam0) //Position: 0x1CEA9 / 118441
{
	if (bParam0)
	{
		return "custom/CTF_new";
	}
	return "CTF_new";
}

bool Function_762() //Position: 0x1CED0 / 118480
{
	return "CTF";
}

void Function_763(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CEDC / 118492
{
	float fVar0;
	bool bVar1;
	
	Function_173("ANIMATE_CARRYING_BAG", iParam0);
	if (bParam1)
	{
		fVar0 = GET_CURRENT_GAME_TIME();
		bVar1 = Function_41();
		if (bParam2)
		{
			DECOR_SET_BOOL(bVar1, "CTF_FastAttach", true);
			Local_944.f_740 = fVar0;
			Function_171(iParam0);
		}
		Function_758(StackVal, bVar1, Local_944.f_592, 0);
		Local_944.f_828 = 1;
		Local_944.f_832 = fVar0;
	}
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA(), 0);
	(*&Local_944 + 580)[Local_944.f_592] = iParam0;
	Function_764();
	return;
}

void Function_764() //Position: 0x1CF7F / 118655
{
	Local_944.f_592++;
	if (Local_944.f_592 >= 2)
	{
	}
	return;
}

void Function_765(var uParam0, var uParam1, var uParam2) //Position: 0x1CF9D / 118685
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 10)
				{
					Function_141(48, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_739(), 3090);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_104(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 25)
				{
					Function_141(48, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_739(), 3091);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_104(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 50)
				{
					Function_141(48, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_739(), 3092);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_104(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_148(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 75)
				{
					Function_141(48, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_739(), 3093);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_104(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_148(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 100)
				{
					Function_110(48, 250, Function_739(), 3094);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_104(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_766() //Position: 0x1D224 / 119332
{
	Function_436("CTSBAG_FRENDTAKESBAG", 0);
	return;
}

void Function_767(var uParam0, var uParam1, var uParam2) //Position: 0x1D245 / 119365
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 10)
				{
					Function_141(41, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_743(), 3071);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_104(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 25)
				{
					Function_141(41, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_743(), 3072);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_104(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 50)
				{
					Function_141(41, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_743(), 3073);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_104(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_148(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 75)
				{
					Function_141(41, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_743(), 3074);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_104(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_148(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 100)
				{
					Function_110(41, 250, Function_743(), 3075);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_104(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_768() //Position: 0x1D4CD / 120013
{
	Function_436("CTBCLASS_UTAKEBAG", 0);
	return;
}

void Function_769(var uParam0, var uParam1, int iParam2) //Position: 0x1D4EB / 120043
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_148(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 10)
				{
					Function_141(33, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 25, 100, Function_745(), 3051);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 10);
					if (*iParam2 == fVar1)
					{
						Function_104(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_148(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 25)
				{
					Function_141(33, uParam0, 2, uParam1, 2, *iParam2, 0, 100, bVar0, 50, 150, Function_745(), 3052);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 25);
					if (*iParam2 == fVar1)
					{
						Function_104(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_148(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 50)
				{
					Function_141(33, uParam0, 2, uParam1, 3, *iParam2, 0, 150, bVar0, 75, 200, Function_745(), 3053);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_104(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_148(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 75)
				{
					Function_141(33, uParam0, 2, uParam1, 4, *iParam2, 0, 200, bVar0, 100, 250, Function_745(), 3054);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 75);
					if (*iParam2 == fVar1)
					{
						Function_104(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_148(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 100)
				{
					Function_110(33, 250, Function_745(), 3055);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_140(iParam2, bVar0, 100);
					if (*iParam2 == fVar1)
					{
						Function_104(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_770(bool bParam0) //Position: 0x1D772 / 120690
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_610())
		{
			if (!Function_613(StackVal, 4294967291))
			{
				if (StackVal && (StackVal || StackVal != 2))
				{
					Function_772(StackVal, StackVal, Var0);
					Function_771(StackVal, Var0);
					NET_LOG(true, "CTF", "Accepted ask.", false, false, false, false);
				}
				else
				{
					NET_LOG(StackVal, StackVal, 1, I2STR("CTF"), UI_GET_STRING(Function_383(Var0)), false, false);
				}
			}
			else
			{
				NET_LOG(StackVal, StackVal, StackVal, StackVal, StackVal, I2STR(UI_GET_STRING(Function_383(1))), false);
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Ignored Ask, not the host (%s is).", Function_726(), false, false, false);
	}
	return;
}

void Function_771(int iParam0, int iParam1) //Position: 0x1D93B / 121147
{
	Function_173("CTF_HOST_CARRY_BAG", iParam0);
	Local_813[iParam07].f_8 = iParam1;
	Local_813[iParam07].f_4 = 3;
	Function_600(&Local_813[iParam07] + 12);
	Function_603(&Local_813[iParam07] + 24);
	return;
}

void Function_772(var uParam0, var uParam1, int iParam2) //Position: 0x1D988 / 121224
{
	struct<13> Var0;
	
	Var0 = uParam0;
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = uParam1;
	Var0.f_8 = iParam2;
	NET_LOG(StackVal, 1, "CTF", "SENDing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_383(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 71, &Var0, 4, 1);
	return;
}

bool Function_773(bool bParam0) //Position: 0x1DA09 / 121353
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Function_628();
	iVar0 = 0;
	while (iVar0 <= iVar2)
	{
		if (Function_613(iVar0, bParam0))
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_774(bool bParam0) //Position: 0x1DA40 / 121408
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_778();
	iVar1 = 0;
	if (!Function_184(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_777(bParam0[iVar03], 8);
		}
		else if (Function_776())
		{
			iVar1 = 1;
			Function_777(bParam0[iVar03], 8);
		}
		Function_777(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_184(bParam0[iVar03], 4))
		{
			if (!Function_184(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_184(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_184(bParam0[03], 8) || iVar1));
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
				Function_777(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_184(bParam0[iVar03], 4))
		{
			if (!Function_184(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_777(bParam0[iVar03], 2);
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
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_777(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_777(bParam0[iVar03], 2);
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
	Function_775();
	return 1;
}

void Function_775() //Position: 0x1DDBB / 122299
{
	if (!Function_416(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_776() //Position: 0x1DDFB / 122363
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

void Function_777(var uParam0, int iParam1) //Position: 0x1DE26 / 122406
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_778() //Position: 0x1DE37 / 122423
{
	if (!Function_416(128))
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

var Function_779(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1DE79 / 122489
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_780(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_777(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_780(var uParam0, int iParam1, int iParam2) //Position: 0x1DEB1 / 122545
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_184(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_777(uParam0[iVar03], 4);
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

void Function_781(var uParam0) //Position: 0x1DF75 / 122741
{
	Function_779(uParam0, Function_596(), 0, 0);
	Function_779(uParam0, Function_762(), 5, 0);
	Function_779(uParam0, Function_761(1), 8, 0);
	return;
}

var Function_782() //Position: 0x1DF9E / 122782
{
	return "$/fragments/p_gen_mpChestRed01x";
}

var Function_783() //Position: 0x1DFC6 / 122822
{
	return "$/fragments/p_gen_mpChestBlue01x";
}

var Function_784(int iParam0, int iParam1) //Position: 0x1DFEF / 122863
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_785(int iParam0) //Position: 0x1E002 / 122882
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

var Function_786() //Position: 0x1E0C3 / 123075
{
	return "CapVol_";
}

bool Function_787(var uParam0, int iParam1) //Position: 0x1E0D3 / 123091
{
	bool bVar0;
	
	bVar0 = FIND_VOLUME_IN_LAYOUT(*iParam1, "CapVols_set");
	if (IS_VOLUME_VALID(bVar0))
	{
	}
	else
	{
		return 0;
	}
	if (!IS_ITERATOR_VALID(*uParam0))
	{
		*uParam0 = CREATE_OBJECT_ITERATOR(*iParam1);
		if (!IS_ITERATOR_VALID(*uParam0))
		{
			return 0;
		}
	}
	ITERATE_IN_VOLUME_SET(*uParam0, bVar0);
	if (IS_OBJECT_VALID(START_OBJECT_ITERATOR(*uParam0)))
	{
		return 1;
	}
	ITERATE_ON_OBJECT_TYPE(*uParam0, 9);
	ITERATE_ON_PARTIAL_NAME(*uParam0, Function_786());
	ITERATE_IN_LAYOUT(*uParam0, *iParam1);
	return 1;
}

vector3 Function_788() //Position: 0x1E14C / 123212
{
	return 150.0f, 150.0f, 150.0f;
}

var Function_789() //Position: 0x1E161 / 123233
{
	return "PlayableSpace";
}

var Function_790(bool bParam0) //Position: 0x1E177 / 123255
{
	bool bVar0;
	
	bVar0 = Function_791();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_791() //Position: 0x1E18B / 123275
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

bool Function_792() //Position: 0x1E1C7 / 123335
{
	Local_944.f_756 = FIND_NAMED_LAYOUT("CTF_Bag_layout");
	if (!IS_LAYOUTREF_VALID(Local_944.f_756))
	{
		Local_944.f_756 = CREATE_LAYOUT("CTF_Bag_layout");
	}
	return IS_LAYOUTREF_VALID(Local_944.f_756);
}

int Function_793(bool bParam0) //Position: 0x1E217 / 123415
{
	bool bVar0;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar0 = GET_OBJECT_FROM_VOLUME(bParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar0)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bVar0));
			return 1;
		}
	}
	return 0;
}

void Function_794() //Position: 0x1E242 / 123458
{
	switch (iLocal_757)
	{
		case 0x00000000:
			if (iLocal_360 != 0 || iLocal_360 != 6)
			{
				Function_795(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_726 != 0)
			{
				Function_795(2);
			}
			break;
		
		case 0x00000002:
			if (iLocal_360 != 8 || Function_12(iLocal_727, 32768))
			{
				Function_795(3);
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_795(int iParam0) //Position: 0x1E2A9 / 123561
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_419("FTR_SONG_06", 8, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 8;
			iLocal_757 = iParam0;
			break;
		
		case 0x00000002:
			Function_419("FTR_SONG_06", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 34;
			iLocal_757 = iParam0;
			break;
		
		case 0x00000000:
			Function_419("FTR_SONG_06", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 0;
			iLocal_757 = iParam0;
			break;
	}
	return;
}

void Function_796() //Position: 0x1E341 / 123713
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_800();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_799();
	}
	Function_797(&iLocal_403, 1920.0f, "GAP_CO_obj02", "", "", "", "", 4.0f, 2, 0);
	return;
}

int Function_797(int iParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9) //Position: 0x1E383 / 123779
{
	if (Function_351(iParam0) <= fParam1)
	{
		if (bParam9)
		{
			Function_14();
		}
		if (!Function_560())
		{
			Function_798(uParam7, uParam2, uParam3, uParam4, uParam5, uParam6, uParam8);
			Function_421(iParam0);
			return 1;
		}
		Function_354(iParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_798(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1E3D0 / 123856
{
	switch (iParam6)
	{
		case 0x00000000:
			PRINT_SMALL_FORMAT(bParam0, fParam1, bParam2, bParam3, iParam4, iParam5, 2, 0, 0);
			break;
		
		case 0x00000001:
			PRINT_HELP_FORMAT(bParam0, fParam1, bParam2, bParam3, iParam4, iParam5, 2, 0, 0);
			break;
		
		case 0x00000002:
			PRINT_OBJECTIVE_FORMAT(bParam0, fParam1, bParam2, bParam3, iParam4, iParam5, 0, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG_FORMAT(bParam0, bParam1, bParam2, bParam3, iParam4, iParam5, 2, 0);
			break;
	}
}

void Function_799() //Position: 0x1E44C / 123980
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
		Function_421(&iLocal_400);
	}
	return;
}

void Function_800() //Position: 0x1E473 / 124019
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
	}
	return;
}

void Function_801() //Position: 0x1E494 / 124052
{
	if (Function_480())
	{
		Function_896();
	}
	if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Global_63400, Global_63401) && iLocal_360 == 0)
	{
		SET_TIME_OF_DAY(Global_63401);
		Function_541(0, 0);
		SET_TIME_ACCELERATION(0.0f);
	}
	Function_894();
	switch (iLocal_360)
	{
		case 0x00000000:
			Function_893();
			Function_658(&bLocal_406, 99904);
			Function_657(&bLocal_406, Local_72.f_332);
			Function_447();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_892();
			Function_353(&iLocal_403);
			STREAMING_OVERRIDE_MAIN_POI(-4424.613f, 8.839f, 3174.473f, -0.84f, -0.3f, -0.453f);
			SET_TIME_OF_DAY(Global_63400);
			SET_WEATHER(0, Global_63400);
			Function_541(0, 0);
			SET_TIME_ACCELERATION(0.0f);
			Function_890(1);
			NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_STREAMING_GOAL", false, false, false, false);
			Function_443(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && STREAMING_IS_WORLD_LOADED_PRIORITY(4))
			{
				if (Function_395(2, 1, 0x3f800000))
				{
					Function_888();
					NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_POST_STREAMING", false, false, false, false);
					Function_443(2);
				}
			}
			else
			{
				Function_17();
				if (!HUD_IS_FADED())
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			break;
		
		case 0x00000002:
			if (NET_IS_SESSION_HOST())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 6);
				Function_887();
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
			Function_883();
			Function_881();
			NET_OBJECT_REPLICATION_MODE_START(17, 4);
			if (!IS_OBJECT_VALID(CREATE_PROP_IN_LAYOUT(Local_72, "CaveIn01Prop", "$/fragments/p_gen_caveIn02x", -4475.838f, 1.716f, 3147.433f, 0.0f, 312.318f, 0.0f, 1)))
			{
				LOG_ERROR("Failed to create cave-in prop");
			}
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_880();
			Function_548(&bLocal_746, 4.0f);
			NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_443(3);
			break;
		
		case 0x00000003:
			if (Function_564(&bLocal_746))
			{
				if (Function_868())
				{
					Function_867();
					STREAMING_UNLOAD_SCENE();
					STREAMING_RELEASE_MAIN_POI();
					if (!iLocal_728)
					{
						Function_857();
					}
					NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_POST_CUTSCENE", false, false, false, false);
					Function_443(4);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_395(6, 1, 0x3f800000))
			{
				HUD_FADE_IN(2.0f, 1065353216);
				CAMERA_RESET(0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_TIME_OF_DAY(Global_63400);
				Function_541(0, 0);
				SET_TIME_ACCELERATION(0.0f);
				Function_856(&bLocal_680);
				Function_26(&bLocal_406, 0);
				Function_890(1);
				NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
				Function_443(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_661(&Global_78578 + 96);
				}
				Function_565("GAP_CO_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_443(7);
			}
			break;
		
		case 0x00000007:
			if (Function_827(Local_72, &Global_83591 + 276, 1, 1) != 0)
			{
				Function_826(&Local_72 + 240);
				Function_500(&uLocal_705, 180.0f);
				Function_548(&bLocal_683, 3.0f);
				iLocal_686 = 0;
				NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
				Function_443(8);
			}
			break;
		
		case 0x00000008:
			Function_811();
			Function_807();
			Function_806();
			if (Function_12(iLocal_727, 524288))
			{
				if (Function_395(106, 1, 0x3f800000))
				{
					Function_805();
					NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to GID_COMPLETE", false, false, false, false);
					Function_443(106);
				}
			}
			else
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					if ((IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_376) && IS_ACTOR_ON_GROUND(Function_41())) && IS_ACTOR_ALIVE(Function_41()))
					{
						Function_9(&iLocal_727, 524288);
						Function_804();
					}
				}
				Function_17();
			}
			break;
		
		case 0x0000006A:
			if (Function_323(&bLocal_406))
			{
				Function_185();
			}
			Function_662(0);
			STREAMING_LOAD_BOUNDS(-4436.32f, -0.644f, 3146.024f, 60.0f, 1);
			Function_345(&bLocal_680);
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_ALIVE(Function_41()))
				{
					Function_9(&Local_594 + 16, 1);
				}
			}
			Local_594 = Function_150(29);
			bLocal_754 = CREATE_OBJECT_ITERATOR(Local_72);
			if (Function_803() == 0)
			{
				Function_9(&Local_594 + 16, 8);
			}
			DESTROY_ITERATOR(bLocal_754);
			Function_802();
			NET_LOG(bLocal_687, "Mission Stage01", "Transitioning to SID_SECOND_STAGE: GID_INITIALIZE", false, false, false, false);
			iLocal_359 = 1;
			Function_443(0);
			break;
	}
	return;
}

void Function_802() //Position: 0x1EA7F / 125567
{
	Function_805();
	return;
}

int Function_803() //Position: 0x1EA88 / 125576
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ITERATOR_VALID(bLocal_754))
	{
		LOG_ERROR("Failed to create iterator");
		return 4294967295;
	}
	OBJECT_ITERATOR_RESET(bLocal_754);
	ITERATE_IN_LAYOUT(bLocal_754, Local_72);
	ITERATE_ON_OBJECT_TYPE(bLocal_754, 15);
	iVar0 = 0;
	bVar1 = START_OBJECT_ITERATOR(bLocal_754);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (GET_ACTOR_FACTION(bVar2) == 19)
				{
					if (STRING_CONTAINS_STRING(GET_ACTOR_NAME(bVar2), "s01_"))
					{
						iVar0++;
					}
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bLocal_754);
	}
	return iVar0;
}

void Function_804() //Position: 0x1EB28 / 125736
{
	bool bVar0;
	
	NET_LOG(bLocal_687, "GAPco Stage01", "I picked up a bag", false, false, false, false);
	bVar0 = GET_LOCAL_SLOT();
	NET_SCRIPTMSG_SEND(3, 39, &bVar0, 1, 1);
	return;
}

void Function_805() //Position: 0x1EB6C / 125804
{
	Function_567(bLocal_721);
	return;
}

void Function_806() //Position: 0x1EB78 / 125816
{
	bool bVar0;
	
	if (Function_564(&bLocal_683))
	{
		switch (iLocal_686)
		{
			case 0x00000000:
				bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner");
				iLocal_686 = 1;
				break;
			
			case 0x00000001:
				bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner");
				iLocal_686 = 0;
				break;
		}
		Function_548(&bLocal_683, 0.5f);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(bVar0, 180.0f);
			}
		}
	}
	return;
}

void Function_807() //Position: 0x1EC04 / 125956
{
	Function_810();
	Function_808();
	return;
}

void Function_808() //Position: 0x1EC10 / 125968
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_dyn_2");
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		return;
	}
	if (_GET_AMMO_AMOUNT(bVar0, GET_AMMO_ENUM(4), 1) > 1.0f && !Function_12(iLocal_727, 0x10000000))
	{
		Function_809(&bVar0, 24, 2.0f);
		Function_9(&iLocal_727, 0x10000000);
	}
	else if (_GET_AMMO_AMOUNT(bVar0, GET_AMMO_ENUM(24), 1) > 1.0f && Function_12(iLocal_727, 0x10000000))
	{
		Function_809(&bVar0, 4, 6.0f);
		Function_6(&iLocal_727, 0x10000000);
	}
	return;
}

void Function_809(bool bParam0, bool bParam1, float fParam2) //Position: 0x1EC9D / 126109
{
	if (!IS_ACTOR_VALID(*bParam0))
	{
		LOG_ERROR("DISPENSE_AMMO_TO_SCRIPT_CONTROLLED_THROWER - Invalid actor");
		return;
	}
	MAKE_ACTOR_READY_FOR_ACTION(*bParam0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(*bParam0);
	GIVE_WEAPON_TO_ACTOR(*bParam0, bParam1, 0, 1, 1);
	_SET_ACTOR_INFINITE_AMMO_FLAG(*bParam0, GET_AMMO_ENUM(bParam1), false);
	_SET_ACTOR_AMMO_OF_TYPE(*bParam0, GET_AMMO_ENUM(bParam1), fParam2, 0);
	ACTOR_PUT_WEAPON_IN_HAND(*bParam0, bParam1, 1);
	MAKE_ACTOR_READY_FOR_ACTION(*bParam0, 1);
	return;
}

void Function_810() //Position: 0x1ED33 / 126259
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_dyn_1");
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		return;
	}
	if (_GET_AMMO_AMOUNT(bVar0, GET_AMMO_ENUM(4), 1) > 1.0f && !Function_12(iLocal_727, 0x8000000))
	{
		Function_809(&bVar0, 24, 2.0f);
		Function_9(&iLocal_727, 0x8000000);
	}
	else if (_GET_AMMO_AMOUNT(bVar0, GET_AMMO_ENUM(24), 1) > 1.0f && Function_12(iLocal_727, 0x8000000))
	{
		Function_809(&bVar0, 4, 6.0f);
		Function_6(&iLocal_727, 0x8000000);
	}
	return;
}

void Function_811() //Position: 0x1EDC0 / 126400
{
	Function_823();
	Function_821();
	Function_819();
	Function_817();
	Function_815();
	Function_812();
	return;
}

void Function_812() //Position: 0x1EDD8 / 126424
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12(iLocal_727, 64))
	{
		bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner");
		bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner");
		if (((Function_12(iLocal_727, 2) || Function_814(bVar0)) || Function_814(bVar1)) || Function_680(Local_72.f_236))
		{
			Function_813();
			Function_9(&iLocal_727, 64);
		}
	}
	return;
}

void Function_813() //Position: 0x1EE49 / 126537
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 59, &uVar0, 1, 1);
	return;
}

bool Function_814(bool bParam0) //Position: 0x1EE5A / 126554
{
	if ((IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(Function_41())) && Function_360(GET_LOCAL_SLOT()) < 0)
	{
		return Function_682(Function_41(), bParam0, 1, 0, 1, 25.0f);
	}
	return 0;
}

void Function_815() //Position: 0x1EE8A / 126602
{
	if (!Function_12(iLocal_727, 8))
	{
		if (((!IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_356) || Function_12(iLocal_727, 32)) || Function_12(iLocal_727, 4)) || Function_680(Local_72.f_236))
		{
			Function_816();
			Function_9(&iLocal_727, 8);
		}
	}
	return;
}

void Function_816() //Position: 0x1EECF / 126671
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 58, &uVar0, 1, 1);
	return;
}

void Function_817() //Position: 0x1EEE0 / 126688
{
	if (!Function_12(iLocal_727, 16))
	{
		if ((Function_12(iLocal_727, 2) || Function_12(iLocal_727, 32)) || Function_680(Local_72.f_232))
		{
			Function_818();
			Function_9(&iLocal_727, 16);
		}
	}
	return;
}

void Function_818() //Position: 0x1EF18 / 126744
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 57, &uVar0, 1, 1);
	return;
}

void Function_819() //Position: 0x1EF29 / 126761
{
	if (!Function_12(iLocal_727, 32))
	{
		if ((Function_12(iLocal_727, 2) || IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_368)) || Function_680(Local_72.f_240))
		{
			Function_820();
		}
	}
	return;
}

void Function_820() //Position: 0x1EF5C / 126812
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 56, &uVar0, 1, 1);
	return;
}

void Function_821() //Position: 0x1EF6D / 126829
{
	if (!Function_12(iLocal_727, 2))
	{
		if ((Function_498(&bLocal_743) || IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_360)) || Function_680(Local_72.f_228))
		{
			Function_822();
			Function_9(&iLocal_727, 2);
		}
	}
	return;
}

void Function_822() //Position: 0x1EFA5 / 126885
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 55, &uVar0, 1, 1);
	return;
}

void Function_823() //Position: 0x1EFB6 / 126902
{
	if (!Function_12(iLocal_727, 4))
	{
		if (((((Function_498(&bLocal_740) || Function_12(iLocal_727, 8)) || IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_364)) || Function_680(Local_72.f_224)) || Function_825(Local_72.f_360, Local_72)) || Function_825(Local_72.f_364, Local_72))
		{
			Function_824();
			Function_9(&iLocal_727, 4);
		}
	}
	return;
}

void Function_824() //Position: 0x1F00D / 126989
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 54, &uVar0, 1, 1);
	return;
}

var Function_825(bool bParam0, bool bParam1) //Position: 0x1F01E / 127006
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_IN_LAYOUT(bVar1, GET_EVENT_LAYOUT());
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECT_VALID(bVar2))
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_EVENT_FROM_OBJECT(bVar2);
			if (IS_EVENT_VALID(bVar3))
			{
				switch (GET_EVENT_TYPE(bVar3))
				{
					case 0x00000005:
						if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(bVar3), bParam0))
						{
							iVar0 = 1;
						}
						break;
					}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

void Function_826(int iParam0) //Position: 0x1F090 / 127120
{
	if (SQUAD_IS_VALID(*iParam0))
	{
		Function_441(iParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  DESTROY_SQUAD was passed an invalid squad");
	}
	return;
}

int Function_827(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x1F0DE / 127198
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	char* cVar17[64];
	char* cVar33[64];
	bool bVar49;
	bool bVar50;
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_855()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_854()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_854(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_58(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_853(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_279(bVar14);
				vVar7 = { StackVal, StackVal, Function_279(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_300(bVar14);
				vVar10 = { StackVal, StackVal, Function_300(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_851(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_850());
							if (Function_849(bVar5))
							{
								if (Function_246((*iParam1 + 228)[bVar52]))
								{
									Function_832(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_829(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
									if (bParam2)
									{
										SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bVar16), GET_WEAPON_DISPLAY_NAME((*iParam1 + 228)[bVar52]));
									}
								}
								else
								{
									cVar33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar17 };
									stradd(&cVar33, " is using undefined pickup slot #", 64);
									stradd(&cVar33, I2STR(bVar5), 64);
									bVar49 = true;
								}
							}
							break;
						
						case 0x00000005:
							if ((iParam1 + 228)->f_224 < 0.0f)
							{
								Function_832(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_828(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_832(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
							break;
					}
					if (!bVar49)
					{
						ADD_OBJECT_TO_OBJECTSET(bVar15, bVar1);
					}
				}
			}
		}
		DESTROY_OBJECT(bVar14);
		bVar6++;
	}
	CLEAN_OBJECTSET(bVar0);
	if (GET_OBJECTSET_SIZE(bVar0) == 0)
	{
		DESTROY_OBJECTSET(bVar0);
		bVar50 = GET_LOCAL_SLOT();
		NET_SCRIPTMSG_SEND(1, 19, &bVar50, 1, 1);
		return 1;
	}
	return 0;
}

var Function_828() //Position: 0x1F312 / 127762
{
	return "XPBonus";
}

void Function_829(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x1F322 / 127778
{
	bool bVar0;
	
	if (Function_246(Param1))
	{
		bVar0 = Function_831(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_830(), bVar0);
	}
}

var Function_830() //Position: 0x1F348 / 127816
{
	return "PackedWeapon";
}

var Function_831(struct<5> Param0) //Position: 0x1F35D / 127837
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_243())) || SHIFT_LEFT(bParam2, Function_243() + 8));
}

void Function_832(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x1F37B / 127867
{
	Function_841(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_837(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_836(), Function_835(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_834(), Function_833(iParam13, iParam14));
}

var Function_833(var uParam0, bool bParam1) //Position: 0x1F3CC / 127948
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_834() //Position: 0x1F3DC / 127964
{
	return "PackedGrass";
}

var Function_835(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1F3F0 / 127984
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

var Function_836() //Position: 0x1F415 / 128021
{
	return "PackedMetadata";
}

void Function_837(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1F42C / 128044
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_830(), &uVar5))
				{
					Function_241(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_840();
				vVar0 = { StackVal, StackVal, Function_840() };
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
				Function_839();
				vVar0 = { StackVal, StackVal, Function_839() };
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
				Function_838();
				vVar0 = { StackVal, StackVal, Function_838() };
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

vector3 Function_838() //Position: 0x1F557 / 128343
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_839() //Position: 0x1F568 / 128360
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_840() //Position: 0x1F579 / 128377
{
	return 0.0f, 0.158f, -0.163f;
}

int Function_841(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x1F58A / 128394
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_848();
			Function_839();
			vVar1 = { StackVal, StackVal, Function_839() };
			break;
		
		case 0x00000001:
			bVar0 = Function_847();
			Function_840();
			vVar1 = { StackVal, StackVal, Function_840() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_846();
			Function_838();
			vVar1 = { StackVal, StackVal, Function_838() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_845(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_843(Function_845()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_842(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_842() //Position: 0x1F68E / 128654
{
	return "MPItemGiver";
}

struct<32> Function_843(bool bParam0) //Position: 0x1F6A2 / 128674
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_844("0", &cVar8, ""), 4);
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

struct<32> Function_844(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1F70C / 128780
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_845() //Position: 0x1F72B / 128811
{
	return "PBox_";
}

var Function_846() //Position: 0x1F739 / 128825
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_847() //Position: 0x1F75F / 128863
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_848() //Position: 0x1F787 / 128903
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_849(bool bParam0) //Position: 0x1F7AD / 128941
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_850() //Position: 0x1F7BD / 128957
{
	return "ID";
}

bool Function_851(bool bParam0, int iParam1) //Position: 0x1F7C8 / 128968
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_12((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_852())
			{
				return 0;
			}
			return !Function_12((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_12((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_852() //Position: 0x1F81D / 129053
{
	return Function_45(Global_79962, 1024);
}

var Function_853() //Position: 0x1F82D / 129069
{
	return "Type";
}

var Function_854() //Position: 0x1F83A / 129082
{
	return "PickupsSet";
}

var Function_855() //Position: 0x1F84D / 129101
{
	return "PickupFlagsSet";
}

void Function_856(bool bParam0) //Position: 0x1F864 / 129124
{
	if (!Function_220(bParam0))
	{
		Function_549(bParam0, 0.0f);
	}
	return;
}

void Function_857() //Position: 0x1F879 / 129145
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_866();
	Function_865();
	Function_864();
	Function_863();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_862(&Local_72 + 224);
	Function_862(&Local_72 + 228);
	Function_862(&Local_72 + 232);
	Function_859(&Local_72 + 236, iLocal_776);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_224, 0, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_72.f_364, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_228, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_232, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_236, 0, 1, 4294967295);
	TASK_CROUCH(false, -1.0f);
	Function_521(&Local_72 + 236);
	Function_858();
	Function_9(&iLocal_727, 1);
	return;
}

void Function_858() //Position: 0x1F90F / 129295
{
	bool bVar0[2];
	
	if (!NET_IS_SESSION_HOST())
	{
		return;
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 6);
	bVar0[0] = CREATE_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner", 513, *(&Local_72 + 980), *(&Local_72 + 980 + 12));
	bVar0[1] = CREATE_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner", 513, *(&Local_72 + 1004), *(&Local_72 + 1004 + 12));
	NET_OBJECT_REPLICATION_MODE_END(15);
	NET_ACTOR_SET_SCRIPT_INT(bVar0[0], 101);
	NET_ACTOR_SET_SCRIPT_INT(bVar0[1], 102);
	Function_205(&(bVar0[0]), iLocal_777);
	Function_205(&(bVar0[1]), iLocal_777);
	return;
}

void Function_859(var uParam0, int iParam1) //Position: 0x1F9B9 / 129465
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		LOG_ERROR("SETUP_STANDARD_MP_SNIPER_SQUAD - Invalid squad");
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_860(&bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_860(var uParam0, int iParam1) //Position: 0x1FA30 / 129584
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		Function_861(*uParam0, 25, "XP_Class_Sniper");
		switch (iParam1)
		{
			case 0x00000000:
				Function_207(*uParam0);
				Function_202(uParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 15, 1);
				Function_201(uParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_207(*uParam0);
				Function_202(uParam0, 1.0f);
				Function_201(uParam0, 9, 5);
				break;
			
			case 0x00000002:
				Function_207(*uParam0);
				Function_202(uParam0, 1.0f);
				Function_201(uParam0, 12, 5);
				break;
			
			case 0x00000003:
				Function_207(*uParam0);
				Function_202(uParam0, 2.0f);
				Function_201(uParam0, 20, 5);
				break;
			
			case 0x00000004:
				Function_207(*uParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*uParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*uParam0, 125.0f, 1);
				Function_202(uParam0, 3.0f);
				Function_201(uParam0, 19, 6);
				break;
			
			case 0x00000005:
				Function_207(*uParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*uParam0, 90.0f);
				SET_ACTOR_VISION_MAX_RANGE(*uParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*uParam0, 1);
				Function_202(uParam0, 4.0f);
				Function_201(uParam0, 14, 7);
				break;
		}
		Function_189(uParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SNIPER was passed an invalid actor");
	}
	return;
}

int Function_861(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1FB9E / 129950
{
	if (!DECOR_SET_INT(bParam0, "nKillBonus", bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2))
	{
		if (!DECOR_SET_STRING(bParam0, "KillBonusClass", bParam2))
		{
			return 0;
		}
	}
	return 1;
}

void Function_862(var uParam0) //Position: 0x1FBE4 / 130020
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  DELETE_ALL_WEAPONS_FROM_SQUAD was passed an invalid squad");
	}
	return;
}

void Function_863() //Position: 0x1FC70 / 130160
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_224 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage1_tents"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_tents_1", 505, -4471.208f, 8.825694f, 3273.569f, 0.0f, 273.3658f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_224);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_tents_2", 506, -4471.021f, 8.710755f, 3258.582f, 0.0f, 259.6794f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_224);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_tents_3", 507, -4457.147f, 8.71971f, 3260.798f, 0.0f, 266.273f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_224);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_tents_4", 508, -4430.344f, 8.883011f, 3254.422f, 0.0f, 123.617f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_224);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_tents_5", 509, -4463.997f, 8.169493f, 3291.997f, 0.0f, 187.6944f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_224);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_864() //Position: 0x1FDE1 / 130529
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_228 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage1_house"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_house_1", 505, -4454.256f, 16.12594f, 3217.642f, 0.0f, 210.7335f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_228);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_house_2", 506, -4455.622f, 9.152136f, 3229.347f, 0.0f, 211.2529f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_228);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_house_3", 507, -4451.328f, 12.97285f, 3224.923f, 0.0f, 214.0457f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_228);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s01_house_4", 508, -4451.456f, 9.284151f, 3226.688f, 0.0f, 209.013f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_228);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_865() //Position: 0x1FF06 / 130822
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_236 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage1_snipers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_sni_1", 509, -4400.749f, 25.41711f, 3269.242f, 0.0f, 54.65957f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_236);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_sni_2", 508, -4420.721f, 18.01136f, 3215.37f, 0.0f, 167.9323f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_236);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_866() //Position: 0x1FFAD / 130989
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_232 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage1_dynamite"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_dyn_1", 514, -4448.033f, 11.32901f, 3212.047f, 0.0f, 220.1596f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_232);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_dyn_2", 514, -4424.678f, 8.655488f, 3236.0f, 0.0f, 97.92345f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_232);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_867() //Position: 0x20058 / 131160
{
	return;
}

bool Function_868() //Position: 0x2005E / 131166
{
	bool bVar0;
	var uVar1;
	
	Function_517(&Local_368, 1);
	bVar0 = false;
	if (((Local_368 != 1001 || Local_368 != 1002) || Local_368 != 1003) || Local_368 != 1004)
	{
		bVar0 = Function_878();
	}
	switch (Local_368)
	{
		case 0x000003E8:
			iLocal_1157 = 15;
			Function_421(&Local_368 + 4);
			Function_418();
			Function_414(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_368.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_368.f_16 = Function_869(Local_72, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_368.f_16))
				{
				}
				else
				{
					LOG_ERROR("GapCoop_Cutscene_1 - Failed to create GapCoop_Cutscene_1_cutscene");
				}
			}
			Local_368 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_368.f_16), false))
			{
				Function_430(Global_34573, 1, 1);
				Local_368 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_368 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_351(&Local_368 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Local_368 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_421(&Local_368 + 4);
				Local_368 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_368.f_16))
				{
					DESTROY_OBJECT(Local_368.f_16);
				}
				Local_368 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_368 = 1104;
			}
			break;
	}
	return 0;
}

var Function_869(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x20276 / 131702
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 7, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GapCoop_Cutscene_1", 7, 1);
	}
	Function_870(&bVar0);
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

void Function_870(int iParam0) //Position: 0x202F4 / 131828
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_877(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_876(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_875(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_874(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_873(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_872(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 6);
	Function_871(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(uVar1, 0.0f, 2.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 4, 5, 9.0f, 3, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 1.0f, 4);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(uVar1, 0.0f, 1.0f, 0);
	return;
}

void Function_871(int iParam0) //Position: 0x203B1 / 132017
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4472.692f, 12.67028f, 3351.228f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.109015f, -1.563943f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_872(int iParam0) //Position: 0x2041B / 132123
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4474.121f, 12.81349f, 3351.2f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.094921f, -1.484946f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_873(int iParam0) //Position: 0x20485 / 132229
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4474.234f, 12.81763f, 3351.736f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.079802f, -0.583804f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_874(int iParam0) //Position: 0x204EF / 132335
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4435.693f, 10.37199f, 3235.072f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.041467f, -0.105212f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_875(int iParam0) //Position: 0x20559 / 132441
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4435.072f, 10.26278f, 3232.519f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.041467f, -0.105212f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_876(int iParam0) //Position: 0x205C3 / 132547
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4421.477f, 9.476915f, 3179.663f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.044159f, 2.683116f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_877(var uParam0) //Position: 0x20626 / 132646
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4420.407f, 9.348205f, 3176.914f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.014026f, 2.679402f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_878() //Position: 0x20689 / 132745
{
	switch (iLocal_1157)
	{
		case 0x0000000F:
			if (Function_351(&Local_368 + 4) < 3.0f)
			{
				Function_879();
				iLocal_1157 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_351(&Local_368 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_879() //Position: 0x206D7 / 132823
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene1_v1_AA", "WG_Scene1_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene1_v1_AB", "WG_Scene1_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "WG_Scene1_v1_AC", "WG_Scene1_v1_AC", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_880() //Position: 0x20783 / 132995
{
	NET_OBJECT_REPLICATION_MODE_START(35, 4);
	bLocal_721 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Local_72, "Gaptooth_Mine_Gateway_Stage01", *(&Local_72 + 1076), *(&Local_72 + 1076 + 12), 5.0f, 5.0f, 5.0f, 3, Function_41(), 2, 4294967295, 0, 1, 1);
	NET_OBJECT_REPLICATION_MODE_END(35);
	ADD_BLIP_FOR_OBJECT(bLocal_721, 330, -1.0f, 2, 0);
	return;
}

void Function_881() //Position: 0x207E5 / 133093
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_1");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_2");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_3");
	vVar3 = { -4427.156f, 8.571184f, 3191.303f };
	vVar6 = { -4424.84f, 8.385797f, 3186.087f };
	vVar9 = { -4421.297f, 8.249219f, 3185.501f };
	bVar12 = LOCATE_GRINGO_OF_TYPE("stand_minerock_w_any", &vVar3, 1.0f, 1);
	bVar13 = LOCATE_GRINGO_OF_TYPE("stand_minerock_w_any", &vVar6, 1.0f, 1);
	bVar14 = LOCATE_GRINGO_OF_TYPE("stand_minerock_w_any", &vVar9, 1.0f, 1);
	Function_882(bVar0, bVar12);
	Function_882(bVar1, bVar13);
	Function_882(bVar2, bVar14);
	return;
}

void Function_882(bool bParam0, bool bParam1) //Position: 0x208D2 / 133330
{
	if (IS_ACTOR_VALID(bParam0) && IS_GRINGO_VALID(bParam1))
	{
		SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(bParam1), "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bParam0, bParam1, "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(bParam0, 1);
	}
	return;
}

void Function_883() //Position: 0x20919 / 133401
{
	bool bVar0;
	bool bVar1;
	
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_72, "gapco_gatling_gun_1", "p_gen_gatlingGun01x", *(&Local_72 + 1028), *(&Local_72 + 1028 + 12), 1);
	bVar1 = CREATE_PROP_IN_LAYOUT(Local_72, "gapco_gatling_gun_2", "p_gen_gatlingGun01x", *(&Local_72 + 1052), *(&Local_72 + 1052 + 12), 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_884(bVar0);
	Function_884(bVar1);
	return;
}

int Function_884(bool bParam0) //Position: 0x209BE / 133566
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return "";
	}
	return Function_885(bVar0);
}

int Function_885(bool bParam0) //Position: 0x209F9 / 133625
{
	bool bVar0;
	
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam0), "cannon"))
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 523, 0f, 2, 0);
		}
		else
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 524, 0f, 2, 0);
		}
	}
	Function_886(bVar0);
	return bVar0;
}

void Function_886(bool bParam0) //Position: 0x20A47 / 133703
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

void Function_887() //Position: 0x20A5A / 133722
{
	vector3 vVar0;
	vector3 vVar3;
	
	NET_LOG(bLocal_687, "GAPco Stage01", "Creating mine cart", false, false, false, false);
	iLocal_693 = TRAIN_CREATE_NEW_TRAIN(1, "rail__mctrack_01x", 0);
	if (iLocal_693 > 0)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_693, 1203);
		bLocal_694 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_693, 0));
		if (IS_ACTOR_VALID(bLocal_694))
		{
			NET_ACTOR_SET_SCRIPT_INT(bLocal_694, 99);
			vVar0 = { -4431.462f, 0.5465281f, 3124.303f };
			vVar3 = { -1.0f, 0.0f, 0.0f };
			TRAIN_SET_POSITION_DIRECTION(iLocal_693, &vVar0, &vVar3);
			SET_ALLOW_JACK(bLocal_694, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_694), 1);
		}
		else
		{
			LOG_ERROR("Failed to add MineCart to single car train!");
		}
	}
	else
	{
		LOG_ERROR("Failed to create single car train for MineCart!");
	}
	return;
}

void Function_888() //Position: 0x20B7A / 134010
{
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Function_889();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_862(&Local_72 + 240);
	return;
}

void Function_889() //Position: 0x20B95 / 134037
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_240 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage1_railhouse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_1", 505, -4426.694f, 8.564426f, 3191.551f, 0.0f, 190.4681f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_240);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_2", 506, -4423.552f, 8.135778f, 3184.257f, 0.0f, 161.0985f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_240);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_3", 507, -4422.042f, 8.263395f, 3185.44f, 0.0f, 162.8862f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_240);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_890(int iParam0) //Position: 0x20C7A / 134266
{
	if (!IS_LAYOUTREF_VALID(bLocal_688))
	{
		bLocal_688 = CREATE_LAYOUT(Function_52());
	}
	if (!IS_OBJECT_VALID(bLocal_689))
	{
		bLocal_689 = CREATE_WORLD_SECTOR(bLocal_688, "gaptoothBreach");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_689) && (IS_ACTOR_IN_VOLUME(Function_41(), Local_72.f_392) || iParam0))
	{
		Function_891(bLocal_688, "pot", Local_72.f_392);
		Function_891(bLocal_688, "bottle", Local_72.f_392);
		Function_891(bLocal_688, "jug", Local_72.f_392);
		Function_891(bLocal_688, "crate04", Local_72.f_392);
		Function_891(bLocal_688, "crate13", Local_72.f_392);
		Function_891(bLocal_688, "plank", Local_72.f_392);
		Function_891(bLocal_688, "bucket", Local_72.f_392);
		Function_891(bLocal_688, "jar", Local_72.f_392);
		Function_891(bLocal_688, "debris", Local_72.f_392);
		Function_891(bLocal_688, "boiler", Local_72.f_392);
		Function_891(bLocal_688, "shovel", Local_72.f_392);
		Function_891(bLocal_688, "pan", Local_72.f_392);
		Function_891(bLocal_688, "hammer", Local_72.f_392);
		Function_891(bLocal_688, "milkcan", Local_72.f_392);
		Function_891(bLocal_688, "basin", Local_72.f_392);
	}
	return;
}

void Function_891(bool bParam0, bool bParam1, bool bParam2) //Position: 0x20DF0 / 134640
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_52(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_892() //Position: 0x20E49 / 134729
{
	return;
}

void Function_893() //Position: 0x20E4F / 134735
{
	UI_EXIT("NetTimer");
	Function_654(0.0f);
	iLocal_730 = 0;
	return;
}

void Function_894() //Position: 0x20E6B / 134763
{
	switch (iLocal_756)
	{
		case 0x00000000:
			if (iLocal_360 != 3 || iLocal_360 != 5)
			{
				Function_895(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_360 != 4 || iLocal_360 != 6)
			{
				Function_895(2);
			}
			break;
		
		case 0x00000002:
			if (iLocal_360 != 7 || iLocal_360 != 8)
			{
				if (((((Function_12(iLocal_727, 2) || Function_12(iLocal_727, 4)) || Function_12(iLocal_727, 8)) || Function_12(iLocal_727, 16)) || Function_12(iLocal_727, 32)) || Function_12(iLocal_727, 64))
				{
					Function_895(3);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_360 != 8 || iLocal_360 != 106)
			{
				if (Function_12(iLocal_727, 524288))
				{
					Function_895(4);
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

void Function_895(int iParam0) //Position: 0x20F34 / 134964
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_419("FTR_SONG_06", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 0;
			iLocal_756 = iParam0;
			break;
		
		case 0x00000002:
			Function_419("FTR_SONG_06", 6, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 6;
			iLocal_756 = iParam0;
			break;
		
		case 0x00000003:
			Function_419("FTR_SONG_06", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 34;
			iLocal_756 = iParam0;
			break;
		
		case 0x00000000:
		case 0x00000004:
			Function_419("FTR_SONG_06", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_755 = 0;
			iLocal_756 = iParam0;
			break;
	}
	return;
}

void Function_896() //Position: 0x20FFD / 135165
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_898();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_897();
	}
	Function_557(&iLocal_403, 1920.0f, "GAP_CO_obj01", 4.0f, 2, 0);
	return;
}

void Function_897() //Position: 0x21033 / 135219
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
		Function_421(&iLocal_400);
	}
	return;
}

void Function_898() //Position: 0x2105A / 135258
{
	if (!Function_355(&iLocal_400))
	{
		Function_353(&iLocal_400);
	}
	if (Function_351(&iLocal_400) <= 1.0f)
	{
	}
	return;
}

void Function_899() //Position: 0x2107B / 135291
{
	switch (iLocal_360)
	{
		case 0x00000006:
			Function_1025();
			Function_1022();
			Function_657(&bLocal_406, Local_72.f_332);
			Function_1021(&bLocal_406, 0);
			bLocal_717 = CREATE_EVENT_TRAP("gapco_actor_replication_trap", 77, Local_72);
			EVENT_TRAP_STORE_EVENTS(bLocal_717, 1);
			bLocal_718 = CREATE_EVENT_TRAP("gapco_train_replication_trap", 77, Local_72);
			EVENT_TRAP_STORE_EVENTS(bLocal_718, 1);
			bLocal_719 = FIND_NAMED_LAYOUT("train_layout");
			iLocal_697 = (3 * GET_NUM_PLAYERS());
			Function_978(&bLocal_406);
			REGISTER_HOST_BROADCAST_VARIABLES(&Local_813, 131);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_599, 81);
			Function_977();
			Function_975();
			Function_972(&bLocal_406, 145597);
			Function_26(&bLocal_406, 1);
			iLocal_360 = 7;
			break;
		
		case 0x00000007:
			if (Function_969())
			{
				iLocal_360 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_155())
			{
				iLocal_793 = 4;
			}
			Function_968(iLocal_793);
			iLocal_360 = 0;
			iLocal_359 = 0;
			Local_368 = 1000;
			Function_902();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			NET_LOG(bLocal_687, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", false, false, false, false);
			ENABLE_CHILD_SECTOR("mp_gap_mineLid01x");
			Function_901();
			if (iLocal_728 && NET_IS_SESSION_HOST())
			{
				Function_900();
			}
			break;
	}
	return;
}

void Function_900() //Position: 0x21211 / 135697
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 24, &uVar0, 1, 1);
	return;
}

void Function_901() //Position: 0x21222 / 135714
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { -4463.792f, 29.054f, 3133.568f };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/old_winch", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		GRINGO_ALLOW_ACTIVATION(bVar3, false);
	}
	return;
}

void Function_902() //Position: 0x21286 / 135814
{
	NET_SCRIPTMSG_REGISTER_HANDLER(32, 144529);
	NET_SCRIPTMSG_REGISTER_HANDLER(33, 144509);
	NET_SCRIPTMSG_REGISTER_HANDLER(15, 144488);
	NET_SCRIPTMSG_REGISTER_HANDLER(35, 144168);
	NET_SCRIPTMSG_REGISTER_HANDLER(36, 144147);
	NET_SCRIPTMSG_REGISTER_HANDLER(39, 144059);
	NET_SCRIPTMSG_REGISTER_HANDLER(41, 143574);
	NET_SCRIPTMSG_REGISTER_HANDLER(44, 143550);
	NET_SCRIPTMSG_REGISTER_HANDLER(45, 143525);
	NET_SCRIPTMSG_REGISTER_HANDLER(46, 143452);
	NET_SCRIPTMSG_REGISTER_HANDLER(47, 143256);
	NET_SCRIPTMSG_REGISTER_HANDLER(48, 139158);
	NET_SCRIPTMSG_REGISTER_HANDLER(49, 139123);
	NET_SCRIPTMSG_REGISTER_HANDLER(54, 138974);
	NET_SCRIPTMSG_REGISTER_HANDLER(55, 138841);
	NET_SCRIPTMSG_REGISTER_HANDLER(56, 138565);
	NET_SCRIPTMSG_REGISTER_HANDLER(57, 137623);
	NET_SCRIPTMSG_REGISTER_HANDLER(58, 137157);
	NET_SCRIPTMSG_REGISTER_HANDLER(59, 136805);
	NET_SCRIPTMSG_REGISTER_HANDLER(60, 136786);
	NET_SCRIPTMSG_REGISTER_HANDLER(61, 136760);
	NET_SCRIPTMSG_REGISTER_HANDLER(62, 136734);
	NET_SCRIPTMSG_REGISTER_HANDLER(24, 136712);
	NET_SCRIPTMSG_REGISTER_HANDLER(65, 136060);
	return;
}

void Function_903(bool bParam0) //Position: 0x2137C / 136060
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 4);
	Function_906();
	Function_904(vVar0.z);
	NET_LOG(bLocal_687, "GAPco Stage01", "Player %s has deposited a bag", I2STR(vVar0.x), false, false, false);
	return;
}

void Function_904(bool bParam0) //Position: 0x213D3 / 136147
{
	bool bVar0;
	
	bVar0 = (iLocal_697 - bParam0);
	if (bParam0 <= 0)
	{
		bVar0 = iLocal_697;
	}
	Global_56092[130] = bParam0;
	Global_56092[131] = bParam0;
	Global_56092[132] = bParam0;
	if (bVar0 >= 0)
	{
		if (bVar0 == 1)
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(-1.0f, "GAP_CO_bags_needed_s", Function_676(bVar0), false, 0, 0, 0, 2, 0, 0, 0);
		}
		else
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(-1.0f, "GAP_CO_bags_needed_p", Function_676(bVar0), false, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	else if (bVar0 != 0 && !Function_12(iLocal_727, 1048576))
	{
		Function_9(&iLocal_727, 1048576);
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_905();
	}
	else if (bVar0 <= 0)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		PRINT_OBJECTIVE_FORMAT(4.0f, "GAP_CO_bag_update_p", Function_676(bParam0), false, 0, 0, 0, 2, 0, 0, 0);
		Function_905();
	}
	Function_548(&bLocal_714, 45.0f);
	return;
}

void Function_905() //Position: 0x214DF / 136415
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 45, &uVar0, 1, 1);
	return;
}

void Function_906() //Position: 0x214F0 / 136432
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	var uVar10;
	
	if (!IS_OBJECT_VALID(bLocal_695))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Function_117();
		Function_117();
		bLocal_695 = CREATE_PROP_IN_LAYOUT(Local_72, "gapco_cart_rocks", Function_907(), Function_117(), Function_117(), 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_117();
	vVar0 = { StackVal, StackVal, Function_117() };
	fVar3 = 0.4f;
	fVar4 = 0.783448f;
	fVar5 = (fVar4 - fVar3);
	bVar7 = TO_FLOAT(Local_813.f_508);
	bVar8 = TO_FLOAT(18);
	fVar9 = (bVar7 / bVar8);
	fVar6 = (fVar3 + (fVar9 * fVar5));
	vVar0.y = fVar6;
	if (IS_ACTOR_VALID(bLocal_694))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_695, bLocal_694, 0);
		uVar10 = _GET_OBJECT_ATTACHMENT(bLocal_695);
		if (!IS_ATTACHMENT_VALID(uVar10))
		{
			Function_117();
			uVar10 = ATTACH_OBJECTS(bLocal_695, bLocal_694, "", vVar0, Function_117(), 4294967295);
		}
		else
		{
			SET_ATTACHMENT_LOCAL_OFFSET(uVar10, vVar0);
		}
	}
	else
	{
		LOG_ERROR("MineCartAttachRocks: mine cart invalid");
	}
	return;
}

bool Function_907() //Position: 0x215EA / 136682
{
	return "p_gen_rockGoldCart01x";
}

void Function_908(bool bParam0) //Position: 0x21608 / 136712
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	iLocal_728 = 1;
	Function_439();
	return;
}

void Function_909(bool bParam0) //Position: 0x2161E / 136734
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_9(&iLocal_727, 0x4000000);
	return;
}

void Function_910(bool bParam0) //Position: 0x21638 / 136760
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_9(&iLocal_727, 0x1000000);
	return;
}

void Function_911(bool bParam0) //Position: 0x21652 / 136786
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	iLocal_731 = 1;
	return;
}

void Function_912(bool bParam0) //Position: 0x21665 / 136805
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_915();
		Function_913();
	}
	Function_9(&iLocal_727, 64);
	return;
}

void Function_913() //Position: 0x2168C / 136844
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12(iLocal_727, 8192))
	{
		bVar0 = FIND_OBJECT_IN_LAYOUT(Local_72, "gapco_gatling_gun_2");
		bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_2_gunner");
		if (IS_ACTOR_VALID(bVar1) && IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_914(&bVar1, bVar0, &Local_72 + 1144);
			}
			Function_9(&iLocal_727, 8192);
		}
	}
	return;
}

void Function_914(bool bParam0, bool bParam1, var uParam2) //Position: 0x21702 / 136962
{
	bool bVar0;
	
	TASK_CLEAR(*bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, *uParam2, 4, 0, 1, 1, 0);
	TASK_USE_TURRET(0, bParam1, -1f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(*bParam0, 1);
	ADD_BLIP_FOR_ACTOR(*bParam0, 322, 0, 2, 0);
	return;
}

void Function_915() //Position: 0x2174F / 137039
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12(iLocal_727, 4096))
	{
		bVar0 = FIND_OBJECT_IN_LAYOUT(Local_72, "gapco_gatling_gun_1");
		bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "gapco_gg_1_gunner");
		if (IS_ACTOR_VALID(bVar1) && IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_914(&bVar1, bVar0, &Local_72 + 1140);
			}
			Function_9(&iLocal_727, 4096);
		}
	}
	return;
}

void Function_916(bool bParam0) //Position: 0x217C5 / 137157
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_917();
	}
	Function_9(&iLocal_727, 8);
	return;
}

void Function_917() //Position: 0x217E9 / 137193
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12(iLocal_727, 512))
	{
		Function_9(&iLocal_727, 512);
		SQUAD_GOALS_CLEAR(Local_72.f_236);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_72.f_236, 0, 1, 4294967295);
		TASK_CROUCH(false, -1.0f);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_72.f_236, true, Local_72.f_324, 4294967295);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_72.f_236, 2);
		Function_918(&Local_72 + 236);
		Function_497(&Local_72 + 236);
		if (!Function_155())
		{
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < 1)
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_72.f_236, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 15, 1);
				}
				bVar0++;
			}
		}
		Function_529(Local_72.f_236, 322, 3212836864);
	}
	return;
}

void Function_918(int iParam0) //Position: 0x21888 / 137352
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*iParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_919(&bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_919(int iParam0) //Position: 0x218CA / 137418
{
	SET_ACTOR_VISION_XRAY(*iParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(*iParam0, 150.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(*iParam0, 359.0f);
	Function_920(iParam0);
	return;
}

void Function_920(int iParam0) //Position: 0x218F6 / 137462
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					MEMORY_IDENTIFY(*iParam0, GET_SLOT_ACTOR(bVar0));
					MEMORY_REPORT_POSITION_AUTO(*iParam0, GET_SLOT_ACTOR(bVar0), 0);
					MEMORY_CONSIDER_AS(*iParam0, GET_SLOT_ACTOR(bVar0), 4);
				}
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  ACTOR_IDENTIFY_NET_PLAYERS was passed an invalid ACTOR");
	}
	return;
}

void Function_921(bool bParam0) //Position: 0x21997 / 137623
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_922();
	}
	Function_9(&iLocal_727, 16);
	return;
}

void Function_922() //Position: 0x219BB / 137659
{
	if (!Function_12(iLocal_727, 1024))
	{
		Function_9(&iLocal_727, 1024);
		Function_924(&Local_72 + 232, iLocal_775);
		SQUAD_GOALS_CLEAR(Local_72.f_232);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_72.f_232, true, Local_72.f_324, 4294967295);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_72.f_232, 2);
		Function_923(&Local_72 + 232, 24, 2.0f);
		Function_9(&iLocal_727, 0x8000000);
		Function_9(&iLocal_727, 0x10000000);
		Function_685(&Local_72 + 232, 0);
		Function_529(Local_72.f_232, 322, 3212836864);
	}
	return;
}

void Function_923(var uParam0, bool bParam1, float fParam2) //Position: 0x21A37 / 137783
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		LOG_ERROR("DISPENSE_AMMO_TO_SCRIPT_CONTROLLED_THROWER_SQUAD - Invalid squad");
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_809(&bVar1, bParam1, fParam2);
		}
		bVar0++;
	}
	return;
}

void Function_924(var uParam0, int iParam1) //Position: 0x21AC2 / 137922
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		LOG_ERROR("SETUP_STANDARD_MP_THROWER_SCRIPT_CONTROLLED_SQUAD - Invalid squad");
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_925(&bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_925(int iParam0, bool bParam1) //Position: 0x21B4C / 138060
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_203(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 10.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 0.5f);
				break;
			
			case 0x00000001:
				Function_203(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 20.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 1.0f);
				break;
			
			case 0x00000002:
				Function_200(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 30.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 2.0f);
				break;
			
			case 0x00000003:
				Function_196(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 40.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 3.0f);
				break;
			
			case 0x00000004:
				Function_196(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 4.0f);
				break;
			
			case 0x00000005:
				Function_196(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				Function_202(iParam0, 5.0f);
				break;
		}
		Function_189(iParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_THROWER_SCRIPT_CONTROLLED was passed an invalid actor");
	}
	return;
}

void Function_926(bool bParam0) //Position: 0x21D45 / 138565
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_927();
		Function_548(&bLocal_740, 30.0f);
	}
	Function_9(&iLocal_727, 32);
	return;
}

void Function_927() //Position: 0x21D74 / 138612
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_12(iLocal_727, 2048))
	{
		Function_9(&iLocal_727, 2048);
		Function_686(&Local_72 + 240, 12, 5, iLocal_778);
		SQUAD_GOALS_CLEAR(Local_72.f_240);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_72.f_240, 0);
		bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_1");
		bVar1 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_3");
		bVar2 = FIND_ACTOR_IN_LAYOUT(Local_72, "ns01_rai_3");
		TASK_CLEAR(bVar0);
		TASK_CLEAR(bVar1);
		TASK_CLEAR(bVar2);
		Function_928(&bVar0);
		Function_928(&bVar1);
		Function_928(&bVar2);
		Function_529(Local_72.f_240, 322, 3212836864);
	}
	return;
}

void Function_928(bool bParam0) //Position: 0x21E13 / 138771
{
	vector3 vVar0;
	bool bVar3;
	
	TASK_CLEAR(*bParam0);
	vVar0 = { -4428.109f, 8.723f, 3211.101f };
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(*bParam0, &vVar0, 5.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(*bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*bParam0, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	return;
}

void Function_929(bool bParam0) //Position: 0x21E59 / 138841
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_930();
	}
	Function_9(&iLocal_727, 2);
	return;
}

void Function_930() //Position: 0x21E7C / 138876
{
	if (!Function_12(iLocal_727, 128))
	{
		Function_9(&iLocal_727, 128);
		Function_528(&Local_72 + 228, iLocal_774);
		SQUAD_GOALS_CLEAR(Local_72.f_228);
		SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_72.f_228, 0, Local_72.f_320, 4, 0);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_72.f_228, true, Local_72.f_324, 4294967295);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_72.f_228, 2);
		Function_529(Local_72.f_228, 322, 3212836864);
	}
	return;
}

void Function_931(bool bParam0) //Position: 0x21EDE / 138974
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (Function_12(iLocal_727, 1))
	{
		Function_932();
		Function_548(&bLocal_743, 60.0f);
	}
	Function_9(&iLocal_727, 4);
	return;
}

void Function_932() //Position: 0x21F0C / 139020
{
	if (!Function_12(iLocal_727, 256))
	{
		Function_9(&iLocal_727, 256);
		Function_686(&Local_72 + 224, 9, 5, iLocal_773);
		SQUAD_GOALS_CLEAR(Local_72.f_224);
		SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_72.f_224, 0, Local_72.f_320, 4, 0);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_72.f_224, true, Local_72.f_324, 4294967295);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_72.f_224, 2);
		Function_529(Local_72.f_224, 322, 3212836864);
	}
	return;
}

void Function_933(bool bParam0) //Position: 0x21F73 / 139123
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &bVar0, 1);
	if (bVar0)
	{
		Function_345(&bLocal_698);
	}
	else
	{
		Function_661(&bLocal_698);
	}
	return;
}

void Function_934(bool bParam0) //Position: 0x21F96 / 139158
{
	var uVar0;
	int iVar1;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	iVar1 = uVar0;
	if (iVar1 == 1)
	{
		Function_9(&iLocal_727, 65536);
		Function_945();
	}
	else if (iVar1 == 2)
	{
		Function_9(&iLocal_727, 131072);
		Function_941();
	}
	else if (iVar1 == 3)
	{
		Function_9(&iLocal_727, 262144);
		Function_935();
	}
	return;
}

void Function_935() //Position: 0x21FE8 / 139240
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_940();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_939();
	Function_937();
	Function_936(Local_72.f_272, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_492(&Local_72 + 272);
	return;
}

void Function_936(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x22025 / 139301
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
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_937() //Position: 0x2210F / 139535
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	return;
}

void Function_938(bool bParam0) //Position: 0x22274 / 139892
{
	vector3 vVar0;
	bool bVar3;
	
	TASK_CLEAR(*bParam0);
	vVar0 = { -4448.599f, 8.702f, 3238.391f };
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(*bParam0, &vVar0, 24.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(*bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*bParam0, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	return;
}

void Function_939() //Position: 0x222BE / 139966
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_790);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_790);
	}
	return;
}

void Function_940() //Position: 0x2244D / 140365
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_272 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_backup_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_1", 493, -4436.091f, 7.189674f, 3352.582f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_2", 493, -4436.064f, 7.189674f, 3350.057f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_3", 492, -4440.254f, 7.189674f, 3351.211f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_as_4", 491, -4439.569f, 7.189674f, 3347.973f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_1", 489, -4440.526f, 7.189674f, 3349.4f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_2", 488, -4438.211f, 7.189674f, 3351.542f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_su_3", 490, -4440.18f, 7.189674f, 3352.974f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_1", 487, -4437.92f, 7.189674f, 3348.806f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_3_dy_2", 486, -4438.92f, 7.189674f, 3349.837f, 0.0f, 45.86839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_272);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 307);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_941() //Position: 0x2272A / 141098
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_944();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_943();
	Function_942();
	Function_936(Local_72.f_268, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_492(&Local_72 + 268);
	return;
}

void Function_942() //Position: 0x22767 / 141159
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	return;
}

void Function_943() //Position: 0x22857 / 141399
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_790);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_790);
	}
	return;
}

void Function_944() //Position: 0x22968 / 141672
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_268 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_backup_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_1", 493, -4434.992f, 24.26932f, 3174.558f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_2", 493, -4439.078f, 24.25965f, 3174.635f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_3", 492, -4443.041f, 23.94784f, 3175.607f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_as_4", 490, -4423.257f, 23.7375f, 3177.775f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_1", 489, -4427.173f, 23.88468f, 3176.702f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_2_dy_2", 486, -4430.97f, 24.07039f, 3175.196f, 0.0f, 169.5714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_268);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 306);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_945() //Position: 0x22B61 / 142177
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_948();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_947();
	Function_946();
	Function_936(Local_72.f_264, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_492(&Local_72 + 264);
	return;
}

void Function_946() //Position: 0x22B9E / 142238
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_938(&bVar0);
	}
	return;
}

void Function_947() //Position: 0x22C8E / 142478
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 9, 1, bLocal_789);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_204(&bVar0, 10, 6, bLocal_790);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_188(&bVar0, bLocal_790);
	}
	return;
}

void Function_948() //Position: 0x22D9F / 142751
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_72.f_264 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_72, "gap_stage3_backup_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_1", 493, -4381.575f, 10.31232f, 3233.804f, 0.0f, 117.1262f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_2", 493, -4383.409f, 10.31232f, 3233.322f, 0.0f, 117.1262f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_3", 492, -4385.581f, 10.31232f, 3236.892f, 0.0f, 117.1262f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_as_4", 491, -4504.711f, 11.04291f, 3268.712f, 0.0f, 117.1262f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_1", 488, -4505.144f, 12.31978f, 3262.449f, 0.0f, 206.6498f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_72, "s03_lt_ba_1_dy_2", 487, -4508.054f, 12.33032f, 3258.157f, 0.0f, 209.3095f, 0.0f);
	SQUAD_JOIN(bVar0, Local_72.f_264);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_949(bool bParam0) //Position: 0x22F98 / 143256
{
	int iVar0;
	
	iVar0 = 4;
	*(&iVar0 + 20) = 4;
	*(&iVar0 + 72) = 4;
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 23);
	MAKE_ACTOR_READY_FOR_ACTION(Function_41(), 1);
	if (GET_LOCAL_SLOT() == 0)
	{
		TELEPORT_ACTOR_WITH_HEADING(Function_41(), -4451.696f, 9.035246f, 3226.521f, -149.32f, 1, 0, 1);
	}
	else if (GET_LOCAL_SLOT() == 1)
	{
		TELEPORT_ACTOR_WITH_HEADING(Function_41(), -4453.983f, 9.035381f, 3227.863f, -149.32f, 1, 0, 1);
	}
	else if (GET_LOCAL_SLOT() == 2)
	{
		TELEPORT_ACTOR_WITH_HEADING(Function_41(), -4455.907f, 9.035381f, 3228.852f, -149.32f, 1, 0, 1);
	}
	else if (GET_LOCAL_SLOT() == 3)
	{
		TELEPORT_ACTOR_WITH_HEADING(Function_41(), -4458.07f, 9.035381f, 3230.183f, -149.32f, 1, 0, 1);
	}
	return;
}

void Function_950(bool bParam0) //Position: 0x2305C / 143452
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &bVar0, 2);
	Function_904(bVar0);
	NET_LOG(bLocal_687, "GAPco Stage01", "Display Bag Count %s", I2STR(bVar0), false, false, false);
	return;
}

void Function_951(bool bParam0) //Position: 0x230A5 / 143525
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_9(&iLocal_727, 32768);
	return;
}

void Function_952(bool bParam0) //Position: 0x230BE / 143550
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_9(&iLocal_727, 16384);
	return;
}

void Function_953(bool bParam0) //Position: 0x230D6 / 143574
{
	int iVar0;
	bool bVar1;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	bVar1 = Function_956(iVar0);
	if ((SQUAD_IS_VALID(bVar1) && !Function_45(iLocal_726, iVar0)) && iVar0 < 0)
	{
		Function_675(bVar1);
		SQUAD_GOALS_CLEAR(bVar1);
		Function_954(&bVar1);
		Function_492(&bVar1);
		Function_10(&iLocal_726, iVar0);
	}
	return;
}

void Function_954(var uParam0) //Position: 0x2311F / 143647
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar1 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTORSET(bVar2, Function_955(), 15.0f, 4);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar2, 30.0f);
				TASK_GO_NEAR_ACTORSET(bVar2, Function_955(), 15.0f, 4);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar2, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar2, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

var Function_955() //Position: 0x231A0 / 143776
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

var Function_956(int iParam0) //Position: 0x2320C / 143884
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Local_72.f_284;
			break;
		
		case 0x00000002:
			iVar0 = Local_72.f_288;
			break;
		
		case 0x00000003:
			iVar0 = Local_72.f_292;
			break;
		
		case 0x00000004:
			iVar0 = Local_72.f_296;
			break;
		
		case 0x00000005:
			iVar0 = Local_72.f_300;
			break;
		
		case 0x00000006:
			iVar0 = Local_72.f_304;
			break;
		
		case 0x00000008:
			iVar0 = Local_72.f_280;
			break;
		
		case 0x00000009:
			iVar0 = Local_72.f_312;
			break;
		
		case 0x0000000A:
			iVar0 = Local_72.f_316;
			break;
		
		case 0x0000000B:
			iVar0 = Local_72.f_308;
			break;
	}
	return iVar0;
}

void Function_957(bool bParam0) //Position: 0x232BB / 144059
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &bVar0, 1);
	Function_9(&iLocal_727, 524288);
	NET_LOG(bLocal_687, "GAPco Stage01", "Player %s has entered the mine", I2STR(bVar0), false, false, false);
	return;
}

void Function_958(bool bParam0) //Position: 0x23313 / 144147
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
	}
	return;
}

void Function_959(bool bParam0) //Position: 0x23328 / 144168
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			Function_964();
			Function_67();
			Function_14();
			Local_368 = 1000;
			iLocal_360 = 0;
			iLocal_359 = 0;
			break;
		
		case 0x00000001:
			Function_963();
			Function_67();
			Function_14();
			Local_368 = 1000;
			iLocal_360 = 0;
			iLocal_359 = 1;
			break;
		
		case 0x00000002:
			Function_963();
			Function_67();
			Function_14();
			Local_368 = 1000;
			iLocal_360 = 0;
			iLocal_359 = 2;
			Function_961();
			break;
		
		case 0x00000065:
			Function_960();
			Function_67();
			Function_14();
			Local_368 = 1000;
			iLocal_360 = 0;
			iLocal_359 = 101;
			break;
	}
	return;
}

void Function_960() //Position: 0x233C2 / 144322
{
	return;
}

void Function_961() //Position: 0x233C8 / 144328
{
	Function_962(Local_72.f_328, 204.926f);
	return;
}

void Function_962(bool bParam0, float fParam1) //Position: 0x233DB / 144347
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	struct<5> Var12;
	
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_280(bParam0);
	Var6 = { StackVal, StackVal, Function_280(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &Var12);
	Var12.f_4 = (StackVal + 180.0f);
	bVar15 = GET_CURRENT_GRINGO(Function_41());
	if (IS_GRINGO_VALID(bVar15))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(bVar15);
		WAIT(250);
	}
	TELEPORT_ACTOR_WITH_HEADING(Function_41(), vVar3, fParam1, 1, 1, 1);
	return;
}

void Function_963() //Position: 0x2345C / 144476
{
	return;
}

void Function_964() //Position: 0x23462 / 144482
{
	return;
}

void Function_965(bool bParam0) //Position: 0x23468 / 144488
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	Function_329(&bLocal_406);
	return;
}

void Function_966(bool bParam0) //Position: 0x2347D / 144509
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	iLocal_359 = iVar0;
	return;
}

void Function_967(bool bParam0) //Position: 0x23491 / 144529
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	Function_443(iVar0);
	return;
}

void Function_968(int iParam0) //Position: 0x234A5 / 144549
{
	switch (iParam0)
	{
		case 0x00000001:
			iLocal_773 = 1;
			iLocal_774 = 1;
			iLocal_775 = 1;
			iLocal_776 = 3;
			iLocal_777 = 2;
			iLocal_778 = 1;
			bLocal_779 = 2;
			bLocal_780 = true;
			bLocal_781 = 2;
			bLocal_782 = true;
			bLocal_783 = 2;
			bLocal_784 = true;
			bLocal_785 = true;
			bLocal_786 = true;
			bLocal_787 = true;
			bLocal_788 = true;
			bLocal_789 = true;
			bLocal_790 = true;
			iLocal_791 = 3;
			bLocal_792 = true;
			break;
		
		case 0x00000002:
			iLocal_773 = 1;
			iLocal_774 = 2;
			iLocal_775 = 2;
			iLocal_776 = 3;
			iLocal_777 = 2;
			iLocal_778 = 2;
			bLocal_779 = 2;
			bLocal_780 = 2;
			bLocal_781 = 2;
			bLocal_782 = 2;
			bLocal_783 = 2;
			bLocal_784 = 2;
			bLocal_785 = 2;
			bLocal_786 = true;
			bLocal_787 = 2;
			bLocal_788 = true;
			bLocal_789 = 2;
			bLocal_790 = true;
			iLocal_791 = 4;
			bLocal_792 = 2;
			break;
		
		case 0x00000003:
			iLocal_773 = 2;
			iLocal_774 = 3;
			iLocal_775 = 2;
			iLocal_776 = 4;
			iLocal_777 = 3;
			iLocal_778 = 3;
			bLocal_779 = 3;
			bLocal_780 = 2;
			bLocal_781 = 3;
			bLocal_782 = 2;
			bLocal_783 = 3;
			bLocal_784 = 2;
			bLocal_785 = 2;
			bLocal_786 = 3;
			bLocal_787 = 2;
			bLocal_788 = 3;
			bLocal_789 = 3;
			bLocal_790 = 2;
			iLocal_791 = 4;
			bLocal_792 = 3;
			break;
		
		case 0x00000004:
			iLocal_773 = 3;
			iLocal_774 = 4;
			iLocal_775 = 3;
			iLocal_776 = 5;
			iLocal_777 = 4;
			iLocal_778 = 4;
			bLocal_779 = 4;
			bLocal_780 = 3;
			bLocal_781 = 4;
			bLocal_782 = 3;
			bLocal_783 = 4;
			bLocal_784 = 3;
			bLocal_785 = 3;
			bLocal_786 = 4;
			bLocal_787 = 3;
			bLocal_788 = 4;
			bLocal_789 = 4;
			bLocal_790 = 3;
			iLocal_791 = 5;
			bLocal_792 = 3;
			break;
		
		case 0x00000005:
			iLocal_773 = 4;
			iLocal_774 = 4;
			iLocal_775 = 4;
			iLocal_776 = 5;
			iLocal_777 = 5;
			iLocal_778 = 4;
			bLocal_779 = 4;
			bLocal_780 = 5;
			bLocal_781 = 4;
			bLocal_782 = 5;
			bLocal_783 = 4;
			bLocal_784 = 5;
			bLocal_785 = 4;
			bLocal_786 = 4;
			bLocal_787 = 4;
			bLocal_788 = 4;
			bLocal_789 = 4;
			bLocal_790 = 4;
			iLocal_791 = 5;
			bLocal_792 = 4;
			break;
	}
	return;
}

bool Function_969() //Position: 0x2366F / 145007
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_970())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_774(&bLocal_514))
		{
			return 0;
		}
		if (!Function_523(Function_41(), 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_970() //Position: 0x236A8 / 145064
{
	Function_971(&Local_72 + 4, 505, 2, 0);
	Function_971(&Local_72 + 4, 506, 2, 0);
	Function_971(&Local_72 + 4, 507, 2, 0);
	Function_971(&Local_72 + 4, 508, 2, 0);
	Function_971(&Local_72 + 4, 509, 2, 0);
	Function_971(&Local_72 + 4, 514, 2, 0);
	Function_971(&Local_72 + 4, 493, 2, 0);
	Function_971(&Local_72 + 4, 487, 2, 0);
	Function_971(&Local_72 + 4, 492, 2, 0);
	Function_971(&Local_72 + 4, 486, 2, 0);
	Function_971(&Local_72 + 4, 489, 2, 0);
	Function_971(&Local_72 + 4, 491, 2, 0);
	Function_971(&Local_72 + 4, 490, 2, 0);
	Function_971(&Local_72 + 4, 488, 2, 0);
	Function_971(&Local_72 + 4, 515, 2, 0);
	Function_971(&Local_72 + 4, 513, 2, 0);
	Function_971(&Local_72 + 4, 510, 2, 0);
	Function_779(&Local_72 + 4, "$/content/scripting/gringo/simplegringo/stand_minerock_w_any", 1, 0);
	if (Function_774(&Local_72 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_971(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x237E1 / 145377
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_184(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_777(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_777(uParam0[iVar03], 8);
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

void Function_972(var uParam0, int iParam1) //Position: 0x238B1 / 145585
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_973() //Position: 0x238BD / 145597
{
	Function_974();
	return;
}

void Function_974() //Position: 0x238C6 / 145606
{
	int iVar0;
	
	Function_310(1, 4294967295);
	iVar0 = Function_153(1);
	Function_46(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_687, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", false, false, false, false);
	}
	else
	{
		Function_312("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_27(&bLocal_406, 1);
		NET_LOG(bLocal_687, "Local State", "Player has lost all their lives.  Disabling Respawning.", false, false, false, false);
	}
	return;
}

void Function_975() //Position: 0x239AD / 145837
{
	Function_976(&Local_594);
	Function_976(&(Local_599[GET_LOCAL_SLOT()5]));
	return;
}

void Function_976(var uParam0) //Position: 0x239C4 / 145860
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_16 = 0;
	return;
}

void Function_977() //Position: 0x239E2 / 145890
{
	return;
}

void Function_978(int iParam0) //Position: 0x239E8 / 145896
{
	int iVar0;
	var uVar1;
	struct<57> Var2;
	
	Function_1020();
	Function_1018();
	iVar0 = (Function_153(8) - 1);
	Function_1011(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_600(&Global_78578 + 96);
		Function_345(&Global_78578 + 96);
	}
	Function_993(iParam0, 1, 1, 0, 0);
	Function_992(iParam0, 31);
	Function_27(iParam0, 0);
	Function_972(iParam0, 145606);
	Function_991(iParam0, 0);
	Function_311(1, Global_83591);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_318()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_983(iVar0, &uVar1) };
	Function_982(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var2);
	*(&Global_83591 + 276) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_980(1);
	if (Function_1049("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.25f);
	Function_979(3, NET_GET_SESSION_GAMER_COUNT());
	Function_2(0);
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_13();
	return;
}

void Function_979(int iParam0, int iParam1) //Position: 0x23AD9 / 146137
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_980(bool bParam0) //Position: 0x23AFA / 146170
{
	struct<17> Var0;
	
	Function_23(&Var0);
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
		Function_10(&Var0, 4);
	}
	Function_16(&Var0);
	Function_17();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 146252);
	return;
}

void Function_981(bool bParam0) //Position: 0x23B4C / 146252
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_23(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_24(&iVar7);
	if (Function_407(&Var2))
	{
	}
	bVar8 = Function_398(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_406(&Var2, 1);
	Function_16(&Var2);
	return;
}

void Function_982(int iParam0, struct<57> Param1) //Position: 0x23C4F / 146511
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

struct<228> Function_983(int iParam0, int iParam1) //Position: 0x23C63 / 146531
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_988(&Var0);
	Function_986(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 9, 10, 1);
				Function_986(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 11, 6, 1);
				Function_986(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 17, 10, 1);
				Function_986(&Var0, 2, 5, 6, 1);
				Function_986(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 18, 10, 1);
				Function_986(&Var0, 2, 5, 8, 1);
				Function_986(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 19, 20, 0);
				Function_986(&Var0, 2, 4, 8, 1);
				Function_986(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 20, 20, 0);
				Function_986(&Var0, 2, 4, 10, 1);
				Function_986(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 6, 10, 1);
				Function_986(&Var0, 2, 8, 8, 1);
				Function_986(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_985(iParam0, &Var0, iParam1))
			{
				Function_986(&Var0, 1, 2, 10, 1);
				Function_986(&Var0, 2, 8, 9, 1);
				Function_986(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_984(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_984(int iParam0, int iParam1) //Position: 0x23E48 / 147016
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
	Function_986(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_248(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_247(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_986(StackVal, iParam0, *iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_35(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_35(), &cVar24, &uVar22))
			{
				Function_241(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_248(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_986(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_985(int iParam0, var uParam1, int iParam2) //Position: 0x23F85 / 147333
{
	if (Function_45(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_986(uParam1, 1, 10, 5, 1);
				Function_986(uParam1, 2, 7, 4, 1);
				Function_986(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_986(uParam1, 1, 17, 6, 1);
				Function_986(uParam1, 2, 6, 4, 1);
				Function_986(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_986(uParam1, 1, 13, 8, 1);
				Function_986(uParam1, 2, 16, 9, 1);
				Function_986(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_986(uParam1, 1, 3, 6, 1);
				Function_986(uParam1, 2, 15, 12, 1);
				Function_986(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_986(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x24066 / 147558
{
	if (!Function_849(iParam1))
	{
		return;
	}
	Function_987(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_987(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x24089 / 147593
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

void Function_988(int iParam0) //Position: 0x240B3 / 147635
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_990(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_989(iParam0, 0.0f);
	return;
}

void Function_989(var uParam0, int iParam1) //Position: 0x240E0 / 147680
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_990(int iParam0) //Position: 0x240EC / 147692
{
	Function_987(iParam0, 4294967295, 0, 1);
	return;
}

void Function_991(int iParam0, bool bParam1) //Position: 0x240FA / 147706
{
	if (bParam1)
	{
		Function_7(iParam0 + 44, 128);
	}
	else
	{
		Function_10(iParam0 + 44, 128);
	}
	return;
}

void Function_992(var uParam0, int iParam1) //Position: 0x2411A / 147738
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_993(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x24126 / 147750
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
	Function_982(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_255(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_992(iParam0, 2);
	Function_1009(iParam0);
	Function_1006(iParam0);
	Function_1004(iParam0);
	Function_1003(iParam0);
	Function_1000(iParam0);
	Function_998(iParam0);
	Function_995(iParam0);
	if (bParam2)
	{
		Function_10(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_10(iParam0 + 44, 8);
		Function_249(iParam0 + 192);
	}
	Function_994(iParam0, bParam4);
	Function_46(8388608, 0);
}

void Function_994(int iParam0, bool bParam1) //Position: 0x241EE / 147950
{
	if (bParam1)
	{
		Function_10(iParam0 + 44, 32);
	}
	else
	{
		Function_7(iParam0 + 44, 32);
	}
	return;
}

void Function_995(int iParam0) //Position: 0x2420E / 147982
{
	Function_996(iParam0, 148009);
	return;
}

void Function_996(var uParam0, var uParam1) //Position: 0x2421D / 147997
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_997() //Position: 0x24229 / 148009
{
	return 0;
}

void Function_998(var uParam0) //Position: 0x24230 / 148016
{
	Function_346(uParam0, 148031);
	return;
}

int Function_999() //Position: 0x2423F / 148031
{
	return 1;
}

void Function_1000(int iParam0) //Position: 0x24246 / 148038
{
	Function_1001(iParam0, 148065);
	return;
}

void Function_1001(var uParam0, var uParam1) //Position: 0x24255 / 148053
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_1002() //Position: 0x24261 / 148065
{
	return;
}

void Function_1003(int iParam0) //Position: 0x24267 / 148071
{
	Function_972(iParam0, 148065);
	return;
}

void Function_1004(int iParam0) //Position: 0x24276 / 148086
{
	Function_1005(iParam0, 148065);
	return;
}

void Function_1005(var uParam0, int iParam1) //Position: 0x24285 / 148101
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_1006(int iParam0) //Position: 0x24291 / 148113
{
	Function_1007(iParam0, 148140);
	return;
}

void Function_1007(var uParam0, var uParam1) //Position: 0x242A0 / 148128
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_1008() //Position: 0x242AC / 148140
{
	return 0;
}

void Function_1009(int iParam0) //Position: 0x242B3 / 148147
{
	Function_658(iParam0, 148162);
	return;
}

void Function_1010(var uParam0) //Position: 0x242C2 / 148162
{
	uParam0 = uParam0;
	return;
}

void Function_1011(int iParam0) //Position: 0x242CC / 148172
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
	Function_101();
	Function_102();
	switch (iParam0)
	{
		case 0x00000001:
			Function_320(12288);
			Function_37(16384);
			break;
		
		case 0x00000002:
			Function_320(20480);
			Function_37(8192);
			break;
		
		default:
			Function_37(28672);
			break;
	}
	Function_37(2048);
	Function_1012(0, 0);
	Function_275();
	return;
}

void Function_1012(bool bParam0, bool bParam1) //Position: 0x24390 / 148368
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_1017(&Global_78480);
	Function_1016(&Global_78480);
	uVar0 = Function_150(37);
	Function_1014();
	if (!bParam0)
	{
		Function_151(37, uVar0);
	}
	Function_46(18264, 0);
	Function_1013();
	return;
}

void Function_1013() //Position: 0x243DC / 148444
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_1014() //Position: 0x243FB / 148475
{
	Function_1015(&Global_78480 + 220);
	return;
}

void Function_1015(int iParam0) //Position: 0x2440A / 148490
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

void Function_1016(int iParam0) //Position: 0x2442B / 148523
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

void Function_1017(int iParam0) //Position: 0x2444F / 148559
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

void Function_1018() //Position: 0x24473 / 148595
{
	Local_767 = 0;
	Local_767.f_16 = "";
	Function_1019(&Local_767 + 4);
	return;
}

void Function_1019(var uParam0) //Position: 0x2448D / 148621
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_1020() //Position: 0x244A1 / 148641
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_1021(var uParam0, var uParam1) //Position: 0x244B5 / 148661
{
	uParam0->f_12 = 2;
	uParam1 = uParam1;
	return;
}

void Function_1022() //Position: 0x244C4 / 148676
{
	Function_779(&bLocal_514, Function_1024(), 0, 0);
	Function_779(&bLocal_514, Function_1023(), 0, 0);
	Function_779(&bLocal_514, Function_907(), 0, 0);
	Function_779(&bLocal_514, "dlc_mpcooppack_mp_coop", 10, 0);
	Function_779(&bLocal_514, "dlc_mpcooppack_mp_coop_gap", 10, 0);
	Function_779(&bLocal_514, "MP_CTF", 10, 0);
	Function_781(&bLocal_514);
	return;
}

bool Function_1023() //Position: 0x24551 / 148817
{
	return "p_gen_gatlingGun01x";
}

var Function_1024() //Position: 0x2456D / 148845
{
	return "p_gen_moneybag03x";
}

struct<8> Function_1025() //Position: 0x24587 / 148871
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_1027(4, 1);
	uVar0 = uVar0;
	Local_72 = CREATE_LAYOUT("GaptoothBreachMP_CO_layout");
	Local_72.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_mine_entrance", 2, -4442.54f, 5.346799f, 3139.264f, 0.0f, -100.533f, 0.0f, 116.9978f, 21.8103f, 101.6733f);
	Local_72.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_mine_outside", 2, -4434.441f, 20.07139f, 3248.405f, 0.0f, -48.67561f, 0.0f, 198.3763f, 27.79958f, 247.1589f);
	Local_72.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_mine_core_vol", 2, -4433.616f, 2.272017f, 3121.761f, 0.0f, -335.5742f, 0.0f, 16.13775f, 5.37287f, 12.46306f);
	Local_72.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_72, "SpawnVol_0", 2, -4424.971f, 7.164316f, 3357.553f, 0.0f, -141.6663f, 0.0f, 11.32954f, 3.611716f, 6.382252f);
	Local_72.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_72, "SpawnVol_1", 2, -4428.099f, 10.34524f, 3206.079f, 0.0f, -179.5456f, 0.0f, 3.351408f, 3.611716f, 3.36394f);
	Local_72.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_72, "SpawnVol_2", 2, -4441.414f, 8.592191f, 3251.844f, 0.0f, -196.366f, 0.0f, 5.555997f, 3.611716f, 3.36394f);
	Local_72.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_treasure_depot_battle_4", 2, -4437.478f, 4.967439f, 3146.426f, 0.0f, 0.0f, 0.0f, 23.55373f, 11.4609f, 21.73206f);
	Local_72.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_72, "SpawnVol_3", 2, -4454.978f, 10.34114f, 3220.089f, 0.0f, 28.45779f, 0.0f, 3.70362f, 2.614819f, 3.103566f);
	Local_72.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_mine_stage2_spawn", 2, -4422.036f, 9.488382f, 3179.93f, -184.4123f, -194.6952f, -177.2186f, 4.768782f, 3.17864f, 3.412886f);
	Local_72.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_mine_stage1_defense", 2, -4451.171f, 12.77418f, 3267.025f, 0.0f, -56.16905f, 0.0f, 196.785f, 20.88564f, 123.3146f);
	Local_72.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_stage1_house_los", 2, -4441.692f, 13.98446f, 3235.708f, 0.0f, 1.653285f, 0.0f, 70.95863f, 36.87614f, 85.27479f);
	Local_72.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_stage1_tents_los", 2, -4444.638f, 16.37842f, 3266.479f, 0.0f, 13.52369f, 0.0f, 71.64937f, 24.93155f, 65.72793f);
	Local_72.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_72, "v_stage1_railhouse_los", 2, -4446.773f, 12.65372f, 3238.489f, 0.0f, -2.373387f, 0.0f, 48.67028f, 17.23193f, 61.67393f);
	Local_72.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_72, "ns03_house", 2, -4453.864f, 13.58053f, 3224.264f, 0.0f, 29.21163f, 0.0f, 19.03214f, 10.0f, 12.44863f);
	Local_72.f_376 = CREATE_VOLUME_IN_LAYOUT(Local_72, "s01_next_stage_trigger", 2, -4424.281f, 10.50117f, 3179.074f, 0.0f, 1.690312f, 0.0f, 19.77303f, 9.085501f, 13.0075f);
	Local_72.f_380 = CREATE_VOLUME_IN_LAYOUT(Local_72, "PlayableSpace", 2, -4440.638f, 12.67959f, 3179.48f, 0.0f, 0.0f, 0.0f, 100.0f, 30.77516f, 187.3265f);
	Local_72.f_384 = CREATE_VOLUME_IN_LAYOUT(Local_72, "s03_cutscene_Volume", 2, -4430.988f, 13.31147f, 3213.387f, 0.0f, -90.87677f, 0.0f, 39.59193f, 14.8319f, 31.28548f);
	Local_72.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_72, "nDeathZone", 2, -4474.475f, 20.30255f, 3142.871f, 0.0f, 0.0f, 0.0f, 11.23137f, 14.0f, 12.6786f);
	Local_72.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_72, "Prop_Dest_Vol", 2, -4438.043f, 20.43966f, 3228.845f, 1.156431f, -2.493533f, -0.01677f, 116.5245f, 50.0f, 274.1375f);
	*(&Local_72 + 396) = { -4462.487f, 6.618924f, 3097.584f };
	*(&Local_72 + 396 + 12) = { 0.0f, 189.821f, 0.0f };
	Local_72.f_420 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_17", -4462.487f, 6.618924f, 3097.584f, 0.0f, 189.821f, 0.0f);
	*(&Local_72 + 424) = { -4458.701f, 4.563917f, 3111.967f };
	*(&Local_72 + 424 + 12) = { 0.0f, 3.569f, 0.0f };
	Local_72.f_448 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_16", -4458.701f, 4.563917f, 3111.967f, 0.0f, 3.569f, 0.0f);
	*(&Local_72 + 452) = { -4415.145f, 1.436693f, 3118.453f };
	*(&Local_72 + 452 + 12) = { 0.0f, 45.867f, 0.0f };
	Local_72.f_476 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_15", -4415.145f, 1.436693f, 3118.453f, 0.0f, 45.867f, 0.0f);
	*(&Local_72 + 480) = { -4453.104f, 4.470838f, 3126.221f };
	*(&Local_72 + 480 + 12) = { 0.0f, 224.634f, 0.0f };
	Local_72.f_504 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_14", -4453.104f, 4.470838f, 3126.221f, 0.0f, 224.634f, 0.0f);
	*(&Local_72 + 508) = { -4450.974f, 3.856189f, 3129.669f };
	*(&Local_72 + 508 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_532 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_13", -4450.974f, 3.856189f, 3129.669f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 536) = { -4452.428f, 4.529297f, 3127.411f };
	*(&Local_72 + 536 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_560 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_12", -4452.428f, 4.529297f, 3127.411f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 564) = { -4470.906f, 1.4122f, 3140.639f };
	*(&Local_72 + 564 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_588 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_11", -4470.906f, 1.4122f, 3140.639f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 592) = { -4480.62f, 2.503119f, 3135.093f };
	*(&Local_72 + 592 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_616 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_10", -4480.62f, 2.503119f, 3135.093f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 620) = { -4477.681f, 1.618364f, 3138.062f };
	*(&Local_72 + 620 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_644 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_9", -4477.681f, 1.618364f, 3138.062f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 648) = { -4460.242f, 4.639487f, 3111.388f };
	*(&Local_72 + 648 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_672 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_8", -4460.242f, 4.639487f, 3111.388f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 676) = { -4472.98f, 1.297834f, 3144.786f };
	*(&Local_72 + 676 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_700 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_7", -4472.98f, 1.297834f, 3144.786f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 704) = { -4478.713f, 1.533446f, 3143.823f };
	*(&Local_72 + 704 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_728 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_6", -4478.713f, 1.533446f, 3143.823f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 732) = { -4404.739f, 2.034228f, 3107.231f };
	*(&Local_72 + 732 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_756 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_5", -4404.739f, 2.034228f, 3107.231f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 760) = { -4409.753f, 2.457674f, 3105.163f };
	*(&Local_72 + 760 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_784 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_4", -4409.753f, 2.457674f, 3105.163f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 788) = { -4408.875f, 2.411381f, 3108.176f };
	*(&Local_72 + 788 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_812 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_3", -4408.875f, 2.411381f, 3108.176f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 816) = { -4474.564f, 1.547704f, 3137.154f };
	*(&Local_72 + 816 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_840 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_2", -4474.564f, 1.547704f, 3137.154f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 844) = { -4483.163f, 2.578746f, 3128.534f };
	*(&Local_72 + 844 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_868 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_1", -4483.163f, 2.578746f, 3128.534f, 0.0f, 0.0f, 0.0f);
	*(&Local_72 + 872) = { -4482.914f, 2.445713f, 3130.915f };
	*(&Local_72 + 872 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_896 = CREATE_POINT_IN_LAYOUT(Local_72, "FlagSpawn_0", -4482.914f, 2.445713f, 3130.915f, 0.0f, 0.0f, 0.0f);
	Local_72.f_900 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_72, 8, 0);
	*(&Local_72 + 904[06]) = { -4464.44f, 8.456f, 3292.625f };
	*(&Local_72 + 904[06] + 12) = { 0.0f, -262.6135f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_72, "ammo01", -4464.44f, 8.456f, 3292.625f, 0.0f, -262.6135f, 0.0f);
	Function_1026(bVar1, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_72.f_900);
	*(&Local_72 + 904[16]) = { -4455.677f, 9.398544f, 3216.535f };
	*(&Local_72 + 904[16] + 12) = { 0.0f, 24.60203f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_72, "ammo02", -4455.677f, 9.398544f, 3216.535f, 0.0f, 24.60203f, 0.0f);
	Function_1026(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_72.f_900);
	*(&Local_72 + 904[26]) = { -4456.83f, 8.833f, 3261.708f };
	*(&Local_72 + 904[26] + 12) = { 0.0f, 68.72899f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_72, "ammo03", -4456.83f, 8.833f, 3261.708f, 0.0f, 68.72899f, 0.0f);
	Function_1026(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_72.f_900);
	*(&Local_72 + 980) = { -4460.0f, 16.07956f, 3208.0f };
	*(&Local_72 + 980 + 12) = { 0.0f, -25.13875f, 0.0f };
	*(&Local_72 + 1004) = { -4458.719f, 15.94169f, 3207.951f };
	*(&Local_72 + 1004 + 12) = { 0.0f, -75.4313f, 0.0f };
	*(&Local_72 + 1028) = { -4435.143f, 20.903f, 3201.992f };
	*(&Local_72 + 1028 + 12) = { 0.0f, 173.3014f, 0.0f };
	*(&Local_72 + 1052) = { -4442.033f, 8.732753f, 3217.967f };
	*(&Local_72 + 1052 + 12) = { 0.0f, 176.9179f, 0.0f };
	*(&Local_72 + 1076) = { -4423.186f, 9.313859f, 3180.961f };
	*(&Local_72 + 1076 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_72.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_72, "stand_minerock_w_any", "stand_minerock_w_any", -4427.156f, 8.571184f, 3191.303f, 0.0f, 62.94314f, 0.0f);
	Local_72.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_72, "stand_minerock_w_any1", "stand_minerock_w_any", -4421.297f, 8.249219f, 3185.501f, 0.0f, -82.594f, 0.0f);
	Local_72.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_72, "stand_minerock_w_any2", "stand_minerock_w_any", -4424.84f, 8.385797f, 3186.087f, 0.0f, 75.2115f, 0.0f);
}

void Function_1026(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25601 / 153089
{
	DECOR_SET_INT(iParam0, Function_853(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_850(), bParam2);
	}
	return;
}

void Function_1027(int iParam0, int iParam1) //Position: 0x25625 / 153125
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

bool Function_1028(var uParam0) //Position: 0x2566E / 153198
{
	return (iLocal_359 != 99 || Function_361(uParam0));
}

void Function_1029() //Position: 0x25680 / 153216
{
	var uVar0[15];
	int iVar16;
	
	if (Function_74())
	{
		uVar0[0] = "Stage01 - Get into the mine";
		uVar0[1] = "Stage02 - Collect the bags";
		uVar0[2] = "Stage03 - Get out";
		uVar0[3] = "Last Stage - You win";
		uVar0[4] = "Kill all squads";
		uVar0[5] = "Make host awesome";
		uVar0[6] = "TRAIN_ENABLE_VISUAL_DEBUG: ON";
		uVar0[7] = "TRAIN_ENABLE_VISUAL_DEBUG: OFF";
		uVar0[8] = "Pause mine timer";
		uVar0[9] = "Unpause mine timer";
		uVar0[10] = "Quit Mission";
		iVar16 = Function_1034(&Local_361, &uVar0, "RDR CO-OP MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (Function_1033(&iVar16, &iLocal_359, &iLocal_360, &Local_368))
		{
			Function_67();
			Function_14();
		}
		switch (iVar16)
		{
			case 0x00000000:
				Function_1032(0);
				break;
			
			case 0x00000001:
				Function_1032(1);
				break;
			
			case 0x00000002:
				Function_1032(2);
				break;
			
			case 0x00000003:
				iLocal_731 = 1;
				Function_1032(101);
				break;
			
			case 0x00000004:
				Function_900();
				break;
			
			case 0x00000005:
				DELETE_ALL_WEAPONS_FROM_ACTOR(Function_41());
				GIVE_WEAPON_TO_ACTOR(Function_41(), 3, 100.0f, 1, 1);
				GIVE_WEAPON_TO_ACTOR(Function_41(), 14, 100.0f, 1, 1);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Function_41(), 6, true);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Function_41(), 9, true);
				SET_ACTOR_INVULNERABILITY(Function_41(), 1);
				ACTOR_PUT_WEAPON_IN_HAND(Function_41(), 14, 1);
				break;
			
			case 0x00000006:
				TRAIN_ENABLE_VISUAL_DEBUG(1);
				break;
			
			case 0x00000007:
				TRAIN_ENABLE_VISUAL_DEBUG(0);
				break;
			
			case 0x00000008:
				Function_1031(1);
				break;
			
			case 0x00000009:
				Function_1031(0);
				break;
			
			case 0x0000000A:
				Function_67();
				Function_14();
				Function_1030();
				break;
			}
	}
	return;
}

void Function_1030() //Position: 0x258EE / 153838
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 1, 1);
	return;
}

void Function_1031(int iParam0) //Position: 0x25902 / 153858
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 49, &uVar0, 1, 1);
	return;
}

void Function_1032(int iParam0) //Position: 0x25917 / 153879
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 1, 1);
	return;
}

bool Function_1033(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2592C / 153900
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_67();
			Function_14();
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
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_68))
	{
		*uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_69))
	{
		Function_356("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_70))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_1034(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x259D2 / 154066
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_1047(&Var15, &Var0);
	uVar20 = Function_1046(*uParam1, &Var15);
	Function_1045(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_1044(uParam0, uVar20);
	Function_1042(StackVal, uParam0, Var15.f_12);
	Function_1040(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_1039(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_1036(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_1035(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_1035(int iParam0, int iParam1, int iParam2) //Position: 0x25A99 / 154265
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

bool Function_1036(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x25AF5 / 154357
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
				Function_1038(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_1038(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_1035(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_1037(bParam1->f_32);
	}
	else
	{
		Function_1037(bParam1->f_32);
	}
	return 0;
}

void Function_1037(bool bParam0) //Position: 0x25C7B / 154747
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

void Function_1038(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x25CB5 / 154805
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

var Function_1039(int iParam0, var uParam1, int iParam2) //Position: 0x25D63 / 154979
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_1040(var uParam0, int iParam1, int iParam2) //Position: 0x25D87 / 155015
{
	switch (Function_1041())
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

int Function_1041() //Position: 0x25E23 / 155171
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

void Function_1042(var uParam0, int iParam1, int iParam2) //Position: 0x25E5F / 155231
{
	switch (Function_1043(uParam0))
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

int Function_1043(int iParam0) //Position: 0x25EF7 / 155383
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_41()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_45(*iParam0, 0x40000000))
		{
			Function_10(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_45(*iParam0, 0x40000000))
		{
			Function_10(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_7(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_41()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_45(*iParam0, 0x20000000))
		{
			Function_10(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_45(*iParam0, 0x20000000))
		{
			Function_10(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_7(iParam0, 0x20000000);
	return 0;
}

var Function_1044(var uParam0, int iParam1) //Position: 0x26042 / 155714
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_1045(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x26191 / 156049
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

var Function_1046(int iParam0, int iParam1) //Position: 0x26224 / 156196
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_1047(var uParam0, var uParam1) //Position: 0x2623E / 156222
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

void Function_1048() //Position: 0x2628C / 156300
{
	if (iLocal_359 != iLocal_763)
	{
		iLocal_763 = iLocal_359;
		switch (iLocal_359)
		{
			case 0x00000000:
				if (Function_155())
				{
					strcpy(&cLocal_759, "GAPAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_759, "GAPFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_155())
				{
					strcpy(&cLocal_759, "GAPAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_759, "GAPFail2", 16);
				}
				break;
			
			case 0x00000002:
				if (Function_155())
				{
					strcpy(&cLocal_759, "GAPAdvFail3", 16);
				}
				else
				{
					strcpy(&cLocal_759, "GAPFail3", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_155())
				{
					strcpy(&cLocal_759, "GAPAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_759, "GAPFailLast", 16);
				}
				break;
			}
	}
	return;
}

bool Function_1049(bool bParam0) //Position: 0x26383 / 156547
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

