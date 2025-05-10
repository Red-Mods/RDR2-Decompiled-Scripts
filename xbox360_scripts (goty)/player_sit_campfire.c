//Decompiled with MagicRDR v1.0
//Function Count : 32
//Statics Count : 24
//Natives Count : 100
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	vector3 vLocal_3 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	bool bLocal_16 = true;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	bLocal_0 = 100;
	bLocal_1 = false;
	bLocal_2 = false;
	iLocal_15 = 0;
	uScriptParam_0 = uScriptParam_0;
	while (IS_GRINGO_ACTIVE())
	{
		switch (iLocal_15)
		{
			case 0x00000000:
				if (!IS_GRINGO_VALID(bLocal_11))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vLocal_3);
					bLocal_11 = LOCATE_GRINGO_OF_TYPE("rand_idle_sit_ground_player", &vLocal_3, 6.0f, 1);
				}
				else
				{
					GRINGO_SET_USABLE_BY_PLAYER(bLocal_11, "nPlayerUse", 0);
					iLocal_15 = 1;
				}
				break;
			
			case 0x00000001:
				Function_30(&bLocal_16, "custom/Rand_Idle_Sit_Ground_Player", 8, 0);
				Function_30(&bLocal_16, "Rand_Idle_Sit_Ground", 5, 0);
				iLocal_15 = 2;
				break;
			
			case 0x00000002:
				if (Function_24(&bLocal_16))
				{
					iLocal_15 = 3;
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bLocal_11), &vLocal_3);
				vLocal_3.f_4 = (vLocal_3.y + 1.1f);
				if (((!IS_AREA_OBSTRUCTED2(vLocal_3, 0.7f, GET_PHYSINST_FROM_ACTOR(Global_34573), 0, Global_30842[17]) && !IS_ACTOR_RIDING(Global_34573)) && !IS_PLAYER_IN_COMBAT(0)) && !Global_3380)
				{
					if (!IS_LAYOUTREF_VALID(bLocal_9))
					{
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("PlayerSitCampfire_") };
						bLocal_9 = CREATE_LAYOUT(&Var0);
					}
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vLocal_3);
					if (!IS_VOLUME_VALID(bLocal_10))
					{
						bLocal_10 = CREATE_VOLUME_IN_LAYOUT(bLocal_9, Function_21(), 3, vLocal_3, 0.0f, 0.0f, 0.0f, 3.35f, 10.0f, 3.35f);
					}
					bLocal_7 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("sit_camp", bLocal_10, 100, 4, 0, false, 0, 0, 4294967295, 0);
					iLocal_15 = 4;
				}
				break;
			
			case 0x00000004:
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bLocal_11), &vLocal_3);
				vLocal_3.f_4 = (vLocal_3.y + 1.1f);
				if (((IS_AREA_OBSTRUCTED2(vLocal_3, 0.7f, GET_PHYSINST_FROM_ACTOR(Global_34573), 0, Global_30842[17]) || IS_ACTOR_RIDING(Global_34573)) || IS_PLAYER_IN_COMBAT(0)) || Global_3380)
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_7);
					iLocal_15 = 3;
					break;
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_7))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_7);
					vVar8 = { 0.0f, 0.0f, 0.0f };
					vVar11 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bLocal_11), &vVar8);
					GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(bLocal_11), &vVar11);
					Function_19(Global_34573, 0);
					SET_OBJECT_POSITION_ON_GROUND(Global_34573, vVar8);
					SET_OBJECT_ORIENTATION(Global_34573, vVar11);
					SET_ANIM_SET_FOR_ACTOR(Global_34573, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "Rand_Idle_Sit_Ground_Player");
					SET_PLAYER_DISABLE_TARGETING(1, 0);
					DISABLE_PLAYER_GRINGO_USE(0, 1);
					SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
					SATCHEL_SET_ENABLED(0);
					bLocal_1 = true;
					bLocal_6 = Function_16(bLocal_9, 0, Global_34573, 1, 0, 0);
					Function_12(&iLocal_12);
					iLocal_15 = 5;
				}
				break;
			
			case 0x00000005:
				if (Function_9(&iLocal_12, 2.5f))
				{
					bLocal_8 = ADD_SCRIPT_USE_CONTEXT("sit_camp_q", 1000, 4, false, 0, 0, 0, 4294967295, 0);
					DESTROY_OBJECT(bLocal_6);
					iLocal_15 = 6;
				}
				break;
			
			case 0x00000006:
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_8))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_8);
					if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player/D"))
					{
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "Rand_Idle_Sit_Ground_Player/D/pst");
					}
					Function_12(&iLocal_12);
					iLocal_15 = 7;
				}
				break;
			
			case 0x00000007:
				if (!bLocal_2)
				{
					if (Function_5(&iLocal_12) < 2.0f)
					{
						SET_PLAYER_DISABLE_TARGETING(0, 0);
						DISABLE_PLAYER_GRINGO_USE(0, 0);
						SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
						SATCHEL_SET_ENABLED(1);
						bLocal_1 = false;
						bLocal_2 = true;
					}
				}
				if (Function_9(&iLocal_12, 5.0f))
				{
					bLocal_2 = false;
					iLocal_15 = 0;
				}
				break;
		}
		GRINGO_WAIT(bLocal_0);
	}
	if (!bLocal_2)
	{
		SET_PLAYER_DISABLE_TARGETING(0, 0);
		DISABLE_PLAYER_GRINGO_USE(0, 0);
		SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
		SATCHEL_SET_ENABLED(1);
		bLocal_1 = false;
	}
	if (bLocal_1)
	{
		SET_PLAYER_DISABLE_TARGETING(0, 0);
	}
	Function_1(&bLocal_16);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_8))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_8);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_7))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_7);
	}
	if (IS_LAYOUTREF_VALID(bLocal_9))
	{
		DESTROY_LAYOUT(bLocal_9);
	}
	iLocal_15 = 0;
	return;
}

void Function_1(int iParam0) //Position: 0x41E / 1054
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

void Function_2(var uParam0, int iParam1) //Position: 0x444 / 1092
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

void Function_3(var uParam0, int iParam1) //Position: 0x572 / 1394
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x58C / 1420
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

float Function_5(int iParam0) //Position: 0x5A9 / 1449
{
	if (Function_8(iParam0))
	{
		if (Function_6(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_6(int iParam0) //Position: 0x671 / 1649
{
	return Function_7(*iParam0, 2);
}

int Function_7(var uParam0, int iParam1) //Position: 0x67E / 1662
{
	return (uParam0 && iParam1) == 0;
}

bool Function_8(int iParam0) //Position: 0x68B / 1675
{
	return Function_7(*iParam0, 1);
}

bool Function_9(int iParam0, int iParam1) //Position: 0x698 / 1688
{
	if (Function_11(iParam0, iParam1))
	{
		Function_10(iParam0);
		return 1;
	}
	return 0;
}

void Function_10(int iParam0) //Position: 0x6B0 / 1712
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_11(var uParam0, float fParam1) //Position: 0x6C4 / 1732
{
	if (Function_8(uParam0))
	{
		if (Function_5(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_12(int iParam0) //Position: 0x6E0 / 1760
{
	Function_13(iParam0, 0.0f);
	return;
}

void Function_13(var uParam0, float fParam1) //Position: 0x6EC / 1772
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_15(uParam0, 1);
	Function_14(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x70D / 1805
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_15(var uParam0, bool bParam1) //Position: 0x720 / 1824
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_16(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x72F / 1839
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_21(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Rand_Idle_Sit_Ground_Player", 1, 1);
	}
	Function_17(&bVar0, uParam2);
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

void Function_17(var uParam0, int iParam1) //Position: 0x7B8 / 1976
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_18(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
	return;
}

void Function_18(var uParam0, bool bParam1) //Position: 0x7E3 / 2019
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.620196f, 1.594658f, -1.316231f, -21.28498f, 124.6286f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.310334f, 0.680618f, 0.017161f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_19(bool bParam0, bool bParam1) //Position: 0x86F / 2159
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_20(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_20(bool bParam0, bool bParam1) //Position: 0x8CC / 2252
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_21() //Position: 0x8EB / 2283
{
	int iVar0;
	
	return iVar0;
}

struct<32> Function_22(bool bParam0) //Position: 0x8F3 / 2291
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("0", &cVar8, ""), 4);
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

struct<32> Function_23(char* cParam0, char* cParam1, char* cParam2) //Position: 0x95D / 2397
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_24(int iParam0) //Position: 0x97C / 2428
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_29();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_28(iParam0[iVar03], 8);
		}
		else if (Function_27())
		{
			iVar1 = 1;
			Function_28(iParam0[iVar03], 8);
		}
		Function_28(iParam0[iVar03], 16);
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
				Function_28(iParam0[iVar03], 1);
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
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_28(iParam0[iVar03], 2);
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
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_28(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_28(iParam0[iVar03], 2);
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
	Function_25();
	return 1;
}

void Function_25() //Position: 0xCF7 / 3319
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_26(int iParam0) //Position: 0xD37 / 3383
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27() //Position: 0xD53 / 3411
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

void Function_28(var uParam0, int iParam1) //Position: 0xD7E / 3454
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_29() //Position: 0xD8F / 3471
{
	if (!Function_26(128))
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

var Function_30(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDD1 / 3537
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_31(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_28(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_31(var uParam0, int iParam1, int iParam2) //Position: 0xE09 / 3593
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_28(uParam0[iVar03], 4);
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

