//Decompiled with MagicRDR v1.0
//Function Count : 445
//Statics Count : 568
//Natives Count : 487
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
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
	int iLocal_13 = 0;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 11;
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
	var uLocal_55 = 11;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0.0f;
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
	var uLocal_119 = 4;
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
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	int iLocal_139 = 0;
	struct<505> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_13 = 5;
	iLocal_15 = 0;
	iLocal_73 = 0;
	fLocal_74 = 1.0f;
	iLocal_307 = 0;
	fLocal_341 = -1.0f;
	fLocal_342 = -1.0f;
	bLocal_566 = 4294967295;
	iVar0 = NET_GET_PLAYMODE();
	Local_140 = Function_444(0);
	Local_140.f_4 = CEIL(Function_443(0));
	Local_140.f_8 = Function_442(1);
	Local_140.f_492 = Function_444(1);
	Local_140.f_12 = Function_441();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 57549);
	NET_SCRIPTMSG_REGISTER_HANDLER(4, 57453);
	Function_426();
	Local_140.f_496 = 4294967295;
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_379, 177);
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_285, 22);
	Function_390(0);
	Function_389();
	Function_387();
	Local_285.f_48 = 0;
	iLocal_279 = 0;
	iLocal_284 = 2;
	Function_379(0);
	iVar1 = 1;
	iLocal_336 = 1;
	while (!IS_EXITFLAG_SET() && iVar1)
	{
		iVar1 = Function_130();
		Function_127();
		WAIT(false);
	}
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = Function_126();
	}
	if (Function_125())
	{
		if (iVar2 >= 0)
		{
		}
		if (GET_NUM_PLAYERS() >= 1)
		{
			Function_77(iVar2, Function_120(), 4294967295, 1, 1);
		}
		else
		{
			Function_33(iVar2, Function_120());
		}
	}
	else
	{
		if (iVar2 >= 0)
		{
		}
		if (GET_NUM_PLAYERS() < 1)
		{
			Function_32(7, 1);
		}
		else
		{
			Function_32(6, 1);
		}
		Function_77(iVar2, Function_120(), 4294967295, 1, 1);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x126 / 294
{
	Function_30(&Local_348);
	if (IS_ACTOR_VALID(bLocal_138))
	{
		DESTROY_ACTOR(bLocal_138);
	}
	if (IS_OBJECTSET_VALID(bLocal_329))
	{
		Function_29(bLocal_329);
		DESTROY_OBJECTSET(bLocal_329);
	}
	if (IS_OBJECTSET_VALID(bLocal_330))
	{
		Function_29(bLocal_330);
		DESTROY_OBJECTSET(bLocal_330);
	}
	if (IS_ACTORSET_VALID(bLocal_323))
	{
		Function_28(&bLocal_323);
		DESTROY_ACTORSET(bLocal_323);
	}
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	Function_26(bLocal_323);
	SET_PLAYER_CONTROL(0, 1, 1, 1);
	SET_ACTOR_INVULNERABILITY(Function_25(), 0);
	TASK_CLEAR(Function_25());
	SET_ACTOR_CAN_BE_TARGETED(Function_25(), true);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Function_25(), 1);
	CLEAR_DECALS();
	SET_ACTOR_ALLOW_DISMOUNT(Function_25(), 1);
	RELEASE_LAYOUT_REF(Local_140.f_12);
	RELEASE_LAYOUT_REF(bLocal_338);
	FLASH_SET_STRING("help", "RACE_PLACE_Message", "", 1);
	HUD_TIMER_DISPLAY(0);
	Function_3(&Local_140 + 56);
	Function_2();
	return;
}

void Function_2() //Position: 0x1F6 / 502
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

void Function_3(int iParam0) //Position: 0x221 / 545
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_22();
	bVar0 = Function_25();
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
	Function_19(!Function_20(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_18(81920, 0);
	Function_18(8388608, 0);
	Function_4(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_4(bool bParam0) //Position: 0x2D3 / 723
{
	Function_14(bParam0);
	Function_8(bParam0, 0);
	Function_5(32, 0, 1);
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x30D / 781
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_6(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x335 / 821
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x348 / 840
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x357 / 855
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_10(StackVal, StackVal, Function_13(), *(bParam0 + 72), !HUD_IS_FADED());
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
	if (Function_9(bParam0->f_48, 2))
	{
		Function_6(bParam0 + 48, 2);
	}
	Function_7(bParam0 + 48, 1);
	return;
}

bool Function_9(var uParam0, int iParam1) //Position: 0x3E8 / 1000
{
	return (uParam0 && iParam1) == 0;
}

var Function_10(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x3F5 / 1013
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
		Function_12(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_12(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_12(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_12(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_12(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_12(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_11(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x52E / 1326
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

vector3 Function_12(var uParam0, bool bParam1) //Position: 0x583 / 1411
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_13() //Position: 0x59D / 1437
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_14(int iParam0) //Position: 0x5CC / 1484
{
	Function_17(iParam0);
	Function_15(1048576);
	return;
}

void Function_15(int iParam0) //Position: 0x5DE / 1502
{
	Function_16(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x617 / 1559
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_17(int iParam0) //Position: 0x624 / 1572
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_18(int iParam0, bool bParam1) //Position: 0x63B / 1595
{
	if (bParam1)
	{
		Function_7(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_6(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_19(bool bParam0) //Position: 0x676 / 1654
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

bool Function_20(bool bParam0) //Position: 0x6FD / 1789
{
	return Function_21(Global_79336, bParam0);
}

bool Function_21(var uParam0, bool bParam1) //Position: 0x70C / 1804
{
	return (uParam0 && bParam1) == 0;
}

void Function_22() //Position: 0x719 / 1817
{
	if (Function_24(8))
	{
		Function_23();
	}
	Function_5(8, 0, 1);
	return;
}

void Function_23() //Position: 0x731 / 1841
{
	Function_5(32768, 1, 0);
	return;
}

bool Function_24(int iParam0) //Position: 0x740 / 1856
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_25() //Position: 0x751 / 1873
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_26(bool bParam0) //Position: 0x766 / 1894
{
	bool bVar0;
	
	Function_27(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_27(int iParam0) //Position: 0x7AE / 1966
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_28(int iParam0) //Position: 0x807 / 2055
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_29(bool bParam0) //Position: 0x84E / 2126
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_30(int iParam0) //Position: 0x893 / 2195
{
	Function_31(iParam0, 0);
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x89F / 2207
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

void Function_32(int iParam0, int iParam1) //Position: 0x8D7 / 2263
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_33(int iParam0, int iParam1) //Position: 0x8F1 / 2289
{
	bool bVar0;
	int iVar1[67];
	int iVar69;
	
	Function_70();
	Function_69();
	UI_EXIT("XpHud");
	if (iParam0 >= 0)
	{
		bVar0 = 4294967295;
		if (NET_IS_IN_SESSION())
		{
			bVar0 = GET_LOCAL_SLOT();
		}
		NET_START_LB_UPDATE(false);
		iVar1[6] = 1;
		iVar1[0] = (4294967295 * iParam1);
		iVar1[66] = iParam1;
		NET_UPDATE_LEADERBOARD(bVar0, iParam0, 4294967295, &iVar1);
		NET_UPDATE_LEADERBOARD(bVar0, 3, 4294967295, &iVar1);
		NET_END_LB_UPDATE();
		Global_84364.f_776 = 4294967295;
		Function_35(0);
		if (NET_IS_IN_SESSION())
		{
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar69 = UNK_0xA684E813();
				if (iVar69 >= 4294967295)
				{
					Function_34(&Global_76943[iVar6996] + 220, &iVar1, 1);
					NET_REPORT_FRIEND_SCORES(iVar69, iParam0, &iVar1);
				}
			}
		}
	}
	return;
}

void Function_34(var uParam0, int iParam1, bool bParam2) //Position: 0x994 / 2452
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

void Function_35(bool bParam0) //Position: 0x9D9 / 2521
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_67(2);
	if (bParam0)
	{
		Function_67(1);
	}
	else
	{
		Function_66(1);
	}
	Function_36();
	return;
}

void Function_36() //Position: 0xA62 / 2658
{
	Function_64();
	Function_63();
	Function_63();
	Function_62();
	Function_62();
	Function_61();
	Function_61();
	Function_44(0);
	Function_44(0);
	if (!Function_43())
	{
		Function_41();
		Function_40();
		Function_39();
		Function_38();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_37();
	return;
}

void Function_37() //Position: 0xAB4 / 2740
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

void Function_38() //Position: 0xBBA / 3002
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

void Function_39() //Position: 0xBED / 3053
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

void Function_40() //Position: 0xD7B / 3451
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

void Function_41() //Position: 0xF2F / 3887
{
	Function_42(&Global_28260, 1, 0);
	return;
}

void Function_42(int iParam0, bool bParam1, var uParam2) //Position: 0xF3D / 3901
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
	
	bVar0 = Function_25();
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

bool Function_43() //Position: 0x112E / 4398
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_44(int iParam0) //Position: 0x1137 / 4407
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
					iVar2 = ((Function_60((50 + iVar4)) + Function_60((183 + iVar4))) + Function_60((90 + iVar4)));
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
	Function_45(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x11DD / 4573
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
		Function_59(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_58(iParam0);
	if (bParam2)
	{
		Function_46(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_46(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1478 / 5240
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_57(390))), 32);
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
						Function_54(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_51(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_48(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_47(), &Var9);
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

var Function_47() //Position: 0x1AA5 / 6821
{
	int iVar0;
	
	return iVar0;
}

var Function_48(int iParam0) //Position: 0x1AAD / 6829
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_49(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1ABE / 6846
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_50(char* cParam0, bool bParam1) //Position: 0x1BB3 / 7091
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_51(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1BCC / 7116
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_53(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_52(Function_53(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_52(int iParam0, int iParam1) //Position: 0x1C31 / 7217
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_53(int iParam0, bool bParam1) //Position: 0x1C43 / 7235
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_54(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1C55 / 7253
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
	if (((Function_55(iParam0) != 19 || Function_55(iParam0) != 17) || Function_55(iParam0) != 10) || Function_55(iParam0) != 9)
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

int Function_55(int iParam0) //Position: 0x1D85 / 7557
{
	return Global_35278[iParam020].f_48;
}

float Function_56(int iParam0) //Position: 0x1D94 / 7572
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_57(int iParam0) //Position: 0x1DCD / 7629
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_58(int iParam0) //Position: 0x1E0A / 7690
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

int Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x1FA4 / 8100
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

int Function_60(bool bParam0) //Position: 0x21E8 / 8680
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_61() //Position: 0x2229 / 8745
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
		iVar2 = ((Function_60((50 + iVar3) + 15) + Function_60((183 + iVar3) + 15)) + Function_60((90 + iVar3) + 15));
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
	Function_45(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_62() //Position: 0x22B2 / 8882
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
			iVar2 = ((Function_60((50 + iVar3) + 8) + Function_60((183 + iVar3) + 8)) + Function_60((90 + iVar3) + 8));
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
	Function_45(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_63() //Position: 0x2349 / 9033
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
		iVar2 = ((Function_60((50 + iVar3)) + Function_60((183 + iVar3))) + Function_60((90 + iVar3)));
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
	Function_45(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_64() //Position: 0x23C8 / 9160
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_65(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_45(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_65(int iParam0, bool bParam1, int iParam2) //Position: 0x2401 / 9217
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
	Function_59(iParam0, bParam1, 1);
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_46(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_66(int iParam0) //Position: 0x260B / 9739
{
	Function_16(&Global_79338, iParam0);
	return;
}

void Function_67(int iParam0) //Position: 0x261A / 9754
{
	Function_68(&Global_79338, iParam0);
	return;
}

void Function_68(var uParam0, int iParam1) //Position: 0x2629 / 9769
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_69() //Position: 0x2636 / 9782
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

void Function_70() //Position: 0x2660 / 9824
{
	if (Global_83864.f_1264 > 6)
	{
		Function_71(&(Global_50170[522]));
		Function_71(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_71(&(Global_50170[722]));
		Function_71(&(Global_50170[822]));
		Function_71(&(Global_50170[922]));
		Function_71(&(Global_50170[1022]));
		Function_71(&(Global_50170[1122]));
	}
	return;
}

void Function_71(bool bParam0) //Position: 0x26C0 / 9920
{
	Global_56092[*bParam0] = 0;
	Function_72(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_72(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x26DA / 9946
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_76(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_75(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_76(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_74(iParam0, 4))
	{
		Function_73(Function_76(iParam0), 0);
	}
}

void Function_73(char* cParam0, bool bParam1) //Position: 0x2791 / 10129
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

bool Function_74(int iParam0, int iParam1) //Position: 0x27B6 / 10166
{
	return Function_9(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_75(int iParam0) //Position: 0x27CA / 10186
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_76(bool bParam0) //Position: 0x27FE / 10238
{
	return Global_50170[bParam022].f_24;
}

void Function_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x280D / 10253
{
	int iVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_119(5, 1);
	Function_15(4096);
	switch (Function_118())
	{
		case 0x00000011:
		case 0x00000002:
			Function_78(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_70();
	Function_69();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_34(&Global_78480 + 220, &iVar0, 0);
			iVar0[0] = (4294967295 * iParam1);
			iVar0[66] = iParam1;
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam2, &iVar0);
			if (bParam4)
			{
				iVar0[0] = iVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam2, &iVar0);
				iVar0[0] = iVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam2, &iVar0);
			}
			iVar0[0] = iVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam2, &iVar0);
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_34(&Global_76943[iVar6896] + 220, &iVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &iVar0);
				}
			}
		}
	}
	Function_35(bParam3);
}

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x2930 / 10544
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_117(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_110(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_116(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_109(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_72(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_117(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_110(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_116(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_109(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_72(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_117(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_79(17, 150, Function_116(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_109(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_72(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_79(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2AD9 / 10969
{
	Function_107(bParam0, 1);
	Global_50170[bParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_76(bParam0), 1.0f, false, 0);
	Function_103(bParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_100(iParam3);
	}
	Function_95(&Global_50170[bParam022] + 16, bParam1, bParam2);
	Function_80();
}

void Function_80() //Position: 0x2B3F / 11071
{
	if (!Function_43())
	{
		if (!Function_94(1, 3, 1, 1))
		{
			Function_82(1);
			Function_81(1, 8);
		}
	}
	else
	{
		Function_35(0);
	}
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x2B68 / 11112
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_43())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_82(bool bParam0) //Position: 0x2BAA / 11178
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_83();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_36();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_6(&Global_63095, 1);
		Function_6(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_83() //Position: 0x2BFB / 11259
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_93())
	{
		Function_90(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_90(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_84(StackVal, StackVal, vVar0))
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

bool Function_84(vector3 vParam0) //Position: 0x2CB6 / 11446
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_85(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2CCE / 11470
{
	int iVar0;
	
	iVar0 = Function_88(uParam2, uParam3);
	if (Function_87(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_7(&Global_63095, 1);
			Function_6(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_7(&Global_63095, 2);
			Function_6(&Global_63095, 1);
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
		Function_7(&Global_63095, 2);
		Function_6(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_86();
	return StackVal, StackVal, Function_86();
}

vector3 Function_86() //Position: 0x2DB5 / 11701
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_87(int iParam0) //Position: 0x2DBE / 11710
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_88(bool bParam0, bool bParam1) //Position: 0x2DD4 / 11732
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
				fVar2 = Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_89(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_87(bVar0) && !bParam1)
	{
		bVar0 = Function_88(bParam0, 1);
	}
	return bVar0;
}

float Function_89(vector3 vParam0, vector3 vParam3) //Position: 0x2E9B / 11931
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_90(var uParam0, int iParam1) //Position: 0x2EB8 / 11960
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_92(Global_34573, &vVar4);
	if (!Function_91(Global_30640[0]))
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
	if (!Function_91(Global_30640[2]))
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
	if (!Function_91(Global_30640[1]))
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
	if (!Function_91(Global_30658[1]))
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
	if (!Function_91(Global_30658[3]))
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
	if (!Function_91(Global_30658[2]))
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
	if (!Function_91(Global_30658[4]))
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
	if (!Function_91(Global_30668[0]))
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
	if (!Function_91(Global_30668[1]))
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
	if (!Function_91(Global_30668[2]))
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
	if (!Function_91(Global_30679[0]))
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
	if (!Function_91(Global_30685[0]))
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
	if (!Function_91(Global_30685[1]))
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
	if (!Function_91(Global_30685[2]))
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
	if (!Function_91(Global_30693[0]))
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
	if (!Function_91(Global_30693[1]))
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
	if (!Function_91(Global_30693[2]))
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
	if (!Function_91(Global_30707[2]))
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
	if (!Function_91(Global_30707[3]))
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
	if (!Function_91(Global_30707[0]))
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
	if (!Function_91(Global_30717[0]))
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
	if (!Function_91(Global_30723[2]))
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
	if (!Function_91(Global_30723[1]))
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
	if (!Function_91(Global_30723[0]))
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
	if (!Function_91(Global_30679[1]))
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
	if (!Function_91(Global_30707[1]))
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
	Function_7(&Global_63095, 2);
	Function_6(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_84(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_91(int iParam0) //Position: 0x36DD / 14045
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || !Function_9(uVar0, 0x10000000));
}

void Function_92(bool bParam0, bool bParam1) //Position: 0x3718 / 14104
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_93() //Position: 0x3725 / 14117
{
	if (Function_9(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_94(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3740 / 14144
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

void Function_95(bool bParam0, bool bParam1, bool bParam2) //Position: 0x37E4 / 14308
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_13();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_99(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_98(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_97(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_96(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_99(), iVar1 + 1);
	return;
}

struct<16> Function_96(int iParam0) //Position: 0x3856 / 14422
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_97(int iParam0) //Position: 0x3877 / 14455
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_98(int iParam0) //Position: 0x3898 / 14488
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_99() //Position: 0x38B9 / 14521
{
	return "CQueue_Count";
}

void Function_100(int iParam0) //Position: 0x38CE / 14542
{
	Function_101(iParam0, 1);
	return;
}

void Function_101(int iParam0, bool bParam1) //Position: 0x38DA / 14554
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_7(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_102((iVar0 % 32)));
	}
	else
	{
		Function_6(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_102((iVar0 % 32)));
	}
	return;
}

int Function_102(bool bParam0) //Position: 0x3930 / 14640
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_103(bool bParam0, int iParam1) //Position: 0x393C / 14652
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_106(bParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_76(bParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(bParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_75(bParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_104(bParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_76(bParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_76(bParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(bParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_104(int iParam0) //Position: 0x39BE / 14782
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_75(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_105(int iParam0) //Position: 0x39DE / 14814
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_106(int iParam0) //Position: 0x3A0F / 14863
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

void Function_107(bool bParam0, bool bParam1) //Position: 0x3B8D / 15245
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_108();
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

var Function_108() //Position: 0x3CD9 / 15577
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_109(var uParam0, bool bParam1, bool bParam2) //Position: 0x3D26 / 15654
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_110(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x3D3E / 15678
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_75(iParam0) };
	Function_95(&Var0, bParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_109(&fParam5, bParam8, bParam9);
	Function_72(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_112(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_100(iParam12);
	}
	Function_111(iParam0, 4);
	Function_80();
}

void Function_111(int iParam0, int iParam1) //Position: 0x3DB4 / 15796
{
	Function_6(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_112(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3DC8 / 15816
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_106(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_76(iParam0));
	if ((bParam3 && Function_74(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_76(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_75(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_115(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_114(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_104(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_76(iParam0), &Var7, 0, 2, Function_74(iParam0, 4));
			if (!bParam3)
			{
				Function_113(iParam0, 4);
			}
		}
	}
}

void Function_113(int iParam0, int iParam1) //Position: 0x3E85 / 16005
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_114(int iParam0) //Position: 0x3E99 / 16025
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_115(int iParam0) //Position: 0x3EC7 / 16071
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_116() //Position: 0x3EF7 / 16119
{
	return "MP_Unstoppable_Icon_128";
}

float Function_117(int iParam0) //Position: 0x3F17 / 16151
{
	return Global_50170[iParam022].f_12;
}

int Function_118() //Position: 0x3F26 / 16166
{
	return Global_79349.f_16;
}

void Function_119(int iParam0, int iParam1) //Position: 0x3F32 / 16178
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_120() //Position: 0x3F57 / 16215
{
	bool bVar0;
	
	bVar0 = ROUND((Function_121(GET_LOCAL_SLOT()) * 1000.0f));
	if (bVar0 < 0)
	{
		bVar0 = 86400000;
	}
	return bVar0;
}

float Function_121(bool bParam0) //Position: 0x3F7D / 16253
{
	return Function_122(0, bParam0);
}

int Function_122(int iParam0, bool bParam1) //Position: 0x3F89 / 16265
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_124(iParam0);
	}
	if (!Function_123(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

bool Function_123(bool bParam0) //Position: 0x3FF2 / 16370
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

float Function_124(int iParam0) //Position: 0x4094 / 16532
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_125() //Position: 0x40A4 / 16548
{
	return Local_140.f_488 < 4294967295;
}

int Function_126() //Position: 0x40B1 / 16561
{
	int iVar0;
	
	iVar0 = 131;
	switch (Local_140.f_500)
	{
		case 0x00000000:
			iVar0 = 131;
			break;
		
		case 0x00000001:
			iVar0 = 132;
			break;
		
		case 0x00000003:
			iVar0 = 134;
			break;
		
		case 0x00000004:
			iVar0 = 136;
			break;
		
		case 0x00000005:
			iVar0 = 133;
			break;
		
		case 0x00000007:
			iVar0 = 137;
			break;
		
		case 0x00000008:
			iVar0 = 138;
			break;
		
		case 0x00000009:
			iVar0 = 135;
			break;
		
		case 0x0000000A:
			iVar0 = 139;
			break;
		
		case 0x0000000B:
			iVar0 = 140;
			break;
		
		case 0x0000000C:
			iVar0 = 141;
			break;
	}
	return iVar0;
}

void Function_127() //Position: 0x4156 / 16726
{
	Function_128(2);
	return;
}

void Function_128(int iParam0) //Position: 0x4160 / 16736
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
			Function_129(iParam0);
		}
	}
	return;
}

void Function_129(bool bParam0) //Position: 0x4192 / 16786
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

int Function_130() //Position: 0x41A1 / 16801
{
	int iVar0;
	
	iVar0 = 0;
	if (NET_IS_IN_SESSION())
	{
		Function_128(3);
		Function_378();
		if (NET_IS_SESSION_HOST())
		{
			Function_376();
		}
		iVar0 = Function_132();
		Function_131();
	}
	return iVar0;
}

void Function_131() //Position: 0x41CA / 16842
{
	bool bVar0;
	
	bVar0 = GET_LOCAL_SLOT();
	Local_379[bVar011] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_368 };
	return;
}

int Function_132() //Position: 0x41E5 / 16869
{
	if (IS_ACTOR_VALID(Function_25()))
	{
		SET_ACTOR_ALLOW_DISMOUNT(Function_25(), 0);
	}
	if (iLocal_279 > 4 && iLocal_279 < 0)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_343) <= 45.0f)
		{
			NET_LOG(true, "Dirty Disk Failsafe", "LOCAL PLAYER %s has taken WAY to long to load kicking him.", GET_SLOT_NAME(GET_LOCAL_SLOT()), false, false, false);
			Function_15(16);
			UI_ACTIVATE("NetAlert_UnexpectedFail");
		}
	}
	switch (iLocal_279)
	{
		case 0x00000000:
			if ((*&Local_285 + 52)[0] == 0)
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_375();
				}
			}
			else
			{
				fLocal_343 = GET_CURRENT_GAME_TIME();
				iLocal_279 = 1;
			}
			break;
		
		case 0x00000001:
			fLocal_335 = 18.0f;
			fLocal_334 = fLocal_335;
			fLocal_333 = fLocal_335;
			Function_371();
			Function_370();
			Function_368();
			iLocal_279 = 2;
			Function_367(&Global_79349, &Local_140 + 500);
			Local_140.f_488 = 4294967295;
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_361())
				{
					iLocal_279 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_360())
			{
				Function_359(1);
				HUD_ENABLE(false);
				iLocal_279 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_357(1))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_279 = 5;
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED() || HUD_IS_FADING())
			{
				iLocal_279 = 8;
				STREAMING_UNLOAD_SCENE();
				Function_356();
			}
			break;
		
		case 0x00000008:
			if (Function_355(&Local_285 + 24))
			{
				if (iLocal_345 > 4)
				{
					Function_352(Local_140.f_500);
				}
				if (Function_335())
				{
					Function_359(0);
					iLocal_279 = 11;
					iLocal_344 = 0;
				}
			}
			break;
		
		case 0x0000000B:
			if (!Function_334(16, 1))
			{
				if (Function_329())
				{
					iLocal_279 = 14;
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_138))
					{
						if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_138), "Racing"))
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_138), "Racing", true);
						}
					}
					iLocal_279 = Function_319();
					if (iLocal_279 == 13)
					{
					}
				}
				Function_352(Local_140.f_500);
				Function_314();
				Function_308();
				Function_306(Function_25());
				Function_305();
				Function_304();
				Function_295();
				Function_293();
			}
			Function_292();
			Function_288();
			Function_285();
			break;
		
		case 0x0000000C:
			if (!HUD_IS_FADING())
			{
				Local_140.f_56 = 9;
				iLocal_279 = 11;
			}
			Function_288();
			Function_285();
			break;
		
		case 0x0000000D:
			Function_288();
			Function_285();
			if (!UI_ISACTIVE("MPReward"))
			{
				if (Function_284())
				{
					if (GET_NUM_PLAYERS() >= 1)
					{
						Function_18(16384, 1);
						bLocal_137 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
					}
				}
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(77))
				{
					if (iLocal_346)
					{
						AWARD_ACHIEVEMENT(77);
					}
				}
				Function_271();
				iLocal_279 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!Function_334(16, 1))
			{
				Function_264();
			}
			Function_288();
			Function_262();
			Function_285();
			Function_260(0, 0, 4294967295, 4294967295);
			AUDIO_MUSIC_SUSPEND(500);
			Function_259();
			iLocal_279 = 15;
		
		case 0x0000000F:
			Function_257();
			Function_288();
			Function_262();
			Function_285();
			break;
	}
	return Function_133();
}

int Function_133() //Position: 0x452D / 17709
{
	int iVar0;
	
	if (Function_256(&Local_140 + 56))
	{
		if (Local_285.f_48 == 5)
		{
			Function_255(&Local_140 + 56);
		}
	}
	iVar0 = Function_134(&Local_140 + 56);
	if (iVar0 == 3)
	{
		return 0;
	}
	if (iVar0 == 0)
	{
	}
	else if (iVar0 == 2)
	{
	}
	return 1;
}

int Function_134(bool bParam0) //Position: 0x4571 / 17777
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
	
	bVar0 = Function_25();
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
		bParam0->f_64 = Function_254((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_253())
	{
		if (bVar1)
		{
			switch (Function_251())
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
	if (Function_250(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_9(bParam0->f_44, 2) || Function_9(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_249() && IS_PS3())
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
	if (((Function_250(bParam0) && Function_248(4096)) && Function_247()) && !Function_20(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_9(bParam0->f_44, 2) || Function_9(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
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
					Function_246(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_245(4096);
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
	fVar8 = Function_244();
	if (bVar1)
	{
		bVar9 = Function_243(bVar0);
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
			if ((Function_241(8192) || Function_9(bParam0->f_48, 512)) && !Function_334(1, 1))
			{
				iVar6 = Function_238(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_9(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_7(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_236("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_235(2, NET_GET_NET_TIME());
								Function_232(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_18(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_124(2));
						if (!Function_334(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_6(bParam0 + 48, 512);
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
					Function_18(65536, 0);
					Function_6(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_18(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_334(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_18(8388608, 0);
					}
				}
			}
			if (Function_231(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_9(bParam0->f_44, 16))
					{
						Function_7(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_230(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_6(bParam0 + 48, 32);
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
					Function_229(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_5(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_18(65536, 0);
			Function_18(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_9(bParam0->f_44, 8))
			{
				Function_228(0);
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
			if (Function_227(bParam0 + 116, &Global_78617 + 2648))
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
			Function_223(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_207(bParam0, bParam0->f_12 != 0);
			}
			Function_205(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_205(bParam0, 1);
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
			Function_205(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_9(bParam0->f_44, 512))
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
			Function_205(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_204();
				Function_5(32, 0, 1);
				Function_19(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_205(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_22();
			}
			break;
		
		case 0x00000008:
			if (Function_9(bParam0->f_44, 2))
			{
				if (Function_9(bParam0->f_44, 512))
				{
					if (!Function_9(bParam0->f_48, 4096))
					{
						Function_8(bParam0, 1);
						Function_7(bParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_334(16384, 1))
						{
							Function_8(bParam0, 0);
							Function_18(16384, 1);
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
					Function_205(bParam0, 1);
				}
			}
			else
			{
				Function_205(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_205(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_203(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				Function_19(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_202();
				Function_22();
				Function_5(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_13(), Function_47(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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
				if (!Function_9(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_7(bParam0 + 48, 8);
				}
				if (Function_197(StackVal, Function_9(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_182(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_9(bParam0->f_48, 32), 1))
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
				if (Function_9(bParam0->f_44, 1))
				{
					Function_6(bParam0 + 44, 1);
				}
				else
				{
					Function_14(bParam0);
					Function_8(bParam0, 0);
				}
				bVar0 = Function_25();
				Function_181(bVar0);
				if (Function_9(bParam0->f_44, 32))
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
			if (!Function_178(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_177(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_9(bParam0->f_44, 8))
				{
					Function_176(bParam0 + 192, 0, 1, 1);
					Function_170(bParam0 + 192);
					Function_161(&bVar0, 0, 0, 0);
					Function_161(&bVar0, 0, 0, 0);
					Function_160(bVar0);
				}
				else
				{
					Function_176(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_159(bVar0);
					vVar10 = { StackVal, StackVal, Function_159(bVar0) };
					bVar13 = Function_158(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_157(bVar13))
					{
						if (StackVal || Function_247() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_153(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_152(&(Global_29008[StackVal]), 4194304);
				}
				Function_245(32);
				*bParam0 = 13;
			}
			if (!Function_9(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_7(bParam0 + 48, 128);
					Function_6(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_245(32);
				Function_153(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_157(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_150(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_150(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_150(&(Global_29008[StackVal]), 4194304))
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
					if (Function_157(bVar14))
					{
						if (StackVal && (!Function_151(bVar14) && !Function_150(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_149(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_148();
			if (!Function_9(bParam0->f_44, 32))
			{
				if (Function_147() & 0)
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
						bVar15 = Function_146(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_146(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_146(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_146(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_146(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_146(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_146(bVar0, 46);
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
				if (!Function_9(bParam0->f_44, 64))
				{
					Function_145(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_18(16384, 0);
			Function_144(bVar0, !Function_9(bParam0->f_44, 96));
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
			Function_205(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_19(1);
			}
			else if (!Function_142())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_136(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_135(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_205(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_205(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_9(bParam0->f_44, 4))
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
			Function_205(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_203(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_205(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_203(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_205(bParam0, 1);
			if (Function_142())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_203(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_135(int iParam0) //Position: 0x562E / 22062
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_136(int iParam0) //Position: 0x564A / 22090
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_202();
		iVar0 = "";
		if (Function_9(iParam0->f_44, 256))
		{
			if (Function_9(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_355(&Global_78578 + 96))
			{
				if (FABS(Function_137(&Global_78578 + 96)) > 1.0f)
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

float Function_137(int iParam0) //Position: 0x573B / 22331
{
	return -Function_138(iParam0);
}

float Function_138(int iParam0) //Position: 0x5747 / 22343
{
	if (Function_355(iParam0))
	{
		if (Function_141(iParam0))
		{
			return StackVal;
		}
		Function_139();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_139() //Position: 0x5818 / 22552
{
	if (!Function_140())
	{
	}
	return;
}

bool Function_140() //Position: 0x5825 / 22565
{
	return NET_IS_IN_SESSION();
}

bool Function_141(int iParam0) //Position: 0x582E / 22574
{
	return Function_9(*iParam0, 2);
}

bool Function_142() //Position: 0x583B / 22587
{
	return (HUD_IS_FADED() || Function_143(0));
}

int Function_143(bool bParam0) //Position: 0x5849 / 22601
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

void Function_144(bool bParam0, int iParam1) //Position: 0x58ED / 22765
{
	struct<5> Var0;
	
	Function_18(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_248(256))
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

void Function_145(bool bParam0) //Position: 0x5943 / 22851
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

int Function_146(bool bParam0, int iParam1) //Position: 0x5960 / 22880
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

var Function_147() //Position: 0x5971 / 22897
{
	return !Function_247();
}

void Function_148() //Position: 0x597B / 22907
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_25();
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

void Function_149(bool bParam0) //Position: 0x59BA / 22970
{
	if (!Function_157(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_152(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_150(var uParam0, int iParam1) //Position: 0x5A15 / 23061
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_151(bool bParam0) //Position: 0x5A31 / 23089
{
	if (!Function_157(bParam0))
	{
		return 1;
	}
	return Function_150(&(Global_29008[bParam0]), 4);
}

void Function_152(var uParam0, int iParam1) //Position: 0x5A4D / 23117
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_153(int iParam0, bool bParam1, int iParam2) //Position: 0x5A5C / 23132
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
		if (Function_157(Global_29006))
		{
			Function_152(&(Global_29008[Global_29006]), 131072);
			Function_156(&(Global_29008[Global_29006]), 2097152);
			Function_154(Global_29006);
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
				if (Function_150(&(Global_29008[iVar0]), 4) || Function_150(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_156(&(Global_29008[iVar0]), 2097155);
					Function_152(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_43())
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

void Function_154(int iParam0) //Position: 0x5B67 / 23399
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_155())
			{
				return;
			}
		}
		if (!Function_150(&(Global_29008[iParam0]), 2048))
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

bool Function_155() //Position: 0x5BE6 / 23526
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_150(&(Global_29008[iVar0]), 4) || Function_150(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_156(var uParam0, int iParam1) //Position: 0x5C4F / 23631
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_157(bool bParam0) //Position: 0x5C66 / 23654
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_158(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5C7C / 23676
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

vector3 Function_159(bool bParam0) //Position: 0x5D17 / 23831
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_160(bool bParam0) //Position: 0x5D28 / 23848
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

var Function_161(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x5D5B / 23899
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
					if (Function_169(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_168(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_167(bVar2))
					{
						if (Function_166(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_169(bVar3, 1))
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
						if (Function_169(bVar3, 1))
						{
							bVar24 = (Function_168(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_13(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_13(), &cVar28, &uVar26))
						{
							Function_162(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_169(bVar3, 1))
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

void Function_162(var uParam0, int iParam1) //Position: 0x603E / 24638
{
	*iParam1 = Function_163(uParam0, Function_164(), 0);
	iParam1->f_4 = Function_163(uParam0, Function_164() + 8, Function_164());
	return;
}

var Function_163(var uParam0, int iParam1, bool bParam2) //Position: 0x6061 / 24673
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_102((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_164() //Position: 0x6080 / 24704
{
	return Function_165(39);
}

int Function_165(bool bParam0) //Position: 0x608B / 24715
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

bool Function_166(bool bParam0) //Position: 0x60B9 / 24761
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

bool Function_167(bool bParam0) //Position: 0x60DB / 24795
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_168(int iParam0, bool bParam1) //Position: 0x60ED / 24813
{
	if (Function_169(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_169(bool bParam0, int iParam1) //Position: 0x6107 / 24839
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_170(int iParam0) //Position: 0x611A / 24858
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_173(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_25()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_172(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_171(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_13(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_13(), &cVar5, &uVar3))
			{
				Function_162(uVar3, &Var13);
				Function_171(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_171(struct<5> Param0) //Position: 0x61C1 / 25025
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_167(Param0))
	{
		return;
	}
	bVar0 = Function_25();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_169(bVar1, 1))
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

bool Function_172(int iParam0) //Position: 0x6241 / 25153
{
	return Function_21(Global_83864.f_1252, iParam0);
}

void Function_173(int iParam0, int iParam1) //Position: 0x6253 / 25171
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_25();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_174(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_174(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_174(23, iParam1))
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
			bVar4 = Function_146(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_146(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_174(int iParam0, int iParam1) //Position: 0x63D0 / 25552
{
	return Function_175(iParam0, iParam1) < 4294967295;
}

int Function_175(int iParam0, int iParam1) //Position: 0x63DF / 25567
{
	int iVar0;
	
	if (!Function_167(iParam0))
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

void Function_176(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6412 / 25618
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_25();
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
		Function_171(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_177(bool bParam0, bool bParam1, bool bParam2) //Position: 0x645D / 25693
{
	float fVar0;
	bool bVar1;
	
	if (Function_43() || !bParam1)
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

bool Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x64FA / 25850
{
	int iVar0;
	
	if (bParam1)
	{
		Function_68(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_68(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_68(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_68(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_68(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_68(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_68(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_68(&iVar0, 1048576);
	}
	return Function_179(bParam0, iVar0);
}

bool Function_179(bool bParam0, int iParam1) //Position: 0x6569 / 25961
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_180(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_180(iParam1, 64))
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

bool Function_180(var uParam0, int iParam1) //Position: 0x6642 / 26178
{
	return (uParam0 && iParam1) == 0;
}

void Function_181(bool bParam0) //Position: 0x664F / 26191
{
	Function_18(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_182(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x6670 / 26224
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_25();
	Function_193();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_192();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_179(bVar0, 3145855);
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
		bVar9 = Function_248(256);
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
		Function_189(bVar0, 0);
		Function_184();
		Function_183(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_158(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_157(uVar14))
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

void Function_183(char* cParam0, vector3 vParam1) //Position: 0x67E7 / 26599
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_184() //Position: 0x6825 / 26661
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_188(iVar1))
		{
			uVar2 = Function_187(iVar1);
			Function_185(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0x6857 / 26711
{
	if (!Function_188(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_186(222, Global_26401[iParam0], 0);
		if (Function_60(222) <= 0)
		{
			Function_45(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_45((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_186((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_186(222, bParam1, 0);
	}
	return;
}

int Function_186(int iParam0, bool bParam1, int iParam2) //Position: 0x68E0 / 26848
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
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_46(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_187(int iParam0) //Position: 0x6ADB / 27355
{
	if (!Function_188(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_188(int iParam0) //Position: 0x6AF3 / 27379
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_189(bool bParam0, bool bParam1) //Position: 0x6B08 / 27400
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_191(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_241(8192) && !Function_334(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_247())
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
	if (Function_190())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_190() //Position: 0x6C10 / 27664
{
	return Function_9(Global_79962, 2048);
}

var Function_191(int iParam0) //Position: 0x6C20 / 27680
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

void Function_192() //Position: 0x6C55 / 27733
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_193() //Position: 0x6C6A / 27754
{
	Function_196();
	Function_70();
	Function_194();
	return;
}

void Function_194() //Position: 0x6C79 / 27769
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_195();
	return;
}

void Function_195() //Position: 0x6CAD / 27821
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_196() //Position: 0x6CBE / 27838
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_197(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6CD7 / 27863
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
	Function_201(bParam0);
	Var6 = { StackVal, StackVal, Function_201(bParam0) };
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
			Function_200(bVar32);
			vVar12.f_4 = Function_198(StackVal, StackVal, StackVal, StackVal, vVar3, Function_200(bVar32));
		}
	}
	return Function_182(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_198(vector3 vParam0, vector3 vParam3) //Position: 0x6D8E / 28046
{
	var uVar0;
	
	Function_199(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6DA8 / 28072
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_200(bool bParam0) //Position: 0x6DCB / 28107
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

vector3 Function_201(bool bParam0) //Position: 0x6DF2 / 28146
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_202() //Position: 0x6E03 / 28163
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_203(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x6E18 / 28184
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

void Function_204() //Position: 0x6E41 / 28225
{
	if (!Function_24(8))
	{
		Function_23();
	}
	Function_5(8, 1, 1);
	return;
}

void Function_205(bool bParam0, int iParam1) //Position: 0x6E5A / 28250
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
	if (Function_9(bParam0->f_48, 256) || Function_9(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_9(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_179(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_6(bParam0 + 48, 1024);
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
		Function_206(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_9(bParam0->f_48, 8192))
		{
			Function_7(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_246(1048576);
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

void Function_206(int iParam0) //Position: 0x7055 / 28757
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

void Function_207(int iParam0, int iParam1) //Position: 0x7096 / 28822
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_25();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_159(bVar0);
		vVar1 = { StackVal, StackVal, Function_159(bVar0) };
		Function_222(bVar0);
		vVar4 = { StackVal, StackVal, Function_222(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	bVar7 = Function_13();
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
		iParam0->f_120 = Function_218(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_7(iParam0 + 48, 256);
	}
	else
	{
		Function_159(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_159(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_210(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_209(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_7(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_208(iParam0->f_120);
	return;
}

void Function_208(int iParam0) //Position: 0x722B / 29227
{
	Function_192();
	Global_63118 = iParam0;
	return;
}

void Function_209(bool bParam0, bool bParam1) //Position: 0x7239 / 29241
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_210(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x724E / 29262
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_47(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_211(&bVar0, uParam2, uParam3, uParam4);
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

void Function_211(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x72D0 / 29392
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_217(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_216(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_215(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_214(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_213(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_212(&bVar0, uParam1, uParam2, uParam3);
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

void Function_212(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x73EB / 29675
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

void Function_213(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7500 / 29952
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

void Function_214(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7619 / 30233
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

void Function_215(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7723 / 30499
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

void Function_216(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7829 / 30761
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

void Function_217(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x78D9 / 30937
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

var Function_218(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7990 / 31120
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_47(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_219(&bVar0, uParam2);
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

void Function_219(var uParam0, int iParam1) //Position: 0x7A07 / 31239
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_221(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_220(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_220(var uParam0, bool bParam1) //Position: 0x7A73 / 31347
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
	Function_222(bParam1);
	vVar3 = { StackVal, StackVal, Function_222(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_200(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_200(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_222(bParam1);
	vVar6 = { StackVal, StackVal, Function_222(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_200(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_200(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_221(var uParam0, bool bParam1) //Position: 0x7B35 / 31541
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
	Function_222(bParam1);
	vVar3 = { StackVal, StackVal, Function_222(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_200(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_200(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_222(bParam1);
	vVar6 = { StackVal, StackVal, Function_222(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_200(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_200(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_222(bool bParam0) //Position: 0x7BF7 / 31735
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

void Function_223(int iParam0) //Position: 0x7C1E / 31774
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_9(iParam0->f_48, 2048))
	{
		Function_7(iParam0 + 48, 2048);
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
				if (Function_167(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_225(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_224("MPSplashItem.s1"));
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
				if (Function_167(bVar2))
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

var Function_224(int iParam0) //Position: 0x7F44 / 32580
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

struct<64> Function_225(bool bParam0) //Position: 0x815D / 33117
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_249())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_226();
	}
	if (!Function_123(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_123(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_226() //Position: 0x8203 / 33283
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_227(var uParam0, int iParam1) //Position: 0x8214 / 33300
{
	if (Function_231(uParam0, iParam1))
	{
		Function_230(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_228(int iParam0) //Position: 0x822E / 33326
{
	Function_42(&Global_79378, 0, iParam0);
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0x823E / 33342
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_13(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_167(bVar2))
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

void Function_230(var uParam0, int iParam1) //Position: 0x82BA / 33466
{
	*uParam0 = *iParam1;
	return;
}

bool Function_231(var uParam0, int iParam1) //Position: 0x82C6 / 33478
{
	return *uParam0 == *iParam1;
}

void Function_232(int iParam0, int iParam1) //Position: 0x82D3 / 33491
{
	Function_233(iParam0, (Function_234(iParam0) + iParam1));
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0x82E6 / 33510
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_234(int iParam0) //Position: 0x830F / 33551
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_235(int iParam0, int iParam1) //Position: 0x831F / 33567
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_236(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8348 / 33608
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_237(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_237(int iParam0) //Position: 0x83C3 / 33731
{
	char* cVar0[16];
	
	if (!Function_93())
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

var Function_238(int iParam0, bool bParam1, int iParam2) //Position: 0x8402 / 33794
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_123(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_239(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_239(bool bParam0, int iParam1, bool bParam2) //Position: 0x8449 / 33865
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_334(iParam1, bParam2);
	}
	if (!Function_123(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_240(iParam1), 64);
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

var Function_240(int iParam0) //Position: 0x84CA / 33994
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

int Function_241(int iParam0) //Position: 0x87E3 / 34787
{
	return Function_242(&Global_79349, iParam0);
}

int Function_242(var uParam0, int iParam1) //Position: 0x87F2 / 34802
{
	return Function_9(uParam0->f_44, iParam1);
}

int Function_243(int iParam0) //Position: 0x8801 / 34817
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_244() //Position: 0x8817 / 34839
{
	if (Function_9(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_9(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_245(int iParam0) //Position: 0x884D / 34893
{
	Function_16(&Global_78617 + 52, iParam0);
	return;
}

void Function_246(int iParam0) //Position: 0x885E / 34910
{
	Function_68(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_247() //Position: 0x88B7 / 34999
{
	if (Function_43())
	{
		return (Function_118() != 1 || Function_118() != 0);
	}
	return 0;
}

bool Function_248(bool bParam0) //Position: 0x88D0 / 35024
{
	return Function_21(Global_78617.f_52, bParam0);
}

bool Function_249() //Position: 0x88E1 / 35041
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_250(bool bParam0) //Position: 0x88EF / 35055
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_251() //Position: 0x8901 / 35073
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_252(GET_LOCAL_SLOT(), 1, 0);
}

int Function_252(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8918 / 35096
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_123(bParam0))
			{
				if (!Function_239(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_253() //Position: 0x895C / 35164
{
	return Function_241(2);
}

var Function_254(int iParam0, int iParam1) //Position: 0x8966 / 35174
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_255(bool bParam0) //Position: 0x8979 / 35193
{
	if (!Function_256(bParam0))
	{
	}
	if (!Function_20(2048))
	{
		Function_246(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

bool Function_256(bool bParam0) //Position: 0x89AC / 35244
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_257() //Position: 0x89C0 / 35264
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = GET_LOCAL_SLOT();
	switch (Local_368.f_16)
	{
		case 0x00000001:
			if (IS_SLOT_VALID(bVar0))
			{
				if (Function_123(bVar0))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
					{
						Function_159(GET_SLOT_ACTOR(bVar0));
						vVar1 = { StackVal, StackVal, Function_159(GET_SLOT_ACTOR(bVar0)) };
						bLocal_327 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "FinishFlagSet")));
						vVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(bLocal_327) };
						if (VDIST(vVar1, vVar4) >= 14.0f)
						{
							Local_368.f_16 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

struct<24> Function_258(bool bParam0) //Position: 0x8A53 / 35411
{
	struct<6> Var0;
	
	GET_OBJECT_POSITION(bParam0, &Var0);
	GET_OBJECT_ORIENTATION(bParam0, &Var0 + 12);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_259() //Position: 0x8A71 / 35441
{
	Function_32(0, (4294967295 * Function_120()));
	switch (Local_368.f_12)
	{
		case 0x00000001:
			Function_32(13, 10);
			break;
		
		case 0x00000002:
			Function_32(13, 8);
			break;
		
		case 0x00000003:
			Function_32(13, 6);
			break;
		
		case 0x00000004:
			Function_32(13, 4);
			break;
		
		case 0x00000005:
			Function_32(13, 3);
			break;
		
		case 0x00000006:
			Function_32(13, 2);
			break;
		
		case 0x00000007:
			Function_32(13, 2);
			break;
		
		case 0x00000008:
			Function_32(13, 1);
			break;
	}
	if (Local_368.f_12 != 1 || GET_NUM_PLAYERS() >= 1)
	{
		Function_32(7, 1);
	}
	else
	{
		Function_32(6, 1);
	}
	Function_32(19, Local_368.f_12);
	return;
}

void Function_260(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8B29 / 35625
{
	AUDIO_MUSIC_SET_MOOD(Function_261(iParam0), iParam1, iParam2, iParam3);
}

var Function_261(int iParam0) //Position: 0x8B3F / 35647
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

void Function_262() //Position: 0x9092 / 37010
{
	bool bVar0;
	
	Local_368.f_12 = 1;
	bVar0 = GET_LOCAL_SLOT();
	Local_368.f_12 = Function_263(bVar0);
	if (Local_368.f_12 >= GET_NUM_PLAYERS())
	{
		Local_368.f_12 = GET_NUM_PLAYERS();
	}
	return;
}

var Function_263(int iParam0) //Position: 0x90C0 / 37056
{
	bool bVar0;
	struct<2> Var1[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	struct<5> Var22;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= 8)
	{
		Var1[bVar02] = bVar0;
		if (IS_SLOT_VALID(bVar0))
		{
			Var1[bVar02].f_4 = Function_121(bVar0);
		}
		if (StackVal >= 0.0f)
		{
			Var1[bVar02].f_4 = 1E+07.0f;
		}
		bVar0++;
	}
	iVar18 = 0;
	iVar19 = 0;
	bVar20 = true;
	bVar21 = false;
	while (bVar20)
	{
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			iVar19 = iVar18 + 1;
			if (iVar19 <= 8)
			{
				if (StackVal < StackVal)
				{
					Var22 = { StackVal, Var1[iVar182] };
					Var1[iVar182] = { StackVal, Var1[iVar192] };
					Var1[iVar192] = { StackVal, Var22 };
					bVar21 = true;
				}
			}
			Var22 = 0;
			Var22.f_4 = 0.0f;
			iVar18++;
		}
		if (!bVar21)
		{
			bVar20 = false;
		}
		bVar21 = false;
		iVar18 = 0;
		iVar19 = 0;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_PLAYERS())
	{
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_PLAYERS())
	{
		if (Var1[bVar02] == iParam0)
		{
			return bVar0 + 1;
		}
		bVar0++;
	}
	return 4294967295;
}

void Function_264() //Position: 0x91E2 / 37346
{
	float fVar0;
	
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(76))
	{
		Function_270(2048, 0);
	}
	Function_269("Mode_HorsRac_RacerNoFin", 0);
	Function_270(32, 1);
	Function_30(&Local_348);
	if (Function_234(5) == 4294967295)
	{
		Function_233(5, 0);
	}
	fVar0 = Function_267();
	if (fVar0 < 0.0f)
	{
		Function_266(fVar0);
		Function_265(5, fVar0);
	}
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	SET_ACTOR_INVULNERABILITY(Function_25(), 1);
	SET_ACTOR_INVULNERABILITY(GET_MOUNT(Function_25()), 1);
	UNK_0x1A59E608(bLocal_331);
	UNK_0x1A59E608(bLocal_332);
	ACTOR_START_FORCE_HOLSTER(Function_25(), 0, 0);
	HUD_TIMER_DISPLAY(0);
	Function_2();
	return;
}

void Function_265(int iParam0, float fParam1) //Position: 0x927C / 37500
{
	Function_235(iParam0, (Function_124(iParam0) + fParam1));
	return;
}

void Function_266(float fParam0) //Position: 0x928F / 37519
{
	Function_235(0, fParam0);
	return;
}

var Function_267() //Position: 0x929B / 37531
{
	int iVar0;
	bool bVar1;
	
	iVar0 = -1.0f;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_268(bVar1))
		{
			if (Function_239(bVar1, 16, 1))
			{
				if (bVar1 != GET_LOCAL_SLOT())
				{
					if (Function_121(bVar1) < iVar0)
					{
						iVar0 = Function_121(bVar1);
					}
				}
			}
		}
		bVar1++;
	}
	if (iVar0 != -1.0f)
	{
		return iVar0;
	}
	iVar0 = (iVar0 + 30.0f);
	return iVar0;
}

bool Function_268(bool bParam0) //Position: 0x92FA / 37626
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_123(bParam0);
}

void Function_269(bool bParam0, bool bParam1) //Position: 0x9310 / 37648
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

void Function_270(int iParam0, bool bParam1) //Position: 0x9350 / 37712
{
	if (bParam1)
	{
		Function_7(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_6(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_271() //Position: 0x9378 / 37752
{
	if (!Local_140.f_504)
	{
		switch (Local_140.f_500)
		{
			case 0x00000000:
				Function_282(&Global_50170[24322] + 4, &Global_50170[24322] + 8, &Global_50170[24322] + 12, 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				Function_282(&Global_50170[24322] + 4, &Global_50170[24322] + 8, &Global_50170[24322] + 12, 0, 1, 0, 0, 0);
				break;
			
			case 0x00000003:
				Function_282(&Global_50170[24322] + 4, &Global_50170[24322] + 8, &Global_50170[24322] + 12, 0, 0, 1, 0, 0);
				break;
			
			case 0x00000004:
				Function_282(&Global_50170[24322] + 4, &Global_50170[24322] + 8, &Global_50170[24322] + 12, 0, 0, 0, 1, 0);
				break;
			
			case 0x00000005:
				Function_282(&Global_50170[24322] + 4, &Global_50170[24322] + 8, &Global_50170[24322] + 12, 0, 0, 0, 0, 1);
				break;
			
			case 0x00000007:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 1, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000008:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 0, 1, 0, 0, 0, 0);
				break;
			
			case 0x00000009:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 0, 0, 1, 0, 0, 0);
				break;
			
			case 0x0000000A:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 0, 0, 0, 1, 0, 0);
				break;
			
			case 0x0000000B:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 0, 0, 0, 0, 1, 0);
				break;
			
			case 0x0000000C:
				Function_272(&Global_50170[24422] + 4, &Global_50170[24422] + 8, &Global_50170[24422] + 12, 0, 0, 0, 0, 0, 1);
				break;
			
			default:
				break;
		}
		Local_140.f_504 = 1;
	}
	return;
}

void Function_272(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x9584 / 38276
{
	switch (*uParam1)
	{
		case 0x00000000:
			Function_280(244);
			if (bParam3)
			{
				*uParam2 = 0.0f;
				Function_278(244, uParam1, 1, 7035, 50.0f, 150.0f, 0, Function_279(0), 1);
				Function_277(244);
			}
			break;
		
		case 0x00000001:
			Function_277(244);
			if (bParam4)
			{
				*uParam2 = 0.0f;
				Function_278(244, uParam1, 2, 7036, 150.0f, 200.0f, 0, Function_279(0), 1);
				Function_277(244);
			}
			break;
		
		case 0x00000002:
			Function_277(244);
			if (bParam5)
			{
				*uParam2 = 0.0f;
				Function_278(244, uParam1, 3, 7037, 200.0f, 250.0f, 0, Function_279(0), 1);
				Function_277(244);
			}
			break;
		
		case 0x00000003:
			Function_277(244);
			if (bParam6)
			{
				*uParam2 = 0.0f;
				Function_278(244, uParam1, 4, 7038, 250.0f, 300.0f, 0, Function_279(0), 1);
				Function_277(244);
			}
			break;
		
		case 0x00000004:
			Function_277(244);
			if (bParam7)
			{
				*uParam2 = 0.0f;
				Function_278(244, uParam1, 5, 7039, 300.0f, 350.0f, 0, Function_279(0), 1);
				Function_277(244);
			}
			break;
		
		case 0x00000005:
			Function_277(244);
			if (bParam8)
			{
				*uParam2 = 0.0f;
				Function_273(244, uParam1, uParam0, 7040, 350.0f, Function_279(0));
			}
			break;
	}
}

void Function_273(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x96D3 / 38611
{
	struct<4> Var0;
	
	Function_107(iParam0, 1);
	*uParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_100(iParam3);
	}
	Function_274(bParam4, 0, 1);
	Function_103(iParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_75(iParam0) };
	Function_95(&Var0, CEIL(bParam4), bParam5);
	Function_111(iParam0, 4);
	Function_80();
}

int Function_274(float fParam0, var uParam1, bool bParam2) //Position: 0x973F / 38719
{
	if (!Function_247())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_265(8, fParam0);
	}
	Function_275(487, (fParam0 * Global_3362), uParam1);
	return 1;
}

void Function_275(var uParam0, bool bParam1, int iParam2) //Position: 0x976F / 38767
{
	Function_276(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_276(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x978B / 38795
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
	Function_59(iParam0, TO_FLOAT(bParam1), 1);
	Function_58(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_46(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_277(bool bParam0) //Position: 0x99AB / 39339
{
	Function_280(bParam0);
	return;
}

void Function_278(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x99B6 / 39350
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam7))
	{
		bParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_75(iParam0) };
	Function_95(&Var0, CEIL(bParam4), bParam7);
	*uParam1 = iParam2;
	if (bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(iParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(iParam0), (TO_FLOAT(Global_50170[iParam022].f_28) / TO_FLOAT(bParam6)), false, 0);
	}
	Function_112(iParam0, bParam6, CEIL(bParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_100(iParam3);
	}
	Function_111(iParam0, 4);
	Function_80();
}

bool Function_279(bool bParam0) //Position: 0x9A46 / 39494
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

void Function_280(int iParam0) //Position: 0x9A74 / 39540
{
	Function_281(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_281(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9A8A / 39562
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_108();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_282(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x9AFF / 39679
{
	switch (*uParam1)
	{
		case 0x00000000:
			Function_280(243);
			if (bParam3)
			{
				*uParam2 = 0.0f;
				Function_278(243, uParam1, 1, 7030, 50.0f, 150.0f, 0, Function_283(0), 1);
				Function_277(243);
			}
			break;
		
		case 0x00000001:
			Function_277(243);
			if (bParam4)
			{
				*uParam2 = 0.0f;
				Function_278(243, uParam1, 2, 7031, 150.0f, 200.0f, 0, Function_283(0), 1);
				Function_277(243);
			}
			break;
		
		case 0x00000002:
			Function_277(243);
			if (bParam5)
			{
				*uParam2 = 0.0f;
				Function_278(243, uParam1, 3, 7032, 200.0f, 250.0f, 0, Function_283(0), 1);
				Function_277(243);
			}
			break;
		
		case 0x00000003:
			Function_277(243);
			if (bParam6)
			{
				*uParam2 = 0.0f;
				Function_278(243, uParam1, 4, 7033, 250.0f, 300.0f, 0, Function_283(0), 1);
				Function_277(243);
			}
			break;
		
		case 0x00000004:
			Function_277(243);
			if (bParam7)
			{
				*uParam2 = 0.0f;
				Function_273(243, uParam1, uParam0, 7034, 300.0f, Function_283(0));
			}
			break;
	}
}

bool Function_283(bool bParam0) //Position: 0x9C17 / 39959
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

bool Function_284() //Position: 0x9C45 / 40005
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Local_379)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((StackVal - StackVal) >= 1)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_285() //Position: 0x9C7C / 40060
{
	Function_287(-Local_368.f_12);
	if (iLocal_319)
	{
		if (Function_286())
		{
			if (!iLocal_320)
			{
				UI_DISABLE("Timer");
				iLocal_320 = 1;
			}
		}
		else if (iLocal_320)
		{
			UI_ENABLE("Timer");
			iLocal_320 = 0;
		}
	}
	return;
}

bool Function_286() //Position: 0x9CC5 / 40133
{
	return Function_24(16384);
}

void Function_287(var uParam0) //Position: 0x9CD1 / 40145
{
	Function_233(0, uParam0);
	return;
}

void Function_288() //Position: 0x9CDD / 40157
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = Function_25();
	if (!IS_ACTOR_VALID(bVar0) && !Local_368.f_40)
	{
		return;
	}
	Local_368.f_8 = 0.0f;
	if (!Local_368.f_40)
	{
		fVar1 = Function_290(bVar0, bLocal_313);
		Local_368.f_8 = (1.0f / fVar1);
	}
	else
	{
		fVar1 = Function_289(StackVal, StackVal, *(&Local_368 + 28), bLocal_313);
		Local_368.f_8 = (1.0f / fVar1);
	}
	Local_368.f_8 = (StackVal + TO_FLOAT(StackVal + 1));
	Local_368.f_12 = 1;
	bVar3 = GET_LOCAL_SLOT();
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_379, bVar2) && bVar2 == bVar3)
		{
			if (Function_123(bVar2))
			{
				if (StackVal < StackVal || Function_239(bVar2, 16, 1))
				{
					Local_368.f_12++;
				}
			}
		}
		bVar2++;
	}
	iLocal_0 = Function_52(0, (3 - GET_NUM_PLAYERS()));
	if (Local_368.f_12 >= GET_NUM_PLAYERS())
	{
		Local_368.f_12 = GET_NUM_PLAYERS();
	}
	return;
}

float Function_289(vector3 vParam0, bool bParam3) //Position: 0x9DC7 / 40391
{
	vector3 vVar0;
	
	if (!Function_84(StackVal, StackVal, vParam0))
	{
		Function_201(bParam3);
		vVar0 = { StackVal, StackVal, Function_201(bParam3) };
		return VDIST(vParam0, vVar0);
	}
	LOG_ERROR("Attempting to get distance from ZERO Vector to volume. Returning 0.0!");
	return 0.0f;
}

var Function_290(bool bParam0, int iParam1) //Position: 0x9E40 / 40512
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_291(bParam0);
		vVar0 = { StackVal, StackVal, Function_291(bParam0) };
		Function_201(iParam1);
		vVar3 = { StackVal, StackVal, Function_201(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_291(bool bParam0) //Position: 0x9EBD / 40637
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

void Function_292() //Position: 0x9F27 / 40743
{
	if (IS_ACTOR_VALID(Function_25()))
	{
		if (!iLocal_309)
		{
			if (!IS_ACTOR_RIDING(Function_25()))
			{
				if (!IS_ACTOR_RAGDOLL(Function_25()))
				{
					iLocal_309 = 1;
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_279 = 12;
				}
			}
		}
	}
	return;
}

void Function_293() //Position: 0x9F6B / 40811
{
	bool bVar0;
	int iVar1;
	
	Function_294();
	if (Function_138(&Local_285 + 24) > 7.5f)
	{
		return;
	}
	if (Local_368.f_12 != 1)
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_379, bVar0))
			{
				if (Local_379[bVar011].f_12 == 1)
				{
					iVar1 = (StackVal - StackVal);
					switch (iVar1)
					{
						case 0x00000000:
							fLocal_334 = fLocal_335;
							break;
						
						case 0x00000001:
							fLocal_334 = (fLocal_335 + 2.0f);
							break;
						
						case 0x00000002:
							fLocal_334 = (fLocal_335 + 3.0f);
							break;
						
						case 0x00000003:
							fLocal_334 = (fLocal_335 + 4.0f);
							break;
						
						case 0x00000004:
						default:
							fLocal_334 = (fLocal_335 + 5.0f);
							break;
					}
					return;
				}
			}
			bVar0++;
		}
	}
	else
	{
		fLocal_334 = fLocal_335;
	}
	return;
}

void Function_294() //Position: 0xA02F / 41007
{
	if (FABS((fLocal_333 - fLocal_334)) > 0.05f)
	{
		fLocal_333 = fLocal_334;
	}
	else
	{
		fLocal_333 = (fLocal_333 + ((fLocal_334 - fLocal_333) * (0.3f * GET_LAST_FRAME_TIME())));
	}
	if (fLocal_333 < (fLocal_334 + 0.25f) || fLocal_333 > (fLocal_334 - 0.25f))
	{
		TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_138, fLocal_333);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_138, fLocal_333);
	}
	return;
}

void Function_295() //Position: 0xA097 / 41111
{
	bool bVar0;
	int iVar1;
	
	if (!Local_348.f_68)
	{
		return;
	}
	if (Function_286())
	{
		Function_31(&Local_348, 1);
		return;
	}
	Local_348.f_76 = (Local_348.f_76 - 1);
	if (!Local_348.f_72 || Local_348.f_76 > 0)
	{
		Local_348.f_76 = iLocal_13;
		bVar0 = false;
		if (!Local_348.f_72)
		{
			Local_348.f_72 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
		}
		if (!Local_348.f_64)
		{
			iVar1 = (NET_GET_SESSION_GAMER_COUNT() + iLocal_0);
			if (Local_348.f_52 != iVar1)
			{
				Local_348.f_52 = iVar1;
				bVar0 = true;
			}
		}
		bVar0 = (bVar0 || Function_298(&Local_348, &Local_348 + 24));
		if (bVar0)
		{
			NET_SCOREGRAPH_CLEAR_MARKERS();
			NET_SCOREGRAPH_SETUP(Local_348.f_52, 0, Local_348.f_60);
			if (StackVal >= 4294967295)
			{
				if (Local_348 == Local_348.f_24)
				{
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, Local_348, 0);
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_348 + 24), 1);
				}
				else if (Local_348 <= Local_348.f_24)
				{
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, Local_348, 0);
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_348 + 24), 0);
				}
				else
				{
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_348 + 24), 0);
					Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, Local_348, 0);
				}
			}
			else
			{
				Function_296(StackVal, StackVal, StackVal, StackVal, StackVal, Local_348, 0);
			}
		}
	}
	return;
}

void Function_296(vector3 vParam0) //Position: 0xA1B8 / 41400
{
	NET_SCOREGRAPH_ADD_PLAYER_LABEL((vParam0.x + iParam6), vParam0.z, Function_297(vParam0.y, 100), "");
}

var Function_297(bool bParam0, bool bParam1) //Position: 0xA1D8 / 41432
{
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

var Function_298(int iParam0, int iParam1) //Position: 0xA1FA / 41466
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, *iParam1 };
	bVar1 = GET_LOCAL_SLOT();
	iVar2 = Function_300();
	bVar3 = 4294967295;
	bVar4 = 4294967295;
	bVar5 = 4294967295;
	bVar6 = 4294967295;
	Function_299(iParam0, (Local_368.f_12 - 1), &iVar0);
	bVar7 = false;
	while (bVar7 <= 16)
	{
		if (bVar7 != bVar1)
		{
			if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_379, bVar7))
			{
				iVar8 = Local_379[bVar711].f_20;
				if (iVar8 >= iVar2)
				{
					if (iVar8 >= bVar4)
					{
						bVar4 = iVar8;
						bVar3 = bVar7;
					}
				}
				else if (iVar8 == iVar2)
				{
					if (Local_379[bVar711].f_12 - 1) <= (Local_368.f_12 - 1)
					{
						bVar4 = iVar8;
						bVar3 = bVar7;
					}
					else
					{
						bVar6 = iVar8;
						bVar5 = bVar7;
					}
				}
				else if (iVar8 >= bVar6)
				{
					bVar6 = iVar8;
					bVar5 = bVar7;
				}
			}
		}
		bVar7++;
	}
	Function_299(iParam0 + 4, iVar2, &iVar0);
	Function_299(iParam0 + 8, bVar1, &iVar0);
	if ((Local_368.f_12 - 1) == 0)
	{
		Function_299(iParam1, 1, &iVar0);
		Function_299(iParam1 + 4, bVar6, &iVar0);
		Function_299(iParam1 + 8, bVar5, &iVar0);
	}
	else
	{
		Function_299(iParam1, 0, &iVar0);
		Function_299(iParam1 + 4, bVar4, &iVar0);
		Function_299(iParam1 + 8, bVar3, &iVar0);
	}
	return iVar0;
}

int Function_299(int iParam0, bool bParam1, int iParam2) //Position: 0xA321 / 41761
{
	if (*iParam0 != bParam1)
	{
		*iParam0 = bParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

var Function_300() //Position: 0xA33B / 41787
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar0 = GET_LOCAL_SLOT();
	bVar1 = GET_SLOT_ACTOR(bVar0);
	if (IS_ACTOR_VALID(bVar1))
	{
		bVar5 = Function_303(bVar1, bLocal_328);
		Function_302(StackVal + 1);
		vVar2 = { StackVal, StackVal, Function_302(StackVal + 1) };
		iVar6 = Function_301(StackVal, StackVal, vVar2, bLocal_328);
		if (bVar5 >= iVar6 && bVar5 < 0)
		{
			bVar7 = TO_FLOAT(bVar5);
			bVar8 = TO_FLOAT((iLocal_339 - 1));
			bVar9 = ((bVar7 / bVar8) * 100.0f);
			if (bVar9 < IntToFloat(Local_368.f_20))
			{
				Local_368.f_20 = ROUND(bVar9);
			}
		}
	}
	return Local_368.f_20;
}

var Function_301(vector3 vParam0, bool bParam3) //Position: 0xA3BF / 41919
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 0;
	iVar4 = 4294967295;
	bVar5 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
	{
		GET_PATH_POINT(bParam3, iVar0, &vVar1);
		bVar6 = VDIST(vParam0, vVar1);
		if (bVar6 > bVar5)
		{
			iVar4 = iVar0;
			bVar5 = bVar6;
		}
		iVar0++;
	}
	return iVar4;
}

vector3 Function_302(bool bParam0) //Position: 0xA414 / 42004
{
	vector3 vVar0;
	bool bVar3;
	
	bLocal_327 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam0, bLocal_330);
	bVar3 = GET_VOLUME_FROM_OBJECT(bLocal_327);
	if (IS_VOLUME_VALID(bVar3))
	{
		Function_201(bVar3);
		vVar0 = { StackVal, StackVal, Function_201(bVar3) };
	}
	else
	{
		vVar0 = { 0.0f, 0.0f, 0.0f };
	}
	return StackVal, StackVal, vVar0;
}

var Function_303(var uParam0, bool bParam1) //Position: 0xA44C / 42060
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 0;
	bVar4 = 4294967295;
	bVar5 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, iVar0, &vVar1);
		Function_159(uParam0);
		bVar6 = VDIST(Function_159(uParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = iVar0;
			bVar5 = bVar6;
		}
		iVar0++;
	}
	return bVar4;
}

void Function_304() //Position: 0xA4A0 / 42144
{
	if (IS_ACTOR_SHOOTING(Function_25()) || IS_ACTOR_THROWING(Function_25()))
	{
		Local_140.f_504 = 1;
	}
	return;
}

void Function_305() //Position: 0xA4BC / 42172
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(77))
	{
		if (iLocal_346)
		{
			if (IS_ACTOR_SHOOTING(Function_25()) || IS_ACTOR_THROWING(Function_25()))
			{
				iLocal_346 = 0;
				Local_140.f_504 = 1;
			}
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_347))
			{
				iLocal_346 = 0;
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_347);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_347);
			}
		}
	}
	return;
}

void Function_306(bool bParam0) //Position: 0xA504 / 42244
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_VOLUME_VALID(bLocal_313))
		{
			bVar0 = Function_307(bParam0);
			if (bVar0)
			{
				if (!iLocal_318)
				{
					PRINT_BIG("MP_Checkpoint_Missed", 3600.0f, 0, 2, 0);
					SET_BLIP_BLINK(bLocal_321, 1, 1, 3600.0f);
					Function_269("Mode_HorsRac_MissChekPnt", 0);
					iLocal_318 = 1;
				}
			}
			else if (iLocal_318)
			{
				iLocal_318 = 0;
			}
		}
	}
	return;
}

int Function_307(bool bParam0) //Position: 0xA58D / 42381
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	
	GET_VOLUME_CENTER(bLocal_313, &vVar0);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_315, vVar0, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal) };
	VNORMALIZE(&vVar6);
	VNORMALIZE(&vVar9);
	fVar12 = VDOT(&vVar6, &vVar9);
	if (!IS_ACTOR_IN_VOLUME(bParam0, bLocal_313) && fVar12 > 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_308() //Position: 0xA5E8 / 42472
{
	if (Local_368.f_12 != 1)
	{
		if (!Function_355(&iLocal_562))
		{
			Function_312(&iLocal_562, 0.0f);
		}
		if (Function_138(&iLocal_562) < 5.0f)
		{
			Function_269("Mode_HorsRac_LosesLead", 0);
			Function_312(&iLocal_562, 0.0f);
			if (Function_355(&iLocal_562))
			{
				Function_311(&iLocal_562);
			}
		}
		if (!Function_141(&iLocal_556))
		{
			if (Function_355(&iLocal_556))
			{
				Function_311(&iLocal_556);
			}
		}
		Function_310(&iLocal_556);
		if (!Function_141(&iLocal_559))
		{
			if (Function_355(&iLocal_559))
			{
				Function_311(&iLocal_559);
			}
		}
		Function_310(&iLocal_559);
	}
	else if (Local_368.f_12 == 1)
	{
		if (!Function_355(&iLocal_559))
		{
			Function_312(&iLocal_559, 0.0f);
		}
		if (Function_138(&iLocal_559) < 5.0f)
		{
			Function_269("Mode_HorsRac_GainsLead", 0);
			Function_312(&iLocal_559, 0.0f);
			if (Function_355(&iLocal_559))
			{
				Function_311(&iLocal_559);
			}
		}
		if (!Function_355(&iLocal_556))
		{
			Function_312(&iLocal_556, 0.0f);
		}
		if (Function_138(&iLocal_556) < 25.0f)
		{
			if (Function_309(Function_25(), 1) <= 5.0f)
			{
				Function_312(&iLocal_556, 0.0f);
				Function_269("Mode_HorsRac_Dominate", 0);
			}
		}
		if (!Function_141(&iLocal_562))
		{
			if (Function_355(&iLocal_562))
			{
				Function_311(&iLocal_562);
			}
		}
		Function_310(&iLocal_562);
	}
	return;
}

float Function_309(bool bParam0, bool bParam1) //Position: 0xA74D / 42829
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_310(int iParam0) //Position: 0xA76C / 42860
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_311(int iParam0) //Position: 0xA780 / 42880
{
	if (Function_355(iParam0))
	{
		if (!Function_141(iParam0))
		{
			Function_139();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_7(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_312(int iParam0, float fParam1) //Position: 0xA848 / 43080
{
	Function_139();
	Function_313(iParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_313(var uParam0, var uParam1) //Position: 0xA85C / 43100
{
	uParam0->f_4 = uParam1;
	Function_7(uParam0, 1);
	Function_6(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_314() //Position: 0xA879 / 43129
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_355(&Local_285 + 36))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_318(&Local_285 + 36);
		}
		return;
	}
	if (Function_141(&Local_285 + 36))
	{
		if (!iLocal_308)
		{
			Function_316();
			iLocal_308 = 1;
		}
		if (fLocal_567 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - fLocal_567) < 10.0f)
			{
				bVar0 = Function_25();
				if (IS_ACTOR_VALID(bVar0))
				{
					if (GET_WEAPON_IN_HAND(bVar0) == 4294967295)
					{
						UI_SET_TEXT("WeaponAmmo", "Common_Null");
					}
				}
				fLocal_567 = -1.0f;
			}
		}
		return;
	}
	bVar1 = Function_137(&Local_285 + 36);
	if (bVar1 >= 0.0f)
	{
		if (!iLocal_308)
		{
			Function_316();
			PLAY_SOUND_FRONTEND("GRAND_PRIX_WEAPONS_LIVE_MASTER");
			iLocal_308 = 1;
		}
		fLocal_567 = GET_CURRENT_GAME_TIME();
		if (NET_IS_SESSION_HOST())
		{
			Function_311(&Local_285 + 36);
		}
	}
	else if (bLocal_566 != CEIL(bVar1))
	{
		bLocal_566 = CEIL(bVar1);
		Function_315();
	}
	return;
}

void Function_315() //Position: 0xA977 / 43383
{
	if (bLocal_566 > 0)
	{
		UI_SET_STRING("MP_Race_liveSeconds", I2STR(bLocal_566));
	}
	else
	{
		UI_SET_STRING("MP_Race_liveSeconds", "");
	}
	UI_SET_TEXT("WeaponAmmo", "MP_Race_WeaponsLive");
	UI_REFRESH("WeaponAmmo");
	UI_SHOW("WeaponAmmo");
	return;
}

void Function_316() //Position: 0xAA08 / 43528
{
	if (IS_ACTOR_VALID(Function_25()))
	{
		Function_317(0);
	}
	Function_269("Mode_HorsRac_WeaponsActv", 0);
	UI_SET_TEXT("WeaponAmmo", "MP_Race_WepLive");
	UI_REFRESH("WeaponAmmo");
	PLAY_SOUND_FRONTEND("HUD_MP_OVERTIME_WIN_MASTER");
	return;
}

void Function_317(bool bParam0) //Position: 0xAA8C / 43660
{
	bool bVar0;
	int iVar1;
	
	if (bParam0)
	{
	}
	bVar0 = Function_25();
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		SET_EQUIP_SLOT_ENABLED(bVar0, iVar1, !bParam0);
		iVar1++;
	}
	return;
}

void Function_318(int iParam0) //Position: 0xAABB / 43707
{
	Function_312(iParam0, 0.0f);
	return;
}

int Function_319() //Position: 0xAAC7 / 43719
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_25();
	bVar1 = false;
	if (IS_OBJECT_VALID(bLocal_326))
	{
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bVar0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bVar0)))
				{
					if (IS_ACTOR_ALIVE(GET_MOUNT(bVar0)))
					{
						if (IS_ACTOR_IN_VOLUME(bVar0, bLocal_313) || iLocal_307)
						{
							if (DECOR_CHECK_EXIST(bLocal_326, "pointNum"))
							{
								bVar1 = DECOR_GET_INT(bLocal_326, "pointNum");
							}
							else
							{
								bVar1 = 4294967295;
							}
							PLAY_SOUND_FRONTEND("HUD_CHECK_POINT_MASTER");
							UI_REMOVE_MESSAGE_IN_QUEUE("MP_Checkpoint_Missed", 0, 0);
							if (StackVal != bVar1)
							{
								Local_368.f_4 = bVar1;
								if (IS_BLIP_VALID(bLocal_321))
								{
									REMOVE_BLIP(bLocal_321);
								}
								if (IS_BLIP_VALID(bLocal_322))
								{
									REMOVE_BLIP(bLocal_322);
								}
								bVar2 = false;
								if (DECOR_CHECK_EXIST(bLocal_326, "finishline"))
								{
									bVar2 = DECOR_GET_BOOL(bLocal_326, "finishline");
								}
								if (bVar2 && Local_368 > Local_140)
								{
								}
								else if (StackVal != (bVar1 - 1))
								{
									Function_328(StackVal, "MP_checkpoint_cleared", I2STR(I2STR(bVar1 + 1) + 1));
								}
								if (bVar2 || iLocal_307)
								{
									Function_323();
									return 13;
								}
								Function_322(bVar1 + 1);
								Function_200(bLocal_326);
								vLocal_315 = { StackVal, StackVal, Function_200(bLocal_326) };
								bLocal_326 = OBJECT_ITERATOR_NEXT(bLocal_324);
								if (IS_OBJECT_VALID(bLocal_326))
								{
									bLocal_313 = GET_VOLUME_FROM_OBJECT(bLocal_326);
									uLocal_314 = COPY_VOLUME(bLocal_338, bLocal_313, Function_47(), 1);
									SCALE_VOLUME(uLocal_314, 2.0f);
									bVar1 = DECOR_GET_INT(bLocal_326, "pointNum");
									Function_200(bLocal_326);
									Function_320(StackVal, StackVal, Function_200(bLocal_326), 0, 393264, 1);
									if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_313)), "checkpointfinish") && Local_368 != Local_140)
									{
										bLocal_321 = ADD_BLIP_FOR_OBJECT(bLocal_326, 413, 0f, 2, 0);
										SET_BLIP_PRIORITY(bLocal_321, 3);
									}
									else
									{
										bLocal_321 = ADD_BLIP_FOR_OBJECT(bLocal_326, 330, 0f, 2, 0);
										bLocal_326 = OBJECT_ITERATOR_NEXT(bLocal_324);
										if (IS_OBJECT_VALID(bLocal_326))
										{
											bLocal_313 = GET_VOLUME_FROM_OBJECT(bLocal_326);
											bVar1 = DECOR_GET_INT(bLocal_326, "pointNum");
											if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_313)), "checkpointfinish") && Local_368 != Local_140)
											{
												bLocal_322 = ADD_BLIP_FOR_OBJECT(bLocal_326, 413, 0f, 2, 0);
												SET_BLIP_SCALE(bLocal_322, 0.75f);
												SET_BLIP_PRIORITY(bLocal_322, 3);
												bLocal_326 = OBJECT_ITERATOR_PREV(bLocal_324);
											}
											else
											{
												bLocal_322 = ADD_BLIP_FOR_OBJECT(bLocal_326, 330, 0f, 2, 0);
												SET_BLIP_SCALE(bLocal_322, 0.75f);
											}
											if (StackVal <= bVar1)
											{
												bLocal_326 = OBJECT_ITERATOR_PREV(bLocal_324);
											}
											if (IS_OBJECT_VALID(bLocal_326))
											{
												bVar1 = DECOR_GET_INT(bLocal_326, "pointNum");
												bLocal_313 = GET_VOLUME_FROM_OBJECT(bLocal_326);
											}
										}
									}
								}
							}
						}
						else if (StackVal == 4294967295)
						{
							if (IS_OBJECT_VALID(bLocal_326))
							{
								if (!IS_BLIP_VALID(bLocal_321))
								{
									Function_200(bLocal_326);
									Function_320(StackVal, StackVal, Function_200(bLocal_326), 0, 48, 1);
									bLocal_321 = ADD_BLIP_FOR_OBJECT(bLocal_326, 330, 0f, 2, 0);
									SET_BLIP_PRIORITY(bLocal_321, 3);
								}
								if (!IS_BLIP_VALID(bLocal_322))
								{
									bLocal_326 = OBJECT_ITERATOR_NEXT(bLocal_324);
									bLocal_322 = ADD_BLIP_FOR_OBJECT(bLocal_326, 330, 0f, 2, 0);
									SET_BLIP_SCALE(bLocal_322, 0.75f);
									bLocal_326 = OBJECT_ITERATOR_PREV(bLocal_324);
									OBJECT_ITERATOR_RESET(bLocal_324);
								}
							}
						}
					}
				}
			}
		}
	}
	return 11;
}

void Function_320(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0xAE3F / 44607
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
		Function_321(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_321(bool bParam0) //Position: 0xAEFB / 44795
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

void Function_322(bool bParam0) //Position: 0xAF3B / 44859
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (!IS_ITERATOR_VALID(bLocal_325))
	{
		bLocal_325 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	}
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "FireFlagGroupSet");
	if (!IS_OBJECT_VALID(bVar1))
	{
	}
	bVar2 = GET_OBJECTSET_FROM_OBJECT(bVar1);
	if (!IS_OBJECTSET_VALID(bVar2))
	{
	}
	ITERATE_IN_SET(bLocal_325, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bLocal_325);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (DECOR_GET_INT_VERBOSE(bVar3, "checkPoint", &iVar0))
		{
			if (iVar0 == bParam0)
			{
				if ((bParam0 % 2) == 0)
				{
					UNK_0x1A59E608(bLocal_332);
					if (IS_OBJECT_VALID(bLocal_331))
					{
						DESTROY_OBJECT(bLocal_331);
					}
					Function_200(bVar3);
					bLocal_331 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_140.f_12, Function_47(), "amb_checkpoint_fire", Function_200(bVar3));
					PRINTSTRING("Smoke 1 -> Chkpt ");
					PRINTINT(bParam0);
					PRINTSTRING(" at : ");
					Function_200(bVar3);
					PRINTVECTOR(Function_200(bVar3));
					PRINTSTRING(" but the emitter is at : ");
					Function_200(bLocal_331);
					PRINTVECTOR(Function_200(bLocal_331));
					PRINTNL();
					UNK_0x276EFF8E(bLocal_331, 0.0f, 0.0f, 0.0f);
				}
				else
				{
					UNK_0x1A59E608(bLocal_331);
					if ((bParam0 % 2) == 1)
					{
						if (IS_OBJECT_VALID(bLocal_332))
						{
							DESTROY_OBJECT(bLocal_332);
						}
						Function_200(bVar3);
						bLocal_332 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_140.f_12, Function_47(), "amb_checkpoint_fire", Function_200(bVar3));
						PRINTSTRING("Smoke 2 -> Chkpt ");
						PRINTINT(bParam0);
						PRINTSTRING(" at : ");
						Function_200(bVar3);
						PRINTVECTOR(Function_200(bVar3));
						PRINTSTRING(" but the emitter is at : ");
						Function_200(bLocal_332);
						PRINTVECTOR(Function_200(bLocal_332));
						PRINTNL();
					}
					UNK_0x276EFF8E(bLocal_332, 0.0f, 0.0f, 0.0f);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bLocal_325);
	}
	return;
}

void Function_323() //Position: 0xB127 / 45351
{
	bool bVar0;
	struct<6> Var1;
	bool bVar7;
	
	Function_18(16, 1);
	Function_266(Function_138(&Local_285 + 24));
	Function_265(5, Function_138(&Local_285 + 24));
	Function_327(&Local_140 + 56, 1);
	if (Local_368.f_12 >= 4)
	{
		Local_140.f_488 = 4;
	}
	else
	{
		Local_140.f_488 = Local_368.f_12;
	}
	Function_30(&Local_348);
	iLocal_284 = 3;
	Local_368.f_16 = 1;
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	SET_ACTOR_INVULNERABILITY(Function_25(), 1);
	SET_ACTOR_INVULNERABILITY(GET_MOUNT(Function_25()), 1);
	UNK_0x1A59E608(bLocal_331);
	UNK_0x1A59E608(bLocal_332);
	bLocal_327 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "FinishFlagSet")));
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(bLocal_327) };
	bVar7 = FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "VictoryPath");
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &Var1, 10.0f, 4);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bVar7, 4, 0, 0, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(Function_25(), bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	else
	{
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &Var1, 10.0f, 2);
		TASK_WANDER(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(Function_25(), bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	Function_325();
	Local_368.f_20 = 100;
	if (ACTOR_GET_CURRENT_EQUIP_SLOT(Function_25()) == 6)
	{
		Function_270(8, 1);
		Function_270(16, 0);
	}
	else if (ACTOR_GET_CURRENT_EQUIP_SLOT(Function_25()) == 1)
	{
		Function_270(8, 0);
		Function_270(16, 1);
	}
	ACTOR_START_FORCE_HOLSTER(Function_25(), 0, 0);
	HUD_TIMER_DISPLAY(0);
	Function_2();
	if (!Function_355(&Local_285) && Local_368.f_12 != 1)
	{
		Function_324(GET_LOCAL_SLOT());
	}
	return;
}

void Function_324(var uParam0) //Position: 0xB2A6 / 45734
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 4, &uVar0, 1, 1);
	return;
}

void Function_325() //Position: 0xB2BA / 45754
{
	Function_326(8197);
	UNK_0xD792B93B("MPReward", 4.0f);
	UI_SHOW("MPReward");
	UI_SET_STYLE("MPRewardTitle", 63);
	UI_TEXTURE_SET_NAME("MPRankTexture", "raceFinish_blank");
	UI_SHOW("MPRewardItem.s0");
	UI_REFRESH("MPRewardItem.s0");
	UI_SHOW("MPRewardItem.s1");
	PLAY_SOUND_FRONTEND("GRAND_PRIX_FINISH_LINE_MASTER");
	Function_269("Mode_HorsRac_EndRace_Fin", 0);
	UI_SET_TEXT("MPRewardTitle", "MP_Race_won_you_finished");
	UI_SET_STRING("MP_Race_Total", I2STR(Function_444(3)));
	UI_SET_TEXT("MPRewardItem.s0", "Common_Null");
	UI_SET_TEXT("MPRewardItem.s1", "Common_Null");
	return;
}

void Function_326(int iParam0) //Position: 0xB42D / 46125
{
	Function_68(&Global_83864 + 1252, iParam0);
	return;
}

void Function_327(int iParam0, bool bParam1) //Position: 0xB43F / 46143
{
	if (bParam1)
	{
		Function_7(iParam0 + 44, 2);
	}
	else
	{
		Function_6(iParam0 + 44, 2);
	}
	return;
}

void Function_328(bool bParam0, bool bParam1, int iParam2) //Position: 0xB45D / 46173
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, iParam2, 0, 0, 0, 0);
	return;
}

bool Function_329() //Position: 0xB473 / 46195
{
	if (Function_333())
	{
		return 1;
	}
	if (!Function_355(&Local_285 + 12) && Function_332() <= Function_331())
	{
		Function_330(&Local_285 + 12);
		if (Function_355(&Local_285))
		{
			Function_311(&Local_285);
		}
	}
	if (Function_355(&Local_285))
	{
		if (Function_138(&Local_285) <= 30.0f)
		{
			return 1;
		}
	}
	if (Function_355(&Local_285 + 12))
	{
		if (Function_138(&Local_285 + 12) <= 4.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_330(int iParam0) //Position: 0xB4E4 / 46308
{
	if (!Function_355(iParam0))
	{
		Function_312(iParam0, 0.0f);
	}
	return;
}

int Function_331() //Position: 0xB4F9 / 46329
{
	return GET_NUM_PLAYERS();
}

var Function_332() //Position: 0xB502 / 46338
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_268(bVar1))
		{
			if (Function_239(bVar1, 16, 1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_333() //Position: 0xB539 / 46393
{
	if (GET_NUM_PLAYERS() == 1)
	{
		return 1;
	}
	return 0;
}

bool Function_334(bool bParam0, bool bParam1) //Position: 0xB549 / 46409
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

bool Function_335() //Position: 0xB569 / 46441
{
	float fVar0;
	
	fVar0 = Function_137(&Local_285 + 24);
	switch (iLocal_345)
	{
		case 0x00000000:
			UI_ENTER("MPSplash");
			UI_INCLUDE("MPSplashTitle");
			UI_INCLUDE("MPSplashItem.s0");
			UI_ENABLE("MPSplashTitle");
			UI_ENABLE("MPSplashItem.s0");
			UI_SET_STRING("Generic_Dbuffer128_0", UI_GET_STRING(&Global_79349 + 48));
			UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			UI_SET_TEXT("MPSplashItem.s1", "common_null");
			UI_SET_STYLE("MPSplashTitle", 17);
			UI_REFRESH("MPSplashTitle");
			UI_SET_STYLE("MPRewardTitle", 13);
			UI_REFRESH("MPRewardTitle");
			UI_SET_TEXT("MPRewardItem.s0", "common_null");
			UI_SET_TEXT("MPRewardItem.s1", "common_null");
			Function_351();
			Function_326(8197);
			iLocal_345 = 1;
			Function_145(1.0f);
			Function_350();
			break;
		
		case 0x00000001:
			if (fVar0 >= 8.0f)
			{
				UI_ENTER("MPReward");
				UNK_0xD792B93B("MPReward", 2.0f);
				UI_SET_STYLE("MPRewardTitle", 13);
				UI_SET_TEXT("MPRewardTitle", "mp_race_cd_3");
				iLocal_345 = 2;
				Function_349();
				PLAY_SOUND_FRONTEND("GRAND_PRIX_COUNT_DOWN_MASTER");
				Function_269("Mode_HorsRac_CD1_1", 0);
			}
			break;
		
		case 0x00000002:
			if (fVar0 >= 6.5f)
			{
				UI_ENTER("MPReward");
				UNK_0xD792B93B("MPReward", 2.0f);
				UI_SET_STYLE("MPRewardTitle", 12);
				UI_SET_TEXT("MPRewardTitle", "mp_race_cd_2");
				iLocal_345 = 3;
				Function_348();
				PLAY_SOUND_FRONTEND("GRAND_PRIX_COUNT_DOWN_MASTER");
				Function_269("Mode_HorsRac_CD1_2", 0);
			}
			break;
		
		case 0x00000003:
			if (fVar0 >= 5.0f)
			{
				UI_ENTER("MPReward");
				UNK_0xD792B93B("MPReward", 2.0f);
				UI_SET_STYLE("MPRewardTitle", 11);
				UI_SET_TEXT("MPRewardTitle", "mp_race_cd_1");
				iLocal_345 = 4;
				Function_341();
				PLAY_SOUND_FRONTEND("GRAND_PRIX_COUNT_DOWN_MASTER");
				Function_269("Mode_HorsRac_CD1_3", 0);
			}
			break;
		
		case 0x00000004:
			if (fVar0 >= 3.4f)
			{
				DESTROY_CAMERA(bLocal_1);
				UI_ENTER("MPReward");
				UNK_0xD792B93B("MPReward", 2.0f);
				UI_SET_STYLE("MPRewardTitle", 10);
				UI_SET_TEXT("MPRewardTitle", "MP_Race_start_go");
				UI_EXIT("MPSplash");
				Function_269("Mode_HorsRac_CD1_4", 0);
				Global_13053.f_4 = 1;
				UI_EXIT("LocationText");
				SET_PLAYER_CONTROL(0, 1, 1, 1);
				HUD_ENABLE(true);
				PLAY_SOUND_FRONTEND("GRAND_PRIX_COUNT_DOWN_GO_MASTER");
				if (NET_IS_SESSION_HOST())
				{
					Function_339(&Local_285 + 36, 8.0f);
				}
				bLocal_566 = CEIL(8.0f);
				Function_315();
				iLocal_345 = 5;
			}
			break;
		
		case 0x00000005:
			Function_314();
			Function_319();
			Function_288();
			if (fVar0 >= 0.5f)
			{
				Function_338(&Local_348, 0, 41466, "%d");
				(&Local_348 + 24)->f_4 = 0;
				Local_348.f_4 = 0;
				(&Local_348 + 24)->f_8 = GET_LOCAL_SLOT();
				Local_348.f_8 = GET_LOCAL_SLOT();
				Function_337(&Local_348);
				Function_336(8197);
				iLocal_345 = 6;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_336(int iParam0) //Position: 0xBA64 / 47716
{
	Function_16(&Global_83864 + 1252, iParam0);
	return;
}

void Function_337(int iParam0) //Position: 0xBA76 / 47734
{
	iParam0->f_68 = 1;
	return;
}

void Function_338(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBA81 / 47745
{
	uParam0->f_76 = 0;
	uParam0->f_64 = uParam1;
	uParam0->f_48 = uParam2;
	uParam0->f_60 = uParam3;
}

void Function_339(var uParam0, int iParam1) //Position: 0xBAA0 / 47776
{
	if (!Function_355(uParam0))
	{
		Function_340(uParam0, iParam1);
	}
	return;
}

void Function_340(var uParam0, float fParam1) //Position: 0xBAB6 / 47798
{
	Function_312(uParam0, -fParam1);
	return;
}

void Function_341() //Position: 0xBAC4 / 47812
{
	struct<15> Var0;
	struct<15> Var15;
	
	Function_347(0.0f, 10.0f, 3.0f, &Var0);
	DESTROY_OBJECT(bLocal_2);
	bLocal_2 = Function_342(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_1, Var0, Var15, 1, 0);
	DESTROY_CAMERA(bLocal_1);
	return;
}

bool Function_342(bool bParam0, struct<15> Param1, vector3 vParam16, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, int iParam31, int iParam32) //Position: 0xBAF3 / 47859
{
	var uVar0;
	
	uVar0 = Function_344(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_140.f_12, 0, Param1, vParam16, iParam31, iParam32);
	Function_343(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, vParam16, *(&vParam16 + 12), *(&vParam16 + 48));
	return uVar0;
}

void Function_343(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xBB2A / 47914
{
	SET_CAMERA_FOV(*uParam0, 42.97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERA_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERA_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERA_POSITION(*uParam0, vParam1);
	SET_CAMERA_TARGET_OBJECT(*uParam0, GET_OBJECT_FROM_ACTOR(Function_25()), 0);
	RESET_CAMERA_TARGETDOF(*uParam0);
}

var Function_344(bool bParam0, bool bParam1, struct<15> Param2, struct<15> Param17, bool bParam32, var uParam33) //Position: 0xBB78 / 47992
{
	bool bVar0;
	
	bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Transition_Cutscene", 2, 1);
	Function_345(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar0, Param2, Param17, bParam32, uParam33);
	SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
	if (bParam32)
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.75f, 4294967295, 6, 0, 0, 0, 0);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_345(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, vector3 vParam16, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, bool bParam31, float fParam32) //Position: 0xBBEA / 48106
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_346(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar0, vParam1, *(&vParam1 + 12), *(&vParam1 + 48));
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	if (bParam31)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(bVar0);
	}
	else
	{
		Function_346(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar0, vParam16, *(&vParam16 + 12), *(&vParam16 + 48));
	}
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	if (bParam31)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.05f, 0);
	}
	else if (fParam32 != 0.0f)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.05f, 0);
		CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.75f, 1, 1);
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 4294967295);
	}
	else
	{
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.4f, 0);
		CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, fParam32, 1, 1);
		CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	}
}

void Function_346(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xBCAE / 48302
{
	vector3 vVar0;
	
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, vParam1);
	GET_OBJECT_RELATIVE_POSITION(Function_25(), 0.0f, 0.0f, -2.0f, &vVar0);
	vVar0.f_4 = (vVar0.y + 0.5f);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
}

void Function_347(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0xBD1F / 48415
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_NAMED_BONE_POSITION(Function_25(), "head", &vVar0);
	vVar3 = { 0.0f, fParam2, fParam1 };
	ROTATE_VECTOR_XZ(&vVar3, (fParam0 + GET_HEADING(Function_25())), 0);
	*uParam3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vVar3, StackVal) };
}

void Function_348() //Position: 0xBD5C / 48476
{
	struct<15> Var0;
	struct<15> Var15;
	
	Function_347(-80.0f, 8.0f, 3.0f, &Var0);
	Function_347(-30.0f, 8.0f, 3.0f, &Var15);
	DESTROY_OBJECT(bLocal_2);
	bLocal_2 = Function_342(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_1, Var0, Var15, 0, 0);
	return;
}

void Function_349() //Position: 0xBD9A / 48538
{
	struct<15> Var0;
	struct<15> Var15;
	
	Function_347(90.0f, 12.0f, 6.6f, &Var0);
	Function_347(60.0f, 12.0f, 6.6f, &Var15);
	DESTROY_OBJECT(bLocal_2);
	bLocal_2 = Function_342(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_1, Var0, Var15, 0, 0);
	return;
}

void Function_350() //Position: 0xBDE0 / 48608
{
	struct<15> Var0;
	struct<15> Var15;
	
	Function_347(30.0f, -20.0f, 8.6f, &Var0);
	Function_347(-30.0f, -20.0f, 8.6f, &Var15);
	DESTROY_OBJECT(bLocal_2);
	bLocal_2 = Function_342(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_1, Var0, Var15, 0, 6.0f);
	return;
}

void Function_351() //Position: 0xBE26 / 48678
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_LOCAL_SLOT();
	if (IS_SLOT_VALID(bVar0))
	{
		if (Function_123(bVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_317(1);
			}
		}
	}
	return;
}

void Function_352(int iParam0) //Position: 0xBE54 / 48724
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_353("FTR_SONG_01");
			break;
		
		case 0x00000001:
			Function_353("MEX_SONG_01");
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			Function_353("FTR_SONG_03");
			break;
		
		case 0x00000004:
			Function_353("NRT_SONG_05");
			break;
		
		case 0x00000005:
			Function_353("FTR_SONG_06");
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			Function_353("MEX_SONG_05");
			break;
		
		case 0x00000008:
			Function_353("MEX_SONG_04");
			break;
		
		case 0x00000009:
			Function_353("FTR_SONG_04");
			break;
		
		case 0x0000000A:
			Function_353("MEX_SONG_06");
			break;
		
		case 0x0000000B:
			Function_353("FTR_SONG_02");
			break;
		
		case 0x0000000C:
			Function_353("NRT_SONG_04");
			break;
		
		default:
			break;
	}
	return;
}

void Function_353(int iParam0) //Position: 0xBF94 / 49044
{
	switch (iLocal_344)
	{
		case 0x00000000:
			Function_354(iParam0, 25, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_344 = 1;
			break;
		
		case 0x00000001:
			if (Local_368.f_20 >= 70)
			{
				Function_260(26, 0.0f, 6000, 4294967295);
				iLocal_344 = 2;
			}
			break;
		
		case 0x00000002:
			if (Local_368.f_20 > 100)
			{
				Function_260(1, 0, 4294967295, 4294967295);
				iLocal_344 = 3;
			}
			break;
		
		case 0x00000003:
			if (Local_368.f_20 < 0 && Local_368.f_20 > 10)
			{
				iLocal_344 = 0;
			}
			break;
	}
	return;
}

void Function_354(char* cParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC021 / 49185
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_261(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool Function_355(int iParam0) //Position: 0xC03D / 49213
{
	return Function_9(*iParam0, 1);
}

void Function_356() //Position: 0xC04A / 49226
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	Function_203(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	bVar0 = GET_GAME_CAMERA();
	GET_CAMERA_POSITION(bVar0, &vVar1);
	GET_CAMERA_DIRECTION(bVar0, &vVar7);
	bLocal_1 = CREATE_CAMERA_IN_LAYOUT(Local_140.f_12, "CurrentCamera", 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_1);
	SET_CAMERA_TARGETDOF_USING_SOFT_DOF(bLocal_1, 0, 1);
	Function_343(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_1, vVar1, vVar4, vVar7);
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_1, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_357(bool bParam0) //Position: 0xC0B1 / 49329
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
			if (Function_123(bVar0))
			{
				if (!Function_358(bVar0))
				{
					iVar2 = 0;
					if (bParam0)
					{
					}
				}
				iVar1 = 1;
			}
			else if (bParam0)
			{
			}
		}
		bVar0++;
	}
	return (iVar2 && iVar1);
}

bool Function_358(int iParam0) //Position: 0xC101 / 49409
{
	return Function_239(iParam0, 4, 1);
}

void Function_359(bool bParam0) //Position: 0xC10E / 49422
{
	Function_18(4, bParam0);
	return;
}

bool Function_360() //Position: 0xC11A / 49434
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	iVar1 = 0;
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (IS_SLOT_VALID(bVar2))
		{
			if (Function_123(bVar2))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar2)))
				{
					if (IS_ACTOR_FULLY_FADED_EXT(GET_SLOT_ACTOR(bVar2), true))
					{
						if (IS_ACTOR_RIDING(GET_SLOT_ACTOR(bVar2)))
						{
							if (GET_WEAPON_EQUIPPED(GET_SLOT_ACTOR(bVar2), true) != 4294967295)
							{
								iVar1++;
							}
						}
					}
				}
			}
		}
		bVar2++;
	}
	if (iVar1 > GET_NUM_PLAYERS())
	{
		return 1;
	}
	return 0;
}

bool Function_361() //Position: 0xC18E / 49550
{
	bool bVar0;
	vector3 vVar1;
	bool bVar7;
	
	bVar0 = Function_366(GET_LOCAL_SLOT());
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	bLocal_327 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "StartPositionFlagsSet")));
	vVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(bLocal_327) };
	Function_200(bLocal_327);
	vLocal_315 = { StackVal, StackVal, Function_200(bLocal_327) };
	if (!Function_179(Function_25(), 127))
	{
		Function_182(StackVal, StackVal, StackVal, StackVal, vVar1, *(&vVar1 + 12), 0, 1);
	}
	else
	{
		if (!IS_ACTOR_VALID(bLocal_138))
		{
			bLocal_138 = Function_364(StackVal, StackVal, StackVal, StackVal, Local_140.f_12, Function_365(), vVar1, *(&vVar1 + 12));
		}
		if (IS_ACTOR_VALID(bLocal_138))
		{
			bVar7 = Function_25();
			if (IS_ACTOR_RIDING(bVar7))
			{
				Function_362(bVar7, bLocal_327, 0, 0, 0);
			}
			else
			{
				ACTOR_MOUNT_ACTOR(bVar7, bLocal_138);
				Function_362(bVar7, bLocal_327, 0, 0, 0);
			}
			SET_CAMERA_FOLLOW_ACTOR(bVar7);
			return 1;
		}
	}
	return 0;
}

void Function_362(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xC267 / 49767
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
				Function_363(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_363(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC37E / 50046
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

bool Function_364(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5) //Position: 0xC437 / 50231
{
	bool bVar0;
	
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_47(), bParam1, vParam2, vParam5);
	NET_OBJECT_REPLICATION_MODE_END(15);
	ACCESSORIZE_HORSE(bVar0, 4);
	ACTOR_MOUNT_ACTOR(Function_25(), bVar0);
	TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bVar0, 18.0f);
	SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar0, 18.0f);
	return bVar0;
}

var Function_365() //Position: 0xC484 / 50308
{
	bool bVar0;
	
	bVar0 = GET_LOCAL_SLOT();
	return (*&Local_285 + 52)[bVar0];
}

var Function_366(bool bParam0) //Position: 0xC498 / 50328
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

void Function_367(bool bParam0, var uParam1) //Position: 0xC4D3 / 50387
{
	bool bVar0;
	
	bVar0 = false;
	if (STRING_CONTAINS_STRING(bParam0, "_ARM"))
	{
		*uParam1 = 0;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_DZC"))
	{
		*uParam1 = 1;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_ESC"))
	{
		*uParam1 = 2;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_GAP"))
	{
		*uParam1 = 3;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_GRT"))
	{
		*uParam1 = 4;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_HAN"))
	{
		*uParam1 = 5;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_HEN"))
	{
		*uParam1 = 6;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_LSH"))
	{
		*uParam1 = 7;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_PRD"))
	{
		*uParam1 = 8;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_RAT"))
	{
		*uParam1 = 9;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_RIO"))
	{
		*uParam1 = 10;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_SWG"))
	{
		*uParam1 = 11;
		bVar0 = true;
	}
	else if (STRING_CONTAINS_STRING(bParam0, "_TAL"))
	{
		*uParam1 = 12;
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return;
}

int Function_368() //Position: 0xC628 / 50728
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	bLocal_329 = CREATE_OBJECTSET_IN_LAYOUT("mpRaceMarkers", Local_140.f_12, 17, 0);
	bVar8 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "dirMarker_flagsSet"));
	if (!IS_OBJECTSET_VALID(bVar8))
	{
		return 1;
	}
	bVar9 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	ITERATE_IN_SET(bVar9, bVar8);
	bVar10 = START_OBJECT_ITERATOR(bVar9);
	while (IS_OBJECT_VALID(bVar10))
	{
		GET_OBJECT_POSITION(bVar10, &vVar0);
		GET_OBJECT_ORIENTATION(bVar10, &vVar3);
		if (DECOR_CHECK_EXIST(bVar10, "dirRight"))
		{
			bVar6 = DECOR_GET_BOOL(bVar10, "dirRight");
			DECOR_REMOVE(bVar10, "dirRight");
		}
		if (DECOR_CHECK_EXIST(bVar10, "nmarkerOri"))
		{
			bVar7 = DECOR_GET_INT(bVar10, "nmarkerOri");
			DECOR_REMOVE(bVar10, "nmarkerOri");
		}
		Function_369(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, bVar6, bVar7, &bLocal_329);
		bVar10 = OBJECT_ITERATOR_NEXT(bVar9);
	}
	if (IS_ITERATOR_VALID(bVar9))
	{
		DESTROY_ITERATOR(bVar9);
	}
	return 0;
}

void Function_369(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7, var uParam8) //Position: 0xC73F / 51007
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_140.f_12, Function_47(), "p_gen_markerPost01x", vParam0, vParam3, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
	}
	if (bParam6)
	{
		bVar2 = "p_gen_marker02x";
		switch (iParam7)
		{
			case 0xFFFFFFFF:
				vVar3.x = 0.898f;
				vVar3.f_4 = 2.033f;
				vVar3.f_8 = -0.277f;
				vVar6.x = -4.681f;
				vVar6.f_4 = 182.0f;
				vVar6.f_8 = -17.468f;
				break;
			
			case 0x00000000:
				vVar3.x = 1.07f;
				vVar3.f_4 = 2.286f;
				vVar3.f_8 = -0.256f;
				vVar6.x = -5.07f;
				vVar6.f_4 = 180.0f;
				vVar6.f_8 = 0.412f;
				break;
			
			case 0x00000001:
				vVar3.x = 1.096f;
				vVar3.f_4 = 2.953f;
				vVar3.f_8 = -0.197f;
				vVar6.x = -4.834f;
				vVar6.f_4 = 178.399f;
				vVar6.f_8 = 23.692f;
				break;
		}
	}
	else
	{
		bVar2 = "p_gen_marker01x";
		switch (iParam7)
		{
			case 0xFFFFFFFF:
				vVar3.x = 1.14f;
				vVar3.f_4 = 2.468f;
				vVar3.f_8 = -0.154f;
				vVar6.x = -1.244f;
				vVar6.f_4 = 180.0f;
				vVar6.f_8 = 20.148f;
				break;
			
			case 0x00000000:
				vVar3.x = 1.047f;
				vVar3.f_4 = 2.046f;
				vVar3.f_8 = -0.163f;
				vVar6.x = -1.325f;
				vVar6.f_4 = 180.0f;
				vVar6.f_8 = -1.386f;
				break;
			
			case 0x00000001:
				vVar3.x = 0.845f;
				vVar3.f_4 = 1.945f;
				vVar3.f_8 = -0.166f;
				vVar6.x = -1.287f;
				vVar6.f_4 = 180.317f;
				vVar6.f_8 = -13.831f;
				break;
			}
	}
	GET_OBJECT_RELATIVE_POSITION(bVar0, vVar3, &vParam0);
	GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar6, &vParam3);
	bVar1 = CREATE_PROP_IN_LAYOUT(Local_140.f_12, Function_47(), bVar2, vParam0, vParam3, 1);
	if (IS_OBJECT_VALID(bVar1))
	{
	}
	ADD_OBJECT_TO_OBJECTSET(bVar0, *uParam8);
	ADD_OBJECT_TO_OBJECTSET(bVar1, *uParam8);
}

void Function_370() //Position: 0xC963 / 51555
{
	bool bVar0;
	bool bVar1;
	
	bLocal_328 = FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "progpath");
	if (IS_OBJECT_VALID(bLocal_328))
	{
	}
	iLocal_339 = GET_NUM_PATH_POINTS(bLocal_328);
	bVar0 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	ITERATE_IN_VOLUME_SET(bVar0, FIND_VOLUME_IN_LAYOUT(Local_140.f_12, "Checkpoints_set"));
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	bLocal_330 = CREATE_OBJECTSET_IN_LAYOUT("ProgVols", Local_140.f_12, 9, 0);
	while (IS_OBJECT_VALID(bVar1))
	{
		ADD_OBJECT_TO_OBJECTSET(bVar1, bLocal_330);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_371() //Position: 0xCA01 / 51713
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	if (Function_234(5) == 4294967295)
	{
		bVar0 = Function_366(GET_LOCAL_SLOT());
		if (bVar0 == 4294967295)
		{
			return;
		}
	}
	iVar1 = Function_373(GET_LOCAL_SLOT());
	bVar0 = (GET_NUM_PLAYERS() + iVar1);
	if (bVar0 == 4294967295)
	{
		return;
	}
	bLocal_327 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "StartPositionFlagsSet")));
	vVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258(bLocal_327) };
	if (!Function_179(Function_25(), 127))
	{
		Function_182(StackVal, StackVal, StackVal, StackVal, vVar2, *(&vVar2 + 12), 0, 1);
	}
	else
	{
		Function_372(Function_25(), bLocal_327, 1, 1, 1);
	}
	return;
}

void Function_372(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCA97 / 51863
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

var Function_373(int iParam0) //Position: 0xCB9E / 52126
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_374(5, iParam0);
	iVar2 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_268(bVar1))
		{
			if (iParam0 != bVar1)
			{
				iVar3 = Function_374(5, bVar1);
				if (iVar0 <= iVar3)
				{
					iVar2 = (iVar2 - 1);
				}
				else if (iVar0 == iVar3)
				{
					fVar4 = Function_122(5, iParam0);
					fVar5 = Function_122(5, bVar1);
					if (fVar4 < fVar5)
					{
						iVar2 = (iVar2 - 1);
					}
					else if (fVar4 != fVar5)
					{
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

int Function_374(int iParam0, bool bParam1) //Position: 0xCC1B / 52251
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_234(iParam0);
	}
	if (!Function_123(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_375() //Position: 0xCC82 / 52354
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		bVar2 = RAND_INT_RANGE(976, 993);
		bVar3 = false;
		while (!bVar3)
		{
			bVar3 = true;
			iVar1 = 0;
			while (iVar1 <= 8)
			{
				if (bVar2 == (*&Local_285 + 52)[iVar1])
				{
					bVar3 = false;
				}
				else if ((((bVar2 != 978 || bVar2 != 979) || bVar2 != 982) || bVar2 != 992) || bVar2 != 993)
				{
					bVar3 = false;
				}
				if (!bVar3)
				{
					iVar1 = 99;
				}
				iVar1++;
			}
			if (!bVar3)
			{
				bVar2 = RAND_INT_RANGE_DIFFERENT(bVar2, 976, 993);
			}
		}
		(*&Local_285 + 52)[iVar0] = bVar2;
		iVar0++;
	}
	return;
}

void Function_376() //Position: 0xCD2F / 52527
{
	switch (Local_285.f_48)
	{
		case 0x00000000:
			Local_285.f_48 = 3;
			break;
		
		case 0x00000003:
			iLocal_340++;
			if (Function_357((iLocal_340 % 60) != 0))
			{
				Function_339(&Local_285 + 24, 13.0f);
				Local_285.f_48 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_377(&Local_285 + 24))
			{
				Local_285.f_48 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_329())
			{
				Local_285.f_48 = 5;
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

bool Function_377(int iParam0) //Position: 0xCDB8 / 52664
{
	if (Function_355(iParam0))
	{
		if (Function_137(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_378() //Position: 0xCDD3 / 52691
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (!_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_379, bVar0))
			{
				Function_270(8192, 0);
				return;
			}
		}
		bVar0++;
	}
	Function_270(8192, 1);
	return;
}

void Function_379(int iParam0) //Position: 0xCE12 / 52754
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
	Function_69();
	Function_70();
	switch (iParam0)
	{
		case 0x00000001:
			Function_246(12288);
			Function_15(16384);
			break;
		
		case 0x00000002:
			Function_246(20480);
			Function_15(8192);
			break;
		
		default:
			Function_15(28672);
			break;
	}
	Function_15(2048);
	Function_380(0, 0);
	Function_196();
	return;
}

void Function_380(bool bParam0, bool bParam1) //Position: 0xCED6 / 52950
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_386(&Global_78480);
	Function_385(&Global_78480);
	uVar0 = Function_384(37);
	Function_382();
	if (!bParam0)
	{
		Function_32(37, uVar0);
	}
	Function_18(18264, 0);
	Function_381();
	return;
}

void Function_381() //Position: 0xCF22 / 53026
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_382() //Position: 0xCF41 / 53057
{
	Function_383(&Global_78480 + 220);
	return;
}

void Function_383(int iParam0) //Position: 0xCF50 / 53072
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

int Function_384(int iParam0) //Position: 0xCF71 / 53105
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_385(int iParam0) //Position: 0xCF8A / 53130
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

void Function_386(int iParam0) //Position: 0xCFAE / 53166
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

void Function_387() //Position: 0xCFD2 / 53202
{
	int iVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	ITERATE_IN_VOLUME_SET(bVar1, FIND_VOLUME_IN_LAYOUT(Local_140.f_12, "Checkpoints_set"));
	bLocal_327 = START_OBJECT_ITERATOR(bVar1);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		bLocal_327 = OBJECT_ITERATOR_NEXT(bVar1);
		iVar0++;
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	Function_388(bLocal_327);
	vLocal_310 = { StackVal, StackVal, Function_388(bLocal_327) };
	return;
}

vector3 Function_388(bool bParam0) //Position: 0xD03C / 53308
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

void Function_389() //Position: 0xD0A8 / 53416
{
	if (IS_ITERATOR_VALID(bLocal_324))
	{
		DESTROY_ITERATOR(bLocal_324);
	}
	bLocal_324 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	ITERATE_IN_VOLUME_SET(bLocal_324, FIND_VOLUME_IN_LAYOUT(Local_140.f_12, "Checkpoints_set"));
	bLocal_326 = START_OBJECT_ITERATOR(bLocal_324);
	bLocal_313 = GET_VOLUME_FROM_OBJECT(bLocal_326);
	return;
}

void Function_390(int iParam0) //Position: 0xD0F8 / 53496
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_18(16, 0);
	Function_270(32, 0);
	Local_368 = 1;
	Local_368.f_4 = 4294967295;
	Local_368.f_8 = 0.0f;
	Local_368.f_12 = 1;
	Local_368.f_40 = 0;
	*(&Local_368 + 28) = { 0.0f, 0.0f, 0.0f };
	iLocal_346 = 1;
	bLocal_347 = CREATE_EVENT_TRAP("HitByBullet", 5, Local_140.f_12);
	EVENT_TRAP_ON_TARGET(bLocal_347, GET_OBJECT_FROM_ACTOR(Function_25()));
	Function_408(&Local_140 + 56, 1, 0, 0, 0);
	Function_407(&Local_140 + 56, 1);
	Function_406(&Local_140 + 56, 0);
	Function_404(&Local_140 + 56, 55153);
	Function_399(&Local_140 + 56, 54369);
	Function_396(&Local_140 + 56, 54289);
	Function_395(&Local_140 + 56, 30);
	Function_391(&Local_140 + 56, 53855);
	Function_359(iParam0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Function_25(), 0);
	bVar0 = CREATE_OBJECT_ITERATOR(Local_140.f_12);
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "FireFlagGroupSet");
	if (!IS_OBJECT_VALID(bVar1))
	{
	}
	bVar2 = GET_OBJECTSET_FROM_OBJECT(bVar1);
	if (!IS_OBJECTSET_VALID(bVar2))
	{
	}
	ITERATE_IN_SET(bVar0, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar0);
	Function_200(bVar3);
	bLocal_331 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_140.f_12, Function_47(), "amb_checkpoint_fire", Function_200(bVar3));
	UNK_0x276EFF8E(bLocal_331, 0.0f, 0.0f, 0.0f);
	Function_18(16384, 0);
	bLocal_338 = CREATE_LAYOUT("missedCheckpoint");
	return;
}

void Function_391(var uParam0, int iParam1) //Position: 0xD253 / 53843
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_392() //Position: 0xD25F / 53855
{
	if (!Function_394(&Local_140 + 56, Local_140.f_488))
	{
		if (Function_333())
		{
			Function_393(&Local_140 + 56, "mp_endgame_everybodyleft", 0, 0, 0, 0);
			return;
		}
		if (Local_140.f_488 == 1)
		{
		}
		else if (Local_140.f_488 == 2)
		{
		}
		else if (Local_140.f_488 == 3)
		{
		}
		else if (Local_140.f_488 == 4)
		{
		}
	}
	return;
}

void Function_393(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD2CF / 53967
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

bool Function_394(var uParam0, int iParam1) //Position: 0xD33E / 54078
{
	switch (iParam1)
	{
		case 0xFFFFFFFE:
			Function_393(uParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_393(uParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_393(uParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_393(uParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_395(var uParam0, int iParam1) //Position: 0xD3F9 / 54265
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_396(var uParam0, int iParam1) //Position: 0xD405 / 54277
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_397() //Position: 0xD411 / 54289
{
	Function_398();
	Local_368.f_40 = 1;
	Function_159(Function_25());
	*(&Local_368 + 28) = { StackVal, StackVal, Function_159(Function_25()) };
	return;
}

void Function_398() //Position: 0xD42D / 54317
{
	if (!iLocal_337)
	{
		fLocal_341 = _GET_AMMO_AMOUNT(Function_25(), 7, 1);
		fLocal_342 = _GET_AMMO_AMOUNT(Function_25(), 10, 1);
		iLocal_337 = 1;
	}
	return;
}

void Function_399(var uParam0, int iParam1) //Position: 0xD455 / 54357
{
	uParam0->f_176 = iParam1;
	return;
}

int Function_400() //Position: 0xD461 / 54369
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(77))
	{
		if (iLocal_346)
		{
			if (!iLocal_336)
			{
				iLocal_346 = 0;
			}
		}
	}
	if (iLocal_279 > 2)
	{
		if ((*&Local_285 + 52)[0] != 0)
		{
			if (iLocal_336)
			{
				if (Function_361())
				{
					iLocal_336 = 0;
					return 1;
				}
				return 2;
			}
		}
		return 2;
	}
	return 2;
	Function_401(Function_25(), 1);
	return 1;
}

void Function_401(bool bParam0, int iParam1) //Position: 0xD4BA / 54458
{
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(bParam0, 0);
	Function_402(bParam0, iParam1);
	return;
}

int Function_402(bool bParam0, bool bParam1) //Position: 0xD4CE / 54478
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	bVar1 = false;
	bVar2 = false;
	bVar3 = 10000.0f;
	if (IS_ACTOR_VALID(bParam0))
	{
		FIRE_STOP_ON_ACTOR(bParam0);
	}
	if (IS_ACTOR_VALID(bLocal_138) && !IS_ACTOR_MOUNTED(bLocal_138))
	{
		DESTROY_ACTOR(bLocal_138);
	}
	bVar19 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_140.f_12, "mp_respawn_flagsSet"));
	bVar18 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar19);
	if (!IS_OBJECTSET_VALID(bVar19))
	{
		LOG_ERROR("WarpPlayerRider -- OBJECT_SET IS INVALID!");
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bVar19))
	{
		bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar19);
		if (IS_OBJECT_VALID(bVar21))
		{
			Function_200(bVar21);
			vVar8 = { StackVal, StackVal, Function_200(bVar21) };
			vVar5 = { StackVal, StackVal, Global_34574 };
			bVar4 = VDIST(vVar5, vVar8);
			if (bVar4 > bVar3)
			{
				bVar3 = bVar4;
				bVar2 = bVar1;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	bVar17 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar19);
	bVar18 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar19);
	Function_222(bVar17);
	vVar14 = { StackVal, StackVal, Function_222(bVar17) };
	Function_200(bVar17);
	vVar11 = { StackVal, StackVal, Function_200(bVar17) };
	bVar20 = CREATE_VOLUME_IN_LAYOUT(Local_140.f_12, Function_47(), 2, vVar11, vVar14, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar20))
	{
		if (Function_403(bVar20))
		{
			Function_222(bVar18);
			vVar14 = { StackVal, StackVal, Function_222(bVar18) };
			Function_200(bVar18);
			vVar11 = { StackVal, StackVal, Function_200(bVar18) };
			bVar22 = true;
		}
		NET_OBJECT_REPLICATION_MODE_START(15, 0);
		bLocal_138 = CREATE_ACTOR_IN_LAYOUT(Local_140.f_12, Function_47(), Function_365(), vVar11, vVar14);
		SNAP_OBJECT_TO_GROUND(bLocal_138, 50.0f, false, 1092616192);
		NET_OBJECT_REPLICATION_MODE_END(15);
		SET_ACTOR_CAN_BE_TARGETED(bLocal_138, false);
		SET_ACTOR_INVULNERABILITY(bLocal_138, 1);
		if (IS_ACTOR_VALID(bLocal_138))
		{
			ACCESSORIZE_HORSE(bLocal_138, 4);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_138), "Racing", true);
			if (bParam1)
			{
				if (bVar22)
				{
					Function_398();
					Function_182(StackVal, StackVal, vVar11, 0.0f, GET_OBJECT_HEADING(bVar18), 0.0f, 0, 0);
				}
				else
				{
					Function_398();
					Function_182(StackVal, StackVal, vVar11, 0.0f, GET_OBJECT_HEADING(bVar17), 0.0f, 0, 0);
				}
			}
			else if (bVar22)
			{
				Function_398();
				Function_363(StackVal, StackVal, bParam0, vVar11, GET_OBJECT_HEADING(bVar18), 1, 1, 1);
			}
			else
			{
				Function_398();
				Function_363(StackVal, StackVal, bParam0, vVar11, GET_OBJECT_HEADING(bVar17), 1, 1, 1);
			}
			SET_CAMERA_FOLLOW_ACTOR(bParam0);
			TASK_STAND_STILL(bLocal_138, -1.0f, 0, 0);
			if (IS_VOLUME_VALID(bVar20))
			{
				DESTROY_VOLUME(bVar20);
			}
			return 1;
		}
		return 0;
	}
	if (IS_VOLUME_VALID(bVar20))
	{
		DESTROY_VOLUME(bVar20);
	}
	return 0;
}

bool Function_403(bool bParam0) //Position: 0xD71B / 55067
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (Local_379 - 1))
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar1) && GET_LOCAL_SLOT() == bVar0)
			{
				if (IS_ACTOR_IN_VOLUME(bVar1, bParam0))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_404(var uParam0, int iParam1) //Position: 0xD765 / 55141
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_405(bool bParam0) //Position: 0xD771 / 55153
{
	RESET_ACTOR_GAITS(bParam0, 0);
	if (!IS_ACTOR_MOUNTED(bLocal_138))
	{
		if (Local_140.f_492 <= 4)
		{
			if (!ACTOR_MOUNT_ACTOR(bParam0, bLocal_138))
			{
			}
		}
		else if (MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1))
		{
			if (!SET_ACTOR_IN_VEHICLE(bParam0, bLocal_138, false))
			{
			}
		}
	}
	if (!Function_141(&Local_285 + 36))
	{
		Function_351();
	}
	if (iLocal_309)
	{
		iLocal_309 = 0;
	}
	Local_368.f_40 = 0;
	*(&Local_368 + 28) = { 0.0f, 0.0f, 0.0f };
	if (Function_442(16) != 0 && Function_442(8) != 0)
	{
		ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 6, 0);
		ACTOR_SET_NEXT_WEAPON(bParam0, 17);
	}
	else if (Function_442(8))
	{
		ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 6, 0);
		ACTOR_SET_NEXT_WEAPON(bParam0, 17);
	}
	else
	{
		ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 1, 0);
		ACTOR_SET_NEXT_WEAPON(bParam0, 5);
	}
	SET_ACTOR_CAN_BE_TARGETED(bLocal_138, true);
	SET_ACTOR_INVULNERABILITY(bLocal_138, 0);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bLocal_138), 5);
	if (fLocal_341 != -1.0f)
	{
		fLocal_342 = _GET_AMMO_AMOUNT(bParam0, 10, 1);
		fLocal_341 = _GET_AMMO_AMOUNT(bParam0, 7, 1);
	}
	else
	{
		ACTOR_DISCARD_WEAPON_AMMO(bParam0, 5);
		if (fLocal_342 < 6.0f)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, 17, 6.0f);
			_SET_ACTOR_AMMO_OF_TYPE(bParam0, 10, (fLocal_342 - 6.0f), 0);
		}
		else
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, 17, fLocal_342);
			_SET_ACTOR_AMMO_OF_TYPE(bParam0, 10, 0.0f, 0);
		}
		if (fLocal_341 < 6.0f)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, 5, 6.0f);
			_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, (fLocal_341 - 6.0f), 0);
		}
		else
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, 5, fLocal_341);
			_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 0.0f, 0);
		}
		iLocal_337 = 0;
	}
	Function_407(&Local_140 + 56, 0);
	return;
}

void Function_406(var uParam0, int iParam1) //Position: 0xD8EB / 55531
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_407(int iParam0, bool bParam1) //Position: 0xD8FA / 55546
{
	if (bParam1)
	{
		Function_7(iParam0 + 44, 64);
	}
	else
	{
		Function_6(iParam0 + 44, 64);
	}
	return;
}

void Function_408(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD91A / 55578
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
	Function_425(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_176(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_395(iParam0, 2);
	Function_423(iParam0);
	Function_421(iParam0);
	Function_420(iParam0);
	Function_419(iParam0);
	Function_416(iParam0);
	Function_413(iParam0);
	Function_410(iParam0);
	if (bParam2)
	{
		Function_7(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_7(iParam0 + 44, 8);
		Function_170(iParam0 + 192);
	}
	Function_409(iParam0, bParam4);
	Function_18(8388608, 0);
}

void Function_409(int iParam0, bool bParam1) //Position: 0xD9E2 / 55778
{
	if (bParam1)
	{
		Function_7(iParam0 + 44, 32);
	}
	else
	{
		Function_6(iParam0 + 44, 32);
	}
	return;
}

void Function_410(int iParam0) //Position: 0xDA02 / 55810
{
	Function_411(iParam0, 55837);
	return;
}

void Function_411(var uParam0, var uParam1) //Position: 0xDA11 / 55825
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_412() //Position: 0xDA1D / 55837
{
	return 0;
}

void Function_413(int iParam0) //Position: 0xDA24 / 55844
{
	Function_414(iParam0, 55871);
	return;
}

void Function_414(var uParam0, var uParam1) //Position: 0xDA33 / 55859
{
	uParam0->f_180 = uParam1;
	return;
}

int Function_415() //Position: 0xDA3F / 55871
{
	return 1;
}

void Function_416(int iParam0) //Position: 0xDA46 / 55878
{
	Function_417(iParam0, 55905);
	return;
}

void Function_417(var uParam0, var uParam1) //Position: 0xDA55 / 55893
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_418() //Position: 0xDA61 / 55905
{
	return;
}

void Function_419(int iParam0) //Position: 0xDA67 / 55911
{
	Function_396(iParam0, 55905);
	return;
}

void Function_420(int iParam0) //Position: 0xDA76 / 55926
{
	Function_391(iParam0, 55905);
	return;
}

void Function_421(var uParam0) //Position: 0xDA85 / 55941
{
	Function_399(uParam0, 55956);
	return;
}

int Function_422() //Position: 0xDA94 / 55956
{
	return 0;
}

void Function_423(int iParam0) //Position: 0xDA9B / 55963
{
	Function_404(iParam0, 55978);
	return;
}

void Function_424(var uParam0) //Position: 0xDAAA / 55978
{
	uParam0 = uParam0;
	return;
}

void Function_425(int iParam0, struct<57> Param1) //Position: 0xDAB4 / 55988
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_426() //Position: 0xDAC8 / 56008
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 56023);
	return;
}

void Function_427(bool bParam0) //Position: 0xDAD7 / 56023
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 11);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar12 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			bVar11 = Function_241(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_438())
					{
					}
					else if (bVar11)
					{
						Function_430(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar11)
					{
					}
				}
				if (IS_ACTOR_RIDING(GET_SLOT_ACTOR(StackVal)))
				{
					Function_428(&Global_50170[24522] + 4, &Global_50170[24522] + 8, &Global_50170[24522] + 12, Var0, Local_140.f_496);
				}
			}
			else if (Var0 == bVar12)
			{
				Local_140.f_496 = StackVal;
			}
			if (bVar11 && !Function_20(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

void Function_428(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) //Position: 0xDBB4 / 56244
{
	switch (*uParam1)
	{
		case 0x00000000:
			Function_280(245);
			*uParam2 = 0.0f;
			Function_278(245, uParam1, 1, 7041, 50.0f, 150.0f, 0, Function_429(0), 1);
			Function_277(245);
			break;
		
		case 0x00000001:
			Function_277(245);
			if (iParam3 == iParam4)
			{
				*uParam2 = 0.0f;
				Function_273(245, uParam1, uParam0, 7042, 200.0f, 0);
			}
			break;
	}
}

bool Function_429(bool bParam0) //Position: 0xDC21 / 56353
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

void Function_430(struct<29> Param0) //Position: 0xDC5E / 56414
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001F:
			Function_431(&(Global_50170[23222]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_431(&(Global_50170[23322]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_25(), 31, 1);
					Global_83823[31] = 1;
					Function_100(7062);
				}
			}
			if (StackVal == 10)
			{
			}
			break;
	}
}

void Function_431(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0xDD27 / 56615
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_432(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_432(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0xDD53 / 56659
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_437(uParam0, uParam2, uParam3);
			}
			Function_433(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_433(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_433(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_433(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0xDDD0 / 56784
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_117(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_436(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_435(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_434(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_254(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_72(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_434(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xDE9E / 56990
{
	Function_280(*uParam0);
	Function_112(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
}

void Function_435(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xDF43 / 57155
{
	struct<4> Var0;
	
	Function_107(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_75(*uParam0) };
	Function_95(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_111(*uParam0, 4);
	Function_80();
}

void Function_436(var uParam0, bool bParam1, bool bParam2) //Position: 0xDFA1 / 57249
{
	Function_107(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_76(*uParam0), 1.0f, false, 0);
	Function_103(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_95(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_80();
	return;
}

void Function_437(var uParam0, bool bParam1, bool bParam2) //Position: 0xE006 / 57350
{
	Function_280(*uParam0);
	if (!Function_74(*uParam0, 2))
	{
		Function_112(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_113(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_76(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
	return;
}

bool Function_438() //Position: 0xE043 / 57411
{
	if (Function_20(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_439(bool bParam0) //Position: 0xE06D / 57453
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	iLocal_139 = iVar0;
	if (NET_IS_SESSION_HOST())
	{
		Function_330(&Local_285);
	}
	if (iLocal_139 != GET_LOCAL_SLOT())
	{
		PRINT_OBJECTIVE_FORMAT(5.0f, "MP_Race_won_new", Function_224(iVar0), "", "", "", 0, 2, 0, 0, 0);
		HUD_TIMER_COUNTDOWN(30.0f);
		HUD_TIMER_DISPLAY(1);
		iLocal_319 = 1;
	}
	return;
}

void Function_440(bool bParam0) //Position: 0xE0CD / 57549
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	Local_285.f_48 = 4;
	return;
}

var Function_441() //Position: 0xE0E2 / 57570
{
	return Global_83591.f_140;
}

bool Function_442(int iParam0) //Position: 0xE0EE / 57582
{
	return Function_9((&Global_83591 + 140)->f_56, iParam0);
}

var Function_443(int iParam0) //Position: 0xE101 / 57601
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_444(int iParam0) //Position: 0xE121 / 57633
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

