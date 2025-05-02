//Decompiled with MagicRDR v1.0
//Function Count : 113
//Statics Count : 102
//Natives Count : 201
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
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
	int iLocal_19 = 0;
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
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2[2];
	var uVar5[2];
	var uVar8;
	int iVar19;
	float fVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	struct<2> Var25;
	bool bVar27;
	int iVar28;
	bool bVar29;
	int iVar30;
	var uVar31;
	int iVar32;
	bool bVar33;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_31 = 0;
	iLocal_38 = 0;
	iLocal_39 = 0;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_112());
	uVar8 = 5;
	Function_109(&uLocal_27, 0.0f);
	iVar19 = 0;
	fVar20 = 0.0f;
	bVar27 = false;
	iVar28 = 0;
	bVar29 = false;
	iVar30 = 0;
	if (Global_6625)
	{
		iVar0 = 5;
	}
	if (IS_POPSET_VALID(&(Global_46972[0])))
	{
		uVar5[0] = Function_108(1033, 1044);
		uVar5[1] = Function_99(&(Global_46972[0]), 1, 0, 1);
		if (uVar5[0] != 4294967295 || uVar5[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_98(&uVar8, uVar5[0], 3, 0);
			Function_98(&uVar8, uVar5[1], 3, 0);
			Function_96(&uVar8, "ndog_fetch", 5, 0);
			Function_96(&uVar8, "custom/dog_fetch", 8, 0);
			Function_96(&uVar8, "ndog_fetch", 1, 0);
		}
	}
	else
	{
		iVar0 = 5;
	}
	iVar32 = 0;
	bVar33 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar21 = 600;
		if (Function_95(&bVar33, &iVar0, &iVar32, &iVar21, bVar27))
		{
			if (bVar33)
			{
				Function_93(&uVar2, 4294967295);
			}
			else
			{
				Function_91(&uVar2, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_85(&uVar8))
				{
					iVar0 = 1;
					iVar21 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_79(&ScriptParam_0 + 16, &ScriptParam_0 + 28 + 4, &ScriptParam_0 + 60))
				{
					iVar0 = 2;
					iVar21 = 0;
				}
				else
				{
					iVar0 = 5;
					iVar21 = 0;
				}
				break;
			
			case 0x00000002:
				uVar2[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, &uVar1, Function_112(), uVar5[1], Vector(*(&ScriptParam_0 + 16), 0.0f, 0.0f));
				TASK_STAND_STILL(&(uVar2[1]), -1.0f, 0, 0);
				TASK_PRIORITY_SET(&(uVar2[1]), false);
				MEMORY_PREFER_WALKING(&(uVar2[1]), 0);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar2[1]), false);
				UNK_0x44986367(StackVal, &Var25);
				VSCALE(&Var25, 15.0f);
				Function_78(&(uVar2[1]));
				uVar2[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(Vector(Function_112(), &uVar1, StackVal) + Vector(Var25, Function_78(&(uVar2[1])), uVar5[0]), 0.0f, 0.0f));
				VSCALE(&Var25, (2.0f / 3.0f));
				Function_78(&(uVar2[1]));
				uVar23 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_112(), &uVar1, StackVal) + Vector(Var25, Function_78(&(uVar2[1])), 3), *(&ScriptParam_0 + 28), Vector(3.0f, 8.0f, 13,5f));
				VSCALE(&Var25, 1,5f);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar2[0]), false);
				SET_ACTOR_STAY_WITHIN_VOLUME(&(uVar2[0]), &uVar23, 1, 0);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
				TASK_WANDER(&(uVar2[0]), 3212836864);
				TASK_PRIORITY_SET(&(uVar2[0]), false);
				uLocal_32 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, &uVar1, Function_112(), "$/content/scripting/gringo/custom/dog_fetch", Vector(*(&ScriptParam_0 + 16), 0.0f, 0.0f));
				Function_73(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40);
				uVar24 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_112(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar24, "script", GET_THIS_SCRIPT_ID());
				Function_66(&uVar24, ScriptParam_0.f_40);
				iVar0 = 3;
				iVar21 = 0;
				break;
			
			case 0x00000003:
				Function_53(&uVar2, 2, &bVar27, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!Function_47(ScriptParam_0.f_64, &(uVar2[1]), &iVar28, &iVar30, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (IS_ACTOR_VALID(&(uVar2[0])) && IS_ACTOR_VALID(&(uVar2[1])))
				{
					if (!Function_44(&(uVar2[0]), &Global_54076, Function_45(1)) || !Function_44(&(uVar2[1]), &Global_54076, Function_45(1)))
					{
						iVar21 = 0;
						iVar0 = 5;
						break;
					}
				}
				if (Function_40(&uVar2, 2, &uVar22, &iLocal_36, &fVar20, 0, 0, 0x40200000))
				{
					if ((iLocal_36 != 8 || iLocal_36 != 4) || iLocal_36 != 2)
					{
						bVar29 = true;
					}
					iVar21 = 0;
					iVar0 = 5;
					break;
				}
				if (!IS_ACTOR_ALIVE(&(uVar2[0])) || !IS_ACTOR_ALIVE(&(uVar2[1])))
				{
					iVar0 = 5;
					iVar21 = 0;
					break;
				}
				if (IS_ACTOR_VALID(&(uVar2[0])))
				{
					if (GET_TASK_STATUS(&(uVar2[0]), 19) == 4)
					{
						iVar0 = 5;
						iVar21 = 0;
						break;
					}
				}
				if (IS_ACTOR_VALID(&(uVar2[1])))
				{
					if (GET_TASK_STATUS(&(uVar2[1]), 19) == 4)
					{
						iVar0 = 5;
						iVar21 = 0;
						break;
					}
				}
				if (Function_13(&iVar19, &uVar2, &uVar31, &iVar21))
				{
					iVar0 = 5;
					iVar21 = 0;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar21 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar21 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar21);
		}
	}
	Function_91(&uVar2, 4294967295);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar27)
	{
		Function_11(&uVar2, 4294967295);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
		Function_73(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (Function_7(&(uVar2[0]), 0))
	{
		AI_QUICK_EXIT_GRINGO(&(uVar2[0]), 1);
		REMOVE_OBJECT_ATTACHMENT(&uVar31);
		if (iLocal_38 == 0)
		{
			AI_QUICK_EXIT_GRINGO(&(uVar2[0]), 1);
			if (bVar29)
			{
				Function_6(&(uVar2[0]), &Global_54076);
			}
			else if (Function_7(&(uVar2[1]), 0))
			{
				TASK_FOLLOW_ACTOR(&(uVar2[0]), &(uVar2[1]));
			}
			else
			{
				TASK_FLEE_ACTOR(&(uVar2[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	if (Function_7(&(uVar2[1]), 0))
	{
		Function_5(&(uVar2[1]));
		AI_QUICK_EXIT_GRINGO(&(uVar2[1]), 1);
		if (iLocal_38 == 0)
		{
			if (bVar29)
			{
				Function_6(&(uVar2[1]), &Global_54076);
			}
			else
			{
				TASK_FLEE_ACTOR(&(uVar2[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
		}
	}
	if (IS_VOLUME_VALID(&uVar23))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
	}
	Function_1(&uVar8);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5AB / 1451
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x5D3 / 1491
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

void Function_3(struct<13> Param0) //Position: 0x71E / 1822
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x73B / 1851
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x759 / 1881
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

int Function_6(var uParam0, int iParam1) //Position: 0x7AC / 1964
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

bool Function_7(int iParam0, bool bParam1) //Position: 0x8A2 / 2210
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_9(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_9(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_8(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_8(int iParam0, int iParam1) //Position: 0x94D / 2381
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_9(int iParam0) //Position: 0x99F / 2463
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_10(&iParam0);
		return 1;
	}
	return 0;
}

void Function_10(var uParam0) //Position: 0x9B7 / 2487
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_11(var[] uParam0, int iParam1) //Position: 0x9EA / 2538
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_12(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_12(int iParam0) //Position: 0xA1C / 2588
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

bool Function_13(var uParam0, var[] uParam1, var uParam3) //Position: 0xA4C / 2636
{
	struct<2> Var0;
	var uVar2;
	
	Function_39(&(uParam1[1]));
	switch (uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 70.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[1]), 1.0f, 70.0f, 1, 1, 0))
			{
				Function_23(6);
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), 1);
				TASK_CLEAR(&(uParam1[1]));
				AI_GOAL_LOOK_AT_ACTOR(&(uParam1[1]), &(uParam1[0]), 0, 1065353216, 3212836864, 3212836864, 0);
				TASK_USE_GRINGO(&(uParam1[1]), GET_GRINGO_FROM_OBJECT(&uLocal_32), "UseCase1", 3, 1);
				TASK_PRIORITY_SET(&(uParam1[1]), false);
				Function_109(&uLocal_27, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_18(&uLocal_27, 12.0f))
			{
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO(&(uParam1[1])) == GET_GRINGO_FROM_OBJECT(&uLocal_32))
			{
				uParam0 = 2;
				Function_109(&uLocal_27, 0.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_18(&uLocal_27, 3.0f))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uParam1[0]));
				TASK_CLEAR(&(uParam1[0]));
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_32), "Dog", &Var0);
				TASK_GO_NEAR_COORD(&(uParam1[0]), &Var0, 3,5f, 4);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			uParam3 = 0;
			if (Function_18(&uLocal_27, 15.0f))
			{
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_GOAL_AIM_CLEAR(&(uParam1[1]));
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (0 == GET_TASK_STATUS(&(uParam1[0]), 61))
			{
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_18(&uLocal_27, 5.0f))
			{
				TASK_CLEAR(&(uParam1[0]));
				TASK_USE_GRINGO(&(uParam1[0]), GET_GRINGO_FROM_OBJECT(&uLocal_32), "Dog", 1, 1);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				uParam0 = 5;
				iLocal_34 = GRINGO_QUERY_PROP(GET_GRINGO_FROM_OBJECT(&uLocal_32), "AttachProp");
				Function_109(&uLocal_27, 0.0f);
			}
			break;
		
		case 0x00000005:
			if (Function_18(&uLocal_27, 12.0f))
			{
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO(&(uParam1[0])) == GET_GRINGO_FROM_OBJECT(&uLocal_32))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[0]), "Dog"))
				{
					REMOVE_OBJECT_ATTACHMENT(&uParam2);
					UNK_0x44986367(&Var0, GET_OBJECT_HEADING(&(uParam1[1])));
					VNORMALIZE(&Var0);
					VSCALE(&Var0, 18.0f);
					if (iLocal_39 == 1)
					{
						if ((RAND_INT_RANGE(0, 9999) / 2000) <= 1)
						{
							SAY_SINGLE_LINE_CONTEXT(&(uParam1[1]), 103, &(uParam1[0]), 0, 0, 5, 4294967295, 4294967295, 0, 0);
						}
					}
					iLocal_39 = 1;
					Function_17(&(uParam1[1]));
					Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Function_17(&(uParam1[1])), Var0, StackVal);
					TASK_GO_NEAR_COORD(&(uParam1[0]), &Var0, 5.0f, 4);
					Function_109(&uLocal_27, 0.0f);
					uParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (Function_18(&uLocal_27, 12.0f))
			{
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (GET_CURRENT_GRINGO(&(uParam1[0])) == GET_GRINGO_FROM_OBJECT(&uLocal_32) && Function_16(&(uParam1[0]), &(uParam1[1])) < 5.0f)
			{
				uParam0 = 7;
				uParam3 = 0;
			}
			break;
		
		case 0x00000007:
			Function_15(&iLocal_34);
			uVar2 = Function_15(&iLocal_34);
			TASK_GO_NEAR_COORD(&(uParam1[0]), &uVar2, 5.0f, 4);
			TASK_PRIORITY_SET(&(uParam1[0]), false);
			uParam3 = 250;
			if (!Function_14(&iLocal_34))
			{
				Function_15(&iLocal_34);
				uVar2 = Function_15(&iLocal_34);
				TASK_CLEAR(&(uParam1[0]));
				TASK_GO_TO_COORD(&(uParam1[0]), &uVar2, 4);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			uParam3 = 0;
			if (0 != GET_TASK_STATUS(&(uParam1[0]), 1) && !iLocal_31)
			{
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "ndog_fetch", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "dog_fetch/Dog/pickup");
				iLocal_31 = 1;
				Function_109(&uLocal_27, 0.0f);
				uParam0 = 9;
				uParam3 = 0;
			}
			break;
		
		case 0x00000009:
			if (Function_18(&uLocal_27, 12.0f))
			{
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (IS_ACTION_NODE_PLAYING(&(uParam1[0]), "dog_fetch/Dog/pickup"))
			{
				uParam0 = 10;
				Function_109(&uLocal_27, 0.0f);
			}
			else
			{
				uParam3 = 0;
			}
			break;
		
		case 0x0000000A:
			if (Function_18(&uLocal_27, 0,5f))
			{
				uParam2 = ATTACH_OBJECTS_USING_LOCATOR(&iLocal_34, &(uParam1[0]), "Jaw_Attachment", "grab_dog_fetch", 1);
				uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_18(&uLocal_27, 3,5f))
			{
				Function_78(&(uParam1[1]));
				Var0 = Function_78(&(uParam1[1]));
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_32), "Dog_Return", &Var0);
				TASK_CLEAR(&(uParam1[0]));
				TASK_GO_NEAR_COORD(&(uParam1[0]), &Var0, 3,5f, 4);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_18(&uLocal_27, 25.0f))
			{
				REMOVE_OBJECT_ATTACHMENT(&uParam2);
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (0 == GET_TASK_STATUS(&(uParam1[0]), 61))
			{
				TASK_CLEAR(&(uParam1[0]));
				TASK_USE_GRINGO(&(uParam1[0]), GET_GRINGO_FROM_OBJECT(&uLocal_32), "Dog_Return", 1, 1);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				Function_109(&uLocal_27, 0.0f);
				uParam0 = 13;
				uParam3 = 150;
			}
			uParam3 = 300;
			break;
		
		case 0x0000000D:
			if (Function_18(&uLocal_27, 25.0f))
			{
				REMOVE_OBJECT_ATTACHMENT(&uParam2);
				iLocal_38 = 1;
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[1]), 1);
					TASK_WANDER(&(uParam1[1]), 3212836864);
				}
				if (IS_ACTOR_VALID(&(uParam1[0])))
				{
					AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
					TASK_WANDER(&(uParam1[0]), 3212836864);
				}
				return 1;
			}
			if (1 == GET_TASK_STATUS(&(uParam1[0]), 19))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[0]), "Dog/toss"))
				{
					iLocal_31 = 0;
					uParam0 = 5;
					uParam3 = 150;
				}
			}
			break;
	}
	return 0;
}

bool Function_14(int iParam0) //Position: 0x1258 / 4696
{
	struct<9> Var0;
	
	GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&iParam0), &vVar0);
	return (((vVar0.x * vVar0.x) < 0,001f || (vVar0.z * vVar0.z) < 0,001f) || (vVar0.y * vVar0.y) < 0,001f);
}

struct<8> Function_15(int iParam0) //Position: 0x1295 / 4757
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

float Function_16(var uParam0, int iParam1) //Position: 0x1303 / 4867
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

struct<8> Function_17(int iParam0) //Position: 0x13F8 / 5112
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_18(var uParam0, float fParam1) //Position: 0x1421 / 5153
{
	if (Function_22(&uParam0))
	{
		if (Function_19(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_19(vector3 vParam0) //Position: 0x143F / 5183
{
	if (Function_22(&vParam0))
	{
		if (Function_20(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_20(int iParam0) //Position: 0x150C / 5388
{
	return Function_21(iParam0, 2);
}

bool Function_21(var uParam0, int iParam1) //Position: 0x151A / 5402
{
	return (uParam0 && iParam1) == 0;
}

bool Function_22(int iParam0) //Position: 0x1527 / 5415
{
	return Function_21(iParam0, 1);
}

void Function_23(int iParam0) //Position: 0x1535 / 5429
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_24(409, 1, 0, 0);
	}
	return;
}

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1566 / 5478
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_38(iParam0, TO_FLOAT(bParam1), 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_25(iParam0);
	return 1;
}

void Function_25(bool bParam0) //Position: 0x178E / 6030
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_26(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x182C / 6188
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_36(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_35(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_35(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_112(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_27(int iParam0) //Position: 0x1E6A / 7786
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E7B / 7803
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x1F72 / 8050
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1F8D / 8077
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_32(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1FF4 / 8180
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, int iParam1) //Position: 0x2006 / 8198
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2018 / 8216
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_34(iParam0) != 19 || Function_34(iParam0) != 17) || Function_34(iParam0) != 10) || Function_34(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_34(int iParam0) //Position: 0x214C / 8524
{
	return Global_55480[iParam016].f_96;
}

float Function_35(int iParam0) //Position: 0x215B / 8539
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_36(int iParam0) //Position: 0x2194 / 8596
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_37(int iParam0) //Position: 0x21D1 / 8657
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_38(int iParam0, float fParam1, bool bParam2) //Position: 0x236B / 9067
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

void Function_39(bool bParam0) //Position: 0x25AF / 9647
{
	if (iLocal_37 == 0)
	{
		if (IS_ACTOR_VALID(&bParam0))
		{
			if (Function_16(&bParam0, &Global_54076) > 5.0f)
			{
				if (MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076))
				{
					SAY_SINGLE_LINE_CONTEXT(&bParam0, 43, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_37 = 1;
				}
			}
		}
	}
	return;
}

bool Function_40(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x25F6 / 9718
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_41(&(uParam0[iVar0]), &uParam3, &uParam4, &uParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_41(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x2648 / 9800
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_16(&iParam0, &Global_54076);
		if (!Function_21(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_42(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_42(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_42(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_42(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_42(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_21(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_42(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_42(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_42(int iParam0) //Position: 0x2811 / 10257
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_43(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_43(int iParam0) //Position: 0x284E / 10318
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_44(var uParam0, var uParam1, bool bParam2) //Position: 0x2867 / 10343
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

bool Function_45(bool bParam0) //Position: 0x297C / 10620
{
	var uVar0;
	bool bVar1;
	
	if (!&bParam0)
	{
		Function_46(&uVar0, &bVar1);
		if (bVar1 < 60.0f)
		{
			return (bVar1 + 20.0f);
		}
		return (bVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_46(var uParam0, bool bParam1) //Position: 0x29B8 / 10680
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_47(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2A49 / 10825
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_16(&Global_54076, &uParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_50() && !uParam2)
		{
			return 0;
		}
		if (Function_49(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_48(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_48(int iParam0, int iParam1) //Position: 0x2B8C / 11148
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_49(int iParam0) //Position: 0x2BAD / 11181
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_50() //Position: 0x2BED / 11245
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
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
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_51(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_51(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_51(int iParam0, var uParam1) //Position: 0x2CB0 / 11440
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_52(&iParam0);
			Var0 = Function_52(&iParam0);
			Function_15(&uParam1);
			Var2 = Function_15(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_52(int iParam0) //Position: 0x2D52 / 11602
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_53(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x2DBE / 11710
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &uParam5, 1, 1, 0))
			{
				uParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_65(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_64(0);
		}
		if (&bParam6)
		{
			Function_62(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_60(iParam3);
		}
		Function_58(iParam3);
		if (Function_57(StackVal, 32768))
		{
			Function_54(1);
		}
		Global_26652[iParam34].f_16++;
		Function_24(408, 1, 0, 0);
	}
}

void Function_54(bool bParam0) //Position: 0x2EB7 / 11959
{
	if (bParam0)
	{
		Function_56(0x10000000);
	}
	else
	{
		Function_55(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_55(int iParam0) //Position: 0x2EDC / 11996
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_56(int iParam0) //Position: 0x2EF9 / 12025
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_57(var uParam0, int iParam1) //Position: 0x2F0C / 12044
{
	return (uParam0 && iParam1) == 0;
}

void Function_58(int iParam0) //Position: 0x2F19 / 12057
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_21(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_59(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_59(int iParam0) //Position: 0x2FBF / 12223
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_60(int iParam0) //Position: 0x2FD6 / 12246
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_61(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_61(vector3 vParam0) //Position: 0x3075 / 12405
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x3091 / 12433
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_63(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_63(struct<113> Param0) //Position: 0x3118 / 12568
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_64(int iParam0) //Position: 0x3176 / 12662
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_59(900)), 0);
	return;
}

void Function_65(int iParam0) //Position: 0x319A / 12698
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_59(200)), 0);
	return;
}

int Function_66(var uParam0, int iParam1) //Position: 0x31BD / 12733
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_70(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_67(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_67(int iParam0, var uParam1, struct<2> Param2) //Position: 0x3327 / 13095
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_68(char* cParam0) //Position: 0x33CF / 13263
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("0", &cVar8, ""), 4);
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

struct<32> Function_69(char* cParam0) //Position: 0x343B / 13371
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_70(bool bParam0) //Position: 0x345D / 13405
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_72(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_71(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_72(iVar0);
						}
					}
					else if (Function_71(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_72(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_72(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_71(var uParam0, struct<2> Param1) //Position: 0x35CB / 13771
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_52(&uParam0);
		Var0 = Function_52(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_72(int iParam0) //Position: 0x3642 / 13890
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

int Function_73(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x36AA / 13994
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_75("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_74(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_74(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_74(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_74(bool bParam0) //Position: 0x3916 / 14614
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_75(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3960 / 14688
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_76(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_76(int iParam0) //Position: 0x39E5 / 14821
{
	char* cVar0[16];
	
	if (!Function_77())
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

bool Function_77() //Position: 0x3A24 / 14884
{
	if (Function_21(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<8> Function_78(int iParam0) //Position: 0x3A3F / 14911
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_79(var uParam0, var uParam1, int iParam2) //Position: 0x3A51 / 14929
{
	struct<2> Var0[3];
	float fVar7[3];
	int iVar11;
	
	if (Global_43789 == Global_46760[0])
	{
		Var0[02] = Vector(-2184.0f, 16,565f, 2512.0f);
		fVar7[0] = -27,249f;
		Var0[12] = Vector(-2137,897f, 16,347f, 2619,45f);
		fVar7[1] = 180.0f;
		Var0[22] = Vector(-2098,656f, 16,063f, 2571,831f);
		fVar7[2] = -38,713f;
	}
	else if (Global_43789 == Global_46816[0])
	{
		Var0[02] = Vector(-859,612f, 91,46f, 2392,203f);
		fVar7[0] = 123,5f;
		Var0[12] = Vector(-916,691f, 91,357f, 2419,602f);
		fVar7[1] = 291,291f;
		Var0[22] = Vector(-766,87f, 92,93f, 2408,6f);
		fVar7[2] = 312,371f;
	}
	else if (Global_43789 == Global_46850[0])
	{
		Var0[02] = Vector(-4331,642f, 19,13511f, 4508,471f);
		fVar7[0] = -64,50665f;
		Var0[12] = Vector(-4260.0f, 25,94472f, 4364f);
		fVar7[1] = 108,7544f;
		Var0[22] = Vector(-4372,016f, 39,00211f, 4311,824f);
		fVar7[2] = 178,7768f;
	}
	else if (Global_43789 == Global_46866[0])
	{
		Var0[02] = Vector(-2752.0f, 32,12549f, 4308f);
		fVar7[0] = -164,0895f;
		Var0[12] = Vector(-2676.0f, 31,72819f, 4236,628f);
		fVar7[1] = -251,3373f;
		Var0[22] = Vector(-2640f, 30,12071f, 4292f);
		fVar7[2] = -230,3122f;
	}
	else if (Global_43789 == Global_46894[2])
	{
		Var0[02] = Vector(-753,768f, 13,05098f, 3768.0f);
		fVar7[0] = 148,4975f;
		Var0[12] = Vector(-783,905f, 13,05098f, 3714,733f);
		fVar7[1] = 110,8717f;
		Var0[22] = Vector(-812.0f, 13,05098f, 3688.0f);
		fVar7[2] = 134,6872f;
	}
	else if (Global_43789 == Global_46914[0])
	{
		Var0[02] = Vector(692,3197f, 78,36763f, 1379,464f);
		fVar7[0] = -102,8282f;
		Var0[12] = Vector(692,9092f, 78,30585f, 1219,754f);
		fVar7[1] = -85,14989f;
		Var0[22] = Vector(764,5641f, 78,30585f, 1164,118f);
		fVar7[2] = -268,2482f;
	}
	else if (Global_43789 == Global_46926[1])
	{
		Var0[02] = Vector(-428,9363f, 152,3476f, 1650,184f);
		fVar7[0] = 12,27189f;
		Var0[12] = Vector(-470,7489f, 153,3511f, 1623,332f);
		fVar7[1] = 205,6623f;
		Var0[22] = Vector(-426,6025f, 151,3064f, 1606,986f);
		fVar7[2] = 194,8256f;
	}
	else if (Global_43789 == Global_46926[2])
	{
		Var0[02] = Vector(-403,9999f, 85,75711f, 2100f);
		fVar7[0] = -85,1557f;
		Var0[12] = Vector(-292f, 82,98307f, 2052.0f);
		fVar7[1] = -85,1557f;
		Var0[22] = Vector(-181,9599f, 83,32544f, 2089,946f);
		fVar7[2] = -259,0188f;
	}
	iVar11 = 0;
	if (Function_80(&iVar11, &Var0, &iParam2))
	{
		uParam0 = Var0[iVar112];
		uParam1 = fVar7[iVar11];
		return 1;
	}
	return 0;
}

bool Function_80(var uParam0, struct<2>[] Param1, int iParam2) //Position: 0x3E02 / 15874
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
		fVar1 = Function_71(StackVal, &Global_54076, Param1[iVar02]);
		if (fVar1 > fVar2 && fVar1 < Function_84())
		{
			if (!Function_83(StackVal, Param1[iVar02], 1.0f, 65.0f, 1, 1, 0))
			{
				if (Function_81(&(Param1[iVar02]), &iParam2, 0, 0))
				{
					uParam0 = iVar0;
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

bool Function_81(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x3E88 / 16008
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_70(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_82(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_82(struct<2> Param0) //Position: 0x3F64 / 16228
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

bool Function_83(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3F83 / 16259
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

float Function_84() //Position: 0x3FA4 / 16292
{
	float fVar0;
	var uVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_46(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_85(struct<2>[] Param0) //Position: 0x3FD5 / 16341
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_90();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_89(&(Param0[iVar02]), 8);
		}
		else if (Function_88())
		{
			iVar1 = 1;
			Function_89(&(Param0[iVar02]), 8);
		}
		Function_89(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_89(&(Param0[iVar02]), 1);
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
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_89(&(Param0[iVar02]), 2);
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
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_89(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_89(&(Param0[iVar02]), 2);
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
	Function_86();
	return 1;
}

void Function_86() //Position: 0x4399 / 17305
{
	if (!Function_87(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_87(int iParam0) //Position: 0x43D9 / 17369
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_88() //Position: 0x43F5 / 17397
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

void Function_89(struct<13> Param0) //Position: 0x4423 / 17443
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_90() //Position: 0x4436 / 17462
{
	if (!Function_87(128))
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

void Function_91(var[] uParam0, int iParam1) //Position: 0x4478 / 17528
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_92(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_92(int iParam0) //Position: 0x44AA / 17578
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_93(var[] uParam0, int iParam1) //Position: 0x44F3 / 17651
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_94(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_94(int iParam0) //Position: 0x4525 / 17701
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_95(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x456F / 17775
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

var Function_96(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x45E7 / 17895
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_97(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_89(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_97(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x4625 / 17957
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_89(&(Param0[iVar02]), 4);
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

var Function_98(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x46F4 / 18164
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_89(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_89(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_99(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x47D0 / 18384
{
	return Function_100(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_100(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x47E7 / 18407
{
	return Function_101(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_101(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4805 / 18437
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_107();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_106(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_105(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_105(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_104(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_106(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_104(iVar0))
				{
					Function_103();
				}
				Function_102(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_106(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_102(int iParam0) //Position: 0x4AFE / 19198
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_103() //Position: 0x4BB2 / 19378
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x4BED / 19437
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_105(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x4C1A / 19482
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
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

bool Function_106(int iParam0) //Position: 0x4D75 / 19829
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_107() //Position: 0x4D8C / 19852
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_103();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_103();
	return;
}

var Function_108(int iParam0, bool bParam1) //Position: 0x4DD8 / 19928
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

void Function_109(vector3 vParam0) //Position: 0x4DFF / 19967
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_111(&vParam0, 1);
	Function_110(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_110(var uParam0, int iParam1) //Position: 0x4E24 / 20004
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_111(var uParam0, var uParam1) //Position: 0x4E3A / 20026
{
	uParam0 = (uParam0 || uParam1);
	return;
}

var Function_112() //Position: 0x4E4B / 20043
{
	var uVar0;
	
	return &uVar0;
}

