//Decompiled with MagicRDR v1.0
//Function Count : 32
//Statics Count : 35
//Natives Count : 100
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	struct<2> Local_3 = { 0, 0 } ;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0.0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 2;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<8> Var0;
	struct<2> Var8;
	struct<2> Var10;
	
	iLocal_0 = 100;
	bLocal_1 = false;
	bLocal_2 = false;
	iLocal_22 = 0;
	uScriptParam_0 = &uScriptParam_0;
	while (IS_GRINGO_ACTIVE())
	{
		switch (iLocal_22)
		{
			case 0x00000000:
				if (!IS_GRINGO_VALID(&uLocal_16))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Local_3);
					uLocal_16 = LOCATE_GRINGO_OF_TYPE("rand_idle_sit_ground_player", &Local_3, 6.0f, 1);
				}
				else
				{
					GRINGO_SET_USABLE_BY_PLAYER(&uLocal_16, "nPlayerUse", 0);
					iLocal_22 = 1;
				}
				break;
			
			case 0x00000001:
				Function_30(&uLocal_23, "custom/Rand_Idle_Sit_Ground_Player", 8, 0);
				Function_30(&uLocal_23, "Rand_Idle_Sit_Ground", 5, 0);
				iLocal_22 = 2;
				break;
			
			case 0x00000002:
				if (Function_24(&uLocal_23))
				{
					iLocal_22 = 3;
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uLocal_16), &Local_3);
				Local_3.f_4 = (StackVal + 1,1f);
				if (((!IS_AREA_OBSTRUCTED2(Local_3, 0,7f, GET_PHYSINST_FROM_ACTOR(&Global_54076), false, Global_47151[17]) && !IS_ACTOR_RIDING(&Global_54076)) && !IS_PLAYER_IN_COMBAT(0)) && !Global_6623)
				{
					if (!IS_LAYOUTREF_VALID(&uLocal_12))
					{
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("PlayerSitCampfire_") };
						uLocal_12 = CREATE_LAYOUT(&Var0);
					}
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Local_3);
					if (!IS_VOLUME_VALID(&uLocal_14))
					{
						uLocal_14 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_12, Function_21(), 4,203895E-45f, Local_3, Vector(0.0f, 0.0f, 0.0f), Vector(3,35f, 10.0f, 3,35f));
					}
					fLocal_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("sit_camp", &uLocal_14, 100, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
					iLocal_22 = 4;
				}
				break;
			
			case 0x00000004:
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uLocal_16), &Local_3);
				Local_3.f_4 = (StackVal + 1,1f);
				if (((IS_AREA_OBSTRUCTED2(Local_3, 0,7f, GET_PHYSINST_FROM_ACTOR(&Global_54076), false, Global_47151[17]) || IS_ACTOR_RIDING(&Global_54076)) || IS_PLAYER_IN_COMBAT(0)) || Global_6623)
				{
					RELEASE_SCRIPT_USE_CONTEXT(&fLocal_8);
					iLocal_22 = 3;
					break;
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&fLocal_8))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&fLocal_8);
					Var8 = Vector(0.0f, 0.0f, 0.0f);
					Var10 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uLocal_16), &Var8);
					GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(&uLocal_16), &Var10);
					Function_19(&Global_54076, 0);
					SET_OBJECT_POSITION_ON_GROUND(&Global_54076, Var8);
					SET_OBJECT_ORIENTATION(&Global_54076, Var10);
					SET_ANIM_SET_FOR_ACTOR(&Global_54076, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "Rand_Idle_Sit_Ground_Player");
					SET_PLAYER_DISABLE_TARGETING(1, 0);
					DISABLE_PLAYER_GRINGO_USE(0, 1);
					SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
					SATCHEL_SET_ENABLED(0);
					bLocal_1 = true;
					uLocal_6 = Function_16(&uLocal_12, 0, &Global_54076, 1, 0, 0);
					Function_12(&iLocal_18);
					iLocal_22 = 5;
				}
				break;
			
			case 0x00000005:
				if (Function_9(&iLocal_18, 2,5f))
				{
					uLocal_10 = ADD_SCRIPT_USE_CONTEXT("sit_camp_q", 1000, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
					DESTROY_OBJECT(&uLocal_6);
					iLocal_22 = 6;
				}
				break;
			
			case 0x00000006:
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_10))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_10);
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "rand_idle_sit_ground_player/D"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "Rand_Idle_Sit_Ground_Player/D/pst");
					}
					Function_12(&iLocal_18);
					iLocal_22 = 7;
				}
				break;
			
			case 0x00000007:
				if (!bLocal_2)
				{
					if (Function_5(&iLocal_18) < 2.0f)
					{
						SET_PLAYER_DISABLE_TARGETING(0, 0);
						DISABLE_PLAYER_GRINGO_USE(0, 0);
						SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
						SATCHEL_SET_ENABLED(1);
						bLocal_1 = false;
						bLocal_2 = true;
					}
				}
				if (Function_9(&iLocal_18, 5.0f))
				{
					bLocal_2 = false;
					iLocal_22 = 0;
				}
				break;
		}
		GRINGO_WAIT(iLocal_0);
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
	Function_1(&uLocal_23);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_10))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_10);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&fLocal_8))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&fLocal_8);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_12))
	{
		DESTROY_LAYOUT(&uLocal_12);
	}
	iLocal_22 = 0;
	return;
}

void Function_1(int iParam0) //Position: 0x467 / 1127
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x48F / 1167
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
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
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x5DA / 1498
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x5F7 / 1527
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

float Function_5(vector3 vParam0) //Position: 0x615 / 1557
{
	if (Function_8(&vParam0))
	{
		if (Function_6(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_6(int iParam0) //Position: 0x6E2 / 1762
{
	return Function_7(iParam0, 2);
}

int Function_7(var uParam0, int iParam1) //Position: 0x6F0 / 1776
{
	return (uParam0 && iParam1) == 0;
}

bool Function_8(int iParam0) //Position: 0x6FD / 1789
{
	return Function_7(iParam0, 1);
}

bool Function_9(int iParam0, int iParam1) //Position: 0x70B / 1803
{
	if (Function_11(&iParam0, iParam1))
	{
		Function_10(&iParam0);
		return 1;
	}
	return 0;
}

void Function_10(vector3 vParam0) //Position: 0x725 / 1829
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_11(var uParam0, float fParam1) //Position: 0x73C / 1852
{
	if (Function_8(&uParam0))
	{
		if (Function_5(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_12(int iParam0) //Position: 0x75A / 1882
{
	Function_13(&iParam0, 0.0f);
	return;
}

void Function_13(vector3 vParam0) //Position: 0x767 / 1895
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_15(&vParam0, 1);
	Function_14(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x78C / 1932
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_15(var uParam0, bool bParam1) //Position: 0x7A2 / 1954
{
	uParam0 = (uParam0 || bParam1);
	return;
}

var Function_16(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7B3 / 1971
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_21(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Rand_Idle_Sit_Ground_Player", 1, 1);
	}
	Function_17(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_17(var uParam0, int iParam1) //Position: 0x84B / 2123
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_18(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2,5f, 0);
	return;
}

void Function_18(int iParam0, int iParam1) //Position: 0x87B / 2171
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,620196f, 1,594658f, -1,316231f), Vector(-21,28498f, 124,6286f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,310334f, 0,680618f, 0,017161f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_19(var uParam0, bool bParam1) //Position: 0x918 / 2328
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_20(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_20(var uParam0, bool bParam1) //Position: 0x982 / 2434
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_21() //Position: 0x9A3 / 2467
{
	int iVar0;
	
	return &iVar0;
}

struct<32> Function_22(char* cParam0) //Position: 0x9AC / 2476
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_23(char* cParam0) //Position: 0xA18 / 2584
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_24(struct<2>[] Param0) //Position: 0xA3A / 2618
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_29();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_28(&(Param0[iVar02]), 8);
		}
		else if (Function_27())
		{
			iVar1 = 1;
			Function_28(&(Param0[iVar02]), 8);
		}
		Function_28(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_28(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_28(&(Param0[iVar02]), 2);
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
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_28(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_28(&(Param0[iVar02]), 2);
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

void Function_25() //Position: 0xDFC / 3580
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_26(int iParam0) //Position: 0xE3C / 3644
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27() //Position: 0xE58 / 3672
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

void Function_28(struct<13> Param0) //Position: 0xE86 / 3718
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_29() //Position: 0xE99 / 3737
{
	if (!Function_26(128))
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

var Function_30(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xEDB / 3803
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_31(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_28(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_31(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xF19 / 3865
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_28(&(Param0[iVar02]), 4);
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

