//Decompiled with MagicRDR v1.0
//Function Count : 575
//Statics Count : 31
//Natives Count : 650
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
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	var uLocal_14[3] = { 0, 0, 0 };
	struct<45> Local_18 = { 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	float fVar161;
	
	iLocal_11 = 0;
	iLocal_30 = 0;
	fVar0 = -1.0f;
	bVar1 = false;
	while (bVar1 < 51)
	{
		SET_WEAPONENUM_LOCKED(bVar1, 0);
		bVar1++;
	}
	bVar2 = Function_574();
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
	Function_573(&bVar4, bVar3, 3, 0);
	Function_573(&bVar4, 976, 3, 0);
	Function_571(&bVar4, "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", 1, 0);
	Function_571(&bVar4, "$/content/scripting/gringo/CommonScripts/Giveaway_Footlocker", 4, 0);
	Function_571(&bVar4, Function_570(), 0, 0);
	Function_571(&bVar4, Function_569(), 0, 0);
	Function_571(&bVar4, Function_568(), 0, 0);
	Function_571(&bVar4, "p_gen_moneybag03x", 0, 0);
	Function_571(&bVar4, "CTF", 5, 0);
	Function_571(&bVar4, "multiplayer", 10, 0);
	Function_571(&bVar4, "custom/CTF_new", 8, 0);
	while (!Function_563(&bVar4) && !IS_EXITFLAG_SET())
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
	Function_562(bVar47);
	Function_546();
	if (HUD_IS_FADED() && !HUD_IS_FADING())
	{
		HUD_FADE_IN(2.0f, 1065353216);
	}
	UI_SEND_EVENT("loadComplete");
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, false, false));
	Function_544(1);
	iVar48 = 0;
	fVar49 = 0.0f;
	Function_543(24, 0, 0);
	Function_543(23, 0, 0);
	_SET_ACTOR_AMMO_OF_TYPE(bVar47, 5, _GET_MAX_AMMO_AMOUNT(bVar47, 5), 0);
	_SET_ACTOR_AMMO_OF_TYPE(bVar47, 4, _GET_MAX_AMMO_AMOUNT(bVar47, 4), 0);
	if (!NET_IS_MANAGER_INITIALIZED())
	{
		NET_ENABLE_MULTIPLAYER(0);
	}
	Function_542(1);
	bVar50 = !NET_IS_IN_SESSION();
	NET_SCRIPTMSG_REGISTER_HANDLER(70, 90173);
	NET_SCRIPTMSG_REGISTER_HANDLER(71, 89536);
	NET_SCRIPTMSG_REGISTER_HANDLER(73, 89239);
	Function_530();
	Function_529();
	REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_14, 4);
	Function_528(&Local_18 + 32, 1);
	*(&Var55 + 20) = 4;
	*(&Var55 + 100) = 4294967295;
	*(&Var55 + 184) = 27;
	Function_505(&Var55, 0, 0, 0, 0);
	while (!IS_EXITFLAG_SET())
	{
		Function_257();
		iVar53 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
		if (Function_256(iVar53, 3, &uVar51, 0,75f))
		{
			PRINT_BIG("Script Killed", 1084227584, 0, 2, 0);
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
				DESTROY_LAYOUT(bLocal_13);
				Function_252();
			}
			bVar50 = false;
		}
		else
		{
			if (!bVar50)
			{
				bLocal_13 = CREATE_LAYOUT("MPPlayground_layout");
				fVar161 = CREATE_VOLUME_IN_LAYOUT(bLocal_13, "RespawnPoint", 3, 11,328f, 0.0f, 3,576f, 0.0f, 256,108f, 0.0f, 5.0f, 5.0f, 5.0f);
				Function_251(&Var55, fVar161);
				Function_233(bLocal_13);
				Function_230(bLocal_13);
				bVar50 = true;
			}
			if (iLocal_30 != Var55.f_12)
			{
				Var55.f_12 = iLocal_30;
				Function_229(Var55.f_12);
			}
			Function_227(3);
			Function_199();
			Function_182();
			if (IS_BUTTON_PRESSED(iVar53, 14, 1, 0))
			{
				if (Function_181(Local_18.f_32, 1))
				{
					Function_180(&Local_18 + 32, 1);
					HUD_CLEAR_HELP();
					Function_179("Using ATTACH_OBJECTS", 4.0f, 0, 0, 2, 1, 0);
				}
				else
				{
					Function_528(&Local_18 + 32, 1);
					HUD_CLEAR_HELP();
					Function_179("Using ATTACH_OBJECTS_USING_LOCATOR", 4.0f, 0, 0, 2, 1, 0);
				}
			}
			bVar54 = Function_256(iVar53, 8, &uVar52, 0,75f);
			if (bVar54)
			{
				KILL_ACTOR(Function_178());
			}
			Function_32(&Var55);
		}
		WAIT(false);
	}
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	Function_31(Local_18.f_36);
	bVar47 = Function_178();
	RESET_ANIM_SET_FOR_ACTOR(bVar47, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_18.f_44))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_18.f_44);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_18.f_40))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_18.f_40);
	}
	DEREFERENCE_ACTOR(bVar47);
	Function_23(bLocal_13);
	Function_5(&Var55);
	DESTROY_LAYOUT(bLocal_13);
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
	Function_20();
	bVar0 = Function_178();
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
	if (!Function_18(1))
	{
		UI_EXIT("MPSplash");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_17(81920, 0);
	Function_17(8388608, 0);
	Function_6(iParam0);
	if (iParam0->f_100 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
	}
	return;
}

void Function_6(int iParam0) //Position: 0x79E / 1950
{
	Function_13(iParam0);
	Function_8(iParam0, 0);
	Function_7(32, 0, 1);
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x7D8 / 2008
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_528(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_180(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_8(int iParam0, bool bParam1) //Position: 0x800 / 2048
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_9(StackVal, StackVal, Function_12(), *(iParam0 + 72), !HUD_IS_FADED());
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
	if (Function_181(iParam0->f_48, 2))
	{
		Function_180(iParam0 + 48, 2);
	}
	Function_528(iParam0 + 48, 1);
	return;
}

var Function_9(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x891 / 2193
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
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
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

void Function_10(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x9CA / 2506
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

vector3 Function_11(var uParam0, bool bParam1) //Position: 0xA1F / 2591
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_12() //Position: 0xA39 / 2617
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_13(int iParam0) //Position: 0xA68 / 2664
{
	Function_16(iParam0);
	Function_14(1048576);
	return;
}

void Function_14(int iParam0) //Position: 0xA7A / 2682
{
	Function_15(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xAB3 / 2739
{
	Function_180(uParam0, iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0xAC0 / 2752
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_92);
	}
	return;
}

void Function_17(int iParam0, bool bParam1) //Position: 0xAD7 / 2775
{
	if (bParam1)
	{
		Function_528(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_180(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_18(bool bParam0) //Position: 0xB12 / 2834
{
	return Function_19(Global_79336, bParam0);
}

bool Function_19(var uParam0, bool bParam1) //Position: 0xB21 / 2849
{
	return (uParam0 && bParam1) == 0;
}

void Function_20() //Position: 0xB2E / 2862
{
	if (Function_22(8))
	{
		Function_21();
	}
	Function_7(8, 0, 1);
	return;
}

void Function_21() //Position: 0xB46 / 2886
{
	Function_7(32768, 1, 0);
	return;
}

bool Function_22(bool bParam0) //Position: 0xB55 / 2901
{
	return Function_181(Global_76905.f_132, bParam0);
}

void Function_23(bool bParam0) //Position: 0xB66 / 2918
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
		bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_30()));
		if (IS_OBJECTSET_VALID(bVar0))
		{
			bVar1 = GET_OBJECTSET_SIZE(bVar0);
			bVar2 = false;
			while (bVar2 <= bVar1)
			{
				bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar0);
				bVar7 = FIND_OBJECT_IN_OBJECT(bVar6, Function_29());
				if (IS_OBJECT_VALID(bVar7))
				{
					if (DECOR_GET_INT_VERBOSE(bVar7, Function_28(), &uVar3))
					{
						iVar4 = Function_27(uVar3);
						iVar5 = Function_24(uVar3);
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

int Function_24(int iParam0) //Position: 0xBE6 / 3046
{
	return Function_25(iParam0, 32, 16);
}

int Function_25(int iParam0, int iParam1, bool bParam2) //Position: 0xBF4 / 3060
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_26((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && iParam0), bParam2);
}

int Function_26(bool bParam0) //Position: 0xC13 / 3091
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_27(int iParam0) //Position: 0xC1F / 3103
{
	return Function_25(iParam0, 16, 0);
}

var Function_28() //Position: 0xC2D / 3117
{
	return "PackedGrass";
}

var Function_29() //Position: 0xC41 / 3137
{
	return "MPItemGiver";
}

var Function_30() //Position: 0xC55 / 3157
{
	return "PickupsSet";
}

int Function_31(bool bParam0) //Position: 0xC68 / 3176
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

int Function_32(int iParam0) //Position: 0xC7E / 3198
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
	
	bVar0 = Function_178();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	iParam0->f_64 = Function_177((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_176())
	{
		if (bVar1)
		{
			switch (Function_174())
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
	if (Function_173(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_181(iParam0->f_44, 2) || Function_181(iParam0->f_44, 128)))
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
	fVar8 = Function_172();
	if (bVar1)
	{
		bVar9 = Function_171(bVar0);
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
			if ((Function_169(8192) || Function_181(iParam0->f_48, 512)) && !Function_168(1, 1))
			{
				iVar6 = Function_165(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_181(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_528(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_179("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_164(2, NET_GET_NET_TIME());
								Function_161(3, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_160(2));
						if (!Function_168(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_180(iParam0 + 48, 512);
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
					Function_180(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_17(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_168(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_17(8388608, 0);
					}
				}
			}
			if (Function_159(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_181(iParam0->f_44, 16))
					{
						Function_528(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_158(iParam0 + 108, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_180(iParam0 + 48, 32);
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
					Function_157(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_7(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_17(65536, 0);
			Function_17(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_181(iParam0->f_44, 8))
			{
				Function_155(0);
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
			if (Function_154(iParam0 + 108, &Global_78617 + 2648))
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
			Function_149(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_133(iParam0, iParam0->f_12 != 0);
			}
			Function_131(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_131(iParam0, 1);
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
			Function_131(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_181(iParam0->f_44, 512))
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
			Function_131(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_130();
				Function_7(32, 0, 1);
				Function_129();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_131(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_20();
			}
			break;
		
		case 0x00000008:
			if (Function_181(iParam0->f_44, 2))
			{
				if (Function_181(iParam0->f_44, 512))
				{
					if (!Function_181(iParam0->f_48, 4096))
					{
						Function_8(iParam0, 1);
						Function_528(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_168(16384, 1))
						{
							Function_8(iParam0, 0);
							Function_17(16384, 1);
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
					Function_131(iParam0, 1);
				}
			}
			else
			{
				Function_131(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_131(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_128(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
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
				Function_129();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_127();
				Function_20();
				Function_7(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_12(), Function_126(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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
				if (!Function_181(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_528(iParam0 + 48, 8);
				}
				if (Function_121(StackVal, Function_181(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_85(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_181(iParam0->f_48, 32), 1))
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
				if (Function_181(iParam0->f_44, 1))
				{
					Function_180(iParam0 + 44, 1);
				}
				else
				{
					Function_13(iParam0);
					Function_8(iParam0, 0);
				}
				bVar0 = Function_178();
				Function_84(bVar0);
				if (Function_181(iParam0->f_44, 32))
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
			if (!Function_80(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_79(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_181(iParam0->f_44, 8))
				{
					Function_78(iParam0 + 184, 0, 1, 1);
					Function_73(iParam0 + 184);
					Function_65(&bVar0, 0, 0, 0);
					Function_65(&bVar0, 0, 0, 0);
					Function_64(bVar0);
				}
				else
				{
					Function_78(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_63(bVar0);
					vVar10 = { StackVal, StackVal, Function_63(bVar0) };
					bVar13 = Function_62(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_61(bVar13))
					{
						iParam0->f_4 = bVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_57(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_56(&(Global_29008[StackVal]), 4194304);
				}
				Function_55(32);
				*iParam0 = 13;
			}
			if (!Function_181(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
				if (StackVal)
				{
					Function_528(iParam0 + 48, 128);
					Function_180(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_55(32);
				Function_57(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_61(StackVal))
			{
				if (Function_54(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_53(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_53(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_53(&(Global_29008[StackVal]), 4194304))
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
					if (Function_61(bVar14))
					{
						if (StackVal && (!Function_54(bVar14) && !Function_53(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_52(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_51();
			if (!Function_181(iParam0->f_44, 32))
			{
				if (Function_47())
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
						fVar15 = Function_46(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_46(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_46(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_46(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_46(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_46(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_46(bVar0, 46);
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
				if (!Function_181(iParam0->f_44, 64))
				{
					Function_45(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_17(16384, 0);
			Function_43(bVar0, !Function_181(iParam0->f_44, 96));
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
			Function_131(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_129();
			}
			else if (!Function_41())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_34(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_33(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_131(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_131(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_181(iParam0->f_44, 4))
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
			Function_131(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_128(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_131(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_128(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_131(iParam0, 1);
			if (Function_41())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_128(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_33(int iParam0) //Position: 0x1B76 / 7030
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_34(int iParam0) //Position: 0x1B92 / 7058
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_127();
		iVar0 = "";
		if (Function_181(iParam0->f_44, 256))
		{
			if (Function_181(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_40(&Global_78578 + 96))
			{
				if (FABS(Function_35(&Global_78578 + 96)) > 1.0f)
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

var Function_35(int iParam0) //Position: 0x1C83 / 7299
{
	return -Function_36(iParam0);
}

float Function_36(bool bParam0) //Position: 0x1C8F / 7311
{
	if (Function_40(bParam0))
	{
		if (Function_39(bParam0))
		{
			return StackVal;
		}
		Function_37();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_37() //Position: 0x1D60 / 7520
{
	if (!Function_38())
	{
	}
	return;
}

bool Function_38() //Position: 0x1D6D / 7533
{
	return NET_IS_IN_SESSION();
}

bool Function_39(int iParam0) //Position: 0x1D76 / 7542
{
	return Function_181(*iParam0, 2);
}

bool Function_40(bool bParam0) //Position: 0x1D83 / 7555
{
	return Function_181(*bParam0, 1);
}

bool Function_41() //Position: 0x1D90 / 7568
{
	return (HUD_IS_FADED() || Function_42(0));
}

int Function_42(bool bParam0) //Position: 0x1D9E / 7582
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

void Function_43(bool bParam0, int iParam1) //Position: 0x1E42 / 7746
{
	struct<5> Var0;
	
	Function_17(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_44(256))
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

bool Function_44(bool bParam0) //Position: 0x1E98 / 7832
{
	return Function_19(Global_78617.f_52, bParam0);
}

void Function_45(bool bParam0) //Position: 0x1EA9 / 7849
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

int Function_46(bool bParam0, int iParam1) //Position: 0x1EC6 / 7878
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_47() //Position: 0x1ED7 / 7895
{
	return !Function_48();
}

bool Function_48() //Position: 0x1EE1 / 7905
{
	if (Function_50())
	{
		return (Function_49() != 1 || Function_49() != 0);
	}
	return 0;
}

int Function_49() //Position: 0x1EFA / 7930
{
	return Global_79349.f_16;
}

bool Function_50() //Position: 0x1F06 / 7942
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_51() //Position: 0x1F0F / 7951
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_178();
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

void Function_52(bool bParam0) //Position: 0x1F4E / 8014
{
	if (!Function_61(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_56(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_53(var uParam0, int iParam1) //Position: 0x1FA9 / 8105
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_54(bool bParam0) //Position: 0x1FC5 / 8133
{
	if (!Function_61(bParam0))
	{
		return 1;
	}
	return Function_53(&(Global_29008[bParam0]), 4);
}

void Function_55(int iParam0) //Position: 0x1FE1 / 8161
{
	Function_15(&Global_78617 + 52, iParam0);
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x1FF2 / 8178
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(int iParam0, bool bParam1, int iParam2) //Position: 0x2001 / 8193
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
		if (Function_61(Global_29006))
		{
			Function_56(&(Global_29008[Global_29006]), 131072);
			Function_60(&(Global_29008[Global_29006]), 2097152);
			Function_58(Global_29006);
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
				if (Function_53(&(Global_29008[iVar0]), 4) || Function_53(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_60(&(Global_29008[iVar0]), 2097155);
					Function_56(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_50())
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

void Function_58(int iParam0) //Position: 0x210C / 8460
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_59())
			{
				return;
			}
		}
		if (!Function_53(&(Global_29008[iParam0]), 2048))
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

bool Function_59() //Position: 0x218B / 8587
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_53(&(Global_29008[iVar0]), 4) || Function_53(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_60(var uParam0, int iParam1) //Position: 0x21E8 / 8680
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_61(bool bParam0) //Position: 0x21FF / 8703
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_62(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2215 / 8725
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

vector3 Function_63(bool bParam0) //Position: 0x22B0 / 8880
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_64(bool bParam0) //Position: 0x22C1 / 8897
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

var Function_65(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x22F4 / 8948
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
					if (Function_72(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_71(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_70(bVar2))
					{
						if (Function_69(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_72(bVar3, 1))
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
						if (Function_72(bVar3, 1))
						{
							bVar24 = (Function_71(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
							Function_66(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_72(bVar3, 1))
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

void Function_66(var uParam0, var uParam1) //Position: 0x25D7 / 9687
{
	*uParam1 = Function_25(uParam0, Function_67(), 0);
	uParam1->f_4 = Function_25(uParam0, Function_67() + 8, Function_67());
	return;
}

bool Function_67() //Position: 0x25FA / 9722
{
	return Function_68(39);
}

int Function_68(int iParam0) //Position: 0x2605 / 9733
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_69(bool bParam0) //Position: 0x2633 / 9779
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

bool Function_70(bool bParam0) //Position: 0x2655 / 9813
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_71(int iParam0, bool bParam1) //Position: 0x2667 / 9831
{
	if (Function_72(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x2681 / 9857
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_73(int iParam0) //Position: 0x2694 / 9876
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_75(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_12(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_12(), &cVar3, &uVar1))
			{
				Function_66(uVar1, &Var11);
				Function_74(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_74(struct<5> Param0) //Position: 0x270B / 9995
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_70(Param0))
	{
		return;
	}
	bVar0 = Function_178();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_72(bVar1, 1))
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

void Function_75(int iParam0, int iParam1) //Position: 0x277F / 10111
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_178();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_76(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_76(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_76(23, iParam1))
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

bool Function_76(int iParam0, int iParam1) //Position: 0x28FC / 10492
{
	return Function_77(iParam0, iParam1) < 4294967295;
}

int Function_77(int iParam0, int iParam1) //Position: 0x290B / 10507
{
	int iVar0;
	
	if (!Function_70(iParam0))
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

void Function_78(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x293E / 10558
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_178();
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
		Function_74(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_79(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2989 / 10633
{
	float fVar0;
	bool bVar1;
	
	if (Function_50() || !bParam1)
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

bool Function_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2A26 / 10790
{
	var uVar0;
	
	if (bParam1)
	{
		Function_83(&uVar0, 1);
	}
	if (bParam2)
	{
		Function_83(&uVar0, 2);
	}
	if (bParam3)
	{
		Function_83(&uVar0, 4);
	}
	if (bParam4)
	{
		Function_83(&uVar0, 8);
	}
	if (bParam5)
	{
		Function_83(&uVar0, 1024);
	}
	if (bParam7)
	{
		Function_83(&uVar0, 16);
	}
	if (bParam8)
	{
		Function_83(&uVar0, 32);
	}
	if (bParam6)
	{
		Function_83(&uVar0, 1048576);
	}
	return Function_81(bParam0, uVar0);
}

bool Function_81(bool bParam0, int iParam1) //Position: 0x2A95 / 10901
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_82(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_82(iParam1, 64))
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

bool Function_82(var uParam0, int iParam1) //Position: 0x2B6E / 11118
{
	return (uParam0 && iParam1) == 0;
}

void Function_83(var uParam0, int iParam1) //Position: 0x2B7B / 11131
{
	Function_528(uParam0, iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x2B88 / 11144
{
	Function_17(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_85(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x2BA9 / 11177
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_178();
	Function_111();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_110();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_81(bVar0, 3145855);
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
		bVar9 = Function_44(256);
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
		Function_107(bVar0, 0);
		Function_87();
		Function_86(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_62(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_61(bVar14))
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

void Function_86(char* cParam0, vector3 vParam1) //Position: 0x2D20 / 11552
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_87() //Position: 0x2D5E / 11614
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_106(iVar1))
		{
			uVar2 = Function_105(iVar1);
			Function_88(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_88(int iParam0, bool bParam1) //Position: 0x2D90 / 11664
{
	if (!Function_106(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_104(222, Global_26401[iParam0], 0);
		if (Function_103(222) <= 0)
		{
			Function_89(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_89((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_104((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_104(222, bParam1, 0);
	}
	return;
}

int Function_89(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E19 / 11801
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
		Function_102(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_101(iParam0);
	if (bParam2)
	{
		Function_90(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_90(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x30B4 / 12468
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_100(390))), 32);
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
					bVar19 = (Function_99(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_99(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_97(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_94(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_91(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_126(), &Var9);
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

var Function_91(int iParam0) //Position: 0x36E1 / 14049
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_92(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x36F2 / 14066
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_93(char* cParam0, char* cParam1) //Position: 0x37E7 / 14311
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_94(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3800 / 14336
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_96(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_95(Function_96(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_95(int iParam0, int iParam1) //Position: 0x3865 / 14437
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_96(int iParam0, bool bParam1) //Position: 0x3877 / 14455
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_97(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3889 / 14473
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
	if (((Function_98(iParam0) != 19 || Function_98(iParam0) != 17) || Function_98(iParam0) != 10) || Function_98(iParam0) != 9)
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

int Function_98(int iParam0) //Position: 0x39B9 / 14777
{
	return Global_35278[iParam020].f_48;
}

float Function_99(int iParam0) //Position: 0x39C8 / 14792
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_100(int iParam0) //Position: 0x3A01 / 14849
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_101(int iParam0) //Position: 0x3A3E / 14910
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

int Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x3BD8 / 15320
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

int Function_103(int iParam0) //Position: 0x3DF2 / 15858
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_104(int iParam0, bool bParam1, int iParam2) //Position: 0x3E33 / 15923
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
	Function_101(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_90(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_105(int iParam0) //Position: 0x402F / 16431
{
	if (!Function_106(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_106(int iParam0) //Position: 0x4047 / 16455
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_107(bool bParam0, bool bParam1) //Position: 0x405C / 16476
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_109(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_169(8192) && !Function_168(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_48())
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
	if (Function_108())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_108() //Position: 0x415C / 16732
{
	return Function_181(Global_79962, 2048);
}

var Function_109(bool bParam0) //Position: 0x416C / 16748
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

void Function_110() //Position: 0x41A1 / 16801
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_111() //Position: 0x41B6 / 16822
{
	Function_120();
	Function_114();
	Function_112();
	return;
}

void Function_112() //Position: 0x41C5 / 16837
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_113();
	return;
}

void Function_113() //Position: 0x41F9 / 16889
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_114() //Position: 0x420A / 16906
{
	Function_115(&(Global_50170[522]));
	Function_115(&(Global_50170[622]));
	Function_115(&(Global_50170[722]));
	Function_115(&(Global_50170[822]));
	Function_115(&(Global_50170[922]));
	Function_115(&(Global_50170[1022]));
	Function_115(&(Global_50170[1122]));
	return;
}

void Function_115(bool bParam0) //Position: 0x4253 / 16979
{
	Global_56092[*bParam0] = 0;
	Function_116(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_116(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x426D / 17005
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_119(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_118(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_119(iParam0), &cVar0, 2, 2, true);
		Function_117(Function_119(iParam0), 0);
	}
}

void Function_117(bool bParam0, bool bParam1) //Position: 0x431B / 17179
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

struct<16> Function_118(int iParam0) //Position: 0x4340 / 17216
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_119(int iParam0) //Position: 0x4374 / 17268
{
	return Global_50170[iParam022].f_24;
}

void Function_120() //Position: 0x4383 / 17283
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x439C / 17308
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
	Function_125(bParam0);
	Var6 = { StackVal, StackVal, Function_125(bParam0) };
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
			Function_124(bVar32);
			vVar12.f_4 = Function_122(StackVal, StackVal, StackVal, StackVal, vVar3, Function_124(bVar32));
		}
	}
	return Function_85(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_122(vector3 vParam0, vector3 vParam3) //Position: 0x4456 / 17494
{
	var uVar0;
	
	Function_123(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_123(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x4470 / 17520
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_124(bool bParam0) //Position: 0x4493 / 17555
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

vector3 Function_125(bool bParam0) //Position: 0x44BA / 17594
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_126() //Position: 0x44CB / 17611
{
	var uVar0;
	
	return uVar0;
}

void Function_127() //Position: 0x44D3 / 17619
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_128(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x44E8 / 17640
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

void Function_129() //Position: 0x4511 / 17681
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_130() //Position: 0x456B / 17771
{
	if (!Function_22(8))
	{
		Function_21();
	}
	Function_7(8, 1, 1);
	return;
}

void Function_131(int iParam0, int iParam1) //Position: 0x4584 / 17796
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
	if (Function_181(iParam0->f_48, 256) || Function_181(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_181(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_81(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_180(iParam0 + 48, 1024);
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
		Function_132(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_181(iParam0->f_48, 8192))
		{
			Function_528(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_542(1048576);
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

void Function_132(int iParam0) //Position: 0x4775 / 18293
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

void Function_133(int iParam0, int iParam1) //Position: 0x47B6 / 18358
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_178();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_12();
	Function_63(bVar0);
	vVar2 = { StackVal, StackVal, Function_63(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_148(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_148(bVar0));
	}
	else
	{
		Function_148(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_148(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_144(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_528(iParam0 + 48, 256);
	}
	else
	{
		Function_63(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_63(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_136(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_135(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_528(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_134(iParam0->f_112);
	return;
}

void Function_134(int iParam0) //Position: 0x4928 / 18728
{
	Function_110();
	Global_63118 = iParam0;
	return;
}

void Function_135(bool bParam0, bool bParam1) //Position: 0x4936 / 18742
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_136(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x494B / 18763
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_126(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_137(&bVar0, uParam2, uParam3, uParam4);
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

void Function_137(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x49CD / 18893
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_143(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_142(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_141(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_140(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_139(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_138(&bVar0, uParam1, uParam2, uParam3);
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

void Function_138(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4AE8 / 19176
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

void Function_139(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4BFD / 19453
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

void Function_140(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4D16 / 19734
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

void Function_141(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4E20 / 20000
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

void Function_142(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4F26 / 20262
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

void Function_143(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4FD6 / 20438
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

var Function_144(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x508D / 20621
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_126(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_145(&bVar0, uParam2);
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

void Function_145(var uParam0, int iParam1) //Position: 0x5104 / 20740
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_147(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_146(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_146(var uParam0, bool bParam1) //Position: 0x5170 / 20848
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
	Function_148(bParam1);
	vVar3 = { StackVal, StackVal, Function_148(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_124(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_124(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_148(bParam1);
	vVar6 = { StackVal, StackVal, Function_148(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_124(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_124(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_147(var uParam0, bool bParam1) //Position: 0x5232 / 21042
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
	Function_148(bParam1);
	vVar3 = { StackVal, StackVal, Function_148(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_124(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_124(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_148(bParam1);
	vVar6 = { StackVal, StackVal, Function_148(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_124(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_124(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_148(bool bParam0) //Position: 0x52F4 / 21236
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

void Function_149(int iParam0) //Position: 0x531B / 21275
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_181(iParam0->f_48, 2048))
	{
		Function_528(iParam0 + 48, 2048);
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
			if (Function_70(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_150("MPSplashItem.s1"));
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
				if (Function_70(bVar2))
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

var Function_150(int iParam0) //Position: 0x563C / 22076
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

struct<64> Function_151(bool bParam0) //Position: 0x5850 / 22608
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_153();
	}
	if (!Function_152(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_152(bool bParam0) //Position: 0x58AE / 22702
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

struct<64> Function_153() //Position: 0x594F / 22863
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_154(var uParam0, int iParam1) //Position: 0x5960 / 22880
{
	if (Function_159(uParam0, iParam1))
	{
		Function_158(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_155(int iParam0) //Position: 0x597A / 22906
{
	Function_156(&Global_79378, 0, iParam0);
	return;
}

void Function_156(int iParam0, bool bParam1, int iParam2) //Position: 0x598A / 22922
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
	void fVar13;
	
	bVar0 = Function_178();
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

void Function_157(bool bParam0, bool bParam1) //Position: 0x5B7B / 23419
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
			if (Function_70(bVar2))
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

void Function_158(var uParam0, int iParam1) //Position: 0x5BF7 / 23543
{
	*uParam0 = *iParam1;
	return;
}

bool Function_159(var uParam0, int iParam1) //Position: 0x5C03 / 23555
{
	return *uParam0 == *iParam1;
}

float Function_160(int iParam0) //Position: 0x5C10 / 23568
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_161(var uParam0, int iParam1) //Position: 0x5C20 / 23584
{
	Function_162(uParam0, (Function_163(uParam0) + iParam1));
	return;
}

void Function_162(int iParam0, int iParam1) //Position: 0x5C33 / 23603
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_163(int iParam0) //Position: 0x5C5C / 23644
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_164(int iParam0, int iParam1) //Position: 0x5C6C / 23660
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0x5C95 / 23701
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_152(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_166(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_166(bool bParam0, int iParam1, bool bParam2) //Position: 0x5CDC / 23772
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_168(iParam1, bParam2);
	}
	if (!Function_152(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_167(iParam1), 64);
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

var Function_167(int iParam0) //Position: 0x5D5D / 23901
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

bool Function_168(int iParam0, bool bParam1) //Position: 0x5FE6 / 24550
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_169(int iParam0) //Position: 0x6006 / 24582
{
	return Function_170(&Global_79349, iParam0);
}

int Function_170(var uParam0, bool bParam1) //Position: 0x6015 / 24597
{
	return Function_181(uParam0->f_44, bParam1);
}

int Function_171(int iParam0) //Position: 0x6024 / 24612
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_172() //Position: 0x603A / 24634
{
	if (Function_181(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_173(bool bParam0) //Position: 0x605A / 24666
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_174() //Position: 0x606C / 24684
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_175(GET_LOCAL_SLOT(), 1, 0);
}

int Function_175(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6083 / 24707
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_152(bParam0))
			{
				if (!Function_166(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_176() //Position: 0x60C7 / 24775
{
	return Function_169(2);
}

var Function_177(float fParam0, float fParam1) //Position: 0x60D1 / 24785
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool Function_178() //Position: 0x60E4 / 24804
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_179(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x60F9 / 24825
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_180(int iParam0, int iParam1) //Position: 0x6144 / 24900
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_181(bool bParam0, bool bParam1) //Position: 0x6157 / 24919
{
	return (bParam0 && bParam1) == 0;
}

void Function_182() //Position: 0x6164 / 24932
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
	bVar1 = Function_198();
	bVar3 = GET_OBJECTSET_SIZE(bVar1);
	fVar4 = GET_CURRENT_GAME_TIME();
	bVar2 = false;
	while (bVar2 <= bVar3)
	{
		bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar1);
		if (IS_OBJECT_VALID(bVar11))
		{
			if (DECOR_GET_FLOAT_VERBOSE(bVar11, Function_197(), &fVar0))
			{
				if (DECOR_GET_INT_VERBOSE(bVar11, Function_196(), &uVar7))
				{
					iVar5 = Function_194(uVar7);
					iVar6 = 0;
					if (iVar5 == 1)
					{
						if (DECOR_GET_INT_VERBOSE(bVar11, Function_193(), &uVar8))
						{
							iVar6 = Function_192(uVar8);
						}
					}
					if (fVar4 - fVar0) <= Function_191(iVar5, iVar6)
					{
						fVar14 = GRINGO_QUERY_FLOAT(GET_GRINGO_FROM_OBJECT(bVar11), "UseCase", "ActivationRadius", &uVar10);
						fVar14 = (fVar14 + 1.0f);
						Function_124(bVar11);
						if (Function_189(StackVal, StackVal, Function_124(bVar11), &uVar9, 0) <= fVar14)
						{
							bVar15 = GET_OBJECT_OWNER(bVar11);
							PLAY_SIMPLE_PROP_ANIMATION(bVar15, "crateMultiplayer_close", 0, 0, 1f, 0);
							RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar15, "LOCKER_OPEN_QUICK_MASTER"));
							DECOR_REMOVE(bVar11, Function_197());
							REMOVE_OBJECT_FROM_OBJECTSET(bVar11, bVar1);
							bVar3 = GET_OBJECTSET_SIZE(bVar1);
							bVar12 = Function_188(uVar7);
							bVar13 = Function_187(uVar7);
							if (bVar12 || bVar13)
							{
								Function_183(bVar15, bVar11, iVar5, bVar12, bVar13);
							}
						}
						else
						{
							DECOR_SET_FLOAT(bVar11, Function_197(), (fVar0 + 1.0f));
						}
					}
				}
			}
		}
		bVar2++;
	}
	return;
}

void Function_183(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x62D1 / 25297
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_193(), &uVar5))
				{
					Function_66(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_186();
				vVar0 = { StackVal, StackVal, Function_186() };
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
				Function_185();
				vVar0 = { StackVal, StackVal, Function_185() };
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
				Function_184();
				vVar0 = { StackVal, StackVal, Function_184() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_184() //Position: 0x63F7 / 25591
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_185() //Position: 0x6408 / 25608
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_186() //Position: 0x6419 / 25625
{
	return 0.0f, 0,158f, -0,163f;
}

bool Function_187(bool bParam0) //Position: 0x642A / 25642
{
	return Function_181(bParam0, 2);
}

bool Function_188(bool bParam0) //Position: 0x6436 / 25654
{
	return Function_181(bParam0, 1);
}

float Function_189(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x6442 / 25666
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
				Function_190(bVar6, &vVar2);
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

void Function_190(bool bParam0, bool bParam1) //Position: 0x64C9 / 25801
{
	GET_POSITION(bParam0, bParam1);
	return;
}

float Function_191(int iParam0, int iParam1) //Position: 0x64D6 / 25814
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

int Function_192(int iParam0) //Position: 0x6566 / 25958
{
	return Function_25(iParam0, 32, Function_67() + 8);
}

var Function_193() //Position: 0x6578 / 25976
{
	return "PackedWeapon";
}

int Function_194(bool bParam0) //Position: 0x658D / 25997
{
	return Function_25(bParam0, Function_195() + 2, 2);
}

int Function_195() //Position: 0x659E / 26014
{
	return Function_68(6);
}

var Function_196() //Position: 0x65A8 / 26024
{
	return "PackedMetadata";
}

var Function_197() //Position: 0x65BF / 26047
{
	return "nResetTime";
}

var Function_198() //Position: 0x65D1 / 26065
{
	if (!IS_OBJECTSET_VALID(Global_83590))
	{
		Global_83590 = CREATE_OBJECTSET_IN_LAYOUT("gMP_OpenedPickupSet", Function_12(), 12, 1);
	}
	return Global_83590;
}

void Function_199() //Position: 0x6609 / 26121
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	struct<5> Var14;
	
	Function_220(Local_18.f_36);
	bVar0 = Function_178();
	if (Function_181(Local_18.f_32, 8))
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,1f, "DROPPING BAG!", 1.0f, 0.0f, 0.0f, 1.0f);
	}
	bVar2 = Function_80(bVar0, 1, 1, 1, 1, 0, 0, 0, 0);
	if (bVar2)
	{
		bVar2 = !IS_ACTOR_JUMPING(bVar0);
	}
	if (bVar2)
	{
		bVar2 = !IS_ACTOR_RAGDOLL(bVar0);
	}
	Function_218(bLocal_12, FIND_NAMED_LAYOUT("MPPlayground_layout"), 28578);
	if (IS_ACTOR_DEAD(bVar0) && Local_18 < 0)
	{
		while (Local_18 >= 0)
		{
			Function_180(&Local_18 + 32, 8);
			Local_18 = (Local_18 - 1);
			iVar1 = (*&Local_18 + 4)[Local_18];
			if (Local_18 == 1)
			{
				Function_213((*&Local_18 + 4)[0], 1);
			}
			Function_212(iVar1);
			Function_211((*&Local_18 + 16)[iVar1], bVar0);
		}
	}
	if (Local_18 > 2 && bVar2)
	{
		if (!Function_210(bVar0) && IS_ACTOR_ON_GROUND(bVar0))
		{
			if (Local_18 == 0)
			{
				vVar6 = { -0,317f, 0.0f, -0,364f };
			}
			else
			{
				vVar6 = { 0,313f, 0.0f, -0,387f };
			}
			if (!GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vVar6, &vVar3))
			{
				Function_190(bVar0, &vVar3);
			}
			iVar9 = 4294967295;
			fVar11 = 2,5f;
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!Function_208(iVar1, 4294967294))
				{
					if (IS_OBJECT_VALID((*&Local_18 + 16)[iVar1]))
					{
						fVar10 = Function_205(StackVal, StackVal, (*&Local_18 + 16)[iVar1], vVar3);
						if (fVar10 > 2.0f)
						{
							if (iVar9 != 4294967295 || fVar10 > fVar11)
							{
								if (Local_18 == 0)
								{
									iVar9 = iVar1;
									fVar11 = fVar10;
								}
								else if ((*&Local_18 + 4)[0] != iVar1)
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
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_18.f_40))
				{
					Local_18.f_40 = ADD_SCRIPT_USE_CONTEXT("CTF_action_grab", 100, 4, false, 0, 0, 0, 4294967295, 0);
				}
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_18.f_40))
				{
					Function_204(iVar9);
					Function_203(&Local_18 + 40);
				}
			}
			else
			{
				Function_203(&Local_18 + 40);
			}
		}
		else
		{
			Function_203(&Local_18 + 40);
		}
	}
	else
	{
		Function_203(&Local_18 + 40);
	}
	if (Function_181(Local_18.f_32, 16) && !IS_BUTTON_DOWN(Function_202(), 4, 1, false))
	{
		Function_180(&Local_18 + 32, 16);
	}
	if (Local_18 < 0 && bVar2)
	{
		if (!Function_181(Local_18.f_32, 8))
		{
			if (!Function_210(bVar0))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_18.f_44))
				{
					Local_18.f_44 = ADD_SCRIPT_USE_CONTEXT("CTF_action_drop", 4294967286, 4, false, 0, 0, 0, 4294967295, 0);
				}
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_18.f_44) || Function_181(Local_18.f_32, 16))
				{
					Function_528(&Local_18 + 32, 16);
					Function_203(&Local_18 + 44);
					if (Local_18 == 2)
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "CTF_new/Two/right_pst");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "CTF_new/One/left_pst");
					}
					Function_528(&Local_18 + 32, 8);
					Function_201((*&Local_18 + 4)[0]);
					if (Local_18 == 2)
					{
						Function_201((*&Local_18 + 4)[1]);
					}
				}
				else
				{
					Function_213((*&Local_18 + 4)[0], 1);
					if (Local_18 == 2)
					{
						Function_213((*&Local_18 + 4)[1], 0);
					}
				}
			}
			else
			{
				Function_203(&Local_18 + 44);
			}
		}
		else if (!Function_200(bVar0))
		{
			Function_180(&Local_18 + 32, 8);
			Local_18 = (Local_18 - 1);
			iVar1 = (*&Local_18 + 4)[Local_18];
			if (Local_18 == 1)
			{
				Function_213((*&Local_18 + 4)[0], 1);
			}
			Function_212(iVar1);
			Function_211((*&Local_18 + 16)[iVar1], bVar0);
			bVar12 = GET_OBJECT_ANIMATOR_ON_OBJECT((*&Local_18 + 16)[iVar1]);
			if (IS_OBJECT_ANIMATOR_VALID(bVar12))
			{
				DESTROY_OBJECT_ANIMATOR(bVar12);
			}
			bVar13 = GET_PHYSINST_FROM_OBJECT((*&Local_18 + 16)[iVar1]);
			if (IS_PHYSINST_VALID(bVar13))
			{
				if (IS_PHYSINST_READY(bVar13))
				{
					GET_ACTOR_VELOCITY(bVar0, &Var14);
					GET_ACTOR_AXIS(bVar0, &vVar17, 0);
					if (Local_18 == 0)
					{
						Var14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar17, Var14, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) };
					}
					else
					{
						Var14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar17, Var14, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) };
					}
					Var14.f_4 = (StackVal - 3.0f);
					if (SET_PROP_VELOCITY(bVar13, &Var14))
					{
					}
					ACTIVATE_PHYSINST(bVar13);
					DRAW_STRING_CURRENT_FONT(0,6f, 0,6f, "PUSH!", 1.0f, 0.0f, 0.0f, 1.0f);
				}
			}
		}
	}
	else
	{
		Function_203(&Local_18 + 44);
	}
	return;
}

bool Function_200(bool bParam0) //Position: 0x6A49 / 27209
{
	return (IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/One/left_pst") || IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/Two/right_pst"));
}

void Function_201(int iParam0) //Position: 0x6A89 / 27273
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID((*&Local_18 + 16)[iParam0]))
	{
		return;
	}
	bVar0 = _GET_OBJECT_ATTACHMENT((*&Local_18 + 16)[iParam0]);
	SET_ATTACHMENT_LOCAL_OFFSET(bVar0, 0.0f, 0.0f, 0.0f);
	SET_ATTACHMENT_LOCAL_ROTATION(bVar0, 0.0f, 0.0f, 0.0f);
	return;
}

int Function_202() //Position: 0x6ABC / 27324
{
	bool bVar0;
	
	bVar0 = Function_178();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_203(int iParam0) //Position: 0x6AD6 / 27350
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	return;
}

void Function_204(int iParam0) //Position: 0x6AEB / 27371
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam0;
	NET_LOG(true, "CTF Test", "SENDing ask. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	NET_SCRIPTMSG_SEND(3, 70, &vVar0, 3, 1);
	return;
}

var Function_205(bool bParam0, vector3 vParam1) //Position: 0x6B5C / 27484
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!Function_207(StackVal, StackVal, vParam1))
		{
			Function_206(bParam0);
			vVar0 = { StackVal, StackVal, Function_206(bParam0) };
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

vector3 Function_206(bool bParam0) //Position: 0x6C69 / 27753
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

bool Function_207(vector3 vParam0) //Position: 0x6CD5 / 27861
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_208(int iParam0, int iParam1) //Position: 0x6CED / 27885
{
	if (iParam0 > 0 || iParam0 <= 3)
	{
		SCRIPT_BREAKPOINT("ABOUT TO ARRAY OVERRUN IN CTF_IS_BAG_CARRIED!");
	}
	if (iParam1 == 4294967294 && Function_209(iParam0) != iParam1)
	{
		return 1;
	}
	return Function_209(iParam0) == 4294967294;
}

int Function_209(int iParam0) //Position: 0x6D4F / 27983
{
	if (iParam0 > 0 || iParam0 <= 3)
	{
		SCRIPT_BREAKPOINT("ABOUT TO ARRAY OVERRUN IN CTF_WHO_HAS_BAG!");
	}
	return uLocal_14[iParam0];
}

bool Function_210(bool bParam0) //Position: 0x6D97 / 28055
{
	return (IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/One/left_pre") || IS_ACTION_NODE_PLAYING(bParam0, "CTF_new/Two/right_pre"));
}

void Function_211(bool bParam0, bool bParam1) //Position: 0x6DD7 / 28119
{
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), true);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 1);
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	return;
}

void Function_212(int iParam0) //Position: 0x6DF9 / 28153
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam0;
	NET_LOG(true, "CTF Test", "SENDing drop. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	NET_SCRIPTMSG_SEND(3, 73, &vVar0, 3, 1);
	return;
}

void Function_213(int iParam0, bool bParam1) //Position: 0x6E6B / 28267
{
	var uVar0;
	
	if (!IS_OBJECT_VALID((*&Local_18 + 16)[iParam0]))
	{
		return;
	}
	uVar0 = _GET_OBJECT_ATTACHMENT((*&Local_18 + 16)[iParam0]);
	if (bParam1)
	{
		Function_217();
		SET_ATTACHMENT_LOCAL_OFFSET(uVar0, Function_217());
		Function_216();
		SET_ATTACHMENT_LOCAL_ROTATION(bVar0, Function_216());
	}
	else
	{
		Function_215();
		SET_ATTACHMENT_LOCAL_OFFSET(bVar0, Function_215());
		Function_214();
		SET_ATTACHMENT_LOCAL_ROTATION(bVar0, Function_214());
	}
	return;
}

vector3 Function_214() //Position: 0x6EB6 / 28342
{
	return -7,321f, -188,968f, -16,4762f;
}

vector3 Function_215() //Position: 0x6ECB / 28363
{
	return 0,0398f, -0,1588f, -0,0272f;
}

vector3 Function_216() //Position: 0x6EE0 / 28384
{
	return -6,8245f, 182,8487f, 18,7832f;
}

vector3 Function_217() //Position: 0x6EF5 / 28405
{
	return -0,0362f, -0,1616f, -0,0356f;
}

int Function_218(bool bParam0, bool bParam1, int iParam2) //Position: 0x6F0A / 28426
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

void Function_219(bool bParam0) //Position: 0x6FA2 / 28578
{
	bool bVar0;
	
	bVar0 = NET_OBJECT_GET_SCRIPT_INT(bParam0);
	if (bVar0 <= 600 && bVar0 >= 620)
	{
		bVar0 = (bVar0 - 600);
		PRINTSTRING("@SPECIAL-bagrecv-objectScriptInt[");
		PRINTINT(bVar0);
		PRINTSTRING("]\n");
		(*&Local_18 + 16)[bVar0] = bParam0;
	}
	return;
}

void Function_220(bool bParam0) //Position: 0x7005 / 28677
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = Function_226(bParam0, &bVar0);
	while (IS_OBJECT_VALID(bVar0))
	{
		switch (iVar1)
		{
			case 0x00000045:
				Function_225(bVar0);
				break;
			
			case 0x0000004C:
				Function_224(bVar0);
				break;
		}
		iVar1 = Function_226(bParam0, &bVar0);
	}
	if (NET_IS_SESSION_HOST())
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			bVar3 = Function_209(iVar2);
			if (bVar3 != 4294967294)
			{
				if (!IS_SLOT_VALID(bVar3))
				{
					Function_222(iVar2);
				}
			}
			iVar2++;
		}
	}
	Function_221(bParam0);
	return;
}

void Function_221(bool bParam0) //Position: 0x7085 / 28805
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_222(int iParam0) //Position: 0x7098 / 28824
{
	Function_223(iParam0, 4294967294);
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0x70A6 / 28838
{
	uLocal_14[iParam0] = iParam1;
	return;
}

void Function_224(bool bParam0) //Position: 0x70B4 / 28852
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	iVar2 = 0;
	while (iVar2 <= Local_18)
	{
		if ((*&Local_18 + 16)[(*&Local_18 + 4)[iVar2]] == bVar1)
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

void Function_225(bool bParam0) //Position: 0x7103 / 28931
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
				if (Function_208(iVar1, uVar0))
				{
					Function_222(iVar1);
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_226(bool bParam0, bool bParam1) //Position: 0x7141 / 28993
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

void Function_227(int iParam0) //Position: 0x7180 / 29056
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
			Function_228(iParam0);
		}
	}
	return;
}

void Function_228(int iParam0) //Position: 0x71B2 / 29106
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_229(bool bParam0) //Position: 0x71C1 / 29121
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_BIG_TEXT_QUEUE();
	switch (bParam0)
	{
		case 0x00000000:
			PRINT_BIG("Short!", 1084227584, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("Medium!", 1084227584, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("Long!", 1084227584, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("Really Long!", 1084227584, 0, 2, 0);
			break;
	}
	return;
}

void Function_230(bool bParam0) //Position: 0x724E / 29262
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<8> Var7;
	bool bVar15;
	
	bLocal_12 = CREATE_EVENT_TRAP("bag_rep", 70, bParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_12, 1);
	if (NET_IS_SESSION_HOST())
	{
		bVar0 = false;
		while (bVar0 <= 3)
		{
			Function_222(bVar0);
			bVar0++;
		}
		vVar1 = { -2.0f, 0.0f, -1.0f };
		NET_OBJECT_REPLICATION_MODE_START(17, 5);
		bVar0 = false;
		while (bVar0 <= 3)
		{
			vVar4 = { StackVal, StackVal, Vector(vVar1, StackVal, StackVal) + Vector(-3.0f, 0.0f, IntToFloat((3 * (bVar0 - 1)))) };
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("MoneyBag", I2STR(bVar0)) };
			(*&Local_18 + 16)[bVar0] = CREATE_PROP_IN_LAYOUT(bParam0, &Var7, "$/fragments/p_gen_moneybag03x", vVar4, 0.0f, 0.0f, 0.0f, 0);
			if (IS_OBJECT_VALID((*&Local_18 + 16)[bVar0]))
			{
				UNK_0x1306549E((*&Local_18 + 16)[bVar0], bParam0);
				bVar15 = (600 + bVar0);
				NET_OBJECT_SET_SCRIPT_INT((*&Local_18 + 16)[bVar0], bVar15);
				PRINTSTRING("@SPECIAL-objectScriptInt[");
				PRINTINT(bVar15);
				PRINTSTRING("]\n");
			}
			ADD_BLIP_FOR_OBJECT((*&Local_18 + 16)[bVar0], 374, 0f, 2, 0);
			bVar0++;
		}
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Local_18.f_36 = Function_231("Queue_CTFPlayground");
	return;
}

var Function_231(bool bParam0) //Position: 0x73A2 / 29602
{
	bool bVar0;
	
	bVar0 = Function_232();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_232() //Position: 0x73B6 / 29622
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_233(bool bParam0) //Position: 0x73F2 / 29682
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", bParam0, 8, 0);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Ammo", -8,93f, 0.0f, -6,058f, 0.0f, 87,38193f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Health", -10,663f, 0.0f, 0,443f, 0.0f, -90,05033f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Deadeye", -5,852f, 0.0f, 7,093f, 0.0f, -179,1425f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "npickup_XP", -0,032f, 0.0f, 4,817f, 0.0f, -179,4082f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Horse", 7,283f, 0.0f, 0,972f, 0.0f, -155,5765f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Weapon", 7,872f, 0.0f, -5,522f, 0.0f, 44,03856f, 0.0f);
	DECOR_SET_INT(bVar0, "type", true);
	DECOR_SET_INT(bVar0, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Weapon2", 1,342f, 0.0f, -11,051f, 0.0f, 44,03856f, 0.0f);
	DECOR_SET_INT(bVar0, "type", true);
	DECOR_SET_INT(bVar0, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, "pickup_Deadeye2", 31,861f, 0.0f, -32,477f, 0.0f, -179,1425f, 0.0f);
	DECOR_SET_INT(bVar0, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar0, bVar1);
	Function_234(bParam0, &Global_83591 + 276, 1, 1);
	return;
}

int Function_234(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x762F / 30255
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_250()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_30()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_96(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_249(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_124(bVar14);
				vVar7 = { StackVal, StackVal, Function_124(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_148(bVar14);
				vVar10 = { StackVal, StackVal, Function_148(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_247(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_246());
							if (Function_245(bVar5))
							{
								if (Function_70((*iParam1 + 228)[bVar52]))
								{
									Function_238(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_236(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_238(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_235(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_238(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_235() //Position: 0x7863 / 30819
{
	return "XPBonus";
}

void Function_236(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x7873 / 30835
{
	bool bVar0;
	
	if (Function_70(Param1))
	{
		bVar0 = Function_237(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_193(), bVar0);
	}
}

var Function_237(struct<5> Param0) //Position: 0x7899 / 30873
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_67())) || SHIFT_LEFT(bParam2, Function_67() + 8));
}

void Function_238(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x78B7 / 30903
{
	Function_241(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_183(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_196(), Function_240(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_28(), Function_239(iParam13, iParam14));
}

var Function_239(var uParam0, bool bParam1) //Position: 0x7908 / 30984
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_240(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7918 / 31000
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

int Function_241(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x793D / 31037
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_570();
			Function_185();
			vVar1 = { StackVal, StackVal, Function_185() };
			break;
		
		case 0x00000001:
			bVar0 = Function_568();
			Function_186();
			vVar1 = { StackVal, StackVal, Function_186() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_569();
			Function_184();
			vVar1 = { StackVal, StackVal, Function_184() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_244(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_242(Function_244()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_29(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

struct<32> Function_242(bool bParam0) //Position: 0x7A41 / 31297
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_243("0", &cVar8, ""), 4);
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

struct<32> Function_243(char* cParam0, char* cParam1, char* cParam2) //Position: 0x7AAB / 31403
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_244() //Position: 0x7ACA / 31434
{
	return "PBox_";
}

bool Function_245(bool bParam0) //Position: 0x7AD8 / 31448
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_246() //Position: 0x7AE8 / 31464
{
	return "ID";
}

bool Function_247(bool bParam0, int iParam1) //Position: 0x7AF3 / 31475
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_19((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_248())
			{
				return 0;
			}
			return !Function_19((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_19((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_248() //Position: 0x7B48 / 31560
{
	return Function_181(Global_79962, 1024);
}

var Function_249() //Position: 0x7B58 / 31576
{
	return "Type";
}

var Function_250() //Position: 0x7B65 / 31589
{
	return "PickupFlagsSet";
}

void Function_251(var uParam0, bool bParam1) //Position: 0x7B7C / 31612
{
	if (IS_VOLUME_VALID(bParam1))
	{
		uParam0->f_8 = bParam1;
	}
	return;
}

void Function_252() //Position: 0x7B93 / 31635
{
	struct<9> Var0;
	
	Function_255(&vVar0);
	vVar0.f_8 = 4294967293;
	Function_253(&vVar0);
	return;
}

var Function_253(int iParam0) //Position: 0x7BAB / 31659
{
	Function_254(iParam0);
	if (iParam0->f_36)
	{
		UNK_0xC0849D70();
	}
	return NET_SESSION_QUICK_JOIN_NATIVE(iParam0->f_24);
}

void Function_254(int iParam0) //Position: 0x7BC7 / 31687
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

void Function_255(int iParam0) //Position: 0x7C21 / 31777
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

bool Function_256(int iParam0, int iParam1, var uParam2, float fParam3) //Position: 0x7C61 / 31841
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

void Function_257() //Position: 0x7C9C / 31900
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_504(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_502(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_501(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_500(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_499(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_497(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_494(bVar0))
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
	if (Function_484(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_482(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_477(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_476(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_475(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_472(bVar0))
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
	if (Function_459(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_458(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_455(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_454(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_453(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_452(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_451(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_450(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_448(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_444(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_443(bVar0))
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
	if (Function_422(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_421(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_420(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_419(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_418(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_417(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_416(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_415(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_414(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_413(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_411(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_408(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_404(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_403(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_275(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_274(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_273(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_266(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_265(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_264(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_263(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_262(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_261(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_258(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_258(bool bParam0) //Position: 0x7F68 / 32616
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_259(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_259(bool bParam0, bool bParam1, int iParam2) //Position: 0x7F8D / 32653
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_260(bParam0), Function_178()) == 0)
		{
			ADD_ITEM(Function_260(bParam0), Function_178(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_260(bParam0), Function_178(), iParam2);
	return 1;
}

var Function_260(bool bParam0) //Position: 0x7FD8 / 32728
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

bool Function_261(bool bParam0) //Position: 0x80DB / 32987
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

bool Function_262(bool bParam0) //Position: 0x8152 / 33106
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_263(bool bParam0) //Position: 0x8181 / 33153
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_57(1, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_264(bool bParam0) //Position: 0x81A8 / 33192
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

bool Function_265(bool bParam0) //Position: 0x828A / 33418
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

bool Function_266(bool bParam0) //Position: 0x8337 / 33591
{
	char* cVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(cVar0);
			Function_267(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_267(int iParam0, bool bParam1) //Position: 0x8374 / 33652
{
	bool bVar0;
	int iVar1;
	
	Function_272(iParam0, bParam1, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_268();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_268() //Position: 0x8500 / 34048
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
	Function_269();
	return 0;
}

void Function_269() //Position: 0x859F / 34207
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
		Function_270(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_270(int iParam0) //Position: 0x864E / 34382
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

var Function_271(int iParam0, int iParam1) //Position: 0x86AC / 34476
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

int Function_272(int iParam0, bool bParam1, int iParam2) //Position: 0x86ED / 34541
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
	Function_102(iParam0, bParam1, 1);
	Function_101(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_90(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_273(bool bParam0) //Position: 0x88F7 / 35063
{
	char* cVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(cVar0);
			Function_267(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_274(bool bParam0) //Position: 0x892E / 35118
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

bool Function_275(bool bParam0) //Position: 0x8980 / 35200
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
					Function_276(Function_398(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_276(Function_398(0, 24, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_276(Function_398(0, 12, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 13, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_276(Function_398(0, 8, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 9, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 23, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_276(Function_398(0, 10, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 11, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 17, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_276(Function_398(0, 18, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 19, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_276(Function_398(0, 2, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 3, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 22, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 6, 1), 0, 1, 1, 0);
					Function_276(Function_398(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_276(Function_398(1, 30, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 33, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 32, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_276(Function_398(1, 34, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_276(Function_398(1, 27, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 26, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 28, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 29, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_276(Function_398(1, 39, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 37, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 38, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 41, 1), 0, 1, 1, 0);
					Function_276(Function_398(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_276(Function_398(2, 45, 1), 0, 1, 1, 0);
					Function_276(Function_398(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_276(Function_398(2, 43, 1), 0, 1, 1, 0);
					Function_276(Function_398(2, 47, 1), 0, 1, 1, 0);
					Function_276(Function_398(2, 48, 1), 0, 1, 1, 0);
					Function_276(Function_398(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_276(Function_398(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_276(Function_398(3, 49, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 55, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 56, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 52, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 53, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 54, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 50, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 51, 1), 0, 1, 1, 0);
					Function_276(Function_398(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_276(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x8E18 / 36376
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_397(12);
	Function_395(2);
	Function_393((15 - Function_394(105)));
	if (Function_392(bParam0) == 1)
	{
		iVar2 = Function_391(bParam0);
		Function_385(&(Global_3422[iVar240]));
		Function_384(4194304);
		if (bParam3)
		{
			Function_346(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_341(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_346(iVar2, &uVar0, 0);
		}
		bVar1 = Function_340();
		if (bParam1)
		{
			Function_328(iVar2, bParam0, bVar1);
			Function_327();
		}
	}
	Function_289(bParam0, bParam1, iParam2, bVar1);
	if (Function_392(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_282(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_392(bParam0) == 1)
		{
			iVar2 = Function_391(bParam0);
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
	Function_277();
}

void Function_277() //Position: 0x8F05 / 36613
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_278(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_278(int iParam0, bool bParam1) //Position: 0x8F35 / 36661
{
	int iVar0;
	
	iVar0 = Function_280(iParam0);
	if (!Function_279(iVar0))
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

bool Function_279(int iParam0) //Position: 0x8F72 / 36722
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_280(int iParam0) //Position: 0x8F89 / 36745
{
	if (!Function_281(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_281(int iParam0) //Position: 0x8FA3 / 36771
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_282(int iParam0, bool bParam1) //Position: 0x8FB9 / 36793
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
							Function_283(Global_34573, 0x1000000, 3, 0);
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
							Function_283(Global_34573, 0x1000000, 3, 0);
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
							Function_283(Global_34573, 0x1000000, 3, 0);
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
							Function_283(Global_34573, 0x1000000, 3, 0);
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
							Function_283(Global_34573, 0x1000000, 3, 0);
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
							Function_283(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_282(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_282(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_282(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_282(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_282(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_282(57, 0);
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

void Function_283(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x92B0 / 37552
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_285(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_284(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_284(char* cParam0, int iParam1) //Position: 0x931C / 37660
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

bool Function_285(bool bParam0, var uParam1, int iParam2) //Position: 0x9353 / 37715
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
		if (Function_288(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_287(uVar0))
		{
			case 0x00000002:
				if (!Function_286(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_286(var uParam0, int iParam1) //Position: 0x93CB / 37835
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_287(char* cParam0) //Position: 0x93DE / 37854
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

int Function_288(int iParam0) //Position: 0x947F / 38015
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_180(&iVar1, 2147483648);
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

void Function_289(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x94BC / 38076
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_325(bParam0))
	{
		Function_323();
		return;
	}
	iVar0 = Function_392(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_391(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_321(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_317();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_315("DEED_COMPLETE", bParam0);
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
			Function_310(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
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
						switch (Function_391(bParam0))
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
			Function_292(1);
			Function_291(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_290(bParam0, &Var14);
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

void Function_290(int iParam0, int iParam1) //Position: 0x96CE / 38606
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_291(bool bParam0, int iParam1) //Position: 0x9708 / 38664
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_50())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_292(bool bParam0) //Position: 0x974A / 38730
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_304();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_293();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_180(&Global_63095, 1);
		Function_180(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_293() //Position: 0x979B / 38811
{
	Function_303();
	Function_302();
	Function_302();
	Function_301();
	Function_301();
	Function_300();
	Function_300();
	Function_299();
	Function_299();
	if (!Function_50())
	{
		Function_298();
		Function_297();
		Function_296();
		Function_295();
	}
	Function_294();
	return;
}

void Function_294() //Position: 0x97CE / 38862
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

void Function_295() //Position: 0x98D4 / 39124
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

void Function_296() //Position: 0x9907 / 39175
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

void Function_297() //Position: 0x9A95 / 39573
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

void Function_298() //Position: 0x9C49 / 40009
{
	Function_156(&Global_28260, 1, 0);
	return;
}

struct<8> Function_299() //Position: 0x9C57 / 40023
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
				iVar2 = ((Function_103((50 + iVar4)) + Function_103((183 + iVar4))) + Function_103((90 + iVar4)));
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
	Function_89(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_300() //Position: 0x9CF2 / 40178
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
		iVar2 = ((Function_103((50 + iVar3) + 15) + Function_103((183 + iVar3) + 15)) + Function_103((90 + iVar3) + 15));
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
	Function_89(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_301() //Position: 0x9D7B / 40315
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
			iVar2 = ((Function_103((50 + iVar3) + 8) + Function_103((183 + iVar3) + 8)) + Function_103((90 + iVar3) + 8));
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
	Function_89(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_302() //Position: 0x9E12 / 40466
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
		iVar2 = ((Function_103((50 + iVar3)) + Function_103((183 + iVar3))) + Function_103((90 + iVar3)));
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
	Function_89(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_303() //Position: 0x9E91 / 40593
{
	Function_272(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_89(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_304() //Position: 0x9EB7 / 40631
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_305(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_305(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_207(StackVal, StackVal, vVar0))
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

vector3 Function_305(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9F58 / 40792
{
	int iVar0;
	
	iVar0 = Function_308(uParam2, uParam3);
	if (Function_307(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_528(&Global_63095, 1);
			Function_180(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_528(&Global_63095, 2);
			Function_180(&Global_63095, 1);
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
		Function_528(&Global_63095, 2);
		Function_180(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_306();
	return StackVal, StackVal, Function_306();
}

vector3 Function_306() //Position: 0xA03F / 41023
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_307(int iParam0) //Position: 0xA048 / 41032
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_308(bool bParam0, bool bParam1) //Position: 0xA05E / 41054
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
				fVar2 = Function_309(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_309(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_307(bVar0) && !bParam1)
	{
		bVar0 = Function_308(bParam0, 1);
	}
	return bVar0;
}

float Function_309(vector3 vParam0, vector3 vParam3) //Position: 0xA125 / 41253
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_310(bool bParam0) //Position: 0xA142 / 41282
{
	bool bVar0;
	int iVar1;
	
	if (!Function_279(bParam0))
	{
		return;
	}
	switch (Function_392(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_391(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_314(12, 1, 0, 0);
				Function_313(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_314(13, 1, 0, 0);
				Function_313(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_314(14, 1, 0, 0);
				Function_313(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_314(15, 1, 0, 0);
				Function_313(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_314(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_391(bParam0))
			{
				case 0x00000000:
					if (Function_312(bParam0) == 1)
					{
						bVar0 = Function_311(bParam0);
						if (Function_61(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_313(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_313(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_313(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_313(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_313(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_313(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_313(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_313(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_313(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_313(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_313(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_313(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_313(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_313(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_313(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_313(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_313(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_313(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_313(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_313(4, 19);
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
								Function_314(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_314(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_314(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_311(bParam0) == 0)
			{
				if (Function_312(bParam0) == 1)
				{
					Function_314(458, 1, 0, 0);
					bVar0 = Function_391(bParam0);
					if (Function_61(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_313(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_313(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_313(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_313(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_313(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_313(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_313(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_313(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_312(bParam0) == 1)
			{
				Function_314(400, 1, 0, 0);
			}
			switch (Function_391(bParam0))
			{
				case 0x00000001:
					Function_314(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_313(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_313(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_313(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_314(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_313(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_313(6, 9);
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

int Function_311(bool bParam0) //Position: 0xA61E / 42526
{
	if (!Function_279(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_312(bool bParam0) //Position: 0xA63D / 42557
{
	if (!Function_279(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_313(int iParam0, bool bParam1) //Position: 0xA657 / 42583
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

int Function_314(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA6BE / 42686
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
	Function_102(iParam0, TO_FLOAT(bParam1), 1);
	Function_101(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_90(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_315(char* cParam0, bool bParam1) //Position: 0xA8DE / 43230
{
	struct<4> Var0;
	
	if (!Function_325(bParam1))
	{
		return;
	}
	switch (Function_392(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_316(Function_391(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_392(bParam1), Function_391(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_392(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_392(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_392(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_392(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_392(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_316(int iParam0) //Position: 0xAA02 / 43522
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_317() //Position: 0xAA27 / 43559
{
	int iVar0;
	int iVar1;
	
	if (!Function_281(Global_6269))
	{
		return;
	}
	iVar0 = Function_103(24);
	iVar1 = Function_280(Global_6269);
	if (!Function_281(iVar0) && Function_320(iVar1) < 0)
	{
		Function_89(24, Global_6269, 0);
		Function_318(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_320(Function_280(iVar0)))
	{
		Function_89(24, Global_6269, 0);
		Function_318(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_318(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xAAA7 / 43687
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
		Function_319(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_319(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xADF9 / 44537
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

int Function_320(int iParam0) //Position: 0xAE7C / 44668
{
	if (!Function_325(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_321(int iParam0) //Position: 0xAE96 / 44694
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_322(char* cParam0) //Position: 0xAEC0 / 44736
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

void Function_323() //Position: 0xB116 / 45334
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
			Function_324(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_324(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB35D / 45917
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_325(int iParam0) //Position: 0xB386 / 45958
{
	if (!Function_279(iParam0))
	{
		return 0;
	}
	if (!Function_326(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_326(int iParam0) //Position: 0xB3AA / 45994
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_327() //Position: 0xB3BF / 46015
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

void Function_328(int iParam0, int iParam1, bool bParam2) //Position: 0xB3ED / 46061
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
	
	if (!Function_281(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_339(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_103(42) - Global_34165.f_116);
				bVar1 = (Function_103(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_100(49)) - Global_34165.f_124);
				bVar3 = (Function_103(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_103(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_338(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_329(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_321(iParam0) };
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

void Function_329(int iParam0, bool bParam1, bool bParam2) //Position: 0xB689 / 46729
{
	int iVar0;
	bool bVar1;
	
	if (Function_337(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_103(3);
	Function_334();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_333(3, bVar1);
		if (!bParam2)
		{
			if (!Function_286(Global_76848, 4))
			{
				Function_283(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_314(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_99(3));
	iVar0 = Function_103(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_331(4, Function_332(Global_12976.f_156), 1);
				Function_330(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_331(4, Function_332(Global_12976.f_156), 1);
				Function_330(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_331(4, Function_332(Global_12976.f_156), 1);
				Function_330(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_331(4, Function_332(Global_12976.f_156), 1);
				Function_330(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_331(4, Function_332(Global_12976.f_156), 1);
				Function_330(Global_12976.f_152, Global_12976.f_156);
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

void Function_330(int iParam0, int iParam1) //Position: 0xB84C / 47180
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_331(int iParam0, char* cParam1, bool bParam2) //Position: 0xBAAA / 47786
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
	Function_318(iParam0, cParam1, 0, 1);
	iVar1 = Function_268();
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

var Function_332(int iParam0) //Position: 0xBC2F / 48175
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

int Function_333(int iParam0, bool bParam1) //Position: 0xBCBE / 48318
{
	bool bVar0;
	int iVar1;
	
	Function_314(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_268();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

void Function_334() //Position: 0xBE5B / 48731
{
	Function_336(3, 0.0f);
	Function_335(3, 10000.0f);
	return;
}

int Function_335(int iParam0, int iParam1) //Position: 0xBE71 / 48753
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_336(int iParam0, int iParam1) //Position: 0xBEB1 / 48817
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_337(int iParam0) //Position: 0xBEF1 / 48881
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_338(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xBF00 / 48896
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

int Function_339(int iParam0) //Position: 0xC0CA / 49354
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

var Function_340() //Position: 0xC15F / 49503
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_341(int iParam0) //Position: 0xC184 / 49540
{
	if (!Function_281(iParam0))
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
			Function_329(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_329(25, 1, 0);
			Function_345(1, 1);
			break;
		
		case 0x00000015:
			Function_345(50, 1);
			Function_329(250, 1, 0);
			Function_342(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_329(75, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_329(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_345(50, 1);
			Function_329(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_345(5, 1);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_329(75, 1, 0);
			Function_342(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_345(5, 1);
			Function_329(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_329(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_345(25, 1);
			Function_329(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_345(10, 1);
			Function_329(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_329(50, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_329(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_329(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_342(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_345(20, 1);
			Function_329(75, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_345(25, 1);
			Function_329(150, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_345(10, 1);
			Function_329(150, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_329(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_342(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_342(100, 1, 0);
			Function_345(5, 1);
			break;
		
		case 0x0000000F:
			Function_345(3, 1);
			Function_329(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_342(125, 1, 0);
			Function_329(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_345(50, 1);
			Function_329(100, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_345(50, 1);
			Function_329(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_345(75, 1);
			Function_329(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_329(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_329(75, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_329(250, 1, 0);
			Function_342(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_329(75, 1, 0);
			Function_342(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_329(200, 1, 0);
			Function_342(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_329(75, 1, 0);
			Function_342(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_329(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_345(50, 1);
			Function_329(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_345(100, 1);
			Function_329(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_329(200, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_329(300, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_329(300, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_329(300, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_329(500, 1, 0);
			Function_342(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_329(150, 1, 0);
			Function_342(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_342(25, 1, 0);
			Function_345(100, 1);
			break;
		
		case 0x0000002A:
			Function_329(150, 1, 0);
			Function_342(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_342(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_342(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_342(150, 1, 0);
			Function_345(100, 1);
			break;
		
		case 0x00000035:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_342(150, 1, 0);
			Function_345(100, 1);
			break;
		
		case 0x00000032:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_342(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_342(int iParam0, bool bParam1, bool bParam2) //Position: 0xC63F / 50751
{
	int iVar0;
	bool bVar1;
	
	if (Function_337(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_103(1);
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
			Function_333(1, bVar1);
			if (!bParam2)
			{
				if (!Function_286(Global_76848, 1))
				{
					Function_283(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_344(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_286(Global_76848, 2))
				{
					Function_283(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_314(1, bVar1, 0, 0);
	}
	else
	{
		Function_104(1, (4294967295 * bVar1), 0);
	}
	if (Function_103(1) <= 4294962296)
	{
		Function_89(1, 4294962296, 0);
	}
	else if (Function_103(1) >= 5000)
	{
		Function_89(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_99(1));
	iVar0 = Function_103(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_331(2, Function_343(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_331(2, Function_343(Global_12976.f_152), 0);
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
				Function_331(2, Function_343(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_331(2, Function_343(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_331(2, Function_343(Global_12976.f_152), 1);
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
				Function_331(2, Function_343(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_331(2, Function_343(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_331(2, Function_343(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_331(2, Function_343(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_331(2, Function_343(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_331(2, Function_343(Global_12976.f_152), 1);
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
				Function_331(2, Function_343(Global_12976.f_152), 0);
			}
			break;
	}
	Function_330(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_343(int iParam0) //Position: 0xC954 / 51540
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

int Function_344(int iParam0, bool bParam1) //Position: 0xC9F7 / 51703
{
	bool bVar0;
	int iVar1;
	
	Function_104(iParam0, bParam1, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_268();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_345(bool bParam0, bool bParam1) //Position: 0xCB93 / 52115
{
	bool bVar0;
	
	bVar0 = Function_103(0);
	if ((Function_103(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_314(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_103(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_314(597, bParam0, 0, 0);
	}
	if ((Function_103(597) + Function_103(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_346(int iParam0, var uParam1, bool bParam2) //Position: 0xCC5E / 52318
{
	struct<4> Var0;
	
	if (!Function_281(iParam0))
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
			Function_543(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_382(Global_30640[0]);
			Function_382(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_381(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_382(Global_30668[0]);
			Function_373(0);
			Function_371(2, 1);
			Function_371(0, 1);
			Function_371(1, 1);
			break;
		
		case 0x00000003:
			Function_382(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_382(Global_30668[0]);
			Function_382(Global_30640[0]);
			Function_369(0, 1);
			Function_369(15, 1);
			Function_369(9, 1);
			Function_369(12, 1);
			Function_369(16, 1);
			Function_371(3, 1);
			break;
		
		case 0x00000005:
			Function_382(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_381(21, bParam2, 4);
			Function_382(Global_30668[0]);
			Function_371(39, 1);
			break;
		
		case 0x00000007:
			Function_382(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_382(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_368(4))
					{
						Function_361(4, 0, 0, 1);
					}
				}
			}
			Function_382(Global_30640[0]);
			Function_382(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_382(Global_30640[0]);
			Function_382(Global_30668[2]);
			Function_56(&(Global_29008[Global_30668[2]]), 32768);
			Function_60(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_381(9, bParam2, 4);
			Function_382(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_382(Global_30640[0]);
			Function_382(Global_30658[0]);
			Function_56(&(Global_29008[Global_30658[0]]), 32768);
			Function_60(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_382(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_382(Global_30640[0]);
			Function_382(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_382(Global_30640[1]);
			Function_382(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_382(Global_30679[0]);
			Function_382(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_382(Global_30658[5]);
			Function_382(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_381(21, bParam2, 4);
			Function_382(Global_30640[4]);
			Function_382(Global_30658[4]);
			Function_360(&Global_76847, 0x2000000);
			Function_360(&Global_76847, 0x4000000);
			Function_360(&Global_76847, 4096);
			Function_360(&Global_76847, 8);
			Function_360(&Global_76847, 8388608);
			Function_360(&Global_76847, 524288);
			Function_360(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_382(Global_30640[4]);
			Function_382(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_60(&(Global_29008[Global_30640[4]]), 256);
			Function_382(Global_30640[4]);
			Function_382(Global_30658[0]);
			Function_56(&(Global_29008[Global_30658[0]]), 32768);
			Function_60(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_382(Global_30640[0]);
			Function_382(Global_30640[5]);
			Function_381(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_382(Global_30658[3]);
			Function_56(&(Global_29008[Global_30658[3]]), 32768);
			Function_60(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_381(9, bParam2, 4);
			Function_382(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_56(&(Global_29008[Global_30679[1]]), 32768);
			Function_382(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_381(12, bParam2, 4);
			Function_60(&(Global_29008[Global_30679[1]]), 256);
			Function_382(Global_30668[3]);
			Function_382(Global_30693[0]);
			Function_382(Global_30685[0]);
			Function_373(4);
			Function_369(13, 1);
			Function_369(1, 1);
			Function_369(18, 1);
			Function_371(34, 1);
			Function_371(44, 1);
			Function_371(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_381(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_382(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_382(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_382(Global_30693[0]);
			Function_382(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_382(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_382(Global_30685[0]);
			Function_382(Global_30693[0]);
			Function_382(Global_30693[1]);
			Function_382(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_381(23, bParam2, 3);
			Function_369(23, 1);
			Function_382(Global_30685[0]);
			Function_382(Global_30685[2]);
			Function_56(&(Global_29008[Global_30685[2]]), 32768);
			Function_60(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_381(19, bParam2, 4);
			Function_382(Global_30685[0]);
			Function_382(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_381(24, bParam2, 3);
			Function_369(24, 1);
			Function_382(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_382(Global_30685[0]);
			Function_382(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_382(Global_30693[12]);
			Function_382(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_382(Global_30693[12]);
			Function_382(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_381(25, bParam2, 10);
			Function_382(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_382(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_382(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_381(13, bParam2, 4);
			Function_382(Global_30693[2]);
			Function_382(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_368(8))
				{
					Function_361(8, 0, 0, 1);
				}
			}
			Function_382(Global_30685[0]);
			Function_373(9);
			Function_369(7, 1);
			Function_369(11, 1);
			Function_369(3, 1);
			Function_369(20, 1);
			Function_371(57, 1);
			break;
		
		case 0x0000002A:
			Function_381(2, bParam2, 4);
			Function_382(Global_30717[0]);
			Function_382(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_382(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_382(Global_30717[0]);
			Function_382(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_382(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_382(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_382(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_381(17, bParam2, 4);
			Function_382(Global_30723[0]);
			Function_382(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_358(15))
				{
					Function_353(15, 0, 1);
				}
			}
			Function_60(&(Global_29008[Global_30717[1]]), 256);
			Function_373(11);
			Function_382(Global_30717[1]);
			Function_382(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_382(Global_30717[1]);
			Function_382(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_382(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_382(Global_30717[1]);
			Function_347(11);
			Function_373(12);
			Global_16537[1121].f_40 = 0;
			Function_371(56, 1);
			if (!bParam2)
			{
				if (!Function_368(9))
				{
					Function_361(9, 0, 0, 0);
				}
				if (!Function_368(10))
				{
					Function_361(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_316(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_347(int iParam0) //Position: 0xD54E / 54606
{
	bool bVar0;
	
	if (!Function_307(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_352(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_352(Global_16537[iParam021].f_72, 0);
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
			Function_348(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_348(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD6BD / 54973
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
		Function_350(Function_351(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_350(Function_351(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_350(StackVal);
				vVar1 = { StackVal, StackVal, Function_350(StackVal) };
				if (Function_349(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_349(vector3 vParam0, vector3 vParam3) //Position: 0xD7C3 / 55235
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_350(int iParam0) //Position: 0xD7F0 / 55280
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_351(vector3 vParam0) //Position: 0xD847 / 55367
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

void Function_352(bool bParam0, bool bParam1) //Position: 0xD895 / 55445
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

void Function_353(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD8E9 / 55529
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_357(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_358(bParam0))
	{
		if (!Function_368(bParam0))
		{
			Function_361(bParam0, 1, 0, 0);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_314(457, 1, 0, 0);
		Function_356(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_355(0, 0, 1, 1))
			{
				Function_292(1);
				Function_291(1, 0);
			}
			else
			{
				Function_354();
			}
		}
	}
	return;
}

void Function_354() //Position: 0xDA87 / 55943
{
	return;
}

bool Function_355(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xDA8D / 55949
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

void Function_356(bool bParam0, int iParam1) //Position: 0xDB31 / 56113
{
	if (!Function_357(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_357(int iParam0) //Position: 0xDB86 / 56198
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_358(int iParam0) //Position: 0xDB9C / 56220
{
	if (!Function_357(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_359(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_359(int iParam0, int iParam1) //Position: 0xDBED / 56301
{
	int iVar0;
	
	if (!Function_357(iParam0))
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

void Function_360(var uParam0, int iParam1) //Position: 0xDC1A / 56346
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_361(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xDC29 / 56361
{
	struct<8> Var0;
	
	if (!Function_357(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_367(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_368(bParam0))
	{
		Function_314(456, 1, 0, 0);
		Function_356(bParam0, 2);
		if (bParam2)
		{
			if (!Function_355(0, 0, 1, 1))
			{
				Function_292(1);
				Function_291(1, 5);
			}
			else
			{
				Function_354();
			}
		}
		Function_363(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_362() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_362() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_179(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_286(Global_76846, 2))
		{
			Function_283(Global_34573, 2, 1, 0);
		}
	}
}

bool Function_362() //Position: 0xDD73 / 56691
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_363(bool bParam0) //Position: 0xDDA0 / 56736
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
			if (Function_366(bParam0, Function_26(bVar24)))
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
			if (Function_366(bParam0, Function_26(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_365(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_117(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_364(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_364(int iParam0) //Position: 0xDF50 / 57168
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_357(iParam0))
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

var Function_365(int iParam0) //Position: 0xDFA7 / 57255
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_357(iParam0))
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

bool Function_366(bool bParam0, int iParam1) //Position: 0xDFFD / 57341
{
	int iVar0;
	
	if (!Function_357(bParam0))
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

bool Function_367(int iParam0) //Position: 0xE05C / 57436
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_368(int iParam0) //Position: 0xE078 / 57464
{
	if (!Function_357(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_359(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_369(int iParam0, int iParam1) //Position: 0xE0CA / 57546
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_370(iParam0, iParam1);
	Function_283(Global_34573, 1, 4, 1);
	return 1;
}

int Function_370(int iParam0, int iParam1) //Position: 0xE13D / 57661
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_371(int iParam0, int iParam1) //Position: 0xE199 / 57753
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_372(iParam0, iParam1);
	Function_283(Global_34573, 1, 4, 1);
	return 1;
}

int Function_372(int iParam0, int iParam1) //Position: 0xE20A / 57866
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_373(int iParam0) //Position: 0xE264 / 57956
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_307(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_380(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_380(Global_16537[iParam021].f_72, 0);
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
			Function_314(468, 1, 0, 0);
			Function_313(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_179("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_348(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_361(14, 1, 0, 0);
				Function_374(14, 1, 0, 0, 0);
			}
			if (!Function_355(0, 0, 1, 1))
			{
				Function_292(1);
				Function_291(1, 6);
			}
			else
			{
				Function_354();
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
			Function_179("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_314(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_313(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_374(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xE510 / 58640
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_357(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_367(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_359(bParam0, 2))
	{
		Function_314(456, 1, 0, 0);
		Function_356(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_179(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_366(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_356(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_355(0, 0, 1, 1))
			{
				Function_292(1);
				Function_291(1, 0);
			}
			else
			{
				Function_354();
			}
		}
		Function_363(bParam0);
		if (StackVal && !Function_181(((((!Function_362() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_181((((Function_362() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_286(Global_76846, 2))
		{
			Function_283(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_376();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_375(3, bParam1);
				break;
			
			case 0x00000005:
				Function_375(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_375(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_375(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_375(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_375(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_313(2, 24);
				break;
			
			case 0x00000003:
				Function_313(2, 25);
				break;
			
			case 0x0000000F:
				Function_313(2, 26);
				break;
			
			case 0x0000000D:
				Function_313(2, 27);
				break;
			
			case 0x0000000E:
				Function_313(2, 28);
				break;
			}
	}
}

void Function_375(int iParam0, bool bParam1) //Position: 0xE79F / 59295
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_376() //Position: 0xE7FE / 59390
{
	if (Function_357(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_379(Global_28180);
			Global_28180.f_8 = Function_377(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_379(Global_28180);
			Global_28180.f_8 = Function_377(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_377(int iParam0, int iParam1) //Position: 0xE879 / 59513
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
					if (Function_278(6, 0) || Function_278(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_378(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_278(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_378(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_378(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_378(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_378(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_278(26, 0))
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
					if (Function_378(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_378(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_378(27) && iVar18)
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
					if (Function_378(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_378(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_378(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_378(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_278(17, 0) && iVar15)
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
					if (Function_378(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_278(6, 0) && Function_378(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_378(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_278(9, 0) && Function_378(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_378(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_278(8, 0) && iVar19)
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
	if (Function_207(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_207(StackVal, StackVal, vVar3))
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
	if (!Function_207(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_378(int iParam0) //Position: 0xF46A / 62570
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_379(int iParam0) //Position: 0xF47F / 62591
{
	int iVar0;
	int iVar1;
	
	if (!Function_357(iParam0))
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

void Function_380(bool bParam0, bool bParam1) //Position: 0xF4CE / 62670
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

void Function_381(bool bParam0, bool bParam1, int iParam2) //Position: 0xF51F / 62751
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_72(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_543(bParam0, 0, 0);
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

void Function_382(int iParam0) //Position: 0xF58D / 62861
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_53(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_314(473, 1, 0, 0);
		iVar0 = Function_383(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_314(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_314(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_314(476, 1, 0, 0);
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
		Function_313(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_313(7, 30);
	}
	if (Function_99(473) <= Function_100(473))
	{
		if (!Function_50())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_383(bool bParam0) //Position: 0xF68C / 63116
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_61(bParam0))
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

void Function_384(int iParam0) //Position: 0xF6E4 / 63204
{
	int iVar0;
	
	if (Function_181(iParam0, 1) && Function_181(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_385(int iParam0) //Position: 0xF718 / 63256
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_386(4, 0, 0);
		}
	}
	return;
}

void Function_386(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF77F / 63359
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
	else if (StackVal || StackVal != 12 != 20)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_387(Global_16524, bVar0, 1);
	}
	return;
}

void Function_387(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF85C / 63580
{
	int iVar0;
	
	Function_390(bParam0);
	Function_389(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_388();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_388() //Position: 0xF9D5 / 63957
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_389(bool bParam0) //Position: 0xF9E1 / 63969
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

void Function_390(int iParam0) //Position: 0xFA27 / 64039
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

int Function_391(bool bParam0) //Position: 0xFA6D / 64109
{
	if (!Function_279(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_392(bool bParam0) //Position: 0xFA8D / 64141
{
	if (!Function_279(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_393(int iParam0) //Position: 0xFAA8 / 64168
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_394(105)), 0);
	return;
}

int Function_394(int iParam0) //Position: 0xFAC9 / 64201
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_395(bool bParam0) //Position: 0xFADF / 64223
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_389(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_389(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_389(Global_12976.f_24);
	PRINTNL();
	Function_396(bParam0);
	return;
}

void Function_396(int iParam0) //Position: 0xFB7B / 64379
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_394(90)), 0);
	return;
}

void Function_397(bool bParam0) //Position: 0xFB9C / 64412
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

bool Function_398(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFBB7 / 64439
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_402(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_399(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_399(bParam0, bParam1, bParam2, 4294967295);
}

int Function_399(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xFC15 / 64533
{
	var uVar0;
	
	if (!Function_401(bParam2))
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
	uVar0 = Function_402(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_400(uVar0);
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

int Function_400(int iParam0) //Position: 0xFD6A / 64874
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

bool Function_401(int iParam0) //Position: 0xFDA8 / 64936
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_402(int iParam0, int iParam1, int iParam2) //Position: 0xFDBD / 64957
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_403(bool bParam0) //Position: 0xFDDD / 64989
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

bool Function_404(bool bParam0) //Position: 0x10077 / 65655
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
					Function_407();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_407();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_291(0, 4294967295);
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
		Function_407();
		if (Function_405(bVar0))
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

bool Function_405(bool bParam0) //Position: 0x1026A / 66154
{
	if (bParam0 != 4)
	{
		if (Function_406("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
	}
	Function_293();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

bool Function_406(bool bParam0) //Position: 0x102B6 / 66230
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_407() //Position: 0x102D5 / 66261
{
	struct<5> Var0;
	
	if (Function_50())
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
	if (Function_61(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_408(bool bParam0) //Position: 0x10368 / 66408
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
					Function_410();
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
		Function_409(bVar0);
		return 1;
	}
	return 0;
}

int Function_409(bool bParam0) //Position: 0x10482 / 66690
{
	if (bParam0 != 4)
	{
		if (Function_406("xmlsave"))
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

var Function_410() //Position: 0x104C5 / 66757
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, false, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_411(int iParam0) //Position: 0x10500 / 66816
{
	char* cVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	char* cVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_412(cVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			cVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			bVar23 = GET_ACTORENUM_FROM_STRING(cVar22);
			bVar24 = bVar23;
			if (bVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar24, true, false);
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
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_126(), bVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_412(char* cParam0, char* cParam1) //Position: 0x10657 / 67159
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_413(char* cParam0) //Position: 0x10682 / 67202
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_412(cVar0, "streamanddropactor"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar1 = GET_ACTORENUM_FROM_STRING(cParam0);
		bVar2 = bVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, true, false);
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
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_126(), bVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_414(bool bParam0) //Position: 0x10785 / 67461
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_178();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_415(bool bParam0) //Position: 0x107B2 / 67506
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

bool Function_416(bool bParam0) //Position: 0x107FC / 67580
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

bool Function_417(bool bParam0) //Position: 0x1082F / 67631
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

bool Function_418(bool bParam0) //Position: 0x108EA / 67818
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

bool Function_419(bool bParam0) //Position: 0x1094E / 67918
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
		Function_306();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_126(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_306());
		return 1;
	}
	return 0;
}

bool Function_420(bool bParam0) //Position: 0x10A05 / 68101
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
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_126(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_306();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_126(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0,3f, 0,1f, -0,3f, Function_306());
		return 1;
	}
	return 0;
}

bool Function_421(bool bParam0) //Position: 0x10B1E / 68382
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
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_126(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_126(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_422(bool bParam0) //Position: 0x10C19 / 68633
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_423(bool bParam0) //Position: 0x10C6D / 68717
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

bool Function_424(bool bParam0) //Position: 0x10D17 / 68887
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

bool Function_425(bool bParam0) //Position: 0x10D8C / 69004
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

bool Function_426(bool bParam0) //Position: 0x10E71 / 69233
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
					stradd(&cVar55, Function_260(bVar17), 64);
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

bool Function_427(bool bParam0) //Position: 0x11236 / 70198
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
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
					stradd(&cVar52, Function_260(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_429(&Global_26303, Function_441(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_260(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_260(bVar72), GET_PLAYER_ACTOR(0), 1);
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
					stradd(&cVar52, Function_260(bVar17), 64);
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
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
					ADD_ITEM(Function_260(bVar17), GET_PLAYER_ACTOR(0), 1);
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
						Function_345(ABS(bVar75), 1);
					}
					else
					{
						Function_428(ABS(bVar75), 1);
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

int Function_428(int iParam0, bool bParam1) //Position: 0x118E2 / 71906
{
	bool bVar0;
	
	bVar0 = Function_103(0);
	if ((Function_103(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_104(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_103(0));
	return 1;
}

int Function_429(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11972 / 72050
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_440())
	{
		return 0;
	}
	uParam0->f_16 = Function_439(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_441();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_438(&Var96, iVar1) == 1)
		{
			if (Function_437(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_436(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_435(iVar1))
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
		if (Function_438(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_430(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_430(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x11BDC / 72668
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_431(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_431(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11C67 / 72807
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
	bVar303 = 1,001638E+07.0f;
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
	if (!Function_61(bParam0))
	{
		bParam0 = Global_29005;
	}
	iVar295 = Function_437(bParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_125(StackVal);
		vVar296 = { StackVal, StackVal, Function_125(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_437(Global_29155[iVar59810]) || bParam0 != 4294967295)) != 1) && Function_53(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
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
				if (Function_312(Function_398(iVar598, 0, 2)) == 0)
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
		Function_434(&iVar1, &bVar304, bVar601);
		Function_434(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_96(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_96(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_96(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_96(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_96(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar148[iVar599];
		if (Function_61(bVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_433();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_432(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_125(StackVal);
		vVar296 = { StackVal, StackVal, Function_125(StackVal) };
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
				iVar603 = Function_96(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_96(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_96(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_96(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_96(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar1[iVar599];
		if (Function_61(bVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_433();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_432(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_125(StackVal);
		vVar296 = { StackVal, StackVal, Function_125(StackVal) };
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

struct<32> Function_432(bool bParam0) //Position: 0x12310 / 74512
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_61(bParam0))
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

bool Function_433() //Position: 0x123CD / 74701
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

void Function_434(int iParam0, bool bParam1, int iParam2) //Position: 0x123FB / 74747
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

bool Function_435(bool bParam0) //Position: 0x12489 / 74889
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

int Function_436(bool bParam0) //Position: 0x124DB / 74971
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

int Function_437(bool bParam0) //Position: 0x1258A / 75146
{
	return Function_383(bParam0);
}

bool Function_438(var uParam0, int iParam1) //Position: 0x12595 / 75157
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

var Function_439(int iParam0) //Position: 0x12D08 / 77064
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

bool Function_440() //Position: 0x12DD6 / 77270
{
	return Function_181(StackVal, 1);
}

int Function_441() //Position: 0x12DE5 / 77285
{
	int iVar0;
	
	iVar0 = Function_442(0);
	return iVar0;
}

var Function_442(int iParam0) //Position: 0x12DF3 / 77299
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_103(358) + Function_103(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_96(iVar1, 7);
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

bool Function_443(bool bParam0) //Position: 0x12E77 / 77431
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_444(bool bParam0) //Position: 0x12ED1 / 77521
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
		bVar15 = Function_445(StackVal, StackVal, StackVal, bVar18, Function_126(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_445(StackVal, StackVal, StackVal, bVar18, Function_126(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_445(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x12FB4 / 77748
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_446(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_446(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x12FFF / 77823
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_447(&vVar0, uParam2))
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

bool Function_447(int iParam0, int iParam1) //Position: 0x13127 / 78119
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_207(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_207(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_448(bool bParam0) //Position: 0x13192 / 78226
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		bVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(bVar0);
		while (!STREAMING_IS_PROPSET_LOADED(bVar0))
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
		Function_449(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_126(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(bVar0);
		return 1;
	}
	return 0;
}

var Function_449(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x13238 / 78392
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
				if (Function_50())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), true);
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

bool Function_450(bool bParam0) //Position: 0x13381 / 78721
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

bool Function_451(bool bParam0) //Position: 0x133C0 / 78784
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

bool Function_452(bool bParam0) //Position: 0x13646 / 79430
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
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_242(&Var17) };
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
		bVar12 = Function_445(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, false, 1, 1);
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
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_242(&Var17) };
			bVar13 = Function_445(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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

bool Function_453(int iParam0) //Position: 0x137DF / 79839
{
	iParam0 = iParam0;
	return 0;
}

bool Function_454(bool bParam0) //Position: 0x137EA / 79850
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
						Function_382(iVar2);
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
							Function_382(iVar2);
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

bool Function_455(bool bParam0) //Position: 0x13879 / 79993
{
	bool bVar0;
	char* cVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			bVar4 = STRING_TO_FLOAT(cVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (bVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_267(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_456(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_456(int iParam0, bool bParam1) //Position: 0x138EB / 80107
{
	bool bVar0;
	int iVar1;
	
	Function_457(iParam0, bParam1, 0);
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
	iVar1 = Function_271(iParam0, 4294967295);
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
	iVar1 = Function_268();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_457(int iParam0, bool bParam1, int iParam2) //Position: 0x13A77 / 80503
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
	Function_101(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_90(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_458(bool bParam0) //Position: 0x13C62 / 80994
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

bool Function_459(bool bParam0) //Position: 0x13CE8 / 81128
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_460(bool bParam0) //Position: 0x13D0A / 81162
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

bool Function_461(bool bParam0) //Position: 0x13D71 / 81265
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* cVar3;
	
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
			cVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(cVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_462(bool bParam0) //Position: 0x13DE4 / 81380
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
						Function_463(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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
						Function_463(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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

var Function_463(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1405E / 82014
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_471(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_470(iParam1))
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
	if (!Function_466(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_126(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_464();
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

void Function_464() //Position: 0x142EE / 82670
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_465(bVar0, iVar1);
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

void Function_465(bool bParam0, bool bParam1) //Position: 0x14351 / 82769
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

bool Function_466(bool bParam0) //Position: 0x14380 / 82816
{
	if (Function_469(256))
	{
		return 0;
	}
	if (Function_469(262144))
	{
		return 0;
	}
	if (Function_468())
	{
		return 0;
	}
	if (!Function_469(1))
	{
		return 0;
	}
	if (!Function_469(4096))
	{
		return 0;
	}
	if (bParam0 && Function_467(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_469(2048))
	{
		return 0;
	}
	if (Function_50() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_467(int iParam0) //Position: 0x143F6 / 82934
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_468() //Position: 0x14407 / 82951
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

bool Function_469(int iParam0) //Position: 0x14420 / 82976
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_470(int iParam0) //Position: 0x1443E / 83006
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_471(int iParam0) //Position: 0x14454 / 83028
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_472(bool bParam0) //Position: 0x14469 / 83049
{
	bool bVar0;
	char* cVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
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
			Function_473(iVar2, FLOOR(STRING_TO_FLOAT(cVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_473(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1451E / 83230
{
	int iVar0;
	bool bVar1;
	
	Function_390(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_474(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_387(StackVal, bVar1, bParam4);
		}
	}
}

void Function_474(int iParam0, int iParam1) //Position: 0x14590 / 83344
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_390(iParam0);
	Function_389(iVar0);
	PRINTNL();
	Function_387(iParam0, iVar0, iParam1);
	return;
}

bool Function_475(bool bParam0) //Position: 0x145B5 / 83381
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2));
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

bool Function_476(bool bParam0) //Position: 0x14619 / 83481
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

bool Function_477(bool bParam0) //Position: 0x14656 / 83542
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2) };
			Function_481(1.0f, 0.0f, 1.0f);
			Function_479(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar4 = Function_478(bVar3);
			if (Function_61(bVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_432(bVar4) };
				Function_479(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_478(bool bParam0) //Position: 0x146F3 / 83699
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

void Function_479(vector3 vParam0) //Position: 0x147AC / 83884
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
		Function_480(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_480(bool bParam0) //Position: 0x14833 / 84019
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

void Function_481(var uParam0, var uParam1, int iParam2) //Position: 0x14873 / 84083
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_482(bool bParam0) //Position: 0x14894 / 84116
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_483(STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_483(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x148F4 / 84212
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_484(bool bParam0) //Position: 0x1492B / 84267
{
	char* cVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = Function_478(cVar0);
			if (Function_61(uVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_432(uVar1), 4);
				Function_485(uVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_485(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x14992 / 84370
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_486(bool bParam0) //Position: 0x149C9 / 84425
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

bool Function_487(bool bParam0) //Position: 0x14A28 / 84520
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_493();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_488();
			}
			return 0;
		}
	}
	return 0;
}

int Function_488() //Position: 0x14A81 / 84609
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_492(4))
		{
			Function_384(4);
		}
		else
		{
			Function_491(4);
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
		if (Function_492(1))
		{
			Function_384(1);
		}
		else
		{
			Function_491(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_492(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_492(32))
		{
			Function_384(32);
		}
		else
		{
			Function_491(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_492(64))
		{
			Function_384(64);
		}
		else
		{
			Function_491(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_492(128))
		{
			Function_384(128);
		}
		else
		{
			Function_491(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_469(256))
		{
			Function_490(256);
		}
		else
		{
			Function_489(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_489(int iParam0) //Position: 0x14BDE / 84958
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_490(int iParam0) //Position: 0x14BFB / 84987
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_491(int iParam0) //Position: 0x14C0E / 85006
{
	if (Function_181(iParam0, 1) && !Function_181(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_492(int iParam0) //Position: 0x14C3B / 85051
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_493() //Position: 0x14C57 / 85079
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

bool Function_494(bool bParam0) //Position: 0x14DC4 / 85444
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
			bVar0 = Function_496(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_495(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
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

bool Function_495(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x14EFA / 85754
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
		if (!Function_207(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_207(StackVal, StackVal, *iParam2))
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

var Function_496(char* cParam0, bool bParam1) //Position: 0x1502C / 86060
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

bool Function_497(bool bParam0) //Position: 0x15060 / 86112
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_498(iVar1, bParam0);
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

var Function_498(char* cParam0, bool bParam1) //Position: 0x1513A / 86330
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

bool Function_499(bool bParam0) //Position: 0x1524C / 86604
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_498(iVar1, bParam0);
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

bool Function_500(bool bParam0) //Position: 0x153DC / 87004
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
				bVar0 = Function_498(iVar1, bParam0);
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

bool Function_501(bool bParam0) //Position: 0x15583 / 87427
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
				bVar0 = Function_498(iVar2, bParam0);
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

bool Function_502(bool bParam0) //Position: 0x15823 / 88099
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar1 = GET_ACTOR_ENUM_FROM_STRING(bVar0);
			if (Function_503(bVar1))
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
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(bVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(bVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(bVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_503(int iParam0) //Position: 0x158D1 / 88273
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_504(bool bParam0) //Position: 0x158E8 / 88296
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

void Function_505(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x15912 / 88338
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
	Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_78(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_526(iParam0, 2);
	Function_523(iParam0);
	Function_520(iParam0);
	Function_518(iParam0);
	Function_516(iParam0);
	Function_513(iParam0);
	Function_510(iParam0);
	Function_507(iParam0);
	if (bParam2)
	{
		Function_528(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_528(iParam0 + 44, 8);
		Function_73(iParam0 + 184);
	}
	Function_506(iParam0, bParam4);
	Function_17(8388608, 0);
}

void Function_506(int iParam0, bool bParam1) //Position: 0x159DA / 88538
{
	if (bParam1)
	{
		Function_528(iParam0 + 44, 32);
	}
	else
	{
		Function_180(iParam0 + 44, 32);
	}
	return;
}

void Function_507(int iParam0) //Position: 0x159FA / 88570
{
	Function_508(iParam0, 88597);
	return;
}

void Function_508(var uParam0, var uParam1) //Position: 0x15A09 / 88585
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_509() //Position: 0x15A15 / 88597
{
	return 0;
}

void Function_510(int iParam0) //Position: 0x15A1C / 88604
{
	Function_511(iParam0, 88631);
	return;
}

void Function_511(var uParam0, var uParam1) //Position: 0x15A2B / 88619
{
	uParam0->f_172 = uParam1;
	return;
}

int Function_512() //Position: 0x15A37 / 88631
{
	return 1;
}

void Function_513(int iParam0) //Position: 0x15A3E / 88638
{
	Function_514(iParam0, 88665);
	return;
}

void Function_514(var uParam0, var uParam1) //Position: 0x15A4D / 88653
{
	uParam0->f_156 = uParam1;
	return;
}

void Function_515() //Position: 0x15A59 / 88665
{
	return;
}

void Function_516(int iParam0) //Position: 0x15A5F / 88671
{
	Function_517(iParam0, 88665);
	return;
}

void Function_517(var uParam0, int iParam1) //Position: 0x15A6E / 88686
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_518(int iParam0) //Position: 0x15A7A / 88698
{
	Function_519(iParam0, 88665);
	return;
}

void Function_519(var uParam0, int iParam1) //Position: 0x15A89 / 88713
{
	uParam0->f_164 = iParam1;
	return;
}

void Function_520(int iParam0) //Position: 0x15A95 / 88725
{
	Function_521(iParam0, 88752);
	return;
}

void Function_521(var uParam0, var uParam1) //Position: 0x15AA4 / 88740
{
	uParam0->f_168 = uParam1;
	return;
}

int Function_522() //Position: 0x15AB0 / 88752
{
	return 0;
}

void Function_523(int iParam0) //Position: 0x15AB7 / 88759
{
	Function_524(iParam0, 88786);
	return;
}

void Function_524(var uParam0, int iParam1) //Position: 0x15AC6 / 88774
{
	uParam0->f_152 = iParam1;
	return;
}

void Function_525(var uParam0) //Position: 0x15AD2 / 88786
{
	uParam0 = uParam0;
	return;
}

void Function_526(var uParam0, var uParam1) //Position: 0x15ADC / 88796
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_527(int iParam0, struct<57> Param1) //Position: 0x15AE8 / 88808
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_528(var uParam0, int iParam1) //Position: 0x15AFC / 88828
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_529() //Position: 0x15B0B / 88843
{
	return;
}

void Function_530() //Position: 0x15B11 / 88849
{
	Function_531(88876);
	return;
}

void Function_531(int iParam0) //Position: 0x15B1E / 88862
{
	NET_SCRIPTMSG_REGISTER_HANDLER(18, iParam0);
	return;
}

void Function_532(var uParam0) //Position: 0x15B2C / 88876
{
	struct<18> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
	Function_533(uParam0, &Var0);
	return;
}

void Function_533(int iParam0, int iParam1) //Position: 0x15B43 / 88899
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, iParam1, 18);
	bVar0 = Function_536(iParam1 + 40, iParam1 + 8);
	if (IS_OBJECT_VALID(bVar0))
	{
		Function_534(bVar0, 0, 0);
	}
	return;
}

void Function_534(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15B6F / 88943
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Function_198()))
	{
		if (Function_535(bParam0) != 5)
		{
			ADD_OBJECT_TO_OBJECTSET(bParam0, Function_198());
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
		DECOR_SET_FLOAT(bParam0, Function_197(), bParam2);
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

int Function_535(bool bParam0) //Position: 0x15C40 / 89152
{
	return Function_194(DECOR_GET_INT(bParam0, Function_196()));
}

var Function_536(bool bParam0, bool bParam1) //Position: 0x15C51 / 89169
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
	bVar2 = FIND_OBJECT_IN_OBJECT(bVar1, Function_29());
	if (!IS_OBJECT_VALID(bVar2))
	{
		return "";
	}
	return bVar2;
}

void Function_537(int iParam0) //Position: 0x15C97 / 89239
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing drop. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_208(vVar0.y, 4294967294))
		{
			if (Function_208(vVar0.y, vVar0.x))
			{
				Function_222(vVar0.y);
			}
			else
			{
				NET_LOG(true, "CTF Test", "Invalid Drop. Player %s had bag %s, not player %s!", I2STR(uLocal_14[vVar0.y]), I2STR(vVar0.y), I2STR(vVar0.x), 0);
			}
		}
		else
		{
			NET_LOG(true, "CTF Test", "Invalid Drop. Nobody had bag %s already", I2STR(vVar0.y), 0, false, 0);
		}
	}
	return;
}

void Function_538(int iParam0) //Position: 0x15DC0 / 89536
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing confirm. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	if (NET_IS_SESSION_HOST())
	{
		Function_223(vVar0.y, vVar0.x);
	}
	if (vVar0.x != GET_LOCAL_SLOT())
	{
		return;
	}
	bVar3 = Function_178();
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(bVar3))
	{
		return;
	}
	bVar4 = GET_OBJECT_ANIMATOR_ON_OBJECT((*&Local_18 + 16)[vVar0.y]);
	if (IS_OBJECT_ANIMATOR_VALID(bVar4))
	{
		DESTROY_OBJECT_ANIMATOR(bVar4);
	}
	if (Local_18 == 0)
	{
		bVar4 = CREATE_OBJECT_ANIMATOR_ON_OBJECT((*&Local_18 + 16)[vVar0.y], "CTF", "CTF_new", "CTF_new/Prop_L");
	}
	else
	{
		bVar4 = CREATE_OBJECT_ANIMATOR_ON_OBJECT((*&Local_18 + 16)[vVar0.y], "CTF", "CTF_new", "CTF_new/Prop_R");
	}
	if (IS_OBJECT_ANIMATOR_VALID(bVar4))
	{
		if (LINK_OBJECT_ANIMATOR_TO_ACTOR(bVar4, bVar3, Local_18 + 2))
		{
		}
	}
	SET_ANIM_SET_FOR_ACTOR(bVar3, "CTF", 0);
	if (Local_18 == 0)
	{
		Function_539((*&Local_18 + 16)[vVar0.y], bVar3, "clavicle_l_attachment", 2, Function_181(Local_18.f_32, 1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_ACTION_NODE_FOR_ACTOR(bVar3, "CTF_new/One/left_pre");
	}
	else
	{
		Function_201((*&Local_18 + 4)[0]);
		Function_539((*&Local_18 + 16)[vVar0.y], bVar3, "clavicle_r_attachment", 3, Function_181(Local_18.f_32, 1), 0.0f, 0.0f, 0.0f, -6,8245f, 182,8487f, 18,7832f);
		SET_ACTION_NODE_FOR_ACTOR(bVar3, "CTF_new/Two/right_pre");
	}
	(*&Local_18 + 4)[Local_18] = vVar0.y;
	Local_18++;
	return;
}

void Function_539(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x15FDB / 90075
{
	if (IS_ACTOR_VALID(bParam1) && IS_OBJECT_VALID(bParam0))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), false);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 0);
		if (bParam4)
		{
			ATTACH_OBJECTS_USING_LOCATOR(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), bParam2, "grab", iParam3);
		}
	else
	{
		}
	}
}

void Function_540(int iParam0) //Position: 0x1603D / 90173
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	NET_LOG(true, "CTF Test", "RECVing ask. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_208(vVar0.y, 4294967294))
		{
			Function_541(vVar0.x, vVar0.y);
		}
		else
		{
			NET_LOG(true, "CTF Test", "Rejected Ask. Player %s already has bag %s", I2STR(uLocal_14[vVar0.y]), I2STR(vVar0.y), false, 0);
		}
	}
	return;
}

void Function_541(var uParam0, int iParam1) //Position: 0x1610A / 90378
{
	struct<9> Var0;
	
	vVar0 = uParam0;
	vVar0.f_8 = NET_GET_NET_TIME();
	vVar0.y = iParam1;
	NET_LOG(true, "CTF Test", "SENDing confirm. Player %s for bag %s @ %s", I2STR(vVar0.x), I2STR(vVar0.y), F2STR(vVar0.z, 5, 5), 0);
	NET_SCRIPTMSG_SEND(3, 71, &vVar0, 3, 1);
	return;
}

void Function_542(int iParam0) //Position: 0x1617E / 90494
{
	Function_83(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

int Function_543(bool bParam0, bool bParam1, int iParam2) //Position: 0x161D7 / 90583
{
	if (!Function_70(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_178(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_178(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_178(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

void Function_544(bool bParam0) //Position: 0x1622E / 90670
{
	if (bParam0)
	{
		Function_545(1);
	}
	else
	{
		Function_55(1);
	}
	return;
}

void Function_545(var uParam0) //Position: 0x16244 / 90692
{
	Function_83(&Global_78617 + 52, uParam0);
	return;
}

void Function_546() //Position: 0x16255 / 90709
{
	Function_555(&Global_83591 + 276, 0);
	Function_553(&Global_83591, 1, 5, 5, 1);
	Function_553(&Global_83591, 2, 22, 1, 1);
	Function_553(&Global_83591, 3, 25, 20, 1);
	Function_549(&Global_83591, 1, 19, 4, 1);
	Function_549(&Global_83591, 2, 6, 3, 1);
	Function_549(&Global_83591, 3, 17, 4, 1);
	Function_549(&Global_83591, 4, 9, 2, 1);
	Function_548(&Global_83591);
	Function_547(&Global_83591 + 276, 4);
	return;
}

void Function_547(int iParam0, int iParam1) //Position: 0x162CA / 90826
{
	(iParam0 + 228)->f_220 = 0;
	Function_528(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_548(int iParam0) //Position: 0x162E2 / 90850
{
	iParam0->f_844 = 0;
	return;
}

void Function_549(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x162EE / 90862
{
	Function_550(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_550(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x16306 / 90886
{
	Function_551(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_551(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1631D / 90909
{
	if (!Function_245(iParam1))
	{
		return;
	}
	Function_552(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_552(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16340 / 90944
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

void Function_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1636A / 90986
{
	Function_554(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_554(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x16382 / 91010
{
	Function_551(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_555(int iParam0, bool bParam1) //Position: 0x16397 / 91031
{
	Function_559(iParam0);
	Function_559(iParam0 + 228);
	if (bParam1)
	{
		Function_556(iParam0);
	}
	return;
}

void Function_556(int iParam0) //Position: 0x163B3 / 91059
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_557(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_557(var uParam0, int iParam1) //Position: 0x163D3 / 91091
{
	Function_558(uParam0, iParam1, 0);
	return;
}

void Function_558(int iParam0, int iParam1, int iParam2) //Position: 0x163E1 / 91105
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_559(int iParam0) //Position: 0x163F2 / 91122
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_561(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_560(iParam0, 0.0f);
	return;
}

void Function_560(var uParam0, int iParam1) //Position: 0x1641F / 91167
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_561(int iParam0) //Position: 0x1642B / 91179
{
	Function_552(iParam0, 4294967295, 0, 1);
	return;
}

void Function_562(bool bParam0) //Position: 0x16439 / 91193
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
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[0], false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[1], false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[2], false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0[3], false, 1, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 6, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 7, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 10, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 9, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 4, 45.0f, 0, 1);
	_ADD_AMMO_OF_TYPE(bParam0, 5, 45.0f, 0, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	return;
}

bool Function_563(int iParam0) //Position: 0x16512 / 91410
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_567();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_566(iParam0[iVar03], 8);
		}
		else if (Function_565())
		{
			iVar1 = 1;
			Function_566(iParam0[iVar03], 8);
		}
		Function_566(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_566(iParam0[iVar03], 1);
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
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
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
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_566(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_566(iParam0[iVar03], 2);
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
	Function_564();
	return 1;
}

void Function_564() //Position: 0x1688D / 92301
{
	if (!Function_492(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_565() //Position: 0x168CD / 92365
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

void Function_566(var uParam0, int iParam1) //Position: 0x168F8 / 92408
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_567() //Position: 0x16909 / 92425
{
	if (!Function_492(128))
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

bool Function_568() //Position: 0x1694B / 92491
{
	return "p_gen_crateMultiplayerWeapon01x";
}

bool Function_569() //Position: 0x16973 / 92531
{
	return "p_gen_crateMultiplayerItem01x";
}

bool Function_570() //Position: 0x16999 / 92569
{
	return "p_gen_crateMultiplayerAmmo01x";
}

var Function_571(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x169BF / 92607
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_572(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_566(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_572(var uParam0, int iParam1, int iParam2) //Position: 0x169F7 / 92663
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_566(uParam0[iVar03], 4);
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

var Function_573(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x16ABB / 92859
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
			Function_566(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_566(uParam0[iVar03], 8);
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

var Function_574() //Position: 0x16B8B / 93067
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

