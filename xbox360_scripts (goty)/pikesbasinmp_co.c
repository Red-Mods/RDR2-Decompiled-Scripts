//Decompiled with MagicRDR v1.0
//Function Count : 756
//Statics Count : 706
//Natives Count : 764
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
	float fLocal_69 = 0.0f;
	struct<1209> Local_70 = { 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	iLocal_14 = 0;
	bLocal_559 = true;
	iLocal_561 = 0;
	iLocal_583 = 0;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_669 = 4294967295;
	iLocal_672 = 0;
	bLocal_694 = false;
	iLocal_695 = 0;
	iLocal_696 = 0;
	iLocal_697 = 1;
	iLocal_698 = 0;
	iLocal_373 = 99;
	iLocal_374 = 6;
	Local_375 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_375 };
	while (!IS_EXITFLAG_SET() && Function_178())
	{
		WAIT(false);
	}
	Function_75();
	Function_1(&bLocal_420);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x75 / 117
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
	if (iLocal_374 == 3)
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

void Function_2(bool bParam0) //Position: 0x13B / 315
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

void Function_3(bool bParam0, bool bParam1) //Position: 0x17F / 383
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

int Function_4(bool bParam0, bool bParam1) //Position: 0x1FC / 508
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

void Function_5(int iParam0) //Position: 0x220 / 544
{
	Function_6(&Global_79337, iParam0);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0x22F / 559
{
	Function_7(iParam0, iParam1);
	return;
}

void Function_7(bool bParam0, int iParam1) //Position: 0x23C / 572
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x24F / 591
{
	Function_9(&Global_79337, iParam0);
	return;
}

void Function_9(int iParam0, int iParam1) //Position: 0x25E / 606
{
	Function_10(iParam0, iParam1);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x26B / 619
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_11(bool bParam0) //Position: 0x27A / 634
{
	return Function_12(Global_79337, bParam0);
}

bool Function_12(int iParam0, bool bParam1) //Position: 0x289 / 649
{
	return (iParam0 && bParam1) == 0;
}

void Function_13() //Position: 0x296 / 662
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_14() //Position: 0x29F / 671
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_15() //Position: 0x2B4 / 692
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

void Function_16(int iParam0) //Position: 0x2D6 / 726
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x2E6 / 742
{
	Function_18();
	return;
}

void Function_18() //Position: 0x2EF / 751
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x2FB / 763
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

void Function_20(var uParam0, int iParam1) //Position: 0x338 / 824
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x34B / 843
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x35A / 858
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x365 / 869
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_24(var uParam0) //Position: 0x375 / 885
{
	*uParam0 = Global_78480.f_120;
	return;
}

void Function_25() //Position: 0x384 / 900
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

void Function_26(int iParam0, bool bParam1) //Position: 0x49E / 1182
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

void Function_27(bool bParam0, bool bParam1) //Position: 0x4BE / 1214
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

void Function_28(int iParam0) //Position: 0x4DC / 1244
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

void Function_29(bool bParam0) //Position: 0x58E / 1422
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

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x5C8 / 1480
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

void Function_31(bool bParam0, bool bParam1) //Position: 0x5F0 / 1520
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

var Function_32(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x681 / 1665
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

void Function_33(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x7BA / 1978
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

vector3 Function_34(var uParam0, bool bParam1) //Position: 0x80F / 2063
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_35() //Position: 0x829 / 2089
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_36(int iParam0) //Position: 0x858 / 2136
{
	Function_38(iParam0);
	Function_37(1048576);
	return;
}

void Function_37(int iParam0) //Position: 0x86A / 2154
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x8A3 / 2211
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_39(bool bParam0) //Position: 0x8BA / 2234
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

bool Function_40(bool bParam0) //Position: 0x941 / 2369
{
	return Function_12(Global_79336, bParam0);
}

bool Function_41() //Position: 0x950 / 2384
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42() //Position: 0x965 / 2405
{
	if (Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 0, 1);
	return;
}

void Function_43() //Position: 0x97D / 2429
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_44(int iParam0) //Position: 0x98C / 2444
{
	return Function_45(Global_76905.f_132, iParam0);
}

bool Function_45(var uParam0, int iParam1) //Position: 0x99D / 2461
{
	return (uParam0 && iParam1) == 0;
}

void Function_46(int iParam0, bool bParam1) //Position: 0x9AA / 2474
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x9E5 / 2533
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

void Function_48(bool bParam0) //Position: 0xAD5 / 2773
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

void Function_49() //Position: 0xB84 / 2948
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

int Function_50(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xBF6 / 3062
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xE16 / 3606
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

var Function_52() //Position: 0x1443 / 5187
{
	int iVar0;
	
	return iVar0;
}

var Function_53(int iParam0) //Position: 0x144B / 5195
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_54(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x145C / 5212
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

struct<32> Function_55(char* cParam0, bool bParam1) //Position: 0x1551 / 5457
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_56(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x156A / 5482
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_58(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_57(Function_58(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_57(int iParam0, int iParam1) //Position: 0x15CF / 5583
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_58(int iParam0, bool bParam1) //Position: 0x15E1 / 5601
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_59(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15F3 / 5619
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

int Function_60(int iParam0) //Position: 0x1723 / 5923
{
	return Global_35278[iParam020].f_48;
}

float Function_61(int iParam0) //Position: 0x1732 / 5938
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_62(int iParam0) //Position: 0x176B / 5995
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_63(int iParam0) //Position: 0x17A8 / 6056
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x1942 / 6466
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

bool Function_65() //Position: 0x1B86 / 7046
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_66() //Position: 0x1B8F / 7055
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_67() //Position: 0x1BA3 / 7075
{
	Function_69();
	Function_68(10, 3);
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x1BB2 / 7090
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

void Function_69() //Position: 0x1CE9 / 7401
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

void Function_70() //Position: 0x1D34 / 7476
{
	Function_71(25, 2);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x1D40 / 7488
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

void Function_72(int iParam0, int iParam1) //Position: 0x1F3E / 7998
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

bool Function_73() //Position: 0x2075 / 8309
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

bool Function_74() //Position: 0x20DC / 8412
{
	return Global_30920;
}

void Function_75() //Position: 0x20E5 / 8421
{
	Function_176(&Local_622, 0);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_655, 0);
	DESTROY_OBJECT(bLocal_655);
	if (IS_OBJECT_VALID(bLocal_657))
	{
		DESTROY_OBJECT(bLocal_657);
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		HUD_CLEAR_HELP();
	}
	UNK_0x2148AC15(4294967295, 0);
	Function_172();
	Function_171(Global_83864.f_1284, 0, 1);
	RESET_PROPS_IN_WORLD();
	SET_TIME_ACCELERATION(Global_63398);
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UI_EXIT("RacePosition");
	Function_167(&bLocal_528);
	Function_164(1);
	Function_163();
	Function_156(&uLocal_681);
	STREAMING_RELEASE_MAIN_POI();
	if (Function_155())
	{
		Function_76(90);
	}
	else
	{
		Function_76(36);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x2185 / 8581
{
	Function_154(14, 1);
	Function_77(Function_152(), iParam0);
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x2199 / 8601
{
	Function_151(0, iParam0);
	Function_151(13, iParam0);
	Function_151(11, Function_150(29));
	Function_78(iParam1, 4294967295, 0, 0, 0);
	return;
}

void Function_78(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x21BE / 8638
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

void Function_79(bool bParam0) //Position: 0x22DA / 8922
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

void Function_80() //Position: 0x2363 / 9059
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

void Function_81() //Position: 0x23B5 / 9141
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

void Function_82() //Position: 0x24BB / 9403
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

void Function_83() //Position: 0x24EE / 9454
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

void Function_84() //Position: 0x267C / 9852
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

void Function_85() //Position: 0x2830 / 10288
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, int iParam2) //Position: 0x283E / 10302
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

struct<8> Function_87(int iParam0) //Position: 0x2A2F / 10799
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

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AD5 / 10965
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

int Function_89(bool bParam0) //Position: 0x2D70 / 11632
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_90() //Position: 0x2DB1 / 11697
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

struct<8> Function_91() //Position: 0x2E3A / 11834
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

struct<8> Function_92() //Position: 0x2ED1 / 11985
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

void Function_93() //Position: 0x2F50 / 12112
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

int Function_94(int iParam0, bool bParam1, int iParam2) //Position: 0x2F89 / 12169
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

void Function_95(int iParam0) //Position: 0x3193 / 12691
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_96(int iParam0) //Position: 0x31A2 / 12706
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x31B1 / 12721
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

bool Function_98() //Position: 0x3258 / 12888
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_99(int iParam0) //Position: 0x3263 / 12899
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_100(var uParam0, var uParam1, bool bParam2) //Position: 0x3273 / 12915
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

void Function_101() //Position: 0x32B8 / 12984
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

void Function_102() //Position: 0x32E2 / 13026
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

void Function_103(bool bParam0) //Position: 0x3342 / 13122
{
	Global_56092[*bParam0] = 0;
	Function_104(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_104(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x335C / 13148
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

void Function_105(char* cParam0, bool bParam1) //Position: 0x3413 / 13331
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

bool Function_106(int iParam0, int iParam1) //Position: 0x3438 / 13368
{
	return Function_45(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_107(int iParam0) //Position: 0x344C / 13388
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_108(int iParam0) //Position: 0x3480 / 13440
{
	return Global_50170[iParam022].f_24;
}

void Function_109(var uParam0, var uParam1, int iParam2) //Position: 0x348F / 13455
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

void Function_110(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3638 / 13880
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

void Function_111() //Position: 0x369E / 13982
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

void Function_112(var uParam0, int iParam1) //Position: 0x36C7 / 14023
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

void Function_113(bool bParam0) //Position: 0x3709 / 14089
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

void Function_114() //Position: 0x375A / 14170
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

bool Function_115(vector3 vParam0) //Position: 0x3815 / 14357
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_116(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x382D / 14381
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

vector3 Function_117() //Position: 0x3914 / 14612
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_118(int iParam0) //Position: 0x391D / 14621
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_119(bool bParam0, bool bParam1) //Position: 0x3933 / 14643
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

float Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x39FA / 14842
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_121(var uParam0, int iParam1) //Position: 0x3A17 / 14871
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

bool Function_122(int iParam0) //Position: 0x423D / 16957
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_45(uVar0, 0x1000000) || Function_45(uVar0, 0x2000000)) || Function_45(uVar0, 0x4000000)) || !Function_45(uVar0, 0x10000000));
}

void Function_123(bool bParam0, bool bParam1) //Position: 0x4278 / 17016
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_124() //Position: 0x4285 / 17029
{
	if (Function_45(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_125(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x42A0 / 17056
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

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4344 / 17220
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

struct<16> Function_127(int iParam0) //Position: 0x43B6 / 17334
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_128(int iParam0) //Position: 0x43D7 / 17367
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_129(int iParam0) //Position: 0x43F8 / 17400
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_130() //Position: 0x4419 / 17433
{
	return "CQueue_Count";
}

void Function_131(int iParam0) //Position: 0x442E / 17454
{
	Function_132(iParam0, 1);
	return;
}

void Function_132(int iParam0, bool bParam1) //Position: 0x443A / 17466
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

int Function_133(bool bParam0) //Position: 0x4490 / 17552
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_134(int iParam0, int iParam1) //Position: 0x449C / 17564
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

struct<16> Function_135(int iParam0) //Position: 0x451E / 17694
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_107(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_136(int iParam0) //Position: 0x453E / 17726
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_137(int iParam0) //Position: 0x456F / 17775
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x46ED / 18157
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

var Function_139() //Position: 0x4839 / 18489
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x4886 / 18566
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_141(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x489E / 18590
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

void Function_142(int iParam0, int iParam1) //Position: 0x4914 / 18708
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4928 / 18728
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

void Function_144(int iParam0, int iParam1) //Position: 0x49E5 / 18917
{
	Function_10(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_145(int iParam0) //Position: 0x49F9 / 18937
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_146(int iParam0) //Position: 0x4A27 / 18983
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_147() //Position: 0x4A57 / 19031
{
	return "MP_Unstoppable_Icon_128";
}

float Function_148(int iParam0) //Position: 0x4A77 / 19063
{
	return Global_50170[iParam022].f_12;
}

int Function_149() //Position: 0x4A86 / 19078
{
	return Global_79349.f_16;
}

int Function_150(int iParam0) //Position: 0x4A92 / 19090
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_151(int iParam0, int iParam1) //Position: 0x4AAB / 19115
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_152() //Position: 0x4AC5 / 19141
{
	return Function_153(0);
}

int Function_153(int iParam0) //Position: 0x4ACF / 19151
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_154(int iParam0, int iParam1) //Position: 0x4ADF / 19167
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

bool Function_155() //Position: 0x4B04 / 19204
{
	return Function_45(Global_79962, 64);
}

void Function_156(int iParam0) //Position: 0x4B13 / 19219
{
	Function_157(iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x4B1E / 19230
{
	if (StackVal >= 0)
	{
		Function_158(TO_FLOAT(StackVal), "XP_Coop_complete", 1);
		iParam0->f_8 = 0;
	}
	return;
}

int Function_158(float fParam0, bool bParam1, bool bParam2) //Position: 0x4B50 / 19280
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

void Function_159(int iParam0, bool bParam1, int iParam2) //Position: 0x4B80 / 19328
{
	Function_50(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_160(int iParam0, float fParam1) //Position: 0x4B9C / 19356
{
	Function_161(iParam0, (Function_99(iParam0) + fParam1));
	return;
}

void Function_161(int iParam0, float fParam1) //Position: 0x4BAF / 19375
{
	(*&Global_78480 + 176)[iParam0] = fParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = fParam1;
	}
	return;
}

bool Function_162() //Position: 0x4BD8 / 19416
{
	if (Function_65())
	{
		return (Function_149() != 1 || Function_149() != 0);
	}
	return 0;
}

void Function_163() //Position: 0x4BF1 / 19441
{
	Function_167(&Local_70 + 4);
	RELEASE_LAYOUT_REF(Local_70);
	return;
}

void Function_164(bool bParam0) //Position: 0x4C03 / 19459
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Local_70);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_SQUAD_FROM_OBJECT(bVar1);
		if ((((!bVar2 != Local_70.f_308 && !bVar2 != Local_591.f_44) && !bVar2 != Local_591.f_48) && !bVar2 != Local_591.f_52) && !bVar2 != Local_591.f_56)
		{
			if (SQUAD_IS_VALID(bVar2))
			{
				Function_165(&bVar2, 0, 0);
				DESTROY_OBJECT(bVar1);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		else
		{
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	if (bParam0)
	{
		Function_165(&Local_70 + 308, 0, 0);
		DESTROY_OBJECT(Local_70.f_308);
		Function_165(&Local_591 + 44, 0, 0);
		DESTROY_OBJECT(Local_591.f_44);
		Function_165(&Local_591 + 48, 0, 0);
		DESTROY_OBJECT(Local_591.f_48);
		Function_165(&Local_591 + 52, 0, 0);
		DESTROY_OBJECT(Local_591.f_52);
		Function_165(&Local_591 + 56, 0, 0);
		DESTROY_OBJECT(Local_591.f_56);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4CED / 19693
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

bool Function_166(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4D69 / 19817
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_167(int iParam0) //Position: 0x4D83 / 19843
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_168(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x4DA9 / 19881
{
	if (Function_170(uParam0[iParam13], 4))
	{
		if (Function_170(uParam0[iParam13], 1))
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
			Function_169(uParam0[iParam13], 1);
			Function_169(uParam0[iParam13], 2);
			Function_169(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_169(var uParam0, int iParam1) //Position: 0x4ED7 / 20183
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_170(var uParam0, int iParam1) //Position: 0x4EF1 / 20209
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_171(var uParam0, bool bParam1, bool bParam2) //Position: 0x4F0E / 20238
{
	Global_13038 = uParam0;
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

void Function_172() //Position: 0x4F3B / 20283
{
	Function_173(Function_175());
	return;
}

void Function_173(int iParam0) //Position: 0x4F47 / 20295
{
	if (!Function_174(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_174(int iParam0) //Position: 0x4F74 / 20340
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_175() //Position: 0x4F8B / 20363
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_176(int iParam0, bool bParam1) //Position: 0x4FA5 / 20389
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
			Function_177(iParam0 + 68);
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
			Function_177(iParam0 + 72);
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

void Function_177(var uParam0) //Position: 0x5048 / 20552
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

var Function_178() //Position: 0x508F / 20623
{
	int iVar0;
	
	iVar0 = 1;
	Function_755();
	if (NET_IS_SESSION_HOST())
	{
		Function_737();
	}
	if (Function_736(&bLocal_420))
	{
		Function_346();
	}
	if (GET_HOUR(false) > 18)
	{
		Function_345(18, 0, 7, 23, 59, 59);
	}
	if (iLocal_373 != 99)
	{
		if (NET_IS_SESSION_HOST())
		{
			vLocal_553 = { StackVal, StackVal, vLocal_556 };
		}
		else if (UNK_0xA80C6DE6(&vLocal_553))
		{
			vLocal_556 = { StackVal, StackVal, vLocal_553 };
		}
		if (!iLocal_561)
		{
			if (vLocal_553.z == 1)
			{
				iLocal_561 = 1;
				iLocal_560 = 1;
				iLocal_373 = 101;
				Function_344(0);
			}
			else if (vLocal_553.z == 2)
			{
				if (Function_12(iLocal_641, 262144))
				{
					Function_313(&bLocal_420, "PIK_CO_cut_failure_abandon", "FTR_MISSION_FAIL_SONG_01");
				}
				else if (Function_12(iLocal_641, 1048576))
				{
					Function_313(&bLocal_420, "PIK_CO_cut_failure_dispersed", "FTR_MISSION_FAIL_SONG_01");
				}
				else
				{
					Function_313(&bLocal_420, "PIK_CO_cut_final_failure", "FTR_MISSION_FAIL_SONG_01");
				}
				iLocal_561 = 1;
				iLocal_560 = 0;
				iLocal_373 = 101;
				Function_344(0);
			}
		}
		Function_310(bLocal_643, Local_70, 39605, 1);
		Function_308(3);
		iVar0 = Function_179(&bLocal_420);
	}
	return iVar0;
}

int Function_179(bool bParam0) //Position: 0x5227 / 21031
{
	int iVar0;
	
	Function_305();
	Function_304();
	if (!iLocal_672 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_672 = 1;
	}
	if (Function_303(bParam0))
	{
		if (!((((((iLocal_374 != 0 || iLocal_374 != 1) || iLocal_374 != 2) || iLocal_374 != 3) || iLocal_374 != 4) || iLocal_374 != 5) || iLocal_374 != 105))
		{
			if (Function_300())
			{
				NET_LOG(bLocal_559, "Local State", "All players have run out of lives, ending", false, false, false, false);
				Function_313(bParam0, "COOP_failed_everyone_dead", "GEN_DEATH_01");
			}
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_313(bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	iVar0 = Function_180(bParam0);
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

int Function_180(bool bParam0) //Position: 0x534C / 21324
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
		bParam0->f_64 = Function_299((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_298())
	{
		if (bVar1)
		{
			switch (Function_296())
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
	if (Function_295(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
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
					if (Function_294() && IS_PS3())
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
	if (((Function_295(bParam0) && Function_293(4096)) && Function_162()) && !Function_40(32768))
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
					Function_292(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_291(4096);
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
	fVar8 = Function_290();
	if (bVar1)
	{
		bVar9 = Function_289(bVar0);
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
			if ((Function_287(8192) || Function_45(bParam0->f_48, 512)) && !Function_286(1, 1))
			{
				iVar6 = Function_283(81922, 0, 0);
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
								Function_281("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_161(2, NET_GET_NET_TIME());
								Function_279(3, 1);
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
						if (!Function_286(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
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
				else if (Function_286(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_46(8388608, 0);
					}
				}
			}
			if (Function_278(bParam0 + 116, &Global_78617 + 2648))
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
						Function_277(bParam0 + 116, &Global_78617 + 2648);
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
					Function_276(bParam0->f_188, bVar0);
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
				Function_275(0);
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
			if (Function_274(bParam0 + 116, &Global_78617 + 2648))
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
			Function_269(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_253(bParam0, bParam0->f_12 != 0);
			}
			Function_251(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_251(bParam0, 1);
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
			Function_251(bParam0, 1);
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
			Function_251(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_250();
				Function_30(32, 0, 1);
				Function_39(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_251(bParam0, 1);
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
						if (!Function_286(16384, 1))
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
					Function_251(bParam0, 1);
				}
			}
			else
			{
				Function_251(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_251(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_249(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				if (Function_244(StackVal, Function_45(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_229(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_45(bParam0->f_48, 32), 1))
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
				Function_228(bVar0);
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
			if (!Function_225(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_224(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_45(bParam0->f_44, 8))
				{
					Function_223(bParam0 + 192, 0, 1, 1);
					Function_217(bParam0 + 192);
					Function_208(&bVar0, 0, 0, 0);
					Function_208(&bVar0, 0, 0, 0);
					Function_207(bVar0);
				}
				else
				{
					Function_223(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_206(bVar0);
					vVar10 = { StackVal, StackVal, Function_206(bVar0) };
					bVar13 = Function_205(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_204(bVar13))
					{
						if (StackVal || Function_162() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_200(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_199(&(Global_29008[StackVal]), 4194304);
				}
				Function_291(32);
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
				Function_291(32);
				Function_200(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_204(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_197(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_197(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_197(&(Global_29008[StackVal]), 4194304))
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
					if (Function_204(bVar14))
					{
						if (StackVal && (!Function_198(bVar14) && !Function_197(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_196(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_195();
			if (!Function_45(bParam0->f_44, 32))
			{
				if (Function_194())
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
						bVar15 = Function_193(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_193(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_193(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_193(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_193(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_193(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_193(bVar0, 46);
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
					Function_192(0.5f);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_46(16384, 0);
			Function_191(bVar0, !Function_45(bParam0->f_44, 96));
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
			Function_251(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_39(1);
			}
			else if (!Function_189())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_182(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_181(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_251(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_251(bParam0, 1);
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
			Function_251(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_249(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_251(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_249(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_251(bParam0, 1);
			if (Function_189())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_249(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_181(int iParam0) //Position: 0x6407 / 25607
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_182(int iParam0) //Position: 0x6423 / 25635
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
			if (Function_188(&Global_78578 + 96))
			{
				if (FABS(Function_183(&Global_78578 + 96)) > 1.0f)
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

float Function_183(int iParam0) //Position: 0x6514 / 25876
{
	return -Function_184(iParam0);
}

float Function_184(bool bParam0) //Position: 0x6520 / 25888
{
	if (Function_188(bParam0))
	{
		if (Function_187(bParam0))
		{
			return StackVal;
		}
		Function_185();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_185() //Position: 0x65F1 / 26097
{
	if (!Function_186())
	{
	}
	return;
}

bool Function_186() //Position: 0x65FE / 26110
{
	return NET_IS_IN_SESSION();
}

bool Function_187(bool bParam0) //Position: 0x6607 / 26119
{
	return Function_45(*bParam0, 2);
}

bool Function_188(bool bParam0) //Position: 0x6614 / 26132
{
	return Function_45(*bParam0, 1);
}

bool Function_189() //Position: 0x6621 / 26145
{
	return (HUD_IS_FADED() || Function_190(0));
}

bool Function_190(bool bParam0) //Position: 0x662F / 26159
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

void Function_191(bool bParam0, int iParam1) //Position: 0x66D3 / 26323
{
	struct<5> Var0;
	
	Function_46(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_293(256))
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

void Function_192(bool bParam0) //Position: 0x6729 / 26409
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

int Function_193(bool bParam0, int iParam1) //Position: 0x6746 / 26438
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_194() //Position: 0x6757 / 26455
{
	return !Function_162();
}

void Function_195() //Position: 0x6761 / 26465
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

void Function_196(bool bParam0) //Position: 0x67A0 / 26528
{
	if (!Function_204(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_199(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_197(var uParam0, int iParam1) //Position: 0x67FB / 26619
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_198(bool bParam0) //Position: 0x6817 / 26647
{
	if (!Function_204(bParam0))
	{
		return 1;
	}
	return Function_197(&(Global_29008[bParam0]), 4);
}

void Function_199(var uParam0, int iParam1) //Position: 0x6833 / 26675
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_200(int iParam0, bool bParam1, int iParam2) //Position: 0x6842 / 26690
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
		if (Function_204(Global_29006))
		{
			Function_199(&(Global_29008[Global_29006]), 131072);
			Function_203(&(Global_29008[Global_29006]), 2097152);
			Function_201(Global_29006);
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
				if (Function_197(&(Global_29008[iVar0]), 4) || Function_197(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_203(&(Global_29008[iVar0]), 2097155);
					Function_199(&(Global_29008[iVar0]), 262144);
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

void Function_201(int iParam0) //Position: 0x694D / 26957
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_202())
			{
				return;
			}
		}
		if (!Function_197(&(Global_29008[iParam0]), 2048))
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

bool Function_202() //Position: 0x69CC / 27084
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_197(&(Global_29008[iVar0]), 4) || Function_197(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_203(var uParam0, int iParam1) //Position: 0x6A35 / 27189
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_204(bool bParam0) //Position: 0x6A4C / 27212
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_205(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6A62 / 27234
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

vector3 Function_206(bool bParam0) //Position: 0x6AFD / 27389
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_207(bool bParam0) //Position: 0x6B0E / 27406
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

var Function_208(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6B41 / 27457
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
					if (Function_216(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_215(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_214(bVar2))
					{
						if (Function_213(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_216(bVar3, 1))
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
						if (Function_216(bVar3, 1))
						{
							bVar24 = (Function_215(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
							Function_209(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_216(bVar3, 1))
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

void Function_209(var uParam0, int iParam1) //Position: 0x6E24 / 28196
{
	*iParam1 = Function_210(uParam0, Function_211(), 0);
	iParam1->f_4 = Function_210(uParam0, Function_211() + 8, Function_211());
	return;
}

var Function_210(var uParam0, int iParam1, bool bParam2) //Position: 0x6E47 / 28231
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_133((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_211() //Position: 0x6E66 / 28262
{
	return Function_212(39);
}

int Function_212(bool bParam0) //Position: 0x6E71 / 28273
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

bool Function_213(bool bParam0) //Position: 0x6E9F / 28319
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

bool Function_214(bool bParam0) //Position: 0x6EC1 / 28353
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_215(int iParam0, bool bParam1) //Position: 0x6ED3 / 28371
{
	if (Function_216(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_216(bool bParam0, int iParam1) //Position: 0x6EED / 28397
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_217(int iParam0) //Position: 0x6F00 / 28416
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_220(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_41()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_219(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_218(StackVal, Var0, 1, 1, 0);
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
				Function_209(uVar3, &Var13);
				Function_218(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_218(struct<5> Param0) //Position: 0x6FA7 / 28583
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_214(Param0))
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
			if (Function_216(bVar1, 1))
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

bool Function_219(int iParam0) //Position: 0x7027 / 28711
{
	return Function_12(Global_83864.f_1252, iParam0);
}

void Function_220(int iParam0, int iParam1) //Position: 0x7039 / 28729
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
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_221(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_221(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_221(23, iParam1))
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
			bVar4 = Function_193(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_193(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_221(int iParam0, int iParam1) //Position: 0x71B6 / 29110
{
	return Function_222(iParam0, iParam1) < 4294967295;
}

int Function_222(int iParam0, int iParam1) //Position: 0x71C5 / 29125
{
	int iVar0;
	
	if (!Function_214(iParam0))
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

void Function_223(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x71F8 / 29176
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
		Function_218(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_224(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7243 / 29251
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

bool Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x72E0 / 29408
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
	return Function_226(bParam0, iVar0);
}

bool Function_226(bool bParam0, int iParam1) //Position: 0x734F / 29519
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_227(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_227(iParam1, 64))
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

bool Function_227(var uParam0, int iParam1) //Position: 0x7428 / 29736
{
	return (uParam0 && iParam1) == 0;
}

void Function_228(bool bParam0) //Position: 0x7435 / 29749
{
	Function_46(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_229(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x7456 / 29782
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_41();
	Function_240();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_239();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_226(bVar0, 3145855);
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
		bVar9 = Function_293(256);
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
		Function_236(bVar0, 0);
		Function_231();
		Function_230(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_205(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_204(uVar14))
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

void Function_230(char* cParam0, vector3 vParam1) //Position: 0x75CD / 30157
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_231() //Position: 0x760B / 30219
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_235(iVar1))
		{
			uVar2 = Function_234(iVar1);
			Function_232(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_232(int iParam0, bool bParam1) //Position: 0x763D / 30269
{
	if (!Function_235(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_233(222, Global_26401[iParam0], 0);
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
		Function_233((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_233(222, bParam1, 0);
	}
	return;
}

int Function_233(int iParam0, bool bParam1, int iParam2) //Position: 0x76C6 / 30406
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

int Function_234(int iParam0) //Position: 0x78C1 / 30913
{
	if (!Function_235(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_235(int iParam0) //Position: 0x78D9 / 30937
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_236(bool bParam0, bool bParam1) //Position: 0x78EE / 30958
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_238(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_287(8192) && !Function_286(1, 1)));
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
	if (Function_237())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_237() //Position: 0x79F6 / 31222
{
	return Function_45(Global_79962, 2048);
}

var Function_238(bool bParam0) //Position: 0x7A06 / 31238
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

void Function_239() //Position: 0x7A3B / 31291
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_240() //Position: 0x7A50 / 31312
{
	Function_243();
	Function_102();
	Function_241();
	return;
}

void Function_241() //Position: 0x7A5F / 31327
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_242();
	return;
}

void Function_242() //Position: 0x7A93 / 31379
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_243() //Position: 0x7AA4 / 31396
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_244(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7ABD / 31421
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
	Function_248(bParam0);
	Var6 = { StackVal, StackVal, Function_248(bParam0) };
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
			Function_247(bVar32);
			vVar12.f_4 = Function_245(StackVal, StackVal, StackVal, StackVal, vVar3, Function_247(bVar32));
		}
	}
	return Function_229(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_245(vector3 vParam0, vector3 vParam3) //Position: 0x7B74 / 31604
{
	var uVar0;
	
	Function_246(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7B8E / 31630
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_247(bool bParam0) //Position: 0x7BB1 / 31665
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

vector3 Function_248(bool bParam0) //Position: 0x7BD8 / 31704
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_249(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7BE9 / 31721
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

void Function_250() //Position: 0x7C12 / 31762
{
	if (!Function_44(8))
	{
		Function_43();
	}
	Function_30(8, 1, 1);
	return;
}

void Function_251(bool bParam0, int iParam1) //Position: 0x7C2B / 31787
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
	if (!Function_226(bParam0->f_112, 0))
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
		Function_252(bParam0);
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
				Function_292(1048576);
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

void Function_252(int iParam0) //Position: 0x7E26 / 32294
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

void Function_253(int iParam0, int iParam1) //Position: 0x7E67 / 32359
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
		Function_206(bVar0);
		vVar1 = { StackVal, StackVal, Function_206(bVar0) };
		Function_268(bVar0);
		vVar4 = { StackVal, StackVal, Function_268(bVar0) };
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
		iParam0->f_120 = Function_264(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_10(iParam0 + 48, 256);
	}
	else
	{
		Function_206(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_206(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_256(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_255(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_10(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_254(iParam0->f_120);
	return;
}

void Function_254(int iParam0) //Position: 0x8000 / 32768
{
	Function_239();
	Global_63118 = iParam0;
	return;
}

void Function_255(bool bParam0, bool bParam1) //Position: 0x800E / 32782
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_256(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x8023 / 32803
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
	Function_257(&bVar0, uParam2, uParam3, uParam4);
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

void Function_257(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x80A5 / 32933
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_263(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_262(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_261(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_260(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_259(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_258(&bVar0, uParam1, uParam2, uParam3);
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

void Function_258(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x81C0 / 33216
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

void Function_259(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x82D5 / 33493
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

void Function_260(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x83EE / 33774
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

void Function_261(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x84F8 / 34040
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

void Function_262(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x85FE / 34302
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

void Function_263(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x86AE / 34478
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

var Function_264(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8765 / 34661
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
	Function_265(&bVar0, uParam2);
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

void Function_265(var uParam0, int iParam1) //Position: 0x87DC / 34780
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_267(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_266(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_266(var uParam0, bool bParam1) //Position: 0x8848 / 34888
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
	Function_268(bParam1);
	vVar3 = { StackVal, StackVal, Function_268(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_247(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_247(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_268(bParam1);
	vVar6 = { StackVal, StackVal, Function_268(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_247(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_247(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_267(var uParam0, bool bParam1) //Position: 0x890A / 35082
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
	Function_268(bParam1);
	vVar3 = { StackVal, StackVal, Function_268(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_247(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_247(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_268(bParam1);
	vVar6 = { StackVal, StackVal, Function_268(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_247(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_247(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_268(bool bParam0) //Position: 0x89CC / 35276
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

void Function_269(int iParam0) //Position: 0x89F3 / 35315
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
				if (Function_214(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_271(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_270("MPSplashItem.s1"));
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
				if (Function_214(bVar2))
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

var Function_270(int iParam0) //Position: 0x8D19 / 36121
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

struct<64> Function_271(bool bParam0) //Position: 0x8F2D / 36653
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_294())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_273();
	}
	if (!Function_272(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_272(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_272(bool bParam0) //Position: 0x8FD3 / 36819
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

struct<64> Function_273() //Position: 0x9074 / 36980
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_274(var uParam0, int iParam1) //Position: 0x9085 / 36997
{
	if (Function_278(uParam0, iParam1))
	{
		Function_277(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_275(int iParam0) //Position: 0x909F / 37023
{
	Function_86(&Global_79378, 0, iParam0);
	return;
}

void Function_276(bool bParam0, bool bParam1) //Position: 0x90AF / 37039
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
			if (Function_214(bVar2))
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

void Function_277(var uParam0, int iParam1) //Position: 0x912B / 37163
{
	*uParam0 = *iParam1;
	return;
}

bool Function_278(var uParam0, int iParam1) //Position: 0x9137 / 37175
{
	return *uParam0 == *iParam1;
}

void Function_279(int iParam0, int iParam1) //Position: 0x9144 / 37188
{
	Function_280(iParam0, (Function_153(iParam0) + iParam1));
	return;
}

void Function_280(int iParam0, int iParam1) //Position: 0x9157 / 37207
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_281(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9180 / 37248
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_282(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_282(int iParam0) //Position: 0x91FB / 37371
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

var Function_283(int iParam0, bool bParam1, int iParam2) //Position: 0x923A / 37434
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_272(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_284(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_284(bool bParam0, int iParam1, bool bParam2) //Position: 0x9281 / 37505
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_286(iParam1, bParam2);
	}
	if (!Function_272(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_285(iParam1), 64);
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

var Function_285(int iParam0) //Position: 0x9302 / 37634
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

bool Function_286(int iParam0, bool bParam1) //Position: 0x961B / 38427
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_287(int iParam0) //Position: 0x963B / 38459
{
	return Function_288(&Global_79349, iParam0);
}

int Function_288(var uParam0, int iParam1) //Position: 0x964A / 38474
{
	return Function_45(uParam0->f_44, iParam1);
}

int Function_289(int iParam0) //Position: 0x9659 / 38489
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

float Function_290() //Position: 0x966F / 38511
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

void Function_291(int iParam0) //Position: 0x96A5 / 38565
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_292(int iParam0) //Position: 0x96B6 / 38582
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

bool Function_293(bool bParam0) //Position: 0x970F / 38671
{
	return Function_12(Global_78617.f_52, bParam0);
}

bool Function_294() //Position: 0x9720 / 38688
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_295(bool bParam0) //Position: 0x972E / 38702
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_296() //Position: 0x9740 / 38720
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_297(GET_LOCAL_SLOT(), 1, 0);
}

int Function_297(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9757 / 38743
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_272(bParam0))
			{
				if (!Function_284(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_298() //Position: 0x979B / 38811
{
	return Function_287(2);
}

var Function_299(float fParam0, float fParam1) //Position: 0x97A5 / 38821
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool Function_300() //Position: 0x97B8 / 38840
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_302(bVar0))
		{
			if (Function_301(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_301(bool bParam0) //Position: 0x97E5 / 38885
{
	if (Function_302(bParam0))
	{
		if (Function_284(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_302(bool bParam0) //Position: 0x980A / 38922
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_272(bParam0);
}

bool Function_303(bool bParam0) //Position: 0x9820 / 38944
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_304() //Position: 0x9834 / 38964
{
	Function_308(4);
	return;
}

void Function_305() //Position: 0x983E / 38974
{
	if (Local_389.f_68)
	{
		if (!Function_286(4096, 1))
		{
			Function_46(4096, 1);
		}
		else if (Function_307())
		{
			Function_306(&Local_389);
		}
	}
	return;
}

void Function_306(var uParam0) //Position: 0x986D / 39021
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

bool Function_307() //Position: 0x98B4 / 39092
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
		if (Function_272(bVar0))
		{
			iVar1++;
			if (Function_284(bVar0, 4096, 1))
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

void Function_308(int iParam0) //Position: 0x9938 / 39224
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
			Function_309(iParam0);
		}
	}
	return;
}

void Function_309(bool bParam0) //Position: 0x996A / 39274
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

int Function_310(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x9979 / 39289
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
						if (Function_311(bVar4) == bParam1)
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

int Function_311(bool bParam0) //Position: 0x9A5B / 39515
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

void Function_312(var uParam0) //Position: 0x9AB5 / 39605
{
	uParam0 = uParam0;
	return;
}

void Function_313(bool bParam0, var uParam1, bool bParam2) //Position: 0x9ABF / 39615
{
	var uVar0;
	int iVar1;
	
	if (iLocal_669 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_665, 1.0f, 0);
	}
	Local_673.f_16 = uParam1;
	Local_673.f_20 = bParam2;
	Function_342(bParam0, 0, 0, 0);
	Function_331(bParam0, 40924);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_188(&Global_78578 + 96))
		{
			Function_330(&Global_78578 + 96);
		}
		Function_329(4294967295);
	}
	CANCEL_DEADEYE();
	Function_315(0, &uVar0, &iVar1);
	UI_EXIT("XpHud");
	if (Function_303(bParam0))
	{
		Function_314(bParam0);
	}
	return;
}

void Function_314(bool bParam0) //Position: 0x9B3A / 39738
{
	if (!Function_303(bParam0))
	{
	}
	if (!Function_40(2048))
	{
		Function_292(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

var Function_315(bool bParam0, var uParam1, int iParam2) //Position: 0x9B6D / 39789
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	*uParam1 = 100000.0f;
	if (Function_188(&Global_78578 + 96))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_330(&Global_78578 + 96);
		}
		*uParam1 = Function_184(&Global_78578 + 96);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_272(bVar1))
		{
			iVar0 = (iVar0 + Function_327(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_326(*uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_324(iVar3, &uVar4, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_323();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_321(bVar1, &uVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	*iParam2 = Function_318(iVar0);
	if (!bParam0)
	{
		if (*iParam2 >= 4294967295)
		{
			*iParam2 = (*iParam2 - 1);
		}
	}
	Function_316(iVar0, *iParam2, iLocal_672);
	return iVar0;
}

void Function_316(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9C40 / 40000
{
	bool bVar0;
	
	bVar0 = Function_317(1);
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

var Function_317(int iParam0) //Position: 0x9C8E / 40078
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_35(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && iParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_35(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_318(int iParam0) //Position: 0x9CDB / 40155
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_319(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

void Function_319(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x9D08 / 40200
{
	bool bVar0;
	
	*iParam1 = Function_320(iParam0);
	*uParam2 = Function_210(*iParam1, 32, 20);
	*iParam1 = Function_210(*iParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

int Function_320(int iParam0) //Position: 0x9D59 / 40281
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_321(int iParam0, int iParam1, int iParam2) //Position: 0x9D79 / 40313
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_317(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_322(iParam0, 1);
	uVar2 = Function_322(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_322(int iParam0, bool bParam1) //Position: 0x9DBA / 40378
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

int Function_323() //Position: 0x9DE0 / 40416
{
	bool bVar0;
	
	bVar0 = Function_317(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "size");
}

void Function_324(int iParam0, float fParam1, int iParam2) //Position: 0x9E03 / 40451
{
	float fVar0;
	
	fVar0 = Function_325(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*fParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_325(int iParam0) //Position: 0x9E34 / 40500
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_326(float fParam0) //Position: 0x9E54 / 40532
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_324(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_327(int iParam0) //Position: 0x9E81 / 40577
{
	return Function_328(0, iParam0);
}

int Function_328(int iParam0, bool bParam1) //Position: 0x9E8D / 40589
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_153(iParam0);
	}
	if (!Function_272(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_329(int iParam0) //Position: 0x9EF4 / 40692
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_330(int iParam0) //Position: 0x9F08 / 40712
{
	if (Function_188(iParam0))
	{
		if (!Function_187(iParam0))
		{
			Function_185();
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

void Function_331(bool bParam0, int iParam1) //Position: 0x9FD0 / 40912
{
	bParam0->f_180 = iParam1;
	return;
}

int Function_332() //Position: 0x9FDC / 40924
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (Local_673)
	{
		case 0x00000000:
			Function_341(Local_673.f_16);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(Local_673.f_20, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_340(&Local_673 + 4))
			{
				Function_338(&Local_673 + 4);
			}
			Local_673 = 1;
			break;
		
		case 0x00000001:
			if (Function_336(&Local_673 + 4) <= 7.0f)
			{
				Function_335(&uVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_333() >= 4294967295)
				{
					Function_319(iVar2, &uVar0, &bVar1, bVar3);
					Function_158(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					Local_673 = 3;
				}
				else
				{
					Local_673 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_336(&Local_673 + 4) <= 5.0f)
			{
				Local_673 = 3;
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

int Function_333() //Position: 0xA0FE / 41214
{
	if (!Function_334())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_334() //Position: 0xA113 / 41235
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_335(int iParam0, var uParam1, int iParam2) //Position: 0xA120 / 41248
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_317(0);
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

float Function_336(int iParam0) //Position: 0xA173 / 41331
{
	if (Function_340(iParam0))
	{
		if (Function_337(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_337(int iParam0) //Position: 0xA23B / 41531
{
	return Function_45(*iParam0, 2);
}

void Function_338(int iParam0) //Position: 0xA248 / 41544
{
	if (!Function_340(iParam0))
	{
		Function_339(iParam0, 0.0f);
	}
	return;
}

void Function_339(int iParam0, float fParam1) //Position: 0xA25D / 41565
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(iParam0, 1);
	Function_7(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_340(int iParam0) //Position: 0xA27E / 41598
{
	return Function_45(*iParam0, 1);
}

void Function_341(bool bParam0) //Position: 0xA28B / 41611
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_342(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA2F5 / 41717
{
	if (bParam1)
	{
		Function_154(7, 1);
		Function_154(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_298())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_150(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_343())
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

bool Function_343() //Position: 0xA3A3 / 41891
{
	return Function_287(16);
}

void Function_344(bool bParam0) //Position: 0xA3AE / 41902
{
	char* cVar0[32];
	
	iLocal_374 = bParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_373)
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
	if (bParam0 <= 6 && bParam0 >= 104)
	{
		stradd(&cVar0, "GOAL ", 32);
		straddi(&cVar0, (bParam0 + 1 - 6), 32);
	}
	else if (bParam0 == 0)
	{
		stradd(&cVar0, "INITIALIZE", 32);
	}
	else if (bParam0 == 1)
	{
		stradd(&cVar0, "nSTREAMING", 32);
	}
	else if (bParam0 == 3)
	{
		stradd(&cVar0, "CUTSCENE", 32);
	}
	else if (bParam0 == 105)
	{
		stradd(&cVar0, "FADE OUT", 32);
	}
	else if (bParam0 == 106)
	{
		stradd(&cVar0, "COMPLETE", 32);
	}
	return;
}

int Function_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA541 / 42305
{
	bool bVar0;
	bool bVar1;
	
	if (((((iParam0 > 0 || iParam1 > 0) || iParam2 > 0) || iParam3 > 0) || iParam4 > 0) || iParam5 > 0)
	{
		return 0;
	}
	bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
	bVar1 = MAKE_TIME_OF_DAY(iParam3, iParam4, iParam5);
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if (IS_LATER_THAN(GET_TIME_OF_DAY(), bVar0) && IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar1))
		{
			SET_TIME_ACCELERATION(0.0f);
			return 1;
		}
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), bVar1))
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return 0;
}

void Function_346() //Position: 0xA5C6 / 42438
{
	if (iLocal_642)
	{
		iLocal_642 = 0;
		Function_735(20, 4294967295);
	}
	switch (iLocal_373)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_603();
			}
			break;
		
		case 0x00000000:
			Function_557();
			break;
		
		case 0x00000001:
			Function_545();
			break;
		
		case 0x00000002:
			Function_540();
			break;
		
		case 0x00000003:
			Function_445();
			break;
		
		case 0x00000065:
			Function_347();
			break;
	}
	return;
}

void Function_347() //Position: 0xA632 / 42546
{
	switch (iLocal_374)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_330(&Global_78578 + 96);
			}
			Function_443(&uLocal_585, 3, 0, 4294967295, 4294967295);
			if (SQUAD_IS_VALID(Local_622.f_68))
			{
				SQUAD_SET_FACTION(Local_622.f_68, 20);
				Function_442(Local_622.f_68);
				SQUAD_GOALS_CLEAR(Local_622.f_68);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_622.f_68, 0, 1, 4294967295);
				TASK_FLEE_ACTORSET(false, Function_441(), -1.0f, -1.0f, 0, 0, 0);
			}
			UI_HIDE("RacePosition");
			UI_EXIT("RacePosition");
			if (IS_OBJECT_VALID(bLocal_655))
			{
				DESTROY_OBJECT(bLocal_655);
			}
			Function_26(&bLocal_420, 1);
			NET_LOG(bLocal_559, "Mission StageFinal", "Transitioning to GID_CUTSCENE", false, false, false, false);
			if (iLocal_560)
			{
				Function_344(106);
			}
			else
			{
				Function_344(106);
			}
			break;
		
		case 0x0000006A:
			Function_409();
			if (Function_303(&bLocal_420))
			{
				Function_408(&bLocal_420, "mp_you_won", 0, 0, 0, 0);
				Function_407("MPCOOP_LASTOBJMISSCOMPLETE", 0);
				Function_331(&bLocal_420, 43042);
				Function_344(0);
				Function_348(&bLocal_420, "FTR_MISSION_COMPLETE_SONG_01");
				Function_342(&bLocal_420, 1, 0, 0);
				Function_314(&bLocal_420);
			}
			NET_LOG(bLocal_559, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", false, false, false, false);
			break;
	}
	return;
}

void Function_348(var uParam0, var uParam1) //Position: 0xA816 / 43030
{
	uParam0->f_40 = uParam1;
	return;
}

int Function_349() //Position: 0xA822 / 43042
{
	switch (iLocal_374)
	{
		case 0x00000000:
		case 0x00000069:
			Function_405();
			Function_344(3);
			break;
		
		case 0x00000003:
			if (Function_351())
			{
				Function_350();
				return 1;
			}
			break;
	}
	return 0;
}

void Function_350() //Position: 0xA85B / 43099
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_CUTSCENE_MODE(0);
	return;
}

bool Function_351() //Position: 0xA868 / 43112
{
	switch (Local_382)
	{
		case 0x000003E8:
			if (Function_404(&uLocal_681))
			{
				iLocal_688 = 15;
				Function_403(&Local_382 + 4);
				Function_398();
				Local_382.f_16 = Function_394(Local_70, 0, Local_70, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_382.f_16))
				{
				}
				else
				{
					LOG_ERROR("PikesBasinMP_CO_cutsceneFinal - Failed to create PikesBasinMP_CO_cutsceneFinal_cutscene");
				}
				Local_382 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_382.f_16), false))
			{
				Function_393(Global_34573, 1, 1);
				Local_382 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Local_382 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_379(1003, 1, 0x3f800000))
			{
				Function_378();
				Function_377(Local_70.f_572);
				Function_375(Local_70.f_1132, 1);
				Function_371();
				Local_382 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (Function_336(&Local_382 + 4) < 2.0f)
			{
				DECOR_SET_BOOL(Local_70, "__CameraReady", true);
				Local_382 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_354(&uLocal_681, 47159) && GET_CUTSCENEOBJECT_SEQUENCE(Local_382.f_16) != 2)
			{
				Function_403(&Local_382 + 4);
				Function_353();
				Local_382 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_190(1))
			{
				Function_393(Global_34573, 0, 1);
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_352();
				HUD_TIMER_DISPLAY(0);
				if (IS_OBJECT_VALID(Local_382.f_16))
				{
					DESTROY_OBJECT(Local_382.f_16);
				}
				Local_382 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_382 = 1104;
			}
			break;
	}
	return 0;
}

void Function_352() //Position: 0xAA53 / 43603
{
	Function_47(2, 0, 1, 0, 1, 0, 0, 1, 1, 1);
	return;
}

void Function_353() //Position: 0xAA66 / 43622
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_354(int iParam0, int iParam1) //Position: 0xAA80 / 43648
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
				Function_368(iParam0);
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (bVar1)
			{
				if (Function_365(iParam0))
				{
					iParam0->f_20 = (fVar0 + 3.3f);
				}
				*iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bVar1)
			{
				Function_363(iParam0->f_24, 0);
				iParam0->f_12 = 4294967295;
				iParam0->f_16 = 4294967295;
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (bVar1)
			{
				if (Function_362(iParam0))
				{
					bVar2 = Function_361(iParam0->f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_360(iParam0->f_12)), I2STR(bVar2), false);
					Function_359("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					iParam0->f_20 = (fVar0 + 1.8f);
					*iParam0 = 8;
					iParam0->f_24 = (iParam0->f_24 + bVar2);
				}
				else
				{
					iParam0->f_20 = (fVar0 + 0.0f);
					if (Function_358() >= 0)
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
				Function_363(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				*iParam0 = 7;
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_12 <= Function_358())
			{
				if (bVar1)
				{
					Function_357(iParam0);
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
				Function_363(iParam0->f_24, 0);
				iParam0->f_20 = (fVar0 + 1.0f);
				iParam0->f_12++;
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000D:
			if (bVar1)
			{
				Function_363(iParam0->f_24, 1);
				iParam0->f_20 = (fVar0 + 2.5f);
				*iParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bVar1)
			{
				Function_356(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_317(1), "Unlock_Silver"))
				{
					*iParam0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_317(1), "Unlock_Adv"))
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
				Function_355(1);
				iParam0->f_20 = (fVar0 + 2.5f);
				if (DECOR_CHECK_EXIST(Function_317(1), "Unlock_Adv"))
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
				Function_355(0);
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

void Function_355(bool bParam0) //Position: 0xAFDA / 45018
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_359("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_359("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_356(bool bParam0) //Position: 0xB06B / 45163
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_335(&iVar2, &iVar0, &iVar1);
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
	Function_359(bVar3);
	return;
}

void Function_357(var uParam0) //Position: 0xB190 / 45456
{
	bool bVar0;
	int iVar1;
	
	Function_321(uParam0->f_12, &iVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(iVar1), I2STR(bVar0), false);
	Function_359("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	uParam0->f_24 = (uParam0->f_24 + bVar0);
	return;
}

int Function_358() //Position: 0xB226 / 45606
{
	return Function_323();
}

void Function_359(bool bParam0) //Position: 0xB22F / 45615
{
	UI_SET_TEXT("MPSplashItem.s1", bParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_360(int iParam0) //Position: 0xB289 / 45705
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

int Function_361(int iParam0) //Position: 0xB42D / 46125
{
	return Function_327(iParam0);
}

bool Function_362(int iParam0) //Position: 0xB438 / 46136
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
			iVar1 = Function_361(bVar0);
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

void Function_363(bool bParam0, bool bParam1) //Position: 0xB4B2 / 46258
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
	Function_364(1);
	return;
}

void Function_364(bool bParam0) //Position: 0xB585 / 46469
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (bParam0)
	{
		Function_359("Common_Null");
	}
	return;
}

bool Function_365(int iParam0) //Position: 0xB60A / 46602
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_188(&Global_78578 + 96))
	{
		fVar1 = Function_184(&Global_78578 + 96);
	}
	Var2 = { StackVal, StackVal, StackVal, Function_367(fVar1) };
	iVar0 = Function_366(fVar1);
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

var Function_366(float fParam0) //Position: 0xB77E / 46974
{
	int iVar0;
	int iVar1;
	
	if (Function_333() >= 4294967295)
	{
		iVar1 = Function_326(fParam0);
		if (iVar1 >= 4294967295)
		{
			Function_324(iVar1, &fParam0, &iVar0);
		}
	}
	return iVar0;
}

struct<16> Function_367(var uParam0) //Position: 0xB7A3 / 47011
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

void Function_368(int iParam0) //Position: 0xB814 / 47124
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	Function_335(&iVar2, &iVar0, &bVar1);
	if (iVar0 >= 4294967295)
	{
		Function_319(iVar0, &iVar2, iParam0 + 8, bVar1);
	}
	return;
}

int Function_369() //Position: 0xB837 / 47159
{
	switch (iLocal_688)
	{
		case 0x0000000F:
			if (Function_336(&Local_382 + 4) < 2.0f)
			{
				Function_370();
				iLocal_688 = 25;
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

void Function_370() //Position: 0xB876 / 47222
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Therd_FinalScene_v1_AA", "Therd_FinalScene_v1_AA", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_371() //Position: 0xB8D6 / 47318
{
	SQUAD_GOALS_CLEAR(Local_70.f_308);
	Function_442(Local_70.f_308);
	SQUAD_GOALS_CLEAR(Local_591.f_44);
	Function_442(Local_591.f_44);
	SQUAD_GOALS_CLEAR(Local_591.f_48);
	Function_442(Local_591.f_48);
	SQUAD_GOALS_CLEAR(Local_591.f_52);
	Function_442(Local_591.f_52);
	SQUAD_GOALS_CLEAR(Local_591.f_56);
	Function_442(Local_591.f_56);
	Function_374(Local_591.f_44, Local_70.f_308);
	Function_374(Local_591.f_48, Local_70.f_308);
	Function_374(Local_591.f_52, Local_70.f_308);
	Function_374(Local_591.f_56, Local_70.f_308);
	Function_372(Local_70.f_308, Local_70.f_1168, 5, 1.0f, 0.0f, 1);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_70.f_308, false, Local_70.f_580, 1, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_308, 0, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_70.f_580, -1.0f);
	return;
}

void Function_372(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0xB998 / 47512
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	struct<5> Var9;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_247(bParam1);
			vVar3 = { StackVal, StackVal, Function_247(bParam1) };
			Function_268(bParam1);
			Var9 = { StackVal, StackVal, Function_268(bParam1) };
			vVar6 = { StackVal, StackVal, vVar3 };
			vVar6.f_4 = (vVar6.y + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						vVar6.x = vVar3.x;
						vVar6.f_8 = (vVar6.z + fParam3);
					}
					if (bParam5)
					{
						Var9.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_373(StackVal, StackVal, StackVal, bVar2, vVar6, 1, 1, 1);
					iVar1++;
					vVar6.x = (vVar6.x + fParam3);
				}
				bVar0++;
			}
		}
	}
}

void Function_373(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xBA4C / 47692
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
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
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_374(bool bParam0, bool bParam1) //Position: 0xBB05 / 47877
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
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			SQUAD_JOIN(bVar1, bParam1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_375(bool bParam0, bool bParam1) //Position: 0xBB55 / 47957
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
	bVar6 = Function_376(GET_LOCAL_SLOT());
	bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bParam0);
	if (IS_OBJECT_VALID(bVar7))
	{
		Function_247(bVar7);
		vVar0 = { StackVal, StackVal, Function_247(bVar7) };
		Function_268(bVar7);
		vVar3 = { StackVal, StackVal, Function_268(bVar7) };
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
					Function_229(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1);
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

var Function_376(int iParam0) //Position: 0xBD03 / 48387
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

void Function_377(bool bParam0) //Position: 0xBD3E / 48446
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, bVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(bVar1) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
					{
						if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar2)))
						{
							DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(bVar2));
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(bVar1);
		}
	}
	return;
}

void Function_378() //Position: 0xBDD9 / 48601
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

bool Function_379(bool bParam0, bool bParam1, float fParam2) //Position: 0xBE08 / 48648
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_392(bParam0);
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
	if (Function_391(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_390(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_389(bParam0, iVar6, &uVar7))
	{
		if (Function_388())
		{
			if (!Function_387(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_386(&Var0, 1);
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
				if (Function_380(bParam0))
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

bool Function_380(int iParam0) //Position: 0xC076 / 49270
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_385(iVar0))
		{
			iVar1 = Function_381(iVar0);
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

int Function_381(int iParam0) //Position: 0xC0B9 / 49337
{
	int iVar0;
	
	Function_384(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_383(&iVar0, iParam0);
	}
	return Function_382(&iVar0);
}

int Function_382(int iParam0) //Position: 0xC0E0 / 49376
{
	return *iParam0;
}

void Function_383(var uParam0, int iParam1) //Position: 0xC0E9 / 49385
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_384(int iParam0) //Position: 0xC0FC / 49404
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_385(int iParam0) //Position: 0xC10A / 49418
{
	return Function_272(iParam0);
}

void Function_386(var uParam0, bool bParam1) //Position: 0xC115 / 49429
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

bool Function_387(bool bParam0) //Position: 0xC12F / 49455
{
	return Function_45(*bParam0, 2);
}

bool Function_388() //Position: 0xC13C / 49468
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

bool Function_389(int iParam0, var uParam1, int iParam2) //Position: 0xC15A / 49498
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
		if (Function_385(iVar0))
		{
			iVar1 = Function_381(iVar0);
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

void Function_390(int iParam0, bool bParam1) //Position: 0xC1AB / 49579
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

bool Function_391(int iParam0) //Position: 0xC1C5 / 49605
{
	return Function_45(*iParam0, 1);
}

void Function_392(int iParam0) //Position: 0xC1D2 / 49618
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_24(&uVar1);
	if (Function_382(&uVar1) != bVar0)
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
		Function_386(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

void Function_393(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC2CF / 49871
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

var Function_394(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC369 / 50025
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PikesBasinMP_CO_cutsceneFinal", 2, 1);
	}
	Function_395(&bVar0, uParam2);
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

void Function_395(var uParam0, char* cParam1) //Position: 0xC3F4 / 50164
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_397(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_396(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_396(int iParam0) //Position: 0xC453 / 50259
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2177.029f, 18.64375f, 2517.381f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.010612f, -2.294652f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_397(var uParam0) //Position: 0xC4B6 / 50358
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2177.508f, 18.64582f, 2516.915f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.04133f, -2.786718f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_398() //Position: 0xC519 / 50457
{
	Function_399(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_399(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xC52E / 50478
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
				Function_206(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_52(), 2, Function_206(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_402()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_402()));
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
	if (Function_401(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_400(0x4000000);
	}
	if (Function_401(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_400(0x8000000);
	}
}

void Function_400(int iParam0) //Position: 0xC7DC / 51164
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

bool Function_401(int iParam0) //Position: 0xC810 / 51216
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_402() //Position: 0xC82C / 51244
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

void Function_403(int iParam0) //Position: 0xC8AB / 51371
{
	Function_339(iParam0, 0.0f);
	return;
}

bool Function_404(int iParam0) //Position: 0xC8B7 / 51383
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

void Function_405() //Position: 0xC99C / 51612
{
	Function_406();
	Function_164(0);
	Function_176(&Local_622, 1);
	return;
}

void Function_406() //Position: 0xC9B0 / 51632
{
	*(&Local_389 + 8) = { 0.0f, 0.0f, 0.0f };
	*(&Local_389 + 20) = { 0.0f, 0.0f, 0.0f };
	Local_389.f_32 = 8.0f;
	Local_389.f_36 = "";
	Local_389.f_52 = 0;
	Local_389.f_72 = 1;
	Local_389.f_92 = 1;
	Local_389.f_76 = 1;
	Local_389.f_60 = 1;
	Local_389.f_64 = 1;
	Local_389.f_84 = Local_382;
	Local_389.f_68 = 0;
	Local_389.f_88 = 0;
	Local_389.f_96 = 1;
	Local_382.f_24 = 0;
	Function_46(4096, 0);
	Function_46(8192, 0);
	return;
}

void Function_407(bool bParam0, bool bParam1) //Position: 0xCA2E / 51758
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

void Function_408(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCA6E / 51822
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

void Function_409() //Position: 0xCADD / 51933
{
	if (Function_155())
	{
		if (iLocal_560)
		{
			Function_151(16, iLocal_589);
			UPDATE_PROFILE_STAT("CoopPIKAdvPassed", 1.0f, 0);
		}
		Function_410(iLocal_560, 90);
	}
	else
	{
		if (iLocal_560)
		{
			Function_151(16, iLocal_589);
			UPDATE_PROFILE_STAT("CoopPIKPassed", 1.0f, 0);
		}
		Function_410(iLocal_560, 36);
	}
	return;
}

void Function_410(bool bParam0, int iParam1) //Position: 0xCB45 / 52037
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	uVar2 = Function_315(bParam0, &bVar1, &iVar0);
	PLAYSTAT_INT("Deaths", Function_440(GET_LOCAL_SLOT()));
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_150(29), Function_439((Function_153(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_329(iVar0);
		}
		Function_9(&Global_84364, Function_438(iParam1));
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
		Function_437(5);
		Function_436(iParam1, bVar1);
		Function_434(iParam1);
		Function_430(&Global_50170, 58, 0, 0, 250.0f, 5);
		Function_430(&Global_50170, 60, 2, 0, 500.0f, 5);
		if (Global_50170[6022].f_28 > 1)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(58))
			{
				AWARD_ACHIEVEMENT(58);
			}
		}
		Function_430(&Global_50170, 59, 1, 0, 500.0f, 5);
		Function_430(&Global_50170, 62, 3, 0, 250.0f, 5);
		Function_430(&Global_50170, 61, 4, 0, 250.0f, 5);
		Function_430(&Global_50170, 63, 5, 0, 250.0f, 5);
		Function_430(&Global_50170, 64, 6, 0, 250.0f, 5);
		Function_429(iParam1);
		Function_423(iParam1);
		Function_430(&Global_50170, 161, 0, 1, 250.0f, 5);
		Function_430(&Global_50170, 163, 2, 1, 500.0f, 5);
		Function_430(&Global_50170, 162, 1, 1, 500.0f, 5);
		Function_430(&Global_50170, 165, 3, 1, 250.0f, 5);
		Function_430(&Global_50170, 164, 4, 1, 250.0f, 5);
		Function_430(&Global_50170, 166, 5, 1, 250.0f, 5);
		Function_430(&Global_50170, 167, 6, 1, 250.0f, 5);
		Function_430(&Global_50170, 168, 7, 1, 250.0f, 5);
		if (Global_84364 & 63 == 63)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
			{
				AWARD_ACHIEVEMENT(50);
			}
			Function_421(38);
			if (!Function_45(Global_84364.f_740, 1))
			{
				Function_10(&Global_84364 + 740, 1);
				Function_420();
				DECOR_SET_BOOL(Function_317(1), "Unlock_Adv", true);
			}
		}
		if (iVar0 != 2 || iVar0 != 1)
		{
			if (!Function_419(1))
			{
				Function_418(1);
			}
			if (Function_416(iParam1))
			{
				DECOR_SET_BOOL(Function_317(1), "Unlock_Silver", true);
			}
			if (iVar0 == 2)
			{
				Function_415(iParam1);
				Function_414(iParam1);
			}
		}
		Function_413();
		Function_412();
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
		{
			if (Function_320(3) == 2)
			{
				AWARD_ACHIEVEMENT(51);
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(54))
		{
			bVar3 = false;
			while (bVar3 <= 4)
			{
				if (Function_272(bVar3))
				{
					iVar4 = (iVar4 + Function_411(12, bVar3));
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
		Function_329(4294967295);
	}
	return;
}

int Function_411(int iParam0, bool bParam1) //Position: 0xCE0B / 52747
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
	if (!Function_272(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_412() //Position: 0xCE79 / 52857
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

void Function_413() //Position: 0xCEBE / 52926
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

int Function_414(int iParam0) //Position: 0xCF03 / 52995
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

int Function_415(int iParam0) //Position: 0xD015 / 53269
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

bool Function_416(int iParam0) //Position: 0xD127 / 53543
{
	switch (iParam0)
	{
		case 0x00000024:
		case 0x0000005A:
			if (!Function_45((*&Global_84364 + 712)[0], 1))
			{
				Function_10(&Global_84364 + 712[0], 1);
				Function_417(0);
				return 1;
			}
			break;
		
		case 0x00000021:
		case 0x0000002F:
			if (!Function_45((*&Global_84364 + 712)[1], 1))
			{
				Function_10(&Global_84364 + 712[1], 1);
				Function_417(1);
				return 1;
			}
			break;
		
		case 0x00000026:
		case 0x0000005B:
			if (!Function_45((*&Global_84364 + 712)[2], 1))
			{
				Function_10(&Global_84364 + 712[2], 1);
				Function_417(2);
				return 1;
			}
			break;
		
		case 0x00000022:
		case 0x00000058:
			if (!Function_45((*&Global_84364 + 712)[3], 1))
			{
				Function_10(&Global_84364 + 712[3], 1);
				Function_417(3);
				return 1;
			}
			break;
		
		case 0x00000027:
		case 0x0000005C:
			if (!Function_45((*&Global_84364 + 712)[4], 1))
			{
				Function_10(&Global_84364 + 712[4], 1);
				Function_417(4);
				return 1;
			}
			break;
		
		case 0x00000023:
		case 0x00000059:
			if (!Function_45((*&Global_84364 + 712)[5], 1))
			{
				Function_10(&Global_84364 + 712[5], 1);
				Function_417(5);
				return 1;
			}
			break;
		
		default:
			return 0;
	}
	return 0;
}

void Function_417(int iParam0) //Position: 0xD275 / 53877
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

void Function_418(int iParam0) //Position: 0xD618 / 54808
{
	Function_9(&Global_83864 + 1256, iParam0);
	return;
}

bool Function_419(bool bParam0) //Position: 0xD62A / 54826
{
	return Function_12(Global_83864.f_1256, bParam0);
}

void Function_420() //Position: 0xD63C / 54844
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

void Function_421(int iParam0) //Position: 0xD792 / 55186
{
	if (!Function_45((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_422(iParam0);
		Function_10(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_422(int iParam0) //Position: 0xD7BF / 55231
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

void Function_423(int iParam0) //Position: 0xD7FC / 55292
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_428(iParam0)], 1);
	if (bVar0)
	{
		if (Function_153(3) == 0)
		{
			switch (iParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_424(&Global_50170, 87, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_424(&Global_50170, 101, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_424(&Global_50170, 115, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_424(&Global_50170, 129, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_424(&Global_50170, 143, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_424(&Global_50170, 157, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_424(var uParam0, int iParam1, float fParam2, int iParam3) //Position: 0xD8D9 / 55513
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_425(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, 1, 1, fParam2, iParam3, 0);
			break;
	}
}

void Function_425(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, int iParam8) //Position: 0xD91B / 55579
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_148(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_427(iParam0);
		Function_426(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
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

void Function_426(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xD982 / 55682
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

var Function_427(int iParam0) //Position: 0xD9FF / 55807
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

int Function_428(int iParam0) //Position: 0xDD4D / 56653
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

void Function_429(bool bParam0) //Position: 0xDDC1 / 56769
{
	bool bVar0;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_428(bParam0)], 1);
	if (bVar0)
	{
		if (Function_150(12) == 0)
		{
			switch (bParam0)
			{
				case 0x00000024:
				case 0x0000005A:
					Function_424(&Global_50170, 86, 50.0f, 5);
					break;
				
				case 0x00000021:
				case 0x0000002F:
					Function_424(&Global_50170, 100, 50.0f, 5);
					break;
				
				case 0x00000026:
				case 0x0000005B:
					Function_424(&Global_50170, 114, 50.0f, 5);
					break;
				
				case 0x00000022:
				case 0x00000058:
					Function_424(&Global_50170, 128, 50.0f, 5);
					break;
				
				case 0x00000027:
				case 0x0000005C:
					Function_424(&Global_50170, 142, 50.0f, 5);
					break;
				
				case 0x00000023:
				case 0x00000059:
					Function_424(&Global_50170, 156, 50.0f, 5);
					break;
				
				default:
					return;
				}
			}
	}
	return;
}

void Function_430(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5) //Position: 0xDE9F / 56991
{
	bool bVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				if ((Function_433(iVar1, 0, iParam2) && !bParam3) && !Function_432(iVar1, 0, iParam2))
				{
					uParam0[iParam122]->f_28++;
					Function_431(iVar1, 0, iParam2);
				}
				else if ((Function_433(iVar1, 1, iParam2) && !Function_432(iVar1, 1, iParam2)) && bParam3)
				{
					uParam0[iParam122]->f_28++;
					Function_431(iVar1, 1, iParam2);
				}
				iVar1++;
			}
			bVar0 = uParam0[iParam122]->f_28;
			Function_425(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, 6, fParam4, iParam5, 0);
			break;
	}
}

void Function_431(int iParam0, int iParam1, int iParam2) //Position: 0xDF66 / 57190
{
	Function_10(&Global_55869[iParam037][iParam118] + 36[iParam2], 1);
	return;
}

bool Function_432(int iParam0, int iParam1, int iParam2) //Position: 0xDF81 / 57217
{
	return Function_45((*&Global_55869[iParam037][iParam118] + 36)[iParam2], 1);
}

bool Function_433(int iParam0, int iParam1, int iParam2) //Position: 0xDF9C / 57244
{
	return Function_45(Global_55869[iParam037][iParam118][iParam2], 1);
}

void Function_434(int iParam0) //Position: 0xDFB5 / 57269
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
	Function_435(iVar0, iVar2, 0);
	Function_435(iVar0, iVar2, iVar1);
	if (Function_150(12) == 0)
	{
		Function_435(iVar0, iVar2, 2);
	}
	if (Function_153(3) != 0 && Function_150(12) != 0)
	{
		Function_435(iVar0, iVar2, 1);
	}
	return;
}

void Function_435(int iParam0, int iParam1, int iParam2) //Position: 0xE0EF / 57583
{
	Function_10(&(Global_55869[iParam037][iParam118][iParam2]), 1);
	return;
}

void Function_436(int iParam0, float fParam1) //Position: 0xE108 / 57608
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_45((*&Global_84364 + 712)[Function_428(iParam0)], 1);
	bVar1 = Function_45(Global_84364.f_740, 1);
	if (bVar0)
	{
		switch (iParam0)
		{
			case 0x00000024:
			case 0x0000005A:
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 77, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 78, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_424(&Global_50170, 79, 500.0f, 5);
				}
				break;
			
			case 0x00000021:
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_424(&Global_50170, 91, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 92, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_424(&Global_50170, 93, 500.0f, 5);
				}
				break;
			
			case 0x00000026:
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 105, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_424(&Global_50170, 106, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 107, 500.0f, 5);
				}
				break;
			
			case 0x00000022:
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_424(&Global_50170, 119, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_424(&Global_50170, 120, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_424(&Global_50170, 121, 500.0f, 5);
				}
				break;
			
			case 0x00000027:
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 133, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_424(&Global_50170, 134, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 135, 500.0f, 5);
				}
				break;
			
			case 0x00000023:
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_424(&Global_50170, 147, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_424(&Global_50170, 148, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_424(&Global_50170, 149, 500.0f, 5);
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
					Function_424(&Global_50170, 169, 50.0f, 0);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 170, 250.0f, 1);
				}
				if (fParam1 > 360.0f)
				{
					Function_424(&Global_50170, 171, 500.0f, 5);
				}
				break;
			
			case 0x0000002F:
				if (fParam1 > 1200.0f)
				{
					Function_424(&Global_50170, 172, 50.0f, 0);
				}
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 173, 250.0f, 1);
				}
				if (fParam1 > 540.0f)
				{
					Function_424(&Global_50170, 174, 500.0f, 5);
				}
				break;
			
			case 0x0000005B:
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 175, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_424(&Global_50170, 176, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 177, 500.0f, 5);
				}
				break;
			
			case 0x00000058:
				if (fParam1 > 900.0f)
				{
					Function_424(&Global_50170, 178, 50.0f, 0);
				}
				if (fParam1 > 540.0f)
				{
					Function_424(&Global_50170, 179, 250.0f, 1);
				}
				if (fParam1 > 420.0f)
				{
					Function_424(&Global_50170, 180, 500.0f, 5);
				}
				break;
			
			case 0x0000005C:
				if (fParam1 > 720.0f)
				{
					Function_424(&Global_50170, 181, 50.0f, 0);
				}
				if (fParam1 > 600.0f)
				{
					Function_424(&Global_50170, 182, 250.0f, 1);
				}
				if (fParam1 > 480.0f)
				{
					Function_424(&Global_50170, 183, 500.0f, 5);
				}
				break;
			
			case 0x00000059:
				if (fParam1 > 1320.0f)
				{
					Function_424(&Global_50170, 184, 50.0f, 0);
				}
				if (fParam1 > 1200.0f)
				{
					Function_424(&Global_50170, 185, 250.0f, 1);
				}
				if (fParam1 > 1080.0f)
				{
					Function_424(&Global_50170, 186, 500.0f, 5);
				}
				break;
			
			default:
				return;
			}
	}
	return;
}

void Function_437(int iParam0) //Position: 0xE55D / 58717
{
	Function_9(&Global_83864 + 1252, iParam0);
	return;
}

int Function_438(int iParam0) //Position: 0xE56F / 58735
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

var Function_439(int iParam0, bool bParam1) //Position: 0xE5D4 / 58836
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

int Function_440(var uParam0) //Position: 0xE947 / 59719
{
	return Function_411(12, uParam0);
}

var Function_441() //Position: 0xE954 / 59732
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

void Function_442(bool bParam0) //Position: 0xE9C0 / 59840
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

void Function_443(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE9F2 / 59890
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_444(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_444(int iParam0) //Position: 0xEA16 / 59926
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

void Function_445() //Position: 0xEF69 / 61289
{
	bool bVar0;
	
	if (Function_538())
	{
		Function_494();
	}
	switch (iLocal_374)
	{
		case 0x00000000:
			Function_292(512);
			if (Function_493("PIKNoEnemies"))
			{
				iLocal_697 = 0;
			}
			iLocal_589 = Function_490();
			Function_468();
			iLocal_705 = 0;
			iLocal_583 = 0;
			if (NET_IS_SESSION_HOST())
			{
				if (Function_493("PIKInvincibull"))
				{
					Function_735(20, 4294967295);
				}
			}
			if (IS_OBJECT_VALID(bLocal_657))
			{
				DESTROY_OBJECT(bLocal_657);
			}
			if (SQUAD_IS_VALID(Local_591.f_48))
			{
				SQUAD_GOALS_CLEAR(Local_591.f_48);
				Function_442(Local_591.f_48);
			}
			*(&Local_591 + 28) = { 0.0f, 0.0f, 0.0f };
			if (SQUAD_IS_VALID(Local_591.f_52))
			{
				SQUAD_GOALS_CLEAR(Local_591.f_52);
				Function_442(Local_591.f_52);
			}
			uLocal_647[0] = Function_466("pikesBasin", "placement03", 1);
			uLocal_647[1] = Function_466("pikesBasin", "placement03", 2);
			if (IS_DOOR_VALID(uLocal_647[0]))
			{
				Function_465(uLocal_647[0], 0);
				OPEN_DOOR_DIRECTION(uLocal_647[0], true);
			}
			if (IS_DOOR_VALID(uLocal_647[1]))
			{
				Function_465(uLocal_647[1], 0);
				OPEN_DOOR_DIRECTION(uLocal_647[1], false);
			}
			Function_338(&iLocal_414);
			Function_338(&iLocal_691);
			if (SQUAD_IS_VALID(Local_591.f_56))
			{
				SQUAD_GOALS_CLEAR(Local_591.f_56);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_70 + 1144, 3.0f, 2);
				TASK_WANDER_IN_VOLUME(false, Local_70.f_580, -1.0f);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_591.f_56, 0, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
			Function_9(&iLocal_641, 8192);
			Function_464();
			Function_165(&Local_70 + 272, 0, 0);
			Function_165(&Local_70 + 276, 0, 0);
			Function_165(&Local_70 + 280, 0, 0);
			Function_165(&Local_70 + 284, 0, 0);
			Function_165(&Local_70 + 288, 0, 0);
			Function_165(&Local_70 + 292, 0, 0);
			Function_165(&Local_70 + 296, 0, 0);
			Function_165(&Local_70 + 300, 0, 0);
			Function_292(512);
			Function_461();
			Function_460(Local_70.f_308, 425, 4294967295, 0, 3212836864, 0x3f800000);
			Function_458();
			NET_LOG(bLocal_559, "Mission Stage02", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_344(3);
			break;
		
		case 0x00000003:
			if (Function_456())
			{
				Function_344(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_455();
				UI_SHOW("RacePosition");
				bLocal_584 = "PIK_CO_stage02_obj01";
				Function_453(bLocal_584, 0x40f00000, 1, 2, 0);
				Function_451(Local_70, (*&Local_70 + 432)[0], &bLocal_656);
				Function_344(8);
			}
			break;
		
		case 0x00000008:
			if (Function_12(iLocal_641, 1024))
			{
				if (Function_379(101, 1, 0x3f800000))
				{
					Function_338(&iLocal_417);
					HUD_FADE_OUT(2.0f, 1f, 1);
					UI_HIDE("RacePosition");
					UI_EXIT("RacePosition");
					Function_344(106);
				}
			}
			else if (Function_449(Local_70.f_580) > 5)
			{
				Function_735(9, 4294967295);
				if (Function_45((*&Global_84364 + 712)[0], 1))
				{
					if (iLocal_589 > 10)
					{
						Function_424(&Global_50170, 88, 50.0f, 0);
					}
					if (iLocal_589 > 15)
					{
						Function_424(&Global_50170, 89, 250.0f, 1);
					}
					if (iLocal_589 > 20)
					{
						Function_424(&Global_50170, 90, 500.0f, 5);
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Function_448(bLocal_656);
				UI_HIDE("RacePosition");
				UI_EXIT("RacePosition");
				iLocal_705 = 3;
				Function_446();
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_373 = 101;
				Function_344(0);
			}
			break;
	}
	return;
}

void Function_446() //Position: 0xF359 / 62297
{
	if (IS_OBJECT_VALID(bLocal_656))
	{
		Function_447(bLocal_656);
	}
	return;
}

void Function_447(bool bParam0) //Position: 0xF36E / 62318
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

void Function_448(bool bParam0) //Position: 0xF3F8 / 62456
{
	if (IS_OBJECT_VALID(bParam0))
	{
		Function_447(bParam0);
	}
	return;
}

int Function_449(bool bParam0) //Position: 0xF40B / 62475
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Function_450(Local_591.f_44, bParam0);
	iVar0 = (iVar0 + Function_450(Local_591.f_48, bParam0));
	iVar0 = (iVar0 + Function_450(Local_591.f_52, bParam0));
	iVar0 = (iVar0 + Function_450(Local_591.f_56, bParam0));
	return iVar0;
}

int Function_450(bool bParam0, bool bParam1) //Position: 0xF44F / 62543
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_451(int iParam0, bool bParam1, bool bParam2) //Position: 0xF4AC / 62636
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bParam1), &vVar0);
	if (IS_OBJECT_VALID(*bParam2))
	{
		DESTROY_OBJECT(*bParam2);
	}
	*bParam2 = Function_452(StackVal, StackVal, iParam0, Function_52(), vVar0, 0.0f, 0.0f, 0.0f, Function_41(), 1.5f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
	return;
}

var Function_452(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xF4F8 / 62712
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
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

void Function_453(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xF5C3 / 62915
{
	if (!Function_286(16384, 1))
	{
		Function_454(bParam0, iParam1, bParam2, iParam3, bParam4, 0, 0, 0);
	}
}

void Function_454(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF5E6 / 62950
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
			Var0 = { StackVal, StackVal, StackVal, Function_282(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_455() //Position: 0xF66B / 63083
{
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("PIK_CO_herd_UI"), INT_TO_STRING(iLocal_589), INT_TO_STRING(20), false);
	UI_LABEL_SET_TEXT("RacePosition", "Generic_Dbuffer128_0");
	UI_REFRESH("RacePosition");
	return;
}

bool Function_456() //Position: 0xF6E6 / 63206
{
	switch (bLocal_694)
	{
		case 0x00000000:
			Function_457("PIK_CO_stage02_help1_return_herd", 5.0f, 1, 0, 2, 1);
			bLocal_694++;
			break;
		
		case 0x00000001:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_457("PIK_CO_stage02_help1_whistle_horse", 5.0f, 1, 0, 2, 1);
				bLocal_694++;
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_457("COOP_horse_whistle_help", 5.0f, 1, 0, 2, 1);
				bLocal_694++;
			}
			break;
		
		case 0x00000003:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_457(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF7C2 / 63426
{
	if (!Function_286(16384, 1))
	{
		Function_281(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	}
}

void Function_458() //Position: 0xF7E5 / 63461
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	SQUAD_GOALS_CLEAR(Local_70.f_308);
	Function_442(Local_70.f_308);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_70.f_308) - 1))
	{
		if (iVar1 == 4)
		{
			iVar1 = 0;
		}
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_308, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar2, 1);
			AI_SET_NAV_PATHFINDING_ENABLED(bVar2, 1);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar2, Function_459(iVar1), 2, 0, 0, 1, 0);
			iVar1++;
		}
		bVar0++;
	}
	return;
}

var Function_459(bool bParam0) //Position: 0xF857 / 63575
{
	switch (bParam0)
	{
		case 0x00000000:
			return Local_70.f_1196;
		
		case 0x00000001:
			return Local_70.f_1200;
		
		case 0x00000002:
			return Local_70.f_1204;
		
		case 0x00000003:
			return Local_70.f_1208;
		
		default:
	}
	return Local_70.f_1196;
}

void Function_460(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5) //Position: 0xF899 / 63641
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
				SET_BLIP_FLAG(bVar1, 4096, 0);
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
				SET_BLIP_FLAG(bVar1, 4096, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
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
		}
		bVar0++;
	}
}

void Function_461() //Position: 0xF961 / 63841
{
	Function_462();
	return;
}

void Function_462() //Position: 0xF96A / 63850
{
	bool bVar0;
	bool bVar1;
	
	Function_442(Local_591.f_44);
	SQUAD_GOALS_CLEAR(Local_591.f_44);
	Function_463(Local_591.f_44);
	Local_591.f_60 = UNK_0x48588CCB(Local_591.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_591.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_591.f_44, Local_591.f_60);
	}
	PRINTSTRING("loading flock data for HERDING_BEHAVIOR_TYPE_JOB_COW");
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 26, 0.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 8, 0.05f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 15, 0.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 16, 4.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 15, 0.25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 16, 6.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 8, 1.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 10, 0.1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 11, 0.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 0, 12, 0.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 10, 0.3f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 11, 0.5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 12, 0.5f);
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			SQUAD_FLOCK_ADD_EXTERNAL_ALERT(Local_591.f_44, Local_591.f_60, bVar1, 19.0f, 4.0f, 0);
			_SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(Local_591.f_44, Local_591.f_60, bVar1, 23.0f, 1.0f, 925353388, 925353388, 0);
			SQUAD_FLOCK_ADD_EXTERNAL_VELOCITY_MATCH(Local_591.f_44, Local_591.f_60, bVar1, 5.0f, 2.0f, 8.0f);
		}
		bVar0++;
	}
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_591.f_44, Local_591.f_60, Local_70.f_1192, 50.0f, 2.0f, 2.0f, 2.0f);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_591.f_44, Local_591.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_591.f_44, Local_591.f_60, 1);
	return;
}

void Function_463(bool bParam0) //Position: 0xFBC4 / 64452
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_464() //Position: 0xFC0B / 64523
{
	if (SQUAD_IS_VALID(Local_70.f_308))
	{
		SQUAD_SET_FACTION(Local_70.f_308, 20);
	}
	if (SQUAD_IS_VALID(Local_591.f_44))
	{
		SQUAD_SET_FACTION(Local_591.f_44, 20);
	}
	if (SQUAD_IS_VALID(Local_591.f_48))
	{
		SQUAD_SET_FACTION(Local_591.f_48, 20);
	}
	if (SQUAD_IS_VALID(Local_591.f_52))
	{
		SQUAD_SET_FACTION(Local_591.f_52, 20);
	}
	if (SQUAD_IS_VALID(Local_591.f_56))
	{
		SQUAD_SET_FACTION(Local_591.f_56, 20);
	}
	return;
}

void Function_465(bool bParam0, bool bParam1) //Position: 0xFC7A / 64634
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

int Function_466(var uParam0, int iParam1, int iParam2) //Position: 0xFCCB / 64715
{
	return Function_467(Global_29006, uParam0, iParam1, iParam2);
}

int Function_467(bool bParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xFCDD / 64733
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_204(bParam0))
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

void Function_468() //Position: 0xFD79 / 64889
{
	Function_482(StackVal, &Local_622, "pr", Local_70.f_1052, 477, 485, 9999, Local_658, 1, 1, 1);
	Function_469(&Local_622, 64953);
	return;
}

void Function_469(var uParam0, int iParam1) //Position: 0xFDAD / 64941
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_470(bool bParam0, var uParam1) //Position: 0xFDB9 / 64953
{
	bool bVar0;
	
	uParam1 = uParam1;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	Function_471(&bParam0, 9, 5, Local_658.f_24);
	SET_ACTOR_FACTION(bParam0, 19);
	ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(StackVal, false, 50.0f, 3, 0, 1);
	TASK_FOLLOW_OBJECT_AT_DISTANCE(StackVal, false, 30.0f, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_471(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xFE29 / 65065
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		switch (iParam3)
		{
			case 0x00000000:
				Function_481(*bParam0);
				Function_480(bParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 15, 1);
				Function_479(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000001:
				Function_481(*bParam0);
				Function_480(bParam0, 1.0f);
				Function_479(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000002:
				Function_478(*bParam0);
				Function_480(bParam0, 2.0f);
				Function_479(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000003:
				Function_474(*bParam0);
				Function_480(bParam0, 3.0f);
				Function_479(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000004:
				Function_474(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 60.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 125.0f, 1);
				Function_480(bParam0, 4.0f);
				Function_479(bParam0, bParam1, bParam2);
				break;
			
			case 0x00000005:
				Function_474(*bParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*bParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*bParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*bParam0, 1);
				Function_480(bParam0, 5.0f);
				Function_479(bParam0, bParam1, bParam2);
				break;
		}
		Function_472(bParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ASSAULT was passed an invalid actor");
	}
}

void Function_472(int iParam0) //Position: 0xFF85 / 65413
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
			if (Function_473(bVar1) >= 0)
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

int Function_473(bool bParam0) //Position: 0x100EE / 65774
{
	if (Function_302(bParam0))
	{
		if (Function_284(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_474(bool bParam0) //Position: 0x10110 / 65808
{
	Function_476(bParam0);
	Function_475(bParam0, 1);
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

void Function_475(bool bParam0, int iParam1) //Position: 0x10298 / 66200
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

void Function_476(bool bParam0) //Position: 0x102CB / 66251
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
	Function_477(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_477(var uParam0, bool bParam1) //Position: 0x1062F / 67119
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

void Function_478(bool bParam0) //Position: 0x10651 / 67153
{
	Function_476(bParam0);
	Function_475(bParam0, 1);
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

void Function_479(var uParam0, bool bParam1, bool bParam2) //Position: 0x107AB / 67499
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

void Function_480(var uParam0, float fParam1) //Position: 0x107DD / 67549
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

void Function_481(bool bParam0) //Position: 0x108A8 / 67752
{
	Function_476(bParam0);
	Function_475(bParam0, 1);
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

void Function_482(int iParam0, char* cParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x109E6 / 68070
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
		Function_488(iParam0);
		Function_487(iParam0, uParam2);
		iParam0->f_12 = uParam3;
		iParam0->f_16 = uParam4;
		iParam0->f_24 = uParam5;
		iParam0->f_28 = uParam6;
		iParam0->f_32 = 0;
		iParam0->f_36 = 0;
		iParam0->f_52 = uParam7;
		iParam0->f_56 = uParam8;
		iParam0->f_60 = uParam9;
		iParam0->f_64 = uParam10;
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_NPC", 32);
		iParam0->f_68 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		strcpy(&cVar16, cParam1, 32);
		stradd(&cVar16, "_Horse", 32);
		iParam0->f_72 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &cVar16));
		Function_483(iParam0 + 40, iParam0->f_52);
	}
}

void Function_483(bool bParam0, float fParam1) //Position: 0x10ADB / 68315
{
	if (!Function_188(bParam0))
	{
		Function_484(bParam0, fParam1);
	}
	return;
}

void Function_484(bool bParam0, float fParam1) //Position: 0x10AF1 / 68337
{
	Function_485(bParam0, -fParam1);
	return;
}

void Function_485(var uParam0, float fParam1) //Position: 0x10AFF / 68351
{
	Function_185();
	Function_486(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_486(var uParam0, int iParam1) //Position: 0x10B13 / 68371
{
	uParam0->f_4 = iParam1;
	Function_10(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_487(int iParam0, bool bParam1) //Position: 0x10B30 / 68400
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(StackVal))
	{
		DESTROY_OBJECTSET(StackVal);
	}
	iParam0->f_8 = CREATE_OBJECTSET_IN_LAYOUT("ew_spawnSet", *iParam0, 8, 1);
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

void Function_488(int iParam0) //Position: 0x10B95 / 68501
{
	Function_469(iParam0, 68516);
	return;
}

void Function_489(var uParam0, var uParam1) //Position: 0x10BA4 / 68516
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return;
}

int Function_490() //Position: 0x10BB2 / 68530
{
	return Function_491(Local_70.f_308, Local_591.f_44, Local_591.f_48, Local_591.f_52, Local_591.f_56, 0);
}

bool Function_491(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x10BD5 / 68565
{
	int iVar0;
	
	iVar0 = 0;
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = (iVar0 + Function_492(bParam0));
	}
	if (SQUAD_IS_VALID(bParam1))
	{
		iVar0 = (iVar0 + Function_492(bParam1));
	}
	if (SQUAD_IS_VALID(bParam2))
	{
		iVar0 = (iVar0 + Function_492(bParam2));
	}
	if (SQUAD_IS_VALID(bParam3))
	{
		iVar0 = (iVar0 + Function_492(bParam3));
	}
	if (SQUAD_IS_VALID(bParam4))
	{
		iVar0 = (iVar0 + Function_492(bParam4));
	}
	if (SQUAD_IS_VALID(bParam5))
	{
		iVar0 = (iVar0 + Function_492(bParam5));
	}
	return iVar0;
}

int Function_492(bool bParam0) //Position: 0x10C4E / 68686
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

bool Function_493(bool bParam0) //Position: 0x10C9E / 68766
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_494() //Position: 0x10CBD / 68797
{
	if (Function_198(Global_30668[2]))
	{
		Function_537(&uLocal_647);
	}
	else
	{
		iLocal_586 = 0;
	}
	if (Function_198(Global_30640[0]))
	{
		Function_536(&uLocal_650);
	}
	else
	{
		iLocal_587 = 0;
	}
	Function_534();
	Function_533();
	Function_529(&Local_591);
	Function_528(Local_591.f_44, Local_591.f_56, Local_70.f_576);
	if (Function_336(&iLocal_691) <= 0.2f)
	{
		Function_527(&Local_591, 1);
		Function_523(&Local_591, 0x41700000);
		Function_403(&iLocal_691);
		Function_522();
	}
	Function_520();
	Function_519();
	if (iLocal_697)
	{
		Function_517();
	}
	Function_516();
	if (Function_12(iLocal_641, 2))
	{
		Function_510(&Local_622);
		Function_509();
		Function_505();
	}
	if (iLocal_588 < 1 && iLocal_588 >= 13)
	{
		Function_504();
	}
	Function_501();
	if (Function_12(iLocal_641, 4))
	{
		Function_500();
	}
	if (Function_12(iLocal_641, 1))
	{
		Function_499();
	}
	Function_495(&iLocal_414, 1920.0f, bLocal_584, 4.0f, 2, 0);
	return;
}

int Function_495(int iParam0, float fParam1, bool bParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x10DA6 / 69030
{
	if (Function_336(iParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_14();
		}
		if (!Function_498())
		{
			Function_496(bParam2, fParam3, iParam4);
			Function_403(iParam0);
			return 1;
		}
		Function_339(iParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_496(bool bParam0, float fParam1, bool bParam2) //Position: 0x10DEB / 69099
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_497(bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_281(bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_454(bParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_497(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10E4A / 69194
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_282(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_498() //Position: 0x10EC1 / 69313
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_499() //Position: 0x10EEE / 69358
{
	switch (iLocal_705)
	{
		case 0x00000000:
			if (IS_OBJECT_VALID(bLocal_655))
			{
				SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_655, 0);
				DESTROY_OBJECT(bLocal_655);
			}
			bLocal_655 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, Local_70, "PIKCO_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
			SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_655, 1);
			iLocal_705 = 1;
			break;
		
		case 0x00000001:
			if (Function_286(16384, 1))
			{
				if (IS_OBJECT_VALID(bLocal_655))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_655, 0);
					DESTROY_OBJECT(bLocal_655);
				}
				iLocal_705 = 2;
			}
			break;
		
		case 0x00000002:
			if (!Function_286(65536, 1))
			{
				if (!Function_286(2, 1))
				{
					iLocal_705 = 0;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(bLocal_655))
			{
				SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_655, 0);
				DESTROY_OBJECT(bLocal_655);
			}
			break;
	}
	return;
}

void Function_500() //Position: 0x10FC9 / 69577
{
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_457("PIK_CO_Stage02_help2_stay_behind_herd", 5.0f, 1, 0, 2, 1);
			iLocal_695++;
			break;
		
		case 0x00000001:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_457("PIK_CO_Stage02_help2_move_back_and_forth", 5.0f, 1, 0, 2, 1);
				iLocal_695++;
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_457("PIK_CO_Stage02_help2_whistle_cows", 5.0f, 1, 0, 2, 1);
				iLocal_695++;
			}
			break;
		
		case 0x00000003:
			Function_6(&iLocal_641, 4);
			break;
	}
	return;
}

void Function_501() //Position: 0x110B7 / 69815
{
	switch (iLocal_696)
	{
		case 0x00000000:
			if (iLocal_588 == 1)
			{
				Function_443(&uLocal_585, 11, 0, 4294967295, 4294967295);
				iLocal_696++;
			}
			break;
		
		case 0x00000001:
			if (Function_12(iLocal_641, 512))
			{
				Function_443(&uLocal_585, 40, 0, 4294967295, 4294967295);
				iLocal_696++;
			}
			break;
		
		case 0x00000002:
			if ((Function_12(iLocal_641, 256) && Function_12(iLocal_641, 16384)) && Function_12(iLocal_641, 65536))
			{
				if (Function_491(Local_70.f_316, Local_70.f_320, Local_70.f_324, 0, 0, 0) < 4)
				{
					Function_443(&uLocal_585, 38, 0, 4294967295, 4294967295);
					iLocal_696++;
				}
			}
			if (iLocal_588 == 5)
			{
				iLocal_696++;
			}
			break;
		
		case 0x00000003:
			if (Function_491(Local_70.f_316, Local_70.f_320, Local_70.f_324, 0, 0, 0) < 0)
			{
				Function_443(&uLocal_585, 10, 0, 4294967295, 4294967295);
				iLocal_696++;
			}
			if (iLocal_588 == 6)
			{
				iLocal_696++;
			}
			break;
		
		case 0x00000004:
			if (iLocal_588 == 6)
			{
				Function_443(&uLocal_585, 11, 0, 4294967295, 4294967295);
				iLocal_696++;
			}
			break;
		
		case 0x00000005:
			if (iLocal_588 == 7)
			{
				iLocal_696++;
			}
			break;
		
		case 0x00000006:
			Function_502(&uLocal_585, 38, 40, 34, 10.0f);
			if (iLocal_588 == 14)
			{
				iLocal_696++;
			}
			break;
		
		case 0x00000007:
			if (Function_492(Local_622.f_68) == 0)
			{
				Function_443(&uLocal_585, 3, 0, 4294967295, 4294967295);
				iLocal_696++;
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

void Function_502(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1124C / 70220
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_503(iParam4);
		if (0 == iVar0)
		{
			Function_443(uParam0, iParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_443(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_443(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_503(float fParam0) //Position: 0x11292 / 70290
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

void Function_504() //Position: 0x112C6 / 70342
{
	if (Function_490() <= 5 && SQUAD_GET_SIZE(Local_591.f_44) > 2)
	{
		Function_735(8, 4294967295);
	}
	return;
}

void Function_505() //Position: 0x112E5 / 70373
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_188(&bLocal_702))
	{
		Function_483(&bLocal_702, 2.0f);
	}
	if (Function_506(&bLocal_702))
	{
		if (SQUAD_IS_VALID(Local_622.f_68))
		{
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE(Local_622.f_68) - 1))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(Local_622.f_68, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (IS_ACTOR_ON_FOOT(bVar0))
					{
						RELEASE_ACTOR(bVar0);
						TASK_FLEE_ACTORSET(bVar0, Function_441(), -1.0f, -1.0f, 0, 0, 0);
					}
				}
				bVar1++;
			}
		}
		Function_484(&bLocal_699, 2.0f);
	}
	return;
}

bool Function_506(bool bParam0) //Position: 0x11360 / 70496
{
	if (Function_508(bParam0))
	{
		Function_507(bParam0);
		return 1;
	}
	return 0;
}

void Function_507(int iParam0) //Position: 0x11376 / 70518
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_508(bool bParam0) //Position: 0x1138A / 70538
{
	if (Function_188(bParam0))
	{
		if (Function_183(bParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_509() //Position: 0x113A5 / 70565
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_188(&bLocal_699))
	{
		Function_483(&bLocal_699, 5.0f);
	}
	if (Function_506(&bLocal_699))
	{
		if (SQUAD_IS_VALID(Local_622.f_72))
		{
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE(Local_622.f_72) - 1))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(Local_622.f_72, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar0, Local_70.f_572);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar0, Local_70.f_572);
				}
				bVar1++;
			}
		}
		Function_484(&bLocal_699, 5.0f);
	}
	return;
}

void Function_510(int iParam0) //Position: 0x1141A / 70682
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
	
	if (!Function_515(iParam0))
	{
		if (Function_506(iParam0 + 40))
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
							bVar1 = Function_514(StackVal, StackVal, vVar15, 0);
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
									bVar13 = Function_513(iParam0->f_12, iParam0->f_16);
									NET_OBJECT_REPLICATION_MODE_START(15, 6);
									if (iParam0->f_60)
									{
										bVar3 = Function_512(StackVal, StackVal, vVar15, iParam0, bVar13, &cVar5, 20.0f, 40.0f);
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
											bVar14 = Function_513(976, 991);
											bVar4 = CREATE_ACTOR_IN_LAYOUT(*iParam0, &cVar9, bVar14, vVar15, vVar18);
											if (IS_ACTOR_VALID(bVar4))
											{
												ACCESSORIZE_HORSE(bVar4, 4);
												ACTOR_MOUNT_ACTOR(bVar3, bVar4);
												SQUAD_JOIN(bVar4, iParam0->f_72);
												TASK_FLEE_ACTORSET(bVar4, Function_441(), -1.0f, -1.0f, 0, 0, 0);
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
				Function_484(iParam0 + 40, iParam0->f_52);
			}
		}
	}
	Function_511(iParam0);
	return;
}

int Function_511(bool bParam0) //Position: 0x11620 / 71200
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
					TASK_FLEE_ACTORSET(bVar8, Function_441(), -1.0f, -1.0f, 0, 0, 0);
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

var Function_512(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x11735 / 71477
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

var Function_513(bool bParam0, bool bParam1) //Position: 0x117C1 / 71617
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

int Function_514(vector3 vParam0, bool bParam3) //Position: 0x117E8 / 71656
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
		Function_206(bVar5);
		fVar6 = VDIST2(vParam0, Function_206(bVar5));
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
					Function_206(bVar5);
					vVar1 = { StackVal, StackVal, Function_206(bVar5) };
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

bool Function_515(int iParam0) //Position: 0x11888 / 71816
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

void Function_516() //Position: 0x118A8 / 71848
{
	if (Function_286(16384, 1))
	{
		if (!iLocal_698)
		{
			iLocal_698 = 1;
		}
	}
	else if (iLocal_698)
	{
		iLocal_698 = 0;
		UI_SHOW("RacePosition");
		Function_455();
	}
	if (bLocal_589 == Function_490() && iLocal_374 < 7)
	{
		bLocal_589 = Function_490();
		Function_455();
	}
	return;
}

void Function_517() //Position: 0x118FE / 71934
{
	if (IS_ACTOR_VALID(Function_41()))
	{
		if (!Function_12(iLocal_641, 256))
		{
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_408))
			{
				Function_735(12, 4294967295);
			}
		}
		if (!Function_12(iLocal_641, 512))
		{
			if (SQUAD_IS_VALID(Local_70.f_316))
			{
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_412) || Function_518(Local_70.f_316, 0x3f800000, 0x42960000, 1, 1))
				{
					Function_735(13, 4294967295);
				}
			}
		}
		if (!Function_12(iLocal_641, 16384))
		{
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_416))
			{
				Function_735(14, 4294967295);
			}
		}
		if (SQUAD_IS_VALID(Local_70.f_320) && SQUAD_IS_VALID(Local_70.f_324))
		{
			if (!Function_12(iLocal_641, 32768))
			{
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_420) || Function_518(Local_70.f_320, 0x3f800000, 0x42960000, 1, 1))
				{
					Function_735(15, 4294967295);
				}
			}
			if (!Function_12(iLocal_641, 131072))
			{
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_424) || Function_518(Local_70.f_324, 0x3f800000, 0x42960000, 1, 1))
				{
					Function_735(17, 4294967295);
				}
			}
		}
	}
	return;
}

int Function_518(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11A12 / 72210
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_166(bVar1, iParam1, iParam2, iParam3, iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_519() //Position: 0x11A64 / 72292
{
	if (!Function_12(iLocal_641, 2048))
	{
		if (Function_490() == 10)
		{
			Function_735(4, 4294967295);
		}
	}
	if (!Function_12(iLocal_641, 4096))
	{
		if (Function_490() == 5)
		{
			Function_735(5, 4294967295);
		}
	}
	if (Function_490() <= 5)
	{
		vLocal_556.f_8 = 2;
	}
	return;
}

void Function_520() //Position: 0x11AAA / 72362
{
	if (iLocal_588 <= 0 && iLocal_588 > 15)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			if (IS_VOLUME_VALID((*&Local_70 + 432)[iLocal_588]))
			{
				if (IS_OBJECT_IN_VOLUME(StackVal, (*&Local_70 + 432)[iLocal_588]))
				{
					Function_521(iLocal_588);
				}
			}
		}
	}
	return;
}

void Function_521(var uParam0) //Position: 0x11AF5 / 72437
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 36, &uVar0, 1, 1);
	return;
}

void Function_522() //Position: 0x11B0A / 72458
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_591.f_44) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_591.f_44, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_523(int iParam0, float fParam1) //Position: 0x11B52 / 72530
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(iParam0->f_52))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_44))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						fVar3 = 6.0f;
						fVar4 = 12.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						fVar3 = 9.0f;
						fVar4 = 20.0f;
					}
					else
					{
						fVar3 = 10.0f;
						fVar4 = 23.0f;
					}
					if (!iParam0->f_100)
					{
						if (SQUAD_GET_SIZE(iParam0->f_44) != 0 && SQUAD_GET_SIZE(iParam0->f_48) != 0)
						{
							if (SQUAD_GET_SIZE(iParam0->f_52) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
								{
									bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										if (!Function_524(StackVal, bVar1, fVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(bVar1);
											TASK_CLEAR(bVar1);
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_44);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (IS_BLIP_VALID(bVar2))
											{
												REMOVE_BLIP(bVar2);
											}
											if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_80++;
												DECOR_REMOVE(bVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
						if (IS_ACTOR_VALID(bVar1))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (!IS_BLIP_VALID(bVar2))
							{
								bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 425, 0, 2, 0);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							else if (!GET_BLIP_ICON(bVar2) != 425)
							{
								CHANGE_BLIP_ICON(bVar2, 425);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							if (!GET_TASK_STATUS(bVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar1)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar1, 1);
								}
							}
							if (Function_524(StackVal, bVar1, fVar3))
							{
								if (StackVal && Function_524(iParam0->f_100, bVar1, fVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_44);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									bVar2 = GET_BLIP_ON_ACTOR(bVar1);
									if (IS_BLIP_VALID(bVar2))
									{
										REMOVE_BLIP(bVar2);
									}
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							if (!iParam0->f_100)
							{
								if (Function_336(iParam0 + 88) <= fParam1)
								{
									if (!Function_524(StackVal, bVar1, fVar4))
									{
										if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
										{
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_48);
											TASK_CLEAR(bVar1);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (!IS_BLIP_VALID(bVar2))
											{
												bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 424, 0, 2, 0);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar2, 424);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											if (!DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_76++;
												DECOR_SET_BOOL(bVar1, "bIsStraggler", true);
											}
										}
									}
									if (!DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_SET_BOOL(bVar1, "bRejoinInProgress", true);
									}
									Function_403(iParam0 + 88);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

bool Function_524(bool bParam0, bool bParam1, float fParam2) //Position: 0x11F90 / 73616
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_526(bParam0);
			Function_525(bParam1);
			if (VDIST(Function_526(bParam0), Function_525(bParam1)) >= fParam2)
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

vector3 Function_525(bool bParam0) //Position: 0x120AA / 73898
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

vector3 Function_526(bool bParam0) //Position: 0x12116 / 74006
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

void Function_527(int iParam0, bool bParam1) //Position: 0x12180 / 74112
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_52))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						iVar4 = 1;
						fVar7 = 7.0f;
						fVar5 = 12.0f;
						fVar6 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar4 = 3;
						fVar7 = 12.0f;
						fVar5 = 20.0f;
						fVar6 = 22.0f;
					}
					else
					{
						iVar4 = 3;
						fVar7 = 15.0f;
						fVar5 = 23.0f;
						fVar6 = 25.0f;
					}
					if (SQUAD_GET_SIZE(iParam0->f_44) < iVar4)
					{
						if (!iParam0->f_100)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
							{
								bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!Function_524(StackVal, bVar0, fVar7))
									{
										SET_ACTOR_MAX_SPEED(bVar0, 4);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_52);
										iParam0->f_84 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
										TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
										TASK_PRIORITY_SET(bVar0, 1);
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 425);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(bVar0);
										TASK_CLEAR(bVar0);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_56);
										if (DECOR_GET_BOOL(bVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(bVar0, "bRejoinInProgress", false);
										}
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (IS_BLIP_VALID(bVar1))
											{
												REMOVE_BLIP(bVar1);
											}
										}
									}
								}
								if (SQUAD_GET_SIZE(iParam0->f_44) == 0)
								{
									iParam0->f_100 = 1;
									Function_403(iParam0 + 88);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!Function_524(StackVal, bVar0, fVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, 1);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
									if (!DECOR_GET_BOOL(bVar0, "bIsStraggler"))
									{
										iParam0->f_76++;
										DECOR_SET_BOOL(bVar0, "bIsStraggler", true);
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar2);
						if (IS_ACTOR_VALID(bVar0))
						{
							if (bParam1)
							{
								bVar1 = GET_BLIP_ON_ACTOR(bVar0);
								if (!IS_BLIP_VALID(bVar1))
								{
									bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
								else if (!GET_BLIP_ICON(bVar1) != 425)
								{
									CHANGE_BLIP_ICON(bVar1, 425);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(bVar0, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar0)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, 1);
								}
							}
							if (StackVal && IS_OBJECT_VALID(IS_OBJECT_VALID(StackVal)))
							{
								if (StackVal || Function_524(Function_524(StackVal, bVar0, fVar5), bVar0, fVar5))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_524(StackVal, bVar0, fVar5))
									{
									}
									else if (Function_524(StackVal, bVar0, fVar5))
									{
									}
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, 1);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (iParam0->f_104 - 1))
									{
										if (IS_ACTOR_VALID((*iParam0 + 104)[bVar3]))
										{
											if (IS_ACTOR_PLAYER((*iParam0 + 104)[bVar3]))
											{
												if (Function_524(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(bVar0, 4);
													SQUAD_LEAVE(bVar0);
													SQUAD_JOIN(bVar0, iParam0->f_52);
													iParam0->f_84 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
													TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
													TASK_PRIORITY_SET(bVar0, 1);
													if (bParam1)
													{
														bVar1 = GET_BLIP_ON_ACTOR(bVar0);
														if (!IS_BLIP_VALID(bVar1))
														{
															bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
														else
														{
															CHANGE_BLIP_ICON(bVar1, 425);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
													}
												}
											}
											else if (Function_524(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(bVar0, 4);
												SQUAD_LEAVE(bVar0);
												SQUAD_JOIN(bVar0, iParam0->f_52);
												iParam0->f_84 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
												TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
												TASK_PRIORITY_SET(bVar0, 1);
												if (bParam1)
												{
													bVar1 = GET_BLIP_ON_ACTOR(bVar0);
													if (!IS_BLIP_VALID(bVar1))
													{
														bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(bVar1, 425);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
												}
												if (DECOR_GET_BOOL(bVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(bVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_528(bool bParam0, bool bParam1, bool bParam2) //Position: 0x127C0 / 75712
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			if (IS_VOLUME_VALID(bParam2))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (IS_ACTOR_IN_VOLUME(bVar1, bParam2))
						{
							SQUAD_LEAVE(bVar1);
							SQUAD_JOIN(bVar1, bParam1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_529(int iParam0) //Position: 0x12826 / 75814
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_56, &vVar0);
								Function_531(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_531(iParam0->f_56) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_530(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_530(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_531(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_531(iParam0->f_52) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_530(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_530(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_531(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_531(iParam0->f_48) };
							}
							else
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_531(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_531(iParam0->f_44) };
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_247(*iParam0);
								if (!Function_115(StackVal, StackVal, Function_247(*iParam0)))
								{
									bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar7))
									{
										SET_BLIP_SCALE(bVar7, 2.5f);
										SET_BLIP_NAME(bVar7, "nBLIP_HERD");
										SET_BLIP_FLAG(bVar7, 4096, 0);
										SET_BLIP_PRIORITY(bVar7, 1);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								Function_247(StackVal);
								if (!Function_115(StackVal, StackVal, Function_247(StackVal)))
								{
									bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar6))
									{
										SET_BLIP_SCALE(bVar6, 1.0f);
										SET_BLIP_PRIORITY(bVar6, 2);
									}
								}
							}
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

vector3 Function_530(vector3 vParam0, bool bParam3) //Position: 0x12AE4 / 76516
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	iVar1 = 4294967295;
	if (!Function_115(StackVal, StackVal, vParam0))
	{
		if (IS_OBJECT_VALID(bParam3))
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
			{
				GET_PATH_POINT(bParam3, iVar0, &vVar8);
				vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vParam0, StackVal) };
				if (iVar1 > 0 || VMAG(vVar2) > VMAG(vVar5))
				{
					vVar5 = { StackVal, StackVal, vVar2 };
					iVar1 = iVar0;
				}
				iVar0++;
			}
		}
	}
	if (iVar1 > 0)
	{
		GET_PATH_POINT(bParam3, iVar1, &vVar8);
		return StackVal, StackVal, vVar8;
	}
	GET_PATH_POINT(bParam3, (GET_NUM_PATH_POINTS(bParam3) - 1), &vVar8);
	return StackVal, StackVal, vVar8;
}

vector3 Function_531(bool bParam0) //Position: 0x12B84 / 76676
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<9> Var8;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		UNK_0x44986367(&vVar5, Function_532(bVar1));
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar8, StackVal) };
		bVar0++;
	}
	vVar8 = (vVar8.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar8.f_4 = 0.0f;
	vVar8.f_8 = (vVar8.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar2.f_4 = UNK_0x9C40E671(&vVar8);
	return StackVal, StackVal, vVar2;
}

var Function_532(bool bParam0) //Position: 0x12BF1 / 76785
{
	return GET_HEADING(bParam0);
}

void Function_533() //Position: 0x12BFC / 76796
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar2 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				(*&Local_591 + 104)[iVar1] = bVar2;
				iVar1++;
			}
		}
		bVar0++;
	}
	return;
}

void Function_534() //Position: 0x12C40 / 76864
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_70.f_308) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_308, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(bVar1, Local_70.f_568))
			{
				TASK_CLEAR(bVar1);
				SQUAD_LEAVE(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				Function_535(bVar1);
				SQUAD_JOIN(bVar1, Local_591.f_44);
			}
		}
		bVar0++;
	}
	return;
}

void Function_535(bool bParam0) //Position: 0x12CAE / 76974
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_352);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_356);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_360);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_364);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_368);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_372);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_376);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_380);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_384);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, Local_70.f_388);
	return;
}

void Function_536(int iParam0) //Position: 0x12D22 / 77090
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -2175.047f, 16.231f, 2534.717f };
	vVar3 = { -2161.615f, 16.337f, 2539.114f };
	switch (iLocal_587)
	{
		case 0x00000000:
			iLocal_587++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_466("narmadillo", "corralPens01", 2);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
					Function_465((*iParam0)[0], 1);
					OPEN_DOOR((*iParam0)[0], &vVar0, 1.0f);
					DECOR_SET_BOOL(GET_OBJECT_FROM_PHYSINST((*iParam0)[0]), "NoPlayerClose", true);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_466("narmadillo", "corralPens01", 3);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
					Function_465((*iParam0)[1], 1);
					OPEN_DOOR((*iParam0)[1], &vVar0, 1.0f);
					DECOR_SET_BOOL(GET_OBJECT_FROM_PHYSINST((*iParam0)[1]), "NoPlayerClose", true);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[2]))
			{
				(*iParam0)[2] = Function_466("narmadillo", "corralPens01", 4);
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
					Function_465((*iParam0)[2], 1);
					OPEN_DOOR((*iParam0)[2], &vVar3, 1.0f);
					DECOR_SET_BOOL(GET_OBJECT_FROM_PHYSINST((*iParam0)[2]), "NoPlayerClose", true);
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[3]))
			{
				(*iParam0)[3] = Function_466("narmadillo", "corralPens01", 5);
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
					Function_465((*iParam0)[3], 1);
					OPEN_DOOR((*iParam0)[3], &vVar3, 1.0f);
					DECOR_SET_BOOL(GET_OBJECT_FROM_PHYSINST((*iParam0)[3]), "NoPlayerClose", true);
				}
			}
			iLocal_587++;
			break;
		
		case 0x00000002:
			if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_465((*iParam0)[0], 1);
				OPEN_DOOR_DIRECTION((*iParam0)[0], true);
			}
			if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_465((*iParam0)[1], 1);
				OPEN_DOOR_DIRECTION((*iParam0)[1], false);
			}
			if (IS_DOOR_VALID((*iParam0)[2]))
			{
				Function_465((*iParam0)[2], 1);
				OPEN_DOOR_DIRECTION((*iParam0)[2], false);
			}
			if (IS_DOOR_VALID((*iParam0)[3]))
			{
				Function_465((*iParam0)[3], 1);
				OPEN_DOOR_DIRECTION((*iParam0)[3], true);
			}
			break;
	}
	return;
}

void Function_537(var uParam0) //Position: 0x12FB1 / 77745
{
	switch (iLocal_586)
	{
		case 0x00000000:
			iLocal_586++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*uParam0)[0]))
			{
				(*uParam0)[0] = Function_466("pikesBasin", "placement03", 1);
				if (IS_DOOR_VALID((*uParam0)[0]))
				{
					OPEN_DOOR_DIRECTION((*uParam0)[0], true);
				}
			}
			if (!IS_DOOR_VALID((*uParam0)[1]))
			{
				(*uParam0)[1] = Function_466("pikesBasin", "placement03", 2);
				if (IS_DOOR_VALID((*uParam0)[1]))
				{
					OPEN_DOOR_DIRECTION((*uParam0)[1], false);
				}
			}
			iLocal_586++;
			break;
		
		case 0x00000002:
			if (IS_DOOR_VALID((*uParam0)[0]))
			{
				OPEN_DOOR_DIRECTION((*uParam0)[0], true);
			}
			if (IS_DOOR_VALID((*uParam0)[1]))
			{
				OPEN_DOOR_DIRECTION((*uParam0)[1], false);
			}
			break;
	}
	return;
}

bool Function_538() //Position: 0x130A0 / 77984
{
	return Function_539(iLocal_374);
}

int Function_539(int iParam0) //Position: 0x130AC / 77996
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

void Function_540() //Position: 0x130F4 / 78068
{
	if (Function_538())
	{
		Function_543();
	}
	switch (iLocal_374)
	{
		case 0x00000000:
			Function_542(0);
			bLocal_690 = Function_541(Local_70, "corralTrig", Local_70.f_584, Function_41(), 0, 330, 4294967295, 0, 0, 1);
			Function_453("PIK_CO_obj_open_corral_gates", 0x40f00000, 1, 2, 0);
			Function_443(&uLocal_585, 7, 0, 4294967295, 4294967295);
			Function_344(6);
			break;
		
		case 0x00000006:
			if (Function_12(iLocal_641, 2097152))
			{
				if (Function_379(3, 1, 0x3f800000))
				{
					Function_344(106);
				}
			}
			else if (GATEWAY_UPDATE(bLocal_690))
			{
				Function_735(21, 4294967295);
			}
			break;
		
		case 0x0000006A:
			Function_447(bLocal_690);
			NET_LOG(bLocal_559, "GameType State", "Received a MOVE_THE_HERD message, transitioning to the next stage.", false, false, false, false);
			iLocal_373 = 3;
			Function_344(0);
			break;
	}
	return;
}

var Function_541(bool bParam0, char* cParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x13226 / 78374
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, cParam1, bParam2, bParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

void Function_542(bool bParam0) //Position: 0x132A3 / 78499
{
	int iVar0;
	
	Function_280(1, 1);
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
	Function_407("MPCOOP_CHEKPOINTCOOP", 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_559, "Local State", "Player was granted an extra life.", false, false, false, false);
		Function_27(&bLocal_420, 0);
	}
	return;
}

void Function_543() //Position: 0x13369 / 78697
{
	Function_519();
	if (IS_VOLUME_VALID(Local_70.f_392))
	{
		if (IS_ACTOR_VALID(Function_41()))
		{
			if (IS_ACTOR_IN_VOLUME(Function_41(), Local_70.f_392))
			{
				Function_544(&bLocal_420, Local_70.f_336);
			}
		}
	}
	Function_495(&iLocal_414, 1920.0f, bLocal_584, 4.0f, 2, 0);
	return;
}

void Function_544(bool bParam0, bool bParam1) //Position: 0x133B1 / 78769
{
	if (IS_VOLUME_VALID(bParam1))
	{
		bParam0->f_8 = bParam1;
	}
	return;
}

void Function_545() //Position: 0x133C8 / 78792
{
	if (Function_538())
	{
		Function_543();
		Function_502(&uLocal_585, 7, 40, 38, 10.0f);
		if (Function_556(Local_70.f_396))
		{
			if (!Function_12(iLocal_641, 128))
			{
				Function_735(11, 4294967295);
			}
		}
	}
	switch (iLocal_374)
	{
		case 0x00000000:
			Function_344(6);
			break;
		
		case 0x00000006:
			bLocal_584 = "PIK_CO_stage01_obj01_extra";
			Function_453(bLocal_584, 0x40f00000, 1, 2, 0);
			Function_546();
			Function_344(7);
			break;
		
		case 0x00000007:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_344(8);
			}
			break;
		
		case 0x00000008:
			if (NET_IS_SESSION_HOST())
			{
				if ((Function_491(Local_70.f_288, Local_70.f_284, Local_70.f_272, Local_70.f_276, Local_70.f_280, 0) + Function_491(Local_70.f_292, Local_70.f_296, Local_70.f_300, 0, 0, 0)) == 0)
				{
					Function_735(2, 4294967295);
				}
			}
			if (Function_12(iLocal_641, 32))
			{
				if (Function_379(2, 1, 0x3f800000))
				{
					Function_344(106);
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_373 = 2;
			Function_344(0);
			break;
	}
	return;
}

void Function_546() //Position: 0x134E4 / 79076
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_555();
	Function_554();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_550(&Local_70 + 292, Local_658.f_12);
	Function_550(&Local_70 + 296, Local_658.f_12);
	Function_549(&Local_70 + 292, 150.0f, 1);
	Function_549(&Local_70 + 296, 150.0f, 1);
	Function_548(Local_70.f_292, &Local_70 + 628, 0, 1);
	Function_548(Local_70.f_296, &Local_70 + 732, 0, 0);
	Function_547(Local_70.f_292, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_547(Local_70.f_296, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_547(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x13585 / 79237
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

void Function_548(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1366F / 79471
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - squad not valid");
		return;
	}
	if (*uParam1 != SQUAD_GET_SIZE(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - Flag set of different size than squad");
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, uParam1[bVar06], 3.0f, 3);
			TASK_GO_TO_COORD(false, uParam1[bVar06], 1);
			if (bParam2)
			{
				TASK_CROUCH(false, -1.0f);
			}
			if (bParam3)
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, uParam1[bVar06], -1.0f);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
		bVar0++;
	}
}

void Function_549(var uParam0, float fParam1, int iParam2) //Position: 0x137A4 / 79780
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
				SET_ACTOR_VISION_MAX_RANGE(bVar1, fParam1, iParam2);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SET_SQUAD_VISION_MAX_RANGE was passed an invalid squad");
	}
	return;
}

void Function_550(var uParam0, int iParam1) //Position: 0x13832 / 79922
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
			Function_551(&bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_551(var uParam0, int iParam1) //Position: 0x138A9 / 80041
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		Function_553(*uParam0, 25, "XP_Class_Sniper");
		switch (iParam1)
		{
			case 0x00000000:
				Function_552(*uParam0);
				Function_480(uParam0, 0.5f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 15, 1);
				Function_479(uParam0, 8, 4);
				break;
			
			case 0x00000001:
				Function_552(*uParam0);
				Function_480(uParam0, 1.0f);
				Function_479(uParam0, 9, 5);
				break;
			
			case 0x00000002:
				Function_552(*uParam0);
				Function_480(uParam0, 1.0f);
				Function_479(uParam0, 12, 5);
				break;
			
			case 0x00000003:
				Function_552(*uParam0);
				Function_480(uParam0, 2.0f);
				Function_479(uParam0, 20, 5);
				break;
			
			case 0x00000004:
				Function_552(*uParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*uParam0, 75.0f);
				SET_ACTOR_VISION_MAX_RANGE(*uParam0, 125.0f, 1);
				Function_480(uParam0, 3.0f);
				Function_479(uParam0, 19, 6);
				break;
			
			case 0x00000005:
				Function_552(*uParam0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(*uParam0, 90.0f);
				SET_ACTOR_VISION_MAX_RANGE(*uParam0, 150.0f, 1);
				SET_ACTOR_VISION_XRAY(*uParam0, 1);
				Function_480(uParam0, 4.0f);
				Function_479(uParam0, 14, 7);
				break;
		}
		Function_472(uParam0);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_SNIPER was passed an invalid actor");
	}
	return;
}

void Function_552(bool bParam0) //Position: 0x13A17 / 80407
{
	Function_476(bParam0);
	Function_475(bParam0, 1);
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

int Function_553(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13B49 / 80713
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

void Function_554() //Position: 0x13B8F / 80783
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_296 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Ridge2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r2_1", 479, -1252.199f, 85.19016f, 2399.624f, 0.0f, -158.012f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_296);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r2_2", 482, -1253.297f, 85.38342f, 2397.405f, 0.0f, -171.9485f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_296);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r2_3", 485, -1253.998f, 85.39452f, 2394.824f, 0.0f, -167.475f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_296);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_555() //Position: 0x13C95 / 81045
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_292 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Ridge1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r_1", 482, -1262.739f, 73.218f, 2390.079f, 0.0f, 356.3758f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_292);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r_2", 484, -1263.48f, 72.892f, 2393.157f, 0.0f, 356.3758f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_292);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r_3", 485, -1263.694f, 72.241f, 2397.212f, 0.0f, 356.3758f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_292);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r_4", 483, -1263.559f, 72.40145f, 2399.259f, 0.0f, 343.309f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_292);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

bool Function_556(bool bParam0) //Position: 0x13DE1 / 81377
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
				else if (Function_301(bVar1) < 0)
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

void Function_557() //Position: 0x13E48 / 81480
{
	if (Function_538())
	{
		Function_543();
		Function_502(&uLocal_585, 7, 40, 38, 10.0f);
		if (!Function_12(iLocal_641, 64))
		{
			if (Function_595())
			{
				Function_735(10, 4294967295);
			}
		}
	}
	switch (iLocal_374)
	{
		case 0x00000000:
			Function_583();
			Function_582();
			bLocal_689 = CREATE_EVENT_TRAP("trap", 17, Local_70);
			EVENT_TRAP_ON_VOLUME(bLocal_689, Local_70.f_392);
			Function_338(&iLocal_414);
			NET_LOG(bLocal_559, "PIKco Stage01", "Transitioning to GID_CUTSCENE", false, false, false, false);
			Function_344(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4))
			{
				if (Function_379(3, 1, 0x3f800000))
				{
					Function_344(3);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_570())
			{
				Function_569();
				Function_344(4);
				NET_LOG(bLocal_559, "PIKco Stage01", "Transitioning to GID_FIRST_GOAL", false, false, false, false);
			}
			break;
		
		case 0x00000004:
			Function_26(&bLocal_420, 0);
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			Function_375(Local_70.f_1140, 0);
			Function_560();
			iLocal_586 = 0;
			uLocal_647[0] = Function_466("pikesBasin", "placement03", 1);
			uLocal_647[1] = Function_466("pikesBasin", "placement03", 2);
			if (IS_DOOR_VALID(uLocal_647[0]))
			{
				Function_559(uLocal_647[0], 1);
			}
			if (IS_DOOR_VALID(uLocal_647[1]))
			{
				Function_559(uLocal_647[1], 1);
			}
			HUD_FADE_IN(1.0f, 1065353216);
			Function_344(6);
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_558(&Global_78578 + 96);
				}
				Function_443(&uLocal_585, 7, 0, 4294967295, 4294967295);
				NET_LOG(bLocal_559, "PIKco Stage01", "Transitioning to GID_SECOND_GOAL", false, false, false, false);
				Function_344(7);
			}
			break;
		
		case 0x00000007:
			bLocal_584 = "PIK_CO_stage01_obj01";
			Function_453(bLocal_584, 0x40f00000, 1, 2, 0);
			Function_344(8);
			break;
		
		case 0x00000008:
			if (Function_12(iLocal_641, 524288))
			{
				if (Function_379(1, 1, 0x3f800000))
				{
					Function_344(106);
				}
			}
			else if (Function_491(Local_70.f_288, Local_70.f_284, Local_70.f_272, Local_70.f_276, Local_70.f_280, 0) < 4)
			{
				Function_735(1, 4294967295);
			}
			break;
		
		case 0x0000006A:
			iLocal_373 = 1;
			Function_344(0);
			break;
	}
	return;
}

void Function_558(bool bParam0) //Position: 0x1411B / 82203
{
	if (Function_188(bParam0))
	{
		if (Function_187(bParam0))
		{
			Function_185();
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

void Function_559(bool bParam0, bool bParam1) //Position: 0x141EB / 82411
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

void Function_560() //Position: 0x1423F / 82495
{
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_568();
	Function_567();
	Function_566();
	Function_565();
	Function_564();
	Function_563();
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_288, false), "UseCase1");
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_288, true), "UseCase1");
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_288, 2), "UseCase1");
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_288, 3), "UseCase1");
	TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, false), GET_GRINGO_FROM_OBJECT(Local_70.f_1172), "UseCase1", 4294967295, 1);
	SNAP_ACTOR_TO_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, false), Local_70.f_1172, "UseCase1", 1, 0, 0);
	TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, true), GET_GRINGO_FROM_OBJECT(Local_70.f_1176), "UseCase1", 4294967295, 1);
	SNAP_ACTOR_TO_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, true), Local_70.f_1176, "UseCase1", 1, 0, 0);
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, 2), "UseCase1");
	Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_284, 3), "UseCase1");
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_272, 0, 1, SQUAD_GET_SIZE(Local_70.f_272));
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_276, 0, 1, SQUAD_GET_SIZE(Local_70.f_276));
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_280, 0, 1, SQUAD_GET_SIZE(Local_70.f_280));
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_562(FIND_ACTOR_IN_LAYOUT(Local_70, "pik_flee_1"), "UseCase1");
	Function_562(FIND_ACTOR_IN_LAYOUT(Local_70, "pik_flee_2"), "UseCase1");
	Function_547(Local_70.f_284, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_547(Local_70.f_288, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_561(Local_70.f_328, 4);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_328, 0, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_561(bool bParam0, int iParam1) //Position: 0x1444E / 83022
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				ACCESSORIZE_HORSE(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_562(bool bParam0, bool bParam1) //Position: 0x14490 / 83088
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_206(bParam0);
		vVar1 = { StackVal, StackVal, Function_206(bParam0) };
		bVar0 = LOCATE_GRINGO_OF_TYPE("", &vVar1, 2.0f, 1);
		if (IS_GRINGO_VALID(bVar0))
		{
			TASK_USE_GRINGO(bParam0, bVar0, bParam1, 4294967295, 1);
			SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(bVar0), bParam1, 1, 0, 0);
		}
	}
	return;
}

void Function_563() //Position: 0x144DC / 83164
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_328 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_ExtraHorse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_eh_1", 976, -1163.801f, 76.29803f, 2386.25f, 0.0f, -12.73143f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_328);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_eh_2", 980, -1162.186f, 76.29803f, 2386.248f, 0.0f, -23.6232f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_328);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_eh_3", 990, -1165.738f, 76.29803f, 2385.299f, 0.0f, -33.42002f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_328);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_eh_4", 987, -1159.734f, 76.29803f, 2386.732f, 0.0f, -19.12933f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_328);
	return;
}

void Function_564() //Position: 0x145DC / 83420
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_280 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Basin_Tent3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent3_1", 477, -1185.828f, 75.295f, 2374.059f, 0.0f, -85.54581f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_280);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent3_2", 477, -1187.661f, 75.295f, 2375.787f, 0.0f, 135.6444f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_280);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent3_3", 480, -1188.043f, 75.295f, 2373.407f, 0.0f, 290.9105f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_280);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent3_4", 484, -1189.532f, 75.295f, 2375.153f, 0.0f, 325.4759f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_280);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_565() //Position: 0x1472D / 83757
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_276 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Basin_Tent2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent2_1", 479, -1195.379f, 75.294f, 2355.845f, 0.0f, -115.7141f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_276);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent2_2", 478, -1196.478f, 75.295f, 2358.541f, 0.0f, 206.5878f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_276);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_566() //Position: 0x147EC / 83948
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_272 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Basin_Tent1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent1_1", 477, -1209.366f, 75.295f, 2359.79f, 0.0f, 185.7993f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_272);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Tent1_2", 479, -1211.465f, 75.295f, 2356.89f, 0.0f, 180.8156f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_272);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_567() //Position: 0x148AB / 84139
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_284 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Basin_Floor_Chargers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FC_1_sit", 480, -1200.621f, 75.295f, 2371.006f, 0.0f, 223.81f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FC_2_sit", 479, -1195.699f, 75.295f, 2365.145f, 0.0f, 217.144f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FC_3_sit_harm", 479, -1194.056f, 75.295f, 2370.525f, 0.0f, 296.6538f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FC_4_bench", 482, -1196.418f, 75.295f, 2371.336f, 0.0f, 252.677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_flee_1", 483, -1208.168f, 75.295f, 2363.314f, 0.0f, 68.57417f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_flee_2", 484, -1208.715f, 74.283f, 2375.702f, 0.0f, 72.3701f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_284);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_568() //Position: 0x14AC0 / 84672
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_288 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Basin_Floor_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FG_5_pee_tent3", 478, -1170.271f, 77.135f, 2391.163f, 0.0f, 173.9952f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_288);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FG_4_pee_tent2", 477, -1191.234f, 76.105f, 2357.875f, 0.0f, 72.20567f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_288);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FG_7_lean", 477, -1170.628f, 76.298f, 2374.532f, 0.0f, 178.2121f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_288);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Basin_FG_8_lean", 478, -1176.708f, 76.298f, 2361.096f, 0.0f, 380.5551f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_288);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_569() //Position: 0x14C09 / 85001
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_SET_CUTSCENE_MODE(0);
	return;
}

bool Function_570() //Position: 0x14C19 / 85017
{
	bool bVar0;
	var uVar1;
	
	Function_581(&Local_382, 1);
	bVar0 = false;
	if (((Local_382 != 1001 || Local_382 != 1002) || Local_382 != 1003) || Local_382 != 1004)
	{
		bVar0 = Function_579();
	}
	switch (Local_382)
	{
		case 0x000003E8:
			iLocal_679 = 15;
			Function_403(&Local_382 + 4);
			Function_399(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar1 = UNK_0xFF1F1730();
				Local_382.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_382.f_16 = Function_571(Local_70, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_382.f_16))
				{
				}
				else
				{
					LOG_ERROR("PikesBasinMP_CO_cutscene01 - Failed to create PikesBasinMP_CO_cutscene01_cutscene");
				}
			}
			Local_382 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_382.f_16), false))
			{
				Function_393(Global_34573, 1, 1);
				Local_382 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (Function_379(1003, 1, 0x3f800000))
			{
				if (HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_382 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_336(&Local_382 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					iLocal_680 = 15;
					Local_382 = 1004;
				}
			}
			break;
		
		case 0x000003EC:
			if (bVar0)
			{
				Function_403(&Local_382 + 4);
				Local_382 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_393(Global_34573, 0, 1);
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
				else if (IS_OBJECT_VALID(Local_382.f_16))
				{
					DESTROY_OBJECT(Local_382.f_16);
				}
				Local_382 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_382 = 1104;
			}
			break;
	}
	return 0;
}

var Function_571(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x14E51 / 85585
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_52(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PikesBasinMP_CO_cutscene01", 6, 1);
	}
	Function_572(&bVar0);
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

void Function_572(int iParam0) //Position: 0x14ED7 / 85719
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_578(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_577(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_576(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_575(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_574(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_573(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 4, 5, 6.0f, 3, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 5, 2.0f, 4);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(bVar1, 0.0f, 2.0f, 0);
	return;
}

void Function_573(int iParam0) //Position: 0x14F79 / 85881
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52.60668f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1182.461f, 77.90918f, 2351.682f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.196715f, -2.360592f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_574(int iParam0) //Position: 0x14FE3 / 85987
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52.60668f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1183.439f, 77.63665f, 2350.575f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.173998f, -2.263732f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_575(int iParam0) //Position: 0x1504D / 86093
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52.60668f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1148.926f, 78.56779f, 2371.078f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.013178f, 1.145888f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_576(int iParam0) //Position: 0x150B7 / 86199
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52.60668f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1149.827f, 78.56779f, 2374.012f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.013178f, 1.259248f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_577(int iParam0) //Position: 0x15121 / 86305
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1130.651f, 101.3764f, 2394.802f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.300035f, 1.040929f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_578(var uParam0) //Position: 0x1518B / 86411
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1129.711f, 101.7718f, 2396.285f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.166834f, 1.008631f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_579() //Position: 0x151F5 / 86517
{
	switch (iLocal_679)
	{
		case 0x0000000F:
			if (Function_336(&Local_382 + 4) < 2.0f)
			{
				Function_580();
				iLocal_679 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_679 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_336(&Local_382 + 4) < 27.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_580() //Position: 0x15253 / 86611
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Therd_IntroScene_v1_AA", "Therd_IntroScene_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Therd_IntroScene_v1_AB", "Therd_IntroScene_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Therd_IntroScene_v1_AC1", "Therd_IntroScene_v1_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Therd_IntroScene_v1_AC2", "Therd_IntroScene_v1_AC2", 0, 1, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581(var uParam0, bool bParam1) //Position: 0x15368 / 86888
{
	if (!uParam0->f_24)
	{
		if (((((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106) && !UI_ISACTIVE("Cutscenes_Paused")) && !UI_ISACTIVE("PauseScene"))
		{
			if (IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
			{
				if (!Function_286(4096, 1))
				{
					Function_46(4096, 1);
				}
			}
			if (Function_307())
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

void Function_582() //Position: 0x15442 / 87106
{
	Function_406();
	STREAMING_SET_CUTSCENE_MODE(1);
	STREAMING_OVERRIDE_MAIN_POI(*(&Local_70 + 1076), *(&Local_70 + 1076 + 12));
	return;
}

void Function_583() //Position: 0x15462 / 87138
{
	Function_594();
	NET_OBJECT_REPLICATION_MODE_START(15, 4);
	Function_593();
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (SQUAD_IS_VALID(Local_70.f_308))
	{
		SQUAD_GOALS_CLEAR(Local_70.f_308);
		Function_592(Local_70.f_308, 0);
		Function_591(Local_70.f_308, 1);
		Function_590(Local_70.f_308, 0);
		Function_589(Local_70.f_308, 0);
		Function_588(Local_70.f_308, 0);
		Function_587(Local_70.f_308, "AllowLassoHorseMinigame", 0);
		Function_586(Local_70.f_308, 0);
	}
	Function_585(Local_70.f_308, Local_70.f_588);
	Function_584(StackVal, &Local_70 + 308);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_308, 0, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, Local_70.f_348, -1.0f);
	return;
}

void Function_584(var uParam0, float fParam1) //Position: 0x15516 / 87318
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0) && fParam1 < 0.0f)
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_480(&bVar1, fParam1);
			}
			else
			{
				LOG_ERROR("ERROR:  SET_SQUAD_HEALTH_BY_SHOT found an invalid actor in a squad, skipping.");
			}
			bVar0++;
		}
	}
	else
	{
		if (!SQUAD_IS_VALID(*uParam0))
		{
			LOG_ERROR("ERROR:  SET_SQUAD_HEALTH_BY_SHOT was passed an invalid squad");
		}
		if (fParam1 >= 0.0f)
		{
			LOG_ERROR("ERROR:  SET_SQUAD_HEALTH_BY_SHOT was passed a value <= 0");
		}
	}
	return;
}

int Function_585(bool bParam0, bool bParam1) //Position: 0x15649 / 87625
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
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
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_586(bool bParam0, bool bParam1) //Position: 0x1569E / 87710
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

void Function_587(bool bParam0, bool bParam1, bool bParam2) //Position: 0x156DD / 87773
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				DECOR_SET_BOOL(bVar1, bParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_588(bool bParam0, int iParam1) //Position: 0x15724 / 87844
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_589(bool bParam0, int iParam1) //Position: 0x15765 / 87909
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_BUMPTARGETED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_590(bool bParam0, bool bParam1) //Position: 0x157A6 / 87974
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
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
	}
	return;
}

void Function_591(bool bParam0, int iParam1) //Position: 0x157E7 / 88039
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_592(bool bParam0, bool bParam1) //Position: 0x1582B / 88107
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
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_593() //Position: 0x1586C / 88172
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Herd"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd01", 1009, -1156f, 76.29803f, 2380.0f, 0.0f, 61.86293f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd02", 1009, -1164.0f, 77.30194f, 2353.703f, 0.0f, 111.0296f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd03", 1010, -1156.0f, 76.29803f, 2376.0f, 0.0f, 111.1267f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd04", 1011, -1161.381f, 77.30194f, 2356.0f, 0.0f, 164.0638f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd05", 1011, -1160.0f, 76.29803f, 2372.0f, 0.0f, 117.5411f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd06", 1010, -1156.0f, 77.30194f, 2360f, 0.0f, 117.5411f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd07", 1011, -1164.0f, 76.29803f, 2368.0f, 0.0f, 57.17961f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd08", 1009, -1170.338f, 76.29803f, 2353.662f, 0.0f, 169.1705f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd09", 1010, -1156.0f, 76.29803f, 2372.0f, 0.0f, 123.3626f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd010", 1011, -1161.082f, 77.12284f, 2360f, 0.0f, 95.62839f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd011", 1010, -1164.0f, 76.29803f, 2372.0f, 0.0f, 128.9264f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd012", 1009, -1168.0f, 76.7442f, 2352.0f, 0.0f, -89.74304f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd013", 1011, -1156.0f, 76.87492f, 2368.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd014", 1010, -1164.0f, 77.30194f, 2356.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd015", 1009, -1164.0f, 76.29803f, 2374.589f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd016", 1010, -1168.0f, 76.29797f, 2360f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd017", 1011, -1160.0f, 76.90833f, 2364.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd018", 1009, -1157.687f, 77.30194f, 2362.313f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd019", 1010, -1166.031f, 76.29803f, 2369.969f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "Herd020", 1009, -1164.0f, 76.64006f, 2360f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_308);
	SET_ACTOR_FACTION(bVar0, 21);
	return;
}

void Function_594() //Position: 0x15D05 / 89349
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	Local_591.f_68 = 20;
	PRINTINT(Local_591.f_68);
	PRINTNL();
	Local_591.f_64 = "PIK_COOP_COWS01";
	Local_591.f_12 = Local_70.f_1192;
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar2 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				(*&Local_591 + 104)[iVar1] = bVar2;
				iVar1++;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (Local_591.f_104 - 1))
	{
		if (IS_ACTOR_VALID((*&Local_591 + 104)[bVar0]))
		{
		}
		bVar0++;
	}
	if (!Function_340(&Local_591 + 88))
	{
		Function_338(&Local_591 + 88);
	}
	else
	{
		Function_403(&Local_591 + 88);
	}
	if (!IS_OBJECT_VALID(Local_591))
	{
		Local_591 = CREATE_POINT_IN_LAYOUT(Local_70, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_591))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_591.f_4 = CREATE_POINT_IN_LAYOUT(Local_70, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_591.f_44))
	{
		Local_591.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_591.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_591.f_44);
		}
	}
	if (!SQUAD_IS_VALID(Local_591.f_48))
	{
		Local_591.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_591.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_591.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_591.f_52))
	{
		Local_591.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_591.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_591.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_591.f_56))
	{
		Local_591.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_591.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_591.f_56);
		}
	}
	Local_591.f_8 = "";
	Local_591.f_100 = 0;
	return;
}

bool Function_595() //Position: 0x15F50 / 89936
{
	if ((Function_597(Local_70.f_288, Function_41(), 0) || Function_597(Local_70.f_284, Function_41(), 0)) || Function_596(Local_70.f_392, Local_70))
	{
		return 1;
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_689))
	{
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_689);
		EVENT_TRAP_CLEAR_EVENTS(bLocal_689);
		return 1;
	}
	return 0;
}

var Function_596(bool bParam0, bool bParam1) //Position: 0x15F97 / 90007
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

int Function_597(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16009 / 90121
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_602(bParam0))
	{
		if (bParam2)
		{
			Function_601(bParam0, bParam1, 0);
			Function_600(bParam0, bParam1);
			return 1;
		}
		if (Function_599(bParam0, bParam1))
		{
			Function_601(bParam0, bParam1, 0);
			Function_600(bParam0, bParam1);
			return 1;
		}
		if (Function_598(bParam0, bParam1, 1))
		{
			Function_601(bParam0, bParam1, 0);
			Function_600(bParam0, bParam1);
			return 1;
		}
	}
	return 0;
}

bool Function_598(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1607B / 90235
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

bool Function_599(bool bParam0, bool bParam1) //Position: 0x160E3 / 90339
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

void Function_600(bool bParam0, bool bParam1) //Position: 0x16156 / 90454
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

void Function_601(bool bParam0, bool bParam1, bool bParam2) //Position: 0x161A8 / 90536
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

bool Function_602(bool bParam0) //Position: 0x16213 / 90643
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

void Function_603() //Position: 0x1626A / 90730
{
	int iVar0;
	
	switch (iLocal_374)
	{
		case 0x00000006:
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(9, 58, 0));
			Function_729(1, 0);
			Function_728(Global_83864.f_1284);
			Function_173(Function_727());
			Function_171(Global_83864.f_1284, 0, 1);
			Function_37(512);
			Function_719();
			Function_718();
			if (Function_155())
			{
				Function_717(3);
			}
			else
			{
				Function_717(2);
			}
			Function_544(&bLocal_420, Local_70.f_332);
			Function_716(&bLocal_420, 0);
			REGISTER_HOST_BROADCAST_VARIABLES(&vLocal_553, 3);
			vLocal_556.f_8 = 0;
			iLocal_588 = 0;
			iLocal_590 = 0;
			iVar0 = 0;
			while (iVar0 < 19)
			{
				iLocal_562[iVar0] = 1;
				iVar0++;
			}
			bLocal_643 = CREATE_EVENT_TRAP("replicationTrap", 77, Local_70);
			bLocal_657 = CREATE_WORLD_SECTOR(Local_70, "pikesBasin");
			Function_670(&bLocal_420);
			Function_26(&bLocal_420, 1);
			iLocal_374 = 7;
			break;
		
		case 0x00000007:
			if (IS_WORLD_SECTOR_LOADED(bLocal_657))
			{
				iLocal_374 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_641(Local_70, &Global_83591 + 276, 1, 1) != 0)
			{
				iLocal_374 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_631())
			{
				iLocal_374 = 10;
			}
			break;
		
		case 0x0000000A:
			CAMERA_RESET(0);
			Function_627(&bLocal_420, 96364);
			UNK_0x2148AC15(322, 10);
			iLocal_374 = 11;
			break;
		
		case 0x0000000B:
			iLocal_590 = AUDIO_MUSIC_GET_RANDOM_TRACK_FROM_PLAYLIST("MP_PLAYLIST_PIKESBASIN_HERD");
			AUDIO_MUSIC_FORCE_TRACK_HASH(iLocal_590, "SILENT", 0.0f, 4294967295, 4294967295, 0.0f, 0);
			Function_443(&uLocal_585, 0, 0, 4294967295, 4294967295);
			iLocal_374 = 106;
			break;
		
		case 0x0000006A:
			iLocal_374 = 0;
			iLocal_373 = 0;
			Local_382 = 1000;
			Function_604();
			NET_LOG(bLocal_559, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", false, false, false, false);
			break;
	}
	return;
}

void Function_604() //Position: 0x1646C / 91244
{
	NET_SCRIPTMSG_REGISTER_HANDLER(32, 96332);
	NET_SCRIPTMSG_REGISTER_HANDLER(33, 96312);
	NET_SCRIPTMSG_REGISTER_HANDLER(15, 96291);
	NET_SCRIPTMSG_REGISTER_HANDLER(35, 95934);
	NET_SCRIPTMSG_REGISTER_HANDLER(36, 95284);
	NET_SCRIPTMSG_REGISTER_HANDLER(40, 91310);
	return;
}

void Function_605(bool bParam0) //Position: 0x164AE / 91310
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	switch (Var0)
	{
		case 0x00000002:
			if (!Function_12(iLocal_641, 32))
			{
				Function_9(&iLocal_641, 32);
			}
			break;
		
		case 0x00000001:
			if (!Function_12(iLocal_641, 524288))
			{
				Function_9(&iLocal_641, 524288);
			}
			break;
		
		case 0x00000004:
			if (!Function_12(iLocal_641, 2048))
			{
				Function_9(&iLocal_641, 2048);
				HUD_CLEAR_HELP();
				Function_457("PIK_CO_help_herd_low", 0x41200000, 1, 0, 2, 1);
			}
			break;
		
		case 0x00000005:
			if (!Function_12(iLocal_641, 4096))
			{
				Function_9(&iLocal_641, 4096);
				HUD_CLEAR_HELP();
				Function_457("PIK_CO_help_herd_critical", 0x41200000, 1, 0, 2, 1);
			}
			break;
		
		case 0x00000006:
			if (StackVal && StackVal <= 0 > 20)
			{
				if (iLocal_562[StackVal])
				{
					iLocal_562[0] = StackVal;
					NET_TICKER_REPORTF(UI_GET_STRING("PIK_CO_ticker_cattle_killed"), false, false, 0, 0, 0, 0);
				}
			}
			else
			{
				LOG_ERROR("\NETMSG_HANDLER_PIK_CUSTOM_ACTION - invalid herd index sent with PIK_CUSTOM_COW_DIED message");
			}
			break;
		
		case 0x00000007:
			if (!Function_12(iLocal_641, 262144))
			{
				Function_9(&iLocal_641, 262144);
				vLocal_556.f_8 = 2;
			}
			break;
		
		case 0x00000008:
			if (!Function_12(iLocal_641, 1048576))
			{
				Function_9(&iLocal_641, 1048576);
				vLocal_556.f_8 = 2;
			}
			break;
		
		case 0x00000009:
			if (!Function_12(iLocal_641, 1024))
			{
				Function_9(&iLocal_641, 1024);
				vLocal_556.f_8 = 1;
			}
			break;
		
		case 0x0000000A:
			if (!Function_12(iLocal_641, 64))
			{
				Function_9(&iLocal_641, 64);
				Function_616();
				Function_615();
			}
			break;
		
		case 0x0000000B:
			if (!Function_12(iLocal_641, 128))
			{
				Function_9(&iLocal_641, 128);
				NET_OBJECT_REPLICATION_MODE_START(15, 4);
				Function_614();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_550(&Local_70 + 300, Local_658.f_12);
				Function_548(Local_70.f_300, &Local_70 + 812, 1, 0);
				Function_549(&Local_70 + 300, 150.0f, 1);
				Function_547(Local_70.f_300, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000C:
			if (!Function_12(iLocal_641, 256))
			{
				Function_9(&iLocal_641, 256);
				if (IS_VOLUME_VALID(Local_70.f_408))
				{
					DESTROY_VOLUME(Local_70.f_408);
				}
				NET_OBJECT_REPLICATION_MODE_START(15, 4);
				Function_613();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_316, false), "UseCase1");
				Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_316, true), "UseCase1");
				Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_316, 2), "UseCase1");
				Function_562(SQUAD_GET_ACTOR_BY_INDEX(Local_70.f_316, 3), "UseCase1");
			}
			break;
		
		case 0x0000000D:
			if (!Function_12(iLocal_641, 512))
			{
				Function_9(&iLocal_641, 512);
				if (IS_VOLUME_VALID(Local_70.f_412))
				{
					DESTROY_VOLUME(Local_70.f_412);
				}
				SQUAD_GOALS_CLEAR(Local_70.f_316);
				Function_442(Local_70.f_316);
				Function_612(&Local_70 + 316, 9, 5, Local_658.f_20);
				Function_548(Local_70.f_316, &Local_70 + 892, 0, 0);
				Function_547(Local_70.f_316, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000E:
			if (!Function_12(iLocal_641, 16384))
			{
				Function_9(&iLocal_641, 16384);
				if (IS_VOLUME_VALID(Local_70.f_416))
				{
					DESTROY_VOLUME(Local_70.f_416);
				}
				NET_OBJECT_REPLICATION_MODE_START(15, 4);
				Function_611();
				Function_610();
				NET_OBJECT_REPLICATION_MODE_END(15);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_320, 0, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_324, 0);
				Function_612(&Local_70 + 324, 9, 5, Local_658.f_20);
				Function_609(Local_70.f_324, 0, 3212836864);
			}
			break;
		
		case 0x0000000F:
			if (!Function_12(iLocal_641, 32768))
			{
				Function_9(&iLocal_641, 32768);
				if (IS_VOLUME_VALID(Local_70.f_420))
				{
					DESTROY_VOLUME(Local_70.f_420);
				}
				SQUAD_GOALS_CLEAR(Local_70.f_320);
				Function_442(Local_70.f_320);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_320, 0);
				Function_612(&Local_70 + 320, 9, 5, Local_658.f_20);
				Function_608(Local_70.f_320, Local_70.f_992, 0, 0);
				Function_547(Local_70.f_320, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000011:
			if (!Function_12(iLocal_641, 131072))
			{
				Function_9(&iLocal_641, 131072);
				Function_547(Local_70.f_324, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000012:
			if (IS_SLOT_VALID(StackVal))
			{
				(*&Local_591 + 104)[GET_SLOT_ACTOR(StackVal)] = StackVal;
			}
			else
			{
				LOG_ERROR("Invalid slot sent in PIK_CUSTOM_PLAYER_RESPAWNED netmsg, very bad!  Can't update the ranchers!");
			}
			break;
		
		case 0x00000014:
			Function_606();
			break;
		
		case 0x00000015:
			if (!Function_12(iLocal_641, 2097152))
			{
				Function_9(&iLocal_641, 2097152);
			}
			break;
	}
	return;
}

void Function_606() //Position: 0x16A68 / 92776
{
	Function_607(Local_70.f_308);
	Function_607(Local_591.f_48);
	Function_607(Local_591.f_44);
	Function_607(Local_591.f_52);
	Function_607(Local_591.f_56);
	return;
}

void Function_607(bool bParam0) //Position: 0x16A96 / 92822
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_INVULNERABILITY(bVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_608(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16ADD / 92893
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<5> Var5;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - squad not valid");
		return;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - invalid object set");
		return;
	}
	if (GET_OBJECTSET_SIZE(bParam1) != SQUAD_GET_SIZE(bParam0))
	{
		LOG_ERROR("SQUAD_RUN_TO_AND_SHOOT_FROM_POSITIONS - Objectset of different size than squad");
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar9 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar9))
		{
			bVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
			if (IS_OBJECT_VALID(bVar8))
			{
				GET_OBJECT_POSITION(bVar8, &uVar2);
				GET_OBJECT_ORIENTATION(bVar8, &Var5);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uVar2, 3.0f, 3);
				TASK_GO_TO_COORD(false, &uVar2, 1);
				if (bParam2)
				{
					TASK_CROUCH(false, -1.0f);
				}
				if (bParam3)
				{
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				}
				else
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &uVar2, -1.0f);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar9, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
		}
		bVar0++;
	}
}

void Function_609(bool bParam0, int iParam1, float fParam2) //Position: 0x16C6F / 93295
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
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
			GET_POSITION(bVar1, &uVar2);
			bVar5 = GET_HEADING(bVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, fParam2);
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_610() //Position: 0x16CC8 / 93384
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_324 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "nPIK_Camp3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp3_1", 485, -1321.492f, 84.38871f, 2432f, 0.0f, 110.9369f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_324);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp3_2", 484, -1338.297f, 84.44579f, 2420.639f, 0.0f, 143.8506f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_324);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp3_3", 481, -1361.767f, 83.30962f, 2419.698f, 0.0f, 195.1356f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_324);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp3_4", 480, -1376f, 83.08346f, 2418.489f, 0.0f, 211.1597f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_324);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp3_5", 478, -1392.822f, 81.86719f, 2424.822f, 0.0f, 211.1597f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_324);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_611() //Position: 0x16E2A / 93738
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_320 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "nPIK_Camp2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp2_1", 484, -1332.506f, 79.25676f, 2470.89f, 0.0f, -53.31586f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_320);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp2_2", 482, -1333.686f, 79.30952f, 2468.115f, 0.0f, -53.31586f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_320);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp2_3", 480, -1334.927f, 79.47391f, 2465.802f, 0.0f, -53.31586f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_320);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp2_4", 481, -1337.285f, 79.58517f, 2462.621f, 0.0f, -53.31586f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_320);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp2_5", 478, -1339.767f, 79.56705f, 2460.201f, 0.0f, -53.31586f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_320);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_612(var uParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x16F8C / 94092
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
			Function_471(&bVar1, bParam1, bParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_613() //Position: 0x1700C / 94220
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Camp"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp_1", 477, -1244.173f, 75.362f, 2528.703f, 0.0f, 97.60809f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_316);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp_2", 478, -1239.752f, 75.309f, 2528.313f, 0.0f, 97.60809f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_316);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp_3", 480, -1244.061f, 75.295f, 2523.591f, 0.0f, 97.60809f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_316);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "PIK_Camp_4", 483, -1252.016f, 75.256f, 2524.387f, 0.0f, 97.60809f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_316);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_614() //Position: 0x1715E / 94558
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_70.f_300 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_70, "PIK_Ridge3_Snipe"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r3_1", 483, -1125.587f, 101.3643f, 2409.677f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_300);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r3_2", 484, -1123.077f, 102.238f, 2412.491f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_300);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_70, "pik_r3_3", 485, -1120.857f, 103.5255f, 2415.338f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_70.f_300);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_615() //Position: 0x1725E / 94814
{
	SQUAD_GOALS_CLEAR(Local_70.f_272);
	Function_442(Local_70.f_272);
	SQUAD_GOALS_CLEAR(Local_70.f_276);
	Function_442(Local_70.f_276);
	SQUAD_GOALS_CLEAR(Local_70.f_280);
	Function_442(Local_70.f_280);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_272, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_276, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_280, 0);
	Function_547(Local_70.f_272, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_547(Local_70.f_276, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_547(Local_70.f_280, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_612(&Local_70 + 272, 9, 5, Local_658.f_16);
	Function_612(&Local_70 + 276, 9, 5, Local_658.f_16);
	Function_612(&Local_70 + 280, 9, 5, Local_658.f_16);
	return;
}

void Function_616() //Position: 0x17333 / 95027
{
	SQUAD_GOALS_CLEAR(Local_70.f_288);
	Function_442(Local_70.f_288);
	SQUAD_GOALS_CLEAR(Local_70.f_284);
	Function_442(Local_70.f_284);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_284, 0, 0, SQUAD_GET_SIZE(Local_70.f_288));
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_70.f_288, 0, 0, SQUAD_GET_SIZE(Local_70.f_288));
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_288, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_70.f_284, 0);
	Function_617(Local_70.f_288, Local_70.f_400, 1, 2);
	Function_617(Local_70.f_288, Local_70.f_404, 1, 2);
	Function_549(&Local_70 + 288, 300.0f, 1);
	Function_549(&Local_70 + 284, 300.0f, 1);
	Function_612(&Local_70 + 284, 9, 5, Local_658.f_16);
	Function_612(&Local_70 + 288, 9, 5, Local_658.f_16);
	return;
}

var Function_617(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x173F9 / 95225
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
	return uVar0;
}

void Function_618(bool bParam0) //Position: 0x17434 / 95284
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	if (IS_VOLUME_VALID((*&Local_70 + 432)[iVar0]))
	{
		DESTROY_VOLUME((*&Local_70 + 432)[iVar0]);
		Function_448(bLocal_656);
		if (iLocal_588 == 14)
		{
			bLocal_584 = "PIK_CO_stage02_obj01";
			Function_451(Local_70, Local_70.f_576, &bLocal_656);
			Function_443(&uLocal_585, 3, 0, 4294967295, 4294967295);
			Function_453(bLocal_584, 0x40f00000, 1, 2, 0);
		}
		else
		{
			iLocal_588++;
			Function_451(Local_70, (*&Local_70 + 432)[iLocal_588], &bLocal_656);
		}
		Function_544(&bLocal_420, (*&Local_70 + 500)[iVar0]);
		if (iVar0 != 5 || iVar0 != 8)
		{
			Function_542(0);
		}
		if (iVar0 == 6)
		{
			if (!Function_12(iLocal_641, 2))
			{
				Function_165(&Local_70 + 316, 0, 0);
				Function_165(&Local_70 + 320, 0, 0);
				Function_165(&Local_70 + 324, 0, 0);
				Function_165(&Local_70 + 328, 0, 0);
				Function_9(&iLocal_641, 2);
			}
		}
		if (iVar0 == 13)
		{
			if (Function_12(iLocal_641, 2))
			{
				Function_6(&iLocal_641, 2);
			}
			SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_591.f_44, Local_591.f_60, 1, 0.01f, 0.02f);
			_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 15, 0.01f);
			_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_591.f_44, Local_591.f_60, 1, 16, 1.0f);
		}
		if (iVar0 == 1)
		{
			if (!Function_12(iLocal_641, 4))
			{
				Function_9(&iLocal_641, 4);
			}
		}
		if (iVar0 == 2)
		{
			if (!Function_12(iLocal_641, 1))
			{
				Function_457("PIK_CO_Stage02_help3_camera_focus", 0x41200000, 1, 0, 2, 1);
				Function_9(&iLocal_641, 1);
			}
		}
		if (Function_12(iLocal_641, 2))
		{
			Function_620(&Local_622);
			Function_619(iVar0);
		}
	}
	return;
}

void Function_619(int iParam0) //Position: 0x175F3 / 95731
{
	if (iParam0 > 0 || iParam0 <= 15)
	{
		LOG_ERROR("SET_RAIDER_SPAWN_POINTS - Invalid index");
		return;
	}
	switch (iParam0)
	{
		case 0x00000006:
			Function_487(&Local_622, Local_70.f_1052);
			break;
		
		case 0x00000007:
			Function_487(&Local_622, Local_70.f_1056);
			break;
		
		case 0x00000008:
			Function_487(&Local_622, Local_70.f_1060);
			break;
		
		case 0x0000000A:
			Function_487(&Local_622, Local_70.f_1064);
			break;
		
		case 0x0000000B:
			Function_487(&Local_622, Local_70.f_1068);
			break;
		
		case 0x0000000D:
			Function_487(&Local_622, Local_70.f_1072);
			break;
	}
	return;
}

void Function_620(int iParam0) //Position: 0x176B3 / 95923
{
	iParam0->f_36 = 0;
	return;
}

void Function_621(bool bParam0) //Position: 0x176BE / 95934
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000000:
			Function_623();
			ENABLE_USE_CONTEXTS(1);
			if (Function_74())
			{
				Function_67();
			}
			Function_14();
			Local_382 = 1000;
			iLocal_374 = 0;
			iLocal_373 = 0;
			break;
		
		case 0x00000003:
			vLocal_644 = { -1184.099f, 76.289f, 2357.78f };
			TELEPORT_ACTOR(Function_41(), &vLocal_644, 1, 1, 1);
			ENABLE_USE_CONTEXTS(1);
			Function_622();
			if (Function_74())
			{
				Function_67();
			}
			Function_14();
			Local_382 = 1000;
			iLocal_374 = 0;
			iLocal_373 = 2;
			break;
		
		case 0x00000065:
			if (Function_74())
			{
				Function_67();
			}
			Function_14();
			Local_382 = 1000;
			iLocal_374 = 0;
			iLocal_373 = 101;
			break;
	}
	return;
}

void Function_622() //Position: 0x1776C / 96108
{
	if (SQUAD_IS_VALID(Local_70.f_272))
	{
		Function_177(&Local_70 + 272);
	}
	if (SQUAD_IS_VALID(Local_70.f_276))
	{
		Function_177(&Local_70 + 276);
	}
	if (SQUAD_IS_VALID(Local_70.f_280))
	{
		Function_177(&Local_70 + 280);
	}
	if (SQUAD_IS_VALID(Local_70.f_284))
	{
		Function_177(&Local_70 + 284);
	}
	if (SQUAD_IS_VALID(Local_70.f_288))
	{
		Function_177(&Local_70 + 288);
	}
	if (SQUAD_IS_VALID(Local_70.f_292))
	{
		Function_177(&Local_70 + 292);
	}
	if (SQUAD_IS_VALID(Local_70.f_296))
	{
		Function_177(&Local_70 + 296);
	}
	if (SQUAD_IS_VALID(Local_70.f_300))
	{
		Function_177(&Local_70 + 300);
	}
	if (SQUAD_IS_VALID(Local_70.f_316))
	{
		Function_177(&Local_70 + 316);
	}
	return;
}

void Function_623() //Position: 0x1781D / 96285
{
	return;
}

void Function_624(bool bParam0) //Position: 0x17823 / 96291
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Function_314(&bLocal_420);
	return;
}

void Function_625(bool bParam0) //Position: 0x17838 / 96312
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	iLocal_373 = iVar0;
	return;
}

void Function_626(bool bParam0) //Position: 0x1784C / 96332
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 1);
	Function_344(bVar0);
	return;
}

void Function_627(var uParam0, int iParam1) //Position: 0x17860 / 96352
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_628(var uParam0) //Position: 0x1786C / 96364
{
	Function_629(uParam0);
	return;
}

void Function_629(bool bParam0) //Position: 0x17877 / 96375
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (SQUAD_GOAL_IS_VALID(Local_591.f_60))
		{
			SQUAD_FLOCK_ADD_EXTERNAL_ALERT(Local_591.f_44, Local_591.f_60, bParam0, 19.0f, 4.0f, 0);
			SQUAD_FLOCK_ADD_EXTERNAL_VELOCITY_MATCH(Local_591.f_44, Local_591.f_60, bParam0, 5.0f, 2.0f, 8.0f);
		}
		(*&Local_591 + 104)[GET_LOCAL_SLOT()] = bParam0;
		if (Function_12(iLocal_641, 8192))
		{
			Function_457("COOP_horse_whistle_help", 0x41200000, 1, 0, 2, 1);
			Function_630(4294967295);
		}
		bVar0 = FIND_OBJECT_IN_LAYOUT(Local_70, "corralTrig");
		if (IS_OBJECT_VALID(bVar0))
		{
			GATEWAY_SET_ACTOR(bVar0, bParam0);
		}
	}
	return;
}

void Function_630(bool bParam0) //Position: 0x17924 / 96548
{
	DECOR_SET_INT(Global_34573, "Player_SimWhistle", bParam0);
	DECOR_SET_INT(Global_34573, "WhistleTimeWaited", 100);
	return;
}

bool Function_631() //Position: 0x17964 / 96612
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_637())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_632(&bLocal_528))
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

bool Function_632(bool bParam0) //Position: 0x1799D / 96669
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_636();
	iVar1 = 0;
	if (!Function_170(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_635(bParam0[iVar03], 8);
		}
		else if (Function_634())
		{
			iVar1 = 1;
			Function_635(bParam0[iVar03], 8);
		}
		Function_635(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_170(bParam0[iVar03], 4))
		{
			if (!Function_170(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_170(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_170(bParam0[03], 8) || iVar1));
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
				Function_635(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_170(bParam0[iVar03], 4))
		{
			if (!Function_170(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_635(bParam0[iVar03], 2);
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
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_635(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_635(bParam0[iVar03], 2);
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
	Function_633();
	return 1;
}

void Function_633() //Position: 0x17D18 / 97560
{
	if (!Function_401(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_634() //Position: 0x17D58 / 97624
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

void Function_635(var uParam0, int iParam1) //Position: 0x17D83 / 97667
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_636() //Position: 0x17D94 / 97684
{
	if (!Function_401(128))
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

bool Function_637() //Position: 0x17DD6 / 97750
{
	Function_640(&Local_70 + 4, 477, 2, 0);
	Function_640(&Local_70 + 4, 479, 2, 0);
	Function_640(&Local_70 + 4, 478, 2, 0);
	Function_640(&Local_70 + 4, 480, 2, 0);
	Function_640(&Local_70 + 4, 484, 2, 0);
	Function_640(&Local_70 + 4, 482, 2, 0);
	Function_640(&Local_70 + 4, 483, 2, 0);
	Function_640(&Local_70 + 4, 485, 2, 0);
	Function_640(&Local_70 + 4, 1009, 2, 0);
	Function_640(&Local_70 + 4, 1010, 2, 0);
	Function_640(&Local_70 + 4, 1011, 2, 0);
	Function_640(&Local_70 + 4, 986, 2, 0);
	Function_640(&Local_70 + 4, 982, 2, 0);
	Function_640(&Local_70 + 4, 989, 2, 0);
	Function_640(&Local_70 + 4, 991, 2, 0);
	Function_640(&Local_70 + 4, 481, 2, 0);
	Function_640(&Local_70 + 4, 976, 2, 0);
	Function_640(&Local_70 + 4, 980, 2, 0);
	Function_640(&Local_70 + 4, 990, 2, 0);
	Function_640(&Local_70 + 4, 987, 2, 0);
	Function_638(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_638(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (Function_632(&Local_70 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_638(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x17F76 / 98166
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_639(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_635(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_639(var uParam0, int iParam1, int iParam2) //Position: 0x17FAE / 98222
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_170(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_635(uParam0[iVar03], 4);
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

var Function_640(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x18073 / 98419
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_170(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_635(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_635(uParam0[iVar03], 8);
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

int Function_641(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x18143 / 98627
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_669()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_668()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_668(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_667(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_247(bVar14);
				vVar7 = { StackVal, StackVal, Function_247(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_268(bVar14);
				vVar10 = { StackVal, StackVal, Function_268(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_665(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_664());
							if (Function_663(bVar5))
							{
								if (Function_214((*iParam1 + 228)[bVar52]))
								{
									Function_646(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_643(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_646(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_642(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_646(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_642() //Position: 0x18377 / 99191
{
	return "XPBonus";
}

void Function_643(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x18387 / 99207
{
	bool bVar0;
	
	if (Function_214(Param1))
	{
		bVar0 = Function_645(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_644(), bVar0);
	}
}

var Function_644() //Position: 0x183AD / 99245
{
	return "PackedWeapon";
}

var Function_645(struct<5> Param0) //Position: 0x183C2 / 99266
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_211())) || SHIFT_LEFT(bParam2, Function_211() + 8));
}

void Function_646(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x183E0 / 99296
{
	Function_655(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_651(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_650(), Function_649(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_648(), Function_647(iParam13, iParam14));
}

var Function_647(var uParam0, bool bParam1) //Position: 0x18431 / 99377
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_648() //Position: 0x18441 / 99393
{
	return "PackedGrass";
}

var Function_649(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18455 / 99413
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

var Function_650() //Position: 0x1847A / 99450
{
	return "PackedMetadata";
}

void Function_651(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x18491 / 99473
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_644(), &uVar5))
				{
					Function_209(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_654();
				vVar0 = { StackVal, StackVal, Function_654() };
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
				Function_653();
				vVar0 = { StackVal, StackVal, Function_653() };
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
				Function_652();
				vVar0 = { StackVal, StackVal, Function_652() };
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

vector3 Function_652() //Position: 0x185BC / 99772
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_653() //Position: 0x185CD / 99789
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_654() //Position: 0x185DE / 99806
{
	return 0.0f, 0.158f, -0.163f;
}

int Function_655(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x185EF / 99823
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_662();
			Function_653();
			vVar1 = { StackVal, StackVal, Function_653() };
			break;
		
		case 0x00000001:
			bVar0 = Function_661();
			Function_654();
			vVar1 = { StackVal, StackVal, Function_654() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_660();
			Function_652();
			vVar1 = { StackVal, StackVal, Function_652() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_659(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_657(Function_659()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_656(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_656() //Position: 0x186F3 / 100083
{
	return "MPItemGiver";
}

struct<32> Function_657(bool bParam0) //Position: 0x18707 / 100103
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_658("0", &cVar8, ""), 4);
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

struct<32> Function_658(char* cParam0, char* cParam1, char* cParam2) //Position: 0x18771 / 100209
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_659() //Position: 0x18790 / 100240
{
	return "PBox_";
}

var Function_660() //Position: 0x1879E / 100254
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_661() //Position: 0x187C4 / 100292
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_662() //Position: 0x187EC / 100332
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_663(bool bParam0) //Position: 0x18812 / 100370
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_664() //Position: 0x18822 / 100386
{
	return "ID";
}

bool Function_665(bool bParam0, int iParam1) //Position: 0x1882D / 100397
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_12((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_666())
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

bool Function_666() //Position: 0x18882 / 100482
{
	return Function_45(Global_79962, 1024);
}

var Function_667() //Position: 0x18892 / 100498
{
	return "Type";
}

var Function_668() //Position: 0x1889F / 100511
{
	return "PickupsSet";
}

var Function_669() //Position: 0x188B2 / 100530
{
	return "PickupFlagsSet";
}

void Function_670(int iParam0) //Position: 0x188C9 / 100553
{
	int iVar0;
	var uVar1;
	struct<57> Var2;
	
	Function_715();
	Function_713();
	iVar0 = (Function_153(8) - 1);
	Function_706(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_705(&Global_78578 + 96);
		Function_330(&Global_78578 + 96);
	}
	Function_687(iParam0, 1, 1, 0, 0);
	Function_686(iParam0, 31);
	Function_27(iParam0, 0);
	Function_684(iParam0, 102406);
	Function_683(iParam0, 0);
	Function_280(1, Global_83591);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_290()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_675(iVar0, &uVar1) };
	Function_674(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var2);
	*(&Global_83591 + 276) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_672(1);
	if (Function_493("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0.25f);
	Function_671(3, NET_GET_SESSION_GAMER_COUNT());
	Function_2(0);
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_13();
	return;
}

void Function_671(int iParam0, int iParam1) //Position: 0x189BA / 100794
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_672(bool bParam0) //Position: 0x189DB / 100827
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 100909);
	return;
}

void Function_673(bool bParam0) //Position: 0x18A2D / 100909
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
	if (Function_391(&Var2))
	{
	}
	bVar8 = Function_382(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_390(&Var2, 1);
	Function_16(&Var2);
	return;
}

void Function_674(int iParam0, struct<57> Param1) //Position: 0x18B30 / 101168
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

struct<228> Function_675(int iParam0, int iParam1) //Position: 0x18B44 / 101188
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_680(&Var0);
	Function_678(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 9, 10, 1);
				Function_678(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 11, 6, 1);
				Function_678(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 17, 10, 1);
				Function_678(&Var0, 2, 5, 6, 1);
				Function_678(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 18, 10, 1);
				Function_678(&Var0, 2, 5, 8, 1);
				Function_678(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 19, 20, 0);
				Function_678(&Var0, 2, 4, 8, 1);
				Function_678(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 20, 20, 0);
				Function_678(&Var0, 2, 4, 10, 1);
				Function_678(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 6, 10, 1);
				Function_678(&Var0, 2, 8, 8, 1);
				Function_678(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_677(iParam0, &Var0, iParam1))
			{
				Function_678(&Var0, 1, 2, 10, 1);
				Function_678(&Var0, 2, 8, 9, 1);
				Function_678(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_676(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_676(int iParam0, int iParam1) //Position: 0x18D29 / 101673
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
	Function_678(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_216(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_215(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_678(StackVal, iParam0, *iParam1, iVar19, 1);
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
				Function_209(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_216(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_678(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_677(int iParam0, var uParam1, int iParam2) //Position: 0x18E66 / 101990
{
	if (Function_45(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_678(uParam1, 1, 10, 5, 1);
				Function_678(uParam1, 2, 7, 4, 1);
				Function_678(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_678(uParam1, 1, 17, 6, 1);
				Function_678(uParam1, 2, 6, 4, 1);
				Function_678(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_678(uParam1, 1, 13, 8, 1);
				Function_678(uParam1, 2, 16, 9, 1);
				Function_678(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_678(uParam1, 1, 3, 6, 1);
				Function_678(uParam1, 2, 15, 12, 1);
				Function_678(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_678(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x18F46 / 102214
{
	if (!Function_663(iParam1))
	{
		return;
	}
	Function_679(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_679(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x18F69 / 102249
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

void Function_680(int iParam0) //Position: 0x18F93 / 102291
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_682(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_681(iParam0, 0.0f);
	return;
}

void Function_681(var uParam0, int iParam1) //Position: 0x18FC0 / 102336
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_682(int iParam0) //Position: 0x18FCC / 102348
{
	Function_679(iParam0, 4294967295, 0, 1);
	return;
}

void Function_683(int iParam0, bool bParam1) //Position: 0x18FDA / 102362
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

void Function_684(var uParam0, int iParam1) //Position: 0x18FFA / 102394
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_685() //Position: 0x19006 / 102406
{
	int iVar0;
	
	Function_279(1, 4294967295);
	iVar0 = Function_153(1);
	Function_46(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_559, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", false, false, false, false);
	}
	else
	{
		Function_281("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_27(&bLocal_420, 1);
		NET_LOG(bLocal_559, "Local State", "Player has lost all their lives.  Disabling Respawning.", false, false, false, false);
	}
	return;
}

void Function_686(var uParam0, int iParam1) //Position: 0x190ED / 102637
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_687(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x190F9 / 102649
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
	Function_674(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_223(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_686(iParam0, 2);
	Function_703(iParam0);
	Function_700(iParam0);
	Function_698(iParam0);
	Function_697(iParam0);
	Function_694(iParam0);
	Function_692(iParam0);
	Function_689(iParam0);
	if (bParam2)
	{
		Function_10(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_10(iParam0 + 44, 8);
		Function_217(iParam0 + 192);
	}
	Function_688(iParam0, bParam4);
	Function_46(8388608, 0);
}

void Function_688(int iParam0, bool bParam1) //Position: 0x191C1 / 102849
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

void Function_689(int iParam0) //Position: 0x191E1 / 102881
{
	Function_690(iParam0, 102908);
	return;
}

void Function_690(var uParam0, var uParam1) //Position: 0x191F0 / 102896
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_691() //Position: 0x191FC / 102908
{
	return 0;
}

void Function_692(var uParam0) //Position: 0x19203 / 102915
{
	Function_331(uParam0, 102930);
	return;
}

int Function_693() //Position: 0x19212 / 102930
{
	return 1;
}

void Function_694(int iParam0) //Position: 0x19219 / 102937
{
	Function_695(iParam0, 102964);
	return;
}

void Function_695(var uParam0, var uParam1) //Position: 0x19228 / 102952
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_696() //Position: 0x19234 / 102964
{
	return;
}

void Function_697(int iParam0) //Position: 0x1923A / 102970
{
	Function_684(iParam0, 102964);
	return;
}

void Function_698(int iParam0) //Position: 0x19249 / 102985
{
	Function_699(iParam0, 102964);
	return;
}

void Function_699(var uParam0, int iParam1) //Position: 0x19258 / 103000
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_700(int iParam0) //Position: 0x19264 / 103012
{
	Function_701(iParam0, 103039);
	return;
}

void Function_701(var uParam0, var uParam1) //Position: 0x19273 / 103027
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_702() //Position: 0x1927F / 103039
{
	return 0;
}

void Function_703(int iParam0) //Position: 0x19286 / 103046
{
	Function_627(iParam0, 103061);
	return;
}

void Function_704(var uParam0) //Position: 0x19295 / 103061
{
	uParam0 = uParam0;
	return;
}

void Function_705(int iParam0) //Position: 0x1929F / 103071
{
	Function_485(iParam0, 0.0f);
	return;
}

void Function_706(int iParam0) //Position: 0x192AB / 103083
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
			Function_292(12288);
			Function_37(16384);
			break;
		
		case 0x00000002:
			Function_292(20480);
			Function_37(8192);
			break;
		
		default:
			Function_37(28672);
			break;
	}
	Function_37(2048);
	Function_707(0, 0);
	Function_243();
	return;
}

void Function_707(bool bParam0, bool bParam1) //Position: 0x1936F / 103279
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_712(&Global_78480);
	Function_711(&Global_78480);
	uVar0 = Function_150(37);
	Function_709();
	if (!bParam0)
	{
		Function_151(37, uVar0);
	}
	Function_46(18264, 0);
	Function_708();
	return;
}

void Function_708() //Position: 0x193BB / 103355
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_709() //Position: 0x193DA / 103386
{
	Function_710(&Global_78480 + 220);
	return;
}

void Function_710(int iParam0) //Position: 0x193E9 / 103401
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

void Function_711(int iParam0) //Position: 0x1940A / 103434
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

void Function_712(int iParam0) //Position: 0x1942E / 103470
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

void Function_713() //Position: 0x19452 / 103506
{
	Local_673 = 0;
	Local_673.f_16 = "";
	Function_714(&Local_673 + 4);
	return;
}

void Function_714(var uParam0) //Position: 0x1946C / 103532
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_715() //Position: 0x19480 / 103552
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_716(var uParam0, int iParam1) //Position: 0x19494 / 103572
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_717(int iParam0) //Position: 0x194A3 / 103587
{
	switch (iParam0)
	{
		case 0x00000002:
			Local_658 = 4;
			Local_658.f_4 = 10.0f;
			Local_658.f_8 = 4.0f;
			Local_658.f_12 = 1;
			Local_658.f_16 = 2;
			Local_658.f_20 = 2;
			Local_658.f_24 = 2;
			break;
		
		case 0x00000003:
			Local_658 = 5;
			Local_658.f_4 = 7.5f;
			Local_658.f_8 = 6.0f;
			Local_658.f_12 = 2;
			Local_658.f_16 = 3;
			Local_658.f_20 = 3;
			Local_658.f_24 = 3;
			break;
	}
	return;
}

void Function_718() //Position: 0x1951A / 103706
{
	Function_638(&bLocal_528, "dlc_mpcooppack_mp_coop", 10, 0);
	Function_638(&bLocal_528, "dlc_mpcooppack_mp_coop_pik", 10, 0);
	Function_638(&bLocal_528, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	return;
}

struct<8> Function_719() //Position: 0x195AE / 103854
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
	
	Function_726(4, 1);
	uVar0 = uVar0;
	Local_70 = CREATE_LAYOUT("PikesBasinMP_CO_layout");
	Local_70.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_70, "SpawnVol_0", 2, -1099.109f, 104.3027f, 2432.41f, 0.0f, 242.4445f, 0.0f, 4.849996f, 2.855512f, 5.500362f);
	Local_70.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_70, "SpawnVol_1", 2, -1146.16f, 88.62094f, 2348.322f, 14.9724f, -60.81233f, -17.03131f, 7.154366f, 0.7709651f, 5.6513f);
	Local_70.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_70, "PIK_Herd_Start", 3, -1164.309f, 80.27467f, 2363.4f, 0.0f, 24.07089f, 0.0f, 11.73316f, 5.431334f, 20.078f);
	Local_70.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_70, "horsespawnvolume", 2, -1181.89f, 77.3795f, 2355.752f, 0.0f, 465.0425f, 0.0f, 12.03146f, 2.323527f, 3.791153f);
	Local_70.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Cow_wander_vol", 3, -1161.182f, 77.13277f, 2364.295f, 0.0f, 21.74603f, 0.0f, 10.50757f, 1.635337f, 20.72439f);
	Local_70.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_1", 2, -1265.675f, 69.83556f, 2517.99f, 0.0f, -40.84436f, 0.0f, 9.366943f, 4.117354f, 45.80561f);
	Local_70.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_2", 2, -1346.943f, 74.84577f, 2427.911f, 0.0f, 71.85354f, 0.0f, 12.74233f, 13.20245f, 87.77088f);
	Local_70.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_3", 2, -1405.742f, 69.91273f, 2474.402f, 0.0f, -56.48386f, 0.0f, 20.9315f, 14.50929f, 92.83823f);
	Local_70.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_4", 2, -1476.0f, 68.95782f, 2436.0f, 0.0f, 37.21232f, 0.0f, 28.10437f, 24.52632f, 44.95271f);
	Local_70.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_5", 2, -1287.956f, 76.88491f, 2373.541f, 0.0f, -4.611573f, 0.0f, 18.33424f, 13.05346f, 68.11426f);
	Local_70.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_6", 2, -1284.21f, 70.57762f, 2532.986f, 0.0f, -29.10751f, 0.0f, 93.3163f, 10.63363f, 17.48104f);
	Local_70.f_376 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_7", 2, -1256.669f, 75.38432f, 2468.609f, 0.0f, 31.99023f, 0.0f, 18.24021f, 16.39023f, 40.67301f);
	Local_70.f_380 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_8", 2, -1336.152f, 75.22914f, 2459.716f, 0.0f, 43.56258f, 0.0f, 13.63409f, 10.27222f, 17.77549f);
	Local_70.f_384 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_9", 2, -1432.19f, 65.24512f, 2456.543f, 0.0f, 38.81338f, 0.0f, 11.63475f, 19.95383f, 9.879257f);
	Local_70.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_70, "cow_catcher_vol_10", 2, -2178.105f, 16.68834f, 2524.915f, 0.0f, 0.0f, 0.0f, 3.712893f, 3.272386f, 14.34754f);
	Local_70.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Camp_Small_Volume", 3, -1186.632f, 71.72458f, 2374.66f, 0.0f, 2.324574f, 0.0f, 42.17451f, 8.013999f, 40.95615f);
	Local_70.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Camp_Big_Volume", 3, -1190.332f, 81.55849f, 2371.26f, 0.0f, -4.470283f, 0.0f, 64.60655f, 8.474653f, 65.36998f);
	Local_70.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Basin_Defend_Volume_1", 2, -1203.356f, 75.295f, 2353.913f, 0.0f, 0.0f, 0.0f, 3.199983f, 2.353496f, 3.116015f);
	Local_70.f_404 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Basin_Defend_Volume_2", 2, -1206.202f, 75.264f, 2370.123f, 0.0f, 0.0f, 0.0f, 2.959584f, 1.797517f, 5.129663f);
	Local_70.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_70, "S2_Camp1_Spawn", 2, -1274.61f, 82.756f, 2414.55f, 0.0f, 0.0f, 0.0f, 69.7791f, 28.28057f, 2.738478f);
	Local_70.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_70, "S2_Camp1_Task", 2, -1278.227f, 81.87556f, 2460.468f, 0.0f, 0.0f, 0.0f, 50.01871f, 28.28057f, 2.738478f);
	Local_70.f_416 = CREATE_VOLUME_IN_LAYOUT(Local_70, "S2_Camp2_Spawn", 2, -1273.231f, 72.90562f, 2518.878f, 0.0f, 111.8173f, 0.0f, 66.54749f, 30.43366f, 3.864209f);
	Local_70.f_420 = CREATE_VOLUME_IN_LAYOUT(Local_70, "S2_Camp2_Task", 2, -1310.759f, 76.89803f, 2501.897f, 0.0f, 26.08277f, 0.0f, 55.42781f, 25.35164f, 2.735201f);
	Local_70.f_424 = CREATE_VOLUME_IN_LAYOUT(Local_70, "S2_Camp3_Task", 2, -1292.016f, 67.36183f, 2514.933f, 0.0f, 65.5207f, 0.0f, 64.68532f, 53.23733f, 2.790899f);
	Local_70.f_428 = CREATE_VOLUME_IN_LAYOUT(Local_70, "Basin_Charge_Volume", 3, -1504f, 58.84618f, 2464.0f, 0.0f, 20.0f, 0.0f, 19.91137f, 2.98555f, 13.4625f);
	Local_70.f_496 = CREATE_VOLUME_SET_IN_LAYOUT(Local_70, "GatewayUpdates_set");
	(*&Local_70 + 432)[0] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_1", 2, -1267.423f, 72.48687f, 2373.616f, 0.0f, 0.0f, 0.0f, 31.36577f, 19.16613f, 59.92793f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[0]);
	(*&Local_70 + 432)[1] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_2", 2, -1274.437f, 73.90547f, 2426.095f, 0.0f, -25.69268f, 0.0f, 52.43965f, 18.98013f, 18.98013f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[1]);
	(*&Local_70 + 432)[2] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_3", 2, -1262.569f, 69.37211f, 2497.333f, 0.0f, 0.0f, 0.0f, 55.09904f, 21.67981f, 21.67981f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[2]);
	(*&Local_70 + 432)[3] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_4", 2, -1316.764f, 72.519f, 2463.884f, 0.0f, -66.02962f, 0.0f, 22.13975f, 22.13975f, 40.33789f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[3]);
	(*&Local_70 + 432)[4] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_5", 2, -1389.833f, 69.46461f, 2440.991f, 0.0f, 33.73674f, 0.0f, 24.4568f, 24.4568f, 44.66702f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[4]);
	(*&Local_70 + 432)[5] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_6", 2, -1506.346f, 58.36192f, 2469.01f, 0.0f, 0.0f, 0.0f, 44.59922f, 44.59922f, 95.25363f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[5]);
	(*&Local_70 + 432)[6] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_7", 2, -1632.348f, 53.92415f, 2409.909f, 0.0f, -40.16017f, 0.0f, 23.43942f, 23.43942f, 62.24516f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[6]);
	(*&Local_70 + 432)[7] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_8", 2, -1754.556f, 39.5961f, 2344.229f, 0.0f, -45.54712f, 0.0f, 7.292909f, 7.115722f, 49.25927f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[7]);
	(*&Local_70 + 432)[8] = CREATE_VOLUME_IN_LAYOUT(Local_70, "nGat_upd_9", 2, -1872.323f, 25.5193f, 2264.76f, 0.0f, 0.0f, 0.0f, 22.1591f, 22.1591f, 47.79092f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[8]);
	(*&Local_70 + 432)[9] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_10", 2, -1902.222f, 27.17781f, 2234.085f, 0.0f, 2.348423f, 0.0f, 21.85353f, 21.85353f, 50.02913f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[9]);
	(*&Local_70 + 432)[10] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_11", 2, -2022.898f, 19.31752f, 2202.451f, 0.0f, -110.4683f, 0.0f, 55.90919f, 21.38766f, 21.38766f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[10]);
	(*&Local_70 + 432)[11] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_12", 2, -2134.151f, 17.40248f, 2196.423f, 0.0f, 27.30886f, 0.0f, 26.23498f, 26.23498f, 47.06256f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[11]);
	(*&Local_70 + 432)[12] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_13", 2, -2183.539f, 17.32632f, 2270.446f, 0.0f, 93.36243f, 0.0f, 26.70279f, 26.70279f, 45.06502f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[12]);
	(*&Local_70 + 432)[13] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_14", 2, -2198.572f, 17.94032f, 2367.875f, 0.0f, 84.63954f, 0.0f, 26.19102f, 26.19102f, 40.96714f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[13]);
	(*&Local_70 + 432)[14] = CREATE_VOLUME_IN_LAYOUT(Local_70, "Gat_upd_15", 2, -2204.956f, 19.52614f, 2469.558f, 0.0f, 178.8302f, 0.0f, 42.35998f, 17.92587f, 21.49589f);
	ADD_TO_VOLUME_SET(Local_70.f_496, (*&Local_70 + 432)[14]);
	Local_70.f_564 = CREATE_VOLUME_SET_IN_LAYOUT(Local_70, "S2_Spawn_Vols_set");
	(*&Local_70 + 500)[0] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_1", 2, -1266.101f, 72.27268f, 2376.845f, 0.0f, 0.0f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[0]);
	(*&Local_70 + 500)[1] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_2", 2, -1268.295f, 71.34782f, 2411.817f, 0.0f, -19.9643f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[1]);
	(*&Local_70 + 500)[2] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_3", 2, -1280.705f, 70.3058f, 2444.24f, 0.0f, -3.122171f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[2]);
	(*&Local_70 + 500)[3] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_4", 2, -1317.328f, 72.35734f, 2466.355f, 0.0f, -149.4779f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[3]);
	(*&Local_70 + 500)[4] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_5", 2, -1390.965f, 69.43257f, 2439.951f, 0.0f, -53.91074f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[4]);
	(*&Local_70 + 500)[5] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_6", 2, -1486.651f, 59.51666f, 2472.179f, 0.0f, -87.62476f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[5]);
	(*&Local_70 + 500)[6] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_7", 2, -1634.494f, 53.90985f, 2408.177f, 0.0f, -115.899f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[6]);
	(*&Local_70 + 500)[7] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_8", 2, -1754.682f, 37.65957f, 2344.001f, 0.0f, -148.819f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[7]);
	(*&Local_70 + 500)[8] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_9", 2, -1855.113f, 25.62251f, 2268.094f, 0.0f, -93.25197f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[8]);
	(*&Local_70 + 500)[9] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_10", 2, -1902.222f, 27.17781f, 2234.085f, 0.0f, -93.56842f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[9]);
	(*&Local_70 + 500)[10] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_11", 2, -2022.898f, 19.31752f, 2202.451f, 0.0f, -110.4683f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[10]);
	(*&Local_70 + 500)[11] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_12", 2, -2134.151f, 17.40248f, 2196.423f, 0.0f, -22.56637f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[11]);
	(*&Local_70 + 500)[12] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_13", 2, -2183.539f, 17.32632f, 2270.446f, 0.0f, 0.8301095f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[12]);
	(*&Local_70 + 500)[13] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_14", 2, -2198.572f, 17.94032f, 2367.875f, -359.1317f, -6.778076f, 359.8522f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[13]);
	(*&Local_70 + 500)[14] = CREATE_VOLUME_IN_LAYOUT(Local_70, "trigspawn_15", 2, -2204.956f, 16.82925f, 2469.558f, 0.0f, -1.440563f, 0.0f, 7.154366f, 0.7709651f, 5.6513f);
	ADD_TO_VOLUME_SET(Local_70.f_564, (*&Local_70 + 500)[14]);
	Local_70.f_568 = CREATE_VOLUME_IN_LAYOUT(Local_70, "HerdingStartVol", 2, -1262.805f, 78.79725f, 2376.342f, 0.0f, 0.0f, 0.0f, 23.06615f, 12.7219f, 41.99805f);
	Local_70.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_70, "CUTSCENE_FINAL_CLEAR_VOLUME", 2, -2170.506f, 17.18032f, 2541.864f, 0.0f, 0.0f, 0.0f, 105.9072f, 4.560744f, 121.6886f);
	Local_70.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_70, "PIK_Herd_Goal", 2, -2186.221f, 16.33431f, 2535.593f, 0.0f, -5.466657f, 0.0f, 9.261168f, 5.111691f, 15.17869f);
	Local_70.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_70, "PIK_Goal_Wander", 3, -2163.11f, 16.16132f, 2529.733f, 0.0f, 11.73565f, 0.0f, 13.46953f, 2.324465f, 11.39235f);
	Local_70.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_70, "PIK_Corral_Open_Trigger", 2, -1176.835f, 76.299f, 2367.833f, -0.6778462f, 22.00597f, -0.4069002f, 4.2287f, 1.924315f, 6.790975f);
	Local_70.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_70, "PIK_Corral_Tiny_Exclusion", 2, -1165.888f, 76.76913f, 2381.159f, 0.0f, 47.97589f, 0.0f, 1.621331f, 1.881322f, 2.338224f);
	*(&Local_70 + 592) = { -1208.0f, 75.29413f, 2368.0f };
	*(&Local_70 + 592 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_70.f_616 = CREATE_POINT_IN_LAYOUT(Local_70, "Stage1_Rustler_Dest", -1208.0f, 75.29413f, 2368.0f, 0.0f, 0.0f, 0.0f);
	Local_70.f_620 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_70, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_70, "PIK_Basin_Ammo_1", -1190.549f, 75.295f, 2378.584f, 0.0f, 180.0f, 0.0f);
	Function_725(bVar1, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_70.f_620);
	Local_70.f_624 = CREATE_OBJECTSET_IN_LAYOUT("Ridge1_DestSet", Local_70, 8, 0);
	*(&Local_70 + 628[06]) = { -1217.484f, 74.291f, 2372.42f };
	*(&Local_70 + 628[06] + 12) = { 0.0f, -141.489f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_70, "nr1_dest_1", -1217.484f, 74.291f, 2372.42f, 0.0f, -141.489f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_70.f_624);
	*(&Local_70 + 628[16]) = { -1209.019f, 74.291f, 2381.107f };
	*(&Local_70 + 628[16] + 12) = { 0.0f, -142.6893f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_70, "nr1_dest_2", -1209.019f, 74.291f, 2381.107f, 0.0f, -142.6893f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_70.f_624);
	*(&Local_70 + 628[26]) = { -1207.547f, 75.295f, 2365.967f };
	*(&Local_70 + 628[26] + 12) = { 0.0f, -141.6841f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_70, "nr1_dest_3", -1207.547f, 75.295f, 2365.967f, 0.0f, -141.6841f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_70.f_624);
	*(&Local_70 + 628[36]) = { -1216.125f, 74.291f, 2369.267f };
	*(&Local_70 + 628[36] + 12) = { 0.0f, -164.4654f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_70, "nr1_dest_4", -1216.125f, 74.291f, 2369.267f, 0.0f, -164.4654f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_70.f_624);
	Local_70.f_728 = CREATE_OBJECTSET_IN_LAYOUT("Ridge2_DestSet", Local_70, 8, 0);
	*(&Local_70 + 732[06]) = { -1228.751f, 81.641f, 2398.972f };
	*(&Local_70 + 732[06] + 12) = { 0.0f, -31.82276f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_70, "nr2_dest_1", -1228.751f, 81.641f, 2398.972f, 0.0f, -31.82276f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_70.f_728);
	*(&Local_70 + 732[16]) = { -1168.763f, 79.495f, 2405.962f };
	*(&Local_70 + 732[16] + 12) = { 0.0f, 16.68595f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_70, "nr2_dest_2", -1168.763f, 79.495f, 2405.962f, 0.0f, 16.68595f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_70.f_728);
	*(&Local_70 + 732[26]) = { -1145.356f, 82.157f, 2391.542f };
	*(&Local_70 + 732[26] + 12) = { 0.0f, 62.06835f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_70, "nr2_dest_3", -1145.356f, 82.157f, 2391.542f, 0.0f, 62.06835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_70.f_728);
	Local_70.f_808 = CREATE_OBJECTSET_IN_LAYOUT("Ridge3_DestSet", Local_70, 8, 0);
	*(&Local_70 + 812[06]) = { -1133.984f, 99.0f, 2395.435f };
	*(&Local_70 + 812[06] + 12) = { 0.0f, 80.76582f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_70, "nr3_dest_1", -1133.984f, 99.0f, 2395.435f, 0.0f, 80.76582f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_70.f_808);
	*(&Local_70 + 812[16]) = { -1130.086f, 98.85f, 2379.347f };
	*(&Local_70 + 812[16] + 12) = { 0.0f, 99.8754f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_70, "nr3_dest_2", -1130.086f, 98.85f, 2379.347f, 0.0f, 99.8754f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_70.f_808);
	*(&Local_70 + 812[26]) = { -1135.231f, 97.008f, 2355.695f };
	*(&Local_70 + 812[26] + 12) = { 0.0f, 111.2964f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_70, "nr3_dest_3", -1135.231f, 97.008f, 2355.695f, 0.0f, 111.2964f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_70.f_808);
	Local_70.f_888 = CREATE_OBJECTSET_IN_LAYOUT("Camp_DestSet", Local_70, 8, 0);
	*(&Local_70 + 892[06]) = { -1252.895f, 77.314f, 2508.406f };
	*(&Local_70 + 892[06] + 12) = { 0.0f, 33.06841f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_70, "c_dest_1", -1252.895f, 77.314f, 2508.406f, 0.0f, 33.06841f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_70.f_888);
	*(&Local_70 + 892[16]) = { -1254.451f, 76.369f, 2513.354f };
	*(&Local_70 + 892[16] + 12) = { 0.0f, 27.32024f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_70, "c_dest_2", -1254.451f, 76.369f, 2513.354f, 0.0f, 27.32024f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_70.f_888);
	*(&Local_70 + 892[26]) = { -1260.697f, 74.94f, 2519.984f };
	*(&Local_70 + 892[26] + 12) = { 0.0f, 15.31174f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_70, "c_dest_3", -1260.697f, 74.94f, 2519.984f, 0.0f, 15.31174f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_70.f_888);
	*(&Local_70 + 892[36]) = { -1269.083f, 73.953f, 2525.283f };
	*(&Local_70 + 892[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_70, "c_dest_4", -1269.083f, 73.953f, 2525.283f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_70.f_888);
	Local_70.f_992 = CREATE_OBJECTSET_IN_LAYOUT("Camp2_DestSet", Local_70, 8, 0);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_70, "nc2_dest_1", -1321.73f, 79.29006f, 2480.216f, 0.0f, -64.16389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_70.f_992);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_70, "nc2_dest_2", -1325.816f, 79.32233f, 2473.654f, 0.0f, -74.95555f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_70.f_992);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_70, "nc2_dest_3", -1326.471f, 79.2086f, 2465.292f, 0.0f, -53.71378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_70.f_992);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_70, "nc2_dest_4", -1332.427f, 79.22949f, 2458.395f, 0.0f, -69.36074f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_70.f_992);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_70, "nc2_dest_5", -1340.434f, 79.05433f, 2452.264f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_70.f_992);
	*(&Local_70 + 996) = { -1160.105f, 78.25367f, 2363.956f };
	*(&Local_70 + 996 + 12) = { 0.0f, 112.2682f, 0.0f };
	Local_70.f_1020 = CREATE_POINT_IN_LAYOUT(Local_70, "herd_start_01", -1160.105f, 78.25367f, 2363.956f, 0.0f, 112.2682f, 0.0f);
	*(&Local_70 + 1024) = { -2161.716f, 16.13675f, 2530.284f };
	*(&Local_70 + 1024 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_70.f_1048 = CREATE_POINT_IN_LAYOUT(Local_70, "end_position", -2161.716f, 16.13675f, 2530.284f, 0.0f, 0.0f, 0.0f);
	Local_70.f_1052 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn1Set", Local_70, 8, 0);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_70, "ps1_1", -1676.0f, 55.21567f, 2280.0f, 0.0f, -179.1143f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_70.f_1052);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_70, "ps1_2", -1728.0f, 51.19998f, 2396.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_70.f_1052);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_70, "ps1_3", -1645.437f, 64.82694f, 2302.563f, 0.0f, -188.4079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_70.f_1052);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_70, "ps1_4", -1704.0f, 56.02859f, 2436.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_70.f_1052);
	Local_70.f_1056 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn2Set", Local_70, 8, 0);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_70, "ps2_1", -1764.0f, 32.12549f, 2220.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_70.f_1056);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_70, "ps2_2", -1869.601f, 28.85399f, 2325.602f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_70.f_1056);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_70, "ps2_3", -1844.0f, 28.97395f, 2302.065f, 0.0f, -177.1091f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_70.f_1056);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_70, "ps2_4", -1831.497f, 28.16061f, 2208.502f, 0.0f, 154.3876f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_70.f_1056);
	Local_70.f_1060 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn3Set", Local_70, 8, 0);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_70, "ps3_1", -2048.0f, 16.56471f, 2364f, 0.0f, -129.1882f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_70.f_1060);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_70, "ps3_2", -1858.434f, 24.53992f, 2058.546f, 0.0f, -160.0044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_70.f_1060);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_70, "ps3_3", -1856.0f, 30.11765f, 2444.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_70.f_1060);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_70, "ps3_4", -1802.514f, 36.14117f, 2100.0f, 0.0f, -63.40827f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_70.f_1060);
	Local_70.f_1064 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn4Set", Local_70, 8, 0);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_70, "ps4_1", -2052f, 16.59595f, 2320f, -0.7982557f, 2.39555f, 2.231873f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_70.f_1064);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_70, "ps4_2", -1979.842f, 25.09805f, 2083.843f, 0.0f, -28.79153f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_70.f_1064);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_70, "ps4_3", -2028f, 18.07059f, 2080.0f, 0.0f, -70.35365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_70.f_1064);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_70, "ps4_4", -2051.944f, 16.56468f, 2304f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_70.f_1064);
	Local_70.f_1068 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn5Set", Local_70, 8, 0);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_70, "ps5_1", -2212f, 21.08235f, 2172f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_70.f_1068);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_70, "ps5_2", -2146.249f, 18.07059f, 2096f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_70.f_1068);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_70, "ps5_3", -2076.0f, 17.97966f, 2260.443f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_70.f_1068);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_70, "ps5_4", -2230.567f, 21.17587f, 2184.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_70.f_1068);
	Local_70.f_1072 = CREATE_OBJECTSET_IN_LAYOUT("predatorspawn6Set", Local_70, 8, 0);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_70, "ps6_1", -2088f, 17.06666f, 2380f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_70.f_1072);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_70, "ps6_2", -2104.0f, 17.06666f, 2337.687f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_70.f_1072);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_70, "ps6_3", -2279.229f, 20.91651f, 2396f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_70.f_1072);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_70, "ps6_4", -2265.743f, 22.0872f, 2292.956f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_70.f_1072);
	*(&Local_70 + 1076) = { -1080.296f, 125.8383f, 2364.908f };
	*(&Local_70 + 1076 + 12) = { 158.5518f, 80.09558f, 163.6628f };
	Local_70.f_1100 = CREATE_POINT_IN_LAYOUT(Local_70, "CUTSCENE01_STREAMING", -1080.296f, 125.8383f, 2364.908f, 158.5518f, 80.09558f, 163.6628f);
	*(&Local_70 + 1104) = { -2192.463f, 28.91702f, 2536.781f };
	*(&Local_70 + 1104 + 12) = { 0.0f, -76.15075f, 0.0f };
	Local_70.f_1128 = CREATE_POINT_IN_LAYOUT(Local_70, "CUTSCENEFINAL_STREAMING", -2192.463f, 28.91702f, 2536.781f, 0.0f, -76.15075f, 0.0f);
	Local_70.f_1132 = CREATE_OBJECTSET_IN_LAYOUT("CUTSCENE_FINAL_WARPSet", Local_70, 8, 0);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_70, "warp1", -2225.38f, 15.883f, 2564.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_70.f_1132);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_70, "warp2", -2222.213f, 16.05446f, 2564.254f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_70.f_1132);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_70, "warp3", -2226.903f, 15.71168f, 2568f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_70.f_1132);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_70, "warp4", -2221.16f, 16.10616f, 2568.089f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_70.f_1132);
	Local_70.f_1136 = CREATE_OBJECTSET_IN_LAYOUT("CUTSCENE01_PLAYER_STARTSSet", Local_70, 8, 0);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PS_1", -1094.724f, 103.0836f, 2372.0f, 0.0f, 86.23838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_70.f_1136);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PS_2", -1094.92f, 103.4039f, 2368.0f, 0.0f, 86.23838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_70.f_1136);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PS_3", -1094.753f, 103.8672f, 2364.0f, 0.0f, 86.23838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_70.f_1136);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PS_4", -1095.257f, 105.2254f, 2360.0f, 0.0f, 86.23838f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_70.f_1136);
	Local_70.f_1140 = CREATE_OBJECTSET_IN_LAYOUT("CUTSCENE01_PLAYER_DESTSet", Local_70, 8, 0);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PD_1", -1121.056f, 103.5255f, 2415.538f, 0.0f, 46.8032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_70.f_1140);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PD_2", -1120.014f, 103.5255f, 2414.487f, 0.0f, 46.8032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_70.f_1140);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PD_3", -1119.955f, 104.0344f, 2417.231f, 0.0f, 46.8032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_70.f_1140);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_70, "C1PD_4", -1118.316f, 103.9572f, 2415.169f, 0.0f, 46.8032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_70.f_1140);
	*(&Local_70 + 1144) = { -2163.11f, 16.16132f, 2529.733f };
	*(&Local_70 + 1144 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_70.f_1168 = CREATE_POINT_IN_LAYOUT(Local_70, "nGoal_Dest", -2163.11f, 16.16132f, 2529.733f, 0.0f, 0.0f, 0.0f);
	Local_70.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Sit_Ground_Drink", "Sit_Ground_Drink", -1200.621f, 75.295f, 2371.006f, 0.0f, -43.22654f, 0.0f);
	Local_70.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Sit_Ground_Drink1", "Sit_Ground_Drink", -1195.699f, 75.295f, 2365.145f, 0.0f, -220.2943f, 0.0f);
	Local_70.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_70, "lean_fence_back", "lean_fence_back", -1170.923f, 76.298f, 2374.574f, 0.0f, 278.1639f, 0.0f);
	Local_70.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_70, "lean_fence_back1", "lean_fence_back", -1177.116f, 76.298f, 2361.18f, 0.0f, 281.5887f, 0.0f);
}

var E)Ä_ÿB6EO÷ÄJöB£EÄÝBÆECÄYBOERPÄ¬òBÌJEKÄ%B* E|ÄÜèB_$E&Ä B£zE¤2Ä ¯B]E$ÿÄº$Bz¸Eß¡ÄB^uEÓÄ7»BOqE(var uParam0, var uParam1) //Position: 0x1C00A / 114698
{
	int iVar62;
	
	PatchTrap0();
	CallPatch();
	PatchTrapE();
	return 2 * 6147;
}

struct<8> Ä³qÃB}Í^EwÂÄµÿò(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x1C1B3 / 115123
{
}

vector3 ÄÓ9$B4+EPè(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x1C2C7 / 115399
{
	bool bVar126;
	var uVar16866;
	
	PatchRet();
	PatchTrap3();
}

var EßÄ4%BXAEþ¾ÄXçBE;	Ä[?BEs¿ÄaÞBE-ÄeBÄÚEÏUÄ|BEß=ÄÐBEúäÄ BE
ÄBEüÄ  BEPÄBE>Ä BEÄö(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x1C9E2 / 117218
{
	int iVar70;
	
	return 2.0f;
	Unknown_Function();
	Unknown_Function();
	return 4.0f;
	PatchTrap9();
	CallPatch();
}

vector3 ÄgBEL>Ä B¹=EjÄ
B,LEuüÄéFBE^ÄIBE7Ä¯BE¨6ÄýBE´Ä BEÞÄÂxBEyñÄ×FBEÃÄ¬©BEé+ÄDBEòÄÄBEñãÄUþBEâ Ä×BØsEï&Ä6BEÃÄ½sBE:GÄ 5B¿EïóÄ¨°BEî Ä¦ÀBEíÔÄñ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x1CBA3 / 117667
{
	PatchTrap3();
	Unknown_Function();
	return StackVal, StackVal, (*(StackVal - 28522)->f_17683)[StackVal196];
	Local_70.f_1208 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal * 5146, 3);
	return;
}

void Function_725(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1CCB9 / 117945
{
	DECOR_SET_INT(uParam0, Function_667(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_664(), bParam2);
	}
	return;
}

void Function_726(int iParam0, int iParam1) //Position: 0x1CCDD / 117981
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

int Function_727() //Position: 0x1CD26 / 118054
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

void Function_728(bool bParam0) //Position: 0x1CDD5 / 118229
{
	if (!Function_174(bParam0))
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

void Function_729(var uParam0, int iParam1) //Position: 0x1CE04 / 118276
{
	Function_734(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_730(StackVal, iParam1);
	}
	return;
}

void Function_730(int iParam0, int iParam1) //Position: 0x1CE35 / 118325
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_734(iParam0);
	Function_733(iVar0);
	PRINTNL();
	Function_731(iParam0, iVar0, iParam1);
	return;
}

void Function_731(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CE5A / 118362
{
	int iVar0;
	
	Function_734(iParam0);
	Function_733(bParam1);
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
	Function_732();
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

void Function_732() //Position: 0x1CFD3 / 118739
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_733(bool bParam0) //Position: 0x1CFDF / 118751
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

void Function_734(int iParam0) //Position: 0x1D025 / 118821
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

void Function_735(int iParam0, int iParam1) //Position: 0x1D06B / 118891
{
	struct<5> Var0;
	
	Var0 = iParam0;
	Var0.f_4 = iParam1;
	NET_SCRIPTMSG_SEND(3, 40, &Var0, 2, 1);
	return;
}

bool Function_736(var uParam0) //Position: 0x1D086 / 118918
{
	return (iLocal_373 != 99 || Function_303(uParam0));
}

void Function_737() //Position: 0x1D098 / 118936
{
	var uVar0[4];
	int iVar5;
	
	if (Function_74())
	{
		uVar0[0] = "Stage01 - Attack the Rustlers";
		uVar0[1] = "Stage02 - Herd the Cows";
		uVar0[2] = "Last Stage - Final Stage Stuff";
		uVar0[3] = "Quit Mission";
		iVar5 = Function_741(&Local_375, &uVar0, "RDR CO-OP MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (Function_740(&iVar5, &iLocal_373, &iLocal_374, &Local_382))
		{
			Function_67();
			Function_14();
		}
		switch (iVar5)
		{
			case 0x00000000:
				Function_739(0);
				break;
			
			case 0x00000001:
				Function_739(3);
				break;
			
			case 0x00000002:
				Function_739(101);
				break;
			
			case 0x00000003:
				Function_67();
				Function_14();
				Function_738();
				break;
			}
	}
	return;
}

void Function_738() //Position: 0x1D1A6 / 119206
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 1, 1);
	return;
}

void Function_739(int iParam0) //Position: 0x1D1BA / 119226
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 1, 1);
	return;
}

bool Function_740(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1D1CF / 119247
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
		Function_341("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_741(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1D275 / 119413
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_754(&Var15, &Var0);
	uVar20 = Function_753(*uParam1, &Var15);
	Function_752(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_751(uParam0, uVar20);
	Function_749(StackVal, uParam0, Var15.f_12);
	Function_747(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_746(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_743(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_742(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_742(int iParam0, int iParam1, int iParam2) //Position: 0x1D33C / 119612
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

bool Function_743(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1D398 / 119704
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
				Function_745(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_745(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_742(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_744(bParam1->f_32);
	}
	else
	{
		Function_744(bParam1->f_32);
	}
	return 0;
}

void Function_744(bool bParam0) //Position: 0x1D51E / 120094
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

void Function_745(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1D558 / 120152
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

var Function_746(int iParam0, var uParam1, int iParam2) //Position: 0x1D606 / 120326
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_747(var uParam0, int iParam1, int iParam2) //Position: 0x1D62A / 120362
{
	switch (Function_748())
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

int Function_748() //Position: 0x1D6C6 / 120518
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

void Function_749(var uParam0, int iParam1, int iParam2) //Position: 0x1D702 / 120578
{
	switch (Function_750(uParam0))
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

int Function_750(int iParam0) //Position: 0x1D79A / 120730
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

var Function_751(var uParam0, int iParam1) //Position: 0x1D8E5 / 121061
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

void Function_752(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1DA34 / 121396
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

var Function_753(int iParam0, int iParam1) //Position: 0x1DAC7 / 121543
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_754(var uParam0, var uParam1) //Position: 0x1DAE1 / 121569
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

void Function_755() //Position: 0x1DB2F / 121647
{
	if (iLocal_373 != iLocal_669)
	{
		iLocal_669 = iLocal_373;
		switch (iLocal_373)
		{
			case 0x00000000:
				if (Function_155())
				{
					strcpy(&cLocal_665, "PIKAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_665, "PIKFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_155())
				{
					strcpy(&cLocal_665, "PIKAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_665, "PIKFail2", 16);
				}
				break;
			
			case 0x00000002:
				if (Function_155())
				{
					strcpy(&cLocal_665, "PIKAdvFail3", 16);
				}
				else
				{
					strcpy(&cLocal_665, "PIKFail3", 16);
				}
				break;
			
			case 0x00000003:
				if (Function_155())
				{
					strcpy(&cLocal_665, "PIKAdvFail4", 16);
				}
				else
				{
					strcpy(&cLocal_665, "PIKFail4", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_155())
				{
					strcpy(&cLocal_665, "PIKAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_665, "PIKFailLast", 16);
				}
				break;
			}
	}
	return;
}

