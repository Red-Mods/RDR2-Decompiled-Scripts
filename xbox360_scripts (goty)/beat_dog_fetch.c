//Decompiled with MagicRDR v1.0
//Function Count : 112
//Statics Count : 82
//Natives Count : 201
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2[2];
	var uVar5[2];
	bool bVar8;
	int iVar24;
	float fVar25;
	int iVar26;
	var uVar27;
	bool bVar28;
	bool bVar29;
	vector3 vVar30;
	bool bVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	var uVar37;
	int iVar38;
	bool bVar39;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_24 = 0;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_111());
	bVar8 = 5;
	Function_108(&uLocal_21, 0.0f);
	iVar24 = 0;
	fVar25 = 0.0f;
	bVar33 = false;
	iVar34 = 0;
	bVar35 = false;
	iVar36 = 0;
	if (Global_3382)
	{
		iVar0 = 5;
	}
	if (IS_POPSET_VALID(Global_30750[0]))
	{
		uVar5[0] = Function_107(1033, 1044);
		uVar5[1] = Function_98(Global_30750[0], 1, 0, 1);
		if (uVar5[0] != 4294967295 || uVar5[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_97(&bVar8, uVar5[0], 3, 0);
			Function_97(&bVar8, uVar5[1], 3, 0);
			Function_95(&bVar8, "ndog_fetch", 5, 0);
			Function_95(&bVar8, "custom/dog_fetch", 8, 0);
			Function_95(&bVar8, "ndog_fetch", 1, 0);
		}
	}
	else
	{
		iVar0 = 5;
	}
	iVar38 = 0;
	bVar39 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar26 = 600;
		if (Function_94(&bVar39, &iVar0, &iVar38, &iVar26, bVar33))
		{
			if (bVar39)
			{
				Function_92(&bVar2, 4294967295);
			}
			else
			{
				Function_90(&bVar2, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_84(&bVar8))
				{
					iVar0 = 1;
					iVar26 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_78(&ScriptParam_0 + 8, &ScriptParam_0 + 20 + 4, &ScriptParam_0 + 52))
				{
					iVar0 = 2;
					iVar26 = 0;
				}
				else
				{
					iVar0 = 5;
					iVar26 = 0;
				}
				break;
			
			case 0x00000002:
				bVar2[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, bVar1, Function_111(), uVar5[1], *(&ScriptParam_0 + 8), 0.0f, 0.0f);
				TASK_STAND_STILL(bVar2[1], -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar2[1], 0);
				MEMORY_PREFER_WALKING(bVar2[1], 0);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar2[1], false);
				UNK_0x44986367(StackVal, &vVar30);
				VSCALE(&vVar30, 15.0f);
				Function_77(bVar2[1]);
				bVar2[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(Function_111(), bVar1, StackVal) + Vector(vVar30, Function_77(bVar2[1]), uVar5[0]), 0.0f, 0.0f);
				VSCALE(&vVar30, (2.0f / 3.0f));
				Function_77(bVar2[1]);
				bVar28 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_111(), bVar1, StackVal) + Vector(vVar30, Function_77(bVar2[1]), 3), *(&ScriptParam_0 + 20), 3.0f, 8.0f, 13.5f);
				VSCALE(&vVar30, 1.5f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar2[0], false);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar2[0], bVar28, 1, 0);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar28);
				TASK_WANDER(bVar2[0], 3212836864);
				TASK_PRIORITY_SET(bVar2[0], 0);
				bLocal_25 = CREATE_GRINGO_IN_LAYOUT(StackVal, bVar1, Function_111(), "$/content/scripting/gringo/custom/dog_fetch", *(&ScriptParam_0 + 8), 0.0f, 0.0f);
				Function_72(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
				bVar29 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_111(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar29, "script", GET_THIS_SCRIPT_ID());
				Function_65(&bVar29, ScriptParam_0.f_32);
				iVar0 = 3;
				iVar26 = 0;
				break;
			
			case 0x00000003:
				Function_52(&bVar2, 2, &bVar33, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_46(ScriptParam_0.f_56, bVar2[1], &iVar34, &iVar36, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (IS_ACTOR_VALID(bVar2[0]) && IS_ACTOR_VALID(bVar2[1]))
				{
					if (!Function_43(bVar2[0], Global_34573, Function_44(1)) || !Function_43(bVar2[1], Global_34573, Function_44(1)))
					{
						iVar26 = 0;
						iVar0 = 5;
						break;
					}
				}
				if (Function_39(&bVar2, 2, &uVar27, &iLocal_27, &fVar25, 0, 0, 0x40200000))
				{
					if ((iLocal_27 != 8 || iLocal_27 != 4) || iLocal_27 != 2)
					{
						bVar35 = true;
					}
					iVar26 = 0;
					iVar0 = 5;
					break;
				}
				if (!IS_ACTOR_ALIVE(bVar2[0]) || !IS_ACTOR_ALIVE(bVar2[1]))
				{
					iVar0 = 5;
					iVar26 = 0;
					break;
				}
				if (IS_ACTOR_VALID(bVar2[0]))
				{
					if (GET_TASK_STATUS(bVar2[0], 19) == 4)
					{
						iVar0 = 5;
						iVar26 = 0;
						break;
					}
				}
				if (IS_ACTOR_VALID(bVar2[1]))
				{
					if (GET_TASK_STATUS(bVar2[1], 19) == 4)
					{
						iVar0 = 5;
						iVar26 = 0;
						break;
					}
				}
				if (Function_13(&iVar24, &bVar2, &uVar37, &iVar26))
				{
					iVar0 = 5;
					iVar26 = 0;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar26 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar26 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar26);
		}
	}
	Function_90(&bVar2, 4294967295);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar33)
	{
		Function_11(&bVar2, 4294967295);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
		Function_72(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_7(bVar2[0], 0))
	{
		AI_QUICK_EXIT_GRINGO(bVar2[0], 1);
		REMOVE_OBJECT_ATTACHMENT(uVar37);
		if (iLocal_29 == 0)
		{
			AI_QUICK_EXIT_GRINGO(bVar2[0], 1);
			if (bVar35)
			{
				Function_6(bVar2[0], &Global_34573);
			}
			else if (Function_7(bVar2[1], 0))
			{
				TASK_FOLLOW_ACTOR(bVar2[0], bVar2[1]);
			}
			else
			{
				TASK_FLEE_ACTOR(bVar2[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	if (Function_7(bVar2[1], 0))
	{
		Function_5(bVar2[1]);
		AI_QUICK_EXIT_GRINGO(bVar2[1], 1);
		if (iLocal_29 == 0)
		{
			if (bVar35)
			{
				Function_6(bVar2[1], &Global_34573);
			}
			else
			{
				TASK_FLEE_ACTOR(bVar2[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	if (IS_VOLUME_VALID(bVar28))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar28);
	}
	Function_1(&bVar8);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x568 / 1384
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

void Function_2(var uParam0, int iParam1) //Position: 0x58E / 1422
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

void Function_3(var uParam0, int iParam1) //Position: 0x6BC / 1724
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x6D6 / 1750
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x6F3 / 1779
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

int Function_6(bool bParam0, int iParam1) //Position: 0x73F / 1855
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

bool Function_7(bool bParam0, bool bParam1) //Position: 0x824 / 2084
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_9(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_9(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_8(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_8(bool bParam0, int iParam1) //Position: 0x8C0 / 2240
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_9(bool bParam0) //Position: 0x90A / 2314
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_10(bParam0);
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0) //Position: 0x920 / 2336
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x94C / 2380
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_12(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_12(int iParam0) //Position: 0x979 / 2425
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

bool Function_13(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9A4 / 2468
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_38((*uParam1)[1]);
	switch (*uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 70.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 70.0f, 1, 1, 0))
			{
				Function_23(6);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				TASK_CLEAR((*uParam1)[1]);
				AI_GOAL_LOOK_AT_ACTOR((*uParam1)[1], (*uParam1)[0], 0, 1065353216, 3212836864, 3212836864, 0);
				TASK_USE_GRINGO((*uParam1)[1], GET_GRINGO_FROM_OBJECT(bLocal_25), "UseCase1", 3, 1);
				TASK_PRIORITY_SET((*uParam1)[1], 0);
				Function_108(&uLocal_21, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_18(&uLocal_21, 12.0f))
			{
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO((*uParam1)[1]) == GET_GRINGO_FROM_OBJECT(bLocal_25))
			{
				*uParam0 = 2;
				Function_108(&uLocal_21, 0.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_18(&uLocal_21, 3.0f))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME((*uParam1)[0]);
				TASK_CLEAR((*uParam1)[0]);
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_25), "Dog", &vVar0);
				TASK_GO_NEAR_COORD((*uParam1)[0], &vVar0, 3.5f, 4);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			*uParam3 = 0;
			if (Function_18(&uLocal_21, 15.0f))
			{
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_GOAL_AIM_CLEAR((*uParam1)[1]);
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (0 == GET_TASK_STATUS((*uParam1)[0], 61))
			{
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_18(&uLocal_21, 5.0f))
			{
				TASK_CLEAR((*uParam1)[0]);
				TASK_USE_GRINGO((*uParam1)[0], GET_GRINGO_FROM_OBJECT(bLocal_25), "Dog", 1, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				*uParam0 = 5;
				bLocal_26 = GRINGO_QUERY_PROP(GET_GRINGO_FROM_OBJECT(bLocal_25), "AttachProp");
				Function_108(&uLocal_21, 0.0f);
			}
			break;
		
		case 0x00000005:
			if (Function_18(&uLocal_21, 12.0f))
			{
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO((*uParam1)[0]) == GET_GRINGO_FROM_OBJECT(bLocal_25))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "Dog"))
				{
					REMOVE_OBJECT_ATTACHMENT(*uParam2);
					UNK_0x44986367(&vVar0, GET_OBJECT_HEADING((*uParam1)[1]));
					VNORMALIZE(&vVar0);
					VSCALE(&vVar0, 18.0f);
					if (iLocal_30 == 1)
					{
						if ((RAND_INT_RANGE(0, 9999) / 2000) <= 1)
						{
							SAY_SINGLE_LINE_CONTEXT((*uParam1)[1], 103, (*uParam1)[0], 0, 0, 5, 4294967295, 4294967295, 0, 0);
						}
					}
					iLocal_30 = 1;
					Function_17((*uParam1)[1]);
					vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_17((*uParam1)[1]), vVar0, StackVal) };
					TASK_GO_NEAR_COORD((*uParam1)[0], &vVar0, 5.0f, 4);
					Function_108(&uLocal_21, 0.0f);
					*uParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (Function_18(&uLocal_21, 12.0f))
			{
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO((*uParam1)[0]) == GET_GRINGO_FROM_OBJECT(bLocal_25) && Function_16((*uParam1)[0], (*uParam1)[1]) < 5.0f)
			{
				*uParam0 = 7;
				*uParam3 = 0;
			}
			break;
		
		case 0x00000007:
			Function_15(bLocal_26);
			vVar3 = { StackVal, StackVal, Function_15(bLocal_26) };
			TASK_GO_NEAR_COORD((*uParam1)[0], &vVar3, 5.0f, 4);
			TASK_PRIORITY_SET((*uParam1)[0], 0);
			*uParam3 = 250;
			if (!Function_14(bLocal_26))
			{
				Function_15(bLocal_26);
				vVar3 = { StackVal, StackVal, Function_15(bLocal_26) };
				TASK_CLEAR((*uParam1)[0]);
				TASK_GO_TO_COORD((*uParam1)[0], &vVar3, 4);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			*uParam3 = 0;
			if (0 != GET_TASK_STATUS((*uParam1)[0], 1) && !iLocal_24)
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "ndog_fetch", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "dog_fetch/Dog/pickup");
				iLocal_24 = 1;
				Function_108(&uLocal_21, 0.0f);
				*uParam0 = 9;
				*uParam3 = 0;
			}
			break;
		
		case 0x00000009:
			if (Function_18(&uLocal_21, 12.0f))
			{
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (IS_ACTION_NODE_PLAYING((*uParam1)[0], "dog_fetch/Dog/pickup"))
			{
				*uParam0 = 10;
				Function_108(&uLocal_21, 0.0f);
			}
			else
			{
				*uParam3 = 0;
			}
			break;
		
		case 0x0000000A:
			if (Function_18(&uLocal_21, 0.5f))
			{
				*uParam2 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_26, (*uParam1)[0], "Jaw_Attachment", "grab_dog_fetch", 1);
				*uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_18(&uLocal_21, 3.5f))
			{
				Function_77((*uParam1)[1]);
				vVar0 = { StackVal, StackVal, Function_77((*uParam1)[1]) };
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_25), "Dog_Return", &vVar0);
				TASK_CLEAR((*uParam1)[0]);
				TASK_GO_NEAR_COORD((*uParam1)[0], &vVar0, 3.5f, 4);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				*uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_18(&uLocal_21, 25.0f))
			{
				REMOVE_OBJECT_ATTACHMENT(*uParam2);
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (0 == GET_TASK_STATUS((*uParam1)[0], 61))
			{
				TASK_CLEAR((*uParam1)[0]);
				TASK_USE_GRINGO((*uParam1)[0], GET_GRINGO_FROM_OBJECT(bLocal_25), "Dog_Return", 1, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				Function_108(&uLocal_21, 0.0f);
				*uParam0 = 13;
				*uParam3 = 150;
			}
			*uParam3 = 300;
			break;
		
		case 0x0000000D:
			if (Function_18(&uLocal_21, 25.0f))
			{
				REMOVE_OBJECT_ATTACHMENT(*uParam2);
				iLocal_29 = 1;
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
					TASK_WANDER((*uParam1)[1], 3212836864);
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
					TASK_WANDER((*uParam1)[0], 3212836864);
				}
				return 1;
			}
			if (1 == GET_TASK_STATUS((*uParam1)[0], 19))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "Dog/toss"))
				{
					iLocal_24 = 0;
					*uParam0 = 5;
					*uParam3 = 150;
				}
			}
			break;
	}
	return 0;
}

bool Function_14(bool bParam0) //Position: 0x10D4 / 4308
{
	struct<9> Var0;
	
	GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar0);
	return (((vVar0.x * vVar0.x) < 0.001f || (vVar0.z * vVar0.z) < 0.001f) || (vVar0.y * vVar0.y) < 0.001f);
}

vector3 Function_15(bool bParam0) //Position: 0x1110 / 4368
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

float Function_16(bool bParam0, bool bParam1) //Position: 0x117C / 4476
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

vector3 Function_17(bool bParam0) //Position: 0x126D / 4717
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

bool Function_18(var uParam0, float fParam1) //Position: 0x1294 / 4756
{
	if (Function_22(uParam0))
	{
		if (Function_19(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_19(int iParam0) //Position: 0x12B0 / 4784
{
	if (Function_22(iParam0))
	{
		if (Function_20(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_20(int iParam0) //Position: 0x1378 / 4984
{
	return Function_21(*iParam0, 2);
}

bool Function_21(var uParam0, int iParam1) //Position: 0x1385 / 4997
{
	return (uParam0 && iParam1) == 0;
}

bool Function_22(int iParam0) //Position: 0x1392 / 5010
{
	return Function_21(*iParam0, 1);
}

void Function_23(int iParam0) //Position: 0x139F / 5023
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_24(409, 1, 0, 0);
	}
	return;
}

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x13D0 / 5072
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x15F0 / 5616
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_35(390))), 32);
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
					bVar19 = (Function_34(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_34(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_29(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_26(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_111(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26(int iParam0) //Position: 0x1C1D / 7197
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_27(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C2E / 7214
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_28(char* cParam0, bool bParam1) //Position: 0x1D23 / 7459
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_29(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D3C / 7484
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_31(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_30(Function_31(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_30(int iParam0, int iParam1) //Position: 0x1DA1 / 7585
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_31(int iParam0, int iParam1) //Position: 0x1DB3 / 7603
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1DC5 / 7621
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x1EF5 / 7925
{
	return Global_35278[iParam020].f_48;
}

float Function_34(int iParam0) //Position: 0x1F04 / 7940
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_35(int iParam0) //Position: 0x1F3D / 7997
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_36(int iParam0) //Position: 0x1F7A / 8058
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

int Function_37(int iParam0, float fParam1, bool bParam2) //Position: 0x2114 / 8468
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_38(bool bParam0) //Position: 0x2358 / 9048
{
	if (iLocal_28 == 0)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (Function_16(bParam0, Global_34573) > 5.0f)
			{
				if (MEMORY_GET_IS_VISIBLE(bParam0, Global_34573))
				{
					SAY_SINGLE_LINE_CONTEXT(bParam0, 43, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_28 = 1;
				}
			}
		}
	}
	return;
}

bool Function_39(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2398 / 9112
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_40((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_40(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x23E0 / 9184
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_16(bParam0, Global_34573);
		if (!Function_21(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_41(bParam0);
				return 1;
			}
		}
		if (!Function_21(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_41(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_41(bParam0);
				return 1;
			}
		}
		if (!Function_21(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_41(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_41(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_21(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_41(bParam0);
				return 1;
			}
		}
		if (!Function_21(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_41(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_41(bool bParam0) //Position: 0x2577 / 9591
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_42(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_42(bool bParam0) //Position: 0x25AB / 9643
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_43(bool bParam0, bool bParam1, int iParam2) //Position: 0x25C2 / 9666
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

int Function_44(bool bParam0) //Position: 0x26D3 / 9939
{
	var uVar0;
	bool bVar1;
	
	if (!bParam0)
	{
		Function_45(&uVar0, &bVar1);
		if (bVar1 < 60.0f)
		{
			return (bVar1 + 20.0f);
		}
		return (bVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_45(var uParam0, bool bParam1) //Position: 0x270E / 9998
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_46(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2797 / 10135
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_16(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_49() && !*uParam2)
		{
			return 0;
		}
		if (Function_48(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_47(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_47(int iParam0, int iParam1) //Position: 0x28C5 / 10437
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_48(int iParam0) //Position: 0x28E6 / 10470
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_49() //Position: 0x2924 / 10532
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_50(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_50(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_50(bool bParam0, bool bParam1) //Position: 0x29DF / 10719
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_51(bParam0);
			vVar0 = { StackVal, StackVal, Function_51(bParam0) };
			Function_15(bParam1);
			vVar3 = { StackVal, StackVal, Function_15(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_51(bool bParam0) //Position: 0x2A7F / 10879
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

void Function_52(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x2AE9 / 10985
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_64(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_63(0);
		}
		if (bParam6)
		{
			Function_61(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_59(iParam3);
		}
		Function_57(iParam3);
		if (Function_56(StackVal, 32768))
		{
			Function_53(1);
		}
		Global_16876[iParam36].f_12++;
		Function_24(408, 1, 0, 0);
	}
}

void Function_53(bool bParam0) //Position: 0x2BD6 / 11222
{
	if (bParam0)
	{
		Function_55(0x10000000);
	}
	else
	{
		Function_54(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_54(int iParam0) //Position: 0x2BFA / 11258
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_55(int iParam0) //Position: 0x2C17 / 11287
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x2C2A / 11306
{
	return (uParam0 && iParam1) == 0;
}

void Function_57(int iParam0) //Position: 0x2C37 / 11319
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_21(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_58(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_58(int iParam0) //Position: 0x2CDB / 11483
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_59(int iParam0) //Position: 0x2CF1 / 11505
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_60(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_60(var uParam0, var uParam1, int iParam2) //Position: 0x2D8F / 11663
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_61(int iParam0, int iParam1) //Position: 0x2DA7 / 11687
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_62(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_62(int iParam0) //Position: 0x2E29 / 11817
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_63(int iParam0) //Position: 0x2E77 / 11895
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_58(900)), 0);
	return;
}

void Function_64(int iParam0) //Position: 0x2E99 / 11929
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_58(200)), 0);
	return;
}

int Function_65(var uParam0, int iParam1) //Position: 0x2EBA / 11962
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_69(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_66(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_66(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x301B / 12315
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_67(bool bParam0) //Position: 0x30B6 / 12470
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("0", &cVar8, ""), 4);
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

struct<32> Function_68(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3120 / 12576
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_69(bool bParam0) //Position: 0x313F / 12607
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_71(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_70(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_71(iVar0);
						}
					}
					else if (Function_70(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_71(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_71(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_70(bool bParam0, vector3 vParam1) //Position: 0x32A0 / 12960
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_51(bParam0);
		vVar0 = { StackVal, StackVal, Function_51(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_71(int iParam0) //Position: 0x331A / 13082
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

int Function_72(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x337B / 13179
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_74("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_73(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_73(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_73(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_73(bool bParam0) //Position: 0x35D8 / 13784
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

void Function_74(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x361E / 13854
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_75(int iParam0) //Position: 0x3695 / 13973
{
	char* cVar0[16];
	
	if (!Function_76())
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

bool Function_76() //Position: 0x36D4 / 14036
{
	if (Function_21(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

vector3 Function_77(bool bParam0) //Position: 0x36EF / 14063
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x3700 / 14080
{
	vector3 vVar0[3];
	float fVar10[3];
	int iVar14;
	
	if (Global_29006 == Global_30640[0])
	{
		vVar0[03] = { -2184.0f, 16.565f, 2512.0f };
		fVar10[0] = -27.249f;
		vVar0[13] = { -2137.897f, 16.347f, 2619.45f };
		fVar10[1] = 180.0f;
		vVar0[23] = { -2098.656f, 16.063f, 2571.831f };
		fVar10[2] = -38.713f;
	}
	else if (Global_29006 == Global_30668[0])
	{
		vVar0[03] = { -859.612f, 91.46f, 2392.203f };
		fVar10[0] = 123.5f;
		vVar0[13] = { -916.691f, 91.357f, 2419.602f };
		fVar10[1] = 291.291f;
		vVar0[23] = { -766.87f, 92.93f, 2408.6f };
		fVar10[2] = 312.371f;
	}
	else if (Global_29006 == Global_30685[0])
	{
		vVar0[03] = { -4331.642f, 19.13511f, 4508.471f };
		fVar10[0] = -64.50665f;
		vVar0[13] = { -4260.0f, 25.94472f, 4364f };
		fVar10[1] = 108.7544f;
		vVar0[23] = { -4372.016f, 39.00211f, 4311.824f };
		fVar10[2] = 178.7768f;
	}
	else if (Global_29006 == Global_30693[0])
	{
		vVar0[03] = { -2752.0f, 32.12549f, 4308f };
		fVar10[0] = -164.0895f;
		vVar0[13] = { -2676.0f, 31.72819f, 4236.628f };
		fVar10[1] = -251.3373f;
		vVar0[23] = { -2640f, 30.12071f, 4292f };
		fVar10[2] = -230.3122f;
	}
	else if (Global_29006 == Global_30707[2])
	{
		vVar0[03] = { -753.768f, 13.05098f, 3768.0f };
		fVar10[0] = 148.4975f;
		vVar0[13] = { -783.905f, 13.05098f, 3714.733f };
		fVar10[1] = 110.8717f;
		vVar0[23] = { -812.0f, 13.05098f, 3688.0f };
		fVar10[2] = 134.6872f;
	}
	else if (Global_29006 == Global_30717[0])
	{
		vVar0[03] = { 692.3197f, 78.36763f, 1379.464f };
		fVar10[0] = -102.8282f;
		vVar0[13] = { 692.9092f, 78.30585f, 1219.754f };
		fVar10[1] = -85.14989f;
		vVar0[23] = { 764.5641f, 78.30585f, 1164.118f };
		fVar10[2] = -268.2482f;
	}
	else if (Global_29006 == Global_30723[1])
	{
		vVar0[03] = { -428.9363f, 152.3476f, 1650.184f };
		fVar10[0] = 12.27189f;
		vVar0[13] = { -470.7489f, 153.3511f, 1623.332f };
		fVar10[1] = 205.6623f;
		vVar0[23] = { -426.6025f, 151.3064f, 1606.986f };
		fVar10[2] = 194.8256f;
	}
	else if (Global_29006 == Global_30723[2])
	{
		vVar0[03] = { -403.9999f, 85.75711f, 2100f };
		fVar10[0] = -85.1557f;
		vVar0[13] = { -292f, 82.98307f, 2052.0f };
		fVar10[1] = -85.1557f;
		vVar0[23] = { -181.9599f, 83.32544f, 2089.946f };
		fVar10[2] = -259.0188f;
	}
	iVar14 = 0;
	if (Function_79(&iVar14, &vVar0, iParam2))
	{
		*uParam0 = { StackVal, StackVal, vVar0[iVar143] };
		*uParam1 = fVar10[iVar14];
		return 1;
	}
	return 0;
}

bool Function_79(var uParam0, var uParam1, int iParam2) //Position: 0x3AAF / 15023
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	fVar2 = 1E+08.0f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		fVar1 = Function_70(StackVal, StackVal, Global_34573, *uParam1[iVar03]);
		if (fVar1 > fVar2 && fVar1 < Function_83())
		{
			if (!Function_82(StackVal, StackVal, *uParam1[iVar03], 1.0f, 65.0f, 1, 1, 0))
			{
				if (Function_80(uParam1[iVar03], iParam2, 0, 0))
				{
					*uParam0 = iVar0;
					fVar2 = fVar1;
					bVar3 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		return 1;
	}
	return 0;
}

bool Function_80(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3B2F / 15151
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_69(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_81(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_81(var uParam0, bool bParam1) //Position: 0x3BFF / 15359
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

bool Function_82(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x3C1D / 15389
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_83() //Position: 0x3C39 / 15417
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_45(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_84(int iParam0) //Position: 0x3C6A / 15466
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_89();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		else if (Function_87())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		Function_88(iParam0[iVar03], 16);
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
				Function_88(iParam0[iVar03], 1);
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
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
	Function_85();
	return 1;
}

void Function_85() //Position: 0x3FE5 / 16357
{
	if (!Function_86(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_86(int iParam0) //Position: 0x4031 / 16433
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_87() //Position: 0x404D / 16461
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

void Function_88(var uParam0, int iParam1) //Position: 0x4078 / 16504
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_89() //Position: 0x4089 / 16521
{
	if (!Function_86(128))
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

void Function_90(bool bParam0, int iParam1) //Position: 0x40CB / 16587
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_91(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_91(int iParam0) //Position: 0x40F8 / 16632
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x413A / 16698
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_93(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_93(int iParam0) //Position: 0x4167 / 16743
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

bool Function_94(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x41AA / 16810
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

var Function_95(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4212 / 16914
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_96(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_88(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_96(var uParam0, int iParam1, int iParam2) //Position: 0x424A / 16970
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_88(uParam0[iVar03], 4);
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

var Function_97(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x430E / 17166
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
			Function_88(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_88(uParam0[iVar03], 8);
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

var Function_98(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x43DE / 17374
{
	return Function_99(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_99(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x43F2 / 17394
{
	return Function_100(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_100(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x440B / 17419
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_106();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_105(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_104(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_104(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_103(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_105(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_103(bVar0))
				{
					Function_102();
				}
				Function_101(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_105(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_101(int iParam0) //Position: 0x46FE / 18174
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_102() //Position: 0x47B2 / 18354
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_103(bool bParam0) //Position: 0x47EC / 18412
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_104(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4819 / 18457
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_105(bool bParam0) //Position: 0x496A / 18794
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_106() //Position: 0x4981 / 18817
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_102();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_102();
	return;
}

var Function_107(int iParam0, bool bParam1) //Position: 0x49CC / 18892
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

void Function_108(var uParam0, float fParam1) //Position: 0x49F3 / 18931
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_110(uParam0, 1);
	Function_109(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_109(var uParam0, int iParam1) //Position: 0x4A14 / 18964
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_110(var uParam0, var uParam1) //Position: 0x4A27 / 18983
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

var Function_111() //Position: 0x4A36 / 18998
{
	var uVar0;
	
	return uVar0;
}

