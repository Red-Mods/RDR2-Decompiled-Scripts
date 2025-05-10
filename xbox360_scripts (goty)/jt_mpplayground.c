//Decompiled with MagicRDR v1.0
//Function Count : 585
//Statics Count : 86
//Natives Count : 659
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
	var uLocal_10 = 0;
	int iLocal_11 = 0;
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
	var uLocal_27 = 11;
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
	var uLocal_49 = 11;
	var uLocal_50 = 0;
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
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	var uLocal_69[3] = { 0, 0, 0 };
	struct<45> Local_73 = { 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar41;
	vector3 vVar44;
	bool bVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	var uVar51;
	var uVar52;
	int iVar53;
	bool bVar54;
	struct<13> Var55;
	bool bVar163;
	
	iLocal_11 = 0;
	iLocal_85 = 0;
	fVar0 = -1.0f;
	bVar1 = false;
	while (bVar1 < 51)
	{
		SET_WEAPONENUM_LOCKED(bVar1, 0);
		bVar1++;
	}
	bVar2 = Function_584();
	Global_30842[35] = 1;
	Global_30842[38] = 1;
	Global_30842[39] = 1;
	Global_30842[37] = 1;
	Global_30842[40] = 1;
	Global_30842[41] = 1;
	Global_30842[42] = 1;
	Global_30842[36] = 1;
	bVar3 = RAND_INT_RANGE(837, 971);
	PRINTSTRING("randomPlayerNumber[");
	PRINTINT(bVar3);
	PRINTSTRING("]\n");
	Global_76887 = bVar3;
	bVar4 = 12;
	Function_583(&bVar4, bVar3, 3, 0);
	Function_583(&bVar4, 976, 3, 0);
	Function_581(&bVar4, "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", 1, 0);
	Function_581(&bVar4, "$/content/scripting/gringo/CommonScripts/Giveaway_Footlocker", 4, 0);
	Function_581(&bVar4, Function_580(), 0, 0);
	Function_581(&bVar4, Function_579(), 0, 0);
	Function_581(&bVar4, Function_578(), 0, 0);
	Function_581(&bVar4, "p_gen_moneybag03x", 0, 0);
	Function_581(&bVar4, "CTF", 5, 0);
	Function_581(&bVar4, "multiplayer", 10, 0);
	Function_581(&bVar4, "custom/CTF_new", 8, 0);
	while (!Function_573(&bVar4) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Global_30842[42] = 1;
	vVar41 = { 0.0f, 0.0f, 0.0f };
	vVar44 = { 0.0f, 0.0f, 0.0f };
	if (IS_STARTPOS_IN_COMMANDLINE())
	{
		GET_COMMANDLINE_START_POS(&vVar41, &vVar44 + 4);
	}
	Global_76888[03] = { StackVal, StackVal, vVar41 };
	Global_76895[03] = { StackVal, StackVal, vVar44 };
	bVar47 = FIND_ACTOR_IN_LAYOUT(bVar2, "player");
	if (!IS_ACTOR_VALID(bVar47))
	{
		bVar47 = CREATE_PLAYER_ACTOR_IN_LAYOUT(bVar2, "player", Global_76887, vVar41, vVar44, 0);
	}
	Function_572(bVar47);
	Function_556();
	if (HUD_IS_FADED() && !HUD_IS_FADING())
	{
		HUD_FADE_IN(2.0f, 1065353216);
	}
	UI_SEND_EVENT("loadComplete");
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 0, 0));
	Function_554(1);
	iVar48 = 0;
	fVar49 = 0.0f;
	Function_553(24, 0, 0);
	Function_553(23, 0, 0);
	_SET_ACTOR_AMMO_OF_TYPE(bVar47, 5, _GET_MAX_AMMO_AMOUNT(bVar47, 5), 0);
	_SET_ACTOR_AMMO_OF_TYPE(bVar47, 4, _GET_MAX_AMMO_AMOUNT(bVar47, 4), 0);
	if (!NET_IS_MANAGER_INITIALIZED())
	{
		NET_ENABLE_MULTIPLAYER(0);
	}
	Function_552(1);
	bVar50 = !NET_IS_IN_SESSION();
	NET_SCRIPTMSG_REGISTER_HANDLER(70, 94240);
	NET_SCRIPTMSG_REGISTER_HANDLER(71, 93603);
	NET_SCRIPTMSG_REGISTER_HANDLER(73, 93306);
	Function_540();
	Function_539();
	REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_69, 4);
	Function_538(&Local_73 + 32, 1);
	*(&Var55 + 20) = 4;
	*(&Var55 + 108) = 4294967295;
	*(&Var55 + 192) = 27;
	Function_515(&Var55, 0, 0, 0, 0);
	while (!IS_EXITFLAG_SET())
	{
		Function_262();
		iVar53 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
		if (Function_261(iVar53, 3, &uVar51, 0.75f))
		{
			PRINT_BIG("Script Killed", 5f, 0, 2, 0);
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		if (IS_BUTTON_PRESSED(iVar53, 12, 1, 0))
		{
			NET_SESSION_LEAVE_SESSION();
		}
		if (!NET_IS_IN_SESSION())
		{
			if (bVar50)
			{
				DESTROY_LAYOUT(bLocal_68);
				Function_257();
			}
			bVar50 = false;
		}
		else
		{
			if (!bVar50)
			{
				bLocal_68 = CREATE_LAYOUT("MPPlayground_layout");
				bVar163 = CREATE_VOLUME_IN_LAYOUT(bLocal_68, "RespawnPoint", 3, 11.328f, 0.0f, 3.576f, 0.0f, 256.108f, 0.0f, 5.0f, 5.0f, 5.0f);
				Function_256(&Var55, bVar163);
				Function_238(bLocal_68);
				Function_235(bLocal_68);
				bVar50 = true;
			}
			if (iLocal_85 != Var55.f_12)
			{
				Var55.f_12 = iLocal_85;
				Function_234(Var55.f_12);
			}
			Function_232(3);
			Function_204();
			Function_187();
			if (IS_BUTTON_PRESSED(iVar53, 14, 1, 0))
			{
				if (Function_186(Local_73.f_32, 1))
				{
					Function_185(&Local_73 + 32, 1);
					HUD_CLEAR_HELP();
					Function_182("Using ATTACH_OBJECTS", 4.0f, 0, 0, 2, 1, 0);
				}
				else
				{
					Function_538(&Local_73 + 32, 1);
					HUD_CLEAR_HELP();
					Function_182("Using ATTACH_OBJECTS_USING_LOCATOR", 4.0f, 0, 0, 2, 1, 0);
				}
			}
			bVar54 = Function_261(iVar53, 8, &uVar52, 0.75f);
			if (bVar54)
			{
				KILL_ACTOR(Function_181());
			}
			Function_33(&Var55);
		}
		WAIT(false);
	}
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	Function_32(Local_73.f_36);
	bVar47 = Function_181();
	RESET_ANIM_SET_FOR_ACTOR(bVar47, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_73.f_44))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_73.f_44);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_73.f_40))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_73.f_40);
	}
	DEREFERENCE_ACTOR(bVar47);
	Function_24(bLocal_68);
	Function_5(&Var55);
	DESTROY_LAYOUT(bLocal_68);
	Function_1(&bVar4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x50D / 1293
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x533 / 1331
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
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
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x661 / 1633
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x67B / 1659
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x698 / 1688
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_21();
	bVar0 = Function_181();
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
	Function_18(!Function_19(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_17(81920, 0);
	Function_17(8388608, 0);
	Function_6(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_6(bool bParam0) //Position: 0x74A / 1866
{
	Function_13(bParam0);
	Function_8(bParam0, 0);
	Function_7(32, 0, 1);
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x784 / 1924
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_538(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_185(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x7AC / 1964
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_9(StackVal, StackVal, Function_12(), *(bParam0 + 72), !HUD_IS_FADED());
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
	if (Function_186(bParam0->f_48, 2))
	{
		Function_185(bParam0 + 48, 2);
	}
	Function_538(bParam0 + 48, 1);
	return;
}

var Function_9(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x83D / 2109
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
		Function_11(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_11(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_10(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_11(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_11(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_11(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_11(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_10(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_10(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x976 / 2422
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

vector3 Function_11(var uParam0, bool bParam1) //Position: 0x9CB / 2507
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_12() //Position: 0x9E5 / 2533
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_13(int iParam0) //Position: 0xA14 / 2580
{
	Function_16(iParam0);
	Function_14(1048576);
	return;
}

void Function_14(int iParam0) //Position: 0xA26 / 2598
{
	Function_15(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xA5F / 2655
{
	Function_185(uParam0, iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0xA6C / 2668
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_17(int iParam0, bool bParam1) //Position: 0xA83 / 2691
{
	if (bParam1)
	{
		Function_538(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_185(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_18(bool bParam0) //Position: 0xABE / 2750
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

bool Function_19(bool bParam0) //Position: 0xB45 / 2885
{
	return Function_20(Global_79336, bParam0);
}

bool Function_20(var uParam0, bool bParam1) //Position: 0xB54 / 2900
{
	return (uParam0 && bParam1) == 0;
}

void Function_21() //Position: 0xB61 / 2913
{
	if (Function_23(8))
	{
		Function_22();
	}
	Function_7(8, 0, 1);
	return;
}

void Function_22() //Position: 0xB79 / 2937
{
	Function_7(32768, 1, 0);
	return;
}

bool Function_23(bool bParam0) //Position: 0xB88 / 2952
{
	return Function_186(Global_76905.f_132, bParam0);
}

void Function_24(bool bParam0) //Position: 0xB99 / 2969
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
		bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_31()));
		if (IS_OBJECTSET_VALID(bVar0))
		{
			bVar1 = GET_OBJECTSET_SIZE(bVar0);
			bVar2 = false;
			while (bVar2 <= bVar1)
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar0);
				bVar7 = FIND_OBJECT_IN_OBJECT(bVar6, Function_30());
				if (IS_OBJECT_VALID(bVar7))
				{
					if (DECOR_GET_INT_VERBOSE(bVar7, Function_29(), &uVar3))
					{
						iVar4 = Function_28(uVar3);
						iVar5 = Function_25(uVar3);
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

int Function_25(int iParam0) //Position: 0xC19 / 3097
{
	return Function_26(iParam0, 32, 16);
}

int Function_26(int iParam0, int iParam1, bool bParam2) //Position: 0xC27 / 3111
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_27((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && iParam0), bParam2);
}

int Function_27(bool bParam0) //Position: 0xC46 / 3142
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_28(int iParam0) //Position: 0xC52 / 3154
{
	return Function_26(iParam0, 16, 0);
}

var Function_29() //Position: 0xC60 / 3168
{
	return "PackedGrass";
}

var Function_30() //Position: 0xC74 / 3188
{
	return "MPItemGiver";
}

var Function_31() //Position: 0xC88 / 3208
{
	return "PickupsSet";
}

int Function_32(bool bParam0) //Position: 0xC9B / 3227
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

int Function_33(bool bParam0) //Position: 0xCB1 / 3249
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
	
	bVar0 = Function_181();
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
		bParam0->f_64 = Function_180((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_179())
	{
		if (bVar1)
		{
			switch (Function_177())
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
	if (Function_176(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_186(bParam0->f_44, 2) || Function_186(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_175() && IS_PS3())
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
	if (((Function_176(bParam0) && Function_174(4096)) && Function_172()) && !Function_19(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_186(bParam0->f_44, 2) || Function_186(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
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
					Function_552(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_171(4096);
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
	fVar8 = Function_170();
	if (bVar1)
	{
		bVar9 = Function_169(bVar0);
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
			if ((Function_167(8192) || Function_186(bParam0->f_48, 512)) && !Function_166(1, 1))
			{
				iVar6 = Function_163(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_186(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_538(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_182("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_162(2, NET_GET_NET_TIME());
								Function_159(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_17(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_158(2));
						if (!Function_166(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_185(bParam0 + 48, 512);
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
					Function_17(65536, 0);
					Function_185(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_17(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_166(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_17(8388608, 0);
					}
				}
			}
			if (Function_157(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_186(bParam0->f_44, 16))
					{
						Function_538(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_156(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_185(bParam0 + 48, 32);
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
					Function_155(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_7(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_17(65536, 0);
			Function_17(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_186(bParam0->f_44, 8))
			{
				Function_153(0);
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
			if (Function_152(bParam0 + 116, &Global_78617 + 2648))
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
			Function_147(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_131(bParam0, bParam0->f_12 != 0);
			}
			Function_129(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_129(bParam0, 1);
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
			Function_129(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_186(bParam0->f_44, 512))
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
			Function_129(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_128();
				Function_7(32, 0, 1);
				Function_18(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_129(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_21();
			}
			break;
		
		case 0x00000008:
			if (Function_186(bParam0->f_44, 2))
			{
				if (Function_186(bParam0->f_44, 512))
				{
					if (!Function_186(bParam0->f_48, 4096))
					{
						Function_8(bParam0, 1);
						Function_538(bParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_166(16384, 1))
						{
							Function_8(bParam0, 0);
							Function_17(16384, 1);
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
					Function_129(bParam0, 1);
				}
			}
			else
			{
				Function_129(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_129(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_127(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
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
				Function_18(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_126();
				Function_21();
				Function_7(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_12(), Function_125(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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
				if (!Function_186(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_538(bParam0 + 48, 8);
				}
				if (Function_120(StackVal, Function_186(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_83(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_186(bParam0->f_48, 32), 1))
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
				if (Function_186(bParam0->f_44, 1))
				{
					Function_185(bParam0 + 44, 1);
				}
				else
				{
					Function_13(bParam0);
					Function_8(bParam0, 0);
				}
				bVar0 = Function_181();
				Function_82(bVar0);
				if (Function_186(bParam0->f_44, 32))
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
			if (!Function_78(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_77(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_186(bParam0->f_44, 8))
				{
					Function_76(bParam0 + 192, 0, 1, 1);
					Function_70(bParam0 + 192);
					Function_62(&bVar0, 0, 0, 0);
					Function_62(&bVar0, 0, 0, 0);
					Function_61(bVar0);
				}
				else
				{
					Function_76(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_60(bVar0);
					vVar10 = { StackVal, StackVal, Function_60(bVar0) };
					bVar13 = Function_59(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_58(bVar13))
					{
						if (StackVal || Function_172() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_53(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_52(&(Global_29008[StackVal]), 4194304);
				}
				Function_171(32);
				*bParam0 = 13;
			}
			if (!Function_186(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_538(bParam0 + 48, 128);
					Function_185(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_171(32);
				Function_53(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_58(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_50(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_50(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_50(&(Global_29008[StackVal]), 4194304))
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
					if (Function_58(bVar14))
					{
						if (StackVal && (!Function_51(bVar14) && !Function_50(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_49(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_48();
			if (!Function_186(bParam0->f_44, 32))
			{
				if (Function_47())
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
						bVar15 = Function_46(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_46(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_46(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_46(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_46(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_46(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_46(bVar0, 46);
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
				if (!Function_186(bParam0->f_44, 64))
				{
					Function_45(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_17(16384, 0);
			Function_44(bVar0, !Function_186(bParam0->f_44, 96));
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
			Function_129(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_18(1);
			}
			else if (!Function_42())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_35(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_34(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_129(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_129(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_186(bParam0->f_44, 4))
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
			Function_129(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_127(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_129(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_127(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_129(bParam0, 1);
			if (Function_42())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_127(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_34(int iParam0) //Position: 0x1D6C / 7532
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_35(int iParam0) //Position: 0x1D88 / 7560
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_126();
		iVar0 = "";
		if (Function_186(iParam0->f_44, 256))
		{
			if (Function_186(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_41(&Global_78578 + 96))
			{
				if (FABS(Function_36(&Global_78578 + 96)) > 1.0f)
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

var Function_36(int iParam0) //Position: 0x1E79 / 7801
{
	return -Function_37(iParam0);
}

float Function_37(bool bParam0) //Position: 0x1E85 / 7813
{
	if (Function_41(bParam0))
	{
		if (Function_40(bParam0))
		{
			return StackVal;
		}
		Function_38();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_38() //Position: 0x1F56 / 8022
{
	if (!Function_39())
	{
	}
	return;
}

bool Function_39() //Position: 0x1F63 / 8035
{
	return NET_IS_IN_SESSION();
}

bool Function_40(int iParam0) //Position: 0x1F6C / 8044
{
	return Function_186(*iParam0, 2);
}

bool Function_41(bool bParam0) //Position: 0x1F79 / 8057
{
	return Function_186(*bParam0, 1);
}

bool Function_42() //Position: 0x1F86 / 8070
{
	return (HUD_IS_FADED() || Function_43(0));
}

int Function_43(bool bParam0) //Position: 0x1F94 / 8084
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

void Function_44(bool bParam0, int iParam1) //Position: 0x2038 / 8248
{
	struct<5> Var0;
	
	Function_17(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_174(256))
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

void Function_45(bool bParam0) //Position: 0x208E / 8334
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

int Function_46(bool bParam0, int iParam1) //Position: 0x20AB / 8363
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_47() //Position: 0x20BC / 8380
{
	return !Function_172();
}

void Function_48() //Position: 0x20C6 / 8390
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_181();
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

void Function_49(bool bParam0) //Position: 0x2105 / 8453
{
	if (!Function_58(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_52(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_50(var uParam0, int iParam1) //Position: 0x2160 / 8544
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(bool bParam0) //Position: 0x217C / 8572
{
	if (!Function_58(bParam0))
	{
		return 1;
	}
	return Function_50(&(Global_29008[bParam0]), 4);
}

void Function_52(var uParam0, int iParam1) //Position: 0x2198 / 8600
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x21A7 / 8615
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
		if (Function_58(Global_29006))
		{
			Function_52(&(Global_29008[Global_29006]), 131072);
			Function_57(&(Global_29008[Global_29006]), 2097152);
			Function_55(Global_29006);
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
				if (Function_50(&(Global_29008[iVar0]), 4) || Function_50(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_57(&(Global_29008[iVar0]), 2097155);
					Function_52(&(Global_29008[iVar0]), 262144);
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

bool Function_54() //Position: 0x22B2 / 8882
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_55(int iParam0) //Position: 0x22BB / 8891
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_56())
			{
				return;
			}
		}
		if (!Function_50(&(Global_29008[iParam0]), 2048))
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

bool Function_56() //Position: 0x233A / 9018
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_50(&(Global_29008[iVar0]), 4) || Function_50(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_57(var uParam0, int iParam1) //Position: 0x23A3 / 9123
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_58(bool bParam0) //Position: 0x23BA / 9146
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_59(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x23D0 / 9168
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

vector3 Function_60(bool bParam0) //Position: 0x246B / 9323
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_61(bool bParam0) //Position: 0x247C / 9340
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

var Function_62(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x24AF / 9391
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
					if (Function_69(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_68(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_67(bVar2))
					{
						if (Function_66(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_69(bVar3, 1))
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
						if (Function_69(bVar3, 1))
						{
							bVar24 = (Function_68(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_12(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_12(), &cVar28, &uVar26))
						{
							Function_63(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_69(bVar3, 1))
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

void Function_63(var uParam0, var uParam1) //Position: 0x2792 / 10130
{
	*uParam1 = Function_26(uParam0, Function_64(), 0);
	uParam1->f_4 = Function_26(uParam0, Function_64() + 8, Function_64());
	return;
}

bool Function_64() //Position: 0x27B5 / 10165
{
	return Function_65(39);
}

int Function_65(bool bParam0) //Position: 0x27C0 / 10176
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

bool Function_66(bool bParam0) //Position: 0x27EE / 10222
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

bool Function_67(bool bParam0) //Position: 0x2810 / 10256
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_68(int iParam0, bool bParam1) //Position: 0x2822 / 10274
{
	if (Function_69(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x283C / 10300
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_70(int iParam0) //Position: 0x284F / 10319
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_73(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_181()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_72(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_71(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_12(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_12(), &cVar5, &uVar3))
			{
				Function_63(uVar3, &Var13);
				Function_71(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_71(struct<5> Param0) //Position: 0x28F6 / 10486
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_67(Param0))
	{
		return;
	}
	bVar0 = Function_181();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_69(bVar1, 1))
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

bool Function_72(int iParam0) //Position: 0x2976 / 10614
{
	return Function_20(Global_83864.f_1252, iParam0);
}

void Function_73(int iParam0, int iParam1) //Position: 0x2988 / 10632
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_181();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_74(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_74(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_74(23, iParam1))
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
			bVar4 = Function_46(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_46(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_74(int iParam0, int iParam1) //Position: 0x2B05 / 11013
{
	return Function_75(iParam0, iParam1) < 4294967295;
}

int Function_75(int iParam0, int iParam1) //Position: 0x2B14 / 11028
{
	int iVar0;
	
	if (!Function_67(iParam0))
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

void Function_76(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2B47 / 11079
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_181();
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
		Function_71(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_77(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2B92 / 11154
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

bool Function_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2C2F / 11311
{
	var uVar0;
	
	if (bParam1)
	{
		Function_81(&uVar0, 1);
	}
	if (bParam2)
	{
		Function_81(&uVar0, 2);
	}
	if (bParam3)
	{
		Function_81(&uVar0, 4);
	}
	if (bParam4)
	{
		Function_81(&uVar0, 8);
	}
	if (bParam5)
	{
		Function_81(&uVar0, 1024);
	}
	if (bParam7)
	{
		Function_81(&uVar0, 16);
	}
	if (bParam8)
	{
		Function_81(&uVar0, 32);
	}
	if (bParam6)
	{
		Function_81(&uVar0, 1048576);
	}
	return Function_79(bParam0, uVar0);
}

bool Function_79(bool bParam0, int iParam1) //Position: 0x2C9E / 11422
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_80(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_80(iParam1, 64))
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

bool Function_80(var uParam0, int iParam1) //Position: 0x2D77 / 11639
{
	return (uParam0 && iParam1) == 0;
}

void Function_81(var uParam0, int iParam1) //Position: 0x2D84 / 11652
{
	Function_538(uParam0, iParam1);
	return;
}

void Function_82(bool bParam0) //Position: 0x2D91 / 11665
{
	Function_17(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_83(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x2DB2 / 11698
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_181();
	Function_109();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_108();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, false))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_79(bVar0, 3145855);
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
		bVar9 = Function_174(256);
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
		Function_105(bVar0, 0);
		Function_85();
		Function_84(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_59(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_58(bVar14))
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

void Function_84(char* cParam0, vector3 vParam1) //Position: 0x2F29 / 12073
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_85() //Position: 0x2F67 / 12135
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_104(iVar1))
		{
			uVar2 = Function_103(iVar1);
			Function_86(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_86(int iParam0, bool bParam1) //Position: 0x2F99 / 12185
{
	if (!Function_104(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_102(222, Global_26401[iParam0], 0);
		if (Function_101(222) <= 0)
		{
			Function_87(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_87((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_102((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_102(222, bParam1, 0);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2) //Position: 0x3022 / 12322
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
		Function_100(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_99(iParam0);
	if (bParam2)
	{
		Function_88(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_88(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x32BD / 12989
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_98(390))), 32);
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
					bVar19 = (Function_97(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_97(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_95(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_92(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_89(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_125(), &Var9);
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

var Function_89(int iParam0) //Position: 0x38EA / 14570
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_90(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x38FB / 14587
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_91(char* cParam0, bool bParam1) //Position: 0x39F0 / 14832
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_92(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3A09 / 14857
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_94(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_93(Function_94(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_93(int iParam0, int iParam1) //Position: 0x3A6E / 14958
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_94(int iParam0, bool bParam1) //Position: 0x3A80 / 14976
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_95(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A92 / 14994
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
	if (((Function_96(iParam0) != 19 || Function_96(iParam0) != 17) || Function_96(iParam0) != 10) || Function_96(iParam0) != 9)
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

int Function_96(int iParam0) //Position: 0x3BC2 / 15298
{
	return Global_35278[iParam020].f_48;
}

float Function_97(int iParam0) //Position: 0x3BD1 / 15313
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_98(int iParam0) //Position: 0x3C0A / 15370
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_99(int iParam0) //Position: 0x3C47 / 15431
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

int Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x3DE1 / 15841
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

int Function_101(int iParam0) //Position: 0x4072 / 16498
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_102(int iParam0, bool bParam1, int iParam2) //Position: 0x40B3 / 16563
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
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_88(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_103(int iParam0) //Position: 0x42AE / 17070
{
	if (!Function_104(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_104(int iParam0) //Position: 0x42C6 / 17094
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x42DB / 17115
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_107(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_167(8192) && !Function_166(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_172())
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
	if (Function_106())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_106() //Position: 0x43E3 / 17379
{
	return Function_186(Global_79962, 2048);
}

var Function_107(int iParam0) //Position: 0x43F3 / 17395
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

void Function_108() //Position: 0x4428 / 17448
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_109() //Position: 0x443D / 17469
{
	Function_119();
	Function_112();
	Function_110();
	return;
}

void Function_110() //Position: 0x444C / 17484
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_111();
	return;
}

void Function_111() //Position: 0x4480 / 17536
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_112() //Position: 0x4491 / 17553
{
	if (Global_83864.f_1264 > 6)
	{
		Function_113(&(Global_50170[522]));
		Function_113(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_113(&(Global_50170[722]));
		Function_113(&(Global_50170[822]));
		Function_113(&(Global_50170[922]));
		Function_113(&(Global_50170[1022]));
		Function_113(&(Global_50170[1122]));
	}
	return;
}

void Function_113(bool bParam0) //Position: 0x44F1 / 17649
{
	Global_56092[*bParam0] = 0;
	Function_114(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_114(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x450B / 17675
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_118(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_117(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_118(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_116(iParam0, 4))
	{
		Function_115(Function_118(iParam0), 0);
	}
}

void Function_115(char* cParam0, int iParam1) //Position: 0x45C2 / 17858
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

bool Function_116(int iParam0, bool bParam1) //Position: 0x45E7 / 17895
{
	return Function_186(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_117(int iParam0) //Position: 0x45FB / 17915
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_118(int iParam0) //Position: 0x462F / 17967
{
	return Global_50170[iParam022].f_24;
}

void Function_119() //Position: 0x463E / 17982
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4657 / 18007
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
	Function_124(bParam0);
	Var6 = { StackVal, StackVal, Function_124(bParam0) };
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
			Function_123(bVar32);
			vVar12.f_4 = Function_121(StackVal, StackVal, StackVal, StackVal, vVar3, Function_123(bVar32));
		}
	}
	return Function_83(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_121(vector3 vParam0, vector3 vParam3) //Position: 0x470E / 18190
{
	var uVar0;
	
	Function_122(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x4728 / 18216
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_123(bool bParam0) //Position: 0x474B / 18251
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

vector3 Function_124(bool bParam0) //Position: 0x4772 / 18290
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_125() //Position: 0x4783 / 18307
{
	var uVar0;
	
	return uVar0;
}

void Function_126() //Position: 0x478B / 18315
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_127(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x47A0 / 18336
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

void Function_128() //Position: 0x47C9 / 18377
{
	if (!Function_23(8))
	{
		Function_22();
	}
	Function_7(8, 1, 1);
	return;
}

void Function_129(bool bParam0, int iParam1) //Position: 0x47E2 / 18402
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
	if (Function_186(bParam0->f_48, 256) || Function_186(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_186(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_79(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_185(bParam0 + 48, 1024);
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
		Function_130(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_186(bParam0->f_48, 8192))
		{
			Function_538(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_552(1048576);
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

void Function_130(int iParam0) //Position: 0x49DD / 18909
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

void Function_131(int iParam0, int iParam1) //Position: 0x4A1E / 18974
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_181();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_60(bVar0);
		vVar1 = { StackVal, StackVal, Function_60(bVar0) };
		Function_146(bVar0);
		vVar4 = { StackVal, StackVal, Function_146(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	bVar7 = Function_12();
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
		iParam0->f_120 = Function_142(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_538(iParam0 + 48, 256);
	}
	else
	{
		Function_60(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_60(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_134(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_133(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_538(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_132(iParam0->f_120);
	return;
}

void Function_132(int iParam0) //Position: 0x4BB3 / 19379
{
	Function_108();
	Global_63118 = iParam0;
	return;
}

void Function_133(bool bParam0, bool bParam1) //Position: 0x4BC1 / 19393
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_134(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x4BD6 / 19414
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_125(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_135(&bVar0, uParam2, uParam3, uParam4);
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

void Function_135(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4C58 / 19544
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_141(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_140(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_139(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_138(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_137(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_136(&bVar0, uParam1, uParam2, uParam3);
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

void Function_136(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4D73 / 19827
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

void Function_137(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4E88 / 20104
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

void Function_138(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4FA1 / 20385
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

void Function_139(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x50AB / 20651
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

void Function_140(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x51B1 / 20913
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

void Function_141(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5261 / 21089
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

var Function_142(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5318 / 21272
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_125(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_143(&bVar0, uParam2);
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

void Function_143(var uParam0, int iParam1) //Position: 0x538F / 21391
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_145(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_144(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_144(var uParam0, bool bParam1) //Position: 0x53FB / 21499
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
	Function_146(bParam1);
	vVar3 = { StackVal, StackVal, Function_146(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_123(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_123(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_146(bParam1);
	vVar6 = { StackVal, StackVal, Function_146(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_123(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_123(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_145(var uParam0, bool bParam1) //Position: 0x54BD / 21693
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
	Function_146(bParam1);
	vVar3 = { StackVal, StackVal, Function_146(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_123(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_123(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_146(bParam1);
	vVar6 = { StackVal, StackVal, Function_146(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_123(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_123(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_146(bool bParam0) //Position: 0x557F / 21887
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

void Function_147(int iParam0) //Position: 0x55A6 / 21926
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_186(iParam0->f_48, 2048))
	{
		Function_538(iParam0 + 48, 2048);
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
				if (Function_67(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_149(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_148("MPSplashItem.s1"));
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
				if (Function_67(bVar2))
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

var Function_148(int iParam0) //Position: 0x58CC / 22732
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

struct<64> Function_149(bool bParam0) //Position: 0x5AE0 / 23264
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_175())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151();
	}
	if (!Function_150(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_150(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_150(bool bParam0) //Position: 0x5B86 / 23430
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

struct<64> Function_151() //Position: 0x5C27 / 23591
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_152(var uParam0, int iParam1) //Position: 0x5C38 / 23608
{
	if (Function_157(uParam0, iParam1))
	{
		Function_156(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_153(int iParam0) //Position: 0x5C52 / 23634
{
	Function_154(&Global_79378, 0, iParam0);
	return;
}

void Function_154(int iParam0, bool bParam1, int iParam2) //Position: 0x5C62 / 23650
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
	
	bVar0 = Function_181();
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

void Function_155(bool bParam0, bool bParam1) //Position: 0x5E53 / 24147
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_12(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_67(bVar2))
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

void Function_156(var uParam0, int iParam1) //Position: 0x5ECF / 24271
{
	*uParam0 = *iParam1;
	return;
}

bool Function_157(var uParam0, int iParam1) //Position: 0x5EDB / 24283
{
	return *uParam0 == *iParam1;
}

float Function_158(int iParam0) //Position: 0x5EE8 / 24296
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_159(var uParam0, int iParam1) //Position: 0x5EF8 / 24312
{
	Function_160(uParam0, (Function_161(uParam0) + iParam1));
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x5F0B / 24331
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_161(int iParam0) //Position: 0x5F34 / 24372
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_162(int iParam0, int iParam1) //Position: 0x5F44 / 24388
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_163(int iParam0, bool bParam1, int iParam2) //Position: 0x5F6D / 24429
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_150(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_164(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_164(bool bParam0, int iParam1, bool bParam2) //Position: 0x5FB4 / 24500
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_166(iParam1, bParam2);
	}
	if (!Function_150(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_165(iParam1), 64);
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

var Function_165(int iParam0) //Position: 0x6035 / 24629
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

bool Function_166(int iParam0, bool bParam1) //Position: 0x634E / 25422
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_167(int iParam0) //Position: 0x636E / 25454
{
	return Function_168(&Global_79349, iParam0);
}

int Function_168(var uParam0, bool bParam1) //Position: 0x637D / 25469
{
	return Function_186(uParam0->f_44, bParam1);
}

int Function_169(int iParam0) //Position: 0x638C / 25484
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_170() //Position: 0x63A2 / 25506
{
	if (Function_186(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_186(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_171(int iParam0) //Position: 0x63D8 / 25560
{
	Function_15(&Global_78617 + 52, iParam0);
	return;
}

bool Function_172() //Position: 0x63E9 / 25577
{
	if (Function_54())
	{
		return (Function_173() != 1 || Function_173() != 0);
	}
	return 0;
}

int Function_173() //Position: 0x6402 / 25602
{
	return Global_79349.f_16;
}

bool Function_174(bool bParam0) //Position: 0x640E / 25614
{
	return Function_20(Global_78617.f_52, bParam0);
}

bool Function_175() //Position: 0x641F / 25631
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_176(bool bParam0) //Position: 0x642D / 25645
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_177() //Position: 0x643F / 25663
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_178(GET_LOCAL_SLOT(), 1, 0);
}

int Function_178(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6456 / 25686
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_150(bParam0))
			{
				if (!Function_164(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_179() //Position: 0x649A / 25754
{
	return Function_167(2);
}

var Function_180(float fParam0, float fParam1) //Position: 0x64A4 / 25764
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool Function_181() //Position: 0x64B7 / 25783
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x64CC / 25804
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_183(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_183(int iParam0) //Position: 0x6547 / 25927
{
	char* cVar0[16];
	
	if (!Function_184())
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

bool Function_184() //Position: 0x6586 / 25990
{
	if (Function_186(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_185(int iParam0, int iParam1) //Position: 0x65A1 / 26017
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_186(bool bParam0, bool bParam1) //Position: 0x65B4 / 26036
{
	return (bParam0 && bParam1) == 0;
}

void Function_187() //Position: 0x65C1 / 26049
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	bool bVar15;
	
	fVar0 = 0.0f;
	bVar1 = Function_203();
	bVar3 = GET_OBJECTSET_SIZE(bVar1);
	fVar4 = GET_CURRENT_GAME_TIME();
	bVar2 = false;
	while (bVar2 <= bVar3)
	{
		bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar1);
		if (IS_OBJECT_VALID(bVar11))
		{
			if (DECOR_GET_FLOAT_VERBOSE(bVar11, Function_202(), &fVar0))
			{
				if (DECOR_GET_INT_VERBOSE(bVar11, Function_201(), &uVar7))
				{
					iVar5 = Function_199(uVar7);
					iVar6 = 0;
					if (iVar5 == 1)
					{
						if (DECOR_GET_INT_VERBOSE(bVar11, Function_198(), &uVar8))
						{
							iVar6 = Function_197(uVar8);
						}
					}
					if (fVar4 - fVar0) <= Function_196(iVar5, iVar6)
					{
						fVar14 = GRINGO_QUERY_FLOAT(GET_GRINGO_FROM_OBJECT(bVar11), "UseCase", "ActivationRadius", &uVar10);
						fVar14 = (fVar14 + 1.0f);
						Function_123(bVar11);
						if (Function_194(StackVal, StackVal, Function_123(bVar11), &uVar9, 0) <= fVar14)
						{
							bVar15 = GET_OBJECT_OWNER(bVar11);
							PLAY_SIMPLE_PROP_ANIMATION(bVar15, "crateMultiplayer_close", 0, 0, 1f, 0);
							RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar15, "LOCKER_OPEN_QUICK_MASTER"));
							DECOR_REMOVE(bVar11, Function_202());
							REMOVE_OBJECT_FROM_OBJECTSET(bVar11, bVar1);
							bVar3 = GET_OBJECTSET_SIZE(bVar1);
							bVar12 = Function_193(uVar7);
							bVar13 = Function_192(uVar7);
							if (bVar12 || bVar13)
							{
								Function_188(bVar15, bVar11, iVar5, bVar12, bVar13);
							}
						}
						else
						{
							DECOR_SET_FLOAT(bVar11, Function_202(), (fVar0 + 1.0f));
						}
					}
				}
			}
		}
		bVar2++;
	}
	return;
}

void Function_188(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x672E / 26414
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_198(), &uVar5))
				{
					Function_63(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_191();
				vVar0 = { StackVal, StackVal, Function_191() };
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
				Function_190();
				vVar0 = { StackVal, StackVal, Function_190() };
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
				Function_189();
				vVar0 = { StackVal, StackVal, Function_189() };
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

vector3 Function_189() //Position: 0x6859 / 26713
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_190() //Position: 0x686A / 26730
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_191() //Position: 0x687B / 26747
{
	return 0.0f, 0.158f, -0.163f;
}

bool Function_192(bool bParam0) //Position: 0x688C / 26764
{
	return Function_186(bParam0, 2);
}

bool Function_193(bool bParam0) //Position: 0x6898 / 26776
{
	return Function_186(bParam0, 1);
}

float Function_194(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x68A4 / 26788
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar1 = 1E+08.0f;
	*uParam3 = 4294967295;
	bVar7 = false;
	while (bVar7 <= 16)
	{
		if (IS_SLOT_VALID(bVar7))
		{
			bVar6 = GET_SLOT_ACTOR(bVar7);
			bVar5 = false;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_195(bVar6, &vVar2);
				bVar5 = true;
			}
			else if (bParam4)
			{
				if (GET_SLOT_POSITION(bVar7, &vVar2))
				{
					bVar5 = true;
				}
			}
			if (bVar5)
			{
				fVar0 = VDIST2(vParam0, vVar2);
				if (fVar0 > bVar1)
				{
					*uParam3 = bVar7;
					bVar1 = fVar0;
				}
			}
		}
		bVar7++;
	}
	return SQRT(bVar1);
}

void Function_195(bool bParam0, int iParam1) //Position: 0x692B / 26923
{
	GET_POSITION(bParam0, iParam1);
	return;
}

float Function_196(int iParam0, int iParam1) //Position: 0x6938 / 26936
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			iVar0 = (&Global_83591 + 276 + 528)->f_28;
			break;
		
		case 0x00000004:
			iVar0 = (&Global_83591 + 276 + 528)->f_36;
			break;
		
		case 0x00000003:
			iVar0 = (&Global_83591 + 276 + 528)->f_32;
			break;
		
		case 0x00000001:
			if (iParam1 > 6 && iParam1 <= 0)
			{
				iVar0 = (*&Global_83591 + 276 + 528)[iParam1];
			}
			else
			{
				iVar0 = 15.0f;
			}
			break;
	}
	if (iVar0 >= 0.0f)
	{
		return 15.0f;
	}
	return iVar0;
}

int Function_197(int iParam0) //Position: 0x69C8 / 27080
{
	return Function_26(iParam0, 32, Function_64() + 8);
}

var Function_198() //Position: 0x69DA / 27098
{
	return "PackedWeapon";
}

int Function_199(bool bParam0) //Position: 0x69EF / 27119
{
	return Function_26(bParam0, Function_200() + 2, 2);
}

int Function_200() //Position: 0x6A00 / 27136
{
	return Function_65(6);
}

var Function_201() //Position: 0x6A0A / 27146
{
	return "PackedMetadata";
}

var Function_202() //Position: 0x6A21 / 27169
{
	return "nResetTime";
}

var Function_203() //Position: 0x6A33 / 27187
{
	if (!IS_OBJECTSET_VALID(Global_83590))
	{
		Global_83590 = CREATE_OBJECTSET_IN_LAYOUT("gMP_OpenedPickupSet", Function_12(), 12, 1);
	}
	return Global_83590;
}

void Function_204() //Position: 0x6A6B / 27243
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	float fVar11;
	char* cVar12;
	bool bVar13;
	struct<5> Var14;
	
	Function_225(Local_73.f_36);
	bVar0 = Function_181();
	if (Function_186(Local_73.f_32, 8))
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.1f, "DROPPING BAG!", 1.0f, 0.0f, 0.0f, 1.0f);
	}
	bVar2 = Function_78(bVar0, 1, 1, 1, 1, 0, 0, 0, 0);
	if (bVar2)
	{
		bVar2 = !IS_ACTOR_JUMPING(bVar0);
	}
	if (bVar2)
	{
		bVar2 = !IS_ACTOR_RAGDOLL(bVar0);
	}
	Function_223(bLocal_67, FIND_NAMED_LAYOUT("MPPlayground_layout"), 29700);
	if (IS_ACTOR_DEAD(bVar0) && Local_73 < 0)
	{
		while (Local_73 >= 0)
		{
			Function_185(&Local_73 + 32, 8);
			Local_73 = (Local_73 - 1);
			iVar1 = (*&Local_73 + 4)[Local_73];
			if (Local_73 == 1)
			{
				Function_218((*&Local_73 + 4)[0], 1);
			}
			Function_217(iVar1);
			Function_216((*&Local_73 + 16)[iVar1], bVar0);
		}
	}
	if (Local_73 > 2 && bVar2)
	{
		if (!Function_215(bVar0) && IS_ACTOR_ON_GROUND(bVar0))
		{
			if (Local_73 == 0)
			{
				vVar6 = { -0.317f, 0.0f, -0.364f };
			}
			else
			{
				vVar6 = { 0.313f, 0.0f, -0.387f };
			}
			if (!GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vVar6, &vVar3))
			{
				Function_195(bVar0, &vVar3);
			}
			iVar9 = 4294967295;
			fVar11 = 2.5f;
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!Function_213(iVar1, 4294967294))
				{
					if (IS_OBJECT_VALID((*&Local_73 + 16)[iVar1]))
					{
						fVar10 = Function_210(StackVal, StackVal, (*&Local_73 + 16)[iVar1], vVar3);
						if (fVar10 > 2.0f)
						{
							if (iVar9 != 4294967295 || fVar10 > fVar11)
							{
								if (Local_73 == 0)
								{
									iVar9 = iVar1;
									fVar11 = fVar10;
								}
								else if ((*&Local_73 + 4)[0] != iVar1)
								{
									iVar9 = iVar1;
									fVar11 = fVar10;
								}
							}
						}
					}
				}
				iVar1++;
			}
			if (iVar9 >= 4294967295)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_73.f_40))
				{
					Local_73.f_40 = ADD_SCRIPT_USE_CONTEXT("CTF_action_grab", 100, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_73.f_40))
				{
					Function_209(iVar9);
					Function_208(&Local_73 + 40);
				}
			}
			else
			{
				Function_208(&Local_73 + 40);
			}
		}
		else
		{
			Function_208(&Local_73 + 40);
		}
	}
	else
	{
		Function_208(&Local_73 + 40);
	}
	if (Function_186(Local_73.f_32, 16) && !IS_BUTTON_DOWN(Function_207(), 4, 1, false))
	{
		Function_185(&Local_73 + 32, 16);
	}
	if (Local_73 < 0 && bVar2)
	{
		if (!Function_186(Local_73.f_32, 8))
		{
			if (!Function_215(bVar0))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_73.f_44))
				{
					Local_73.f_44 = ADD_SCRIPT_USE_CONTEXT("CTF_action_drop", 4294967286, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_73.f_44) || Function_186(Local_73.f_32, 16))
				{
					Function_538(&Local_73 + 32, 16);
					Function_208(&Local_73 + 44);
					if (Local_73 == 2)
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "CTF_new/Two/right_pst");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "CTF_new/One/left_pst");
					}
					Function_538(&Local_73 + 32, 8);
					Function_206((*&Local_73 + 4)[0]);
					if (Local_73 == 2)
					{
						Function_206((*&Local_73 + 4)[1]);
					}
				}
				else
				{
					Function_218((*&Local_73 + 4)[0], 1);
					if (Local_73 == 2)
					{
						Function_218((*&Local_73 + 4)[1], 0);
					}
				}
			}
			else
			{
				Function_208(&Local_73 + 44);
			}
		}
		else if (!Function_205(bVar0))
		{
			Function_185(&Local_73 + 32, 8);
			Local_73 = (Local_73 - 1);
			iVar1 = (*&Local_73 + 4)[Local_73];
			if (Local_73 == 1)
			{
				Function_218((*&Local_73 + 4)[0], 1);
			}
			Function_217(iVar1);
			Function_216((*&Local_73 + 16)[iVar1], bVar0);
			cVar12 = GET_OBJECT_ANIMATOR_ON_OBJECT((*&Local_73 + 16)[iVar1]);
			if (IS_OBJECT_ANIMATOR_VALID(cVar12))
			{
				DESTROY_OBJECT_ANIMATOR(cVar12);
			}
			bVar13 = GET_PHYSINST_FROM_OBJECT((*&Local_73 + 16)[iVar1]);
			if (IS_PHYSINST_VALID(bVar13))
			{
				if (IS_PHYSINST_READY(bVar13))
				{
					GET_ACTOR_VELOCITY(bVar0, &Var14);
					GET_ACTOR_AXIS(bVar0, &vVar17, 0);
					if (Local_73 == 0)
					{
						Var14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar17, Var14, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
					}
					else
					{
						Var14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar17, Var14, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
					}
					Var14.f_4 = (StackVal - 3.0f);
					if (SET_PROP_VELOCITY(bVar13, &Var14))
					{
					}
					ACTIVATE_PHYSINST(bVar13);
					DRAW_STRING_CURRENT_FONT(0.6f, 0.6f, "PUSH!", 1.0f, 0.0f, 0.0f, 1.0f);
				}
			}
		}
	}
	else
	{
		Function_208(&Local_73 + 44);
	}
	return;
}

bool Function_205(bool bParam0) //Position: 0x6EAB / 28331
{
	return (IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/One/left_pst") || IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/Two/right_pst"));
}

void Function_206(int iParam0) //Position: 0x6EEB / 28395
{
	int iVar0;
	
	if (!IS_OBJECT_VALID((*&Local_73 + 16)[iParam0]))
	{
		return;
	}
	iVar0 = _GET_OBJECT_ATTACHMENT((*&Local_73 + 16)[iParam0]);
	SET_ATTACHMENT_LOCAL_OFFSET(iVar0, 0.0f, 0.0f, 0.0f);
	SET_ATTACHMENT_LOCAL_ROTATION(iVar0, 0.0f, 0.0f, 0.0f);
	return;
}

int Function_207() //Position: 0x6F1E / 28446
{
	bool bVar0;
	
	bVar0 = Function_181();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_208(int iParam0) //Position: 0x6F38 / 28472
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	return;
}

void Function_209(int iParam0) //Position: 0x6F4D / 28493
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam0;
	NET_LOG(true, "CTF Test", "SENDing ask. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	NET_SCRIPTMSG_SEND(3, 70, &vVar0, 3, 1);
	return;
}

var Function_210(bool bParam0, vector3 vParam1) //Position: 0x6FBE / 28606
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!Function_212(StackVal, StackVal, vParam1))
		{
			Function_211(bParam0);
			vVar0 = { StackVal, StackVal, Function_211(bParam0) };
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

vector3 Function_211(bool bParam0) //Position: 0x70CB / 28875
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

bool Function_212(vector3 vParam0) //Position: 0x7137 / 28983
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_213(int iParam0, int iParam1) //Position: 0x714F / 29007
{
	if (iParam0 > 0 || iParam0 <= 3)
	{
		SCRIPT_BREAKPOINT("ABOUT TO ARRAY OVERRUN IN CTF_IS_BAG_CARRIED!");
	}
	if (iParam1 == 4294967294 && Function_214(iParam0) != iParam1)
	{
		return 1;
	}
	return Function_214(iParam0) == 4294967294;
}

int Function_214(int iParam0) //Position: 0x71B1 / 29105
{
	if (iParam0 > 0 || iParam0 <= 3)
	{
		SCRIPT_BREAKPOINT("ABOUT TO ARRAY OVERRUN IN CTF_WHO_HAS_BAG!");
	}
	return uLocal_69[iParam0];
}

bool Function_215(bool bParam0) //Position: 0x71F9 / 29177
{
	return (IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/One/left_pre") || IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/Two/right_pre"));
}

void Function_216(bool bParam0, bool bParam1) //Position: 0x7239 / 29241
{
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 1);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 1);
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	return;
}

void Function_217(int iParam0) //Position: 0x725B / 29275
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam0;
	NET_LOG(true, "CTF Test", "SENDing drop. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	NET_SCRIPTMSG_SEND(3, 73, &vVar0, 3, 1);
	return;
}

void Function_218(int iParam0, bool bParam1) //Position: 0x72CD / 29389
{
	var uVar0;
	
	if (!IS_OBJECT_VALID((*&Local_73 + 16)[iParam0]))
	{
		return;
	}
	uVar0 = _GET_OBJECT_ATTACHMENT((*&Local_73 + 16)[iParam0]);
	if (bParam1)
	{
		Function_222();
		SET_ATTACHMENT_LOCAL_OFFSET(uVar0, Function_222());
		Function_221();
		SET_ATTACHMENT_LOCAL_ROTATION(iVar0, Function_221());
	}
	else
	{
		Function_220();
		SET_ATTACHMENT_LOCAL_OFFSET(iVar0, Function_220());
		Function_219();
		SET_ATTACHMENT_LOCAL_ROTATION(iVar0, Function_219());
	}
	return;
}

vector3 Function_219() //Position: 0x7318 / 29464
{
	return -7.321f, -188.968f, -16.4762f;
}

vector3 Function_220() //Position: 0x732D / 29485
{
	return 0.0398f, -0.1588f, -0.0272f;
}

vector3 Function_221() //Position: 0x7342 / 29506
{
	return -6.8245f, 182.8487f, 18.7832f;
}

vector3 Function_222() //Position: 0x7357 / 29527
{
	return -0.0362f, -0.1616f, -0.0356f;
}

int Function_223(bool bParam0, bool bParam1, int iParam2) //Position: 0x736C / 29548
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar4 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar4);
			if (IS_OBJECT_VALID(bVar3))
			{
				Stack.Push(bVar3);
				Call_Loc(iParam2);
				iVar0++;
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

void Function_224(bool bParam0) //Position: 0x7404 / 29700
{
	bool bVar0;
	
	bVar0 = NET_OBJECT_GET_SCRIPT_INT(bParam0);
	if (bVar0 <= 600 && bVar0 >= 620)
	{
		bVar0 = (bVar0 - 600);
		PRINTSTRING("@SPECIAL-bagrecv-objectScriptInt[");
		PRINTINT(bVar0);
		PRINTSTRING("]\n");
		(*&Local_73 + 16)[bVar0] = bParam0;
	}
	return;
}

void Function_225(bool bParam0) //Position: 0x7467 / 29799
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = Function_231(bParam0, &bVar0);
	while (IS_OBJECT_VALID(bVar0))
	{
		switch (iVar1)
		{
			case 0x00000045:
				Function_230(bVar0);
				break;
			
			case 0x0000004C:
				Function_229(bVar0);
				break;
		}
		iVar1 = Function_231(bParam0, &bVar0);
	}
	if (NET_IS_SESSION_HOST())
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			bVar3 = Function_214(iVar2);
			if (bVar3 != 4294967294)
			{
				if (!IS_SLOT_VALID(bVar3))
				{
					Function_227(iVar2);
				}
			}
			iVar2++;
		}
	}
	Function_226(bParam0);
	return;
}

void Function_226(bool bParam0) //Position: 0x74E7 / 29927
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_227(int iParam0) //Position: 0x74FA / 29946
{
	Function_228(iParam0, 4294967294);
	return;
}

void Function_228(int iParam0, int iParam1) //Position: 0x7508 / 29960
{
	uLocal_69[iParam0] = iParam1;
	return;
}

void Function_229(bool bParam0) //Position: 0x7516 / 29974
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	iVar2 = 0;
	while (iVar2 <= Local_73)
	{
		if ((*&Local_73 + 16)[(*&Local_73 + 4)[iVar2]] == bVar1)
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

void Function_230(bool bParam0) //Position: 0x7565 / 30053
{
	var uVar0;
	int iVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		if (DECOR_GET_INT_VERBOSE(bParam0, "Slot", &uVar0))
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (Function_213(iVar1, uVar0))
				{
					Function_227(iVar1);
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_231(bool bParam0, bool bParam1) //Position: 0x75A3 / 30115
{
	int iVar0;
	
	*bParam1 = "";
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		*bParam1 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		iVar0 = GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(*bParam1));
		REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, bParam0);
		return iVar0;
	}
	return 0;
}

void Function_232(int iParam0) //Position: 0x75E2 / 30178
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
			Function_233(iParam0);
		}
	}
	return;
}

void Function_233(bool bParam0) //Position: 0x7614 / 30228
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_234(bool bParam0) //Position: 0x7623 / 30243
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_BIG_TEXT_QUEUE();
	switch (bParam0)
	{
		case 0x00000000:
			PRINT_BIG("Short!", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("Medium!", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("Long!", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("Really Long!", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_235(bool bParam0) //Position: 0x76B0 / 30384
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<8> Var7;
	bool bVar15;
	
	bLocal_67 = CREATE_EVENT_TRAP("bag_rep", 70, bParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_67, 1);
	if (NET_IS_SESSION_HOST())
	{
		bVar0 = false;
		while (bVar0 <= 3)
		{
			Function_227(bVar0);
			bVar0++;
		}
		vVar1 = { -2.0f, 0.0f, -1.0f };
		NET_OBJECT_REPLICATION_MODE_START(17, 5);
		bVar0 = false;
		while (bVar0 <= 3)
		{
			vVar4 = { StackVal, StackVal, Vector(vVar1, StackVal, StackVal) + Vector(-3.0f, 0.0f, IntToFloat((3 * (bVar0 - 1)))) };
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91("MoneyBag", I2STR(bVar0)) };
			(*&Local_73 + 16)[bVar0] = CREATE_PROP_IN_LAYOUT(bParam0, &Var7, "$/fragments/p_gen_moneybag03x", vVar4, 0.0f, 0.0f, 0.0f, 0);
			if (IS_OBJECT_VALID((*&Local_73 + 16)[bVar0]))
			{
				UNK_0x1306549E((*&Local_73 + 16)[bVar0], bParam0);
				bVar15 = (600 + bVar0);
				NET_OBJECT_SET_SCRIPT_INT((*&Local_73 + 16)[bVar0], bVar15);
				PRINTSTRING("@SPECIAL-objectScriptInt[");
				PRINTINT(bVar15);
				PRINTSTRING("]\n");
			}
			ADD_BLIP_FOR_OBJECT((*&Local_73 + 16)[bVar0], 374, 0f, 2, 0);
			bVar0++;
		}
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Local_73.f_36 = Function_236("Queue_CTFPlayground");
	return;
}

var Function_236(bool bParam0) //Position: 0x7804 / 30724
{
	bool bVar0;
	
	bVar0 = Function_237();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_237() //Position: 0x7818 / 30744
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_238(bool bParam0) //Position: 0x7854 / 30804
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", bParam0, 8, 0);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Ammo", -8.93f, 0.0f, -6.058f, 0.0f, 87.38193f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Health", -10.663f, 0.0f, 0.443f, 0.0f, -90.05033f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Deadeye", -5.852f, 0.0f, 7.093f, 0.0f, -179.1425f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "npickup_XP", -0.032f, 0.0f, 4.817f, 0.0f, -179.4082f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Horse", 7.283f, 0.0f, 0.972f, 0.0f, -155.5765f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Weapon", 7.872f, 0.0f, -5.522f, 0.0f, 44.03856f, 0.0f);
	DECOR_SET_INT(bVar0, "type", true);
	DECOR_SET_INT(bVar0, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Weapon2", 1.342f, 0.0f, -11.051f, 0.0f, 44.03856f, 0.0f);
	DECOR_SET_INT(bVar0, "type", true);
	DECOR_SET_INT(bVar0, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Deadeye2", 31.861f, 0.0f, -32.477f, 0.0f, -179.1425f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	Function_239(bParam0, &Global_83591 + 276, 1, 1);
	return;
}

int Function_239(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x7A91 / 31377
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_255()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_31()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_94(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_254(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_123(bVar14);
				vVar7 = { StackVal, StackVal, Function_123(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_146(bVar14);
				vVar10 = { StackVal, StackVal, Function_146(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_252(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_251());
							if (Function_250(bVar5))
							{
								if (Function_67((*iParam1 + 228)[bVar52]))
								{
									Function_243(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_241(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_243(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_240(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_243(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_240() //Position: 0x7CC5 / 31941
{
	return "XPBonus";
}

void Function_241(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x7CD5 / 31957
{
	bool bVar0;
	
	if (Function_67(Param1))
	{
		bVar0 = Function_242(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_198(), bVar0);
	}
}

var Function_242(struct<5> Param0) //Position: 0x7CFB / 31995
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_64())) || SHIFT_LEFT(bParam2, Function_64() + 8));
}

void Function_243(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x7D19 / 32025
{
	Function_246(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_188(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_201(), Function_245(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_29(), Function_244(iParam13, iParam14));
}

var Function_244(var uParam0, bool bParam1) //Position: 0x7D6A / 32106
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_245(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7D7A / 32122
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

int Function_246(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x7D9F / 32159
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_580();
			Function_190();
			vVar1 = { StackVal, StackVal, Function_190() };
			break;
		
		case 0x00000001:
			bVar0 = Function_578();
			Function_191();
			vVar1 = { StackVal, StackVal, Function_191() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_579();
			Function_189();
			vVar1 = { StackVal, StackVal, Function_189() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_249(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(Function_249()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_30(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

struct<32> Function_247(bool bParam0) //Position: 0x7EA3 / 32419
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248("0", &cVar8, ""), 4);
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

struct<32> Function_248(char* cParam0, char* cParam1, char* cParam2) //Position: 0x7F0D / 32525
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_249() //Position: 0x7F2C / 32556
{
	return "PBox_";
}

bool Function_250(bool bParam0) //Position: 0x7F3A / 32570
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_251() //Position: 0x7F4A / 32586
{
	return "ID";
}

bool Function_252(bool bParam0, int iParam1) //Position: 0x7F55 / 32597
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_20((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_253())
			{
				return 0;
			}
			return !Function_20((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_20((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_253() //Position: 0x7FAA / 32682
{
	return Function_186(Global_79962, 1024);
}

var Function_254() //Position: 0x7FBA / 32698
{
	return "Type";
}

var Function_255() //Position: 0x7FC7 / 32711
{
	return "PickupFlagsSet";
}

void Function_256(var uParam0, bool bParam1) //Position: 0x7FDE / 32734
{
	if (IS_VOLUME_VALID(bParam1))
	{
		uParam0->f_8 = bParam1;
	}
	return;
}

void Function_257() //Position: 0x7FF5 / 32757
{
	struct<9> Var0;
	
	Function_260(&vVar0);
	vVar0.f_8 = 4294967293;
	Function_258(&vVar0);
	return;
}

var Function_258(int iParam0) //Position: 0x800E / 32782
{
	Function_259(iParam0);
	if (iParam0->f_36)
	{
		UNK_0xC0849D70();
	}
	return NET_SESSION_QUICK_JOIN_NATIVE(iParam0->f_24);
}

void Function_259(int iParam0) //Position: 0x802A / 32810
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = 4294967295;
	if (!(iParam0 + 8)->f_12)
	{
		bVar0 = SHIFT_LEFT(StackVal, 20);
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, 10));
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, false));
	}
	uVar1 = *iParam0;
	uVar2 = StackVal;
	UNK_0xF6E40FF3(uVar1, bVar0, iParam0->f_32, uVar2, iParam0->f_28);
	return;
}

void Function_260(int iParam0) //Position: 0x8084 / 32900
{
	*iParam0 = 1;
	iParam0->f_4 = 1;
	iParam0->f_8 = 0;
	(iParam0 + 8)->f_4 = 0;
	(iParam0 + 8)->f_8 = Global_29006;
	(iParam0 + 8)->f_12 = 0;
	iParam0->f_24 = 1;
	iParam0->f_28 = 4294967295;
	iParam0->f_32 = 16;
	iParam0->f_36 = 0;
	return;
}

bool Function_261(int iParam0, int iParam1, var uParam2, float fParam3) //Position: 0x80C4 / 32964
{
	if (IS_BUTTON_DOWN(iParam0, iParam1, 1, false))
	{
		if (*uParam2 >= 0.0f)
		{
			*uParam2 = GET_CURRENT_GAME_TIME();
		}
		if ((GET_CURRENT_GAME_TIME() - *uParam2) <= fParam3)
		{
			return 1;
		}
	}
	*uParam2 = -1.0f;
	return 0;
}

void Function_262() //Position: 0x80FF / 33023
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_514(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_512(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_511(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_510(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_509(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_507(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_504(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_497(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_496(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_494(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_492(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_487(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_486(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_485(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_482(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_472(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_471(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_470(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_469(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_468(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_465(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_464(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_463(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_462(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_461(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_460(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_458(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_454(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_453(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_437(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_436(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_435(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_434(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_433(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_432(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_431(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_430(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_429(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_428(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_427(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_426(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_425(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_424(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_423(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_421(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_418(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_413(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_412(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_280(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_279(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_278(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_271(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_270(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_269(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_268(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_267(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_266(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_263(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_263(bool bParam0) //Position: 0x83CB / 33739
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_264(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_264(bool bParam0, bool bParam1, int iParam2) //Position: 0x83F0 / 33776
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_265(bParam0), Function_181()) == 0)
		{
			ADD_ITEM(Function_265(bParam0), Function_181(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_265(bParam0), Function_181(), iParam2);
	return 1;
}

var Function_265(bool bParam0) //Position: 0x843B / 33851
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

bool Function_266(bool bParam0) //Position: 0x852C / 34092
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "playemitteroncurve"))
	{
		uVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		bVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", uVar0, 5.0f);
		UNK_0x6745191B(bVar1, 180.0f, 0.0f, 0.0f);
		return 1;
	}
	return 0;
}

bool Function_267(bool bParam0) //Position: 0x85A3 / 34211
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_268(bool bParam0) //Position: 0x85D2 / 34258
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_53(1, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_269(bool bParam0) //Position: 0x85F9 / 34297
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(false);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_270(bool bParam0) //Position: 0x86DB / 34523
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (STRING_CONTAINS_STRING(bParam0, "nghostscan"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			stradd(&cVar0, "v_region", 32);
			bVar8 = FIND_VOLUME_IN_LAYOUT(Global_30616, &cVar0);
			vVar9 = { 0.0f, 0.0f, 0.0f };
			vVar12 = { 0.0f, 0.0f, 0.0f };
			vVar15 = { 0.0f, 0.0f, 0.0f };
			GET_VOLUME_CENTER(bVar8, &vVar9);
			FIND_GROUND_INTERSECTION(&vVar9, 10.0f, &vVar12, &vVar15);
			AMBIENT_RESET_FILTER(0);
			AMBIENT_SET_SEARCH_CENTER(vVar12);
			AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(0, 0);
			AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 0.0f, 0);
			UNK_0x30C67D05(0);
			AMBIENT_ENABLE_DISTANCE_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(0);
			AMBIENT_SET_ELEVATION_FILTER(-1.0f, 2.0f);
			AMBIENT_ENABLE_QUADRANT_FILTER(0);
			AMBIENT_ENABLE_SLOPE_FILTER(0);
			return 1;
		}
	}
	return 0;
}

bool Function_271(bool bParam0) //Position: 0x8788 / 34696
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_272(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_272(int iParam0, bool bParam1) //Position: 0x87C5 / 34757
{
	bool bVar0;
	int iVar1;
	
	Function_277(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_276(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_273();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_273() //Position: 0x8951 / 35153
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_274();
	return 0;
}

void Function_274() //Position: 0x89F0 / 35312
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_275(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_275(int iParam0) //Position: 0x8A9F / 35487
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_276(int iParam0, int iParam1) //Position: 0x8AFD / 35581
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_277(int iParam0, bool bParam1, int iParam2) //Position: 0x8B3E / 35646
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
	Function_100(iParam0, bParam1, 1);
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_88(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_278(bool bParam0) //Position: 0x8D48 / 36168
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_272(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_279(bool bParam0) //Position: 0x8D7F / 36223
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(bVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		return 1;
	}
	return 0;
}

bool Function_280(bool bParam0) //Position: 0x8DD1 / 36305
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "pass_all"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar0, bParam0, 64);
				STRING_UPPER(&cVar0);
				PRINTSTRING("PASSING ALL MISSIONS IN STRAND: ");
				PRINTSTRING(&cVar0);
				PRINTNL();
				if (STRING_CONTAINS_STRING(&cVar0, "INTRO"))
				{
					Function_281(Function_407(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_281(Function_407(0, 24, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_281(Function_407(0, 12, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 13, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_281(Function_407(0, 8, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 9, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 23, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_281(Function_407(0, 10, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 11, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 17, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_281(Function_407(0, 18, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 19, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_281(Function_407(0, 2, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 3, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 22, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 6, 1), 0, 1, 1, 0);
					Function_281(Function_407(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_281(Function_407(1, 30, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 33, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 32, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_281(Function_407(1, 34, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_281(Function_407(1, 27, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 26, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 28, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 29, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_281(Function_407(1, 39, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 37, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 38, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 41, 1), 0, 1, 1, 0);
					Function_281(Function_407(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_281(Function_407(2, 45, 1), 0, 1, 1, 0);
					Function_281(Function_407(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_281(Function_407(2, 43, 1), 0, 1, 1, 0);
					Function_281(Function_407(2, 47, 1), 0, 1, 1, 0);
					Function_281(Function_407(2, 48, 1), 0, 1, 1, 0);
					Function_281(Function_407(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_281(Function_407(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_281(Function_407(3, 49, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 55, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 56, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 52, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 53, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 54, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 50, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 51, 1), 0, 1, 1, 0);
					Function_281(Function_407(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_281(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x9269 / 37481
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_406(12);
	Function_404(2);
	Function_402((15 - Function_403(105)));
	if (Function_401(bParam0) == 1)
	{
		iVar2 = Function_400(bParam0);
		Function_394(&(Global_3422[iVar240]));
		Function_393(4194304);
		if (bParam3)
		{
			Function_354(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_349(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_354(iVar2, &uVar0, 0);
		}
		bVar1 = Function_348();
		if (bParam1)
		{
			Function_336(iVar2, bParam0, bVar1);
			Function_335();
		}
	}
	Function_294(bParam0, bParam1, iParam2, bVar1);
	if (Function_401(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_287(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_401(bParam0) == 1)
		{
			iVar2 = Function_400(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_282();
}

void Function_282() //Position: 0x9356 / 37718
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_283(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_283(int iParam0, bool bParam1) //Position: 0x9386 / 37766
{
	int iVar0;
	
	iVar0 = Function_285(iParam0);
	if (!Function_284(iVar0))
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

bool Function_284(int iParam0) //Position: 0x93C3 / 37827
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_285(int iParam0) //Position: 0x93DA / 37850
{
	if (!Function_286(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_286(int iParam0) //Position: 0x93F4 / 37876
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_287(int iParam0, bool bParam1) //Position: 0x940A / 37898
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
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_288(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_287(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_287(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_287(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_287(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_287(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_287(57, 0);
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

void Function_288(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9701 / 38657
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_290(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_289(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_289(char* cParam0, int iParam1) //Position: 0x976D / 38765
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

bool Function_290(bool bParam0, var uParam1, int iParam2) //Position: 0x97A4 / 38820
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
		if (Function_293(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_292(uVar0))
		{
			case 0x00000002:
				if (!Function_291(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_291(var uParam0, int iParam1) //Position: 0x981C / 38940
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_292(char* cParam0) //Position: 0x982F / 38959
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

int Function_293(int iParam0) //Position: 0x98D0 / 39120
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_185(&iVar1, 2147483648);
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

void Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x990D / 39181
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_333(bParam0))
	{
		Function_331();
		return;
	}
	bVar0 = Function_401(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_330())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_400(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_329(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_183(Global_6269) };
		}
		if (Function_330())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_325();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_330())
	{
		Function_324();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_322("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_317(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
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
						switch (Function_400(bParam0))
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
			Function_297(1);
			Function_296(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_295(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_295(int iParam0, int iParam1) //Position: 0x9B61 / 39777
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_296(bool bParam0, int iParam1) //Position: 0x9B9B / 39835
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_54())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_297(bool bParam0) //Position: 0x9BDD / 39901
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_309();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_298();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_185(&Global_63095, 1);
		Function_185(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_298() //Position: 0x9C2E / 39982
{
	Function_308();
	Function_307();
	Function_307();
	Function_306();
	Function_306();
	Function_305();
	Function_305();
	Function_304(0);
	Function_304(0);
	if (!Function_54())
	{
		Function_303();
		Function_302();
		Function_301();
		Function_300();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_299();
	return;
}

void Function_299() //Position: 0x9C80 / 40064
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

void Function_300() //Position: 0x9D86 / 40326
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

void Function_301() //Position: 0x9DB9 / 40377
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

void Function_302() //Position: 0x9F47 / 40775
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

void Function_303() //Position: 0xA0FB / 41211
{
	Function_154(&Global_28260, 1, 0);
	return;
}

struct<8> Function_304(char* cParam0) //Position: 0xA109 / 41225
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_101((50 + iVar4)) + Function_101((183 + iVar4))) + Function_101((90 + iVar4)));
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
	Function_87(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_305() //Position: 0xA1AF / 41391
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
		iVar2 = ((Function_101((50 + iVar3) + 15) + Function_101((183 + iVar3) + 15)) + Function_101((90 + iVar3) + 15));
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
	Function_87(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_306() //Position: 0xA238 / 41528
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
			iVar2 = ((Function_101((50 + iVar3) + 8) + Function_101((183 + iVar3) + 8)) + Function_101((90 + iVar3) + 8));
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
	Function_87(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_307() //Position: 0xA2CF / 41679
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
		iVar2 = ((Function_101((50 + iVar3)) + Function_101((183 + iVar3))) + Function_101((90 + iVar3)));
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
	Function_87(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_308() //Position: 0xA34E / 41806
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_277(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_87(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_309() //Position: 0xA387 / 41863
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_184())
	{
		Function_315(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_315(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_310(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_310(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_212(StackVal, StackVal, vVar0))
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

vector3 Function_310(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA442 / 42050
{
	int iVar0;
	
	iVar0 = Function_313(uParam2, uParam3);
	if (Function_312(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_538(&Global_63095, 1);
			Function_185(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_538(&Global_63095, 2);
			Function_185(&Global_63095, 1);
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
		Function_538(&Global_63095, 2);
		Function_185(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_311();
	return StackVal, StackVal, Function_311();
}

vector3 Function_311() //Position: 0xA529 / 42281
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_312(int iParam0) //Position: 0xA532 / 42290
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_313(bool bParam0, bool bParam1) //Position: 0xA548 / 42312
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
				fVar2 = Function_314(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_314(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_312(bVar0) && !bParam1)
	{
		bVar0 = Function_313(bParam0, 1);
	}
	return bVar0;
}

float Function_314(vector3 vParam0, vector3 vParam3) //Position: 0xA60F / 42511
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_315(var uParam0, int iParam1) //Position: 0xA62C / 42540
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_195(Global_34573, &vVar4);
	if (!Function_316(Global_30640[0]))
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
	if (!Function_316(Global_30640[2]))
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
	if (!Function_316(Global_30640[1]))
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
	if (!Function_316(Global_30658[1]))
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
	if (!Function_316(Global_30658[3]))
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
	if (!Function_316(Global_30658[2]))
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
	if (!Function_316(Global_30658[4]))
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
	if (!Function_316(Global_30668[0]))
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
	if (!Function_316(Global_30668[1]))
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
	if (!Function_316(Global_30668[2]))
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
	if (!Function_316(Global_30679[0]))
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
	if (!Function_316(Global_30685[0]))
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
	if (!Function_316(Global_30685[1]))
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
	if (!Function_316(Global_30685[2]))
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
	if (!Function_316(Global_30693[0]))
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
	if (!Function_316(Global_30693[1]))
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
	if (!Function_316(Global_30693[2]))
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
	if (!Function_316(Global_30707[2]))
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
	if (!Function_316(Global_30707[3]))
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
	if (!Function_316(Global_30707[0]))
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
	if (!Function_316(Global_30717[0]))
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
	if (!Function_316(Global_30723[2]))
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
	if (!Function_316(Global_30723[1]))
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
	if (!Function_316(Global_30723[0]))
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
	if (!Function_316(Global_30679[1]))
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
	if (!Function_316(Global_30707[1]))
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
	Function_538(&Global_63095, 2);
	Function_185(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_212(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_316(int iParam0) //Position: 0xAE51 / 44625
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_186(uVar0, 0x1000000) || Function_186(uVar0, 0x2000000)) || Function_186(uVar0, 0x4000000)) || !Function_186(uVar0, 0x10000000));
}

void Function_317(bool bParam0) //Position: 0xAE8C / 44684
{
	bool bVar0;
	int iVar1;
	
	if (!Function_284(bParam0))
	{
		return;
	}
	switch (Function_401(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_400(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_321(12, 1, 0, 0);
				Function_320(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_321(13, 1, 0, 0);
				Function_320(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_321(14, 1, 0, 0);
				Function_320(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_321(15, 1, 0, 0);
				Function_320(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_321(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_400(bParam0))
			{
				case 0x00000000:
					if (Function_319(bParam0) == 1)
					{
						bVar0 = Function_318(bParam0);
						if (Function_58(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_320(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_320(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_320(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_320(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_320(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_320(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_320(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_320(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_320(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_320(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_320(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_320(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_320(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_320(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_320(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_320(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_320(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_320(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_320(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_320(4, 19);
							}
							if (StackVal == 1)
							{
								bVar0 = bVar0;
							}
							else if (StackVal == 2)
							{
								bVar0 = Global_29155[bVar010];
							}
							else
							{
								bVar0 = Global_29155[bVar010];
								bVar0 = Global_29155[bVar010];
							}
							if (bVar0 == Global_30621[0])
							{
								Function_321(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_321(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_321(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_318(bParam0) == 0)
			{
				if (Function_319(bParam0) == 1)
				{
					Function_321(458, 1, 0, 0);
					bVar0 = Function_400(bParam0);
					if (Function_58(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_320(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_320(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_320(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_320(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_320(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_320(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_320(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_320(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_319(bParam0) == 1)
			{
				Function_321(400, 1, 0, 0);
			}
			switch (Function_400(bParam0))
			{
				case 0x00000001:
					Function_321(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_320(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_320(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_320(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_321(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_320(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_320(6, 9);
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

int Function_318(bool bParam0) //Position: 0xB368 / 45928
{
	if (!Function_284(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_319(bool bParam0) //Position: 0xB387 / 45959
{
	if (!Function_284(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_320(int iParam0, bool bParam1) //Position: 0xB3A1 / 45985
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

int Function_321(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB408 / 46088
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
	Function_100(iParam0, TO_FLOAT(bParam1), 1);
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_88(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_322(char* cParam0, bool bParam1) //Position: 0xB628 / 46632
{
	struct<4> Var0;
	
	if (!Function_333(bParam1))
	{
		return;
	}
	switch (Function_401(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_323(Function_400(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_401(bParam1), Function_400(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_401(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_401(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_401(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_401(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_401(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_323(int iParam0) //Position: 0xB74C / 46924
{
	char* cVar0[16];
	
	if (!Function_184())
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

void Function_324() //Position: 0xB786 / 46982
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_101(0));
	PLAYSTAT_INT("HC_FAME", Function_101(3));
	PLAYSTAT_INT("HC_HONOR", Function_101(1));
	return;
}

void Function_325() //Position: 0xB8DE / 47326
{
	int iVar0;
	int iVar1;
	
	if (!Function_286(Global_6269))
	{
		return;
	}
	iVar0 = Function_101(24);
	iVar1 = Function_285(Global_6269);
	if (!Function_286(iVar0) && Function_328(iVar1) < 0)
	{
		Function_87(24, Global_6269, 0);
		Function_326(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_328(Function_285(iVar0)))
	{
		Function_87(24, Global_6269, 0);
		Function_326(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_326(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xB95E / 47454
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_327(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_327(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xBCB0 / 48304
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_328(int iParam0) //Position: 0xBD33 / 48435
{
	if (!Function_333(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_329(char* cParam0) //Position: 0xBD4D / 48461
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

bool Function_330() //Position: 0xBFA3 / 49059
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_331() //Position: 0xBFCE / 49102
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_332(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_332(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC218 / 49688
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_333(int iParam0) //Position: 0xC241 / 49729
{
	if (!Function_284(iParam0))
	{
		return 0;
	}
	if (!Function_334(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_334(int iParam0) //Position: 0xC265 / 49765
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_335() //Position: 0xC27A / 49786
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_336(int iParam0, int iParam1, bool bParam2) //Position: 0xC2A8 / 49832
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
	
	if (!Function_286(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_347(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_101(42) - Global_34165.f_116);
				bVar1 = (Function_101(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_98(49)) - Global_34165.f_124);
				bVar3 = (Function_101(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_101(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_346(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_337(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_183(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_337(int iParam0, bool bParam1, bool bParam2) //Position: 0xC544 / 50500
{
	int iVar0;
	bool bVar1;
	
	if (Function_345(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_330())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_101(3);
	Function_342();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_341(3, bVar1);
		if (!bParam2)
		{
			if (!Function_291(Global_76848, 4))
			{
				Function_288(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_321(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_97(3));
	iVar0 = Function_101(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_339(4, Function_340(Global_12976.f_156), 1);
				Function_338(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_339(4, Function_340(Global_12976.f_156), 1);
				Function_338(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_339(4, Function_340(Global_12976.f_156), 1);
				Function_338(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_339(4, Function_340(Global_12976.f_156), 1);
				Function_338(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_339(4, Function_340(Global_12976.f_156), 1);
				Function_338(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
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

void Function_338(int iParam0, int iParam1) //Position: 0xC713 / 50963
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_339(int iParam0, char* cParam1, bool bParam2) //Position: 0xC971 / 51569
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_326(iParam0, cParam1, 0, 1);
	iVar1 = Function_273();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

var Function_340(int iParam0) //Position: 0xCAF6 / 51958
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

int Function_341(int iParam0, bool bParam1) //Position: 0xCB85 / 52101
{
	bool bVar0;
	int iVar1;
	
	Function_321(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_276(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_273();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

void Function_342() //Position: 0xCD22 / 52514
{
	Function_344(3, 0.0f);
	Function_343(3, 10000.0f);
	return;
}

int Function_343(int iParam0, int iParam1) //Position: 0xCD38 / 52536
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_344(int iParam0, int iParam1) //Position: 0xCD78 / 52600
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_345(int iParam0) //Position: 0xCDB8 / 52664
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_346(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xCDC7 / 52679
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
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

int Function_347(int iParam0) //Position: 0xCF8F / 53135
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

var Function_348() //Position: 0xD024 / 53284
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_349(int iParam0) //Position: 0xD049 / 53321
{
	if (!Function_286(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_337(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_337(25, 1, 0);
			Function_353(1, 1);
			break;
		
		case 0x00000015:
			Function_353(50, 1);
			Function_337(250, 1, 0);
			Function_350(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_337(75, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_337(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_353(50, 1);
			Function_337(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_353(5, 1);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_337(75, 1, 0);
			Function_350(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_353(5, 1);
			Function_337(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_337(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_353(25, 1);
			Function_337(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_353(10, 1);
			Function_337(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_337(50, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_337(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_337(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_350(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_353(20, 1);
			Function_337(75, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_353(25, 1);
			Function_337(150, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_353(10, 1);
			Function_337(150, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_337(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_350(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_350(100, 1, 0);
			Function_353(5, 1);
			break;
		
		case 0x0000000F:
			Function_353(3, 1);
			Function_337(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_350(125, 1, 0);
			Function_337(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_353(50, 1);
			Function_337(100, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_353(50, 1);
			Function_337(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_353(75, 1);
			Function_337(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_337(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_337(75, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_337(250, 1, 0);
			Function_350(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_337(75, 1, 0);
			Function_350(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_337(200, 1, 0);
			Function_350(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_337(75, 1, 0);
			Function_350(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_337(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_353(50, 1);
			Function_337(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_353(100, 1);
			Function_337(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_337(200, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_337(300, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_337(300, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_337(300, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_337(500, 1, 0);
			Function_350(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_337(150, 1, 0);
			Function_350(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_350(25, 1, 0);
			Function_353(100, 1);
			break;
		
		case 0x0000002A:
			Function_337(150, 1, 0);
			Function_350(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_350(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_350(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_350(150, 1, 0);
			Function_353(100, 1);
			break;
		
		case 0x00000035:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_350(150, 1, 0);
			Function_353(100, 1);
			break;
		
		case 0x00000032:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_350(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_350(int iParam0, bool bParam1, bool bParam2) //Position: 0xD504 / 54532
{
	int iVar0;
	bool bVar1;
	
	if (Function_345(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_330())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_101(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_341(1, bVar1);
			if (!bParam2)
			{
				if (!Function_291(Global_76848, 1))
				{
					Function_288(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_352(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_291(Global_76848, 2))
				{
					Function_288(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_321(1, bVar1, 0, 0);
	}
	else
	{
		Function_102(1, (4294967295 * bVar1), 0);
	}
	if (Function_101(1) <= 4294962296)
	{
		Function_87(1, 4294962296, 0);
	}
	else if (Function_101(1) >= 5000)
	{
		Function_87(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_97(1));
	iVar0 = Function_101(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_339(2, Function_351(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_339(2, Function_351(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_339(2, Function_351(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_339(2, Function_351(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_339(2, Function_351(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_339(2, Function_351(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_339(2, Function_351(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_339(2, Function_351(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_339(2, Function_351(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_339(2, Function_351(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_339(2, Function_351(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
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
				Global_12976.f_152 = 5;
				Function_339(2, Function_351(Global_12976.f_152), 0);
			}
			break;
	}
	Function_338(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_351(int iParam0) //Position: 0xD825 / 55333
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

int Function_352(int iParam0, bool bParam1) //Position: 0xD8C8 / 55496
{
	bool bVar0;
	int iVar1;
	
	Function_102(iParam0, bParam1, 0);
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
	iVar1 = Function_276(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_273();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_353(bool bParam0, bool bParam1) //Position: 0xDA64 / 55908
{
	bool bVar0;
	
	bVar0 = Function_101(0);
	if ((Function_101(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_321(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_101(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_321(597, bParam0, 0, 0);
	}
	if ((Function_101(597) + Function_101(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_354(int iParam0, var uParam1, bool bParam2) //Position: 0xDB2F / 56111
{
	struct<4> Var0;
	
	if (!Function_286(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_553(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_391(Global_30640[0]);
			Function_391(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_390(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_391(Global_30668[0]);
			Function_382(0);
			Function_380(2, 1);
			Function_380(0, 1);
			Function_380(1, 1);
			break;
		
		case 0x00000003:
			Function_391(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_391(Global_30668[0]);
			Function_391(Global_30640[0]);
			Function_378(0, 1);
			Function_378(15, 1);
			Function_378(9, 1);
			Function_378(12, 1);
			Function_378(16, 1);
			Function_380(3, 1);
			break;
		
		case 0x00000005:
			Function_391(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_390(21, bParam2, 4);
			Function_391(Global_30668[0]);
			Function_380(39, 1);
			break;
		
		case 0x00000007:
			Function_391(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_391(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_377())
				{
					if (!Function_376(4))
					{
						Function_369(4, 0, 0, 1, 0);
					}
				}
			}
			Function_391(Global_30640[0]);
			Function_391(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_391(Global_30640[0]);
			Function_391(Global_30668[2]);
			Function_52(&(Global_29008[Global_30668[2]]), 32768);
			Function_57(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_390(9, bParam2, 4);
			Function_391(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_391(Global_30640[0]);
			Function_391(Global_30658[0]);
			Function_52(&(Global_29008[Global_30658[0]]), 32768);
			Function_57(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_391(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_391(Global_30640[0]);
			Function_391(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_391(Global_30640[1]);
			Function_391(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_391(Global_30679[0]);
			Function_391(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_391(Global_30658[5]);
			Function_391(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_390(21, bParam2, 4);
			Function_391(Global_30640[4]);
			Function_391(Global_30658[4]);
			Function_368(&Global_76847, 0x2000000);
			Function_368(&Global_76847, 0x4000000);
			Function_368(&Global_76847, 4096);
			Function_368(&Global_76847, 8);
			Function_368(&Global_76847, 8388608);
			Function_368(&Global_76847, 524288);
			Function_368(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_391(Global_30640[4]);
			Function_391(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_57(&(Global_29008[Global_30640[4]]), 256);
			Function_391(Global_30640[4]);
			Function_391(Global_30658[0]);
			Function_52(&(Global_29008[Global_30658[0]]), 32768);
			Function_57(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_391(Global_30640[0]);
			Function_391(Global_30640[5]);
			Function_390(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_391(Global_30658[3]);
			Function_52(&(Global_29008[Global_30658[3]]), 32768);
			Function_57(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_390(9, bParam2, 4);
			Function_391(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_52(&(Global_29008[Global_30679[1]]), 32768);
			Function_391(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_390(12, bParam2, 4);
			Function_57(&(Global_29008[Global_30679[1]]), 256);
			Function_391(Global_30668[3]);
			Function_391(Global_30693[0]);
			Function_391(Global_30685[0]);
			Function_382(4);
			Function_378(13, 1);
			Function_378(1, 1);
			Function_378(18, 1);
			Function_380(34, 1);
			Function_380(44, 1);
			Function_380(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_390(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_391(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_391(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_391(Global_30693[0]);
			Function_391(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_391(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_391(Global_30685[0]);
			Function_391(Global_30693[0]);
			Function_391(Global_30693[1]);
			Function_391(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_390(23, bParam2, 3);
			Function_378(23, 1);
			Function_391(Global_30685[0]);
			Function_391(Global_30685[2]);
			Function_52(&(Global_29008[Global_30685[2]]), 32768);
			Function_57(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_390(19, bParam2, 4);
			Function_391(Global_30685[0]);
			Function_391(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_390(24, bParam2, 3);
			Function_378(24, 1);
			Function_391(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_391(Global_30685[0]);
			Function_391(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_391(Global_30693[12]);
			Function_391(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_391(Global_30693[12]);
			Function_391(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_390(25, bParam2, 10);
			Function_391(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_391(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_391(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_390(13, bParam2, 4);
			Function_391(Global_30693[2]);
			Function_391(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_376(8))
				{
					Function_369(8, 0, 0, 1, 0);
				}
			}
			Function_391(Global_30685[0]);
			Function_382(9);
			Function_378(7, 1);
			Function_378(11, 1);
			Function_378(3, 1);
			Function_378(20, 1);
			Function_380(57, 1);
			break;
		
		case 0x0000002A:
			Function_390(2, bParam2, 4);
			Function_391(Global_30717[0]);
			Function_391(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_391(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_391(Global_30717[0]);
			Function_391(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_391(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_391(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_391(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_390(17, bParam2, 4);
			Function_391(Global_30723[0]);
			Function_391(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_366(15))
				{
					Function_361(15, 0, 1);
				}
			}
			Function_320(2, 26);
			Function_57(&(Global_29008[Global_30717[1]]), 256);
			Function_382(11);
			Function_391(Global_30717[1]);
			Function_391(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_391(Global_30717[1]);
			Function_391(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_391(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_391(Global_30717[1]);
			Function_355(11);
			Function_382(12);
			Global_16537[1121].f_40 = 0;
			Function_380(56, 1);
			if (!bParam2)
			{
				if (!Function_376(9))
				{
					Function_369(9, 0, 0, 0, 0);
				}
				if (!Function_376(10))
				{
					Function_369(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_323(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_355(int iParam0) //Position: 0xE42D / 58413
{
	bool bVar0;
	
	if (!Function_312(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_360(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_360(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_356(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_356(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE59C / 58780
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_358(Function_359(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_358(Function_359(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_358(StackVal);
				vVar1 = { StackVal, StackVal, Function_358(StackVal) };
				if (Function_357(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_357(vector3 vParam0, vector3 vParam3) //Position: 0xE6A2 / 59042
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_358(bool bParam0) //Position: 0xE6CF / 59087
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_359(vector3 vParam0) //Position: 0xE726 / 59174
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

void Function_360(bool bParam0, bool bParam1) //Position: 0xE774 / 59252
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

void Function_361(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE7C8 / 59336
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_365(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_366(bParam0))
	{
		if (!Function_376(bParam0))
		{
			Function_369(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_321(457, 1, 0, 0);
		Function_364(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_363(0, 0, 1, 1))
			{
				Function_297(1);
				Function_296(1, 0);
			}
			else
			{
				Function_362();
			}
		}
	}
	return;
}

void Function_362() //Position: 0xE967 / 59751
{
	return;
}

bool Function_363(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE96D / 59757
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_364(bool bParam0, int iParam1) //Position: 0xEA11 / 59921
{
	if (!Function_365(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_365(int iParam0) //Position: 0xEA66 / 60006
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_366(int iParam0) //Position: 0xEA7C / 60028
{
	if (!Function_365(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_367(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_367(int iParam0, int iParam1) //Position: 0xEACD / 60109
{
	int iVar0;
	
	if (!Function_365(iParam0))
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

void Function_368(var uParam0, int iParam1) //Position: 0xEAFA / 60154
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_369(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEB09 / 60169
{
	struct<8> Var0;
	
	if (!Function_365(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_375(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_376(bParam0))
	{
		Function_321(456, 1, 0, 0);
		Function_364(bParam0, 2);
		if (bParam2)
		{
			if (!Function_363(0, 0, 1, 1))
			{
				Function_297(1);
				Function_296(1, 5);
			}
			else
			{
				Function_362();
			}
		}
		Function_371(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_370() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_370() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_182(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_184())
		{
			if (!Function_291(Global_76846, 2))
			{
				Function_288(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_370() //Position: 0xEC5E / 60510
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_371(bool bParam0) //Position: 0xEC8B / 60555
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_374(bParam0, Function_27(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_374(bParam0, Function_27(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_373(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_115(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_372(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_372(int iParam0) //Position: 0xEE3B / 60987
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_365(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

var Function_373(int iParam0) //Position: 0xEE92 / 61074
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_365(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_374(bool bParam0, int iParam1) //Position: 0xEEE8 / 61160
{
	int iVar0;
	
	if (!Function_365(bParam0))
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

bool Function_375(int iParam0) //Position: 0xEF47 / 61255
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_376(int iParam0) //Position: 0xEF63 / 61283
{
	if (!Function_365(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_367(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_377() //Position: 0xEFB5 / 61365
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_186(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_378(int iParam0, int iParam1) //Position: 0xEFE5 / 61413
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_379(iParam0, iParam1);
	Function_288(Global_34573, 1, 4, 1);
	return 1;
}

int Function_379(int iParam0, int iParam1) //Position: 0xF058 / 61528
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_380(int iParam0, int iParam1) //Position: 0xF0B4 / 61620
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_381(iParam0, iParam1);
	Function_288(Global_34573, 1, 4, 1);
	return 1;
}

int Function_381(int iParam0, int iParam1) //Position: 0xF125 / 61733
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_382(int iParam0) //Position: 0xF17F / 61823
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_312(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_389(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_389(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_321(468, 1, 0, 0);
			Function_320(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_182("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_356(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_369(14, 1, 0, 0, 0);
				Function_383(14, 1, 0, 0, 0);
			}
			if (!Function_363(0, 0, 1, 1))
			{
				Function_297(1);
				Function_296(1, 6);
			}
			else
			{
				Function_362();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_182("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_321(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_320(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_383(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xF42C / 62508
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_365(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_375(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_367(bParam0, 2))
	{
		Function_321(456, 1, 0, 0);
		Function_364(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_182(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_374(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_364(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_363(0, 0, 1, 1))
			{
				Function_297(1);
				Function_296(1, 0);
			}
			else
			{
				Function_362();
			}
		}
		Function_371(bParam0);
		if (StackVal && !Function_186(((((!Function_370() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_186((((Function_370() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_184())
		{
			if (!Function_291(Global_76846, 2))
			{
				Function_288(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_385();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_384(3, bParam1);
				break;
			
			case 0x00000005:
				Function_384(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_384(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_384(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_384(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_384(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_320(2, 24);
				break;
			
			case 0x00000003:
				Function_320(2, 25);
				break;
			
			case 0x0000000F:
				Function_320(2, 26);
				break;
			
			case 0x0000000D:
				Function_320(2, 27);
				break;
			
			case 0x0000000E:
				Function_320(2, 28);
				break;
			}
	}
}

void Function_384(int iParam0, bool bParam1) //Position: 0xF6C2 / 63170
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_385() //Position: 0xF72D / 63277
{
	if (Function_365(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_388(Global_28180);
			Global_28180.f_8 = Function_386(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_388(Global_28180);
			Global_28180.f_8 = Function_386(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_386(int iParam0, int iParam1) //Position: 0xF7A8 / 63400
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_283(6, 0) || Function_283(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_387(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_283(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_387(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_387(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_387(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_387(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_283(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_387(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_387(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_387(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_387(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_387(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_387(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_387(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_283(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_387(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_283(6, 0) && Function_387(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_387(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_283(9, 0) && Function_387(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_387(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_283(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_212(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_212(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_212(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_387(int iParam0) //Position: 0x1039B / 66459
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_388(int iParam0) //Position: 0x103B0 / 66480
{
	int iVar0;
	int iVar1;
	
	if (!Function_365(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_389(bool bParam0, bool bParam1) //Position: 0x103FF / 66559
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

void Function_390(bool bParam0, bool bParam1, int iParam2) //Position: 0x10450 / 66640
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_69(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_553(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

void Function_391(int iParam0) //Position: 0x104BE / 66750
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_50(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_52(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_321(473, 1, 0, 0);
		iVar0 = Function_392(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_321(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_321(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_321(476, 1, 0, 0);
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
		Function_320(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_320(7, 30);
	}
	if (Function_97(473) <= Function_98(473))
	{
		if (!Function_54())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_392(bool bParam0) //Position: 0x105BD / 67005
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_58(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_29155[bParam010];
		}
		else
		{
			bVar0 = Global_29155[bParam010];
			bVar0 = Global_29155[bVar010];
		}
	}
	return bVar0;
}

void Function_393(int iParam0) //Position: 0x10615 / 67093
{
	int iVar0;
	
	if (Function_186(iParam0, 1) && Function_186(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_394(int iParam0) //Position: 0x10649 / 67145
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_395(4, 0, 0);
		}
	}
	return;
}

void Function_395(int iParam0, int iParam1, int iParam2) //Position: 0x106B0 / 67248
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
		Function_396(Global_16524, bVar0, 1);
	}
	return;
}

void Function_396(int iParam0, bool bParam1, bool bParam2) //Position: 0x10796 / 67478
{
	int iVar0;
	
	Function_399(iParam0);
	Function_398(bParam1);
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
	Function_397();
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

void Function_397() //Position: 0x1090F / 67855
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_398(bool bParam0) //Position: 0x1091B / 67867
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

void Function_399(int iParam0) //Position: 0x10961 / 67937
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

int Function_400(bool bParam0) //Position: 0x109A7 / 68007
{
	if (!Function_284(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

int Function_401(bool bParam0) //Position: 0x109C7 / 68039
{
	if (!Function_284(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_402(int iParam0) //Position: 0x109E2 / 68066
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_403(105)), 0);
	return;
}

int Function_403(int iParam0) //Position: 0x10A03 / 68099
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_404(bool bParam0) //Position: 0x10A19 / 68121
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_398(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_398(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_398(Global_12976.f_24);
	PRINTNL();
	Function_405(bParam0);
	return;
}

void Function_405(int iParam0) //Position: 0x10AB5 / 68277
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_403(90)), 0);
	return;
}

void Function_406(bool bParam0) //Position: 0x10AD6 / 68310
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

bool Function_407(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10AF1 / 68337
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_411(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_408(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_408(bParam0, bParam1, bParam2, 4294967295);
}

int Function_408(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10B4F / 68431
{
	var uVar0;
	
	if (!Function_410(bParam2))
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
	uVar0 = Function_411(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_409(uVar0);
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

int Function_409(int iParam0) //Position: 0x10CA4 / 68772
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

bool Function_410(int iParam0) //Position: 0x10CE2 / 68834
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_411(int iParam0, int iParam1, int iParam2) //Position: 0x10CF7 / 68855
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_412(bool bParam0) //Position: 0x10D17 / 68887
{
	if (STRING_CONTAINS_STRING(bParam0, "scantest"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "quad"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_quadrant", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "noffscreen"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_offscreen", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "nelevation"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_elevation", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "material"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_material", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "slope"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_slope", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "range"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_distance", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "all"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		else
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		return 1;
	}
	return 0;
}

bool Function_413(bool bParam0) //Position: 0x10F8B / 69515
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "save"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "SAVE"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					Function_417();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_417();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_296(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_417();
		if (Function_414(bVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(bVar0);
			PRINTNL();
			LOG_ERROR("GAME SAVED!");
		}
		else
		{
			LOG_ERROR("SAVE FAILED!");
		}
		return 1;
	}
	return 0;
}

bool Function_414(bool bParam0) //Position: 0x1117E / 70014
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_416("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_184())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_415() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_298();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_415() //Position: 0x111E5 / 70117
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_387(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_285(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

bool Function_416(bool bParam0) //Position: 0x11281 / 70273
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_417() //Position: 0x112A0 / 70304
{
	struct<5> Var0;
	
	if (Function_54())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_58(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_418(bool bParam0) //Position: 0x11333 / 70451
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "load"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "LOAD"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					LOAD_SOFT_SAVE(0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					LOAD_SOFT_SAVE(1);
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_420();
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(bVar0);
		PRINTNL();
		Function_419(bVar0);
		return 1;
	}
	return 0;
}

int Function_419(bool bParam0) //Position: 0x1144D / 70733
{
	if (bParam0 != 4)
	{
		if (Function_416("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, bParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, bParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, bParam0));
	return 1;
}

var Function_420() //Position: 0x11490 / 70800
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", false, false, false, false);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_421(int iParam0) //Position: 0x114CB / 70859
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_422(bVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			bVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			bVar23 = GET_ACTORENUM_FROM_STRING(bVar22);
			bVar24 = bVar23;
			if (bVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar24, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(bVar24, 4294967295))
			{
				WAIT(false);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_125(), bVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_422(char* cParam0, bool bParam1) //Position: 0x11622 / 71202
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_423(bool bParam0) //Position: 0x1164D / 71245
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_422(bVar0, "streamanddropactor"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar1 = GET_ACTORENUM_FROM_STRING(bParam0);
		bVar2 = bVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, 1, false);
		while (!STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			WAIT(false);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_125(), bVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_424(bool bParam0) //Position: 0x11750 / 71504
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_181();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_425(bool bParam0) //Position: 0x1177D / 71549
{
	if (STRING_CONTAINS_STRING(bParam0, "nframetime"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false") || STRING_CONTAINS_STRING(bParam0, "off"))
		{
			PRINT_FRAME_TIME(0);
		}
		else
		{
			PRINT_FRAME_TIME(1);
		}
		return 1;
	}
	return 0;
}

bool Function_426(bool bParam0) //Position: 0x117C7 / 71623
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, true);
		}
		return 1;
	}
	return 0;
}

bool Function_427(bool bParam0) //Position: 0x117FA / 71674
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		return 1;
	}
	return 0;
}

bool Function_428(bool bParam0) //Position: 0x118B5 / 71861
{
	int iVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "ncockfight"))
	{
		*(&iVar0 + 64 + 20) = 1;
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Mini_Games/Cockfighting/Cockfighting", &iVar0, 51, 0);
		return 1;
	}
	return 0;
}

bool Function_429(bool bParam0) //Position: 0x11919 / 71961
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "pickdoor"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		Function_311();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_125(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_311());
		return 1;
	}
	return 0;
}

bool Function_430(bool bParam0) //Position: 0x119D0 / 72144
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	if (STRING_CONTAINS_STRING(bParam0, "droplocker"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_125(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_311();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_125(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0.3f, 0.1f, -0.3f, Function_311());
		return 1;
	}
	return 0;
}

bool Function_431(bool bParam0) //Position: 0x11AE9 / 72425
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	if (STRING_CONTAINS_STRING(bParam0, "nkillbunny"))
	{
		bVar10 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar10, &vVar6, 2);
		GET_POSITION(bVar10, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar11 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar11))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_125(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_125(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", 1, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_432(bool bParam0) //Position: 0x11BE4 / 72676
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_433(bool bParam0) //Position: 0x11C38 / 72760
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0, 4294967295, 4294967295, 3212836864, 0);
			PRINTSTRING("Playing ");
			PRINTSTRING(&cVar0);
			PRINTSTRING(" - ");
			PRINTSTRING(&cVar8);
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Please use in the following format: playsong songname mood");
		}
		return 1;
	}
	return 0;
}

bool Function_434(bool bParam0) //Position: 0x11CE2 / 72930
{
	bool bVar0;
	
	bVar0 = false;
	if (STRING_CONTAINS_STRING(bParam0, "show_locked_weapons"))
	{
		bVar0 = false;
		while (bVar0 < 39)
		{
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			if (IS_WEAPONENUM_LOCKED(bVar0))
			{
				PRINTSTRING(" - LOCKED!");
			}
			else
			{
				PRINTSTRING("  - unlocked");
			}
			PRINTNL();
			bVar0++;
		}
		return 1;
	}
	return 0;
}

bool Function_435(bool bParam0) //Position: 0x11D57 / 73047
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "ai_ignore_player"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			if (STRINGS_ARE_EQUAL(&cVar0, "1"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "0"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "on"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "off"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else
			{
				LOG_ERROR("Must provide 0 or 1 to toggle off or on");
			}
		}
		else
		{
			LOG_ERROR("Must provide 0 or 1 to toggle off or on");
		}
		return 1;
	}
	return 0;
}

bool Function_436(bool bParam0) //Position: 0x11E3C / 73276
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	char* cVar19[64];
	bool bVar35;
	int iVar36;
	bool bVar37;
	char* cVar38[64];
	bool bVar54;
	char* cVar55[64];
	bool bVar71;
	bool bVar72;
	int iVar73;
	
	if (STRING_CONTAINS_STRING(bParam0, "remove"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar18 = 39;
				bVar35 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar19, "WE_", 64);
					stradd(&cVar19, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar19);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar19))
					{
						bVar35 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar35));
						PRINTNL();
						DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), bVar35);
					}
					bVar17++;
				}
				if (bVar35 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				iVar36 = 17;
				bVar17 = false;
				bVar54 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar36)
				{
					strcpy(&cVar38, "AMMO_", 64);
					stradd(&cVar38, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar38);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar38))
					{
						bVar54 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar54));
						bVar37 = STRING_TO_FLOAT(bVar16);
						bVar37 = (bVar37 * -1.0f);
						if (bVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, bVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar37);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar54), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar54 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar71 = 4294967295;
				iVar73 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar55, "ITEM_", 64);
					stradd(&cVar55, Function_265(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						bVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						bVar72 = STRING_TO_INT(bVar16);
						if (bVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < bVar72)
							{
								iVar73++;
							}
							PRINTINT(bVar72);
						}
						else
						{
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not remove from the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				bVar17 = false;
				while (bVar17 < (8 - 1))
				{
					DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar17));
					bVar17++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				PRINTSTRING("Took all the player's stuff away");
				PRINTNL();
			}
			else
			{
				LOG_ERROR("remove must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to remove from the player");
		}
		return 1;
	}
	return 0;
}

bool Function_437(bool bParam0) //Position: 0x12201 / 74241
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	char* cVar20[64];
	char* cVar36[64];
	char* cVar52[64];
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	
	if (STRING_CONTAINS_STRING(bParam0, "give"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			iVar18 = 17;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar19 = 39;
				bVar68 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar20))
					{
						bVar68 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68));
						PRINTNL();
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0, 1, 1);
						if (STRING_CONTAINS_STRING(bParam0, "givewna"))
						{
							bVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (bVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar69));
								PRINTNL();
								_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar69, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar69), 0, 1);
							}
							else
							{
								PRINTSTRING("Weapon doesn't have a valid ammo type, so not able to be nice.");
								PRINTNL();
							}
						}
					}
					bVar17++;
				}
				if (bVar68 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				bVar17 = false;
				bVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						bVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar71));
						bVar70 = STRING_TO_FLOAT(bVar16);
						if (bVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, bVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar70);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar71), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar72 = 4294967295;
				iVar74 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_265(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_439(&Global_26303, Function_451(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_265(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_265(bVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar72 == 4294967295)
				{
					PRINTSTRING("Could not give the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "LIST"))
			{
				iVar18 = 17;
				iVar19 = 39;
				PRINTSTRING("WEAPONS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					PRINTSTRING(&cVar20);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("AMMO:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					PRINTSTRING(&cVar36);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("ITEMS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_265(bVar17), 64);
					PRINTSTRING(&cVar52);
					PRINTNL();
					bVar17++;
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				iVar18 = 17;
				iVar19 = 39;
				bVar17 = true;
				while (bVar17 < (iVar19 - 2))
				{
					bVar68 = bVar17;
					if ((((!STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DEFAULT") && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TURRET")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "CANNON")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TEST")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DUALPISTOL"))
					{
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0, 1, 1);
					}
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (iVar18 - 1))
				{
					_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar17, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar17), 0, 1);
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					ADD_ITEM(Function_265(bVar17), GET_PLAYER_ACTOR(0), 1);
					bVar17++;
				}
				PRINTSTRING("Gave the player friggin' everything.");
				PRINTNL();
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "$"))
			{
				bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(bVar16, "$");
				if (STRING_NUM_TOKENS() >= 0)
				{
					bVar16 = STRING_GET_TOKEN(0);
					bVar75 = STRING_TO_INT(bVar16);
					if (bVar75 >= 0)
					{
						Function_353(ABS(bVar75), 1);
					}
					else
					{
						Function_438(ABS(bVar75), 1);
					}
				}
				else
				{
					LOG_ERROR("GIVE $ must be followed by a valid dollar amount");
				}
				STRING_CLEAR_TOKENIZER();
			}
			else
			{
				LOG_ERROR("GIVE must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to give to the player");
		}
		return 1;
	}
	return 0;
}

int Function_438(int iParam0, bool bParam1) //Position: 0x128AD / 75949
{
	bool bVar0;
	
	bVar0 = Function_101(0);
	if ((Function_101(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_102(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_101(0));
	return 1;
}

int Function_439(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1293D / 76093
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_450())
	{
		return 0;
	}
	uParam0->f_16 = Function_449(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_451();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_448(&Var96, iVar1) == 1)
		{
			if (Function_447(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_446(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_445(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_448(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_440(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_440(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12BA7 / 76711
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_441(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_441(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x12C32 / 76850
{
	bool bVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	bool bVar601;
	bool bVar602;
	int iVar603;
	struct<8> Var604;
	
	bVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
	bVar601 = false;
	bVar602 = false;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_58(bParam0))
	{
		bParam0 = Global_29005;
	}
	iVar295 = Function_447(bParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_124(StackVal);
		vVar296 = { StackVal, StackVal, Function_124(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_447(Global_29155[iVar59810]) || bParam0 != 4294967295)) != 1) && Function_50(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[bVar601] = iVar598;
				bVar304[bVar601] = bVar302;
				bVar601++;
				if (Function_319(Function_407(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar602] = iVar598;
					bVar451[bVar602] = bVar302;
					bVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_444(&iVar1, &bVar304, bVar601);
		Function_444(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_94(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_94(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_94(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_94(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_94(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar148[iVar599];
		if (Function_58(bVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_443();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_442(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_124(StackVal);
		vVar296 = { StackVal, StackVal, Function_124(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (bVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_94(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_94(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_94(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_94(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_94(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar1[iVar599];
		if (Function_58(bVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_443();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_442(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_124(StackVal);
		vVar296 = { StackVal, StackVal, Function_124(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return bVar0;
}

struct<32> Function_442(bool bParam0) //Position: 0x132DB / 78555
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_58(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[bParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_443() //Position: 0x13398 / 78744
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_444(int iParam0, bool bParam1, int iParam2) //Position: 0x133C6 / 78790
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

bool Function_445(bool bParam0) //Position: 0x13454 / 78932
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_446(bool bParam0) //Position: 0x134A6 / 79014
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_447(bool bParam0) //Position: 0x13555 / 79189
{
	return Function_392(bParam0);
}

bool Function_448(var uParam0, int iParam1) //Position: 0x13560 / 79200
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_449(int iParam0) //Position: 0x13CD3 / 81107
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_450() //Position: 0x13DA1 / 81313
{
	return Function_186(StackVal, 1);
}

int Function_451() //Position: 0x13DB0 / 81328
{
	int iVar0;
	
	iVar0 = Function_452(0);
	return iVar0;
}

var Function_452(int iParam0) //Position: 0x13DBE / 81342
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_101(358) + Function_101(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_94(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_453(bool bParam0) //Position: 0x13E42 / 81474
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_454(bool bParam0) //Position: 0x13E9C / 81564
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropcougar"))
	{
		bVar17 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar17, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar17), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		vVar9 = { StackVal, StackVal, vVar6 };
		vVar12 = { StackVal, StackVal, -Vector(vVar6, StackVal, StackVal) };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		bVar18 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar18))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar15 = Function_455(StackVal, StackVal, StackVal, bVar18, Function_125(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_455(StackVal, StackVal, StackVal, bVar18, Function_125(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_455(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x13F7F / 81791
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_456(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_456(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x13FCA / 81866
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_457(&vVar0, uParam2))
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

bool Function_457(int iParam0, int iParam1) //Position: 0x140F3 / 82163
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_212(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_212(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_458(bool bParam0) //Position: 0x1415E / 82270
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		uVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(uVar0);
		while (!STREAMING_IS_PROPSET_LOADED(uVar0))
		{
			WAIT(false);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_459(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_125(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(uVar0);
		return 1;
	}
	return 0;
}

var Function_459(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x14204 / 82436
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_54())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_460(bool bParam0) //Position: 0x1434D / 82765
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killvehicle"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar0 = GET_PLAYER_ACTOR(0);
		bVar1 = GET_VEHICLE(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			KILL_ACTOR(bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_461(bool bParam0) //Position: 0x1438C / 82828
{
	bool bVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(bParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_34574, 2.0f, &Var2, &uVar5);
		Var2.f_4 = (StackVal + 1.0f);
		bVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(bVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_34574);
		PRINTNL();
		if (bVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (bVar1 > 0)
			{
				if (bVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					bVar1 = (bVar1 - 512);
				}
				else if (bVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					bVar1 = (bVar1 - 256);
				}
				else if (bVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					bVar1 = (bVar1 - 128);
				}
				else if (bVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					bVar1 = (bVar1 - 64);
				}
				else if (bVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					bVar1 = (bVar1 - 32);
				}
				else if (bVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					bVar1 = (bVar1 - 16);
				}
				else if (bVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					bVar1 = (bVar1 - 8);
				}
				else if (bVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					bVar1 = (bVar1 - 1);
				}
				else if (bVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					bVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_462(bool bParam0) //Position: 0x14612 / 83474
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	struct<8> Var17;
	bool bVar25;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropai"))
	{
		bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar14 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar14, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar14), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		strcpy(&Var17, "ndroppedAI", 32);
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(&Var17) };
		bVar25 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar25))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			iVar15 = 375;
		}
		else
		{
			iVar15 = 397;
		}
		bVar12 = Function_455(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, 0, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bVar12, 22, 1);
			TASK_KILL_CHAR(bVar12, bVar14);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			TASK_MELEE_ATTACK(bVar12, bVar14, -1.0f);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "horse"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			strcpy(&Var17, "droppedHorse", 32);
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(&Var17) };
			bVar13 = Function_455(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
			ACTOR_MOUNT_ACTOR(bVar12, bVar13);
		}
		else
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
		}
		return 1;
	}
	return 0;
}

bool Function_463(int iParam0) //Position: 0x147AB / 83883
{
	iParam0 = iParam0;
	return 0;
}

bool Function_464(bool bParam0) //Position: 0x147B6 / 83894
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "unlock"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "map"))
			{
				bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
				if (STRING_CONTAINS_STRING(bVar1, "all"))
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						Function_391(iVar2);
						iVar2++;
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						if (STRING_CONTAINS_STRING(&Global_29155[iVar210] + 20, bVar1))
						{
							Function_391(iVar2);
						}
						iVar2++;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_465(bool bParam0) //Position: 0x14845 / 84037
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			bVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (bVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_272(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_466(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_466(int iParam0, bool bParam1) //Position: 0x148B7 / 84151
{
	bool bVar0;
	int iVar1;
	
	Function_467(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_276(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_273();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_467(int iParam0, bool bParam1, int iParam2) //Position: 0x14A43 / 84547
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - bParam1);
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_88(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_468(bool bParam0) //Position: 0x14C2E / 85038
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "chartest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 0;
			while (iVar2 <= Global_29008)
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar210] + 20, bVar0))
				{
					Global_62481 = iVar2;
				}
				iVar2++;
			}
			Global_62483 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62483 <= 0)
			{
				Global_62483 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62483 = 0;
		}
		Global_62480 = 1;
		return 1;
	}
	return 0;
}

bool Function_469(bool bParam0) //Position: 0x14CB4 / 85172
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_470(bool bParam0) //Position: 0x14CD6 / 85206
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "missiontest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			Global_62481 = STRING_TO_INT(bVar0);
			Global_62482 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62482 <= 0)
			{
				Global_62482 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62482 = 0;
		}
		Global_62478 = 1;
		return 1;
	}
	return 0;
}

bool Function_471(bool bParam0) //Position: 0x14D3D / 85309
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "ppp"))
	{
		iVar0 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar1 = 0;
		PRINTSTRING("Console Print: ");
		iVar1 = 1;
		while (iVar1 < iVar0)
		{
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			PRINTSTRING(bVar2);
			PRINTSTRING(" ");
			iVar1++;
		}
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() == 2)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(bVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_472(bool bParam0) //Position: 0x14DB0 / 85424
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		bVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_473(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_473(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_473(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x15029 / 86057
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_481(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_480(iParam1))
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
	if (!Function_476(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_125(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_474();
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

void Function_474() //Position: 0x152B9 / 86713
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_475(bVar0, iVar1);
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

void Function_475(bool bParam0, bool bParam1) //Position: 0x1531C / 86812
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

bool Function_476(bool bParam0) //Position: 0x1534B / 86859
{
	if (Function_479(256))
	{
		return 0;
	}
	if (Function_479(262144))
	{
		return 0;
	}
	if (Function_478())
	{
		return 0;
	}
	if (!Function_479(1))
	{
		return 0;
	}
	if (!Function_479(4096))
	{
		return 0;
	}
	if (bParam0 && Function_477(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_479(2048))
	{
		return 0;
	}
	if (Function_54() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_477(int iParam0) //Position: 0x153C1 / 86977
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_478() //Position: 0x153D2 / 86994
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

bool Function_479(int iParam0) //Position: 0x153EB / 87019
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_480(int iParam0) //Position: 0x15409 / 87049
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_481(int iParam0) //Position: 0x1541F / 87071
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_482(bool bParam0) //Position: 0x15434 / 87092
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 1;
			if (STRINGS_ARE_EQUAL(bVar0, "fair"))
			{
				iVar2 = 1;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "rainy"))
			{
				iVar2 = 3;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "stormy"))
			{
				iVar2 = 4;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "snowy"))
			{
				iVar2 = 5;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "clear"))
			{
				iVar2 = 0;
			}
			Function_483(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_483(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x154E9 / 87273
{
	int iVar0;
	bool bVar1;
	
	Function_399(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_484(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_396(StackVal, bVar1, bParam4);
		}
	}
}

void Function_484(int iParam0, int iParam1) //Position: 0x1555B / 87387
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_399(iParam0);
	Function_398(iVar0);
	PRINTNL();
	Function_396(iParam0, iVar0, iParam1);
	return;
}

bool Function_485(bool bParam0) //Position: 0x15580 / 87424
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		return 1;
	}
	if (STRING_CONTAINS_STRING(bParam0, "autowind"))
	{
		SET_AUTO_WIND();
		return 1;
	}
	return 0;
}

bool Function_486(bool bParam0) //Position: 0x155E4 / 87524
{
	if (STRING_CONTAINS_STRING(bParam0, "invert_y"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false"))
		{
			SET_LOOKSTICK_INVERT_Y(0);
		}
		else
		{
			SET_LOOKSTICK_INVERT_Y(1);
		}
		return 1;
	}
	return 0;
}

bool Function_487(bool bParam0) //Position: 0x15621 / 87585
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2) };
			Function_491(1.0f, 0.0f, 1.0f);
			Function_489(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar4 = Function_488(bVar3);
			if (Function_58(bVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_442(bVar4) };
				Function_489(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_488(bool bParam0) //Position: 0x156BE / 87742
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < (Global_29008 - 1))
	{
		if (STRING_CONTAINS_STRING(&Global_29155[iVar010] + 20, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	bVar1 = FIND_NAMED_LAYOUT("regions_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(bVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(bVar2);
			while (IS_OBJECT_VALID(bVar3))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), bParam0))
				{
					iVar0 = 0;
					while (iVar0 < (Global_29008 - 1))
					{
						if (StackVal == GET_VOLUME_FROM_OBJECT(bVar3))
						{
							return iVar0;
						}
						iVar0++;
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
			}
			DESTROY_ITERATOR(bVar2);
		}
	}
	return 4294967295;
}

void Function_489(vector3 vParam0) //Position: 0x15777 / 87927
{
	*(&Global_28210 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28210 + 36) = { StackVal, StackVal, vParam0 };
	Global_28210 = 1;
	Global_28210.f_4 = 0;
	Global_28210.f_60 = 3;
	Global_28210.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28210.f_12) >= 0)
	{
		Function_490(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_490(bool bParam0) //Position: 0x157FE / 88062
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

void Function_491(var uParam0, var uParam1, int iParam2) //Position: 0x1583E / 88126
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_492(bool bParam0) //Position: 0x1585F / 88159
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_493(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_493(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x158BF / 88255
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_494(bool bParam0) //Position: 0x158F6 / 88310
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = Function_488(bVar0);
			if (Function_58(uVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_442(uVar1), 4);
				Function_495(uVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_495(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x1595D / 88413
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_496(bool bParam0) //Position: 0x15994 / 88468
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "print"))
	{
		iVar1 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar2 = 0;
		PRINTSTRING("Console Print: ");
		iVar2 = 1;
		while (iVar2 < iVar1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(iVar2);
			PRINTSTRING(bVar0);
			PRINTSTRING(" ");
			iVar2++;
		}
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_497(bool bParam0) //Position: 0x159F3 / 88563
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_503();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_498();
			}
			return 0;
		}
	}
	return 0;
}

int Function_498() //Position: 0x15A4C / 88652
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_502(4))
		{
			Function_393(4);
		}
		else
		{
			Function_501(4);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "missions"))
	{
		if (Global_3374 == 1)
		{
			Global_3374 = 0;
		}
		else
		{
			Global_3374 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ntutorials"))
	{
		if (Global_3375 == 1)
		{
			Global_3375 = 0;
		}
		else
		{
			Global_3375 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ambientpop"))
	{
		if (Function_502(1))
		{
			Function_393(1);
		}
		else
		{
			Function_501(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_502(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_502(32))
		{
			Function_393(32);
		}
		else
		{
			Function_501(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_502(64))
		{
			Function_393(64);
		}
		else
		{
			Function_501(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_502(128))
		{
			Function_393(128);
		}
		else
		{
			Function_501(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_479(256))
		{
			Function_500(256);
		}
		else
		{
			Function_499(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_499(int iParam0) //Position: 0x15BA9 / 89001
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_500(int iParam0) //Position: 0x15BC6 / 89030
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_501(int iParam0) //Position: 0x15BD9 / 89049
{
	if (Function_186(iParam0, 1) && !Function_186(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_502(int iParam0) //Position: 0x15C06 / 89094
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_503() //Position: 0x15C22 / 89122
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar1, "ncallstack"))
	{
		iVar0 = 0;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "global"))
	{
		iVar0 = 7;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ambient"))
	{
		iVar0 = 1;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "regional"))
	{
		iVar0 = 3;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "mission"))
	{
		iVar0 = 2;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "launcher"))
	{
		iVar0 = 5;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "gringo"))
	{
		iVar0 = 8;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "layout"))
	{
		iVar0 = 9;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "tutorial"))
	{
		iVar0 = 6;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ncompanion"))
	{
		iVar0 = 10;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "law"))
	{
		iVar0 = 11;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "traffic"))
	{
		iVar0 = 12;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "weather"))
	{
		iVar0 = 14;
	}
	else
	{
		return 0;
	}
	if (Global_30842[iVar0])
	{
		Global_30842[iVar0] = 0;
	}
	else
	{
		Global_30842[iVar0] = 1;
	}
	return 1;
}

bool Function_504(bool bParam0) //Position: 0x15D8F / 89487
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar53;
	vector3 vVar56;
	bool bVar59;
	
	if (STRING_CONTAINS_STRING(bParam0, "stamb"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		*(&iVar2 + 64 + 20) = 1;
		while (iVar1 < 6)
		{
			bVar0 = Function_506(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_505(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
				{
					*(&iVar2 + 8) = { StackVal, StackVal, vVar53 };
				}
				*(&iVar2 + 20) = { 0.0f, 0.0f, 0.0f };
				LAUNCH_NEW_SCRIPT_WITH_ARGS(bVar0, &iVar2, 51, 0);
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_505(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x15EC5 / 89797
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_212(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_212(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

var Function_506(char* cParam0, bool bParam1) //Position: 0x15FF7 / 90103
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_507(bool bParam0) //Position: 0x1602B / 90155
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_508(iVar1, bParam0);
			if (UNK_0x4417C9F2(bVar0))
			{
				Global_30923 = 1;
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

var Function_508(char* cParam0, bool bParam1) //Position: 0x16105 / 90373
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "Frontier/Missions", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "Frontier/Mini_Games", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "Mexico/Missions", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "Mexico/Mini_Games", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "North/Missions", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "North/Mini_Games", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "systemtest", 64);
			break;
		
		default:
			strcpy(&cVar0, "systemtest", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_509(bool bParam0) //Position: 0x16217 / 90647
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_508(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				strcpy(&cVar2, "$/content/", 64);
				stradd(&cVar2, bVar0, 64);
				Global_30922 = GET_ASSET_ID(&cVar2, 4);
				if (Global_30922 == "")
				{
					Global_30922 = 4294967295;
					LOG_ERROR("Attempting to start a mission script that exists, but does not have a valid asset_ID. Please add the script to init/rdr2init_script.sc");
				}
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_510(bool bParam0) //Position: 0x163A7 / 91047
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "nterminate"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			if (UNK_0x4417C9F2(bParam0))
			{
				UNK_0x05719022(bParam0);
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script is not running.");
				PRINTSTRING("ScriptConsole: This script is not running - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If terminating a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			while (iVar1 < 6)
			{
				bVar0 = Function_508(iVar1, bParam0);
				if (UNK_0x4417C9F2(bVar0))
				{
					UNK_0x05719022(bVar0);
					iVar1 = 6;
				}
				else if (iVar1 == 6)
				{
					LOG_ERROR("ScriptConsole: The script is not running. Try to specify a path.");
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_511(bool bParam0) //Position: 0x1654E / 91470
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(bParam0, "run"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "netrun"))
		{
			iVar1 = 1;
		}
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (DOES_SCRIPT_EXIST(bParam0))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(bParam0, 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(bParam0, 0);
				}
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script file could not be found. Please check the path you typed.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If running a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			FILE_START_PATH("systemtest/GeneralTest");
			FILE_ADD_TO_PATH(bParam0);
			FILE_END_PATH();
			if (DOES_SCRIPT_EXIST(FILE_GET_CURRENT_PATH()))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				return 1;
			}
			while (iVar2 < 6)
			{
				bVar0 = Function_508(iVar2, bParam0);
				if (DOES_SCRIPT_EXIST(bVar0))
				{
					if (iVar1 == 1)
					{
						NET_START_NEW_SCRIPT(bVar0, 0);
					}
					else
					{
						LAUNCH_NEW_SCRIPT(bVar0, 0);
					}
					iVar2 = 6;
				}
				else if (iVar2 == 6)
				{
					LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
					PRINTSTRING("ScriptConsole: This script file could not be found - ");
					PRINTSTRING(bVar0);
					PRINTNL();
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_512(bool bParam0) //Position: 0x167EE / 92142
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar1 = GET_ACTOR_ENUM_FROM_STRING(bVar0);
			if (Function_513(iVar1))
			{
				bVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					bVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					bVar2 = STRING_TO_INT(bVar3);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(iVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(iVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(iVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_513(int iParam0) //Position: 0x1689C / 92316
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_514(bool bParam0) //Position: 0x168B3 / 92339
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

void Function_515(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x168DD / 92381
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
	Function_537(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_76(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_536(iParam0, 2);
	Function_533(iParam0);
	Function_530(iParam0);
	Function_528(iParam0);
	Function_526(iParam0);
	Function_523(iParam0);
	Function_520(iParam0);
	Function_517(iParam0);
	if (bParam2)
	{
		Function_538(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_538(iParam0 + 44, 8);
		Function_70(iParam0 + 192);
	}
	Function_516(iParam0, bParam4);
	Function_17(8388608, 0);
}

void Function_516(int iParam0, bool bParam1) //Position: 0x169A5 / 92581
{
	if (bParam1)
	{
		Function_538(iParam0 + 44, 32);
	}
	else
	{
		Function_185(iParam0 + 44, 32);
	}
	return;
}

void Function_517(int iParam0) //Position: 0x169C5 / 92613
{
	Function_518(iParam0, 92640);
	return;
}

void Function_518(var uParam0, var uParam1) //Position: 0x169D4 / 92628
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_519() //Position: 0x169E0 / 92640
{
	return 0;
}

void Function_520(int iParam0) //Position: 0x169E7 / 92647
{
	Function_521(iParam0, 92674);
	return;
}

void Function_521(var uParam0, var uParam1) //Position: 0x169F6 / 92662
{
	uParam0->f_180 = uParam1;
	return;
}

int Function_522() //Position: 0x16A02 / 92674
{
	return 1;
}

void Function_523(int iParam0) //Position: 0x16A09 / 92681
{
	Function_524(iParam0, 92708);
	return;
}

void Function_524(var uParam0, var uParam1) //Position: 0x16A18 / 92696
{
	uParam0->f_164 = uParam1;
	return;
}

void Function_525() //Position: 0x16A24 / 92708
{
	return;
}

void Function_526(int iParam0) //Position: 0x16A2A / 92714
{
	Function_527(iParam0, 92708);
	return;
}

void Function_527(var uParam0, int iParam1) //Position: 0x16A39 / 92729
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_528(int iParam0) //Position: 0x16A45 / 92741
{
	Function_529(iParam0, 92708);
	return;
}

void Function_529(var uParam0, int iParam1) //Position: 0x16A54 / 92756
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_530(int iParam0) //Position: 0x16A60 / 92768
{
	Function_531(iParam0, 92795);
	return;
}

void Function_531(var uParam0, var uParam1) //Position: 0x16A6F / 92783
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_532() //Position: 0x16A7B / 92795
{
	return 0;
}

void Function_533(int iParam0) //Position: 0x16A82 / 92802
{
	Function_534(iParam0, 92829);
	return;
}

void Function_534(var uParam0, int iParam1) //Position: 0x16A91 / 92817
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_535(var uParam0) //Position: 0x16A9D / 92829
{
	uParam0 = uParam0;
	return;
}

void Function_536(var uParam0, var uParam1) //Position: 0x16AA7 / 92839
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_537(int iParam0, struct<57> Param1) //Position: 0x16AB3 / 92851
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_538(var uParam0, int iParam1) //Position: 0x16AC7 / 92871
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_539() //Position: 0x16AD6 / 92886
{
	return;
}

void Function_540() //Position: 0x16ADC / 92892
{
	Function_541(92919);
	return;
}

void Function_541(int iParam0) //Position: 0x16AE9 / 92905
{
	NET_SCRIPTMSG_REGISTER_HANDLER(18, iParam0);
	return;
}

void Function_542(var uParam0) //Position: 0x16AF7 / 92919
{
	struct<18> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
	Function_543(uParam0, &Var0);
	return;
}

void Function_543(bool bParam0, int iParam1) //Position: 0x16B0E / 92942
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, iParam1, 18);
	bVar0 = Function_546(iParam1 + 40, iParam1 + 8);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (DECOR_CHECK_EXIST(bVar0, "DLC_AA_award"))
		{
			return;
		}
		Function_544(bVar0, 0, 0);
	}
	return;
}

void Function_544(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16B52 / 93010
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Function_203()))
	{
		if (Function_545(bParam0) != 5)
		{
			ADD_OBJECT_TO_OBJECTSET(bParam0, Function_203());
		}
		bVar0 = GET_OBJECT_OWNER(bParam0);
		DESTROY_OBJECT_GLOW(bVar0);
		PLAY_SIMPLE_PROP_ANIMATION(bVar0, "crateMultiplayer_open", 0, 0, 2.0f, 0);
		if (bParam1)
		{
			bParam2 = (bParam2 - (NET_GET_NET_TIME() - GET_CURRENT_GAME_TIME()));
		}
		else
		{
			RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar0, "LOCKER_OPEN_QUICK_MASTER"));
			bParam2 = GET_CURRENT_GAME_TIME();
		}
		DECOR_SET_FLOAT(bParam0, Function_202(), bParam2);
		bVar1 = GET_BLIP_ON_OBJECT(bVar0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
		bVar1 = GET_BLIP_ON_OBJECT(bParam0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	return;
}

int Function_545(bool bParam0) //Position: 0x16C23 / 93219
{
	return Function_199(DECOR_GET_INT(bParam0, Function_201()));
}

var Function_546(bool bParam0, bool bParam1) //Position: 0x16C34 / 93236
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT(bParam0);
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return "";
	}
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, bParam1);
	if (!IS_OBJECT_VALID(bVar1))
	{
		return "";
	}
	bVar2 = FIND_OBJECT_IN_OBJECT(bVar1, Function_30());
	if (!IS_OBJECT_VALID(bVar2))
	{
		return "";
	}
	return bVar2;
}

void Function_547(bool bParam0) //Position: 0x16C7A / 93306
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing drop. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_213(vVar0.y, 4294967294))
		{
			if (Function_213(vVar0.y, vVar0.x))
			{
				Function_227(vVar0.y);
			}
			else
			{
				NET_LOG(true, "CTF Test", "Invalid Drop. Player %s had bag %s, not player %s!", I2STR(uLocal_69[vVar0.y]), I2STR(vVar0.y), I2STR(vVar0.x), false);
			}
		}
		else
		{
			NET_LOG(true, "CTF Test", "Invalid Drop. Nobody had bag %s already", I2STR(vVar0.y), false, false, false);
		}
	}
	return;
}

void Function_548(bool bParam0) //Position: 0x16DA3 / 93603
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing confirm. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	if (NET_IS_SESSION_HOST())
	{
		Function_228(vVar0.y, vVar0.x);
	}
	if (vVar0.x != GET_LOCAL_SLOT())
	{
		return;
	}
	bVar3 = Function_181();
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(bVar3))
	{
		return;
	}
	cVar4 = GET_OBJECT_ANIMATOR_ON_OBJECT((*&Local_73 + 16)[vVar0.y]);
	if (IS_OBJECT_ANIMATOR_VALID(cVar4))
	{
		DESTROY_OBJECT_ANIMATOR(cVar4);
	}
	if (Local_73 == 0)
	{
		cVar4 = CREATE_OBJECT_ANIMATOR_ON_OBJECT((*&Local_73 + 16)[vVar0.y], "CTF", "CTF_new", "CTF_new/Prop_L");
	}
	else
	{
		cVar4 = CREATE_OBJECT_ANIMATOR_ON_OBJECT((*&Local_73 + 16)[vVar0.y], "CTF", "CTF_new", "CTF_new/Prop_R");
	}
	if (IS_OBJECT_ANIMATOR_VALID(cVar4))
	{
		if (LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar4, bVar3, Local_73 + 2))
		{
		}
	}
	SET_ANIM_SET_FOR_ACTOR(bVar3, "CTF", 0);
	if (Local_73 == 0)
	{
		Function_549((*&Local_73 + 16)[vVar0.y], bVar3, "clavicle_l_attachment", 2, Function_186(Local_73.f_32, 1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_ACTION_NODE_FOR_ACTOR(bVar3, "CTF_new/One/left_pre");
	}
	else
	{
		Function_206((*&Local_73 + 4)[0]);
		Function_549((*&Local_73 + 16)[vVar0.y], bVar3, "clavicle_r_attachment", 3, Function_186(Local_73.f_32, 1), 0.0f, 0.0f, 0.0f, -6.8245f, 182.8487f, 18.7832f);
		SET_ACTION_NODE_FOR_ACTOR(bVar3, "CTF_new/Two/right_pre");
	}
	(*&Local_73 + 4)[Local_73] = vVar0.y;
	Local_73++;
	return;
}

void Function_549(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x16FBE / 94142
{
	if (IS_ACTOR_VALID(bParam1) && IS_OBJECT_VALID(bParam0))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 0);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 0);
		if (bParam4)
		{
			ATTACH_OBJECTS_USING_LOCATOR(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), bParam2, "grab", iParam3);
		}
		else
		{
			ATTACH_OBJECTS(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), bParam2, vParam5, vParam8, iParam3);
		}
	}
}

void Function_550(bool bParam0) //Position: 0x17020 / 94240
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing ask. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_213(vVar0.y, 4294967294))
		{
			Function_551(vVar0.x, vVar0.y);
		}
		else
		{
			NET_LOG(true, "CTF Test", "Rejected Ask. Player %s already has bag %s", I2STR(uLocal_69[vVar0.y]), I2STR(vVar0.y), false, false);
		}
	}
	return;
}

void Function_551(var uParam0, int iParam1) //Position: 0x170ED / 94445
{
	struct<9> Var0;
	
	vVar0 = uParam0;
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam1;
	NET_LOG(true, "CTF Test", "SENDing confirm. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), false);
	NET_SCRIPTMSG_SEND(3, 71, &vVar0, 3, 1);
	return;
}

void Function_552(int iParam0) //Position: 0x17161 / 94561
{
	Function_81(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

int Function_553(bool bParam0, bool bParam1, int iParam2) //Position: 0x171BA / 94650
{
	if (!Function_67(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_181(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_181(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_181(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

void Function_554(bool bParam0) //Position: 0x17211 / 94737
{
	if (bParam0)
	{
		Function_555(1);
	}
	else
	{
		Function_171(1);
	}
	return;
}

void Function_555(var uParam0) //Position: 0x17227 / 94759
{
	Function_81(&Global_78617 + 52, uParam0);
	return;
}

void Function_556() //Position: 0x17238 / 94776
{
	Function_565(&Global_83591 + 276, 0);
	Function_563(&Global_83591, 1, 5, 5, 1);
	Function_563(&Global_83591, 2, 22, 1, 1);
	Function_563(&Global_83591, 3, 25, 20, 1);
	Function_559(&Global_83591, 1, 19, 4, 1);
	Function_559(&Global_83591, 2, 6, 3, 1);
	Function_559(&Global_83591, 3, 17, 4, 1);
	Function_559(&Global_83591, 4, 9, 2, 1);
	Function_558(&Global_83591);
	Function_557(&Global_83591 + 276, 4);
	return;
}

void Function_557(int iParam0, int iParam1) //Position: 0x172AD / 94893
{
	(iParam0 + 228)->f_220 = 0;
	Function_538(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_558(int iParam0) //Position: 0x172C5 / 94917
{
	iParam0->f_844 = 0;
	return;
}

void Function_559(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x172D1 / 94929
{
	Function_560(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_560(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x172E9 / 94953
{
	Function_561(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_561(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x17300 / 94976
{
	if (!Function_250(iParam1))
	{
		return;
	}
	Function_562(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_562(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x17323 / 95011
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

void Function_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1734D / 95053
{
	Function_564(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_564(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x17365 / 95077
{
	Function_561(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_565(int iParam0, bool bParam1) //Position: 0x1737A / 95098
{
	Function_569(iParam0);
	Function_569(iParam0 + 228);
	if (bParam1)
	{
		Function_566(iParam0);
	}
	return;
}

void Function_566(int iParam0) //Position: 0x17396 / 95126
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_567(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_567(var uParam0, int iParam1) //Position: 0x173B6 / 95158
{
	Function_568(uParam0, iParam1, 0);
	return;
}

void Function_568(int iParam0, int iParam1, int iParam2) //Position: 0x173C4 / 95172
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_569(int iParam0) //Position: 0x173D5 / 95189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_571(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_570(iParam0, 0.0f);
	return;
}

void Function_570(var uParam0, int iParam1) //Position: 0x17402 / 95234
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_571(int iParam0) //Position: 0x1740E / 95246
{
	Function_562(iParam0, 4294967295, 0, 1);
	return;
}

void Function_572(bool bParam0) //Position: 0x1741C / 95260
{
	int iVar0[4];
	
	SET_CAMERA_FOLLOW_ACTOR(bParam0);
	SET_WEAPONENUM_LOCKED(24, 0);
	SET_WEAPONENUM_LOCKED(23, 0);
	iVar0[0] = 0;
	SET_WEAPONENUM_LOCKED(false, 0);
	iVar0[1] = 22;
	SET_WEAPONENUM_LOCKED(22, 0);
	iVar0[2] = 16;
	SET_WEAPONENUM_LOCKED(16, 0);
	iVar0[3] = 21;
	SET_WEAPONENUM_LOCKED(21, 0);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[0], 0, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[1], 0, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[2], 0, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[3], 0, 1, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 6, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 7, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 10, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 9, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 4, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 5, 45.0f, 0, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	return;
}

bool Function_573(int iParam0) //Position: 0x174F5 / 95477
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_577();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_576(iParam0[iVar03], 8);
		}
		else if (Function_575())
		{
			iVar1 = 1;
			Function_576(iParam0[iVar03], 8);
		}
		Function_576(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_576(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_576(iParam0[iVar03], 2);
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
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_576(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_576(iParam0[iVar03], 2);
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
	Function_574();
	return 1;
}

void Function_574() //Position: 0x17870 / 96368
{
	if (!Function_502(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_575() //Position: 0x178B0 / 96432
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

void Function_576(var uParam0, int iParam1) //Position: 0x178DB / 96475
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_577() //Position: 0x178EC / 96492
{
	if (!Function_502(128))
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

bool Function_578() //Position: 0x1792E / 96558
{
	return "p_gen_crateMultiplayerWeapon01x";
}

bool Function_579() //Position: 0x17956 / 96598
{
	return "p_gen_crateMultiplayerItem01x";
}

bool Function_580() //Position: 0x1797C / 96636
{
	return "p_gen_crateMultiplayerAmmo01x";
}

var Function_581(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x179A2 / 96674
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_582(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_576(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_582(var uParam0, int iParam1, int iParam2) //Position: 0x179DA / 96730
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_576(uParam0[iVar03], 4);
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

var Function_583(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x17A9E / 96926
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_576(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_576(uParam0[iVar03], 8);
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

var Function_584() //Position: 0x17B6E / 97134
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

