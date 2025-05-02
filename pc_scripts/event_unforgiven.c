//Decompiled with MagicRDR v1.0
//Function Count : 155
//Statics Count : 121
//Natives Count : 262
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0.0f;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = false;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2[2];
	int iVar5[2];
	var uVar8;
	struct<8> Var27;
	var uVar35;
	struct<2> Var36;
	int iVar38;
	int iVar39;
	var uVar40;
	int iVar41;
	bool bVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	var uVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_39 = 0.0f;
	iLocal_40 = 0;
	bLocal_41 = false;
	iLocal_44 = 0;
	bLocal_50 = false;
	bLocal_51 = false;
	iLocal_52 = 0;
	iLocal_54 = 0;
	bLocal_55 = false;
	bLocal_58 = false;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_154());
	uVar8 = 9;
	Function_153(&uLocal_27, 0.0f);
	iVar39 = 0;
	uVar40 = Function_151(0, 1, 1, 0, 0);
	iVar41 = Function_150(41, 4);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iVar41 == 0)
			{
				iVar5[0] = 138;
				iVar5[1] = 66;
			}
			else if (iVar41 == 1)
			{
				iVar5[0] = 139;
				iVar5[1] = 67;
			}
			else if (iVar41 == 2)
			{
				iVar5[0] = 138;
				iVar5[1] = 66;
			}
			else
			{
				iVar5[0] = 139;
				iVar5[1] = 67;
			}
			break;
		
		case 0x00000001:
			if (iVar41 == 0)
			{
				iVar5[0] = 282;
				iVar5[1] = 246;
			}
			else if (iVar41 == 1)
			{
				iVar5[0] = 281;
				iVar5[1] = 249;
			}
			else if (iVar41 == 2)
			{
				iVar5[0] = 282;
				iVar5[1] = 246;
			}
			else
			{
				iVar5[0] = 281;
				iVar5[1] = 249;
			}
			break;
		
		case 0x00000002:
			if (iVar41 == 0)
			{
				iVar5[0] = 144;
				iVar5[1] = 71;
			}
			else if (iVar41 == 1)
			{
				iVar5[0] = 143;
				iVar5[1] = 72;
			}
			else if (iVar41 == 2)
			{
				iVar5[0] = 144;
				iVar5[1] = 71;
			}
			else
			{
				iVar5[0] = 143;
				iVar5[1] = 72;
			}
			break;
	}
	Function_149(&uVar8, iVar5[0], 3, 0);
	Function_149(&uVar8, iVar5[1], 3, 0);
	Function_147(&uVar8, "knife_chase", 1, 0);
	Function_147(&uVar8, "knife_chase", 5, 0);
	Function_147(&uVar8, "custom/knife_chase", 8, 0);
	Function_147(&uVar8, "fema_emo_thanks", 5, 0);
	Function_147(&uVar8, "custom/fema_emo_thanks", 8, 0);
	Function_147(&uVar8, "bankrobbery_cower", 5, 0);
	Function_147(&uVar8, "custom/bankrobbery_cower", 8, 0);
	Function_146(&iVar5, 2);
	bVar42 = false;
	iVar43 = 0;
	iVar44 = 0;
	iVar47 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar48 = 0;
	bVar49 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar45 = 600;
		if (Function_145(&bVar49, &iVar0, &iVar48, &bVar45, bVar42))
		{
			if (bVar49)
			{
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_139(&uVar8))
				{
					iVar0 = 1;
					bVar45 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_133(&ScriptParam_0 + 16, &ScriptParam_0 + 28 + 4, &ScriptParam_0 + 60, ScriptParam_0.f_40))
				{
					iVar0 = 2;
					bVar45 = false;
				}
				else
				{
					iVar0 = 5;
					bVar45 = false;
				}
				break;
			
			case 0x00000002:
				iVar38 = 0;
				while (iVar38 <= 2)
				{
					Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("unforgiven") };
					uVar2[iVar38] = CREATE_ACTOR_IN_LAYOUT(&uVar1, &Var27, iVar5[iVar38], *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar2[iVar38]), 0);
					SET_ACTOR_ONE_SHOT_DEATH(&(uVar2[iVar38]), 1);
					SET_ALLOW_EXECUTE(&(uVar2[iVar38]), 0);
					TASK_STAND_STILL(&(uVar2[iVar38]), -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uVar2[iVar38]), false);
					TASK_PRIORITY_SET(&(uVar2[iVar38]), false);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar2[iVar38]), 0);
					UNK_0x99AFD2D1(&(uVar2[iVar38]), 1, 1);
					iVar38++;
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar2[0]));
				DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar2[1]));
				uVar46 = CREATE_GRINGO_IN_LAYOUT(&uVar1, Function_154(), "knife_chase", *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
				Function_130(&(uVar2[0]));
				DECOR_SET_BOOL(&(uVar2[1]), "criminal", 1);
				SET_ACTOR_ALLOW_DISARM(&(uVar2[0]), 0);
				GIVE_WEAPON_TO_ACTOR(&(uVar2[0]), 22, 0f, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&(uVar2[0]), 4, 0f, 1, 1);
				Function_129(&(uVar2[0]), 0);
				Function_129(&(uVar2[1]), 4294967295 * 50);
				SET_ACTOR_CAN_BE_HARDLOCKED(&(uVar2[1]), 0);
				SET_ACTOR_CAN_BE_SOFTLOCKED(&(uVar2[1]), 0);
				SET_ACTOR_CAN_BE_TARGETED(&(uVar2[1]), false);
				SET_ALLOW_DEADEYE_LOCKS(&(uVar2[1]), false);
				SNAP_ACTOR_TO_GRINGO(&(uVar2[0]), &uVar46, "UseCase1", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&(uVar2[1]), &uVar46, "Female", false, 0, 0);
				Function_124(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40);
				uVar35 = CREATE_VOLUME_IN_LAYOUT(StackVal, &Global_39615, Function_154(), 4,203895E-45f, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar35, "script", GET_THIS_SCRIPT_ID());
				Function_120(&uVar35, ScriptParam_0.f_40);
				UNK_0x44986367(StackVal, &Var36);
				VNORMALIZE(&Var36);
				VSCALE(&Var36, 5.0f);
				uLocal_48 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), &uVar1, StackVal) + Vector(Var36, *(&ScriptParam_0 + 16), 2), *(&ScriptParam_0 + 28), Vector(4.0f, 8.0f, 12.0f));
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_48);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_48);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(&uLocal_48);
				bLocal_50 = true;
				bLocal_51 = true;
				Function_119(&iLocal_40, 1);
				Function_119(&iLocal_40, 16);
				iVar0 = 3;
				bVar45 = false;
				break;
			
			case 0x00000003:
				Function_106(&uVar2, 2, &bVar42, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!Function_100(ScriptParam_0.f_64, &(uVar2[0]), &iVar43, &iVar47, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar45 = false;
					break;
				}
				if (!Function_97(&uVar2, 2, Function_98(1)))
				{
					iVar0 = 5;
					bVar45 = false;
					break;
				}
				if (Function_95(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_98(1))
				{
					iVar0 = 5;
					bVar45 = false;
					break;
				}
				if (Function_12(&iVar39, &uVar2, &uVar1, &uVar46, &bVar45, &bVar42, uVar40))
				{
					iVar0 = 5;
					bVar45 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar45 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar45 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar45);
		}
	}
	if (bLocal_58)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_50)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_48);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_48);
	}
	if (bLocal_51)
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(&uLocal_48);
	}
	if (!bVar42)
	{
		Function_10(&uVar2, 4294967295);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
		Function_124(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (Function_6(&(uVar2[0]), 0))
	{
		SET_ACTOR_ALLOW_DISARM(&(uVar2[0]), 1);
		AI_GLOBAL_SET_PERMANENT_DANGER(&(uVar2[0]), 0);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar2[0]), 1);
		UNK_0x99AFD2D1(&(uVar2[0]), 0, 0);
		if (!bLocal_55)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&(uVar2[0]), 1);
			RESET_ANIM_SET_FOR_ACTOR(&(uVar2[0]), 0);
			TASK_FLEE_ACTOR(&(uVar2[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&(uVar2[0]), false);
		}
	}
	if (Function_6(&(uVar2[1]), 0))
	{
		if (DECOR_CHECK_EXIST(&(uVar2[1]), "reaction"))
		{
			DECOR_REMOVE(&(uVar2[1]), "reaction");
		}
		AI_GOAL_LOOK_CLEAR(&(uVar2[1]));
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar2[1]), 1);
		UNK_0x99AFD2D1(&(uVar2[1]), 0, 0);
		if (!bLocal_55)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&(uVar2[1]), 1);
			RESET_ANIM_SET_FOR_ACTOR(&(uVar2[1]), 0);
			TASK_FLEE_ACTOR(&(uVar2[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&(uVar2[1]), false);
		}
	}
	Function_5(&iVar5, 2);
	if (IS_BLIP_VALID(&uLocal_46))
	{
		REMOVE_BLIP(&uLocal_46);
	}
	Function_1(&uVar8);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x78A / 1930
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x7B2 / 1970
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

void Function_3(struct<13> Param0) //Position: 0x8FD / 2301
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x91A / 2330
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var[] uParam0, int iParam1) //Position: 0x938 / 2360
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x95B / 2395
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&bParam0))
		{
			if (!(GET_TASK_STATUS(&bParam0, 25) != 1 || GET_TASK_STATUS(&bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
			}
			Function_8(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_8(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_7(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_7(int iParam0, int iParam1) //Position: 0xA06 / 2566
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

int Function_8(int iParam0) //Position: 0xA58 / 2648
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_9(&iParam0);
		return 1;
	}
	return 0;
}

void Function_9(var uParam0) //Position: 0xA70 / 2672
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

void Function_10(var[] uParam0, int iParam1) //Position: 0xAA3 / 2723
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_11(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0xAD5 / 2773
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

bool Function_12(var uParam0, var[] uParam1, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB05 / 2821
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	switch (uParam0)
	{
		case 0x00000000:
			uParam4 = 0;
			Function_94(&(uParam1[1]));
			if (uParam5 || VDIST(Global_54078, Function_94(&(uParam1[1]))) > 5.0f)
			{
				AI_GLOBAL_SET_PERMANENT_DANGER(&(uParam1[0]), 1);
				Function_91();
				REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(&uLocal_48);
				bLocal_51 = false;
				Function_90(41);
				TASK_USE_GRINGO(&(uParam1[0]), GET_GRINGO_FROM_OBJECT(&uParam3), "UseCase1", 1, 1);
				SNAP_ACTOR_TO_GRINGO(&(uParam1[0]), &uParam3, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&(uParam1[1]), GET_GRINGO_FROM_OBJECT(&uParam3), "Female", 1, 1);
				SNAP_ACTOR_TO_GRINGO(&(uParam1[1]), &uParam3, "Female", true, 0, 0);
				uLocal_46 = ADD_BLIP_FOR_ACTOR(&(uParam1[1]), 325, 0.0f, 3, 0);
				SET_ACTOR_UPDATE_PRIORITY(&(uParam1[0]), false);
				SET_ACTOR_UPDATE_PRIORITY(&(uParam1[1]), false);
				Function_153(&uLocal_31, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			uParam4 = 0;
			if (Function_86(&uLocal_31, 0,2f))
			{
				Function_85(&(uParam1[1]), &Global_54076, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			uParam4 = 0;
			Function_84(&uParam4, &(uParam1[1]), &(uParam1[0]));
			Function_83(&uParam1);
			if (!IS_ACTOR_ALIVE(&(uParam1[0])))
			{
				SET_ACTOR_ACTION_SIGNAL(&(uParam1[1]), 0, "MaleDied");
				if (GET_LAST_ATTACKER(&(uParam1[0])) == &Global_54076)
				{
					MEMORY_CLEAR_EVENTS(&(uParam1[1]), 0);
					STOP_PED_SPEAKING(&(uParam1[1]), 0);
					if (IS_ACTOR_ALIVE(&(uParam1[1])))
					{
						Function_85(&Global_54076, &(uParam1[1]), "unforgivenPlayerMsg01", "unforgivenPlayerMsg01", 5, 60, 1, 1);
					}
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					uParam0 = 4;
					uParam4 = 0;
					return 0;
				}
				if (Function_6(&(uParam1[1]), 0))
				{
					TASK_FLEE_ACTOR(&(uParam1[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET(&(uParam1[1]), false);
				}
				bLocal_55 = true;
				return 1;
			}
			if (GET_LAST_ATTACKER(&(uParam1[1])) == &Global_54076)
			{
				Function_85(&(uParam1[0]), &Global_54076, "Minor_Shock", 0, 5, 60, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&(uParam1[0]), 4, 1);
				Function_82(&(uParam1[0]), &Global_54076);
				TASK_FLEE_ACTOR(&(uParam1[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				bLocal_55 = true;
				return 1;
			}
			if (GET_TASK_STATUS(&(uParam1[0]), 25) == 1)
			{
				TASK_FLEE_ACTOR(&(uParam1[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				bLocal_55 = true;
				return 1;
			}
			if (Function_81(&Global_54076, &(uParam1[0]), 6.0f))
			{
				Function_80(&iLocal_40, 4);
			}
			else
			{
				Function_119(&iLocal_40, 4);
			}
			if (Function_76(&(uParam1[0]), &uLocal_53, &fLocal_39, iLocal_40, 0, 0x40400000))
			{
				SET_ACTOR_ACTION_SIGNAL(&(uParam1[1]), 0, "MaleDied");
				STOP_PED_SPEAKING(&(uParam1[1]), 0);
				MEMORY_ALLOW_TAKE_COVER(&(uParam1[0]), 0);
				if (Function_81(&Global_54076, &(uParam1[0]), 6.0f))
				{
					Function_82(&(uParam1[0]), &Global_54076);
				}
				else
				{
					TASK_FOLLOW_ACTOR(&(uParam1[0]), &Global_54076);
				}
				ACTOR_PUT_WEAPON_IN_HAND(&(uParam1[0]), 4, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[0]), 0);
				AI_SET_ENABLE_DEAD_BODY_REACTIONS(&(uParam1[1]), 0);
				iVar4 = CREATE_ACTORSET_IN_LAYOUT(&uParam2, "flee", 0);
				ADD_ACTORSET_MEMBER(&iVar4, &Global_54076);
				ADD_ACTORSET_MEMBER(&iVar4, &(uParam1[0]));
				TASK_FLEE_ACTORSET(&(uParam1[1]), &iVar4, -1.0f, -1.0f, 0, 0, 0);
				if (IS_ACTOR_ALIVE(&(uParam1[1])))
				{
					Function_85(&Global_54076, &(uParam1[1]), "unforgivenPlayerMsg01", "unforgivenPlayerMsg01", 5, 60, 1, 1);
				}
				SET_ACTOR_ONE_SHOT_DEATH(&(uParam1[0]), 0);
				Function_153(&uLocal_27, 0.0f);
				Function_153(&uLocal_35, 0.0f);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				SET_ACTOR_ALLOW_DISARM(&(uParam1[0]), 1);
				uParam0 = 3;
				uParam4 = 0;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Function_6(&(uParam1[0]), 1))
			{
				MEMORY_CLEAR_ALL(&(uParam1[1]));
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), 1);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				uParam0 = 4;
				uParam4 = 0;
				return 0;
			}
			if (GET_LAST_ATTACKER(&(uParam1[1])) == &Global_54076)
			{
				TASK_FLEE_ACTOR(&(uParam1[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&(uParam1[1]), 2);
				bLocal_55 = true;
				return 1;
			}
			if (((!IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[1]), "knife_chase") && !IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[1]), "bankrobbery_cower")) && Function_75(&(uParam1[1]), &(uParam1[0])) < 4.0f) && Function_75(&(uParam1[1]), &Global_54076) < 4.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), 1);
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), "bankrobbery_cower", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[1]), "bankrobbery_cower/Random_Variation/A");
			}
			else if (Function_86(&uLocal_27, 25.0f))
			{
				TASK_FLEE_ACTOR(&(uParam1[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&(uParam1[1]), 2);
				bLocal_55 = true;
				return 1;
			}
			if (Function_73(&uLocal_35, 1,3f))
			{
				Function_82(&(uParam1[0]), &Global_54076);
			}
			break;
		
		case 0x00000004:
			if (Function_62(&(uParam1[1]), &Global_54076, &uLocal_45, &iLocal_44, &uLocal_27, &uParam2, 30.0f, &bLocal_41, &uLocal_42, &uParam4, "fema_emo_thanks", "fema_emo_thanks", "event_unforgivenMsg04", "event_unforgivenMsg04", 25.0f, 2, -5.0f, 0, 4.0f, 0, "unforgivenPlayerMsg02", 0, 1, 0, 0x40800000))
			{
				if (bLocal_41 || (iLocal_44 < 5 && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076)))
				{
					if (!bLocal_41)
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), 1);
						AI_GOAL_LOOK_CLEAR(&(uParam1[1]));
					}
					if (IS_ACTOR_ALIVE(&(uParam1[0])))
					{
						Function_57(100, 1, 0);
						Function_129(&(uParam1[0]), 4294967295 * 50);
						Function_129(&(uParam1[1]), 4294967295 * 50);
					}
					else
					{
						Function_57(50, 1, 0);
						Function_129(&(uParam1[1]), 4294967295 * 50);
					}
					Function_35(5, 1, 0);
					Function_18(uParam6, 1, 1);
					MEMORY_CLEAR_EVENTS(&(uParam1[1]), 0);
					Function_13(&(uParam1[1]), &iVar0);
					vVar1 = { StackVal, StackVal, Function_13(&(uParam1[1]), &iVar0) };
					if (iVar0 <= 1)
					{
						TASK_WANDER(&(uParam1[1]), -1.0f);
						TASK_PRIORITY_SET(&(uParam1[1]), 2);
					}
					else
					{
						TASK_GO_NEAR_COORD(&(uParam1[1]), &vVar1, 1.0f, 1);
						TASK_PRIORITY_SET(&(uParam1[1]), 2);
					}
					AI_SET_ENABLE_DEAD_BODY_REACTIONS(&(uParam1[1]), 0);
					bLocal_55 = true;
					return 1;
				}
			}
			MEMORY_CLEAR_EVENTS(&(uParam1[1]), 0);
			Function_13(&(uParam1[1]), &iVar0);
			vVar1 = { StackVal, StackVal, Function_13(&(uParam1[1]), &iVar0) };
			if (iVar0 <= 1)
			{
				TASK_WANDER(&(uParam1[1]), -1.0f);
				TASK_PRIORITY_SET(&(uParam1[1]), 2);
			}
			else
			{
				TASK_GO_NEAR_COORD(&(uParam1[1]), &vVar1, 1.0f, 1);
				TASK_PRIORITY_SET(&(uParam1[1]), 2);
			}
			bLocal_55 = true;
			return 1;
			break;
	}
	return 0;
}

vector3 Function_13(int iParam0, int iParam1) //Position: 0x1308 / 4872
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3[3];
	int iVar13;
	
	if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_17(2), Function_16(8)))
	{
		Function_94(&iParam0);
		uVar2 = Function_15(StackVal, &Global_46715, "interiorPoint_store", Function_94(&iParam0), 0);
	}
	Function_94(&iParam0);
	iVar0 = Function_15(StackVal, &Global_46715, "interiorPoint_hotel", Function_94(&iParam0), 0);
	Function_94(&iParam0);
	iVar1 = Function_15(StackVal, &Global_46715, "interiorPoint_saloon", Function_94(&iParam0), 0);
	if (IS_OBJECT_VALID(&uVar2) && iParam1 > vVar3)
	{
		Function_14(&uVar2);
		vVar3[iParam13] = { StackVal, StackVal, Function_14(&uVar2) };
		iParam1++;
	}
	if (IS_OBJECT_VALID(&iVar0) && iParam1 > vVar3)
	{
		Function_14(&iVar0);
		vVar3[iParam13] = { StackVal, StackVal, Function_14(&iVar0) };
		iParam1++;
	}
	if (IS_OBJECT_VALID(&iVar1) && iParam1 > vVar3)
	{
		Function_14(&iVar1);
		vVar3[iParam13] = { StackVal, StackVal, Function_14(&iVar1) };
		iParam1++;
	}
	if (iParam1 >= 0)
	{
		if (iParam1 == 1)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = RAND_INT_RANGE(0, (iParam1 - 1));
		}
	}
	vVar3[iVar133].f_4 = (vVar3[iVar133].y + 0,5f);
	return StackVal, StackVal, vVar3[iVar133];
}

vector3 Function_14(int iParam0) //Position: 0x145C / 5212
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(&iParam0, &vVar0);
	GET_OBJECT_ORIENTATION(&iParam0, &vVar0 + 12);
	return StackVal, StackVal, vVar0;
}

var Function_15(var uParam0, var uParam1, struct<2> Param2, float fParam4) //Position: 0x147A / 5242
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	var uVar6;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar6 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar6, 8);
		ITERATE_ON_PARTIAL_NAME(&uVar6, &uParam1);
		fVar0 = START_OBJECT_ITERATOR(&uVar6);
		while (IS_OBJECT_VALID(&fVar0))
		{
			GET_OBJECT_POSITION(&fVar0, &Var4);
			bVar3 = VDIST(Param2, Var4);
			if (bVar3 > bVar2 && bVar3 <= &fParam4)
			{
				bVar2 = bVar3;
				uVar1 = &fVar0;
			}
			fVar0 = OBJECT_ITERATOR_NEXT(&uVar6);
		}
		DESTROY_ITERATOR(&uVar6);
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
	}
	return &uVar1;
}

var Function_16(int iParam0) //Position: 0x150F / 5391
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

var Function_17(int iParam0) //Position: 0x157B / 5499
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 1)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

int Function_18(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15E7 / 5607
{
	bool bVar0;
	
	bVar0 = Function_34(0);
	if ((Function_34(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_19(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_34(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_19(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_34(597) + Function_34(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

int Function_19(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x16B9 / 5817
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
	Function_33(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_20(iParam0);
	return 1;
}

void Function_20(bool bParam0) //Position: 0x18E1 / 6369
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

void Function_21(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x197F / 6527
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_31(390))), 32);
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
					fVar19 = (Function_30(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_30(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_154(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_22(int iParam0) //Position: 0x1FBD / 8125
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1FCE / 8142
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x20C5 / 8389
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x20E0 / 8416
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x2147 / 8519
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x2159 / 8537
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x216B / 8555
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x229F / 8863
{
	return Global_55480[iParam016].f_96;
}

float Function_30(int iParam0) //Position: 0x22AE / 8878
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_31(int iParam0) //Position: 0x22E7 / 8935
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_32(int iParam0) //Position: 0x2324 / 8996
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

int Function_33(int iParam0, float fParam1, bool bParam2) //Position: 0x24BE / 9406
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

int Function_34(int iParam0) //Position: 0x2702 / 9986
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x2743 / 10051
{
	int iVar0;
	bool bVar1;
	
	if (Function_56(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_55())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_34(3);
	Function_52();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_50(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_49(Global_119936, 4))
			{
				Function_44(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_19(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_30(3));
	iVar0 = Function_34(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_36(int iParam0, int iParam1) //Position: 0x2917 / 10519
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_37(int iParam0, char* cParam1) //Position: 0x2B81 / 11137
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_41(iParam0, &cParam1, 0, 1);
	iVar1 = Function_38();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_38() //Position: 0x2D11 / 11537
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_39();
	return 0;
}

void Function_39() //Position: 0x2DB2 / 11698
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_40(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_40(int iParam0) //Position: 0x2E70 / 11888
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_41(int iParam0, char* cParam1) //Position: 0x2ED6 / 11990
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_42(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x322D / 12845
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_43(int iParam0) //Position: 0x32B5 / 12981
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

void Function_44(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3344 / 13124
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_46(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_45(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_45(char* cParam0) //Position: 0x33B9 / 13241
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x33F3 / 13299
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_48(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_47(uVar0))
		{
			case 0x00000002:
				if (!Function_49(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_47(char* cParam0) //Position: 0x346F / 13423
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

int Function_48(int iParam0) //Position: 0x3510 / 13584
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_80(&iVar1, 2147483648);
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

bool Function_49(var uParam0, int iParam1) //Position: 0x354D / 13645
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x3560 / 13664
{
	bool bVar0;
	int iVar1;
	
	Function_19(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_51(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_38();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_51(int iParam0, int iParam1) //Position: 0x370C / 14092
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_52() //Position: 0x3751 / 14161
{
	Function_54(3, 0.0f);
	Function_53(3, 10000.0f);
	return;
}

int Function_53(int iParam0, int iParam1) //Position: 0x3767 / 14183
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_54(int iParam0, int iParam1) //Position: 0x37A7 / 14247
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_55() //Position: 0x37E7 / 14311
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_56(int iParam0) //Position: 0x3812 / 14354
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x3821 / 14369
{
	int iVar0;
	bool bVar1;
	
	if (Function_56(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_55())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_34(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_50(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_49(Global_119936, 1))
				{
					Function_44(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_61(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_49(Global_119936, 2))
				{
					Function_44(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_19(1, bVar1, 0, 0);
	}
	else
	{
		Function_60(1, (4294967295 * bVar1), 0);
	}
	if (Function_34(1) <= 4294962296)
	{
		Function_59(1, 4294962296, 0);
	}
	else if (Function_34(1) >= 5000)
	{
		Function_59(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_30(1));
	iVar0 = Function_34(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_37(2, Function_58(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_37(2, Function_58(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_37(2, Function_58(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_37(2, Function_58(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_37(2, Function_58(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_37(2, Function_58(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_37(2, Function_58(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_37(2, Function_58(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_37(2, Function_58(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_37(2, Function_58(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_37(2, Function_58(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_37(2, Function_58(Global_21369.f_244), 0);
			}
			break;
	}
	Function_36(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_58(int iParam0) //Position: 0x3B48 / 15176
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

int Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x3BEB / 15339
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_33(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_32(iParam0);
	if (&bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_60(int iParam0, bool bParam1, int iParam2) //Position: 0x3E87 / 16007
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_61(int iParam0, bool bParam1) //Position: 0x40D2 / 16594
{
	bool bVar0;
	int iVar1;
	
	Function_60(iParam0, bParam1, 0);
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
	iVar1 = Function_51(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_38();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

bool Function_62(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x427D / 17021
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (uParam3)
	{
		case 0x00000000:
			if (&bParam21)
			{
				uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 1);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
				uParam2 = Function_75(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &bParam1, -1.0f, 1);
				uParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_154(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uParam8, &bParam1, Function_154(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_75(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &uParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_75(&bParam0, &bParam1) - uParam2) < fParam6)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &bParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_6(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
			TASK_FACE_ACTOR(&bParam0, &bParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (((GET_NTH_TASK_STATUS(&bParam0, 0) != 0 && !IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, "run")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, "struggle")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, "male_killed"))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 1);
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
				}
				if (&bParam19)
				{
					Function_85(&bParam0, &Global_54076, "nTHANK_YOU", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_85(&bParam0, &Global_54076, &uParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_153(&uParam4, 0.0f);
			}
			else if (!Function_6(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_72(&bParam0))
			{
				if (Function_86(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_63(&bParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &bParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_85(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_72(&bParam0))
			{
				if (Function_86(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_63(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_63(&bParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&bParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_63(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4682 / 18050
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_64(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_64(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_64(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4770 / 18288
{
	char* cVar0[32];
	
	Function_71();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_70(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_69(&uParam0, 0);
	Function_68(&uParam0, iParam1);
	Function_67(&uParam0, &uParam2);
	Function_66(&uParam0, uParam3);
	if (Function_65(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_65(int iParam0) //Position: 0x49DC / 18908
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_66(var uParam0, bool bParam1) //Position: 0x4A00 / 18944
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_67(var uParam0, int iParam1) //Position: 0x4A24 / 18980
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x4A4A / 19018
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_69(var uParam0, bool bParam1) //Position: 0x4A71 / 19057
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_70(bool bParam0) //Position: 0x4A95 / 19093
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_71() //Position: 0x4AB4 / 19124
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_72(bool bParam0) //Position: 0x4B03 / 19203
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&bParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

bool Function_73(var uParam0, float fParam1) //Position: 0x4B2B / 19243
{
	if (Function_86(&uParam0, fParam1))
	{
		Function_74(&uParam0);
		return 1;
	}
	return 0;
}

void Function_74(vector3 vParam0) //Position: 0x4B45 / 19269
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

float Function_75(bool bParam0, bool bParam1) //Position: 0x4B5C / 19292
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_76(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x4C51 / 19537
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
		fVar0 = Function_75(&iParam0, &Global_54076);
		if (!Function_79(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_77(&iParam0);
				return 1;
			}
		}
		if (!Function_79(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_77(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_77(&iParam0);
				return 1;
			}
		}
		if (!Function_79(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_77(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_77(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_79(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_77(&iParam0);
				return 1;
			}
		}
		if (!Function_79(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_77(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_77(int iParam0) //Position: 0x4E1A / 19994
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_78(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_78(int iParam0) //Position: 0x4E57 / 20055
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_79(var uParam0, int iParam1) //Position: 0x4E70 / 20080
{
	return (uParam0 && iParam1) == 0;
}

void Function_80(int iParam0, int iParam1) //Position: 0x4E7D / 20093
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_81(var uParam0, var uParam1, bool bParam2) //Position: 0x4E93 / 20115
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

int Function_82(var uParam0, int iParam1) //Position: 0x4FA8 / 20392
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

void Function_83(int[] iParam0) //Position: 0x509E / 20638
{
	switch (iLocal_52)
	{
		case 0x00000000:
			if (!IS_ANY_SPEECH_PLAYING(&(iParam0[1])))
			{
				iLocal_52 = 1;
				Function_153(&uLocal_27, 0.0f);
			}
			break;
		
		case 0x00000001:
			if (Function_86(&uLocal_27, 0,1f) && !IS_AMBIENT_SPEECH_PLAYING(&(iParam0[1])))
			{
				Function_85(&(iParam0[1]), &Global_54076, "event_unforgivenMsg03", "event_unforgivenMsg03", 5, 50, 1, 1);
				Function_153(&uLocal_27, 0.0f);
				iLocal_52 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_86(&uLocal_27, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(iParam0[1])))
			{
				Function_85(&(iParam0[0]), &Global_54076, "event_unforgivenMsg01", "event_unforgivenMsg01", 5, 50, 1, 1);
				Function_153(&uLocal_27, 0.0f);
				iLocal_52 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_86(&uLocal_27, 5.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(iParam0[0])))
			{
				Function_85(&(iParam0[0]), &Global_54076, "event_unforgivenMsg02", "event_unforgivenMsg02", 5, 50, 1, 1);
				Function_153(&uLocal_27, 0.0f);
				STOP_PED_SPEAKING(&(iParam0[1]), 1);
				iLocal_52 = 4;
			}
			break;
	}
	return;
}

void Function_84(float fParam0, int iParam1, bool bParam2) //Position: 0x5218 / 21016
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	switch (iLocal_54)
	{
		case 0x00000000:
			if (Function_86(&uLocal_31, 15,6f))
			{
				fParam0 = 0;
				iLocal_54 = 1;
			}
			break;
		
		case 0x00000001:
			fParam0 = 0;
			if (Function_86(&uLocal_31, 16,85f))
			{
				Var0 = Vector(0,4f, 0.0f, 0.0f);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), Var0, &Var2);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var4);
				Var4.f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, Var2, Var4, (0,5f + RAND_FLOAT_RANGE(-0,1f, 0,1f)), 0);
				ADD_BLOOD_TO_ACTOR(StackVal, &iParam1, Vector(-0,2f, 1,1f, -0,1f), 0, 1, 0);
				iLocal_54 = 2;
			}
			break;
		
		case 0x00000002:
			fParam0 = 0;
			if (Function_86(&uLocal_31, 17,55f))
			{
				Var0 = Vector(0,4f, 0.0f, 0.0f);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), Var0, &Var2);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var4);
				Var4.f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, Var2, Var4, (0,5f + RAND_FLOAT_RANGE(-0,1f, 0,1f)), 0);
				ADD_BLOOD_TO_ACTOR(StackVal, &iParam1, Vector(-0,3f, 1,1f, 0.0f), 0, 1, 0);
				iLocal_54 = 3;
			}
			break;
		
		case 0x00000003:
			fParam0 = 0;
			if (Function_86(&uLocal_31, 18,45f))
			{
				Var0 = Vector(0,4f, 0.0f, 0.0f);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), Var0, &Var2);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var4);
				Var4.f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, Var2, Var4, (0,5f + RAND_FLOAT_RANGE(-0,1f, 0,1f)), 0);
				ADD_BLOOD_TO_ACTOR(StackVal, &iParam1, Vector(0.0f, 1,3f, -0,1f), 0, 1, 0);
				iLocal_54 = 4;
			}
			break;
		
		case 0x00000004:
			fParam0 = 0;
			if (Function_86(&uLocal_31, 19,25f))
			{
				Var0 = Vector(0,4f, 0.0f, 0.0f);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), Var0, &Var2);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var4);
				Var4.f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, Var2, Var4, (0,5f + RAND_FLOAT_RANGE(-0,1f, 0,1f)), 0);
				ADD_BLOOD_TO_ACTOR(StackVal, &iParam1, Vector(-0,1f, 1,1f, -0,1f), 0, 1, 0);
				TASK_FLEE_ACTOR(&bParam2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				iLocal_54 = 5;
			}
			break;
	}
	return;
}

void Function_85(bool bParam0, bool bParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x549A / 21658
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_75(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &uParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &uParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&bParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_86(var uParam0, float fParam1) //Position: 0x5547 / 21831
{
	if (Function_89(&uParam0))
	{
		if (Function_87(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_87(vector3 vParam0) //Position: 0x5565 / 21861
{
	if (Function_89(&vParam0))
	{
		if (Function_88(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_88(int iParam0) //Position: 0x5632 / 22066
{
	return Function_79(iParam0, 2);
}

bool Function_89(int iParam0) //Position: 0x5640 / 22080
{
	return Function_79(iParam0, 1);
}

void Function_90(int iParam0) //Position: 0x564E / 22094
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_19(409, 1, 0, 0);
	}
	return;
}

void Function_91() //Position: 0x567F / 22143
{
	int iVar0;
	
	bLocal_58 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_93(3);
		if (iVar0 == 0)
		{
			uLocal_56 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			uLocal_56 = "FTR_SONG_04";
		}
		else if (iVar0 == 2)
		{
			uLocal_56 = "FTR_SONG_05";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_92())
		{
			uLocal_56 = "NRT_SONG_04";
		}
		else
		{
			uLocal_56 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_93(3);
		if (iVar0 == 0)
		{
			uLocal_56 = "MEX_SONG_03";
		}
		else if (iVar0 == 1)
		{
			uLocal_56 = "MEX_SONG_05";
		}
		else if (iVar0 == 2)
		{
			uLocal_56 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_56, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_92() //Position: 0x5794 / 22420
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_93(bool bParam0) //Position: 0x57A7 / 22439
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

struct<8> Function_94(int iParam0) //Position: 0x57C0 / 22464
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_95(var uParam0, struct<2> Param1) //Position: 0x57D2 / 22482
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_96(&uParam0);
		Var0 = Function_96(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_96(int iParam0) //Position: 0x5849 / 22601
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

bool Function_97(var[] uParam0, int iParam1, float fParam2) //Position: 0x58B5 / 22709
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_75(&(uParam0[iVar0]), &Global_54076) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_98(bool bParam0) //Position: 0x58F4 / 22772
{
	var uVar0;
	bool bVar1;
	
	if (!&bParam0)
	{
		Function_99(&uVar0, &bVar1);
		if (bVar1 < 60.0f)
		{
			return (bVar1 + 20.0f);
		}
		return (bVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_99(var uParam0, bool bParam1) //Position: 0x5930 / 22832
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

bool Function_100(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x59C1 / 22977
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_75(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_103() && !uParam2)
		{
			return 0;
		}
		if (Function_102(iParam0) && !uParam2)
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
		if (!Function_101(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_101(int iParam0, int iParam1) //Position: 0x5B04 / 23300
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

int Function_102(int iParam0) //Position: 0x5B25 / 23333
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

int Function_103() //Position: 0x5B65 / 23397
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
						if (Function_104(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_104(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_104(int iParam0, var uParam1) //Position: 0x5C28 / 23592
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_96(&iParam0);
			Var0 = Function_96(&iParam0);
			Function_105(&uParam1);
			Var2 = Function_105(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_105(int iParam0) //Position: 0x5CCA / 23754
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

void Function_106(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x5D38 / 23864
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
			Function_118(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_117(0);
		}
		if (&bParam6)
		{
			Function_115(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_113(iParam3);
		}
		Function_111(iParam3);
		if (Function_110(StackVal, 32768))
		{
			Function_107(1);
		}
		Global_26652[iParam34].f_16++;
		Function_19(408, 1, 0, 0);
	}
}

void Function_107(bool bParam0) //Position: 0x5E31 / 24113
{
	if (bParam0)
	{
		Function_109(0x10000000);
	}
	else
	{
		Function_108(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_108(int iParam0) //Position: 0x5E56 / 24150
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_109(int iParam0) //Position: 0x5E73 / 24179
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x5E86 / 24198
{
	return (uParam0 && iParam1) == 0;
}

void Function_111(int iParam0) //Position: 0x5E93 / 24211
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_79(StackVal, 524288))
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
			bVar1 = Function_112(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_112(int iParam0) //Position: 0x5F39 / 24377
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_113(int iParam0) //Position: 0x5F50 / 24400
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
	Function_114(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_114(vector3 vParam0) //Position: 0x5FEF / 24559
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x600B / 24587
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
			Function_116(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_116(struct<113> Param0) //Position: 0x6092 / 24722
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

void Function_117(int iParam0) //Position: 0x60F0 / 24816
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_112(900)), 0);
	return;
}

void Function_118(int iParam0) //Position: 0x6114 / 24852
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_112(200)), 0);
	return;
}

void Function_119(int iParam0, int iParam1) //Position: 0x6137 / 24887
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_120(var uParam0, int iParam1) //Position: 0x6148 / 24904
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
	Function_122(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_121(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_121(int iParam0, var uParam1, struct<2> Param2) //Position: 0x62B2 / 25266
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_122(bool bParam0) //Position: 0x635A / 25434
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
						Function_123(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_95(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_123(iVar0);
						}
					}
					else if (Function_95(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_123(iVar0);
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
			Function_123(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_123(int iParam0) //Position: 0x64C8 / 25800
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

int Function_124(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6530 / 25904
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
		Function_126("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_125(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_125(&bVar0);
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
			Function_125(&bVar0);
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

void Function_125(bool bParam0) //Position: 0x679C / 26524
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

void Function_126(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x67E6 / 26598
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_127(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_127(int iParam0) //Position: 0x686B / 26731
{
	char* cVar0[16];
	
	if (!Function_128())
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

bool Function_128() //Position: 0x68AA / 26794
{
	if (Function_79(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_129(var uParam0, bool bParam1) //Position: 0x68C5 / 26821
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_130(int iParam0) //Position: 0x68E7 / 26855
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

struct<32> Function_131(char* cParam0) //Position: 0x691E / 26910
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132("0", &cVar8, ""), 4);
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

struct<32> Function_132(char* cParam0) //Position: 0x698A / 27018
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_133(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x69AC / 27052
{
	struct<2> Var0[4];
	float fVar9[4];
	int iVar14;
	
	if (Global_43789 == Global_46760[0])
	{
		Var0[02] = Vector(-2179,001f, 16,285f, 2593,601f);
		fVar9[0] = 180,995f;
		Var0[12] = Vector(-2168,709f, 16,881f, 2604,797f);
		fVar9[1] = 268,815f;
		Var0[22] = Vector(-2175,47f, 16,881f, 2592,032f);
		fVar9[2] = 189,497f;
		Var0[32] = Vector(-2150,886f, 16,302f, 2587,491f);
		fVar9[3] = 178,234f;
	}
	else if (Global_43789 == Global_46894[2])
	{
		Var0[02] = Vector(-802,846f, 13,051f, 3708,006f);
		fVar9[0] = 228,72f;
		Var0[12] = Vector(-798,557f, 13,051f, 3722,78f);
		fVar9[1] = 228,119f;
		Var0[22] = Vector(-785,73f, 13,165f, 3705,464f);
		fVar9[2] = 134,38f;
		Var0[32] = Vector(-803,601f, 13,12f, 3701,478f);
		fVar9[3] = 230,357f;
	}
	else if (Global_43789 == Global_46816[1])
	{
		Var0[02] = Vector(143,89f, 73,286f, 2235,491f);
		fVar9[0] = 96,478f;
		Var0[12] = Vector(155,684f, 73,286f, 2231,607f);
		fVar9[1] = 38,692f;
		Var0[22] = Vector(163,625f, 73,74f, 2222,555f);
		fVar9[2] = 153,247f;
		Var0[32] = Vector(151,509f, 73,286f, 2229,209f);
		fVar9[3] = 318,421f;
	}
	else
	{
		return 0;
	}
	iVar14 = 0;
	if (Function_134(&iVar14, &Var0, &uParam2, uParam3))
	{
		uParam0 = Var0[iVar142];
		uParam1 = fVar9[iVar14];
		return 1;
	}
	return 0;
}

bool Function_134(var uParam0, struct<2>[] Param1, var uParam2, var uParam3) //Position: 0x6B9F / 27551
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	fVar2 = 1E+08.0f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		fVar1 = Function_95(StackVal, &Global_54076, Param1[iVar02]);
		if (fVar1 > fVar2 && fVar1 < (Function_138() - 30.0f))
		{
			if (!Function_137(StackVal, Param1[iVar02], 1.0f, 65.0f, 1, 1, 0))
			{
				if (Function_135(&(Param1[iVar02]), &uParam2, 0, 0) || uParam3)
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

int Function_135(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x6C32 / 27698
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
	Function_122(4294967295);
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
			else if (Function_136(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_136(struct<2> Param0) //Position: 0x6D0E / 27918
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_137(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6D2D / 27949
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

float Function_138() //Position: 0x6D4E / 27982
{
	float fVar0;
	var uVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_99(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_139(struct<2>[] Param0) //Position: 0x6D7F / 28031
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_144();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_143(&(Param0[iVar02]), 8);
		}
		else if (Function_142())
		{
			iVar1 = 1;
			Function_143(&(Param0[iVar02]), 8);
		}
		Function_143(&(Param0[iVar02]), 16);
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
				Function_143(&(Param0[iVar02]), 1);
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
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
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
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
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
	Function_140();
	return 1;
}

void Function_140() //Position: 0x7141 / 28993
{
	if (!Function_141(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_141(int iParam0) //Position: 0x7181 / 29057
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_142() //Position: 0x719D / 29085
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

void Function_143(struct<13> Param0) //Position: 0x71CB / 29131
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_144() //Position: 0x71DE / 29150
{
	if (!Function_141(128))
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

bool Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7220 / 29216
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

void Function_146(var[] uParam0, int iParam1) //Position: 0x7298 / 29336
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_147(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x72BB / 29371
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_148(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_143(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_148(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x72F9 / 29433
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_143(&(Param0[iVar02]), 4);
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

var Function_149(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x73C8 / 29640
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
			Function_143(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_143(&(Param0[iVar02]), 8);
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

var Function_150(int iParam0, int iParam1) //Position: 0x74A4 / 29860
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_151(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x74BA / 29882
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_34(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_152(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_152(bool bParam0) //Position: 0x75C1 / 30145
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_153(vector3 vParam0) //Position: 0x76B5 / 30389
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_119(&vParam0, 1);
	Function_80(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_154() //Position: 0x76DA / 30426
{
	var uVar0;
	
	return &uVar0;
}

