//Decompiled with MagicRDR v1.0
//Function Count : 1055
//Statics Count : 1149
//Natives Count : 820
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
	var uLocal_31 = 11;
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
	var uLocal_53 = 11;
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
	var uLocal_70 = 0;
	bool bLocal_71 = false;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	struct<1669> Local_77 = { 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	iLocal_76 = 0;
	bLocal_934 = true;
	iLocal_935 = 0;
	iLocal_938 = 0;
	iLocal_958 = 0;
	iLocal_959 = 0;
	iLocal_977 = 0;
	iLocal_994 = 0;
	iLocal_995 = 3;
	iLocal_1014 = 0;
	iLocal_1015 = 0;
	iLocal_1026 = 0;
	iLocal_1055 = 0;
	iLocal_1056 = 0;
	iLocal_1057 = 4294967295;
	iLocal_1058 = 0;
	iLocal_1059 = 0;
	iLocal_1060 = 0;
	iLocal_1065 = 4294967295;
	iLocal_1068 = 0;
	iLocal_1085 = 1;
	iLocal_1086 = 0;
	iLocal_1102 = 0;
	iLocal_1119 = 16;
	iLocal_1120 = 0;
	iLocal_495 = 99;
	iLocal_496 = 6;
	Local_497 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_497 };
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(0.2f, 1f, 1);
	while (!IS_EXITFLAG_SET() && Function_208())
	{
		WAIT(false);
	}
	Function_75();
	Function_1(&bLocal_545);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xC1 / 193
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
	if (iLocal_496 == 3)
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

void Function_2(bool bParam0) //Position: 0x187 / 391
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

void Function_3(bool bParam0, bool bParam1) //Position: 0x1CB / 459
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

int Function_4(bool bParam0, bool bParam1) //Position: 0x248 / 584
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

void Function_5(int iParam0) //Position: 0x26C / 620
{
	Function_6(&Global_79337, iParam0);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0x27B / 635
{
	Function_7(iParam0, iParam1);
	return;
}

void Function_7(bool bParam0, int iParam1) //Position: 0x288 / 648
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x29B / 667
{
	Function_9(&Global_79337, iParam0);
	return;
}

void Function_9(int iParam0, int iParam1) //Position: 0x2AA / 682
{
	Function_10(iParam0, iParam1);
	return;
}

void Function_10(int iParam0, int iParam1) //Position: 0x2B7 / 695
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_11(bool bParam0) //Position: 0x2C6 / 710
{
	return Function_12(Global_79337, bParam0);
}

bool Function_12(int iParam0, bool bParam1) //Position: 0x2D5 / 725
{
	return (iParam0 && bParam1) == 0;
}

void Function_13() //Position: 0x2E2 / 738
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_14() //Position: 0x2EB / 747
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_15() //Position: 0x300 / 768
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

void Function_16(int iParam0) //Position: 0x322 / 802
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x332 / 818
{
	Function_18();
	return;
}

void Function_18() //Position: 0x33B / 827
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x347 / 839
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

void Function_20(var uParam0, int iParam1) //Position: 0x384 / 900
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x397 / 919
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x3A6 / 934
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x3B1 / 945
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_24(var uParam0) //Position: 0x3C1 / 961
{
	*uParam0 = Global_78480.f_120;
	return;
}

void Function_25() //Position: 0x3D0 / 976
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

void Function_26(int iParam0, bool bParam1) //Position: 0x4EA / 1258
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

void Function_27(bool bParam0, bool bParam1) //Position: 0x50A / 1290
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

void Function_28(int iParam0) //Position: 0x528 / 1320
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

void Function_29(bool bParam0) //Position: 0x5DA / 1498
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

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x614 / 1556
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

void Function_31(bool bParam0, bool bParam1) //Position: 0x63C / 1596
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

var Function_32(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x6CD / 1741
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

void Function_33(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x806 / 2054
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

vector3 Function_34(var uParam0, bool bParam1) //Position: 0x85B / 2139
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_35() //Position: 0x875 / 2165
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_36(int iParam0) //Position: 0x8A4 / 2212
{
	Function_38(iParam0);
	Function_37(1048576);
	return;
}

void Function_37(int iParam0) //Position: 0x8B6 / 2230
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x8EF / 2287
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_39(bool bParam0) //Position: 0x906 / 2310
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

bool Function_40(bool bParam0) //Position: 0x98D / 2445
{
	return Function_12(Global_79336, bParam0);
}

bool Function_41() //Position: 0x99C / 2460
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42() //Position: 0x9B1 / 2481
{
	if (Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 0, 1);
	return;
}

void Function_43() //Position: 0x9C9 / 2505
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_44(int iParam0) //Position: 0x9D8 / 2520
{
	return Function_45(Global_76905.f_132, iParam0);
}

bool Function_45(var uParam0, int iParam1) //Position: 0x9E9 / 2537
{
	return (uParam0 && iParam1) == 0;
}

void Function_46(int iParam0, bool bParam1) //Position: 0x9F6 / 2550
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xA31 / 2609
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

void Function_48(bool bParam0) //Position: 0xB21 / 2849
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

void Function_49() //Position: 0xBD0 / 3024
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

int Function_50(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC42 / 3138
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xE62 / 3682
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

var Function_52() //Position: 0x148F / 5263
{
	int iVar0;
	
	return iVar0;
}

var Function_53(int iParam0) //Position: 0x1497 / 5271
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14A8 / 5288
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

struct<32> Function_55(char* cParam0, bool bParam1) //Position: 0x159D / 5533
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x15B6 / 5558
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_58(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_57(int iParam0, int iParam1) //Position: 0x161B / 5659
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_58(int iParam0, bool bParam1) //Position: 0x162D / 5677
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x163F / 5695
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

int Function_60(int iParam0) //Position: 0x176F / 5999
{
	return Global_35278[iParam020].f_48;
}

float Function_61(int iParam0) //Position: 0x177E / 6014
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_62(int iParam0) //Position: 0x17B7 / 6071
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_63(int iParam0) //Position: 0x17F4 / 6132
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x198E / 6542
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

bool Function_65() //Position: 0x1BD2 / 7122
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_66() //Position: 0x1BDB / 7131
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_67() //Position: 0x1BEF / 7151
{
	Function_69();
	Function_68(10, 3);
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x1BFE / 7166
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_69() //Position: 0x1D35 / 7477
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
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_41(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_41());
	UI_POP("nDebugMenu");
	return;
}

void Function_70() //Position: 0x1D80 / 7552
{
	Function_71(25, 2);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x1D8C / 7564
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x1F8A / 8074
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_73() //Position: 0x20C1 / 8385
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

bool Function_74() //Position: 0x2128 / 8488
{
	return Global_30920;
}

void Function_75() //Position: 0x2131 / 8497
{
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	SET_TIME_OF_DAY(bLocal_936);
	GRINGO_ENABLE_TYPE("lean_fence_h_talking");
	Function_207(bLocal_539);
	Function_207(Local_77);
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	REMOVE_BLIP(bLocal_1030);
	REMOVE_BLIP(bLocal_1031);
	REMOVE_BLIP(bLocal_1016);
	REMOVE_BLIP(bLocal_1018);
	SET_ACTOR_INVULNERABILITY(Function_41(), 0);
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_206(Local_77, 1);
	Function_206(FIND_NAMED_LAYOUT("Playerlayout"), 1);
	Function_204(Function_205());
	Function_202(Function_205());
	Function_201(Function_205(), 0, 1);
	Function_192(1);
	Function_184(1);
	Function_168(1, 1);
	if (IS_LAYOUTREF_VALID(bLocal_540))
	{
		DESTROY_LAYOUT(bLocal_540);
	}
	Function_161(&uLocal_1093);
	Function_157(&bLocal_653);
	RELEASE_LAYOUT_REF(bLocal_539);
	Function_156();
	if (Function_155())
	{
		Function_76(92);
	}
	else
	{
		Function_76(39);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x2221 / 8737
{
	Function_154(14, 1);
	Function_77(Function_152(), iParam0);
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x2235 / 8757
{
	Function_151(0, iParam0);
	Function_151(13, iParam0);
	Function_151(11, Function_150(29));
	Function_78(iParam1, 4294967295, 0, 0, 0);
	return;
}

void Function_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x225A / 8794
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
			NET_START_LB_UPDATE(false);
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

void Function_79(bool bParam0) //Position: 0x2376 / 9078
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

void Function_80() //Position: 0x23FF / 9215
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

void Function_81() //Position: 0x2451 / 9297
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

void Function_82() //Position: 0x2557 / 9559
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

void Function_83() //Position: 0x258A / 9610
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

void Function_84() //Position: 0x2718 / 10008
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

void Function_85() //Position: 0x28CC / 10444
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, int iParam2) //Position: 0x28DA / 10458
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
	
	bVar0 = Function_41();
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

struct<8> Function_87(int iParam0) //Position: 0x2ACB / 10955
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

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B71 / 11121
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

int Function_89(bool bParam0) //Position: 0x2E0C / 11788
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_90() //Position: 0x2E4D / 11853
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

struct<8> Function_91() //Position: 0x2ED6 / 11990
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

struct<8> Function_92() //Position: 0x2F6D / 12141
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

void Function_93() //Position: 0x2FEC / 12268
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

int Function_94(int iParam0, bool bParam1, int iParam2) //Position: 0x3025 / 12325
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

void Function_95(int iParam0) //Position: 0x322F / 12847
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x323E / 12862
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x324D / 12877
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

bool Function_98() //Position: 0x32F4 / 13044
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_99(int iParam0) //Position: 0x32FF / 13055
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_100(var uParam0, var uParam1, bool bParam2) //Position: 0x330F / 13071
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

void Function_101() //Position: 0x3354 / 13140
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

void Function_102() //Position: 0x337E / 13182
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

void Function_103(bool bParam0) //Position: 0x33DE / 13278
{
	Global_56092[*bParam0] = 0;
	Function_104(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_104(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x33F8 / 13304
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), fParam1, true, 0);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_108(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_106(iParam0, 4))
	{
		Function_105(Function_108(iParam0), 0);
	}
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x34AF / 13487
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

bool Function_106(int iParam0, int iParam1) //Position: 0x34D4 / 13524
{
	return Function_45(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_107(int iParam0) //Position: 0x34E8 / 13544
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_108(int iParam0) //Position: 0x351C / 13596
{
	return Global_50170[iParam022].f_24;
}

void Function_109(var uParam0, var uParam1, int iParam2) //Position: 0x352B / 13611
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

void Function_110(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x36D4 / 14036
{
	Function_138(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), 1.0f, false, 0);
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

void Function_111() //Position: 0x373A / 14138
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

void Function_112(var uParam0, int iParam1) //Position: 0x3763 / 14179
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

void Function_113(bool bParam0) //Position: 0x37A5 / 14245
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

void Function_114() //Position: 0x37F6 / 14326
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

bool Function_115(vector3 vParam0) //Position: 0x38B1 / 14513
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_116(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x38C9 / 14537
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

vector3 Function_117() //Position: 0x39B0 / 14768
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_118(int iParam0) //Position: 0x39B9 / 14777
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_119(bool bParam0, bool bParam1) //Position: 0x39CF / 14799
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

float Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x3A96 / 14998
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_121(var uParam0, int iParam1) //Position: 0x3AB3 / 15027
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

bool Function_122(int iParam0) //Position: 0x42DA / 17114
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_45(uVar0, 0x1000000) || Function_45(uVar0, 0x2000000)) || Function_45(uVar0, 0x4000000)) || !Function_45(uVar0, 0x10000000));
}

void Function_123(bool bParam0, bool bParam1) //Position: 0x4315 / 17173
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_124() //Position: 0x4322 / 17186
{
	if (Function_45(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_125(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x433D / 17213
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

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x43E1 / 17377
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

struct<16> Function_127(int iParam0) //Position: 0x4453 / 17491
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_128(int iParam0) //Position: 0x4474 / 17524
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_129(int iParam0) //Position: 0x4495 / 17557
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_130() //Position: 0x44B6 / 17590
{
	return "CQueue_Count";
}

void Function_131(int iParam0) //Position: 0x44CB / 17611
{
	Function_132(iParam0, 1);
	return;
}

void Function_132(int iParam0, bool bParam1) //Position: 0x44D7 / 17623
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

int Function_133(bool bParam0) //Position: 0x452D / 17709
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_134(int iParam0, int iParam1) //Position: 0x4539 / 17721
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_108(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_108(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_108(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_135(int iParam0) //Position: 0x45BB / 17851
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_136(int iParam0) //Position: 0x45DB / 17883
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_137(int iParam0) //Position: 0x460C / 17932
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x478A / 18314
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

var Function_139() //Position: 0x48D6 / 18646
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x4923 / 18723
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_141(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x493B / 18747
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

void Function_142(int iParam0, int iParam1) //Position: 0x49B1 / 18865
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x49C5 / 18885
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
			PREPEND_JOURNAL_ENTRY(Function_108(iParam0), false);
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

void Function_144(int iParam0, int iParam1) //Position: 0x4A82 / 19074
{
	Function_10(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_145(int iParam0) //Position: 0x4A96 / 19094
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_146(int iParam0) //Position: 0x4AC4 / 19140
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_147() //Position: 0x4AF4 / 19188
{
	return "MP_Unstoppable_Icon_128";
}

float Function_148(int iParam0) //Position: 0x4B14 / 19220
{
	return Global_50170[iParam022].f_12;
}

int Function_149() //Position: 0x4B23 / 19235
{
	return Global_79349.f_16;
}

int Function_150(int iParam0) //Position: 0x4B2F / 19247
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_151(int iParam0, int iParam1) //Position: 0x4B48 / 19272
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_152() //Position: 0x4B62 / 19298
{
	return Function_153(0);
}

int Function_153(int iParam0) //Position: 0x4B6C / 19308
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_154(int iParam0, int iParam1) //Position: 0x4B7C / 19324
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

bool Function_155() //Position: 0x4BA1 / 19361
{
	return Function_45(Global_79962, 64);
}

void Function_156() //Position: 0x4BB0 / 19376
{
	Function_157(&Local_77 + 4);
	RELEASE_LAYOUT_REF(Local_77);
	return;
}

void Function_157(bool bParam0) //Position: 0x4BC2 / 19394
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_158(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x4BE8 / 19432
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

void Function_159(var uParam0, int iParam1) //Position: 0x4D16 / 19734
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_160(var uParam0, int iParam1) //Position: 0x4D30 / 19760
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_161(int iParam0) //Position: 0x4D4D / 19789
{
	Function_162(iParam0);
	return;
}

void Function_162(int iParam0) //Position: 0x4D58 / 19800
{
	if (StackVal >= 0)
	{
		Function_163(TO_FLOAT(StackVal), "XP_Coop_complete", 1);
		iParam0->f_8 = 0;
	}
	return;
}

int Function_163(float fParam0, bool bParam1, bool bParam2) //Position: 0x4D8A / 19850
{
	if (!Function_167())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_165(8, fParam0);
	}
	Function_164(487, (fParam0 * Global_3362), bParam1);
	return 1;
}

void Function_164(int iParam0, bool bParam1, int iParam2) //Position: 0x4DBA / 19898
{
	Function_50(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_165(int iParam0, float fParam1) //Position: 0x4DD6 / 19926
{
	Function_166(iParam0, (Function_99(iParam0) + fParam1));
	return;
}

void Function_166(int iParam0, float fParam1) //Position: 0x4DE9 / 19945
{
	(*&Global_78480 + 176)[iParam0] = fParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = fParam1;
	}
	return;
}

bool Function_167() //Position: 0x4E12 / 19986
{
	if (Function_65())
	{
		return (Function_149() != 1 || Function_149() != 0);
	}
	return 0;
}

void Function_168(bool bParam0, int iParam1) //Position: 0x4E2B / 20011
{
	Function_182(iParam1);
	Function_179(iParam1);
	if (bParam0)
	{
		Function_178(iParam1);
	}
	Function_176(iParam1);
	Function_173();
	Function_172();
	Function_169(&bLocal_545);
	return;
}

void Function_169(int iParam0) //Position: 0x4E56 / 20054
{
	Function_170(iParam0, 20081);
	return;
}

void Function_170(var uParam0, var uParam1) //Position: 0x4E65 / 20069
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_171() //Position: 0x4E71 / 20081
{
	return 0;
}

void Function_172() //Position: 0x4E78 / 20088
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_tum_sol_long_roaddetachedCurve16", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_loop_road", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_loop_01b_roaddetachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_mex_path", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve179", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve178", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve172", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve171", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve170", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve169", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve167", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18));
	SET_CURVE_WEIGHT(bVar0, 10);
	return;
}

void Function_173() //Position: 0x50D2 / 20690
{
	bool bVar0;
	bool bVar1;
	
	Function_175();
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage03_Cannon_1");
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage03_Cannon_2");
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	if (SQUAD_IS_VALID(Local_77.f_476))
	{
		Function_174(&Local_77 + 476);
	}
	return;
}

void Function_174(var uParam0) //Position: 0x5140 / 20800
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

void Function_175() //Position: 0x5187 / 20871
{
	if (IS_BLIP_VALID(bLocal_1030))
	{
		REMOVE_BLIP(bLocal_1030);
	}
	if (IS_BLIP_VALID(bLocal_1031))
	{
		REMOVE_BLIP(bLocal_1031);
	}
	return;
}

void Function_176(bool bParam0) //Position: 0x51AB / 20907
{
	if (Function_177(iLocal_1023))
	{
		if (bParam0)
		{
			TRAIN_RELEASE_TRAIN(iLocal_1023, 0);
		}
		else
		{
			TRAIN_DESTROY_TRAIN(iLocal_1023);
		}
	}
	return;
}

bool Function_177(int iParam0) //Position: 0x51CF / 20943
{
	bool bVar0;
	
	if (iParam0 != 4294967295)
	{
		if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
		{
			bVar0 = TRAIN_GET_CAR(iParam0, 0);
			if (IS_OBJECT_VALID(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_178(bool bParam0) //Position: 0x51F7 / 20983
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_948);
		}
		else
		{
			DESTROY_ACTOR(bLocal_948);
		}
	}
	if (IS_ACTOR_VALID(bLocal_949))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_949);
		}
		else
		{
			DESTROY_ACTOR(bLocal_949);
		}
	}
	if (IS_ACTOR_VALID(bLocal_950))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_950);
		}
		else
		{
			DESTROY_ACTOR(bLocal_950);
		}
	}
	if (IS_ACTOR_VALID(bLocal_951))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_951);
		}
		else
		{
			DESTROY_ACTOR(bLocal_951);
		}
	}
	if (IS_ACTOR_VALID(bLocal_952))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_952);
		}
		else
		{
			DESTROY_ACTOR(bLocal_952);
		}
	}
	return;
}

void Function_179(bool bParam0) //Position: 0x528E / 21134
{
	if (bParam0)
	{
		Function_180(&bLocal_1032, 0, 0);
		Function_180(&bLocal_1033, 0, 0);
	}
	else
	{
		Function_174(&bLocal_1032);
		Function_174(&bLocal_1033);
	}
	return;
}

void Function_180(var uParam0, bool bParam1, bool bParam2) //Position: 0x52B8 / 21176
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
				if (!Function_181(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_181(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5334 / 21300
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_182(bool bParam0) //Position: 0x534E / 21326
{
	GATEWAY_DISABLE(bLocal_1024, 1);
	if (bParam0)
	{
		RELEASE_OBJECT_REF(bLocal_1024);
	}
	else
	{
		DESTROY_OBJECT(bLocal_1024);
	}
	GATEWAY_DISABLE(bLocal_1025, 1);
	if (bParam0)
	{
		RELEASE_OBJECT_REF(bLocal_1025);
	}
	else
	{
		DESTROY_OBJECT(bLocal_1025);
	}
	Function_183();
	return;
}

void Function_183() //Position: 0x538D / 21389
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_184(int iParam0) //Position: 0x53B8 / 21432
{
	Function_191(iParam0);
	Function_189(iParam0);
	Function_188(iParam0);
	Function_187(iParam0);
	Function_186(iParam0);
	Function_185();
	return;
}

void Function_185() //Position: 0x53DA / 21466
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve2attachedCurve1", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_rat_tum_roaddetachedCurve2detachedCurve2detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_tum_underbridge_pathdetachedCurve2", 5));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_curve20", 5));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_rat_tum_roaddetachedCurve2detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve4detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve4", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_amr_gap_shortcut_road", 4));
	SET_CURVE_WEIGHT(bVar0, 10);
	return;
}

void Function_186(bool bParam0) //Position: 0x55EA / 21994
{
	if (SQUAD_IS_VALID(Local_77.f_484))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 484, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 484);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_492))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 492, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 492);
		}
	}
	Function_6(&iLocal_994, 128);
	return;
}

void Function_187(bool bParam0) //Position: 0x5642 / 22082
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_948);
		}
		else
		{
			DESTROY_ACTOR(bLocal_948);
		}
	}
	if (IS_ACTOR_VALID(bLocal_949))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_949);
		}
		else
		{
			DESTROY_ACTOR(bLocal_949);
		}
	}
	if (IS_ACTOR_VALID(bLocal_950))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_950);
		}
		else
		{
			DESTROY_ACTOR(bLocal_950);
		}
	}
	if (IS_ACTOR_VALID(bLocal_951))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_951);
		}
		else
		{
			DESTROY_ACTOR(bLocal_951);
		}
	}
	if (IS_ACTOR_VALID(bLocal_952))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_952);
		}
		else
		{
			DESTROY_ACTOR(bLocal_952);
		}
	}
	if (IS_ACTOR_VALID(bLocal_953))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_953);
		}
		else
		{
			DESTROY_ACTOR(bLocal_953);
		}
	}
	return;
}

void Function_188(bool bParam0) //Position: 0x56F6 / 22262
{
	GATEWAY_DISABLE(bLocal_993, 1);
	if (bParam0)
	{
		RELEASE_OBJECT_REF(bLocal_993);
	}
	else
	{
		DESTROY_OBJECT(bLocal_993);
	}
	REMOVE_BLIP(bLocal_1018);
	Function_183();
	return;
}

void Function_189(bool bParam0) //Position: 0x5720 / 22304
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_190();
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_Cannon_1");
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_Cannon_2");
	bVar2 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_1");
	bVar3 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_2");
	bVar4 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_3");
	bVar5 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_4");
	bVar6 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_5");
	bVar7 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_Mansion");
	if (IS_OBJECT_VALID(bVar0))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar0);
		}
		else
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	if (IS_OBJECT_VALID(bVar1))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar1);
		}
		else
		{
			DESTROY_OBJECT(bVar1);
		}
	}
	if (IS_OBJECT_VALID(bVar2))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar2);
		}
		else
		{
			DESTROY_OBJECT(bVar2);
		}
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar3);
		}
		else
		{
			DESTROY_OBJECT(bVar3);
		}
	}
	if (IS_OBJECT_VALID(bVar4))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar4);
		}
		else
		{
			DESTROY_OBJECT(bVar4);
		}
	}
	if (IS_OBJECT_VALID(bVar5))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar5);
		}
		else
		{
			DESTROY_OBJECT(bVar5);
		}
	}
	if (IS_OBJECT_VALID(bVar6))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar6);
		}
		else
		{
			DESTROY_OBJECT(bVar6);
		}
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(bVar7);
		}
		else
		{
			DESTROY_OBJECT(bVar7);
		}
	}
	return;
}

void Function_190() //Position: 0x58F7 / 22775
{
	REMOVE_BLIP(bLocal_1016);
	return;
}

void Function_191(bool bParam0) //Position: 0x5903 / 22787
{
	if (SQUAD_IS_VALID(Local_77.f_372))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 372, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 372);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_380))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 380, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 380);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_324))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 324, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 324);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_332))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 332, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 332);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_340))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 340, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 340);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_348))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 348, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 348);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_356))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 356, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 356);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_388))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 388, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 388);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_396))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 396, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 396);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_412))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 412, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 412);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_404))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 404, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 404);
		}
	}
	return;
}

void Function_192(int iParam0) //Position: 0x5AA0 / 23200
{
	Function_199(iParam0);
	Function_198(iParam0);
	Function_197(iParam0);
	Function_196(iParam0);
	Function_195(iParam0);
	Function_194();
	Function_193();
	iLocal_1086 = 0;
	return;
}

void Function_193() //Position: 0x5AC9 / 23241
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_pathdetachedCurve4", 5));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_pathdetachedCurve6", 5));
	SET_CURVE_WEIGHT(bVar0, 10);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_path", 5));
	SET_CURVE_WEIGHT(bVar0, 10);
	return;
}

void Function_194() //Position: 0x5B63 / 23395
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, "WeaponCrate_1");
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, "WeaponCrate_2");
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	return;
}

void Function_195(bool bParam0) //Position: 0x5BC5 / 23493
{
	if (SQUAD_IS_VALID(Local_77.f_480))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 480, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 480);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_488))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 488, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 488);
		}
	}
	Function_6(&iLocal_977, 64);
	return;
}

void Function_196(bool bParam0) //Position: 0x5C1D / 23581
{
	if (bParam0)
	{
		Function_180(&bLocal_973, 0, 0);
		Function_180(&bLocal_974, 0, 0);
	}
	else
	{
		Function_174(&bLocal_973);
		Function_174(&bLocal_974);
	}
	return;
}

void Function_197(bool bParam0) //Position: 0x5C47 / 23623
{
	GATEWAY_DISABLE(bLocal_975, 1);
	if (bParam0)
	{
		RELEASE_OBJECT_REF(bLocal_975);
	}
	else
	{
		DESTROY_OBJECT(bLocal_975);
	}
	GATEWAY_DISABLE(bLocal_976, 1);
	if (bParam0)
	{
		RELEASE_OBJECT_REF(bLocal_976);
	}
	else
	{
		DESTROY_OBJECT(bLocal_976);
	}
	Function_183();
	return;
}

void Function_198(bool bParam0) //Position: 0x5C86 / 23686
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_948);
		}
		else
		{
			DESTROY_ACTOR(bLocal_948);
		}
	}
	if (IS_ACTOR_VALID(bLocal_949))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_949);
		}
		else
		{
			DESTROY_ACTOR(bLocal_949);
		}
	}
	if (IS_ACTOR_VALID(bLocal_950))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_950);
		}
		else
		{
			DESTROY_ACTOR(bLocal_950);
		}
	}
	if (IS_ACTOR_VALID(bLocal_951))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_951);
		}
		else
		{
			DESTROY_ACTOR(bLocal_951);
		}
	}
	if (IS_ACTOR_VALID(bLocal_952))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_952);
		}
		else
		{
			DESTROY_ACTOR(bLocal_952);
		}
	}
	if (IS_ACTOR_VALID(bLocal_953))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_953);
		}
		else
		{
			DESTROY_ACTOR(bLocal_953);
		}
	}
	if (IS_ACTOR_VALID(bLocal_954))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_954);
		}
		else
		{
			DESTROY_ACTOR(bLocal_954);
		}
	}
	if (IS_ACTOR_VALID(bLocal_955))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_955);
		}
		else
		{
			DESTROY_ACTOR(bLocal_955);
		}
	}
	if (IS_ACTOR_VALID(bLocal_956))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_956);
		}
		else
		{
			DESTROY_ACTOR(bLocal_956);
		}
	}
	if (IS_ACTOR_VALID(bLocal_957))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_957);
		}
		else
		{
			DESTROY_ACTOR(bLocal_957);
		}
	}
	return;
}

void Function_199(bool bParam0) //Position: 0x5DAE / 23982
{
	if (IS_ACTOR_VALID(bLocal_968))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_968);
		}
		else
		{
			DESTROY_ACTOR(bLocal_968);
		}
	}
	if (IS_ACTOR_VALID(bLocal_969))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_969);
		}
		else
		{
			DESTROY_ACTOR(bLocal_969);
		}
	}
	if (IS_ACTOR_VALID(bLocal_970))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_970);
		}
		else
		{
			DESTROY_ACTOR(bLocal_970);
		}
	}
	if (IS_ACTOR_VALID(bLocal_971))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_971);
		}
		else
		{
			DESTROY_ACTOR(bLocal_971);
		}
	}
	if (IS_ACTOR_VALID(bLocal_972))
	{
		if (bParam0)
		{
			RELEASE_ACTOR(bLocal_972);
		}
		else
		{
			DESTROY_ACTOR(bLocal_972);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_308))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 308, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 308);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_312))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 308, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 308);
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_316))
	{
		if (bParam0)
		{
			Function_180(&Local_77 + 308, 0, 0);
		}
		else
		{
			Function_174(&Local_77 + 308);
		}
	}
	if (!bParam0)
	{
		Function_200(Local_77);
	}
	return;
}

var Function_200(bool bParam0) //Position: 0x5EC0 / 24256
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		LOG_ERROR("Failed to create iterator");
		return 4294967295;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ALIVE(bVar3))
			{
				if (GET_ACTOR_FACTION(bVar3) == 19)
				{
					DESTROY_ACTOR(bVar3);
					iVar1++;
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return iVar1;
}

void Function_201(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5F5F / 24415
{
	Global_13038 = bParam0;
	if (bParam1)
	{
		Function_10(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_10(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_202(bool bParam0) //Position: 0x5F8C / 24460
{
	if (!Function_203(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = bParam0;
	return;
}

bool Function_203(int iParam0) //Position: 0x5FB9 / 24505
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_204(bool bParam0) //Position: 0x5FD0 / 24528
{
	if (!Function_203(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

bool Function_205() //Position: 0x5FFF / 24575
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_206(bool bParam0, bool bParam1) //Position: 0x6019 / 24601
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("RFActorset", Local_77, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(Local_77.f_632, bVar0, 0, 1);
	bVar1 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_EVERYWHERE(bVar1);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_SET(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECTSET_VALID(bVar0))
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar2)))
			{
				if (bParam1)
				{
					RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(bVar2));
				}
				else
				{
					DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(bVar2));
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	DESTROY_OBJECTSET(bVar0);
	return;
}

void Function_207(bool bParam0) //Position: 0x60AB / 24747
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_208() //Position: 0x6103 / 24835
{
	int iVar0;
	
	iVar0 = 1;
	Function_1054();
	if (NET_IS_SESSION_HOST())
	{
		Function_1036();
	}
	if (Function_1035(&bLocal_545))
	{
		Function_423();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_422(StackVal, &Local_759, Local_761);
	}
	else if (UNK_0xA80C6DE6(&Local_759))
	{
		Function_422(StackVal, &Local_761, Local_759);
	}
	if (NET_IS_IN_SESSION())
	{
		if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
		{
			Function_421(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_773[GET_LOCAL_SLOT()10]), Local_763);
		}
	}
	if (iLocal_495 != 99)
	{
		Function_419(3);
		iVar0 = Function_265(&bLocal_545);
		Function_209(bLocal_937, Local_77, 25292, 1);
	}
	return iVar0;
}

int Function_209(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x6190 / 24976
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
						if (Function_210(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(uParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(uParam2);
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

int Function_210(bool bParam0) //Position: 0x6272 / 25202
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

void Function_211(bool bParam0) //Position: 0x62CC / 25292
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (0 == NET_OBJECT_GET_REPLICATION_MODE(bParam0))
		{
			return;
		}
		SET_ACTOR_FACTION(bParam0, 19);
		switch (NET_ACTOR_GET_SCRIPT_INT(bParam0))
		{
			case 0x00000050:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse01");
				break;
			
			case 0x00000051:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse02");
				break;
			
			case 0x00000052:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse03");
				break;
			
			case 0x00000053:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse04");
				break;
			
			case 0x00000054:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse05");
				break;
			
			case 0x00000055:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse06");
				break;
			
			case 0x00000056:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse07");
				break;
			
			case 0x00000057:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse08");
				break;
			
			case 0x00000058:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse09");
				break;
			
			case 0x00000059:
				Function_264(bParam0);
				Function_263(bParam0, "CONST_S01_ScoutHorse10");
				break;
			
			case 0x0000005A:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout01");
				break;
			
			case 0x0000005B:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout02");
				break;
			
			case 0x0000005C:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout03");
				break;
			
			case 0x0000005D:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout04");
				break;
			
			case 0x0000005E:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout05");
				break;
			
			case 0x0000005F:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout06");
				break;
			
			case 0x00000060:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout07");
				break;
			
			case 0x00000061:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout08");
				break;
			
			case 0x00000062:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout09");
				break;
			
			case 0x00000063:
				Function_262(bParam0);
				Function_260(bParam0, "CONST_S01_Scout10");
				break;
			
			case 0x00000046:
				Function_259(bParam0);
				break;
			
			case 0x00000047:
				Function_258(bParam0);
				break;
			
			case 0x00000048:
				Function_257(bParam0);
				break;
			
			case 0x00000064:
				Function_255(bParam0, "m_Stage02_GatlingGun_1");
				break;
			
			case 0x00000065:
				Function_255(bParam0, "m_Stage02_GatlingGun_2");
				break;
			
			case 0x00000066:
				Function_255(bParam0, "m_Stage02_GatlingGun_3");
				break;
			
			case 0x00000067:
				Function_255(bParam0, "m_Stage02_GatlingGun_4");
				break;
			
			case 0x00000068:
				Function_255(bParam0, "m_Stage02_GatlingGun_5");
				break;
			
			case 0x00000069:
				Function_253(bParam0);
				break;
			
			case 0x000000C9:
			case 0x000000CA:
			case 0x000000CB:
			case 0x000000CC:
			case 0x000000CD:
			case 0x000000CE:
			case 0x000000CF:
			case 0x000000D0:
			case 0x000000D1:
				Function_252(bParam0);
				SQUAD_JOIN(bParam0, Local_77.f_372);
				break;
			
			case 0x0000012D:
			case 0x0000012E:
			case 0x0000012F:
			case 0x00000130:
				Function_252(bParam0);
				SQUAD_JOIN(bParam0, Local_77.f_380);
				break;
			
			case 0x00000131:
				Function_255(bParam0, "m_Stage02_GatlingGun_1");
				break;
			
			case 0x00000132:
				Function_255(bParam0, "m_Stage02_GatlingGun_2");
				break;
			
			case 0x00000133:
				Function_255(bParam0, "m_Stage02_GatlingGun_3");
				SET_ACTOR_HEALTH(bParam0, 1.0f);
				break;
			
			case 0x00000134:
				Function_255(bParam0, "m_Stage02_GatlingGun_4");
				break;
			
			case 0x00000135:
				Function_255(bParam0, "m_Stage02_GatlingGun_5");
				break;
			
			case 0x00000191:
			case 0x00000192:
			case 0x00000193:
			case 0x00000194:
			case 0x00000195:
			case 0x00000196:
			case 0x00000197:
			case 0x00000198:
			case 0x00000199:
			case 0x0000019A:
			case 0x0000019B:
			case 0x0000019C:
				Function_247(bParam0);
				break;
			
			case 0x000001F5:
			case 0x000001F6:
			case 0x000001F7:
				Function_252(bParam0);
				SQUAD_JOIN(bParam0, Local_77.f_396);
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
				Function_245(&bParam0);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				break;
			
			case 0x00000259:
			case 0x0000025A:
			case 0x0000025B:
			case 0x0000025C:
			case 0x0000025D:
				Function_252(bParam0);
				SQUAD_JOIN(bParam0, Local_77.f_404);
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
				Function_245(&bParam0);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				break;
			
			case 0x000002BD:
			case 0x000002BE:
			case 0x000002BF:
			case 0x000002C0:
			case 0x000002C1:
				Function_252(bParam0);
				SQUAD_JOIN(bParam0, Local_77.f_412);
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
				Function_245(&bParam0);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				break;
			
			case 0x00000037:
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				SET_ACTOR_FACTION(bParam0, 19);
				Function_244(bParam0, 16);
				bLocal_968 = bParam0;
				break;
			
			case 0x00000041:
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				SET_ACTOR_FACTION(bParam0, 19);
				Function_244(bParam0, 16);
				bLocal_970 = bParam0;
				break;
			
			case 0x00000038:
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				SET_ACTOR_FACTION(bParam0, 19);
				Function_244(bParam0, 9);
				bLocal_969 = bParam0;
				break;
			
			case 0x00000042:
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				SET_ACTOR_FACTION(bParam0, 19);
				Function_244(bParam0, 9);
				bLocal_971 = bParam0;
				break;
			
			case 0x00000043:
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				SET_ACTOR_FACTION(bParam0, 19);
				Function_241(bParam0);
				bLocal_972 = bParam0;
				break;
			
			case 0x00000032:
				bLocal_948 = bParam0;
				SET_ACTOR_INVULNERABILITY(bLocal_948, 1);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_948, false);
				bLocal_949 = GET_DRAFT_ACTOR(false, bLocal_948);
				bLocal_950 = GET_DRAFT_ACTOR(true, bLocal_948);
				bLocal_951 = GET_DRAFT_ACTOR(2, bLocal_948);
				bLocal_952 = GET_DRAFT_ACTOR(3, bLocal_948);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_949, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_950, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_951, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_952, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_949, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_950, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_951, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_952, false);
				if (iLocal_495 == 0)
				{
					START_VEHICLE(bLocal_948);
					VEHICLE_SET_HANDBRAKE(bLocal_948, 0.0f);
					SET_VEHICLE_ALLOWED_TO_DRIVE(bLocal_948, 1);
				}
				if (iLocal_495 == 2)
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_948, 15.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_949, 15.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_950, 15.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_951, 15.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_952, 15.0f);
				}
				break;
			
			case 0x00000033:
				bLocal_949 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_949, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_949, false);
				if (iLocal_495 == 2)
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_949, 15.0f);
				}
				SET_ACTOR_FACTION(bLocal_949, 1);
				break;
			
			case 0x00000034:
				bLocal_950 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_950, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_950, false);
				if (iLocal_495 == 2)
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_950, 15.0f);
				}
				SET_ACTOR_FACTION(bLocal_950, 1);
				break;
			
			case 0x00000035:
				bLocal_951 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_951, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_951, false);
				if (iLocal_495 == 2)
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_951, 15.0f);
				}
				SET_ACTOR_FACTION(bLocal_951, 1);
				break;
			
			case 0x00000036:
				bLocal_952 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_952, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_952, false);
				if (iLocal_495 == 2)
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_952, 15.0f);
				}
				SET_ACTOR_FACTION(bLocal_952, 1);
				break;
			
			case 0x0000003C:
				bLocal_953 = bParam0;
				CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgb1", "ClimbOntoWagon", 0.4f, -0.05f, 3.4f, 0.0f, 0.0f, 0.0f);
				CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgb2", "ClimbOntoWagon", -0.45f, -0.05f, 3.4f, 0.0f, 0.0f, 0.0f);
				CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgs1", "ClimbOntoWagon", 1.75f, -0.05f, 0.2f, 0.0f, 90.0f, 0.0f);
				CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgs2", "ClimbOntoWagon", -1.75f, -0.05f, 0.2f, 0.0f, -90.0f, 0.0f);
				SET_ACTOR_INVULNERABILITY(bLocal_953, 1);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_953, false);
				bLocal_954 = GET_DRAFT_ACTOR(false, bLocal_953);
				bLocal_955 = GET_DRAFT_ACTOR(true, bLocal_953);
				bLocal_956 = GET_DRAFT_ACTOR(2, bLocal_953);
				bLocal_957 = GET_DRAFT_ACTOR(3, bLocal_953);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_954, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_955, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_956, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_957, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_954, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_955, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_956, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_957, false);
				if (iLocal_495 == 0)
				{
					START_VEHICLE(bLocal_953);
					VEHICLE_SET_HANDBRAKE(bLocal_953, 0.0f);
					SET_VEHICLE_ALLOWED_TO_DRIVE(bLocal_953, 1);
				}
				break;
			
			case 0x0000003D:
				bLocal_954 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_954, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_954, false);
				SET_ACTOR_FACTION(bLocal_954, 1);
				break;
			
			case 0x0000003E:
				bLocal_955 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_955, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_955, false);
				SET_ACTOR_FACTION(bLocal_955, 1);
				break;
			
			case 0x0000003F:
				bLocal_956 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_956, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_956, false);
				SET_ACTOR_FACTION(bLocal_956, 1);
				break;
			
			case 0x00000040:
				bLocal_957 = bParam0;
				SET_ACTOR_UPDATE_PRIORITY(bLocal_957, false);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_957, false);
				SET_ACTOR_FACTION(bLocal_957, 1);
				break;
			
			case 0x00000321:
				Function_236(&bParam0);
				break;
			
			case 0x00000322:
				Function_236(&bParam0);
				break;
			
			case 0x00000323:
				Function_236(&bParam0);
				break;
			
			case 0x00000324:
				Function_236(&bParam0);
				break;
			
			case 0x00000325:
				Function_235(&bParam0);
				break;
			
			case 0x00000326:
				Function_235(&bParam0);
				break;
			
			case 0x00000327:
				Function_235(&bParam0);
				break;
			
			case 0x00000385:
				Function_234(&bParam0, 9, 7, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_420);
				break;
			
			case 0x00000386:
				Function_234(&bParam0, 10, 2, bLocal_1083);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_424);
				break;
			
			case 0x00000387:
				Function_212(&bParam0, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_428);
				break;
			
			case 0x00000388:
				Function_234(&bParam0, 9, 7, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_432);
				break;
			
			case 0x00000389:
				Function_234(&bParam0, 10, 2, bLocal_1083);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_436);
				break;
			
			case 0x0000038A:
				Function_212(&bParam0, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_440);
				break;
			
			case 0x0000038B:
				Function_234(&bParam0, 9, 7, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_444);
				break;
			
			case 0x0000038C:
				Function_234(&bParam0, 10, 2, bLocal_1083);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_448);
				break;
			
			case 0x0000038D:
				Function_212(&bParam0, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_452);
				break;
			
			case 0x0000038E:
				Function_234(&bParam0, 9, 7, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_456);
				break;
			
			case 0x0000038F:
				Function_234(&bParam0, 10, 2, bLocal_1083);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_460);
				break;
			
			case 0x00000390:
				Function_212(&bParam0, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_464);
				break;
			
			case 0x00000391:
				Function_234(&bParam0, 9, 7, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_468);
				break;
			
			case 0x00000392:
				Function_212(&bParam0, bLocal_1082);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_472);
				break;
			
			case 0x00000393:
				Function_234(&bParam0, 12, 6, bLocal_1083);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, Local_77.f_476);
				break;
			
			case 0x000003E8:
				Function_234(&bParam0, 9, 7, bLocal_1084);
				Function_228(&bParam0);
				SET_ACTOR_FACTION(bParam0, 19);
				ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
				SQUAD_JOIN(bParam0, bLocal_1032);
				break;
			}
	}
	return;
}

void Function_212(bool bParam0, bool bParam1) //Position: 0x718B / 29067
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_227(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 3.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 4);
				Function_226(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_225(bParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_227(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 5);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, 9, 0);
				break;
			
			case 0x00000002:
				Function_224(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 6);
				Function_226(bParam0, 2.0f);
				Function_225(bParam0, 10, 1);
				break;
			
			case 0x00000003:
				Function_220(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 11);
				Function_226(bParam0, 3.0f);
				Function_225(bParam0, 11, 2);
				break;
			
			case 0x00000004:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 45.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 9, 30.0f);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 11);
				Function_226(bParam0, 4.0f);
				Function_225(bParam0, 11, 2);
				break;
			
			case 0x00000005:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 9, 15.0f);
				AI_SET_BURST_DURATION(*bParam0, 1.5f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 5);
				Function_226(bParam0, 5.0f);
				Function_225(bParam0, 18, 3);
				break;
		}
		Function_213(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SUPPRESSION was passed an invalid actor");
	}
	return;
}

void Function_213(int iParam0) //Position: 0x7371 / 29553
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
			if (Function_214(bVar1) >= 0)
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

int Function_214(int iParam0) //Position: 0x74D9 / 29913
{
	if (Function_219(iParam0))
	{
		if (Function_215(iParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_215(bool bParam0, int iParam1, bool bParam2) //Position: 0x74FB / 29947
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_218(iParam1, bParam2);
	}
	if (!Function_217(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_216(iParam1), 64);
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

var Function_216(int iParam0) //Position: 0x757C / 30076
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

bool Function_217(bool bParam0) //Position: 0x7895 / 30869
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

bool Function_218(int iParam0, bool bParam1) //Position: 0x7936 / 31030
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_219(bool bParam0) //Position: 0x7956 / 31062
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_217(bParam0);
}

void Function_220(bool bParam0) //Position: 0x796C / 31084
{
	Function_222(bParam0);
	Function_221(bParam0, 1);
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

void Function_221(bool bParam0, int iParam1) //Position: 0x7AF4 / 31476
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_222(bool bParam0) //Position: 0x7B27 / 31527
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
	Function_223(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_223(var uParam0, bool bParam1) //Position: 0x7E8B / 32395
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

void Function_224(bool bParam0) //Position: 0x7EAD / 32429
{
	Function_222(bParam0);
	Function_221(bParam0, 1);
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

void Function_225(var uParam0, bool bParam1, bool bParam2) //Position: 0x8009 / 32777
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

void Function_226(var uParam0, float fParam1) //Position: 0x803B / 32827
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_ALIVE(*uParam0) && fParam1 < 0.0f)
		{
			bVar0 = (18.0f * fParam1);
			SET_ACTOR_MAX_HEALTH(*uParam0, bVar0);
			SET_ACTOR_HEALTH(*uParam0, bVar0);
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

void Function_227(bool bParam0) //Position: 0x8106 / 33030
{
	Function_222(bParam0);
	Function_221(bParam0, 1);
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

void Function_228(bool bParam0) //Position: 0x8244 / 33348
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_229(&bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_229(bool bParam0) //Position: 0x8286 / 33414
{
	SET_ACTOR_VISION_XRAY(*bParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(*bParam0, 359.0f);
	MEMORY_IDENTIFY(*bParam0, bLocal_948);
	Function_245(bParam0);
	MEMORY_REPORT_POSITION_AUTO(*bParam0, bLocal_948, 1);
	AI_GOAL_LOOK_AT_ACTOR(*bParam0, bLocal_948, 0, 1065353216, 3212836864, 3212836864, 0);
	SET_ACTOR_UPDATE_PRIORITY(*bParam0, true);
	Function_230(*bParam0, bLocal_948);
	return;
}

void Function_230(var uParam0, bool bParam1) //Position: 0x82EF / 33519
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_231(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_231(bool bParam0, vector3 vParam1) //Position: 0x8309 / 33545
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_232(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_232(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_232(bool bParam0, vector3 vParam1) //Position: 0x8341 / 33601
{
	vector3 vVar0;
	
	Function_233(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_233(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_233(bool bParam0) //Position: 0x83C4 / 33732
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_234(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x83D5 / 33749
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam3)
		{
			case 0x00000000:
				Function_227(*bParam0);
				Function_226(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_225(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000001:
				Function_227(*bParam0);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000002:
				Function_224(*bParam0);
				Function_226(bParam0, 2.0f);
				Function_225(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000003:
				Function_220(*bParam0);
				Function_226(bParam0, 3.0f);
				Function_225(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000004:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				Function_226(bParam0, 4.0f);
				Function_225(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000005:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_226(bParam0, 5.0f);
				Function_225(bParam0, bParam1, bParam2);
				break;
		}
		Function_213(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ASSAULT was passed an invalid actor");
	}
}

void Function_235(bool bParam0) //Position: 0x8531 / 34097
{
	bool bVar0;
	
	SET_ACTOR_UPDATE_PRIORITY(*bParam0, false);
	Function_234(bParam0, 9, 7, iLocal_1081);
	SQUAD_JOIN(*bParam0, bLocal_1032);
	if (!ACTOR_HAS_WEAPON(*bParam0, 7))
	{
		GIVE_WEAPON_TO_ACTOR(*bParam0, 7, 0, 1, 1);
	}
	if (!ACTOR_HAS_WEAPON_IN_HAND(*bParam0, 7))
	{
		ACTOR_PUT_WEAPON_IN_HAND(*bParam0, 7, 0);
	}
	MEMORY_ALLOW_SHOOTING(*bParam0, 0);
	MEMORY_ALLOW_THROWING_EXPLOSIVES(*bParam0, 0);
	SET_ACTOR_FACTION(*bParam0, 1);
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(*bParam0);
	if (bVar0 == 805)
	{
		TASK_POINT_GUN_AT_COORD(*bParam0, &Local_77 + 1500, -1.0f);
	}
	else if (bVar0 == 806)
	{
		TASK_POINT_GUN_AT_COORD(*bParam0, &Local_77 + 1132, -1.0f);
	}
	else if (bVar0 == 807)
	{
		TASK_POINT_GUN_AT_COORD(*bParam0, &Local_77 + 1156, -1.0f);
	}
	TASK_PRIORITY_SET(*bParam0, 1);
	return;
}

void Function_236(bool bParam0) //Position: 0x85E1 / 34273
{
	SET_ACTOR_UPDATE_PRIORITY(*bParam0, false);
	Function_234(bParam0, 9, 7, iLocal_1081);
	if (!Function_240(*bParam0, Local_77.f_416, 1))
	{
		SQUAD_JOIN(*bParam0, Local_77.f_416);
	}
	if (!ACTOR_HAS_WEAPON(*bParam0, 7))
	{
		GIVE_WEAPON_TO_ACTOR(*bParam0, 7, 0, 1, 1);
	}
	if (!ACTOR_HAS_WEAPON_IN_HAND(*bParam0, 7))
	{
		ACTOR_PUT_WEAPON_IN_HAND(*bParam0, 7, 0);
	}
	MEMORY_ALLOW_SHOOTING(*bParam0, 0);
	MEMORY_ALLOW_THROWING_EXPLOSIVES(*bParam0, 0);
	SET_ACTOR_FACTION(*bParam0, 1);
	TASK_CLEAR(*bParam0);
	TASK_STAND_STILL(*bParam0, -1.0f, 0, 0);
	Function_237(*bParam0, 0, 1);
	return;
}

int Function_237(bool bParam0, bool bParam1, bool bParam2) //Position: 0x866A / 34410
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, Function_239()))
	{
		if (!SET_ANIM_SET_FOR_ACTOR(bParam0, Function_239(), 0))
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
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_238());
	}
	TASK_ACTION_PERFORM(bParam0, Function_238());
	return 1;
}

var Function_238() //Position: 0x86AC / 34476
{
	return "MP_Showdown/Idles";
}

bool Function_239() //Position: 0x86C6 / 34502
{
	return "mp_showdown";
}

bool Function_240(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86DA / 34522
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_241(bool bParam0) //Position: 0x871A / 34586
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_242(&bParam0, iLocal_1076);
	}
	else
	{
		LOG_ERROR("SETUP_S01_GUNNER was passed an invalid actor");
	}
	return;
}

void Function_242(bool bParam0, bool bParam1) //Position: 0x8765 / 34661
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_243(*bParam0);
				AI_SET_BURST_DURATION(*bParam0, 2.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 5);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 70.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 0);
				Function_226(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_225(bParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_227(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*bParam0, 3.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 10);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 75.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 0);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, 9, 0);
				break;
			
			case 0x00000002:
				Function_224(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*bParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 15);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 100.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_226(bParam0, 2.0f);
				Function_225(bParam0, 10, 1);
				break;
			
			case 0x00000003:
				Function_220(*bParam0);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 30.0f);
				AI_SET_BURST_DURATION(*bParam0, 5.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 20);
				Function_226(bParam0, 3.0f);
				Function_225(bParam0, 11, 2);
				break;
			
			case 0x00000004:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 45.0f);
				AI_SET_BURST_DURATION(*bParam0, 6.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 25);
				Function_226(bParam0, 4.0f);
				Function_225(bParam0, 11, 2);
				break;
			
			case 0x00000005:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 200.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 60.0f);
				AI_SET_BURST_DURATION(*bParam0, 7.0f);
				AI_SET_SHOTS_PER_BURST(*bParam0, 30);
				Function_226(bParam0, 5.0f);
				Function_225(bParam0, 18, 3);
				break;
		}
		Function_213(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_GATLING was passed an invalid actor");
	}
	return;
}

void Function_243(bool bParam0) //Position: 0x89AF / 35247
{
	Function_222(bParam0);
	Function_221(bParam0, 1);
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

void Function_244(bool bParam0, bool bParam1) //Position: 0x8AE1 / 35553
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_234(&bParam0, bParam1, 5, iLocal_1075);
	}
	else
	{
		LOG_ERROR("SETUP_S01_DD_ASSAULT was passed an invalid actor");
	}
	return;
}

void Function_245(bool bParam0) //Position: 0x8B33 / 35635
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					MEMORY_IDENTIFY(*bParam0, GET_SLOT_ACTOR(bVar0));
					MEMORY_REPORT_POSITION_AUTO(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
					MEMORY_CONSIDER_AS(*bParam0, GET_SLOT_ACTOR(bVar0), 4);
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

var Function_246() //Position: 0x8BD4 / 35796
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

void Function_247(bool bParam0) //Position: 0x8C40 / 35904
{
	AI_ENABLE_PERCEPTION(bParam0);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 360.0f);
	SET_ACTOR_VISION_XRAY(bParam0, 1);
	ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	SQUAD_JOIN(bParam0, Local_77.f_388);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bParam0);
	switch (NET_ACTOR_GET_SCRIPT_INT(bParam0))
	{
		case 0x00000191:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4074.771f, 35.13676f, 2947.963f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 12);
			break;
		
		case 0x00000192:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4074.531f, 35.394f, 2940.01f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 12);
			break;
		
		case 0x00000193:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4074.4f, 35.33663f, 2944.645f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 12);
			break;
		
		case 0x00000194:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4080.0f, 34.83884f, 2966.111f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 17);
			break;
		
		case 0x00000195:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4088.801f, 35.01467f, 2967.748f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 17);
			break;
		
		case 0x00000196:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4055.908f, 30.97161f, 2956.093f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 17);
			break;
		
		case 0x00000197:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4060.59f, 31.10226f, 2965.095f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 10);
			break;
		
		case 0x00000198:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4063.552f, 31.55387f, 2969.799f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 10);
			break;
		
		case 0x00000199:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4065.956f, 31.98018f, 2953.346f, 10.0f, 0, -1.0f);
			}
			Function_250(bParam0, 10);
			break;
		
		case 0x0000019A:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4065.747f, 31.84446f, 2957.234f, 10.0f, 0, -1.0f);
			}
			Function_248(bParam0);
			break;
		
		case 0x0000019B:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4078.846f, 32.98218f, 2985.153f, 10.0f, 0, -1.0f);
			}
			Function_248(bParam0);
			break;
		
		case 0x0000019C:
			if (Function_12(iLocal_994, 2048))
			{
				TASK_GO_NEAR_ACTORSET(bParam0, Function_246(), 25.0f, 4);
			}
			else
			{
				Function_251(bParam0, -4057.28f, 31.01956f, 2960f, 10.0f, 0, -1.0f);
			}
			Function_248(bParam0);
			break;
	}
	return;
}

void Function_248(bool bParam0) //Position: 0x8FEE / 36846
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_249(&bParam0, 24, iLocal_1078);
	}
	else
	{
		LOG_ERROR("SETUP_S02_THROWER was passed an invalid actor");
	}
	return;
}

void Function_249(bool bParam0, bool bParam1, bool bParam2) //Position: 0x903C / 36924
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (bParam2)
		{
			case 0x00000000:
				Function_227(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 10.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 50.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 12.0f, 6.0f);
				Function_226(bParam0, 0.5f);
				Function_225(bParam0, bParam1, 4);
				break;
			
			case 0x00000001:
				Function_227(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 20.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 75.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 9.0f, 5.0f);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, bParam1, 5);
				break;
			
			case 0x00000002:
				Function_224(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 30.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 9.0f, 5.0f);
				Function_226(bParam0, 2.0f);
				Function_225(bParam0, bParam1, 5);
				break;
			
			case 0x00000003:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 40.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 7.0f, 4.0f);
				Function_226(bParam0, 3.0f);
				Function_225(bParam0, bParam1, 5);
				break;
			
			case 0x00000004:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 5.0f, 3.0f);
				Function_226(bParam0, 4.0f);
				Function_225(bParam0, bParam1, 6);
				break;
			
			case 0x00000005:
				Function_220(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*bParam0, 3.0f, 2.0f);
				Function_226(bParam0, 5.0f);
				Function_225(bParam0, bParam1, 7);
				break;
		}
		Function_213(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_THROWER was passed an invalid actor");
	}
	return;
}

void Function_250(bool bParam0, bool bParam1) //Position: 0x928F / 37519
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_234(&bParam0, bParam1, 5, iLocal_1078);
	}
	else
	{
		LOG_ERROR("SETUP_S02_ASSAULT was passed an invalid actor");
	}
	return;
}

void Function_251(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6) //Position: 0x92DE / 37598
{
	bool bVar0;
	
	bVar0 = FIND_NEAREST_COVER_LOCATION(&fParam1, fParam4, GET_HEADING(bParam0), 120.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(bParam0));
		PRINTSTRING(", shooting from position instead.");
		PRINTNL();
		TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &fParam1, 0.0f, fParam6);
		TASK_PRIORITY_SET(bParam0, iParam5);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(bParam0, bVar0, fParam6, 1086324736);
		TASK_PRIORITY_SET(bParam0, iParam5);
	}
}

void Function_252(bool bParam0) //Position: 0x9386 / 37766
{
	switch (NET_ACTOR_GET_SCRIPT_INT(bParam0))
	{
		case 0x000000C9:
		case 0x0000012D:
		case 0x000001F5:
		case 0x00000259:
		case 0x000002BD:
		case 0x000000CC:
		case 0x00000130:
		case 0x0000025C:
		case 0x000002C0:
		case 0x000000CF:
			Function_250(bParam0, 9);
			break;
		
		case 0x000000CA:
		case 0x0000012E:
		case 0x000001F6:
		case 0x0000025A:
		case 0x000002BE:
		case 0x000000CD:
		case 0x0000025D:
		case 0x000002C1:
		case 0x000000D0:
			Function_250(bParam0, 17);
			break;
		
		case 0x000000CB:
		case 0x0000012F:
		case 0x000001F7:
		case 0x0000025B:
		case 0x000002BF:
		case 0x000000CE:
		case 0x000000D1:
			Function_250(bParam0, 12);
			break;
	}
	return;
}

void Function_253(bool bParam0) //Position: 0x9450 / 37968
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_Mansion");
	SQUAD_JOIN(bParam0, Local_77.f_364);
	ADD_ACTORSET_MEMBER(Local_77.f_360, bParam0);
	Function_242(&bParam0, 5);
	Function_254(&bParam0, &bVar0);
	AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(bParam0, 180.0f);
	ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	return;
}

int Function_254(bool bParam0, bool bParam1) //Position: 0x94B5 / 38069
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(*bParam0, false);
		if (IS_OBJECT_VALID(*bParam1))
		{
			TASK_USE_TURRET(*bParam0, *bParam1, -1.0f);
			TASK_PRIORITY_SET(*bParam0, 1);
			AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(*bParam0, 180.0f);
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

void Function_255(var uParam0, bool bParam1) //Position: 0x94FD / 38141
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_77, bParam1);
	Function_254(&uParam0, &bVar0);
	Function_256(uParam0);
	return;
}

void Function_256(bool bParam0) //Position: 0x9519 / 38169
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_242(&bParam0, bLocal_1080);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, 1);
		SET_ACTOR_VISION_XRAY(bParam0, 1);
		SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
		SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 359.0f);
		Function_245(&bParam0);
	}
	else
	{
		LOG_ERROR("SETUP_S02_GUNNER was passed an invalid actor");
	}
	return;
}

void Function_257(bool bParam0) //Position: 0x958F / 38287
{
	if (IS_ACTOR_VALID(bParam0))
	{
		ACCESSORIZE_HORSE(bParam0, 3);
		SET_ACTOR_FACTION(bParam0, 1);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
	}
	return;
}

void Function_258(bool bParam0) //Position: 0x95B2 / 38322
{
	char* cVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		cVar0 = GET_ACTOR_NAME(bParam0);
		MEMORY_ALLOW_SHOOTING(bParam0, 0);
		MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 0);
		SET_ACTOR_FACTION(bParam0, 20);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(20, Function_41());
		SET_ACTOR_CAN_BE_TARGETED(bParam0, false);
		SET_ALLOW_DEADEYE_LOCKS(bParam0, false);
	}
	return;
}

void Function_259(bool bParam0) //Position: 0x95EE / 38382
{
	char* cVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		cVar0 = GET_ACTOR_NAME(bParam0);
		MEMORY_ALLOW_SHOOTING(bParam0, 0);
		MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 0);
		SET_ACTOR_FACTION(bParam0, 20);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(20, Function_41());
		SET_ACTOR_CAN_BE_TARGETED(bParam0, false);
		SET_ALLOW_DEADEYE_LOCKS(bParam0, false);
	}
	return;
}

void Function_260(bool bParam0, bool bParam1) //Position: 0x962A / 38442
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, bParam1);
	Function_261(bVar0, bParam0);
	return;
}

void Function_261(bool bParam0, bool bParam1) //Position: 0x9640 / 38464
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!IS_ACTOR_MOUNTED(bParam1))
		{
			ACTOR_MOUNT_ACTOR(bParam0, bParam1);
		}
	}
	return;
}

void Function_262(bool bParam0) //Position: 0x9665 / 38501
{
	SQUAD_JOIN(bParam0, bLocal_974);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, true);
	return;
}

void Function_263(var uParam0, bool bParam1) //Position: 0x9679 / 38521
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, bParam1);
	Function_261(uParam0, bVar0);
	return;
}

void Function_264(bool bParam0) //Position: 0x968F / 38543
{
	SET_ACTOR_FACTION(bParam0, 19);
	Function_234(&bParam0, 9, 5, iLocal_1077);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SQUAD_JOIN(bParam0, bLocal_973);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, true);
	return;
}

int Function_265(bool bParam0) //Position: 0x96CD / 38605
{
	int iVar0;
	
	Function_416();
	Function_415();
	if (!iLocal_1068 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_1068 = 1;
	}
	if (Function_414(bParam0))
	{
		if (!((((((iLocal_496 != 0 || iLocal_496 != 1) || iLocal_496 != 2) || iLocal_496 != 3) || iLocal_496 != 4) || iLocal_496 != 5) || iLocal_496 != 105))
		{
			if (Function_412())
			{
				NET_LOG(bLocal_934, "Local State", "All players have run out of lives, ending", false, false, false, false);
				Function_381(bParam0, "COOP_failed_everyone_dead", "GEN_DEATH_01");
			}
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_381(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	iVar0 = Function_266(bParam0);
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

int Function_266(bool bParam0) //Position: 0x97F2 / 38898
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
		bParam0->f_64 = Function_380((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_379())
	{
		if (bVar1)
		{
			switch (Function_377())
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
	if (Function_376(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
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
					if (Function_375() && IS_PS3())
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
	if (((Function_376(bParam0) && Function_374(4096)) && Function_167()) && !Function_40(32768))
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
					bParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, true))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					Function_373(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_372(4096);
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
	fVar8 = Function_371();
	if (bVar1)
	{
		bVar9 = Function_370(bVar0);
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
			if ((Function_368(8192) || Function_45(bParam0->f_48, 512)) && !Function_218(1, 1))
			{
				iVar6 = Function_367(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_45(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_10(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(false, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_365("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_166(2, NET_GET_NET_TIME());
								Function_363(3, 1);
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
						if (!Function_218(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_7(bParam0 + 48, 512);
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
				else if (Function_218(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_46(8388608, 0);
					}
				}
			}
			if (Function_362(bParam0 + 116, &Global_78617 + 2648))
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
						Function_361(bParam0 + 116, &Global_78617 + 2648);
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
					Function_360(bParam0->f_188, bVar0);
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
				Function_359(0);
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
			if (Function_358(bParam0 + 116, &Global_78617 + 2648))
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
			Function_354(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_338(bParam0, bParam0->f_12 != 0);
			}
			Function_336(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_336(bParam0, 1);
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
			Function_336(bParam0, 1);
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
			Function_336(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_335();
				Function_30(32, 0, 1);
				Function_39(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_336(bParam0, 1);
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
						if (!Function_218(16384, 1))
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
					Function_336(bParam0, 1);
				}
			}
			else
			{
				Function_336(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_336(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_334(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				if (!Function_45(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_10(bParam0 + 48, 8);
				}
				if (Function_329(StackVal, Function_45(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_314(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_45(bParam0->f_48, 32), 1))
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
				Function_313(bVar0);
				if (Function_45(bParam0->f_44, 32))
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
			if (!Function_310(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_309(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_45(bParam0->f_44, 8))
				{
					Function_308(bParam0 + 192, 0, 1, 1);
					Function_302(bParam0 + 192);
					Function_293(&bVar0, 0, 0, 0);
					Function_293(&bVar0, 0, 0, 0);
					Function_292(bVar0);
				}
				else
				{
					Function_308(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_233(bVar0);
					vVar10 = { StackVal, StackVal, Function_233(bVar0) };
					bVar13 = Function_291(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_290(bVar13))
					{
						if (StackVal || Function_167() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_286(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_285(&(Global_29008[StackVal]), 4194304);
				}
				Function_372(32);
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
				Function_372(32);
				Function_286(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_290(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_283(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_283(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_283(&(Global_29008[StackVal]), 4194304))
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
					if (Function_290(bVar14))
					{
						if (StackVal && (!Function_284(bVar14) && !Function_283(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_282(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_281();
			if (!Function_45(bParam0->f_44, 32))
			{
				if (Function_280())
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
						bVar15 = Function_279(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_279(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_279(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_279(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_279(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_279(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_279(bVar0, 46);
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
					Function_278(0.5f);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_46(16384, 0);
			Function_277(bVar0, !Function_45(bParam0->f_44, 96));
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
			Function_336(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_39(1);
			}
			else if (!Function_275())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_268(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_267(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_336(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_336(bParam0, 1);
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
			Function_336(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_334(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_336(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_334(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_336(bParam0, 1);
			if (Function_275())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_334(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_267(int iParam0) //Position: 0xA8AD / 43181
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_268(int iParam0) //Position: 0xA8C9 / 43209
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
			if (Function_274(&Global_78578 + 96))
			{
				if (FABS(Function_269(&Global_78578 + 96)) > 1.0f)
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

float Function_269(int iParam0) //Position: 0xA9BA / 43450
{
	return -Function_270(iParam0);
}

float Function_270(bool bParam0) //Position: 0xA9C6 / 43462
{
	if (Function_274(bParam0))
	{
		if (Function_273(bParam0))
		{
			return StackVal;
		}
		Function_271();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_271() //Position: 0xAA97 / 43671
{
	if (!Function_272())
	{
	}
	return;
}

bool Function_272() //Position: 0xAAA4 / 43684
{
	return NET_IS_IN_SESSION();
}

bool Function_273(bool bParam0) //Position: 0xAAAD / 43693
{
	return Function_45(*bParam0, 2);
}

bool Function_274(bool bParam0) //Position: 0xAABA / 43706
{
	return Function_45(*bParam0, 1);
}

bool Function_275() //Position: 0xAAC7 / 43719
{
	return (HUD_IS_FADED() || Function_276(0));
}

bool Function_276(bool bParam0) //Position: 0xAAD5 / 43733
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

void Function_277(bool bParam0, int iParam1) //Position: 0xAB79 / 43897
{
	struct<5> Var0;
	
	Function_46(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_374(256))
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

void Function_278(bool bParam0) //Position: 0xABCF / 43983
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

int Function_279(bool bParam0, int iParam1) //Position: 0xABEC / 44012
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_280() //Position: 0xABFD / 44029
{
	return !Function_167();
}

void Function_281() //Position: 0xAC07 / 44039
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

void Function_282(bool bParam0) //Position: 0xAC46 / 44102
{
	if (!Function_290(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_285(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_283(var uParam0, int iParam1) //Position: 0xACA1 / 44193
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_284(bool bParam0) //Position: 0xACBD / 44221
{
	if (!Function_290(bParam0))
	{
		return 1;
	}
	return Function_283(&(Global_29008[bParam0]), 4);
}

void Function_285(var uParam0, int iParam1) //Position: 0xACD9 / 44249
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_286(int iParam0, bool bParam1, int iParam2) //Position: 0xACE8 / 44264
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
		if (Function_290(Global_29006))
		{
			Function_285(&(Global_29008[Global_29006]), 131072);
			Function_289(&(Global_29008[Global_29006]), 2097152);
			Function_287(Global_29006);
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
				if (Function_283(&(Global_29008[iVar0]), 4) || Function_283(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_289(&(Global_29008[iVar0]), 2097155);
					Function_285(&(Global_29008[iVar0]), 262144);
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

void Function_287(int iParam0) //Position: 0xADF3 / 44531
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_288())
			{
				return;
			}
		}
		if (!Function_283(&(Global_29008[iParam0]), 2048))
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

bool Function_288() //Position: 0xAE72 / 44658
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_283(&(Global_29008[iVar0]), 4) || Function_283(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_289(var uParam0, int iParam1) //Position: 0xAEDB / 44763
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_290(bool bParam0) //Position: 0xAEF2 / 44786
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_291(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xAF08 / 44808
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

void Function_292(bool bParam0) //Position: 0xAFA3 / 44963
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

var Function_293(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xAFD6 / 45014
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
					if (Function_301(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_300(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_299(bVar2))
					{
						if (Function_298(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_301(bVar3, 1))
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
						if (Function_301(bVar3, 1))
						{
							bVar24 = (Function_300(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
							Function_294(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_301(bVar3, 1))
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

void Function_294(var uParam0, int iParam1) //Position: 0xB2B9 / 45753
{
	*iParam1 = Function_295(uParam0, Function_296(), 0);
	iParam1->f_4 = Function_295(uParam0, Function_296() + 8, Function_296());
	return;
}

var Function_295(var uParam0, int iParam1, bool bParam2) //Position: 0xB2DC / 45788
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_133((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_296() //Position: 0xB2FB / 45819
{
	return Function_297(39);
}

int Function_297(bool bParam0) //Position: 0xB306 / 45830
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

bool Function_298(bool bParam0) //Position: 0xB334 / 45876
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

bool Function_299(bool bParam0) //Position: 0xB356 / 45910
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_300(int iParam0, bool bParam1) //Position: 0xB368 / 45928
{
	if (Function_301(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_301(bool bParam0, int iParam1) //Position: 0xB382 / 45954
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_302(int iParam0) //Position: 0xB395 / 45973
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_305(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_41()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_304(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_303(StackVal, Var0, 1, 1, 0);
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
				Function_294(uVar3, &Var13);
				Function_303(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_303(struct<5> Param0) //Position: 0xB43C / 46140
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_299(Param0))
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
			if (Function_301(bVar1, 1))
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

bool Function_304(int iParam0) //Position: 0xB4BC / 46268
{
	return Function_12(Global_83864.f_1252, iParam0);
}

void Function_305(int iParam0, int iParam1) //Position: 0xB4CE / 46286
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
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_306(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_306(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_306(23, iParam1))
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
			bVar4 = Function_279(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_279(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_306(int iParam0, int iParam1) //Position: 0xB64B / 46667
{
	return Function_307(iParam0, iParam1) < 4294967295;
}

int Function_307(int iParam0, int iParam1) //Position: 0xB65A / 46682
{
	int iVar0;
	
	if (!Function_299(iParam0))
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

void Function_308(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xB68D / 46733
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
		Function_303(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_309(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB6D8 / 46808
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

bool Function_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xB775 / 46965
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
	return Function_311(bParam0, iVar0);
}

bool Function_311(bool bParam0, int iParam1) //Position: 0xB7E4 / 47076
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_312(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_312(iParam1, 64))
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

bool Function_312(var uParam0, int iParam1) //Position: 0xB8BD / 47293
{
	return (uParam0 && iParam1) == 0;
}

void Function_313(bool bParam0) //Position: 0xB8CA / 47306
{
	Function_46(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_314(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0xB8EB / 47339
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_41();
	Function_325();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_324();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_311(bVar0, 3145855);
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
		bVar9 = Function_374(256);
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
		Function_321(bVar0, 0);
		Function_316();
		Function_315(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_291(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_290(bVar14))
			{
				Var10.f_4 = bVar14;
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

void Function_315(char* cParam0, vector3 vParam1) //Position: 0xBA62 / 47714
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_316() //Position: 0xBAA0 / 47776
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_320(iVar1))
		{
			uVar2 = Function_319(iVar1);
			Function_317(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_317(int iParam0, bool bParam1) //Position: 0xBAD2 / 47826
{
	if (!Function_320(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_318(222, Global_26401[iParam0], 0);
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
		Function_318((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_318(222, bParam1, 0);
	}
	return;
}

int Function_318(int iParam0, bool bParam1, int iParam2) //Position: 0xBB5B / 47963
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

int Function_319(int iParam0) //Position: 0xBD56 / 48470
{
	if (!Function_320(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_320(int iParam0) //Position: 0xBD6E / 48494
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_321(bool bParam0, bool bParam1) //Position: 0xBD83 / 48515
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_323(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_368(8192) && !Function_218(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_167())
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
	if (Function_322())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_322() //Position: 0xBE8B / 48779
{
	return Function_45(Global_79962, 2048);
}

var Function_323(bool bParam0) //Position: 0xBE9B / 48795
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

void Function_324() //Position: 0xBED0 / 48848
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_325() //Position: 0xBEE5 / 48869
{
	Function_328();
	Function_102();
	Function_326();
	return;
}

void Function_326() //Position: 0xBEF4 / 48884
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_327();
	return;
}

void Function_327() //Position: 0xBF28 / 48936
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_328() //Position: 0xBF39 / 48953
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_329(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBF52 / 48978
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
	Function_333(bParam0);
	Var6 = { StackVal, StackVal, Function_333(bParam0) };
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
			Function_332(bVar32);
			vVar12.f_4 = Function_330(StackVal, StackVal, StackVal, StackVal, vVar3, Function_332(bVar32));
		}
	}
	return Function_314(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_330(vector3 vParam0, vector3 vParam3) //Position: 0xC00B / 49163
{
	var uVar0;
	
	Function_331(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_331(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xC025 / 49189
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_332(bool bParam0) //Position: 0xC048 / 49224
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

vector3 Function_333(bool bParam0) //Position: 0xC06F / 49263
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_334(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC080 / 49280
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

void Function_335() //Position: 0xC0A9 / 49321
{
	if (!Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 1, 1);
	return;
}

void Function_336(bool bParam0, int iParam1) //Position: 0xC0C2 / 49346
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
	if (!Function_311(bParam0->f_112, 0))
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
		Function_337(bParam0);
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
				Function_373(1048576);
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

void Function_337(int iParam0) //Position: 0xC2BD / 49853
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

void Function_338(int iParam0, int iParam1) //Position: 0xC2FE / 49918
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
		Function_233(bVar0);
		vVar1 = { StackVal, StackVal, Function_233(bVar0) };
		Function_353(bVar0);
		vVar4 = { StackVal, StackVal, Function_353(bVar0) };
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
		iParam0->f_120 = Function_349(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_10(iParam0 + 48, 256);
	}
	else
	{
		Function_233(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_233(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_341(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_340(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_10(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_339(iParam0->f_120);
	return;
}

void Function_339(int iParam0) //Position: 0xC493 / 50323
{
	Function_324();
	Global_63118 = iParam0;
	return;
}

void Function_340(bool bParam0, bool bParam1) //Position: 0xC4A1 / 50337
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_341(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xC4B6 / 50358
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
	Function_342(&bVar0, uParam2, uParam3, uParam4);
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

void Function_342(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC538 / 50488
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_348(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_347(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_346(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_345(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_344(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_343(&bVar0, uParam1, uParam2, uParam3);
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

void Function_343(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC653 / 50771
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

void Function_344(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC768 / 51048
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

void Function_345(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC881 / 51329
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

void Function_346(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC98B / 51595
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

void Function_347(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xCA91 / 51857
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

void Function_348(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xCB41 / 52033
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

var Function_349(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCBF8 / 52216
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
	Function_350(&bVar0, uParam2);
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

void Function_350(var uParam0, int iParam1) //Position: 0xCC6F / 52335
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_352(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_351(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_351(var uParam0, bool bParam1) //Position: 0xCCDB / 52443
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
	Function_353(bParam1);
	vVar3 = { StackVal, StackVal, Function_353(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_332(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_332(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_353(bParam1);
	vVar6 = { StackVal, StackVal, Function_353(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_332(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_332(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_352(var uParam0, bool bParam1) //Position: 0xCD9D / 52637
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
	Function_353(bParam1);
	vVar3 = { StackVal, StackVal, Function_353(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_332(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_332(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_353(bParam1);
	vVar6 = { StackVal, StackVal, Function_353(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_332(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_332(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_353(bool bParam0) //Position: 0xCE5F / 52831
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

void Function_354(int iParam0) //Position: 0xCE86 / 52870
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
				if (Function_299(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_356(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_355("MPSplashItem.s1"));
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
				if (Function_299(bVar2))
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

var Function_355(int iParam0) //Position: 0xD1AC / 53676
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

struct<64> Function_356(bool bParam0) //Position: 0xD3C0 / 54208
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_375())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_357();
	}
	if (!Function_217(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_217(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_357() //Position: 0xD466 / 54374
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_358(var uParam0, int iParam1) //Position: 0xD477 / 54391
{
	if (Function_362(uParam0, iParam1))
	{
		Function_361(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_359(int iParam0) //Position: 0xD491 / 54417
{
	Function_86(&Global_79378, 0, iParam0);
	return;
}

void Function_360(bool bParam0, bool bParam1) //Position: 0xD4A1 / 54433
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
			if (Function_299(bVar2))
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

void Function_361(var uParam0, int iParam1) //Position: 0xD51D / 54557
{
	*uParam0 = *iParam1;
	return;
}

bool Function_362(var uParam0, int iParam1) //Position: 0xD529 / 54569
{
	return *uParam0 == *iParam1;
}

void Function_363(int iParam0, int iParam1) //Position: 0xD536 / 54582
{
	Function_364(iParam0, (Function_153(iParam0) + iParam1));
	return;
}

void Function_364(int iParam0, int iParam1) //Position: 0xD549 / 54601
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_365(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xD572 / 54642
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_366(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_366(int iParam0) //Position: 0xD5ED / 54765
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

var Function_367(int iParam0, bool bParam1, int iParam2) //Position: 0xD62C / 54828
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_217(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_215(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_368(int iParam0) //Position: 0xD673 / 54899
{
	return Function_369(&Global_79349, iParam0);
}

int Function_369(var uParam0, int iParam1) //Position: 0xD682 / 54914
{
	return Function_45(uParam0->f_44, iParam1);
}

int Function_370(int iParam0) //Position: 0xD691 / 54929
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

float Function_371() //Position: 0xD6A7 / 54951
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

void Function_372(int iParam0) //Position: 0xD6DD / 55005
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_373(int iParam0) //Position: 0xD6EE / 55022
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

bool Function_374(bool bParam0) //Position: 0xD747 / 55111
{
	return Function_12(Global_78617.f_52, bParam0);
}

bool Function_375() //Position: 0xD758 / 55128
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_376(bool bParam0) //Position: 0xD766 / 55142
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_377() //Position: 0xD778 / 55160
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_378(GET_LOCAL_SLOT(), 1, 0);
}

int Function_378(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD78F / 55183
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_217(bParam0))
			{
				if (!Function_215(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_379() //Position: 0xD7D3 / 55251
{
	return Function_368(2);
}

var Function_380(int iParam0, int iParam1) //Position: 0xD7DD / 55261
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_381(bool bParam0, var uParam1, bool bParam2) //Position: 0xD7F0 / 55280
{
	var uVar0;
	int iVar1;
	
	if (iLocal_1065 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_1061, 1.0f, 0);
	}
	Local_1069.f_16 = uParam1;
	Local_1069.f_20 = bParam2;
	Function_410(bParam0, 0, 0, 0);
	Function_399(bParam0, 56589);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_274(&Global_78578 + 96))
		{
			Function_398(&Global_78578 + 96);
		}
		Function_397(4294967295);
	}
	CANCEL_DEADEYE();
	Function_383(0, &uVar0, &iVar1);
	UI_EXIT("XpHud");
	if (Function_414(bParam0))
	{
		Function_382(bParam0);
	}
	return;
}

void Function_382(bool bParam0) //Position: 0xD86B / 55403
{
	if (!Function_414(bParam0))
	{
	}
	if (!Function_40(2048))
	{
		Function_373(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

var Function_383(bool bParam0, var uParam1, int iParam2) //Position: 0xD89E / 55454
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	*uParam1 = 100000.0f;
	if (Function_274(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_398(&Global_78578 + 96);
		}
		*uParam1 = Function_270(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_217(bVar1))
		{
			iVar0 = (iVar0 + Function_395(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_394(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_392(iVar3, &uVar4, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_391();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_389(bVar1, &uVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_386(iVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_384(iVar0, *iParam2, iLocal_1068);
	return iVar0;
}

void Function_384(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD971 / 55665
{
	bool bVar0;
	
	bVar0 = Function_385(1);
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

var Function_385(int iParam0) //Position: 0xD9BF / 55743
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_35(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && iParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_35(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_386(int iParam0) //Position: 0xDA0C / 55820
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_387(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

void Function_387(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xDA39 / 55865
{
	bool bVar0;
	
	*iParam1 = Function_388(iParam0);
	*uParam2 = Function_295(*iParam1, 32, 20);
	*iParam1 = Function_295(*iParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

int Function_388(int iParam0) //Position: 0xDA8A / 55946
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_389(int iParam0, int iParam1, int iParam2) //Position: 0xDAAA / 55978
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_385(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_390(iParam0, 1);
	uVar2 = Function_390(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_390(int iParam0, bool bParam1) //Position: 0xDAEB / 56043
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

int Function_391() //Position: 0xDB11 / 56081
{
	bool bVar0;
	
	bVar0 = Function_385(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "size");
}

void Function_392(int iParam0, float fParam1, int iParam2) //Position: 0xDB34 / 56116
{
	float fVar0;
	
	fVar0 = Function_393(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*fParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_393(int iParam0) //Position: 0xDB65 / 56165
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_394(float fParam0) //Position: 0xDB85 / 56197
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_392(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_395(int iParam0) //Position: 0xDBB2 / 56242
{
	return Function_396(0, iParam0);
}

int Function_396(int iParam0, bool bParam1) //Position: 0xDBBE / 56254
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_153(iParam0);
	}
	if (!Function_217(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_397(int iParam0) //Position: 0xDC25 / 56357
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_398(int iParam0) //Position: 0xDC39 / 56377
{
	if (Function_274(iParam0))
	{
		if (!Function_273(iParam0))
		{
			Function_271();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_10(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_399(int iParam0, int iParam1) //Position: 0xDD01 / 56577
{
	iParam0->f_180 = iParam1;
	return;
}

int Function_400() //Position: 0xDD0D / 56589
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (Local_1069)
	{
		case 0x00000000:
			Function_409(Local_1069.f_16);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(Local_1069.f_20, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_408(&Local_1069 + 4))
			{
				Function_406(&Local_1069 + 4);
			}
			Local_1069 = 1;
			break;
		
		case 0x00000001:
			if (Function_404(&Local_1069 + 4) <= 7.0f)
			{
				Function_403(&uVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_401() >= 4294967295)
				{
					Function_387(iVar2, &uVar0, &bVar1, bVar3);
					Function_163(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					Local_1069 = 3;
				}
				else
				{
					Local_1069 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_404(&Local_1069 + 4) <= 5.0f)
			{
				Local_1069 = 3;
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

int Function_401() //Position: 0xDE2F / 56879
{
	if (!Function_402())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_402() //Position: 0xDE44 / 56900
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_403(int iParam0, var uParam1, int iParam2) //Position: 0xDE51 / 56913
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_385(0);
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

float Function_404(int iParam0) //Position: 0xDEA4 / 56996
{
	if (Function_408(iParam0))
	{
		if (Function_405(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_405(int iParam0) //Position: 0xDF6C / 57196
{
	return Function_45(*iParam0, 2);
}

void Function_406(int iParam0) //Position: 0xDF79 / 57209
{
	if (!Function_408(iParam0))
	{
		Function_407(iParam0, 0.0f);
	}
	return;
}

void Function_407(int iParam0, float fParam1) //Position: 0xDF8E / 57230
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(iParam0, 1);
	Function_7(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_408(int iParam0) //Position: 0xDFAF / 57263
{
	return Function_45(*iParam0, 1);
}

void Function_409(bool bParam0) //Position: 0xDFBC / 57276
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_410(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE026 / 57382
{
	if (bParam1)
	{
		Function_154(7, 1);
		Function_154(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_379())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_150(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_411())
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
		Function_10(iParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_151(37, 0);
		Function_7(iParam0 + 44, 4);
	}
	else
	{
		Function_154(6, 1);
		Function_151(37, 0);
		Function_7(iParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_10(iParam0 + 44, 256);
	}
	else
	{
		Function_7(iParam0 + 44, 256);
	}
}

bool Function_411() //Position: 0xE0D4 / 57556
{
	return Function_368(16);
}

bool Function_412() //Position: 0xE0DF / 57567
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_219(bVar0))
		{
			if (Function_413(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_413(bool bParam0) //Position: 0xE10C / 57612
{
	if (Function_219(bParam0))
	{
		if (Function_215(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_414(bool bParam0) //Position: 0xE131 / 57649
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_415() //Position: 0xE145 / 57669
{
	Function_419(4);
	return;
}

void Function_416() //Position: 0xE14F / 57679
{
	if (Local_511.f_68)
	{
		if (!Function_218(4096, 1))
		{
			Function_46(4096, 1);
		}
		else if (Function_418())
		{
			Function_417(&Local_511);
		}
	}
	return;
}

void Function_417(var uParam0) //Position: 0xE17E / 57726
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

bool Function_418() //Position: 0xE1C5 / 57797
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
		if (Function_217(bVar0))
		{
			iVar1++;
			if (Function_215(bVar0, 4096, 1))
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

void Function_419(int iParam0) //Position: 0xE249 / 57929
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
			Function_420(iParam0);
		}
	}
	return;
}

void Function_420(bool bParam0) //Position: 0xE27B / 57979
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_421(var uParam0, struct<37> Param1) //Position: 0xE28A / 57994
{
	*uParam0 = Param1;
	uParam0->f_4 = StackVal;
	uParam0->f_8 = StackVal;
	uParam0->f_12 = Param1.f_12;
	uParam0->f_16 = Param1.f_16;
	uParam0->f_20 = Param1.f_20;
	uParam0->f_24 = Param1.f_24;
	uParam0->f_28 = Param1.f_28;
	uParam0->f_32 = Param1.f_32;
	uParam0->f_36 = Param1.f_36;
}

void Function_422(var uParam0, struct<5> Param1) //Position: 0xE2DF / 58079
{
	*uParam0 = Param1;
	uParam0->f_4 = StackVal;
	return;
}

void Function_423() //Position: 0xE2F2 / 58098
{
	switch (iLocal_495)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_845();
			}
			break;
		
		case 0x00000000:
			Function_770();
			break;
		
		case 0x00000001:
			Function_679();
			break;
		
		case 0x00000002:
			Function_527();
			break;
		
		case 0x00000065:
			Function_424();
			break;
	}
	return;
}

void Function_424() //Position: 0xE342 / 58178
{
	if (Function_525())
	{
		Function_524();
	}
	Function_523();
	switch (iLocal_496)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_398(&Global_78578 + 96);
			}
			Function_522(3);
			break;
		
		case 0x00000003:
			if (iLocal_935)
			{
				Function_521();
				Function_520();
				Function_399(&bLocal_545, 66980);
			}
			else
			{
				NET_LOG(bLocal_934, "Mission StageFinal", "Transitioning to GID_COMPLETE", false, false, false, false);
				Function_520();
			}
			Function_430();
			Function_522(106);
			break;
		
		case 0x0000006A:
			Function_429();
			if (Function_414(&bLocal_545))
			{
				Function_428();
				if (iLocal_935)
				{
					Function_427(&bLocal_545, "mp_you_won", 0, 0, 0, 0);
					Function_426("MPCOOP_LASTOBJMISSCOMPLETE", 0);
				}
				else
				{
					Function_427(&bLocal_545, "mp_you_lost", 0, 0, 0, 0);
				}
				Function_425(&bLocal_545, "FTR_MISSION_COMPLETE_SONG_01");
				Function_410(&bLocal_545, iLocal_935, 0, 0);
				Function_382(&bLocal_545);
			}
			NET_LOG(bLocal_934, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", false, false, false, false);
			break;
	}
	return;
}

void Function_425(var uParam0, int iParam1) //Position: 0xE4E7 / 58599
{
	uParam0->f_40 = iParam1;
	return;
}

void Function_426(bool bParam0, bool bParam1) //Position: 0xE4F3 / 58611
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

void Function_427(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE533 / 58675
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

void Function_428() //Position: 0xE5A2 / 58786
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Function_12(Local_773[iVar110].f_36, 1))
		{
			iVar2++;
		}
		if (Function_12(Local_773[iVar110].f_36, 2))
		{
			iVar3++;
		}
		if (Function_12(Local_773[iVar110].f_36, 4))
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
	if (((Function_12(Local_773[010].f_36, 8) || Function_12(Local_773[110].f_36, 8)) || Function_12(Local_773[210].f_36, 8)) || Function_12(Local_773[310].f_36, 8))
	{
	}
	if (((!Function_12(Local_773[010].f_36, 16) && !Function_12(Local_773[110].f_36, 16)) && !Function_12(Local_773[210].f_36, 16)) && !Function_12(Local_773[310].f_36, 16))
	{
	}
	if (((Function_12(Local_773[010].f_36, 32) || Function_12(Local_773[110].f_36, 32)) || Function_12(Local_773[210].f_36, 32)) || Function_12(Local_773[310].f_36, 32))
	{
	}
	if (((Function_12(Local_773[010].f_36, 64) || Function_12(Local_773[110].f_36, 64)) || Function_12(Local_773[210].f_36, 64)) || Function_12(Local_773[310].f_36, 64))
	{
	}
	return;
}

void Function_429() //Position: 0xE723 / 59171
{
	SET_TIME_ACCELERATION(Global_63398);
	Function_193();
	Function_185();
	Function_172();
	return;
}

void Function_430() //Position: 0xE738 / 59192
{
	if (Function_155())
	{
		Function_431(iLocal_935, 92);
		if (iLocal_935)
		{
			UPDATE_PROFILE_STAT("CoopTUMAdvPassed", 1.0f, 0);
		}
	}
	else
	{
		Function_431(iLocal_935, 39);
		if (iLocal_935)
		{
			UPDATE_PROFILE_STAT("CoopTUMPassed", 1.0f, 0);
		}
	}
	return;
}

void Function_431(bool bParam0, int iParam1) //Position: 0xE790 / 59280
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	uVar2 = Function_383(bParam0, &bVar1, &iVar0);
	PLAYSTAT_INT("Deaths", Function_461(GET_LOCAL_SLOT()));
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_150(29), Function_460((Function_153(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_397(iVar0);
		}
		Function_9(&Global_84364, Function_459(iParam1));
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
		Function_458(5);
		Function_457(iParam1, bVar1);
		Function_455(iParam1);
		Function_451(&Global_50170, 58, 0, 0, 250.0f, 5);
		Function_451(&Global_50170, 60, 2, 0, 500.0f, 5);
		if (Global_50170[6022].f_28 > 1)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(58))
			{
				AWARD_ACHIEVEMENT(58);
			}
		}
		Function_451(&Global_50170, 59, 1, 0, 500.0f, 5);
		Function_451(&Global_50170, 62, 3, 0, 250.0f, 5);
		Function_451(&Global_50170, 61, 4, 0, 250.0f, 5);
		Function_451(&Global_50170, 63, 5, 0, 250.0f, 5);
		Function_451(&Global_50170, 64, 6, 0, 250.0f, 5);
		Function_450(iParam1);
		Function_444(iParam1);
		Function_451(&Global_50170, 161, 0, 1, 250.0f, 5);
		Function_451(&Global_50170, 163, 2, 1, 500.0f, 5);
		Function_451(&Global_50170, 162, 1, 1, 500.0f, 5);
		Function_451(&Global_50170, 165, 3, 1, 250.0f, 5);
		Function_451(&Global_50170, 164, 4, 1, 250.0f, 5);
		Function_451(&Global_50170, 166, 5, 1, 250.0f, 5);
		Function_451(&Global_50170, 167, 6, 1, 250.0f, 5);
		Function_451(&Global_50170, 168, 7, 1, 250.0f, 5);
		if (Global_84364 & 63 == 63)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
			{
				AWARD_ACHIEVEMENT(50);
			}
			Function_442(38);
			if (!Function_45(Global_84364.f_740, 1))
			{
				Function_10(&Global_84364 + 740, 1);
				Function_441();
				DECOR_SET_BOOL(Function_385(1), "Unlock_Adv", true);
			}
		}
		if (iVar0 != 2 || iVar0 != 1)
		{
			if (!Function_440(1))
			{
				Function_439(1);
			}
			if (Function_437(iParam1))
			{
				DECOR_SET_BOOL(Function_385(1), "Unlock_Silver", true);
			}
			if (iVar0 == 2)
			{
				Function_436(iParam1);
				Function_435(iParam1);
			}
		}
		Function_434();
		Function_433();
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
		{
			if (Function_388(3) == 2)
			{
				AWARD_ACHIEVEMENT(51);
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(54))
		{
			bVar3 = false;
			while (bVar3 <= 4)
			{
				if (Function_217(bVar3))
				{
					iVar4 = (iVar4 + Function_432(12, bVar3));
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
		Function_397(4294967295);
	}
	return;
}

int Function_432(int iParam0, bool bParam1) //Position: 0xEA56 / 59990
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
	if (!Function_217(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_433() //Position: 0xEAC4 / 60100
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

void Function_434() //Position: 0xEB09 / 60169
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

int Function_435(int iParam0) //Position: 0xEB4E / 60238
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

int Function_436(int iParam0) //Position: 0xEC60 / 60512
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

bool Function_437(int iParam0) //Position: 0xED72 / 60786
{
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			if (!Function_45((*&Global_84364 + 712)[0], 1))
			{
				Function_10(&Global_84364 + 712[0], 1);
				Function_438(0);
				return 1;
			}
			break;
		
		case 0x00000021:
		case 0x0000002F:
			if (!Function_45((*&Global_84364 + 712)[1], 1))
			{
				Function_10(&Global_84364 + 712[1], 1);
				Function_438(1);
				return 1;
			}
			break;
		
		case 0x00000026:
		case 0x0000005B:
			if (!Function_45((*&Global_84364 + 712)[2], 1))
			{
				Function_10(&Global_84364 + 712[2], 1);
				Function_438(2);
				return 1;
			}
			break;
		
		case 0x00000022:
		case 0x00000058:
			if (!Function_45((*&Global_84364 + 712)[3], 1))
			{
				Function_10(&Global_84364 + 712[3], 1);
				Function_438(3);
				return 1;
			}
			break;
		
		case 0x00000027:
		case 0x0000005C:
			if (!Function_45((*&Global_84364 + 712)[4], 1))
			{
				Function_10(&Global_84364 + 712[4], 1);
				Function_438(4);
				return 1;
			}
			break;
		
		case 0x00000023:
		case 0x00000059:
			if (!Function_45((*&Global_84364 + 712)[5], 1))
			{
				Function_10(&Global_84364 + 712[5], 1);
				Function_438(5);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

void Function_438(int iParam0) //Position: 0xEEC0 / 61120
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

void Function_439(int iParam0) //Position: 0xF263 / 62051
{
	Function_9(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_440(bool bParam0) //Position: 0xF275 / 62069
{
	return Function_12(Global_83864.f_1256, bParam0);
}

void Function_441() //Position: 0xF287 / 62087
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

void Function_442(int iParam0) //Position: 0xF3DD / 62429
{
	if (!Function_45((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_443(iParam0);
		Function_10(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_443(int iParam0) //Position: 0xF40A / 62474
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

void Function_444(int iParam0) //Position: 0xF447 / 62535
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_449(iParam0)], 1);
	if (bVar0)
	{
		if (Function_153(3) == 0)
		{
			switch (iParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_445(&Global_50170, 87, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_445(&Global_50170, 101, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_445(&Global_50170, 115, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_445(&Global_50170, 129, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_445(&Global_50170, 143, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_445(&Global_50170, 157, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_445(var uParam0, int iParam1, float fParam2, int iParam3) //Position: 0xF524 / 62756
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_446(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, 1, 1, fParam2, iParam3, 0);
			break;
	}
}

void Function_446(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, int iParam8) //Position: 0xF566 / 62822
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_148(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_448(iParam0);
		Function_447(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
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

void Function_447(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xF5CD / 62925
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
		REMOVE_JOURNAL_ENTRY(Function_108(iParam0), false);
		Function_142(iParam0, 4);
	}
	else
	{
		Function_134(iParam0, 0);
	}
	Function_111();
}

var Function_448(int iParam0) //Position: 0xF64A / 63050
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

int Function_449(int iParam0) //Position: 0xF998 / 63896
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

void Function_450(bool bParam0) //Position: 0xFA0C / 64012
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_449(bParam0)], 1);
	if (bVar0)
	{
		if (Function_150(12) == 0)
		{
			switch (bParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_445(&Global_50170, 86, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_445(&Global_50170, 100, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_445(&Global_50170, 114, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_445(&Global_50170, 128, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_445(&Global_50170, 142, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_445(&Global_50170, 156, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_451(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5) //Position: 0xFAEA / 64234
{
	bool bVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((Function_454(iVar1, 0, iParam2) && !bParam3) && !Function_453(iVar1, 0, iParam2))
				{
					uParam0[iParam122]->f_28++;
					Function_452(iVar1, 0, iParam2);
				}
				else if ((Function_454(iVar1, 1, iParam2) && !Function_453(iVar1, 1, iParam2)) && bParam3)
				{
					uParam0[iParam122]->f_28++;
					Function_452(iVar1, 1, iParam2);
				}
				iVar1++;
			}
			bVar0 = uParam0[iParam122]->f_28;
			Function_446(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, 6, fParam4, iParam5, 0);
			break;
	}
}

void Function_452(int iParam0, int iParam1, int iParam2) //Position: 0xFBB1 / 64433
{
	Function_10(&Global_55869[iParam037][iParam118] + 36[iParam2], 1);
	return;
}

bool Function_453(int iParam0, int iParam1, int iParam2) //Position: 0xFBCC / 64460
{
	return Function_45((*&Global_55869[iParam037][iParam118] + 36)[iParam2], 1);
}

bool Function_454(int iParam0, int iParam1, int iParam2) //Position: 0xFBE7 / 64487
{
	return Function_45(Global_55869[iParam037][iParam118][iParam2], 1);
}

void Function_455(int iParam0) //Position: 0xFC00 / 64512
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
	Function_456(iVar0, iVar2, 0);
	Function_456(iVar0, iVar2, iVar1);
	if (Function_150(12) == 0)
	{
		Function_456(iVar0, iVar2, 2);
	}
	if (Function_153(3) != 0 && Function_150(12) != 0)
	{
		Function_456(iVar0, iVar2, 1);
	}
	return;
}

void Function_456(int iParam0, int iParam1, int iParam2) //Position: 0xFD3A / 64826
{
	Function_10(&(Global_55869[iParam037][iParam118][iParam2]), 1);
	return;
}

void Function_457(int iParam0, float fParam1) //Position: 0xFD53 / 64851
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_449(iParam0)], 1);
	bVar1 = Function_45(Global_84364.f_740, 1);
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0x00000024:
			case 0x0000005A:
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 77, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 78, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_445(&Global_50170, 79, 500.0f, 5);
				}
				break;
			
			case 0x00000021:
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_445(&Global_50170, 91, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 92, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_445(&Global_50170, 93, 500.0f, 5);
				}
				break;
			
			case 0x00000026:
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 105, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_445(&Global_50170, 106, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 107, 500.0f, 5);
				}
				break;
			
			case 0x00000022:
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_445(&Global_50170, 119, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_445(&Global_50170, 120, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_445(&Global_50170, 121, 500.0f, 5);
				}
				break;
			
			case 0x00000027:
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 133, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_445(&Global_50170, 134, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 135, 500.0f, 5);
				}
				break;
			
			case 0x00000023:
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_445(&Global_50170, 147, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_445(&Global_50170, 148, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_445(&Global_50170, 149, 500.0f, 5);
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
					Function_445(&Global_50170, 169, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 170, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_445(&Global_50170, 171, 500.0f, 5);
				}
				break;
			
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_445(&Global_50170, 172, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 173, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_445(&Global_50170, 174, 500.0f, 5);
				}
				break;
			
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 175, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_445(&Global_50170, 176, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 177, 500.0f, 5);
				}
				break;
			
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_445(&Global_50170, 178, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_445(&Global_50170, 179, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_445(&Global_50170, 180, 500.0f, 5);
				}
				break;
			
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_445(&Global_50170, 181, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_445(&Global_50170, 182, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_445(&Global_50170, 183, 500.0f, 5);
				}
				break;
			
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_445(&Global_50170, 184, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_445(&Global_50170, 185, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_445(&Global_50170, 186, 500.0f, 5);
				}
				break;
			
			default:
				return;
			}
	}
	return;
}

void Function_458(int iParam0) //Position: 0x101AD / 65965
{
	Function_9(&Global_83864 + 1252, iParam0);
	return;
}

int Function_459(int iParam0) //Position: 0x101BF / 65983
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

var Function_460(int iParam0, bool bParam1) //Position: 0x10224 / 66084
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

int Function_461(var uParam0) //Position: 0x10597 / 66967
{
	return Function_432(12, uParam0);
}

int Function_462() //Position: 0x105A4 / 66980
{
	Function_178(0);
	if (Function_463())
	{
		return 1;
	}
	return 0;
}

bool Function_463() //Position: 0x105B7 / 66999
{
	var uVar0;
	
	switch (Local_504)
	{
		case 0x000003E8:
			if (Function_519(&uLocal_1093))
			{
				iLocal_1100 = 15;
				Function_518(&Local_504 + 4);
				Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				Function_515();
				Function_510();
				if (UNK_0xCDA6BB6C())
				{
					uVar0 = UNK_0xFF1F1730();
					Local_504.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
				}
				else
				{
					Local_504.f_16 = Function_506(Local_77, 0, Local_77, 1, 0, 0);
					if (IS_OBJECT_VALID(Local_504.f_16))
					{
					}
					else
					{
						LOG_ERROR("TumbleweedMP_CO_cutscene04 - Failed to create TumbleweedMP_CO_cutscene04_cutscene");
					}
				}
				Local_504 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_504.f_16), false))
			{
				Function_505(Global_34573, 1, 1);
				Local_504 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Local_504 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_491(1003, 1, 0x3f800000))
			{
				Function_490();
				Local_504 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (Function_404(&Local_504 + 4) < 2.0f)
			{
				DECOR_SET_BOOL(Local_77, "__CameraReady", true);
				iLocal_1101 = 15;
				Function_484();
				Local_504 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_467(&uLocal_1093, 71315) && GET_CUTSCENEOBJECT_SEQUENCE(Local_504.f_16) != 2)
			{
				Function_518(&Local_504 + 4);
				Function_466();
				Local_504 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_276(1))
			{
				Function_465();
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_505(Global_34573, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_464();
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Local_77, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_504.f_16))
				{
					DESTROY_OBJECT(Local_504.f_16);
				}
				Local_504 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_504 = 1104;
			}
			break;
	}
	return 0;
}

void Function_464() //Position: 0x107E9 / 67561
{
	Function_47(2, 0, 1, 0, 1, 0, 0, 1, 1, 1);
	return;
}

void Function_465() //Position: 0x107FC / 67580
{
	bool bVar0[4];
	bool bVar5;
	
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(Local_77, "Sub_0");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(Local_77, "Sub_1");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(Local_77, "Sub_2");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(Local_77, "Sub_3");
	bVar5 = FIND_ACTOR_IN_LAYOUT(Local_77, "scene_gold_wagon");
	if (IS_ACTOR_VALID(bVar0[0]))
	{
		DESTROY_ACTOR(bVar0[0]);
	}
	if (IS_ACTOR_VALID(bVar0[1]))
	{
		DESTROY_ACTOR(bVar0[1]);
	}
	if (IS_ACTOR_VALID(bVar0[2]))
	{
		DESTROY_ACTOR(bVar0[2]);
	}
	if (IS_ACTOR_VALID(bVar0[3]))
	{
		DESTROY_ACTOR(bVar0[3]);
	}
	if (IS_ACTOR_VALID(bVar5))
	{
		DESTROY_ACTOR(bVar5);
	}
	return;
}

void Function_466() //Position: 0x108C2 / 67778
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_467(int iParam0, int iParam1) //Position: 0x108DC / 67804
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
				Function_481(iParam0);
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (bVar1)
			{
				if (Function_478(iParam0))
				{
					iParam0->f_20 = (fVar0 + 3.3f);
				}
				*iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bVar1)
			{
				Function_476(iParam0->f_24, 0);
				iParam0->f_12 = 4294967295;
				iParam0->f_16 = 4294967295;
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (bVar1)
			{
				if (Function_475(iParam0))
				{
					bVar2 = Function_474(iParam0->f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_473(iParam0->f_12)), I2STR(bVar2), false);
					Function_472("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					iParam0->f_20 = (fVar0 + 1.8f);
					*iParam0 = 8;
					iParam0->f_24 = (iParam0->f_24 + bVar2);
				}
				else
				{
					iParam0->f_20 = (fVar0 + 0.0f);
					if (Function_471() >= 0)
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
				Function_476(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_12 <= Function_471())
			{
				if (bVar1)
				{
					Function_470(iParam0);
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
				Function_476(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				iParam0->f_12++;
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000D:
			if (bVar1)
			{
				Function_476(iParam0->f_24, 1);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bVar1)
			{
				Function_469(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_385(1), "Unlock_Silver"))
				{
					*iParam0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_385(1), "Unlock_Adv"))
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
				Function_468(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_385(1), "Unlock_Adv"))
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
				Function_468(0);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 17;
			}
			break;
		
		case 0x00000011:
			if (bVar1)
			{
				Function_162(iParam0);
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

void Function_468(bool bParam0) //Position: 0x10E36 / 69174
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_472("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_472("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_469(bool bParam0) //Position: 0x10EC7 / 69319
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_403(&iVar2, &iVar0, &iVar1);
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
	Function_472(bVar3);
	return;
}

void Function_470(var uParam0) //Position: 0x10FEC / 69612
{
	bool bVar0;
	int iVar1;
	
	Function_389(uParam0->f_12, &iVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(iVar1), I2STR(bVar0), false);
	Function_472("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	uParam0->f_24 = (uParam0->f_24 + bVar0);
	return;
}

int Function_471() //Position: 0x11082 / 69762
{
	return Function_391();
}

void Function_472(bool bParam0) //Position: 0x1108B / 69771
{
	UI_SET_TEXT("MPSplashItem.s1", bParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_473(int iParam0) //Position: 0x110E5 / 69861
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

int Function_474(int iParam0) //Position: 0x11289 / 70281
{
	return Function_395(iParam0);
}

bool Function_475(int iParam0) //Position: 0x11294 / 70292
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
			iVar1 = Function_474(bVar0);
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

void Function_476(bool bParam0, bool bParam1) //Position: 0x1130E / 70414
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
	Function_477(1);
	return;
}

void Function_477(bool bParam0) //Position: 0x113E1 / 70625
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (bParam0)
	{
		Function_472("Common_Null");
	}
	return;
}

bool Function_478(int iParam0) //Position: 0x11466 / 70758
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_274(&Global_78578 + 96))
	{
		fVar1 = Function_270(&Global_78578 + 96);
	}
	Var2 = { StackVal, StackVal, StackVal, Function_480(fVar1) };
	iVar0 = Function_479(fVar1);
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

var Function_479(float fParam0) //Position: 0x115DA / 71130
{
	int iVar0;
	int iVar1;
	
	if (Function_401() >= 4294967295)
	{
		iVar1 = Function_394(fParam0);
		if (iVar1 >= 4294967295)
		{
			Function_392(iVar1, &fParam0, &iVar0);
		}
	}
	return iVar0;
}

struct<16> Function_480(var uParam0) //Position: 0x115FF / 71167
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

void Function_481(int iParam0) //Position: 0x11670 / 71280
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	Function_403(&iVar2, &iVar0, &bVar1);
	if (iVar0 >= 4294967295)
	{
		Function_387(iVar0, &iVar2, iParam0 + 8, bVar1);
	}
	return;
}

int Function_482() //Position: 0x11693 / 71315
{
	switch (iLocal_1100)
	{
		case 0x0000000F:
			if (Function_404(&Local_504 + 4) < 2.0f)
			{
				Function_483();
				iLocal_1100 = 106;
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

void Function_483() //Position: 0x116D2 / 71378
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene4_v1_AA", "TEscape_Scene4_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene4_v1_AB", "TEscape_Scene4_v1_AB", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x11765 / 71525
{
	bool bVar0[4];
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	if (IS_SLOT_VALID(false))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)) && Function_413(0) < 0)
		{
			bVar5 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(false));
			Function_489(GET_SLOT_ACTOR(false), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(false), -2354.1f, 9.04f, 3916.421f, 0.0f, 1, false, 1);
			bVar0[0] = CREATE_ACTOR_IN_LAYOUT(Local_77, "Sub_0", bVar5, -2386.138f, 13.792f, 3912.796f, 0.0f, 183.275f, 0.0f);
			SET_ACTOR_FACTION(bVar0[0], 1);
		}
	}
	if (IS_SLOT_VALID(true))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)) && Function_413(1) < 0)
		{
			bVar6 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(true));
			Function_489(GET_SLOT_ACTOR(true), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(true), -2354.1f, 9.04f, 3916.421f, 0.0f, 1, false, 1);
			bVar0[1] = CREATE_ACTOR_IN_LAYOUT(Local_77, "Sub_1", bVar6, -2386.138f, 13.792f, 3912.796f, 0.0f, 183.275f, 0.0f);
			SET_ACTOR_FACTION(bVar0[1], 1);
		}
	}
	if (IS_SLOT_VALID(2))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)) && Function_413(2) < 0)
		{
			bVar7 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(2));
			Function_489(GET_SLOT_ACTOR(2), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(2), -2354.1f, 9.04f, 3916.421f, 0.0f, 1, false, 1);
			bVar0[2] = CREATE_ACTOR_IN_LAYOUT(Local_77, "Sub_2", bVar7, -2386.138f, 13.792f, 3912.796f, 0.0f, 183.275f, 0.0f);
			SET_ACTOR_FACTION(bVar0[2], 1);
		}
	}
	if (IS_SLOT_VALID(3))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)) && Function_413(3) < 0)
		{
			bVar8 = GET_ACTOR_ENUM(GET_SLOT_ACTOR(3));
			Function_489(GET_SLOT_ACTOR(3), 1);
			TELEPORT_ACTOR_WITH_HEADING(GET_SLOT_ACTOR(3), -2354.1f, 9.04f, 3916.421f, 0.0f, 1, false, 1);
			bVar0[3] = CREATE_ACTOR_IN_LAYOUT(Local_77, "Sub_3", bVar8, -2386.138f, 13.792f, 3912.796f, 0.0f, 183.275f, 0.0f);
			SET_ACTOR_FACTION(bVar0[3], 1);
		}
	}
	bVar9 = Function_485(Local_77, "scene_gold_wagon", 1177, 986, -2379.872f, 13.58f, 3936.682f, 0.0f, 199.886f, 0.0f, 0, 976, 976, 976, 4);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bVar0[0]))
	{
		SET_ACTOR_IN_VEHICLE(bVar0[0], bVar9, false);
		TASK_FOLLOW_PATH(bVar0[0], Local_77.f_1668, 3, 0, 0, 1, 0);
	}
	if (IS_ACTOR_VALID(bVar0[1]))
	{
		SET_ACTOR_IN_VEHICLE(bVar0[1], bVar9, true);
	}
	if (IS_ACTOR_VALID(bVar0[2]))
	{
		SET_ACTOR_IN_VEHICLE(bVar0[2], bVar9, false);
	}
	if (IS_ACTOR_VALID(bVar0[3]))
	{
		SET_ACTOR_IN_VEHICLE(bVar0[3], bVar9, true);
	}
	return;
}

bool Function_485(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x11A06 / 72198
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_488(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_487(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_486(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_486(int iParam0, int iParam1) //Position: 0x11C3A / 72762
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_487(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x11C6C / 72812
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_488(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11C84 / 72836
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

bool Function_489(bool bParam0, int iParam1) //Position: 0x11CAB / 72875
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

void Function_490() //Position: 0x11CD1 / 72913
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

bool Function_491(bool bParam0, bool bParam1, float fParam2) //Position: 0x11D00 / 72960
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_504(bParam0);
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
	if (Function_503(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_502(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_501(bParam0, iVar6, &uVar7))
	{
		if (Function_500())
		{
			if (!Function_499(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_498(&Var0, 1);
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
				if (Function_492(bParam0))
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

bool Function_492(int iParam0) //Position: 0x11F53 / 73555
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_497(iVar0))
		{
			iVar1 = Function_493(iVar0);
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

int Function_493(int iParam0) //Position: 0x11F96 / 73622
{
	int iVar0;
	
	Function_496(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_495(&iVar0, iParam0);
	}
	return Function_494(&iVar0);
}

int Function_494(int iParam0) //Position: 0x11FBD / 73661
{
	return *iParam0;
}

void Function_495(var uParam0, int iParam1) //Position: 0x11FC6 / 73670
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_496(int iParam0) //Position: 0x11FD9 / 73689
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_497(int iParam0) //Position: 0x11FE7 / 73703
{
	return Function_217(iParam0);
}

void Function_498(var uParam0, bool bParam1) //Position: 0x11FF2 / 73714
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

bool Function_499(bool bParam0) //Position: 0x1200C / 73740
{
	return Function_45(*bParam0, 2);
}

bool Function_500() //Position: 0x12019 / 73753
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

bool Function_501(int iParam0, var uParam1, int iParam2) //Position: 0x12037 / 73783
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
		if (Function_497(iVar0))
		{
			iVar1 = Function_493(iVar0);
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

void Function_502(int iParam0, bool bParam1) //Position: 0x12088 / 73864
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

bool Function_503(int iParam0) //Position: 0x120A2 / 73890
{
	return Function_45(*iParam0, 1);
}

void Function_504(int iParam0) //Position: 0x120AF / 73903
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_24(&uVar1);
	if (Function_494(&uVar1) != bVar0)
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
		Function_498(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

void Function_505(bool bParam0, bool bParam1, bool bParam2) //Position: 0x121AC / 74156
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

var Function_506(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x12246 / 74310
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumbleweedMP_CO_cutscene04", 2, 1);
	}
	Function_507(&bVar0, uParam2);
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

void Function_507(var uParam0, char* cParam1) //Position: 0x122CE / 74446
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_509(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_508(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 15.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_508(int iParam0) //Position: 0x12331 / 74545
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2372.347f, 16.50237f, 3971.483f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.027209f, -2.767191f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_509(var uParam0) //Position: 0x1239B / 74651
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2390.768f, 15.40492f, 3966.392f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.017876f, -2.222209f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_510() //Position: 0x123FE / 74750
{
	Function_511(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_511(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x12413 / 74771
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
				Function_233(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_52(), 2, Function_233(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_514()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_514()));
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
	if (Function_513(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_512(0x4000000);
	}
	if (Function_513(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_512(0x8000000);
	}
}

void Function_512(int iParam0) //Position: 0x126C1 / 75457
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

bool Function_513(int iParam0) //Position: 0x126F5 / 75509
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_514() //Position: 0x12711 / 75537
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

void Function_515() //Position: 0x12790 / 75664
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x127A2 / 75682
{
	AUDIO_MUSIC_FORCE_TRACK(iParam0, Function_517(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_517(int iParam0) //Position: 0x127BE / 75710
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

void Function_518(int iParam0) //Position: 0x12D11 / 77073
{
	Function_407(iParam0, 0.0f);
	return;
}

bool Function_519(int iParam0) //Position: 0x12D1D / 77085
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

void Function_520() //Position: 0x12E02 / 77314
{
	return;
}

void Function_521() //Position: 0x12E08 / 77320
{
	*(&Local_511 + 8) = { 0.0f, 0.0f, 0.0f };
	*(&Local_511 + 20) = { 0.0f, 0.0f, 0.0f };
	Local_511.f_32 = 8.0f;
	Local_511.f_36 = "";
	Local_511.f_52 = 0;
	Local_511.f_72 = 1;
	Local_511.f_92 = 1;
	Local_511.f_76 = 1;
	Local_511.f_60 = 1;
	Local_511.f_64 = 1;
	Local_511.f_84 = Local_504;
	Local_511.f_68 = 0;
	Local_511.f_88 = 0;
	Local_511.f_96 = 1;
	Local_504.f_24 = 0;
	Function_46(4096, 0);
	Function_46(8192, 0);
	return;
}

void Function_522(int iParam0) //Position: 0x12E86 / 77446
{
	char* cVar0[32];
	
	iLocal_496 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_495)
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

void Function_523() //Position: 0x13019 / 77849
{
	if (((Function_12(Local_773[010].f_36, 512) || Function_12(Local_773[110].f_36, 512)) || Function_12(Local_773[210].f_36, 512)) || Function_12(Local_773[310].f_36, 512))
	{
		iLocal_935 = 1;
		Function_9(&Local_763 + 36, 512);
	}
	return;
}

void Function_524() //Position: 0x1306C / 77932
{
	return;
}

bool Function_525() //Position: 0x13072 / 77938
{
	return Function_526(iLocal_496);
}

int Function_526(int iParam0) //Position: 0x1307E / 77950
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

void Function_527() //Position: 0x130C6 / 78022
{
	if (Function_525())
	{
		Function_676();
	}
	Function_671();
	Function_523();
	switch (iLocal_496)
	{
		case 0x00000000:
			Function_670();
			Function_518(&vLocal_961);
			SET_TIME_OF_DAY(Global_63404);
			SET_TIME_ACCELERATION(0.5f);
			Function_664(0, 0);
			Function_521();
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_206(Local_77, 0);
			Function_206(FIND_NAMED_LAYOUT("Playerlayout"), 0);
			ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			Function_663();
			STREAMING_SET_CUTSCENE_MODE(1);
			STREAMING_LOAD_SCENE_EXT(-3736.276f, 21.748f, 3469.172f, 0.841f, -0.404f, 0.359f, 1);
			Function_364(1, 1);
			Function_46(65536, 0);
			Function_398(&Global_78578 + 96);
			NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_STREAMING_GOAL", false, false, false, false);
			Function_522(1);
			break;
		
		case 0x00000001:
			Function_662();
			Function_521();
			Function_661(&bLocal_545, Local_77.f_520);
			ACTOR_SET_NEXT_EQUIP_SLOT(Function_41(), 1, 0);
			NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_POST_STREAMING", false, false, false, false);
			Function_522(2);
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4))
			{
				if (Function_491(3, 1, 0x3f800000))
				{
					Function_656();
					Function_654();
					Function_653();
					SET_ACTOR_INVULNERABILITY(Function_41(), 0);
					Function_652(Function_41(), 0);
					ACTOR_HOLSTER_WEAPON(Function_41(), 0);
					Function_651();
					Function_663();
					NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_CUTSCENE", false, false, false, false);
					Function_650();
					Function_647(&bLocal_984, 4.0f);
					Function_522(3);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000003:
			if (Function_646(&bLocal_984))
			{
				Function_650();
			}
			if (Function_638())
			{
				Function_522(6);
				NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000006:
			if (Function_491(7, 1, 0x3f800000))
			{
				Function_637(0);
				Function_636(Local_77.f_416, 0);
				Function_636(bLocal_1032, 0);
				ACTOR_HOLSTER_WEAPON(Function_41(), 0);
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				Function_522(7);
				NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000007:
			Function_650();
			Function_622();
			SET_PLAYER_CONTROL(false, 0, 0, 0);
			Function_647(&bLocal_984, 1.0f);
			Function_522(8);
			NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
			break;
		
		case 0x00000008:
			if (Function_646(&bLocal_984))
			{
				Function_637(0);
			}
			if (IS_OBJECT_VALID(Local_1121.f_36))
			{
				Function_619(&Local_1121);
			}
			else
			{
				Function_609(&Local_1121, 0);
				Function_608("showdown_draw", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_426("GENMESS_SDOWNSTARTS", 0);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				Function_522(9);
				NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_FOURTH_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000009:
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			STREAMING_SET_CUTSCENE_MODE(0);
			STREAMING_UNLOAD_SCENE();
			SET_TIME_OF_DAY(Global_63404);
			SET_TIME_ACCELERATION(0.5f);
			Function_664(0, 0);
			Function_606();
			Function_605(&Global_78578 + 96);
			Function_522(10);
			NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
			break;
		
		case 0x0000000A:
			if (!HUD_IS_FADING())
			{
				Function_604();
				Function_603(&bLocal_1034, 1.0f);
				Function_603(&bLocal_1037, 5.0f);
				Function_603(&bLocal_1043, 30.0f);
				Function_647(&bLocal_990, 1.0f);
				bLocal_960 = "TUM_CO_obj06a";
				Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
				NET_LOG(bLocal_934, "Mission Stage03", "Transitioning to GID_SIXTH_GOAL", false, false, false, false);
				Function_522(11);
			}
			break;
		
		case 0x0000000B:
			Function_597();
			Function_592();
			if (Function_646(&bLocal_1034))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_587();
				Function_9(&Local_763 + 36, 256);
			}
			if (Function_646(&bLocal_1037))
			{
				Function_586();
				Function_585();
				if (Function_584())
				{
					Function_9(&Local_763 + 36, 32);
				}
			}
			if (Function_646(&bLocal_1043))
			{
				Function_647(&bLocal_990, 1.0f);
				NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
				Function_522(12);
			}
			break;
		
		case 0x0000000C:
			Function_597();
			if (Function_491(13, 1, 0x3f800000))
			{
				Function_603(&bLocal_1040, 5.0f);
				Function_583(bLocal_1033);
				Function_582();
				VEHICLE_SET_HANDBRAKE(bLocal_948, 0.0f);
				Function_647(&bLocal_1046, 15.0f);
				Function_647(&bLocal_1049, 10.0f);
				UNK_0x2148AC15(322, 8);
				UNK_0x444C3C32(0, 4, 0);
				Function_581(0);
				Function_647(&bLocal_990, 1.0f);
				NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_EIGHTH_GOAL", false, false, false, false);
				Function_522(13);
			}
			break;
		
		case 0x0000000D:
			Function_562();
			Function_550();
			Function_597();
			Function_542();
			Function_540();
			Function_538();
			if (Function_646(&bLocal_1040))
			{
				Function_365("TUM_CO_help03", 0x41200000, 1, 0, 2, 1, 0);
			}
			if (Function_413(GET_LOCAL_SLOT()) <= 1)
			{
				if (Function_491(106, 1, 0x3f800000))
				{
					NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_COMPLETE - no lives", false, false, false, false);
					Function_522(106);
				}
			}
			else if (!IS_OBJECT_VALID(bLocal_1024))
			{
				if (Function_491(106, 1, 0x3f800000))
				{
					NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_COMPLETE - don't know", false, false, false, false);
					Function_522(106);
				}
			}
			else if (IS_ACTOR_VALID(Function_41()) && IS_OBJECT_VALID(bLocal_1024))
			{
				if (!Function_537(GATEWAY_GET_VOLUME(bLocal_1024)))
				{
					Function_531(StackVal, StackVal, &bLocal_1024, &iLocal_958, &iLocal_959, bLocal_960, vLocal_961);
				}
				if (IS_ACTOR_IN_VOLUME(bLocal_948, GATEWAY_GET_VOLUME(bLocal_1024)))
				{
					if (Function_491(106, 1, 0x3f800000))
					{
						Function_647(&bLocal_984, 2.0f);
						Function_9(&Local_763 + 36, 512);
						NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to GID_COMPLETE - we won", false, false, false, false);
						Function_522(106);
					}
				}
				else
				{
					Function_17();
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x0000006A:
			if (Function_530())
			{
				if (Function_491(83, 1, 0x3f800000))
				{
					DESTROY_ITERATOR(bLocal_1022);
					STREAMING_UNLOAD_BOUNDS();
					if (Function_528())
					{
						Function_9(&Local_763 + 36, 64);
					}
					Local_763.f_8 = Function_150(29);
					Local_763.f_20 = Function_150(38);
					Local_763.f_32 = Function_150(12);
					Function_168(0, 0);
					iLocal_495 = 101;
					NET_LOG(bLocal_934, "TUMco Stage03", "Transitioning to SID_LAST_STAGE: GID_INITIALIZE", false, false, false, false);
					Function_522(0);
				}
			}
			else
			{
				Function_17();
			}
			break;
	}
	return;
}

bool Function_528() //Position: 0x1397F / 80255
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (NET_IS_OBJECT_LOCAL(GET_OBJECT_FROM_ACTOR(bLocal_948)))
		{
			if (Function_529(bLocal_948, 4, 1, 4))
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

bool Function_529(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x139AE / 80302
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

bool Function_530() //Position: 0x13A67 / 80487
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar2 = true;
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_773, bVar0))
		{
			if (bVar2)
			{
				bVar1 = Function_12(Local_773[bVar010].f_36, 512);
				bVar2 = false;
			}
			else if (bVar1 != Function_12(Local_773[bVar010].f_36, 512))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_531(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6) //Position: 0x13AC3 / 80579
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_OBJECT_VALID(*bParam0))
	{
		if (IS_POINT_IN_VOLUME(vVar0, GATEWAY_GET_VOLUME(*bParam0)))
		{
			if (!*iParam1)
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_OBJECTIVE();
				GATEWAY_DISABLE(*bParam0, 1);
				*iParam1 = 1;
				*iParam2 = 0;
				Function_536("COOP_wait_for_players", 0x40f00000, 1, 2, 0);
			}
			else
			{
				Function_532(&iParam4, 1920.0f, "COOP_wait_for_players", 4.0f, 1, 0);
			}
		}
		else if (!*iParam2)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_OBJECTIVE();
			GATEWAY_DISABLE(*bParam0, 0);
			*iParam2 = 1;
			*iParam1 = 0;
			Function_536(bParam3, 7.5f, 1, 1, 1);
		}
		else
		{
			Function_532(&iParam4, 1920.0f, bParam3, 4.0f, 1, 0);
		}
	}
	else
	{
		LOG_ERROR("Invalid gateway passed to UPDATE_COOP_SAFE_ALL_PLAYERS_IN_VOLUME_OBJECTIVES_WITH_GATEWAY");
	}
}

int Function_532(int iParam0, float fParam1, bool bParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x13BF5 / 80885
{
	if (Function_404(iParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_14();
		}
		if (!Function_535())
		{
			Function_533(bParam2, fParam3, iParam4);
			Function_518(iParam0);
			return 1;
		}
		Function_407(iParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_533(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13C3A / 80954
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_534(bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_365(bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_602(bParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_534(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13C99 / 81049
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_366(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_535() //Position: 0x13D10 / 81168
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_536(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x13D3D / 81213
{
	if (!Function_218(16384, 1))
	{
		Function_602(bParam0, iParam1, bParam2, iParam3, bParam4, 0, 0, 0);
	}
}

bool Function_537(bool bParam0) //Position: 0x13D60 / 81248
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
				else if (Function_413(bVar1) < 0)
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

void Function_538() //Position: 0x13DC7 / 81351
{
	var uVar0;
	
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_688))
		{
			GET_POSITION(bLocal_948, &uVar0);
			Function_539(&uVar0, "Rebel06WagonExplosion", 0, 1);
		}
	}
	return;
}

void Function_539(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x13E0C / 81420
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_540() //Position: 0x13E28 / 81448
{
	if (NET_IS_SESSION_HOST())
	{
		if (Function_646(&bLocal_1049))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_652) && iLocal_1056 == 1)
			{
				Function_541(1);
			}
			else if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_648) && iLocal_1056 == 2)
			{
				Function_541(2);
			}
			else if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_636) && iLocal_1056 == 3)
			{
				Function_541(3);
			}
			else if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_644) && iLocal_1056 == 4)
			{
				Function_541(4);
			}
			Function_647(&bLocal_1049, 1.0f);
		}
	}
	return;
}

void Function_541(int iParam0) //Position: 0x13EAD / 81581
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 61, &uVar0, 1, 1);
	return;
}

void Function_542() //Position: 0x13EC2 / 81602
{
	if (!IS_ACTOR_IN_VOLUME(Function_41(), GATEWAY_GET_VOLUME(bLocal_1024)))
	{
		Function_543(bLocal_948, &bLocal_1024, &iLocal_1086, "TUM_CO_obj07", "TUM_CO_goldcoachescortram", "TUM_CO_goldcoachprotect", "TUM_CO_goldcoachgetin", bLocal_960, 16);
	}
	return;
}

void Function_543(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8) //Position: 0x13F46 / 81734
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("UPDATE_VEHICLE_OBJECTIVES vehicle was not valid");
		return;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		LOG_ERROR("UPDATE_VEHICLE_OBJECTIVES vehicle was not a vehicle");
		return;
	}
	if (!IS_OBJECT_VALID(*uParam1))
	{
		LOG_ERROR("UPDATE_VEHICLE_OBJECTIVES gateway was not valid");
		return;
	}
	bVar0 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false);
	GET_OBJECT_POSITION(*uParam1, &vVar1);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (!IS_ACTOR_PLAYER(bVar0))
		{
			return;
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bParam7 = iParam6;
			Function_536(bParam7, 0x40f00000, 1, 2, 0);
			GATEWAY_DISABLE(*uParam1, 1);
			if (Function_549())
			{
				Function_183();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam1));
				}
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
			}
			ADD_BLIP_FOR_ACTOR(bParam0, 325, 0.0f, 4, 0);
			STOP_VEHICLE(bParam0);
			if (!Function_548())
			{
				Function_123(bParam0, &vVar4);
				Function_546(StackVal, StackVal, vVar4, 2, iParam8, 1);
			}
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (!Function_549())
			{
				Function_123(bParam0, &vVar7);
				Function_546(StackVal, StackVal, vVar7, 2, iParam8, 1);
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (GET_ACTOR_SLOT(bVar0) == GET_LOCAL_SLOT())
				{
					*uParam2 = 2;
				}
				else if (Function_544(Function_41(), bParam0))
				{
					*uParam2 = 4;
				}
				else
				{
					*uParam2 = 6;
				}
			}
			break;
		
		case 0x00000002:
			HUD_CLEAR_OBJECTIVE_QUEUE();
			START_VEHICLE(bParam0);
			bParam7 = uParam3;
			Function_536(bParam7, 0x40f00000, 1, 2, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
			}
			GATEWAY_DISABLE(*uParam1, 0);
			if (Function_549())
			{
				Function_183();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam1));
				}
			}
			*uParam2 = 3;
			break;
		
		case 0x00000003:
			if (!Function_549())
			{
				Function_546(StackVal, StackVal, vVar1, 0, iParam8, 1);
				ADD_BLIP_FOR_OBJECT(*uParam1, 330, 0f, 2, 0);
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (GET_ACTOR_SLOT(bVar0) == GET_LOCAL_SLOT())
				{
				}
			}
			else
			{
				*uParam2 = 0;
			}
			break;
		
		case 0x00000004:
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bParam7 = bParam5;
			Function_536(bParam7, 0x40f00000, 1, 2, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
			}
			ADD_BLIP_FOR_ACTOR(bParam0, 325, 0.0f, 4, 0);
			START_VEHICLE(bParam0);
			GATEWAY_DISABLE(*uParam1, 0);
			if (Function_549())
			{
				Function_183();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam1));
				}
			}
			*uParam2 = 5;
			break;
		
		case 0x00000005:
			if (!Function_549())
			{
				Function_546(StackVal, StackVal, vVar1, 0, iParam8, 1);
				ADD_BLIP_FOR_OBJECT(*uParam1, 330, 0f, 2, 0);
			}
			if (Function_544(Function_41(), bParam0))
			{
				if (IS_ACTOR_VALID(bVar0))
				{
					if (GET_ACTOR_SLOT(bVar0) == GET_LOCAL_SLOT())
					{
						*uParam2 = 2;
					}
				}
			}
			else
			{
				*uParam2 = 0;
			}
			break;
		
		case 0x00000006:
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bParam7 = bParam4;
			Function_536(bParam7, 0x40f00000, 1, 2, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
			}
			ADD_BLIP_FOR_ACTOR(bParam0, 325, 0.0f, 4, 0);
			START_VEHICLE(bParam0);
			GATEWAY_DISABLE(*uParam1, 0);
			if (Function_549())
			{
				Function_183();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam1));
				}
			}
			*uParam2 = 7;
			break;
		
		case 0x00000007:
			if (!Function_549())
			{
				Function_546(StackVal, StackVal, vVar1, 0, iParam8, 1);
				ADD_BLIP_FOR_OBJECT(*uParam1, 330, 0f, 2, 0);
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (GET_ACTOR_SLOT(bVar0) == GET_LOCAL_SLOT())
				{
					*uParam2 = 2;
				}
				else if (Function_544(Function_41(), bParam0))
				{
					*uParam2 = 4;
				}
			}
			else
			{
				*uParam2 = 0;
			}
			break;
	}
}

bool Function_544(var uParam0, bool bParam1) //Position: 0x1435A / 82778
{
	int iVar0;
	
	iVar0 = Function_545(uParam0, bParam1);
	if (iVar0 <= 0 && iVar0 >= 5)
	{
		return 1;
	}
	return 0;
}

var Function_545(bool bParam0, bool bParam1) //Position: 0x14378 / 82808
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_INSIDE_VEHICLE(bParam0) || IS_ACTOR_RIDING_VEHICLE(bParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < 5)
		{
			bVar0 = GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bVar1);
			if (bVar0 == bParam0)
			{
				return bVar1;
			}
			bVar1++;
		}
	}
	return 4294967295;
}

void Function_546(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x143B5 / 82869
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_547(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_547(bool bParam0) //Position: 0x14471 / 83057
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

bool Function_548() //Position: 0x144B1 / 83121
{
	if (StackVal || StackVal != 3 != 0)
	{
		return 0;
	}
	return 1;
}

bool Function_549() //Position: 0x144CC / 83148
{
	return Global_28185 != 2;
}

void Function_550() //Position: 0x144D7 / 83159
{
	if (Function_646(&bLocal_1046))
	{
		switch (iLocal_1055)
		{
			case 0x00000000:
				Function_560();
				iLocal_1055++;
				break;
			
			case 0x00000001:
				Function_558();
				iLocal_1055++;
				break;
			
			case 0x00000002:
				Function_556();
				iLocal_1055++;
				break;
			
			case 0x00000003:
				Function_554();
				iLocal_1055++;
				break;
			
			case 0x00000004:
				Function_551();
				iLocal_1055++;
				break;
		}
		if (iLocal_1055 >= 4)
		{
			iLocal_1055 = 0;
		}
		Function_647(&bLocal_1046, 0.2f);
	}
	return;
}

void Function_551() //Position: 0x14568 / 83304
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_POINT_IN_VOLUME(vVar0, Local_77.f_648))
	{
		Function_553(1);
	}
	else if (Function_552(Local_77.f_648))
	{
		Function_553(0);
	}
	return;
}

bool Function_552(bool bParam0) //Position: 0x1459C / 83356
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

void Function_553(bool bParam0) //Position: 0x145EC / 83436
{
	var uVar0;
	
	uVar0 = bParam0;
	if (bParam0 != Function_12(iLocal_1026, 1024))
	{
		if (bParam0)
		{
		}
		NET_SCRIPTMSG_SEND(3, 51, &uVar0, 1, 1);
	}
	return;
}

void Function_554() //Position: 0x14617 / 83479
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_POINT_IN_VOLUME(vVar0, Local_77.f_644))
	{
		Function_555(1);
	}
	else if (Function_552(Local_77.f_644))
	{
		Function_555(0);
	}
	return;
}

void Function_555(bool bParam0) //Position: 0x1464B / 83531
{
	var uVar0;
	
	uVar0 = bParam0;
	if (bParam0 != Function_12(iLocal_1026, 512))
	{
		if (bParam0)
		{
		}
		NET_SCRIPTMSG_SEND(3, 50, &uVar0, 1, 1);
	}
	return;
}

void Function_556() //Position: 0x14676 / 83574
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_POINT_IN_VOLUME(vVar0, Local_77.f_640))
	{
		Function_557(1);
	}
	else if (Function_552(Local_77.f_640))
	{
		Function_557(0);
	}
	return;
}

void Function_557(bool bParam0) //Position: 0x146AA / 83626
{
	var uVar0;
	
	uVar0 = bParam0;
	if (bParam0 != Function_12(iLocal_1026, 256))
	{
		if (bParam0)
		{
		}
		NET_SCRIPTMSG_SEND(3, 49, &uVar0, 1, 1);
	}
	return;
}

void Function_558() //Position: 0x146D5 / 83669
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_POINT_IN_VOLUME(vVar0, Local_77.f_636))
	{
		Function_559(1);
	}
	else if (Function_552(Local_77.f_636))
	{
		Function_559(0);
	}
	return;
}

void Function_559(bool bParam0) //Position: 0x14709 / 83721
{
	var uVar0;
	
	uVar0 = bParam0;
	if (bParam0 != Function_12(iLocal_1026, 128))
	{
		if (bParam0)
		{
		}
		NET_SCRIPTMSG_SEND(3, 48, &uVar0, 1, 1);
	}
	return;
}

void Function_560() //Position: 0x14733 / 83763
{
	vector3 vVar0;
	
	GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar0);
	if (IS_POINT_IN_VOLUME(vVar0, Local_77.f_652))
	{
		Function_561(1);
	}
	else if (Function_552(Local_77.f_652))
	{
		Function_561(0);
	}
	return;
}

void Function_561(bool bParam0) //Position: 0x14767 / 83815
{
	var uVar0;
	
	uVar0 = bParam0;
	if (bParam0 != Function_12(iLocal_1026, 64))
	{
		if (bParam0)
		{
		}
		NET_SCRIPTMSG_SEND(3, 52, &uVar0, 1, 1);
	}
	return;
}

void Function_562() //Position: 0x14791 / 83857
{
	Function_564();
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_1026, 2))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_612))
			{
				Function_563(StackVal, StackVal, *(&Local_77 + 1236), 1);
			}
		}
		if (!Function_12(iLocal_1026, 4))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_616))
			{
				Function_563(StackVal, StackVal, *(&Local_77 + 1260), 2);
			}
		}
		if (!Function_12(iLocal_1026, 8))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_620))
			{
				Function_563(StackVal, StackVal, *(&Local_77 + 1284), 3);
			}
		}
		if (!Function_12(iLocal_1026, 16))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_624))
			{
				Function_563(StackVal, StackVal, *(&Local_77 + 1308), 4);
			}
		}
		if (!Function_12(iLocal_1026, 32))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_628))
			{
				Function_563(StackVal, StackVal, *(&Local_77 + 1332), 5);
			}
		}
	}
	return;
}

void Function_563(vector3 vParam0, int iParam3) //Position: 0x14857 / 84055
{
	struct<13> Var0;
	
	if (NET_IS_SESSION_HOST())
	{
		Var0 = { StackVal, StackVal, vParam0 };
		Var0.f_12 = iParam3;
		NET_SCRIPTMSG_SEND(3, 46, &Var0, 4, 1);
	}
}

void Function_564() //Position: 0x1487E / 84094
{
	if (Function_580(&bLocal_1052))
	{
		switch (iLocal_1057)
		{
			case 0x00000000:
				Function_579();
				iLocal_1057++;
				Function_647(&bLocal_1052, 0.5f);
				break;
			
			case 0x00000001:
				Function_578();
				iLocal_1057++;
				Function_647(&bLocal_1052, 0.5f);
				break;
			
			case 0x00000002:
				Function_577();
				iLocal_1057++;
				Function_647(&bLocal_1052, 0.5f);
				break;
			
			case 0x00000003:
				Function_574();
				iLocal_1057++;
				Function_647(&bLocal_1052, 0.5f);
				break;
			
			case 0x00000004:
				Function_566();
				iLocal_1057++;
				Function_647(&bLocal_1052, 2.0f);
				break;
			
			default:
				Function_565();
				Function_647(&bLocal_1052, 2.0f);
				break;
			}
	}
	return;
}

void Function_565() //Position: 0x14939 / 84281
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ITERATOR_VALID(bLocal_1022))
	{
		LOG_ERROR("Failed to create iterator");
		return;
	}
	OBJECT_ITERATOR_RESET(bLocal_1022);
	ITERATE_IN_LAYOUT(bLocal_1022, Local_77);
	ITERATE_ON_OBJECT_TYPE(bLocal_1022, 15);
	bVar1 = START_OBJECT_ITERATOR(bLocal_1022);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_HORSE(bVar2) && !IS_ACTOR_MOUNTED(bVar2))
			{
				iVar0 = GET_TASK_STATUS(bVar2, 87);
				if (!(iVar0 != 1 || iVar0 != 0))
				{
					TASK_CLEAR(bVar2);
					TASK_FLEE_ACTORSET(bVar2, Function_246(), -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET(bVar2, 1);
					SET_ACTOR_UPDATE_PRIORITY(bVar2, 2);
					RELEASE_ACTOR(bVar2);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bLocal_1022);
	}
	return;
}

void Function_566() //Position: 0x149F1 / 84465
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = bLocal_948;
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_573(bLocal_1032, bVar0);
		Function_572(bLocal_1032, bVar0, 1);
		Function_568(bLocal_1032, bVar0, 0);
		Function_567(bLocal_1032, 1);
		SQUAD_GOALS_CLEAR(bLocal_1032);
		vVar1 = { 0.0f, 0.0f, -12.0f };
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1032, 0, 0, 4294967295);
		TASK_FOLLOW_OBJECT(false, GET_OBJECT_FROM_ACTOR(bLocal_948), &vVar1, 5.0f, 5.0f, 0, 0, 0, 0, 1);
		SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(bLocal_1032, 1, Local_77.f_608, 3, 1);
	}
	return;
}

void Function_567(bool bParam0, bool bParam1) //Position: 0x14A62 / 84578
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_568(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14AAA / 84650
{
	Function_572(bParam0, bParam1, 1);
	Function_571(bParam0, 1);
	Function_570(bParam0, bParam1, 4);
	Function_573(bParam0, bParam1);
	if (bParam2)
	{
		Function_569(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_569(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x14AEA / 84714
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
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
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
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
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

void Function_570(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14BD4 / 84948
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

void Function_571(bool bParam0, int iParam1) //Position: 0x14C19 / 85017
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_572(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14C5A / 85082
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

void Function_573(bool bParam0, bool bParam1) //Position: 0x14CC5 / 85189
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

void Function_574() //Position: 0x14D17 / 85271
{
	Function_575(372, 985);
	return;
}

void Function_575(bool bParam0, bool bParam1) //Position: 0x14D26 / 85286
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_576(bLocal_1033) <= 4)
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		bVar2 = Local_77;
		bVar1 = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_52(), bParam1, vLocal_1027, 0.0f, 0.0f, 0.0f);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_52(), bParam0, vLocal_1027, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_VALID(bVar1))
		{
			ACTOR_MOUNT_ACTOR(bVar0, bVar1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar1, true);
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1000);
			SET_ACTOR_FACTION(bVar0, 19);
			Function_234(&bVar0, 9, 7, bLocal_1084);
			Function_229(&bVar0);
			SQUAD_JOIN(bVar0, bLocal_1032);
		}
		if (IS_ACTOR_VALID(bVar1))
		{
			ACCESSORIZE_HORSE(bVar1, 3);
			SQUAD_JOIN(bVar1, bLocal_1033);
		}
		Function_569(bLocal_1032, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return;
}

int Function_576(bool bParam0) //Position: 0x14DF1 / 85489
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

void Function_577() //Position: 0x14E41 / 85569
{
	Function_575(378, 986);
	return;
}

void Function_578() //Position: 0x14E50 / 85584
{
	Function_575(376, 987);
	return;
}

void Function_579() //Position: 0x14E5F / 85599
{
	Function_575(375, 988);
	return;
}

bool Function_580(bool bParam0) //Position: 0x14E6E / 85614
{
	if (Function_274(bParam0))
	{
		if (Function_269(bParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_581(bool bParam0) //Position: 0x14E89 / 85641
{
	int iVar0;
	
	Function_364(1, 1);
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
	Function_426("MPCOOP_CHEKPOINTCOOP", 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_934, "Local State", "Player was granted an extra life.", false, false, false, false);
		Function_27(&bLocal_545, 0);
	}
	return;
}

void Function_582() //Position: 0x14F4F / 85839
{
	NET_OBJECT_REPLICATION_MODE_START(35, 4);
	bLocal_1024 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Local_77, "Tesoro_Azul_Gateway_Stage03", *(&Local_77 + 1012), *(&Local_77 + 1012 + 12), 24.0f, 10.0f, 24.0f, 3, bLocal_948, 2, 4294967295, 0, 1, 1);
	NET_OBJECT_REPLICATION_MODE_END(35);
	ADD_BLIP_FOR_OBJECT(bLocal_1024, 330, -1.0f, 2, 0);
	bLocal_960 = "TUM_CO_obj07";
	Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
	return;
}

void Function_583(bool bParam0) //Position: 0x14FDE / 85982
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (!IS_ACTOR_MOUNTED(bVar1))
			{
				SQUAD_LEAVE(bVar1);
				TASK_FLEE_ACTOR(bVar1, bLocal_948, 300.0f, -1.0f, 0, 0, 0);
				RELEASE_ACTOR(bVar1);
			}
			else if (GET_RIDER(bVar1) == Function_41())
			{
				SQUAD_LEAVE(bVar1);
				RELEASE_ACTOR(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

bool Function_584() //Position: 0x1504C / 86092
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			return 0;
		}
	}
	return 1;
}

void Function_585() //Position: 0x15191 / 86417
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_1");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_2");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_3");
	bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_4");
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_1");
	bVar5 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_2");
	bVar6 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar2))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar3))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar4))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar4, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar5))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar5, 13, 0);
	}
	if (IS_ACTOR_VALID(bVar6))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar6, 13, 0);
	}
	return;
}

void Function_586() //Position: 0x152C7 / 86727
{
	Function_637(1);
	return;
}

void Function_587() //Position: 0x152D1 / 86737
{
	Function_591(Local_77.f_416);
	Function_591(bLocal_1032);
	Function_590(Local_77.f_416, 7, 0, 1);
	Function_590(bLocal_1032, 7, 0, 1);
	Function_589(Local_77.f_416);
	SQUAD_GOALS_CLEAR(Local_77.f_416);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_416, 0, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_589(bLocal_1032);
	SQUAD_GOALS_CLEAR(bLocal_1032);
	Function_588(&Local_77 + 416);
	Function_588(&bLocal_1032);
	return;
}

void Function_588(bool bParam0) //Position: 0x15334 / 86836
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
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

void Function_589(bool bParam0) //Position: 0x153BC / 86972
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

void Function_590(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x153EE / 87022
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (iParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, 0, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(bVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bVar1, bParam1, iParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_591(bool bParam0) //Position: 0x1545E / 87134
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_END_FORCE_HOLSTER(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_592() //Position: 0x154A3 / 87203
{
	if (!Function_12(Local_763.f_36, 256))
	{
		if (Function_593())
		{
			Function_9(&Local_763 + 36, 256);
			Function_587();
		}
		if (((Function_12(Local_773[010].f_36, 256) || Function_12(Local_773[110].f_36, 256)) || Function_12(Local_773[210].f_36, 256)) || Function_12(Local_773[310].f_36, 256))
		{
			Function_9(&Local_763 + 36, 256);
			Function_587();
		}
	}
	return;
}

bool Function_593() //Position: 0x15518 / 87320
{
	if ((Function_596(Local_77.f_632, Local_77) || Function_594(Function_41(), Local_77.f_416, 1, 1, 0, 25.0f)) || Function_594(Function_41(), bLocal_1032, 1, 1, 0, 25.0f))
	{
		return 1;
	}
	return 0;
}

int Function_594(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x15554 / 87380
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
			if (Function_595(bParam0, bVar1, bParam2, bParam3, bParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_595(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x155B4 / 87476
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

var Function_596(bool bParam0, bool bParam1) //Position: 0x156A1 / 87713
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
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
							bVar0 = true;
						}
						break;
					}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_597() //Position: 0x15713 / 87827
{
	if (Function_646(&bLocal_990))
	{
		if (!Function_601())
		{
			Function_600();
		}
		Function_598();
		Function_647(&bLocal_990, 1.0f);
	}
	if (!Function_274(&bLocal_990))
	{
		Function_647(&bLocal_990, 1.0f);
	}
	return;
}

void Function_598() //Position: 0x15747 / 87879
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (NET_IS_OBJECT_LOCAL(GET_OBJECT_FROM_ACTOR(bLocal_948)))
		{
			if (GET_ACTOR_STUCK_STATE(bLocal_948) != 0)
			{
				if (!iLocal_938)
				{
					Function_647(&bLocal_939, 15.0f);
					iLocal_938 = 1;
				}
				if (Function_646(&bLocal_939))
				{
				}
			}
			else
			{
				Function_599(&bLocal_939);
				iLocal_938 = 0;
			}
		}
	}
	return;
}

void Function_599(bool bParam0) //Position: 0x15798 / 87960
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_600() //Position: 0x157AC / 87980
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 54, &uVar0, 1, 1);
	return;
}

bool Function_601() //Position: 0x157BD / 87997
{
	if (IS_ACTOR_VALID(bLocal_948))
	{
		if (NET_IS_OBJECT_LOCAL(GET_OBJECT_FROM_ACTOR(bLocal_948)))
		{
			if (Function_529(bLocal_948, 1, 1, 4294967295))
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void Function_602(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x157EC / 88044
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
			Var0 = { StackVal, StackVal, StackVal, Function_366(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_603(bool bParam0, float fParam1) //Position: 0x15871 / 88177
{
	if (!Function_274(bParam0))
	{
		Function_647(bParam0, fParam1);
	}
	return;
}

void Function_604() //Position: 0x15887 / 88199
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	SQUAD_SET_FACTION(Local_77.f_416, 19);
	SQUAD_SET_FACTION(bLocal_1032, 19);
	Function_569(Local_77.f_416, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(bLocal_1032, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_1");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_2");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_3");
	bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_4");
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_1");
	bVar5 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_2");
	bVar6 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_3");
	Function_589(bLocal_1032);
	SQUAD_GOALS_CLEAR(bLocal_1032);
	TASK_POINT_GUN_AT_COORD(bVar4, &Local_77 + 1500, -1.0f);
	TASK_POINT_GUN_AT_COORD(bVar5, &Local_77 + 1132, -1.0f);
	TASK_POINT_GUN_AT_COORD(bVar6, &Local_77 + 1156, -1.0f);
	TASK_PRIORITY_SET(bVar4, 1);
	TASK_PRIORITY_SET(bVar5, 1);
	TASK_PRIORITY_SET(bVar6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar4, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar5, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar6, 15, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar4, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar5, 13, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar6, 13, 1);
	return;
}

void Function_605(bool bParam0) //Position: 0x15A42 / 88642
{
	if (Function_274(bParam0))
	{
		if (Function_273(bParam0))
		{
			Function_271();
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

void Function_606() //Position: 0x15B12 / 88850
{
	Function_607(StackVal, StackVal, StackVal, bLocal_948, *(&Local_77 + 1212), 1, 1, 1);
	VEHICLE_SET_HANDBRAKE(bLocal_948, 1.0f);
	return;
}

void Function_607(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x15B38 / 88888
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, iParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_608(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x15BF1 / 89073
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(bParam2, bParam0, bParam3, bParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(bParam0, bParam2, 0, 0, iParam1);
	}
}

void Function_609(int iParam0, bool bParam1) //Position: 0x15C21 / 89121
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
	if (Function_618(iParam0, 8))
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
		UI_EXIT("MpWeaponSuppressor");
	}
	Function_617(0);
	if (bParam1)
	{
		if (IS_ACTOR_VALID(Function_41()))
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(Function_41(), 0.1f, 0.9f, 0);
		}
		UI_EXIT("XpHud");
		UI_EXIT("MpWeaponSuppressor");
		SET_HUD_MAP_DRAW_ENABLED(1);
		if (*iParam0 != 4 || *iParam0 != 8)
		{
			UI_EXIT("MPSplash");
		}
	}
	else if (!Function_618(iParam0, 64))
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
		UI_SHOW("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_RESTORE("WeaponAmmo");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	UI_EXIT("HudMPNoFun");
	Function_611(iParam0, bParam1);
	Function_610();
	if (iParam0->f_96 >= 4294967295)
	{
		NET_GAMER_SET_TEAM(iParam0->f_96, 3);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		SET_PLAYER_CONTROL(false, 1, 1, 1);
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			DECOR_REMOVE(bVar0, "ForceAim");
		}
	}
	Function_157(iParam0 + 48);
	return;
}

void Function_610() //Position: 0x15DA3 / 89507
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_611(int iParam0, bool bParam1) //Position: 0x15DB7 / 89527
{
	if (Function_618(iParam0, 2))
	{
		PPP_UNLOAD_PRESET(Function_616());
		PPP_UNLOAD_PRESET(Function_615());
		Function_614(iParam0, 2);
	}
	if (IS_OBJECT_VALID(iParam0->f_100))
	{
		DESTROY_OBJECT(iParam0->f_100);
	}
	if (Function_618(iParam0, 4))
	{
		PPP_UNLOAD_PRESET(Function_613());
		Function_614(iParam0, 4);
	}
	if (bParam1)
	{
		Function_612();
	}
	return;
}

void Function_612() //Position: 0x15E06 / 89606
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	return;
}

var Function_613() //Position: 0x15E0F / 89615
{
	return "MP_ShowdownBlueTeam.ppp";
}

void Function_614(int iParam0, int iParam1) //Position: 0x15E2F / 89647
{
	Function_7(iParam0 + 24, iParam1);
	return;
}

var Function_615() //Position: 0x15E3E / 89662
{
	return "MP_WinningFrame.ppp";
}

var Function_616() //Position: 0x15E5A / 89690
{
	return "MP_ShowdownRedTeam.ppp";
}

void Function_617(bool bParam0) //Position: 0x15E79 / 89721
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

bool Function_618(int iParam0, int iParam1) //Position: 0x15EAE / 89774
{
	return Function_45(iParam0->f_24, iParam1);
}

void Function_619(int iParam0) //Position: 0x15EBD / 89789
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	bVar1 = iVar0;
	if (iParam0->f_92 < 0.0f)
	{
		iParam0->f_92 = (iParam0->f_92 - GET_UNWARPED_REALTIME_SECONDS());
		if (iParam0->f_92 >= 0.0f)
		{
			switch (bVar1)
			{
				case 0x00000002:
					DECOR_SET_INT(Function_41(), "Go", true);
					break;
				
				case 0x00000004:
					DECOR_SET_INT(Function_41(), "Go2", true);
					break;
				
				case 0x00000006:
					DECOR_SET_INT(Function_41(), "Go3", true);
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
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_613());
				Function_621(iParam0, 4);
				UI_SET_STYLE("MPSplashTitle", 16);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				strcpy(&cVar2, "showdown_you", 16);
				Function_426("ANNOUNCE_YOU", 0);
				UI_SET_TEXT("MPSplashTitle", &cVar2);
				break;
			
			case 0x00000003:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_41(), "Go");
				Function_611(iParam0, 1);
				Function_426("ANNOUNCE_VS", 0);
				CANCEL_TIME_WARP(0);
				break;
			
			case 0x00000004:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_616());
				Function_621(iParam0, 2);
				strcpy(&cVar2, "nTeamDef_4", 16);
				Function_426("ANNOUNCE_TEAM_4", 0);
				UI_SET_TEXT("MPSplashTitle", &cVar2);
				UI_SET_STYLE("MPSplashTitle", 15);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000005:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_41(), "Go2");
				Function_611(iParam0, 1);
				CANCEL_TIME_WARP(0);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000006:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_613());
				iParam0->f_100 = Function_620(Function_41());
				Function_621(iParam0, 4);
				UI_SET_TEXT("MPSplashItem.s0", Function_473(GET_LOCAL_SLOT()));
				UI_SET_STRING("Generic_Dbuffer128_0", &Global_78480 + 32);
				if (Function_375())
				{
					if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT())))
					{
						UI_SET_STRING("Generic_Dbuffer128_0", NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT()));
					}
				}
				UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
				UI_SET_STYLE("MPSplashTitle", 17);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000007:
				DECOR_REMOVE(Function_41(), "Go3");
				CANCEL_TIME_WARP(1);
				UI_EXIT("MPSplash");
				Function_611(iParam0, 1);
				if (IS_PS3())
				{
					Function_365("showdown_draw_help_ps3", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				else
				{
					Function_365("showdown_draw_help", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				break;
			}
	}
	return;
}

var Function_620(bool bParam0) //Position: 0x1630D / 90893
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_233(bParam0);
	vVar6 = { StackVal, StackVal, Function_233(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0.5f, -0.5f, -0.5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_41(), "LookItMeLight", vVar6, 1.0f, 1.0f, 1.0f, 2.5f);
}

void Function_621(int iParam0, int iParam1) //Position: 0x16382 / 91010
{
	Function_10(iParam0 + 24, iParam1);
	return;
}

void Function_622() //Position: 0x16391 / 91025
{
	UI_ENTER("HudMPNoFun");
	Function_621(&Local_1121, 8);
	Function_634(&Local_1121);
	Local_1121.f_96 = 4294967295;
	Local_1121.f_44 = 4294967295;
	Local_1121.f_36 = Function_623(Local_77, 0, Function_41(), Local_77.f_1524, Local_77.f_1552, 0, 0, 0);
	return;
}

var Function_623(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x163DC / 91100
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Showdown2", 9, 1);
	}
	Function_624(&bVar0, uParam2, uParam3, uParam4);
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

void Function_624(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x1645C / 91228
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_633(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_632(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_631(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_630(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_629(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_628(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_627(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_626(&bVar0, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_625(&bVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 12.5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 1.5f, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "Go", 2, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 1.5f, 3, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "Go2", 4, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 2.5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 5, cParam1, "Go3", 6, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 4.5f, 7);
}

void Function_625(var uParam0, bool bParam1, bool bParam2) //Position: 0x16591 / 91537
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.5f, 6.064114f, 4.464365f, -37.3141f, -2.927814f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_626(var uParam0, bool bParam1, bool bParam2) //Position: 0x1664D / 91725
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.5f, 6.064114f, 4.4647f, -37.3141f, -2.927871f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_627(var uParam0, bool bParam1) //Position: 0x16709 / 91913
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 18.542f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 1.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.674432f, 0.879538f, 1.537114f, -0.349963f, 9.024257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.41889f, 0.869587f, -0.071906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_628(var uParam0, bool bParam1) //Position: 0x16795 / 92053
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 7.228f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.725417f, 1.294801f, -2.751867f, 2.473631f, 165.6309f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.533f, -0.21f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.64f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_629(var uParam0, bool bParam1) //Position: 0x1685D / 92253
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 6.728f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.07f, 1.175f, -4.092f, 0.0f, 179.5041f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.074344f, 1.538012f, -0.054681f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 1.8226f);
	return;
}

void Function_630(var uParam0, bool bParam1) //Position: 0x16921 / 92449
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8.5f, 1.469942f, -1.747687f, -1.032928f, -98.24805f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.161f, 1.317305f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_631(var uParam0, bool bParam1) //Position: 0x169E9 / 92649
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8.5f, 1.469955f, -0.105855f, -1.02399f, -89.95139f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.024f, 1.317f, -0.115f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_632(var uParam0, bool bParam1) //Position: 0x16AB1 / 92849
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8.5f, 1.47f, -1.747912f, -1.011041f, 105.8626f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.153f, 1.316862f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_633(var uParam0, bool bParam1) //Position: 0x16B79 / 93049
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8.5f, 1.469824f, -0.105534f, -1.030178f, 89.93437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.023677f, 1.317106f, -0.115403f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_634(int iParam0) //Position: 0x16C41 / 93249
{
	if (!Function_618(iParam0, 16))
	{
		HUD_FADE_IN(1.5f, 1065353216);
		SET_HUD_MAP_DRAW_ENABLED(0);
		UI_SUPPRESS("Reticle");
		UI_SUPPRESS("WeaponAmmo");
		UI_EXCLUDE("WeaponAmmo");
		NET_GAMER_ICONS_SHOW_LOCAL(1);
		if (Function_618(iParam0, 8))
		{
			if (Function_618(iParam0, 64))
			{
				Function_635("common_null");
				UI_EXIT("HudMPNoFun");
			}
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", iParam0 + 76);
			if (IS_STRING_VALID(&Global_83591 + 28[09]))
			{
				Function_516(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
			}
		}
		else if (Function_618(iParam0, 64))
		{
			Function_635("standoff_title");
			UI_EXIT("HudMPNoFun");
		}
		Function_621(iParam0, 16);
	}
	return;
}

void Function_635(bool bParam0) //Position: 0x16D4E / 93518
{
	UI_SET_TEXT("MPSplashItem.s0", bParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

void Function_636(bool bParam0, int iParam1) //Position: 0x16DB1 / 93617
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_HOLSTER_WEAPON(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_637(bool bParam0) //Position: 0x16DF8 / 93688
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 3)
	{
		bVar1 = GET_SLOT_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (bParam0)
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
			}
			else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "Idle"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
				Function_237(bVar1, 0, 1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_638() //Position: 0x16E4E / 93774
{
	bool bVar0;
	var uVar1;
	
	Function_645(&Local_504, 1);
	bVar0 = false;
	if (((Local_504 != 1001 || Local_504 != 1002) || Local_504 != 1003) || Local_504 != 1004)
	{
		bVar0 = Function_643();
	}
	switch (Local_504)
	{
		case 0x000003E8:
			iLocal_1091 = 15;
			Function_518(&Local_504 + 4);
			Function_515();
			Function_511(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_504.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_504.f_16 = Function_639(Local_77, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_504.f_16))
				{
				}
				else
				{
					LOG_ERROR("TumbleweedMP_CO_cutscene03 - Failed to create TumbleweedMP_CO_cutscene03_cutscene");
				}
			}
			Local_504 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_504.f_16), false))
			{
				Function_505(Global_34573, 1, 1);
				Local_504 = 1002;
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
				Local_504 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_404(&Local_504 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					iLocal_1092 = 15;
					Local_504 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_518(&Local_504 + 4);
				Local_504 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_505(Global_34573, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_504.f_16))
				{
					DESTROY_OBJECT(Local_504.f_16);
				}
				Local_504 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_504 = 1104;
			}
			break;
	}
	return 0;
}

var Function_639(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x17083 / 94339
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumbleweedMP_CO_cutscene03", 2, 1);
	}
	Function_640(&bVar0);
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

void Function_640(int iParam0) //Position: 0x17109 / 94473
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_642(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_641(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(bVar1, 0.0f, 2.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 16.0f, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(bVar1, 0.0f, 2.0f, 0);
	return;
}

void Function_641(int iParam0) //Position: 0x17168 / 94568
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3713.062f, 9.758611f, 3515.819f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.024972f, 0.120661f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_642(var uParam0) //Position: 0x171D2 / 94674
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -3716.774f, 10.11866f, 3521.51f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.007531f, -0.505238f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_643() //Position: 0x1723C / 94780
{
	switch (iLocal_1091)
	{
		case 0x0000000F:
			if (Function_404(&Local_504 + 4) < 2.0f)
			{
				Function_644();
				iLocal_1091 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_404(&Local_504 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_644() //Position: 0x1728A / 94858
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene3_v1_AA", "TEscape_Scene3_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene3_v1_AB1", "TEscape_Scene3_v1_AB1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene3_v1_AB2", "TEscape_Scene3_v1_AB2", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_645(int iParam0, bool bParam1) //Position: 0x17375 / 95093
{
	if (!iParam0->f_24)
	{
		if (((((((((*iParam0 == 1000 && *iParam0 == 1001) && *iParam0 == 1002) && *iParam0 == 1003) && *iParam0 == 1103) && *iParam0 == 1104) && *iParam0 == 1105) && *iParam0 == 1106) && !UI_ISACTIVE("Cutscenes_Paused")) && !UI_ISACTIVE("PauseScene"))
		{
			if (IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
			{
				if (!Function_218(4096, 1))
				{
					Function_46(4096, 1);
				}
			}
			if (Function_418())
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

bool Function_646(bool bParam0) //Position: 0x1744F / 95311
{
	if (Function_580(bParam0))
	{
		Function_599(bParam0);
		return 1;
	}
	return 0;
}

void Function_647(bool bParam0, float fParam1) //Position: 0x17465 / 95333
{
	Function_648(bParam0, -fParam1);
	return;
}

void Function_648(var uParam0, float fParam1) //Position: 0x17473 / 95347
{
	Function_271();
	Function_649(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_649(var uParam0, var uParam1) //Position: 0x17487 / 95367
{
	uParam0->f_4 = uParam1;
	Function_10(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_650() //Position: 0x174A4 / 95396
{
	bool bVar0[4];
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_1");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_2");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_3");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_4");
	if (IS_ACTOR_VALID(bVar0[0]))
	{
		Function_237(bVar0[0], 0, 1);
	}
	if (IS_ACTOR_VALID(bVar0[1]))
	{
		Function_237(bVar0[1], 0, 1);
	}
	if (IS_ACTOR_VALID(bVar0[2]))
	{
		Function_237(bVar0[2], 0, 1);
	}
	if (IS_ACTOR_VALID(bVar0[3]))
	{
		Function_237(bVar0[3], 0, 1);
	}
	bVar5 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_1");
	bVar6 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_2");
	bVar7 = FIND_ACTOR_IN_LAYOUT(Local_77, "s03_Showdown_Cavalry_3");
	Function_589(bLocal_1032);
	SQUAD_GOALS_CLEAR(bLocal_1032);
	TASK_POINT_GUN_AT_COORD(bVar5, &Local_77 + 1500, -1.0f);
	TASK_POINT_GUN_AT_COORD(bVar6, &Local_77 + 1132, -1.0f);
	TASK_POINT_GUN_AT_COORD(bVar7, &Local_77 + 1156, -1.0f);
	TASK_PRIORITY_SET(bVar5, 1);
	TASK_PRIORITY_SET(bVar6, 1);
	TASK_PRIORITY_SET(bVar7, 1);
	Function_637(0);
	return;
}

void Function_651() //Position: 0x17616 / 95766
{
	bool bVar0;
	
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1032, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_948, 329, 0, 2, 0), "TUM_CO_goldcoach");
	bVar0 = GET_BLIP_ON_ACTOR(bLocal_948);
	SET_BLIP_PRIORITY(bVar0, 4);
	return;
}

int Function_652(bool bParam0, int iParam1) //Position: 0x1765D / 95837
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

void Function_653() //Position: 0x17709 / 96009
{
	vector3 vVar0;
	struct<5> Var3;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iLocal_1023 = TRAIN_CREATE_NEW_TRAIN(4, "rail__rrtrack_02x", 0);
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1023, 1166);
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1023, 1167);
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1023, 1157);
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1023, 1162);
	vVar0 = { -3581.16f, 20.226f, 4117.876f };
	Var3 = { 0.0f, 64.1482f, 0.0f };
	UNK_0x44986367(StackVal, &Var3);
	TRAIN_SET_POSITION_DIRECTION(iLocal_1023, &vVar0, &Var3);
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_654() //Position: 0x1778B / 96139
{
	int iVar0;
	bool bVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 6);
		NET_OBJECT_REPLICATION_MODE_START(17, 6);
		bLocal_948 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "s03_gold_wagon", 1177, 986, *(&Local_77 + 1212), *(&Local_77 + 1212 + 12), 0, 976, 976, 976, 4);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_948, false);
		iVar0 = GET_NUM_DRAFTED_ACTORS(bLocal_948);
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (iVar0 - 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar1, bLocal_948), false);
			bVar1++;
		}
		SET_ACTOR_INVULNERABILITY(bLocal_948, 1);
		bLocal_949 = GET_DRAFT_ACTOR(false, bLocal_948);
		bLocal_950 = GET_DRAFT_ACTOR(true, bLocal_948);
		bLocal_951 = GET_DRAFT_ACTOR(2, bLocal_948);
		bLocal_952 = GET_DRAFT_ACTOR(3, bLocal_948);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_948, 50);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_949, 51);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_950, 52);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_951, 53);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_952, 54);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_949, 15.0f);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_950, 15.0f);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_951, 15.0f);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_952, 15.0f);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_948, 15.0f);
		Function_655();
		NET_OBJECT_REPLICATION_MODE_END(17);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return;
}

void Function_655() //Position: 0x178AB / 96427
{
	return;
}

void Function_656() //Position: 0x178B1 / 96433
{
	bool bVar0[3];
	bool bVar4[3];
	bool bVar8;
	int iVar9;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_660();
	Function_659(&Local_77 + 416, 9, 7, iLocal_1081);
	bVar8 = Local_77;
	bVar4[0] = CREATE_ACTOR_IN_LAYOUT(bVar8, Function_52(), 988, *(&Local_77 + 1036), *(&Local_77 + 1036 + 12));
	bVar0[0] = CREATE_ACTOR_IN_LAYOUT(bVar8, "s03_Showdown_Cavalry_1", 375, *(&Local_77 + 1036), *(&Local_77 + 1036 + 12));
	bVar4[1] = CREATE_ACTOR_IN_LAYOUT(bVar8, Function_52(), 987, *(&Local_77 + 1060), *(&Local_77 + 1060 + 12));
	bVar0[1] = CREATE_ACTOR_IN_LAYOUT(bVar8, "s03_Showdown_Cavalry_2", 376, *(&Local_77 + 1060), *(&Local_77 + 1060 + 12));
	bVar4[2] = CREATE_ACTOR_IN_LAYOUT(bVar8, Function_52(), 986, *(&Local_77 + 1084), *(&Local_77 + 1084 + 12));
	bVar0[2] = CREATE_ACTOR_IN_LAYOUT(bVar8, "s03_Showdown_Cavalry_3", 378, *(&Local_77 + 1084), *(&Local_77 + 1084 + 12));
	NET_ACTOR_SET_SCRIPT_INT(bVar0[0], 805);
	NET_ACTOR_SET_SCRIPT_INT(bVar0[1], 806);
	NET_ACTOR_SET_SCRIPT_INT(bVar0[2], 807);
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < 2)
	{
		if (IS_ACTOR_VALID(bVar0[iVar9]) && IS_ACTOR_VALID(bVar4[iVar9]))
		{
			ACTOR_MOUNT_ACTOR(bVar0[iVar9], bVar4[iVar9]);
			SET_ACTOR_UPDATE_PRIORITY(bVar4[iVar9], false);
		}
		if (IS_ACTOR_VALID(bVar0[iVar9]))
		{
			Function_235(&(bVar0[iVar9]));
		}
		if (IS_ACTOR_VALID(bVar4[iVar9]))
		{
			ACCESSORIZE_HORSE(bVar4[iVar9], 3);
			SQUAD_JOIN(bVar4[iVar9], bLocal_1033);
		}
		iVar9++;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_590(Local_77.f_416, 7, 0, 0);
	Function_658(Local_77.f_416, 0);
	Function_657(&Local_77 + 416);
	SQUAD_SET_FACTION(Local_77.f_416, 1);
	return;
}

void Function_657(int iParam0) //Position: 0x17AA9 / 96937
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

void Function_658(bool bParam0, int iParam1) //Position: 0x17B2E / 97070
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_START_FORCE_HOLSTER(bVar1, iParam1, 0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_659(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17B76 / 97142
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
			Function_234(&bVar1, bParam1, bParam2, bParam3);
		}
		bVar0++;
	}
}

void Function_660() //Position: 0x17BF6 / 97270
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_416 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Infantry"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_1", 369, -3718.045f, 7.80039f, 3488.408f, 0.0f, -8.375299f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 801);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_2", 370, -3720.247f, 7.781368f, 3487.513f, 0.0f, -7.606446f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 802);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_3", 371, -3722.533f, 7.830818f, 3487.46f, 0.0f, -6.292523f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 803);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_4", 369, -3715.326f, 7.781368f, 3488.526f, 0.0f, -12.92467f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 804);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_5", 369, -3676.523f, 8.070692f, 3499.478f, 0.0f, 85.78625f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_6", 370, -3684.003f, 8.163825f, 3499.128f, 0.0f, 85.78625f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_7", 371, -3684.003f, 8.981612f, 3490.111f, 0.0f, 85.78625f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_8", 372, -3676.002f, 8.274555f, 3484.81f, 0.0f, 127.2138f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_9", 373, -3678.219f, 8.236655f, 3489.781f, 0.0f, 127.2138f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_Infantry_10", 374, -3692f, 8.050257f, 3503.372f, 0.0f, -7.831564f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_416);
	SET_ACTOR_FACTION(bVar0, 23);
	return;
}

void Function_661(bool bParam0, bool bParam1) //Position: 0x17ED5 / 98005
{
	if (IS_VOLUME_VALID(bParam1))
	{
		bParam0->f_8 = bParam1;
	}
	return;
}

void Function_662() //Position: 0x17EEC / 98028
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_77, Function_52());
	bLocal_1032 = GET_SQUAD_FROM_OBJECT(bVar0);
	bVar1 = CREATE_SQUAD_IN_LAYOUT(Local_77, Function_52());
	bLocal_1033 = GET_SQUAD_FROM_OBJECT(bVar1);
	return;
}

void Function_663() //Position: 0x17F16 / 98070
{
	bool bVar0;
	
	bVar0 = GET_LOCAL_SLOT();
	if (bVar0 == 0)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Function_41(), *(&Local_77 + 1108), 1, false, 1);
	}
	else if (bVar0 == 1)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Function_41(), *(&Local_77 + 1132), 1, false, 1);
	}
	else if (bVar0 == 2)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Function_41(), *(&Local_77 + 1156), 1, false, 1);
	}
	else if (bVar0 == 3)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Function_41(), *(&Local_77 + 1184), 1, false, 1);
	}
	return;
}

void Function_664(int iParam0, int iParam1) //Position: 0x17FA6 / 98214
{
	Function_669(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_665(StackVal, iParam1);
	}
	return;
}

void Function_665(int iParam0, var uParam1) //Position: 0x17FD7 / 98263
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_669(iParam0);
	Function_668(iVar0);
	PRINTNL();
	Function_666(iParam0, iVar0, uParam1);
	return;
}

void Function_666(int iParam0, bool bParam1, bool bParam2) //Position: 0x18000 / 98304
{
	int iVar0;
	
	Function_669(iParam0);
	Function_668(bParam1);
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
	Function_667();
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

void Function_667() //Position: 0x18179 / 98681
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_668(bool bParam0) //Position: 0x18185 / 98693
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

void Function_669(int iParam0) //Position: 0x181CB / 98763
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

void Function_670() //Position: 0x18211 / 98833
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_tum_sol_long_roaddetachedCurve16", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_loop_road", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_loop_01b_roaddetachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_ben_mex_path", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve179", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve178", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve172", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve171", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve170", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve169", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve167", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18));
	SET_CURVE_WEIGHT(bVar0, 30);
	return;
}

void Function_671() //Position: 0x18467 / 99431
{
	switch (iLocal_1060)
	{
		case 0x00000000:
			if (iLocal_496 != 3 || iLocal_496 != 2)
			{
				Function_675(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_496 != 9 || iLocal_496 != 10)
			{
				Function_675(2);
			}
			break;
		
		case 0x00000002:
			if ((iLocal_496 != 9 || iLocal_496 != 10) || iLocal_496 != 11)
			{
				if (!IS_PLAYER_DEADEYE(false))
				{
					Function_675(3);
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_632))
			{
				Function_675(4);
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_612))
			{
				Function_675(5);
			}
			break;
		
		case 0x00000005:
			Function_672(&iLocal_967, 34, 26, 25, 10.0f);
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_624))
			{
				Function_675(6);
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_608))
			{
				Function_675(7);
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_680))
			{
				Function_675(8);
			}
			break;
		
		case 0x00000008:
			if (iLocal_496 == 106)
			{
				Function_675(9);
			}
			break;
		
		case 0x00000009:
			Function_675(10);
			break;
		
		case 0x0000000A:
			break;
	}
	return;
}

void Function_672(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4) //Position: 0x1859E / 99742
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_674(fParam4);
		if (0 == iVar0)
		{
			Function_673(iParam0, iParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_673(iParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_673(iParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

void Function_673(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x185E4 / 99812
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_517(*iParam0), iParam2, iParam3, iParam4);
	}
}

int Function_674(float fParam0) //Position: 0x18608 / 99848
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

void Function_675(int iParam0) //Position: 0x1863C / 99900
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_516("FTR_SONG_05", 8, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 8;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000002:
			Function_516("FTR_SONG_05", 46, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 46;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000003:
			Function_516("FTR_SONG_05", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 34;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000004:
			Function_516("FTR_SONG_05", 11, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 11;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000005:
			Function_516("FTR_SONG_05", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 34;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000006:
			Function_516("FTR_SONG_05", 26, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 26;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000007:
			Function_516("FTR_SONG_05", 25, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 25;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000008:
			Function_516("FTR_SONG_05", 7, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 7;
			iLocal_1060 = iParam0;
			break;
		
		case 0x00000009:
		case 0x00000000:
		case 0x0000000A:
			Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 0;
			iLocal_1060 = iParam0;
			break;
	}
	return;
}

void Function_676() //Position: 0x187F8 / 100344
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_678();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_677();
	}
	Function_532(&vLocal_961, 1920.0f, bLocal_960, 4.0f, 2, 0);
	return;
}

void Function_677() //Position: 0x18822 / 100386
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	if (Function_404(&iLocal_536) <= 1.0f)
	{
		Function_518(&iLocal_536);
	}
	return;
}

void Function_678() //Position: 0x18849 / 100425
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	return;
}

void Function_679() //Position: 0x1885F / 100447
{
	if (Function_525())
	{
		Function_767();
	}
	Function_765();
	if ((((!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Global_63401, Global_63404) && iLocal_496 == 0) && iLocal_496 == 2) && iLocal_496 == 3) && iLocal_496 == 6)
	{
		SET_TIME_OF_DAY(Global_63404);
		SET_TIME_ACCELERATION(0.0f);
		Function_664(0, 0);
	}
	switch (iLocal_496)
	{
		case 0x00000000:
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_764();
			Function_518(&vLocal_961);
			SET_TIME_OF_DAY(Global_63401);
			SET_TIME_ACCELERATION(0.5f);
			Function_664(0, 0);
			Function_763();
			Function_521();
			Function_661(&bLocal_545, Local_77.f_500);
			SET_ACTOR_INVULNERABILITY(Function_41(), 0);
			Function_489(Function_41(), 1);
			Function_762(Local_77.f_500, 351.89f);
			STREAMING_SET_CUTSCENE_MODE(1);
			Function_398(&Global_78578 + 96);
			NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_POST_STREAMING", false, false, false, false);
			Function_522(2);
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4))
			{
				if (Function_491(3, 1, 0x3f800000))
				{
					Function_761();
					Function_755();
					SET_ACTOR_INVULNERABILITY(Function_41(), 0);
					Function_489(Function_41(), 1);
					Function_647(&bLocal_984, 2.0f);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_CUTSCENE", false, false, false, false);
					Function_522(3);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000003:
			if (Function_646(&bLocal_984))
			{
				Function_754();
				Function_753();
			}
			if (Function_746())
			{
				HUD_FADE_IN(2.0f, 1065353216);
				Function_745();
				UNK_0x2148AC15(322, 10);
				UNK_0x444C3C32(0, 4, 0);
				STREAMING_SET_CUTSCENE_MODE(0);
				STREAMING_UNLOAD_SCENE();
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				Function_522(6);
				NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000006:
			Function_753();
			Function_744();
			VEHICLE_SET_HANDBRAKE(bLocal_953, 0.0f);
			SET_TIME_OF_DAY(Global_63401);
			SET_TIME_ACCELERATION(0.5f);
			Function_664(0, 0);
			Function_603(&bLocal_999, 5.0f);
			Function_743();
			Function_605(&Global_78578 + 96);
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
			Function_522(7);
			break;
		
		case 0x00000007:
			Function_729();
			if (Function_12(iLocal_994, 16))
			{
				if (Function_491(8, 1, 0x3f800000))
				{
					Function_725();
					Function_647(&bLocal_996, 1.0f);
					Function_723(1);
					REMOVE_BLIP(bLocal_1018);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
					Function_522(8);
				}
			}
			else
			{
				if (Function_646(&bLocal_999))
				{
					Function_365("TUM_CO_help02", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_710();
				Function_708();
				Function_744();
				Function_17();
			}
			break;
		
		case 0x00000008:
			Function_729();
			Function_710();
			Function_661(&bLocal_545, Local_77.f_508);
			Function_183();
			Function_744();
			Function_707();
			Function_706();
			Function_697();
			Function_185();
			Function_647(&bLocal_999, 5.0f);
			STREAMING_LOAD_BOUNDS(-4086.736f, 37.764f, 2950.394f, 50.0f, 1);
			NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_FOURTH_GOAL", false, false, false, false);
			Function_522(9);
			break;
		
		case 0x00000009:
			Function_729();
			Function_710();
			Function_695();
			Function_744();
			if (Function_646(&bLocal_999))
			{
				Function_365("TUM_CO_help04", 0x41200000, 1, 0, 2, 1, 0);
			}
			if (Function_12(iLocal_994, 32))
			{
				if (Function_491(10, 1, 0x3f800000))
				{
					Function_647(&bLocal_1002, 10.0f);
					Function_647(&bLocal_1005, 10.0f);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
					Function_190();
					Function_522(10);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x0000000A:
			Function_710();
			Function_697();
			if (Function_646(&bLocal_999))
			{
				Function_365("TUM_CO_help04", 0x41200000, 1, 0, 2, 1, 0);
			}
			if (Function_12(iLocal_994, 64))
			{
				if (Function_491(11, 1, 0x3f800000))
				{
					Function_14();
					Function_515();
					Function_581("TUM_CO_obj05_complete");
					Function_661(&bLocal_545, Local_77.f_524);
					STREAMING_UNLOAD_BOUNDS();
					Function_694(4294967295);
					Function_190();
					Function_647(&bLocal_984, 10.0f);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_FIFTIETH_GOAL", false, false, false, false);
					Function_522(55);
				}
			}
			else
			{
				Function_686();
				Function_684();
				Function_17();
			}
			break;
		
		case 0x00000037:
			if (Function_580(&bLocal_984))
			{
				Function_694(4294967295);
				Function_661(&bLocal_545, Local_77.f_520);
				Function_647(&bLocal_1008, 4.0f);
				NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_SIXTH_GOAL", false, false, false, false);
				Function_522(11);
			}
			break;
		
		case 0x0000000B:
			if (Function_580(&bLocal_1008))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_14();
				Function_515();
				bLocal_960 = "TUM_CO_obj06";
				Function_602("TUM_CO_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_683();
				Function_522(12);
			}
			break;
		
		case 0x0000000C:
			Function_710();
			if (Function_413(GET_LOCAL_SLOT()) <= 1)
			{
				if (Function_491(13, 1, 0x3f800000))
				{
					Function_647(&bLocal_984, 4.0f);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
					Function_522(13);
				}
			}
			else if (!IS_OBJECT_VALID(bLocal_993))
			{
				if (Function_491(13, 1, 0x3f800000))
				{
					Function_647(&bLocal_984, 4.0f);
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
					Function_522(13);
				}
			}
			else if (IS_ACTOR_VALID(Function_41()) && IS_OBJECT_VALID(bLocal_993))
			{
				if (!Function_537(GATEWAY_GET_VOLUME(bLocal_993)))
				{
					Function_531(StackVal, StackVal, &bLocal_993, &iLocal_958, &iLocal_959, bLocal_960, vLocal_961);
				}
				if (IS_ACTOR_IN_VOLUME(Function_41(), GATEWAY_GET_VOLUME(bLocal_993)) || Function_12(iLocal_994, 512))
				{
					if (Function_491(13, 1, 0x3f800000))
					{
						Function_647(&bLocal_984, 4.0f);
						SET_ACTOR_INVULNERABILITY(Function_41(), 1);
						NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to GID_SEVENTH_GOAL", false, false, false, false);
						Function_522(13);
					}
					if (!Function_12(iLocal_994, 1024))
					{
						Function_407(&iLocal_1019, 0.0f);
						Function_9(&iLocal_994, 1024);
					}
					if (Function_12(iLocal_994, 1024) && Function_682(&iLocal_1019, 12.0f))
					{
						Function_681();
					}
				}
				else if (Function_12(iLocal_994, 1024))
				{
					if (Function_408(&iLocal_1019))
					{
						Function_680(&iLocal_1019);
					}
					Function_6(&iLocal_994, 1024);
				}
			}
			break;
		
		case 0x0000000D:
			PRINT_BIG("TUM_CO_obj06_complete", 1084227584, 0, 2, 0);
			if (Function_580(&bLocal_984))
			{
				if (Function_491(106, 1, 0x3f800000))
				{
					Function_581("TUM_CO_obj06_complete");
					SET_ACTOR_INVULNERABILITY(Function_41(), 1);
					SET_PLAYER_CONTROL(false, 0, 0, 0);
					Function_647(&bLocal_984, 3.0f);
					HUD_FADE_OUT(3.0f, 1f, 1);
					Function_522(106);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x0000006A:
			SET_ACTOR_INVULNERABILITY(Function_41(), 1);
			SET_PLAYER_CONTROL(false, 0, 0, 0);
			if (Function_580(&bLocal_984) && HUD_IS_FADED())
			{
				if (Function_491(2, 1, 0x3f800000))
				{
					Function_184(0);
					Function_364(1, 1);
					Function_46(65536, 0);
					if (IS_ACTOR_VALID(Function_41()))
					{
						if (IS_ACTOR_ALIVE(Function_41()))
						{
							Function_9(&Local_763 + 36, 2);
						}
					}
					Local_763.f_4 = Function_150(29);
					Local_763.f_16 = Function_150(38);
					Local_763.f_28 = Function_150(12);
					iLocal_495 = 2;
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to SID_THIRD_STAGE: GID_INITIALIZE", false, false, false, false);
					Function_522(0);
				}
			}
			else
			{
				if (!HUD_IS_FADING() && !HUD_IS_FADED())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_17();
			}
			break;
	}
	return;
}

void Function_680(int iParam0) //Position: 0x191C4 / 102852
{
	if (Function_408(iParam0))
	{
		if (!Function_405(iParam0))
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

void Function_681() //Position: 0x19283 / 103043
{
	var uVar0;
	
	if (!Function_12(iLocal_994, 512))
	{
		NET_SCRIPTMSG_SEND(3, 63, &uVar0, 1, 1);
	}
	return;
}

int Function_682(int iParam0, float fParam1) //Position: 0x192A1 / 103073
{
	if (Function_408(iParam0))
	{
		if (Function_404(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_683() //Position: 0x192BD / 103101
{
	NET_OBJECT_REPLICATION_MODE_START(35, 4);
	bLocal_993 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Local_77, "Benedict_Point_Gateway_Stage02", *(&Local_77 + 940), *(&Local_77 + 940 + 12), 7.0f, 5.0f, 7.0f, 3, Function_41(), 2, 4294967295, 0, 1, 1);
	NET_OBJECT_REPLICATION_MODE_END(35);
	Function_546(StackVal, StackVal, *(&Local_77 + 940), 0, 48, 1);
	bLocal_1018 = ADD_BLIP_FOR_COORD(&Local_77 + 940, 330, 0f, 2, 0);
	SET_BLIP_PRIORITY(bLocal_1018, 4);
	return;
}

void Function_684() //Position: 0x19339 / 103225
{
	if (Function_646(&bLocal_1002))
	{
		switch (iLocal_1015)
		{
			case 0x00000000:
				Function_685(&Local_77 + 372);
				break;
			
			case 0x00000001:
				Function_685(&Local_77 + 380);
				Function_685(&Local_77 + 324);
				Function_685(&Local_77 + 332);
				Function_685(&Local_77 + 340);
				Function_685(&Local_77 + 348);
				Function_685(&Local_77 + 356);
				break;
			
			case 0x00000002:
				Function_685(&Local_77 + 388);
				break;
			
			case 0x00000003:
				Function_685(&Local_77 + 396);
				break;
			
			case 0x00000004:
				Function_685(&Local_77 + 412);
				break;
			
			case 0x00000005:
				Function_685(&Local_77 + 404);
				iLocal_1015 = 4294967295;
				break;
		}
		iLocal_1015++;
		Function_647(&bLocal_1002, 1.2f);
	}
	return;
}

void Function_685(var uParam0) //Position: 0x193F5 / 103413
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					Function_573(*uParam0, GET_SLOT_ACTOR(bVar0));
					Function_572(*uParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_570(*uParam0, GET_SLOT_ACTOR(bVar0), 4);
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

void Function_686() //Position: 0x19496 / 103574
{
	int iVar0;
	
	if (Function_580(&bLocal_1005))
	{
		iVar0 = Function_693();
		if (NET_IS_SESSION_HOST())
		{
			if (((iVar0 >= 20 && !Function_12(iLocal_994, 2)) && !Function_12(iLocal_994, 4)) && !Function_12(iLocal_994, 8))
			{
				Function_692();
			}
			else if ((iVar0 >= 18 && !Function_12(iLocal_994, 4)) && !Function_12(iLocal_994, 8))
			{
				Function_691();
			}
			else if (iVar0 >= 18 && !Function_12(iLocal_994, 8))
			{
				Function_690();
			}
			else if ((iVar0 >= 14 || Function_12(iLocal_994, 2048)) && !Function_12(iLocal_994, 1))
			{
				Function_689(Function_12(iLocal_994, 2048));
			}
		}
		if ((((iVar0 >= 0 && Function_12(iLocal_994, 2)) && Function_12(iLocal_994, 4)) && Function_12(iLocal_994, 8)) && Function_12(iLocal_994, 1))
		{
			Function_688();
		}
		if (!Function_12(iLocal_994, 2048))
		{
			if (Function_687(Local_77.f_584) >= 0)
			{
				Function_9(&iLocal_994, 2048);
			}
		}
		Function_647(&bLocal_1005, 0.66f);
	}
	return;
}

int Function_687(bool bParam0) //Position: 0x19592 / 103826
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	bVar0 = false;
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
						bVar0++;
					}
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void Function_688() //Position: 0x195DB / 103899
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 45, &uVar0, 1, 1);
	return;
}

void Function_689(var uParam0) //Position: 0x195EC / 103916
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 44, &uVar0, 1, 1);
	return;
}

void Function_690() //Position: 0x19601 / 103937
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 42, &uVar0, 1, 1);
	return;
}

void Function_691() //Position: 0x19612 / 103954
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 43, &uVar0, 1, 1);
	return;
}

void Function_692() //Position: 0x19623 / 103971
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 41, &uVar0, 1, 1);
	return;
}

var Function_693() //Position: 0x19634 / 103988
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ITERATOR_VALID(bLocal_1022))
	{
		LOG_ERROR("Failed to create iterator");
		return 4294967295;
	}
	OBJECT_ITERATOR_RESET(bLocal_1022);
	ITERATE_IN_LAYOUT(bLocal_1022, Local_77);
	ITERATE_ON_OBJECT_TYPE(bLocal_1022, 15);
	iVar0 = 0;
	bVar2 = START_OBJECT_ITERATOR(bLocal_1022);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ALIVE(bVar3))
			{
				switch (NET_ACTOR_GET_SCRIPT_INT(bVar3))
				{
					case 0x00000064:
					case 0x00000065:
					case 0x00000066:
					case 0x00000067:
					case 0x00000068:
					case 0x00000069:
					case 0x000000C9:
					case 0x000000CA:
					case 0x000000CB:
					case 0x000000CC:
					case 0x000000CD:
					case 0x000000CE:
					case 0x000000CF:
					case 0x000000D0:
					case 0x000000D1:
					case 0x0000012D:
					case 0x0000012E:
					case 0x0000012F:
					case 0x00000130:
					case 0x00000131:
					case 0x00000132:
					case 0x00000133:
					case 0x00000134:
					case 0x00000135:
					case 0x00000191:
					case 0x00000192:
					case 0x00000193:
					case 0x00000194:
					case 0x00000195:
					case 0x00000196:
					case 0x00000197:
					case 0x00000198:
					case 0x00000199:
					case 0x0000019A:
					case 0x0000019B:
					case 0x0000019C:
					case 0x000001F5:
					case 0x000001F6:
					case 0x000001F7:
					case 0x00000259:
					case 0x0000025A:
					case 0x0000025B:
					case 0x0000025C:
					case 0x0000025D:
					case 0x000002BD:
					case 0x000002BE:
					case 0x000002BF:
					case 0x000002C0:
					case 0x000002C1:
						iVar0++;
						break;
					
					default:
						if (IS_ACTOR_HORSE(bVar3))
						{
							if (!IS_ACTOR_MOUNTED(bVar3))
							{
								iVar1 = GET_TASK_STATUS(bVar3, 87);
								if (!(iVar1 != 1 || iVar1 != 0))
								{
									TASK_CLEAR(bVar3);
									TASK_FLEE_ACTORSET(bVar3, Function_246(), -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(bVar3, 1);
									RELEASE_ACTOR(bVar3);
								}
							}
						}
						break;
					}
				}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bLocal_1022);
	}
	return iVar0;
}

void Function_694(bool bParam0) //Position: 0x19832 / 104498
{
	DECOR_SET_INT(Global_34573, "Player_SimWhistle", bParam0);
	DECOR_SET_INT(Global_34573, "WhistleTimeWaited", 100);
	return;
}

int Function_695() //Position: 0x19872 / 104562
{
	bool bVar0;
	float fVar1;
	
	if (!Function_12(iLocal_994, 32))
	{
		bVar0 = Function_41();
		fVar1 = 25.0f;
		if (((((((Function_596(Local_77.f_564, Local_77) || Function_594(bVar0, Local_77.f_372, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_380, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_324, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_332, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_340, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_348, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_356, 1, 0, 1, fVar1))
		{
			Function_696();
			return 1;
		}
	}
	return 0;
}

void Function_696() //Position: 0x19913 / 104723
{
	var uVar0;
	
	if (!Function_12(iLocal_994, 32))
	{
		NET_SCRIPTMSG_SEND(3, 40, &uVar0, 1, 1);
	}
	return;
}

void Function_697() //Position: 0x19930 / 104752
{
	if (Function_646(&bLocal_1011))
	{
		if (Function_284(Global_30658[0]))
		{
			switch (iLocal_1014)
			{
				case 0x00000000:
					if (!Function_12(iLocal_994, 1) && !Function_12(iLocal_994, 2048))
					{
						Function_703(Function_704("tumbleweed", "mansion", 1), 0);
						Function_703(Function_704("tumbleweed", "mansion", 2), 0);
					}
					else
					{
						Function_702();
					}
					break;
				
				case 0x00000001:
					if (!Function_12(iLocal_994, 1) && !Function_12(iLocal_994, 2048))
					{
						Function_703(Function_704("tumbleweed", "mansion", 3), 0);
						Function_703(Function_704("tumbleweed", "mansion", 4), 0);
					}
					else
					{
						Function_702();
					}
					break;
				
				case 0x00000002:
					if (!Function_12(iLocal_994, 1) && !Function_12(iLocal_994, 2048))
					{
						Function_703(Function_704("tumbleweed", "mansion", 5), 0);
						Function_703(Function_704("tumbleweed", "mansion", 7), 0);
					}
					else
					{
						Function_702();
					}
					break;
				
				case 0x00000003:
					if (!Function_12(iLocal_994, 1) && !Function_12(iLocal_994, 2048))
					{
						Function_703(Function_704("tumbleweed", "mansion", 8), 0);
						Function_703(Function_704("tumbleweed", "mansion", 9), 0);
					}
					else
					{
						Function_702();
					}
					break;
				
				case 0x00000004:
					if (!Function_12(iLocal_994, 1) && !Function_12(iLocal_994, 2048))
					{
						Function_703(Function_704("tumbleweed", "mansion", 10), 0);
						Function_703(Function_704("tumbleweed", "mansion", 11), 0);
					}
					else
					{
						Function_702();
					}
					break;
				
				case 0x00000005:
					if (!Function_12(iLocal_994, 8))
					{
						Function_703(Function_704("tumbleweed", "church", 1), 0);
						Function_703(Function_704("tumbleweed", "church", 2), 0);
					}
					else
					{
						Function_701();
					}
					break;
				
				case 0x00000006:
					if (!Function_12(iLocal_994, 4))
					{
						Function_703(Function_704("tumbleweed", "saloonProps01", 1), 0);
						Function_703(Function_704("tumbleweed", "saloonProps01", 2), 0);
					}
					else
					{
						Function_700();
					}
					break;
				
				case 0x00000007:
					if (!Function_12(iLocal_994, 4))
					{
						Function_703(Function_704("tumbleweed", "saloonProps01", 3), 0);
						Function_703(Function_704("tumbleweed", "saloonProps01", 4), 0);
					}
					else
					{
						Function_700();
					}
					break;
				
				case 0x00000008:
					if (!Function_12(iLocal_994, 2))
					{
						Function_703(Function_704("tumbleweed", "ruinedHome01props01", 98), 0);
						Function_703(Function_704("tumbleweed", "ruinedHome01props01", 97), 0);
					}
					else
					{
						Function_698();
					}
					iLocal_1014 = 4294967295;
					break;
			}
			iLocal_1014++;
		}
		Function_647(&bLocal_1011, 0.1f);
	}
	if (Function_273(&bLocal_1011) || !Function_274(&bLocal_1011))
	{
		iLocal_1014 = 0;
		Function_647(&bLocal_1011, 0.1f);
	}
	return;
}

void Function_698() //Position: 0x19D0E / 105742
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_704("tumbleweed", "ruinedHome01props01", 98);
	bVar1 = Function_704("tumbleweed", "ruinedHome01props01", 97);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_LOCKED(bVar0))
		{
			Function_699(bVar0, 1);
		}
	}
	if (IS_DOOR_VALID(bVar1))
	{
		if (IS_DOOR_LOCKED(bVar1))
		{
			Function_699(bVar1, 1);
		}
	}
	return;
}

void Function_699(bool bParam0, bool bParam1) //Position: 0x19D94 / 105876
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_700() //Position: 0x19DE5 / 105957
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = Function_704("tumbleweed", "saloonProps01", 1);
	bVar1 = Function_704("tumbleweed", "saloonProps01", 2);
	bVar2 = Function_704("tumbleweed", "saloonProps01", 3);
	bVar3 = Function_704("tumbleweed", "saloonProps01", 4);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_LOCKED(bVar0))
		{
			Function_699(bVar0, 1);
		}
	}
	if (IS_DOOR_VALID(bVar1))
	{
		if (IS_DOOR_LOCKED(bVar1))
		{
			Function_699(bVar1, 1);
		}
	}
	if (IS_DOOR_VALID(bVar2))
	{
		if (IS_DOOR_LOCKED(bVar2))
		{
			Function_699(bVar2, 1);
		}
	}
	if (IS_DOOR_VALID(bVar3))
	{
		if (IS_DOOR_LOCKED(bVar3))
		{
			Function_699(bVar3, 1);
		}
	}
	return;
}

void Function_701() //Position: 0x19ECF / 106191
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_704("tumbleweed", "church", 1);
	bVar1 = Function_704("tumbleweed", "church", 2);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_LOCKED(bVar0))
		{
			Function_699(bVar0, 1);
		}
	}
	if (IS_DOOR_VALID(bVar1))
	{
		if (IS_DOOR_LOCKED(bVar1))
		{
			Function_699(bVar1, 1);
		}
	}
	return;
}

void Function_702() //Position: 0x19F39 / 106297
{
	bool bVar0;
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
	
	bVar0 = Function_704("tumbleweed", "mansion", 1);
	bVar1 = Function_704("tumbleweed", "mansion", 2);
	bVar2 = Function_704("tumbleweed", "mansion", 3);
	bVar3 = Function_704("tumbleweed", "mansion", 4);
	bVar4 = Function_704("tumbleweed", "mansion", 5);
	bVar5 = Function_704("tumbleweed", "mansion", 6);
	bVar6 = Function_704("tumbleweed", "mansion", 7);
	bVar7 = Function_704("tumbleweed", "mansion", 8);
	bVar8 = Function_704("tumbleweed", "mansion", 9);
	bVar9 = Function_704("tumbleweed", "mansion", 10);
	bVar10 = Function_704("tumbleweed", "mansion", 11);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_LOCKED(bVar0))
		{
			Function_699(bVar0, 1);
		}
	}
	if (IS_DOOR_VALID(bVar1))
	{
		if (IS_DOOR_LOCKED(bVar1))
		{
			Function_699(bVar1, 1);
		}
	}
	if (IS_DOOR_VALID(bVar2))
	{
		if (IS_DOOR_LOCKED(bVar2))
		{
			Function_699(bVar2, 1);
		}
	}
	if (IS_DOOR_VALID(bVar3))
	{
		if (IS_DOOR_LOCKED(bVar3))
		{
			Function_699(bVar3, 1);
		}
	}
	if (IS_DOOR_VALID(bVar4))
	{
		if (IS_DOOR_LOCKED(bVar4))
		{
			Function_699(bVar4, 1);
		}
	}
	if (IS_DOOR_VALID(bVar5))
	{
		if (IS_DOOR_LOCKED(bVar5))
		{
			Function_699(bVar5, 1);
		}
	}
	if (IS_DOOR_VALID(bVar6))
	{
		if (IS_DOOR_LOCKED(bVar6))
		{
			Function_699(bVar6, 1);
		}
	}
	if (IS_DOOR_VALID(bVar7))
	{
		if (IS_DOOR_LOCKED(bVar7))
		{
			Function_699(bVar7, 1);
		}
	}
	if (IS_DOOR_VALID(bVar8))
	{
		if (IS_DOOR_LOCKED(bVar8))
		{
			Function_699(bVar8, 1);
		}
	}
	if (IS_DOOR_VALID(bVar9))
	{
		if (IS_DOOR_LOCKED(bVar9))
		{
			Function_699(bVar9, 1);
		}
	}
	if (IS_DOOR_VALID(bVar10))
	{
		if (IS_DOOR_LOCKED(bVar10))
		{
			Function_699(bVar10, 1);
		}
	}
	return;
}

void Function_703(bool bParam0, bool bParam1) //Position: 0x1A174 / 106868
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

bool Function_704(var uParam0, int iParam1, int iParam2) //Position: 0x1A1C8 / 106952
{
	return Function_705(Global_29006, uParam0, iParam1, iParam2);
}

int Function_705(bool bParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x1A1DA / 106970
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_290(bParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam010].f_32))
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
	memcpy(&cVar2, Global_29155[bParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[bParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

void Function_706() //Position: 0x1A276 / 107126
{
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	CREATE_PROP_IN_LAYOUT(Local_77, "p_boom_box_01", "$/fragments/p_gen_crateTnt01x", -3986.853f, 31.45362f, 3041.509f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_77, "p_boom_box_02", "$/fragments/p_gen_crateTnt01x", -3990.164f, 27.82765f, 3041.836f, 0.0f, -144.9825f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_77, "p_boom_box_03", "$/fragments/p_gen_crateTnt01x", -3990.713f, 31.37579f, 3046.966f, 0.0f, -44.52486f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_77, "p_boom_box_04", "$/fragments/p_gen_crateTnt01x", -3984.0f, 27.82765f, 3052.635f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_77, "p_boom_box_05", "$/fragments/p_gen_crateTnt01x", -3982.083f, 27.82765f, 3039.609f, 0.0f, 0.0f, 0.0f, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_707() //Position: 0x1A3FC / 107516
{
	bLocal_1016 = ADD_BLIP_FOR_OBJECT(Local_77.f_516, 330, 0f, 2, 0);
	bLocal_960 = "TUM_CO_obj05p3";
	Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
	iLocal_1017 = 3;
	SET_BLIP_PRIORITY(bLocal_1016, 4);
	return;
}

void Function_708() //Position: 0x1A443 / 107587
{
	if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_560))
	{
		Function_709();
	}
	return;
}

void Function_709() //Position: 0x1A45A / 107610
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 39, &uVar0, 1, 1);
	return;
}

void Function_710() //Position: 0x1A46B / 107627
{
	if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_632))
	{
		Function_713();
		Function_712();
	}
	else if (Function_552(Local_77.f_632))
	{
		Function_711();
	}
	return;
}

void Function_711() //Position: 0x1A496 / 107670
{
	var uVar0;
	
	if (Function_12(iLocal_994, 128))
	{
		NET_SCRIPTMSG_SEND(3, 58, &uVar0, 1, 1);
	}
	return;
}

void Function_712() //Position: 0x1A4B2 / 107698
{
	var uVar0;
	
	if (!Function_12(iLocal_994, 128))
	{
		NET_SCRIPTMSG_SEND(3, 57, &uVar0, 1, 1);
	}
	return;
}

void Function_713() //Position: 0x1A4CF / 107727
{
	struct<2> Var0;
	
	Var0.f_4 = 0;
	if (iLocal_495 == 1)
	{
		Function_718(&Var0 + 4);
	}
	Var0 = !Function_715();
	if (StackVal || Var0)
	{
		Function_714(StackVal, Var0);
	}
	return;
}

void Function_714(var uParam0, var uParam1) //Position: 0x1A4FF / 107775
{
	NET_SCRIPTMSG_SEND(3, 53, &uParam0, 2, 1);
	return;
}

bool Function_715() //Position: 0x1A510 / 107792
{
	if (SQUAD_IS_VALID(Local_77.f_480))
	{
		if (Function_717(Local_77.f_480, Function_41()) || Function_716(Local_77.f_480, Function_41()))
		{
			return 0;
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_484))
	{
		if (Function_717(Local_77.f_484, Function_41()) || Function_716(Local_77.f_484, Function_41()))
		{
			return 0;
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_492))
	{
		if (Function_717(Local_77.f_492, Function_41()) || Function_716(Local_77.f_492, Function_41()))
		{
			return 0;
		}
	}
	return 1;
}

int Function_716(bool bParam0, bool bParam1) //Position: 0x1A58C / 107916
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					if (!IS_ACTOR_ALIVE(bVar3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_717(bool bParam0, bool bParam1) //Position: 0x1A5FE / 108030
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(bVar1) == bParam1)
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

void Function_718(int iParam0) //Position: 0x1A671 / 108145
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bLocal_948))
	{
		bVar0 = Function_722();
		bVar1 = bVar0 == 4294967295;
		switch (iLocal_995)
		{
			case 0x00000000:
				if (bVar1)
				{
					iLocal_995 = 1;
				}
				else
				{
					iLocal_995 = 2;
				}
				break;
			
			case 0x00000001:
				if (bVar1)
				{
					iLocal_995 = 1;
				}
				else
				{
					iLocal_995 = 2;
				}
				break;
			
			case 0x00000002:
				if (bVar1)
				{
					iLocal_995 = 0;
				}
				else
				{
					iLocal_995 = 3;
				}
				break;
			
			case 0x00000003:
				if (bVar1)
				{
					iLocal_995 = 0;
				}
				else
				{
					iLocal_995 = 3;
				}
				break;
		}
		if (iLocal_995 == 0)
		{
			Function_647(&bLocal_942, 15.0f);
			if (bVar0 != 4294967295)
			{
				if (SQUAD_IS_VALID(Local_77.f_484))
				{
					SQUAD_GOALS_CLEAR(Local_77.f_484);
				}
				if (SQUAD_IS_VALID(Local_77.f_492))
				{
					SQUAD_GOALS_CLEAR(Local_77.f_492);
				}
				Function_720(GET_OBJECT_FROM_ACTOR(GET_SLOT_ACTOR(bVar0)));
				PRINT_BIG("TUM_CO_getoffcoach", 1084227584, 0, 2, 0);
			}
		}
		else if ((iLocal_995 != 1 && Function_646(&bLocal_942)) || !IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_676))
		{
			*iParam0 = 1;
		}
		else if (iLocal_995 == 2)
		{
			Function_599(&bLocal_942);
			if (SQUAD_IS_VALID(Local_77.f_484))
			{
				SQUAD_GOALS_CLEAR(Local_77.f_484);
			}
			if (SQUAD_IS_VALID(Local_77.f_492))
			{
				SQUAD_GOALS_CLEAR(Local_77.f_492);
			}
			Function_719();
		}
	}
	return;
}

void Function_719() //Position: 0x1A7BC / 108476
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_7");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_676, -1.0f);
	}
	return;
}

void Function_720(bool bParam0) //Position: 0x1A920 / 108832
{
	bool bVar0;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_1");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_3");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_4");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_5");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_7");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		Function_721(bVar0, bParam0);
	}
	return;
}

void Function_721(bool bParam0, bool bParam1) //Position: 0x1AA68 / 109160
{
	bool bVar0;
	
	TASK_CLEAR(bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(bParam0, &Local_77 + 1212, 4.0f, 4);
	TASK_POINT_GUN_AT_OBJECT(bParam0, bParam1, -1.0f, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

int Function_722() //Position: 0x1AA9D / 109213
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bLocal_948))
	{
		bVar0 = GET_ACTOR_IN_VEHICLE_SEAT(bLocal_948, false);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_PLAYER(bVar0))
			{
				if (IS_SLOT_VALID(false))
				{
					if (bVar0 == GET_SLOT_ACTOR(false))
					{
						return 0;
					}
				}
				if (IS_SLOT_VALID(true))
				{
					if (bVar0 == GET_SLOT_ACTOR(true))
					{
						return 1;
					}
				}
				if (IS_SLOT_VALID(2))
				{
					if (bVar0 == GET_SLOT_ACTOR(2))
					{
						return 2;
					}
				}
				if (IS_SLOT_VALID(3))
				{
					if (bVar0 == GET_SLOT_ACTOR(3))
					{
						return 3;
					}
				}
			}
		}
	}
	return 4294967295;
}

void Function_723(int iParam0) //Position: 0x1AB0E / 109326
{
	if (!IS_LAYOUTREF_VALID(bLocal_540))
	{
		bLocal_540 = CREATE_LAYOUT(Function_52());
	}
	if (!IS_OBJECT_VALID(bLocal_541))
	{
		bLocal_541 = CREATE_WORLD_SECTOR(bLocal_540, "Tumbleweed");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_541) && (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_564) || iParam0))
	{
		Function_724(bLocal_540, "pot", Local_77.f_564);
		Function_724(bLocal_540, "bottle", Local_77.f_564);
		Function_724(bLocal_540, "chair", Local_77.f_564);
		Function_724(bLocal_540, "wheel", Local_77.f_564);
		Function_724(bLocal_540, "cloth", Local_77.f_564);
		Function_724(bLocal_540, "curtain", Local_77.f_564);
		Function_724(bLocal_540, "debris", Local_77.f_564);
		Function_724(bLocal_540, "can0", Local_77.f_564);
		Function_724(bLocal_540, "crate04", Local_77.f_564);
		Function_724(bLocal_540, "fencestandard_gpa_01", Local_77.f_564);
		Function_724(bLocal_540, "jug", Local_77.f_564);
		Function_724(bLocal_540, "bucket", Local_77.f_564);
	}
	return;
}

void Function_724(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1AC54 / 109652
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

void Function_725() //Position: 0x1ACAD / 109741
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_Cannon_1", "p_gen_cannon02x", *(&Local_77 + 964), *(&Local_77 + 964 + 12), 1);
	bVar1 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_Cannon_2", "p_gen_cannon02x", *(&Local_77 + 988), *(&Local_77 + 988 + 12), 1);
	bVar2 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_1", "p_gen_gatlingGun01x", -4078.228f, 34.907f, 2960.852f, 0.0f, -102.527f, 0.0f, 1);
	bVar3 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_2", "p_gen_gatlingGun01x", -4075.637f, 35.246f, 2934.444f, 0.0f, -95.4434f, 0.0f, 1);
	bVar4 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_3", "p_gen_gatlingGun01x", -3999.188f, 32.918f, 2951.467f, 0.0f, 128.1837f, 0.0f, 1);
	bVar5 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_4", "p_gen_gatlingGun01x", -3911.576f, 28.888f, 2949.238f, 0.0f, 282.508f, 0.0f, 1);
	bVar6 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_5", "p_gen_gatlingGun01x", -3976.053f, 27.82765f, 3055.989f, 0.0f, -134.3931f, 0.0f, 1);
	bVar7 = CREATE_PROP_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_Mansion", "p_gen_gatlingGun01x", *(&Local_77 + 1452), *(&Local_77 + 1452 + 12), 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_726(bVar0);
	Function_726(bVar1);
	Function_726(bVar2);
	Function_726(bVar3);
	Function_726(bVar4);
	Function_726(bVar5);
	Function_726(bVar6);
	Function_726(bVar7);
	DECOR_SET_FLOAT(bVar2, "fRestrictRotation", 359.0f);
	DECOR_SET_FLOAT(bVar3, "fRestrictRotation", 359.0f);
	DECOR_SET_FLOAT(bVar4, "fRestrictRotation", 359.0f);
	DECOR_SET_FLOAT(bVar5, "fRestrictRotation", 359.0f);
	DECOR_SET_FLOAT(bVar6, "fRestrictRotation", 359.0f);
	DECOR_SET_FLOAT(bVar7, "fRestrictRotation", 359.0f);
	return;
}

int Function_726(bool bParam0) //Position: 0x1AFF4 / 110580
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
	return Function_727(bVar0);
}

int Function_727(bool bParam0) //Position: 0x1B02F / 110639
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
	Function_728(bVar0);
	return bVar0;
}

void Function_728(bool bParam0) //Position: 0x1B07D / 110717
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

void Function_729() //Position: 0x1B090 / 110736
{
	if (Function_580(&bLocal_996))
	{
		if (!Function_12(iLocal_994, 4096))
		{
			Function_741();
			Function_740();
			Function_9(&iLocal_994, 4096);
			Function_647(&bLocal_996, 1.0f);
			return;
		}
		if (!Function_12(iLocal_994, 8192))
		{
			Function_738();
			Function_736();
			Function_9(&iLocal_994, 8192);
			Function_647(&bLocal_996, 1.0f);
			return;
		}
		if (!Function_12(iLocal_994, 16384))
		{
			Function_730();
			Function_9(&iLocal_994, 16384);
			Function_647(&bLocal_996, 1.0f);
			return;
		}
	}
	return;
}

void Function_730() //Position: 0x1B108 / 110856
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_735();
	Function_734();
	Function_733();
	Function_732();
	Function_731();
	NET_OBJECT_REPLICATION_MODE_END(15);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_1_1");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_2_1");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_3_1");
	bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_4_1");
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_5_1");
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 305);
	NET_ACTOR_SET_SCRIPT_INT(bVar1, 306);
	NET_ACTOR_SET_SCRIPT_INT(bVar2, 307);
	NET_ACTOR_SET_SCRIPT_INT(bVar3, 308);
	NET_ACTOR_SET_SCRIPT_INT(bVar4, 309);
	return;
}

void Function_731() //Position: 0x1B1EB / 111083
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_352 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_GatlingGunner_5set", 0);
	Local_77.f_356 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_GatlingGunner_5"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_5_1", 489, -3978.671f, 27.82765f, 3049.329f, 0.0f, -128.4723f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_352, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_356);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 104);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_732() //Position: 0x1B29B / 111259
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_344 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_GatlingGunner_4set", 0);
	Local_77.f_348 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_GatlingGunner_4"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_4_1", 486, -3918.122f, 29.02214f, 2947.79f, 0.0f, 258.3989f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_344, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_348);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 103);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_733() //Position: 0x1B34B / 111435
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_336 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_GatlingGunner_3set", 0);
	Local_77.f_340 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_GatlingGunner_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_3_1", 487, -3996.943f, 32.91637f, 2950.291f, 0.0f, 110.754f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_336, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_340);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 102);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_734() //Position: 0x1B3FB / 111611
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_328 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_GatlingGunner_2set", 0);
	Local_77.f_332 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_GatlingGunner_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_2_1", 488, -4077.121f, 35.43754f, 2934.078f, 0.0f, -99.25682f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_328, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_332);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 101);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_735() //Position: 0x1B4AB / 111787
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_320 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_GatlingGunner_1set", 0);
	Local_77.f_324 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_GatlingGunner_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_GatlingGunner_1_1", 489, -4080.635f, 35.35678f, 2960.494f, 0.0f, -98.6153f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_320, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_324);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 100);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_736() //Position: 0x1B55B / 111963
{
	Function_737(&Local_77 + 372);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_372, 0, 0, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_77.f_568, -1.0f);
	return;
}

void Function_737(var uParam0) //Position: 0x1B57F / 111999
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		iVar1 = 0;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				Function_252(bVar2);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_S02_ASSAULT_SQUAD was passed an invalid squad");
	}
	return;
}

void Function_738() //Position: 0x1B608 / 112136
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_739();
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_739() //Position: 0x1B61C / 112156
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_368 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_Patrolset", 0);
	Local_77.f_372 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_Patrol"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_01", 491, -3966.333f, 28.07318f, 2924.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 201);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_02", 487, -3949.595f, 28.90239f, 2950.789f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 202);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_03", 493, -3987.213f, 28.1833f, 2936.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 203);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_04", 493, -3984.0f, 28.5951f, 2959.38f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 204);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_05", 492, -3978.037f, 28.07499f, 2941.963f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 205);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_06", 492, -4004.0f, 28.55407f, 2935.88f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 206);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_07", 491, -3986.452f, 27.83643f, 2920.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 207);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_08", 490, -3964.407f, 28.20419f, 2950.942f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 208);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_PatrolMember_09", 491, -3989.302f, 28.61409f, 2965.302f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_368, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_372);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 209);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_740() //Position: 0x1B95C / 112988
{
	Function_737(&Local_77 + 380);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_380, 0, 0, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_77.f_544, -1.0f);
	return;
}

void Function_741() //Position: 0x1B980 / 113024
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_742();
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_742() //Position: 0x1B994 / 113044
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_376 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_CannonGuardset", 0);
	Local_77.f_380 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_CannonGuard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_CannonGuard_1", 490, -3898.511f, 40.16481f, 2988.174f, 0.0f, -50.12757f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_376, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_380);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 301);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_CannonGuard_2", 491, -3910.1f, 40.38536f, 3006.671f, 0.0f, 44.91463f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_376, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_380);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 302);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_CannonGunner_1_1", 488, -3901.289f, 40.15686f, 2993.289f, 0.0f, 112.58f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_376, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_380);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 303);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_CannonGunner_2_1", 490, -3909.376f, 40.2723f, 3003.715f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_376, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_380);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 304);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_743() //Position: 0x1BB43 / 113475
{
	vector3 vVar0;
	
	bLocal_960 = "TUM_CO_obj04";
	Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
	vVar0 = { -3852.062f, 32.65977f, 2940.248f };
	bLocal_1018 = ADD_BLIP_FOR_COORD(&vVar0, 330, 0f, 2, 0);
	Function_546(StackVal, StackVal, vVar0, 0, 48, 1);
	return;
}

void Function_744() //Position: 0x1BB98 / 113560
{
	if (!Function_408(&iLocal_542))
	{
		Function_407(&iLocal_542, 0.0f);
	}
	if (Function_404(&iLocal_542) < 15.0f)
	{
		Function_723(0);
		Function_407(&iLocal_542, 0.0f);
	}
	return;
}

void Function_745() //Position: 0x1BBC9 / 113609
{
	return;
}

bool Function_746() //Position: 0x1BBCF / 113615
{
	bool bVar0;
	var uVar1;
	
	Function_645(&Local_504, 1);
	bVar0 = false;
	if (((Local_504 != 1001 || Local_504 != 1002) || Local_504 != 1003) || Local_504 != 1004)
	{
		bVar0 = Function_751();
	}
	switch (Local_504)
	{
		case 0x000003E8:
			iLocal_1089 = 15;
			Function_518(&Local_504 + 4);
			Function_515();
			Function_511(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_504.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_504.f_16 = Function_747(Local_77, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_504.f_16))
				{
				}
				else
				{
					LOG_ERROR("TumbleweedMP_CO_cutscene02 - Failed to create TumbleweedMP_CO_cutscene02_cutscene");
				}
			}
			Local_504 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_504.f_16), false))
			{
				Function_505(Global_34573, 1, 1);
				Local_504 = 1002;
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
				Local_504 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_404(&Local_504 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					iLocal_1090 = 15;
					Local_504 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_518(&Local_504 + 4);
				Local_504 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_505(Global_34573, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_504.f_16))
				{
					DESTROY_OBJECT(Local_504.f_16);
				}
				Local_504 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_504 = 1104;
			}
			break;
	}
	return 0;
}

var Function_747(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1BE04 / 114180
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumbleweedMP_CO_cutscene02", 2, 1);
	}
	Function_748(&bVar0);
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

void Function_748(int iParam0) //Position: 0x1BE8A / 114314
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_750(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_749(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(bVar1, 0.0f, 2.0f, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 15.0f, 1, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(bVar1, 0.0f, 2.0f, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(bVar1, 0.0f, 2.0f, 1);
	return;
}

void Function_749(int iParam0) //Position: 0x1BEF2 / 114418
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3707.101f, 11.07848f, 3455.965f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.001873f, -2.162879f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_750(var uParam0) //Position: 0x1BF55 / 114517
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -3702.672f, 11.43789f, 3442.925f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.002907f, -2.029692f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_751() //Position: 0x1BFB8 / 114616
{
	switch (iLocal_1089)
	{
		case 0x0000000F:
			if (Function_404(&Local_504 + 4) < 4.0f)
			{
				Function_752();
				iLocal_1089 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_404(&Local_504 + 4) < 19.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_752() //Position: 0x1C007 / 114695
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene2_v1_AA", "TEscape_Scene2_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene2_v1_AB", "TEscape_Scene2_v1_AB", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_753() //Position: 0x1C09A / 114842
{
	bool bVar0[4];
	bool bVar5;
	
	bVar5 = Local_77;
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_01");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_02");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_03");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_04");
	if (IS_ACTOR_VALID(bVar0[0]))
	{
		SET_ACTOR_FACTION(bVar0[0], 1);
	}
	if (IS_ACTOR_VALID(bVar0[1]))
	{
		SET_ACTOR_FACTION(bVar0[1], 1);
	}
	if (IS_ACTOR_VALID(bVar0[2]))
	{
		SET_ACTOR_FACTION(bVar0[2], 1);
	}
	if (IS_ACTOR_VALID(bVar0[3]))
	{
		SET_ACTOR_FACTION(bVar0[3], 1);
	}
	return;
}

void Function_754() //Position: 0x1C171 / 115057
{
	Function_607(StackVal, StackVal, StackVal, bLocal_953, *(&Local_77 + 1476), 1, 1, 1);
	VEHICLE_SET_HANDBRAKE(bLocal_953, 1.0f);
	return;
}

void Function_755() //Position: 0x1C197 / 115095
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_760();
	Function_759();
	Function_756();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_9(&iLocal_994, 128);
	return;
}

void Function_756() //Position: 0x1C1B9 / 115129
{
	if (SQUAD_IS_VALID(Local_77.f_484))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_484, 0, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, Local_77.f_676, -1.0f);
		Function_657(&Local_77 + 484);
		SQUAD_SET_FACTION(Local_77.f_484, 20);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(20, Function_41());
		Function_758(Local_77.f_484, 0);
		Function_757(Local_77.f_484, 0);
	}
	if (SQUAD_IS_VALID(Local_77.f_492))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_484, 0, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, Local_77.f_676, -1.0f);
		Function_657(&Local_77 + 492);
		SQUAD_SET_FACTION(Local_77.f_492, 20);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(20, Function_41());
		Function_758(Local_77.f_492, 0);
		Function_757(Local_77.f_492, 0);
	}
	return;
}

void Function_757(bool bParam0, bool bParam1) //Position: 0x1C259 / 115289
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ALLOW_DEADEYE_LOCKS(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_758(bool bParam0, bool bParam1) //Position: 0x1C298 / 115352
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_CAN_BE_TARGETED(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_759() //Position: 0x1C2D7 / 115415
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_492 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_Army_AuxSceneActors"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_4", 372, -3677.28f, 8.341825f, 3487.999f, 0.0f, 80.05164f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_492);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_5", 371, -3674.292f, 8.091645f, 3497.709f, 0.0f, 80.05164f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_492);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_6", 370, -3680.002f, 8.394805f, 3489.81f, 0.0f, 80.05164f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_492);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_7", 369, -3685.283f, 8.124599f, 3499.998f, 0.0f, 80.05164f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_492);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	return;
}

void Function_760() //Position: 0x1C434 / 115764
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_484 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_Army_SceneActors"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_1", 378, -3677.471f, 8.359987f, 3479.998f, 0.0f, 94.20893f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_484);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_2", 374, -3668.002f, 8.231132f, 3477.532f, 0.0f, 94.20893f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_484);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SceneActor_3", 373, -3672.727f, 8.064739f, 3499.274f, 0.0f, 94.20893f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_484);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 71);
	SET_ACTOR_FACTION(bVar0, 1);
	return;
}

void Function_761() //Position: 0x1C544 / 116036
{
	bool bVar0[4];
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 6);
		if (!Function_12(iLocal_994, 256))
		{
			Function_9(&iLocal_994, 256);
			bVar5 = Local_77;
			bVar0[0] = CREATE_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_01", 988, *(&Local_77 + 1356), *(&Local_77 + 1356 + 12));
			bVar0[1] = CREATE_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_02", 987, *(&Local_77 + 1380), *(&Local_77 + 1380 + 12));
			bVar0[2] = CREATE_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_03", 986, *(&Local_77 + 1404), *(&Local_77 + 1404 + 12));
			bVar0[3] = CREATE_ACTOR_IN_LAYOUT(bVar5, "S02_army_horse_04", 985, *(&Local_77 + 1428), *(&Local_77 + 1428 + 12));
			ACCESSORIZE_HORSE(bVar0[0], 3);
			ACCESSORIZE_HORSE(bVar0[1], 3);
			ACCESSORIZE_HORSE(bVar0[2], 3);
			ACCESSORIZE_HORSE(bVar0[3], 3);
			SET_ACTOR_FACTION(bVar0[0], 1);
			SET_ACTOR_FACTION(bVar0[1], 1);
			SET_ACTOR_FACTION(bVar0[2], 1);
			SET_ACTOR_FACTION(bVar0[3], 1);
			NET_ACTOR_SET_SCRIPT_INT(bVar0[0], 72);
			NET_ACTOR_SET_SCRIPT_INT(bVar0[1], 72);
			NET_ACTOR_SET_SCRIPT_INT(bVar0[2], 72);
			NET_ACTOR_SET_SCRIPT_INT(bVar0[3], 72);
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				TASK_STAND_STILL(bVar0[iVar6], -1.0f, 0, 0);
				iVar6++;
			}
		}
		NET_OBJECT_REPLICATION_MODE_END(15);
		NET_OBJECT_REPLICATION_MODE_START(15, 3);
		if (Function_12(iLocal_977, 512))
		{
			bLocal_953 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "s02_gatling_wagon1", 1182, 985, *(&Local_77 + 1476), *(&Local_77 + 1476 + 12), 0, 976, 976, 976, 4);
			VEHICLE_SET_HANDBRAKE(bLocal_953, 1.0f);
			SET_ACTOR_FACTION(bLocal_953, 1);
			bVar7 = GET_DRAFT_ACTOR(false, bLocal_953);
			bVar8 = GET_DRAFT_ACTOR(true, bLocal_953);
			bVar9 = GET_DRAFT_ACTOR(2, bLocal_953);
			bVar10 = GET_DRAFT_ACTOR(3, bLocal_953);
			SET_ACTOR_FACTION(bVar7, 1);
			SET_ACTOR_FACTION(bVar8, 1);
			SET_ACTOR_FACTION(bVar9, 1);
			SET_ACTOR_FACTION(bVar10, 1);
			NET_ACTOR_SET_SCRIPT_INT(bLocal_953, 60);
			NET_ACTOR_SET_SCRIPT_INT(bVar7, 61);
			NET_ACTOR_SET_SCRIPT_INT(bVar8, 62);
			NET_ACTOR_SET_SCRIPT_INT(bVar9, 63);
			NET_ACTOR_SET_SCRIPT_INT(bVar10, 64);
		}
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return;
}

void Function_762(bool bParam0, bool bParam1) //Position: 0x1C796 / 116630
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	struct<5> Var12;
	
	ACTOR_DISMOUNT_NOW(Function_41());
	Function_489(Function_41(), 1);
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_333(bParam0);
	Var6 = { StackVal, StackVal, Function_333(bParam0) };
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
	TELEPORT_ACTOR_WITH_HEADING(Function_41(), vVar3, bParam1, 1, true, 1);
	return;
}

void Function_763() //Position: 0x1C825 / 116773
{
	int iVar0;
	bool bVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 3);
		NET_OBJECT_REPLICATION_MODE_START(17, 3);
		bLocal_948 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "s02_gold_wagon", 1177, 986, *(&Local_77 + 1212), *(&Local_77 + 1212 + 12), 0, 976, 976, 976, 4);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_948, false);
		iVar0 = GET_NUM_DRAFTED_ACTORS(bLocal_948);
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (iVar0 - 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar1, bLocal_948), false);
			bVar1++;
		}
		SET_ACTOR_INVULNERABILITY(bLocal_948, 1);
		bLocal_949 = GET_DRAFT_ACTOR(false, bLocal_948);
		bLocal_950 = GET_DRAFT_ACTOR(true, bLocal_948);
		bLocal_951 = GET_DRAFT_ACTOR(2, bLocal_948);
		bLocal_952 = GET_DRAFT_ACTOR(3, bLocal_948);
		SET_ACTOR_FACTION(bLocal_949, 1);
		SET_ACTOR_FACTION(bLocal_950, 1);
		SET_ACTOR_FACTION(bLocal_951, 1);
		SET_ACTOR_FACTION(bLocal_952, 1);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_948, 50);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_949, 51);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_950, 52);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_951, 53);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_952, 54);
		NET_OBJECT_REPLICATION_MODE_END(17);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return;
}

void Function_764() //Position: 0x1C927 / 117031
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve2attachedCurve1", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_rat_tum_roaddetachedCurve2detachedCurve2detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_tum_underbridge_pathdetachedCurve2", 5));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_curve20", 5));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_rat_tum_roaddetachedCurve2detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 50);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve4detachedCurve2detachedCurve2", 4));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_gap_ben_roaddetachedCurve4", 4));
	SET_CURVE_WEIGHT(bVar0, 30);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdROAD_amr_gap_shortcut_road", 4));
	SET_CURVE_WEIGHT(bVar0, 50);
	return;
}

void Function_765() //Position: 0x1CB33 / 117555
{
	switch (iLocal_1059)
	{
		case 0x00000000:
			if (iLocal_496 != 3 || iLocal_496 != 2)
			{
				Function_766(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_496 == 6)
			{
				Function_766(2);
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_632))
			{
				Function_766(3);
			}
			else if (Function_12(iLocal_994, 64))
			{
				Function_766(7);
			}
			break;
		
		case 0x00000003:
			if (Function_12(iLocal_994, 16) && IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_564))
			{
				Function_766(4);
			}
			else if (Function_12(iLocal_994, 64))
			{
				Function_766(7);
			}
			break;
		
		case 0x00000004:
			if (Function_12(iLocal_994, 1))
			{
				Function_766(5);
			}
			else if (Function_12(iLocal_994, 64))
			{
				Function_766(7);
			}
			break;
		
		case 0x00000005:
			if (Function_12(iLocal_994, 1) && IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_556))
			{
				Function_766(6);
			}
			else if (Function_12(iLocal_994, 64))
			{
				Function_766(7);
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_588))
			{
				Function_673(&iLocal_967, 38, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_673(&iLocal_967, 34, 0, 4294967295, 4294967295);
			}
			if (Function_12(iLocal_994, 64))
			{
				Function_766(7);
			}
			break;
		
		case 0x00000007:
			if (Function_12(iLocal_977, 64) && !IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_564))
			{
				Function_766(8);
			}
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
	}
	return;
}

void Function_766(int iParam0) //Position: 0x1CCA9 / 117929
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 0;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000002:
			Function_516("FTR_SONG_05", 7, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 7;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000003:
			Function_516("FTR_SONG_05", 8, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 8;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000004:
			Function_516("FTR_SONG_05", 40, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 40;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000005:
			Function_516("FTR_SONG_05", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 34;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000006:
			Function_516("FTR_SONG_05", 40, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 40;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000007:
			Function_516("FTR_SONG_05", 6, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 6;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000008:
			Function_516("FTR_SONG_05", 8, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 8;
			iLocal_1059 = iParam0;
			break;
		
		case 0x00000000:
		case 0x00000009:
			Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 0;
			iLocal_1059 = iParam0;
			break;
	}
	return;
}

void Function_767() //Position: 0x1CE5B / 118363
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_769();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_768();
	}
	return;
}

void Function_768() //Position: 0x1CE73 / 118387
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	if (Function_404(&iLocal_536) <= 1.0f)
	{
		Function_518(&iLocal_536);
	}
	return;
}

void Function_769() //Position: 0x1CE9A / 118426
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	return;
}

void Function_770() //Position: 0x1CEB0 / 118448
{
	if (Function_525())
	{
		Function_842();
	}
	Function_840();
	if ((((((((!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Global_63404, Global_63401) && iLocal_496 == 0) && iLocal_496 == 1) && iLocal_496 == 2) && iLocal_496 == 5) && iLocal_496 == 3) && iLocal_496 == 95) && iLocal_496 == 4) && iLocal_496 == 23)
	{
		SET_TIME_OF_DAY(Global_63401);
		SET_TIME_ACCELERATION(0.0f);
		Function_664(1, 0);
	}
	if (NET_IS_SESSION_CLIENT())
	{
		if (!IS_ACTOR_VALID(bLocal_948))
		{
			Function_839(&Local_77, "s01_gold_wagon", &bLocal_948);
		}
	}
	switch (iLocal_496)
	{
		case 0x00000000:
			Function_518(&vLocal_961);
			STREAMING_SET_CUTSCENE_MODE(1);
			bLocal_936 = GET_TIME_OF_DAY();
			SET_TIME_OF_DAY(Global_63404);
			SET_WEATHER(0, Global_63404);
			Function_664(1, 0);
			Function_838();
			Function_373(512);
			bLocal_1022 = CREATE_OBJECT_ITERATOR(Local_77);
			STREAMING_LOAD_SCENE_EXT(-4298.601f, 7.623f, 3734.598f, -2.693f, 96.675f, 0.0f, 0);
			STREAMING_OVERRIDE_MAIN_POI(-4298.601f, 7.623f, 3734.598f, -2.693f, 96.675f, 0.0f);
			Function_837();
			Function_661(&bLocal_545, Local_77.f_496);
			Function_26(&bLocal_545, 1);
			NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_STREAMING_GOAL", false, false, false, false);
			Function_522(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4) && STREAMING_IS_WORLD_LOADED())
			{
				if (Function_491(2, 1, 0x3f800000))
				{
					Function_836();
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_POST_STREAMING", false, false, false, false);
					Function_647(&bLocal_984, 5.0f);
					Function_522(2);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000002:
			if (Function_580(&bLocal_984))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Function_835();
				Function_832();
				Function_603(&bLocal_981, 5.0f);
				NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_FADE_IN", false, false, false, false);
				Function_522(5);
			}
			break;
		
		case 0x00000005:
			if (Function_580(&bLocal_981))
			{
				if (Function_491(3, 1, 0x3f800000))
				{
					Function_831();
					Function_647(&bLocal_981, 2.0f);
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_CUTSCENE", false, false, false, false);
					Function_522(3);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000003:
			if (Function_646(&bLocal_981))
			{
				Function_830();
			}
			if (Function_819())
			{
				Function_26(&bLocal_545, 0);
				Function_745();
				STREAMING_SET_CUTSCENE_MODE(0);
				STREAMING_UNLOAD_SCENE();
				STREAMING_RELEASE_MAIN_POI();
				Function_818();
				Function_198(0);
				SET_TIME_OF_DAY(Global_63404);
				Function_664(1, 0);
				SET_TIME_ACCELERATION(0.5f);
				Function_647(&bLocal_984, 5.0f);
				NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_NINETIETH_GOAL", false, false, false, false);
				Function_522(95);
			}
			break;
		
		case 0x0000005F:
			if (Function_580(&bLocal_984))
			{
				if (Function_491(4, 1, 0x3f800000))
				{
					Function_817();
					Function_813();
					Function_647(&bLocal_984, 5.0f);
					Function_522(4);
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_POST_CUTSCENE", false, false, false, false);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000004:
			if (Function_580(&bLocal_984))
			{
				if (Function_491(23, 1, 0x3f800000))
				{
					Function_522(23);
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_EIGHTEENTH_GOAL", false, false, false, false);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000017:
			if (Function_812())
			{
				if (Function_491(6, 1, 0x3f800000))
				{
					Function_808();
					Function_832();
					Function_647(&bLocal_984, 2.0f);
					Function_522(6);
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
				}
			}
			else
			{
				Function_17();
			}
			break;
		
		case 0x00000006:
			if (Function_580(&bLocal_984) && !HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				Function_807(1);
				if (NET_IS_SESSION_HOST())
				{
					Function_605(&Global_78578 + 96);
				}
				bLocal_960 = "TUM_CO_obj01";
				Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_647(&bLocal_981, 10.0f);
				Function_647(&bLocal_990, 1.0f);
				NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_522(7);
			}
			break;
		
		case 0x00000007:
			Function_805();
			Function_799();
			Function_597();
			Function_797();
			Function_795();
			if (Function_12(iLocal_977, 16))
			{
				if (Function_491(8, 1, 0x3f800000))
				{
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_THIRD_GOAL", false, false, false, false);
					Function_522(8);
				}
			}
			else
			{
				if (Function_794())
				{
					Function_9(&iLocal_977, 16);
				}
				Function_17();
			}
			break;
		
		case 0x00000008:
			Function_793();
			Function_792();
			Function_791();
			Function_790(bLocal_948);
			Function_581(0);
			Function_603(&bLocal_978, 5.0f);
			Function_647(&bLocal_990, 1.0f);
			Function_647(&bLocal_945, 3.0f);
			if (IS_ACTOR_VALID(bLocal_948))
			{
				START_VEHICLE(bLocal_948);
			}
			NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_FOURTH_GOAL", false, false, false, false);
			Function_522(9);
			break;
		
		case 0x00000009:
			Function_777();
			Function_597();
			Function_776();
			Function_773();
			if (Function_646(&bLocal_978))
			{
				Function_365("TUM_CO_help01", 0x41200000, 1, 0, 2, 1, 0);
			}
			if (!IS_OBJECT_VALID(bLocal_975))
			{
				if (Function_491(10, 1, 0x3f800000))
				{
					Function_647(&bLocal_984, 4.0f);
					NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
					Function_522(10);
				}
			}
			else if (IS_ACTOR_VALID(Function_41()) && IS_OBJECT_VALID(bLocal_975))
			{
				if (!Function_537(GATEWAY_GET_VOLUME(bLocal_975)))
				{
					Function_531(StackVal, StackVal, &bLocal_975, &iLocal_958, &iLocal_959, bLocal_960, vLocal_961);
				}
				if (IS_ACTOR_IN_VOLUME(bLocal_948, GATEWAY_GET_VOLUME(bLocal_975)) || Function_12(iLocal_977, 128))
				{
					STOP_VEHICLE(bLocal_948);
					if (Function_491(10, 1, 0x3f800000))
					{
						Function_647(&bLocal_984, 4.0f);
						NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_FIFTH_GOAL", false, false, false, false);
						Function_522(10);
					}
					if (!Function_12(iLocal_977, 256))
					{
						Function_407(&iLocal_987, 0.0f);
						Function_9(&iLocal_977, 256);
					}
					if (Function_12(iLocal_977, 256) && Function_682(&iLocal_987, 12.0f))
					{
						Function_772();
					}
				}
				else if (Function_12(iLocal_977, 256))
				{
					if (Function_408(&iLocal_987))
					{
						Function_680(&iLocal_987);
					}
					Function_6(&iLocal_977, 256);
				}
				if (IS_ACTOR_IN_VOLUME(bLocal_953, GATEWAY_GET_VOLUME(bLocal_975)))
				{
					Function_771(1);
				}
			}
			break;
		
		case 0x0000000A:
			STOP_VEHICLE(bLocal_948);
			PRINT_BIG("TUM_CO_obj03_complete", 1084227584, 0, 2, 0);
			if (Function_580(&bLocal_984))
			{
				Function_581("TUM_CO_obj03_complete");
				SET_ACTOR_INVULNERABILITY(Function_41(), 1);
				Function_647(&bLocal_984, 3.0f);
				HUD_FADE_OUT(3.0f, 1f, 1);
				NET_LOG(bLocal_934, "TUMco Stage01", "Transitioning to GID_COMPLETE", false, false, false, false);
				Function_522(106);
			}
			break;
		
		case 0x0000006A:
			if (Function_580(&bLocal_984) && HUD_IS_FADED())
			{
				if (Function_491(1, 1, 0x3f800000))
				{
					if (IS_ACTOR_VALID(Function_41()))
					{
						if (IS_ACTOR_ALIVE(Function_41()))
						{
							Function_9(&Local_763 + 36, 1);
						}
					}
					Local_763 = Function_150(29);
					Local_763.f_12 = Function_150(38);
					Local_763.f_24 = Function_150(12);
					Function_192(0);
					iLocal_495 = 1;
					NET_LOG(bLocal_934, "TUMco Stage02", "Transitioning to SID_SECOND_STAGE: GID_INITIALIZE", false, false, false, false);
					Function_522(0);
				}
			}
			else
			{
				if (!HUD_IS_FADING() && !HUD_IS_FADED())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_17();
			}
			break;
	}
	return;
}

void Function_771(var uParam0) //Position: 0x1D82C / 120876
{
	var uVar0;
	
	if (!Function_12(iLocal_977, 512))
	{
		uVar0 = uParam0;
		NET_SCRIPTMSG_SEND(3, 62, &uVar0, 1, 1);
	}
	return;
}

void Function_772() //Position: 0x1D84E / 120910
{
	var uVar0;
	
	if (!Function_12(iLocal_977, 128))
	{
		NET_SCRIPTMSG_SEND(3, 59, &uVar0, 1, 1);
	}
	return;
}

void Function_773() //Position: 0x1D86B / 120939
{
	if (Function_580(&bLocal_945))
	{
		Function_713();
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_632))
		{
			Function_775();
		}
		else if (Function_552(Local_77.f_632))
		{
			Function_774();
		}
		Function_647(&bLocal_945, 1.0f);
	}
	return;
}

void Function_774() //Position: 0x1D8A6 / 120998
{
	var uVar0;
	
	if (Function_12(iLocal_977, 64))
	{
		NET_SCRIPTMSG_SEND(3, 56, &uVar0, 1, 1);
	}
	return;
}

void Function_775() //Position: 0x1D8C2 / 121026
{
	var uVar0;
	
	if (!Function_12(iLocal_977, 64))
	{
		NET_SCRIPTMSG_SEND(3, 55, &uVar0, 1, 1);
	}
	return;
}

void Function_776() //Position: 0x1D8DF / 121055
{
	Function_543(bLocal_948, &bLocal_975, &iLocal_1086, "TUM_CO_obj03", "TUM_CO_goldcoachescortben", "TUM_CO_goldcoachprotect", "TUM_CO_goldcoachgetin", bLocal_960, 48);
	return;
}

void Function_777() //Position: 0x1D953 / 121171
{
	if (!Function_12(iLocal_977, 1024))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_532))
		{
			Function_789();
		}
	}
	if (Function_12(iLocal_977, 1024) && !Function_12(iLocal_977, 2048))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 2048);
			Function_788();
			Function_787();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 2048) && !Function_12(iLocal_977, 4096))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 4096);
			Function_786();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 4096) && !Function_12(iLocal_977, 8192))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 8192);
			Function_785();
			Function_787();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 8192) && !Function_12(iLocal_977, 16384))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 16384);
			Function_784();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 16384) && !Function_12(iLocal_977, 32768))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 32768);
			Function_782();
			Function_787();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 32768) && !Function_12(iLocal_977, 65536))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 65536);
			Function_781();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 65536) && !Function_12(iLocal_977, 131072))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 131072);
			Function_780();
			Function_787();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 131072) && !Function_12(iLocal_977, 262144))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 262144);
			Function_779();
			Function_647(&bLocal_964, 0.5f);
		}
	}
	if (Function_12(iLocal_977, 262144) && !Function_12(iLocal_977, 524288))
	{
		if (Function_580(&bLocal_964))
		{
			Function_9(&iLocal_977, 524288);
			Function_778();
			Function_787();
			Function_647(&bLocal_964, 2.0f);
		}
	}
	if (Function_12(iLocal_977, 524288))
	{
		if (Function_580(&bLocal_964))
		{
			Function_565();
			Function_647(&bLocal_964, 3.0f);
		}
	}
	return;
}

void Function_778() //Position: 0x1DBA0 / 121760
{
	return;
}

void Function_779() //Position: 0x1DBA6 / 121766
{
	return;
}

void Function_780() //Position: 0x1DBAC / 121772
{
	return;
}

void Function_781() //Position: 0x1DBB2 / 121778
{
	return;
}

void Function_782() //Position: 0x1DBB8 / 121784
{
	Function_783(491, 988, 85, 95, "CONST_S01_Scout06", "CONST_S01_ScoutHorse06", -3969.891f, 9.059f, 3834.253f, 0.0f, 37.28f, 0.0f);
	return;
}

void Function_783(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, vector3 vParam6, vector3 vParam9) //Position: 0x1DC0D / 121869
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 6);
		bVar2 = Local_77;
		bVar1 = CREATE_ACTOR_IN_LAYOUT(bVar2, bParam5, bParam1, vParam6, vParam9);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar2, bParam4, bParam0, vParam6, vParam9);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_VALID(bVar1))
		{
			ACTOR_MOUNT_ACTOR(bVar0, bVar1);
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			NET_ACTOR_SET_SCRIPT_INT(bVar0, bParam2);
			Function_264(bVar0);
		}
		if (IS_ACTOR_VALID(bVar1))
		{
			NET_ACTOR_SET_SCRIPT_INT(bVar1, bParam3);
			Function_262(bVar1);
		}
		Function_569(bLocal_973, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
}

void Function_784() //Position: 0x1DCAA / 122026
{
	Function_783(490, 988, 84, 94, "CONST_S01_Scout05", "CONST_S01_ScoutHorse05", -3927.369f, 10.793f, 3793.539f, 0.0f, 64.118f, 0.0f);
	return;
}

void Function_785() //Position: 0x1DCFF / 122111
{
	Function_783(489, 987, 83, 93, "CONST_S01_Scout04", "CONST_S01_ScoutHorse04", -4013.322f, 7.804986f, 3333.036f, 0.0f, 182.3002f, 0.0f);
	return;
}

void Function_786() //Position: 0x1DD54 / 122196
{
	Function_783(488, 987, 82, 92, "CONST_S01_Scout03", "CONST_S01_ScoutHorse03", -4017.412f, 7.798031f, 3333.283f, 0.0f, 182.3002f, 0.0f);
	return;
}

void Function_787() //Position: 0x1DDA9 / 122281
{
	vector3 vVar0;
	
	Function_567(bLocal_973, 1);
	vVar0 = { 0.0f, 0.0f, -12.0f };
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(bLocal_973, 0, Local_77.f_632, 4, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_973, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_973, 1, 0, 4294967295);
	TASK_FOLLOW_OBJECT(false, GET_OBJECT_FROM_ACTOR(bLocal_948), &vVar0, 5.0f, 5.0f, 0, 0, 0, 0, 1);
	return;
}

void Function_788() //Position: 0x1DDF5 / 122357
{
	Function_783(487, 988, 81, 91, "CONST_S01_Scout02", "CONST_S01_ScoutHorse02", -3834.71f, 14.563f, 3399.534f, 0.0f, 97.166f, 0.0f);
	return;
}

void Function_789() //Position: 0x1DE4A / 122442
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 38, &uVar0, 1, 1);
	return;
}

void Function_790(bool bParam0) //Position: 0x1DE5B / 122459
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		return;
	}
	bLocal_71 = bParam0;
	Function_9(&iLocal_76, 1);
	return;
}

void Function_791() //Position: 0x1DE7F / 122495
{
	bool bVar0;
	
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_pathdetachedCurve4", 5));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_pathdetachedCurve6", 5));
	SET_CURVE_WEIGHT(bVar0, 5);
	bVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_sol_gap_path", 5));
	SET_CURVE_WEIGHT(bVar0, 5);
	return;
}

void Function_792() //Position: 0x1DF16 / 122646
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_77, Function_52());
	bLocal_973 = GET_SQUAD_FROM_OBJECT(bVar0);
	bVar1 = CREATE_SQUAD_IN_LAYOUT(Local_77, Function_52());
	bLocal_974 = GET_SQUAD_FROM_OBJECT(bVar1);
	return;
}

void Function_793() //Position: 0x1DF40 / 122688
{
	NET_OBJECT_REPLICATION_MODE_START(35, 4);
	bLocal_975 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Local_77, "Benedict_Point_Gateway_Stage_01", *(&Local_77 + 940), *(&Local_77 + 940 + 12), 15.0f, 6.0f, 15.0f, 3, bLocal_948, 2, 4294967295, 0, 1, 1);
	NET_OBJECT_REPLICATION_MODE_END(35);
	bLocal_960 = "TUM_CO_obj03_blue";
	Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
	return;
}

bool Function_794() //Position: 0x1DFC7 / 122823
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_ACTOR_VALID(bLocal_968))
	{
		if (IS_ACTOR_ALIVE(bLocal_968))
		{
			iVar0++;
		}
	}
	if (IS_ACTOR_VALID(bLocal_969))
	{
		if (IS_ACTOR_ALIVE(bLocal_969))
		{
			iVar0++;
		}
	}
	if (IS_ACTOR_VALID(bLocal_970))
	{
		if (IS_ACTOR_ALIVE(bLocal_970))
		{
			iVar0++;
		}
	}
	if (IS_ACTOR_VALID(bLocal_971))
	{
		if (IS_ACTOR_ALIVE(bLocal_971))
		{
			iVar0++;
		}
	}
	if (IS_ACTOR_VALID(bLocal_972))
	{
		if (IS_ACTOR_ALIVE(bLocal_972))
		{
			iVar0++;
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_308))
	{
		iVar0 = (iVar0 + Function_576(Local_77.f_308));
	}
	if (SQUAD_IS_VALID(Local_77.f_312))
	{
		iVar0 = (iVar0 + Function_576(Local_77.f_312));
	}
	if (SQUAD_IS_VALID(Local_77.f_316))
	{
		iVar0 = (iVar0 + Function_576(Local_77.f_316));
	}
	if (iVar0 < 0)
	{
		return 1;
	}
	return 0;
}

void Function_795() //Position: 0x1E099 / 123033
{
	if (!Function_12(Local_763.f_36, 128))
	{
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_536))
		{
			Function_9(&Local_763 + 36, 128);
			Function_796();
		}
		if (((Function_12(Local_773[010].f_36, 128) || Function_12(Local_773[110].f_36, 128)) || Function_12(Local_773[210].f_36, 128)) || Function_12(Local_773[310].f_36, 128))
		{
			Function_9(&Local_763 + 36, 128);
			Function_796();
		}
	}
	return;
}

void Function_796() //Position: 0x1E10F / 123151
{
	if (IS_ACTOR_VALID(bLocal_968))
	{
		if (IS_ACTOR_ALIVE(bLocal_968))
		{
			TASK_CLEAR(bLocal_968);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_968, -1.0f);
		}
	}
	if (IS_ACTOR_VALID(bLocal_969))
	{
		if (IS_ACTOR_ALIVE(bLocal_969))
		{
			TASK_CLEAR(bLocal_969);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_969, -1.0f);
		}
	}
	if (IS_ACTOR_VALID(bLocal_970))
	{
		if (IS_ACTOR_ALIVE(bLocal_970))
		{
			TASK_CLEAR(bLocal_970);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_970, -1.0f);
		}
	}
	if (IS_ACTOR_VALID(bLocal_971))
	{
		if (IS_ACTOR_ALIVE(bLocal_971))
		{
			TASK_CLEAR(bLocal_971);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_971, -1.0f);
		}
	}
	if (IS_ACTOR_VALID(bLocal_972))
	{
		if (IS_ACTOR_ALIVE(bLocal_972))
		{
		}
	}
	if (SQUAD_IS_VALID(Local_77.f_308))
	{
		SQUAD_GOALS_CLEAR(Local_77.f_308);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_77.f_308, false, Local_77.f_536, 4294967295);
	}
	if (SQUAD_IS_VALID(Local_77.f_312))
	{
		SQUAD_GOALS_CLEAR(Local_77.f_312);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_77.f_312, false, Local_77.f_536, 4294967295);
	}
	if (SQUAD_IS_VALID(Local_77.f_316))
	{
		SQUAD_GOALS_CLEAR(Local_77.f_316);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_77.f_316, false, Local_77.f_536, 4294967295);
	}
	return;
}

void Function_797() //Position: 0x1E20C / 123404
{
	if ((!IS_ACTOR_IN_VOLUME(bLocal_948, Local_77.f_684) && !HUD_IS_FADED()) && Function_580(&bLocal_981))
	{
		Function_798();
	}
	return;
}

void Function_798() //Position: 0x1E230 / 123440
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 47, &uVar0, 1, 1);
	return;
}

void Function_799() //Position: 0x1E241 / 123457
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Function_12(iLocal_977, 1))
	{
		if (!Function_12(iLocal_977, 4))
		{
			if (Function_802(bLocal_953, Local_77.f_1664, 7.0f) && Function_801(bLocal_953, 0) > 0.25f)
			{
				NET_OBJECT_SET_REPLICATION_MODE(bLocal_953, 6);
				TASK_CLEAR(bLocal_970);
				TASK_CLEAR(bLocal_971);
				Function_800(&bLocal_970, Local_77.f_536);
				Function_800(&bLocal_971, Local_77.f_536);
				Function_9(&iLocal_977, 4);
			}
		}
		if (!Function_12(iLocal_977, 2))
		{
			if (Function_802(bLocal_948, Local_77.f_1660, 7.0f) && Function_801(bLocal_948, 0) > 0.25f)
			{
				NET_OBJECT_SET_REPLICATION_MODE(bLocal_948, 6);
				TASK_CLEAR(bLocal_968);
				TASK_CLEAR(bLocal_969);
				Function_800(&bLocal_968, Local_77.f_536);
				Function_800(&bLocal_969, Local_77.f_536);
				Function_9(&iLocal_977, 2);
			}
		}
		if (Function_12(iLocal_977, 4) || Function_12(iLocal_977, 2))
		{
			if (!Function_12(iLocal_977, 8))
			{
				Function_589(Local_77.f_308);
				SQUAD_GOALS_CLEAR(Local_77.f_308);
				bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Boss");
				bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_1");
				bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_2");
				bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_04");
				bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_05");
				TASK_WANDER_IN_VOLUME(bVar0, Local_77.f_536, -1.0f);
				TASK_WANDER_IN_VOLUME(bVar1, Local_77.f_536, -1.0f);
				TASK_WANDER_IN_VOLUME(bVar2, Local_77.f_536, -1.0f);
				TASK_STAND_STILL(bVar3, -1.0f, 0, 0);
				TASK_CROUCH(bVar4, -1.0f);
				Function_9(&iLocal_977, 8);
			}
		}
	}
	return;
}

int Function_800(bool bParam0, bool bParam1) //Position: 0x1E3DD / 123869
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_WANDER_IN_VOLUME(false, bParam1, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(*bParam0, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
		return 1;
	}
	return 0;
	return 0;
}

float Function_801(bool bParam0, bool bParam1) //Position: 0x1E415 / 123925
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_802(bool bParam0, bool bParam1, float fParam2) //Position: 0x1E434 / 123956
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_803(StackVal, StackVal, bParam0, vVar0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_803(bool bParam0, vector3 vParam1) //Position: 0x1E4C7 / 124103
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_804(bParam0);
		vVar0 = { StackVal, StackVal, Function_804(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_804(bool bParam0) //Position: 0x1E541 / 124225
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

int Function_805() //Position: 0x1E5AB / 124331
{
	bool bVar0;
	float fVar1;
	
	if (!Function_12(iLocal_977, 1))
	{
		bVar0 = Function_41();
		fVar1 = 25.0f;
		if ((((((((Function_596(Local_77.f_528, Local_77) || Function_595(bVar0, bLocal_968, 1, 0, 1, fVar1)) || Function_595(bVar0, bLocal_969, 1, 0, 1, fVar1)) || Function_595(bVar0, bLocal_970, 1, 0, 1, fVar1)) || Function_595(bVar0, bLocal_971, 1, 0, 1, fVar1)) || Function_595(bVar0, bLocal_972, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_308, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_312, 1, 0, 1, fVar1)) || Function_594(bVar0, Local_77.f_316, 1, 0, 1, fVar1))
		{
			Function_806();
			return 1;
		}
	}
	return 0;
}

void Function_806() //Position: 0x1E651 / 124497
{
	var uVar0;
	
	if (!Function_12(iLocal_977, 1))
	{
		NET_SCRIPTMSG_SEND(3, 36, &uVar0, 1, 1);
	}
	return;
}

void Function_807(int iParam0) //Position: 0x1E66D / 124525
{
	if (IS_ACTOR_VALID(bLocal_970))
	{
		TASK_CLEAR(bLocal_970);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_970, Local_77.f_1664, iParam0, 0, 0, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_968))
	{
		TASK_CLEAR(bLocal_968);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_968, Local_77.f_1660, iParam0, 0, 0, 1, 0);
	}
	return;
}

void Function_808() //Position: 0x1E6B3 / 124595
{
	Function_241(bLocal_972);
	Function_244(bLocal_968, 16);
	Function_244(bLocal_970, 16);
	Function_244(bLocal_969, 9);
	Function_244(bLocal_971, 9);
	Function_809();
	if (IS_ACTOR_VALID(bLocal_968))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_968, bLocal_948, false);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_968, bLocal_948, 0, 4, 0);
	}
	if (IS_ACTOR_VALID(bLocal_969))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_969, bLocal_948, true);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_969, bLocal_948, 1, 4, 0);
	}
	if (IS_ACTOR_VALID(bLocal_970))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_970, bLocal_953, false);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_970, bLocal_953, 0, 4, 0);
	}
	if (IS_ACTOR_VALID(bLocal_971))
	{
		SET_ACTOR_IN_VEHICLE(bLocal_971, bLocal_953, true);
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_971, bLocal_953, 1, 4, 0);
	}
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_948, 329, 0, 2, 0), "TUM_CO_goldcoach");
	return;
}

void Function_809() //Position: 0x1E784 / 124804
{
	int iVar0;
	
	GET_POSITION(bLocal_953, &iVar0);
	Function_810(&bLocal_972, &iVar0);
	AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(bLocal_972, 180.0f);
	return;
}

int Function_810(bool bParam0, int iParam1) //Position: 0x1E7A6 / 124838
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(*bParam0, false);
		bVar0 = Function_811(StackVal, StackVal, *iParam1, 1, 5.0f);
		if (IS_OBJECT_VALID(bVar0))
		{
			DECOR_SET_FLOAT(bVar0, "fRestrictRotation", 359.0f);
			bVar1 = LOCATE_GRINGO_OF_TYPE("gatling_attach", iParam1, 5.0f, 1);
			if (IS_GRINGO_VALID(bVar1))
			{
				TASK_CLEAR(*bParam0);
				SNAP_ACTOR_TO_GRINGO(*bParam0, GET_OBJECT_FROM_GRINGO(bVar1), "GatlingShoot", 1, 0, 0);
				TASK_USE_TURRET(*bParam0, GRINGO_GET_TARGET(bVar1), -1.0f);
				TASK_PRIORITY_SET(*bParam0, 1);
				DECOR_SET_BOOL(*bParam0, "bNoInjuryEjection", true);
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(*bParam0, 180.0f);
				return 1;
			}
			TASK_CLEAR(*bParam0);
			TASK_USE_TURRET(*bParam0, bVar0, -1.0f);
			TASK_PRIORITY_SET(*bParam0, 1);
			AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(*bParam0, 180.0f);
			return 0;
		}
		return 0;
	}
	return 0;
	return 0;
}

var Function_811(vector3 vParam0, int iParam3, float fParam4) //Position: 0x1E8A1 / 125089
{
	float fVar0;
	bool bVar1;
	
	if (Function_115(StackVal, StackVal, vParam0))
	{
		return "";
	}
	if (iParam3 == 1)
	{
		fVar0 = "p_gen_gatlingGun01x";
	}
	else if (iParam3 == 2)
	{
		fVar0 = "p_gen_gatlingMaxim02x";
	}
	else if (iParam3 == 3)
	{
		fVar0 = "p_gen_cannon02x";
	}
	else
	{
		return "";
	}
	bVar1 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam0, fParam4, fVar0, 1));
	if (!IS_OBJECT_VALID(bVar1))
	{
		return "";
	}
	return bVar1;
}

bool Function_812() //Position: 0x1E93F / 125247
{
	return ((((((IS_ACTOR_VALID(bLocal_953) && IS_ACTOR_VALID(bLocal_948)) && IS_ACTOR_VALID(bLocal_968)) && IS_ACTOR_VALID(bLocal_969)) && IS_ACTOR_VALID(bLocal_970)) && IS_ACTOR_VALID(bLocal_971)) && IS_ACTOR_VALID(bLocal_972));
}

void Function_813() //Position: 0x1E975 / 125301
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	Function_816();
	Function_815();
	Function_814();
	NET_OBJECT_REPLICATION_MODE_END(17);
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_814() //Position: 0x1E99A / 125338
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s01_MexicanSniper_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_05", 379, -4311.282f, 4.948f, 3748f, 0.0f, 267.7234f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_316);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_815() //Position: 0x1EA10 / 125456
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s01_MexicanSniper_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_04", 381, -4311.269f, 5.002f, 3743.531f, 0.0f, -47.58243f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_312);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_816() //Position: 0x1EA86 / 125574
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s01_MexicanArmy"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Boss", 391, -4321.263f, 3.328322f, 3728f, 0.0f, 11.91811f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_308);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_1", 380, -4320.292f, 3.589007f, 3719.957f, 0.0f, 167.7809f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_308);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_2", 382, -4324f, 3.541783f, 3721.618f, 0.0f, 244.6701f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_308);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_817() //Position: 0x1EB6D / 125805
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 6);
		NET_OBJECT_REPLICATION_MODE_START(17, 6);
		bLocal_953 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "s01_gatling_wagon1", 1182, 985, *(&Local_77 + 868), *(&Local_77 + 868 + 12), 0, 976, 976, 976, 4);
		bLocal_948 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "s01_gold_wagon", 1177, 986, *(&Local_77 + 844), *(&Local_77 + 844 + 12), 0, 976, 976, 976, 4);
		CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgb1", "ClimbOntoWagon", 0.4f, -0.05f, 3.4f, 0.0f, 0.0f, 0.0f);
		CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgb2", "ClimbOntoWagon", -0.45f, -0.05f, 3.4f, 0.0f, 0.0f, 0.0f);
		CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgs1", "ClimbOntoWagon", 1.75f, -0.05f, 0.2f, 0.0f, 90.0f, 0.0f);
		CREATE_GRINGO_ON_OBJECT(bLocal_953, "cgs2", "ClimbOntoWagon", -1.75f, -0.05f, 0.2f, 0.0f, -90.0f, 0.0f);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_953, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_948, false);
		bVar0 = false;
		iVar1 = GET_NUM_DRAFTED_ACTORS(bLocal_953);
		bVar0 = false;
		while (bVar0 < (iVar1 - 1))
		{
			SET_ACTOR_CAN_BE_TARGETED(GET_DRAFT_ACTOR(bVar0, bLocal_953), false);
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar0, bLocal_953), false);
			bVar0++;
		}
		iVar2 = GET_NUM_DRAFTED_ACTORS(bLocal_948);
		bVar0 = false;
		while (bVar0 < (iVar2 - 1))
		{
			SET_ACTOR_CAN_BE_TARGETED(GET_DRAFT_ACTOR(bVar0, bLocal_948), false);
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar0, bLocal_948), false);
			bVar0++;
		}
		SET_ACTOR_INVULNERABILITY(bLocal_953, 1);
		SET_ACTOR_INVULNERABILITY(bLocal_948, 1);
		bLocal_949 = GET_DRAFT_ACTOR(false, bLocal_948);
		bLocal_950 = GET_DRAFT_ACTOR(true, bLocal_948);
		bLocal_951 = GET_DRAFT_ACTOR(2, bLocal_948);
		bLocal_952 = GET_DRAFT_ACTOR(3, bLocal_948);
		bLocal_954 = GET_DRAFT_ACTOR(false, bLocal_953);
		bLocal_955 = GET_DRAFT_ACTOR(true, bLocal_953);
		bLocal_956 = GET_DRAFT_ACTOR(2, bLocal_953);
		bLocal_957 = GET_DRAFT_ACTOR(3, bLocal_953);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_948, 50);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_949, 51);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_950, 52);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_951, 53);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_952, 54);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_953, 60);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_954, 61);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_955, 62);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_956, 63);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_957, 64);
		bLocal_968 = CREATE_ACTOR_IN_LAYOUT(Local_77, "m_Stage01_GoldCoachDriver", 492, -4467.922f, 4.007155f, 3718.56f, 0.0f, 257.1497f, 0.0f);
		bLocal_969 = CREATE_ACTOR_IN_LAYOUT(Local_77, "m_Stage01_GoldCoachPassenger", 486, -4468.5f, 3.915991f, 3725.6f, 0.0f, 257.1497f, 0.0f);
		bLocal_970 = CREATE_ACTOR_IN_LAYOUT(Local_77, "m_Stage01_GatlingCoach1Driver", 493, -4456.308f, 3.98496f, 3722.179f, 0.0f, 257.1497f, 0.0f);
		bLocal_971 = CREATE_ACTOR_IN_LAYOUT(Local_77, "m_Stage01_GatlingCoach1Passenger", 487, -4457.508f, 3.878302f, 3729.181f, 0.0f, 257.1497f, 0.0f);
		bLocal_972 = CREATE_ACTOR_IN_LAYOUT(Local_77, "m_Stage01_GatlingCoach1Gunner", 490, -4460.06f, 4.010058f, 3720.726f, 0.0f, 257.1497f, 0.0f);
		SET_ACTOR_FACTION(bLocal_968, 19);
		SET_ACTOR_FACTION(bLocal_969, 19);
		SET_ACTOR_FACTION(bLocal_970, 19);
		SET_ACTOR_FACTION(bLocal_971, 19);
		SET_ACTOR_FACTION(bLocal_972, 19);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_968, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_969, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_970, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_971, false);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_972, false);
		START_VEHICLE(bLocal_948);
		SET_VEHICLE_ALLOWED_TO_DRIVE(bLocal_948, 1);
		START_VEHICLE(bLocal_953);
		SET_VEHICLE_ALLOWED_TO_DRIVE(bLocal_953, 1);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_968, 55);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_969, 56);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_970, 65);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_971, 66);
		NET_ACTOR_SET_SCRIPT_INT(bLocal_972, 67);
		NET_OBJECT_REPLICATION_MODE_END(17);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return;
}

void Function_818() //Position: 0x1EFCC / 126924
{
	bool bVar0[12];
	int iVar13;
	
	bVar0[0] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_wagon");
	bVar0[1] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_wagon");
	bVar0[2] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_driver");
	bVar0[3] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_passenger");
	bVar0[4] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_driver");
	bVar0[5] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_passenger");
	bVar0[6] = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_gunner");
	bVar0[7] = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Boss");
	bVar0[8] = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_1");
	bVar0[9] = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_2");
	bVar0[10] = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_04");
	bVar0[11] = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_05");
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 < 11)
	{
		if (IS_ACTOR_VALID(bVar0[iVar13]))
		{
			DESTROY_ACTOR(bVar0[iVar13]);
		}
		iVar13++;
	}
	return;
}

bool Function_819() //Position: 0x1F17F / 127359
{
	bool bVar0;
	var uVar1;
	
	Function_645(&Local_504, 1);
	bVar0 = false;
	if (((Local_504 != 1001 || Local_504 != 1002) || Local_504 != 1003) || Local_504 != 1004)
	{
		bVar0 = Function_828();
	}
	switch (Local_504)
	{
		case 0x000003E8:
			iLocal_1087 = 15;
			Function_518(&Local_504 + 4);
			Function_515();
			Function_511(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_504.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_504.f_16 = Function_820(Local_77, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_504.f_16))
				{
				}
				else
				{
					LOG_ERROR("TumbleweedMP_CO_cutscene01 - Failed to create TumbleweedMP_CO_cutscene01_cutscene");
				}
			}
			Local_504 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_504.f_16), false))
			{
				Function_505(Global_34573, 1, 1);
				Local_504 = 1002;
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
				Local_504 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_404(&Local_504 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					iLocal_1088 = 15;
					Local_504 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_518(&Local_504 + 4);
				Local_504 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_505(Global_34573, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_504.f_16))
				{
					DESTROY_OBJECT(Local_504.f_16);
				}
				Local_504 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_504 = 1104;
			}
			break;
	}
	return 0;
}

var Function_820(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1F3B4 / 127924
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumbleweedMP_CO_cutscene01", 6, 1);
	}
	Function_821(&bVar0);
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

void Function_821(int iParam0) //Position: 0x1F43A / 128058
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_827(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_826(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_825(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_824(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_823(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_822(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(bVar1, 0.0f, 2.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 7.0f, 2, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 1.0f, 3);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(bVar1, 0.0f, 1.0f, 0);
	return;
}

void Function_822(int iParam0) //Position: 0x1F4DD / 128221
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4201.996f, 23.00783f, 3751.903f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.194595f, 0.926403f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_823(int iParam0) //Position: 0x1F547 / 128327
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4200.647f, 23.33246f, 3752.975f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.161836f, 1.386616f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_824(int iParam0) //Position: 0x1F5B1 / 128433
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4330.563f, 5.455718f, 3721.866f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.080986f, -2.286948f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_825(int iParam0) //Position: 0x1F61B / 128539
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4325.678f, 5.449743f, 3720.275f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.038414f, -3.102321f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_826(int iParam0) //Position: 0x1F685 / 128645
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4304.376f, 6.923059f, 3730.963f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.045487f, 1.721298f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_827(var uParam0) //Position: 0x1F6EF / 128751
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4304.884f, 6.87109f, 3736.165f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.060741f, 1.529816f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_828() //Position: 0x1F752 / 128850
{
	switch (iLocal_1087)
	{
		case 0x0000000F:
			if (Function_404(&Local_504 + 4) < 3.0f)
			{
				Function_829();
				iLocal_1087 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_404(&Local_504 + 4) < 21.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_829() //Position: 0x1F7A0 / 128928
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene1_v1_AA", "TEscape_Scene1_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene1_v1_AB", "TEscape_Scene1_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TEscape_Scene1_v1_AC", "TEscape_Scene1_v1_AC", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_830() //Position: 0x1F887 / 129159
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_wagon");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_gunner");
	if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_VALID(bVar1))
	{
		GET_POSITION(bVar0, &iVar2);
		Function_810(&bVar1, &iVar2);
	}
	return;
}

void Function_831() //Position: 0x1F8E5 / 129253
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_driver");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_driver");
	if (IS_ACTOR_VALID(bVar1))
	{
		TASK_CLEAR(bVar1);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_77.f_1664, 2, 0, 0, 1, 0);
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0, Local_77.f_1660, 2, 0, 0, 1, 0);
	}
	return;
}

void Function_832() //Position: 0x1F966 / 129382
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Boss");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_1");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_2");
	bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_04");
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Sniper_05");
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_308, 0, 0, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_77.f_536, -1f);
	TASK_STAND_STILL(bVar3, -1.0f, 0, 0);
	TASK_CROUCH(bVar4, -1.0f);
	Function_234(&bVar0, 10, 1, iLocal_1075);
	Function_234(&bVar1, 9, 1, iLocal_1075);
	Function_234(&bVar2, 9, 1, iLocal_1075);
	Function_833(&bVar3, iLocal_1075);
	Function_833(&bVar4, iLocal_1075);
	return;
}

void Function_833(bool bParam0, int iParam1) //Position: 0x1FA37 / 129591
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		Function_834(*bParam0, 25, "XP_Class_Sniper");
		switch (iParam1)
		{
			case 0x00000000:
				Function_243(*bParam0);
				Function_226(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_225(bParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_243(*bParam0);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, 9, 5);
				break;
			
			case 0x00000002:
				Function_243(*bParam0);
				Function_226(bParam0, 1.0f);
				Function_225(bParam0, 12, 5);
				break;
			
			case 0x00000003:
				Function_243(*bParam0);
				Function_226(bParam0, 2.0f);
				Function_225(bParam0, 20, 5);
				break;
			
			case 0x00000004:
				Function_243(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				Function_226(bParam0, 3.0f);
				Function_225(bParam0, 19, 6);
				break;
			
			case 0x00000005:
				Function_243(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 90.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_226(bParam0, 4.0f);
				Function_225(bParam0, 14, 7);
				break;
		}
		Function_213(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SNIPER was passed an invalid actor");
	}
	return;
}

int Function_834(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1FBA5 / 129957
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

void Function_835() //Position: 0x1FBEB / 130027
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_wagon");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_wagon");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_driver");
	bVar3 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_passenger");
	bVar4 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_driver");
	bVar5 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_passenger");
	bVar6 = FIND_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_gunner");
	if (IS_ACTOR_VALID(bVar1))
	{
		SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
		bVar10 = false;
		iVar11 = GET_NUM_DRAFTED_ACTORS(bVar1);
		bVar10 = false;
		while (bVar10 < (iVar11 - 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar10, bVar1), false);
			bVar10++;
		}
		if (IS_ACTOR_VALID(bVar4))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar4, false);
			SET_ACTOR_IN_VEHICLE(bVar4, bVar1, false);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar4, bVar1, 0, 4, 0);
		}
		if (IS_ACTOR_VALID(bVar5))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar5, false);
			SET_ACTOR_IN_VEHICLE(bVar5, bVar1, true);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar5, bVar1, 1, 4, 0);
		}
		if (IS_ACTOR_VALID(bVar6))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar6, false);
			GET_POSITION(bVar1, &uVar7);
			Function_810(&bVar6, &uVar7);
		}
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
		bVar12 = false;
		iVar13 = GET_NUM_DRAFTED_ACTORS(bVar0);
		bVar12 = false;
		while (bVar12 < (iVar13 - 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(bVar12, bVar0), false);
			bVar12++;
		}
		if (IS_ACTOR_VALID(bVar2))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
			SET_ACTOR_IN_VEHICLE(bVar2, bVar0, false);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar2, bVar0, 0, 4, 0);
		}
		if (IS_ACTOR_VALID(bVar3))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar3, false);
			SET_ACTOR_IN_VEHICLE(bVar3, bVar0, true);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar3, bVar0, 1, 4, 0);
		}
	}
	return;
}

void Function_836() //Position: 0x1FDE4 / 130532
{
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	bLocal_953 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "scnact_gat_wagon", 1182, 985, *(&Local_77 + 820), *(&Local_77 + 820 + 12), 0, 976, 976, 976, 4);
	bLocal_948 = Function_485(StackVal, StackVal, StackVal, StackVal, Local_77, "scnact_gold_wagon", 1177, 986, *(&Local_77 + 796), *(&Local_77 + 796 + 12), 0, 976, 976, 976, 4);
	CREATE_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_driver", 492, -4467.922f, 4.007155f, 3718.56f, 0.0f, 257.1497f, 0.0f);
	CREATE_ACTOR_IN_LAYOUT(Local_77, "scnact_gold_coach_passenger", 486, -4468.5f, 3.915991f, 3725.6f, 0.0f, 257.1497f, 0.0f);
	CREATE_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_driver", 493, -4456.308f, 3.98496f, 3722.179f, 0.0f, 257.1497f, 0.0f);
	CREATE_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_passenger", 487, -4457.508f, 3.878302f, 3729.181f, 0.0f, 257.1497f, 0.0f);
	CREATE_ACTOR_IN_LAYOUT(Local_77, "scnact_gat_coach_gunner", 490, -4460.06f, 4.010058f, 3720.726f, 0.0f, 257.1497f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_837() //Position: 0x1FF9E / 130974
{
	Function_521();
	return;
}

void Function_838() //Position: 0x1FFA7 / 130983
{
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Function_816();
	Function_815();
	Function_814();
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

void Function_839(var uParam0, bool bParam1, bool bParam2) //Position: 0x1FFC1 / 131009
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(*uParam0);
	ITERATE_ON_PARTIAL_NAME(bVar0, bParam1);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
	if (IS_ACTOR_VALID(bVar2))
	{
		if (STRING_CONTAINS_STRING(GET_ACTOR_NAME(bVar2), bParam1))
		{
			*bParam2 = bVar2;
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_840() //Position: 0x20004 / 131076
{
	switch (iLocal_1058)
	{
		case 0x00000000:
			if (iLocal_496 != 3 || iLocal_496 != 5)
			{
				Function_841(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_496 == 7)
			{
				if (!Function_12(iLocal_977, 1))
				{
					Function_841(2);
				}
				else if (Function_12(iLocal_977, 1))
				{
					if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_536))
					{
						Function_841(4);
					}
					else if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_528))
					{
						Function_841(3);
					}
				}
				else if (Function_12(iLocal_977, 16))
				{
					Function_841(5);
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_496 == 7)
			{
				if (Function_12(iLocal_977, 1))
				{
					if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_536))
					{
						Function_841(4);
					}
					else if (IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_528))
					{
						Function_841(3);
					}
				}
				else if (Function_12(iLocal_977, 16))
				{
					Function_841(5);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_496 == 7)
			{
				if (Function_12(iLocal_977, 1) && IS_ACTOR_IN_VOLUME(Function_41(), Local_77.f_536))
				{
					Function_841(4);
				}
				else if (Function_12(iLocal_977, 16))
				{
					Function_841(5);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_12(iLocal_977, 16))
			{
				Function_841(5);
			}
			break;
		
		case 0x00000005:
			if (Function_12(iLocal_977, 1024))
			{
				Function_841(6);
			}
			break;
		
		case 0x00000006:
			if (iLocal_496 == 9)
			{
				if (IS_PLAYER_IN_COMBAT(0))
				{
					Function_841(7);
				}
				else if (Function_12(iLocal_977, 128))
				{
					Function_841(8);
				}
			}
			break;
		
		case 0x00000007:
			if (Function_12(iLocal_977, 128))
			{
				Function_841(8);
			}
			else if (iLocal_496 == 9)
			{
				Function_672(&iLocal_967, 6, 26, 25, 10.0f);
			}
			break;
		
		case 0x00000008:
			Function_841(9);
			break;
		
		case 0x00000009:
			break;
	}
	return;
}

void Function_841(int iParam0) //Position: 0x201CB / 131531
{
	switch (iParam0)
	{
		case 0x00000001:
			Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 0;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000002:
			Function_516("FTR_SONG_05", 8, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 8;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000003:
			Function_516("FTR_SONG_05", 38, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 38;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000004:
			Function_516("FTR_SONG_05", 34, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 34;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000005:
			Function_516("FTR_SONG_05", 11, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 11;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000006:
			Function_516("FTR_SONG_05", 6, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 6;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000007:
			Function_516("FTR_SONG_05", 26, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 26;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000008:
			Function_516("FTR_SONG_05", 25, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 25;
			iLocal_1058 = iParam0;
			break;
		
		case 0x00000000:
		case 0x00000009:
			Function_516("FTR_SONG_05", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_967 = 0;
			iLocal_1058 = iParam0;
			break;
	}
	return;
}

void Function_842() //Position: 0x2037F / 131967
{
	if (NET_IS_SESSION_CLIENT())
	{
		Function_844();
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_843();
	}
	Function_532(&vLocal_961, 1920.0f, bLocal_960, 4.0f, 2, 0);
	return;
}

void Function_843() //Position: 0x203A9 / 132009
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	if (Function_404(&iLocal_536) <= 1.0f)
	{
		Function_518(&iLocal_536);
	}
	return;
}

void Function_844() //Position: 0x203D0 / 132048
{
	if (!Function_408(&iLocal_536))
	{
		Function_406(&iLocal_536);
	}
	if (Function_404(&iLocal_536) <= 1.0f)
	{
	}
	return;
}

void Function_845() //Position: 0x203F1 / 132081
{
	switch (iLocal_496)
	{
		case 0x00000006:
			Function_204(Global_83864.f_1284);
			Function_202(Function_1034());
			Function_201(Global_83864.f_1284, 0, 1);
			Function_37(512);
			Function_1030();
			Function_1026();
			SET_FACTIONS_STATUS_TWO_WAY(10, 25, 0);
			SET_FACTIONS_STATUS_TWO_WAY(19, 25, 0);
			SET_FACTIONS_STATUS_TWO_WAY(19, 10, 0);
			bLocal_937 = CREATE_EVENT_TRAP("tumco_replication_trap", 77, Local_77);
			EVENT_TRAP_STORE_EVENTS(bLocal_937, 1);
			REGISTER_HOST_BROADCAST_VARIABLES(&Local_759, 2);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_773, 161);
			Function_1025();
			Function_1023();
			Function_981(&bLocal_545);
			iLocal_496 = 7;
			break;
		
		case 0x00000007:
			if (Function_973())
			{
				iLocal_496 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_945(Local_77, &Global_83591 + 276, 1, 1) != 0)
			{
				iLocal_496 = 9;
			}
			break;
		
		case 0x00000009:
			ENABLE_CHILD_SECTOR("mp_scr_coop01x");
			bLocal_539 = CREATE_LAYOUT("MISSION_dynamicLayout");
			CAMERA_RESET(0);
			if (Function_155())
			{
				iLocal_1085 = 4;
			}
			Function_944(iLocal_1085);
			iLocal_496 = 0;
			iLocal_495 = 0;
			Local_504 = 1000;
			Function_846();
			GRINGO_DISABLE_TYPE("lean_fence_h_talking");
			UNK_0x2148AC15(322, 10);
			UNK_0x444C3C32(0, 4, 0);
			NET_LOG(bLocal_934, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", false, false, false, false);
			break;
	}
	return;
}

void Function_846() //Position: 0x20590 / 132496
{
	NET_SCRIPTMSG_REGISTER_HANDLER(32, 146661);
	NET_SCRIPTMSG_REGISTER_HANDLER(33, 146641);
	NET_SCRIPTMSG_REGISTER_HANDLER(15, 146620);
	NET_SCRIPTMSG_REGISTER_HANDLER(35, 146016);
	NET_SCRIPTMSG_REGISTER_HANDLER(36, 145145);
	NET_SCRIPTMSG_REGISTER_HANDLER(37, 145106);
	NET_SCRIPTMSG_REGISTER_HANDLER(38, 144946);
	NET_SCRIPTMSG_REGISTER_HANDLER(39, 144923);
	NET_SCRIPTMSG_REGISTER_HANDLER(40, 144348);
	NET_SCRIPTMSG_REGISTER_HANDLER(41, 143812);
	NET_SCRIPTMSG_REGISTER_HANDLER(42, 143089);
	NET_SCRIPTMSG_REGISTER_HANDLER(43, 142368);
	NET_SCRIPTMSG_REGISTER_HANDLER(44, 139305);
	NET_SCRIPTMSG_REGISTER_HANDLER(45, 139264);
	NET_SCRIPTMSG_REGISTER_HANDLER(46, 139147);
	NET_SCRIPTMSG_REGISTER_HANDLER(47, 139124);
	NET_SCRIPTMSG_REGISTER_HANDLER(48, 138134);
	NET_SCRIPTMSG_REGISTER_HANDLER(49, 137153);
	NET_SCRIPTMSG_REGISTER_HANDLER(50, 135759);
	NET_SCRIPTMSG_REGISTER_HANDLER(51, 134705);
	NET_SCRIPTMSG_REGISTER_HANDLER(52, 133872);
	NET_SCRIPTMSG_REGISTER_HANDLER(53, 133607);
	NET_SCRIPTMSG_REGISTER_HANDLER(54, 133517);
	NET_SCRIPTMSG_REGISTER_HANDLER(55, 133121);
	NET_SCRIPTMSG_REGISTER_HANDLER(56, 133102);
	NET_SCRIPTMSG_REGISTER_HANDLER(57, 133072);
	NET_SCRIPTMSG_REGISTER_HANDLER(58, 133053);
	NET_SCRIPTMSG_REGISTER_HANDLER(59, 133030);
	NET_SCRIPTMSG_REGISTER_HANDLER(60, 133011);
	NET_SCRIPTMSG_REGISTER_HANDLER(61, 132893);
	NET_SCRIPTMSG_REGISTER_HANDLER(62, 132846);
	NET_SCRIPTMSG_REGISTER_HANDLER(63, 132822);
	return;
}

void Function_847(bool bParam0) //Position: 0x206D6 / 132822
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_9(&iLocal_994, 512);
	return;
}

void Function_848(bool bParam0) //Position: 0x206EE / 132846
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_977, 512))
	{
		Function_9(&iLocal_977, 512);
		Function_9(&Local_763 + 36, 8);
	}
	return;
}

void Function_849(bool bParam0) //Position: 0x2071D / 132893
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000001:
			iLocal_1056 = 1;
			Function_661(&bLocal_545, Local_77.f_660);
			break;
		
		case 0x00000002:
			iLocal_1056 = 2;
			Function_661(&bLocal_545, Local_77.f_664);
			break;
		
		case 0x00000003:
			iLocal_1056 = 3;
			Function_661(&bLocal_545, Local_77.f_668);
			break;
		
		case 0x00000004:
			iLocal_1056 = 4;
			Function_661(&bLocal_545, Local_77.f_672);
			break;
	}
	return;
}

void Function_850(bool bParam0) //Position: 0x20793 / 133011
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	iLocal_935 = 1;
	return;
}

void Function_851(bool bParam0) //Position: 0x207A6 / 133030
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_9(&iLocal_977, 128);
	return;
}

void Function_852(bool bParam0) //Position: 0x207BD / 133053
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_186(0);
	return;
}

void Function_853(bool bParam0) //Position: 0x207D0 / 133072
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_994, 128))
	{
		Function_755();
	}
	return;
}

void Function_854(bool bParam0) //Position: 0x207EE / 133102
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_195(0);
	return;
}

void Function_855(bool bParam0) //Position: 0x20801 / 133121
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_977, 64))
	{
		Function_856();
	}
	return;
}

void Function_856() //Position: 0x2081F / 133151
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_857();
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_480, 0, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_77.f_676, -1.0f);
	Function_657(&Local_77 + 480);
	SQUAD_SET_FACTION(Local_77.f_480, 20);
	CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(20, Function_41());
	Function_758(Local_77.f_480, 0);
	Function_757(Local_77.f_480, 0);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_9(&iLocal_977, 64);
	return;
}

void Function_857() //Position: 0x2087D / 133245
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_480 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s01_Army_SceneActors"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s01_SceneActor_1", 378, -3698.067f, 8.976556f, 3491.215f, 0.0f, 169.4084f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_480);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 70);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s01_SceneActor_2", 374, -3673.684f, 8.155743f, 3494.317f, 0.0f, 93.84723f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_480);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 70);
	SET_ACTOR_FACTION(bVar0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s01_SceneActor_3", 373, -3670.587f, 8.014577f, 3501.459f, 0.0f, 93.84723f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_480);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 70);
	SET_ACTOR_FACTION(bVar0, 1);
	return;
}

void Function_858(bool bParam0) //Position: 0x2098D / 133517
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_HELP();
	Function_381(&bLocal_545, "TUM_CO_goldcoachboom", "FTR_MISSION_FAIL_SONG_01");
	iLocal_935 = 0;
	iLocal_495 = 101;
	Function_522(0);
	return;
}

void Function_859(bool bParam0) //Position: 0x209E7 / 133607
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	if (Var0)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_HELP();
		Function_381(&bLocal_545, "TUM_CO_armyhurt", "FTR_MISSION_FAIL_SONG_01");
		iLocal_935 = 0;
		iLocal_495 = 101;
		Function_522(0);
	}
	if (StackVal)
	{
		if (SQUAD_IS_VALID(Local_77.f_484))
		{
			SQUAD_GOALS_CLEAR(Local_77.f_484);
			SQUAD_SET_FACTION(Local_77.f_484, 19);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_484, 0, 0, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		}
		if (SQUAD_IS_VALID(Local_77.f_492))
		{
			SQUAD_GOALS_CLEAR(Local_77.f_492);
			SQUAD_SET_FACTION(Local_77.f_492, 19);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_492, 0, 0, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_HELP();
		Function_381(&bLocal_545, "TUM_CO_goldcoachsteal", "FTR_MISSION_FAIL_SONG_01");
		iLocal_935 = 0;
		iLocal_495 = 101;
		Function_522(0);
	}
	return;
}

void Function_860(bool bParam0) //Position: 0x20AF0 / 133872
{
	bool bVar0;
	vector3 vVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (bVar0)
	{
		GET_VOLUME_CENTER(Local_77.f_652, &vVar1);
		STREAMING_UNLOAD_BOUNDS();
		STREAMING_LOAD_BOUNDS(vVar1, 100.0f, 1);
		Function_862();
	}
	else
	{
		Function_861();
	}
	return;
}

void Function_861() //Position: 0x20B27 / 133927
{
	Function_6(&iLocal_1026, 64);
	Function_174(&Local_77 + 468);
	Function_174(&Local_77 + 472);
	return;
}

void Function_862() //Position: 0x20B45 / 133957
{
	if (!Function_12(iLocal_1026, 64))
	{
		Function_9(&iLocal_1026, 64);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_865();
		Function_864();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 468, 9, 7, bLocal_1082);
		Function_863(&Local_77 + 472, bLocal_1082);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_468, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_472, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_468, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_472, 0);
		Function_685(&Local_77 + 468);
		Function_685(&Local_77 + 472);
		Function_228(&Local_77 + 468);
		Function_228(&Local_77 + 472);
		Function_569(Local_77.f_468, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_472, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_863(var uParam0, bool bParam1) //Position: 0x20C15 / 134165
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
			Function_212(&bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_864() //Position: 0x20C91 / 134289
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_472 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Advanced_Patrol_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_5_Hard", 376, -3533.785f, 31.12156f, 3950.337f, 0.0f, 162.0963f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_472);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 914);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_5_Medium", 373, -3522.478f, 31.12155f, 3962.967f, 0.0f, 162.0963f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_472);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 914);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_865() //Position: 0x20D60 / 134496
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_468 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Advanced_Patrol_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_4_Medium", 374, -3385.745f, 31.12157f, 3882.255f, 0.0f, 142.3035f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_468);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 913);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_4_Easy_1", 371, -3408.0f, 31.66995f, 3870.1f, 0.0f, 142.3035f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_468);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 913);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_866(bool bParam0) //Position: 0x20E31 / 134705
{
	bool bVar0;
	vector3 vVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (bVar0)
	{
		GET_VOLUME_CENTER(Local_77.f_648, &vVar1);
		STREAMING_UNLOAD_BOUNDS();
		STREAMING_LOAD_BOUNDS(vVar1, 100.0f, 1);
		Function_868();
	}
	else
	{
		Function_867();
	}
	return;
}

void Function_867() //Position: 0x20E68 / 134760
{
	Function_6(&iLocal_1026, 1024);
	Function_174(&Local_77 + 456);
	Function_174(&Local_77 + 460);
	Function_174(&Local_77 + 464);
	return;
}

void Function_868() //Position: 0x20E8F / 134799
{
	if (!Function_12(iLocal_1026, 1024))
	{
		if (((!Function_12(Local_773[010].f_36, 1024) && !Function_12(Local_773[110].f_36, 1024)) && !Function_12(Local_773[210].f_36, 1024)) && !Function_12(Local_773[310].f_36, 1024))
		{
			Function_9(&Local_763 + 36, 1024);
			Function_581(0);
		}
		Function_9(&iLocal_1026, 1024);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_871();
		Function_870();
		Function_869();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 456, 9, 2, bLocal_1082);
		Function_659(&Local_77 + 460, 10, 2, bLocal_1083);
		Function_863(&Local_77 + 464, bLocal_1082);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_456, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_460, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_464, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_456, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_460, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_464, 0);
		Function_685(&Local_77 + 456);
		Function_685(&Local_77 + 460);
		Function_685(&Local_77 + 464);
		Function_228(&Local_77 + 456);
		Function_228(&Local_77 + 460);
		Function_228(&Local_77 + 464);
		Function_569(Local_77.f_456, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_460, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_464, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_869() //Position: 0x21009 / 135177
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_464 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Camp_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_3_Hard", 375, -3180.0f, 39.87773f, 3798.04f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_464);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 912);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_3_Medium", 372, -3174.237f, 39.70168f, 3813.764f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_464);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 912);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_870() //Position: 0x210C5 / 135365
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_460 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Camp_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_2_Medium", 373, -3154.223f, 43.16441f, 3764f, 0.0f, 162.593f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_460);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 911);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_2_Easy_1", 370, -3166.076f, 42.14178f, 3780f, 0.0f, 162.593f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_460);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 911);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_871() //Position: 0x2118B / 135563
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_456 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Camp_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_1_Hard", 378, -3096.901f, 45.3456f, 3744f, 0.0f, 103.6213f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_456);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 910);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CC_1_Easy_1", 371, -3106.953f, 45.18233f, 3749.047f, 0.0f, 103.6213f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_456);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 910);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_872(bool bParam0) //Position: 0x2124F / 135759
{
	bool bVar0;
	vector3 vVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (bVar0)
	{
		GET_VOLUME_CENTER(Local_77.f_644, &vVar1);
		STREAMING_UNLOAD_BOUNDS();
		STREAMING_LOAD_BOUNDS(vVar1, 100.0f, 1);
		Function_876();
		Function_874();
	}
	else
	{
		Function_873();
	}
	return;
}

void Function_873() //Position: 0x21289 / 135817
{
	Function_6(&iLocal_1026, 512);
	Function_174(&Local_77 + 444);
	Function_174(&Local_77 + 448);
	Function_174(&Local_77 + 452);
	return;
}

void Function_874() //Position: 0x212B0 / 135856
{
	if (!Function_12(iLocal_1026, 1))
	{
		Function_9(&iLocal_1026, 1);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_875();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 476, 12, 6, bLocal_1083);
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_77.f_476, false, Local_77.f_656, 4294967295);
		Function_685(&Local_77 + 476);
		Function_228(&Local_77 + 476);
		Function_569(Local_77.f_476, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_875() //Position: 0x2131F / 135967
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_476 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Mexican_Army"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_MexArmy_Easy_1", 390, -2408f, 9.074972f, 3946.21f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_476);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 915);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_MexArmy_Easy_2", 389, -2366.494f, 13.40644f, 3944.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_476);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 915);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_MexArmy_Easy_3", 388, -2369.947f, 13.60336f, 3921.947f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_476);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 9150);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_876() //Position: 0x2142B / 136235
{
	if (!Function_12(iLocal_1026, 512))
	{
		Function_9(&iLocal_1026, 512);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_879();
		Function_878();
		Function_877();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 444, 9, 7, bLocal_1082);
		Function_659(&Local_77 + 448, 10, 2, bLocal_1083);
		Function_863(&Local_77 + 452, bLocal_1082);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_444, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_448, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_452, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_77.f_452, 0, Local_77.f_608, 3, 1);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_444, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_448, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_452, 0);
		Function_685(&Local_77 + 444);
		Function_685(&Local_77 + 448);
		Function_685(&Local_77 + 452);
		Function_228(&Local_77 + 444);
		Function_228(&Local_77 + 448);
		Function_228(&Local_77 + 452);
		Function_569(Local_77.f_444, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_448, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_452, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_877() //Position: 0x21565 / 136549
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_452 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_9"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_9_Medium", 374, -2416.0f, 16.8457f, 3825.841f, 0.0f, 82.02174f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_452);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 909);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_9_Easy_1", 371, -2414.64f, 15.81716f, 3830.219f, 0.0f, 82.02174f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_452);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 909);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_878() //Position: 0x2162F / 136751
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_448 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_8"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_8_Medium", 373, -2442.535f, 15.98226f, 3827.221f, 0.0f, 54.39288f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_448);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 908);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_8_Easy_1", 370, -2449.739f, 16.15373f, 3828.457f, 0.0f, 54.39288f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_448);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 908);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_879() //Position: 0x216F9 / 136953
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_444 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_7"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_7_Hard", 376, -2489.485f, 19.77019f, 3810.515f, 0.0f, 139.1033f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_444);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 907);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_7_Medium", 372, -2489.361f, 17.36317f, 3829.378f, 0.0f, 58.83267f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_444);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 907);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_880(bool bParam0) //Position: 0x217C1 / 137153
{
	bool bVar0;
	vector3 vVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (bVar0)
	{
		GET_VOLUME_CENTER(Local_77.f_640, &vVar1);
		STREAMING_UNLOAD_BOUNDS();
		STREAMING_LOAD_BOUNDS(vVar1, 100.0f, 1);
		Function_882();
	}
	else
	{
		Function_881();
	}
	return;
}

void Function_881() //Position: 0x217F8 / 137208
{
	Function_6(&iLocal_1026, 256);
	Function_174(&Local_77 + 432);
	Function_174(&Local_77 + 436);
	Function_174(&Local_77 + 440);
	return;
}

void Function_882() //Position: 0x2181F / 137247
{
	if (!Function_12(iLocal_1026, 256))
	{
		Function_9(&iLocal_1026, 256);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_885();
		Function_884();
		Function_883();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 432, 9, 7, bLocal_1082);
		Function_659(&Local_77 + 436, 10, 2, bLocal_1083);
		Function_863(&Local_77 + 440, bLocal_1082);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_432, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_436, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_440, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_432, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_436, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_440, 0);
		Function_685(&Local_77 + 432);
		Function_685(&Local_77 + 436);
		Function_685(&Local_77 + 440);
		Function_228(&Local_77 + 432);
		Function_228(&Local_77 + 436);
		Function_228(&Local_77 + 440);
		Function_569(Local_77.f_432, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_436, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_440, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_883() //Position: 0x21948 / 137544
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_440 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_6"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_6_Hard", 376, -2582.946f, 24.70179f, 3791.701f, 0.0f, 86.13493f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_440);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 906);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_6_Easy_1", 371, -2598.745f, 23.84007f, 3804f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_440);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 906);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_884() //Position: 0x21A0C / 137740
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_436 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_5"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_5_Medium", 374, -2637.599f, 28.32181f, 3769.59f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_436);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 905);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_5_Easy_1", 370, -2622.758f, 27.19777f, 3777.892f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_436);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 905);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_885() //Position: 0x21ACE / 137934
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_432 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_4"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_4_Hard", 378, -2683.638f, 29.41614f, 3721.028f, 0.0f, 61.83402f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_432);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 904);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_4_Easy_1", 369, -2693.282f, 28.65053f, 3733.665f, 0.0f, 61.83402f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_432);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 904);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_886(bool bParam0) //Position: 0x21B96 / 138134
{
	bool bVar0;
	vector3 vVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (bVar0)
	{
		GET_VOLUME_CENTER(Local_77.f_636, &vVar1);
		STREAMING_UNLOAD_BOUNDS();
		STREAMING_LOAD_BOUNDS(vVar1, 100.0f, 1);
		Function_888();
	}
	else
	{
		Function_887();
	}
	return;
}

void Function_887() //Position: 0x21BCD / 138189
{
	Function_6(&iLocal_1026, 128);
	Function_174(&Local_77 + 420);
	Function_174(&Local_77 + 424);
	Function_174(&Local_77 + 428);
	return;
}

void Function_888() //Position: 0x21BF3 / 138227
{
	if (!Function_12(iLocal_1026, 128))
	{
		Function_9(&iLocal_1026, 128);
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		Function_891();
		Function_890();
		Function_889();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_659(&Local_77 + 420, 9, 7, bLocal_1082);
		Function_659(&Local_77 + 424, 10, 2, bLocal_1083);
		Function_863(&Local_77 + 428, bLocal_1082);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_420, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_424, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_428, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_420, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_424, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_428, 0);
		Function_685(&Local_77 + 420);
		Function_685(&Local_77 + 424);
		Function_685(&Local_77 + 428);
		Function_228(&Local_77 + 420);
		Function_228(&Local_77 + 424);
		Function_228(&Local_77 + 428);
		Function_569(Local_77.f_420, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_424, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_569(Local_77.f_428, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_889() //Position: 0x21D1A / 138522
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_428 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_3_Medium", 374, -2760.535f, 30.10698f, 3735.076f, 0.0f, 75.39959f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_428);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 903);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_3_Easy_1", 371, -2762.411f, 30.63822f, 3720.757f, 0.0f, 125.3278f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_428);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 903);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_890() //Position: 0x21DE4 / 138724
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_424 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_2_Hard", 376, -2802.538f, 27.19226f, 3733.505f, 0.0f, 119.3833f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_424);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 902);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_2_Medium", 373, -2788.405f, 27.95208f, 3741.758f, 0.0f, 101.3169f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_424);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 902);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_891() //Position: 0x21EAC / 138924
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_420 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s03_Cavalry_Division_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_1_Hard", 375, -2817.462f, 23.28604f, 3754.474f, 0.0f, 92.6188f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_420);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 901);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s03_CD_1_Medium", 372, -2825.845f, 24.33623f, 3745.162f, 0.0f, 92.6188f, 0.0f);
	SQUAD_JOIN(bVar0, Local_77.f_420);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 901);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_892(bool bParam0) //Position: 0x21F74 / 139124
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_9(&iLocal_977, 16);
	return;
}

void Function_893(bool bParam0) //Position: 0x21F8B / 139147
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	vLocal_1027 = { StackVal, StackVal, Var0 };
	if (Var0.f_12 == 1)
	{
		Function_9(&iLocal_1026, 2);
	}
	if (Var0.f_12 == 2)
	{
		Function_9(&iLocal_1026, 4);
	}
	if (Var0.f_12 == 3)
	{
		Function_9(&iLocal_1026, 8);
	}
	if (Var0.f_12 == 4)
	{
		Function_9(&iLocal_1026, 16);
	}
	if (Var0.f_12 == 5)
	{
		Function_9(&iLocal_1026, 32);
	}
	iLocal_1057 = 0;
	Function_647(&bLocal_1052, 0.5f);
	return;
}

void Function_894(bool bParam0) //Position: 0x22000 / 139264
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	bLocal_960 = "TUM_CO_obj06";
	Function_9(&iLocal_994, 64);
	return;
}

void Function_895(bool bParam0) //Position: 0x22029 / 139305
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_994, 1))
		{
			Function_897(bVar0);
		}
	}
	Function_896();
	Function_581(0);
	Function_9(&iLocal_994, 1);
	if (bVar0)
	{
		Function_9(&iLocal_994, 2048);
	}
	return;
}

void Function_896() //Position: 0x2206A / 139370
{
	if (Function_284(Global_30658[0]))
	{
		Function_702();
	}
	return;
}

void Function_897(bool bParam0) //Position: 0x2207F / 139391
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_903();
	if (!bParam0)
	{
		Function_902();
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_898(bParam0);
	return;
}

void Function_898(bool bParam0) //Position: 0x220A1 / 139425
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!bParam0)
	{
		bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_BossMan");
		bVar1 = FIND_OBJECT_IN_LAYOUT(Local_77, "m_Stage02_GatlingGun_Mansion");
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_242(&bVar0, 5);
			Function_254(&bVar0, &bVar1);
			ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
		}
	}
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_388, 0);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_77.f_388, 0, Local_77.f_588, 4, 0);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_388, false, Local_77.f_556, 4, 0);
	Function_685(&Local_77 + 388);
	Function_901(Local_77.f_388, 1);
	Function_900(Local_77.f_388, 1);
	Function_899(Local_77.f_388, 100.0f, 360.0f);
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_1");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4074.771f, 35.13676f, 2947.963f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 12, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_2");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4074.531f, 35.394f, 2940.01f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 12, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_3");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4074.4f, 35.33663f, 2944.645f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 12, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_4");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4080.0f, 34.83884f, 2966.111f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 17, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_5");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4088.801f, 35.01467f, 2967.748f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 17, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_6");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4055.908f, 30.97161f, 2956.093f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 17, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_7");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4060.59f, 31.10226f, 2965.095f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 10, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_8");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4063.552f, 31.55387f, 2969.799f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 10, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_9");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
		}
		else
		{
			Function_251(bVar2, -4065.956f, 31.98018f, 2953.346f, 10.0f, 0, -1.0f);
		}
		Function_234(&bVar2, 10, 5, bLocal_1079);
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_10");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			SQUAD_LEAVE(bVar2);
			DESTROY_ACTOR(bVar2);
		}
		else
		{
			Function_251(bVar2, -4065.747f, 31.84446f, 2957.234f, 10.0f, 0, -1.0f);
			Function_249(&bVar2, 24, bLocal_1079);
		}
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_11");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			SQUAD_LEAVE(bVar2);
			DESTROY_ACTOR(bVar2);
		}
		else
		{
			Function_251(bVar2, -4078.846f, 32.98218f, 2985.153f, 10.0f, 0, -1.0f);
			Function_249(&bVar2, 24, bLocal_1079);
		}
	}
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_12");
	if (IS_ACTOR_VALID(bVar2))
	{
		if (bParam0)
		{
			SQUAD_LEAVE(bVar2);
			DESTROY_ACTOR(bVar2);
		}
		else
		{
			Function_251(bVar2, -4057.28f, 31.01956f, 2960f, 10.0f, 0, -1.0f);
			Function_249(&bVar2, 24, bLocal_1079);
		}
	}
	Function_569(Local_77.f_388, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_899(bool bParam0, float fParam1, float fParam2) //Position: 0x22609 / 140809
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (fParam1 <= 0.0f)
			{
				SET_ACTOR_VISION_MAX_RANGE(bVar1, fParam1, 1);
			}
			if (fParam2 <= 0.0f)
			{
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, fParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_900(bool bParam0, int iParam1) //Position: 0x22664 / 140900
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_VISION_XRAY(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_901(bool bParam0, bool bParam1) //Position: 0x226AD / 140973
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (bParam1)
			{
				AI_ENABLE_PERCEPTION(bVar1);
			}
			else
			{
				AI_DISABLE_PERCEPTION(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_902() //Position: 0x226F6 / 141046
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_360 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_Bossset", 0);
	Local_77.f_364 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_Boss"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_BossMan", 492, -4093.221f, 37.22854f, 2935.948f, 0.0f, -116.0992f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_360, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_364);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 105);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_903() //Position: 0x22786 / 141190
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_384 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_MansionDefenseset", 0);
	Local_77.f_388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_MansionDefense"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_1", 486, -4087.337f, 37.30045f, 2940.892f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 401);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_2", 490, -4086.614f, 37.30045f, 2939.829f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 402);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_3", 493, -4087.704f, 37.30045f, 2941.432f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 403);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_4", 493, -4086.216f, 37.30045f, 2939.242f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 404);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_5", 492, -4087.461f, 37.30045f, 2940.01f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 405);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_6", 492, -4087.88f, 37.30045f, 2939.726f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 406);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_7", 491, -4087.804f, 37.30045f, 2940.591f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 407);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_8", 490, -4087.111f, 37.30045f, 2939.427f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 408);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_9", 489, -4086.539f, 37.30045f, 2940.637f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 409);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_10", 488, -4086.096f, 37.30045f, 2940.938f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 410);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_11", 487, -4086.9f, 37.30045f, 2941.174f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 411);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_MansionDefense_12", 486, -4086.139f, 37.30045f, 2940.079f, 0.0f, 235.8082f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_384, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_388);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 412);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_904(bool bParam0) //Position: 0x22C20 / 142368
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_994, 4))
		{
			Function_906();
		}
	}
	Function_905();
	Function_9(&iLocal_994, 4);
	return;
}

void Function_905() //Position: 0x22C4D / 142413
{
	if (Function_284(Global_30658[0]))
	{
		Function_700();
	}
	return;
}

void Function_906() //Position: 0x22C62 / 142434
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_908();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_907();
	return;
}

void Function_907() //Position: 0x22C79 / 142457
{
	Function_737(&Local_77 + 412);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_412, 0, 0, 4294967295);
	TASK_GO_NEAR_ACTORSET(false, Function_246(), 25.0f, 4);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_412, 0);
	Function_685(&Local_77 + 412);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_412, false, Local_77.f_564, 4, 1);
	Function_569(Local_77.f_412, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_908() //Position: 0x22CDE / 142558
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_408 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_SaloonDefenseset", 0);
	Local_77.f_412 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_SaloonDefense"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SaloonDefense_1", 493, -3977.817f, 28.45123f, 2912.403f, 0.0f, 78.86258f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_408, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_412);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 701);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SaloonDefense_2", 492, -3978.174f, 28.45123f, 2914.22f, 0.0f, 78.86258f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_408, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_412);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 702);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SaloonDefense_3", 492, -3977.166f, 28.45123f, 2913.393f, 0.0f, 78.86258f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_408, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_412);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 703);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SaloonDefense_4", 489, -3978.832f, 28.45123f, 2913.065f, 0.0f, 78.86258f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_408, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_412);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 704);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_SaloonDefense_5", 487, -3977.061f, 28.45123f, 2912.633f, 0.0f, 78.86258f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_408, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_412);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 705);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_909(bool bParam0) //Position: 0x22EF1 / 143089
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_994, 8))
		{
			Function_911();
		}
	}
	Function_910();
	Function_9(&iLocal_994, 8);
	return;
}

void Function_910() //Position: 0x22F20 / 143136
{
	if (Function_284(Global_30658[0]))
	{
		Function_701();
	}
	return;
}

void Function_911() //Position: 0x22F35 / 143157
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_913();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_912();
	return;
}

void Function_912() //Position: 0x22F4C / 143180
{
	Function_737(&Local_77 + 404);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_404, 0, 0, 4294967295);
	TASK_GO_NEAR_ACTORSET(false, Function_246(), 25.0f, 4);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_404, 0);
	Function_685(&Local_77 + 404);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_404, false, Local_77.f_564, 4, 1);
	Function_569(Local_77.f_404, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_913() //Position: 0x22FB1 / 143281
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_400 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_ChurchDefenseset", 0);
	Local_77.f_404 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_ChurchDefense"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_ChurchDefense_1", 486, -3897.48f, 31.82174f, 2918.258f, 0.0f, 165.4797f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_400, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_404);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 601);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_ChurchDefense_2", 493, -3897.644f, 31.82174f, 2918.888f, 0.0f, 165.4797f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_400, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_404);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 602);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_ChurchDefense_3", 491, -3897.868f, 31.82174f, 2919.757f, 0.0f, 165.4797f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_400, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_404);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 603);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_ChurchDefense_4", 489, -3898.091f, 31.82174f, 2920.618f, 0.0f, 165.4797f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_400, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_404);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 604);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_ChurchDefense_5", 488, -3897.217f, 31.82174f, 2917.243f, 0.0f, 165.4797f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_400, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_404);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 605);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_914(bool bParam0) //Position: 0x231C4 / 143812
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_12(iLocal_994, 2))
		{
			Function_916();
		}
	}
	Function_915();
	Function_9(&iLocal_994, 2);
	return;
}

void Function_915() //Position: 0x231F1 / 143857
{
	if (Function_284(Global_30658[0]))
	{
		Function_698();
	}
	return;
}

void Function_916() //Position: 0x23206 / 143878
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_918();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_917();
	return;
}

void Function_917() //Position: 0x2321D / 143901
{
	Function_737(&Local_77 + 396);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_396, 0, 0, 4294967295);
	TASK_GO_NEAR_ACTORSET(false, Function_246(), 25.0f, 4);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_396, 0);
	Function_685(&Local_77 + 396);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_396, false, Local_77.f_564, 4, 1);
	Function_569(Local_77.f_396, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_918() //Position: 0x23282 / 144002
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_77.f_392 = CREATE_ACTORSET_IN_LAYOUT(Local_77, "s02_HouseDefenseset", 0);
	Local_77.f_396 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_77, "s02_HouseDefense"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_HouseDefense_1", 486, -3978.126f, 29.25916f, 2968.48f, 0.0f, 15.39184f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_392, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_396);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 501);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_HouseDefense_2", 491, -3977.434f, 29.25916f, 2968.29f, 0.0f, 15.39184f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_392, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_396);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 502);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_77, "s02_HouseDefense_3", 488, -3977.631f, 29.25916f, 2967.48f, 0.0f, 15.39184f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_77.f_392, bVar0);
	SQUAD_JOIN(bVar0, Local_77.f_396);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 503);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_919(bool bParam0) //Position: 0x233DC / 144348
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_994, 32))
	{
		Function_9(&iLocal_994, 32);
		Function_920();
	}
	return;
}

void Function_920() //Position: 0x23402 / 144386
{
	Function_569(Local_77.f_372, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_380, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_324, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_332, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_340, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_348, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_569(Local_77.f_356, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOALS_CLEAR(Local_77.f_372);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_372, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_372, 0);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_372, false, Local_77.f_564, 4, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_372, 0, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_685(&Local_77 + 372);
	Function_899(Local_77.f_372, 120.0f, -1.0f);
	SQUAD_GOALS_CLEAR(Local_77.f_380);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_380, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_77.f_380, 0);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_77.f_372, false, Local_77.f_564, 4, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_380, 0, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	Function_685(&Local_77 + 380);
	Function_899(Local_77.f_380, 120.0f, -1.0f);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_324, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_332, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_340, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_348, 0, 4294967295, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_77.f_356, 0, 4294967295, 0);
	Function_685(&Local_77 + 324);
	Function_685(&Local_77 + 332);
	Function_685(&Local_77 + 340);
	Function_685(&Local_77 + 348);
	Function_685(&Local_77 + 356);
	Function_899(Local_77.f_324, 120.0f, -1.0f);
	Function_899(Local_77.f_332, 120.0f, -1.0f);
	Function_899(Local_77.f_340, 120.0f, -1.0f);
	Function_899(Local_77.f_348, 120.0f, -1.0f);
	Function_899(Local_77.f_356, 120.0f, -1.0f);
	return;
}

void Function_921(bool bParam0) //Position: 0x2361B / 144923
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_9(&iLocal_994, 16);
	return;
}

void Function_922(bool bParam0) //Position: 0x23632 / 144946
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_977, 1024))
	{
		UNK_0x2148AC15(322, 4);
		UNK_0x444C3C32(0, 4, 0);
		Function_9(&iLocal_977, 1024);
		Function_923();
		Function_647(&bLocal_964, 0.5f);
		Function_661(&bLocal_545, Local_77.f_504);
	}
	return;
}

void Function_923() //Position: 0x2367D / 145021
{
	Function_783(486, 988, 80, 90, "CONST_S01_Scout01", "CONST_S01_ScoutHorse01", -4021.375f, 7.788953f, 3334.384f, 0.0f, 182.3002f, 0.0f);
	return;
}

void Function_924(bool bParam0) //Position: 0x236D2 / 145106
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_977, 32))
	{
		Function_199(0);
		Function_9(&iLocal_977, 32);
	}
	return;
}

void Function_925(bool bParam0) //Position: 0x236F9 / 145145
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (!Function_12(iLocal_977, 1))
	{
		bLocal_960 = "TUM_CO_obj02";
		Function_602(bLocal_960, 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_9(&iLocal_977, 1);
		Function_926();
	}
	return;
}

void Function_926() //Position: 0x23740 / 145216
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_927(bLocal_968, -4304.502f, 4.794f, 3725.762f);
	Function_927(bLocal_969, -4310.8f, 5.008f, 3729.407f);
	Function_927(bLocal_970, -4294.748f, 4.143f, 3721.377f);
	Function_927(bLocal_971, -4299.732f, 4.512f, 3723.385f);
	NET_OBJECT_SET_REPLICATION_MODE(bLocal_948, 6);
	NET_OBJECT_SET_REPLICATION_MODE(bLocal_953, 6);
	Function_589(Local_77.f_308);
	SQUAD_GOALS_CLEAR(Local_77.f_308);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_77, "MexArmy_Boss");
	bVar1 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_1");
	bVar2 = FIND_ACTOR_IN_LAYOUT(Local_77, "nMexArmy_2");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_CLEAR(bVar0);
		TASK_GO_NEAR_ACTORSET(bVar0, Function_246(), 25.0f, 4);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		TASK_CLEAR(bVar1);
		TASK_GO_NEAR_ACTORSET(bVar1, Function_246(), 25.0f, 4);
	}
	if (IS_ACTOR_VALID(bVar2))
	{
		TASK_CLEAR(bVar2);
		TASK_GO_NEAR_ACTORSET(bVar2, Function_246(), 25.0f, 4);
	}
	Function_589(Local_77.f_312);
	SQUAD_GOALS_CLEAR(Local_77.f_312);
	Function_589(Local_77.f_316);
	SQUAD_GOALS_CLEAR(Local_77.f_316);
	if (SQUAD_IS_VALID(Local_77.f_312))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_312, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &Local_77 + 892, -1.0f);
	}
	if (SQUAD_IS_VALID(Local_77.f_316))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_77.f_316, 0, 0, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &Local_77 + 916, -1.0f);
	}
	Function_568(Local_77.f_308, Function_41(), 1);
	Function_568(Local_77.f_312, Function_41(), 1);
	Function_568(Local_77.f_316, Function_41(), 1);
	if (IS_ACTOR_VALID(bLocal_972))
	{
		bVar3 = false;
		bVar3 = false;
		while (bVar3 < 3)
		{
			bVar4 = GET_SLOT_ACTOR(bVar3);
			if (IS_ACTOR_VALID(bVar4))
			{
				MEMORY_REPORT_POSITION_AUTO(bLocal_972, bVar4, 1);
				MEMORY_CONSIDER_AS_ENEMY(bLocal_972, bVar4);
				MEMORY_IDENTIFY(bLocal_972, bVar4);
			}
			bVar3++;
		}
		SET_ACTOR_VISION_MAX_RANGE(bLocal_972, 100.0f, 1);
		MEMORY_ATTACK_ON_SIGHT(bLocal_972, 1);
		SET_ACTOR_VISION_XRAY(bLocal_972, 1);
		ADD_BLIP_FOR_ACTOR(bLocal_972, 322, 0, 2, 0);
	}
	return;
}

void Function_927(bool bParam0, vector3 vParam1) //Position: 0x2394C / 145740
{
	if (IS_ACTOR_VALID(bParam0))
	{
		TASK_CLEAR(bParam0);
		Function_928(StackVal, StackVal, &bParam0, vParam1);
		MEMORY_REPORT_POSITION_AUTO(bParam0, Function_41(), 1);
		MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
		MEMORY_CONSIDER_AS_ENEMY(bParam0, Function_41());
		MEMORY_IDENTIFY(bParam0, Function_41());
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
}

int Function_928(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x23996 / 145814
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		bVar0 = FIND_NEAREST_COVER_LOCATION(&uParam1, 5.0f, GET_HEADING(*uParam0), 120.0f, 7);
		if (IS_ACTOR_INSIDE_VEHICLE(*uParam0) || IS_ACTOR_DRIVING_VEHICLE(*uParam0))
		{
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_LEAVE(false);
			if (!IS_COVER_LOCATION_VALID(bVar0))
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(*uParam0, &uParam1, -118.498f, -1.0f);
				TASK_PRIORITY_SET(*uParam0, 0);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(*uParam0, bVar0, -1.0f, 1086324736);
				TASK_PRIORITY_SET(*uParam0, 0);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(*uParam0, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
		else if (!IS_COVER_LOCATION_VALID(bVar0))
		{
			TASK_SHOOT_ENEMIES_FROM_POSITION(*uParam0, &uParam1, -118.498f, -1.0f);
			TASK_PRIORITY_SET(*uParam0, 0);
		}
		else
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(*uParam0, bVar0, -1.0f, 1086324736);
			TASK_PRIORITY_SET(*uParam0, 0);
		}
		return 1;
	}
	return 0;
	return 0;
}

void Function_929(bool bParam0) //Position: 0x23A60 / 146016
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			Function_940();
			ENABLE_USE_CONTEXTS(1);
			Function_67();
			Function_14();
			Local_504 = 1000;
			iLocal_496 = 0;
			iLocal_495 = 0;
			break;
		
		case 0x00000001:
			ENABLE_USE_CONTEXTS(1);
			Function_939();
			Function_67();
			Function_14();
			Local_504 = 1000;
			iLocal_496 = 0;
			iLocal_495 = 1;
			break;
		
		case 0x00000002:
			ENABLE_USE_CONTEXTS(1);
			Function_931();
			Function_67();
			Function_14();
			Local_504 = 1000;
			iLocal_496 = 0;
			iLocal_495 = 2;
			break;
		
		case 0x00000065:
			Function_930();
			Function_67();
			Function_14();
			Local_504 = 1000;
			iLocal_496 = 0;
			iLocal_495 = 101;
			break;
	}
	return;
}

void Function_930() //Position: 0x23B03 / 146179
{
	return;
}

void Function_931() //Position: 0x23B09 / 146185
{
	Function_168(1, 0);
	Function_932();
	return;
}

void Function_932() //Position: 0x23B17 / 146199
{
	GIVE_WEAPON_TO_ACTOR(Function_41(), 2, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(Function_41(), 13, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(Function_41(), 18, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(Function_41(), 24, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(Function_41(), 23, 0.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(Function_41(), 6, 64.0f, 1, 0);
	_ADD_AMMO_OF_TYPE(Function_41(), 9, 40.0f, 1, 0);
	_ADD_AMMO_OF_TYPE(Function_41(), 10, 40.0f, 1, 0);
	_ADD_AMMO_OF_TYPE(Function_41(), 5, 10.0f, 1, 0);
	_ADD_AMMO_OF_TYPE(Function_41(), 4, 10.0f, 1, 0);
	Function_934(&Global_83591, 1, 6, 7, 1);
	Function_934(&Global_83591, 2, 2, 8, 1);
	Function_934(&Global_83591, 3, 9, 6, 1);
	Function_934(&Global_83591, 4, 13, 8, 1);
	Function_934(&Global_83591, 5, 18, 8, 1);
	Function_934(&Global_83591, 6, 24, 10, 0);
	Function_934(&Global_83591, 7, 23, 10, 0);
	Function_934(&Global_83591, 8, 22, 1, 1);
	Function_933(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_545, *(&Global_83591 + 276));
	return;
}

void Function_933(bool bParam0, struct<57> Param1) //Position: 0x23C0A / 146442
{
	*(bParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_934(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x23C1E / 146462
{
	Function_935(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_935(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23C36 / 146486
{
	Function_936(iParam0, iParam1, bParam2, iParam3, bParam4);
}

void Function_936(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23C4B / 146507
{
	if (!Function_938(iParam1))
	{
		return;
	}
	Function_937(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_937(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x23C6E / 146542
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

bool Function_938(bool bParam0) //Position: 0x23C98 / 146584
{
	return (bParam0 <= 0 && bParam0 > 27);
}

void Function_939() //Position: 0x23CA8 / 146600
{
	Function_184(0);
	return;
}

void Function_940() //Position: 0x23CB2 / 146610
{
	Function_192(0);
	return;
}

void Function_941(bool bParam0) //Position: 0x23CBC / 146620
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_382(&bLocal_545);
	return;
}

void Function_942(bool bParam0) //Position: 0x23CD1 / 146641
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	iLocal_495 = iVar0;
	return;
}

void Function_943(bool bParam0) //Position: 0x23CE5 / 146661
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	Function_522(iVar0);
	return;
}

void Function_944(int iParam0) //Position: 0x23CF9 / 146681
{
	switch (iParam0)
	{
		case 0x00000001:
			iLocal_1075 = 1;
			iLocal_1076 = 1;
			iLocal_1077 = 1;
			iLocal_1078 = 1;
			bLocal_1079 = 2;
			bLocal_1080 = true;
			iLocal_1081 = 1;
			bLocal_1082 = true;
			bLocal_1083 = true;
			bLocal_1084 = true;
			break;
		
		case 0x00000002:
			iLocal_1075 = 2;
			iLocal_1076 = 2;
			iLocal_1077 = 2;
			iLocal_1078 = 2;
			bLocal_1079 = 3;
			bLocal_1080 = 2;
			iLocal_1081 = 1;
			bLocal_1082 = true;
			bLocal_1083 = 2;
			bLocal_1084 = 2;
			break;
		
		case 0x00000003:
			iLocal_1075 = 3;
			iLocal_1076 = 3;
			iLocal_1077 = 2;
			iLocal_1078 = 3;
			bLocal_1079 = 4;
			bLocal_1080 = 2;
			iLocal_1081 = 2;
			bLocal_1082 = 2;
			bLocal_1083 = 3;
			bLocal_1084 = 3;
			break;
		
		case 0x00000004:
			iLocal_1075 = 3;
			iLocal_1076 = 4;
			iLocal_1077 = 3;
			iLocal_1078 = 4;
			bLocal_1079 = 4;
			bLocal_1080 = 3;
			iLocal_1081 = 2;
			bLocal_1082 = true;
			bLocal_1083 = true;
			bLocal_1084 = true;
			break;
		
		case 0x00000005:
			iLocal_1075 = 4;
			iLocal_1076 = 5;
			iLocal_1077 = 4;
			iLocal_1078 = 4;
			bLocal_1079 = 5;
			bLocal_1080 = 4;
			iLocal_1081 = 3;
			bLocal_1082 = 4;
			bLocal_1083 = 4;
			bLocal_1084 = 5;
			break;
	}
	return;
}

int Function_945(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x23DFB / 146939
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_972()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_971()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_971(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_970(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_332(bVar14);
				vVar7 = { StackVal, StackVal, Function_332(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_353(bVar14);
				vVar10 = { StackVal, StackVal, Function_353(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_968(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_967());
							if (Function_938(bVar5))
							{
								if (Function_299((*iParam1 + 228)[bVar52]))
								{
									Function_950(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_947(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_950(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_946(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_950(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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
		bVar6 = (bVar6 + 1);
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

var Function_946() //Position: 0x24030 / 147504
{
	return "XPBonus";
}

void Function_947(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x24040 / 147520
{
	bool bVar0;
	
	if (Function_299(Param1))
	{
		bVar0 = Function_949(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_948(), bVar0);
	}
}

var Function_948() //Position: 0x24066 / 147558
{
	return "PackedWeapon";
}

var Function_949(struct<5> Param0) //Position: 0x2407B / 147579
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_296())) || SHIFT_LEFT(bParam2, Function_296() + 8));
}

void Function_950(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x24099 / 147609
{
	Function_959(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_955(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_954(), Function_953(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_952(), Function_951(iParam13, iParam14));
}

var Function_951(var uParam0, bool bParam1) //Position: 0x240EA / 147690
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_952() //Position: 0x240FA / 147706
{
	return "PackedGrass";
}

var Function_953(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2410E / 147726
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

var Function_954() //Position: 0x24133 / 147763
{
	return "PackedMetadata";
}

void Function_955(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x2414A / 147786
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_948(), &uVar5))
				{
					Function_294(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_958();
				vVar0 = { StackVal, StackVal, Function_958() };
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
				Function_957();
				vVar0 = { StackVal, StackVal, Function_957() };
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
				Function_956();
				vVar0 = { StackVal, StackVal, Function_956() };
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

vector3 Function_956() //Position: 0x24275 / 148085
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_957() //Position: 0x24286 / 148102
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_958() //Position: 0x24297 / 148119
{
	return 0.0f, 0.158f, -0.163f;
}

int Function_959(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x242A8 / 148136
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_966();
			Function_957();
			vVar1 = { StackVal, StackVal, Function_957() };
			break;
		
		case 0x00000001:
			bVar0 = Function_965();
			Function_958();
			vVar1 = { StackVal, StackVal, Function_958() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_964();
			Function_956();
			vVar1 = { StackVal, StackVal, Function_956() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_963(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_961(Function_963()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_960(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_960() //Position: 0x243AC / 148396
{
	return "MPItemGiver";
}

struct<32> Function_961(bool bParam0) //Position: 0x243C0 / 148416
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_962("0", &cVar8, ""), 4);
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

struct<32> Function_962(char* cParam0, char* cParam1, char* cParam2) //Position: 0x2442A / 148522
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_963() //Position: 0x24449 / 148553
{
	return "PBox_";
}

var Function_964() //Position: 0x24457 / 148567
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_965() //Position: 0x2447D / 148605
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_966() //Position: 0x244A5 / 148645
{
	return "p_gen_crateMultiplayerAmmo01x";
}

var Function_967() //Position: 0x244CB / 148683
{
	return "ID";
}

bool Function_968(bool bParam0, int iParam1) //Position: 0x244D6 / 148694
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_12((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_969())
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

bool Function_969() //Position: 0x2452B / 148779
{
	return Function_45(Global_79962, 1024);
}

var Function_970() //Position: 0x2453B / 148795
{
	return "Type";
}

var Function_971() //Position: 0x24548 / 148808
{
	return "PickupsSet";
}

var Function_972() //Position: 0x2455B / 148827
{
	return "PickupFlagsSet";
}

bool Function_973() //Position: 0x24572 / 148850
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_979())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_974(&bLocal_653))
		{
			return 0;
		}
		if (IS_ACTOR_VALID(Function_41()))
		{
			if (!Function_489(Function_41(), 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool Function_974(bool bParam0) //Position: 0x245B4 / 148916
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_978();
	iVar1 = 0;
	if (!Function_160(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_977(bParam0[iVar03], 8);
		}
		else if (Function_976())
		{
			iVar1 = 1;
			Function_977(bParam0[iVar03], 8);
		}
		Function_977(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_160(bParam0[iVar03], 4))
		{
			if (!Function_160(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_160(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_160(bParam0[03], 8) || iVar1));
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
				Function_977(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_160(bParam0[iVar03], 4))
		{
			if (!Function_160(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_977(bParam0[iVar03], 2);
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
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_977(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_977(bParam0[iVar03], 2);
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
	Function_975();
	return 1;
}

void Function_975() //Position: 0x2492F / 149807
{
	if (!Function_513(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_976() //Position: 0x2496F / 149871
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

void Function_977(var uParam0, int iParam1) //Position: 0x2499A / 149914
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_978() //Position: 0x249AB / 149931
{
	if (!Function_513(128))
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

bool Function_979() //Position: 0x249ED / 149997
{
	Function_980(&Local_77 + 4, 391, 2, 0);
	Function_980(&Local_77 + 4, 380, 2, 0);
	Function_980(&Local_77 + 4, 382, 2, 0);
	Function_980(&Local_77 + 4, 381, 2, 0);
	Function_980(&Local_77 + 4, 379, 2, 0);
	Function_980(&Local_77 + 4, 489, 2, 0);
	Function_980(&Local_77 + 4, 488, 2, 0);
	Function_980(&Local_77 + 4, 487, 2, 0);
	Function_980(&Local_77 + 4, 486, 2, 0);
	Function_980(&Local_77 + 4, 492, 2, 0);
	Function_980(&Local_77 + 4, 491, 2, 0);
	Function_980(&Local_77 + 4, 493, 2, 0);
	Function_980(&Local_77 + 4, 490, 2, 0);
	Function_980(&Local_77 + 4, 369, 2, 0);
	Function_980(&Local_77 + 4, 370, 2, 0);
	Function_980(&Local_77 + 4, 371, 2, 0);
	Function_980(&Local_77 + 4, 372, 2, 0);
	Function_980(&Local_77 + 4, 373, 2, 0);
	Function_980(&Local_77 + 4, 374, 2, 0);
	Function_980(&Local_77 + 4, 375, 2, 0);
	Function_980(&Local_77 + 4, 376, 2, 0);
	Function_980(&Local_77 + 4, 378, 2, 0);
	Function_980(&Local_77 + 4, 390, 2, 0);
	Function_980(&Local_77 + 4, 389, 2, 0);
	Function_980(&Local_77 + 4, 388, 2, 0);
	if (Function_974(&Local_77 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_980(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24B45 / 150341
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
			Function_977(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_977(uParam0[iVar03], 8);
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

void Function_981(int iParam0) //Position: 0x24C15 / 150549
{
	int iVar0;
	var uVar1;
	struct<57> Var2;
	
	Function_1022();
	Function_1020();
	iVar0 = (Function_153(8) - 1);
	Function_1013(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_1012(&Global_78578 + 96);
		Function_398(&Global_78578 + 96);
	}
	Function_996(iParam0, 1, 1, 0, 0);
	Function_995(iParam0, 31);
	Function_27(iParam0, 0);
	Function_993(iParam0, 152336);
	Function_992(iParam0, 0);
	Function_364(1, Global_83591);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_371()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_986(iVar0, &uVar1) };
	Function_933(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var2);
	*(&Global_83591 + 276) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_984(1);
	if (Function_983("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.25f);
	Function_982(3, NET_GET_SESSION_GAMER_COUNT());
	Function_2(0);
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_13();
	return;
}

void Function_982(int iParam0, int iParam1) //Position: 0x24D06 / 150790
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_983(bool bParam0) //Position: 0x24D27 / 150823
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_984(bool bParam0) //Position: 0x24D46 / 150854
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 150936);
	return;
}

void Function_985(bool bParam0) //Position: 0x24D98 / 150936
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_23(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, true, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_24(&iVar7);
	if (Function_503(&Var2))
	{
	}
	bVar8 = Function_494(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_502(&Var2, 1);
	Function_16(&Var2);
	return;
}

struct<228> Function_986(int iParam0, int iParam1) //Position: 0x24E9B / 151195
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_989(&Var0);
	Function_936(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 9, 10, 1);
				Function_936(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 11, 6, 1);
				Function_936(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 17, 10, 1);
				Function_936(&Var0, 2, 5, 6, 1);
				Function_936(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 18, 10, 1);
				Function_936(&Var0, 2, 5, 8, 1);
				Function_936(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 19, 20, 0);
				Function_936(&Var0, 2, 4, 8, 1);
				Function_936(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 20, 20, 0);
				Function_936(&Var0, 2, 4, 10, 1);
				Function_936(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 6, 10, 1);
				Function_936(&Var0, 2, 8, 8, 1);
				Function_936(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_988(iParam0, &Var0, iParam1))
			{
				Function_936(&Var0, 1, 2, 10, 1);
				Function_936(&Var0, 2, 8, 9, 1);
				Function_936(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_987(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_987(int iParam0, int iParam1) //Position: 0x25080 / 151680
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
	Function_936(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_301(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_300(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_936(StackVal, iParam0, *iParam1, iVar19, 1);
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
				Function_294(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_301(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_936(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_988(int iParam0, var uParam1, int iParam2) //Position: 0x251BD / 151997
{
	if (Function_45(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_936(uParam1, 1, 10, 5, 1);
				Function_936(uParam1, 2, 7, 4, 1);
				Function_936(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_936(uParam1, 1, 17, 6, 1);
				Function_936(uParam1, 2, 6, 4, 1);
				Function_936(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_936(uParam1, 1, 13, 8, 1);
				Function_936(uParam1, 2, 16, 9, 1);
				Function_936(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_936(uParam1, 1, 3, 6, 1);
				Function_936(uParam1, 2, 15, 12, 1);
				Function_936(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_989(int iParam0) //Position: 0x2529D / 152221
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_991(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_990(iParam0, 0.0f);
	return;
}

void Function_990(var uParam0, int iParam1) //Position: 0x252CA / 152266
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_991(int iParam0) //Position: 0x252D6 / 152278
{
	Function_937(iParam0, 4294967295, 0, 1);
	return;
}

void Function_992(int iParam0, bool bParam1) //Position: 0x252E4 / 152292
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

void Function_993(var uParam0, int iParam1) //Position: 0x25304 / 152324
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_994() //Position: 0x25310 / 152336
{
	int iVar0;
	
	Function_363(1, 4294967295);
	iVar0 = Function_153(1);
	Function_46(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_934, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", false, false, false, false);
	}
	else
	{
		Function_365("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_27(&bLocal_545, 1);
		NET_LOG(bLocal_934, "Local State", "Player has lost all their lives.  Disabling Respawning.", false, false, false, false);
	}
	return;
}

void Function_995(var uParam0, int iParam1) //Position: 0x253F7 / 152567
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_996(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x25403 / 152579
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
	Function_933(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_308(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_995(iParam0, 2);
	Function_1009(iParam0);
	Function_169(iParam0);
	Function_1007(iParam0);
	Function_1006(iParam0);
	Function_1003(iParam0);
	Function_1001(iParam0);
	Function_998(iParam0);
	if (bParam2)
	{
		Function_10(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_10(iParam0 + 44, 8);
		Function_302(iParam0 + 192);
	}
	Function_997(iParam0, bParam4);
	Function_46(8388608, 0);
}

void Function_997(int iParam0, bool bParam1) //Position: 0x254CB / 152779
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

void Function_998(int iParam0) //Position: 0x254EB / 152811
{
	Function_999(iParam0, 152838);
	return;
}

void Function_999(var uParam0, var uParam1) //Position: 0x254FA / 152826
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_1000() //Position: 0x25506 / 152838
{
	return 0;
}

void Function_1001(var uParam0) //Position: 0x2550D / 152845
{
	Function_399(uParam0, 152860);
	return;
}

int Function_1002() //Position: 0x2551C / 152860
{
	return 1;
}

void Function_1003(int iParam0) //Position: 0x25523 / 152867
{
	Function_1004(iParam0, 152894);
	return;
}

void Function_1004(var uParam0, var uParam1) //Position: 0x25532 / 152882
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_1005() //Position: 0x2553E / 152894
{
	return;
}

void Function_1006(int iParam0) //Position: 0x25544 / 152900
{
	Function_993(iParam0, 152894);
	return;
}

void Function_1007(int iParam0) //Position: 0x25553 / 152915
{
	Function_1008(iParam0, 152894);
	return;
}

void Function_1008(var uParam0, int iParam1) //Position: 0x25562 / 152930
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_1009(int iParam0) //Position: 0x2556E / 152942
{
	Function_1010(iParam0, 152969);
	return;
}

void Function_1010(var uParam0, int iParam1) //Position: 0x2557D / 152957
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_1011(var uParam0) //Position: 0x25589 / 152969
{
	uParam0 = uParam0;
	return;
}

void Function_1012(int iParam0) //Position: 0x25593 / 152979
{
	Function_648(iParam0, 0.0f);
	return;
}

void Function_1013(int iParam0) //Position: 0x2559F / 152991
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
			Function_373(12288);
			Function_37(16384);
			break;
		
		case 0x00000002:
			Function_373(20480);
			Function_37(8192);
			break;
		
		default:
			Function_37(28672);
			break;
	}
	Function_37(2048);
	Function_1014(0, 0);
	Function_328();
	return;
}

void Function_1014(bool bParam0, bool bParam1) //Position: 0x25663 / 153187
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_1019(&Global_78480);
	Function_1018(&Global_78480);
	uVar0 = Function_150(37);
	Function_1016();
	if (!bParam0)
	{
		Function_151(37, uVar0);
	}
	Function_46(18264, 0);
	Function_1015();
	return;
}

void Function_1015() //Position: 0x256AF / 153263
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_1016() //Position: 0x256CE / 153294
{
	Function_1017(&Global_78480 + 220);
	return;
}

void Function_1017(int iParam0) //Position: 0x256DD / 153309
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

void Function_1018(int iParam0) //Position: 0x256FE / 153342
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

void Function_1019(int iParam0) //Position: 0x25722 / 153378
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

void Function_1020() //Position: 0x25746 / 153414
{
	Local_1069 = 0;
	Local_1069.f_16 = "";
	Function_1021(&Local_1069 + 4);
	return;
}

void Function_1021(var uParam0) //Position: 0x25760 / 153440
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_1022() //Position: 0x25774 / 153460
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_1023() //Position: 0x25788 / 153480
{
	Function_1024(&Local_763);
	Function_1024(&(Local_773[GET_LOCAL_SLOT()10]));
	return;
}

void Function_1024(var uParam0) //Position: 0x2579F / 153503
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_16 = 0;
	uParam0->f_20 = 0;
	uParam0->f_24 = 0;
	uParam0->f_28 = 0;
	uParam0->f_32 = 0;
	uParam0->f_36 = 0;
	return;
}

void Function_1025() //Position: 0x257D6 / 153558
{
	return;
}

void Function_1026() //Position: 0x257DC / 153564
{
	Function_980(&bLocal_653, 1182, 2, 0);
	Function_980(&bLocal_653, 1177, 2, 0);
	Function_980(&bLocal_653, 1166, 2, 0);
	Function_980(&bLocal_653, 1167, 2, 0);
	Function_980(&bLocal_653, 1157, 2, 0);
	Function_980(&bLocal_653, 1162, 2, 0);
	Function_980(&bLocal_653, 988, 2, 0);
	Function_980(&bLocal_653, 987, 2, 0);
	Function_980(&bLocal_653, 986, 2, 0);
	Function_980(&bLocal_653, 985, 2, 0);
	Function_980(&bLocal_653, 372, 2, 0);
	Function_980(&bLocal_653, 373, 2, 0);
	Function_980(&bLocal_653, 375, 2, 0);
	Function_980(&bLocal_653, 376, 2, 0);
	Function_980(&bLocal_653, 378, 2, 0);
	Function_980(&bLocal_653, 486, 2, 0);
	Function_980(&bLocal_653, 487, 2, 0);
	Function_980(&bLocal_653, 488, 2, 0);
	Function_980(&bLocal_653, 489, 2, 0);
	Function_980(&bLocal_653, 490, 2, 0);
	Function_980(&bLocal_653, 491, 2, 0);
	Function_980(&bLocal_653, 492, 2, 0);
	Function_980(&bLocal_653, 493, 2, 0);
	Function_1028(&bLocal_653, "p_gen_gatlingGun01x", 0, 0);
	Function_1028(&bLocal_653, "p_gen_cannon02x", 0, 0);
	Function_1028(&bLocal_653, "p_gen_crateWeapons03x", 0, 0);
	Function_1028(&bLocal_653, "cannon_attach", 1, 0);
	Function_1028(&bLocal_653, "stagegat_attach", 1, 0);
	Function_1028(&bLocal_653, "dlc_mpcooppack_mp_coop", 10, 0);
	Function_1028(&bLocal_653, "dlc_mpcooppack_mp_coop_tum", 10, 0);
	Function_1028(&bLocal_653, Function_239(), 5, 0);
	Function_1028(&bLocal_653, Function_1027(), 8, 0);
	Function_1028(&bLocal_653, "ClimbOntoWagon", 1, 0);
	return;
}

bool Function_1027() //Position: 0x25A02 / 154114
{
	return "Custom/MP_Showdown";
}

var Function_1028(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x25A1D / 154141
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_1029(iParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_977(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_1029(var uParam0, int iParam1, int iParam2) //Position: 0x25A55 / 154197
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_160(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_977(uParam0[iVar03], 4);
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

vector3 Function_1030() //Position: 0x25B19 / 154393
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_1033(4, 1);
	uVar0 = uVar0;
	Local_77 = CREATE_LAYOUT("TumbleweedMP_CO_layout");
	Local_77.f_496 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_01", 2, -4207.584f, 22.31783f, 3750.649f, 0.0f, 261.1592f, 0.0f, 4.686152f, 4.232186f, 5.304859f);
	Local_77.f_500 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_01s1", 2, -3716.391f, 7.781364f, 3476.126f, 0.0f, 171.6949f, 0.0f, 4.950401f, 3.386763f, 4.955051f);
	Local_77.f_504 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_01s2", 3, -4039.779f, 7.869428f, 3574.59f, 0.0f, 129.7979f, 0.0f, 4.0f, 1.5f, 4.0f);
	Local_77.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_02", 2, -3828f, 42.66664f, 2988.214f, 0.0f, 229.629f, 0.0f, 20.0f, 5.0f, 20.0f);
	Local_77.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_02s1", 2, -3989.051f, 28.58014f, 3028.003f, -0.5718196f, -156.7309f, 1.529283f, 10.0f, 2.0f, 13.60862f);
	Local_77.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_02s2", 2, -3978.098f, 29.56138f, 2937.203f, 0.0f, -74.78474f, 0.0f, 10.0f, 3.0f, 10.0f);
	Local_77.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_03", 3, -3709.588f, 8.482189f, 3439.322f, 0.0f, -370.0507f, 0.0f, 10.0f, 8.0f, 12.0f);
	Local_77.f_524 = CREATE_VOLUME_IN_LAYOUT(Local_77, "SpawnVol_03s1", 3, -4026.352f, 30.40402f, 3023.577f, 0.0f, 27.83991f, 0.0f, 3.0f, 1.5f, 3.0f);
	Local_77.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s01_NoFireZone", 2, -4252.994f, 16.32436f, 3700.272f, 0.0f, -41.16134f, 0.0f, 160.9762f, 40.0f, 254.4763f);
	Local_77.f_532 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s01_ScoutActivate", 3, -4303.569f, 7.8082f, 3682.838f, 0.0f, 31.75853f, 0.0f, 131.7783f, 15.0f, 111.7077f);
	Local_77.f_536 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s01_ScratchingPost", 3, -4315.221f, 3.676273f, 3732.836f, 0.0f, 36.44916f, 0.0f, 32.21344f, 5.0f, 20.71831f);
	Local_77.f_540 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_SpawnVol2s1_SafeZone", 3, -3998.666f, 29.01966f, 3011.819f, 0.0f, 20.0f, 0.0f, 40.0f, 5.0f, 58.35559f);
	Local_77.f_544 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Cannons_Volume", 2, -3895.613f, 44.62737f, 2993.811f, 0.0f, -34.74845f, 0.0f, 16.49991f, 11.60549f, 43.85479f);
	Local_77.f_548 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Cannon1Volume", 3, -3902.665f, 40.27816f, 2988.383f, 0.0f, 20.0f, 0.0f, 2.5f, 2.0f, 2.5f);
	Local_77.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Cannon2Volume", 3, -3913.138f, 40.144f, 3004.907f, 0.0f, 20.0f, 0.0f, 2.5f, 2.0f, 2.5f);
	Local_77.f_556 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_MansionDefenseVolume", 3, -4056.898f, 35.68833f, 2945.668f, 0.0f, 30.55442f, 0.0f, 61.74388f, 12.0f, 67.41278f);
	Local_77.f_560 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Tumbleweed_AA", 3, -3966.855f, 24.86039f, 2948.726f, 0.0f, 5.083258f, 0.0f, 195.5044f, 25.0f, 153.966f);
	Local_77.f_564 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_NoFireZone", 3, -3986.697f, 34.39413f, 2952.048f, 0.0f, -2.648306f, 0.0f, 142.1074f, 15.0f, 122.9368f);
	Local_77.f_568 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Tumbleweed_TownSquare", 3, -3975.115f, 33.0718f, 2924.152f, 0.0f, 5.508482f, 0.0f, 52.43893f, 10.0f, 62.94659f);
	Local_77.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_SpawnVol_Bar", 2, -3978.046f, 31.11471f, 2909.973f, 0.0f, 30.55374f, 0.0f, 9.058304f, 6.652464f, 10.46185f);
	Local_77.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_SpawnVol_House", 2, -3978.233f, 31.39197f, 2968.336f, 0.0f, 15.27578f, 0.0f, 4.308458f, 5.980024f, 9.991385f);
	Local_77.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_SpawnVol_Church", 2, -3897.859f, 33.4613f, 2919.734f, 0.0f, -14.8633f, 0.0f, 7.48912f, 4.370446f, 11.93117f);
	Local_77.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_SpawnVol_Mansion", 2, -4086.736f, 37.7639f, 2950.394f, 0.0f, 48.85792f, 0.0f, 58.30123f, 17.53514f, 73.13554f);
	Local_77.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Mansion", 2, -4092.344f, 40.77216f, 2942.124f, 0.0f, -29.88657f, 0.0f, 20.75981f, 16.29699f, 23.76824f);
	Local_77.f_592 = CREATE_VOLUME_IN_LAYOUT(Local_77, "ns02_House", 2, -3978.393f, 32.24167f, 2967.698f, 0.0f, 15.49214f, 0.0f, 6.53757f, 9.526491f, 13.55536f);
	Local_77.f_596 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Bar", 2, -3978.179f, 31.04246f, 2910.301f, 0.0f, 29.40159f, 0.0f, 14.56354f, 11.56166f, 19.26662f);
	Local_77.f_600 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Church", 2, -3897.797f, 34.86954f, 2919.519f, 0.0f, -14.67438f, 0.0f, 10.57518f, 16.77845f, 15.99246f);
	Local_77.f_604 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s02_Barn", 2, -3985.105f, 32.4389f, 3045.818f, 0.0f, 0.0f, 0.0f, 13.46009f, 10.38939f, 17.67158f);
	Local_77.f_608 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Ramita_de_la_Baya", 2, -2383.538f, 13.848f, 3917.148f, 0.0f, 16.63016f, 0.0f, 29.82306f, 27.44753f, 156.8837f);
	Local_77.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Pursuit_1_Trigger", 2, -3817.468f, 20.35443f, 3859.279f, 0.0f, 38.25079f, 0.0f, 200.0f, 20.0f, 20.0f);
	Local_77.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Pursuit_2_Trigger", 2, -3591.332f, 28.74503f, 3864.765f, 0.0f, -14.20929f, 0.0f, 200.0f, 30.0f, 350.0f);
	Local_77.f_620 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Pursuit_3_Trigger", 2, -3450.519f, 29.11371f, 3761.21f, 0.0f, 108.13f, 0.0f, 400.0f, 30.0f, 200.0f);
	Local_77.f_624 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Pursuit_4_Trigger", 2, -3214.593f, 37.04365f, 3697.338f, 0.0f, -129.284f, 0.0f, 300.0f, 30.0f, 300.0f);
	Local_77.f_628 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Pursuit_5_Trigger", 2, -2680.799f, 29.29987f, 3729.598f, 0.0f, -113.1775f, 0.0f, 100.0f, 30.0f, 20.0f);
	Local_77.f_632 = CREATE_VOLUME_IN_LAYOUT(Local_77, "BenedictPass_SceneActor_Trigger", 3, -3693.748f, 8.23832f, 3484.115f, 0.0f, 20.0f, 0.0f, 120.0f, 20.0f, 120.0f);
	Local_77.f_636 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Div_123_Trigger", 2, -2805.705f, 35.72544f, 3741.968f, 0.0f, -168.7044f, 0.0f, 350.0f, 40.0f, 100.0f);
	Local_77.f_640 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Div_456_Trigger", 2, -2630.475f, 28.51319f, 3762.058f, 0.0f, 66.06274f, 0.0f, 100.0f, 40.0f, 350.0f);
	Local_77.f_644 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Div_789_Trigger", 2, -2464.555f, 15.99064f, 3864.547f, 0.0f, -114.0507f, 0.0f, 200.0f, 40.0f, 350.0f);
	Local_77.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Camp_Trigger", 2, -3179.646f, 38.96864f, 3768.678f, 0.0f, -160.5839f, 0.0f, 350.0f, 40.0f, 200.0f);
	Local_77.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Cavalry_Adv_Pat_Trigger", 2, -3468.373f, 30.88378f, 3917.135f, 0.0f, 117.3192f, 0.0f, 150.0f, 20.0f, 425.0f);
	Local_77.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Ramita_Island", 2, -2398.233f, 12.13443f, 3942.983f, 0.0f, 14.20489f, 0.0f, 150.0f, 20.0f, 75.0f);
	Local_77.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_RespawnVol_01", 2, -3430.384f, 32.97801f, 3817.629f, 0.0f, -64.11515f, 0.0f, 10.0f, 5.0f, 10.0f);
	Local_77.f_664 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_RespawnVol_02", 2, -3195.455f, 40.27915f, 3664.331f, 0.0f, -42.88937f, 0.0f, 10.0f, 5.0f, 10.0f);
	Local_77.f_668 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_RespawnVol_03", 2, -2912.866f, 38.83136f, 3783.376f, 0.0f, 14.54203f, 0.0f, 10.0f, 5.0f, 10.0f);
	Local_77.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_RespawnVol_04", 2, -2540.279f, 25.04152f, 3801.731f, 0.0f, -44.05447f, 0.0f, 10.0f, 5.0f, 10.0f);
	Local_77.f_676 = CREATE_VOLUME_IN_LAYOUT(Local_77, "BenedictPass_WanderVolume", 2, -3683.151f, 8.569311f, 3482.148f, 0.0f, -25.28644f, 0.0f, 50.54859f, 10.0f, 61.73148f);
	Local_77.f_680 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Southern_Ramita", 2, -2360.398f, 17.10392f, 4005.283f, 0.0f, 18.49755f, 0.0f, 11.46226f, 10.0f, 50.0f);
	Local_77.f_684 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s01_escapeVolume", 3, -4320.242f, 7.499405f, 3724.669f, 0.0f, 34.13807f, 0.0f, 80.0f, 10.0f, 60.0f);
	Local_77.f_688 = CREATE_VOLUME_IN_LAYOUT(Local_77, "s03_Area", 2, -3097.545f, 57.91284f, 3747.604f, 0.0f, -20.68154f, 0.0f, 2366.037f, 150.0f, 1250.0f);
	Local_77.f_692 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_77, 8, 0);
	*(&Local_77 + 696[06]) = { -4317.021f, 5.087f, 3747.278f };
	*(&Local_77 + 696[06] + 12) = { 0.0f, 358.955f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_77, "f_s01_Ammo_Pickup1", -4317.021f, 5.087f, 3747.278f, 0.0f, 358.955f, 0.0f);
	Function_1032(bVar1, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_77.f_692);
	*(&Local_77 + 696[16]) = { -3988.0f, 28.21542f, 2927.573f };
	*(&Local_77 + 696[16] + 12) = { 0.0f, 92.15071f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_77, "f_s01_Ammo_Pickup2", -3988.0f, 28.21542f, 2927.573f, 0.0f, 92.15071f, 0.0f);
	Function_1032(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_77.f_692);
	*(&Local_77 + 696[26]) = { -3890.639f, 39.09992f, 2974.41f };
	*(&Local_77 + 696[26] + 12) = { 0.0f, -48.61114f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_77, "f_s01_Ammo_Pickup3", -3890.639f, 39.09992f, 2974.41f, 0.0f, -48.61114f, 0.0f);
	Function_1032(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_77.f_692);
	*(&Local_77 + 696[36]) = { -3682.315f, 8.836004f, 3486.309f };
	*(&Local_77 + 696[36] + 12) = { 0.0f, 89.42072f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_77, "f_s01_Ammo_Pickup4", -3682.315f, 8.836004f, 3486.309f, 0.0f, 89.42072f, 0.0f);
	Function_1032(bVar4, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_77.f_692);
	*(&Local_77 + 796) = { -4388.787f, 2.514322f, 3758.651f };
	*(&Local_77 + 796 + 12) = { 0.0f, 253.7765f, 0.0f };
	*(&Local_77 + 820) = { -4373.006f, 2.941963f, 3761.165f };
	*(&Local_77 + 820 + 12) = { 0.0f, 265.6268f, 0.0f };
	*(&Local_77 + 844) = { -4347.43f, 3.613558f, 3750.987f };
	*(&Local_77 + 844 + 12) = { 0.0f, 305.855f, 0.0f };
	*(&Local_77 + 868) = { -4303.71f, 4.577279f, 3720.587f };
	*(&Local_77 + 868 + 12) = { 0.5938731f, 361.6324f, 0.6770185f };
	*(&Local_77 + 892) = { -4311.372f, 5.001161f, 3739.601f };
	*(&Local_77 + 892 + 12) = { 0.0f, -157.5954f, 0.0f };
	*(&Local_77 + 916) = { -4348.226f, 10.332f, 3725.435f };
	*(&Local_77 + 916 + 12) = { 0.0f, -97.34538f, 0.0f };
	*(&Local_77 + 940) = { -3716.477f, 7.782f, 3478.626f };
	*(&Local_77 + 940 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_77 + 964) = { -3902.668f, 40.2784f, 2988.383f };
	*(&Local_77 + 964 + 12) = { 0.0f, 61.93325f, 0.0f };
	*(&Local_77 + 988) = { -3913.138f, 40.144f, 3004.907f };
	*(&Local_77 + 988 + 12) = { 0.0f, 93.42771f, 0.0f };
	*(&Local_77 + 1012) = { -2340.316f, 13.84608f, 4063.166f };
	*(&Local_77 + 1012 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_77 + 1036) = { -3720.117f, 7.781368f, 3493.818f };
	*(&Local_77 + 1036 + 12) = { 0.0f, -16.79986f, 0.0f };
	*(&Local_77 + 1060) = { -3723.41f, 7.781368f, 3490.971f };
	*(&Local_77 + 1060 + 12) = { 0.0f, -11.87592f, 0.0f };
	*(&Local_77 + 1084) = { -3716.347f, 7.781368f, 3493.882f };
	*(&Local_77 + 1084 + 12) = { 0.0f, -8.728284f, 0.0f };
	*(&Local_77 + 1108) = { -3717.245f, 7.79826f, 3484.355f };
	*(&Local_77 + 1108 + 12) = { 0.0f, 172.5836f, 0.0f };
	*(&Local_77 + 1132) = { -3719.741f, 7.781364f, 3483.654f };
	*(&Local_77 + 1132 + 12) = { 0.0f, 177.3197f, 0.0f };
	*(&Local_77 + 1156) = { -3721.72f, 7.826977f, 3483.138f };
	*(&Local_77 + 1156 + 12) = { 0.0f, 169.2251f, 0.0f };
	Local_77.f_1180 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_Player_Mark_3", -3721.72f, 7.826977f, 3483.138f, 0.0f, 169.2251f, 0.0f);
	*(&Local_77 + 1184) = { -3714.837f, 7.781364f, 3484.293f };
	*(&Local_77 + 1184 + 12) = { 0.0f, 177.3197f, 0.0f };
	Local_77.f_1208 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_Player_Mark_4", -3714.837f, 7.781364f, 3484.293f, 0.0f, 177.3197f, 0.0f);
	*(&Local_77 + 1212) = { -3681.691f, 8.604116f, 3494.31f };
	*(&Local_77 + 1212 + 12) = { 0.0f, 90.52402f, 0.0f };
	*(&Local_77 + 1236) = { -3661.286f, 27.97142f, 3997.348f };
	*(&Local_77 + 1236 + 12) = { 0.0f, -280.3172f, 0.0f };
	*(&Local_77 + 1260) = { -3509.386f, 30.78257f, 3942.099f };
	*(&Local_77 + 1260 + 12) = { 0.0f, -282.2674f, 0.0f };
	*(&Local_77 + 1284) = { -3416.344f, 33.00003f, 3842.027f };
	*(&Local_77 + 1284 + 12) = { 0.0f, -143.475f, 0.0f };
	*(&Local_77 + 1308) = { -3221.843f, 40.15686f, 3738.158f };
	*(&Local_77 + 1308 + 12) = { 0.0f, -229.6731f, 0.0f };
	*(&Local_77 + 1332) = { -3009.265f, 45.15102f, 3754.867f };
	*(&Local_77 + 1332 + 12) = { 0.0f, -117.4871f, 0.0f };
	*(&Local_77 + 1356) = { -3693.376f, 8.981188f, 3490.371f };
	*(&Local_77 + 1356 + 12) = { 0.0f, -3.640294f, 0.0f };
	*(&Local_77 + 1380) = { -3688.0f, 8.031368f, 3505.976f };
	*(&Local_77 + 1380 + 12) = { 0.0f, -3.330094f, 0.0f };
	*(&Local_77 + 1404) = { -3685.089f, 8.031368f, 3505.909f };
	*(&Local_77 + 1404 + 12) = { 0.0f, -2.404353f, 0.0f };
	*(&Local_77 + 1428) = { -3682.042f, 8.031368f, 3505.958f };
	*(&Local_77 + 1428 + 12) = { 0.0f, -3.098256f, 0.0f };
	*(&Local_77 + 1452) = { -4090.825f, 37.20739f, 2939.339f };
	*(&Local_77 + 1452 + 12) = { 0.0f, -141.2415f, 0.0f };
	*(&Local_77 + 1476) = { -3687.993f, 8.03117f, 3454.519f };
	*(&Local_77 + 1476 + 12) = { 0.0f, 89.62866f, 0.0f };
	*(&Local_77 + 1500) = { -3718.506f, 7.781364f, 3483.976f };
	*(&Local_77 + 1500 + 12) = { 0.0f, 171.9621f, 0.0f };
	Local_77.f_1524 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_mySide", -3718.506f, 7.781364f, 3483.976f, 0.0f, 171.9621f, 0.0f);
	*(&Local_77 + 1528) = { -3719.014f, 7.781368f, 3487.98f };
	*(&Local_77 + 1528 + 12) = { 0.0f, -8.142804f, 0.0f };
	Local_77.f_1552 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_theirSide", -3719.014f, 7.781368f, 3487.98f, 0.0f, -8.142804f, 0.0f);
	*(&Local_77 + 1556) = { -3722.593f, 7.781368f, 3487.452f };
	*(&Local_77 + 1556 + 12) = { 0.0f, -8.201872f, 0.0f };
	Local_77.f_1580 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_theirLeftMost", -3722.593f, 7.781368f, 3487.452f, 0.0f, -8.201872f, 0.0f);
	*(&Local_77 + 1584) = { -3715.162f, 7.781368f, 3488.549f };
	*(&Local_77 + 1584 + 12) = { 0.0f, -3.953113f, 0.0f };
	Local_77.f_1608 = CREATE_POINT_IN_LAYOUT(Local_77, "s03_theirRightMost", -3715.162f, 7.781368f, 3488.549f, 0.0f, -3.953113f, 0.0f);
	*(&Local_77 + 1612) = { -4313.666f, 4.104547f, 3721.666f };
	*(&Local_77 + 1612 + 12) = { 0.0f, -151.1687f, 0.0f };
	*(&Local_77 + 1636) = { -4309.354f, 4.585373f, 3717.354f };
	*(&Local_77 + 1636 + 12) = { 0.0f, -159.1413f, 0.0f };
}

struct<8> @sEiCBÅìÿ@j5Ei'#,Ç%:MD|;Mos01_(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x27193 / 160147
{
	Global_6909543 = (*StackVal)[StackVal24948];
}

void Function_1032(bool bParam0, bool bParam1, bool bParam2) //Position: 0x273D9 / 160729
{
	DECOR_SET_INT(iParam0, Function_970(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_967(), bParam2);
	}
	return;
}

void Function_1033(int iParam0, int iParam1) //Position: 0x273FD / 160765
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

int Function_1034() //Position: 0x27446 / 160838
{
	switch (GET_LOCAL_SLOT())
	{
		case 0x00000000:
			return 986;
			break;
		
		case 0x00000001:
			return 991;
			break;
		
		case 0x00000002:
			return 983;
			break;
		
		case 0x00000003:
			return 989;
			break;
		
		default:
			LOG_ERROR("GET_COOP_HORSE - Player is not in the proper range of slots, 0-3.  Setting to a default horse");
			return 976;
			break;
	}
	return 976;
}

bool Function_1035(var uParam0) //Position: 0x274F5 / 161013
{
	return (iLocal_495 != 99 || Function_414(uParam0));
}

void Function_1036() //Position: 0x27507 / 161031
{
	var uVar0[5];
	int iVar6;
	
	if (Function_74())
	{
		uVar0[0] = "Jump to Stage01";
		uVar0[1] = "Jump to Stage02";
		uVar0[2] = "Jump to Stage03";
		uVar0[3] = "Jump to End / 4/26/10, 11:30am";
		uVar0[4] = "Quit Mission";
		iVar6 = Function_1040(&Local_497, &uVar0, "RDR CO-OP MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (Function_1039(&iVar6, &iLocal_495, &iLocal_496, &Local_504))
		{
			Function_67();
			Function_14();
		}
		switch (iVar6)
		{
			case 0x00000000:
				Function_1038(0);
				break;
			
			case 0x00000001:
				Function_192(0);
				Function_1038(1);
				break;
			
			case 0x00000002:
				Function_192(0);
				Function_1038(2);
				break;
			
			case 0x00000003:
				Function_192(0);
				iLocal_935 = 1;
				Function_1038(101);
				break;
			
			case 0x00000004:
				Function_168(1, 0);
				Function_67();
				Function_14();
				Function_1037();
				break;
			}
	}
	return;
}

void Function_1037() //Position: 0x27638 / 161336
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 1, 1);
	return;
}

void Function_1038(int iParam0) //Position: 0x2764C / 161356
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 1, 1);
	return;
}

bool Function_1039(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x27661 / 161377
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
		Function_409("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_1040(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x27707 / 161543
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_1053(&Var15, &Var0);
	uVar20 = Function_1052(*uParam1, &Var15);
	Function_1051(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_1050(uParam0, uVar20);
	Function_1048(StackVal, uParam0, Var15.f_12);
	Function_1046(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_1045(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_1042(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_1041(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_1041(int iParam0, int iParam1, int iParam2) //Position: 0x277CE / 161742
{
	bool bVar0;
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
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_1042(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x2782A / 161834
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
				Function_1044(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_1044(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_1041(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_1043(bParam1->f_32);
	}
	else
	{
		Function_1043(bParam1->f_32);
	}
	return 0;
}

void Function_1043(bool bParam0) //Position: 0x279B0 / 162224
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_1044(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x279EA / 162282
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_1045(int iParam0, var uParam1, int iParam2) //Position: 0x27A98 / 162456
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_1046(var uParam0, int iParam1, int iParam2) //Position: 0x27ABC / 162492
{
	switch (Function_1047())
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

int Function_1047() //Position: 0x27B58 / 162648
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

void Function_1048(var uParam0, int iParam1, int iParam2) //Position: 0x27B94 / 162708
{
	switch (Function_1049(uParam0))
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

int Function_1049(int iParam0) //Position: 0x27C2C / 162860
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_41()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, false))
	{
		if (!Function_45(*iParam0, 0x40000000))
		{
			Function_10(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, false))
	{
		if (!Function_45(*iParam0, 0x40000000))
		{
			Function_10(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_7(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_41()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, false))
	{
		if (!Function_45(*iParam0, 0x20000000))
		{
			Function_10(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, false))
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

var Function_1050(var uParam0, int iParam1) //Position: 0x27D77 / 163191
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

void Function_1051(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x27EC6 / 163526
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_1052(int iParam0, int iParam1) //Position: 0x27F59 / 163673
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_1053(var uParam0, var uParam1) //Position: 0x27F73 / 163699
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

void Function_1054() //Position: 0x27FC1 / 163777
{
	if (iLocal_495 != iLocal_1065)
	{
		iLocal_1065 = iLocal_495;
		switch (iLocal_495)
		{
			case 0x00000000:
				if (Function_155())
				{
					strcpy(&cLocal_1061, "TUMAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_1061, "TUMFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_155())
				{
					strcpy(&cLocal_1061, "TUMAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_1061, "TUMFail2", 16);
				}
				break;
			
			case 0x00000002:
				if (Function_155())
				{
					strcpy(&cLocal_1061, "TUMAdvFail3", 16);
				}
				else
				{
					strcpy(&cLocal_1061, "TUMFail3", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_155())
				{
					strcpy(&cLocal_1061, "TUMAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_1061, "TUMFailLast", 16);
				}
				break;
			}
	}
	return;
}

