//Decompiled with MagicRDR v1.0
//Function Count : 165
//Statics Count : 94
//Natives Count : 323
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
	float fLocal_27 = 0.0f;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	char* cLocal_41 = NULL;
	bool bLocal_42 = false;
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
	vector3 vVar45;
	int iVar48;
	int iVar49;
	var uVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_27 = 0.0f;
	iLocal_28 = 0;
	bLocal_30 = false;
	iLocal_32 = 0;
	bLocal_36 = false;
	bLocal_37 = false;
	iLocal_38 = 0;
	bLocal_40 = false;
	bLocal_42 = false;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_164());
	bVar8 = 9;
	Function_163(&uLocal_21, 0.0f);
	iVar49 = 0;
	uVar50 = Function_161(0, 1, 1, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			iVar51 = Function_160(ScriptParam_0.f_56, 2);
			if (iVar51 == 0)
			{
				iVar5[0] = 509;
			}
			else if (iVar51 == 1)
			{
				iVar5[0] = 420;
			}
			iVar51 = Function_160(ScriptParam_0.f_56, 3);
			if (iVar51 == 0)
			{
				iVar5[1] = 56;
			}
			else if (iVar51 == 1)
			{
				iVar5[1] = 55;
			}
			else if (iVar51 == 2)
			{
				iVar5[1] = 28;
			}
			break;
		
		case 0x00000001:
			iVar5[0] = 529;
			iVar5[1] = 238;
			break;
	}
	Function_159(&bVar8, iVar5[0], 3, 0);
	Function_159(&bVar8, iVar5[1], 3, 0);
	Function_157(&bVar8, "DLC_robber_struggle", 1, 0);
	Function_157(&bVar8, "DLC_robber_struggle", 5, 0);
	Function_157(&bVar8, "custom/DLC_robber_struggle", 8, 0);
	Function_157(&bVar8, "fema_emo_thanks", 5, 0);
	Function_157(&bVar8, "custom/fema_emo_thanks", 8, 0);
	Function_157(&bVar8, "bankrobbery_cower", 5, 0);
	Function_157(&bVar8, "custom/bankrobbery_cower", 8, 0);
	Function_156(&iVar5, 2);
	iVar52 = 0;
	bVar53 = false;
	iVar54 = 0;
	iVar55 = 0;
	iVar58 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar59 = 0;
	iVar60 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iVar56 = 600;
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_150(&bVar8))
				{
					iVar0 = 1;
					iVar56 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_110(&ScriptParam_0, &iVar56, &iVar55, &iVar52, 1))
				{
					if (Function_107(StackVal, StackVal, *(&ScriptParam_0 + 8)))
					{
						iVar0 = 2;
						iVar56 = 0;
					}
					else
					{
						if (ScriptParam_0.f_32 || ScriptParam_0.f_40)
						{
							PRINT_SMALL_B("Can't spawn in a town that's under attack", 5.0f, 1, 2, 1, 0, 0);
						}
						iVar0 = 5;
						iVar56 = 0;
					}
				}
				else if (iVar52 == 1)
				{
					iVar0 = 5;
					iVar56 = 0;
				}
				break;
			
			case 0x00000002:
				iVar48 = 0;
				while (iVar48 <= 2)
				{
					Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("unforgiven") };
					bVar2[iVar48] = CREATE_ACTOR_IN_LAYOUT(bVar1, &Var36, iVar5[iVar48], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					Function_104(bVar2[iVar48]);
					AI_DONT_HARM_ACTOR(bVar2[iVar48]);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar2[iVar48], 0);
					SET_ALLOW_EXECUTE(bVar2[iVar48], 0);
					TASK_STAND_STILL(bVar2[iVar48], -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2[iVar48], false);
					TASK_PRIORITY_SET(bVar2[iVar48], 0);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[iVar48], 0);
					UNK_0x99AFD2D1(bVar2[iVar48], 1, 1);
					iVar48++;
				}
				bLocal_29 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_164(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 30.0f, 15.0f, 30.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_29, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_29);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_29);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar2[1]);
				bVar57 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_164(), "DLC_robber_struggle", *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				Function_103(bVar2[0]);
				DECOR_SET_BOOL(bVar2[1], "criminal", 1);
				SET_ACTOR_ALLOW_DISARM(bVar2[0], 0);
				GIVE_WEAPON_TO_ACTOR(bVar2[0], 4, 0, 1, 1);
				Function_102(bVar2[0], 0);
				Function_102(bVar2[1], 4294967295 * 50);
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar2[1], 0);
				SET_ACTOR_CAN_BE_SOFTLOCKED(bVar2[1], 0);
				SET_ACTOR_CAN_BE_TARGETED(bVar2[1], false);
				SET_ALLOW_DEADEYE_LOCKS(bVar2[1], false);
				MEMORY_CONSIDER_AS(bVar2[0], Global_34573, 2);
				iVar48 = TASK_SEQUENCE_OPEN();
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(bVar57), "UseCase1", 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar2[0], iVar48);
				TASK_SEQUENCE_RELEASE(iVar48, 1);
				TASK_PRIORITY_SET(bVar2[0], 0);
				SNAP_ACTOR_TO_GRINGO(bVar2[0], bVar57, "UseCase1", 0, 0, 0);
				TASK_USE_GRINGO(bVar2[1], GET_GRINGO_FROM_OBJECT(bVar57), "victim", 1, 1);
				TASK_PRIORITY_SET(bVar2[1], 0);
				SNAP_ACTOR_TO_GRINGO(bVar2[1], bVar57, "victim", 0, 0, 0);
				UNK_0x44986367(StackVal, &vVar45);
				VNORMALIZE(&vVar45);
				VSCALE(&vVar45, 5.0f);
				bLocal_35 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_164(), bVar1, StackVal) + Vector(vVar45, *(&ScriptParam_0 + 8), 2), *(&ScriptParam_0 + 20), 4.0f, 8.0f, 12.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_35);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_35);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_35);
				bLocal_36 = true;
				bLocal_37 = true;
				Function_101(&iLocal_28, 1);
				Function_101(&iLocal_28, 16);
				iVar0 = 3;
				iVar56 = 0;
				break;
			
			case 0x00000003:
				Function_88(&bVar2, 2, &bVar53, ScriptParam_0.f_56, 60, 0x42700000, 1);
				if (!Function_82(ScriptParam_0.f_56, bVar2[0], &iVar54, &iVar58, 0, 1, 1, 1))
				{
					iVar0 = 5;
					iVar56 = 0;
					break;
				}
				if (!Function_79(&bVar2, 2, Function_80(1)))
				{
					iVar0 = 5;
					iVar56 = 0;
					break;
				}
				if (Function_77(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_80(1))
				{
					iVar0 = 5;
					iVar56 = 0;
					break;
				}
				if (Function_18(&iVar49, &bVar2, bVar1, bVar57, &iVar56, &bVar53, ScriptParam_0.f_56))
				{
					iVar0 = 5;
					iVar56 = 0;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar56 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar56 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar56);
		}
	}
	if (bLocal_42)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_36)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_35);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_35);
	}
	if (bLocal_37)
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_35);
	}
	if (!bVar53)
	{
		Function_16(&bVar2, 4294967295);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
		Function_10(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_6(bVar2[0], 0))
	{
		SET_ACTOR_ALLOW_DISARM(bVar2[0], 1);
		AI_GLOBAL_SET_PERMANENT_DANGER(bVar2[0], 0);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2[0], 1);
		UNK_0x99AFD2D1(bVar2[0], 0, 0);
		if (!bLocal_40)
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
		if (!bLocal_40)
		{
			MAKE_ACTOR_READY_FOR_ACTION(bVar2[1], 1);
			RESET_ANIM_SET_FOR_ACTOR(bVar2[1], 0);
			TASK_FLEE_ACTOR(bVar2[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2[1], 0);
		}
	}
	if (IS_VOLUME_VALID(bLocal_29))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_29);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_29);
	}
	Function_5(&iVar5, 2);
	if (IS_BLIP_VALID(bLocal_34))
	{
		REMOVE_BLIP(bLocal_34);
	}
	Function_1(&bVar8);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x75E / 1886
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

void Function_2(var uParam0, int iParam1) //Position: 0x784 / 1924
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

void Function_3(var uParam0, int iParam1) //Position: 0x8B2 / 2226
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x8CC / 2252
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x8E9 / 2281
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

bool Function_6(bool bParam0, bool bParam1) //Position: 0x90B / 2315
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

int Function_7(bool bParam0, int iParam1) //Position: 0x9A7 / 2471
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

int Function_8(bool bParam0) //Position: 0x9F1 / 2545
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_9(bParam0);
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0) //Position: 0xA07 / 2567
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

bool Function_10(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA33 / 2611
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
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_11(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_11(bVar0);
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
			Function_11(bVar0);
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

void Function_11(bool bParam0) //Position: 0xC90 / 3216
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

void Function_12(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xCD6 / 3286
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_13(int iParam0) //Position: 0xD4D / 3405
{
	char* cVar0[16];
	
	if (!Function_14())
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

bool Function_14() //Position: 0xD8C / 3468
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_15(int iParam0, int iParam1) //Position: 0xDA7 / 3495
{
	return (iParam0 && iParam1) == 0;
}

void Function_16(var uParam0, int iParam1) //Position: 0xDB4 / 3508
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_17(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_17(int iParam0) //Position: 0xDE1 / 3553
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

bool Function_18(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE0C / 3596
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	
	bParam2 = bParam2;
	iVar0 = 0;
	uParam3 = uParam3;
	*uParam5 = *uParam5;
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam4 = 0;
			if (Function_76((*uParam1)[0], Global_34573) > 55.0f)
			{
				AI_GLOBAL_SET_PERMANENT_DANGER((*uParam1)[0], 1);
				Function_74();
				REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_35);
				bLocal_37 = false;
				Function_59(74);
				bLocal_34 = ADD_BLIP_FOR_ACTOR((*uParam1)[1], 325, 0.0f, 3, 0);
				SET_BLIP_BLINK(bLocal_34, 1, 0, 5f);
				SET_ACTOR_UPDATE_PRIORITY((*uParam1)[0], false);
				SET_ACTOR_UPDATE_PRIORITY((*uParam1)[1], false);
				Function_58((*uParam1)[1], Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				Function_163(&uLocal_21, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 45.0f, 1, 0, 0) || Function_76((*uParam1)[0], Global_34573) > 40.0f)
			{
				*uParam4 = 0;
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			*uParam4 = 0;
			Function_57(uParam1);
			if (iLocal_38 != 5 && IS_ACTOR_VALID((*uParam1)[1]))
			{
				if (!DECOR_CHECK_EXIST((*uParam1)[1], "Attack"))
				{
					DECOR_SET_BOOL((*uParam1)[1], "Attack", 1);
					DECOR_SET_BOOL((*uParam1)[1], "shoot_victim", 1);
				}
			}
			if (GET_TASK_STATUS((*uParam1)[0], 19) == 0)
			{
				Function_48((*uParam1)[0], 4, 0, 2);
				Function_58((*uParam1)[0], Global_34573, "Thieves_msg05", "Thieves_msg05", 5, 60, 1, 1);
				bLocal_40 = true;
				return 1;
			}
			if (IS_ACTOR_VALID((*uParam1)[1]))
			{
				if ((!IS_ACTOR_ALIVE((*uParam1)[1]) && GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573) && Function_47((*uParam1)[1], 1.0f, 40.0f, 1, 1, 0))
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 422, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			if (!IS_ACTOR_ALIVE((*uParam1)[0]))
			{
				SET_ACTOR_ACTION_SIGNAL((*uParam1)[1], 0, "MaleDied");
				if (GET_LAST_ATTACKER((*uParam1)[0]) == Global_34573)
				{
					MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
					STOP_PED_SPEAKING((*uParam1)[1], 0);
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					*uParam0 = 4;
					*uParam4 = 0;
					return 0;
				}
				if (Function_6((*uParam1)[1], 0))
				{
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
					TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET((*uParam1)[1], 0);
				}
				bLocal_40 = true;
				return 1;
			}
			if (GET_LAST_ATTACKER((*uParam1)[1]) != Global_34573 || FIRE_IS_ACTOR_ON_FIRE((*uParam1)[1]))
			{
				AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				Function_58((*uParam1)[0], Global_34573, "Minor_Shock", 0, 5, 60, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND((*uParam1)[0], 4, 1);
				Function_46((*uParam1)[0], &Global_34573);
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				bLocal_40 = true;
				return 1;
			}
			if (GET_TASK_STATUS((*uParam1)[0], 25) == 1)
			{
				TASK_FLEE_ACTOR((*uParam1)[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				bLocal_40 = true;
				return 1;
			}
			if (Function_45(Global_34573, (*uParam1)[0], 6.0f))
			{
				Function_44(&iLocal_28, 4);
			}
			else
			{
				Function_101(&iLocal_28, 4);
			}
			if (Function_41((*uParam1)[0], &uLocal_39, &fLocal_27, iLocal_28, 0, 0x40400000) || FIRE_IS_ACTOR_ON_FIRE((*uParam1)[0]))
			{
				SET_ACTOR_ACTION_SIGNAL((*uParam1)[1], 0, "MaleDied");
				STOP_PED_SPEAKING((*uParam1)[1], 0);
				MEMORY_ALLOW_TAKE_COVER((*uParam1)[0], 0);
				if (Function_45(Global_34573, (*uParam1)[0], 12.0f))
				{
					Function_46((*uParam1)[0], &Global_34573);
				}
				else
				{
					TASK_FOLLOW_ACTOR((*uParam1)[0], Global_34573);
				}
				ACTOR_PUT_WEAPON_IN_HAND((*uParam1)[0], 4, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[0], 0);
				AI_SET_ENABLE_DEAD_BODY_REACTIONS((*uParam1)[1], 0);
				iVar7 = CREATE_ACTORSET_IN_LAYOUT(bParam2, "flee", 0);
				ADD_ACTORSET_MEMBER(iVar7, Global_34573);
				ADD_ACTORSET_MEMBER(iVar7, (*uParam1)[0]);
				TASK_FLEE_ACTORSET((*uParam1)[1], iVar7, -1.0f, -1.0f, 0, 0, 0);
				AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				AI_QUICK_EXIT_GRINGO((*uParam1)[1], 1);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				Function_163(&uLocal_21, 0.0f);
				Function_163(&uLocal_24, 0.0f);
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
				Function_40(uParam6, 0);
				*uParam0 = 4;
				*uParam4 = 0;
				return 0;
			}
			if (GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573)
			{
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
				bLocal_40 = true;
				return 1;
			}
			if (((!IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[1], "knife_chase") && !IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[1], "bankrobbery_cower")) && Function_76((*uParam1)[1], (*uParam1)[0]) < 4.0f) && Function_76((*uParam1)[1], Global_34573) < 4.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "bankrobbery_cower", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "bankrobbery_cower/Random_Variation/A");
			}
			else if (Function_36(&uLocal_21, 25.0f))
			{
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], 2);
				bLocal_40 = true;
				return 1;
			}
			if (Function_34(&uLocal_24, 1.3f))
			{
				Function_46((*uParam1)[0], &Global_34573);
			}
			break;
		
		case 0x00000004:
			if (Function_32(uParam1[1], &Global_34573, &uLocal_33, &iLocal_32, &uLocal_21, bParam2, 30.0f, &bLocal_30, uLocal_31, uParam4, "fema_emo_thanks", "fema_emo_thanks", 25.0f, 2, -5.0f, 0, 4.0f, 0, "unforgivenPlayerMsg02", 0, 1, 0, 0x40800000))
			{
				if (bLocal_30 || (iLocal_32 < 5 && !IS_AMBIENT_SPEECH_PLAYING(Global_34573)))
				{
					if (!bLocal_30)
					{
						RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
						AI_GOAL_LOOK_CLEAR((*uParam1)[1]);
					}
					Function_25(uParam6, 4294967295, 0x3f800000);
					MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
					Function_48((*uParam1)[1], 4, 0, 2);
					TASK_PRIORITY_SET((*uParam1)[1], 2);
					AI_SET_ENABLE_DEAD_BODY_REACTIONS((*uParam1)[1], 0);
					bLocal_40 = true;
					return 1;
				}
			}
			MEMORY_CLEAR_EVENTS((*uParam1)[1], 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19((*uParam1)[1], &iVar0) };
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
			bLocal_40 = true;
			return 1;
			break;
	}
	return 0;
}

struct<24> Function_19(bool bParam0, var uParam1) //Position: 0x151D / 5405
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<6> Var3[3];
	int iVar22;
	
	if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_24(2), Function_23(8)))
	{
		Function_22(bParam0);
		bVar2 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_store", Function_22(bParam0), 0);
	}
	Function_22(bParam0);
	bVar0 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_hotel", Function_22(bParam0), 0);
	Function_22(bParam0);
	bVar1 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_saloon", Function_22(bParam0), 0);
	if (IS_OBJECT_VALID(bVar2) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar2) };
		*uParam1++;
	}
	if (IS_OBJECT_VALID(bVar0) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar0) };
		*uParam1++;
	}
	if (IS_OBJECT_VALID(bVar1) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar1) };
		*uParam1++;
	}
	if (*uParam1 >= 0)
	{
		if (*uParam1 == 1)
		{
			iVar22 = 0;
		}
		else
		{
			iVar22 = RAND_INT_RANGE(0, (*uParam1 - 1));
		}
	}
	Var3[iVar226].f_4 = (StackVal + 0.5f);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var3[iVar226];
}

struct<24> Function_20(bool bParam0) //Position: 0x1655 / 5717
{
	struct<6> Var0;
	
	GET_OBJECT_POSITION(bParam0, &Var0);
	GET_OBJECT_ORIENTATION(bParam0, &Var0 + 12);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_21(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0x1673 / 5747
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

vector3 Function_22(bool bParam0) //Position: 0x16F6 / 5878
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_23(int iParam0) //Position: 0x1707 / 5895
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

var Function_24(int iParam0) //Position: 0x1773 / 6003
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

void Function_25(int iParam0, bool bParam1, float fParam2) //Position: 0x17DF / 6111
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	bVar1 = false;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000003B:
		case 0x00000037:
			iVar3 = 0;
			break;
		
		case 0x0000004A:
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			iVar3 = 0;
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			iVar3 = 1;
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			iVar3 = 2;
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			bVar1 = true;
			break;
		
		case 0x00000001:
			bVar1 = 2;
			break;
		
		case 0x00000002:
			bVar1 = 3;
			break;
	}
	bVar1 = CEIL((IntToFloat(bVar1) * fParam2));
	if (bParam1 == 4294967295)
	{
		bVar11 = false;
		Function_31(Global_34573, &uVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar4[iVar12]));
			bParam1 = Function_30(Global_34573, uVar4[iVar12]);
			if (bParam1 == 34)
			{
				bParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_26(Function_29(), 0, 1);
		}
	}
	else
	{
		bParam1 = Function_30(Global_34573, bParam1);
		if (bParam1 == 34)
		{
			bParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(bParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		bVar2 = (fVar13 * IntToFloat(bVar1));
		if (bVar2 < (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1)))
		{
			bVar2 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1));
		}
		if (bVar2 > 1.0f)
		{
			Function_26(Function_29(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bParam1), bVar2, 1, 1);
		}
	}
	return;
}

int Function_26(bool bParam0, bool bParam1, int iParam2) //Position: 0x199E / 6558
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_28(bParam0), Function_27()) == 0)
		{
			ADD_ITEM(Function_28(bParam0), Function_27(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_28(bParam0), Function_27(), iParam2);
	return 1;
}

var Function_27() //Position: 0x19E9 / 6633
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_28(bool bParam0) //Position: 0x19FE / 6654
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

bool Function_29() //Position: 0x1AEF / 6895
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 7;
	}
	else
	{
		iVar1 = 12;
	}
	return iVar1;
}

int Function_30(bool bParam0, int iParam1) //Position: 0x1B4B / 6987
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_31(bool bParam0, var uParam1, bool bParam2) //Position: 0x1B5C / 7004
{
	*bParam2 = 0;
	if (Function_30(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*bParam2] = 39;
			*bParam2++;
		}
	}
	if (Function_30(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*bParam2] = 41;
			*bParam2++;
		}
	}
	if (Function_30(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*bParam2] = 40;
			*bParam2++;
		}
	}
	if (Function_30(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*bParam2] = 42;
			*bParam2++;
		}
	}
	if (Function_30(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*bParam2] = 43;
			*bParam2++;
		}
	}
	if (Function_30(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*bParam2] = 44;
			*bParam2++;
		}
	}
	return;
}

bool Function_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, float fParam14, bool bParam15, var uParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, var uParam21, float fParam22) //Position: 0x1C7C / 7292
{
	int iVar0;
	
	*uParam9 = *uParam9;
	uParam16 = uParam16;
	bParam15 = bParam15;
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
			if (bParam19)
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
				*uParam2 = Function_76(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_164(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_164(), 0.0f, 0.5f, fParam14, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam12, 1, 1, 0) || Function_76(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam13);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_76(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam12, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
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
				if (!bParam19)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam17)
				{
					Function_58(*uParam0, Global_34573, "Thieves_msg06", "Thieves_msg06", 5, 60, 1, 1);
				}
				else
				{
					Function_58(*uParam0, Global_34573, "Thieves_msg06", "Thieves_msg06", 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_163(uParam4, 0.0f);
			}
			else if (!Function_6(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam21 && !Function_33(*uParam0))
			{
				if (Function_36(uParam4, fParam22))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_48(*uParam0, 4, 0, 1);
				}
			}
			if (bParam20)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam18))
						{
							Function_58(Global_34573, *uParam0, "ThievesPlayer_msg01", "ThievesPlayer_msg01", 5, 60, 1, 1);
						}
						else
						{
							Function_58(Global_34573, *uParam0, "ThievesPlayer_msg01", "ThievesPlayer_msg01", 5, 60, 1, 1);
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
			if (uParam21 && !Function_33(*uParam0))
			{
				if (Function_36(uParam4, fParam22))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_48(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam15)
				{
					Function_48(*uParam0, 4, 0, iParam13);
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

bool Function_33(bool bParam0) //Position: 0x2087 / 8327
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

bool Function_34(var uParam0, float fParam1) //Position: 0x20AC / 8364
{
	if (Function_36(uParam0, fParam1))
	{
		Function_35(uParam0);
		return 1;
	}
	return 0;
}

void Function_35(int iParam0) //Position: 0x20C4 / 8388
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_36(var uParam0, float fParam1) //Position: 0x20D8 / 8408
{
	if (Function_39(uParam0))
	{
		if (Function_37(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_37(int iParam0) //Position: 0x20F4 / 8436
{
	if (Function_39(iParam0))
	{
		if (Function_38(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_38(int iParam0) //Position: 0x21BC / 8636
{
	return Function_15(*iParam0, 2);
}

bool Function_39(int iParam0) //Position: 0x21C9 / 8649
{
	return Function_15(*iParam0, 1);
}

void Function_40(int iParam0, bool bParam1) //Position: 0x21D6 / 8662
{
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			bParam1 = bParam1;
			break;
		
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			break;
	}
	return;
}

int Function_41(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x2259 / 8793
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
		fVar0 = Function_76(bParam0, Global_34573);
		if (!Function_15(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_42(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_42(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_42(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_15(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_42(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_42(bool bParam0) //Position: 0x23F0 / 9200
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_43(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_43(bool bParam0) //Position: 0x2424 / 9252
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_44(int iParam0, int iParam1) //Position: 0x243B / 9275
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(bool bParam0, bool bParam1, int iParam2) //Position: 0x244E / 9294
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

int Function_46(bool bParam0, bool bParam1) //Position: 0x255F / 9567
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
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, 1);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

var Function_47(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2644 / 9796
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_48(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x265E / 9822
{
	int iVar0;
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
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_49(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_49(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_49(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x273E / 10046
{
	char* cVar0[32];
	
	Function_56();
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
	if (Function_55(bParam0) == 1)
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
	Function_54(bParam0, 0);
	Function_53(bParam0, iParam1);
	Function_52(bParam0, uParam2);
	Function_51(bParam0, uParam3);
	if (Function_50(bParam0) != 5)
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

int Function_50(bool bParam0) //Position: 0x298C / 10636
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_51(bool bParam0, bool bParam1) //Position: 0x29AF / 10671
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x29D2 / 10706
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x29F6 / 10742
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x2A1C / 10780
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_55(bool bParam0) //Position: 0x2A3F / 10815
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_56() //Position: 0x2A5D / 10845
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

void Function_57(bool bParam0) //Position: 0x2AA7 / 10919
{
	switch (iLocal_38)
	{
		case 0x00000000:
			if (Function_36(&uLocal_21, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING((*bParam0)[1]))
			{
				Function_58((*bParam0)[1], Global_34573, "Thieves_msg01", "Thieves_msg01", 5, 60, 1, 1);
				iLocal_38 = 1;
				Function_163(&uLocal_21, 0.0f);
			}
			break;
		
		case 0x00000001:
			if (Function_36(&uLocal_21, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING((*bParam0)[1]))
			{
				Function_58((*bParam0)[0], (*bParam0)[1], "Thieves_msg02", "Thieves_msg02", 5, 60, 1, 1);
				Function_163(&uLocal_21, 0.0f);
				iLocal_38 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_36(&uLocal_21, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING((*bParam0)[1]))
			{
				Function_58((*bParam0)[1], (*bParam0)[0], "Thieves_msg03", "Thieves_msg03", 5, 60, 1, 1);
				Function_163(&uLocal_21, 0.0f);
				iLocal_38 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_36(&uLocal_21, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING((*bParam0)[0]))
			{
				Function_58((*bParam0)[0], (*bParam0)[1], "Thieves_msg04", "Thieves_msg04", 5, 60, 1, 1);
				Function_163(&uLocal_21, 0.0f);
				iLocal_38 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_36(&uLocal_21, 4.0f))
			{
				STOP_PED_SPEAKING((*bParam0)[1], 1);
				iLocal_38 = 5;
			}
			break;
	}
	return;
}

void Function_58(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2C2C / 11308
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_76(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						iParam3 = iParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					iParam3 = iParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_59(int iParam0) //Position: 0x2CBC / 11452
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_60(409, 1, 0, 0);
	}
	return;
}

int Function_60(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2CED / 11501
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
	Function_73(iParam0, TO_FLOAT(bParam1), 1);
	Function_72(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_61(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_61(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2F0D / 12045
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_71(390))), 32);
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
					bVar19 = (Function_70(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_70(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_68(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_164(), &Var9);
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

var Function_62(int iParam0) //Position: 0x353A / 13626
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x354B / 13643
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x3640 / 13888
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3659 / 13913
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_67(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_67(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x36BE / 14014
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_67(int iParam0, int iParam1) //Position: 0x36D0 / 14032
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_68(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x36E2 / 14050
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
	if (((Function_69(iParam0) != 19 || Function_69(iParam0) != 17) || Function_69(iParam0) != 10) || Function_69(iParam0) != 9)
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

int Function_69(int iParam0) //Position: 0x3812 / 14354
{
	return Global_35278[iParam020].f_48;
}

float Function_70(int iParam0) //Position: 0x3821 / 14369
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_71(int iParam0) //Position: 0x385A / 14426
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_72(int iParam0) //Position: 0x3897 / 14487
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

int Function_73(int iParam0, float fParam1, bool bParam2) //Position: 0x3A31 / 14897
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

void Function_74() //Position: 0x3C75 / 15477
{
	int iVar0;
	
	bLocal_42 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_75(4);
		if (iVar0 == 0)
		{
			cLocal_41 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_41 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			cLocal_41 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			cLocal_41 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_75(2);
		if (iVar0 == 0)
		{
			cLocal_41 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_41 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_75(2);
		if (iVar0 == 0)
		{
			cLocal_41 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_41 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_41, "SUSPENSE_MEDIUM", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_75(bool bParam0) //Position: 0x3DA8 / 15784
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

float Function_76(bool bParam0, bool bParam1) //Position: 0x3DC1 / 15809
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

float Function_77(bool bParam0, vector3 vParam1) //Position: 0x3EB2 / 16050
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_78(bParam0);
		vVar0 = { StackVal, StackVal, Function_78(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_78(bool bParam0) //Position: 0x3F2C / 16172
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

bool Function_79(var uParam0, int iParam1, float fParam2) //Position: 0x3F96 / 16278
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			if (Function_76((*uParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_80(bool bParam0) //Position: 0x3FD0 / 16336
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_81(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_81(float fParam0, bool bParam1) //Position: 0x400C / 16396
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_82(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x4095 / 16533
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_76(Global_34573, bParam1) > 15.0f)
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
		if (Function_85() && !*uParam2)
		{
			return 0;
		}
		if (Function_84(iParam0) && !*uParam2)
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
		if (!Function_83(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_83(int iParam0, int iParam1) //Position: 0x41C3 / 16835
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

int Function_84(int iParam0) //Position: 0x41E4 / 16868
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

int Function_85() //Position: 0x4222 / 16930
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
						if (Function_86(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_86(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_86(bool bParam0, bool bParam1) //Position: 0x42DD / 17117
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_78(bParam0);
			vVar0 = { StackVal, StackVal, Function_78(bParam0) };
			Function_87(bParam1);
			vVar3 = { StackVal, StackVal, Function_87(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_87(bool bParam0) //Position: 0x437D / 17277
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

void Function_88(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x43E9 / 17385
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
			Function_100(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_99(0);
		}
		if (bParam6)
		{
			Function_97(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_95(iParam3);
		}
		Function_93(iParam3);
		if (Function_92(StackVal, 32768))
		{
			Function_89(1);
		}
		Global_16876[iParam36].f_12++;
		Function_60(408, 1, 0, 0);
	}
}

void Function_89(bool bParam0) //Position: 0x44D6 / 17622
{
	if (bParam0)
	{
		Function_91(0x10000000);
	}
	else
	{
		Function_90(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_90(int iParam0) //Position: 0x44FA / 17658
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_91(int iParam0) //Position: 0x4517 / 17687
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_92(var uParam0, int iParam1) //Position: 0x452A / 17706
{
	return (uParam0 && iParam1) == 0;
}

void Function_93(int iParam0) //Position: 0x4537 / 17719
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_15(StackVal, 524288))
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
			bVar1 = Function_94(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_94(int iParam0) //Position: 0x45DB / 17883
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_95(int iParam0) //Position: 0x45F1 / 17905
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
	Function_96(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_96(var uParam0, var uParam1, int iParam2) //Position: 0x468F / 18063
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_97(int iParam0, int iParam1) //Position: 0x46A7 / 18087
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
			Function_98(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_98(int iParam0) //Position: 0x4729 / 18217
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

void Function_99(int iParam0) //Position: 0x4777 / 18295
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_94(900)), 0);
	return;
}

void Function_100(int iParam0) //Position: 0x4799 / 18329
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_94(200)), 0);
	return;
}

void Function_101(int iParam0, int iParam1) //Position: 0x47BA / 18362
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_102(bool bParam0, bool bParam1) //Position: 0x47C9 / 18377
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_103(bool bParam0) //Position: 0x47E9 / 18409
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

void Function_104(bool bParam0) //Position: 0x481D / 18461
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

struct<32> Function_105(bool bParam0) //Position: 0x4847 / 18503
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_106("0", &cVar8, ""), 4);
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

struct<32> Function_106(char* cParam0, char* cParam1, char* cParam2) //Position: 0x48B1 / 18609
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_107(vector3 vParam0) //Position: 0x48D0 / 18640
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					if (!Function_108(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_108(int iParam0) //Position: 0x4932 / 18738
{
	int iVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	iVar0 = Global_29008[iParam0];
	return (((Function_15(iVar0, 0x1000000) || Function_15(iVar0, 0x2000000)) || Function_15(iVar0, 0x4000000)) || Function_109(iParam0));
}

var Function_109(int iParam0) //Position: 0x49A5 / 18853
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_110(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x49C2 / 18882
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_148(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_146(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_111(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_12("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_10(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_148(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_146(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_111(int iParam0) //Position: 0x4D54 / 19796
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_145(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_80(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_80(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_144(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_143(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_141(StackVal, StackVal, StackVal, vVar9, Function_142());
				}
				else
				{
					bVar0 = Function_140(StackVal, StackVal, StackVal, vVar9, Function_142(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_145(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			bVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_139(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_80(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_138(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_137(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_137(&vVar9, &vVar6) };
				if (!Function_136(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_81(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_133(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_129(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_128(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_127(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_15(StackVal, 131072))
				{
					if (StackVal || Function_126(StackVal, Function_126(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_125(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_121(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				bVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_120((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_120((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_119(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_119(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_128(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_127(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_128(StackVal, Function_127(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_15(StackVal, 131072))
			{
				if (StackVal || Function_126(StackVal, Function_126(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_121(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_116((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_113(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_113(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_112(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_112(vector3 vParam0) //Position: 0x557E / 21886
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x55B3 / 21939
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_114(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_114(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_114(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_114(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_114(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_114(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_114(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_114(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_114(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_114(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_114(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_114(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_114(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_114(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_114(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_114(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_114(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_114(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_114(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_114(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_114(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_114(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_114(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_114(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_114(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_114(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_114(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_114(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_114(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_114(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_114(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_114(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_114(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_114(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_114(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_114(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_114(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_114(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_114(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_114(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_114(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_114(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_114(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_114(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_114(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_114(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_114(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_114(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_114(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_114(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_114(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_114(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_114(var uParam0, var uParam1, bool bParam2) //Position: 0x5BC8 / 23496
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_115(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_115(var uParam0, int iParam1) //Position: 0x5C1A / 23578
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_116(int iParam0) //Position: 0x5C36 / 23606
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_117(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_117(bool bParam0) //Position: 0x5C91 / 23697
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_118(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_118(bool bParam0) //Position: 0x5CC9 / 23753
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

vector3 Function_119(int iParam0) //Position: 0x5D0F / 23823
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_120(int iParam0, int iParam1) //Position: 0x5D2E / 23854
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_121(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x5D5E / 23902
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
	Function_123(4294967295);
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
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_122(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_122(var uParam0, int iParam1) //Position: 0x5E2E / 24110
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_123(bool bParam0) //Position: 0x5E4C / 24140
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
						Function_124(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_77(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_124(iVar0);
						}
					}
					else if (Function_77(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_124(iVar0);
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
			Function_124(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_124(int iParam0) //Position: 0x5FAD / 24493
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

bool Function_125(vector3 vParam0) //Position: 0x600E / 24590
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_126(vector3 vParam0) //Position: 0x60AF / 24751
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_127(vector3 vParam0) //Position: 0x60FB / 24827
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_128(vector3 vParam0) //Position: 0x6154 / 24916
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_129(int iParam0) //Position: 0x61D1 / 25041
{
	float fVar0;
	bool bVar1;
	
	Function_81(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_132(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_131(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_130(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_130(struct<33> Param0) //Position: 0x636C / 25452
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_131(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6498 / 25752
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_132(float fParam0) //Position: 0x64E9 / 25833
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_133(int iParam0, vector3 vParam1) //Position: 0x652D / 25901
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_135();
	Function_132(0);
	Function_134(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_131(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_130(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_134(bool bParam0) //Position: 0x66CF / 26319
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

void Function_135() //Position: 0x6782 / 26498
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

bool Function_136(vector3 vParam0) //Position: 0x6791 / 26513
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_137(var uParam0, int iParam1) //Position: 0x67A9 / 26537
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_119(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_119(&iVar25), StackVal) };
		Function_119(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_119(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_81(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_119(&iVar31);
			vVar11 = { StackVal, StackVal, Function_119(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_119(&iVar25);
			vVar11 = { StackVal, StackVal, Function_119(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_138(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x68B6 / 26806
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_136(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_136(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

bool Function_139(int iParam0) //Position: 0x69E8 / 27112
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_140(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x69FE / 27134
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_121(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_141(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6AA6 / 27302
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_121(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_142() //Position: 0x6B2F / 27439
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_81(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_143(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6B60 / 27488
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_144(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6BF5 / 27637
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_145(int iParam0) //Position: 0x6C72 / 27762
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_164());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_164());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_146(bool bParam0, int iParam1) //Position: 0x6CA3 / 27811
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_123(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_147(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_147(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6E04 / 28164
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_148(bool bParam0, vector3 vParam1) //Position: 0x6E9F / 28319
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_149(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6ECF / 28367
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_150(int iParam0) //Position: 0x6EF2 / 28402
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_155();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_154(iParam0[iVar03], 8);
		}
		else if (Function_153())
		{
			iVar1 = 1;
			Function_154(iParam0[iVar03], 8);
		}
		Function_154(iParam0[iVar03], 16);
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
				Function_154(iParam0[iVar03], 1);
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
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_154(iParam0[iVar03], 2);
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
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_154(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_154(iParam0[iVar03], 2);
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
	Function_151();
	return 1;
}

void Function_151() //Position: 0x726D / 29293
{
	if (!Function_152(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_152(int iParam0) //Position: 0x72AD / 29357
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_153() //Position: 0x72C9 / 29385
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

void Function_154(var uParam0, int iParam1) //Position: 0x72F4 / 29428
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_155() //Position: 0x7305 / 29445
{
	if (!Function_152(128))
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

void Function_156(var uParam0, int iParam1) //Position: 0x7347 / 29511
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

var Function_157(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7369 / 29545
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_158(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_154(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_158(var uParam0, int iParam1, int iParam2) //Position: 0x73A1 / 29601
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_154(uParam0[iVar03], 4);
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

var Function_159(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7465 / 29797
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
			Function_154(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_154(uParam0[iVar03], 8);
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

int Function_160(int iParam0, int iParam1) //Position: 0x7535 / 30005
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_161(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x754B / 30027
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_162(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_28(17), Global_34573))
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

int Function_162(int iParam0) //Position: 0x764D / 30285
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_163(var uParam0, float fParam1) //Position: 0x768E / 30350
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_101(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_164() //Position: 0x76AF / 30383
{
	var uVar0;
	
	return uVar0;
}

