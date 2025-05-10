//Decompiled with MagicRDR v1.0
//Function Count : 766
//Statics Count : 1038
//Natives Count : 759
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
	struct<45> Local_71 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 } ;
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
	struct<1473> Local_149 = { 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	bLocal_897 = true;
	bLocal_898 = false;
	bLocal_899 = true;
	iLocal_900 = 0;
	bLocal_901 = false;
	iLocal_902 = 0;
	iLocal_903 = 0;
	iLocal_904 = 0;
	iLocal_905 = 0;
	iLocal_906 = 0;
	iLocal_907 = 0;
	iLocal_908 = 0;
	iLocal_913 = 4294967295;
	iLocal_914 = 0;
	iLocal_920 = 0;
	iLocal_519 = 99;
	iLocal_520 = 6;
	Local_521 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_521 };
	while (!IS_EXITFLAG_SET() && Function_209())
	{
		WAIT(false);
	}
	Function_75();
	Function_1(&bLocal_609);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x84 / 132
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
	if (iLocal_520 == 3)
	{
		Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Function_46(4096, 0);
	if (!Function_45(bParam0->f_44, 4))
	{
		UI_EXIT("MPSplash");
	}
	Function_28(bParam0);
	Function_27(bParam0, 0);
	Function_26(bParam0, 0);
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

void Function_2(bool bParam0) //Position: 0x14A / 330
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

void Function_3(bool bParam0, bool bParam1) //Position: 0x18E / 398
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

int Function_4(bool bParam0, bool bParam1) //Position: 0x20B / 523
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

void Function_5(int iParam0) //Position: 0x22F / 559
{
	Function_6(&Global_79337, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x23E / 574
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x24B / 587
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x25E / 606
{
	Function_9(&Global_79337, iParam0);
	return;
}

void Function_9(int iParam0, int iParam1) //Position: 0x26D / 621
{
	Function_10(iParam0, iParam1);
	return;
}

void Function_10(int iParam0, int iParam1) //Position: 0x27A / 634
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_11(bool bParam0) //Position: 0x289 / 649
{
	return Function_12(Global_79337, bParam0);
}

bool Function_12(int iParam0, bool bParam1) //Position: 0x298 / 664
{
	return (iParam0 && bParam1) == 0;
}

void Function_13() //Position: 0x2A5 / 677
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_14() //Position: 0x2AE / 686
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_15() //Position: 0x2C3 / 707
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

void Function_16(int iParam0) //Position: 0x2E5 / 741
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x2F5 / 757
{
	Function_18();
	return;
}

void Function_18() //Position: 0x2FE / 766
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x30A / 778
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

void Function_20(var uParam0, int iParam1) //Position: 0x347 / 839
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x35A / 858
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x369 / 873
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x374 / 884
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_24(var uParam0) //Position: 0x384 / 900
{
	*uParam0 = Global_78480.f_120;
	return;
}

void Function_25() //Position: 0x393 / 915
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

void Function_26(bool bParam0, bool bParam1) //Position: 0x4AD / 1197
{
	if (bParam1)
	{
		Function_10(bParam0 + 44, 64);
	}
	else
	{
		Function_7(bParam0 + 44, 64);
	}
	return;
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x4CD / 1229
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

void Function_28(int iParam0) //Position: 0x4EB / 1259
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

void Function_29(bool bParam0) //Position: 0x59D / 1437
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

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x5D7 / 1495
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

void Function_31(bool bParam0, bool bParam1) //Position: 0x5FF / 1535
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

var Function_32(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x690 / 1680
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

void Function_33(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x7C9 / 1993
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

vector3 Function_34(var uParam0, bool bParam1) //Position: 0x81E / 2078
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_35() //Position: 0x838 / 2104
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_36(int iParam0) //Position: 0x867 / 2151
{
	Function_38(iParam0);
	Function_37(1048576);
	return;
}

void Function_37(int iParam0) //Position: 0x879 / 2169
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x8B2 / 2226
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_39(bool bParam0) //Position: 0x8C9 / 2249
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

bool Function_40(bool bParam0) //Position: 0x950 / 2384
{
	return Function_12(Global_79336, bParam0);
}

bool Function_41() //Position: 0x95F / 2399
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42() //Position: 0x974 / 2420
{
	if (Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 0, 1);
	return;
}

void Function_43() //Position: 0x98C / 2444
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_44(int iParam0) //Position: 0x99B / 2459
{
	return Function_45(Global_76905.f_132, iParam0);
}

bool Function_45(var uParam0, int iParam1) //Position: 0x9AC / 2476
{
	return (uParam0 && iParam1) == 0;
}

void Function_46(int iParam0, bool bParam1) //Position: 0x9B9 / 2489
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x9F4 / 2548
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

void Function_48(bool bParam0) //Position: 0xAE4 / 2788
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

void Function_49() //Position: 0xB93 / 2963
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

int Function_50(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC05 / 3077
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
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xE25 / 3621
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

bool Function_52() //Position: 0x1452 / 5202
{
	int iVar0;
	
	return iVar0;
}

var Function_53(int iParam0) //Position: 0x145A / 5210
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x146B / 5227
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

struct<32> Function_55(char* cParam0, bool bParam1) //Position: 0x1560 / 5472
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1579 / 5497
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_58(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_57(int iParam0, int iParam1) //Position: 0x15DE / 5598
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_58(int iParam0, bool bParam1) //Position: 0x15F0 / 5616
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1602 / 5634
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

int Function_60(int iParam0) //Position: 0x1732 / 5938
{
	return Global_35278[iParam020].f_48;
}

float Function_61(int iParam0) //Position: 0x1741 / 5953
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_62(int iParam0) //Position: 0x177A / 6010
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_63(int iParam0) //Position: 0x17B7 / 6071
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x1951 / 6481
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

bool Function_65() //Position: 0x1B95 / 7061
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_66() //Position: 0x1B9E / 7070
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_67() //Position: 0x1BB2 / 7090
{
	Function_69();
	Function_68(10, 3);
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x1BC1 / 7105
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

void Function_69() //Position: 0x1CF8 / 7416
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

void Function_70() //Position: 0x1D43 / 7491
{
	Function_71(25, 2);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x1D4F / 7503
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

void Function_72(int iParam0, int iParam1) //Position: 0x1F4D / 8013
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

bool Function_73() //Position: 0x2084 / 8324
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

bool Function_74() //Position: 0x20EB / 8427
{
	return Global_30920;
}

void Function_75() //Position: 0x20F4 / 8436
{
	Function_181();
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_ACTOR_INVULNERABILITY(Function_41(), 0);
	Function_180();
	RELEASE_ACTOR(bLocal_717);
	Function_179(&Local_927, 0);
	Function_179(&Local_946, 0);
	Function_179(&Local_965, 0);
	Function_179(&iLocal_984, 0);
	Function_178(Local_149);
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_174(&bLocal_732);
	Function_171(0);
	Function_167();
	Function_166();
	Function_165();
	Function_164();
	Function_163();
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	Function_156(&uLocal_1005);
	if (Function_155())
	{
		Function_76(89);
	}
	else
	{
		Function_76(35);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x21E2 / 8674
{
	Function_154(14, 1);
	Function_77(Function_152(), iParam0);
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x21F6 / 8694
{
	Function_151(0, iParam0);
	Function_151(13, iParam0);
	Function_151(11, Function_150(29));
	Function_78(iParam1, 4294967295, 0, 0, 0);
	return;
}

void Function_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x221B / 8731
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

void Function_79(bool bParam0) //Position: 0x2337 / 9015
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

void Function_80() //Position: 0x23C0 / 9152
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

void Function_81() //Position: 0x2412 / 9234
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

void Function_82() //Position: 0x2518 / 9496
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

void Function_83() //Position: 0x254B / 9547
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

void Function_84() //Position: 0x26D9 / 9945
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

void Function_85() //Position: 0x288D / 10381
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, int iParam2) //Position: 0x289B / 10395
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

struct<8> Function_87(int iParam0) //Position: 0x2A8C / 10892
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

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B32 / 11058
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

int Function_89(bool bParam0) //Position: 0x2DCD / 11725
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_90() //Position: 0x2E0E / 11790
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

struct<8> Function_91() //Position: 0x2E97 / 11927
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

struct<8> Function_92() //Position: 0x2F2E / 12078
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

void Function_93() //Position: 0x2FAD / 12205
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

int Function_94(int iParam0, bool bParam1, int iParam2) //Position: 0x2FE6 / 12262
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

void Function_95(int iParam0) //Position: 0x31F0 / 12784
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x31FF / 12799
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x320E / 12814
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

bool Function_98() //Position: 0x32B5 / 12981
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_99(int iParam0) //Position: 0x32C0 / 12992
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_100(var uParam0, var uParam1, bool bParam2) //Position: 0x32D0 / 13008
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

void Function_101() //Position: 0x3315 / 13077
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

void Function_102() //Position: 0x333F / 13119
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

void Function_103(bool bParam0) //Position: 0x339F / 13215
{
	Global_56092[*bParam0] = 0;
	Function_104(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_104(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x33B9 / 13241
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

void Function_105(char* cParam0, bool bParam1) //Position: 0x3470 / 13424
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

bool Function_106(int iParam0, int iParam1) //Position: 0x3495 / 13461
{
	return Function_45(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_107(int iParam0) //Position: 0x34A9 / 13481
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_108(int iParam0) //Position: 0x34DD / 13533
{
	return Global_50170[iParam022].f_24;
}

void Function_109(var uParam0, var uParam1, int iParam2) //Position: 0x34EC / 13548
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

void Function_110(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3695 / 13973
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

void Function_111() //Position: 0x36FB / 14075
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

void Function_112(var uParam0, int iParam1) //Position: 0x3724 / 14116
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

void Function_113(bool bParam0) //Position: 0x3766 / 14182
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

void Function_114() //Position: 0x37B7 / 14263
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

bool Function_115(vector3 vParam0) //Position: 0x3872 / 14450
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_116(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x388A / 14474
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

vector3 Function_117() //Position: 0x3971 / 14705
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_118(int iParam0) //Position: 0x397A / 14714
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_119(bool bParam0, bool bParam1) //Position: 0x3990 / 14736
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

float Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x3A57 / 14935
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_121(var uParam0, int iParam1) //Position: 0x3A74 / 14964
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

bool Function_122(int iParam0) //Position: 0x429A / 17050
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_45(uVar0, 0x1000000) || Function_45(uVar0, 0x2000000)) || Function_45(uVar0, 0x4000000)) || !Function_45(uVar0, 0x10000000));
}

void Function_123(bool bParam0, bool bParam1) //Position: 0x42D5 / 17109
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_124() //Position: 0x42E2 / 17122
{
	if (Function_45(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_125(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x42FD / 17149
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

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x43A1 / 17313
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

struct<16> Function_127(int iParam0) //Position: 0x4413 / 17427
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_128(int iParam0) //Position: 0x4434 / 17460
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_129(int iParam0) //Position: 0x4455 / 17493
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_130() //Position: 0x4476 / 17526
{
	return "CQueue_Count";
}

void Function_131(int iParam0) //Position: 0x448B / 17547
{
	Function_132(iParam0, 1);
	return;
}

void Function_132(int iParam0, bool bParam1) //Position: 0x4497 / 17559
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

int Function_133(bool bParam0) //Position: 0x44ED / 17645
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_134(int iParam0, int iParam1) //Position: 0x44F9 / 17657
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

struct<16> Function_135(int iParam0) //Position: 0x457B / 17787
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_136(int iParam0) //Position: 0x459B / 17819
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_137(int iParam0) //Position: 0x45CC / 17868
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x474A / 18250
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

var Function_139() //Position: 0x4896 / 18582
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x48E3 / 18659
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_141(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x48FB / 18683
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

void Function_142(int iParam0, int iParam1) //Position: 0x4971 / 18801
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4985 / 18821
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

void Function_144(int iParam0, int iParam1) //Position: 0x4A42 / 19010
{
	Function_10(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_145(int iParam0) //Position: 0x4A56 / 19030
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_146(int iParam0) //Position: 0x4A84 / 19076
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_147() //Position: 0x4AB4 / 19124
{
	return "MP_Unstoppable_Icon_128";
}

float Function_148(int iParam0) //Position: 0x4AD4 / 19156
{
	return Global_50170[iParam022].f_12;
}

int Function_149() //Position: 0x4AE3 / 19171
{
	return Global_79349.f_16;
}

int Function_150(int iParam0) //Position: 0x4AEF / 19183
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_151(int iParam0, int iParam1) //Position: 0x4B08 / 19208
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_152() //Position: 0x4B22 / 19234
{
	return Function_153(0);
}

int Function_153(int iParam0) //Position: 0x4B2C / 19244
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_154(int iParam0, int iParam1) //Position: 0x4B3C / 19260
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

bool Function_155() //Position: 0x4B61 / 19297
{
	return Function_45(Global_79962, 64);
}

void Function_156(int iParam0) //Position: 0x4B70 / 19312
{
	Function_157(iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x4B7B / 19323
{
	if (StackVal >= 0)
	{
		Function_158(TO_FLOAT(StackVal), "XP_Coop_complete", 1);
		iParam0->f_8 = 0;
	}
	return;
}

int Function_158(float fParam0, bool bParam1, bool bParam2) //Position: 0x4BAD / 19373
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

void Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x4BDD / 19421
{
	Function_50(iParam0, CEIL(bParam1), 1, bParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_160(var uParam0, float fParam1) //Position: 0x4BF9 / 19449
{
	Function_161(uParam0, (Function_99(uParam0) + fParam1));
	return;
}

void Function_161(int iParam0, float fParam1) //Position: 0x4C0C / 19468
{
	(*&Global_78480 + 176)[iParam0] = fParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = fParam1;
	}
	return;
}

bool Function_162() //Position: 0x4C35 / 19509
{
	if (Function_65())
	{
		return (Function_149() != 1 || Function_149() != 0);
	}
	return 0;
}

void Function_163() //Position: 0x4C4E / 19534
{
	int iVar0;
	
	FIRE_STOP_ALL_FIRES();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		FIRE_RELEASE_HANDLE(Local_718[iVar02], 1);
		iVar0++;
	}
	return;
}

void Function_164() //Position: 0x4C74 / 19572
{
	Function_174(&Local_149 + 4);
	RELEASE_LAYOUT_REF(Local_149);
	return;
}

void Function_165() //Position: 0x4C86 / 19590
{
	RELEASE_LAYOUT_REF(Local_71);
	return;
}

void Function_166() //Position: 0x4C91 / 19601
{
	Function_174(&bLocal_108 + 4);
	RELEASE_LAYOUT_REF(bLocal_108);
	return;
}

void Function_167() //Position: 0x4CA3 / 19619
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Function_168(iVar0);
		iVar0++;
	}
	return;
}

void Function_168(int iParam0) //Position: 0x4CC0 / 19648
{
	if (SQUAD_IS_VALID(vLocal_535[iParam09].f_28))
	{
		Function_169(&vLocal_535[iParam09] + 28, 0, 0);
	}
	if (IS_ACTOR_VALID(vLocal_535[iParam09].f_32))
	{
		RELEASE_ACTOR(vLocal_535[iParam09].f_32);
	}
	if (IS_LAYOUTREF_VALID(vLocal_535[iParam09]))
	{
		RELEASE_LAYOUT_REF(vLocal_535[iParam09]);
	}
	return;
}

void Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4D15 / 19733
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_170(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_170(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4D91 / 19857
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_171(bool bParam0) //Position: 0x4DAB / 19883
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Local_149);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_SQUAD_FROM_OBJECT(bVar1);
		if (SQUAD_IS_VALID(bVar2))
		{
			Function_173(bVar2);
			if (bParam0)
			{
				Function_172(&bVar2);
			}
			else
			{
				Function_169(&bVar2, 0, 0);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_172(bool bParam0) //Position: 0x4E05 / 19973
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
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

void Function_173(bool bParam0) //Position: 0x4E4C / 20044
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_174(int iParam0) //Position: 0x4E99 / 20121
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_175(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x4EBF / 20159
{
	if (Function_177(uParam0[iParam13], 4))
	{
		if (Function_177(uParam0[iParam13], 1))
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
			Function_176(uParam0[iParam13], 1);
			Function_176(uParam0[iParam13], 2);
			Function_176(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x4FED / 20461
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x5007 / 20487
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(bool bParam0) //Position: 0x5024 / 20516
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

void Function_179(int iParam0, bool bParam1) //Position: 0x507C / 20604
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
			Function_172(iParam0 + 68);
		}
		else
		{
			Function_169(iParam0 + 68, 0, 0);
		}
		DESTROY_OBJECT(iParam0->f_68);
	}
	if (SQUAD_IS_VALID(iParam0->f_72))
	{
		if (bParam1)
		{
			Function_172(iParam0 + 72);
		}
		else
		{
			Function_169(iParam0 + 72, 0, 0);
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

void Function_180() //Position: 0x511F / 20767
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (IS_SLOT_VALID(bVar0))
		{
		}
		bVar0++;
	}
	return;
}

void Function_181() //Position: 0x51C1 / 20929
{
	switch (iLocal_519)
	{
		case 0x00000000:
			Function_182(Local_149.f_1352, 0);
			break;
		
		case 0x00000005:
			Function_182(Local_149.f_1356, 0);
			break;
		
		case 0x00000008:
			Function_182(Local_149.f_1360, 0);
			break;
	}
	return;
}

void Function_182(bool bParam0, bool bParam1) //Position: 0x5205 / 20997
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (GET_OBJECTSET_SIZE(bParam0) != 4)
	{
		LOG_ERROR("TELEPORT_COOP_PLAYER_TO_OBJECTSET_POINT - Objectset's size != 4");
	}
	bVar6 = Function_208(GET_LOCAL_SLOT());
	bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bParam0);
	if (IS_OBJECT_VALID(bVar7))
	{
		Function_207(bVar7);
		vVar0 = { StackVal, StackVal, Function_207(bVar7) };
		Function_206(bVar7);
		vVar3 = { StackVal, StackVal, Function_206(bVar7) };
		if (!bVar6 <= 4)
		{
			if (GET_OBJECTSET_SIZE(bParam0) == 4)
			{
				bVar8 = Function_41();
				if (IS_ACTOR_VALID(bVar8))
				{
					TELEPORT_ACTOR_WITH_HEADING(Function_41(), vVar0, vVar3.y, 1, 1, 1);
				}
				else if (bParam1)
				{
					Function_183(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1);
				}
			}
			else
			{
				LOG_ERROR("TELEPORT_COOP_PLAYER_TO_POINT - Incorrectly-sized array passed into procedure.  The array MUST be of size 4, one for each possible player!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_COOP_PLAYER_TO_POINT - Player's relative slot is outside valid range!");
		}
	}
	return;
}

bool Function_183(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x53B3 / 21427
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_41();
	Function_202();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_201();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_199(bVar0, 3145855);
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
		bVar9 = Function_198(256);
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
		Function_192(bVar0, 0);
		Function_187();
		Function_186(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_185(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_184(uVar14))
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

bool Function_184(bool bParam0) //Position: 0x552A / 21802
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_185(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5540 / 21824
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

void Function_186(char* cParam0, vector3 vParam1) //Position: 0x55DB / 21979
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_187() //Position: 0x5619 / 22041
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_191(iVar1))
		{
			uVar2 = Function_190(iVar1);
			Function_188(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_188(int iParam0, bool bParam1) //Position: 0x564B / 22091
{
	if (!Function_191(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_189(222, Global_26401[iParam0], 0);
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
		Function_189((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_189(222, bParam1, 0);
	}
	return;
}

int Function_189(int iParam0, bool bParam1, int iParam2) //Position: 0x56D4 / 22228
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

int Function_190(int iParam0) //Position: 0x58CF / 22735
{
	if (!Function_191(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_191(int iParam0) //Position: 0x58E7 / 22759
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_192(bool bParam0, bool bParam1) //Position: 0x58FC / 22780
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_197(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_195(8192) && !Function_194(1, 1)));
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
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_193())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_193() //Position: 0x5A04 / 23044
{
	return Function_45(Global_79962, 2048);
}

bool Function_194(int iParam0, bool bParam1) //Position: 0x5A14 / 23060
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_195(int iParam0) //Position: 0x5A34 / 23092
{
	return Function_196(&Global_79349, iParam0);
}

int Function_196(var uParam0, int iParam1) //Position: 0x5A43 / 23107
{
	return Function_45(uParam0->f_44, iParam1);
}

var Function_197(bool bParam0) //Position: 0x5A52 / 23122
{
	int iVar0;
	
	iVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return iVar0;
}

bool Function_198(bool bParam0) //Position: 0x5A87 / 23175
{
	return Function_12(Global_78617.f_52, bParam0);
}

bool Function_199(bool bParam0, int iParam1) //Position: 0x5A98 / 23192
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_200(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_200(iParam1, 64))
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

bool Function_200(var uParam0, bool bParam1) //Position: 0x5B71 / 23409
{
	return (uParam0 && bParam1) == 0;
}

void Function_201() //Position: 0x5B7E / 23422
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_202() //Position: 0x5B93 / 23443
{
	Function_205();
	Function_102();
	Function_203();
	return;
}

void Function_203() //Position: 0x5BA2 / 23458
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_204();
	return;
}

void Function_204() //Position: 0x5BD6 / 23510
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_205() //Position: 0x5BE7 / 23527
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

vector3 Function_206(bool bParam0) //Position: 0x5C00 / 23552
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

vector3 Function_207(bool bParam0) //Position: 0x5C27 / 23591
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

var Function_208(int iParam0) //Position: 0x5C4E / 23630
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
			if (bVar0 == iParam0)
			{
				return iVar1;
			}
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

var Function_209() //Position: 0x5C89 / 23689
{
	int iVar0;
	
	iVar0 = 1;
	Function_765();
	if (NET_IS_SESSION_HOST())
	{
		Unknown_Function();
	}
	Unknown_Function();
	if (&bLocal_609)
	{
		Function_355();
	}
	if (iLocal_519 != 99)
	{
		if (NET_IS_SESSION_CLIENT())
		{
			Function_354(&Local_149, "playerraft", &bLocal_717);
		}
		if (Function_352(&iLocal_915) <= 5.0f)
		{
			Function_348(Local_149);
			Function_347(&iLocal_915);
		}
		if (NET_IS_SESSION_HOST())
		{
			Function_346(&iLocal_781, iLocal_782);
		}
		else if (UNK_0xA80C6DE6(&iLocal_781))
		{
			Function_346(&iLocal_782, iLocal_781);
		}
		Function_345();
		Function_343(3);
		iVar0 = Function_210(&bLocal_609);
	}
	return iVar0;
}

int Function_210(bool bParam0) //Position: 0x5D18 / 23832
{
	int iVar0;
	
	Function_340();
	Function_339();
	if (!iLocal_920 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_920 = 1;
	}
	if (Function_338(bParam0))
	{
		if (!((((((iLocal_520 != 0 || iLocal_520 != 1) || iLocal_520 != 2) || iLocal_520 != 3) || iLocal_520 != 4) || iLocal_520 != 5) || iLocal_520 != 105))
		{
			if (Function_335())
			{
				NET_LOG(bLocal_899, "Local State", "All players have run out of lives, ending", false, false, false, false);
				Function_306(bParam0, "COOP_failed_everyone_dead", "GEN_DEATH_01");
			}
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_306(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	iVar0 = Function_211(bParam0);
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

int Function_211(bool bParam0) //Position: 0x5E3D / 24125
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
		bParam0->f_64 = Function_305((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_304())
	{
		if (bVar1)
		{
			switch (Function_302())
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
	if (Function_301(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
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
					if (Function_300() && IS_PS3())
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
	if (((Function_301(bParam0) && Function_198(4096)) && Function_162()) && !Function_40(32768))
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
					Function_299(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_298(4096);
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
	fVar8 = Function_297();
	if (bVar1)
	{
		bVar9 = Function_296(bVar0);
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
			if ((Function_195(8192) || Function_45(bParam0->f_48, 512)) && !Function_194(1, 1))
			{
				iVar6 = Function_293(81922, 0, 0);
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
								Function_291("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_161(2, NET_GET_NET_TIME());
								Function_289(3, 1);
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
				else if (Function_194(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_46(8388608, 0);
					}
				}
			}
			if (Function_288(bParam0 + 116, &Global_78617 + 2648))
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
						Function_287(bParam0 + 116, &Global_78617 + 2648);
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
					Function_286(bParam0->f_188, bVar0);
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
				Function_285(0);
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
			if (Function_284(bParam0 + 116, &Global_78617 + 2648))
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
			Function_279(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_264(bParam0, bParam0->f_12 != 0);
			}
			Function_262(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_262(bParam0, 1);
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
			Function_262(bParam0, 1);
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
			Function_262(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_261();
				Function_30(32, 0, 1);
				Function_39(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_262(bParam0, 1);
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
					Function_262(bParam0, 1);
				}
			}
			else
			{
				Function_262(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_262(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_260(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				if (Function_256(StackVal, Function_45(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_183(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_45(bParam0->f_48, 32), 1))
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
				Function_255(bVar0);
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
			if (!Function_254(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_253(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_45(bParam0->f_44, 8))
				{
					Function_252(bParam0 + 192, 0, 1, 1);
					Function_246(bParam0 + 192);
					Function_237(&bVar0, 0, 0, 0);
					Function_237(&bVar0, 0, 0, 0);
					Function_236(bVar0);
				}
				else
				{
					Function_252(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_235(bVar0);
					vVar10 = { StackVal, StackVal, Function_235(bVar0) };
					bVar13 = Function_185(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_184(bVar13))
					{
						if (StackVal || Function_162() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_231(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_230(&(Global_29008[StackVal]), 4194304);
				}
				Function_298(32);
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
				Function_298(32);
				Function_231(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_184(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_228(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_228(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_228(&(Global_29008[StackVal]), 4194304))
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
					if (Function_184(bVar14))
					{
						if (StackVal && (!Function_229(bVar14) && !Function_228(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_227(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_226();
			if (!Function_45(bParam0->f_44, 32))
			{
				if (Function_225())
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
						bVar15 = Function_224(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_224(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_224(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_224(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_224(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_224(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_224(bVar0, 46);
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
					Function_223(0.5f);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_46(16384, 0);
			Function_222(bVar0, !Function_45(bParam0->f_44, 96));
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
			Function_262(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_39(1);
			}
			else if (!Function_220())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_213(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_212(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_262(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_262(bParam0, 1);
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
			Function_262(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_260(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_262(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_260(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_262(bParam0, 1);
			if (Function_220())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_260(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_212(int iParam0) //Position: 0x6EF8 / 28408
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_213(int iParam0) //Position: 0x6F14 / 28436
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
			if (Function_219(&Global_78578 + 96))
			{
				if (FABS(Function_214(&Global_78578 + 96)) > 1.0f)
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

float Function_214(int iParam0) //Position: 0x7005 / 28677
{
	return -Function_215(iParam0);
}

float Function_215(int iParam0) //Position: 0x7011 / 28689
{
	if (Function_219(iParam0))
	{
		if (Function_218(iParam0))
		{
			return StackVal;
		}
		Function_216();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_216() //Position: 0x70E2 / 28898
{
	if (!Function_217())
	{
	}
	return;
}

bool Function_217() //Position: 0x70EF / 28911
{
	return NET_IS_IN_SESSION();
}

bool Function_218(int iParam0) //Position: 0x70F8 / 28920
{
	return Function_45(*iParam0, 2);
}

bool Function_219(int iParam0) //Position: 0x7105 / 28933
{
	return Function_45(*iParam0, 1);
}

bool Function_220() //Position: 0x7112 / 28946
{
	return (HUD_IS_FADED() || Function_221(0));
}

bool Function_221(bool bParam0) //Position: 0x7120 / 28960
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

void Function_222(bool bParam0, int iParam1) //Position: 0x71C4 / 29124
{
	struct<5> Var0;
	
	Function_46(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_198(256))
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

void Function_223(bool bParam0) //Position: 0x721A / 29210
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

int Function_224(bool bParam0, int iParam1) //Position: 0x7237 / 29239
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_225() //Position: 0x7248 / 29256
{
	return !Function_162();
}

void Function_226() //Position: 0x7252 / 29266
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

void Function_227(bool bParam0) //Position: 0x7291 / 29329
{
	if (!Function_184(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_230(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_228(var uParam0, int iParam1) //Position: 0x72EC / 29420
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_229(bool bParam0) //Position: 0x7308 / 29448
{
	if (!Function_184(bParam0))
	{
		return 1;
	}
	return Function_228(&(Global_29008[bParam0]), 4);
}

void Function_230(var uParam0, int iParam1) //Position: 0x7324 / 29476
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_231(int iParam0, bool bParam1, int iParam2) //Position: 0x7333 / 29491
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
		if (Function_184(Global_29006))
		{
			Function_230(&(Global_29008[Global_29006]), 131072);
			Function_234(&(Global_29008[Global_29006]), 2097152);
			Function_232(Global_29006);
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
				if (Function_228(&(Global_29008[iVar0]), 4) || Function_228(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_234(&(Global_29008[iVar0]), 2097155);
					Function_230(&(Global_29008[iVar0]), 262144);
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

void Function_232(int iParam0) //Position: 0x743E / 29758
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_233())
			{
				return;
			}
		}
		if (!Function_228(&(Global_29008[iParam0]), 2048))
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

bool Function_233() //Position: 0x74BD / 29885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_228(&(Global_29008[iVar0]), 4) || Function_228(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_234(var uParam0, int iParam1) //Position: 0x7526 / 29990
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

vector3 Function_235(bool bParam0) //Position: 0x753D / 30013
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_236(bool bParam0) //Position: 0x754E / 30030
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

var Function_237(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x7581 / 30081
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
					if (Function_245(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_244(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_243(bVar2))
					{
						if (Function_242(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_245(bVar3, 1))
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
						if (Function_245(bVar3, 1))
						{
							bVar24 = (Function_244(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
							Function_238(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_245(bVar3, 1))
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

void Function_238(var uParam0, int iParam1) //Position: 0x7864 / 30820
{
	*iParam1 = Function_239(uParam0, Function_240(), 0);
	iParam1->f_4 = Function_239(uParam0, Function_240() + 8, Function_240());
	return;
}

var Function_239(var uParam0, int iParam1, bool bParam2) //Position: 0x7887 / 30855
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_133((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_240() //Position: 0x78A6 / 30886
{
	return Function_241(39);
}

int Function_241(bool bParam0) //Position: 0x78B1 / 30897
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

bool Function_242(bool bParam0) //Position: 0x78DF / 30943
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

bool Function_243(bool bParam0) //Position: 0x7901 / 30977
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_244(int iParam0, bool bParam1) //Position: 0x7913 / 30995
{
	if (Function_245(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_245(bool bParam0, int iParam1) //Position: 0x792D / 31021
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_246(int iParam0) //Position: 0x7940 / 31040
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_249(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_41()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_248(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_247(StackVal, Var0, 1, 1, 0);
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
				Function_238(uVar3, &Var13);
				Function_247(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_247(struct<5> Param0) //Position: 0x79E7 / 31207
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_243(Param0))
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
			if (Function_245(bVar1, 1))
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

bool Function_248(int iParam0) //Position: 0x7A67 / 31335
{
	return Function_12(Global_83864.f_1252, iParam0);
}

void Function_249(int iParam0, int iParam1) //Position: 0x7A79 / 31353
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
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_250(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_250(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_250(23, iParam1))
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
			bVar4 = Function_224(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_224(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_250(int iParam0, int iParam1) //Position: 0x7BF6 / 31734
{
	return Function_251(iParam0, iParam1) < 4294967295;
}

int Function_251(int iParam0, int iParam1) //Position: 0x7C05 / 31749
{
	int iVar0;
	
	if (!Function_243(iParam0))
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

void Function_252(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x7C38 / 31800
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
		Function_247(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_253(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7C83 / 31875
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

bool Function_254(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x7D20 / 32032
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
	return Function_199(bParam0, iVar0);
}

void Function_255(bool bParam0) //Position: 0x7D8F / 32143
{
	Function_46(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_256(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7DB0 / 32176
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
	Function_259(bParam0);
	Var6 = { StackVal, StackVal, Function_259(bParam0) };
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
			vVar12.f_4 = Function_257(StackVal, StackVal, StackVal, StackVal, vVar3, Function_207(bVar32));
		}
	}
	return Function_183(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_257(vector3 vParam0, vector3 vParam3) //Position: 0x7E67 / 32359
{
	var uVar0;
	
	Function_258(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_258(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7E81 / 32385
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_259(bool bParam0) //Position: 0x7EA4 / 32420
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_260(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7EB5 / 32437
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

void Function_261() //Position: 0x7EDE / 32478
{
	if (!Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 1, 1);
	return;
}

void Function_262(bool bParam0, int iParam1) //Position: 0x7EF7 / 32503
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
	if (!Function_199(bParam0->f_112, 0))
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
		Function_263(bParam0);
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
				Function_299(1048576);
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

void Function_263(int iParam0) //Position: 0x80F3 / 33011
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

void Function_264(int iParam0, int iParam1) //Position: 0x8134 / 33076
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
		Function_235(bVar0);
		vVar1 = { StackVal, StackVal, Function_235(bVar0) };
		Function_206(bVar0);
		vVar4 = { StackVal, StackVal, Function_206(bVar0) };
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
		iParam0->f_120 = Function_275(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_10(iParam0 + 48, 256);
	}
	else
	{
		Function_235(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_235(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_267(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_266(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_10(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_265(iParam0->f_120);
	return;
}

void Function_265(int iParam0) //Position: 0x82C9 / 33481
{
	Function_201();
	Global_63118 = iParam0;
	return;
}

void Function_266(bool bParam0, bool bParam1) //Position: 0x82D7 / 33495
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_267(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x82EC / 33516
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
	Function_268(&bVar0, uParam2, uParam3, uParam4);
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

void Function_268(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x836E / 33646
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_274(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_273(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_272(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_271(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_270(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_269(&bVar0, uParam1, uParam2, uParam3);
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

void Function_269(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8489 / 33929
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

void Function_270(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x859E / 34206
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

void Function_271(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x86B7 / 34487
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

void Function_272(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x87C1 / 34753
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

void Function_273(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x88C7 / 35015
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

void Function_274(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8977 / 35191
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

var Function_275(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8A2E / 35374
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
	Function_276(&bVar0, uParam2);
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

void Function_276(var uParam0, int iParam1) //Position: 0x8AA5 / 35493
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_278(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_277(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_277(var uParam0, bool bParam1) //Position: 0x8B11 / 35601
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
	Function_206(bParam1);
	vVar3 = { StackVal, StackVal, Function_206(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_207(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_207(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_206(bParam1);
	vVar6 = { StackVal, StackVal, Function_206(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_207(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_207(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_278(var uParam0, bool bParam1) //Position: 0x8BD3 / 35795
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
	Function_206(bParam1);
	vVar3 = { StackVal, StackVal, Function_206(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_207(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_207(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_206(bParam1);
	vVar6 = { StackVal, StackVal, Function_206(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_207(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_207(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_279(int iParam0) //Position: 0x8C95 / 35989
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
				if (Function_243(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_280("MPSplashItem.s1"));
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
				if (Function_243(bVar2))
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

var Function_280(int iParam0) //Position: 0x8FBB / 36795
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

struct<64> Function_281(bool bParam0) //Position: 0x91CF / 37327
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_300())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_283();
	}
	if (!Function_282(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_282(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_282(bool bParam0) //Position: 0x9275 / 37493
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

struct<64> Function_283() //Position: 0x9316 / 37654
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_284(var uParam0, int iParam1) //Position: 0x9327 / 37671
{
	if (Function_288(uParam0, iParam1))
	{
		Function_287(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_285(int iParam0) //Position: 0x9341 / 37697
{
	Function_86(&Global_79378, 0, iParam0);
	return;
}

void Function_286(bool bParam0, bool bParam1) //Position: 0x9351 / 37713
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
			if (Function_243(bVar2))
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

void Function_287(var uParam0, int iParam1) //Position: 0x93CD / 37837
{
	*uParam0 = *iParam1;
	return;
}

bool Function_288(var uParam0, int iParam1) //Position: 0x93D9 / 37849
{
	return *uParam0 == *iParam1;
}

void Function_289(int iParam0, int iParam1) //Position: 0x93E6 / 37862
{
	Function_290(iParam0, (Function_153(iParam0) + iParam1));
	return;
}

void Function_290(int iParam0, int iParam1) //Position: 0x93F9 / 37881
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_291(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9422 / 37922
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_292(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_292(int iParam0) //Position: 0x949D / 38045
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

var Function_293(int iParam0, bool bParam1, int iParam2) //Position: 0x94DC / 38108
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_282(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_294(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_294(bool bParam0, int iParam1, bool bParam2) //Position: 0x9523 / 38179
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_194(iParam1, bParam2);
	}
	if (!Function_282(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_295(iParam1), 64);
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

var Function_295(int iParam0) //Position: 0x95A4 / 38308
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

int Function_296(int iParam0) //Position: 0x98BD / 39101
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

float Function_297() //Position: 0x98D3 / 39123
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

void Function_298(int iParam0) //Position: 0x9909 / 39177
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_299(int iParam0) //Position: 0x991A / 39194
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

bool Function_300() //Position: 0x9973 / 39283
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_301(bool bParam0) //Position: 0x9981 / 39297
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_302() //Position: 0x9993 / 39315
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_303(GET_LOCAL_SLOT(), 1, 0);
}

int Function_303(bool bParam0, bool bParam1, bool bParam2) //Position: 0x99AA / 39338
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_282(bParam0))
			{
				if (!Function_294(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_304() //Position: 0x99EE / 39406
{
	return Function_195(2);
}

var Function_305(int iParam0, int iParam1) //Position: 0x99F8 / 39416
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_306(bool bParam0, var uParam1, bool bParam2) //Position: 0x9A0B / 39435
{
	var uVar0;
	int iVar1;
	
	if (iLocal_913 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_909, 1.0f, 0);
	}
	Local_921.f_16 = uParam1;
	Local_921.f_20 = bParam2;
	Function_333(bParam0, 0, 0, 0);
	Function_324(bParam0, 40744);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_219(&Global_78578 + 96))
		{
			Function_323(&Global_78578 + 96);
		}
		Function_322(4294967295);
	}
	CANCEL_DEADEYE();
	Function_308(0, &uVar0, &iVar1);
	UI_EXIT("XpHud");
	if (Function_338(bParam0))
	{
		Function_307(bParam0);
	}
	return;
}

void Function_307(bool bParam0) //Position: 0x9A86 / 39558
{
	if (!Function_338(bParam0))
	{
	}
	if (!Function_40(2048))
	{
		Function_299(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

var Function_308(bool bParam0, var uParam1, int iParam2) //Position: 0x9AB9 / 39609
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	*uParam1 = 100000.0f;
	if (Function_219(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_323(&Global_78578 + 96);
		}
		*uParam1 = Function_215(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_282(bVar1))
		{
			iVar0 = (iVar0 + Function_320(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_319(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_317(iVar3, &uVar4, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_316();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_314(bVar1, &iVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_311(iVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_309(iVar0, *iParam2, iLocal_920);
	return iVar0;
}

void Function_309(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9B8C / 39820
{
	bool bVar0;
	
	bVar0 = Function_310(1);
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

var Function_310(int iParam0) //Position: 0x9BDA / 39898
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_35(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && iParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_35(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_311(int iParam0) //Position: 0x9C27 / 39975
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_312(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

void Function_312(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x9C54 / 40020
{
	bool bVar0;
	
	*iParam1 = Function_313(iParam0);
	*uParam2 = Function_239(*iParam1, 32, 20);
	*iParam1 = Function_239(*iParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

int Function_313(int iParam0) //Position: 0x9CA5 / 40101
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_314(bool bParam0, int iParam1, int iParam2) //Position: 0x9CC5 / 40133
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_310(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_315(bParam0, 1);
	uVar2 = Function_315(bParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_315(int iParam0, bool bParam1) //Position: 0x9D06 / 40198
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

int Function_316() //Position: 0x9D2C / 40236
{
	bool bVar0;
	
	bVar0 = Function_310(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "size");
}

void Function_317(int iParam0, var uParam1, int iParam2) //Position: 0x9D4F / 40271
{
	float fVar0;
	
	fVar0 = Function_318(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*uParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_318(int iParam0) //Position: 0x9D80 / 40320
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_319(float fParam0) //Position: 0x9DA0 / 40352
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_317(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_320(bool bParam0) //Position: 0x9DCD / 40397
{
	return Function_321(0, bParam0);
}

int Function_321(int iParam0, bool bParam1) //Position: 0x9DD9 / 40409
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_153(iParam0);
	}
	if (!Function_282(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_322(int iParam0) //Position: 0x9E40 / 40512
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_323(int iParam0) //Position: 0x9E54 / 40532
{
	if (Function_219(iParam0))
	{
		if (!Function_218(iParam0))
		{
			Function_216();
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

void Function_324(bool bParam0, int iParam1) //Position: 0x9F1C / 40732
{
	bParam0->f_180 = iParam1;
	return;
}

int Function_325() //Position: 0x9F28 / 40744
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (Local_921)
	{
		case 0x00000000:
			Function_332(Local_921.f_16);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(Local_921.f_20, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_331(&Local_921 + 4))
			{
				Function_329(&Local_921 + 4);
			}
			Local_921 = 1;
			break;
		
		case 0x00000001:
			if (Function_352(&Local_921 + 4) <= 7.0f)
			{
				Function_328(&iVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_326() >= 4294967295)
				{
					Function_312(iVar2, &iVar0, &bVar1, bVar3);
					Function_158(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					Local_921 = 3;
				}
				else
				{
					Local_921 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_352(&Local_921 + 4) <= 5.0f)
			{
				Local_921 = 3;
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

int Function_326() //Position: 0xA04A / 41034
{
	if (!Function_327())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_327() //Position: 0xA05F / 41055
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_328(int iParam0, var uParam1, int iParam2) //Position: 0xA06C / 41068
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_310(0);
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

void Function_329(int iParam0) //Position: 0xA0BF / 41151
{
	if (!Function_331(iParam0))
	{
		Function_330(iParam0, 0.0f);
	}
	return;
}

void Function_330(var uParam0, float fParam1) //Position: 0xA0D4 / 41172
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_331(int iParam0) //Position: 0xA0F5 / 41205
{
	return Function_45(*iParam0, 1);
}

void Function_332(bool bParam0) //Position: 0xA102 / 41218
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_333(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA16C / 41324
{
	if (bParam1)
	{
		Function_154(7, 1);
		Function_154(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_304())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_150(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_334())
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

bool Function_334() //Position: 0xA21A / 41498
{
	return Function_195(16);
}

bool Function_335() //Position: 0xA225 / 41509
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_337(bVar0))
		{
			if (Function_336(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_336(bool bParam0) //Position: 0xA252 / 41554
{
	if (Function_337(bParam0))
	{
		if (Function_294(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_337(bool bParam0) //Position: 0xA277 / 41591
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_282(bParam0);
}

bool Function_338(bool bParam0) //Position: 0xA28D / 41613
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_339() //Position: 0xA2A1 / 41633
{
	Function_343(4);
	return;
}

void Function_340() //Position: 0xA2AB / 41643
{
	if (Local_572.f_68)
	{
		if (!Function_194(4096, 1))
		{
			Function_46(4096, 1);
		}
		else if (Function_342())
		{
			Function_341(&Local_572);
		}
	}
	return;
}

void Function_341(var uParam0) //Position: 0xA2DA / 41690
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

bool Function_342() //Position: 0xA321 / 41761
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
		if (Function_282(bVar0))
		{
			iVar1++;
			if (Function_294(bVar0, 4096, 1))
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

void Function_343(int iParam0) //Position: 0xA3A5 / 41893
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
			Function_344(iParam0);
		}
	}
	return;
}

void Function_344(bool bParam0) //Position: 0xA3D7 / 41943
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_345() //Position: 0xA3E6 / 41958
{
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		Local_783[GET_LOCAL_SLOT()6] = Local_880;
		Local_783[GET_LOCAL_SLOT()6].f_4 = StackVal;
		Local_783[GET_LOCAL_SLOT()6].f_8 = StackVal;
		Local_783[GET_LOCAL_SLOT()6].f_12 = Local_880.f_12;
		Local_783[GET_LOCAL_SLOT()6].f_16 = Local_880.f_16;
		Local_783[GET_LOCAL_SLOT()6].f_20 = Local_880.f_20;
	}
	return;
}

void Function_346(int iParam0, int iParam1) //Position: 0xA44B / 42059
{
	*iParam0 = iParam1;
	return;
}

void Function_347(int iParam0) //Position: 0xA456 / 42070
{
	Function_330(iParam0, 0.0f);
	return;
}

void Function_348(bool bParam0) //Position: 0xA462 / 42082
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;
	float fVar10;
	var uVar11;
	var uVar12;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Invalid layout passed to COOP_REPORT_POSITION_FOR_ALL_SQUADS()");
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	bVar8 = false;
	bVar9 = false;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_SQUAD_FROM_OBJECT(bVar1);
		if (SQUAD_IS_VALID(bVar2))
		{
			bVar8 = false;
			while (bVar8 < (SQUAD_GET_SIZE(bVar2) - 1))
			{
				bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bVar2, bVar8);
				if (IS_ACTOR_VALID(bVar3))
				{
					bVar9 = false;
					while (bVar9 < 15)
					{
						if (IS_SLOT_VALID(bVar9))
						{
							bVar4 = GET_SLOT_ACTOR(bVar9);
							if (IS_ACTOR_VALID(bVar4))
							{
								Function_235(bVar4);
								vVar5 = { StackVal, StackVal, Function_235(bVar4) };
								fVar10 = GET_ACTOR_VISION_MAX_RANGE(bVar3);
								uVar11 = Function_351(bVar3);
								uVar12 = Function_350(fVar10, uVar11);
								if (Function_349(bVar3, bVar4, uVar12))
								{
									MEMORY_REPORT_POSITION(bVar3, bVar4, &vVar5);
								}
							}
						}
						bVar9++;
					}
					bVar9 = false;
				}
				bVar8++;
			}
			bVar8 = false;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_349(bool bParam0, bool bParam1, int iParam2) //Position: 0xA585 / 42373
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

var Function_350(int iParam0, int iParam1) //Position: 0xA696 / 42646
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_351(bool bParam0) //Position: 0xA6A9 / 42665
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(bParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

float Function_352(int iParam0) //Position: 0xA6C2 / 42690
{
	if (Function_331(iParam0))
	{
		if (Function_353(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_353(int iParam0) //Position: 0xA78A / 42890
{
	return Function_45(*iParam0, 2);
}

void Function_354(int iParam0, bool bParam1, bool bParam2) //Position: 0xA797 / 42903
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(*iParam0);
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

void Function_355() //Position: 0xA7D9 / 42969
{
	switch (iLocal_519)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_608();
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			break;
		
		case 0x00000000:
			Function_589();
			break;
		
		case 0x00000001:
			Function_585();
			break;
		
		case 0x00000002:
			Function_576();
			break;
		
		case 0x00000003:
			Function_574();
			break;
		
		case 0x00000004:
			Function_571();
			break;
		
		case 0x00000005:
			Function_553();
			break;
		
		case 0x00000006:
			Function_547();
			break;
		
		case 0x00000007:
			Function_542();
			break;
		
		case 0x00000008:
			Function_529();
			break;
		
		case 0x00000009:
			Function_479();
			break;
		
		case 0x0000000A:
			Function_452();
			break;
		
		case 0x00000065:
			Function_356();
			break;
	}
	return;
}

void Function_356() //Position: 0xA89D / 43165
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (Function_450())
	{
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_323(&Global_78578 + 96);
			}
			Function_449();
			if (iLocal_730)
			{
				if (Function_155())
				{
					UPDATE_PROFILE_STAT("CoopNOSAdvPassed", 1.0f, 0);
				}
				else
				{
					UPDATE_PROFILE_STAT("CoopNOSPassed", 1.0f, 0);
				}
				Function_26(&bLocal_609, 1);
				Function_448(106);
			}
			else
			{
				Function_448(106);
			}
			break;
		
		case 0x00000069:
			if (HUD_IS_FADED())
			{
				Function_26(&bLocal_609, 1);
				Function_207(Local_149.f_1316);
				vVar0 = { StackVal, StackVal, Function_207(Local_149.f_1316) };
				Function_206(Local_149.f_1316);
				vVar3 = { StackVal, StackVal, Function_206(Local_149.f_1316) };
				STREAMING_SET_CUTSCENE_MODE(1);
				STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
				Function_448(1);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4) && STREAMING_IS_WORLD_LOADED())
			{
				if (Function_434(3, 1, 0x3f800000))
				{
					Function_26(&bLocal_609, 0);
					Function_182(Local_149.f_1320, 0);
					Function_429();
					Function_428();
					Function_448(3);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_395())
			{
				Function_448(4);
			}
			break;
		
		case 0x00000004:
			if (Function_434(106, 1, 0x3f800000))
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			Function_363();
			if (Function_338(&bLocal_609))
			{
				if (iLocal_730)
				{
					Function_324(&bLocal_609, 43921);
					Function_448(0);
					Function_359(&bLocal_609, "mp_you_won", 0, 0, 0, 0);
					Function_358("MPCOOP_LASTOBJMISSCOMPLETE", 0);
				}
				else
				{
					Function_359(&bLocal_609, "mp_you_lost", 0, 0, 0, 0);
				}
				Function_357(&bLocal_609, "MEX_MISSION_COMPLETE_SONG_01");
				Function_333(&bLocal_609, iLocal_730, 0, 0);
				Function_307(&bLocal_609);
			}
			NET_LOG(bLocal_899, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", false, false, false, false);
			break;
	}
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0xAAD6 / 43734
{
	uParam0->f_40 = iParam1;
	return;
}

void Function_358(bool bParam0, bool bParam1) //Position: 0xAAE2 / 43746
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

void Function_359(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xAB22 / 43810
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

int Function_360() //Position: 0xAB91 / 43921
{
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_361(&uLocal_731, 1, 0, 4294967295, 4294967295);
			DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
			DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
			DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
			DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
			DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
			Function_449();
			Function_171(0);
			Function_448(3);
			break;
		
		case 0x00000003:
			if (Function_395())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_361(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xAC38 / 44088
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_362(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_362(int iParam0) //Position: 0xAC5C / 44124
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

void Function_363() //Position: 0xB1AF / 45487
{
	if (Function_155())
	{
		Function_364(1, 89);
	}
	else
	{
		Function_364(1, 35);
	}
	return;
}

void Function_364(bool bParam0, int iParam1) //Position: 0xB1CA / 45514
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	uVar2 = Function_308(bParam0, &bVar1, &iVar0);
	PLAYSTAT_INT("Deaths", Function_394(GET_LOCAL_SLOT()));
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_150(29), Function_393((Function_153(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_322(iVar0);
		}
		Function_9(&Global_84364, Function_392(iParam1));
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
		Function_391(5);
		Function_390(iParam1, bVar1);
		Function_388(iParam1);
		Function_384(&Global_50170, 58, 0, 0, 250.0f, 5);
		Function_384(&Global_50170, 60, 2, 0, 500.0f, 5);
		if (Global_50170[6022].f_28 > 1)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(58))
			{
				AWARD_ACHIEVEMENT(58);
			}
		}
		Function_384(&Global_50170, 59, 1, 0, 500.0f, 5);
		Function_384(&Global_50170, 62, 3, 0, 250.0f, 5);
		Function_384(&Global_50170, 61, 4, 0, 250.0f, 5);
		Function_384(&Global_50170, 63, 5, 0, 250.0f, 5);
		Function_384(&Global_50170, 64, 6, 0, 250.0f, 5);
		Function_383(iParam1);
		Function_377(iParam1);
		Function_384(&Global_50170, 161, 0, 1, 250.0f, 5);
		Function_384(&Global_50170, 163, 2, 1, 500.0f, 5);
		Function_384(&Global_50170, 162, 1, 1, 500.0f, 5);
		Function_384(&Global_50170, 165, 3, 1, 250.0f, 5);
		Function_384(&Global_50170, 164, 4, 1, 250.0f, 5);
		Function_384(&Global_50170, 166, 5, 1, 250.0f, 5);
		Function_384(&Global_50170, 167, 6, 1, 250.0f, 5);
		Function_384(&Global_50170, 168, 7, 1, 250.0f, 5);
		if (Global_84364 & 63 == 63)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
			{
				AWARD_ACHIEVEMENT(50);
			}
			Function_375(38);
			if (!Function_45(Global_84364.f_740, 1))
			{
				Function_10(&Global_84364 + 740, 1);
				Function_374();
				DECOR_SET_BOOL(Function_310(1), "Unlock_Adv", true);
			}
		}
		if (iVar0 != 2 || iVar0 != 1)
		{
			if (!Function_373(1))
			{
				Function_372(1);
			}
			if (Function_370(iParam1))
			{
				DECOR_SET_BOOL(Function_310(1), "Unlock_Silver", true);
			}
			if (iVar0 == 2)
			{
				Function_369(iParam1);
				Function_368(iParam1);
			}
		}
		Function_367();
		Function_366();
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
		{
			if (Function_313(3) == 2)
			{
				AWARD_ACHIEVEMENT(51);
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(54))
		{
			bVar3 = false;
			while (bVar3 <= 4)
			{
				if (Function_282(bVar3))
				{
					iVar4 = (iVar4 + Function_365(12, bVar3));
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
		Function_322(4294967295);
	}
	return;
}

bool Function_365(int iParam0, bool bParam1) //Position: 0xB490 / 46224
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
	if (!Function_282(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_366() //Position: 0xB4FE / 46334
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

void Function_367() //Position: 0xB543 / 46403
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

int Function_368(int iParam0) //Position: 0xB588 / 46472
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

int Function_369(int iParam0) //Position: 0xB69A / 46746
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

bool Function_370(int iParam0) //Position: 0xB7AC / 47020
{
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			if (!Function_45((*&Global_84364 + 712)[0], 1))
			{
				Function_10(&Global_84364 + 712[0], 1);
				Function_371(0);
				return 1;
			}
			break;
		
		case 0x00000021:
		case 0x0000002F:
			if (!Function_45((*&Global_84364 + 712)[1], 1))
			{
				Function_10(&Global_84364 + 712[1], 1);
				Function_371(1);
				return 1;
			}
			break;
		
		case 0x00000026:
		case 0x0000005B:
			if (!Function_45((*&Global_84364 + 712)[2], 1))
			{
				Function_10(&Global_84364 + 712[2], 1);
				Function_371(2);
				return 1;
			}
			break;
		
		case 0x00000022:
		case 0x00000058:
			if (!Function_45((*&Global_84364 + 712)[3], 1))
			{
				Function_10(&Global_84364 + 712[3], 1);
				Function_371(3);
				return 1;
			}
			break;
		
		case 0x00000027:
		case 0x0000005C:
			if (!Function_45((*&Global_84364 + 712)[4], 1))
			{
				Function_10(&Global_84364 + 712[4], 1);
				Function_371(4);
				return 1;
			}
			break;
		
		case 0x00000023:
		case 0x00000059:
			if (!Function_45((*&Global_84364 + 712)[5], 1))
			{
				Function_10(&Global_84364 + 712[5], 1);
				Function_371(5);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

void Function_371(int iParam0) //Position: 0xB8FA / 47354
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

void Function_372(int iParam0) //Position: 0xBC9D / 48285
{
	Function_9(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_373(bool bParam0) //Position: 0xBCAF / 48303
{
	return Function_12(Global_83864.f_1256, bParam0);
}

void Function_374() //Position: 0xBCC1 / 48321
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

void Function_375(int iParam0) //Position: 0xBE17 / 48663
{
	if (!Function_45((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_376(iParam0);
		Function_10(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_376(int iParam0) //Position: 0xBE44 / 48708
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

void Function_377(int iParam0) //Position: 0xBE81 / 48769
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_382(iParam0)], 1);
	if (bVar0)
	{
		if (Function_153(3) == 0)
		{
			switch (iParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_378(&Global_50170, 87, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_378(&Global_50170, 101, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_378(&Global_50170, 115, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_378(&Global_50170, 129, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_378(&Global_50170, 143, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_378(&Global_50170, 157, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_378(var uParam0, int iParam1, float fParam2, int iParam3) //Position: 0xBF5E / 48990
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_379(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, 1, 1, fParam2, iParam3, 0);
			break;
	}
}

void Function_379(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, int iParam8) //Position: 0xBFA0 / 49056
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_148(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_381(iParam0);
		Function_380(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
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

void Function_380(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xC008 / 49160
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

var Function_381(int iParam0) //Position: 0xC085 / 49285
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

int Function_382(int iParam0) //Position: 0xC3D3 / 50131
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

void Function_383(bool bParam0) //Position: 0xC447 / 50247
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_382(bParam0)], 1);
	if (bVar0)
	{
		if (Function_150(12) == 0)
		{
			switch (bParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_378(&Global_50170, 86, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_378(&Global_50170, 100, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_378(&Global_50170, 114, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_378(&Global_50170, 128, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_378(&Global_50170, 142, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_378(&Global_50170, 156, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_384(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5) //Position: 0xC525 / 50469
{
	bool bVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((Function_387(iVar1, 0, iParam2) && !bParam3) && !Function_386(iVar1, 0, iParam2))
				{
					uParam0[iParam122]->f_28++;
					Function_385(iVar1, 0, iParam2);
				}
				else if ((Function_387(iVar1, 1, iParam2) && !Function_386(iVar1, 1, iParam2)) && bParam3)
				{
					uParam0[iParam122]->f_28++;
					Function_385(iVar1, 1, iParam2);
				}
				iVar1++;
			}
			bVar0 = uParam0[iParam122]->f_28;
			Function_379(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, 6, fParam4, iParam5, 0);
			break;
	}
}

void Function_385(int iParam0, int iParam1, int iParam2) //Position: 0xC5EC / 50668
{
	Function_10(&Global_55869[iParam037][iParam118] + 36[iParam2], 1);
	return;
}

bool Function_386(int iParam0, int iParam1, int iParam2) //Position: 0xC607 / 50695
{
	return Function_45((*&Global_55869[iParam037][iParam118] + 36)[iParam2], 1);
}

bool Function_387(int iParam0, int iParam1, int iParam2) //Position: 0xC622 / 50722
{
	return Function_45(Global_55869[iParam037][iParam118][iParam2], 1);
}

void Function_388(int iParam0) //Position: 0xC63B / 50747
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
	Function_389(iVar0, iVar2, 0);
	Function_389(iVar0, iVar2, iVar1);
	if (Function_150(12) == 0)
	{
		Function_389(iVar0, iVar2, 2);
	}
	if (Function_153(3) != 0 && Function_150(12) != 0)
	{
		Function_389(iVar0, iVar2, 1);
	}
	return;
}

void Function_389(int iParam0, int iParam1, int iParam2) //Position: 0xC775 / 51061
{
	Function_10(&(Global_55869[iParam037][iParam118][iParam2]), 1);
	return;
}

void Function_390(int iParam0, float fParam1) //Position: 0xC78E / 51086
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_382(iParam0)], 1);
	bVar1 = Function_45(Global_84364.f_740, 1);
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0x00000024:
			case 0x0000005A:
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 77, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 78, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_378(&Global_50170, 79, 500.0f, 5);
				}
				break;
			
			case 0x00000021:
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_378(&Global_50170, 91, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 92, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_378(&Global_50170, 93, 500.0f, 5);
				}
				break;
			
			case 0x00000026:
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 105, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_378(&Global_50170, 106, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 107, 500.0f, 5);
				}
				break;
			
			case 0x00000022:
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_378(&Global_50170, 119, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_378(&Global_50170, 120, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_378(&Global_50170, 121, 500.0f, 5);
				}
				break;
			
			case 0x00000027:
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 133, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_378(&Global_50170, 134, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 135, 500.0f, 5);
				}
				break;
			
			case 0x00000023:
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_378(&Global_50170, 147, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_378(&Global_50170, 148, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_378(&Global_50170, 149, 500.0f, 5);
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
					Function_378(&Global_50170, 169, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 170, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_378(&Global_50170, 171, 500.0f, 5);
				}
				break;
			
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_378(&Global_50170, 172, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 173, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_378(&Global_50170, 174, 500.0f, 5);
				}
				break;
			
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 175, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_378(&Global_50170, 176, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 177, 500.0f, 5);
				}
				break;
			
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_378(&Global_50170, 178, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_378(&Global_50170, 179, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_378(&Global_50170, 180, 500.0f, 5);
				}
				break;
			
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_378(&Global_50170, 181, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_378(&Global_50170, 182, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_378(&Global_50170, 183, 500.0f, 5);
				}
				break;
			
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_378(&Global_50170, 184, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_378(&Global_50170, 185, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_378(&Global_50170, 186, 500.0f, 5);
				}
				break;
			
			default:
				return;
			}
	}
	return;
}

void Function_391(int iParam0) //Position: 0xCBE3 / 52195
{
	Function_9(&Global_83864 + 1252, iParam0);
	return;
}

int Function_392(int iParam0) //Position: 0xCBF5 / 52213
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

var Function_393(int iParam0, bool bParam1) //Position: 0xCC5A / 52314
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

bool Function_394(bool bParam0) //Position: 0xCFCD / 53197
{
	return Function_365(12, bParam0);
}

bool Function_395() //Position: 0xCFDA / 53210
{
	var uVar0;
	
	switch (Local_528)
	{
		case 0x000003E8:
			if (Function_427(&uLocal_1005))
			{
				iLocal_1012 = 15;
				Function_347(&Local_528 + 4);
				Function_422();
				Function_421();
				if (UNK_0xCDA6BB6C())
				{
					uVar0 = UNK_0xFF1F1730();
					Local_528.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
				}
				else
				{
					Local_528.f_16 = Function_417(Local_149, 0, Local_149, 1, 0, 0);
					if (IS_OBJECT_VALID(Local_528.f_16))
					{
					}
					else
					{
						LOG_ERROR("NosalidaMP_CO_cutscenefinal - Failed to create NosalidaMP_CO_cutscenefinal_cutscene");
					}
				}
				Local_528 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_528.f_16), false))
			{
				Function_416(Global_34573, 1, 1);
				Function_429();
				Function_428();
				Local_528 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_182(Local_149.f_1320, 1);
				Local_528 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_434(1003, 1, 0x3f800000))
			{
				Function_415();
				Local_528 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (Function_352(&Local_528 + 4) < 2.0f)
			{
				DECOR_SET_BOOL(Local_149, "__CameraReady", true);
				Local_528 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_398(&uLocal_1005, 57307) && GET_CUTSCENEOBJECT_SEQUENCE(Local_528.f_16) != 2)
			{
				Function_347(&Local_528 + 4);
				Function_397();
				Local_528 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_221(1))
			{
				Function_416(Global_34573, 0, 1);
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_396();
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Local_149, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_528.f_16))
				{
					DESTROY_OBJECT(Local_528.f_16);
				}
				Local_528 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_528 = 1104;
			}
			break;
	}
	return 0;
}

void Function_396() //Position: 0xD1F7 / 53751
{
	Function_47(2, 0, 1, 0, 1, 0, 0, 1, 1, 1);
	return;
}

void Function_397() //Position: 0xD20A / 53770
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_398(var uParam0, int iParam1) //Position: 0xD224 / 53796
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	struct<17> Var3;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = fVar0 <= uParam0->f_20;
	switch (*uParam0)
	{
		case 0x00000004:
			UI_ENTER("HudMPNoFun");
			HUD_FADE_IN(1.0f, 1065353216);
			uParam0->f_12 = 0;
			uParam0->f_24 = 0;
			*uParam0 = 5;
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
				uParam0->f_20 = (fVar0 + 2.0f);
				Function_412(uParam0);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (bVar1)
			{
				if (Function_409(uParam0))
				{
					uParam0->f_20 = (fVar0 + 3.3f);
				}
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bVar1)
			{
				Function_407(uParam0->f_24, 0);
				uParam0->f_12 = 4294967295;
				uParam0->f_16 = 4294967295;
				uParam0->f_20 = (fVar0 + 1.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (bVar1)
			{
				if (Function_406(uParam0))
				{
					bVar2 = Function_405(uParam0->f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_404(uParam0->f_12)), I2STR(bVar2), false);
					Function_403("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					uParam0->f_20 = (fVar0 + 1.8f);
					*uParam0 = 8;
					uParam0->f_24 = (uParam0->f_24 + bVar2);
				}
				else
				{
					uParam0->f_20 = (fVar0 + 0.0f);
					if (Function_402() >= 0)
					{
						*uParam0 = 11;
						uParam0->f_12 = 0;
					}
					else
					{
						uParam0->f_20 = ((1.5f - 1.0f) + fVar0);
						*uParam0 = 13;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (bVar1)
			{
				Function_407(uParam0->f_24, 0);
				uParam0->f_20 = (fVar0 + 1.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x0000000B:
			if (uParam0->f_12 <= Function_402())
			{
				if (bVar1)
				{
					Function_401(uParam0);
					uParam0->f_20 = (fVar0 + 1.8f);
					*uParam0 = 12;
				}
			}
			else
			{
				uParam0->f_20 = (fVar0 + 1.5f);
				*uParam0 = 13;
			}
			break;
		
		case 0x0000000C:
			if (bVar1)
			{
				Function_407(uParam0->f_24, 0);
				uParam0->f_20 = (fVar0 + 1.0f);
				uParam0->f_12++;
				*uParam0 = 11;
			}
			break;
		
		case 0x0000000D:
			if (bVar1)
			{
				Function_407(uParam0->f_24, 1);
				uParam0->f_20 = (fVar0 + 2.5f);
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bVar1)
			{
				Function_400(1);
				uParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_310(1), "Unlock_Silver"))
				{
					*uParam0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_310(1), "Unlock_Adv"))
				{
					*uParam0 = 16;
				}
				else
				{
					*uParam0 = 17;
				}
			}
			break;
		
		case 0x0000000F:
			if (bVar1)
			{
				Function_399(1);
				uParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_310(1), "Unlock_Adv"))
				{
					*uParam0 = 16;
				}
				else
				{
					*uParam0 = 17;
				}
			}
			break;
		
		case 0x00000010:
			if (bVar1)
			{
				Function_399(0);
				uParam0->f_20 = (fVar0 + 2.5f);
				*uParam0 = 17;
			}
			break;
		
		case 0x00000011:
			if (bVar1)
			{
				Function_157(uParam0);
				uParam0->f_20 = (fVar0 + 0.5f);
				*uParam0 = 19;
			}
			break;
		
		case 0x00000013:
			NET_LOG(true, "VICTORY SEQUENCE", "Sequence complete!", false, false, false, false);
			return 1;
			break;
	}
	return 0;
}

void Function_399(bool bParam0) //Position: 0xD77E / 55166
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_403("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_403("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_400(bool bParam0) //Position: 0xD80F / 55311
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_328(&iVar2, &iVar0, &iVar1);
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
	Function_403(bVar3);
	return;
}

void Function_401(var uParam0) //Position: 0xD934 / 55604
{
	bool bVar0;
	int iVar1;
	
	Function_314(uParam0->f_12, &iVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(iVar1), I2STR(bVar0), false);
	Function_403("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	uParam0->f_24 = (uParam0->f_24 + bVar0);
	return;
}

int Function_402() //Position: 0xD9CA / 55754
{
	return Function_316();
}

void Function_403(bool bParam0) //Position: 0xD9D3 / 55763
{
	UI_SET_TEXT("MPSplashItem.s1", bParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_404(int iParam0) //Position: 0xDA2D / 55853
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

int Function_405(int iParam0) //Position: 0xDBD1 / 56273
{
	return Function_320(iParam0);
}

bool Function_406(int iParam0) //Position: 0xDBDC / 56284
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
			iVar1 = Function_405(bVar0);
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

void Function_407(bool bParam0, bool bParam1) //Position: 0xDC56 / 56406
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
	Function_408(1);
	return;
}

void Function_408(bool bParam0) //Position: 0xDD29 / 56617
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (bParam0)
	{
		Function_403("Common_Null");
	}
	return;
}

bool Function_409(int iParam0) //Position: 0xDDAE / 56750
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_219(&Global_78578 + 96))
	{
		fVar1 = Function_215(&Global_78578 + 96);
	}
	Var2 = { StackVal, StackVal, StackVal, Function_411(fVar1) };
	iVar0 = Function_410(fVar1);
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

var Function_410(int iParam0) //Position: 0xDF22 / 57122
{
	int iVar0;
	int iVar1;
	
	if (Function_326() >= 4294967295)
	{
		iVar1 = Function_319(iParam0);
		if (iVar1 >= 4294967295)
		{
			Function_317(iVar1, &iParam0, &iVar0);
		}
	}
	return iVar0;
}

struct<16> Function_411(var uParam0) //Position: 0xDF47 / 57159
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

void Function_412(int iParam0) //Position: 0xDFB8 / 57272
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	Function_328(&uVar2, &iVar0, &uVar1);
	if (iVar0 >= 4294967295)
	{
		Function_312(iVar0, &uVar2, iParam0 + 8, uVar1);
	}
	return;
}

int Function_413() //Position: 0xDFDB / 57307
{
	switch (iLocal_1012)
	{
		case 0x0000000F:
			if (Function_352(&Local_528 + 4) < 2.0f)
			{
				Function_414();
				iLocal_1012 = 25;
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

void Function_414() //Position: 0xE01A / 57370
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene2_v1_AA", "TRiv_Scene2_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene2_v1_AB", "TRiv_Scene2_v1_AB", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415() //Position: 0xE0A1 / 57505
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

void Function_416(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE0D0 / 57552
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

var Function_417(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xE16A / 57706
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "NosalidaMP_CO_cutscenefinal", 2, 1);
	}
	Function_418(&bVar0, uParam2);
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

void Function_418(var uParam0, char* cParam1) //Position: 0xE1F3 / 57843
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_420(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_419(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_419(int iParam0) //Position: 0xE256 / 57942
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.6258f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4748.338f, 3.859439f, 3988.244f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.013091f, -0.755817f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_420(var uParam0) //Position: 0xE2B9 / 58041
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 49.6258f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4744.483f, 3.817139f, 3988.253f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.003925f, -0.102893f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_421() //Position: 0xE31C / 58140
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_422() //Position: 0xE32E / 58158
{
	Function_423(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_423(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xE343 / 58179
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
				Function_235(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_52(), 2, Function_235(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_426()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_426()));
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
	if (Function_425(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_424(0x4000000);
	}
	if (Function_425(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_424(0x8000000);
	}
}

void Function_424(int iParam0) //Position: 0xE5F1 / 58865
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

bool Function_425(int iParam0) //Position: 0xE625 / 58917
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_426() //Position: 0xE641 / 58945
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

bool Function_427(int iParam0) //Position: 0xE6C0 / 59072
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

void Function_428() //Position: 0xE7A5 / 59301
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 51, 0));
	return;
}

void Function_429() //Position: 0xE7B5 / 59317
{
	int iVar0;
	
	iVar0 = 0;
	Function_433();
	Function_431();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Function_430(iVar0);
		iVar0++;
	}
	return;
}

void Function_430(int iParam0) //Position: 0xE7DB / 59355
{
	if (iParam0 > 0 || iParam0 <= 5)
	{
		LOG_ERROR("invalid index sent to START_FIRE");
		return;
	}
	FIRE_CREATE_IN_VOLUME(StackVal, Local_718[iParam02], 30, 1);
	return;
}

void Function_431() //Position: 0xE82B / 59435
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Function_432(StackVal, Local_718[iVar02]);
		iVar0++;
	}
	return;
}

void Function_432(var uParam0, var uParam1) //Position: 0xE856 / 59478
{
	FIRE_SET_CONTROL_VOLUME(uParam0, uParam1);
	FIRE_SET_EXPIRE_ALLOWED(uParam0, 0);
	FIRE_SET_GROW_ALLOWED(uParam0, 1);
	FIRE_SET_DAMAGE_ALLOWED(uParam0, 1);
	FIRE_SET_TARGET_FILL_PERCENT(uParam0, 0.9f);
	FIRE_SET_GROW_RATE(uParam0, 6.0f);
	FIRE_SET_MAX_FLAMES(uParam0, 6);
	return;
}

void Function_433() //Position: 0xE88B / 59531
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_718[iVar02] = FIRE_CREATE_HANDLE();
		Local_718[iVar02].f_4 = (*&Local_149 + 740)[iVar0];
		iVar0++;
	}
	return;
}

bool Function_434(bool bParam0, bool bParam1, float fParam2) //Position: 0xE8C2 / 59586
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_447(bParam0);
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
	if (Function_446(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_445(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_444(bParam0, iVar6, &uVar7))
	{
		if (Function_443())
		{
			if (!Function_442(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_441(&Var0, 1);
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
				if (Function_435(bParam0))
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

bool Function_435(int iParam0) //Position: 0xEB15 / 60181
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_440(iVar0))
		{
			iVar1 = Function_436(iVar0);
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

int Function_436(int iParam0) //Position: 0xEB58 / 60248
{
	int iVar0;
	
	Function_439(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_438(&iVar0, iParam0);
	}
	return Function_437(&iVar0);
}

int Function_437(int iParam0) //Position: 0xEB7F / 60287
{
	return *iParam0;
}

void Function_438(var uParam0, int iParam1) //Position: 0xEB88 / 60296
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_439(int iParam0) //Position: 0xEB9B / 60315
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_440(int iParam0) //Position: 0xEBA9 / 60329
{
	return Function_282(iParam0);
}

void Function_441(var uParam0, bool bParam1) //Position: 0xEBB4 / 60340
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

bool Function_442(bool bParam0) //Position: 0xEBCE / 60366
{
	return Function_45(*bParam0, 2);
}

bool Function_443() //Position: 0xEBDB / 60379
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

bool Function_444(int iParam0, var uParam1, int iParam2) //Position: 0xEBF9 / 60409
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
		if (Function_440(iVar0))
		{
			iVar1 = Function_436(iVar0);
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

void Function_445(int iParam0, bool bParam1) //Position: 0xEC4A / 60490
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

bool Function_446(int iParam0) //Position: 0xEC64 / 60516
{
	return Function_45(*iParam0, 1);
}

void Function_447(int iParam0) //Position: 0xEC71 / 60529
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_24(&uVar1);
	if (Function_437(&uVar1) != bVar0)
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
		Function_441(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

void Function_448(int iParam0) //Position: 0xED6E / 60782
{
	char* cVar0[32];
	
	iLocal_520 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_519)
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

void Function_449() //Position: 0xEF01 / 61185
{
	*(&Local_572 + 8) = { 0.0f, 0.0f, 0.0f };
	*(&Local_572 + 20) = { 0.0f, 0.0f, 0.0f };
	Local_572.f_32 = 8.0f;
	Local_572.f_36 = "";
	Local_572.f_52 = 0;
	Local_572.f_72 = 1;
	Local_572.f_92 = 1;
	Local_572.f_76 = 1;
	Local_572.f_60 = 1;
	Local_572.f_64 = 1;
	Local_572.f_84 = Local_528;
	Local_572.f_68 = 0;
	Local_572.f_88 = 0;
	Local_572.f_96 = 1;
	Local_528.f_24 = 0;
	Function_46(4096, 0);
	Function_46(8192, 0);
	return;
}

bool Function_450() //Position: 0xEF7F / 61311
{
	return Function_451(iLocal_520);
}

int Function_451(int iParam0) //Position: 0xEF8B / 61323
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

void Function_452() //Position: 0xEFD3 / 61395
{
	if (Function_450())
	{
		Function_474();
		Function_473(1);
		Function_472();
		Function_460(&Local_965);
		if (Function_12(iLocal_914, 4096))
		{
			Function_460(&iLocal_984);
		}
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			if (Function_457() >= 0)
			{
				Function_448(6);
			}
			else
			{
				Function_448(7);
			}
			break;
		
		case 0x00000006:
			Function_361(&uLocal_731, 40, 0, 4294967295, 4294967295);
			Function_455("NOS_CO_stage03_obj03", 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (bLocal_897)
			{
				if (Function_12(iLocal_914, 1024))
				{
					if (Function_434(101, 1, 0x3f800000))
					{
						Function_329(&iLocal_600);
						Function_448(106);
					}
				}
				else if (Function_454(&Local_965) && Function_457() != 0)
				{
					Function_453(31);
				}
			}
			else if (Function_434(101, 1, 0x3f800000))
			{
				Function_329(&iLocal_600);
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			iLocal_730 = 1;
			Function_179(&Local_965, 0);
			Function_179(&iLocal_984, 0);
			iLocal_906 = ((((Function_365(31, GET_LOCAL_SLOT()) - iLocal_902) - iLocal_903) - iLocal_904) - iLocal_905);
			Local_880.f_16 = iLocal_906;
			Local_880.f_20 = Function_365(31, GET_LOCAL_SLOT());
			iLocal_519 = 101;
			Function_448(0);
			break;
	}
	return;
}

void Function_453(int iParam0) //Position: 0xF119 / 61721
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 36, &uVar0, 1, 1);
	return;
}

bool Function_454(int iParam0) //Position: 0xF12E / 61742
{
	if (iParam0->f_64)
	{
		return 0;
	}
	if (iParam0->f_32 > iParam0->f_24)
	{
		return 1;
	}
	return 0;
}

void Function_455(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xF14E / 61774
{
	if (!Function_194(16384, 1))
	{
		Function_456(bParam0, iParam1, bParam2, iParam3, bParam4, 0, 0, 0);
	}
}

void Function_456(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF171 / 61809
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
			Var0 = { StackVal, StackVal, StackVal, Function_292(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

int Function_457() //Position: 0xF1F6 / 61942
{
	return Function_458(Local_149.f_640, Local_149.f_644, Local_149.f_636, Local_965.f_68, 0, 0);
}

bool Function_458(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xF215 / 61973
{
	int iVar0;
	
	iVar0 = 0;
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = (iVar0 + Function_459(bParam0));
	}
	if (SQUAD_IS_VALID(bParam1))
	{
		iVar0 = (iVar0 + Function_459(bParam1));
	}
	if (SQUAD_IS_VALID(bParam2))
	{
		iVar0 = (iVar0 + Function_459(bParam2));
	}
	if (SQUAD_IS_VALID(bParam3))
	{
		iVar0 = (iVar0 + Function_459(bParam3));
	}
	if (SQUAD_IS_VALID(bParam4))
	{
		iVar0 = (iVar0 + Function_459(bParam4));
	}
	if (SQUAD_IS_VALID(bParam5))
	{
		iVar0 = (iVar0 + Function_459(bParam5));
	}
	return iVar0;
}

int Function_459(bool bParam0) //Position: 0xF28E / 62094
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_460(int iParam0) //Position: 0xF2DE / 62174
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
	
	if (!Function_454(iParam0))
	{
		if (Function_469(iParam0 + 40))
		{
			if (SQUAD_IS_VALID(iParam0->f_68))
			{
				if (SQUAD_GET_SIZE(iParam0->f_68) <= iParam0->f_28)
				{
					iVar0 = (iParam0->f_28 - SQUAD_GET_SIZE(iParam0->f_68));
					iVar2 = 0;
					while (iVar2 < (iVar0 - 1))
					{
						bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(StackVal, iParam0->f_36);
						if (IS_OBJECT_VALID(bVar21))
						{
							GET_OBJECT_POSITION(bVar21, &vVar15);
							GET_OBJECT_ORIENTATION(bVar21, &vVar18);
							bVar1 = Function_468(StackVal, StackVal, vVar15, 0);
							if (IS_SLOT_VALID(bVar1))
							{
								if (bVar1 == GET_LOCAL_SLOT())
								{
									strcpy(&cVar5, "_", 16);
									stradd(&cVar5, I2STR(iParam0->f_36), 16);
									stradd(&cVar5, "_", 16);
									stradd(&cVar5, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(iParam0->f_68)), 16);
									stradd(&cVar5, "_", 16);
									stradd(&cVar5, I2STR(iParam0->f_32), 16);
									bVar13 = Function_467(iParam0->f_12, iParam0->f_16);
									NET_OBJECT_REPLICATION_MODE_START(15, 6);
									if (iParam0->f_60)
									{
										bVar3 = Function_466(StackVal, StackVal, vVar15, iParam0, bVar13, &cVar5, 20.0f, 40.0f);
									}
									else
									{
										bVar3 = CREATE_ACTOR_IN_LAYOUT(*iParam0, &cVar5, bVar13, vVar15, vVar18);
									}
									if (IS_ACTOR_VALID(bVar3))
									{
										SQUAD_JOIN(bVar3, iParam0->f_68);
										Stack.Push(bVar3);
										Stack.Push(iParam0->f_36);
										Call_Loc(iParam0->f_20);
										if (iParam0->f_56)
										{
											strcpy(&cVar9, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(iParam0->f_72)), 16);
											stradd(&cVar9, I2STR(iParam0->f_32), 16);
											bVar14 = Function_467(976, 991);
											bVar4 = CREATE_ACTOR_IN_LAYOUT(*iParam0, &cVar9, bVar14, vVar15, vVar18);
											if (IS_ACTOR_VALID(bVar4))
											{
												ACCESSORIZE_HORSE(bVar4, 4);
												ACTOR_MOUNT_ACTOR(bVar3, bVar4);
												SQUAD_JOIN(bVar4, iParam0->f_72);
												TASK_FLEE_ACTORSET(bVar4, Function_465(), -1.0f, -1.0f, 0, 0, 0);
												RELEASE_ACTOR(bVar4);
											}
										}
									}
									NET_OBJECT_REPLICATION_MODE_END(15);
								}
							}
						}
						iParam0->f_32++;
						if (iParam0->f_60)
						{
							if ((iParam0->f_32 % iParam0->f_28) == 0)
							{
								AMBIENT_RESET_USED_CELLS();
							}
						}
						iParam0->f_36++;
						if (StackVal > GET_OBJECTSET_SIZE(iParam0->f_36))
						{
							iParam0->f_36 = 0;
						}
						iVar2++;
					}
				}
				Function_462(iParam0 + 40, iParam0->f_52);
			}
		}
	}
	Function_461(iParam0);
	return;
}

int Function_461(int iParam0) //Position: 0xF4E4 / 62692
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
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(StackVal))
	{
		bVar4 = CREATE_OBJECT_ITERATOR(*iParam0);
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
					Call_Loc(iParam0->f_20);
					SQUAD_JOIN(bVar8, iParam0->f_68);
				}
				else if (STRING_CONTAINS_STRING(bVar1, "Horse"))
				{
					TASK_FLEE_ACTORSET(bVar8, Function_465(), -1.0f, -1.0f, 0, 0, 0);
					RELEASE_ACTOR(bVar8);
					SQUAD_JOIN(bVar8, iParam0->f_72);
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

void Function_462(var uParam0, float fParam1) //Position: 0xF5F9 / 62969
{
	Function_463(uParam0, -fParam1);
	return;
}

void Function_463(var uParam0, float fParam1) //Position: 0xF607 / 62983
{
	Function_216();
	Function_464(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_464(var uParam0, var uParam1) //Position: 0xF61B / 63003
{
	uParam0->f_4 = uParam1;
	Function_10(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_465() //Position: 0xF638 / 63032
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

var Function_466(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0xF6A4 / 63140
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	vector3 vVar10;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
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
		if (!Function_115(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

var Function_467(bool bParam0, bool bParam1) //Position: 0xF730 / 63280
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

int Function_468(vector3 vParam0, bool bParam3) //Position: 0xF757 / 63319
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
	bVar5 = Function_41();
	fVar6 = 1E+08.0f;
	if (IS_ACTOR_VALID(bVar5))
	{
		Function_235(bVar5);
		fVar6 = VDIST2(vParam0, Function_235(bVar5));
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
					Function_235(bVar5);
					vVar1 = { StackVal, StackVal, Function_235(bVar5) };
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

bool Function_469(int iParam0) //Position: 0xF7F7 / 63479
{
	if (Function_471(iParam0))
	{
		Function_470(iParam0);
		return 1;
	}
	return 0;
}

void Function_470(int iParam0) //Position: 0xF80D / 63501
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_471(int iParam0) //Position: 0xF821 / 63521
{
	if (Function_219(iParam0))
	{
		if (Function_214(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_472() //Position: 0xF83C / 63548
{
	if (IS_ACTOR_VALID(Function_41()) && IS_VOLUME_VALID(Local_149.f_788))
	{
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_788))
		{
			Function_453(32);
		}
	}
	return;
}

void Function_473(int iParam0) //Position: 0xF867 / 63591
{
	bool bVar0;
	
	bVar0 = GET_PHYSINST_FROM_ACTOR(bLocal_717);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PHYSINST_FROZEN(bVar0, iParam0);
	}
	else
	{
		LOG_ERROR("SET_RAFT_FROZEN couldn't get a valid raft physinst");
	}
	return;
}

void Function_474() //Position: 0xF8BF / 63679
{
	Function_475(&vLocal_597, 1920.0f, bLocal_729, 4.0f, 2, 0);
	return;
}

int Function_475(float fParam0, float fParam1, bool bParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xF8D7 / 63703
{
	if (Function_352(fParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_14();
		}
		if (!Function_478())
		{
			Function_476(bParam2, fParam3, iParam4);
			Function_347(fParam0);
			return 1;
		}
		Function_330(fParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_476(bool bParam0, float fParam1, bool bParam2) //Position: 0xF91C / 63772
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_477(bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_291(bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_456(bParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_477(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF97B / 63867
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_292(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_478() //Position: 0xF9F2 / 63986
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_479() //Position: 0xFA1F / 64031
{
	if (Function_450())
	{
		Function_474();
		Function_528();
		Function_526();
		Function_472();
		Function_460(&Local_965);
		if (Function_12(iLocal_914, 4096))
		{
			Function_460(&iLocal_984);
		}
		Function_473(1);
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			TASK_CLEAR(bLocal_717);
			Function_525(0);
			Function_523();
			Function_514();
			Function_513(&bLocal_609, Local_149.f_648);
			Function_168(2);
			Function_168(3);
			if (SQUAD_IS_VALID(Local_149.f_572))
			{
				Function_173(Local_149.f_572);
				Function_169(&Local_149 + 572, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_576))
			{
				Function_173(Local_149.f_576);
				Function_169(&Local_149 + 576, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_580))
			{
				Function_173(Local_149.f_580);
				Function_169(&Local_149 + 580, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_584))
			{
				Function_173(Local_149.f_584);
				Function_169(&Local_149 + 584, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_600))
			{
				Function_173(Local_149.f_600);
				Function_169(&Local_149 + 600, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_592))
			{
				Function_173(Local_149.f_592);
				Function_169(&Local_149 + 592, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_596))
			{
				Function_173(Local_149.f_596);
				Function_169(&Local_149 + 596, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_600))
			{
				Function_173(Local_149.f_600);
				Function_169(&Local_149 + 600, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_604))
			{
				Function_173(Local_149.f_604);
				Function_169(&Local_149 + 604, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_608))
			{
				Function_173(Local_149.f_608);
				Function_169(&Local_149 + 608, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_612))
			{
				Function_173(Local_149.f_612);
				Function_169(&Local_149 + 612, 0, 0);
			}
			Function_511();
			HUD_FADE_IN(1.0f, 1065353216);
			Function_510();
			Function_329(&vLocal_597);
			Function_171(0);
			Function_509();
			Function_433();
			Function_431();
			if (bLocal_897)
			{
				Function_503();
				NET_OBJECT_REPLICATION_MODE_START(15, 4);
				Function_502();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_490(&Local_149 + 636, 9, 5, Local_886.f_36);
				Function_488(Local_149.f_636, -1.0f);
				Function_487(&Local_149 + 636, 1);
				Function_486(Local_149.f_636, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_636, 0);
			}
			HUD_FADE_IN(1.0f, 1065353216);
			Function_485();
			NET_LOG(bLocal_899, "Mission Stage02", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_448(3);
			break;
		
		case 0x00000003:
			if (!HUD_IS_FADED())
			{
				Function_361(&uLocal_731, 34, 0, 4294967295, 4294967295);
				Function_484("NOS_CO_stage03_help", 0x41200000, 1, 0, 2, 1);
				Function_448(6);
				NET_LOG(bLocal_899, "Mission Stage02", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				bLocal_729 = "NOS_CO_stage03_obj02";
				Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
				Function_483();
				NET_LOG(bLocal_899, "Mission Stage02", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_448(7);
			}
			break;
		
		case 0x00000007:
			if (Function_12(iLocal_914, 16))
			{
				if (Function_434(101, 1, 0x3f800000))
				{
					Function_329(&iLocal_600);
					Function_448(106);
				}
			}
			else if (Function_482())
			{
				Function_453(30);
			}
			break;
		
		case 0x0000006A:
			Function_480();
			iLocal_519 = 10;
			Function_448(0);
			break;
	}
	return;
}

void Function_480() //Position: 0xFDDF / 64991
{
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
	}
	iLocal_900 = 0;
	bLocal_901 = false;
	iLocal_782 = 0;
	Function_481();
	return;
}

void Function_481() //Position: 0xFE11 / 65041
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_PHYSINST_FROM_ACTOR(bLocal_717);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_INFINITE_MASS_VS_MOVERS(bVar0, 1);
		SET_PHYSINST_FROZEN(bVar0, 0);
	}
	else
	{
		LOG_ERROR("STOP_RAFT couldn't get a valid raft physinst");
	}
	SET_BOAT_EXTRA_STEER(bLocal_717, 5.0f);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	bLocal_607 = CREATE_PROP_IN_LAYOUT(bLocal_717, Function_52(), "raftBlockerBounds02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (IS_OBJECT_VALID(bLocal_607))
	{
		SET_PROP_COLLIDE_WITH_OBJECT(bLocal_607, bLocal_717, 0);
		SET_PROP_COLLIDE_WITH_OBJECT(bLocal_717, bLocal_607, 0);
		iLocal_608 = ATTACH_OBJECTS(bLocal_607, bLocal_717, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		bVar1 = GET_PHYSINST_FROM_OBJECT(bLocal_607);
		if (IS_PHYSINST_VALID(bVar1))
		{
			SET_INFINITE_MASS_VS_MOVERS(bVar1, 1);
		}
	}
	return;
}

bool Function_482() //Position: 0xFEF3 / 65267
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_483() //Position: 0xFF1D / 65309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			ADD_BLIP_FOR_OBJECT(StackVal, 330, 0f, 2, 0);
			SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(StackVal), 4);
		}
		iVar0++;
	}
	return;
}

void Function_484(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFF67 / 65383
{
	if (!Function_194(16384, 1))
	{
		Function_291(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	}
}

void Function_485() //Position: 0xFF8A / 65418
{
	Function_10(&Global_79349 + 44, 8192);
	SET_ACTOR_OVERHEALTH_MODE(Function_41(), true);
	return;
}

void Function_486(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xFFA3 / 65443
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

void Function_487(var uParam0, int iParam1) //Position: 0x10090 / 65680
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
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_488(bool bParam0, float fParam1) //Position: 0x1012C / 65836
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
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
			Function_123(bVar1, &bVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&bVar3, 3.0f, Function_489(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bVar1, bVar2, fParam1, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

var Function_489(bool bParam0) //Position: 0x101A2 / 65954
{
	return GET_HEADING(bParam0);
}

void Function_490(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x101AD / 65965
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
			Function_491(&bVar1, iParam1, iParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_491(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1022D / 66093
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (iParam3)
		{
			case 0x00000000:
				Function_501(*bParam0);
				Function_500(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_499(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000001:
				Function_501(*bParam0);
				Function_500(bParam0, 1.0f);
				Function_499(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000002:
				Function_498(*bParam0);
				Function_500(bParam0, 2.0f);
				Function_499(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000003:
				Function_494(*bParam0);
				Function_500(bParam0, 3.0f);
				Function_499(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000004:
				Function_494(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				Function_500(bParam0, 4.0f);
				Function_499(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000005:
				Function_494(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_500(bParam0, 5.0f);
				Function_499(bParam0, bParam1, bParam2);
				break;
		}
		Function_492(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ASSAULT was passed an invalid actor");
	}
}

void Function_492(int iParam0) //Position: 0x10389 / 66441
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
			if (Function_493(bVar1) >= 0)
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

int Function_493(bool bParam0) //Position: 0x104F1 / 66801
{
	if (Function_337(bParam0))
	{
		if (Function_294(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_494(bool bParam0) //Position: 0x10513 / 66835
{
	Function_496(bParam0);
	Function_495(bParam0, 1);
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

void Function_495(bool bParam0, int iParam1) //Position: 0x1069B / 67227
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

void Function_496(bool bParam0) //Position: 0x106CE / 67278
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
	Function_497(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_497(var uParam0, bool bParam1) //Position: 0x10A32 / 68146
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

void Function_498(bool bParam0) //Position: 0x10A54 / 68180
{
	Function_496(bParam0);
	Function_495(bParam0, 1);
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

void Function_499(var uParam0, bool bParam1, bool bParam2) //Position: 0x10BAE / 68526
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

void Function_500(var uParam0, float fParam1) //Position: 0x10BE0 / 68576
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

void Function_501(bool bParam0) //Position: 0x10CAB / 68779
{
	Function_496(bParam0);
	Function_495(bParam0, 1);
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

void Function_502() //Position: 0x10DE9 / 69097
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_636 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "NOS_Main"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad2", 392, -4705.149f, 3.036526f, 3961.149f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad3", 387, -4700.0f, 3.036526f, 3985.233f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad4", 389, -4699.793f, 3.036527f, 3968.238f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad7", 383, -4760.0f, 3.026183f, 4031.095f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad8", 381, -4766.371f, 3.026183f, 4034.371f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad9", 380, -4715.45f, 3.137519f, 4007.665f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad10", 391, -4719.007f, 2.764266f, 4015.007f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2bad11", 394, -4732.0f, 3.026183f, 4014.277f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_636);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_503() //Position: 0x10FC1 / 69569
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_508();
	Function_507();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_506(Local_149.f_640);
	SQUAD_GOALS_CLEAR(Local_149.f_640);
	Function_506(Local_149.f_644);
	SQUAD_GOALS_CLEAR(Local_149.f_644);
	Function_504(&Local_149 + 640, Local_886.f_36);
	Function_488(Local_149.f_640, -1.0f);
	Function_487(&Local_149 + 640, 1);
	Function_486(Local_149.f_640, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_149.f_640, false, Local_149.f_732, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_640, 0);
	Function_504(&Local_149 + 644, Local_886.f_36);
	Function_488(Local_149.f_644, -1.0f);
	Function_487(&Local_149 + 644, 1);
	Function_486(Local_149.f_644, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_149.f_644, false, Local_149.f_768, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_644, 0);
	return;
}

void Function_504(var uParam0, int iParam1) //Position: 0x110A0 / 69792
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
			Function_505(&bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_505(int iParam0, bool bParam1) //Position: 0x1111C / 69916
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_501(*iParam0);
				AI_SET_BURST_DURATION(*iParam0, 3.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 4);
				Function_500(iParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 15, 1);
				Function_499(iParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_501(*iParam0);
				AI_SET_BURST_DURATION(*iParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 5);
				Function_500(iParam0, 1.0f);
				Function_499(iParam0, 9, 0);
				break;
			
			case 0x00000002:
				Function_498(*iParam0);
				AI_SET_BURST_DURATION(*iParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 6);
				Function_500(iParam0, 2.0f);
				Function_499(iParam0, 10, 1);
				break;
			
			case 0x00000003:
				Function_494(*iParam0);
				AI_SET_BURST_DURATION(*iParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 11);
				Function_500(iParam0, 3.0f);
				Function_499(iParam0, 11, 2);
				break;
			
			case 0x00000004:
				Function_494(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 45.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 9, 30.0f);
				AI_SET_BURST_DURATION(*iParam0, 4.0f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 11);
				Function_500(iParam0, 4.0f);
				Function_499(iParam0, 11, 2);
				break;
			
			case 0x00000005:
				Function_494(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 9, 15.0f);
				AI_SET_BURST_DURATION(*iParam0, 1.5f);
				AI_SET_SHOTS_PER_BURST(*iParam0, 5);
				Function_500(iParam0, 5.0f);
				Function_499(iParam0, 18, 3);
				break;
		}
		Function_492(iParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SUPPRESSION was passed an invalid actor");
	}
	return;
}

void Function_506(bool bParam0) //Position: 0x11302 / 70402
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

void Function_507() //Position: 0x11334 / 70452
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_644 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "NOS_House2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "NOS_House2_1", 395, -4731.236f, 3.022884f, 3954.178f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_644);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "NOS_House2_2", 392, -4734.61f, 3.036526f, 3954.61f, 0.0f, 86.30399f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_644);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "NOS_House2_3", 385, -4735.774f, 3.036527f, 3959.774f, 0.0f, 92.49891f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_644);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "NOS_House2_4", 380, -4734.046f, 3.157851f, 3962.375f, 0.0f, -98.36652f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_644);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_508() //Position: 0x11458 / 70744
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_640 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "nNOS_House"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "HOS_House1", 396, -4710.106f, 3.162911f, 3962.305f, 0.0f, 83.04538f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_640);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "HOS_House2", 393, -4709.416f, 3.162911f, 3961.37f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_640);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "HOS_House3", 392, -4707.742f, 3.162911f, 3965.962f, 0.0f, 255.3497f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_640);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "HOS_House4", 388, -4709.208f, 3.162911f, 3968.086f, 0.0f, -187.6599f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_640);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_509() //Position: 0x11573 / 71027
{
	bool bVar0;
	char* cVar1[24];
	char* cVar7[24];
	
	ENABLE_CHILD_SECTOR("mp_nos_coop01ax");
	ENABLE_CHILD_SECTOR("mp_nos_coop01bx");
	ENABLE_CHILD_SECTOR("mp_nos_coop01cx");
	ENABLE_CHILD_SECTOR("mp_nos_coop01dx");
	ENABLE_CHILD_SECTOR("mp_nos_coop01ex");
	NET_OBJECT_REPLICATION_MODE_START(17, 4);
	bVar0 = false;
	while (bVar0 < 4)
	{
		strcpy(&cVar1, "nnos_crate", 24);
		stradd(&cVar1, I2STR(bVar0 + 1), 24);
		Local_1017[bVar04].f_4 = FIND_OBJECT_IN_LAYOUT(Local_149, &cVar1);
		if (IS_OBJECT_VALID(StackVal))
		{
			strcpy(&cVar7, "crateExp", 24);
			stradd(&cVar7, I2STR(bVar0), 24);
			Local_1017[bVar04] = CREATE_EVENT_TRAP(&cVar7, 17, Local_149);
			Local_1017[bVar04].f_12 = (*&Local_149 + 740)[bVar0];
			EVENT_TRAP_ON_VOLUME(Local_1017[bVar04], Local_1017[bVar04].f_12);
		}
		bVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_510() //Position: 0x11686 / 71302
{
	bool bVar0;
	
	bVar0 = GET_PHYSINST_FROM_ACTOR(bLocal_717);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PHYSINST_FROZEN(bVar0, 1);
	}
	else
	{
		LOG_ERROR("STOP_RAFT couldn't get a valid raft physinst");
	}
	REMOVE_OBJECT_ATTACHMENT(iLocal_608);
	DESTROY_OBJECT(bLocal_607);
	return;
}

void Function_511() //Position: 0x116E3 / 71395
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_52());
	Function_512(bVar0, "cloth", Local_149.f_772);
	Function_512(bVar0, "blanket", Local_149.f_772);
	Function_512(bVar0, "break", Local_149.f_772);
	Function_512(bVar0, "tarp", Local_149.f_772);
	Function_512(bVar0, "trap", Local_149.f_772);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_512(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11750 / 71504
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

void Function_513(bool bParam0, bool bParam1) //Position: 0x117A9 / 71593
{
	if (IS_VOLUME_VALID(bParam1))
	{
		bParam0->f_8 = bParam1;
	}
	return;
}

void Function_514() //Position: 0x117C0 / 71616
{
	Function_518(&iLocal_984, "nh", Local_149.f_1340, 379, 396, 5, 1, 15.0f, 1, 0, 0);
	SET_PATH_LOOPING(Local_149.f_1468, 1);
	Function_515(&iLocal_984, 71685);
	return;
}

void Function_515(int iParam0, int iParam1) //Position: 0x117F9 / 71673
{
	iParam0->f_20 = iParam1;
	return;
}

void Function_516(bool bParam0, bool bParam1) //Position: 0x11805 / 71685
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_517(&bParam0, 23, Local_886.f_40);
	SET_ACTOR_FACTION(bParam0, 19);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	TASK_CLEAR(bParam0);
	bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_149.f_1336);
	GET_OBJECT_POSITION(bVar4, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam0, Local_149.f_1472, 3, 0, 0, 1, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam0, Local_149.f_1468, 4, 0, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_517(int iParam0, bool bParam1, bool bParam2) //Position: 0x11893 / 71827
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		switch (bParam2)
		{
			case 0x00000000:
				Function_501(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 10.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 50.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 12.0f, 6.0f);
				Function_500(iParam0, 0.5f);
				Function_499(iParam0, bParam1, 4);
				break;
			
			case 0x00000001:
				Function_501(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 20.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 75.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 9.0f, 5.0f);
				Function_500(iParam0, 1.0f);
				Function_499(iParam0, bParam1, 5);
				break;
			
			case 0x00000002:
				Function_498(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 30.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 9.0f, 5.0f);
				Function_500(iParam0, 2.0f);
				Function_499(iParam0, bParam1, 5);
				break;
			
			case 0x00000003:
				Function_494(*iParam0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 40.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 7.0f, 4.0f);
				Function_500(iParam0, 3.0f);
				Function_499(iParam0, bParam1, 5);
				break;
			
			case 0x00000004:
				Function_494(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 125.0f, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 5.0f, 3.0f);
				Function_500(iParam0, 4.0f);
				Function_499(iParam0, bParam1, 6);
				break;
			
			case 0x00000005:
				Function_494(*iParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*iParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*iParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*iParam0, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 6, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 16, 60.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*iParam0, 27, 100.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(*iParam0, 3.0f, 2.0f);
				Function_500(iParam0, 5.0f);
				Function_499(iParam0, bParam1, 7);
				break;
		}
		Function_492(iParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_THROWER was passed an invalid actor");
	}
	return;
}

void Function_518(int iParam0, char* cParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10) //Position: 0x11AE6 / 72422
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
		Function_521(iParam0);
		Function_520(iParam0, uParam2);
		iParam0->f_12 = iParam3;
		iParam0->f_16 = iParam4;
		iParam0->f_24 = iParam5;
		iParam0->f_28 = iParam6;
		iParam0->f_32 = 0;
		iParam0->f_36 = 0;
		iParam0->f_52 = fParam7;
		iParam0->f_56 = iParam8;
		iParam0->f_60 = iParam9;
		iParam0->f_64 = iParam10;
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_NPC", 32);
		iParam0->f_68 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_Horse", 32);
		iParam0->f_72 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		Function_519(iParam0 + 40, iParam0->f_52);
	}
}

void Function_519(int iParam0, int iParam1) //Position: 0x11BDB / 72667
{
	if (!Function_219(iParam0))
	{
		Function_462(iParam0, iParam1);
	}
	return;
}

void Function_520(var uParam0, bool bParam1) //Position: 0x11BF1 / 72689
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

void Function_521(int iParam0) //Position: 0x11C56 / 72790
{
	Function_515(iParam0, 72805);
	return;
}

void Function_522(var uParam0, var uParam1) //Position: 0x11C65 / 72805
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return;
}

void Function_523() //Position: 0x11C73 / 72819
{
	Function_518(&Local_965, "ng", Local_149.f_1332, 379, 396, 15, 5, 2.0f, 0, 1, 0);
	Function_515(&Local_965, 72864);
	return;
}

void Function_524(bool bParam0, bool bParam1) //Position: 0x11CA0 / 72864
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_491(&bParam0, 9, 5, Local_886.f_40);
	SET_ACTOR_FACTION(bParam0, 19);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	TASK_CLEAR(bParam0);
	bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_149.f_1336);
	GET_OBJECT_POSITION(bVar4, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(bParam0, &uVar1, 3);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_525(bool bParam0) //Position: 0x11D1F / 72991
{
	int iVar0;
	
	Function_290(1, 1);
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
	Function_358("MPCOOP_CHEKPOINTCOOP", 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_899, "Local State", "Player was granted an extra life.", false, false, false, false);
		Function_27(&bLocal_609, 0);
	}
	return;
}

void Function_526() //Position: 0x11DE5 / 73189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_OBJECT_VALID(Local_1017[iVar04]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(Local_1017[iVar04]))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					Function_527(iVar0);
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(Local_1017[iVar04]);
				EVENT_TRAP_CLEAR_EVENTS(Local_1017[iVar04]);
			}
		}
		iVar0++;
	}
	return;
}

void Function_527(var uParam0) //Position: 0x11E3F / 73279
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 37, &uVar0, 1, 1);
	return;
}

void Function_528() //Position: 0x11E54 / 73300
{
	if (IS_ACTOR_VALID(Function_41()) && IS_VOLUME_VALID(Local_149.f_736))
	{
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_736))
		{
			Function_453(29);
		}
	}
	return;
}

void Function_529() //Position: 0x11E7F / 73343
{
	if (Function_450())
	{
		Function_540();
		if (!Function_12(iLocal_914, 65536) && !IS_VOLUME_VALID(Local_149.f_668))
		{
			Function_538(&uLocal_731, 38, 40, 38, 10.0f);
		}
		Function_474();
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_525(0);
			Function_480();
			Function_182(Local_71.f_44, 1);
			Function_448(1);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_IN_VOLUME(StackVal, Function_41()))
				{
					if (bLocal_609 == 0)
					{
						FIRE_STOP_FLAMES_IN_VOLUME(Local_71.f_12);
						Function_17();
						Function_448(3);
					}
				}
				else
				{
					Function_182(Local_71.f_44, 0);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_434(6, 1, 0x3f800000))
			{
				Function_14();
				if (Function_150(12) >= iLocal_908)
				{
					Function_151(12, iLocal_908);
				}
				HUD_FADE_IN(1.0f, 1065353216);
				STOP_VEHICLE(bLocal_717);
				START_VEHICLE(bLocal_717);
				Function_448(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_537(&Global_78578 + 96);
				}
				Function_536();
				Function_535();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_717, Local_149.f_1428, 4, 1, 1, 1, 0);
				Function_534(Local_149.f_728, 330, 0x40a00000);
				Function_532(Local_149, Local_149.f_728, &bLocal_606, 0);
				bLocal_729 = "NOS_CO_stage03_obj01";
				Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
				NET_LOG(bLocal_899, "Mission Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_448(7);
			}
			break;
		
		case 0x00000007:
			if (Function_12(iLocal_914, 4))
			{
				if (Function_434(9, 1, 0x3f800000))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					Function_448(106);
				}
			}
			else if (Function_531(Local_149.f_728))
			{
				Function_453(27);
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_728))))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_728)));
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 864), 1, 1, 1);
				Function_182(Local_149.f_888, 0);
				iLocal_905 = (((Function_365(31, GET_LOCAL_SLOT()) - iLocal_902) - iLocal_903) - iLocal_904);
				Local_880.f_12 = iLocal_905;
				if (IS_OBJECT_VALID(bLocal_606))
				{
					Function_530(bLocal_606);
				}
				iLocal_519 = 9;
				Function_448(0);
			}
			break;
	}
	return;
}

void Function_530(bool bParam0) //Position: 0x120E9 / 73961
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

bool Function_531(bool bParam0) //Position: 0x12173 / 74099
{
	if (IS_ACTOR_VALID(bLocal_717))
	{
		if (IS_VOLUME_VALID(bParam0))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_717, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_532(var uParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x12198 / 74136
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bParam1), &vVar0);
	if (IS_OBJECT_VALID(*bParam2))
	{
		DESTROY_OBJECT(*bParam2);
	}
	*bParam2 = Function_533(StackVal, StackVal, uParam0, Function_52(), vVar0, 0.0f, 0.0f, 0.0f, Function_41(), 1.5f, 1, 3, 330, 4294967295, iParam3, 3212836864, 3212836864, 1);
}

var Function_533(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x121E7 / 74215
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

var Function_534(bool bParam0, bool bParam1, float fParam2) //Position: 0x122B2 / 74418
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

void Function_535() //Position: 0x122FF / 74495
{
	if (!bLocal_898)
	{
		Function_7(&Global_79349 + 44, 8192);
		SET_ACTOR_OVERHEALTH_MODE(Function_41(), false);
	}
	return;
}

void Function_536() //Position: 0x1231F / 74527
{
	vector3 vVar0;
	
	Function_123(Function_41(), &vVar0);
	if (!IS_POINT_IN_VOLUME(StackVal, vVar0))
	{
		Function_182(Local_71.f_44, 0);
	}
	return;
}

void Function_537(int iParam0) //Position: 0x12344 / 74564
{
	if (Function_219(iParam0))
	{
		if (Function_218(iParam0))
		{
			Function_216();
			iParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			iParam0->f_8 = 0.0f;
			Function_7(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_538(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12414 / 74772
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_539(iParam4);
		if (0 == iVar0)
		{
			Function_361(uParam0, iParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_361(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_361(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_539(float fParam0) //Position: 0x1245A / 74842
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

void Function_540() //Position: 0x1248E / 74894
{
	if (Function_541(Local_149.f_668))
	{
		Function_453(4);
	}
	if (Function_541(Local_149.f_672))
	{
		Function_453(5);
	}
	if (Function_541(Local_149.f_676))
	{
		Function_453(6);
	}
	if (Function_541(Local_149.f_680))
	{
		Function_453(7);
	}
	if (Function_541(Local_149.f_688))
	{
		Function_453(9);
	}
	if (Function_541(Local_149.f_692))
	{
		Function_453(10);
	}
	if (Function_541(Local_149.f_704))
	{
		Function_453(19);
	}
	if (Function_541(Local_149.f_804))
	{
		Function_453(18);
	}
	return;
}

bool Function_541(bool bParam0) //Position: 0x12510 / 75024
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bLocal_717))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_717, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_542() //Position: 0x12535 / 75061
{
	if (Function_450())
	{
		Function_546();
		Function_473(1);
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_525(0);
			Function_14();
			SET_ACTOR_INVULNERABILITY(Function_41(), 1);
			Function_448(6);
			break;
		
		case 0x00000006:
			Function_361(&uLocal_731, 3, 0, 4294967295, 4294967295);
			bLocal_729 = "NOS_CO_back_to_raft_obj";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (Function_545())
			{
				Function_448(8);
			}
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (!Function_544(Local_149.f_724))
				{
					Function_543(StackVal, StackVal, Local_149, Local_149.f_724, &iLocal_900, &bLocal_901, "NOS_CO_back_to_shore_obj", vLocal_597, 330, &bLocal_606, 0);
				}
				if (IS_ACTOR_IN_VOLUME(StackVal, Function_41()) || IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_724))
				{
					Function_448(8);
				}
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (!Function_544(Local_149.f_724))
				{
					Function_543(StackVal, StackVal, Local_149, Local_149.f_724, &iLocal_900, &bLocal_901, "NOS_CO_back_to_shore_obj", vLocal_597, 330, &bLocal_606, 0);
				}
			}
			if (Function_434(8, 1, 0x3f800000))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_323(&Global_78578 + 96);
				}
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_448(9);
			}
			break;
		
		case 0x00000009:
			if (HUD_IS_FADED())
			{
				Function_182(Local_149.f_1080, 0);
				Function_448(10);
			}
			break;
		
		case 0x0000000A:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 952), 1, 1, 1);
			Function_347(&iLocal_603);
			Function_448(11);
			break;
		
		case 0x0000000B:
			if (Function_352(&iLocal_603) <= 3.0f)
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			Function_14();
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_724))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_724)));
			}
			SET_ACTOR_INVULNERABILITY(Function_41(), 0);
			iLocal_908 = Function_150(12);
			Function_179(&Local_946, 0);
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			iLocal_519 = 8;
			Function_448(0);
			break;
	}
	return;
}

void Function_543(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, float fParam5, var uParam6, var uParam7, bool bParam8, bool bParam9, int iParam10) //Position: 0x12768 / 75624
{
	vector3 vVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (IS_VOLUME_VALID(bParam1))
		{
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_41(), bParam1))
				{
					if (!*uParam2)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_OBJECTIVE();
						if (IS_OBJECT_VALID(*bParam9))
						{
							Function_530(*bParam9);
						}
						*uParam2 = 1;
						*iParam3 = 0;
						Function_455("COOP_wait_for_players", 0x40f00000, 1, 2, 0);
					}
					else
					{
						Function_475(&fParam5, 1920.0f, "COOP_wait_for_players", 4.0f, 1, 0);
					}
				}
				else if (!*iParam3)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_OBJECTIVE();
					*iParam3 = 1;
					*uParam2 = 0;
					Function_455(bParam4, 0x40f00000, 1, 2, 0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bParam1), &vVar0);
					if (!IS_OBJECT_VALID(*bParam9))
					{
						*bParam9 = Function_533(StackVal, StackVal, bParam0, Function_52(), vVar0, 0.0f, 0.0f, 0.0f, Function_41(), 1.5f, 1, 3, bParam8, 4294967295, iParam10, 3212836864, 3212836864, 1);
					}
				}
				else
				{
					Function_475(&fParam5, 1920.0f, bParam4, 4.0f, 1, 0);
				}
			}
			else
			{
				LOG_ERROR("Invalid actor passed to UPDATE_ALL_PLAYERS_IN_VOLUME_OBJECTIVES");
			}
		}
		else
		{
			LOG_ERROR("Invalid volume passed to UPDATE_ALL_PLAYERS_IN_VOLUME_OBJECTIVES");
		}
	}
	else
	{
		LOG_ERROR("Invalid layout passed to UPDATE_ALL_PLAYERS_IN_VOLUME_OBJECTIVES");
	}
}

bool Function_544(bool bParam0) //Position: 0x12957 / 76119
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
				else if (Function_336(bVar1) < 0)
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

bool Function_545() //Position: 0x129BE / 76222
{
	return Function_194(16386, 0);
}

void Function_546() //Position: 0x129CB / 76235
{
	Function_475(&vLocal_597, 1920.0f, bLocal_729, 4.0f, 2, 0);
	return;
}

void Function_547() //Position: 0x129E3 / 76259
{
	if (Function_450())
	{
		Function_546();
		Function_473(1);
		Function_460(&Local_946);
		if (!Function_12(iLocal_914, 32768))
		{
			Function_552();
		}
		Function_551();
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			TASK_CLEAR(bLocal_717);
			STREAMING_UNLOAD_SCENE();
			STREAMING_UNLOAD_BOUNDS();
			Function_168(0);
			Function_168(1);
			Function_525(0);
			if (SQUAD_IS_VALID(Local_149.f_572))
			{
				Function_173(Local_149.f_572);
				Function_169(&Local_149 + 572, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_576))
			{
				Function_173(Local_149.f_576);
				Function_169(&Local_149 + 576, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_580))
			{
				Function_173(Local_149.f_580);
				Function_169(&Local_149 + 580, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_584))
			{
				Function_173(Local_149.f_584);
				Function_169(&Local_149 + 584, 0, 0);
			}
			if (SQUAD_IS_VALID(Local_149.f_588))
			{
				Function_173(Local_149.f_588);
				Function_169(&Local_149 + 588, 0, 0);
			}
			Function_510();
			if (IS_ATTACHMENT_VALID(iLocal_608))
			{
				REMOVE_OBJECT_ATTACHMENT(iLocal_608);
			}
			if (IS_OBJECT_VALID(bLocal_607))
			{
				DESTROY_OBJECT(bLocal_607);
			}
			Function_550();
			Function_548();
			Function_485();
			Function_448(6);
			break;
		
		case 0x00000006:
			Function_361(&uLocal_731, 34, 0, 4294967295, 4294967295);
			bLocal_729 = "NOS_CO_stage02_obj02";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (bLocal_897)
			{
				if (Function_12(iLocal_914, 2048))
				{
					if (Function_434(7, 1, 0x3f800000))
					{
						Function_448(106);
					}
				}
				else if (Function_454(&Local_946))
				{
					if (Function_458(Local_149.f_628, Local_149.f_632, Local_946.f_68, 0, 0, 0) == 0)
					{
						Function_453(26);
					}
				}
			}
			else if (Function_434(7, 1, 0x3f800000))
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			iLocal_904 = ((Function_365(31, GET_LOCAL_SLOT()) - iLocal_902) - iLocal_903);
			Local_880.f_8 = iLocal_904;
			Function_168(0);
			Function_168(1);
			iLocal_519 = 7;
			Function_448(0);
			break;
	}
	return;
}

void Function_548() //Position: 0x12BD8 / 76760
{
	Function_518(&Local_946, "sg", Local_149.f_1344, 496, 504, 15, 5, 2.0f, 0, 1, 0);
	Function_515(&Local_946, 76805);
	return;
}

void Function_549(bool bParam0, bool bParam1) //Position: 0x12C05 / 76805
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_491(&bParam0, 9, 5, Local_886.f_24);
	SET_ACTOR_FACTION(bParam0, 19);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	TASK_CLEAR(bParam0);
	bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_149.f_1348);
	GET_OBJECT_POSITION(bVar4, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(bParam0, &uVar1, 3);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_550() //Position: 0x12C84 / 76932
{
	Function_506(Local_149.f_628);
	SQUAD_GOALS_CLEAR(Local_149.f_628);
	Function_506(Local_149.f_632);
	SQUAD_GOALS_CLEAR(Local_149.f_632);
	Function_504(&Local_149 + 628, Local_886.f_28);
	Function_488(Local_149.f_628, -1.0f);
	Function_487(&Local_149 + 628, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_628, 0);
	Function_490(&Local_149 + 632, 9, 5, Local_886.f_28);
	Function_488(Local_149.f_632, -1.0f);
	Function_487(&Local_149 + 632, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_632, 0);
	return;
}

void Function_551() //Position: 0x12CFF / 77055
{
	if (IS_ACTOR_VALID(Function_41()) && IS_VOLUME_VALID(Local_149.f_784))
	{
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_784))
		{
			Function_453(15);
		}
	}
	return;
}

void Function_552() //Position: 0x12D2A / 77098
{
	if (Local_946.f_32 > (Local_946.f_24 - 4))
	{
		if (Function_458(Local_149.f_628, Local_149.f_632, Local_946.f_68, 0, 0, 0) < 4)
		{
			Function_453(17);
		}
	}
	return;
}

void Function_553() //Position: 0x12D5D / 77149
{
	if (Function_450())
	{
		Function_570();
		Function_538(&uLocal_731, 8, 40, 38, 10.0f);
		if (bLocal_897)
		{
			Function_560();
		}
		Function_559(Local_149.f_588, Local_149.f_776);
		Function_546();
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_525(0);
			Function_480();
			Function_182(Local_71.f_44, 1);
			Function_448(1);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_IN_VOLUME(StackVal, Function_41()))
				{
					if (bLocal_609 == 0)
					{
						FIRE_STOP_FLAMES_IN_VOLUME(Local_71.f_12);
						Function_17();
						Function_448(3);
					}
				}
				else
				{
					Function_182(Local_71.f_44, 0);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_434(6, 1, 0x3f800000))
			{
				Function_14();
				if (Function_150(12) >= iLocal_908)
				{
					Function_151(12, iLocal_908);
				}
				HUD_FADE_IN(1.0f, 1065353216);
				STOP_VEHICLE(bLocal_717);
				START_VEHICLE(bLocal_717);
				Function_448(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_555(0);
					NET_OBJECT_REPLICATION_MODE_END(15);
				}
				if (NET_IS_SESSION_HOST())
				{
					Function_537(&Global_78578 + 96);
				}
				Function_554();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_717, Local_149.f_1424, 4, 1, 1, 1, 0);
				Function_535();
				Function_361(&uLocal_731, 6, 0, 4294967295, 4294967295);
				Function_534(Local_149.f_720, 330, 0x40a00000);
				Function_532(Local_149, Local_149.f_720, &bLocal_606, 0);
				bLocal_729 = "NOS_CO_stage02_obj01";
				Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
				NET_LOG(bLocal_899, "Mission Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_448(8);
			}
			break;
		
		case 0x00000008:
			if (Function_12(iLocal_914, 2))
			{
				if (Function_434(6, 1, 0x3f800000))
				{
					Function_448(106);
				}
			}
			else if (Function_531(Local_149.f_720))
			{
				Function_453(24);
			}
			break;
		
		case 0x0000006A:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_720))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_720)));
			}
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			iLocal_903 = (Function_365(31, GET_LOCAL_SLOT()) - iLocal_902);
			Local_880.f_4 = iLocal_903;
			iLocal_519 = 6;
			Function_448(0);
			break;
	}
	return;
}

void Function_554() //Position: 0x12FAA / 77738
{
	vector3 vVar0;
	
	Function_123(Function_41(), &vVar0);
	if (!IS_POINT_IN_VOLUME(StackVal, vVar0))
	{
		Function_182(Local_71.f_44, 0);
	}
	return;
}

int Function_555(bool bParam0) //Position: 0x12FCF / 77775
{
	char* cVar0[16];
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	
	if (bParam0 > 4)
	{
		LOG_ERROR("SETUP_ENEMY_RAFT - Invalid index sent");
		return 0;
	}
	if (IS_LAYOUTREF_VALID(vLocal_535[bParam09]))
	{
		strcpy(&cVar0, "nenemyRaft", 16);
		stradd(&cVar0, I2STR(bParam0), 16);
		vLocal_535[bParam09].f_32 = CREATE_ACTOR_IN_LAYOUT(Local_149, &cVar0, 1190, *(&Local_149 + 976[bParam06]), *(&Local_149 + 976[bParam06] + 12));
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		vLocal_535[bParam09].f_24 = CREATE_PROP_IN_LAYOUT(vLocal_535[bParam09], Function_52(), "raftBlockerBounds02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
		SET_PROP_COLLIDE_WITH_OBJECT(vLocal_535[bParam09].f_24, vLocal_535[bParam09].f_32, 0);
		SET_PROP_COLLIDE_WITH_OBJECT(vLocal_535[bParam09].f_32, vLocal_535[bParam09].f_24, 0);
		Function_558(vLocal_535[bParam09], GET_OBJECT_FROM_ACTOR(vLocal_535[bParam09].f_32));
		strcpy(&cVar0, "en_raft_drv", 16);
		stradd(&cVar0, I2STR(bParam0), 16);
		if (IS_ACTOR_VALID(vLocal_535[bParam09].f_32))
		{
			bVar4 = CREATE_ACTOR_IN_LAYOUT(vLocal_535[bParam09], &cVar0, 403, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bVar4))
			{
				SQUAD_JOIN(bVar4, vLocal_535[bParam09].f_28);
				GET_OBJECT_ORIENTATION(vLocal_535[bParam09].y, &vVar7);
				SET_ACTOR_UPDATE_PRIORITY(bVar4, false);
				SET_ACTOR_FACTION(bVar4, 19);
				iVar6 = ATTACH_OBJECTS(bVar4, vLocal_535[bParam09].y, Function_52(), 0.0f, 0.0f, 0.0f, vVar7, 4294967295);
				Function_557(bVar4, vLocal_535[bParam09].y);
				REMOVE_OBJECT_ATTACHMENT(iVar6);
				ADD_BLIP_FOR_ACTOR(bVar4, 322, 0, 2, 0);
			}
			strcpy(&cVar0, "raft_shoot1_", 16);
			stradd(&cVar0, I2STR(bParam0), 16);
			bVar4 = CREATE_ACTOR_IN_LAYOUT(vLocal_535[bParam09], &cVar0, 421, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bVar4))
			{
				SQUAD_JOIN(bVar4, vLocal_535[bParam09].f_28);
				SET_ACTOR_UPDATE_PRIORITY(bVar4, false);
				GET_OBJECT_ORIENTATION(vLocal_535[bParam09].z, &vVar7);
				SET_ACTOR_FACTION(bVar4, 19);
				iVar6 = ATTACH_OBJECTS(bVar4, vLocal_535[bParam09].z, Function_52(), 0.0f, 0.0f, 0.0f, vVar7, 4294967295);
				Function_557(bVar4, vLocal_535[bParam09].z);
				REMOVE_OBJECT_ATTACHMENT(iVar6);
				ADD_BLIP_FOR_ACTOR(bVar4, 322, 0, 2, 0);
			}
			strcpy(&cVar0, "raft_shoot2_", 16);
			stradd(&cVar0, I2STR(bParam0), 16);
			bVar4 = CREATE_ACTOR_IN_LAYOUT(vLocal_535[bParam09], &cVar0, 422, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bVar4))
			{
				SQUAD_JOIN(bVar4, vLocal_535[bParam09].f_28);
				SET_ACTOR_UPDATE_PRIORITY(bVar4, false);
				SET_ACTOR_FACTION(bVar4, 19);
				GET_OBJECT_ORIENTATION(vLocal_535[bParam09].f_12, &vVar7);
				iVar6 = ATTACH_OBJECTS(bVar4, vLocal_535[bParam09].f_12, Function_52(), 0.0f, 0.0f, 0.0f, vVar7, 4294967295);
				Function_557(bVar4, vLocal_535[bParam09].f_12);
				REMOVE_OBJECT_ATTACHMENT(iVar6);
				ADD_BLIP_FOR_ACTOR(bVar4, 322, 0, 2, 0);
			}
			strcpy(&cVar0, "en_raft_gat", 16);
			stradd(&cVar0, I2STR(bParam0), 16);
			bVar4 = CREATE_ACTOR_IN_LAYOUT(vLocal_535[bParam09], &cVar0, 412, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bVar4))
			{
				SQUAD_JOIN(bVar4, vLocal_535[bParam09].f_28);
				SET_ACTOR_UPDATE_PRIORITY(bVar4, false);
				SET_ACTOR_FACTION(bVar4, 19);
				iVar6 = ATTACH_OBJECTS(bVar4, vLocal_535[bParam09].f_20, Function_52(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				REMOVE_OBJECT_ATTACHMENT(iVar6);
				Function_557(bVar4, vLocal_535[bParam09].z);
				ADD_BLIP_FOR_ACTOR(bVar4, 322, 0, 2, 0);
			}
			strcpy(&cVar0, "en_raft_dyn", 16);
			stradd(&cVar0, I2STR(bParam0), 16);
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			bVar5 = CREATE_PROP_IN_LAYOUT(vLocal_535[bParam09], &cVar0, "p_gen_crateTnt01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
			NET_OBJECT_REPLICATION_MODE_END(17);
			if (IS_OBJECT_VALID(bVar5))
			{
				ATTACH_OBJECTS(bVar5, vLocal_535[bParam09].f_16, Function_52(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar5, vLocal_535[bParam09].f_32, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(vLocal_535[bParam09].f_32, bVar5, 0);
			}
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(vLocal_535[bParam09].f_32, Function_556(bParam0), 3, 1, 1, 1, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(vLocal_535[bParam09].f_28, 0);
		}
	}
	return 1;
}

var Function_556(int iParam0) //Position: 0x13418 / 78872
{
	if (iParam0 > 0 || iParam0 <= 4)
	{
		LOG_ERROR("GET_RAFT_PATH_FOR_INDEX - Invalid index");
		return "";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Local_149.f_1452;
			break;
		
		case 0x00000001:
			return Local_149.f_1456;
			break;
		
		case 0x00000002:
			return Local_149.f_1460;
			break;
		
		case 0x00000003:
			return Local_149.f_1464;
			break;
	}
	return "";
}

void Function_557(bool bParam0, bool bParam1) //Position: 0x1349F / 79007
{
	vector3 vVar0;
	struct<5> Var3;
	
	Function_491(&bParam0, 9, 5, Local_886);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	Function_207(bParam1);
	vVar0 = { StackVal, StackVal, Function_207(bParam1) };
	Function_206(bParam1);
	Var3 = { StackVal, StackVal, Function_206(bParam1) };
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bParam0, &vVar0, -1f);
	return;
}

void Function_558(bool bParam0, bool bParam1) //Position: 0x134DE / 79070
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_52(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_559(bool bParam0, bool bParam1) //Position: 0x13520 / 79136
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_VOLUME_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						bVar3 = GET_BLIP_ON_ACTOR(bVar1);
						if (IS_BLIP_VALID(bVar3))
						{
							REMOVE_BLIP(bVar3);
						}
						bVar2 = GET_MOUNT(bVar1);
						if (IS_ACTOR_VALID(bVar2))
						{
							RELEASE_ACTOR(bVar2);
						}
						RELEASE_ACTOR(bVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_560() //Position: 0x13599 / 79257
{
	if (!Function_12(iLocal_914, 8192))
	{
		if (IS_ACTOR_VALID(Function_41()))
		{
			if (SQUAD_IS_VALID(Local_149.f_632))
			{
				if ((Function_568(Function_41(), Local_149.f_632, 1, 0, 0, 3212836864) || Function_567(Local_149.f_796, Local_149)) || Function_561(Local_149.f_632, Function_41(), 0))
				{
					Function_453(14);
				}
			}
		}
	}
	return;
}

int Function_561(bool bParam0, bool bParam1, bool bParam2) //Position: 0x135F3 / 79347
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_566(bParam0))
	{
		if (bParam2)
		{
			Function_565(bParam0, bParam1, 0);
			Function_564(bParam0, bParam1);
			return 1;
		}
		if (Function_563(bParam0, bParam1))
		{
			Function_565(bParam0, bParam1, 0);
			Function_564(bParam0, bParam1);
			return 1;
		}
		if (Function_562(bParam0, bParam1, 1))
		{
			Function_565(bParam0, bParam1, 0);
			Function_564(bParam0, bParam1);
			return 1;
		}
	}
	return 0;
}

bool Function_562(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13665 / 79461
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar0, bParam1))
					{
						if (bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(bVar0, bParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_563(bool bParam0, bool bParam1) //Position: 0x136CD / 79565
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

void Function_564(bool bParam0, bool bParam1) //Position: 0x13740 / 79680
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

void Function_565(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13792 / 79762
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

bool Function_566(bool bParam0) //Position: 0x137FD / 79869
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

var Function_567(bool bParam0, bool bParam1) //Position: 0x13854 / 79956
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

int Function_568(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x138C6 / 80070
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
			if (Function_569(bParam0, bVar1, iParam2, iParam3, iParam4, iParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_569(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x13926 / 80166
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

void Function_570() //Position: 0x13A13 / 80403
{
	if (Function_541(Local_149.f_652))
	{
		Function_453(0);
	}
	if (Function_541(Local_149.f_656))
	{
		Function_453(1);
	}
	if (Function_541(Local_149.f_660))
	{
		Function_453(2);
	}
	if (Function_541(Local_149.f_664))
	{
		Function_453(3);
	}
	if (Function_541(Local_149.f_684))
	{
		Function_453(8);
	}
	if (Function_541(Local_149.f_696))
	{
		Function_453(25);
	}
	if (Function_541(Local_149.f_700))
	{
		Function_453(16);
	}
	return;
}

void Function_571() //Position: 0x13A85 / 80517
{
	if (Function_450())
	{
		Function_572();
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_448(6);
			break;
		
		case 0x00000006:
			Function_448(7);
			break;
		
		case 0x00000007:
			Function_448(106);
			break;
		
		case 0x0000006A:
			iLocal_519 = 5;
			Function_448(0);
			break;
	}
	return;
}

void Function_572() //Position: 0x13AD5 / 80597
{
	Function_475(&vLocal_597, 1920.0f, bLocal_729, 4.0f, 2, 0);
	Function_573();
	return;
}

void Function_573() //Position: 0x13AF0 / 80624
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { -3861.272f, 6.82f, 4317.189f };
	if (Function_229(Global_30685[4]))
	{
		bVar3 = LOCATE_PHYSINST_OF_TYPE(vVar0, 10.0f, "p_gen_footlockerfull01x", 1);
		if (IS_PHYSINST_VALID(bVar3))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar3));
		}
	}
	return;
}

void Function_574() //Position: 0x13B4E / 80718
{
	if (Function_450())
	{
		Function_572();
		Function_473(1);
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_525(0);
			SET_ACTOR_INVULNERABILITY(Function_41(), 1);
			Function_448(6);
			break;
		
		case 0x00000006:
			Function_361(&uLocal_731, 8, 0, 4294967295, 4294967295);
			bLocal_729 = "NOS_CO_back_to_raft_obj";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (Function_545())
			{
				Function_448(8);
			}
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (!Function_544(Local_149.f_716))
				{
					Function_543(StackVal, StackVal, Local_149, Local_149.f_716, &iLocal_900, &bLocal_901, "NOS_CO_back_to_shore_obj", vLocal_597, 330, &bLocal_606, 0);
				}
				if (IS_ACTOR_IN_VOLUME(StackVal, Function_41()) || IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_716))
				{
					Function_448(8);
				}
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (!Function_544(Local_149.f_716))
				{
					Function_543(StackVal, StackVal, Local_149, Local_149.f_716, &iLocal_900, &bLocal_901, "NOS_CO_back_to_shore_obj", vLocal_597, 330, &bLocal_606, 0);
				}
			}
			if (Function_434(4, 1, 0x3f800000))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_323(&Global_78578 + 96);
				}
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_448(9);
			}
			break;
		
		case 0x00000009:
			if (HUD_IS_FADED())
			{
				Function_182(Local_149.f_1076, 0);
				Function_448(10);
			}
			break;
		
		case 0x0000000A:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 920), 1, 1, 1);
			Function_347(&iLocal_603);
			Function_448(11);
			break;
		
		case 0x0000000B:
			if (Function_352(&iLocal_603) <= 3.0f)
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			Function_14();
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_716))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_716)));
			}
			SET_ACTOR_INVULNERABILITY(Function_41(), 0);
			iLocal_908 = Function_150(12);
			iLocal_902 = Function_365(31, GET_LOCAL_SLOT());
			Local_880 = iLocal_902;
			Function_179(&Local_927, 0);
			Function_575(&bLocal_606);
			iLocal_519 = 4;
			Function_448(0);
			break;
	}
	return;
}

void Function_575(var uParam0) //Position: 0x13D85 / 81285
{
	if (IS_OBJECT_VALID(*uParam0))
	{
		Function_530(*uParam0);
	}
	return;
}

void Function_576() //Position: 0x13D9A / 81306
{
	if (Function_450())
	{
		Function_572();
		Function_473(1);
		if (bLocal_897)
		{
			Function_460(&Local_927);
		}
		Function_538(&uLocal_731, 34, 40, 38, 10.0f);
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			if (bLocal_897)
			{
				Function_581();
				if (!Function_12(iLocal_914, 131072))
				{
					Function_578();
				}
			}
			Function_448(6);
			break;
		
		case 0x00000006:
			Function_361(&uLocal_731, 38, 0, 4294967295, 4294967295);
			bLocal_729 = "NOS_CO_stage01_obj03";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (bLocal_897)
			{
				if (Function_12(iLocal_914, 128))
				{
					if (Function_434(3, 1, 0x3f800000))
					{
						Function_448(106);
					}
				}
				else if ((Function_458(Local_149.f_624, 0, 0, 0, 0, 0) >= 0 && Function_577(Local_927.f_68) >= 0) && Function_454(&Local_927))
				{
					Function_453(23);
				}
			}
			else if (Function_434(3, 1, 0x3f800000))
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			iLocal_519 = 3;
			Function_448(0);
			break;
	}
	return;
}

int Function_577(bool bParam0) //Position: 0x13EB5 / 81589
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar2 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar2++;
			}
		}
		bVar0++;
	}
	return bVar2;
}

void Function_578() //Position: 0x13F02 / 81666
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_580();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_579(Local_149.f_624, 1);
	Function_490(&Local_149 + 624, 9, 5, Local_886.f_16);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_624, 0, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	return;
}

void Function_579(bool bParam0, bool bParam1) //Position: 0x13F40 / 81728
{
	if (SQUAD_IS_VALID(bParam0))
	{
		SQUAD_GOALS_CLEAR(bParam0);
		Function_506(bParam0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bParam0, 0);
		Function_487(&bParam0, 1);
		if (bParam1)
		{
			Function_486(bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
	}
	return;
}

void Function_580() //Position: 0x13F82 / 81794
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_624 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "CRKMain"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkm_1", 401, -3880f, 7.169553f, 4313.743f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_624);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkm_2", 414, -3888f, 7.06177f, 4318.412f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_624);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkm_3", 405, -3889.77f, 7.032355f, 4314.231f, 0.0f, 131.1267f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_624);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_581() //Position: 0x14078 / 82040
{
	Function_583(&Local_927, "crk", Local_149.f_1324);
	Function_515(&Local_927, 82073);
	return;
}

void Function_582(bool bParam0, bool bParam1) //Position: 0x14099 / 82073
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_491(&bParam0, 9, 5, Local_886.f_12);
	SET_ACTOR_FACTION(bParam0, 19);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	TASK_CLEAR(bParam0);
	bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_149.f_1328);
	GET_OBJECT_POSITION(bVar4, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(bParam0, &uVar1, 3);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_583(int iParam0, char* cParam1, int iParam2) //Position: 0x14118 / 82200
{
	Function_179(iParam0, 0);
	Function_584(iParam0);
	Function_518(iParam0, cParam1, iParam2, iParam0->f_12, iParam0->f_16, iParam0->f_24, iParam0->f_28, iParam0->f_52, iParam0->f_56, iParam0->f_60, 0);
	return;
}

void Function_584(var uParam0) //Position: 0x1414F / 82255
{
	uParam0->f_36 = 0;
	return;
}

void Function_585() //Position: 0x1415A / 82266
{
	if (Function_450())
	{
		Function_572();
		Function_473(1);
		if (bLocal_897)
		{
			Function_460(&Local_927);
		}
		if (!Function_12(iLocal_914, 131072))
		{
			Function_588();
		}
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			TASK_CLEAR(bLocal_717);
			Function_586();
			Function_525(0);
			Function_448(6);
			Function_485();
			break;
		
		case 0x00000006:
			Function_510();
			Function_361(&uLocal_731, 40, 0, 4294967295, 4294967295);
			bLocal_729 = "NOS_CO_stage01_obj02";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			Function_448(7);
			break;
		
		case 0x00000007:
			if (bLocal_897)
			{
				if (Function_12(iLocal_914, 64))
				{
					if (Function_434(2, 1, 0x3f800000))
					{
						Function_448(106);
					}
				}
				else if ((Function_458(Local_149.f_616, Local_149.f_620, 0, 0, 0, 0) >= 0 && Function_577(Local_927.f_68) >= 0) && Function_454(&Local_927))
				{
					Function_453(22);
				}
			}
			else if (Function_434(2, 1, 0x3f800000))
			{
				Function_448(106);
			}
			break;
		
		case 0x0000006A:
			iLocal_519 = 2;
			Function_448(0);
			break;
	}
	return;
}

void Function_586() //Position: 0x14274 / 82548
{
	Function_518(&Local_927, "cd", Local_149.f_944, 496, 504, 15, 5, 2.0f, 0, 1, 0);
	Function_515(&Local_927, 82593);
	return;
}

void Function_587(bool bParam0, bool bParam1) //Position: 0x142A1 / 82593
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_491(StackVal, &bParam0, 9, 5);
	SET_ACTOR_FACTION(bParam0, 19);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	TASK_CLEAR(bParam0);
	bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_149.f_948);
	GET_OBJECT_POSITION(bVar4, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(bParam0, &uVar1, 3);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_588() //Position: 0x14320 / 82720
{
	if (IS_ACTOR_VALID(Function_41()) && IS_VOLUME_VALID(Local_149.f_808))
	{
		if (IS_ACTOR_IN_VOLUME(Function_41(), Local_149.f_808))
		{
			Function_453(13);
		}
	}
	return;
}

void Function_589() //Position: 0x1434B / 82763
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (Function_450())
	{
		if (bLocal_897)
		{
			Function_607();
		}
		if (Function_541(Local_149.f_800))
		{
			Function_453(12);
		}
		Function_572();
	}
	switch (iLocal_520)
	{
		case 0x00000000:
			Function_329(&vLocal_597);
			Function_480();
			Function_449();
			Function_605();
			HUD_FADE_OUT(1.0f, 1f, 1);
			NET_LOG(bLocal_899, "Mission Stage01", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_448(105);
			break;
		
		case 0x00000069:
			if (HUD_IS_FADED())
			{
				STREAMING_SET_CUTSCENE_MODE(1);
				Function_207(Local_149.f_1312);
				vVar0 = { StackVal, StackVal, Function_207(Local_149.f_1312) };
				Function_206(Local_149.f_1312);
				vVar3 = { StackVal, StackVal, Function_206(Local_149.f_1312) };
				STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
				Function_448(1);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4) && STREAMING_IS_WORLD_LOADED())
			{
				if (Function_434(3, 1, 0x3f800000))
				{
					Function_603();
					Function_448(2);
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(Function_41()))
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(GET_LOCAL_SLOT(), Local_71.f_44);
				if (IS_OBJECT_VALID(bVar6))
				{
					iLocal_1016 = ATTACH_OBJECTS(Function_41(), bVar6, Function_52(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				}
			}
			Function_448(3);
			break;
		
		case 0x00000003:
			if (Function_591())
			{
				STREAMING_UNLOAD_BOUNDS();
				STREAMING_UNLOAD_SCENE();
				STREAMING_LOAD_SCENE_EXT(-3822.637f, 12.541f, 4204.311f, -22.148f, 130.154f, 0.0f, 0);
				STREAMING_LOAD_BOUNDS(-3841.256f, 2.557f, 4223.242f, 20.0f, 1);
				STREAMING_LOAD_BOUNDS(*(&Local_149 + 840), 6.0f, 1);
				Function_448(5);
			}
			break;
		
		case 0x00000005:
			if (STREAMING_ARE_BOUNDS_LOADED(*(&Local_149 + 840), 6.0f))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 840), 1, 1, 1);
				Function_361(&uLocal_731, 3, 0, 4294967295, 4294967295);
				Function_519(&uLocal_1013, 3.0f);
				Function_448(4);
			}
			break;
		
		case 0x00000004:
			if (Function_469(&uLocal_1013))
			{
				HUD_FADE_IN(1.0f, 1065353216);
				REMOVE_OBJECT_ATTACHMENT(iLocal_1016);
				Function_26(&bLocal_609, 0);
				Function_535();
				if (bLocal_897)
				{
					Function_473(0);
				}
				iLocal_782 = 0;
				Function_448(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_448(7);
			}
			break;
		
		case 0x00000007:
			Function_590(Local_149.f_616, 1);
			Function_534(Local_149.f_708, 330, 0x40a00000);
			Function_532(Local_149, Local_149.f_708, &bLocal_606, 0);
			if (NET_IS_SESSION_HOST())
			{
				Function_537(&Global_78578 + 96);
			}
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_717, Local_149.f_1420, 3, 1, 1, 1, 0);
			bLocal_729 = "NOS_CO_stage01_obj01";
			Function_455(bLocal_729, 0x40f00000, 1, 2, 0);
			NET_LOG(bLocal_899, "Mission Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
			Function_448(8);
			break;
		
		case 0x00000008:
			if (Function_12(iLocal_914, 1))
			{
				if (Function_434(1, 1, 0x3f800000))
				{
					Function_448(106);
				}
			}
			else if (Function_531(Local_149.f_708))
			{
				Function_453(21);
			}
			break;
		
		case 0x0000006A:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_708))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_708)));
			}
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			STREAMING_UNLOAD_SCENE();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_519 = 1;
			Function_448(0);
			break;
	}
	return;
}

void Function_590(bool bParam0, int iParam1) //Position: 0x146B0 / 83632
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
				MEMORY_ALLOW_SHOOTING(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_591() //Position: 0x146F8 / 83704
{
	bool bVar0;
	var uVar1;
	
	Function_602(&Local_528, 1);
	bVar0 = false;
	if (((Local_528 != 1001 || Local_528 != 1002) || Local_528 != 1003) || Local_528 != 1004)
	{
		bVar0 = Function_600();
	}
	switch (Local_528)
	{
		case 0x000003E8:
			iLocal_1003 = 15;
			Function_347(&Local_528 + 4);
			Function_423(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_421();
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_528.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_528.f_16 = Function_592(Local_149, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_528.f_16))
				{
				}
				else
				{
					LOG_ERROR("NosalidaMP_CO_cutscene01 - Failed to create NosalidaMP_CO_cutscene01_cutscene");
				}
			}
			Local_528 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_528.f_16), false))
			{
				Function_416(Global_34573, 1, 1);
				Local_528 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (Function_434(1003, 1, 0x3f800000))
			{
				if (HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_528 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_352(&Local_528 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Local_528 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_347(&Local_528 + 4);
				Local_528 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_416(Global_34573, 0, 1);
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_47(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_528.f_16))
				{
					DESTROY_OBJECT(Local_528.f_16);
				}
				Local_528 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_528 = 1104;
			}
			break;
	}
	return 0;
}

var Function_592(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1492D / 84269
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "NosalidaMP_CO_cutscene01", 6, 1);
	}
	Function_593(&bVar0);
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

void Function_593(int iParam0) //Position: 0x149B1 / 84401
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_599(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_598(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_597(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_596(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_595(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_594(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 6.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 6.0f, 3, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 2.0f, 4);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(uVar1, 0.0f, 2.0f, 0);
	return;
}

void Function_594(int iParam0) //Position: 0x14A57 / 84567
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.45752f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3756.015f, 4.054717f, 4183.693f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.017413f, 1.943555f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_595(int iParam0) //Position: 0x14AC1 / 84673
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.45752f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3760.654f, 4.243637f, 4181.658f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.047374f, 2.072772f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_596(int iParam0) //Position: 0x14B2B / 84779
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 60.39605f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3818.63f, 3.512527f, 4199.778f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.019736f, -1.597512f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_597(int iParam0) //Position: 0x14B95 / 84885
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 60.39605f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3818.69f, 3.512182f, 4208.808f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.007174f, -1.502768f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_598(int iParam0) //Position: 0x14BFF / 84991
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 60.39605f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3845.467f, 3.913669f, 4220.874f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.060953f, -1.35983f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_599(var uParam0) //Position: 0x14C62 / 85090
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.39605f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -3846.888f, 3.955291f, 4225.356f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.011906f, -1.299785f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_600() //Position: 0x14CC5 / 85189
{
	switch (iLocal_1003)
	{
		case 0x0000000F:
			if (Function_352(&Local_528 + 4) < 2.0f)
			{
				Function_601();
				iLocal_1003 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1003 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_352(&Local_528 + 4) < 30.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_601() //Position: 0x14D23 / 85283
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene1_v1_AA", "TRiv_Scene1_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene1_v1_AB", "TRiv_Scene1_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene1_v1_AC", "TRiv_Scene1_v1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "TRiv_Scene1_v1_AD", "TRiv_Scene1_v1_AD", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_602(var uParam0, bool bParam1) //Position: 0x14E0C / 85516
{
	if (!uParam0->f_24)
	{
		if (((((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106) && !UI_ISACTIVE("Cutscenes_Paused")) && !UI_ISACTIVE("PauseScene"))
		{
			if (IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
			{
				if (!Function_194(4096, 1))
				{
					Function_46(4096, 1);
				}
			}
			if (Function_342())
			{
				uParam0->f_24 = 1;
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
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_603() //Position: 0x14EE6 / 85734
{
	bool bVar0;
	char* cVar1[24];
	bool bVar7;
	
	bVar7 = true;
	while (bVar7 < 5)
	{
		strcpy(&cVar1, "crkd_", 24);
		stradd(&cVar1, I2STR(bVar7), 24);
		bVar0 = FIND_ACTOR_IN_LAYOUT(Local_149, &cVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_604(bVar0, "UseCase1");
		}
		bVar7++;
	}
	SET_PATH_LOOPING(Local_149.f_1432, 1);
	bVar0 = FIND_ACTOR_IN_LAYOUT(Local_149, "crkd_6");
	if (IS_ACTOR_VALID(bVar0))
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0, Local_149.f_1432, 1, 1, 0, 1, 0);
	}
	return;
}

void Function_604(bool bParam0, bool bParam1) //Position: 0x14F64 / 85860
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_235(bParam0);
		vVar1 = { StackVal, StackVal, Function_235(bParam0) };
		bVar0 = LOCATE_GRINGO_OF_TYPE("", &vVar1, 2.0f, 1);
		if (IS_GRINGO_VALID(bVar0))
		{
			TASK_USE_GRINGO(bParam0, bVar0, bParam1, 4294967295, 1);
			SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(bVar0), bParam1, 1, 0, 0);
		}
	}
	return;
}

void Function_605() //Position: 0x14FB0 / 85936
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_606();
	NET_OBJECT_REPLICATION_MODE_END(15);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_616, 0, 0, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_590(Local_149.f_616, 0);
	return;
}

void Function_606() //Position: 0x14FE0 / 85984
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_616 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "CRKDock"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_1", 397, -3830.359f, 1.429f, 4220.658f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_2", 399, -3834.677f, 2.244f, 4216.233f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_3", 414, -3845.536f, 1.934f, 4213.413f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_4", 419, -3850.0f, 4.137f, 4229.842f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_5", 402, -3850.318f, 7.346f, 4240.205f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "crkd_6", 401, -3834.412f, 2.393825f, 4223.636f, 0.0f, 49.62387f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_616);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_607() //Position: 0x1519B / 86427
{
	if (!Function_12(iLocal_914, 8))
	{
		if (IS_ACTOR_VALID(Function_41()))
		{
			if ((Function_568(Function_41(), Local_149.f_616, 1, 0, 0, 3212836864) || Function_567(Local_149.f_792, Local_149)) || Function_561(Local_149.f_616, Function_41(), 0))
			{
				Function_453(11);
			}
		}
	}
	return;
}

void Function_608() //Position: 0x151E9 / 86505
{
	switch (iLocal_520)
	{
		case 0x00000006:
			Function_746();
			Function_745();
			if (Function_744("NOSDebug"))
			{
				Global_83591 = 9999;
				bLocal_897 = false;
			}
			if (Function_744("NOSRaftRevival"))
			{
				bLocal_898 = true;
			}
			Function_742(&Global_83591, 0, 19, 10, 0);
			Function_742(&Global_83591, 1, 24, 5, 0);
			Function_742(&Global_83591, 2, 23, 5, 0);
			HUD_SET_SHOOT_BLIP_MAX_DISTANCE(50.0f);
			Function_741();
			Function_694(&bLocal_609);
			STREAMING_LOAD_BOUNDS(*(&Local_149 + 812), 6.0f, 0);
			REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_781, 1);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_783, 97);
			Function_693();
			iLocal_520 = 7;
			break;
		
		case 0x00000007:
			if (Function_683())
			{
				if (Function_656(Local_149, &Global_83591 + 276, 1, 1) != 0)
				{
					iLocal_520 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (!Function_331(&iLocal_915))
			{
				Function_329(&iLocal_915);
			}
			if (NET_IS_SESSION_HOST())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 6);
				bLocal_717 = CREATE_ACTOR_IN_LAYOUT(Local_149, "playerRaft", 1190, *(&Local_149 + 812), *(&Local_149 + 812 + 12));
				NET_OBJECT_REPLICATION_MODE_END(15);
				SET_ACTOR_INVULNERABILITY(bLocal_717, 1);
			}
			iLocal_520 = 9;
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(bLocal_717))
			{
				if (Function_648(GET_OBJECT_FROM_ACTOR(bLocal_717)))
				{
					WAIT(1000);
					iLocal_520 = 10;
				}
			}
			else if (NET_IS_SESSION_CLIENT())
			{
				Function_354(&Local_149, "playerraft", &bLocal_717);
			}
			break;
		
		case 0x0000000A:
			iLocal_907 = AUDIO_MUSIC_GET_RANDOM_TRACK_FROM_PLAYLIST("MP_PLAYLIST_NOSALIDA_RIVER");
			AUDIO_MUSIC_FORCE_TRACK_HASH(iLocal_907, "SILENT", 0.0f, 4294967295, 4294967295, 0.0f, 0);
			Function_361(&uLocal_731, 0, 0, 4294967295, 4294967295);
			if (Function_155())
			{
				Function_647(3);
			}
			else
			{
				Function_647(2);
			}
			Function_513(Function_746(), &bLocal_609);
			Function_646(&bLocal_609, 0);
			Function_26(&bLocal_609, 1);
			CAMERA_RESET(0);
			ENABLE_VEHICLE_SEAT(bLocal_717, false, 0);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(9, 58, 0));
			Function_640(1, 0);
			UNK_0x2148AC15(322, 10);
			UNK_0x444C3C32(0, 4, 0);
			Function_182(Local_71.f_44, 1);
			iLocal_520 = 0;
			iLocal_519 = 0;
			Local_528 = 1000;
			Function_609();
			NET_LOG(bLocal_899, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", false, false, false, false);
			break;
	}
	return;
}

void Function_609() //Position: 0x1545E / 87134
{
	int iVar0;
	
	iVar0 = 96718;
	NET_SCRIPTMSG_REGISTER_HANDLER(32, iVar0);
	iVar0 = 96698;
	NET_SCRIPTMSG_REGISTER_HANDLER(33, iVar0);
	iVar0 = 96237;
	NET_SCRIPTMSG_REGISTER_HANDLER(35, iVar0);
	iVar0 = 87798;
	NET_SCRIPTMSG_REGISTER_HANDLER(36, iVar0);
	iVar0 = 87245;
	NET_SCRIPTMSG_REGISTER_HANDLER(37, iVar0);
	iVar0 = 87224;
	NET_SCRIPTMSG_REGISTER_HANDLER(15, iVar0);
	return;
}

void Function_610(bool bParam0) //Position: 0x154B8 / 87224
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_307(&bLocal_609);
	return;
}

void Function_611(bool bParam0) //Position: 0x154CD / 87245
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_207(StackVal);
		Function_614(StackVal, StackVal, Function_207(StackVal));
		Function_430(iVar0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
		}
		Function_613(iVar0);
		if (IS_OBJECT_VALID(StackVal))
		{
			DISABLE_CHILD_SECTOR(Function_612(iVar0));
			DESTROY_OBJECT(StackVal);
		}
		if (IS_OBJECT_VALID(Local_1017[iVar04]))
		{
			DESTROY_OBJECT(Local_1017[iVar04]);
		}
	}
	return;
}

var Function_612(int iParam0) //Position: 0x15568 / 87400
{
	switch (iParam0)
	{
		case 0x00000000:
			return "mp_nos_coop01ax";
		
		case 0x00000001:
			return "mp_nos_coop01bx";
		
		case 0x00000002:
			return "mp_nos_coop01cx";
		
		case 0x00000003:
			return "mp_nos_coop01dx";
		
		case 0x00000004:
			return "mp_nos_coop01ex";
		
		default:
	}
	return "";
}

void Function_613(int iParam0) //Position: 0x155F5 / 87541
{
	bool bVar0;
	vector3 vVar1;
	
	Function_207(StackVal);
	vVar1 = { StackVal, StackVal, Function_207(StackVal) };
	bVar0 = LOCATE_PHYSINST_OF_TYPE(vVar1, 2.0f, "p_gen_crateWeapons03x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

void Function_614(vector3 vParam0) //Position: 0x1563B / 87611
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.5f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 1.0f };
	if (NET_IS_SESSION_HOST())
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vParam0, StackVal) };
		Function_615(&vVar9, "DynamiteExplosion", 0, 1);
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vParam0, StackVal) };
		Function_615(&vVar9, "DynamiteExplosion", 0, 1);
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vParam0, StackVal) };
		Function_615(&vVar9, "FireBottleExplosion", 0, 1);
	}
	return;
}

void Function_615(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x156DA / 87770
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_616(bool bParam0) //Position: 0x156F6 / 87798
{
	int iVar0;
	bool bVar1;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(Local_149.f_652))
			{
				DESTROY_VOLUME(Local_149.f_652);
				Function_361(&uLocal_731, 34, 0, 4294967295, 4294967295);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_635();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_572, 1);
					Function_634(Local_149.f_572, 1);
					Function_490(&Local_149 + 572, 9, 5, Local_886.f_20);
					Function_633(Local_149.f_572, Local_149.f_892, 0);
				}
			}
			break;
		
		case 0x00000001:
			if (IS_VOLUME_VALID(Local_149.f_656))
			{
				DESTROY_VOLUME(Local_149.f_656);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_632();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_576, 1);
					Function_634(Local_149.f_576, 1);
					Function_490(&Local_149 + 576, 9, 5, Local_886.f_20);
					Function_633(Local_149.f_576, Local_149.f_896, 0);
				}
			}
			break;
		
		case 0x00000002:
			if (IS_VOLUME_VALID(Local_149.f_660))
			{
				DESTROY_VOLUME(Local_149.f_660);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_631();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_580, 1);
					Function_634(Local_149.f_580, 1);
					Function_490(&Local_149 + 580, 9, 5, Local_886.f_20);
					Function_633(Local_149.f_580, Local_149.f_900, 0);
				}
			}
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_149.f_664))
			{
				DESTROY_VOLUME(Local_149.f_664);
				Function_169(&Local_149 + 572, 0, 0);
				Function_173(Local_149.f_572);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_630();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_584, 1);
					Function_634(Local_149.f_584, 1);
					Function_490(&Local_149 + 584, 9, 5, Local_886.f_20);
					Function_633(Local_149.f_584, Local_149.f_904, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_149.f_668))
			{
				DESTROY_VOLUME(Local_149.f_668);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_629();
					Function_628();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_596, 1);
					Function_490(&Local_149 + 596, 9, 5, Local_886.f_32);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_596, 0, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_149.f_1440, 3, 0, 0, 1, 0);
					Function_579(Local_149.f_592, 1);
					Function_490(&Local_149 + 592, 9, 5, Local_886.f_32);
					Function_634(Local_149.f_592, 1);
					Function_633(Local_149.f_592, Local_149.f_908, 0);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_149.f_672))
			{
				DESTROY_VOLUME(Local_149.f_672);
				if (bLocal_897)
				{
					Function_169(&Local_149 + 596, 0, 0);
					Function_173(Local_149.f_596);
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_627();
					Function_626();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_604, 1);
					Function_490(&Local_149 + 604, 9, 5, Local_886.f_32);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_604, 0, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_149.f_1444, 4, 0, 0, 1, 0);
					Function_579(Local_149.f_600, 1);
					Function_490(&Local_149 + 600, 9, 5, Local_886.f_32);
					Function_634(Local_149.f_600, 1);
					Function_633(Local_149.f_600, Local_149.f_912, 0);
				}
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(Local_149.f_676))
			{
				DESTROY_VOLUME(Local_149.f_676);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_625();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_169(&Local_149 + 604, 0, 0);
					Function_173(Local_149.f_604);
					Function_579(Local_149.f_608, 1);
					Function_490(&Local_149 + 608, 9, 5, Local_886.f_32);
					Function_634(Local_149.f_608, 1);
					Function_633(Local_149.f_608, Local_149.f_916, 0);
				}
			}
			break;
		
		case 0x00000007:
			if (IS_VOLUME_VALID(Local_149.f_680))
			{
				DESTROY_VOLUME(Local_149.f_680);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_624();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_612, 1);
					Function_490(&Local_149 + 612, 9, 5, Local_886.f_32);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_612, 0, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_149.f_1448, 4, 0, 0, 1, 0);
				}
			}
			break;
		
		case 0x00000019:
			if (IS_VOLUME_VALID(Local_149.f_696))
			{
				DESTROY_VOLUME(Local_149.f_696);
				STREAMING_UNLOAD_SCENE();
				STREAMING_LOAD_SCENE_EXT(-4290.348f, 5.115f, 3749.786f, -0.959f, -0.004f, -0.282f, 0);
				STREAMING_LOAD_BOUNDS(-4295.001f, 3.829f, 3748.575f, 30.0f, 1);
				Function_169(&Local_149 + 584, 0, 0);
				Function_173(Local_149.f_584);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_623();
					Function_622();
					Function_619();
					NET_OBJECT_REPLICATION_MODE_END(15);
					Function_579(Local_149.f_628, 1);
					Function_579(Local_149.f_632, 0);
					Function_579(Local_149.f_588, 1);
					Function_618();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_628, 0, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					Function_634(Local_149.f_588, 1);
					Function_490(&Local_149 + 588, 9, 5, Local_886.f_20);
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_149.f_588, false);
					if (IS_ACTOR_VALID(bVar1))
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_149.f_1436, 3, 1, 0, 1, 0);
					}
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_149.f_588, true);
					if (IS_ACTOR_VALID(bVar1))
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_149.f_1436, 3, 1, 0, 1, 0);
					}
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_149.f_588, 2);
					if (IS_ACTOR_VALID(bVar1))
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_149.f_1436, 3, 1, 0, 1, 0);
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (!Function_12(iLocal_914, 8192))
			{
				Function_9(&iLocal_914, 8192);
				Function_506(Local_149.f_632);
				SQUAD_GOALS_CLEAR(Local_149.f_632);
				Function_486(Local_149.f_632, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_490(&Local_149 + 632, 9, 5, Local_886.f_28);
				Function_488(Local_149.f_632, -1.0f);
				Function_487(&Local_149 + 632, 1);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_632, 0);
				Function_617(Local_149.f_632, 100.0f);
			}
			break;
		
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_149.f_684))
			{
				DESTROY_VOLUME(Local_149.f_684);
				Function_169(&Local_149 + 576, 0, 0);
				Function_173(Local_149.f_576);
				Function_169(&Local_149 + 580, 0, 0);
				Function_173(Local_149.f_580);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_555(1);
					NET_OBJECT_REPLICATION_MODE_END(15);
				}
			}
			break;
		
		case 0x00000009:
			if (IS_VOLUME_VALID(Local_149.f_688))
			{
				DESTROY_VOLUME(Local_149.f_688);
				if (bLocal_897)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 4);
					Function_555(2);
					NET_OBJECT_REPLICATION_MODE_END(15);
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_VOLUME_VALID(Local_149.f_692))
			{
				DESTROY_VOLUME(Local_149.f_692);
				NET_OBJECT_REPLICATION_MODE_START(15, 4);
				Function_555(3);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
			break;
		
		case 0x0000000B:
			if (!Function_12(iLocal_914, 8))
			{
				Function_9(&iLocal_914, 8);
				Function_361(&uLocal_731, 6, 0, 4294967295, 4294967295);
				Function_506(Local_149.f_616);
				SQUAD_GOALS_CLEAR(Local_149.f_616);
				Function_579(Local_149.f_616, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_616, 0, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_490(StackVal, &Local_149 + 616, 9, 5);
				Function_617(Local_149.f_616, 150.0f);
			}
			break;
		
		case 0x0000000C:
			if (!Function_12(iLocal_914, 16384))
			{
				Function_9(&iLocal_914, 16384);
				DESTROY_VOLUME(Local_149.f_800);
				Function_361(&uLocal_731, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000015:
			if (!Function_12(iLocal_914, 1))
			{
				Function_9(&iLocal_914, 1);
			}
			break;
		
		case 0x00000011:
			if (!Function_12(iLocal_914, 32768))
			{
				Function_9(&iLocal_914, 32768);
				Function_361(&uLocal_731, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000012:
			if (!Function_12(iLocal_914, 65536))
			{
				if (IS_PLAYER_IN_COMBAT(0))
				{
					Function_361(&uLocal_731, 34, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_361(&uLocal_731, 6, 0, 4294967295, 4294967295);
				}
				Function_9(&iLocal_914, 65536);
				DESTROY_VOLUME(Local_149.f_804);
			}
			break;
		
		case 0x00000016:
			if (!Function_12(iLocal_914, 64))
			{
				Function_9(&iLocal_914, 64);
			}
			break;
		
		case 0x00000017:
			if (!Function_12(iLocal_914, 128))
			{
				Function_9(&iLocal_914, 128);
			}
			break;
		
		case 0x00000018:
			if (!Function_12(iLocal_914, 2))
			{
				Function_9(&iLocal_914, 2);
			}
			break;
		
		case 0x0000001A:
			if (!Function_12(iLocal_914, 2048))
			{
				Function_9(&iLocal_914, 2048);
			}
			break;
		
		case 0x0000001B:
			if (!Function_12(iLocal_914, 4))
			{
				Function_9(&iLocal_914, 4);
			}
			break;
		
		case 0x0000001D:
			if (IS_VOLUME_VALID(Local_149.f_736))
			{
				DESTROY_VOLUME(Local_149.f_736);
				Function_506(Local_149.f_640);
				SQUAD_GOALS_CLEAR(Local_149.f_640);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_149.f_640, false, Local_149.f_732, 4294967295);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_149.f_640, 0);
			}
			break;
		
		case 0x0000000F:
			if (IS_VOLUME_VALID(Local_149.f_784))
			{
				DESTROY_VOLUME(Local_149.f_784);
				Function_506(Local_149.f_628);
				SQUAD_GOALS_CLEAR(Local_149.f_628);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_149.f_628, 0, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			}
			break;
		
		case 0x0000001E:
			if (!Function_12(iLocal_914, 16))
			{
				Function_9(&iLocal_914, 16);
			}
			break;
		
		case 0x0000001F:
			if (!Function_12(iLocal_914, 1024))
			{
				Function_9(&iLocal_914, 1024);
			}
			break;
		
		case 0x00000020:
			if (!Function_12(iLocal_914, 4096))
			{
				if (IS_VOLUME_VALID(Local_149.f_788))
				{
					DESTROY_VOLUME(Local_149.f_788);
				}
				Function_9(&iLocal_914, 4096);
			}
			break;
		
		case 0x00000010:
			if (IS_VOLUME_VALID(Local_149.f_700))
			{
				DESTROY_VOLUME(Local_149.f_700);
				Function_525(0);
			}
			break;
		
		case 0x00000013:
			if (IS_VOLUME_VALID(Local_149.f_704))
			{
				DESTROY_VOLUME(Local_149.f_704);
				Function_525(0);
			}
			break;
		
		case 0x0000000D:
			if (IS_VOLUME_VALID(Local_149.f_808))
			{
				DESTROY_VOLUME(Local_149.f_808);
				Function_9(&iLocal_914, 131072);
				Function_578();
			}
			break;
	}
	return;
}

void Function_617(bool bParam0, float fParam1) //Position: 0x16040 / 90176
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, fParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, fParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0.1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, fParam1);
		bVar1++;
	}
	return;
}

void Function_618() //Position: 0x16099 / 90265
{
	bool bVar0;
	char* cVar1[24];
	bool bVar7;
	
	bVar7 = true;
	while (bVar7 < 4)
	{
		strcpy(&cVar1, "scrm_", 24);
		stradd(&cVar1, I2STR(bVar7), 24);
		bVar0 = FIND_ACTOR_IN_LAYOUT(Local_149, &cVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_604(bVar0, "UseCase1");
		}
		bVar7++;
	}
	return;
}

void Function_619() //Position: 0x160E7 / 90343
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_588 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "s2ambush5horse"));
	bVar0 = Function_620(Local_149, "SGH_1", 504, Function_52(), 989, -4220.757f, 3.381359f, 3808.208f, 0.0f, 212.2754f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_588);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "SGH_2", 503, Function_52(), 989, -4225.825f, 3.807333f, 3800.03f, 0.0f, 196.4077f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_588);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "SGH_3", 502, Function_52(), 989, -4229.754f, 3.631121f, 3789.337f, 0.0f, 196.6161f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_588);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

bool Function_620(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x161D0 / 90576
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_621(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_621(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_621(int iParam0) //Position: 0x162F5 / 90869
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_622() //Position: 0x1630C / 90892
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_628 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "SCRHouse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_1", 499, -4317.235f, 5.096519f, 3743.044f, 0.0f, 87.15047f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_2", 501, -4316.889f, 5.096517f, 3745.423f, 0.0f, 176.1044f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_3", 502, -4310.718f, 5.096519f, 3744.584f, 0.0f, -85.96255f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_4", 503, -4312.048f, 5.096519f, 3745.514f, 0.0f, -176.0784f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_5", 497, -4311.036f, 5.001161f, 3738.81f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrh_6", 499, -4316.0f, 5.001161f, 3739.188f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_623() //Position: 0x164DA / 91354
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "SCRMain"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_1", 496, -4313.503f, 5.004f, 3757.444f, 0.0f, 186.2543f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_2", 504, -4311.782f, 4.928f, 3748.682f, 0.0f, 210.1868f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_3", 502, -4271.642f, 2.922f, 3741.425f, 0.0f, 213.4529f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_4", 499, -4298.934f, 3.85f, 3755.976f, 0.0f, 132.6104f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_5", 497, -4276.0f, 3.011735f, 3743.886f, 0.0f, 144.0835f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_6", 500, -4327.0f, 5.334234f, 3748.0f, 0.01896286f, 208.3991f, 1.694227f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_7", 502, -4302.551f, 4.113f, 3765.237f, 0.0f, -138.433f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "scrm_8", 504, -4295.745f, 4.318542f, 3718.437f, 0.1783105f, 213.7388f, 3.896176f);
	SQUAD_JOIN(bVar0, Local_149.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_624() //Position: 0x16747 / 91975
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_612 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "s3ambush4horse"));
	bVar0 = Function_620(Local_149, "s3_amb4_h_1", 401, Function_52(), 989, -4758.105f, 2.806658f, 3814.535f, 0.0f, 216.7438f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_612);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "s3_amb4_h_2", 398, Function_52(), 989, -4764.978f, 2.83516f, 3809.451f, 0.0f, 231.0623f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_612);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "s3_amb4_h_3", 404, Function_52(), 989, -4770.96f, 2.828823f, 3804.863f, 0.0f, 216.7438f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_612);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "s3_amb4_h_4", 401, Function_52(), 989, -4775.791f, 2.774f, 3798.594f, 0.0f, -143.2562f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_612);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_625() //Position: 0x16887 / 92295
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_608 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns3ambush3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb3_1", 423, -4608.0f, 7.027451f, 3919.04f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_608);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb3_2", 421, -4600.926f, 7.484157f, 3918.437f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_608);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb3_3", 417, -4596.0f, 7.54911f, 3916.227f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_608);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb3_4", 403, -4591.963f, 7.729042f, 3915.562f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_608);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb3_5", 401, -4585.729f, 8.195216f, 3915.628f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_608);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_626() //Position: 0x169CB / 92619
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_604 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "s3ambush2horse"));
	bVar0 = Function_620(Local_149, "s3_amb2_h_1", 412, Function_52(), 989, -4494.97f, 2.861757f, 3961.313f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_604);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "s3_amb2_h_2", 411, Function_52(), 989, -4493.328f, 2.861762f, 3969.012f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_604);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "s3_amb2_h_3", 401, Function_52(), 989, -4491.497f, 2.86176f, 3977.022f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_604);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_627() //Position: 0x16ABA / 92858
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_600 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns3ambush2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb2_1", 409, -4486.642f, 3.011758f, 3940.003f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_600);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb2_2", 419, -4473.093f, 3.011755f, 3927.972f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_600);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb2_3", 419, -4451.153f, 3.011763f, 3918.11f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_600);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb2_4", 412, -4439.294f, 3.011753f, 3911.876f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_600);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb2_5", 413, -4433.862f, 3.01176f, 3911.193f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_600);
	return;
}

void Function_628() //Position: 0x16BDB / 93147
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_592 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns3ambush1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb1_1", 420, -4319.365f, 10.97699f, 3934.146f, 0.0f, 28.8392f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_592);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb1_2", 418, -4321.597f, 11.04314f, 3939.914f, 0.0f, 28.8392f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_592);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb1_3", 416, -4326.061f, 10.66373f, 3941.51f, 0.0f, 28.8392f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_592);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb1_4", 409, -4333.797f, 10.039f, 3945.363f, 0.0f, 28.8392f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_592);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns3_amb1_5", 401, -4345.722f, 9.889731f, 3949.51f, 0.0f, 28.8392f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_592);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_629() //Position: 0x16E0A / 93706
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_596 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "s3ambush1horse"));
	bVar0 = Function_620(Local_149, "SGH2_1", 390, Function_52(), 989, -4307.202f, 8.421986f, 3938.767f, 0.0f, -42.50819f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_596);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_620(Local_149, "SGH2_3", 388, Function_52(), 989, -4319.209f, 10.04397f, 3951.508f, 0.0f, -42.50819f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_596);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_630() //Position: 0x16EB6 / 93878
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_584 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns2ambush4"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_1", 400, -4056.0f, 6.237841f, 3829.98f, 0.0f, 176.8947f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_2", 398, -4046.441f, 6.885553f, 3834.441f, 0.0f, 194.368f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_3", 407, -4058.491f, 6.023518f, 3836.0f, 0.0f, 173.1177f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_4", 419, -4052.0f, 6.413644f, 3836.0f, 0.0f, 164.8814f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_5", 420, -4080.0f, 6.023518f, 3833.972f, 0.0f, 196.1282f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_6", 419, -4069.219f, 6.023518f, 3833.219f, 0.0f, 189.4801f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_7", 418, -4072.751f, 6.023518f, 3835.249f, 0.0f, 189.4801f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "ns2_amb4_8", 420, -4076.0f, 6.023518f, 3832.0f, 0.0f, 189.4801f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_584);
	return;
}

void Function_631() //Position: 0x1711D / 94493
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns2ambush3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_5", 400, -4056.001f, 3.763563f, 4095.957f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_580);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_6", 410, -4062.086f, 3.190179f, 4093.828f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_580);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_7", 402, -4064.0f, 2.806066f, 4087.546f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_580);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_8", 398, -4065.988f, 2.80553f, 4082.012f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_580);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_632() //Position: 0x17224 / 94756
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_576 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns2ambush2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_1", 405, -4013.896f, 4.015698f, 4120.0f, 0.0f, -67.58908f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_576);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_2", 403, -4022.164f, 4.015697f, 4112.0f, 0.0f, -49.22452f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_576);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_3", 401, -4024.001f, 4.015657f, 4099.108f, 0.0f, -17.46347f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_576);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb2_4", 398, -4030.007f, 4.015822f, 4092f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_576);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	return;
}

void Function_633(bool bParam0, bool bParam1, bool bParam2) //Position: 0x173C7 / 95175
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<5> Var6;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - squad not valid");
		return;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - Objectset invalid");
		return;
	}
	if (GET_OBJECTSET_SIZE(bParam1) != SQUAD_GET_SIZE(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - Flag set of different size than squad");
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
			if (IS_OBJECT_VALID(bVar2))
			{
				GET_OBJECT_POSITION(bVar2, &uVar3);
				GET_OBJECT_ORIENTATION(bVar2, &Var6);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uVar3, 3.0f, 3);
				TASK_GO_TO_COORD(false, &uVar3, 1);
				if (bParam2)
				{
					TASK_CROUCH(false, -1.0f);
				}
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &uVar3, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_634(bool bParam0, bool bParam1) //Position: 0x17543 / 95555
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		SET_ACTOR_ONE_SHOT_DEATH(bVar1, bParam1);
		bVar2++;
	}
	return;
}

void Function_635() //Position: 0x17582 / 95618
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_149.f_572 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_149, "ns2ambush1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_1", 402, -3879.439f, 6.759162f, 4184.561f, 0.0f, -12.23674f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.61172f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_2", 401, -3900.793f, 5.520802f, 4187.207f, 0.0f, -19.82969f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_3", 405, -3908f, 5.529437f, 4187.31f, 0.0f, -19.46964f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_4", 398, -3915.453f, 5.366685f, 4184.0f, 0.0f, -14.42988f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 100.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_5", 401, -3926.241f, 6.750223f, 4181.76f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_6", 402, -3929.67f, 6.733843f, 4180.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_7", 403, -3931.202f, 7.105242f, 4184.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_149, "s2amb1_8", 404, -3946.741f, 5.277725f, 4205.259f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_149.f_572);
	return;
}

void Function_636(bool bParam0) //Position: 0x177ED / 96237
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			Function_637();
			ENABLE_USE_CONTEXTS(1);
			Function_67();
			Function_14();
			Local_528 = 1000;
			iLocal_520 = 0;
			iLocal_519 = 0;
			break;
		
		case 0x00000003:
			Function_171(1);
			DESTROY_GC_OBJECTS(0, 1);
			TASK_CLEAR(bLocal_717);
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			Function_485();
			ENABLE_USE_CONTEXTS(1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 920), 1, 1, 1);
			Function_182(Local_149.f_1076, 0);
			Function_67();
			Function_14();
			Local_528 = 1000;
			iLocal_520 = 0;
			iLocal_519 = 3;
			break;
		
		case 0x00000007:
			Function_171(1);
			DESTROY_GC_OBJECTS(0, 1);
			TASK_CLEAR(bLocal_717);
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			Function_485();
			ENABLE_USE_CONTEXTS(1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 952), 1, 1, 1);
			Function_182(Local_149.f_1080, 0);
			Function_67();
			Function_14();
			Local_528 = 1000;
			iLocal_520 = 0;
			iLocal_519 = 7;
			break;
		
		case 0x00000009:
			Function_171(1);
			DESTROY_GC_OBJECTS(0, 1);
			TASK_CLEAR(bLocal_717);
			if (IS_OBJECT_VALID(bLocal_606))
			{
				Function_530(bLocal_606);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_728))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(Local_149.f_728)));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_717, *(&Local_149 + 864), 1, 1, 1);
			Function_182(Local_149.f_888, 0);
			ENABLE_USE_CONTEXTS(1);
			Function_67();
			Function_14();
			Local_528 = 1000;
			iLocal_520 = 0;
			iLocal_519 = 9;
			break;
		
		case 0x00000065:
			Function_171(1);
			Function_167();
			DESTROY_GC_OBJECTS(0, 1);
			iLocal_730 = 1;
			Function_179(&Local_965, 0);
			Function_179(&iLocal_984, 0);
			ENABLE_USE_CONTEXTS(1);
			Function_67();
			Function_14();
			Local_528 = 1000;
			iLocal_520 = 0;
			iLocal_519 = 101;
			break;
	}
	return;
}

void Function_637() //Position: 0x179B0 / 96688
{
	Function_171(0);
	return;
}

void Function_638(bool bParam0) //Position: 0x179BA / 96698
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	iLocal_519 = iVar0;
	return;
}

void Function_639(bool bParam0) //Position: 0x179CE / 96718
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	Function_448(iVar0);
	return;
}

void Function_640(var uParam0, int iParam1) //Position: 0x179E2 / 96738
{
	Function_645(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_641(StackVal, iParam1);
	}
	return;
}

void Function_641(int iParam0, int iParam1) //Position: 0x17A13 / 96787
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_645(iParam0);
	Function_644(iVar0);
	PRINTNL();
	Function_642(iParam0, iVar0, iParam1);
	return;
}

void Function_642(int iParam0, bool bParam1, bool bParam2) //Position: 0x17A38 / 96824
{
	int iVar0;
	
	Function_645(iParam0);
	Function_644(bParam1);
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
	Function_643();
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

void Function_643() //Position: 0x17BB1 / 97201
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_644(bool bParam0) //Position: 0x17BBD / 97213
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

void Function_645(int iParam0) //Position: 0x17C03 / 97283
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

void Function_646(var uParam0, int iParam1) //Position: 0x17C49 / 97353
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_647(int iParam0) //Position: 0x17C58 / 97368
{
	switch (iParam0)
	{
		case 0x00000002:
			Local_886 = 0;
			Local_886.f_4 = 2;
			Local_886.f_8 = 2;
			Local_886.f_12 = 2;
			Local_886.f_16 = 2;
			Local_886.f_20 = 0;
			Local_886.f_24 = 2;
			Local_886.f_28 = 2;
			Local_886.f_32 = 0;
			Local_886.f_36 = 2;
			Local_886.f_40 = 2;
			break;
		
		case 0x00000003:
			Local_886 = 1;
			Local_886.f_4 = 2;
			Local_886.f_8 = 3;
			Local_886.f_12 = 3;
			Local_886.f_16 = 3;
			Local_886.f_20 = 2;
			Local_886.f_24 = 3;
			Local_886.f_28 = 3;
			Local_886.f_32 = 2;
			Local_886.f_36 = 3;
			Local_886.f_40 = 3;
			break;
	}
	return;
}

bool Function_648(int iParam0) //Position: 0x17CF7 / 97527
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_655(3, 2);
	uVar0 = uVar0;
	Local_71 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_52()));
	Local_71.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_71, "nSpawn_Vol", 2, 0.0f, 0.4412792f, 0.0f, 0.0f, 180.0f, 0.0f, 1.733414f, 0.09825247f, 4.639761f);
	Local_71.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_71, "Main_Vol", 2, 0.0f, 1.06802f, -0.1833513f, 0.0f, 0.0f, 0.0f, 3.211832f, 2.910486f, 9.819494f);
	Local_71.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_71, "FireClearVolume", 2, 0.0f, 4.070657f, 0.0f, 0.0f, 0.0f, 0.0f, 11.58877f, 12.29735f, 17.52237f);
	*(&Local_71 + 16) = { -1.287254f, 0.3014961f, 3.395736f };
	*(&Local_71 + 16 + 12) = { 0.0f, 84.53496f, 0.0f };
	Function_652(iParam0, &Local_71 + 16);
	Local_71.f_40 = CREATE_POINT_IN_LAYOUT(Local_71, "ammo_crate", -1.287254f, 0.3014961f, 3.395736f, 0.0f, 84.53496f, 0.0f);
	Function_649(Local_71.f_40, 2, 4294967286);
	Local_71.f_44 = CREATE_OBJECTSET_IN_LAYOUT("PlayerWarpsSet", Local_71, 8, 0);
	*(&Local_71 + 48[06]) = { -0.4700552f, 0.3423931f, 2.372547f };
	*(&Local_71 + 48[06] + 12) = { 0.0f, -363.0305f, 0.0f };
	Function_652(iParam0, &Local_71 + 48[06]);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_71, "pw1", -0.4700552f, 0.3423931f, 2.372547f, 0.0f, -363.0305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_71.f_44);
	*(&Local_71 + 48[16]) = { 0.9198075f, 0.3333471f, 2.414395f };
	*(&Local_71 + 48[16] + 12) = { 0.0f, -363.0305f, 0.0f };
	Function_652(iParam0, &Local_71 + 48[16]);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_71, "pw2", 0.9198075f, 0.3333471f, 2.414395f, 0.0f, -363.0305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_71.f_44);
	*(&Local_71 + 48[26]) = { 0.5902959f, 0.3551329f, -1.961295f };
	*(&Local_71 + 48[26] + 12) = { 0.0f, -363.0305f, 0.0f };
	Function_652(iParam0, &Local_71 + 48[26]);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_71, "pw3", 0.5902959f, 0.3551329f, -1.961295f, 0.0f, -363.0305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_71.f_44);
	*(&Local_71 + 48[36]) = { -0.7609873f, 0.3457803f, -2.030603f };
	*(&Local_71 + 48[36] + 12) = { 0.0f, -363.0305f, 0.0f };
	Function_652(iParam0, &Local_71 + 48[36]);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_71, "pw4", -0.7609873f, 0.3457803f, -2.030603f, 0.0f, -363.0305f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_71.f_44);
	Function_558(Local_71, iParam0);
	return 1;
}

void Function_649(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17FC0 / 98240
{
	DECOR_SET_INT(iParam0, Function_651(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_650(), bParam2);
	}
	return;
}

var Function_650() //Position: 0x17FE4 / 98276
{
	return "ID";
}

var Function_651() //Position: 0x17FEF / 98287
{
	return "Type";
}

void Function_652(var uParam0, int iParam1) //Position: 0x18000 / 98304
{
	Function_653(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_653(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x18012 / 98322
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_654(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_654(int iParam0, int iParam1) //Position: 0x1813A / 98618
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_115(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_115(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_655(int iParam0, int iParam1) //Position: 0x181A5 / 98725
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

int Function_656(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x181EE / 98798
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_682()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_681()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_681(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_651(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_207(bVar14);
				vVar7 = { StackVal, StackVal, Function_207(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_206(bVar14);
				vVar10 = { StackVal, StackVal, Function_206(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_679(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_650());
							if (Function_678(bVar5))
							{
								if (Function_243((*iParam1 + 228)[bVar52]))
								{
									Function_661(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_658(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_661(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_657(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_661(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_657() //Position: 0x18422 / 99362
{
	return "XPBonus";
}

void Function_658(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x18432 / 99378
{
	bool bVar0;
	
	if (Function_243(Param1))
	{
		bVar0 = Function_660(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_659(), bVar0);
	}
}

var Function_659() //Position: 0x18458 / 99416
{
	return "PackedWeapon";
}

var Function_660(struct<5> Param0) //Position: 0x1846D / 99437
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_240())) || SHIFT_LEFT(bParam2, Function_240() + 8));
}

void Function_661(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x1848B / 99467
{
	Function_670(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_666(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_665(), Function_664(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_663(), Function_662(iParam13, iParam14));
}

var Function_662(var uParam0, bool bParam1) //Position: 0x184DC / 99548
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_663() //Position: 0x184EC / 99564
{
	return "PackedGrass";
}

var Function_664(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18500 / 99584
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

var Function_665() //Position: 0x18525 / 99621
{
	return "PackedMetadata";
}

void Function_666(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1853C / 99644
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_659(), &uVar5))
				{
					Function_238(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_669();
				vVar0 = { StackVal, StackVal, Function_669() };
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
				Function_668();
				vVar0 = { StackVal, StackVal, Function_668() };
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
				Function_667();
				vVar0 = { StackVal, StackVal, Function_667() };
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

vector3 Function_667() //Position: 0x18667 / 99943
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_668() //Position: 0x18678 / 99960
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_669() //Position: 0x18689 / 99977
{
	return 0.0f, 0.158f, -0.163f;
}

int Function_670(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x1869A / 99994
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_677();
			Function_668();
			vVar1 = { StackVal, StackVal, Function_668() };
			break;
		
		case 0x00000001:
			bVar0 = Function_676();
			Function_669();
			vVar1 = { StackVal, StackVal, Function_669() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_675();
			Function_667();
			vVar1 = { StackVal, StackVal, Function_667() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_674(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_672(Function_674()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_671(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_671() //Position: 0x1879E / 100254
{
	return "MPItemGiver";
}

struct<32> Function_672(bool bParam0) //Position: 0x187B2 / 100274
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_673("0", &cVar8, ""), 4);
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

struct<32> Function_673(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1881C / 100380
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_674() //Position: 0x1883B / 100411
{
	return "PBox_";
}

var Function_675() //Position: 0x18849 / 100425
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_676() //Position: 0x1886F / 100463
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_677() //Position: 0x18897 / 100503
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_678(bool bParam0) //Position: 0x188BD / 100541
{
	return (bParam0 <= 0 && bParam0 > 27);
}

bool Function_679(bool bParam0, int iParam1) //Position: 0x188CD / 100557
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_12((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_680())
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

bool Function_680() //Position: 0x18922 / 100642
{
	return Function_45(Global_79962, 1024);
}

var Function_681() //Position: 0x18932 / 100658
{
	return "PickupsSet";
}

var Function_682() //Position: 0x18945 / 100677
{
	return "PickupFlagsSet";
}

bool Function_683() //Position: 0x1895C / 100700
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_689())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_684(&bLocal_732))
		{
			return 0;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\RAFT"))
		{
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(Function_41(), 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_684(bool bParam0) //Position: 0x189B9 / 100793
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_688();
	iVar1 = 0;
	if (!Function_177(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_687(bParam0[iVar03], 8);
		}
		else if (Function_686())
		{
			iVar1 = 1;
			Function_687(bParam0[iVar03], 8);
		}
		Function_687(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_177(bParam0[iVar03], 4))
		{
			if (!Function_177(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_177(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_177(bParam0[03], 8) || iVar1));
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
				Function_687(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_177(bParam0[iVar03], 4))
		{
			if (!Function_177(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_687(bParam0[iVar03], 2);
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
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_687(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_687(bParam0[iVar03], 2);
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
	Function_685();
	return 1;
}

void Function_685() //Position: 0x18D34 / 101684
{
	if (!Function_425(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_686() //Position: 0x18D74 / 101748
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

void Function_687(var uParam0, int iParam1) //Position: 0x18D9F / 101791
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_688() //Position: 0x18DB0 / 101808
{
	if (!Function_425(128))
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

bool Function_689() //Position: 0x18DF2 / 101874
{
	Function_692(&Local_149 + 4, 402, 2, 0);
	Function_692(&Local_149 + 4, 401, 2, 0);
	Function_692(&Local_149 + 4, 405, 2, 0);
	Function_692(&Local_149 + 4, 398, 2, 0);
	Function_692(&Local_149 + 4, 403, 2, 0);
	Function_692(&Local_149 + 4, 404, 2, 0);
	Function_692(&Local_149 + 4, 400, 2, 0);
	Function_692(&Local_149 + 4, 410, 2, 0);
	Function_692(&Local_149 + 4, 407, 2, 0);
	Function_692(&Local_149 + 4, 419, 2, 0);
	Function_692(&Local_149 + 4, 420, 2, 0);
	Function_692(&Local_149 + 4, 418, 2, 0);
	Function_692(&Local_149 + 4, 504, 2, 0);
	Function_692(&Local_149 + 4, 989, 2, 0);
	Function_692(&Local_149 + 4, 503, 2, 0);
	Function_692(&Local_149 + 4, 502, 2, 0);
	Function_692(&Local_149 + 4, 416, 2, 0);
	Function_692(&Local_149 + 4, 409, 2, 0);
	Function_692(&Local_149 + 4, 390, 2, 0);
	Function_692(&Local_149 + 4, 388, 2, 0);
	Function_692(&Local_149 + 4, 412, 2, 0);
	Function_692(&Local_149 + 4, 413, 2, 0);
	Function_692(&Local_149 + 4, 411, 2, 0);
	Function_692(&Local_149 + 4, 423, 2, 0);
	Function_692(&Local_149 + 4, 421, 2, 0);
	Function_692(&Local_149 + 4, 417, 2, 0);
	Function_692(&Local_149 + 4, 397, 2, 0);
	Function_692(&Local_149 + 4, 399, 2, 0);
	Function_692(&Local_149 + 4, 414, 2, 0);
	Function_692(&Local_149 + 4, 499, 2, 0);
	Function_692(&Local_149 + 4, 501, 2, 0);
	Function_692(&Local_149 + 4, 497, 2, 0);
	Function_692(&Local_149 + 4, 496, 2, 0);
	Function_692(&Local_149 + 4, 500, 2, 0);
	Function_692(&Local_149 + 4, 392, 2, 0);
	Function_692(&Local_149 + 4, 387, 2, 0);
	Function_692(&Local_149 + 4, 389, 2, 0);
	Function_692(&Local_149 + 4, 383, 2, 0);
	Function_692(&Local_149 + 4, 381, 2, 0);
	Function_692(&Local_149 + 4, 380, 2, 0);
	Function_692(&Local_149 + 4, 391, 2, 0);
	Function_692(&Local_149 + 4, 394, 2, 0);
	Function_692(&Local_149 + 4, 396, 2, 0);
	Function_692(&Local_149 + 4, 393, 2, 0);
	Function_692(&Local_149 + 4, 395, 2, 0);
	Function_692(&Local_149 + 4, 385, 2, 0);
	Function_690(&Local_149 + 4, "p_gen_crateTnt01x", 0, 0);
	if (Function_684(&Local_149 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_690(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x19079 / 102521
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_691(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_687(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_691(var uParam0, int iParam1, int iParam2) //Position: 0x190B1 / 102577
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_177(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_687(uParam0[iVar03], 4);
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

var Function_692(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x19175 / 102773
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_177(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_687(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_687(bParam0[iVar03], 8);
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

void Function_693() //Position: 0x19245 / 102981
{
	int iVar0;
	
	iVar0 = 0;
	if (NET_IS_SESSION_HOST())
	{
		iLocal_781 = 0;
	}
	iLocal_782 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_783[iVar06] = 0;
		Local_783[iVar06].f_4 = 0;
		Local_783[iVar06].f_8 = 0;
		Local_783[iVar06].f_12 = 0;
		Local_783[iVar06].f_16 = 0;
		Local_783[iVar06].f_20 = 0;
		iVar0++;
	}
	Local_880 = 0;
	Local_880.f_4 = 0;
	Local_880.f_8 = 0;
	Local_880.f_12 = 0;
	Local_880.f_16 = 0;
	Local_880.f_20 = 0;
	return;
}

void Function_694(int iParam0) //Position: 0x192CB / 103115
{
	int iVar0;
	var uVar1;
	struct<57> Var2;
	
	Function_740();
	Function_738();
	iVar0 = (Function_153(8) - 1);
	Function_731(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_730(&Global_78578 + 96);
		Function_323(&Global_78578 + 96);
	}
	Function_711(iParam0, 1, 1, 0, 0);
	Function_710(iParam0, 31);
	Function_27(iParam0, 0);
	Function_708(iParam0, 104968);
	Function_707(iParam0, 0);
	Function_290(1, Global_83591);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_297()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_699(iVar0, &uVar1) };
	Function_698(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var2);
	*(&Global_83591 + 276) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_696(1);
	if (Function_744("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.25f);
	Function_695(3, NET_GET_SESSION_GAMER_COUNT());
	Function_2(0);
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_13();
	return;
}

void Function_695(int iParam0, int iParam1) //Position: 0x193BC / 103356
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_696(bool bParam0) //Position: 0x193DD / 103389
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 103471);
	return;
}

void Function_697(bool bParam0) //Position: 0x1942F / 103471
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
	if (Function_446(&Var2))
	{
	}
	bVar8 = Function_437(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_445(&Var2, 1);
	Function_16(&Var2);
	return;
}

void Function_698(int iParam0, struct<57> Param1) //Position: 0x19532 / 103730
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

struct<228> Function_699(int iParam0, int iParam1) //Position: 0x19546 / 103750
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_704(&Var0);
	Function_702(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 9, 10, 1);
				Function_702(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 11, 6, 1);
				Function_702(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 17, 10, 1);
				Function_702(&Var0, 2, 5, 6, 1);
				Function_702(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 18, 10, 1);
				Function_702(&Var0, 2, 5, 8, 1);
				Function_702(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 19, 20, 0);
				Function_702(&Var0, 2, 4, 8, 1);
				Function_702(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 20, 20, 0);
				Function_702(&Var0, 2, 4, 10, 1);
				Function_702(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 6, 10, 1);
				Function_702(&Var0, 2, 8, 8, 1);
				Function_702(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_701(iParam0, &Var0, iParam1))
			{
				Function_702(&Var0, 1, 2, 10, 1);
				Function_702(&Var0, 2, 8, 9, 1);
				Function_702(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_700(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_700(int iParam0, int iParam1) //Position: 0x1972B / 104235
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
	Function_702(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_245(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_244(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_702(StackVal, iParam0, *iParam1, iVar19, 1);
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
				Function_238(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_245(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_702(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_701(int iParam0, var uParam1, int iParam2) //Position: 0x19868 / 104552
{
	if (Function_45(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_702(uParam1, 1, 10, 5, 1);
				Function_702(uParam1, 2, 7, 4, 1);
				Function_702(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_702(uParam1, 1, 17, 6, 1);
				Function_702(uParam1, 2, 6, 4, 1);
				Function_702(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_702(uParam1, 1, 13, 8, 1);
				Function_702(uParam1, 2, 16, 9, 1);
				Function_702(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_702(uParam1, 1, 3, 6, 1);
				Function_702(uParam1, 2, 15, 12, 1);
				Function_702(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x19948 / 104776
{
	if (!Function_678(iParam1))
	{
		return;
	}
	Function_703(iParam0[iParam12], iParam2, iParam3, iParam4);
}

void Function_703(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1996B / 104811
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

void Function_704(int iParam0) //Position: 0x19995 / 104853
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_706(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_705(iParam0, 0.0f);
	return;
}

void Function_705(var uParam0, int iParam1) //Position: 0x199C2 / 104898
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_706(int iParam0) //Position: 0x199CE / 104910
{
	Function_703(iParam0, 4294967295, 0, 1);
	return;
}

void Function_707(int iParam0, bool bParam1) //Position: 0x199DC / 104924
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

void Function_708(var uParam0, int iParam1) //Position: 0x199FC / 104956
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_709() //Position: 0x19A08 / 104968
{
	int iVar0;
	
	Function_289(1, 4294967295);
	iVar0 = Function_153(1);
	Function_46(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_899, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", false, false, false, false);
	}
	else
	{
		Function_291("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_27(&bLocal_609, 1);
		NET_LOG(bLocal_899, "Local State", "Player has lost all their lives.  Disabling Respawning.", false, false, false, false);
	}
	return;
}

void Function_710(var uParam0, int iParam1) //Position: 0x19AEF / 105199
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_711(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x19AFB / 105211
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
	Function_698(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_252(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_710(iParam0, 2);
	Function_727(iParam0);
	Function_724(iParam0);
	Function_722(iParam0);
	Function_721(iParam0);
	Function_718(iParam0);
	Function_716(iParam0);
	Function_713(iParam0);
	if (bParam2)
	{
		Function_10(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_10(iParam0 + 44, 8);
		Function_246(iParam0 + 192);
	}
	Function_712(iParam0, bParam4);
	Function_46(8388608, 0);
}

void Function_712(int iParam0, bool bParam1) //Position: 0x19BC3 / 105411
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

void Function_713(int iParam0) //Position: 0x19BE3 / 105443
{
	Function_714(iParam0, 105470);
	return;
}

void Function_714(var uParam0, var uParam1) //Position: 0x19BF2 / 105458
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_715() //Position: 0x19BFE / 105470
{
	return 0;
}

void Function_716(var uParam0) //Position: 0x19C05 / 105477
{
	Function_324(uParam0, 105492);
	return;
}

int Function_717() //Position: 0x19C14 / 105492
{
	return 1;
}

void Function_718(int iParam0) //Position: 0x19C1B / 105499
{
	Function_719(iParam0, 105526);
	return;
}

void Function_719(var uParam0, var uParam1) //Position: 0x19C2A / 105514
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_720() //Position: 0x19C36 / 105526
{
	return;
}

void Function_721(int iParam0) //Position: 0x19C3C / 105532
{
	Function_708(iParam0, 105526);
	return;
}

void Function_722(int iParam0) //Position: 0x19C4B / 105547
{
	Function_723(iParam0, 105526);
	return;
}

void Function_723(var uParam0, int iParam1) //Position: 0x19C5A / 105562
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_724(int iParam0) //Position: 0x19C66 / 105574
{
	Function_725(iParam0, 105601);
	return;
}

void Function_725(var uParam0, var uParam1) //Position: 0x19C75 / 105589
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_726() //Position: 0x19C81 / 105601
{
	return 0;
}

void Function_727(int iParam0) //Position: 0x19C88 / 105608
{
	Function_728(iParam0, 105635);
	return;
}

void Function_728(var uParam0, int iParam1) //Position: 0x19C97 / 105623
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_729(var uParam0) //Position: 0x19CA3 / 105635
{
	uParam0 = uParam0;
	return;
}

void Function_730(int iParam0) //Position: 0x19CAD / 105645
{
	Function_463(iParam0, 0.0f);
	return;
}

void Function_731(int iParam0) //Position: 0x19CB9 / 105657
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
			Function_299(12288);
			Function_37(16384);
			break;
		
		case 0x00000002:
			Function_299(20480);
			Function_37(8192);
			break;
		
		default:
			Function_37(28672);
			break;
	}
	Function_37(2048);
	Function_732(0, 0);
	Function_205();
	return;
}

void Function_732(bool bParam0, bool bParam1) //Position: 0x19D7D / 105853
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_737(&Global_78480);
	Function_736(&Global_78480);
	uVar0 = Function_150(37);
	Function_734();
	if (!bParam0)
	{
		Function_151(37, uVar0);
	}
	Function_46(18264, 0);
	Function_733();
	return;
}

void Function_733() //Position: 0x19DC9 / 105929
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_734() //Position: 0x19DE8 / 105960
{
	Function_735(&Global_78480 + 220);
	return;
}

void Function_735(int iParam0) //Position: 0x19DF7 / 105975
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

void Function_736(int iParam0) //Position: 0x19E18 / 106008
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

void Function_737(int iParam0) //Position: 0x19E3C / 106044
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

void Function_738() //Position: 0x19E60 / 106080
{
	Local_921 = 0;
	Local_921.f_16 = "";
	Function_739(&Local_921 + 4);
	return;
}

void Function_739(var uParam0) //Position: 0x19E7A / 106106
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_740() //Position: 0x19E8E / 106126
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_741() //Position: 0x19EA2 / 106146
{
	Function_690(&bLocal_732, "dead_ground_male", 5, 0);
	Function_690(&bLocal_732, "dlc_mpcooppack_mp_coop", 10, 0);
	Function_690(&bLocal_732, "dlc_mpcooppack_mp_coop_nos", 10, 0);
	Function_692(&bLocal_732, 1190, 3, 0);
	Function_692(&bLocal_732, 496, 3, 0);
	Function_692(&bLocal_732, 497, 3, 0);
	Function_692(&bLocal_732, 498, 3, 0);
	Function_692(&bLocal_732, 499, 3, 0);
	Function_692(&bLocal_732, 500, 3, 0);
	Function_692(&bLocal_732, 501, 3, 0);
	Function_692(&bLocal_732, 502, 3, 0);
	Function_692(&bLocal_732, 503, 3, 0);
	Function_692(&bLocal_732, 504, 3, 0);
	Function_690(&bLocal_732, "raftBlockerBounds02x", 0, 0);
	return;
}

void Function_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x19FA6 / 106406
{
	Function_743(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_743(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x19FBE / 106430
{
	Function_702(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

bool Function_744(bool bParam0) //Position: 0x19FD5 / 106453
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_745() //Position: 0x19FF4 / 106484
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	while (bVar0 < 3)
	{
		strcpy(&cVar1, "enemyLayout", 16);
		stradd(&cVar1, I2STR(bVar0), 16);
		vLocal_535[bVar09] = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(&cVar1));
		if (IS_LAYOUTREF_VALID(vLocal_535[bVar09]))
		{
			strcpy(&cVar1, "nraftSquad", 16);
			stradd(&cVar1, I2STR(bVar0), 16);
			vLocal_535[bVar09].f_28 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(vLocal_535[bVar09], &cVar1));
			vLocal_535[bVar09].f_4 = CREATE_POINT_IN_LAYOUT(vLocal_535[bVar09], Function_52(), -0.8922202f, 0.3142099f, 3.381215f, 0.0f, 83.29616f, 0.0f);
			vLocal_535[bVar09].f_20 = CREATE_POINT_IN_LAYOUT(vLocal_535[bVar09], Function_52(), -0.05330262f, 0.3141133f, -4.001716f, 0.0f, 0.0f, 0.0f);
			vLocal_535[bVar09].f_8 = CREATE_POINT_IN_LAYOUT(vLocal_535[bVar09], Function_52(), 1.107195f, 0.3196549f, 2.831349f, 0.0f, -111.6114f, 0.0f);
			vLocal_535[bVar09].f_12 = CREATE_POINT_IN_LAYOUT(vLocal_535[bVar09], Function_52(), -1.101862f, 0.3196549f, -1.845452f, 0.0f, 85.51431f, 0.0f);
			vLocal_535[bVar09].f_16 = CREATE_POINT_IN_LAYOUT(vLocal_535[bVar09], Function_52(), 0.9591143f, 0.3826273f, 0.3038554f, 0.0f, 0.0f, 0.0f);
		}
		bVar0++;
	}
	return;
}

vector3 Function_746() //Position: 0x1A148 / 106824
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
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	bool bVar82;
	bool bVar83;
	bool bVar84;
	bool bVar85;
	bool bVar86;
	bool bVar87;
	bool bVar88;
	bool bVar89;
	bool bVar90;
	bool bVar91;
	bool bVar92;
	bool bVar93;
	bool bVar94;
	bool bVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	
	Function_655(4, 1);
	uVar0 = uVar0;
	Local_149 = CREATE_LAYOUT("NosalidaMP_CO_layout");
	Local_149.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SpawnVol_1", 2, -4754.769f, 2.953632f, 3943.678f, 0.0f, -279.7166f, 0.0f, 2.588885f, 1.0f, 5.623933f);
	Local_149.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s2ambush1_Trigger", 2, -3841.966f, 5.328276f, 4162.677f, 0.0f, -22.60224f, 0.0f, 2.477932f, 24.75935f, 36.04975f);
	Local_149.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s2ambush2_Trigger", 2, -3938.588f, 5.328276f, 4122.352f, 0.0f, -17.46166f, 0.0f, 1.657871f, 14.791f, 24.25384f);
	Local_149.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s2ambush3_Trigger", 2, -3980.149f, 5.328276f, 4092.603f, 0.0f, -57.57901f, 0.0f, 1.981219f, 15.9842f, 22.28693f);
	Local_149.f_664 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s2ambush4_Trigger", 2, -4010.381f, 5.328276f, 4005.118f, 0.0f, -96.89345f, 0.0f, 1.657871f, 19.66359f, 31.19747f);
	Local_149.f_668 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s3ambush1_Trigger", 2, -4318.063f, 3.706603f, 3877.771f, 0.0f, 35.28306f, 0.0f, 1.657871f, 12.02905f, 22.46116f);
	Local_149.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s3ambush2_Trigger", 2, -4409.994f, 3.706603f, 3879.151f, 0.0f, 0.0f, 0.0f, 1.657871f, 12.02905f, 22.46116f);
	Local_149.f_676 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s3ambush3_Trigger", 2, -4558.63f, 3.706603f, 3871.729f, 0.0f, 0.0f, 0.0f, 1.657871f, 12.02905f, 22.46116f);
	Local_149.f_680 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s3ambush4_Trigger", 2, -4621.881f, 3.706602f, 3861.561f, 0.0f, 0.0f, 0.0f, 1.657871f, 12.02905f, 22.46116f);
	Local_149.f_684 = CREATE_VOLUME_IN_LAYOUT(Local_149, "Enemy_Raft2_Spawn", 2, -4067.397f, 5.328276f, 3882.351f, 0.0f, 86.21558f, 0.0f, 195.677f, 17.59823f, 1.993858f);
	Local_149.f_688 = CREATE_VOLUME_IN_LAYOUT(Local_149, "Enemy_Raft3_Spawn", 2, -4381.362f, 3.706603f, 3885.41f, 0.0f, -87.12853f, 0.0f, 154f, 14.83413f, 1.0f);
	Local_149.f_692 = CREATE_VOLUME_IN_LAYOUT(Local_149, "Enemy_Raft4_Spawn", 2, -4674.529f, 3.706602f, 3863.85f, 0.0f, 0.0f, 0.0f, 2.195074f, 12.25565f, 165.3774f);
	Local_149.f_696 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SCR_DockSpawn", 2, -4126.619f, 5.328275f, 3896.844f, 0.0f, -2.972819f, 0.0f, 1.657871f, 12.02905f, 22.46116f);
	Local_149.f_700 = CREATE_VOLUME_IN_LAYOUT(Local_149, "River_Checkpoint_1", 3, -4011.049f, 5.328276f, 4016.029f, 0.0f, 20.0f, 0.0f, 7.842785f, 6.13225f, 7.976607f);
	Local_149.f_704 = CREATE_VOLUME_IN_LAYOUT(Local_149, "River_Checkpoint_2", 3, -4508.805f, 3.706603f, 3886.373f, 0.0f, 20.0f, 0.0f, 7.842785f, 6.13225f, 7.976607f);
	Local_149.f_708 = CREATE_VOLUME_IN_LAYOUT(Local_149, "CRK_DockDest", 2, -3841.376f, 2.000991f, 4214.311f, 0.0f, 41.50605f, 0.0f, 10.45592f, 5.092009f, 18.40936f);
	Local_149.f_712 = CREATE_VOLUME_IN_LAYOUT(Local_149, "CRK_DockDefendVol", 2, -3836.67f, 3.499678f, 4226.123f, 0.0f, 0.0f, 0.0f, 8.071264f, 2.404071f, 3.890268f);
	Local_149.f_716 = CREATE_VOLUME_IN_LAYOUT(Local_149, "CRK_Raft_Return", 2, -3836.647f, 2.226f, 4217.185f, 0.0f, 41.61393f, 0.0f, 13.69341f, 1.0f, 2.834938f);
	Local_149.f_720 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SCR_DockDest", 2, -4289.227f, 2.875929f, 3775.561f, 0.0f, 14.0588f, 0.0f, 15.59534f, 9.058445f, 12.46465f);
	Local_149.f_724 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SCR_Raft_Return", 2, -4289.099f, 2.787262f, 3767.083f, 0.0f, 0.0f, 0.0f, 9.841866f, 2.052827f, 8.733608f);
	Local_149.f_728 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_DockDest", 2, -4744.138f, 1.270386f, 3934.949f, 0.0f, 45.86655f, 0.0f, 7.924137f, 2.550153f, 8.59651f);
	Local_149.f_732 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_House_Battle_Defend", 2, -4708.944f, 3.327618f, 3965.008f, 0.0f, -4.320116f, 0.0f, 3.528755f, 1.0f, 8.659102f);
	Local_149.f_736 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_House_Task_Clear", 2, -4710.983f, 5.342447f, 3963.85f, 0.0f, -4.320116f, 0.0f, 11.06649f, 6.291851f, 13.71544f);
	Local_149.f_764 = CREATE_VOLUME_SET_IN_LAYOUT(Local_149, "CrateVolumes_set");
	(*&Local_149 + 740)[0] = CREATE_VOLUME_IN_LAYOUT(Local_149, "cv_1", 2, -4717.31f, 3.036527f, 3940.73f, 0.0f, -22.8292f, 0.0f, 4.621185f, 2.519406f, 5.073846f);
	ADD_TO_VOLUME_SET(Local_149.f_764, (*&Local_149 + 740)[0]);
	(*&Local_149 + 740)[1] = CREATE_VOLUME_IN_LAYOUT(Local_149, "cv_2", 2, -4733.129f, 3.036527f, 3977.398f, 0.0f, 15.60021f, 0.0f, 8.773738f, 2.281615f, 6.646853f);
	ADD_TO_VOLUME_SET(Local_149.f_764, (*&Local_149 + 740)[1]);
	(*&Local_149 + 740)[2] = CREATE_VOLUME_IN_LAYOUT(Local_149, "cv_3", 2, -4696.216f, 3.036527f, 3979.186f, 0.0f, -8.004912f, 0.0f, 8.905036f, 2.513506f, 8.150631f);
	ADD_TO_VOLUME_SET(Local_149.f_764, (*&Local_149 + 740)[2]);
	(*&Local_149 + 740)[3] = CREATE_VOLUME_IN_LAYOUT(Local_149, "cv_4", 2, -4727.583f, 2.995136f, 4012.223f, 3.827032f, 63.9798f, 4.514484f, 5.559169f, 2.308803f, 5.618057f);
	ADD_TO_VOLUME_SET(Local_149.f_764, (*&Local_149 + 740)[3]);
	(*&Local_149 + 740)[4] = CREATE_VOLUME_IN_LAYOUT(Local_149, "cv_5", 2, -4762.575f, 3.18365f, 4034.579f, 0.0f, 22.82277f, 0.0f, 6.705868f, 2.669374f, 6.266512f);
	ADD_TO_VOLUME_SET(Local_149.f_764, (*&Local_149 + 740)[4]);
	Local_149.f_768 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_House2_Battle_Defend", 2, -4734.17f, 3.774905f, 3958.46f, 0.0f, -11.44515f, 0.0f, 4.652881f, 2.016593f, 13.88047f);
	Local_149.f_772 = CREATE_VOLUME_IN_LAYOUT(Local_149, "Nosalida_Prop_Clear", 2, -4729.057f, 3.036527f, 3987.143f, 0.0f, 0.0f, 0.0f, 96.3322f, 14.71632f, 116.4585f);
	Local_149.f_776 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SCR_Release_Vol", 2, -4225.803f, 6.687178f, 3651.085f, 0.0f, 0.0f, 0.0f, 20.441f, 9.8011f, 17.12488f);
	Local_149.f_780 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_Release_Vol", 2, -4611.239f, 2.234868f, 3990.655f, 0.0f, -33.34563f, 0.0f, 27.89938f, 4.598276f, 20.09593f);
	Local_149.f_784 = CREATE_VOLUME_IN_LAYOUT(Local_149, "SCR_House_Battle_Trigger", 2, -4313.715f, 6.248888f, 3743.601f, 0.0f, 0.0f, 0.0f, 9.303852f, 2.716169f, 11.12376f);
	Local_149.f_788 = CREATE_VOLUME_IN_LAYOUT(Local_149, "NOS_Trigger_Horse_Wave", 3, -4714.794f, 5.393954f, 3965.204f, 0.0f, 20.0f, 0.0f, 22.96258f, 3.733742f, 28.05514f);
	Local_149.f_792 = CREATE_VOLUME_IN_LAYOUT(Local_149, "nCRK_Aggro", 3, -3835.017f, 2.711626f, 4224.878f, 0.0f, 79.76933f, 0.0f, 27.28983f, 5.224916f, 45.2682f);
	Local_149.f_796 = CREATE_VOLUME_IN_LAYOUT(Local_149, "nSCR_Aggro", 3, -4287.821f, 2.989974f, 3742.069f, 0.0f, 5.985719f, 0.0f, 51.222f, 7.288691f, 37.35623f);
	Local_149.f_800 = CREATE_VOLUME_IN_LAYOUT(Local_149, "CRKDock_Trigger_GunfightLow", 2, -3810.145f, 3.136f, 4188.694f, 0.0f, 35.20215f, 0.0f, 1.813135f, 7.17337f, 28.84182f);
	Local_149.f_804 = CREATE_VOLUME_IN_LAYOUT(Local_149, "s3Music_Trigger1_Suspense", 2, -4714.591f, 3.706599f, 3902.286f, 0.0f, 0.0f, 0.0f, 1.813135f, 7.17337f, 28.84182f);
	Local_149.f_808 = CREATE_VOLUME_IN_LAYOUT(Local_149, "CRK_Main_Spawn", 3, -3896f, 9.188322f, 4312.0f, 0.0f, 20.0f, 0.0f, 96.35665f, 5.420367f, 85.09867f);
	*(&Local_149 + 812) = { -3763.455f, 4.509f, 4184.975f };
	*(&Local_149 + 812 + 12) = { 0.0f, 106.7546f, 0.0f };
	Local_149.f_836 = CREATE_POINT_IN_LAYOUT(Local_149, "RaftCutscenePos", -3763.455f, 4.509f, 4184.975f, 0.0f, 106.7546f, 0.0f);
	*(&Local_149 + 840) = { -3712.895f, 3.0f, 4155.845f };
	*(&Local_149 + 840 + 12) = { 0.0f, 91.92262f, 0.0f };
	*(&Local_149 + 864) = { -4749.761f, 0.6720601f, 3939.413f };
	*(&Local_149 + 864 + 12) = { 0.0f, -102.1644f, 0.0f };
	Local_149.f_888 = CREATE_OBJECTSET_IN_LAYOUT("S2PlayerWarpSet", Local_149, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_pw_1", -4753.085f, 2.720052f, 3943.111f, 0.0f, -99.87572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_149.f_888);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_pw_2", -4753.432f, 2.698674f, 3944.807f, 0.0f, -99.87572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_149.f_888);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_pw_3", -4754.906f, 2.700853f, 3942.647f, 0.0f, -99.87572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_149.f_888);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_pw_4", -4755.208f, 2.641166f, 3944.264f, 0.0f, -99.87572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_149.f_888);
	Local_149.f_892 = CREATE_OBJECTSET_IN_LAYOUT("s2_amb1_destSet", Local_149, 8, 0);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_1", -3864f, 3.838762f, 4174.355f, 0.0f, -28.2061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_149.f_892);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_2", -3892.686f, 3.511f, 4162.464f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_149.f_892);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_3", -3906.799f, 3.038f, 4158.272f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_149.f_892);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_4", -3917.928f, 3.919f, 4153.951f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_149.f_892);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_5", -3930.332f, 3.524f, 4146.46f, 0.0f, -56.6578f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_149.f_892);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_6", -3944.436f, 3.113f, 4140.134f, 0.0f, -74.54699f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_149.f_892);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_7", -3953.026f, 3.97f, 4140.9f, 0.0f, -71.01092f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_149.f_892);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb1_f_8", -3968.135f, 2.183f, 4152.127f, 0.0f, -44.16196f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_149.f_892);
	Local_149.f_896 = CREATE_OBJECTSET_IN_LAYOUT("s2_amb2_destSet", Local_149, 8, 0);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb2_f_1", -3981.31f, 2.522616f, 4134.69f, 0.0f, -74.47917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_149.f_896);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb2_f_2", -3981.325f, 3.011776f, 4117.325f, 0.0f, -79.94907f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_149.f_896);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb2_f_3", -4000f, 2.496486f, 4101.344f, 0.0f, -87.58044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_149.f_896);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb2_f_4", -4015.302f, 3.297f, 4083.178f, 0.0f, -60.35353f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_149.f_896);
	Local_149.f_900 = CREATE_OBJECTSET_IN_LAYOUT("s2_amb3_destSet", Local_149, 8, 0);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb3_f_1", -4023.994f, 3.346f, 4079.644f, 0.0f, -20.86549f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_149.f_900);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb3_f_2", -4034.574f, 4.493f, 4072.5f, 0.0f, -29.31693f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_149.f_900);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb3_f_3", -4040.882f, 4.835f, 4065.224f, 0.0f, -43.74149f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_149.f_900);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb3_f_4", -4049.629f, 5.156f, 4056.903f, 0.0f, -70.64142f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_149.f_900);
	Local_149.f_904 = CREATE_OBJECTSET_IN_LAYOUT("s2_amb4_destSet", Local_149, 8, 0);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_1", -4033.446f, 3.302f, 3876.069f, 0.0f, -212.8434f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_149.f_904);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_2", -4050.362f, 6.326f, 3870.717f, 0.0f, -225.5753f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_149.f_904);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_3", -4057.942f, 5.897f, 3865.172f, 0.0f, -220.7813f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_149.f_904);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_4", -4066.462f, 5.701f, 3860.173f, 0.0f, 160.1585f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_149.f_904);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_5", -4074.263f, 4.772f, 3859.445f, 0.0f, 190.8996f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_149.f_904);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_6", -4088.715f, 4.689f, 3867.565f, 0.0f, -151.3296f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_149.f_904);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_7", -4096.667f, 5.495f, 3872.008f, 0.0f, -157.8026f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_149.f_904);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_amb4_f_8", -4109.414f, 3.992f, 3873.889f, 0.0f, -144.2757f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_149.f_904);
	Local_149.f_908 = CREATE_OBJECTSET_IN_LAYOUT("s3_amb1_destSet", Local_149, 8, 0);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb1_f_1", -4316.72f, 9.745f, 3914.445f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_149.f_908);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb1_f_2", -4324.671f, 9.976f, 3920.656f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_149.f_908);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb1_f_3", -4330.546f, 10.181f, 3925.278f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_149.f_908);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb1_f_4", -4336.311f, 10.039f, 3930.607f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_149.f_908);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb1_f_5", -4347.339f, 9.666f, 3934.919f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_149.f_908);
	Local_149.f_912 = CREATE_OBJECTSET_IN_LAYOUT("s3_amb2_destSet", Local_149, 8, 0);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb2_f_1", -4481.202f, 5.112f, 3908.812f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_149.f_912);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb2_f_2", -4477.187f, 4.968f, 3898.217f, 0.0f, 25.71091f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_149.f_912);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb2_f_3", -4449.978f, 5.023f, 3893.136f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_149.f_912);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb2_f_4", -4438.292f, 3.793f, 3894.335f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_149.f_912);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb2_f_5", -4430.699f, 3.628f, 3893.901f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_149.f_912);
	Local_149.f_916 = CREATE_OBJECTSET_IN_LAYOUT("s3_amb3_destSet", Local_149, 8, 0);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb3_f_1", -4603.89f, 9.767f, 3907.171f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_149.f_916);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb3_f_2", -4606.312f, 9.744f, 3906.49f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_149.f_916);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb3_f_3", -4591.322f, 9.061f, 3905.644f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_149.f_916);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb3_f_4", -4585.292f, 8.62f, 3907.97f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_149.f_916);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_amb3_f_5", -4576.871f, 7.719f, 3908.349f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_149.f_916);
	*(&Local_149 + 920) = { -3840.836f, 2.6f, 4210.714f };
	*(&Local_149 + 920 + 12) = { 0.0f, -33.35712f, 0.0f };
	Local_149.f_944 = CREATE_OBJECTSET_IN_LAYOUT("CRK_EW1_SpawnSet", Local_149, 8, 0);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_149, "ncrk_ews_1", -3885.063f, 7.365822f, 4194.938f, 0.0f, 225.6575f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_149.f_944);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_149, "ncrk_ews_2", -3898.427f, 8.209792f, 4224.0f, 0.0f, -88.53049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_149.f_944);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_149, "ncrk_ews_3", -3844.497f, 7.446255f, 4283.503f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_149.f_944);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_149, "ncrk_ews_4", -3804.981f, 8.784752f, 4260.981f, 0.0f, -33.2524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_149.f_944);
	Local_149.f_948 = CREATE_OBJECTSET_IN_LAYOUT("CRK_EW1_DestSet", Local_149, 8, 0);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_149, "crk_ew1d_1", -3860f, 6.957073f, 4204.0f, 0.0f, -75.91797f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_149.f_948);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_149, "crk_ew1d_2", -3867.546f, 7.15926f, 4228.0f, 0.0f, -49.86424f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_149.f_948);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_149, "crk_ew1d_3", -3844f, 7.190741f, 4246.553f, 0.0f, -30.10643f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_149.f_948);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_149, "crk_ew1d_4", -3825.84f, 5.484916f, 4237.84f, 0.0f, 31.56098f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_149.f_948);
	*(&Local_149 + 952) = { -4297.422f, 2.6f, 3783.42f };
	*(&Local_149 + 952 + 12) = { 0.0f, 177.2782f, 0.0f };
	*(&Local_149 + 976[06]) = { -3914.85f, 3.136f, 4113.43f };
	*(&Local_149 + 976[06] + 12) = { 0.0f, -113.3824f, 0.0f };
	*(&Local_149 + 976[16]) = { -4176.453f, 3.136f, 3871.702f };
	*(&Local_149 + 976[16] + 12) = { 0.0f, -148.091f, 0.0f };
	*(&Local_149 + 976[26]) = { -4498.022f, 4.27f, 3909.63f };
	*(&Local_149 + 976[26] + 12) = { 0.0f, 2.604023f, 0.0f };
	*(&Local_149 + 976[36]) = { -4802.736f, 3.136f, 3820.763f };
	*(&Local_149 + 976[36] + 12) = { 0.0f, -175.3172f, 0.0f };
	Local_149.f_1076 = CREATE_OBJECTSET_IN_LAYOUT("Stage2PlayerWarpSet", Local_149, 8, 0);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_149, "s2pw_1", -3852.991f, 4.160358f, 4222.771f, 0.0f, -76.3056f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_149.f_1076);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_149, "s2pw_2", -3852.632f, 4.216765f, 4225.563f, 0.0f, -76.3056f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_149.f_1076);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_149, "s2pw_3", -3857.073f, 5.090429f, 4223.011f, 0.0f, -76.3056f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_149.f_1076);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_149, "s2pw_4", -3856.244f, 4.954215f, 4226.731f, 0.0f, -76.3056f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_149.f_1076);
	Local_149.f_1080 = CREATE_OBJECTSET_IN_LAYOUT("Stage3PlayerWarpSet", Local_149, 8, 0);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_149, "s3pw_1", -4276.0f, 3.810618f, 3763.748f, 0.0f, 139.9003f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_149.f_1080);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_149, "s3pw_2", -4281.596f, 2.871583f, 3757.596f, 0.0f, 139.9003f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_149.f_1080);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_149, "s3pw_3", -4279.641f, 3.152506f, 3760.0f, 0.0f, 139.9003f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_149.f_1080);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_149, "s3pw_4", -4276.694f, 3.340498f, 3759.306f, 0.0f, 139.9003f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_149.f_1080);
	Local_149.f_1084 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_149, 8, 0);
	*(&Local_149 + 1088[06]) = { -3859.585f, 7.027462f, 4320.721f };
	*(&Local_149 + 1088[06] + 12) = { 0.0f, 318.0699f, 0.0f };
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_149, "CRK_ammo", -3859.585f, 7.027462f, 4320.721f, 0.0f, 318.0699f, 0.0f);
	Function_649(bVar60, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_149.f_1084);
	*(&Local_149 + 1088[16]) = { -3836.152f, 2.936f, 4225.108f };
	*(&Local_149 + 1088[16] + 12) = { 0.0f, -90.0f, 0.0f };
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_149, "CRK_dock_ammo", -3836.152f, 2.936f, 4225.108f, 0.0f, -90.0f, 0.0f);
	Function_649(bVar61, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_149.f_1084);
	*(&Local_149 + 1088[26]) = { -3907.081f, 8.055931f, 4328.919f };
	*(&Local_149 + 1088[26] + 12) = { 0.5093884f, -163.4654f, -1.789345f };
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_149, "CRK_ammo_3", -3907.081f, 8.055931f, 4328.919f, 0.5093884f, -163.4654f, -1.789345f);
	Function_649(bVar62, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_149.f_1084);
	*(&Local_149 + 1088[36]) = { -4307.171f, 5.111799f, 3742.818f };
	*(&Local_149 + 1088[36] + 12) = { 0.0f, 3.556022f, 0.0f };
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_149, "SCR_ammo", -4307.171f, 5.111799f, 3742.818f, 0.0f, 3.556022f, 0.0f);
	Function_649(bVar63, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_149.f_1084);
	*(&Local_149 + 1088[46]) = { -4317.397f, 5.004372f, 3749.397f };
	*(&Local_149 + 1088[46] + 12) = { 0.0f, 29.67698f, 0.0f };
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_149, "SCR_ammo_2", -4317.397f, 5.004372f, 3749.397f, 0.0f, 29.67698f, 0.0f);
	Function_649(bVar64, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_149.f_1084);
	*(&Local_149 + 1088[56]) = { -4712.0f, 3.036527f, 3958.685f };
	*(&Local_149 + 1088[56] + 12) = { 0.0f, -102.8253f, 0.0f };
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_ammo_1", -4712.0f, 3.036527f, 3958.685f, 0.0f, -102.8253f, 0.0f);
	Function_649(bVar65, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_149.f_1084);
	*(&Local_149 + 1088[66]) = { -4739.324f, 3.359838f, 3966.454f };
	*(&Local_149 + 1088[66] + 12) = { 0.0f, 78.2683f, 0.0f };
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_ammo_2", -4739.324f, 3.359838f, 3966.454f, 0.0f, 78.2683f, 0.0f);
	Function_649(bVar66, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_149.f_1084);
	*(&Local_149 + 1088[76]) = { -4709.044f, 3.036527f, 3959.036f };
	*(&Local_149 + 1088[76] + 12) = { 0.0f, -187.294f, 0.0f };
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_dyn_crate", -4709.044f, 3.036527f, 3959.036f, 0.0f, -187.294f, 0.0f);
	Function_649(bVar67, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_149.f_1084);
	*(&Local_149 + 1088[86]) = { -4729.829f, 3.026f, 3995.648f };
	*(&Local_149 + 1088[86] + 12) = { 0.0f, 347.0709f, 0.0f };
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_FB_crate", -4729.829f, 3.026f, 3995.648f, 0.0f, 347.0709f, 0.0f);
	Function_649(bVar68, 1, 2);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_149.f_1084);
	Local_149.f_1308 = CREATE_OBJECTSET_IN_LAYOUT("CratePositionsSet", Local_149, 8, 0);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_149, "nos_crate1", -4717.468f, 3.036527f, 3941.104f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_149.f_1308);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_149, "nos_crate2", -4733.559f, 3.036527f, 3977.518f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_149.f_1308);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_149, "nos_crate3", -4695.404f, 3.036527f, 3978.786f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_149.f_1308);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_149, "nos_crate4", -4726.898f, 3.026183f, 4011.602f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_149.f_1308);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_149, "nos_crate5", -4762.575f, 3.18365f, 4034.579f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_149.f_1308);
	Local_149.f_1312 = CREATE_POINT_IN_LAYOUT(Local_149, "CUTSCENE01_STREAMING", -3556.538f, 15.33217f, 4145.727f, 0.0f, 104.2389f, 0.0f);
	Local_149.f_1316 = CREATE_POINT_IN_LAYOUT(Local_149, "CUTSCENEFINAL_STREAMING", -4761.779f, 8.204635f, 3966.974f, 0.0f, 79.2033f, 0.0f);
	Local_149.f_1320 = CREATE_OBJECTSET_IN_LAYOUT("CUTSCENEFINAL_WARPSet", Local_149, 8, 0);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_149, "playerWarp_1", -4676.193f, 2.808472f, 3962.275f, 0.0f, 106.0805f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_149.f_1320);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_149, "playerWarp_2", -4676.919f, 2.808472f, 3959.757f, 0.0f, 106.0805f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_149.f_1320);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_149, "playerWarp_3", -4675.108f, 2.808472f, 3957.263f, 0.0f, 106.0805f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_149.f_1320);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_149, "playerWarp_4", -4673.753f, 2.808472f, 3963.903f, 0.0f, 106.0805f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_149.f_1320);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion1", -4759.739f, 3.026183f, 4033.551f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion2", -4732.0f, 3.036526f, 3976.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion3", -4718.868f, 3.036527f, 3986.868f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion4", -4738.39f, 3.036527f, 3959.217f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion5", -4701.648f, 3.036527f, 3949.009f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion6", -4724.0f, 3.036527f, 3940.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_149, "Baysplosion7", -4732.0f, 3.036527f, 3950.792f, 0.0f, 0.0f, 0.0f);
	Local_149.f_1324 = CREATE_OBJECTSET_IN_LAYOUT("CRK_Main_EW_SpawnSet", Local_149, 8, 0);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_spawn_1", -3836f, 10.32574f, 4324.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_149.f_1324);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_spawn_2", -3869.65f, 9.672712f, 4360.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_149.f_1324);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_spawn_3", -3932f, 7.767048f, 4333.319f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_149.f_1324);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_spawn_4", -3922.832f, 7.055f, 4274.385f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_149.f_1324);
	Local_149.f_1328 = CREATE_OBJECTSET_IN_LAYOUT("CRK_Main_EW_DestSet", Local_149, 8, 0);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_dest_1", -3865.209f, 7.186693f, 4306.767f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_149.f_1328);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_dest_2", -3884.409f, 8.031203f, 4331.591f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_149.f_1328);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_dest_3", -3904f, 8.03138f, 4324.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_149.f_1328);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_149, "crkmew_dest_4", -3910.98f, 8.031386f, 4301.021f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_149.f_1328);
	Local_149.f_1332 = CREATE_OBJECTSET_IN_LAYOUT("NOS_Main_EW_SpawnSet", Local_149, 8, 0);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_s1", -4679.706f, 2.793f, 3896.212f, 0.0f, -204.2086f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_149.f_1332);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_s2", -4638.153f, 2.237f, 4004.153f, 0.0f, -39.27865f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_149.f_1332);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_s3", -4687.613f, 3.037f, 4007.529f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_149.f_1332);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_s4", -4726.794f, 5.257f, 4073.454f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_149.f_1332);
	Local_149.f_1336 = CREATE_OBJECTSET_IN_LAYOUT("NOS_Main_EW_DestSet", Local_149, 8, 0);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_d1", -4702.195f, 3.037f, 3937.591f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_149.f_1336);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_d2", -4696.136f, 2.886657f, 3966.081f, 9.495499f, 75.27974f, 9.390065f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_149.f_1336);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_d3", -4692.853f, 3.036527f, 3984.852f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_149.f_1336);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_mew_d4", -4727.468f, 3.026183f, 4020.0f, 0.0f, 134.9135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_149.f_1336);
	Local_149.f_1340 = CREATE_OBJECTSET_IN_LAYOUT("NOS_Horse_EW_SpawnSet", Local_149, 8, 0);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_149, "NOS_hew_s1", -4674.715f, 6.510204f, 4060.256f, 0.0f, 50.18108f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_149.f_1340);
	Local_149.f_1344 = CREATE_OBJECTSET_IN_LAYOUT("SCR_EW_SpawnSet", Local_149, 8, 0);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_s1", -4353.381f, 3.034101f, 3747.75f, 0.0f, -84.20628f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_149.f_1344);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_s2", -4276.892f, 4.159289f, 3688f, 0.0f, -181.3866f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_149.f_1344);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_s3", -4242.756f, 3.011749f, 3711.851f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_149.f_1344);
	Local_149.f_1348 = CREATE_OBJECTSET_IN_LAYOUT("SCR_EW_DestSet", Local_149, 8, 0);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_d1", -4325.475f, 5.220189f, 3749.475f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_149.f_1348);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_d2", -4305.328f, 4.849977f, 3726.224f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_149.f_1348);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_149, "screw_d3", -4292.0f, 3.639945f, 3737.357f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_149.f_1348);
	Local_149.f_1352 = CREATE_OBJECTSET_IN_LAYOUT("Stage1QuitWarpSet", Local_149, 8, 0);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_149, "s1_qw_1", -3904f, 7.822977f, 4208.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_149.f_1352);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_149, "s1_qw_2", -3908f, 7.770689f, 4208.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_149.f_1352);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_149, "s1_qw_3", -3903.045f, 7.78783f, 4210.238f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_149.f_1352);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_149, "s1_qw_4", -3909.256f, 7.610997f, 4210.654f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_149.f_1352);
	Local_149.f_1356 = CREATE_OBJECTSET_IN_LAYOUT("Stage2QuitWarpSet", Local_149, 8, 0);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_qw_1", -4066.428f, 3.944623f, 4040f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_149.f_1356);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_qw_2", -4068.0f, 3.944623f, 4040f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_149.f_1356);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_qw_3", -4068.0f, 4.048128f, 4042.107f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_149.f_1356);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_149, "s2_qw_4", -4066.469f, 4.107021f, 4042.47f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_149.f_1356);
	Local_149.f_1360 = CREATE_OBJECTSET_IN_LAYOUT("Stage3QuitWarpSet", Local_149, 8, 0);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_qw_1", -4632.675f, 2.681546f, 3888.675f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_149.f_1360);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_qw_2", -4636.0f, 2.58132f, 3889.961f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_149.f_1360);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_qw_3", -4637.821f, 2.53511f, 3892.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_149.f_1360);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_149, "s3_qw_4", -4630.671f, 2.902268f, 3892.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_149.f_1360);
	Local_149.f_1364 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "ncover_low", -4312.069f, 5.096518f, 3745.348f, 0.0f, -179.5327f, 0.0f, 4);
	Local_149.f_1368 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "cover_low1", -4316.794f, 5.096518f, 3745.338f, 0.0f, -180.36f, 0.0f, 4);
	Local_149.f_1372 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "cover_low2", -4310.897f, 5.096519f, 3744.6f, 0.0f, -89.76245f, 0.0f, 4);
	Local_149.f_1376 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "cover_low3", -4317.08f, 5.096519f, 3742.988f, 0.0f, 89.73381f, 0.0f, 4);
	Local_149.f_1380 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "cover_low4", -4310.988f, 5.001161f, 3739.259f, 0.0f, 0.01352563f, 0.0f, 4);
	Local_149.f_1384 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "cover_low5", -4316.0f, 5.001161f, 3739.251f, 0.0f, 0.0f, 0.0f, 4);
	Local_149.f_1388 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOScover_low6", -4709.825f, 3.162911f, 3962.256f, 0.0f, 85.8205f, 0.0f, 4);
	Local_149.f_1392 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOScover_low7", -4709.5f, 3.162911f, 3961.686f, 0.0f, -5.217784f, 0.0f, 4);
	Local_149.f_1396 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOScover_low8", -4707.628f, 3.162911f, 3965.934f, 0.0f, -94.70817f, 0.0f, 4);
	Local_149.f_1400 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOScover_low9", -4709.243f, 3.162911f, 3968.133f, 0.0f, -184.8855f, 0.0f, 4);
	Local_149.f_1404 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOSHouse2cover_low1", -4731.168f, 3.148289f, 3954.054f, 0.0f, -10.30718f, 0.0f, 4);
	Local_149.f_1408 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOSHouse2cover_low2", -4735.319f, 3.218888f, 3954.501f, 0.0f, 79.37294f, 0.0f, 4);
	Local_149.f_1412 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOSHouse2cover_low3", -4735.23f, 3.157851f, 3959.836f, 0.0f, 80.32259f, 0.0f, 4);
	Local_149.f_1416 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_149, "NOSHouse2cover_low4", -4733.92f, 3.157851f, 3962.578f, 0.0f, -99.56529f, 0.0f, 4);
}

void @+´E}(Å¨l@sÀîE|ÑØÅÂg@YE|£ÐÅÛs@BIÄE|n¥ÅïÁ@.éE|:Ås@/E| Å@ÝE{ÄÅ'6?üuE{Å4?éª<E{DËÅ<L@»E{]Å;ð@ÍREzÂÅ6æ@2YÄEz~üÅ.@2(var uParam0, var uParam1, int[] iParam2, var uParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23) //Position: 0x1E94A / 125258
{
	Unknown_Function();
	return;
	Unknown_Function();
	return;
	itos((StackVal % Vector(StackVal, StackVal, StackVal) - Vector(-1.0f, StackVal + 99, StackVal) * 50), StackVal, 197);
}

void Function_748() //Position: 0x1EC70 / 126064
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 1, 1);
	return;
}

void Function_749(int iParam0) //Position: 0x1EC84 / 126084
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 1, 1);
	return;
}

bool Function_750(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1EC99 / 126105
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
		Function_332("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_751(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1ED3F / 126271
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_764(&Var15, &Var0);
	uVar20 = Function_763(*uParam1, &Var15);
	Function_762(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_761(uParam0, uVar20);
	Function_759(StackVal, uParam0, Var15.f_12);
	Function_757(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_756(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_753(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_752(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_752(int iParam0, int iParam1, int iParam2) //Position: 0x1EE06 / 126470
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

bool Function_753(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1EE62 / 126562
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
				Function_755(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_755(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_752(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_754(bParam1->f_32);
	}
	else
	{
		Function_754(bParam1->f_32);
	}
	return 0;
}

void Function_754(bool bParam0) //Position: 0x1EFE8 / 126952
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

void Function_755(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1F022 / 127010
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

var Function_756(int iParam0, var uParam1, int iParam2) //Position: 0x1F0D0 / 127184
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_757(var uParam0, int iParam1, int iParam2) //Position: 0x1F0F4 / 127220
{
	switch (Function_758())
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

int Function_758() //Position: 0x1F190 / 127376
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

void Function_759(var uParam0, int iParam1, int iParam2) //Position: 0x1F1CC / 127436
{
	switch (Function_760(uParam0))
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

int Function_760(int iParam0) //Position: 0x1F264 / 127588
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

var Function_761(var uParam0, int iParam1) //Position: 0x1F3AF / 127919
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

void Function_762(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1F4FE / 128254
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

var Function_763(int iParam0, int iParam1) //Position: 0x1F591 / 128401
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_764(var uParam0, var uParam1) //Position: 0x1F5AB / 128427
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

void Function_765() //Position: 0x1F5F9 / 128505
{
	if (iLocal_519 != iLocal_913)
	{
		iLocal_913 = iLocal_519;
		switch (iLocal_519)
		{
			case 0x00000000:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail2", 16);
				}
				break;
			
			case 0x00000002:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail3", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail3", 16);
				}
				break;
			
			case 0x00000003:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail4", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail4", 16);
				}
				break;
			
			case 0x00000004:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail5", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail5", 16);
				}
				break;
			
			case 0x00000005:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail6", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail6", 16);
				}
				break;
			
			case 0x00000006:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail7", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail7", 16);
				}
				break;
			
			case 0x00000007:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail8", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail8", 16);
				}
				break;
			
			case 0x00000008:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail9", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFail9", 16);
				}
				break;
			
			case 0x00000009:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail10", 16);
				}
				else
				{
					strcpy(&cLocal_909, "nNOSFail10", 16);
				}
				break;
			
			case 0x0000000A:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFail11", 16);
				}
				else
				{
					strcpy(&cLocal_909, "nNOSFail11", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_155())
				{
					strcpy(&cLocal_909, "NOSAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_909, "NOSFailLast", 16);
				}
				break;
			}
	}
	return;
}

