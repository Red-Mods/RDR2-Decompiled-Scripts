//Decompiled with MagicRDR v1.0
//Function Count : 154
//Statics Count : 97
//Natives Count : 262
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
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0.0f;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2[2];
	int iVar5[2];
	bool bVar8;
	struct<8> Var36;
	bool bVar44;
	vector3 vVar45;
	int iVar48;
	int iVar49;
	var uVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	bool bVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_30 = 0.0f;
	iLocal_31 = 0;
	bLocal_32 = false;
	iLocal_34 = 0;
	bLocal_38 = false;
	bLocal_39 = false;
	iLocal_40 = 0;
	iLocal_42 = 0;
	bLocal_43 = false;
	bLocal_45 = false;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_153());
	bVar8 = 9;
	Function_152(&uLocal_21, 0.0f);
	iVar49 = 0;
	uVar50 = Function_150(0, 1, 1, 0, 0);
	iVar51 = Function_149(41, 4);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iVar51 == 0)
			{
				iVar5[0] = 138;
				iVar5[1] = 66;
			}
			else if (iVar51 == 1)
			{
				iVar5[0] = 139;
				iVar5[1] = 67;
			}
			else if (iVar51 == 2)
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
			if (iVar51 == 0)
			{
				iVar5[0] = 282;
				iVar5[1] = 246;
			}
			else if (iVar51 == 1)
			{
				iVar5[0] = 281;
				iVar5[1] = 249;
			}
			else if (iVar51 == 2)
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
			if (iVar51 == 0)
			{
				iVar5[0] = 144;
				iVar5[1] = 71;
			}
			else if (iVar51 == 1)
			{
				iVar5[0] = 143;
				iVar5[1] = 72;
			}
			else if (iVar51 == 2)
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
	Function_148(&bVar8, iVar5[0], 3, 0);
	Function_148(&bVar8, iVar5[1], 3, 0);
	Function_146(&bVar8, "knife_chase", 1, 0);
	Function_146(&bVar8, "knife_chase", 5, 0);
	Function_146(&bVar8, "custom/knife_chase", 8, 0);
	Function_146(&bVar8, "fema_emo_thanks", 5, 0);
	Function_146(&bVar8, "custom/fema_emo_thanks", 8, 0);
	Function_146(&bVar8, "bankrobbery_cower", 5, 0);
	Function_146(&bVar8, "custom/bankrobbery_cower", 8, 0);
	Function_145(&iVar5, 2);
	bVar52 = false;
	iVar53 = 0;
	iVar54 = 0;
	iVar57 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar58 = 0;
	bVar59 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar55 = 600;
		if (Function_144(&bVar59, &iVar0, &iVar58, &bVar55, bVar52))
		{
			if (bVar59)
			{
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_138(&bVar8))
				{
					iVar0 = 1;
					bVar55 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_132(&ScriptParam_0 + 8, &ScriptParam_0 + 20 + 4, &ScriptParam_0 + 52, ScriptParam_0.f_32))
				{
					iVar0 = 2;
					bVar55 = false;
				}
				else
				{
					iVar0 = 5;
					bVar55 = false;
				}
				break;
			
			case 0x00000002:
				iVar48 = 0;
				while (iVar48 <= 2)
				{
					Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130("unforgiven") };
					bVar2[iVar48] = CREATE_ACTOR_IN_LAYOUT(bVar1, &Var36, iVar5[iVar48], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar2[iVar48], 0);
					SET_ACTOR_ONE_SHOT_DEATH(bVar2[iVar48], 1);
					SET_ALLOW_EXECUTE(bVar2[iVar48], 0);
					TASK_STAND_STILL(bVar2[iVar48], -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2[iVar48], false);
					TASK_PRIORITY_SET(bVar2[iVar48], 0);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[iVar48], 0);
					UNK_0x99AFD2D1(bVar2[iVar48], 1, 1);
					iVar48++;
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2[0]);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2[1]);
				bVar56 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_153(), "knife_chase", *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				Function_129(bVar2[0]);
				DECOR_SET_BOOL(bVar2[1], "criminal", true);
				SET_ACTOR_ALLOW_DISARM(bVar2[0], 0);
				GIVE_WEAPON_TO_ACTOR(bVar2[0], 22, 0, 1, 1);
				GIVE_WEAPON_TO_ACTOR(bVar2[0], 4, 0, 1, 1);
				Function_128(bVar2[0], 0);
				Function_128(bVar2[1], 4294967295 * 50);
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar2[1], 0);
				SET_ACTOR_CAN_BE_SOFTLOCKED(bVar2[1], 0);
				SET_ACTOR_CAN_BE_TARGETED(bVar2[1], false);
				SET_ALLOW_DEADEYE_LOCKS(bVar2[1], false);
				SNAP_ACTOR_TO_GRINGO(bVar2[0], bVar56, "UseCase1", 0, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bVar2[1], bVar56, "Female", 0, 0, 0);
				Function_123(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
				bVar44 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_153(), 3, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar44, "script", GET_THIS_SCRIPT_ID());
				Function_119(&bVar44, ScriptParam_0.f_32);
				UNK_0x44986367(StackVal, &vVar45);
				VNORMALIZE(&vVar45);
				VSCALE(&vVar45, 5.0f);
				bLocal_37 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_153(), bVar1, StackVal) + Vector(vVar45, *(&ScriptParam_0 + 8), 2), *(&ScriptParam_0 + 20), 4.0f, 8.0f, 12.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_37);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_37);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_37);
				bLocal_38 = true;
				bLocal_39 = true;
				Function_118(&iLocal_31, 1);
				Function_118(&iLocal_31, 16);
				iVar0 = 3;
				bVar55 = false;
				break;
			
			case 0x00000003:
				Function_105(&bVar2, 2, &bVar52, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_99(ScriptParam_0.f_56, bVar2[0], &iVar53, &iVar57, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar55 = false;
					break;
				}
				if (!Function_96(&bVar2, 2, Function_97(1)))
				{
					iVar0 = 5;
					bVar55 = false;
					break;
				}
				if (Function_94(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_97(1))
				{
					iVar0 = 5;
					bVar55 = false;
					break;
				}
				if (Function_12(&iVar49, &bVar2, bVar1, bVar56, &bVar55, &bVar52, uVar50))
				{
					iVar0 = 5;
					bVar55 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar55 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar55 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar55);
		}
	}
	if (bLocal_45)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_38)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_37);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_37);
	}
	if (bLocal_39)
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_37);
	}
	if (!bVar52)
	{
		Function_10(&bVar2, 4294967295);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
		Function_123(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_6(bVar2[0], 0))
	{
		SET_ACTOR_ALLOW_DISARM(bVar2[0], 1);
		AI_GLOBAL_SET_PERMANENT_DANGER(bVar2[0], 0);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[0], 1);
		UNK_0x99AFD2D1(bVar2[0], 0, 0);
		if (!bLocal_43)
		{
			MAKE_ACTOR_READY_FOR_ACTION(bVar2[0], 1);
			RESET_ANIM_SET_FOR_ACTOR(bVar2[0], 0);
			TASK_FLEE_ACTOR(bVar2[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2[0], 0);
		}
	}
	if (Function_6(bVar2[1], 0))
	{
		if (DECOR_CHECK_EXIST(bVar2[1], "reaction"))
		{
			DECOR_REMOVE(bVar2[1], "reaction");
		}
		AI_GOAL_LOOK_CLEAR(bVar2[1]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[1], 1);
		UNK_0x99AFD2D1(bVar2[1], 0, 0);
		if (!bLocal_43)
		{
			MAKE_ACTOR_READY_FOR_ACTION(bVar2[1], 1);
			RESET_ANIM_SET_FOR_ACTOR(bVar2[1], 0);
			TASK_FLEE_ACTOR(bVar2[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2[1], 0);
		}
	}
	Function_5(&iVar5, 2);
	if (IS_BLIP_VALID(bLocal_36))
	{
		REMOVE_BLIP(bLocal_36);
	}
	Function_1(&bVar8);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x740 / 1856
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

void Function_2(var uParam0, int iParam1) //Position: 0x766 / 1894
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

void Function_3(var uParam0, int iParam1) //Position: 0x894 / 2196
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x8AE / 2222
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x8CB / 2251
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x8ED / 2285
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
			Function_8(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_8(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_7(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_7(bool bParam0, int iParam1) //Position: 0x989 / 2441
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

int Function_8(bool bParam0) //Position: 0x9D3 / 2515
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_9(bParam0);
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0) //Position: 0x9E9 / 2537
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

void Function_10(var uParam0, int iParam1) //Position: 0xA15 / 2581
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_11(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0xA42 / 2626
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

bool Function_12(var uParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA6D / 2669
{
	int iVar0;
	struct<6> Var1;
	bool bVar7;
	
	bParam2 = bParam2;
	iVar0 = 0;
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam4 = 0;
			Function_93((*uParam1)[1]);
			if (*uParam5 || VDIST(Global_34574, Function_93((*uParam1)[1])) > 5.0f)
			{
				AI_GLOBAL_SET_PERMANENT_DANGER((*uParam1)[0], 1);
				Function_90();
				REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_37);
				bLocal_39 = false;
				Function_89(41);
				TASK_USE_GRINGO((*uParam1)[0], GET_GRINGO_FROM_OBJECT(bParam3), "UseCase1", 1, 1);
				SNAP_ACTOR_TO_GRINGO((*uParam1)[0], bParam3, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO((*uParam1)[1], GET_GRINGO_FROM_OBJECT(bParam3), "Female", 1, 1);
				SNAP_ACTOR_TO_GRINGO((*uParam1)[1], bParam3, "Female", 1, 0, 0);
				bLocal_36 = ADD_BLIP_FOR_ACTOR((*uParam1)[1], 325, 0.0f, 3, 0);
				SET_ACTOR_UPDATE_PRIORITY((*uParam1)[0], false);
				SET_ACTOR_UPDATE_PRIORITY((*uParam1)[1], false);
				Function_152(&uLocal_24, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			*uParam4 = 0;
			if (Function_85(&uLocal_24, 0.2f))
			{
				Function_84((*uParam1)[1], Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			*uParam4 = 0;
			Function_83(uParam4, (*uParam1)[1], (*uParam1)[0]);
			Function_82(uParam1);
			if (!IS_ACTOR_ALIVE((*uParam1)[0]))
			{
				SET_ACTOR_ACTION_SIGNAL((*uParam1)[1], 0, "MaleDied");
				if (GET_LAST_ATTACKER((*uParam1)[0]) == Global_34573)
				{
					MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
					STOP_PED_SPEAKING((*uParam1)[1], 0);
					if (IS_ACTOR_ALIVE((*uParam1)[1]))
					{
						Function_84(Global_34573, (*uParam1)[1], "unforgivenPlayerMsg01", "unforgivenPlayerMsg01", 5, 60, 1, 1);
					}
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					*uParam0 = 4;
					*uParam4 = 0;
					return 0;
				}
				if (Function_6((*uParam1)[1], 0))
				{
					TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET((*uParam1)[1], 0);
				}
				bLocal_43 = true;
				return 1;
			}
			if (GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573)
			{
				Function_84((*uParam1)[0], Global_34573, "Minor_Shock", 0, 5, 60, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND((*uParam1)[0], 4, 1);
				Function_81((*uParam1)[0], &Global_34573);
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				bLocal_43 = true;
				return 1;
			}
			if (GET_TASK_STATUS((*uParam1)[0], 25) == 1)
			{
				TASK_FLEE_ACTOR((*uParam1)[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				bLocal_43 = true;
				return 1;
			}
			if (Function_80(Global_34573, (*uParam1)[0], 6.0f))
			{
				Function_79(&iLocal_31, 4);
			}
			else
			{
				Function_118(&iLocal_31, 4);
			}
			if (Function_75((*uParam1)[0], &uLocal_41, &fLocal_30, iLocal_31, 0, 0x40400000))
			{
				SET_ACTOR_ACTION_SIGNAL((*uParam1)[1], 0, "MaleDied");
				STOP_PED_SPEAKING((*uParam1)[1], 0);
				MEMORY_ALLOW_TAKE_COVER((*uParam1)[0], 0);
				if (Function_80(Global_34573, (*uParam1)[0], 6.0f))
				{
					Function_81((*uParam1)[0], &Global_34573);
				}
				else
				{
					TASK_FOLLOW_ACTOR((*uParam1)[0], Global_34573);
				}
				ACTOR_PUT_WEAPON_IN_HAND((*uParam1)[0], 4, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[0], 0);
				AI_SET_ENABLE_DEAD_BODY_REACTIONS((*uParam1)[1], 0);
				bVar7 = CREATE_ACTORSET_IN_LAYOUT(bParam2, "flee", 0);
				ADD_ACTORSET_MEMBER(bVar7, Global_34573);
				ADD_ACTORSET_MEMBER(bVar7, (*uParam1)[0]);
				TASK_FLEE_ACTORSET((*uParam1)[1], bVar7, -1.0f, -1.0f, 0, 0, 0);
				if (IS_ACTOR_ALIVE((*uParam1)[1]))
				{
					Function_84(Global_34573, (*uParam1)[1], "unforgivenPlayerMsg01", "unforgivenPlayerMsg01", 5, 60, 1, 1);
				}
				SET_ACTOR_ONE_SHOT_DEATH((*uParam1)[0], 0);
				Function_152(&uLocal_21, 0.0f);
				Function_152(&uLocal_27, 0.0f);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				SET_ACTOR_ALLOW_DISARM((*uParam1)[0], 1);
				*uParam0 = 3;
				*uParam4 = 0;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Function_6((*uParam1)[0], 1))
			{
				MEMORY_CLEAR_ALL((*uParam1)[1]);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				*uParam0 = 4;
				*uParam4 = 0;
				return 0;
			}
			if (GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573)
			{
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
				bLocal_43 = true;
				return 1;
			}
			if (((!IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[1], "knife_chase") && !IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[1], "bankrobbery_cower")) && Function_74((*uParam1)[1], (*uParam1)[0]) < 4.0f) && Function_74((*uParam1)[1], Global_34573) < 4.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "bankrobbery_cower", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "bankrobbery_cower/Random_Variation/A");
			}
			else if (Function_85(&uLocal_21, 25.0f))
			{
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
				bLocal_43 = true;
				return 1;
			}
			if (Function_72(&uLocal_27, 1.3f))
			{
				Function_81((*uParam1)[0], &Global_34573);
			}
			break;
		
		case 0x00000004:
			if (Function_61(uParam1[1], &Global_34573, &uLocal_35, &iLocal_34, &uLocal_21, bParam2, 30.0f, &bLocal_32, uLocal_33, uParam4, "fema_emo_thanks", "fema_emo_thanks", "event_unforgivenMsg04", "event_unforgivenMsg04", 25.0f, 2, -5.0f, 0, 4.0f, 0, "unforgivenPlayerMsg02", 0, 1, 0, 0x40800000))
			{
				if (bLocal_32 || (iLocal_34 < 5 && !IS_AMBIENT_SPEECH_PLAYING(Global_34573)))
				{
					if (!bLocal_32)
					{
						RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
						AI_GOAL_LOOK_CLEAR((*uParam1)[1]);
					}
					if (IS_ACTOR_ALIVE((*uParam1)[0]))
					{
						Function_56(100, 1, 0);
						Function_128((*uParam1)[0], 4294967295 * 50);
						Function_128((*uParam1)[1], 4294967295 * 50);
					}
					else
					{
						Function_56(50, 1, 0);
						Function_128((*uParam1)[1], 4294967295 * 50);
					}
					Function_34(5, 1, 0);
					Function_18(uParam6, 1);
					MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
					Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_13((*uParam1)[1], &iVar0) };
					if (iVar0 <= 1)
					{
						TASK_WANDER((*uParam1)[1], -1.0f);
						TASK_PRIORITY_SET((*uParam1)[1], 2);
					}
					else
					{
						TASK_GO_NEAR_COORD((*uParam1)[1], &Var1, 1.0f, 1);
						TASK_PRIORITY_SET((*uParam1)[1], 2);
					}
					AI_SET_ENABLE_DEAD_BODY_REACTIONS((*uParam1)[1], 0);
					bLocal_43 = true;
					return 1;
				}
			}
			MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_13((*uParam1)[1], &iVar0) };
			if (iVar0 <= 1)
			{
				TASK_WANDER((*uParam1)[1], -1.0f);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
			}
			else
			{
				TASK_GO_NEAR_COORD((*uParam1)[1], &Var1, 1.0f, 1);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
			}
			bLocal_43 = true;
			return 1;
			break;
	}
	return 0;
}

struct<24> Function_13(bool bParam0, int iParam1) //Position: 0x1199 / 4505
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<6> Var3[3];
	bool bVar22;
	
	if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_17(2), Function_16(8)))
	{
		Function_93(bParam0);
		bVar2 = Function_15(StackVal, StackVal, Global_30616, "interiorPoint_store", Function_93(bParam0), 0);
	}
	Function_93(bParam0);
	bVar0 = Function_15(StackVal, StackVal, Global_30616, "interiorPoint_hotel", Function_93(bParam0), 0);
	Function_93(bParam0);
	bVar1 = Function_15(StackVal, StackVal, Global_30616, "interiorPoint_saloon", Function_93(bParam0), 0);
	if (IS_OBJECT_VALID(bVar2) && *iParam1 > Var3)
	{
		Var3[*iParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(bVar2) };
		*iParam1++;
	}
	if (IS_OBJECT_VALID(bVar0) && *iParam1 > Var3)
	{
		Var3[*iParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(bVar0) };
		*iParam1++;
	}
	if (IS_OBJECT_VALID(bVar1) && *iParam1 > Var3)
	{
		Var3[*iParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(bVar1) };
		*iParam1++;
	}
	if (*iParam1 >= 0)
	{
		if (*iParam1 == 1)
		{
			bVar22 = false;
		}
		else
		{
			bVar22 = RAND_INT_RANGE(0, (*iParam1 - 1));
		}
	}
	Var3[bVar226].f_4 = (StackVal + 0.5f);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var3[bVar226];
}

struct<24> Function_14(bool bParam0) //Position: 0x12D1 / 4817
{
	struct<6> Var0;
	
	GET_OBJECT_POSITION(bParam0, &Var0);
	GET_OBJECT_ORIENTATION(bParam0, &Var0 + 12);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_15(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0x12EF / 4847
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 8);
		ITERATE_ON_PARTIAL_NAME(bVar7, bParam1);
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			GET_OBJECT_POSITION(bVar0, &vVar4);
			bVar3 = VDIST(vParam2, vVar4);
			if (bVar3 > bVar2 && bVar3 <= fParam5)
			{
				bVar2 = bVar3;
				bVar1 = bVar0;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
	}
	return bVar1;
}

var Function_16(int iParam0) //Position: 0x1372 / 4978
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

var Function_17(int iParam0) //Position: 0x13DE / 5086
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

int Function_18(bool bParam0, bool bParam1) //Position: 0x144A / 5194
{
	bool bVar0;
	
	bVar0 = Function_33(0);
	if ((Function_33(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_33(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_19(597, bParam0, 0, 0);
	}
	if ((Function_33(597) + Function_33(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_19(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1515 / 5397
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
	Function_32(iParam0, TO_FLOAT(bParam1), 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1735 / 5941
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_30(390))), 32);
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
					bVar19 = (Function_29(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_29(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_27(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_24(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_21(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_153(), &Var9);
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

var Function_21(int iParam0) //Position: 0x1D62 / 7522
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D73 / 7539
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_23(char* cParam0, bool bParam1) //Position: 0x1E68 / 7784
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1E81 / 7809
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x1EE6 / 7910
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x1EF8 / 7928
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1F0A / 7946
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
	if (((Function_28(iParam0) != 19 || Function_28(iParam0) != 17) || Function_28(iParam0) != 10) || Function_28(iParam0) != 9)
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

int Function_28(int iParam0) //Position: 0x203A / 8250
{
	return Global_35278[iParam020].f_48;
}

float Function_29(int iParam0) //Position: 0x2049 / 8265
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_30(int iParam0) //Position: 0x2082 / 8322
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x20BF / 8383
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x2259 / 8793
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

int Function_33(int iParam0) //Position: 0x249D / 9373
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x24DE / 9438
{
	int iVar0;
	bool bVar1;
	
	if (Function_55(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_54())
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
	iVar0 = Function_33(3);
	Function_51();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_49(3, bVar1);
		if (!bParam2)
		{
			if (!Function_48(Global_76848, 4))
			{
				Function_43(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_19(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_29(3));
	iVar0 = Function_33(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_36(4, Function_42(Global_12976.f_156), 1);
				Function_35(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_36(4, Function_42(Global_12976.f_156), 1);
				Function_35(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_36(4, Function_42(Global_12976.f_156), 1);
				Function_35(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_36(4, Function_42(Global_12976.f_156), 1);
				Function_35(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_36(4, Function_42(Global_12976.f_156), 1);
				Function_35(Global_12976.f_152, Global_12976.f_156);
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

void Function_35(int iParam0, int iParam1) //Position: 0x26AD / 9901
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

int Function_36(int iParam0, char* cParam1, bool bParam2) //Position: 0x290B / 10507
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
	Function_40(iParam0, cParam1, 0, 1);
	iVar1 = Function_37();
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

int Function_37() //Position: 0x2A90 / 10896
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
	Function_38();
	return 0;
}

void Function_38() //Position: 0x2B2F / 11055
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
		Function_39(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_39(int iParam0) //Position: 0x2BDE / 11230
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

int Function_40(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2C3C / 11324
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
		Function_41(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_41(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x2F8E / 12174
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

var Function_42(int iParam0) //Position: 0x3011 / 12305
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

void Function_43(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x30A0 / 12448
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_45(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_44(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_44(char* cParam0, int iParam1) //Position: 0x310C / 12556
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

bool Function_45(bool bParam0, var uParam1, int iParam2) //Position: 0x3143 / 12611
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
		if (Function_47(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_46(uVar0))
		{
			case 0x00000002:
				if (!Function_48(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_46(char* cParam0) //Position: 0x31BB / 12731
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

int Function_47(int iParam0) //Position: 0x325C / 12892
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_79(&iVar1, 2147483648);
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

bool Function_48(var uParam0, int iParam1) //Position: 0x3299 / 12953
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_49(int iParam0, bool bParam1) //Position: 0x32AC / 12972
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
	iVar1 = Function_50(iParam0, 4294967295);
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
	iVar1 = Function_37();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_50(int iParam0, int iParam1) //Position: 0x3449 / 13385
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

void Function_51() //Position: 0x348A / 13450
{
	Function_53(3, 0.0f);
	Function_52(3, 10000.0f);
	return;
}

int Function_52(int iParam0, int iParam1) //Position: 0x34A0 / 13472
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_53(int iParam0, int iParam1) //Position: 0x34E0 / 13536
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_54() //Position: 0x3520 / 13600
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_55(int iParam0) //Position: 0x354B / 13643
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x355A / 13658
{
	int iVar0;
	bool bVar1;
	
	if (Function_55(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_54())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_33(1);
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
			Function_49(1, bVar1);
			if (!bParam2)
			{
				if (!Function_48(Global_76848, 1))
				{
					Function_43(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_60(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_48(Global_76848, 2))
				{
					Function_43(Global_34573, 2, 3, 0);
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
		Function_59(1, (4294967295 * bVar1), 0);
	}
	if (Function_33(1) <= 4294962296)
	{
		Function_58(1, 4294962296, 0);
	}
	else if (Function_33(1) >= 5000)
	{
		Function_58(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_29(1));
	iVar0 = Function_33(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_36(2, Function_57(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_36(2, Function_57(Global_12976.f_152), 0);
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
				Function_36(2, Function_57(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_36(2, Function_57(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_36(2, Function_57(Global_12976.f_152), 1);
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
				Function_36(2, Function_57(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_36(2, Function_57(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_36(2, Function_57(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_36(2, Function_57(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_36(2, Function_57(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_36(2, Function_57(Global_12976.f_152), 1);
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
				Function_36(2, Function_57(Global_12976.f_152), 0);
			}
			break;
	}
	Function_35(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_57(int iParam0) //Position: 0x387B / 14459
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

int Function_58(int iParam0, bool bParam1, bool bParam2) //Position: 0x391E / 14622
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
		Function_32(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_31(iParam0);
	if (bParam2)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_59(int iParam0, bool bParam1, int iParam2) //Position: 0x3BB9 / 15289
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
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_60(int iParam0, bool bParam1) //Position: 0x3DB4 / 15796
{
	bool bVar0;
	int iVar1;
	
	Function_59(iParam0, bParam1, 0);
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
	iVar1 = Function_50(iParam0, 4294967295);
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
	iVar1 = Function_37();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

bool Function_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x3F50 / 16208
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 1);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_74(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_153(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_153(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_74(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_74(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_6(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (((GET_NTH_TASK_STATUS(*uParam0, false) != 0 && !IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, "run")) && !IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, "struggle")) && !IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, "male_killed"))
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 1);
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_84(*uParam0, Global_34573, "nTHANK_YOU", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_84(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_152(uParam4, 0.0f);
			}
			else if (!Function_6(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_71(*uParam0))
			{
				if (Function_85(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_62(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_84(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_71(*uParam0))
			{
				if (Function_85(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_62(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_62(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_62(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x42DF / 17119
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_63(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_63(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_63(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x43BF / 17343
{
	char* cVar0[32];
	
	Function_70();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_69(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_68(bParam0, 0);
	Function_67(bParam0, iParam1);
	Function_66(bParam0, uParam2);
	Function_65(bParam0, uParam3);
	if (Function_64(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_64(bool bParam0) //Position: 0x460D / 17933
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_65(bool bParam0, bool bParam1) //Position: 0x4630 / 17968
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x4653 / 18003
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x4677 / 18039
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x469D / 18077
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_69(bool bParam0) //Position: 0x46C0 / 18112
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_70() //Position: 0x46DE / 18142
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

bool Function_71(bool bParam0) //Position: 0x4728 / 18216
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

bool Function_72(var uParam0, float fParam1) //Position: 0x474D / 18253
{
	if (Function_85(uParam0, fParam1))
	{
		Function_73(uParam0);
		return 1;
	}
	return 0;
}

void Function_73(int iParam0) //Position: 0x4765 / 18277
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_74(bool bParam0, bool bParam1) //Position: 0x4779 / 18297
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

bool Function_75(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x486A / 18538
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
		fVar0 = Function_74(bParam0, Global_34573);
		if (!Function_78(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_76(bParam0);
				return 1;
			}
		}
		if (!Function_78(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_76(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_76(bParam0);
				return 1;
			}
		}
		if (!Function_78(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_76(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_76(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_78(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_76(bParam0);
				return 1;
			}
		}
		if (!Function_78(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_76(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_76(bool bParam0) //Position: 0x4A01 / 18945
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_77(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_77(bool bParam0) //Position: 0x4A35 / 18997
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_78(var uParam0, int iParam1) //Position: 0x4A4C / 19020
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(int iParam0, int iParam1) //Position: 0x4A59 / 19033
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_80(bool bParam0, bool bParam1, int iParam2) //Position: 0x4A6C / 19052
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

int Function_81(bool bParam0, int iParam1) //Position: 0x4B7D / 19325
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

void Function_82(int iParam0) //Position: 0x4C62 / 19554
{
	switch (iLocal_40)
	{
		case 0x00000000:
			if (!IS_ANY_SPEECH_PLAYING((*iParam0)[1]))
			{
				iLocal_40 = 1;
				Function_152(&uLocal_21, 0.0f);
			}
			break;
		
		case 0x00000001:
			if (Function_85(&uLocal_21, 0.1f) && !IS_AMBIENT_SPEECH_PLAYING((*iParam0)[1]))
			{
				Function_84((*iParam0)[1], Global_34573, "event_unforgivenMsg03", "event_unforgivenMsg03", 5, 50, 1, 1);
				Function_152(&uLocal_21, 0.0f);
				iLocal_40 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_85(&uLocal_21, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING((*iParam0)[1]))
			{
				Function_84((*iParam0)[0], Global_34573, "event_unforgivenMsg01", "event_unforgivenMsg01", 5, 50, 1, 1);
				Function_152(&uLocal_21, 0.0f);
				iLocal_40 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_85(&uLocal_21, 5.0f) && !IS_AMBIENT_SPEECH_PLAYING((*iParam0)[0]))
			{
				Function_84((*iParam0)[0], Global_34573, "event_unforgivenMsg02", "event_unforgivenMsg02", 5, 50, 1, 1);
				Function_152(&uLocal_21, 0.0f);
				STOP_PED_SPEAKING((*iParam0)[1], 1);
				iLocal_40 = 4;
			}
			break;
	}
	return;
}

void Function_83(var uParam0, bool bParam1, bool bParam2) //Position: 0x4DC9 / 19913
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	switch (iLocal_42)
	{
		case 0x00000000:
			if (Function_85(&uLocal_24, 15.6f))
			{
				*uParam0 = 0;
				iLocal_42 = 1;
			}
			break;
		
		case 0x00000001:
			*uParam0 = 0;
			if (Function_85(&uLocal_24, 16.85f))
			{
				vVar0 = { 0.4f, 0.0f, 0.0f };
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), vVar0, &vVar3);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar6);
				vVar6.f_4 = (vVar6.y + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, vVar3, vVar6, (0.5f + RAND_FLOAT_RANGE(-0.1f, 0.1f)), 0);
				ADD_BLOOD_TO_ACTOR(bParam1, -0.2f, 1.1f, -0.1f, 0, 1, 0);
				iLocal_42 = 2;
			}
			break;
		
		case 0x00000002:
			*uParam0 = 0;
			if (Function_85(&uLocal_24, 17.55f))
			{
				vVar0 = { 0.4f, 0.0f, 0.0f };
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), vVar0, &vVar3);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar6);
				vVar6.f_4 = (vVar6.y + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, vVar3, vVar6, (0.5f + RAND_FLOAT_RANGE(-0.1f, 0.1f)), 0);
				ADD_BLOOD_TO_ACTOR(bParam1, -0.3f, 1.1f, 0.0f, 0, 1, 0);
				iLocal_42 = 3;
			}
			break;
		
		case 0x00000003:
			*uParam0 = 0;
			if (Function_85(&uLocal_24, 18.45f))
			{
				vVar0 = { 0.4f, 0.0f, 0.0f };
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), vVar0, &vVar3);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar6);
				vVar6.f_4 = (vVar6.y + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, vVar3, vVar6, (0.5f + RAND_FLOAT_RANGE(-0.1f, 0.1f)), 0);
				ADD_BLOOD_TO_ACTOR(bParam1, 0.0f, 1.3f, -0.1f, 0, 1, 0);
				iLocal_42 = 4;
			}
			break;
		
		case 0x00000004:
			*uParam0 = 0;
			if (Function_85(&uLocal_24, 19.25f))
			{
				vVar0 = { 0.4f, 0.0f, 0.0f };
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), vVar0, &vVar3);
				GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar6);
				vVar6.f_4 = (vVar6.y + RAND_FLOAT_RANGE(-30.0f, 30.0f));
				CREATE_DIRECTION_DECAL(2, vVar3, vVar6, (0.5f + RAND_FLOAT_RANGE(-0.1f, 0.1f)), 0);
				ADD_BLOOD_TO_ACTOR(bParam1, -0.1f, 1.1f, -0.1f, 0, 1, 0);
				TASK_FLEE_ACTOR(bParam2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				iLocal_42 = 5;
			}
			break;
	}
	return;
}

void Function_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5034 / 20532
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_74(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

bool Function_85(var uParam0, float fParam1) //Position: 0x50C4 / 20676
{
	if (Function_88(uParam0))
	{
		if (Function_86(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_86(int iParam0) //Position: 0x50E0 / 20704
{
	if (Function_88(iParam0))
	{
		if (Function_87(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_87(int iParam0) //Position: 0x51A8 / 20904
{
	return Function_78(*iParam0, 2);
}

bool Function_88(int iParam0) //Position: 0x51B5 / 20917
{
	return Function_78(*iParam0, 1);
}

void Function_89(int iParam0) //Position: 0x51C2 / 20930
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_19(409, 1, 0, 0);
	}
	return;
}

void Function_90() //Position: 0x51F3 / 20979
{
	int iVar0;
	
	bLocal_45 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_92(3);
		if (iVar0 == 0)
		{
			iLocal_44 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			iLocal_44 = "FTR_SONG_04";
		}
		else if (iVar0 == 2)
		{
			iLocal_44 = "FTR_SONG_05";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_91())
		{
			iLocal_44 = "NRT_SONG_04";
		}
		else
		{
			iLocal_44 = "NRT_SONG_05";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_92(3);
		if (iVar0 == 0)
		{
			iLocal_44 = "MEX_SONG_03";
		}
		else if (iVar0 == 1)
		{
			iLocal_44 = "MEX_SONG_05";
		}
		else if (iVar0 == 2)
		{
			iLocal_44 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_44, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_91() //Position: 0x52FF / 21247
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_92(bool bParam0) //Position: 0x5312 / 21266
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

vector3 Function_93(bool bParam0) //Position: 0x532B / 21291
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_94(bool bParam0, vector3 vParam1) //Position: 0x533C / 21308
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_95(bParam0);
		vVar0 = { StackVal, StackVal, Function_95(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_95(bool bParam0) //Position: 0x53B6 / 21430
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

bool Function_96(var uParam0, int iParam1, float fParam2) //Position: 0x5420 / 21536
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			if (Function_74((*uParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_97(bool bParam0) //Position: 0x545A / 21594
{
	var uVar0;
	bool bVar1;
	
	if (!bParam0)
	{
		Function_98(&uVar0, &bVar1);
		if (bVar1 < 60.0f)
		{
			return (bVar1 + 20.0f);
		}
		return (bVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_98(var uParam0, bool bParam1) //Position: 0x5495 / 21653
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

bool Function_99(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x551E / 21790
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_74(Global_34573, bParam1) > 15.0f)
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
		if (Function_102() && !*uParam2)
		{
			return 0;
		}
		if (Function_101(iParam0) && !*uParam2)
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
		if (!Function_100(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_100(int iParam0, int iParam1) //Position: 0x564C / 22092
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

int Function_101(int iParam0) //Position: 0x566D / 22125
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

int Function_102() //Position: 0x56AB / 22187
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
						if (Function_103(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_103(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_103(bool bParam0, bool bParam1) //Position: 0x5766 / 22374
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_95(bParam0);
			vVar0 = { StackVal, StackVal, Function_95(bParam0) };
			Function_104(bParam1);
			vVar3 = { StackVal, StackVal, Function_104(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_104(bool bParam0) //Position: 0x5806 / 22534
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

void Function_105(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x5872 / 22642
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
			Function_117(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_116(0);
		}
		if (bParam6)
		{
			Function_114(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_112(iParam3);
		}
		Function_110(iParam3);
		if (Function_109(StackVal, 32768))
		{
			Function_106(1);
		}
		Global_16876[iParam36].f_12++;
		Function_19(408, 1, 0, 0);
	}
}

void Function_106(bool bParam0) //Position: 0x595F / 22879
{
	if (bParam0)
	{
		Function_108(0x10000000);
	}
	else
	{
		Function_107(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_107(int iParam0) //Position: 0x5983 / 22915
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_108(int iParam0) //Position: 0x59A0 / 22944
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_109(var uParam0, int iParam1) //Position: 0x59B3 / 22963
{
	return (uParam0 && iParam1) == 0;
}

void Function_110(int iParam0) //Position: 0x59C0 / 22976
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_78(StackVal, 524288))
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
			bVar1 = Function_111(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_111(int iParam0) //Position: 0x5A64 / 23140
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_112(int iParam0) //Position: 0x5A7A / 23162
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
	Function_113(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_113(var uParam0, var uParam1, int iParam2) //Position: 0x5B18 / 23320
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x5B30 / 23344
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
			Function_115(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_115(int iParam0) //Position: 0x5BB2 / 23474
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

void Function_116(int iParam0) //Position: 0x5C00 / 23552
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_111(900)), 0);
	return;
}

void Function_117(int iParam0) //Position: 0x5C22 / 23586
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_111(200)), 0);
	return;
}

void Function_118(int iParam0, int iParam1) //Position: 0x5C43 / 23619
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

int Function_119(var uParam0, int iParam1) //Position: 0x5C52 / 23634
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
	Function_121(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_120(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_120(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x5DB3 / 23987
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_121(bool bParam0) //Position: 0x5E4E / 24142
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
						Function_122(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_94(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_122(iVar0);
						}
					}
					else if (Function_94(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_122(iVar0);
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
			Function_122(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_122(int iParam0) //Position: 0x5FAF / 24495
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

int Function_123(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6010 / 24592
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
		Function_125("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_124(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_124(bVar0);
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
			Function_124(bVar0);
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

void Function_124(bool bParam0) //Position: 0x626D / 25197
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

void Function_125(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x62B3 / 25267
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_126(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_126(int iParam0) //Position: 0x632A / 25386
{
	char* cVar0[16];
	
	if (!Function_127())
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

bool Function_127() //Position: 0x6369 / 25449
{
	if (Function_78(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x6384 / 25476
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_129(bool bParam0) //Position: 0x63A4 / 25508
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

struct<32> Function_130(bool bParam0) //Position: 0x63D8 / 25560
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("0", &cVar8, ""), 4);
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

struct<32> Function_131(char* cParam0, char* cParam1, char* cParam2) //Position: 0x6442 / 25666
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_132(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6461 / 25697
{
	vector3 vVar0[4];
	float fVar13[4];
	int iVar18;
	
	if (Global_29006 == Global_30640[0])
	{
		vVar0[03] = { -2179.001f, 16.285f, 2593.601f };
		fVar13[0] = 180.995f;
		vVar0[13] = { -2168.709f, 16.881f, 2604.797f };
		fVar13[1] = 268.815f;
		vVar0[23] = { -2175.47f, 16.881f, 2592.032f };
		fVar13[2] = 189.497f;
		vVar0[33] = { -2150.886f, 16.302f, 2587.491f };
		fVar13[3] = 178.234f;
	}
	else if (Global_29006 == Global_30707[2])
	{
		vVar0[03] = { -802.846f, 13.051f, 3708.006f };
		fVar13[0] = 228.72f;
		vVar0[13] = { -798.557f, 13.051f, 3722.78f };
		fVar13[1] = 228.119f;
		vVar0[23] = { -785.73f, 13.165f, 3705.464f };
		fVar13[2] = 134.38f;
		vVar0[33] = { -803.601f, 13.12f, 3701.478f };
		fVar13[3] = 230.357f;
	}
	else if (Global_29006 == Global_30668[1])
	{
		vVar0[03] = { 143.89f, 73.286f, 2235.491f };
		fVar13[0] = 96.478f;
		vVar0[13] = { 155.684f, 73.286f, 2231.607f };
		fVar13[1] = 38.692f;
		vVar0[23] = { 163.625f, 73.74f, 2222.555f };
		fVar13[2] = 153.247f;
		vVar0[33] = { 151.509f, 73.286f, 2229.209f };
		fVar13[3] = 318.421f;
	}
	else
	{
		return 0;
	}
	iVar18 = 0;
	if (Function_133(&iVar18, &vVar0, uParam2, uParam3))
	{
		*uParam0 = { StackVal, StackVal, vVar0[iVar183] };
		*uParam1 = fVar13[iVar18];
		return 1;
	}
	return 0;
}

bool Function_133(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6652 / 26194
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
		fVar1 = Function_94(StackVal, StackVal, Global_34573, *uParam1[iVar03]);
		if (fVar1 > fVar2 && fVar1 < (Function_137() - 30.0f))
		{
			if (!Function_136(StackVal, StackVal, *uParam1[iVar03], 1.0f, 65.0f, 1, 1, 0))
			{
				if (Function_134(uParam1[iVar03], uParam2, 0, 0) || uParam3)
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

int Function_134(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x66DF / 26335
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
	Function_121(4294967295);
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
			else if (Function_135(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_135(var uParam0, bool bParam1) //Position: 0x67AF / 26543
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_136(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x67CD / 26573
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_137() //Position: 0x67E9 / 26601
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_98(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_138(int iParam0) //Position: 0x681A / 26650
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_143();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_142(iParam0[iVar03], 8);
		}
		else if (Function_141())
		{
			iVar1 = 1;
			Function_142(iParam0[iVar03], 8);
		}
		Function_142(iParam0[iVar03], 16);
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
				Function_142(iParam0[iVar03], 1);
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
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_142(iParam0[iVar03], 2);
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
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_142(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_142(iParam0[iVar03], 2);
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
	Function_139();
	return 1;
}

void Function_139() //Position: 0x6B95 / 27541
{
	if (!Function_140(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_140(int iParam0) //Position: 0x6BD5 / 27605
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_141() //Position: 0x6BF1 / 27633
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

void Function_142(var uParam0, int iParam1) //Position: 0x6C1C / 27676
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_143() //Position: 0x6C2D / 27693
{
	if (!Function_140(128))
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

bool Function_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6C6F / 27759
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

void Function_145(var uParam0, int iParam1) //Position: 0x6CD7 / 27863
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_146(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6CF9 / 27897
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_147(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_142(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_147(var uParam0, int iParam1, int iParam2) //Position: 0x6D31 / 27953
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_142(uParam0[iVar03], 4);
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

var Function_148(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6DF5 / 28149
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
			Function_142(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_142(uParam0[iVar03], 8);
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

var Function_149(int iParam0, int iParam1) //Position: 0x6EC5 / 28357
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_150(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6EDB / 28379
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_33(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_151(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_151(bool bParam0) //Position: 0x6FDD / 28637
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

void Function_152(var uParam0, float fParam1) //Position: 0x70CE / 28878
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_118(uParam0, 1);
	Function_79(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_153() //Position: 0x70EF / 28911
{
	var uVar0;
	
	return uVar0;
}

