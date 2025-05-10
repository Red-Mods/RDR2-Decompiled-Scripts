//Decompiled with MagicRDR v1.0
//Function Count : 496
//Statics Count : 34
//Natives Count : 600
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0.0f;
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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	vector3 vLocal_18 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_21 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_24 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_27 = false;
	float fLocal_28 = 0.0f;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar106;
	bool bVar107;
	var uVar108;
	bool bVar112;
	vector3 vVar113;
	vector3 vVar116;
	bool bVar119;
	
	iLocal_1 = 31;
	iLocal_2 = 33;
	iLocal_3 = 1;
	fLocal_4 = 2.0f;
	iLocal_16 = 0;
	iLocal_17 = 0;
	if (HUD_IS_FADED() && !HUD_IS_FADING())
	{
		HUD_FADE_IN(2.0f, 1065353216);
	}
	UI_SEND_EVENT("loadComplete");
	*(&iVar0 + 20) = 4;
	*(&iVar0 + 100) = 4294967295;
	*(&iVar0 + 184) = 27;
	bVar106 = false;
	while (bVar106 < 51)
	{
		SET_WEAPONENUM_LOCKED(bVar106, 0);
		bVar106++;
	}
	bVar107 = Function_495();
	Global_76887 = RAND_INT_RANGE(837, 971);
	STREAMING_REQUEST_ACTOR(Global_76887, true, false);
	while (!STREAMING_IS_ACTOR_LOADED(Global_76887, 4294967295))
	{
		WAIT(false);
	}
	uVar108 = 1;
	Function_494(&uVar108, 976, 3, 0);
	while (!Function_489(&uVar108))
	{
		WAIT(false);
	}
	bVar112 = CREATE_LAYOUT("MPPlayground_layout");
	vVar113 = { 1.0f, 0.0f, 0.0f };
	vVar116 = { 0.0f, 0.0f, 0.0f };
	Global_76888[03] = { StackVal, StackVal, vVar113 };
	Global_76895[03] = { StackVal, StackVal, vVar116 };
	bVar119 = CREATE_PLAYER_ACTOR_IN_LAYOUT(bVar107, "player", Global_76887, vVar113, vVar116, 0);
	SET_CAMERA_FOLLOW_ACTOR(bVar119);
	Function_468(&iVar0, 1, 0, 1, 0);
	Function_442(&iVar0, 82010);
	Function_440(&iVar0, 81983);
	Function_439();
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, 50, false));
	Function_438(1);
	while (!IS_EXITFLAG_SET())
	{
		Function_186();
		Function_6(&uLocal_31, &iVar0);
		WAIT(false);
	}
	DESTROY_LAYOUT(bVar112);
	Function_2(&uVar108);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x179 / 377
{
	GUI_CLOSE_WINDOW(Global_13043);
	return;
}

void Function_2(int iParam0) //Position: 0x186 / 390
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1AC / 428
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x2DA / 730
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x2F4 / 756
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(var uParam0, int iParam1) //Position: 0x311 / 785
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;
	int iVar13;
	
	if (Function_185())
	{
		bVar0 = false;
		if (Function_183(4))
		{
			*iParam1 = 9;
			Function_182(8);
			Function_182(32);
			Function_181(4);
		}
		if (Function_180(iParam1))
		{
			if (Function_179(uParam0))
			{
				if (Function_177(uParam0) > 7,215f)
				{
					if (VDIST(Global_76888[03], Global_76888[13]) > 5.0f)
					{
						vVar1.x = ((SQRT(RAND_FLOAT_RANGE(0.0f, 1.0f)) * 20.0f) + 15.0f);
						ROTATE_VECTOR_XZ(&vVar1, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
						vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Global_76888[03], vVar1, StackVal) };
						if (FIND_GROUND_INTERSECTION(&vVar1, 10.0f, &vVar4, &uVar7))
						{
							Global_76888[13] = { StackVal, StackVal, vVar4 };
							vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_76888[13], Global_76888[03], StackVal) };
							Global_76895[13].f_4 = UNK_0x9C40E671(&vVar10);
							Global_76895[13] = 0.0f;
							Global_76895[13].f_8 = 0.0f;
						}
					}
					Global_76888[03] = { StackVal, StackVal, Global_76888[13] };
					Global_76895[03] = { StackVal, StackVal, Global_76895[13] };
					Function_176(uParam0);
				}
			}
		}
		else if (Function_175(iParam1))
		{
			bVar0 = true;
		}
		iVar13 = Function_17(iParam1);
		if (bVar0)
		{
			if (iVar13 != 0)
			{
				Function_15(uParam0);
			}
		}
	}
	else
	{
		*iParam1 = 0;
		Function_7(iParam1, 0);
	}
	return;
}

void Function_7(int iParam0, bool bParam1) //Position: 0x45F / 1119
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_11(StackVal, StackVal, Function_14(), *(iParam0 + 72), !HUD_IS_FADED());
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
	if (Function_10(iParam0->f_48, 2))
	{
		Function_9(iParam0 + 48, 2);
	}
	Function_8(iParam0 + 48, 1);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x4F0 / 1264
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_9(int iParam0, int iParam1) //Position: 0x4FF / 1279
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_10(bool bParam0, int iParam1) //Position: 0x512 / 1298
{
	return (bParam0 && iParam1) == 0;
}

var Function_11(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x51F / 1311
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
		Function_13(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_13(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_12(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_13(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_13(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_13(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_13(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_12(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_12(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x658 / 1624
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

vector3 Function_13(var uParam0, bool bParam1) //Position: 0x6AD / 1709
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_14() //Position: 0x6C7 / 1735
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_15(int iParam0) //Position: 0x6F6 / 1782
{
	Function_16(iParam0, 0.0f);
	return;
}

void Function_16(int iParam0, float fParam1) //Position: 0x702 / 1794
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_8(iParam0, 1);
	Function_9(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

int Function_17(int iParam0) //Position: 0x723 / 1827
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
	
	bVar0 = Function_174();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	iParam0->f_64 = Function_173((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_172())
	{
		if (bVar1)
		{
			switch (Function_170())
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
	if (Function_169(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_10(iParam0->f_44, 2) || Function_10(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					iParam0->f_96 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, true))
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
	fVar8 = Function_168();
	if (bVar1)
	{
		bVar9 = Function_167(bVar0);
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
			if ((Function_165(8192) || Function_10(iParam0->f_48, 512)) && !Function_164(1, 1))
			{
				iVar6 = Function_161(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_10(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_8(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_160("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_159(2, NET_GET_NET_TIME());
								Function_156(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_155(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_154(2));
						if (!Function_164(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_9(iParam0 + 48, 512);
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
					Function_155(65536, 0);
					Function_9(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_155(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_164(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_155(8388608, 0);
					}
				}
			}
			if (Function_153(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_10(iParam0->f_44, 16))
					{
						Function_8(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_152(iParam0 + 108, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_9(iParam0 + 48, 32);
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
					Function_151(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_150(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_155(65536, 0);
			Function_155(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_10(iParam0->f_44, 8))
			{
				Function_148(0);
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
			if (Function_147(iParam0 + 108, &Global_78617 + 2648))
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
			Function_142(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_126(iParam0, iParam0->f_12 != 0);
			}
			Function_123(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_123(iParam0, 1);
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
			Function_123(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_10(iParam0->f_44, 512))
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
			Function_123(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_122();
				Function_150(32, 0, 1);
				Function_121();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_123(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_118();
			}
			break;
		
		case 0x00000008:
			if (Function_10(iParam0->f_44, 2))
			{
				if (Function_10(iParam0->f_44, 512))
				{
					if (!Function_10(iParam0->f_48, 4096))
					{
						Function_7(iParam0, 1);
						Function_8(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_164(16384, 1))
						{
							Function_7(iParam0, 0);
							Function_155(16384, 1);
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
					Function_123(iParam0, 1);
				}
			}
			else
			{
				Function_123(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_123(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_117(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
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
				Function_121();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_116();
				Function_118();
				Function_150(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_14(), Function_115(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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
				if (!Function_10(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_8(iParam0 + 48, 8);
				}
				if (Function_110(StackVal, Function_10(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_74(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_10(iParam0->f_48, 32), 1))
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
				if (Function_10(iParam0->f_44, 1))
				{
					Function_9(iParam0 + 44, 1);
				}
				else
				{
					Function_70(iParam0);
					Function_7(iParam0, 0);
				}
				bVar0 = Function_174();
				Function_69(bVar0);
				if (Function_10(iParam0->f_44, 32))
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
			if (!Function_65(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_64(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_10(iParam0->f_44, 8))
				{
					Function_63(iParam0 + 184, 0, 1, 1);
					Function_58(iParam0 + 184);
					Function_48(&bVar0, 0, 0, 0);
					Function_48(&bVar0, 0, 0, 0);
					Function_47(bVar0);
				}
				else
				{
					Function_63(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_46(bVar0);
					vVar10 = { StackVal, StackVal, Function_46(bVar0) };
					bVar13 = Function_45(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_44(bVar13))
					{
						iParam0->f_4 = bVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_40(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_39(&(Global_29008[StackVal]), 4194304);
				}
				Function_181(32);
				*iParam0 = 13;
			}
			if (!Function_10(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
				if (StackVal)
				{
					Function_8(iParam0 + 48, 128);
					Function_9(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_181(32);
				Function_40(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_44(StackVal))
			{
				if (Function_38(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_37(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_37(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_37(&(Global_29008[StackVal]), 4194304))
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
					if (Function_44(bVar14))
					{
						if (StackVal && (!Function_38(bVar14) && !Function_37(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_36(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_35();
			if (!Function_10(iParam0->f_44, 32))
			{
				if (Function_31())
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
						fVar15 = Function_30(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_30(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_30(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_30(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_30(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_30(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_30(bVar0, 46);
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
				if (!Function_10(iParam0->f_44, 64))
				{
					Function_29(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_155(16384, 0);
			Function_28(bVar0, !Function_10(iParam0->f_44, 96));
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
			Function_123(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_121();
			}
			else if (!Function_26())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_19(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_18(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_123(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_123(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_10(iParam0->f_44, 4))
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
			Function_123(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_117(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_123(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_117(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_123(iParam0, 1);
			if (Function_26())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_117(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_18(int iParam0) //Position: 0x161B / 5659
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x1637 / 5687
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_116();
		iVar0 = "";
		if (Function_10(iParam0->f_44, 256))
		{
			if (Function_10(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_25(&Global_78578 + 96))
			{
				if (FABS(Function_20(&Global_78578 + 96)) > 1.0f)
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

var Function_20(int iParam0) //Position: 0x1728 / 5928
{
	return -Function_21(iParam0);
}

float Function_21(bool bParam0) //Position: 0x1734 / 5940
{
	if (Function_25(bParam0))
	{
		if (Function_24(bParam0))
		{
			return StackVal;
		}
		Function_22();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_22() //Position: 0x1805 / 6149
{
	if (!Function_23())
	{
	}
	return;
}

bool Function_23() //Position: 0x1812 / 6162
{
	return NET_IS_IN_SESSION();
}

bool Function_24(int iParam0) //Position: 0x181B / 6171
{
	return Function_10(*iParam0, 2);
}

bool Function_25(bool bParam0) //Position: 0x1828 / 6184
{
	return Function_10(*bParam0, 1);
}

bool Function_26() //Position: 0x1835 / 6197
{
	return (HUD_IS_FADED() || Function_27(0));
}

int Function_27(bool bParam0) //Position: 0x1843 / 6211
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

void Function_28(bool bParam0, int iParam1) //Position: 0x18E7 / 6375
{
	struct<5> Var0;
	
	Function_155(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_183(256))
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

void Function_29(bool bParam0) //Position: 0x193D / 6461
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

int Function_30(bool bParam0, int iParam1) //Position: 0x195A / 6490
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_31() //Position: 0x196B / 6507
{
	return !Function_32();
}

bool Function_32() //Position: 0x1975 / 6517
{
	if (Function_34())
	{
		return (Function_33() != 1 || Function_33() != 0);
	}
	return 0;
}

int Function_33() //Position: 0x198E / 6542
{
	return Global_79349.f_16;
}

bool Function_34() //Position: 0x199A / 6554
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_35() //Position: 0x19A3 / 6563
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_174();
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

void Function_36(bool bParam0) //Position: 0x19E2 / 6626
{
	if (!Function_44(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_39(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_37(var uParam0, int iParam1) //Position: 0x1A3D / 6717
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_38(bool bParam0) //Position: 0x1A59 / 6745
{
	if (!Function_44(bParam0))
	{
		return 1;
	}
	return Function_37(&(Global_29008[bParam0]), 4);
}

void Function_39(var uParam0, int iParam1) //Position: 0x1A75 / 6773
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_40(int iParam0, bool bParam1, int iParam2) //Position: 0x1A84 / 6788
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
		if (Function_44(Global_29006))
		{
			Function_39(&(Global_29008[Global_29006]), 131072);
			Function_43(&(Global_29008[Global_29006]), 2097152);
			Function_41(Global_29006);
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
				if (Function_37(&(Global_29008[iVar0]), 4) || Function_37(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_43(&(Global_29008[iVar0]), 2097155);
					Function_39(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_34())
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

void Function_41(int iParam0) //Position: 0x1B8F / 7055
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_42())
			{
				return;
			}
		}
		if (!Function_37(&(Global_29008[iParam0]), 2048))
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

bool Function_42() //Position: 0x1C0E / 7182
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_37(&(Global_29008[iVar0]), 4) || Function_37(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_43(var uParam0, int iParam1) //Position: 0x1C6B / 7275
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_44(bool bParam0) //Position: 0x1C82 / 7298
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_45(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1C98 / 7320
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

vector3 Function_46(bool bParam0) //Position: 0x1D33 / 7475
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_47(bool bParam0) //Position: 0x1D44 / 7492
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

var Function_48(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1D77 / 7543
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
					if (Function_57(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_56(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_55(bVar2))
					{
						if (Function_54(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_57(bVar3, 1))
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
						if (Function_57(bVar3, 1))
						{
							bVar24 = (Function_56(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_14(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_14(), &cVar28, &uVar26))
						{
							Function_49(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_57(bVar3, 1))
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

void Function_49(var uParam0, int iParam1) //Position: 0x205A / 8282
{
	*iParam1 = Function_50(uParam0, Function_52(), 0);
	iParam1->f_4 = Function_50(uParam0, Function_52() + 8, Function_52());
	return;
}

var Function_50(var uParam0, int iParam1, bool bParam2) //Position: 0x207D / 8317
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_51((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_51(bool bParam0) //Position: 0x209C / 8348
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_52() //Position: 0x20A8 / 8360
{
	return Function_53(39);
}

int Function_53(bool bParam0) //Position: 0x20B3 / 8371
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

bool Function_54(bool bParam0) //Position: 0x20E1 / 8417
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

bool Function_55(bool bParam0) //Position: 0x2103 / 8451
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_56(int iParam0, bool bParam1) //Position: 0x2115 / 8469
{
	if (Function_57(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_57(bool bParam0, int iParam1) //Position: 0x212F / 8495
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_58(int iParam0) //Position: 0x2142 / 8514
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_60(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_14(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_14(), &cVar3, &uVar1))
			{
				Function_49(uVar1, &Var11);
				Function_59(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_59(struct<5> Param0) //Position: 0x21B9 / 8633
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_55(Param0))
	{
		return;
	}
	bVar0 = Function_174();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_57(bVar1, 1))
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

void Function_60(int iParam0, int iParam1) //Position: 0x222D / 8749
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_174();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_61(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_61(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_61(23, iParam1))
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
			bVar4 = Function_30(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_30(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_61(int iParam0, int iParam1) //Position: 0x23AA / 9130
{
	return Function_62(iParam0, iParam1) < 4294967295;
}

int Function_62(int iParam0, int iParam1) //Position: 0x23B9 / 9145
{
	int iVar0;
	
	if (!Function_55(iParam0))
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

void Function_63(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x23EC / 9196
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_174();
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
		Function_59(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_64(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2437 / 9271
{
	float fVar0;
	bool bVar1;
	
	if (Function_34() || !bParam1)
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

bool Function_65(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x24D4 / 9428
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
	return Function_66(bParam0, iVar0);
}

bool Function_66(bool bParam0, int iParam1) //Position: 0x2543 / 9539
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_67(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 64))
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

bool Function_67(var uParam0, int iParam1) //Position: 0x261C / 9756
{
	return (uParam0 && iParam1) == 0;
}

void Function_68(var uParam0, int iParam1) //Position: 0x2629 / 9769
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_69(bool bParam0) //Position: 0x2636 / 9782
{
	Function_155(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_70(int iParam0) //Position: 0x2657 / 9815
{
	Function_73(iParam0);
	Function_71(1048576);
	return;
}

void Function_71(int iParam0) //Position: 0x2669 / 9833
{
	Function_72(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x26A2 / 9890
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_73(bool bParam0) //Position: 0x26AF / 9903
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_92);
	}
	return;
}

bool Function_74(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x26C6 / 9926
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_174();
	Function_100();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_99();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_66(bVar0, 3145855);
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
		bVar9 = Function_183(256);
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
		Function_96(bVar0, 0);
		Function_76();
		Function_75(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			bVar14 = Function_45(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_44(bVar14))
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

void Function_75(char* cParam0, vector3 vParam1) //Position: 0x283D / 10301
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_76() //Position: 0x287B / 10363
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_95(iVar1))
		{
			uVar2 = Function_94(iVar1);
			Function_77(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_77(int iParam0, bool bParam1) //Position: 0x28AD / 10413
{
	if (!Function_95(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_93(222, Global_26401[iParam0], 0);
		if (Function_92(222) <= 0)
		{
			Function_78(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_78((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_93((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_93(222, bParam1, 0);
	}
	return;
}

int Function_78(int iParam0, bool bParam1, bool bParam2) //Position: 0x2936 / 10550
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
		Function_91(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_90(iParam0);
	if (bParam2)
	{
		Function_79(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2BD1 / 11217
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_89(390))), 32);
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
					bVar19 = (Function_88(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_88(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_86(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_83(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_80(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_115(), &Var9);
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

var Function_80(int iParam0) //Position: 0x31FE / 12798
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_81(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x320F / 12815
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_82("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_82("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_82("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_82(char* cParam0, char* cParam1) //Position: 0x3304 / 13060
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_83(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x331D / 13085
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_85(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_84(Function_85(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_84(int iParam0, int iParam1) //Position: 0x3382 / 13186
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_85(int iParam0, bool bParam1) //Position: 0x3394 / 13204
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_86(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x33A6 / 13222
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
	if (((Function_87(iParam0) != 19 || Function_87(iParam0) != 17) || Function_87(iParam0) != 10) || Function_87(iParam0) != 9)
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

int Function_87(int iParam0) //Position: 0x34D6 / 13526
{
	return Global_35278[iParam020].f_48;
}

float Function_88(int iParam0) //Position: 0x34E5 / 13541
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_89(int iParam0) //Position: 0x351E / 13598
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_90(int iParam0) //Position: 0x355B / 13659
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

int Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x36F5 / 14069
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

int Function_92(int iParam0) //Position: 0x390F / 14607
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_93(int iParam0, bool bParam1, int iParam2) //Position: 0x3950 / 14672
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
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_79(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_94(int iParam0) //Position: 0x3B4B / 15179
{
	if (!Function_95(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_95(int iParam0) //Position: 0x3B63 / 15203
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_96(bool bParam0, bool bParam1) //Position: 0x3B78 / 15224
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_98(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_165(8192) && !Function_164(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_32())
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
	if (Function_97())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_97() //Position: 0x3C78 / 15480
{
	return Function_10(Global_79962, 2048);
}

var Function_98(bool bParam0) //Position: 0x3C88 / 15496
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

void Function_99() //Position: 0x3CBD / 15549
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_100() //Position: 0x3CD2 / 15570
{
	Function_109();
	Function_103();
	Function_101();
	return;
}

void Function_101() //Position: 0x3CE1 / 15585
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_102();
	return;
}

void Function_102() //Position: 0x3D15 / 15637
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_103() //Position: 0x3D26 / 15654
{
	Function_104(&(Global_50170[522]));
	Function_104(&(Global_50170[622]));
	Function_104(&(Global_50170[722]));
	Function_104(&(Global_50170[822]));
	Function_104(&(Global_50170[922]));
	Function_104(&(Global_50170[1022]));
	Function_104(&(Global_50170[1122]));
	return;
}

void Function_104(bool bParam0) //Position: 0x3D6F / 15727
{
	Global_56092[*bParam0] = 0;
	Function_105(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_105(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3D89 / 15753
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
		Function_106(Function_108(iParam0), 0);
	}
}

void Function_106(bool bParam0, bool bParam1) //Position: 0x3E37 / 15927
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

struct<16> Function_107(int iParam0) //Position: 0x3E5C / 15964
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_108(int iParam0) //Position: 0x3E90 / 16016
{
	return Global_50170[iParam022].f_24;
}

void Function_109() //Position: 0x3E9F / 16031
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3EB8 / 16056
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
	Function_114(bParam0);
	Var6 = { StackVal, StackVal, Function_114(bParam0) };
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
			Function_113(bVar32);
			vVar12.f_4 = Function_111(StackVal, StackVal, StackVal, StackVal, vVar3, Function_113(bVar32));
		}
	}
	return Function_74(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_111(vector3 vParam0, vector3 vParam3) //Position: 0x3F72 / 16242
{
	var uVar0;
	
	Function_112(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3F8C / 16268
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_113(bool bParam0) //Position: 0x3FAF / 16303
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

vector3 Function_114(bool bParam0) //Position: 0x3FD6 / 16342
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_115() //Position: 0x3FE7 / 16359
{
	var uVar0;
	
	return uVar0;
}

void Function_116() //Position: 0x3FEF / 16367
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_117(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x4007 / 16391
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

void Function_118() //Position: 0x4030 / 16432
{
	if (Function_120(8))
	{
		Function_119();
	}
	Function_150(8, 0, 1);
	return;
}

void Function_119() //Position: 0x4048 / 16456
{
	Function_150(32768, 1, 0);
	return;
}

bool Function_120(bool bParam0) //Position: 0x4057 / 16471
{
	return Function_10(Global_76905.f_132, bParam0);
}

void Function_121() //Position: 0x4068 / 16488
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_122() //Position: 0x40C2 / 16578
{
	if (!Function_120(8))
	{
		Function_119();
	}
	Function_150(8, 1, 1);
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x40DB / 16603
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
	if (Function_10(iParam0->f_48, 256) || Function_10(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_10(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_66(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_9(iParam0 + 48, 1024);
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
		Function_125(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_10(iParam0->f_48, 8192))
		{
			Function_8(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_124(1048576);
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

void Function_124(int iParam0) //Position: 0x42CC / 17100
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

void Function_125(int iParam0) //Position: 0x4325 / 17189
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

void Function_126(int iParam0, int iParam1) //Position: 0x4366 / 17254
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_174();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_14();
	Function_46(bVar0);
	vVar2 = { StackVal, StackVal, Function_46(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_141(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_141(bVar0));
	}
	else
	{
		Function_141(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_141(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_137(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_8(iParam0 + 48, 256);
	}
	else
	{
		Function_46(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_46(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_129(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_128(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_8(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_127(iParam0->f_112);
	return;
}

void Function_127(int iParam0) //Position: 0x44D8 / 17624
{
	Function_99();
	Global_63118 = iParam0;
	return;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x44E6 / 17638
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_129(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x44FB / 17659
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_115(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_130(&bVar0, uParam2, uParam3, uParam4);
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

void Function_130(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x457D / 17789
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_136(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_135(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_134(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_133(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_132(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_131(&bVar0, uParam1, uParam2, uParam3);
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

void Function_131(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4698 / 18072
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

void Function_132(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x47AD / 18349
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

void Function_133(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x48C6 / 18630
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

void Function_134(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x49D0 / 18896
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

void Function_135(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4AD6 / 19158
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

void Function_136(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4B86 / 19334
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

var Function_137(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4C3D / 19517
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_115(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_138(&bVar0, uParam2);
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

void Function_138(var uParam0, int iParam1) //Position: 0x4CB4 / 19636
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_140(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_139(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_139(var uParam0, bool bParam1) //Position: 0x4D20 / 19744
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
	Function_141(bParam1);
	vVar3 = { StackVal, StackVal, Function_141(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_113(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_113(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_141(bParam1);
	vVar6 = { StackVal, StackVal, Function_141(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_113(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_113(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x4DE2 / 19938
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
	Function_141(bParam1);
	vVar3 = { StackVal, StackVal, Function_141(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_113(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_113(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_141(bParam1);
	vVar6 = { StackVal, StackVal, Function_141(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_113(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_113(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_141(bool bParam0) //Position: 0x4EA4 / 20132
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

void Function_142(int iParam0) //Position: 0x4ECB / 20171
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_10(iParam0->f_48, 2048))
	{
		Function_8(iParam0 + 48, 2048);
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
			if (Function_55(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_144(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_143("MPSplashItem.s1"));
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
				if (Function_55(bVar2))
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

var Function_143(int iParam0) //Position: 0x51EC / 20972
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

struct<64> Function_144(bool bParam0) //Position: 0x5400 / 21504
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146();
	}
	if (!Function_145(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_145(bool bParam0) //Position: 0x545E / 21598
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

struct<64> Function_146() //Position: 0x54FF / 21759
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_147(var uParam0, int iParam1) //Position: 0x5510 / 21776
{
	if (Function_153(uParam0, iParam1))
	{
		Function_152(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_148(int iParam0) //Position: 0x552A / 21802
{
	Function_149(&Global_79378, 0, iParam0);
	return;
}

void Function_149(int iParam0, bool bParam1, int iParam2) //Position: 0x553A / 21818
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_174();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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

void Function_150(int iParam0, bool bParam1, int iParam2) //Position: 0x572B / 22315
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_8(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_9(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_151(bool bParam0, bool bParam1) //Position: 0x5753 / 22355
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_14(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_55(bVar2))
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

void Function_152(var uParam0, int iParam1) //Position: 0x57CF / 22479
{
	*uParam0 = *iParam1;
	return;
}

bool Function_153(var uParam0, int iParam1) //Position: 0x57DB / 22491
{
	return *uParam0 == *iParam1;
}

float Function_154(int iParam0) //Position: 0x57E8 / 22504
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_155(int iParam0, bool bParam1) //Position: 0x57F8 / 22520
{
	if (bParam1)
	{
		Function_8(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_9(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_156(var uParam0, int iParam1) //Position: 0x5833 / 22579
{
	Function_157(uParam0, (Function_158(uParam0) + iParam1));
	return;
}

void Function_157(int iParam0, int iParam1) //Position: 0x5846 / 22598
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_158(int iParam0) //Position: 0x586F / 22639
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_159(int iParam0, int iParam1) //Position: 0x587F / 22655
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_160(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x58A8 / 22696
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

var Function_161(int iParam0, bool bParam1, int iParam2) //Position: 0x58F3 / 22771
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_145(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_162(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_162(bool bParam0, int iParam1, bool bParam2) //Position: 0x593A / 22842
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_164(iParam1, bParam2);
	}
	if (!Function_145(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_163(iParam1), 64);
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

var Function_163(int iParam0) //Position: 0x59BB / 22971
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

bool Function_164(int iParam0, bool bParam1) //Position: 0x5C44 / 23620
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_165(int iParam0) //Position: 0x5C64 / 23652
{
	return Function_166(&Global_79349, iParam0);
}

int Function_166(var uParam0, int iParam1) //Position: 0x5C73 / 23667
{
	return Function_10(uParam0->f_44, iParam1);
}

int Function_167(int iParam0) //Position: 0x5C82 / 23682
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_168() //Position: 0x5C98 / 23704
{
	if (Function_10(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_169(bool bParam0) //Position: 0x5CB8 / 23736
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_170() //Position: 0x5CCA / 23754
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_171(GET_LOCAL_SLOT(), 1, 0);
}

int Function_171(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5CE1 / 23777
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_145(bParam0))
			{
				if (!Function_162(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_172() //Position: 0x5D25 / 23845
{
	return Function_165(2);
}

var Function_173(float fParam0, float fParam1) //Position: 0x5D2F / 23855
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool Function_174() //Position: 0x5D42 / 23874
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_175(int iParam0) //Position: 0x5D57 / 23895
{
	return *iParam0 != 11;
}

void Function_176(int iParam0) //Position: 0x5D63 / 23907
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_177(int iParam0) //Position: 0x5D77 / 23927
{
	if (Function_179(iParam0))
	{
		if (Function_178(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_178(int iParam0) //Position: 0x5E3F / 24127
{
	return Function_10(*iParam0, 2);
}

bool Function_179(int iParam0) //Position: 0x5E4C / 24140
{
	return Function_10(*iParam0, 1);
}

bool Function_180(int iParam0) //Position: 0x5E59 / 24153
{
	return *iParam0 != 1;
}

void Function_181(int iParam0) //Position: 0x5E64 / 24164
{
	Function_72(&Global_78617 + 52, iParam0);
	return;
}

void Function_182(int iParam0) //Position: 0x5E75 / 24181
{
	Function_68(&Global_78617 + 52, iParam0);
	return;
}

bool Function_183(int iParam0) //Position: 0x5E86 / 24198
{
	return Function_184(Global_78617.f_52, iParam0);
}

int Function_184(var uParam0, bool bParam1) //Position: 0x5E97 / 24215
{
	return (uParam0 && bParam1) == 0;
}

bool Function_185() //Position: 0x5EA4 / 24228
{
	return Function_183(1);
}

void Function_186() //Position: 0x5EAE / 24238
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_437(bVar0))
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
	if (Function_430(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_427(bVar0))
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
	if (Function_417(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_415(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_410(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_409(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_408(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_405(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_395(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_394(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_393(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_392(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_391(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_388(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_387(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_386(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_383(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_382(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_381(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_379(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_375(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_374(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_358(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_357(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_356(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_355(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_354(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_353(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_352(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_351(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_350(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_349(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_348(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_347(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_346(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_345(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_344(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_342(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_339(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_335(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_334(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_204(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_203(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_202(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_195(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_194(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_193(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_192(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_191(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_190(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_187(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_187(bool bParam0) //Position: 0x617A / 24954
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_188(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_188(bool bParam0, bool bParam1, bool bParam2) //Position: 0x619F / 24991
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_189(bParam0), Function_174()) == 0)
		{
			ADD_ITEM(Function_189(bParam0), Function_174(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_189(bParam0), Function_174(), bParam2);
	return 1;
}

var Function_189(bool bParam0) //Position: 0x61EA / 25066
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

bool Function_190(bool bParam0) //Position: 0x62DB / 25307
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "playemitteroncurve"))
	{
		bVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		bVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", bVar0, 5.0f);
		UNK_0x6745191B(bVar1, 180.0f, 0.0f, 0.0f);
		return 1;
	}
	return 0;
}

bool Function_191(bool bParam0) //Position: 0x6352 / 25426
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_192(bool bParam0) //Position: 0x6381 / 25473
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_40(1, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_193(bool bParam0) //Position: 0x63A8 / 25512
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

bool Function_194(bool bParam0) //Position: 0x648A / 25738
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

bool Function_195(bool bParam0) //Position: 0x6537 / 25911
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
			Function_196(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_196(int iParam0, bool bParam1) //Position: 0x6574 / 25972
{
	bool bVar0;
	int iVar1;
	
	Function_201(iParam0, bParam1, 0);
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
	iVar1 = Function_200(iParam0, 4294967295);
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
	iVar1 = Function_197();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_197() //Position: 0x6700 / 26368
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
	Function_198();
	return 0;
}

void Function_198() //Position: 0x679F / 26527
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
		Function_199(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_199(int iParam0) //Position: 0x684E / 26702
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

var Function_200(int iParam0, int iParam1) //Position: 0x68AC / 26796
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

int Function_201(int iParam0, bool bParam1, int iParam2) //Position: 0x68ED / 26861
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
	Function_91(iParam0, bParam1, 1);
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_79(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_202(bool bParam0) //Position: 0x6AF7 / 27383
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_196(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_203(bool bParam0) //Position: 0x6B2E / 27438
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

bool Function_204(bool bParam0) //Position: 0x6B80 / 27520
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
					Function_205(Function_329(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_205(Function_329(0, 24, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_205(Function_329(0, 12, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 13, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_205(Function_329(0, 8, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 9, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 23, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_205(Function_329(0, 10, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 11, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 17, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_205(Function_329(0, 18, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 19, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_205(Function_329(0, 2, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 3, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 22, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 6, 1), 0, 1, 1, 0);
					Function_205(Function_329(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_205(Function_329(1, 30, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 33, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 32, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_205(Function_329(1, 34, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_205(Function_329(1, 27, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 26, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 28, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 29, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_205(Function_329(1, 39, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 37, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 38, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 41, 1), 0, 1, 1, 0);
					Function_205(Function_329(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_205(Function_329(2, 45, 1), 0, 1, 1, 0);
					Function_205(Function_329(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_205(Function_329(2, 43, 1), 0, 1, 1, 0);
					Function_205(Function_329(2, 47, 1), 0, 1, 1, 0);
					Function_205(Function_329(2, 48, 1), 0, 1, 1, 0);
					Function_205(Function_329(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_205(Function_329(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_205(Function_329(3, 49, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 55, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 56, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 52, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 53, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 54, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 50, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 51, 1), 0, 1, 1, 0);
					Function_205(Function_329(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_205(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x7018 / 28696
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_328(12);
	Function_326(2);
	Function_324((15 - Function_325(105)));
	if (Function_323(bParam0) == 1)
	{
		iVar2 = Function_322(bParam0);
		Function_316(&(Global_3422[iVar240]));
		Function_315(4194304);
		if (bParam3)
		{
			Function_276(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_271(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_276(iVar2, &uVar0, 0);
		}
		bVar1 = Function_270();
		if (bParam1)
		{
			Function_258(iVar2, bParam0, bVar1);
			Function_257();
		}
	}
	Function_218(bParam0, bParam1, iParam2, bVar1);
	if (Function_323(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_211(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_323(bParam0) == 1)
		{
			iVar2 = Function_322(bParam0);
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
	Function_206();
}

void Function_206() //Position: 0x7105 / 28933
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_207(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_207(int iParam0, bool bParam1) //Position: 0x7135 / 28981
{
	int iVar0;
	
	iVar0 = Function_209(iParam0);
	if (!Function_208(iVar0))
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

bool Function_208(int iParam0) //Position: 0x7172 / 29042
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_209(int iParam0) //Position: 0x7189 / 29065
{
	if (!Function_210(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_210(int iParam0) //Position: 0x71A3 / 29091
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_211(int iParam0, bool bParam1) //Position: 0x71B9 / 29113
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
							Function_212(Global_34573, 0x1000000, 3, 0);
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
							Function_212(Global_34573, 0x1000000, 3, 0);
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
							Function_212(Global_34573, 0x1000000, 3, 0);
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
							Function_212(Global_34573, 0x1000000, 3, 0);
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
							Function_212(Global_34573, 0x1000000, 3, 0);
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
							Function_212(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_211(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_211(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_211(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_211(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_211(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_211(57, 0);
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

void Function_212(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x74B0 / 29872
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_214(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_213(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_213(char* cParam0, int iParam1) //Position: 0x751C / 29980
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

bool Function_214(bool bParam0, var uParam1, int iParam2) //Position: 0x7553 / 30035
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
		if (Function_217(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_216(uVar0))
		{
			case 0x00000002:
				if (!Function_215(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_215(var uParam0, int iParam1) //Position: 0x75CB / 30155
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_216(char* cParam0) //Position: 0x75DE / 30174
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

int Function_217(int iParam0) //Position: 0x767F / 30335
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_9(&iVar1, 2147483648);
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

void Function_218(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x76BC / 30396
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_255(bParam0))
	{
		Function_253();
		return;
	}
	iVar0 = Function_323(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_322(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_251(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_247();
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
		Function_245("DEED_COMPLETE", bParam0);
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
			Function_240(bParam0);
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
						switch (Function_322(bParam0))
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
			Function_221(1);
			Function_220(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_219(bParam0, &Var14);
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

void Function_219(int iParam0, int iParam1) //Position: 0x78CE / 30926
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_220(bool bParam0, int iParam1) //Position: 0x7908 / 30984
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_34())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_221(bool bParam0) //Position: 0x794A / 31050
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_233();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_222();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_9(&Global_63095, 1);
		Function_9(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_222() //Position: 0x799B / 31131
{
	Function_232();
	Function_231();
	Function_231();
	Function_230();
	Function_230();
	Function_229();
	Function_229();
	Function_228();
	Function_228();
	if (!Function_34())
	{
		Function_227();
		Function_226();
		Function_225();
		Function_224();
	}
	Function_223();
	return;
}

void Function_223() //Position: 0x79CE / 31182
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

void Function_224() //Position: 0x7AD4 / 31444
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

void Function_225() //Position: 0x7B07 / 31495
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

void Function_226() //Position: 0x7C95 / 31893
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

void Function_227() //Position: 0x7E49 / 32329
{
	Function_149(&Global_28260, 1, 0);
	return;
}

struct<8> Function_228() //Position: 0x7E57 / 32343
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
				iVar2 = ((Function_92((50 + iVar4)) + Function_92((183 + iVar4))) + Function_92((90 + iVar4)));
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
	Function_78(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_229() //Position: 0x7EF2 / 32498
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
		iVar2 = ((Function_92((50 + iVar3) + 15) + Function_92((183 + iVar3) + 15)) + Function_92((90 + iVar3) + 15));
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
	Function_78(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_230() //Position: 0x7F7B / 32635
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
			iVar2 = ((Function_92((50 + iVar3) + 8) + Function_92((183 + iVar3) + 8)) + Function_92((90 + iVar3) + 8));
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
	Function_78(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_231() //Position: 0x801A / 32794
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
		iVar2 = ((Function_92((50 + iVar3)) + Function_92((183 + iVar3))) + Function_92((90 + iVar3)));
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
	Function_78(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_232() //Position: 0x8099 / 32921
{
	Function_201(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_78(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_233() //Position: 0x80BF / 32959
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_235(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_235(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_234(StackVal, StackVal, vVar0))
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

bool Function_234(vector3 vParam0) //Position: 0x8160 / 33120
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_235(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8178 / 33144
{
	int iVar0;
	
	iVar0 = Function_238(uParam2, uParam3);
	if (Function_237(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_8(&Global_63095, 1);
			Function_9(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_8(&Global_63095, 2);
			Function_9(&Global_63095, 1);
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
		Function_8(&Global_63095, 2);
		Function_9(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_236();
	return StackVal, StackVal, Function_236();
}

vector3 Function_236() //Position: 0x825F / 33375
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_237(int iParam0) //Position: 0x8268 / 33384
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_238(bool bParam0, bool bParam1) //Position: 0x827E / 33406
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
				fVar2 = Function_239(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_239(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_237(bVar0) && !bParam1)
	{
		bVar0 = Function_238(bParam0, 1);
	}
	return bVar0;
}

float Function_239(vector3 vParam0, vector3 vParam3) //Position: 0x8345 / 33605
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_240(bool bParam0) //Position: 0x8362 / 33634
{
	bool bVar0;
	int iVar1;
	
	if (!Function_208(bParam0))
	{
		return;
	}
	switch (Function_323(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_322(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_244(12, 1, 0, 0);
				Function_243(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_244(13, 1, 0, 0);
				Function_243(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_244(14, 1, 0, 0);
				Function_243(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_244(15, 1, 0, 0);
				Function_243(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_244(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_322(bParam0))
			{
				case 0x00000000:
					if (Function_242(bParam0) == 1)
					{
						bVar0 = Function_241(bParam0);
						if (Function_44(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_243(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_243(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_243(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_243(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_243(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_243(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_243(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_243(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_243(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_243(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_243(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_243(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_243(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_243(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_243(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_243(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_243(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_243(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_243(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_243(4, 19);
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
								Function_244(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_244(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_244(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_241(bParam0) == 0)
			{
				if (Function_242(bParam0) == 1)
				{
					Function_244(458, 1, 0, 0);
					bVar0 = Function_322(bParam0);
					if (Function_44(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_243(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_243(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_243(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_243(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_243(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_243(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_243(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_243(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_242(bParam0) == 1)
			{
				Function_244(400, 1, 0, 0);
			}
			switch (Function_322(bParam0))
			{
				case 0x00000001:
					Function_244(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_243(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_243(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_243(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_244(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_243(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_243(6, 9);
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

int Function_241(bool bParam0) //Position: 0x883E / 34878
{
	if (!Function_208(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_242(bool bParam0) //Position: 0x885D / 34909
{
	if (!Function_208(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_243(int iParam0, bool bParam1) //Position: 0x8877 / 34935
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

int Function_244(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x88DE / 35038
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
	Function_91(iParam0, TO_FLOAT(bParam1), 1);
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_79(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_245(char* cParam0, bool bParam1) //Position: 0x8AFE / 35582
{
	struct<4> Var0;
	
	if (!Function_255(bParam1))
	{
		return;
	}
	switch (Function_323(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_246(Function_322(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_323(bParam1), Function_322(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_323(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_323(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_323(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_323(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_323(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_246(int iParam0) //Position: 0x8C22 / 35874
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_247() //Position: 0x8C47 / 35911
{
	int iVar0;
	int iVar1;
	
	if (!Function_210(Global_6269))
	{
		return;
	}
	iVar0 = Function_92(24);
	iVar1 = Function_209(Global_6269);
	if (!Function_210(iVar0) && Function_250(iVar1) < 0)
	{
		Function_78(24, Global_6269, 0);
		Function_248(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_250(Function_209(iVar0)))
	{
		Function_78(24, Global_6269, 0);
		Function_248(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_248(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8CC7 / 36039
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
		Function_249(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_249(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x9019 / 36889
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

int Function_250(int iParam0) //Position: 0x909C / 37020
{
	if (!Function_255(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_251(int iParam0) //Position: 0x90B6 / 37046
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_252(char* cParam0) //Position: 0x90E0 / 37088
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

void Function_253() //Position: 0x9336 / 37686
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
			Function_254(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_254(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x957D / 38269
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_255(int iParam0) //Position: 0x95A6 / 38310
{
	if (!Function_208(iParam0))
	{
		return 0;
	}
	if (!Function_256(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_256(int iParam0) //Position: 0x95CA / 38346
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_257() //Position: 0x95DF / 38367
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

void Function_258(int iParam0, int iParam1, bool bParam2) //Position: 0x960D / 38413
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
	
	if (!Function_210(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_269(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_92(42) - Global_34165.f_116);
				bVar1 = (Function_92(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_89(49)) - Global_34165.f_124);
				bVar3 = (Function_92(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_92(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_268(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_259(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_251(iParam0) };
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

void Function_259(int iParam0, bool bParam1, bool bParam2) //Position: 0x98A9 / 39081
{
	int iVar0;
	bool bVar1;
	
	if (Function_267(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_92(3);
	Function_264();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_263(3, bVar1);
		if (!bParam2)
		{
			if (!Function_215(Global_76848, 4))
			{
				Function_212(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_244(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_88(3));
	iVar0 = Function_92(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_261(4, Function_262(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_261(4, Function_262(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_261(4, Function_262(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_261(4, Function_262(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_261(4, Function_262(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
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

void Function_260(int iParam0, int iParam1) //Position: 0x9A6C / 39532
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

int Function_261(int iParam0, char* cParam1, bool bParam2) //Position: 0x9CCA / 40138
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
	Function_248(iParam0, cParam1, 0, 1);
	iVar1 = Function_197();
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

var Function_262(int iParam0) //Position: 0x9E4F / 40527
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

int Function_263(int iParam0, bool bParam1) //Position: 0x9EDE / 40670
{
	bool bVar0;
	int iVar1;
	
	Function_244(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_200(iParam0, 4294967295);
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
	iVar1 = Function_197();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

void Function_264() //Position: 0xA07B / 41083
{
	Function_266(3, 0.0f);
	Function_265(3, 10000.0f);
	return;
}

int Function_265(int iParam0, int iParam1) //Position: 0xA091 / 41105
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_266(int iParam0, int iParam1) //Position: 0xA0D1 / 41169
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_267(int iParam0) //Position: 0xA111 / 41233
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_268(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xA120 / 41248
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

int Function_269(int iParam0) //Position: 0xA2E8 / 41704
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

var Function_270() //Position: 0xA37D / 41853
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_271(int iParam0) //Position: 0xA3A2 / 41890
{
	if (!Function_210(iParam0))
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
			Function_259(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_259(25, 1, 0);
			Function_275(1, 1);
			break;
		
		case 0x00000015:
			Function_275(50, 1);
			Function_259(250, 1, 0);
			Function_272(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_259(75, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_259(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_275(50, 1);
			Function_259(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_275(5, 1);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_259(75, 1, 0);
			Function_272(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_275(5, 1);
			Function_259(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_259(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_275(25, 1);
			Function_259(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_275(10, 1);
			Function_259(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_259(50, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_259(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_259(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_272(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_275(20, 1);
			Function_259(75, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_275(25, 1);
			Function_259(150, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_275(10, 1);
			Function_259(150, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_259(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_272(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_272(100, 1, 0);
			Function_275(5, 1);
			break;
		
		case 0x0000000F:
			Function_275(3, 1);
			Function_259(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_272(125, 1, 0);
			Function_259(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_275(50, 1);
			Function_259(100, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_275(50, 1);
			Function_259(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_275(75, 1);
			Function_259(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_259(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_259(75, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_259(250, 1, 0);
			Function_272(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_259(75, 1, 0);
			Function_272(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_259(200, 1, 0);
			Function_272(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_259(75, 1, 0);
			Function_272(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_259(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_275(50, 1);
			Function_259(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_275(100, 1);
			Function_259(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_259(200, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_259(300, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_259(300, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_259(300, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_259(500, 1, 0);
			Function_272(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_259(150, 1, 0);
			Function_272(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_272(25, 1, 0);
			Function_275(100, 1);
			break;
		
		case 0x0000002A:
			Function_259(150, 1, 0);
			Function_272(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_272(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_272(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_272(150, 1, 0);
			Function_275(100, 1);
			break;
		
		case 0x00000035:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_272(150, 1, 0);
			Function_275(100, 1);
			break;
		
		case 0x00000032:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_272(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_272(int iParam0, bool bParam1, bool bParam2) //Position: 0xA85D / 43101
{
	int iVar0;
	bool bVar1;
	
	if (Function_267(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_92(1);
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
			Function_263(1, bVar1);
			if (!bParam2)
			{
				if (!Function_215(Global_76848, 1))
				{
					Function_212(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_274(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_215(Global_76848, 2))
				{
					Function_212(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_244(1, bVar1, 0, 0);
	}
	else
	{
		Function_93(1, (4294967295 * bVar1), 0);
	}
	if (Function_92(1) <= 4294962296)
	{
		Function_78(1, 4294962296, 0);
	}
	else if (Function_92(1) >= 5000)
	{
		Function_78(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_88(1));
	iVar0 = Function_92(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_261(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_261(2, Function_273(Global_12976.f_152), 0);
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
				Function_261(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_261(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_261(2, Function_273(Global_12976.f_152), 1);
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
				Function_261(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_261(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_261(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_261(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_261(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_261(2, Function_273(Global_12976.f_152), 1);
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
				Function_261(2, Function_273(Global_12976.f_152), 0);
			}
			break;
	}
	Function_260(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_273(int iParam0) //Position: 0xAB72 / 43890
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

int Function_274(int iParam0, bool bParam1) //Position: 0xAC15 / 44053
{
	bool bVar0;
	int iVar1;
	
	Function_93(iParam0, bParam1, 0);
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
	iVar1 = Function_200(iParam0, 4294967295);
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
	iVar1 = Function_197();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_275(bool bParam0, bool bParam1) //Position: 0xADB1 / 44465
{
	bool bVar0;
	
	bVar0 = Function_92(0);
	if ((Function_92(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_244(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_92(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_244(597, bParam0, 0, 0);
	}
	if ((Function_92(597) + Function_92(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_276(int iParam0, var uParam1, bool bParam2) //Position: 0xAE7C / 44668
{
	struct<4> Var0;
	
	if (!Function_210(iParam0))
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
			Function_314(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_312(Global_30640[0]);
			Function_312(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_311(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_312(Global_30668[0]);
			Function_303(0);
			Function_301(2, 1);
			Function_301(0, 1);
			Function_301(1, 1);
			break;
		
		case 0x00000003:
			Function_312(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_312(Global_30668[0]);
			Function_312(Global_30640[0]);
			Function_299(0, 1);
			Function_299(15, 1);
			Function_299(9, 1);
			Function_299(12, 1);
			Function_299(16, 1);
			Function_301(3, 1);
			break;
		
		case 0x00000005:
			Function_312(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_311(21, bParam2, 4);
			Function_312(Global_30668[0]);
			Function_301(39, 1);
			break;
		
		case 0x00000007:
			Function_312(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_312(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_298(4))
					{
						Function_291(4, 0, 0, 1);
					}
				}
			}
			Function_312(Global_30640[0]);
			Function_312(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_312(Global_30640[0]);
			Function_312(Global_30668[2]);
			Function_39(&(Global_29008[Global_30668[2]]), 32768);
			Function_43(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_311(9, bParam2, 4);
			Function_312(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_312(Global_30640[0]);
			Function_312(Global_30658[0]);
			Function_39(&(Global_29008[Global_30658[0]]), 32768);
			Function_43(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_312(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_312(Global_30640[0]);
			Function_312(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_312(Global_30640[1]);
			Function_312(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_312(Global_30679[0]);
			Function_312(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_312(Global_30658[5]);
			Function_312(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_311(21, bParam2, 4);
			Function_312(Global_30640[4]);
			Function_312(Global_30658[4]);
			Function_290(&Global_76847, 0x2000000);
			Function_290(&Global_76847, 0x4000000);
			Function_290(&Global_76847, 4096);
			Function_290(&Global_76847, 8);
			Function_290(&Global_76847, 8388608);
			Function_290(&Global_76847, 524288);
			Function_290(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_312(Global_30640[4]);
			Function_312(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_43(&(Global_29008[Global_30640[4]]), 256);
			Function_312(Global_30640[4]);
			Function_312(Global_30658[0]);
			Function_39(&(Global_29008[Global_30658[0]]), 32768);
			Function_43(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_312(Global_30640[0]);
			Function_312(Global_30640[5]);
			Function_311(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_312(Global_30658[3]);
			Function_39(&(Global_29008[Global_30658[3]]), 32768);
			Function_43(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_311(9, bParam2, 4);
			Function_312(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_39(&(Global_29008[Global_30679[1]]), 32768);
			Function_312(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_311(12, bParam2, 4);
			Function_43(&(Global_29008[Global_30679[1]]), 256);
			Function_312(Global_30668[3]);
			Function_312(Global_30693[0]);
			Function_312(Global_30685[0]);
			Function_303(4);
			Function_299(13, 1);
			Function_299(1, 1);
			Function_299(18, 1);
			Function_301(34, 1);
			Function_301(44, 1);
			Function_301(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_311(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_312(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_312(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_312(Global_30693[0]);
			Function_312(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_312(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_312(Global_30685[0]);
			Function_312(Global_30693[0]);
			Function_312(Global_30693[1]);
			Function_312(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_311(23, bParam2, 3);
			Function_299(23, 1);
			Function_312(Global_30685[0]);
			Function_312(Global_30685[2]);
			Function_39(&(Global_29008[Global_30685[2]]), 32768);
			Function_43(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_311(19, bParam2, 4);
			Function_312(Global_30685[0]);
			Function_312(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_311(24, bParam2, 3);
			Function_299(24, 1);
			Function_312(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_312(Global_30685[0]);
			Function_312(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_312(Global_30693[12]);
			Function_312(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_312(Global_30693[12]);
			Function_312(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_311(25, bParam2, 10);
			Function_312(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_312(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_312(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_311(13, bParam2, 4);
			Function_312(Global_30693[2]);
			Function_312(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_298(8))
				{
					Function_291(8, 0, 0, 1);
				}
			}
			Function_312(Global_30685[0]);
			Function_303(9);
			Function_299(7, 1);
			Function_299(11, 1);
			Function_299(3, 1);
			Function_299(20, 1);
			Function_301(57, 1);
			break;
		
		case 0x0000002A:
			Function_311(2, bParam2, 4);
			Function_312(Global_30717[0]);
			Function_312(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_312(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_312(Global_30717[0]);
			Function_312(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_312(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_312(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_312(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_311(17, bParam2, 4);
			Function_312(Global_30723[0]);
			Function_312(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_288(15))
				{
					Function_283(15, 0, 1);
				}
			}
			Function_43(&(Global_29008[Global_30717[1]]), 256);
			Function_303(11);
			Function_312(Global_30717[1]);
			Function_312(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_312(Global_30717[1]);
			Function_312(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_312(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_312(Global_30717[1]);
			Function_277(11);
			Function_303(12);
			Global_16537[1121].f_40 = 0;
			Function_301(56, 1);
			if (!bParam2)
			{
				if (!Function_298(9))
				{
					Function_291(9, 0, 0, 0);
				}
				if (!Function_298(10))
				{
					Function_291(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_246(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_277(int iParam0) //Position: 0xB76C / 46956
{
	bool bVar0;
	
	if (!Function_237(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_282(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_282(Global_16537[iParam021].f_72, 0);
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
			Function_278(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_278(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB8DB / 47323
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
		Function_280(Function_281(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_280(Function_281(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_280(StackVal);
				vVar1 = { StackVal, StackVal, Function_280(StackVal) };
				if (Function_279(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_279(vector3 vParam0, vector3 vParam3) //Position: 0xB9E1 / 47585
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_280(bool bParam0) //Position: 0xBA0E / 47630
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
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

var Function_281(vector3 vParam0) //Position: 0xBA65 / 47717
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

void Function_282(bool bParam0, bool bParam1) //Position: 0xBAB3 / 47795
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

void Function_283(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBB07 / 47879
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_287(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_288(bParam0))
	{
		if (!Function_298(bParam0))
		{
			Function_291(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_244(457, 1, 0, 0);
		Function_286(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_285(0, 0, 1, 1))
			{
				Function_221(1);
				Function_220(1, 0);
			}
			else
			{
				Function_284();
			}
		}
	}
	return;
}

void Function_284() //Position: 0xBCA5 / 48293
{
	return;
}

bool Function_285(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBCAB / 48299
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

void Function_286(bool bParam0, int iParam1) //Position: 0xBD4F / 48463
{
	if (!Function_287(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_287(int iParam0) //Position: 0xBDA4 / 48548
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_288(int iParam0) //Position: 0xBDBA / 48570
{
	if (!Function_287(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_289(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_289(int iParam0, int iParam1) //Position: 0xBE0B / 48651
{
	int iVar0;
	
	if (!Function_287(iParam0))
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

void Function_290(var uParam0, int iParam1) //Position: 0xBE38 / 48696
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBE47 / 48711
{
	struct<8> Var0;
	
	if (!Function_287(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_297(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_298(bParam0))
	{
		Function_244(456, 1, 0, 0);
		Function_286(bParam0, 2);
		if (bParam2)
		{
			if (!Function_285(0, 0, 1, 1))
			{
				Function_221(1);
				Function_220(1, 5);
			}
			else
			{
				Function_284();
			}
		}
		Function_293(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_292() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_292() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_160(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_215(Global_76846, 2))
		{
			Function_212(Global_34573, 2, 1, 0);
		}
	}
}

bool Function_292() //Position: 0xBF91 / 49041
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_293(bool bParam0) //Position: 0xBFBE / 49086
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
			if (Function_296(bParam0, Function_51(bVar24)))
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
			if (Function_296(bParam0, Function_51(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_295(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_106(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_294(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_294(int iParam0) //Position: 0xC16F / 49519
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_287(iParam0))
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

var Function_295(int iParam0) //Position: 0xC1C6 / 49606
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_287(iParam0))
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

bool Function_296(bool bParam0, int iParam1) //Position: 0xC21C / 49692
{
	int iVar0;
	
	if (!Function_287(bParam0))
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

bool Function_297(int iParam0) //Position: 0xC27B / 49787
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_298(int iParam0) //Position: 0xC297 / 49815
{
	if (!Function_287(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_289(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_299(int iParam0, int iParam1) //Position: 0xC2E9 / 49897
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_300(iParam0, iParam1);
	Function_212(Global_34573, 1, 4, 1);
	return 1;
}

int Function_300(int iParam0, int iParam1) //Position: 0xC35C / 50012
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_301(int iParam0, int iParam1) //Position: 0xC3B8 / 50104
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_302(iParam0, iParam1);
	Function_212(Global_34573, 1, 4, 1);
	return 1;
}

int Function_302(int iParam0, int iParam1) //Position: 0xC429 / 50217
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_303(int iParam0) //Position: 0xC483 / 50307
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_237(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_310(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_310(Global_16537[iParam021].f_72, 0);
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
			Function_244(468, 1, 0, 0);
			Function_243(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_160("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_278(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_291(14, 1, 0, 0);
				Function_304(14, 1, 0, 0, 0);
			}
			if (!Function_285(0, 0, 1, 1))
			{
				Function_221(1);
				Function_220(1, 6);
			}
			else
			{
				Function_284();
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
			Function_160("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_244(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_243(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_304(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xC72F / 50991
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_287(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_297(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_289(bParam0, 2))
	{
		Function_244(456, 1, 0, 0);
		Function_286(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_160(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_296(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_286(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_285(0, 0, 1, 1))
			{
				Function_221(1);
				Function_220(1, 0);
			}
			else
			{
				Function_284();
			}
		}
		Function_293(bParam0);
		if (StackVal && !Function_10(((((!Function_292() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_10((((Function_292() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_215(Global_76846, 2))
		{
			Function_212(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_306();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_305(3, bParam1);
				break;
			
			case 0x00000005:
				Function_305(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_305(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_305(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_305(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_305(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_243(2, 24);
				break;
			
			case 0x00000003:
				Function_243(2, 25);
				break;
			
			case 0x0000000F:
				Function_243(2, 26);
				break;
			
			case 0x0000000D:
				Function_243(2, 27);
				break;
			
			case 0x0000000E:
				Function_243(2, 28);
				break;
			}
	}
}

void Function_305(int iParam0, bool bParam1) //Position: 0xC9BE / 51646
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

void Function_306() //Position: 0xCA1D / 51741
{
	if (Function_287(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_309(Global_28180);
			Global_28180.f_8 = Function_307(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_309(Global_28180);
			Global_28180.f_8 = Function_307(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_307(int iParam0, int iParam1) //Position: 0xCA98 / 51864
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
					if (Function_207(6, 0) || Function_207(12, 0))
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
					if (Function_308(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_207(5, 0))
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
					if (Function_308(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_308(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_308(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_308(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_207(26, 0))
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
					if (Function_308(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_308(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_308(27) && iVar18)
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
					if (Function_308(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_308(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_308(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_308(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_207(17, 0) && iVar15)
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
					if (Function_308(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_207(6, 0) && Function_308(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_308(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_207(9, 0) && Function_308(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_308(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_207(8, 0) && iVar19)
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
	if (Function_234(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_234(StackVal, StackVal, vVar3))
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
	if (!Function_234(StackVal, StackVal, vVar3))
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

int Function_308(int iParam0) //Position: 0xD689 / 54921
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_309(int iParam0) //Position: 0xD69E / 54942
{
	int iVar0;
	int iVar1;
	
	if (!Function_287(iParam0))
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

void Function_310(bool bParam0, bool bParam1) //Position: 0xD6ED / 55021
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

void Function_311(bool bParam0, bool bParam1, int iParam2) //Position: 0xD73E / 55102
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_57(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_314(bParam0, 0, 0);
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

void Function_312(int iParam0) //Position: 0xD7AC / 55212
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_37(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_39(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_244(473, 1, 0, 0);
		iVar0 = Function_313(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_244(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_244(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_244(476, 1, 0, 0);
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
		Function_243(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_243(7, 30);
	}
	if (Function_88(473) <= Function_89(473))
	{
		if (!Function_34())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_313(bool bParam0) //Position: 0xD8AB / 55467
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_44(bParam0))
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

int Function_314(bool bParam0, bool bParam1, int iParam2) //Position: 0xD903 / 55555
{
	if (!Function_55(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_174(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_174(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_174(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

void Function_315(int iParam0) //Position: 0xD95A / 55642
{
	int iVar0;
	
	if (Function_10(iParam0, 1) && Function_10(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_316(int iParam0) //Position: 0xD98E / 55694
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
			Function_317(4, 0, 0);
		}
	}
	return;
}

void Function_317(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD9F5 / 55797
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
		Function_318(Global_16524, bVar0, 1);
	}
	return;
}

void Function_318(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDAD2 / 56018
{
	int iVar0;
	
	Function_321(bParam0);
	Function_320(bParam1);
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
	Function_319();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_319() //Position: 0xDC4B / 56395
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_320(bool bParam0) //Position: 0xDC57 / 56407
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

void Function_321(int iParam0) //Position: 0xDC9D / 56477
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

int Function_322(bool bParam0) //Position: 0xDCE3 / 56547
{
	if (!Function_208(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_323(bool bParam0) //Position: 0xDD03 / 56579
{
	if (!Function_208(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_324(int iParam0) //Position: 0xDD1E / 56606
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_325(105)), 0);
	return;
}

int Function_325(int iParam0) //Position: 0xDD3F / 56639
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_326(bool bParam0) //Position: 0xDD55 / 56661
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_320(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_320(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_320(Global_12976.f_24);
	PRINTNL();
	Function_327(bParam0);
	return;
}

void Function_327(int iParam0) //Position: 0xDDF1 / 56817
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_325(90)), 0);
	return;
}

void Function_328(bool bParam0) //Position: 0xDE12 / 56850
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_329(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDE2D / 56877
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_333(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_330(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_330(bParam0, bParam1, bParam2, 4294967295);
}

int Function_330(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xDE8B / 56971
{
	var uVar0;
	
	if (!Function_332(bParam2))
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
	uVar0 = Function_333(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_331(uVar0);
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

int Function_331(int iParam0) //Position: 0xDFE0 / 57312
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

bool Function_332(int iParam0) //Position: 0xE01E / 57374
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_333(int iParam0, int iParam1, int iParam2) //Position: 0xE033 / 57395
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_334(bool bParam0) //Position: 0xE053 / 57427
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

bool Function_335(bool bParam0) //Position: 0xE2C7 / 58055
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
					Function_338();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_338();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_220(0, 4294967295);
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
		Function_338();
		if (Function_336(bVar0))
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

bool Function_336(bool bParam0) //Position: 0xE4BA / 58554
{
	if (bParam0 != 4)
	{
		if (Function_337("xmlsave"))
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
	Function_222();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

bool Function_337(bool bParam0) //Position: 0xE506 / 58630
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_338() //Position: 0xE525 / 58661
{
	struct<5> Var0;
	
	if (Function_34())
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
	if (Function_44(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_339(bool bParam0) //Position: 0xE5B8 / 58808
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
					Function_341();
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
		Function_340(bVar0);
		return 1;
	}
	return 0;
}

int Function_340(bool bParam0) //Position: 0xE6D2 / 59090
{
	if (bParam0 != 4)
	{
		if (Function_337("xmlsave"))
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

var Function_341() //Position: 0xE715 / 59157
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, false, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_342(int iParam0) //Position: 0xE750 / 59216
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
	if (Function_343(cVar0, "streamanddropactorlineup"))
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
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_115(), bVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_343(char* cParam0, char* cParam1) //Position: 0xE8A7 / 59559
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

bool Function_344(char* cParam0) //Position: 0xE8D2 / 59602
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
	if (Function_343(cVar0, "streamanddropactor"))
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
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_115(), bVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_345(bool bParam0) //Position: 0xE9D5 / 59861
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_174();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_346(bool bParam0) //Position: 0xEA02 / 59906
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

bool Function_347(bool bParam0) //Position: 0xEA4C / 59980
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

bool Function_348(bool bParam0) //Position: 0xEA7F / 60031
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

bool Function_349(bool bParam0) //Position: 0xEB3A / 60218
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

bool Function_350(bool bParam0) //Position: 0xEB9E / 60318
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
		Function_236();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_115(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_236());
		return 1;
	}
	return 0;
}

bool Function_351(bool bParam0) //Position: 0xEC55 / 60501
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
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_115(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_236();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_115(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0,3f, 0,1f, -0,3f, Function_236());
		return 1;
	}
	return 0;
}

bool Function_352(bool bParam0) //Position: 0xED6E / 60782
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
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_115(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_115(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_353(bool bParam0) //Position: 0xEE69 / 61033
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_354(bool bParam0) //Position: 0xEEBD / 61117
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

bool Function_355(bool bParam0) //Position: 0xEF67 / 61287
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

bool Function_356(bool bParam0) //Position: 0xEFDC / 61404
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

bool Function_357(bool bParam0) //Position: 0xF0C1 / 61633
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
					stradd(&cVar55, Function_189(bVar17), 64);
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

bool Function_358(bool bParam0) //Position: 0xF486 / 62598
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
					stradd(&cVar52, Function_189(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_360(&Global_26303, Function_372(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_189(bVar72), GET_PLAYER_ACTOR(0), true);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_189(bVar72), GET_PLAYER_ACTOR(0), true);
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
					stradd(&cVar52, Function_189(bVar17), 64);
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
					ADD_ITEM(Function_189(bVar17), GET_PLAYER_ACTOR(0), true);
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
						Function_275(ABS(bVar75), 1);
					}
					else
					{
						Function_359(ABS(bVar75), 1);
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

int Function_359(int iParam0, bool bParam1) //Position: 0xFB32 / 64306
{
	bool bVar0;
	
	bVar0 = Function_92(0);
	if ((Function_92(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_93(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_92(0));
	return 1;
}

int Function_360(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFBC2 / 64450
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_371())
	{
		return 0;
	}
	uParam0->f_16 = Function_370(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_372();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_369(&Var96, iVar1) == 1)
		{
			if (Function_368(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_367(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_366(iVar1))
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
		if (Function_369(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_361(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_361(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xFE2C / 65068
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_362(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_362(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFEB7 / 65207
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
	if (!Function_44(bParam0))
	{
		bParam0 = Global_29005;
	}
	iVar295 = Function_368(bParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_114(StackVal);
		vVar296 = { StackVal, StackVal, Function_114(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_368(Global_29155[iVar59810]) || bParam0 != 4294967295)) != 1) && Function_37(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
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
				if (Function_242(Function_329(iVar598, 0, 2)) == 0)
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
		Function_365(&iVar1, &bVar304, bVar601);
		Function_365(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_85(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_85(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_85(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_85(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_85(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar148[iVar599];
		if (Function_44(bVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_364();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_363(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_114(StackVal);
		vVar296 = { StackVal, StackVal, Function_114(StackVal) };
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
				iVar603 = Function_85(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_85(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_85(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_85(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_85(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar1[iVar599];
		if (Function_44(bVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_364();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_363(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_114(StackVal);
		vVar296 = { StackVal, StackVal, Function_114(StackVal) };
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

struct<32> Function_363(bool bParam0) //Position: 0x10562 / 66914
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_44(bParam0))
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

bool Function_364() //Position: 0x1061F / 67103
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

void Function_365(int iParam0, bool bParam1, int iParam2) //Position: 0x1064D / 67149
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

bool Function_366(bool bParam0) //Position: 0x106DB / 67291
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

int Function_367(bool bParam0) //Position: 0x1072D / 67373
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

int Function_368(bool bParam0) //Position: 0x107DC / 67548
{
	return Function_313(bParam0);
}

bool Function_369(var uParam0, int iParam1) //Position: 0x107E7 / 67559
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

var Function_370(int iParam0) //Position: 0x10F5A / 69466
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

bool Function_371() //Position: 0x11028 / 69672
{
	return Function_10(StackVal, 1);
}

int Function_372() //Position: 0x11037 / 69687
{
	int iVar0;
	
	iVar0 = Function_373(0);
	return iVar0;
}

var Function_373(int iParam0) //Position: 0x11045 / 69701
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_92(358) + Function_92(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_85(iVar1, 7);
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

bool Function_374(bool bParam0) //Position: 0x110C9 / 69833
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_375(bool bParam0) //Position: 0x11123 / 69923
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
		bVar15 = Function_376(StackVal, StackVal, StackVal, bVar18, Function_115(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_376(StackVal, StackVal, StackVal, bVar18, Function_115(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_376(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x11206 / 70150
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_377(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_377(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x11251 / 70225
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_378(&vVar0, uParam2))
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

bool Function_378(int iParam0, int iParam1) //Position: 0x11379 / 70521
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_234(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_234(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_379(bool bParam0) //Position: 0x113E4 / 70628
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
		Function_380(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_115(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(bVar0);
		return 1;
	}
	return 0;
}

var Function_380(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x1148A / 70794
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
				if (Function_34())
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

bool Function_381(bool bParam0) //Position: 0x115D3 / 71123
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

bool Function_382(bool bParam0) //Position: 0x11612 / 71186
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

bool Function_383(bool bParam0) //Position: 0x11898 / 71832
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
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_384(&Var17) };
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
		bVar12 = Function_376(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_384(&Var17) };
			bVar13 = Function_376(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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

struct<32> Function_384(bool bParam0) //Position: 0x11A31 / 72241
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_385("0", &cVar8, ""), 4);
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

struct<32> Function_385(char* cParam0, char* cParam1, char* cParam2) //Position: 0x11A9B / 72347
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_386(int iParam0) //Position: 0x11ABA / 72378
{
	iParam0 = iParam0;
	return 0;
}

bool Function_387(bool bParam0) //Position: 0x11AC5 / 72389
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
						Function_312(iVar2);
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
							Function_312(iVar2);
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

bool Function_388(bool bParam0) //Position: 0x11B54 / 72532
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
					Function_196(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_389(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_389(int iParam0, bool bParam1) //Position: 0x11BC6 / 72646
{
	bool bVar0;
	int iVar1;
	
	Function_390(iParam0, bParam1, 0);
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
	iVar1 = Function_200(iParam0, 4294967295);
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
	iVar1 = Function_197();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_390(int iParam0, bool bParam1, int iParam2) //Position: 0x11D52 / 73042
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
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_79(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_391(bool bParam0) //Position: 0x11F3D / 73533
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

bool Function_392(bool bParam0) //Position: 0x11FC3 / 73667
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_393(bool bParam0) //Position: 0x11FE5 / 73701
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

bool Function_394(bool bParam0) //Position: 0x1204C / 73804
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

bool Function_395(bool bParam0) //Position: 0x120BF / 73919
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
						Function_396(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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
						Function_396(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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

var Function_396(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12338 / 74552
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_404(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_403(iParam1))
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
	if (!Function_399(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_115(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_397();
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

void Function_397() //Position: 0x125C8 / 75208
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_398(bVar0, iVar1);
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

void Function_398(bool bParam0, bool bParam1) //Position: 0x1262B / 75307
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

bool Function_399(bool bParam0) //Position: 0x1265A / 75354
{
	if (Function_402(256))
	{
		return 0;
	}
	if (Function_402(262144))
	{
		return 0;
	}
	if (Function_401())
	{
		return 0;
	}
	if (!Function_402(1))
	{
		return 0;
	}
	if (!Function_402(4096))
	{
		return 0;
	}
	if (bParam0 && Function_400(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_402(2048))
	{
		return 0;
	}
	if (Function_34() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_400(int iParam0) //Position: 0x126D0 / 75472
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_401() //Position: 0x126E1 / 75489
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

bool Function_402(int iParam0) //Position: 0x126FA / 75514
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_403(int iParam0) //Position: 0x12718 / 75544
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_404(int iParam0) //Position: 0x1272E / 75566
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_405(bool bParam0) //Position: 0x12743 / 75587
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
			Function_406(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_406(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x127F8 / 75768
{
	int iVar0;
	bool bVar1;
	
	Function_321(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_407(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_318(StackVal, bVar1, bParam4);
		}
	}
}

void Function_407(int iParam0, int iParam1) //Position: 0x1286A / 75882
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_321(iParam0);
	Function_320(iVar0);
	PRINTNL();
	Function_318(iParam0, iVar0, iParam1);
	return;
}

bool Function_408(bool bParam0) //Position: 0x1288F / 75919
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

bool Function_409(bool bParam0) //Position: 0x128F3 / 76019
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

bool Function_410(bool bParam0) //Position: 0x12930 / 76080
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
			Function_414(1.0f, 0.0f, 1.0f);
			Function_412(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar4 = Function_411(bVar3);
			if (Function_44(bVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_363(bVar4) };
				Function_412(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_411(bool bParam0) //Position: 0x129CD / 76237
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

void Function_412(vector3 vParam0) //Position: 0x12A86 / 76422
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
		Function_413(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_413(bool bParam0) //Position: 0x12B0D / 76557
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

void Function_414(var uParam0, var uParam1, int iParam2) //Position: 0x12B4D / 76621
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_415(bool bParam0) //Position: 0x12B6E / 76654
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
			Function_416(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_416(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x12BCE / 76750
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_417(bool bParam0) //Position: 0x12C05 / 76805
{
	char* cVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = Function_411(cVar0);
			if (Function_44(uVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_363(uVar1), 4);
				Function_418(uVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_418(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x12C6C / 76908
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_419(bool bParam0) //Position: 0x12CA3 / 76963
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

bool Function_420(bool bParam0) //Position: 0x12D02 / 77058
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_426();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_421();
			}
			return 0;
		}
	}
	return 0;
}

int Function_421() //Position: 0x12D5B / 77147
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_425(4))
		{
			Function_315(4);
		}
		else
		{
			Function_424(4);
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
		if (Function_425(1))
		{
			Function_315(1);
		}
		else
		{
			Function_424(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_425(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_425(32))
		{
			Function_315(32);
		}
		else
		{
			Function_424(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_425(64))
		{
			Function_315(64);
		}
		else
		{
			Function_424(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_425(128))
		{
			Function_315(128);
		}
		else
		{
			Function_424(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_402(256))
		{
			Function_423(256);
		}
		else
		{
			Function_422(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_422(int iParam0) //Position: 0x12EB8 / 77496
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_423(int iParam0) //Position: 0x12ED5 / 77525
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0x12EE8 / 77544
{
	if (Function_10(iParam0, 1) && !Function_10(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_425(int iParam0) //Position: 0x12F15 / 77589
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_426() //Position: 0x12F31 / 77617
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

bool Function_427(bool bParam0) //Position: 0x1309E / 77982
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
			bVar0 = Function_429(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_428(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
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

bool Function_428(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x131D4 / 78292
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
		if (!Function_234(StackVal, StackVal, *iParam2))
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
			if (!Function_234(StackVal, StackVal, *iParam2))
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

var Function_429(char* cParam0, bool bParam1) //Position: 0x13306 / 78598
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

bool Function_430(bool bParam0) //Position: 0x1333A / 78650
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_431(iVar1, bParam0);
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

var Function_431(char* cParam0, bool bParam1) //Position: 0x13414 / 78868
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

bool Function_432(bool bParam0) //Position: 0x13526 / 79142
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_431(iVar1, bParam0);
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

bool Function_433(bool bParam0) //Position: 0x136B6 / 79542
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
				bVar0 = Function_431(iVar1, bParam0);
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

bool Function_434(bool bParam0) //Position: 0x1385D / 79965
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
				bVar0 = Function_431(iVar2, bParam0);
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

bool Function_435(bool bParam0) //Position: 0x13AFD / 80637
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
			if (Function_436(bVar1))
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

bool Function_436(int iParam0) //Position: 0x13BAB / 80811
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_437(bool bParam0) //Position: 0x13BC2 / 80834
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

void Function_438(bool bParam0) //Position: 0x13BEC / 80876
{
	if (bParam0)
	{
		Function_182(1);
	}
	else
	{
		Function_181(1);
	}
	return;
}

void Function_439() //Position: 0x13C02 / 80898
{
	struct<13> Var0;
	struct<13> Var16;
	struct<13> Var32;
	
	Global_13039 = 0.0f;
	Global_13039.f_4 = 0.0f;
	Global_13039.f_8 = 1280.0f;
	Global_13039.f_12 = 720.0f;
	Global_13043 = GUI_MAKE_WINDOW(GUI_MAIN_WINDOW(), &Global_13039, "nPlayerGUI", "");
	Var4 = 900.0f;
	Var4.f_4 = 360.0f;
	Var4.f_8 = 1200.0f;
	Var4.f_12 = 380.0f;
	Var0 = 900.0f;
	Var0.f_4 = 390.0f;
	Var0.f_8 = 1200.0f;
	Var0.f_12 = 410.0f;
	Var8 = 900.0f;
	Var8.f_4 = 330.0f;
	Var8.f_8 = 1200.0f;
	Var8.f_12 = 350.0f;
	Var20 = 900.0f;
	Var20.f_4 = 420.0f;
	Var20.f_8 = 1200.0f;
	Var20.f_12 = 440.0f;
	Var24 = 900.0f;
	Var24.f_4 = 135.0f;
	Var24.f_8 = 1200.0f;
	Var24.f_12 = 155.0f;
	Var32 = 900.0f;
	Var32.f_4 = 165.0f;
	Var32.f_8 = 1200.0f;
	Var32.f_12 = 185.0f;
	Var28 = 900.0f;
	Var28.f_4 = 195.0f;
	Var28.f_8 = 1200.0f;
	Var28.f_12 = 215.0f;
	Var12 = 0.0f;
	Var12.f_4 = 650.0f;
	Var12.f_8 = 1280.0f;
	Var12.f_12 = 720.0f;
	Var16 = 0.0f;
	Var16.f_4 = 605.0f;
	Var16.f_8 = 1280.0f;
	Var16.f_12 = 675.0f;
	Global_13057 = 0,85f;
	Global_13057.f_4 = 0,85f;
	Global_13057.f_8 = 0,85f;
	Global_13057.f_12 = 1.0f;
	Global_13061[04] = 0.0f;
	Global_13061[04].f_4 = 0,1f;
	Global_13061[04].f_8 = 0,8f;
	Global_13061[04].f_12 = 1.0f;
	Global_13061[14] = 0.0f;
	Global_13061[14].f_4 = 0,8f;
	Global_13061[14].f_8 = 0,1f;
	Global_13061[14].f_12 = 1.0f;
	Global_13061[24] = 0,8f;
	Global_13061[24].f_4 = 0,7f;
	Global_13061[24].f_8 = 0,5f;
	Global_13061[24].f_12 = 1.0f;
	Global_13086 = 0,875f;
	Global_13086.f_4 = 0,1f;
	Global_13086.f_8 = 0,05f;
	Global_13086.f_12 = 1.0f;
	Global_13090 = 0,438f;
	Global_13090.f_4 = 0,05f;
	Global_13090.f_8 = 0,025f;
	Global_13090.f_12 = 0.0f;
	Global_13044 = GUI_MAKE_TEXT(Global_13043, &Var0, "clock", "nberrylium", 2.0f);
	Global_13045 = GUI_MAKE_TEXT(Global_13043, &Var4, "calendar", "nberrylium", 2.0f);
	Global_13049 = GUI_MAKE_TEXT(Global_13043, &Var20, "deed", "nberrylium", 2.0f);
	Global_13047 = GUI_MAKE_TEXT(Global_13043, &Var12, "ambdebug", "nberrylium", 1,5f);
	Global_13046 = GUI_MAKE_TEXT(Global_13043, &Var8, "pop", "nberrylium", 2.0f);
	Global_13048 = GUI_MAKE_TEXT(Global_13043, &Var16, "stream", "nberrylium", 1,5f);
	Global_13050 = GUI_MAKE_TEXT(Global_13043, &Var24, "pursuit", "nberrylium", 2.0f);
	Global_13052 = GUI_MAKE_TEXT(Global_13043, &Var28, "pursuitclock", "nberrylium", 2.0f);
	Global_13051 = GUI_MAKE_TEXT(Global_13043, &Var32, "pursuitcalendar", "nberrylium", 2.0f);
	GUI_SET_TEXT_JUSTIFY(Global_13044, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13045, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13047, 1);
	GUI_SET_TEXT_JUSTIFY(Global_13048, 1);
	GUI_SET_TEXT_JUSTIFY(Global_13046, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13049, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13050, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13052, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13051, 2);
	GUI_SET_TEXT_COLOR(Global_13044, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13045, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13047, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13046, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13048, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13049, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13050, &Global_13057);
	GUI_SET_TEXT_JUSTIFY(Global_13052, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13051, 2);
	return;
}

void Function_440(int iParam0, int iParam1) //Position: 0x14033 / 81971
{
	iParam0->f_152 = iParam1;
	return;
}

void Function_441(var uParam0) //Position: 0x1403F / 81983
{
	uParam0 = uParam0;
	Function_181(8);
	return;
}

void Function_442(int iParam0, int iParam1) //Position: 0x1404E / 81998
{
	iParam0->f_168 = iParam1;
	return;
}

var Function_443() //Position: 0x1405A / 82010
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<5> Var3;
	bool bVar9;
	bool bVar10;
	struct<5> Var11;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	struct<5> Var26;
	
	iVar0 = 2;
	bVar1 = Function_183(16);
	switch (iLocal_17)
	{
		case 0x00000000:
			bLocal_27 = 100.0f;
			fLocal_28 = 100.0f;
			vLocal_18 = { StackVal, StackVal, Global_76888[03] };
			vLocal_24 = { StackVal, StackVal, Global_76895[03] };
			vLocal_21 = { StackVal, StackVal, vLocal_18 };
			bLocal_29 = false;
			bLocal_30 = true;
			if (Function_183(128))
			{
				bVar2 = Function_464(Function_465());
				if (IS_VOLUME_VALID(bVar2))
				{
					GET_VOLUME_CENTER(bVar2, &vLocal_18);
					GET_VOLUME_SCALE(bVar2, &Var3);
					fLocal_28 = StackVal;
				}
			}
			else if (Function_183(2))
			{
				if (GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar6))
				{
					bVar10 = Function_462(StackVal, StackVal, vVar6, 1);
					bVar9 = Function_464(bVar10);
					if (IS_VOLUME_VALID(bVar9))
					{
						GET_VOLUME_CENTER(bVar9, &vLocal_18);
						GET_VOLUME_SCALE(bVar9, &Var11);
						fLocal_28 = StackVal;
					}
				}
			}
			else if (Function_183(512))
			{
				if (NET_IS_IN_SESSION())
				{
					if (Function_460())
					{
						bVar14 = NET_GET_POSSE_LEADER_SLOT();
						if (IS_SLOT_VALID(bVar14))
						{
							if (!Function_162(bVar14, 2097152, 1))
							{
								if (GET_SLOT_POSITION(bVar14, &vVar15))
								{
									vLocal_18 = { StackVal, StackVal, vVar15 };
									Function_181(64);
									if (Function_458(StackVal, StackVal, vVar15))
									{
										bLocal_27 = 20.0f;
										bLocal_30 = false;
									}
									else
									{
										bLocal_27 = 50.0f;
										Global_76888[03] = { StackVal, StackVal, vVar15 };
									}
								}
							}
							else
							{
								UI_SEND_EVENT("net.PosseTeleportFail");
								vLocal_21 = { StackVal, StackVal, vLocal_18 };
								bLocal_29 = true;
							}
						}
					}
				}
			}
			if (Function_457())
			{
				iVar18 = 0;
				if (Function_183(64))
				{
					if (IS_LAYOUTREF_VALID(Function_456()))
					{
						bVar19 = false;
						bVar20 = Function_455(Function_456(), 0);
						if (!IS_OBJECT_VALID(bVar20))
						{
							bVar20 = Function_454(Global_29006);
						}
						if (IS_OBJECT_VALID(bVar20))
						{
							if (GET_OBJECT_TYPE(bVar20) == 9)
							{
								bVar21 = bVar20;
								iVar18 = 1;
								bVar19 = true;
							}
							else if (GET_OBJECT_TYPE(bVar20) == 10)
							{
								bVar22 = CREATE_OBJECT_ITERATOR(Function_456());
								if (IS_ITERATOR_VALID(bVar22))
								{
									bVar23 = GET_VOLUME_FROM_OBJECT(bVar20);
									ITERATE_IN_VOLUME_SET(bVar22, bVar23);
									bVar24 = Function_453(bVar22);
									if (GET_OBJECT_TYPE(bVar24) == 9)
									{
										bVar21 = bVar24;
										bVar19 = true;
									}
									DESTROY_ITERATOR(bVar22);
								}
							}
							if (bVar19)
							{
								bVar25 = GET_VOLUME_FROM_OBJECT(bVar21);
								GET_VOLUME_CENTER(bVar25, &vLocal_18);
								bLocal_29 = true;
								GENERATE_RANDOM_POINT_IN_VOLUME(bVar25, &vLocal_18);
								GET_VOLUME_SCALE(bVar25, &Var26);
								fLocal_28 = StackVal;
								GET_OBJECT_ORIENTATION(bVar25, &vLocal_24);
								if (FABS(vLocal_24.x) < 5.0f && bVar1)
								{
									vLocal_24.f_4 = (vLocal_24.x - vLocal_24.y);
								}
								if (bVar1 && iVar18)
								{
								}
								else
								{
									vLocal_24.f_4 = (vLocal_24.y + 180.0f);
								}
							}
						}
					}
				}
				bLocal_30 = false;
				bLocal_27 = 50.0f;
			}
			if (fLocal_28 < 100.0f)
			{
				fLocal_28 = 100.0f;
			}
			else if (fLocal_28 > 10.0f)
			{
				fLocal_28 = 10.0f;
			}
			iLocal_17 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				bVar29 = Function_174();
				if (bVar1 && Function_66(bVar29, 3145855))
				{
					MAKE_ACTOR_READY_FOR_ACTION(bVar29, 1);
				}
				STREAMING_OVERRIDE_MAIN_POI(vLocal_18, 0,034f, -0,268f, 0,963f);
				iLocal_17 = 2;
			}
			else
			{
				Function_117(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			}
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (!FIND_GROUND_INTERSECTION(&vLocal_18, fLocal_28, &vLocal_21, &uVar30))
				{
				}
				else
				{
					fLocal_28 = 100.0f;
				}
				if (!bLocal_29)
				{
					Function_446(StackVal, StackVal, vLocal_21, bLocal_27, 20.0f, bLocal_30);
				}
				iLocal_17 = 3;
			}
			break;
		
		case 0x00000003:
			if (bLocal_29 == 1)
			{
			}
			else if (Function_444(&vLocal_21, 1))
			{
				vLocal_24 = { StackVal, StackVal, Global_76895[03] };
			}
			else
			{
				Function_446(StackVal, StackVal, Global_76888[13], bLocal_27, -1.0f, bLocal_30);
				if (Function_444(&vLocal_21, 1))
				{
					vLocal_24 = { StackVal, StackVal, Global_76895[13] };
				}
				else
				{
					vLocal_21 = { StackVal, StackVal, Global_76888[03] };
					vLocal_24 = { StackVal, StackVal, Global_76895[03] };
				}
			}
			STREAMING_RELEASE_MAIN_POI();
			if (Function_74(StackVal, StackVal, StackVal, StackVal, vLocal_21, vLocal_24, bVar1, 1))
			{
				iLocal_17 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_17 = 0;
			Global_76888[03] = { StackVal, StackVal, vLocal_21 };
			Global_76895[03] = { StackVal, StackVal, vLocal_24 };
			Global_76888[13] = { StackVal, StackVal, vLocal_21 };
			Global_76895[13] = { StackVal, StackVal, vLocal_24 };
			Function_181(658);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool Function_444(int iParam0, int iParam1) //Position: 0x1445E / 83038
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6[5];
	float fVar22[5];
	vector3 vVar28;
	int iVar31;
	bool bVar32;
	var uVar33;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (AMBIENT_GET_POINT(&vVar28, 0))
		{
			vVar6[iVar23] = { StackVal, StackVal, vVar28 };
			fVar22[iVar2] = 50.0f;
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		return 0;
	}
	if (NET_IS_IN_SESSION() && iParam1)
	{
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_234(StackVal, StackVal, vVar6[iVar03]))
			{
				bVar1 = false;
				while (bVar1 <= 16)
				{
					if (Function_445(bVar1) && bVar1 == GET_LOCAL_SLOT())
					{
						if (!Function_162(bVar1, 2, 1))
						{
							if (GET_SLOT_POSITION(bVar1, &vVar3))
							{
								bVar32 = VDIST2(vVar3, vVar6[iVar03]);
								if (bVar32 > (fVar22[iVar0] * fVar22[iVar0]))
								{
									fVar22[iVar0] = SQRT(bVar32);
								}
							}
						}
					}
					bVar1++;
				}
			}
			iVar0++;
		}
		iVar31 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_234(StackVal, StackVal, vVar6[iVar03]))
			{
				if (iVar31 == 4294967295)
				{
					iVar31 = iVar0;
				}
				else if (fVar22[iVar0] < fVar22[iVar31])
				{
					iVar31 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar31 == 4294967295)
		{
			return 0;
		}
	}
	iVar31 = 0;
	if (FIND_GROUND_INTERSECTION(&(vVar6[iVar313]), 3.0f, iParam0, &uVar33))
	{
	}
	else
	{
		*iParam0 = { StackVal, StackVal, vVar6[iVar313] };
	}
	return 1;
}

bool Function_445(bool bParam0) //Position: 0x145BA / 83386
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_145(bParam0);
}

void Function_446(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x145D0 / 83408
{
	bool bVar0;
	
	if (bParam5)
	{
		if (Function_458(StackVal, StackVal, vParam0))
		{
			Function_451(StackVal, StackVal, vParam0);
			vParam0 = { StackVal, StackVal, Function_451(StackVal, StackVal, vParam0) };
		}
	}
	AMBIENT_RESET_FILTER(1);
	if (bParam5)
	{
		bVar0 = Function_448(5, 0);
		if (Function_44(bVar0))
		{
			AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
		}
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bParam3);
	if (bParam4 < 0.0f)
	{
		AMBIENT_SET_ELEVATION_FILTER(-bParam4, bParam4);
	}
	Function_447(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(128, 3.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
}

void Function_447(bool bParam0) //Position: 0x14673 / 83571
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

var Function_448(int iParam0, bool bParam1) //Position: 0x14726 / 83750
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	bVar3 = 999999,9f;
	iVar9 = 4294967295;
	if (!Function_450(&vVar0))
	{
		return 4294967295;
	}
	bVar10 = FIND_NAMED_LAYOUT("regions_layout");
	if (!IS_LAYOUTREF_VALID(bVar10))
	{
		return 4294967295;
	}
	bVar11 = CREATE_OBJECT_ITERATOR(bVar10);
	ITERATE_ON_OBJECT_TYPE(bVar11, 9);
	if (!IS_ITERATOR_VALID(bVar11))
	{
		return 4294967295;
	}
	bVar12 = START_OBJECT_ITERATOR(bVar11);
	while (IS_OBJECT_VALID(bVar12))
	{
		iVar8 = Function_449(GET_VOLUME_FROM_OBJECT(bVar12));
		if (iVar8 < 4294967295 && iVar8 > 146)
		{
			if (StackVal != iParam0 && (!bParam1 || !Function_37(&(Global_29008[iVar8]), 4096)))
			{
				GET_OBJECT_POSITION(bVar12, &vVar5);
				bVar4 = VDIST(vVar5, vVar0);
				if (bVar4 > bVar3)
				{
					bVar3 = bVar4;
					iVar9 = iVar8;
				}
			}
		}
		bVar12 = OBJECT_ITERATOR_NEXT(bVar11);
	}
	DESTROY_ITERATOR(bVar11);
	return iVar9;
}

var Function_449(bool bParam0) //Position: 0x147F9 / 83961
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 4294967295;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "regid"))
	{
		return 4294967295;
	}
	if (DECOR_GET_INT_VERBOSE(bParam0, "regid", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

bool Function_450(bool bParam0) //Position: 0x14833 / 84019
{
	bool bVar0;
	
	bVar0 = Function_174();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, bParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(bParam0, 0))
	{
		return 0;
	}
	return 1;
}

vector3 Function_451(vector3 vParam0) //Position: 0x1485D / 84061
{
	vector3 vVar0;
	struct<9> Var3;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (!Function_458(StackVal, StackVal, vParam0))
	{
		return StackVal, StackVal, vParam0;
	}
	Function_236();
	vVar3 = { StackVal, StackVal, Function_236() };
	bVar6 = Function_45(StackVal, StackVal, vParam0, 0, 0, 1);
	bVar7 = 200.0f;
	if (Function_44(bVar6))
	{
		bVar8 = StackVal;
		if (IS_VOLUME_VALID(bVar8))
		{
			if (GET_OBJECT_TYPE(bVar8) == 9)
			{
				GET_VOLUME_SCALE(StackVal, &vVar3);
			}
		}
		iVar9 = (Function_452(vVar3.x, vVar3.z) + 25.0f);
		bVar7 = Function_452(iVar9, bVar7);
	}
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	if (Function_44(bVar6))
	{
		AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bVar7);
	Function_447(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar10, 0))
	{
		if (!Function_458(StackVal, StackVal, vVar10))
		{
			vVar0 = { StackVal, StackVal, vVar10 };
		}
	}
	return StackVal, StackVal, vVar0;
}

float Function_452(int iParam0, int iParam1) //Position: 0x14961 / 84321
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_453(bool bParam0) //Position: 0x14974 / 84340
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_NUM_ITERATOR_MATCHES(bParam0);
	iVar1 = 0;
	bVar2 = "";
	if (iVar0 >= 0)
	{
		iVar1 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar0);
		bVar2 = START_OBJECT_ITERATOR(bParam0);
		while (iVar1 >= 0)
		{
			iVar1 = (iVar1 - 1);
			bVar2 = OBJECT_ITERATOR_NEXT(bParam0);
		}
	}
	return bVar2;
}

bool Function_454(bool bParam0) //Position: 0x149C1 / 84417
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_44(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_455(bool bParam0, bool bParam1) //Position: 0x14A50 / 84560
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(bParam0);
	if (bParam1)
	{
		ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	}
	strcpy(&cVar2, "spawnvol", 24);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar0), &cVar2))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_456() //Position: 0x14AC4 / 84676
{
	return Global_83591.f_140;
}

bool Function_457() //Position: 0x14AD0 / 84688
{
	return Global_78480.f_24 == 4294967294;
}

bool Function_458(vector3 vParam0) //Position: 0x14AE0 / 84704
{
	var uVar0[8];
	int iVar9;
	
	Function_459(&uVar0);
	iVar9 = 0;
	while (iVar9 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar9++;
	}
	return 0;
}

void Function_459(var uParam0) //Position: 0x14B31 / 84785
{
	(*uParam0)[0] = Global_30640[2];
	(*uParam0)[1] = Global_30658[0];
	(*uParam0)[2] = Global_30658[3];
	(*uParam0)[3] = Global_30658[2];
	(*uParam0)[4] = Global_30679[1];
	(*uParam0)[5] = Global_30668[2];
	(*uParam0)[6] = Global_30685[2];
	(*uParam0)[7] = Global_30685[1];
	return;
}

bool Function_460() //Position: 0x14B8F / 84879
{
	return (Function_461() && !NET_IS_POSSE_LEADER());
}

var Function_461() //Position: 0x14B9D / 84893
{
	return NET_GET_POSSE_COUNT() < 1;
}

int Function_462(vector3 vParam0, int iParam3) //Position: 0x14BA8 / 84904
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	bVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_234(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		bVar7 = iVar6;
		if (Function_44(bVar7))
		{
			if (IS_VOLUME_VALID(StackVal) && Function_463(bVar7))
			{
				iVar5 = 0;
				if (iParam3 == 0)
				{
					iVar5 = 1;
				}
				else if (Function_313(Global_29006) == Global_30621[Global_29004])
				{
					iVar5 = 1;
				}
				if (iVar5 == 1)
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (VDIST(vParam0, vVar1) > bVar4)
					{
						bVar0 = bVar7;
						bVar4 = VDIST(vParam0, vVar1);
					}
				}
			}
		}
		iVar6++;
	}
	if (Function_44(bVar0))
	{
	}
	else
	{
		bVar0 = 4294967295;
	}
	return bVar0;
}

bool Function_463(bool bParam0) //Position: 0x14C68 / 85096
{
	if (StackVal == 3)
	{
		return 1;
	}
	if (((bParam0 != Global_30707[1] || bParam0 != Global_30693[1]) || bParam0 != Global_30679[0]) || bParam0 != Global_30640[1])
	{
		return 1;
	}
	return 0;
}

var Function_464(bool bParam0) //Position: 0x14CAD / 85165
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_44(bParam0))
	{
		return "";
	}
	bVar0 = Function_454(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(bVar0);
	}
	if (!IS_VOLUME_VALID(bVar1))
	{
		bVar1 = StackVal;
	}
	return bVar1;
}

var Function_465() //Position: 0x14CEB / 85227
{
	struct<2> Var0[16];
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	
	bVar38 = GET_LOCAL_SLOT();
	iVar35 = 0;
	while (iVar35 <= 16)
	{
		if (iVar35 != bVar38)
		{
			if (Function_445(iVar35))
			{
				bVar37 = Function_466(iVar35);
				if (Function_44(bVar37))
				{
					if (StackVal != 2 || Function_463(bVar37))
					{
						iVar36 = 0;
						while (iVar36 > iVar33 && Var0[iVar362] == bVar37)
						{
							iVar36++;
						}
						if (iVar36 == iVar33)
						{
							Var0[iVar362] = bVar37;
							iVar33++;
						}
						Var0[iVar362].f_4 = StackVal + 1;
						if (StackVal >= StackVal)
						{
							iVar34 = iVar36;
						}
					}
				}
			}
		}
		iVar35++;
	}
	bVar39 = 4294967295;
	if (StackVal >= 0)
	{
		if (Function_463(Var0[iVar342]))
		{
			bVar39 = Var0[iVar342];
		}
		else
		{
			bVar40 = StackVal;
			if (IS_VOLUME_VALID(bVar40))
			{
				Function_114(bVar40);
				bVar39 = Function_462(StackVal, StackVal, Function_114(bVar40), 1);
			}
		}
	}
	if (!Function_44(bVar39))
	{
		bVar39 = Function_462(StackVal, StackVal, Global_34165, 1);
		if (!Function_44(bVar39))
		{
			return Global_30640[0];
		}
	}
	return bVar39;
}

bool Function_466(bool bParam0) //Position: 0x14E0B / 85515
{
	if (!Function_145(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_467();
	}
	return (StackVal % StackVal);
}

bool Function_467() //Position: 0x14E32 / 85554
{
	return StackVal;
}

void Function_468(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x14E3E / 85566
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
	Function_488(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_63(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_487(iParam0, 2);
	Function_485(iParam0);
	Function_483(iParam0);
	Function_481(iParam0);
	Function_479(iParam0);
	Function_476(iParam0);
	Function_473(iParam0);
	Function_470(iParam0);
	if (bParam2)
	{
		Function_8(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_8(iParam0 + 44, 8);
		Function_58(iParam0 + 184);
	}
	Function_469(iParam0, bParam4);
	Function_155(8388608, 0);
}

void Function_469(int iParam0, bool bParam1) //Position: 0x14F06 / 85766
{
	if (bParam1)
	{
		Function_8(iParam0 + 44, 32);
	}
	else
	{
		Function_9(iParam0 + 44, 32);
	}
	return;
}

void Function_470(int iParam0) //Position: 0x14F26 / 85798
{
	Function_471(iParam0, 85825);
	return;
}

void Function_471(var uParam0, var uParam1) //Position: 0x14F35 / 85813
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_472() //Position: 0x14F41 / 85825
{
	return 0;
}

void Function_473(int iParam0) //Position: 0x14F48 / 85832
{
	Function_474(iParam0, 85859);
	return;
}

void Function_474(var uParam0, var uParam1) //Position: 0x14F57 / 85847
{
	uParam0->f_172 = uParam1;
	return;
}

int Function_475() //Position: 0x14F63 / 85859
{
	return 1;
}

void Function_476(int iParam0) //Position: 0x14F6A / 85866
{
	Function_477(iParam0, 85893);
	return;
}

void Function_477(var uParam0, var uParam1) //Position: 0x14F79 / 85881
{
	uParam0->f_156 = uParam1;
	return;
}

void Function_478() //Position: 0x14F85 / 85893
{
	return;
}

void Function_479(int iParam0) //Position: 0x14F8B / 85899
{
	Function_480(iParam0, 85893);
	return;
}

void Function_480(var uParam0, int iParam1) //Position: 0x14F9A / 85914
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_481(int iParam0) //Position: 0x14FA6 / 85926
{
	Function_482(iParam0, 85893);
	return;
}

void Function_482(var uParam0, int iParam1) //Position: 0x14FB5 / 85941
{
	uParam0->f_164 = iParam1;
	return;
}

void Function_483(var uParam0) //Position: 0x14FC1 / 85953
{
	Function_442(uParam0, 85968);
	return;
}

int Function_484() //Position: 0x14FD0 / 85968
{
	return 0;
}

void Function_485(int iParam0) //Position: 0x14FD7 / 85975
{
	Function_440(iParam0, 85990);
	return;
}

void Function_486(var uParam0) //Position: 0x14FE6 / 85990
{
	uParam0 = uParam0;
	return;
}

void Function_487(var uParam0, var uParam1) //Position: 0x14FF0 / 86000
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_488(int iParam0, struct<57> Param1) //Position: 0x14FFC / 86012
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

bool Function_489(int iParam0) //Position: 0x15010 / 86032
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_493();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_492(iParam0[iVar03], 8);
		}
		else if (Function_491())
		{
			iVar1 = 1;
			Function_492(iParam0[iVar03], 8);
		}
		Function_492(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_492(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_492(iParam0[iVar03], 2);
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
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_492(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_492(iParam0[iVar03], 2);
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
	Function_490();
	return 1;
}

void Function_490() //Position: 0x1538B / 86923
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

bool Function_491() //Position: 0x153CB / 86987
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

void Function_492(var uParam0, int iParam1) //Position: 0x153F6 / 87030
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_493() //Position: 0x15407 / 87047
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

var Function_494(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x15449 / 87113
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_492(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_492(uParam0[iVar03], 8);
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

var Function_495() //Position: 0x15519 / 87321
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

