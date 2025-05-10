//Decompiled with MagicRDR v1.0
//Function Count : 204
//Statics Count : 1219
//Natives Count : 429
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<3957> Local_4 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_1122 = 0;
	iLocal_1123 = 0;
	iLocal_1180 = 0;
	iLocal_1181 = 0;
	iLocal_1182 = 0;
	iLocal_1183 = 0;
	iLocal_1184 = 0;
	Local_995 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_1032 = 99;
	iLocal_1033 = 6;
	Local_1025 = 1000;
	Function_203(&iVar0);
	Function_202();
	while (Function_63())
	{
		Function_57();
		Function_56();
		if (Function_50(&iVar0, 5.0f))
		{
			if (Local_1187.f_28 == 1)
			{
				REPORT_METRICS_PERFORMANCE();
			}
			Function_203(&iVar0);
		}
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x81 / 129
{
	Function_48();
	Function_47(iLocal_994);
	Function_47(Local_4);
	Function_46();
	Function_45();
	Function_8(iLocal_1061, 1, 0, 1, 1, 1, 1, 1);
	Function_4(&bLocal_1002);
	Function_2();
	if (IS_ITERATOR_VALID(bLocal_1035))
	{
		DESTROY_ITERATOR(bLocal_1035);
	}
	return;
}

void Function_2() //Position: 0xC0 / 192
{
	Function_3();
	return;
}

void Function_3() //Position: 0xC9 / 201
{
	Function_4(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_4(int iParam0) //Position: 0xDB / 219
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x101 / 257
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x22F / 559
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(var uParam0, bool bParam1) //Position: 0x249 / 585
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x266 / 614
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_43());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(true);
	}
	Function_42();
	CLEAR_PRINTED_OBJECTIVE();
	Function_41();
	Function_39(0);
	Function_38();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_37();
	Function_36();
	Function_42();
	ENABLE_JOURNAL_REPLAY(1);
	Function_35(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	if (bParam7)
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			TASK_CLEAR(Global_34573);
		}
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		ACTOR_END_FORCE_HOLSTER(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_34(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, true);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_32(Global_28178);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_30(1178687);
	Function_28(33039);
	Function_27(0x218003f);
	Function_26(4194560);
	Function_25();
	Function_24();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_17(0, 1, 1);
	}
	else
	{
		Function_17(0, 1, 1);
	}
	Function_15();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_10();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_9(&Global_12976 + 36 + 20, 16);
}

void Function_9(var uParam0, int iParam1) //Position: 0x457 / 1111
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10() //Position: 0x46A / 1130
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_14() > 3)
		{
			bVar0 *= 2;
		}
		Function_11(StackVal, 0, 0, Function_13(bVar0), 0);
	}
	return;
}

void Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x4C0 / 1216
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_12((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_12(bool bParam0) //Position: 0x506 / 1286
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

var Function_13(bool bParam0) //Position: 0x52B / 1323
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

int Function_14() //Position: 0x541 / 1345
{
	return Global_12976.f_156;
}

void Function_15() //Position: 0x54C / 1356
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_16(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x576 / 1398
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_17(int iParam0, bool bParam1, int iParam2) //Position: 0x58D / 1421
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
		if (Function_23(Global_29006))
		{
			Function_22(&(Global_29008[Global_29006]), 131072);
			Function_16(&(Global_29008[Global_29006]), 2097152);
			Function_20(Global_29006);
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
				if (Function_19(&(Global_29008[iVar0]), 4) || Function_19(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_16(&(Global_29008[iVar0]), 2097155);
					Function_22(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_18())
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

bool Function_18() //Position: 0x698 / 1688
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_19(var uParam0, int iParam1) //Position: 0x6A1 / 1697
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_20(int iParam0) //Position: 0x6BD / 1725
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_21())
			{
				return;
			}
		}
		if (!Function_19(&(Global_29008[iParam0]), 2048))
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

bool Function_21() //Position: 0x73C / 1852
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_19(&(Global_29008[iVar0]), 4) || Function_19(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_22(var uParam0, int iParam1) //Position: 0x799 / 1945
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_23(int iParam0) //Position: 0x7A8 / 1960
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_24() //Position: 0x7BE / 1982
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30804)
	{
		Global_30804[iVar0] = 1;
		iVar0++;
	}
	Global_30838 = 0;
	return;
}

void Function_25() //Position: 0x7E4 / 2020
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_26(int iParam0) //Position: 0x80A / 2058
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_27(int iParam0) //Position: 0x827 / 2087
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_28(int iParam0) //Position: 0x83A / 2106
{
	Function_29(&Global_28842, iParam0);
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x848 / 2120
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_30(int iParam0) //Position: 0x863 / 2147
{
	if (Function_31(iParam0, 1) && !Function_31(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_31(var uParam0, int iParam1) //Position: 0x890 / 2192
{
	return (uParam0 && iParam1) == 0;
}

void Function_32(int iParam0) //Position: 0x89D / 2205
{
	int iVar0;
	
	if (!Function_33(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
	}
	return;
}

bool Function_33(int iParam0) //Position: 0x964 / 2404
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_34(bool bParam0) //Position: 0x97A / 2426
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_35(bool bParam0) //Position: 0x9F6 / 2550
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_36() //Position: 0xA6A / 2666
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay"))
		{
			DECOR_REMOVE(Global_34573, "ResetMenuDelay");
		}
	}
	return;
}

void Function_37() //Position: 0xAAB / 2731
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			DECOR_REMOVE(Global_34573, "missionFailRmd");
		}
	}
	return;
}

void Function_38() //Position: 0xAEC / 2796
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_39(int iParam0) //Position: 0xB00 / 2816
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_40())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_40() //Position: 0xB3C / 2876
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_41() //Position: 0xB61 / 2913
{
	Global_8722 = 0.0f;
	return;
}

void Function_42() //Position: 0xB6B / 2923
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

int Function_43() //Position: 0xB96 / 2966
{
	bool bVar0;
	
	bVar0 = Function_44();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_44() //Position: 0xBB0 / 2992
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_45() //Position: 0xBC5 / 3013
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_46() //Position: 0xCDF / 3295
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_47(bool bParam0) //Position: 0xCE8 / 3304
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_48() //Position: 0xD40 / 3392
{
	if (IS_OBJECT_VALID(Local_4.f_3924))
	{
		DESTROY_OBJECT(Local_4.f_3924);
	}
	if (IS_OBJECT_VALID(Local_4.f_3928))
	{
		DESTROY_OBJECT(Local_4.f_3928);
	}
	if (IS_OBJECT_VALID(Local_4.f_3932))
	{
		DESTROY_OBJECT(Local_4.f_3932);
	}
	if (IS_OBJECT_VALID(Local_4.f_3936))
	{
		DESTROY_OBJECT(Local_4.f_3936);
	}
	if (IS_OBJECT_VALID(Local_4.f_3940))
	{
		DESTROY_OBJECT(Local_4.f_3940);
	}
	if (IS_OBJECT_VALID(Local_4.f_3944))
	{
		DESTROY_OBJECT(Local_4.f_3944);
	}
	if (IS_OBJECT_VALID(Local_4.f_3916))
	{
		DESTROY_OBJECT(Local_4.f_3916);
	}
	if (IS_OBJECT_VALID(Local_4.f_3920))
	{
		DESTROY_OBJECT(Local_4.f_3920);
	}
	if (IS_OBJECT_VALID(bLocal_1087))
	{
		Function_49(bLocal_1087);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1107))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1107);
	}
	if (IS_BLIP_VALID(bLocal_1106))
	{
		REMOVE_BLIP(bLocal_1106);
	}
	HUD_TIMER_DISPLAY(0);
	iLocal_1114 = 0;
	SET_GAME_CAMERA_VEHICLE_MODE(2);
	Function_16(&(Global_29008[Global_30707[1]]), 384);
	if (IS_ACTOR_VALID((*&Local_4 + 332)[02]))
	{
		if (IS_ACTOR_HOGTIED((*&Local_4 + 332)[02]))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 332)[02]);
			FREE_FROM_HOGTIE((*&Local_4 + 332)[02]);
			TASK_CLEAR((*&Local_4 + 332)[02]);
			TASK_PRIORITY_SET((*&Local_4 + 332)[02], true);
			TASK_STAND_STILL((*&Local_4 + 332)[02], -1.0f, 0, 0);
		}
	}
	return;
}

void Function_49(bool bParam0) //Position: 0xE7F / 3711
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

bool Function_50(var uParam0, int iParam1) //Position: 0xF09 / 3849
{
	if (Function_52(uParam0, iParam1))
	{
		Function_51(uParam0);
		return 1;
	}
	return 0;
}

void Function_51(int iParam0) //Position: 0xF21 / 3873
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_52(int iParam0, float fParam1) //Position: 0xF35 / 3893
{
	if (Function_55(iParam0))
	{
		if (Function_53(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_53(int iParam0) //Position: 0xF51 / 3921
{
	if (Function_55(iParam0))
	{
		if (Function_54(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_54(int iParam0) //Position: 0x1019 / 4121
{
	return Function_31(*iParam0, 2);
}

bool Function_55(var uParam0) //Position: 0x1026 / 4134
{
	return Function_31(*uParam0, 1);
}

void Function_56() //Position: 0x1033 / 4147
{
	if (Local_1187.f_24 != 0)
	{
		SET_CAMERA_POSITION(bLocal_1211, Local_1187);
		SET_CAMERA_DIRECTION(bLocal_1211, *(&Local_1187 + 12), 1);
	}
	else if (IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1211, false))
	{
		REMOVE_CAMERA_FROM_CHANNEL(bLocal_1211, 0);
	}
	return;
}

void Function_57() //Position: 0x106F / 4207
{
	int iVar0;
	
	if (IS_DEBUGKEY_PRESSED(46))
	{
		iVar0 = Local_1187.f_24;
		iVar0++;
		if (iVar0 >= 4)
		{
			Local_1187.f_24 = 0;
		}
		else
		{
			Local_1187.f_24 = iVar0;
		}
		Function_62();
	}
	if (IS_DEBUGKEY_PRESSED(31))
	{
		iVar0 = Local_1187.f_28;
		iVar0++;
		if (iVar0 >= 1)
		{
			Local_1187.f_28 = 0;
		}
		else
		{
			Local_1187.f_28 = iVar0;
		}
		Function_60();
	}
	if (IS_DEBUGKEY_PRESSED(34))
	{
		Function_58();
	}
	return;
}

void Function_58() //Position: 0x10DC / 4316
{
	Function_1();
	Function_59();
	iLocal_1032 = 99;
	iLocal_1033 = 6;
	Local_1025 = 1000;
	Local_1187.f_24 = 0;
	return;
}

void Function_59() //Position: 0x10FD / 4349
{
	DESTROY_CAMERA(bLocal_1211);
	return;
}

void Function_60() //Position: 0x1109 / 4361
{
	switch (Local_1187.f_28)
	{
		case 0x00000000:
			Function_61("SPEW_MODE_DISABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_61("SPEW_MODE_ENABLED", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

void Function_61(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x116E / 4462
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

void Function_62() //Position: 0x11B9 / 4537
{
	if (Local_1187.f_24 != 0)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1211, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_1211, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
	}
	switch (Local_1187.f_24)
	{
		case 0x00000000:
			if (IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1211, false))
			{
				REMOVE_CAMERA_FROM_CHANNEL(bLocal_1211, 0);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			Function_61("CAMERA_MODE_1", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Local_1187 = { -697,042f, 65,953f, 3324,474f };
			*(&Local_1187 + 12) = { 0,334f, -0,044f, -0,942f };
			Function_61("CAMERA_MODE_2", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Local_1187 = { -710,397f, 75,006f, 3309,704f };
			*(&Local_1187 + 12) = { 0,892f, -0,362f, -0,271f };
			Function_61("CAMERA_MODE_3", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000003:
			Local_1187 = { -705,448f, 65,152f, 3280,742f };
			*(&Local_1187 + 12) = { 0,197f, -0,07f, 0,978f };
			Function_61("CAMERA_MODE_4", 1,75f, 0, 0, 2, 1, 0);
			break;
		
		case 0x00000004:
			Local_1187 = { -720,853f, 73,112f, 3293,931f };
			*(&Local_1187 + 12) = { 0,97f, -0,117f, 0,213f };
			Function_61("CAMERA_MODE_5", 1,75f, 0, 0, 2, 1, 0);
			break;
	}
	return;
}

bool Function_63() //Position: 0x1380 / 4992
{
	Function_201(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_995, iLocal_1032, iLocal_1033, &uLocal_1062, &uLocal_1060, &iLocal_1061);
	if (iLocal_1032 == 99 && iLocal_1032 == 100)
	{
		if (IS_EXITFLAG_SET())
		{
			Function_192(4);
			return 0;
		}
		Function_191();
	}
	switch (iLocal_1032)
	{
		case 0x00000063:
			Function_156();
			break;
		
		case 0x00000002:
			Function_66();
			break;
		
		case 0x00000064:
			if (Function_65())
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_64(&iLocal_1032, &iLocal_1033, &Local_1025))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool Function_64(var uParam0, int iParam1, int iParam2) //Position: 0x1403 / 5123
{
	if (*uParam0 <= 98)
	{
		*uParam0++;
		*iParam1 = 0;
		*iParam2 = 1000;
	}
	else if (*uParam0 == 98)
	{
		*uParam0 = 101;
		*iParam1 = 0;
		*iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_65() //Position: 0x1443 / 5187
{
	if (Global_3395)
	{
		iLocal_1061 = 1;
		Function_1();
		return 1;
	}
	return 0;
}

void Function_66() //Position: 0x1459 / 5209
{
	if (iLocal_1033 < 3 && iLocal_1033 > 105)
	{
		if ((((Function_153(bLocal_1036, "RebelLeader_attacked", &uLocal_1063, &iLocal_1061, 1, 0x41200000, 1, 0, 1) || Function_152(Local_4.f_508, "RebelSoldier_attacked", &uLocal_1074, &iLocal_1061, 1, 0x41200000, 1, 0, 1)) || Function_152(Local_4.f_548, "RebelSoldier_attacked", &uLocal_1074, &iLocal_1061, 1, 0x41200000, 1, 0, 1)) || Function_152(Local_4.f_588, "RebelSoldier_attacked", &uLocal_1074, &iLocal_1061, 1, 0x41200000, 1, 0, 1)) || Function_152(Local_4.f_628, "RebelSoldier_attacked", &uLocal_1074, &iLocal_1061, 1, 0x41200000, 1, 0, 1))
		{
			return;
		}
		if (IS_VOLUME_VALID((*&Local_4 + 752)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 752)[1]))
			{
				Function_151();
				DESTROY_VOLUME((*&Local_4 + 752)[1]);
			}
		}
	}
	switch (iLocal_1033)
	{
		case 0x00000000:
			Function_147(0);
			if (IS_VOLUME_VALID((*&Local_4 + 752)[1]))
			{
				Function_151();
				DESTROY_VOLUME((*&Local_4 + 752)[1]);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_1036, GET_ACTOR_MAX_HEALTH(bLocal_1036));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_142();
			bLocal_1034 = Function_141(StackVal, StackVal, *(&Local_4 + 1812[06]), 0, 1, 1);
			if (!Function_140(bLocal_1034))
			{
				Function_138(&Local_995);
			}
			if (iLocal_1053[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1812[06]), 1, true, 1);
				Function_203(&iLocal_1038);
				iLocal_1033 = 1;
			}
			else
			{
				Function_203(&iLocal_1038);
				iLocal_1033 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_140(bLocal_1034) || bLocal_1034 != 4294967295))
			{
				Function_203(&iLocal_1038);
				iLocal_1033 = 2;
			}
			break;
		
		case 0x00000002:
			Function_135();
			Function_203(&iLocal_1038);
			iLocal_1033 = 3;
			break;
		
		case 0x00000003:
			if (Function_101())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_94();
				Function_203(&iLocal_1038);
				iLocal_1033 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_93("Rebel06_obj03_start", 4.0f, 0, 2, 1, 0);
				Function_203(&iLocal_1038);
				iLocal_1033 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_53(&iLocal_1038) <= 5.0f)
			{
				Function_92("Rebel06_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_203(&iLocal_1038);
				Function_203(&iLocal_1041);
				Function_203(&iLocal_1044);
				iLocal_1033 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_70())
			{
				Function_203(&iLocal_1038);
				iLocal_1033 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_67();
			iLocal_1053[2] = 1;
			Function_203(&iLocal_1038);
			iLocal_1032 = 3;
			iLocal_1033 = 0;
			break;
	}
	return;
}

void Function_67() //Position: 0x1781 / 6017
{
	Function_68(&Local_4 + 392, 0, 0);
	Function_68(&Local_4 + 388, 0, 0);
	Function_68(&Local_4 + 404, 0, 0);
	REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 332)[02]));
	return;
}

void Function_68(var uParam0, bool bParam1, bool bParam2) //Position: 0x17B3 / 6067
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_69(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_69(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x182F / 6191
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_70() //Position: 0x1849 / 6217
{
	switch (iLocal_1182)
	{
		case 0x00000000:
			iLocal_1182 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_91(Global_34573, (*&Local_4 + 332)[02], 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 792)[8]))
			{
				iLocal_1182 = 2;
				return 1;
			}
			Function_71();
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_71() //Position: 0x18AD / 6317
{
	switch (iLocal_1180)
	{
		case 0x00000000:
			iLocal_1180 = 1;
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_392) < 4)
			{
				Function_90();
				Function_88();
				Function_86(Local_4.f_548, Local_4.f_404, 1);
				Function_85(Local_4.f_548);
				SQUAD_GOALS_CLEAR(Local_4.f_548);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_548, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_548, true, 1, 4294967295);
				TASK_FOLLOW_PATH(false, Local_4.f_3952, 2, 1, 0, 1, false);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_548, 2, (*&Local_4 + 840)[6], 2, 0);
				Function_85(Local_4.f_588);
				SQUAD_GOALS_CLEAR(Local_4.f_588);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_588, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_588, true, (*&Local_4 + 840)[5], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_588, 2, (*&Local_4 + 840)[5], 2, 0);
				Function_86(Local_4.f_628, Local_4.f_404, 1);
				Function_85(Local_4.f_628);
				SQUAD_GOALS_CLEAR(Local_4.f_628);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_628, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_628, true, 1, 4294967295);
				TASK_FOLLOW_PATH(false, Local_4.f_3956, 2, 1, 0, 1, false);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_628, 2, (*&Local_4 + 840)[7], 2, 0);
				Function_85(Local_4.f_392);
				SQUAD_GOALS_CLEAR(Local_4.f_392);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_392, false, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_85(Local_4.f_388);
				SQUAD_GOALS_CLEAR(Local_4.f_388);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_388, false, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_84(Local_4.f_404, 1);
				Function_83(Local_4.f_404, 0);
				Function_85(Local_4.f_404);
				SQUAD_GOALS_CLEAR(Local_4.f_404);
				Function_80(Local_4.f_404, -1.0f);
				Function_84(Local_4.f_396, 1);
				Function_83(Local_4.f_396, 0);
				Function_85(Local_4.f_396);
				SQUAD_GOALS_CLEAR(Local_4.f_396);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_396, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_396, true, (*&Local_4 + 840)[6], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_396, 2, (*&Local_4 + 840)[6], 2, 0);
				Function_84(Local_4.f_400, 1);
				Function_83(Local_4.f_400, 0);
				Function_85(Local_4.f_400);
				SQUAD_GOALS_CLEAR(Local_4.f_400);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_400, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_400, true, (*&Local_4 + 840)[7], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_400, 2, (*&Local_4 + 840)[7], 2, 0);
				iLocal_1180 = 2;
				return;
			}
			break;
		
		case 0x00000002:
			if ((iLocal_1117 && iLocal_1118) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_388) >= 3)
			{
				iLocal_1117 = 0;
				iLocal_1118 = 0;
				Function_79();
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[02], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[02], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #2 for RebelCannoneer01");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[12], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[12], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #4 for RebelCannoneer02");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[22], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[22], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #5 for RebelCannoneer03");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[32], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[32], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #6 for RebelCannoneer04");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(6, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[42], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[42], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #7 for RebelCannoneer05");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(7, Local_4.f_3900);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 3, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[52], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[52], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Cannon Turret #8 for RebelCannoneer06");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_3904);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 2, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[62], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[62], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Maxim Turret #1 for RebelGunner01");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_3904);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 1, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[72], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[72], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Gatling Turret #2 for RebelGunner02");
					}
				}
				bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_3904);
				if (IS_OBJECT_VALID(bLocal_1085))
				{
					GET_OBJECT_POSITION(bLocal_1085, &vLocal_1091);
					GET_OBJECT_AXIS(bLocal_1085, &vLocal_1097, 2);
					bLocal_1085 = Function_77(StackVal, StackVal, vLocal_1091, 1, 0x40200000);
					if (IS_OBJECT_VALID(bLocal_1085))
					{
						vLocal_1091 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_1097, vLocal_1091, StackVal) };
						bLocal_1103 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vLocal_1091, 2);
						TASK_USE_TURRET(false, bLocal_1085, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET((*&Local_4 + 632)[82], true);
						TASK_SEQUENCE_PERFORM((*&Local_4 + 632)[82], bLocal_1103);
						TASK_SEQUENCE_RELEASE(bLocal_1103, 1);
					}
					else
					{
						LOG_ERROR("Failed to locate Gatling Turret #3 for RebelGunner03");
					}
				}
				Function_85(Local_4.f_404);
				SQUAD_GOALS_CLEAR(Local_4.f_404);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_404, false, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				iLocal_1180 = 3;
				return;
			}
			if (!iLocal_1117 && Function_76(Local_4.f_548, (*&Local_4 + 840)[6]))
			{
				iLocal_1117 = 1;
				Function_86(Local_4.f_548, Local_4.f_396, 1);
				Function_85(Local_4.f_548);
				SQUAD_GOALS_CLEAR(Local_4.f_548);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_548, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_548, true, (*&Local_4 + 840)[6], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_548, 2, (*&Local_4 + 840)[6], 2, 0);
			}
			else if (!iLocal_1118 && Function_76(Local_4.f_628, (*&Local_4 + 840)[7]))
			{
				iLocal_1118 = 1;
				Function_86(Local_4.f_628, Local_4.f_400, 1);
				Function_85(Local_4.f_628);
				SQUAD_GOALS_CLEAR(Local_4.f_628);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_628, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_628, true, (*&Local_4 + 840)[7], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_628, 2, (*&Local_4 + 840)[7], 2, 0);
			}
			if (!Function_55(&iLocal_1050))
			{
				Function_203(&iLocal_1050);
			}
			else if (Function_53(&iLocal_1050) <= 5.0f)
			{
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							GET_POSITION(bLocal_1090, &vLocal_1091);
							GET_ACTOR_VELOCITY(bLocal_1090, &vLocal_1097);
							bLocal_1104 = GET_TASK_NEXT_POINT_ON_PATH(bLocal_1090, Local_4.f_3952);
							if (bLocal_1104 > 0)
							{
								GET_PATH_POINT(Local_4.f_3952, bLocal_1104, &Local_1094);
							}
							else
							{
								bLocal_1104 = Function_74(bLocal_1090, Local_4.f_3952);
								GET_PATH_POINT(Local_4.f_3952, bLocal_1104, &Local_1094);
							}
							if ((vLocal_1097.x > 0,25f && vLocal_1097.y > 0,25f) && vLocal_1097.z > 0,25f)
							{
								bLocal_1119 = false;
							}
							else
							{
								bLocal_1119 = true;
							}
							if (FABS((StackVal - vLocal_1091.y)) < 0,5f)
							{
								bLocal_1120 = false;
							}
							else
							{
								bLocal_1120 = true;
							}
							if (!bLocal_1119 && !Local_1124[bLocal_11036])
							{
								if (Function_72(StackVal, StackVal, bLocal_1090, *(&Local_1124[bLocal_11036] + 4), 1.0f))
								{
									if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &vLocal_1091, 3212836864) && !WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &Local_1094, 3212836864))
									{
										TELEPORT_ACTOR(bLocal_1090, &Local_1094, 1, 1, 1);
									}
								}
							}
							else if (!bLocal_1120 && !Local_1124[bLocal_11036].f_16)
							{
								if (!IS_ACTOR_ON_LADDER(bLocal_1090) && Local_1124[bLocal_11036].f_20 != bLocal_1104)
								{
									if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &vLocal_1091, 3212836864) && !WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &Local_1094, 3212836864))
									{
										TELEPORT_ACTOR(bLocal_1090, &Local_1094, 1, 1, 1);
									}
								}
							}
							PRINTSTRING("REBELINFANTRYLEFT0");
							PRINTINT(bLocal_1103 + 1);
							PRINTSTRING(" - OLD POS: ");
							PRINTVECTOR(*(&Local_1124[bLocal_11036] + 4));
							PRINTSTRING(" NEW POS: ");
							PRINTVECTOR(vLocal_1091);
							PRINTSTRING(" OLD PNT: ");
							PRINTINT(Local_1124[bLocal_11036].f_20);
							PRINTSTRING(" NEW PNT: ");
							PRINTINT(bLocal_1104);
							PRINTNL();
							Local_1124[bLocal_11036] = bLocal_1119;
							*(&Local_1124[bLocal_11036] + 4) = { StackVal, StackVal, vLocal_1091 };
							Local_1124[bLocal_11036].f_16 = bLocal_1120;
							Local_1124[bLocal_11036].f_20 = bLocal_1104;
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							GET_POSITION(bLocal_1090, &vLocal_1091);
							GET_ACTOR_VELOCITY(bLocal_1090, &vLocal_1097);
							bLocal_1104 = GET_TASK_NEXT_POINT_ON_PATH(bLocal_1090, Local_4.f_3956);
							if (bLocal_1104 > 0)
							{
								GET_PATH_POINT(Local_4.f_3956, bLocal_1104, &Local_1094);
							}
							else
							{
								bLocal_1104 = Function_74(bLocal_1090, Local_4.f_3952);
								GET_PATH_POINT(Local_4.f_3956, bLocal_1104, &Local_1094);
							}
							if ((vLocal_1097.x > 0,25f && vLocal_1097.y > 0,25f) && vLocal_1097.z > 0,25f)
							{
								bLocal_1119 = false;
							}
							else
							{
								bLocal_1119 = true;
							}
							if (FABS((StackVal - vLocal_1091.y)) < 0,5f)
							{
								bLocal_1120 = false;
							}
							else
							{
								bLocal_1120 = true;
							}
							if (!bLocal_1119 && !Local_1155[bLocal_11036])
							{
								if (Function_72(StackVal, StackVal, bLocal_1090, *(&Local_1155[bLocal_11036] + 4), 1.0f))
								{
									if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &vLocal_1091, 3212836864) && !WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &Local_1094, 3212836864))
									{
										TELEPORT_ACTOR(bLocal_1090, &Local_1094, 1, 1, 1);
									}
								}
							}
							else if (!bLocal_1120 && !Local_1155[bLocal_11036].f_16)
							{
								if (!IS_ACTOR_ON_LADDER(bLocal_1090) && Local_1155[bLocal_11036].f_20 != bLocal_1104)
								{
									if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &vLocal_1091, 3212836864) && !WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bLocal_1090), &Local_1094, 3212836864))
									{
										TELEPORT_ACTOR(bLocal_1090, &Local_1094, 1, 1, 1);
									}
								}
							}
							Local_1155[bLocal_11036] = bLocal_1119;
							*(&Local_1155[bLocal_11036] + 4) = { StackVal, StackVal, vLocal_1091 };
							Local_1155[bLocal_11036].f_16 = bLocal_1120;
							Local_1155[bLocal_11036].f_20 = bLocal_1104;
						}
					}
					bLocal_1103++;
				}
				Function_203(&iLocal_1050);
			}
			break;
		
		case 0x00000003:
			if (iLocal_1117 && iLocal_1118)
			{
				iLocal_1117 = 0;
				iLocal_1118 = 0;
				iLocal_1180 = 4;
				return;
			}
			if (!iLocal_1117 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_396) >= 1)
			{
				iLocal_1117 = 1;
				Function_85(Local_4.f_548);
				SQUAD_GOALS_CLEAR(Local_4.f_548);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_548, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_548, true, (*&Local_4 + 840)[8], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_548, 2, (*&Local_4 + 840)[8], 2, 0);
				Function_85(Local_4.f_396);
				SQUAD_GOALS_CLEAR(Local_4.f_396);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_396, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_396, true, (*&Local_4 + 840)[8], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_396, 2, (*&Local_4 + 840)[8], 2, 0);
			}
			else if (!iLocal_1118 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_400) >= 1)
			{
				iLocal_1118 = 1;
				Function_85(Local_4.f_628);
				SQUAD_GOALS_CLEAR(Local_4.f_628);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_628, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_628, true, (*&Local_4 + 840)[8], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_628, 2, (*&Local_4 + 840)[8], 2, 0);
				Function_85(Local_4.f_400);
				SQUAD_GOALS_CLEAR(Local_4.f_400);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_400, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_400, true, (*&Local_4 + 840)[8], 4294967295);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_400, 2, (*&Local_4 + 840)[8], 2, 0);
			}
			break;
		
		case 0x00000004:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_404) < 3)
			{
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					SQUAD_LEAVE(bLocal_1036);
				}
				bLocal_1104 = false;
				Function_85(Local_4.f_548);
				SQUAD_GOALS_CLEAR(Local_4.f_548);
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1104, Local_4.f_3912);
							if (IS_OBJECT_VALID(bLocal_1085))
							{
								bLocal_1089 = GET_GRINGO_FROM_OBJECT(bLocal_1085);
								if (IS_GRINGO_VALID(bLocal_1089))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_1089, "UseCase1", &vLocal_1091);
									bLocal_1105 = TASK_SEQUENCE_OPEN();
									TASK_GO_TO_COORD(false, &vLocal_1091, 2);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_PRIORITY_SET(bLocal_1090, true);
									TASK_SEQUENCE_PERFORM(bLocal_1090, bLocal_1105);
									TASK_SEQUENCE_RELEASE(bLocal_1105, 1);
								}
							}
						}
					}
					bLocal_1104++;
					bLocal_1103++;
				}
				Function_85(Local_4.f_588);
				SQUAD_GOALS_CLEAR(Local_4.f_588);
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1104, Local_4.f_3912);
							if (IS_OBJECT_VALID(bLocal_1085))
							{
								bLocal_1089 = GET_GRINGO_FROM_OBJECT(bLocal_1085);
								if (IS_GRINGO_VALID(bLocal_1089))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_1089, "UseCase1", &vLocal_1091);
									bLocal_1105 = TASK_SEQUENCE_OPEN();
									TASK_GO_TO_COORD(false, &vLocal_1091, 2);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_PRIORITY_SET(bLocal_1090, true);
									TASK_SEQUENCE_PERFORM(bLocal_1090, bLocal_1105);
									TASK_SEQUENCE_RELEASE(bLocal_1105, 1);
								}
							}
						}
					}
					bLocal_1104++;
					bLocal_1103++;
				}
				Function_85(Local_4.f_628);
				SQUAD_GOALS_CLEAR(Local_4.f_628);
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							bLocal_1085 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1104, Local_4.f_3912);
							if (IS_OBJECT_VALID(bLocal_1085))
							{
								bLocal_1089 = GET_GRINGO_FROM_OBJECT(bLocal_1085);
								if (IS_GRINGO_VALID(bLocal_1089))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_1089, "UseCase1", &vLocal_1091);
									bLocal_1105 = TASK_SEQUENCE_OPEN();
									TASK_GO_TO_COORD(false, &vLocal_1091, 2);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_PRIORITY_SET(bLocal_1090, true);
									TASK_SEQUENCE_PERFORM(bLocal_1090, bLocal_1105);
									TASK_SEQUENCE_RELEASE(bLocal_1105, 1);
								}
							}
						}
					}
					bLocal_1104++;
					bLocal_1103++;
				}
				iLocal_1180 = 5;
				return;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

bool Function_72(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x2B8F / 11151
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_73(bParam0);
		if (VDIST(Function_73(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_73(bool bParam0) //Position: 0x2C19 / 11289
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

bool Function_74(bool bParam0, bool bParam1) //Position: 0x2C83 / 11395
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	bVar4 = 4294967295;
	bVar5 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar1);
		Function_75(bParam0);
		bVar6 = VDIST(Function_75(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

vector3 Function_75(bool bParam0) //Position: 0x2CD7 / 11479
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x2CE8 / 11496
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(bVar1, bParam1))
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_77(vector3 vParam0, int iParam3, float fParam4) //Position: 0x2D36 / 11574
{
	bool bVar0;
	bool bVar1;
	
	if (Function_78(StackVal, StackVal, vParam0))
	{
		return "";
	}
	if (iParam3 == 1)
	{
		bVar0 = "p_gen_gatlingGun01x";
	}
	else if (iParam3 == 2)
	{
		bVar0 = "p_gen_gatlingMaxim02x";
	}
	else if (iParam3 == 3)
	{
		bVar0 = "p_gen_cannon02x";
	}
	else
	{
		return "";
	}
	bVar1 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam0, fParam4, bVar0, 1));
	if (!IS_OBJECT_VALID(bVar1))
	{
		return "";
	}
	return bVar1;
}

bool Function_78(vector3 vParam0) //Position: 0x2DD4 / 11732
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_79() //Position: 0x2DEC / 11756
{
	Local_4.f_708 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RebelManTurret"));
	(*&Local_4 + 632)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer01", 529, -700,4516f, 63,28695f, 3322,765f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[02], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[02], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[02], true);
	(*&Local_4 + 632)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer02", 530, -700,3868f, 63,28786f, 3320,848f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[12], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[12], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[12], true);
	(*&Local_4 + 632)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer03", 531, -698,3477f, 63,24583f, 3320,299f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[22], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[22], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[22], true);
	(*&Local_4 + 632)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer04", 529, -698,4417f, 63,24583f, 3323,153f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[32], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[32], true);
	(*&Local_4 + 632)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer05", 530, -696,8236f, 63,24583f, 3321,691f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[42], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[42], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[42], true);
	(*&Local_4 + 632)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Cannoneer06", 531, -694,8792f, 63,24583f, 3321,138f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[52], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[52], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[52], true);
	(*&Local_4 + 632)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Gunner01", 529, -693,8404f, 63,24583f, 3322,576f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[62], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[62], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[62], true);
	(*&Local_4 + 632)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Gunner02", 530, -694,6404f, 63,24583f, 3325,366f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[72], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[72], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[72], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[72], true);
	(*&Local_4 + 632)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Gunner03", 531, -696,9165f, 63,24583f, 3324,334f, 0.0f, -20,80933f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 632)[82], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 632)[82], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[82], 20);
	TASK_PRIORITY_SET((*&Local_4 + 632)[82], true);
	return;
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x31CF / 12751
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_82(bVar1, &uVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&uVar3, 3.0f, Function_81(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bVar1, bVar2, bParam1, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

var Function_81(bool bParam0) //Position: 0x3245 / 12869
{
	return GET_HEADING(bParam0);
}

void Function_82(bool bParam0, bool bParam1) //Position: 0x3250 / 12880
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_83(bool bParam0, int iParam1) //Position: 0x325D / 12893
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_84(bool bParam0, int iParam1) //Position: 0x3294 / 12948
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_DRAW_ANY_WEAPON(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_85(bool bParam0) //Position: 0x32DB / 13019
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_86(bool bParam0, bool bParam1, int iParam2) //Position: 0x330D / 13069
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar3);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_87(&bVar0, bVar1, iParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_87(var uParam0, bool bParam1, bool bParam2) //Position: 0x3388 / 13192
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_73(bParam1);
			vVar0 = { StackVal, StackVal, Function_73(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*uParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*uParam0, bParam1, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

void Function_88() //Position: 0x3490 / 13456
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_400 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyDefendPlateau02"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau02_01", 391, -723,7035f, 75,17217f, 3310,235f, 0.0f, 50.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_400);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau02_02", 392, -723,9374f, 75,17217f, 3310,878f, 0.0f, 50.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_400);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau02_03", 393, -722,1714f, 75,17217f, 3311,521f, 0.0f, 50.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_400);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau02_04", 391, -721,4054f, 75,17217f, 3312,163f, 0.0f, 50.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_400);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	return;
}

void Function_89(bool bParam0) //Position: 0x3644 / 13892
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

void Function_90() //Position: 0x3678 / 13944
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_396 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyDefendPlateau01"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau01_01", 391, -719,9531f, 75,17217f, 3314,427f, 0.0f, 230.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_396);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau01_02", 392, -720,7191f, 75,17217f, 3313,784f, 0.0f, 230.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_396);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau01_03", 393, -721,4852f, 75,17217f, 3313,142f, 0.0f, 230.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_396);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendPlateau01_04", 391, -722,2512f, 75,17217f, 3312,499f, 0.0f, 230.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_396);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	return;
}

int Function_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x382C / 14380
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_92(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x3919 / 14617
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_93(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x396C / 14700
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_94() //Position: 0x39B3 / 14771
{
	Function_100();
	Function_99();
	Function_98();
	Function_97();
	Function_96();
	ADD_BLIP_FOR_ACTOR((*&Local_4 + 332)[02], 322, 0, 2, 0);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 5.0f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 5.0f);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 0.0f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,1f);
	if (IS_ACTOR_VALID(bLocal_1036))
	{
		SQUAD_JOIN(bLocal_1036, Local_4.f_548);
	}
	Function_84(Local_4.f_548, 0);
	Function_83(Local_4.f_548, 0);
	Function_86(Local_4.f_548, Local_4.f_392, 1);
	Function_86(Local_4.f_548, Local_4.f_388, 1);
	Function_85(Local_4.f_548);
	SQUAD_GOALS_CLEAR(Local_4.f_548);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_548, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_548, true, (*&Local_4 + 840)[2], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_548, 2, (*&Local_4 + 840)[2], 2, 0);
	Function_84(Local_4.f_588, 0);
	Function_83(Local_4.f_588, 0);
	Function_86(Local_4.f_588, Local_4.f_392, 1);
	Function_86(Local_4.f_588, Local_4.f_388, 1);
	Function_85(Local_4.f_588);
	SQUAD_GOALS_CLEAR(Local_4.f_588);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_588, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_588, true, (*&Local_4 + 840)[3], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_588, 2, (*&Local_4 + 840)[3], 2, 0);
	Function_84(Local_4.f_628, 0);
	Function_83(Local_4.f_628, 0);
	Function_86(Local_4.f_628, Local_4.f_392, 1);
	Function_86(Local_4.f_628, Local_4.f_388, 1);
	Function_85(Local_4.f_628);
	SQUAD_GOALS_CLEAR(Local_4.f_628);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_628, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_4.f_628, true, (*&Local_4 + 840)[4], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_628, 2, (*&Local_4 + 840)[4], 2, 0);
	Function_84(Local_4.f_392, 0);
	Function_83(Local_4.f_392, 0);
	Function_85(Local_4.f_392);
	SQUAD_GOALS_CLEAR(Local_4.f_392);
	Function_80(Local_4.f_392, -1.0f);
	Function_84(Local_4.f_388, 0);
	Function_83(Local_4.f_388, 0);
	Function_85(Local_4.f_388);
	SQUAD_GOALS_CLEAR(Local_4.f_388);
	Function_80(Local_4.f_388, -1.0f);
	Function_85(Local_4.f_404);
	SQUAD_GOALS_CLEAR(Local_4.f_404);
	Function_95(Local_4.f_404, -1.0f, 1, 0x40c00000, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 332)[02]);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	return;
}

void Function_95(bool bParam0, bool bParam1, bool bParam2, float fParam3, int iParam4) //Position: 0x3BE8 / 15336
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_82(bVar1, &bVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&bVar3, 3.0f, Function_81(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_PRIORITY_SET(bVar1, bParam2);
				TASK_HIDE_AT_COVER(bVar1, bVar2, bParam1, fParam3, iParam4);
			}
			else
			{
				TASK_PRIORITY_SET(bVar1, bParam2);
				TASK_CROUCH(bVar1, bParam1);
			}
		}
		bVar0++;
	}
}

void Function_96() //Position: 0x3C6F / 15471
{
	(*&Local_4 + 296)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse01", 976, -713,5706f, 63,29139f, 3287,237f, 0.0f, -55,07353f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 296)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[02], true);
	ACCESSORIZE_HORSE((*&Local_4 + 296)[02], 3);
	Function_89((*&Local_4 + 296)[02]);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[02], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 296)[02], GET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[02]));
	(*&Local_4 + 296)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse02", 977, -712,9438f, 63,29139f, 3285,145f, 0.0f, 237,2724f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 296)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[12], true);
	ACCESSORIZE_HORSE((*&Local_4 + 296)[12], 3);
	Function_89((*&Local_4 + 296)[12]);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[12], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 296)[12], GET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[12]));
	(*&Local_4 + 296)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse03", 978, -694,2773f, 66,56248f, 3283,696f, 0.0f, 240,668f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 296)[22], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[22], true);
	ACCESSORIZE_HORSE((*&Local_4 + 296)[22], 3);
	Function_89((*&Local_4 + 296)[22]);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[22], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 296)[22], GET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[22]));
	(*&Local_4 + 296)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Horse04", 979, -712,7474f, 63,29139f, 3282,3f, 0.0f, -83,85933f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 296)[32], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 296)[32], true);
	ACCESSORIZE_HORSE((*&Local_4 + 296)[32], 3);
	Function_89((*&Local_4 + 296)[32]);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[32], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 296)[32], GET_ACTOR_MAX_HEALTH((*&Local_4 + 296)[32]));
	return;
}

void Function_97() //Position: 0x3E95 / 16021
{
	(*&Local_4 + 332)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Javier", 626, -719,5327f, 70,22659f, 3292,219f, 0.0f, -39,75541f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 332)[02], false);
	TASK_STAND_STILL((*&Local_4 + 332)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 332)[02], 19);
	TASK_PRIORITY_SET((*&Local_4 + 332)[02], true);
	SET_CRIPPLE_ENABLE((*&Local_4 + 332)[02], 0);
	Function_89((*&Local_4 + 332)[02]);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 332)[02], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 332)[02], GET_ACTOR_MAX_HEALTH((*&Local_4 + 332)[02]));
	return;
}

void Function_98() //Position: 0x3F3A / 16186
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_404 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyDefendTower"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower01", 379, -713,3774f, 74,06067f, 3323,941f, 0.0f, -27,65794f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower02", 380, -724,119f, 78,28957f, 3320,594f, 0.0f, -73,72832f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower03", 381, -717,3718f, 82,55727f, 3311,268f, 0.0f, 268,4623f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower04", 379, -736,0018f, 77,24269f, 3299,243f, 0.0f, -89,88084f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower05", 380, -721,5004f, 69,14187f, 3273,426f, 0.0f, -69,89931f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower06", 381, -697,2059f, 68,30046f, 3287,838f, 0.0f, 158,786f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower07", 379, -687,6024f, 68,29466f, 3290,159f, 0.0f, 165,9265f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower08", 380, -674,8351f, 68,30548f, 3297,781f, 0.0f, 138,4353f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendTower09", 381, -668,0571f, 73,43329f, 3308,297f, 0.0f, 82,2536f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_404);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	return;
}

void Function_99() //Position: 0x429E / 17054
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyDefendBalcony"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony01", 379, -714,8203f, 67,54039f, 3301,587f, 0.0f, 230,1714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony02", 380, -715,1424f, 67,54039f, 3296,219f, 0.0f, 230,1714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony03", 381, -708,2975f, 67,54039f, 3290,197f, 0.0f, 230,1714f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony04", 379, -700,9425f, 65,91504f, 3290,529f, 0.0f, 157,3407f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony05", 380, -686,2225f, 65,91088f, 3294,529f, 0.0f, 165,938f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony06", 381, -678,2986f, 65,91579f, 3298,627f, 0.0f, 138,4353f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony07", 379, -674,4641f, 65,66874f, 3305,915f, 0.0f, 131,1203f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendBalcony08", 380, -674,0112f, 65,91129f, 3312,432f, 0.0f, 130,4875f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_388);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	return;
}

void Function_100() //Position: 0x45B8 / 17848
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_392 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyDefendGround"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround01", 379, -706,9903f, 63,24704f, 3305,189f, 0.0f, 242,6898f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround02", 381, -704,311f, 63,24704f, 3301,26f, 0.0f, 235,4827f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround03", 379, -703,5937f, 63,24704f, 3293,637f, 0.0f, 205,0592f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround04", 380, -699,3199f, 63,24786f, 3304,894f, 0.0f, 235,3002f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround05", 381, -697,0876f, 63,24704f, 3294,739f, 0.0f, 180,1517f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround06", 379, -690,9707f, 63,24707f, 3308,358f, 0.0f, 156,9563f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround07", 380, -690,6097f, 63,24707f, 3293,667f, 0.0f, 172,9853f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround08", 379, -683,9274f, 63,24704f, 3297,696f, 0.0f, 145,4116f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround09", 381, -686,1747f, 63,24704f, 3307,437f, 0.0f, 135,7709f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround10", 380, -678,5554f, 63,24707f, 3316,222f, 0.0f, 81,27085f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround11", 381, -674,1387f, 63,24704f, 3312,525f, 0.0f, 40,30008f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDefendGround12", 380, -684,9686f, 63,24704f, 3316,612f, 0.0f, 58,27613f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_392);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	TASK_PRIORITY_SET(bVar0, true);
	Function_89(bVar0);
	return;
}

bool Function_101() //Position: 0x4A39 / 19001
{
	var uVar0;
	
	Function_133(&Local_1025, 1, 0);
	switch (Local_1025)
	{
		case 0x000003E8:
			Function_129(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_1036);
				}
				Local_1025.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_1025.f_16 = Function_126(Local_4, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_1025.f_16))
				{
				}
				else
				{
					LOG_ERROR("Rebel06_Cutscene03 - Failed to create Rebel06_Cutscene03_cutscene");
				}
			}
			Local_1025 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_1025.f_16), false))
			{
				Function_125(Global_34573, 1, 1);
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					Function_125(bLocal_1036, 1, 1);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1812[06]), 1, true, 1);
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1036, *(&Local_4 + 1812[26]), 1, true, 1);
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(5 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(9 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(13 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 712)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 712)[2]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 712)[2], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 712)[2]);
				Function_122(&Local_1025 + 4);
				Local_1025 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Local_1025 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_53(&Local_1025 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_203(&Local_1025 + 4);
					iLocal_1185 = 15;
					iLocal_1186 = 15;
					Local_1025 = 1004;
				}
			}
			else
			{
				Function_203(&Local_1025 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_121() && Function_120())
			{
				Function_203(&Local_1025 + 4);
				Local_1025 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_125(Global_34573, 0, 1);
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					Function_125(bLocal_1036, 0, 1);
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_102(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_1025.f_16))
				{
					DESTROY_OBJECT(Local_1025.f_16);
				}
				Local_1025 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1812[16]), 1, true, 1);
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1036, *(&Local_4 + 1812[36]), 1, true, 1);
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(17 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(21 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1090, *(&Local_4 + 1812[(25 + bLocal_1103)6]), 1, true, 1);
						}
					}
					bLocal_1103++;
				}
				Local_1025 = 1104;
			}
			break;
	}
	return 0;
}

void Function_102(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x4F8F / 20367
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_44();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, false);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, true);
				}
			}
			if (Function_18())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_105(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_104();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_103(uParam9);
}

void Function_103(bool bParam0) //Position: 0x507F / 20607
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_104() //Position: 0x5124 / 20772
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_105(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5139 / 20793
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
	Function_119(iParam0, TO_FLOAT(bParam1), 1);
	Function_118(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_106(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_106(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x5359 / 21337
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_117(390))), 32);
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
					bVar19 = (Function_116(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_116(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_114(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_111(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_109(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_108(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_107(), &Var9);
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

var Function_107() //Position: 0x5986 / 22918
{
	int iVar0;
	
	return iVar0;
}

var Function_108(int iParam0) //Position: 0x598E / 22926
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_109(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x599F / 22943
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_110(char* cParam0, char* cParam1) //Position: 0x5A94 / 23188
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_111(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5AAD / 23213
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_113(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_112(Function_113(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_112(int iParam0, int iParam1) //Position: 0x5B12 / 23314
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_113(int iParam0, bool bParam1) //Position: 0x5B24 / 23332
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_114(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5B36 / 23350
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
	if (((Function_115(iParam0) != 19 || Function_115(iParam0) != 17) || Function_115(iParam0) != 10) || Function_115(iParam0) != 9)
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

int Function_115(int iParam0) //Position: 0x5C66 / 23654
{
	return Global_35278[iParam020].f_48;
}

float Function_116(int iParam0) //Position: 0x5C75 / 23669
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_117(int iParam0) //Position: 0x5CAE / 23726
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_118(int iParam0) //Position: 0x5CEB / 23787
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

int Function_119(int iParam0, float fParam1, bool bParam2) //Position: 0x5E85 / 24197
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

int Function_120() //Position: 0x609F / 24735
{
	switch (iLocal_1186)
	{
		case 0x0000000F:
			if (Function_53(&Local_1025 + 4) < 0.0f)
			{
				TASK_CLEAR(Global_34573);
				TASK_PRIORITY_SET(Global_34573, true);
				TASK_GO_TO_COORD_AND_STAY(StackVal, Global_34573, &Local_4 + 1812[16], 2);
				if (IS_ACTOR_VALID(bLocal_1036))
				{
					TASK_CLEAR(bLocal_1036);
					TASK_PRIORITY_SET(bLocal_1036, true);
					TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_1036, &Local_4 + 1812[36], 2);
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TASK_CLEAR(bLocal_1090);
							TASK_PRIORITY_SET(bLocal_1090, true);
							TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_1090, &Local_4 + 1812[(17 + bLocal_1103)6], 2);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TASK_CLEAR(bLocal_1090);
							TASK_PRIORITY_SET(bLocal_1090, true);
							TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_1090, &Local_4 + 1812[(21 + bLocal_1103)6], 2);
						}
					}
					bLocal_1103++;
				}
				bLocal_1103 = false;
				while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
				{
					bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
					if (IS_ACTOR_VALID(bLocal_1090))
					{
						if (IS_ACTOR_ALIVE(bLocal_1090))
						{
							TASK_CLEAR(bLocal_1090);
							TASK_PRIORITY_SET(bLocal_1090, true);
							TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_1090, &Local_4 + 1812[(25 + bLocal_1103)6], 2);
						}
					}
					bLocal_1103++;
				}
				iLocal_1186 = 106;
			}
			break;
		
		case 0x00000019:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_53(&Local_1025 + 4) < 100.0f)
			{
				iLocal_1186 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_53(&Local_1025 + 4) < 11,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_121() //Position: 0x6383 / 25475
{
	switch (iLocal_1185)
	{
		case 0x0000000F:
			if (Function_53(&Local_1025 + 4) < 0.0f)
			{
				Function_61("TNT Wagon crashes into the front gates blowing them apart. This will NOT be a mocapped cutscene and will not have dialogue.", 8.0f, 1, 0, 2, 1, 0);
				iLocal_1185 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_53(&Local_1025 + 4) < 9.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_122(int iParam0) //Position: 0x6454 / 25684
{
	if (!Function_55(iParam0))
	{
		Function_123(iParam0, 0.0f);
	}
	return;
}

void Function_123(var uParam0, float fParam1) //Position: 0x6469 / 25705
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_124(uParam0, 1);
	Function_9(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_124(var uParam0, int iParam1) //Position: 0x648A / 25738
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_125(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6499 / 25753
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, false);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, true);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

var Function_126(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6533 / 25907
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_107(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Rebel06_Cutscene03", 1, 1);
	}
	Function_127(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "default");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_127(int iParam0) //Position: 0x65B8 / 26040
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_128(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1000.0f, 0);
	return;
}

void Function_128(bool bParam0) //Position: 0x65E1 / 26081
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -709,2788f, 65,98988f, 3331,371f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0,051644f, -0,796143f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_129(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x6644 / 26180
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_104();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_44();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_18())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_75(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_107(), 2, Function_75(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_105(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_132()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_132()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_131(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_130(0x4000000);
	}
	if (Function_131(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_130(0x8000000);
	}
}

void Function_130(int iParam0) //Position: 0x68ED / 26861
{
	int iVar0;
	
	if (Function_31(iParam0, 1) && Function_31(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_131(int iParam0) //Position: 0x6921 / 26913
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_132() //Position: 0x693D / 26941
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_133(var uParam0, bool bParam1, bool bParam2) //Position: 0x69BC / 27068
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_62478 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_134(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_105(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			if (((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_134(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_105(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_134(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x6B08 / 27400
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

void Function_135() //Position: 0x6B31 / 27441
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 364)[02]))
	{
		Function_136();
	}
	if (IS_ACTOR_VALID(bLocal_1036))
	{
		TASK_CLEAR(bLocal_1036);
		TASK_PRIORITY_SET(bLocal_1036, true);
		TASK_STAND_STILL(bLocal_1036, -1.0f, 0, 0);
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_508))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_508, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	return;
}

void Function_136() //Position: 0x6CB3 / 27827
{
	DESTROY_ACTOR((*&Local_4 + 364)[02]);
	Function_137(uLocal_1108);
	return;
}

void Function_137(bool bParam0) //Position: 0x6CCA / 27850
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_138(int iParam0) //Position: 0x6D0F / 27919
{
	if (!Function_139(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_17(1, 0, 1);
		}
	}
	return;
}

bool Function_139(int iParam0) //Position: 0x6D2A / 27946
{
	return iParam0->f_20;
}

bool Function_140(bool bParam0) //Position: 0x6D34 / 27956
{
	if (!Function_23(bParam0))
	{
		return 1;
	}
	return Function_19(&(Global_29008[bParam0]), 4);
}

var Function_141(vector3 vParam0, var uParam3, var uParam4, bool bParam5) //Position: 0x6D50 / 27984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && uParam3))
				{
					iVar1 = iVar0;
					if (!(StackVal != 6 && uParam4))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_142() //Position: 0x6DE0 / 28128
{
	Function_145(8, 1);
	Function_130(15);
	Function_143(9);
	return;
}

void Function_143(int iParam0) //Position: 0x6DF6 / 28150
{
	Function_144(&Global_28842, iParam0);
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0x6E04 / 28164
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_145(int iParam0, bool bParam1) //Position: 0x6E27 / 28199
{
	if (iParam0 == 17)
	{
		if (bParam1)
		{
		}
	}
	if (!Function_146(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_26998[iParam018].f_36 = 0;
	}
	else
	{
		Global_26998[iParam018].f_40 = 0;
	}
	return;
}

bool Function_146(int iParam0) //Position: 0x6E62 / 28258
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_147(bool bParam0) //Position: 0x6E78 / 28280
{
	Function_148(0, 0x40400000);
	Function_37();
	Function_36();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_148(bool bParam0, float fParam1) //Position: 0x6EAC / 28332
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_150();
	Function_149();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_149() //Position: 0x6FAA / 28586
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_150() //Position: 0x6FDC / 28636
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

void Function_151() //Position: 0x70D9 / 28889
{
	return;
}

int Function_152(bool bParam0, char* cParam1, var uParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x70DF / 28895
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_153(bVar1, cParam1, uParam2, iParam3, iParam4, fParam5, iParam6, bParam7, bParam8))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool Function_153(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x713B / 28987
{
	if (*uParam3 == 1)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_154(bParam0, cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 0);
	}
	else if (bParam7)
	{
	}
	if (*uParam3 == 1)
	{
		return 1;
	}
	if (bParam8)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			if (!GET_ACTORS_HORSE(bParam0) != GET_MOUNT(bParam0))
			{
				SET_ACTORS_HORSE(bParam0, GET_MOUNT(bParam0));
			}
		}
		if (IS_ACTOR_VALID(GET_ACTORS_HORSE(bParam0)))
		{
			Function_154(GET_ACTORS_HORSE(bParam0), cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 1);
		}
		else if (bParam7)
		{
		}
	}
	return *uParam3;
}

void Function_154(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x71CF / 29135
{
	struct<8> Var0;
	struct<8> Var8;
	var uVar16[10];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	var uVar37[10];
	int iVar48;
	int iVar49;
	struct<8> Var50;
	
	if ((uParam6 && GET_WEAPON_IN_HAND(Global_34573) != 21) && GET_LAST_ATTACKER(bParam0) != Global_34573)
	{
		*uParam3 = 1;
		if (!bParam7)
		{
			Function_155(cParam1);
		}
		else
		{
			strcpy(&Var0, cParam1, 32);
			stradd(&Var0, "_horse", 32);
			Function_155(&Var0);
		}
		return;
	}
	if (GET_LAST_ATTACK_TARGET(Global_34573) == bParam0)
	{
		if ((uParam6 && GET_WEAPON_IN_HAND(Global_34573) != 21) || IS_ACTOR_DEAD(bParam0))
		{
			*uParam3 = 1;
			if (!bParam7)
			{
				Function_155(cParam1);
			}
			else
			{
				strcpy(&Var8, cParam1, 32);
				stradd(&Var8, "_horse", 32);
				Function_155(&Var8);
			}
			return;
		}
		iVar27 = 0;
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= 10)
		{
			if (((*uParam2)[iVar28] + fParam5) <= GET_CURRENT_GAME_TIME() && (*uParam2)[iVar28] < 0.0f)
			{
				uVar16[iVar27] = (*uParam2)[iVar28];
				iVar27++;
			}
			(*uParam2)[iVar28] = -1.0f;
			iVar28++;
		}
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= iVar27)
		{
			(*uParam2)[iVar28] = uVar16[iVar28];
			iVar28++;
		}
		(*uParam2)[iVar27] = GET_CURRENT_GAME_TIME();
		iVar27++;
		CLEAR_LAST_ATTACK(Global_34573);
		if (iVar27 <= iParam4 && (*uParam2)[(iVar27 - 1)] > ((*uParam2)[0] + fParam5))
		{
			*uParam3 = 1;
			if (!bParam7)
			{
				Function_155(cParam1);
			}
			else
			{
				strcpy(&Var29, cParam1, 32);
				stradd(&Var29, "_horse", 32);
				Function_155(&Var29);
			}
		}
	}
	else if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (GET_LAST_ATTACK_TARGET(GET_MOUNT(Global_34573)) == bParam0)
		{
			iVar48 = 0;
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= 10)
			{
				if (((*uParam2)[iVar49] + fParam5) <= GET_CURRENT_GAME_TIME() && (*uParam2)[iVar49] < 0.0f)
				{
					uVar37[iVar48] = (*uParam2)[iVar49];
					iVar48++;
				}
				(*uParam2)[iVar49] = -1.0f;
				iVar49++;
			}
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= iVar48)
			{
				(*uParam2)[iVar49] = uVar37[iVar49];
				iVar49++;
			}
			(*uParam2)[iVar48] = GET_CURRENT_GAME_TIME();
			iVar48++;
			CLEAR_LAST_ATTACK(GET_MOUNT(Global_34573));
			if (iVar48 <= iParam4 && (*uParam2)[(iVar48 - 1)] > ((*uParam2)[0] + fParam5))
			{
				*uParam3 = 1;
				if (!bParam7)
				{
					Function_155(cParam1);
				}
				else
				{
					strcpy(&Var50, cParam1, 32);
					stradd(&Var50, "_horse", 32);
					Function_155(&Var50);
				}
			}
		}
	}
}

void Function_155(bool bParam0) //Position: 0x7422 / 29730
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_156() //Position: 0x748C / 29836
{
	switch (iLocal_1033)
	{
		case 0x00000006:
			Function_178(&Local_995, 1);
			iLocal_994 = CREATE_LAYOUT(Function_107());
			Function_177();
			iLocal_1033 = 7;
			break;
		
		case 0x00000007:
			if (Function_167())
			{
				Function_165();
				Function_164(iLocal_994);
				iLocal_1033 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_1035 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (IS_ACTOR_VALID(bLocal_1036))
			{
				RESET_ACTOR_GAITS(bLocal_1036, 0);
				SET_CRIPPLE_ENABLE(bLocal_1036, 0);
				SET_ACTOR_FACTION(bLocal_1036, 20);
				TASK_PRIORITY_SET(bLocal_1036, true);
				TASK_STAND_STILL(bLocal_1036, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_1036, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_1036, 50.0f);
				SET_ACTOR_HEALTH(bLocal_1036, GET_ACTOR_MAX_HEALTH(bLocal_1036));
			}
			if (IS_ACTOR_VALID(bLocal_1037))
			{
				RESET_ACTOR_GAITS(bLocal_1037, 0);
				TASK_PRIORITY_SET(bLocal_1037, true);
				TASK_STAND_STILL(bLocal_1037, -1.0f, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_1037, 50.0f);
				SET_ACTOR_HEALTH(bLocal_1037, GET_ACTOR_MAX_HEALTH(bLocal_1037));
			}
			Function_163();
			Function_122(&iLocal_1038);
			Function_122(&iLocal_1041);
			Function_122(&iLocal_1044);
			iLocal_1032 = 2;
			iLocal_1033 = 0;
			switch (iLocal_1032)
			{
				case 0x00000002:
					Function_157();
					break;
			}
			break;
	}
	return;
}

void Function_157() //Position: 0x75B1 / 30129
{
	if (IS_ACTOR_ALIVE((*&Local_4 + 364)[02]))
	{
		Function_136();
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 344)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 344)[02]);
	}
	if (IS_ACTOR_ALIVE((*&Local_4 + 344)[12]))
	{
		DESTROY_ACTOR((*&Local_4 + 344)[12]);
	}
	if (SQUAD_IS_VALID(Local_4.f_508))
	{
		Function_162(&Local_4 + 508);
		DESTROY_OBJECT(Local_4.f_508);
	}
	if (!SQUAD_IS_VALID(Local_4.f_548))
	{
		Function_161();
	}
	if (!SQUAD_IS_VALID(Local_4.f_588))
	{
		Function_160();
	}
	if (!SQUAD_IS_VALID(Local_4.f_628))
	{
		Function_159();
	}
	if (SQUAD_IS_VALID(Local_4.f_452))
	{
		Function_158(&Local_4 + 452);
		DESTROY_OBJECT(Local_4.f_452);
	}
	if (SQUAD_IS_VALID(Local_4.f_408))
	{
		Function_158(&Local_4 + 408);
		DESTROY_OBJECT(Local_4.f_408);
	}
	if (IS_OBJECT_VALID(Local_4.f_3924))
	{
		DESTROY_OBJECT(Local_4.f_3924);
	}
	if (IS_OBJECT_VALID(Local_4.f_3928))
	{
		DESTROY_OBJECT(Local_4.f_3928);
	}
	if (IS_OBJECT_VALID(Local_4.f_3932))
	{
		DESTROY_OBJECT(Local_4.f_3932);
	}
	if (IS_OBJECT_VALID(Local_4.f_3936))
	{
		DESTROY_OBJECT(Local_4.f_3936);
	}
	if (IS_OBJECT_VALID(Local_4.f_3940))
	{
		DESTROY_OBJECT(Local_4.f_3940);
	}
	if (IS_OBJECT_VALID(Local_4.f_3944))
	{
		DESTROY_OBJECT(Local_4.f_3944);
	}
	if (IS_OBJECT_VALID(Local_4.f_3916))
	{
		DESTROY_OBJECT(Local_4.f_3916);
	}
	if (IS_OBJECT_VALID(Local_4.f_3920))
	{
		DESTROY_OBJECT(Local_4.f_3920);
	}
	if (IS_OBJECT_VALID(bLocal_1087))
	{
		Function_49(bLocal_1087);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1107))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1107);
	}
	if (IS_BLIP_VALID(bLocal_1106))
	{
		REMOVE_BLIP(bLocal_1106);
	}
	HUD_TIMER_DISPLAY(0);
	iLocal_1114 = 0;
	SET_GAME_CAMERA_VEHICLE_MODE(2);
	if (IS_ACTOR_VALID(bLocal_1036))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_1036);
	}
	if (IS_ACTOR_VALID(bLocal_1036))
	{
		TASK_CLEAR(bLocal_1036);
		TASK_PRIORITY_SET(bLocal_1036, true);
		TASK_STAND_STILL(bLocal_1036, -1.0f, 0, 0);
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_508))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_508, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_548))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_548, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_588))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_588, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	bLocal_1103 = false;
	while (bLocal_1103 <= SQUAD_GET_SIZE(Local_4.f_628))
	{
		bLocal_1090 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_628, bLocal_1103);
		if (IS_ACTOR_VALID(bLocal_1090))
		{
			if (IS_ACTOR_ALIVE(bLocal_1090))
			{
				TASK_CLEAR(bLocal_1090);
				TASK_PRIORITY_SET(bLocal_1090, true);
				TASK_STAND_STILL(bLocal_1090, -1.0f, 0, 0);
			}
		}
		bLocal_1103++;
	}
	return;
}

void Function_158(var uParam0) //Position: 0x78C3 / 30915
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_159() //Position: 0x790A / 30986
{
	Local_4.f_628 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RebelInfantryRight"));
	(*&Local_4 + 592)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryRight01", 531, -1530,567f, 15,22896f, 3906,316f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 592)[02], Local_4.f_628);
	TASK_STAND_STILL((*&Local_4 + 592)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 592)[02], 20);
	TASK_PRIORITY_SET((*&Local_4 + 592)[02], true);
	(*&Local_4 + 592)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryRight02", 529, -1533,129f, 14,97574f, 3903,239f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 592)[12], Local_4.f_628);
	TASK_STAND_STILL((*&Local_4 + 592)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 592)[12], 20);
	TASK_PRIORITY_SET((*&Local_4 + 592)[12], true);
	(*&Local_4 + 592)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryRight03", 530, -1529,031f, 15,07364f, 3905,034f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 592)[22], Local_4.f_628);
	TASK_STAND_STILL((*&Local_4 + 592)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 592)[22], 20);
	TASK_PRIORITY_SET((*&Local_4 + 592)[22], true);
	(*&Local_4 + 592)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryRight04", 531, -1531,594f, 14,79844f, 3901,957f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 592)[32], Local_4.f_628);
	TASK_STAND_STILL((*&Local_4 + 592)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 592)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 592)[32], true);
	return;
}

void Function_160() //Position: 0x7B22 / 31522
{
	Local_4.f_588 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RebelInfantryMiddle"));
	(*&Local_4 + 552)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryMiddle01", 530, -1548,118f, 15,06508f, 3924,843f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[02], Local_4.f_588);
	TASK_STAND_STILL((*&Local_4 + 552)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 552)[02], 20);
	TASK_PRIORITY_SET((*&Local_4 + 552)[02], true);
	(*&Local_4 + 552)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryMiddle02", 531, -1551,913f, 15,04983f, 3926,108f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[12], Local_4.f_588);
	TASK_STAND_STILL((*&Local_4 + 552)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 552)[12], 20);
	TASK_PRIORITY_SET((*&Local_4 + 552)[12], true);
	(*&Local_4 + 552)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryMiddle03", 529, -1532,102f, 15,38638f, 3907,598f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 552)[22], Local_4.f_588);
	TASK_STAND_STILL((*&Local_4 + 552)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 552)[22], 20);
	TASK_PRIORITY_SET((*&Local_4 + 552)[22], true);
	(*&Local_4 + 552)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryMiddle04", 530, -1534,664f, 15,17978f, 3904,522f, 178,9688f, 50,19756f, 178,7214f);
	SQUAD_JOIN((*&Local_4 + 552)[32], Local_4.f_588);
	TASK_STAND_STILL((*&Local_4 + 552)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 552)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 552)[32], true);
	return;
}

void Function_161() //Position: 0x7D2F / 32047
{
	Local_4.f_548 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RebelInfantryLeft"));
	(*&Local_4 + 512)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryLeft01", 529, -1546,853f, 15,1273f, 3928,637f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[02], Local_4.f_548);
	TASK_STAND_STILL((*&Local_4 + 512)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 512)[02], 20);
	TASK_PRIORITY_SET((*&Local_4 + 512)[02], true);
	(*&Local_4 + 512)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryLeft02", 530, -1550,648f, 15,13039f, 3929,903f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[12], Local_4.f_548);
	TASK_STAND_STILL((*&Local_4 + 512)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 512)[12], 20);
	TASK_PRIORITY_SET((*&Local_4 + 512)[12], true);
	(*&Local_4 + 512)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryLeft03", 531, -1547,485f, 15,08002f, 3926,74f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[22], Local_4.f_548);
	TASK_STAND_STILL((*&Local_4 + 512)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 512)[22], 20);
	TASK_PRIORITY_SET((*&Local_4 + 512)[22], true);
	(*&Local_4 + 512)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelInfantryLeft04", 529, -1551,28f, 15,11097f, 3928,005f, 0.0f, 198,4382f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[32], Local_4.f_548);
	TASK_STAND_STILL((*&Local_4 + 512)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 512)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 512)[32], true);
	return;
}

void Function_162(var uParam0) //Position: 0x7F22 / 32546
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_163() //Position: 0x7FA1 / 32673
{
	Function_22(&(Global_29008[Global_30707[1]]), 384);
	if (!ACTOR_HAS_WEAPON(Global_34573, 13))
	{
		SET_WEAPONENUM_LOCKED(13, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 13, 0.0f, 0, 1);
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 0) > 40.0f)
		{
			_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 9, 40.0f, 0);
		}
	}
	return;
}

void Function_164(bool bParam0) //Position: 0x7FF5 / 32757
{
	bLocal_1211 = CREATE_CAMERA_IN_LAYOUT(bParam0, "njobCamera", 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_1211, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_1211);
	return;
}

void Function_165() //Position: 0x8029 / 32809
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	
	Function_166(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Rebel06_layout");
	Local_4.f_748 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 712)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -1508,006f, 21,54251f, 3909,939f, 0.0f, 350.0f, 0.0f, 100.0f, 20.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[0]);
	(*&Local_4 + 712)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -921,25f, 75,5467f, 3456.0f, 0.0f, 0.0f, 0.0f, 30.0f, 10.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[1]);
	(*&Local_4 + 712)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[2]);
	(*&Local_4 + 712)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[3]);
	(*&Local_4 + 712)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05AVol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[4]);
	(*&Local_4 + 712)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05BVol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[5]);
	(*&Local_4 + 712)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene06AVol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[6]);
	(*&Local_4 + 712)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene06BVol", 2, -697,0632f, 65,03212f, 3322,46f, 0.0f, -20,80933f, 0.0f, 5.0f, 4.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_748, (*&Local_4 + 712)[7]);
	Local_4.f_776 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "PreInitVol_set");
	(*&Local_4 + 752)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit02Vol", 2, -1103,451f, 5,594915f, 4592,041f, 0.0f, 343,6179f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 752)[0]);
	(*&Local_4 + 752)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit03Vol", 2, -760,5138f, 60.0f, 3409,328f, 0.0f, 495.0f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 752)[1]);
	(*&Local_4 + 752)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit04Vol", 2, -760,5138f, 60.0f, 3409,328f, 0.0f, 495.0f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 752)[2]);
	(*&Local_4 + 752)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit05Vol", 2, -760,5138f, 60.0f, 3409,328f, 0.0f, 495.0f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 752)[3]);
	(*&Local_4 + 752)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit06Vol", 2, -760,5138f, 60.0f, 3409,328f, 0.0f, 495.0f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 752)[4]);
	Local_4.f_788 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ActionVol_set");
	(*&Local_4 + 780)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JavierGap01Vol", 2, -716,9584f, 70,93213f, 3296,374f, 0.0f, 230.0f, 0.0f, 1,5f, 1.0f, 1,5f);
	ADD_TO_VOLUME_SET(Local_4.f_788, (*&Local_4 + 780)[0]);
	Local_4.f_836 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TriggerVol_set");
	(*&Local_4 + 792)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BlowFrontGateVol", 2, -696,6031f, 66,92172f, 3321,03f, 0.0f, -20,80933f, 0.0f, 8,16f, 8.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[0]);
	(*&Local_4 + 792)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CanJumpOutVol01", 2, -740,3983f, 75,5467f, 3408,635f, 0.0f, 47,31847f, 0.0f, 60.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[1]);
	(*&Local_4 + 792)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CanJumpOutVol02", 2, -709,7588f, 75,5467f, 3354,633f, 0.0f, 69,18909f, 0.0f, 85.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[2]);
	(*&Local_4 + 792)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JailCellVol", 2, -723,8428f, 65,22981f, 3295,705f, 0.0f, -40,10519f, 0.0f, 3,555495f, 3,768915f, 6,680694f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[3]);
	(*&Local_4 + 792)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OnCourseVol01", 2, -886.0f, 75,5467f, 3460.0f, 0.0f, 0.0f, 0.0f, 100.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[4]);
	(*&Local_4 + 792)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OnCourseVol02", 2, -798,4086f, 75,5467f, 3443,092f, 0.0f, 21,66448f, 0.0f, 100.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[5]);
	(*&Local_4 + 792)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OnCourseVol03", 2, -740,3983f, 75,5467f, 3408,635f, 0.0f, 47,31847f, 0.0f, 60.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[6]);
	(*&Local_4 + 792)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OnCourseVol04", 2, -709,7588f, 75,5467f, 3354,633f, 0.0f, 69,18909f, 0.0f, 85.0f, 30.0f, 48.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[7]);
	(*&Local_4 + 792)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StorageRoomVol", 2, -718,9606f, 72,51944f, 3291,624f, 0.0f, -40,19087f, 0.0f, 4,65f, 4,65f, 6,5f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[8]);
	(*&Local_4 + 792)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SwitchPathVol", 2, -1103,451f, 5,594915f, 4592,041f, 0.0f, 343,6179f, 0.0f, 256.0f, 100.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 792)[9]);
	Local_4.f_884 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BattleVol_set");
	(*&Local_4 + 840)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BalconyVol", 2, -712,5654f, 75,27669f, 3292,581f, 0.0f, -40.0f, 0.0f, 4,25f, 19,5f, 25,5f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[0]);
	(*&Local_4 + 840)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FrontGateVol", 2, -695,181f, 66,92172f, 3317,289f, 0.0f, -20,80933f, 0.0f, 8,16f, 8.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[1]);
	(*&Local_4 + 840)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GroundVol01A", 2, -701,5942f, 62,76959f, 3299,874f, 0.0f, -20,80933f, 0.0f, 12.0f, 5,5f, 28.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[2]);
	(*&Local_4 + 840)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GroundVol01B", 2, -690,2017f, 62,76959f, 3303,67f, 0.0f, -20,80933f, 0.0f, 12.0f, 5,5f, 29.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[3]);
	(*&Local_4 + 840)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GroundVol01C", 2, -679,5856f, 62,76959f, 3309,509f, 0.0f, -20,80933f, 0.0f, 12.0f, 5,5f, 31.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[4]);
	(*&Local_4 + 840)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GroundVol02", 2, -693,3953f, 62,76959f, 3312,081f, 0.0f, -20,80933f, 0.0f, 36.0f, 5,5f, 11.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[5]);
	(*&Local_4 + 840)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlateauVol01A", 2, -714,6594f, 72,52669f, 3317,917f, 0.0f, -40.0f, 0.0f, 10.0f, 25.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[6]);
	(*&Local_4 + 840)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlateauVol01B", 2, -729,7698f, 72,52669f, 3303,021f, 0.0f, -40.0f, 0.0f, 12,5f, 25.0f, 9,5f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[7]);
	(*&Local_4 + 840)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlateauVol02", 2, -721,4265f, 72,52669f, 3310,504f, 0.0f, -40.0f, 0.0f, 9,9f, 25.0f, 8,75f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[8]);
	(*&Local_4 + 840)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SideGateVol", 2, -721,0079f, 66,92172f, 3288,455f, 0.0f, 50.0f, 0.0f, 8,16f, 8.0f, 16.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 840)[9]);
	*(&Local_4 + 888[06]) = { -1508,006f, 17,41162f, 3909,939f };
	*(&Local_4 + 888[06] + 12) = { 0.0f, 350.0f, 0.0f };
	*(&Local_4 + 888[16]) = { -1546,252f, 15,05884f, 3914,832f };
	*(&Local_4 + 888[16] + 12) = { 0.0f, 174,8856f, 0.0f };
	*(&Local_4 + 888[26]) = { -1507,745f, 17,41162f, 3908,462f };
	*(&Local_4 + 888[26] + 12) = { 0.0f, 530.0f, 0.0f };
	*(&Local_4 + 888[36]) = { -1507,745f, 17,41162f, 3908,462f };
	*(&Local_4 + 888[36] + 12) = { 0.0f, 530.0f, 0.0f };
	*(&Local_4 + 888[46]) = { -1521,095f, 14,07061f, 3895,812f };
	*(&Local_4 + 888[46] + 12) = { 0.0f, 129,8255f, 0.0f };
	*(&Local_4 + 1012[06]) = { -1131,417f, 74,04391f, 3492,225f };
	*(&Local_4 + 1012[06] + 12) = { 0.0f, 310,1449f, 0.0f };
	*(&Local_4 + 1012[16]) = { -1076,225f, 74,95425f, 3488,225f };
	*(&Local_4 + 1012[16] + 12) = { 0.0f, 270,3612f, 0.0f };
	*(&Local_4 + 1012[26]) = { -1052,158f, 73,16695f, 3487,862f };
	*(&Local_4 + 1012[26] + 12) = { 0.0f, 271,1025f, 0.0f };
	*(&Local_4 + 1012[36]) = { -1100,343f, 74,0112f, 3487,682f };
	*(&Local_4 + 1012[36] + 12) = { 0.0f, 629,5395f, 0.0f };
	*(&Local_4 + 1012[46]) = { -1027,79f, 72,93509f, 3485,324f };
	*(&Local_4 + 1012[46] + 12) = { 0.0f, -97,02007f, 0.0f };
	*(&Local_4 + 1012[56]) = { -1028,018f, 72,936f, 3487,815f };
	*(&Local_4 + 1012[56] + 12) = { 0.0f, -97,02007f, 0.0f };
	*(&Local_4 + 1012[66]) = { -1028,245f, 72,93597f, 3490,305f };
	*(&Local_4 + 1012[66] + 12) = { 0.0f, -97,02007f, 0.0f };
	*(&Local_4 + 1012[76]) = { -1116,582f, 74,13136f, 3485,417f };
	*(&Local_4 + 1012[76] + 12) = { 0.0f, -89,18839f, 0.0f };
	*(&Local_4 + 1012[86]) = { -1116,443f, 74,1596f, 3487,91f };
	*(&Local_4 + 1012[86] + 12) = { 0.0f, -89,18839f, 0.0f };
	*(&Local_4 + 1012[96]) = { -1116,305f, 74,13409f, 3490,404f };
	*(&Local_4 + 1012[96] + 12) = { 0.0f, -89,18839f, 0.0f };
	*(&Local_4 + 1256[06]) = { -921,975f, 71,40331f, 3455,315f };
	*(&Local_4 + 1256[06] + 12) = { -0,5842317f, 279,0712f, 0,2852252f };
	*(&Local_4 + 1256[16]) = { -923,053f, 71,27844f, 3455,466f };
	*(&Local_4 + 1256[16] + 12) = { 0.0f, -133.0f, 0.0f };
	*(&Local_4 + 1256[26]) = { -920.0f, 71,27844f, 3455.0f };
	*(&Local_4 + 1256[26] + 12) = { -0,5842317f, 99,07121f, -0,2852252f };
	*(&Local_4 + 1256[36]) = { -920.0f, 71,27844f, 3455.0f };
	*(&Local_4 + 1256[36] + 12) = { -0,5842317f, 99,07121f, -0,2852252f };
	*(&Local_4 + 1256[46]) = { -924.0f, 71,28894f, 3457.0f };
	*(&Local_4 + 1256[46] + 12) = { 0.0f, -88.0f, 0.0f };
	*(&Local_4 + 1256[56]) = { -720,4138f, 63,24707f, 3279,997f };
	*(&Local_4 + 1256[56] + 12) = { 0.0f, 177,7843f, 0.0f };
	*(&Local_4 + 1256[66]) = { -724,0776f, 63,24707f, 3279,803f };
	*(&Local_4 + 1256[66] + 12) = { 0.0f, 201,4793f, 0.0f };
	*(&Local_4 + 1256[76]) = { -727,9226f, 63,24707f, 3281,4f };
	*(&Local_4 + 1256[76] + 12) = { 0.0f, 226,0656f, 0.0f };
	*(&Local_4 + 1256[86]) = { -730,6989f, 63,24707f, 3284,454f };
	*(&Local_4 + 1256[86] + 12) = { 0.0f, 248,3983f, 0.0f };
	*(&Local_4 + 1256[96]) = { -731,1497f, 63,24707f, 3288,01f };
	*(&Local_4 + 1256[96] + 12) = { 0.0f, -89,17825f, 0.0f };
	*(&Local_4 + 1256[106]) = { -730,7389f, 63,24707f, 3291,161f };
	*(&Local_4 + 1256[106] + 12) = { 0.0f, 285,9435f, 0.0f };
	*(&Local_4 + 1256[116]) = { -911,4917f, 72,75916f, 3448.0f };
	*(&Local_4 + 1256[116] + 12) = { 0.0f, 125,2111f, 0.0f };
	*(&Local_4 + 1256[126]) = { -914,0056f, 73,26224f, 3446,687f };
	*(&Local_4 + 1256[126] + 12) = { 0.0f, 135,5669f, 0.0f };
	*(&Local_4 + 1256[136]) = { -916.0f, 72,75571f, 3448.0f };
	*(&Local_4 + 1256[136] + 12) = { 0.0f, 139,1212f, 0.0f };
	*(&Local_4 + 1256[146]) = { -917,1391f, 73,08815f, 3446,393f };
	*(&Local_4 + 1256[146] + 12) = { 0.0f, 147,7251f, 0.0f };
	*(&Local_4 + 1256[156]) = { -920.0f, 73,1091f, 3445,33f };
	*(&Local_4 + 1256[156] + 12) = { 0.0f, 163,0273f, 0.0f };
	*(&Local_4 + 1256[166]) = { -921,5554f, 72,83141f, 3447,396f };
	*(&Local_4 + 1256[166] + 12) = { 0.0f, 168,9994f, 0.0f };
	*(&Local_4 + 1256[176]) = { -923,4601f, 73,17117f, 3444,852f };
	*(&Local_4 + 1256[176] + 12) = { 0.0f, 180,6514f, 0.0f };
	*(&Local_4 + 1256[186]) = { -924,563f, 72,95768f, 3447,082f };
	*(&Local_4 + 1256[186] + 12) = { 0.0f, 187,705f, 0.0f };
	*(&Local_4 + 1256[196]) = { -927,0077f, 73,28357f, 3445,574f };
	*(&Local_4 + 1256[196] + 12) = { 0.0f, 198,9323f, 0.0f };
	*(&Local_4 + 1256[206]) = { -928.0f, 73,28612f, 3447,536f };
	*(&Local_4 + 1256[206] + 12) = { 0.0f, 207,8075f, 0.0f };
	*(&Local_4 + 1256[216]) = { -930,0178f, 73,32722f, 3445,163f };
	*(&Local_4 + 1256[216] + 12) = { 0.0f, 210,7999f, 0.0f };
	*(&Local_4 + 1256[226]) = { -931,0889f, 73,40447f, 3448.0f };
	*(&Local_4 + 1256[226] + 12) = { 0.0f, 224,2979f, 0.0f };
	*(&Local_4 + 1812[06]) = { -699,8231f, 62,99754f, 3325,222f };
	*(&Local_4 + 1812[06] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[16]) = { -698,2378f, 63,24583f, 3322,032f };
	*(&Local_4 + 1812[16] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[26]) = { -698,091f, 62,99754f, 3326,222f };
	*(&Local_4 + 1812[26] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[36]) = { -695,8885f, 63,24583f, 3322,887f };
	*(&Local_4 + 1812[36] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[46]) = { -697,9064f, 63,24583f, 3324,813f };
	*(&Local_4 + 1812[46] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[56]) = { -704,479f, 63,08564f, 3328,273f };
	*(&Local_4 + 1812[56] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[66]) = { -703,6212f, 62,99926f, 3328,787f };
	*(&Local_4 + 1812[66] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[76]) = { -702,7632f, 62,99926f, 3329,301f };
	*(&Local_4 + 1812[76] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[86]) = { -701,9054f, 62,99926f, 3329,815f };
	*(&Local_4 + 1812[86] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[96]) = { -702,0551f, 62,99754f, 3325,088f };
	*(&Local_4 + 1812[96] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[106]) = { -700,3231f, 62,99754f, 3326,088f };
	*(&Local_4 + 1812[106] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[116]) = { -698,591f, 62,99754f, 3327,088f };
	*(&Local_4 + 1812[116] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[126]) = { -696,8589f, 62,99754f, 3328,088f };
	*(&Local_4 + 1812[126] + 12) = { 0.0f, -30.0f, 0.0f };
	*(&Local_4 + 1812[136]) = { -701,0475f, 62,99926f, 3330,329f };
	*(&Local_4 + 1812[136] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[146]) = { -700,1896f, 62,99926f, 3330,843f };
	*(&Local_4 + 1812[146] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[156]) = { -699,3318f, 62,99926f, 3331,356f };
	*(&Local_4 + 1812[156] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[166]) = { -698,4739f, 63,08221f, 3331,87f };
	*(&Local_4 + 1812[166] + 12) = { 0.0f, -30,92103f, 0.0f };
	*(&Local_4 + 1812[176]) = { -700,4516f, 63,28695f, 3322,765f };
	*(&Local_4 + 1812[176] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[186]) = { -700,3868f, 63,28786f, 3320,848f };
	*(&Local_4 + 1812[186] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[196]) = { -698,3477f, 63,24583f, 3320,299f };
	*(&Local_4 + 1812[196] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[206]) = { -698,4417f, 63,24583f, 3323,153f };
	*(&Local_4 + 1812[206] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[216]) = { -695,5906f, 63,24583f, 3311,942f };
	*(&Local_4 + 1812[216] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[226]) = { -695,4011f, 63,24583f, 3314,263f };
	*(&Local_4 + 1812[226] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[236]) = { -692,8284f, 63,24583f, 3313,893f };
	*(&Local_4 + 1812[236] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[246]) = { -690,4902f, 63,24583f, 3312,127f };
	*(&Local_4 + 1812[246] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[256]) = { -696,8236f, 63,24583f, 3321,691f };
	*(&Local_4 + 1812[256] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[266]) = { -694,8792f, 63,24583f, 3321,138f };
	*(&Local_4 + 1812[266] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[276]) = { -693,8404f, 63,24583f, 3322,576f };
	*(&Local_4 + 1812[276] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 1812[286]) = { -694,6404f, 63,24583f, 3325,366f };
	*(&Local_4 + 1812[286] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 2512[06]) = { -717,5332f, 70,22324f, 3289,815f };
	*(&Local_4 + 2512[06] + 12) = { 0.0f, 140,2446f, 0.0f };
	*(&Local_4 + 2512[16]) = { -717,7244f, 70,9458f, 3295,731f };
	*(&Local_4 + 2512[16] + 12) = { 0.0f, 230.0f, 0.0f };
	*(&Local_4 + 2512[26]) = { -720,6516f, 82,59319f, 3314,598f };
	*(&Local_4 + 2512[26] + 12) = { 0.0f, 189,7789f, 0.0f };
	*(&Local_4 + 2512[36]) = { -720,6516f, 82,59319f, 3314,598f };
	*(&Local_4 + 2512[36] + 12) = { 0.0f, 189,7789f, 0.0f };
	*(&Local_4 + 2512[46]) = { -719,5327f, 70,22659f, 3292,219f };
	*(&Local_4 + 2512[46] + 12) = { 0.0f, 320,2446f, 0.0f };
	*(&Local_4 + 2512[56]) = { -715,6863f, 67,52581f, 3297,516f };
	*(&Local_4 + 2512[56] + 12) = { 0.0f, 230.0f, 0.0f };
	*(&Local_4 + 2512[66]) = { -712,9622f, 70,8607f, 3321,08f };
	*(&Local_4 + 2512[66] + 12) = { 0.0f, 17,1656f, 0.0f };
	*(&Local_4 + 2512[76]) = { -710,2059f, 70,63718f, 3319,86f };
	*(&Local_4 + 2512[76] + 12) = { 0.0f, 17,72181f, 0.0f };
	*(&Local_4 + 2512[86]) = { -711,5252f, 72,51846f, 3313,688f };
	*(&Local_4 + 2512[86] + 12) = { 0.0f, 83,97038f, 0.0f };
	*(&Local_4 + 2512[96]) = { -715,043f, 73,38206f, 3312,468f };
	*(&Local_4 + 2512[96] + 12) = { 0.0f, 164,7237f, 0.0f };
	*(&Local_4 + 2512[106]) = { -680.0f, 63,24707f, 3316.0f };
	*(&Local_4 + 2512[106] + 12) = { 0.0f, 45,09656f, 0.0f };
	*(&Local_4 + 2512[116]) = { -683,989f, 63,24707f, 3303,989f };
	*(&Local_4 + 2512[116] + 12) = { 0.0f, 134,8429f, 0.0f };
	*(&Local_4 + 2512[126]) = { -696.0f, 63,24707f, 3300.0f };
	*(&Local_4 + 2512[126] + 12) = { 0.0f, 179,7046f, 0.0f };
	*(&Local_4 + 2512[136]) = { -704.0f, 63,24704f, 3304.0f };
	*(&Local_4 + 2512[136] + 12) = { 0.0f, 50.0f, 0.0f };
	*(&Local_4 + 2512[146]) = { -730,7613f, 73,21365f, 3307,621f };
	*(&Local_4 + 2512[146] + 12) = { 0.0f, -37,57606f, 0.0f };
	*(&Local_4 + 2512[156]) = { -734,1956f, 72,8727f, 3306,094f };
	*(&Local_4 + 2512[156] + 12) = { 0.0f, -43,55118f, 0.0f };
	*(&Local_4 + 2512[166]) = { -726,0862f, 72,42982f, 3303,394f };
	*(&Local_4 + 2512[166] + 12) = { 0.0f, -3,763399f, 0.0f };
	*(&Local_4 + 2512[176]) = { -732,9788f, 72,23621f, 3300,826f };
	*(&Local_4 + 2512[176] + 12) = { 0.0f, -41,72119f, 0.0f };
	*(&Local_4 + 2512[186]) = { -724,3875f, 78,2719f, 3319,747f };
	*(&Local_4 + 2512[186] + 12) = { 0.0f, 107,0819f, 0.0f };
	*(&Local_4 + 2512[196]) = { -721,2239f, 69,13982f, 3274,177f };
	*(&Local_4 + 2512[196] + 12) = { 0.0f, 114,3159f, 0.0f };
	*(&Local_4 + 2512[206]) = { -697,8644f, 68,27407f, 3287,516f };
	*(&Local_4 + 2512[206] + 12) = { 0.0f, 339,4166f, 0.0f };
	*(&Local_4 + 2512[216]) = { -686,6075f, 68,27157f, 3290,357f };
	*(&Local_4 + 2512[216] + 12) = { 0.0f, 347,2172f, 0.0f };
	*(&Local_4 + 2512[226]) = { -675,4605f, 68,27171f, 3297,223f };
	*(&Local_4 + 2512[226] + 12) = { 0.0f, 318,2806f, 0.0f };
	*(&Local_4 + 2512[236]) = { -687,7783f, 69,09033f, 3320,369f };
	*(&Local_4 + 2512[236] + 12) = { 0.0f, 146,9465f, 0.0f };
	*(&Local_4 + 2512[246]) = { -699,6008f, 66,50011f, 3312,812f };
	*(&Local_4 + 2512[246] + 12) = { 0.0f, 165,6683f, 0.0f };
	*(&Local_4 + 2512[256]) = { -722,6608f, 82,50268f, 3312,006f };
	*(&Local_4 + 2512[256] + 12) = { 0.0f, 82,44316f, 0.0f };
	*(&Local_4 + 2512[266]) = { -666,2107f, 73,42568f, 3307,765f };
	*(&Local_4 + 2512[266] + 12) = { 0.0f, 243,1956f, 0.0f };
	*(&Local_4 + 3164[06]) = { -722,6823f, 63,34728f, 3293,491f };
	*(&Local_4 + 3164[06] + 12) = { 0.0f, 152,3421f, 0.0f };
	*(&Local_4 + 3164[16]) = { -716,2452f, 63,24707f, 3292,282f };
	*(&Local_4 + 3164[16] + 12) = { 0.0f, 228,9781f, 0.0f };
	*(&Local_4 + 3164[26]) = { -716,2452f, 63,24707f, 3292,282f };
	*(&Local_4 + 3164[26] + 12) = { 0.0f, 228,9781f, 0.0f };
	*(&Local_4 + 3164[36]) = { -716,2452f, 63,24707f, 3292,282f };
	*(&Local_4 + 3164[36] + 12) = { 0.0f, 228,9781f, 0.0f };
	*(&Local_4 + 3164[46]) = { -720,6516f, 82,59319f, 3314,598f };
	*(&Local_4 + 3164[46] + 12) = { 0.0f, 189,7789f, 0.0f };
	*(&Local_4 + 3164[56]) = { -720,6516f, 82,59319f, 3314,598f };
	*(&Local_4 + 3164[56] + 12) = { 0.0f, 189,7789f, 0.0f };
	*(&Local_4 + 3164[66]) = { -723,8428f, 63,3488f, 3295,705f };
	*(&Local_4 + 3164[66] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3164[76]) = { -723,8428f, 63,3488f, 3295,705f };
	*(&Local_4 + 3164[76] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3164[86]) = { -723,8428f, 63,3488f, 3295,705f };
	*(&Local_4 + 3164[86] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3164[96]) = { -723,8428f, 63,3488f, 3295,705f };
	*(&Local_4 + 3164[96] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3408[06]) = { -698,2378f, 63,24583f, 3322,032f };
	*(&Local_4 + 3408[06] + 12) = { 0.0f, -110,8093f, 0.0f };
	*(&Local_4 + 3408[16]) = { -698,2378f, 63,24583f, 3322,032f };
	*(&Local_4 + 3408[16] + 12) = { 0.0f, -110,8093f, 0.0f };
	*(&Local_4 + 3408[26]) = { -697,9064f, 63,24583f, 3324,813f };
	*(&Local_4 + 3408[26] + 12) = { 0.0f, 159,1907f, 0.0f };
	*(&Local_4 + 3408[36]) = { -697,9064f, 63,24583f, 3324,813f };
	*(&Local_4 + 3408[36] + 12) = { 0.0f, 159,1907f, 0.0f };
	*(&Local_4 + 3408[46]) = { -695,8885f, 63,24583f, 3322,887f };
	*(&Local_4 + 3408[46] + 12) = { 0.0f, 69,19067f, 0.0f };
	*(&Local_4 + 3408[56]) = { -695,8885f, 63,24583f, 3322,887f };
	*(&Local_4 + 3408[56] + 12) = { 0.0f, 69,19067f, 0.0f };
	*(&Local_4 + 3408[66]) = { -695,8885f, 63,24583f, 3322,887f };
	*(&Local_4 + 3408[66] + 12) = { 0.0f, 159,1907f, 0.0f };
	*(&Local_4 + 3408[76]) = { -695,8885f, 63,24583f, 3322,887f };
	*(&Local_4 + 3408[76] + 12) = { 0.0f, 159,1907f, 0.0f };
	*(&Local_4 + 3408[86]) = { -723,8428f, 63,35508f, 3295,705f };
	*(&Local_4 + 3408[86] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3408[96]) = { -723,8428f, 63,35508f, 3295,705f };
	*(&Local_4 + 3408[96] + 12) = { 0.0f, -130,1052f, 0.0f };
	*(&Local_4 + 3652[06]) = { -693,4122f, 63,24877f, 3312,662f };
	*(&Local_4 + 3652[06] + 12) = { 0.0f, -20,80933f, 0.0f };
	*(&Local_4 + 3652[16]) = { -708.0f, 63,24704f, 3304.0f };
	*(&Local_4 + 3652[16] + 12) = { 0.0f, 138,6734f, 0.0f };
	*(&Local_4 + 3652[26]) = { -695,36f, 63,24877f, 3317,787f };
	*(&Local_4 + 3652[26] + 12) = { 0.0f, -22,61543f, 0.0f };
	*(&Local_4 + 3652[36]) = { -715,6863f, 67,52581f, 3297,516f };
	*(&Local_4 + 3652[36] + 12) = { 0.0f, 230.0f, 0.0f };
	*(&Local_4 + 3652[46]) = { -718,673f, 72,22529f, 3294,405f };
	*(&Local_4 + 3652[46] + 12) = { 0.0f, 230,2446f, 0.0f };
	*(&Local_4 + 3652[56]) = { -721,0079f, 76,91146f, 3288,455f };
	*(&Local_4 + 3652[56] + 12) = { 0.0f, 230.0f, 0.0f };
	*(&Local_4 + 3800[06]) = { -927,1932f, 71,02916f, 3462,157f };
	*(&Local_4 + 3800[06] + 12) = { 0.0f, -86,01669f, 0.0f };
	*(&Local_4 + 3800[16]) = { -723,8428f, 63,35508f, 3295,705f };
	*(&Local_4 + 3800[16] + 12) = { 0.0f, 49,89481f, 0.0f };
	*(&Local_4 + 3800[26]) = { -716,621f, 65,0908f, 3375,346f };
	*(&Local_4 + 3800[26] + 12) = { 0.0f, -21,54036f, 0.0f };
	*(&Local_4 + 3800[36]) = { -1076,225f, 74,95425f, 3488,225f };
	*(&Local_4 + 3800[36] + 12) = { 0.0f, 270,3612f, 0.0f };
	Local_4.f_3900 = CREATE_OBJECTSET_IN_LAYOUT("CannonFlagSet", Local_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag01", -712,6431f, 73,87674f, 3326,418f, 0.0f, 152,3421f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_3900);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag02", -726,0603f, 78,2719f, 3320,261f, 0.0f, 107,0819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_3900);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag03", -737,7228f, 77,23883f, 3300,318f, 0.0f, 88,64753f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_3900);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag04", -722,8187f, 69,13982f, 3274,897f, 0.0f, 114,3159f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_3900);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag05", -697,2491f, 68,27407f, 3285,877f, 0.0f, 339,4166f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_3900);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag06", -686,2203f, 68,27157f, 3288,65f, 0.0f, 347,2172f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_3900);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag07", -674,2959f, 68,27171f, 3295,917f, 0.0f, 318,2806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_3900);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "CannonFlag08", -688,7327f, 69,09033f, 3321,836f, 0.0f, 146,9465f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_3900);
	Local_4.f_3904 = CREATE_OBJECTSET_IN_LAYOUT("GatlingFlagSet", Local_4, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "GatlingFlag01", -700,034f, 66,50011f, 3314,508f, 0.0f, 165,6683f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_3904);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "GatlingFlag02", -724,3956f, 82,50268f, 3311,776f, 0.0f, 82,44316f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_3904);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "GatlingFlag03", -664,6487f, 73,42568f, 3308,554f, 0.0f, 243,1956f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_3904);
	Local_4.f_3908 = CREATE_OBJECTSET_IN_LAYOUT("TNTFlagSet", Local_4, 8, 0);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag01", -0,5293406f, 1,219494f, -0,6540323f, 0.0f, 6,909096f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_3908);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag02", 0,00512928f, 1,219494f, -0,5884024f, 0.0f, -6,664986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_3908);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag03", -0,5554479f, 1,219494f, 0,1531001f, 0.0f, -3,127177f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_3908);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag04", 0,08881035f, 1,219494f, 0,2236013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_3908);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag05", -0,4048726f, 1,219494f, 1,050859f, 0.0f, 23,0055f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_3908);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag06", 0,1002364f, 1,220749f, 0,9931319f, 0,3593173f, 4,953728f, 4,153877f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_3908);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag07", -0,6249201f, 1,219494f, 1,803013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_3908);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag08", 0,02718496f, 1,219494f, 1,80752f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_3908);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag09", -0,4958351f, 1,824924f, -1,051019f, 0.0f, -77,79638f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_3908);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag10", 0,162323f, 1,765246f, -0,08181825f, 11,67825f, 76,28868f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_3908);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag11", -0,3408559f, 1,824924f, 0,1488667f, 0.0f, -82,53329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_3908);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag12", -0,5453008f, 1,824924f, 0,6590849f, 0.0f, -90,14513f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_3908);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "nTNTFlag13", -0,3100783f, 1,801856f, 1,367837f, -17,83166f, -71,80109f, 26,71219f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_3908);
	Local_4.f_3912 = CREATE_OBJECTSET_IN_LAYOUT(Function_107(), Local_4, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer01", "stand_cheer", -712,9622f, 70,8607f, 3321,08f, 0.0f, 17,1656f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer02", "stand_cheer", -710,2059f, 70,63718f, 3319,86f, 0.0f, 17,72181f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer03", "stand_cheer", -711,5252f, 72,51846f, 3313,688f, 0.0f, 83,97038f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer04", "stand_cheer", -715,043f, 73,38206f, 3312,468f, 0.0f, 164,7237f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer05", "stand_cheer", -680.0f, 63,24707f, 3316.0f, 0.0f, 45,09656f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer06", "stand_cheer", -683,989f, 63,24707f, 3303,989f, 0.0f, 134,8429f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer07", "stand_cheer", -696.0f, 63,24707f, 3300.0f, 0.0f, 179,7046f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer08", "stand_cheer", -704.0f, 63,24704f, 3304.0f, 0.0f, -90,44271f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(7, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer09", "stand_cheer", -730,7613f, 73,21365f, 3307,621f, 0.0f, -37,57606f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(8, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer10", "stand_cheer", -734,1956f, 72,8727f, 3306,094f, 0.0f, -43,55118f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(9, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer11", "stand_cheer", -726,0862f, 72,42982f, 3303,394f, 0.0f, -3,763399f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(10, Local_4.f_3912)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_4, "StandCheer12", "stand_cheer", -732,9788f, 72,23621f, 3300,826f, 0.0f, -41,72119f, 0.0f), Local_4.f_3912);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(11, Local_4.f_3912)), 0);
	Local_4.f_3916 = CREATE_PATH_IN_LAYOUT(Local_4, "DriveIntoElPresidioPath", 33);
	ADD_POINT_TO_PATH(Local_4.f_3916, -761,8077f, 67,9496f, 3425,811f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -758,3787f, 67,8864f, 3423,359f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -755,07f, 67,7663f, 3421,086f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -751,7846f, 67,62338f, 3418,758f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -748,6862f, 67,45715f, 3416,173f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -745,794f, 67,26439f, 3413,372f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -743,007f, 67,06093f, 3410,483f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -740,1696f, 66,88777f, 3407,646f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -737,3497f, 66,74702f, 3404,778f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -734,6508f, 66,58656f, 3401,796f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -731,988f, 66,41966f, 3398,788f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -729,3722f, 66,24419f, 3395,736f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -726,8371f, 66,05363f, 3392,615f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -724,4064f, 65,84091f, 3389,41f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -722,1371f, 65,61279f, 3386,085f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -720,0853f, 65,41225f, 3382,617f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -718,2568f, 65,23581f, 3379,027f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -716,621f, 65,0908f, 3375,346f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -715,1472f, 64,99582f, 3371,595f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -713,8926f, 64,96966f, 3367,764f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -712,8051f, 64,8666f, 3363,88f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -711,9257f, 64,55503f, 3359,961f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -711,1849f, 64,23069f, 3356,024f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -710,5026f, 63,97801f, 3352,075f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -709,7197f, 63,71928f, 3348,151f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -708,6924f, 63,40179f, 3344,3f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -707,2873f, 63,10789f, 3340,582f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -705,4437f, 62,97989f, 3337,037f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -703,3309f, 62,95792f, 3333,625f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -701,2479f, 62,96092f, 3330,184f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -699,1111f, 62,94829f, 3326,454f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -697,2656f, 63,09612f, 3322,19f);
	ADD_POINT_TO_PATH(Local_4.f_3916, -695,36f, 63,24877f, 3317,787f);
	Local_4.f_3920 = CREATE_PATH_IN_LAYOUT(Local_4, "DriveIntoCliffEdgePath", 30);
	ADD_POINT_TO_PATH(Local_4.f_3920, -761,8077f, 67,9496f, 3425,811f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -758,3787f, 67,8864f, 3423,359f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -755,07f, 67,7663f, 3421,086f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -751,7846f, 67,62338f, 3418,758f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -748,6862f, 67,45715f, 3416,173f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -745,794f, 67,26439f, 3413,372f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -743,007f, 67,06093f, 3410,483f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -740,1696f, 66,88777f, 3407,646f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -737,3497f, 66,74702f, 3404,778f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -734,6508f, 66,58656f, 3401,796f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -731,988f, 66,41966f, 3398,788f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -729,3722f, 66,24419f, 3395,736f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -726,8371f, 66,05363f, 3392,615f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -724,4064f, 65,84091f, 3389,41f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -722,1371f, 65,61279f, 3386,085f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -720,0853f, 65,41225f, 3382,617f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -718,2568f, 65,23581f, 3379,027f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -716,621f, 65,0908f, 3375,346f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -715,1472f, 64,99582f, 3371,595f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -713,8926f, 64,96966f, 3367,764f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -712,8051f, 64,8666f, 3363,88f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -711,9257f, 64,55503f, 3359,961f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -711,1849f, 64,23069f, 3356,024f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -710,5026f, 63,97801f, 3352,075f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -710,2847f, 63,71928f, 3347,586f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -710,5832f, 63,40179f, 3343,644f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -711,186f, 63,49808f, 3339,381f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -712,0001f, 63,24707f, 3336.0f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -713,8301f, 63,41032f, 3333,216f);
	ADD_POINT_TO_PATH(Local_4.f_3920, -717,0767f, 63,80807f, 3330,877f);
	Local_4.f_3924 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathLeft01", 253);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1524,901f, 14,77316f, 3900,614f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1527,974f, 14,84834f, 3903,175f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1531,047f, 15,16566f, 3905,736f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1534,12f, 15,47675f, 3908,297f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1537,192f, 15,63308f, 3910,858f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1540,265f, 15,34689f, 3913,419f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1543,338f, 15,01705f, 3915,98f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1546,41f, 15,02326f, 3918,541f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1547,564f, 15,01844f, 3920,174f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1548,255f, 15,06252f, 3922,051f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1548,559f, 15,05087f, 3923,691f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1548,658f, 15,08093f, 3925,173f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1548,359f, 15,09874f, 3927,237f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1547,463f, 15,07317f, 3929,924f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1546,556f, 15,15981f, 3934,035f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1546,452f, 15,30435f, 3938,288f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1547,457f, 15,16766f, 3942,409f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1549,225f, 14,8701f, 3946,225f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1551,598f, 14,52331f, 3949,573f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1556,552f, 13,93727f, 3955,939f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1561,538f, 13,28697f, 3962,319f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1564,38f, 13,15021f, 3965,407f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1567,834f, 12,87827f, 3967,797f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1571,423f, 12,58051f, 3969,807f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1575,118f, 12,26796f, 3971,582f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1578,921f, 11,89564f, 3973,121f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1582,859f, 11,89276f, 3974,395f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1586,943f, 11,88952f, 3975,147f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1591,043f, 11,8773f, 3975,485f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1599,172f, 11,75819f, 3975,594f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1607,221f, 11,53562f, 3975,546f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1611,196f, 11,41194f, 3975,633f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1615,062f, 11,38384f, 3976,086f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1622,548f, 11,49839f, 3978,628f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1629,809f, 11,60738f, 3981,971f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1633,366f, 11,73009f, 3983,727f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1638,609f, 11,89923f, 3985,889f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1639,547f, 12,16651f, 3988,501f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1642,325f, 12,52108f, 3991,282f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1644,73f, 12,90581f, 3994,358f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1648,931f, 13,77462f, 4001,16f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1651,35f, 14,02972f, 4004,544f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1654,365f, 14,19824f, 4007,443f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1657,619f, 14,24747f, 4009,966f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1664,419f, 13,95951f, 4014,437f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1671,397f, 13,44806f, 4018,584f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1678,696f, 13,46133f, 4022,121f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1685,868f, 14,14435f, 4025,706f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1688,91f, 14,40036f, 4027,277f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1692,719f, 14,61483f, 4029,619f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1695,615f, 14,75755f, 4032,171f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1697,751f, 14,82927f, 4035,258f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1699,309f, 14,84823f, 4038,614f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1700,561f, 14,79481f, 4042,248f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1701,196f, 14,69932f, 4046,201f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1701,501f, 14,55572f, 4050,358f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1701,472f, 14,36361f, 4054,167f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1701,319f, 14,15834f, 4058,077f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1700,603f, 13,98026f, 4061,935f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1699,583f, 13,83909f, 4065,773f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1697,053f, 13,59955f, 4073,362f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1694,173f, 13,58306f, 4080,859f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1690,827f, 13,66395f, 4088,117f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1687,111f, 13,72073f, 4095,2f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1684,977f, 13,87256f, 4098,54f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1682,616f, 14,16847f, 4101,707f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1680,08f, 14,5823f, 4104,641f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1676,985f, 14,81231f, 4106,951f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1670,126f, 14,75605f, 4111,138f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1663,158f, 14,63139f, 4115,17f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1659,631f, 14,53068f, 4117,34f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1656,474f, 14,35844f, 4120,092f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1651,248f, 14,17919f, 4126,38f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1646,316f, 13,99499f, 4132,849f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1641,771f, 13,86006f, 4139,991f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1640,013f, 13,78222f, 4143,572f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1638,998f, 13,75758f, 4148,366f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1639,195f, 13,42978f, 4152,913f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1640,369f, 12,87642f, 4157,011f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1642,403f, 12,37127f, 4159,831f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1647,985f, 11,20709f, 4165,363f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1653,159f, 10,17624f, 4171,326f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1657,882f, 9,30791f, 4177,648f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1660,023f, 9,131152f, 4180,956f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1661,964f, 8,881742f, 4184,374f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1663,648f, 8,462654f, 4187,911f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1665,007f, 8,233204f, 4191,574f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1665,983f, 8,02398f, 4195,357f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1666,583f, 8,005322f, 4199,235f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1666,902f, 7,909693f, 4203,174f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1667,045f, 7,853478f, 4207,142f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1667,043f, 7,822282f, 4211,117f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1666,889f, 7,807242f, 4215,088f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1666,164f, 7,804852f, 4223,014f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1665,036f, 7,821873f, 4230,919f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1663,723f, 7,851056f, 4238,833f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1663,115f, 7,870034f, 4242,831f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1662,697f, 7,891914f, 4246,907f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1662,805f, 7,916593f, 4251,134f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1663,222f, 7,926977f, 4253,293f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1664,243f, 7,937772f, 4255,276f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1666,893f, 7,948052f, 4258,585f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1669,766f, 7,947441f, 4261,433f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1672,438f, 7,940915f, 4264,32f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1674,731f, 7,931454f, 4267,453f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1676,526f, 7,917869f, 4270,882f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1677,951f, 7,892479f, 4274,933f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1678,744f, 7,844576f, 4278,702f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,314f, 7,764443f, 4282,244f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,617f, 7,643756f, 4286,181f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,703f, 7,262334f, 4294,134f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,723f, 6,708304f, 4302,178f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,907f, 6,433068f, 4306,014f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,767f, 6,31203f, 4308,838f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1679,43f, 6,442776f, 4310,051f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1678,82f, 6,502803f, 4310,818f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1678,038f, 6,531031f, 4311,05f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1674,669f, 6,58152f, 4310,534f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1665,091f, 6,324038f, 4308,638f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1656,928f, 5,874138f, 4307,411f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1648,673f, 5,801876f, 4306,599f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1640,313f, 5,752938f, 4306,403f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1631,945f, 5,735488f, 4307,02f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1623,692f, 5,736218f, 4308,454f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1615,605f, 5,740213f, 4310,636f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1607,756f, 5,744819f, 4313,61f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1600,257f, 5,749422f, 4317,346f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1593,146f, 5,753263f, 4321,688f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1586,373f, 5,756656f, 4326,492f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1579,924f, 5,760104f, 4331,724f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1573,832f, 5,762678f, 4337,304f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1562,142f, 5,762404f, 4348,624f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1550,284f, 5,76375f, 4359,875f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1539,061f, 5,765721f, 4371,797f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1533,456f, 5,761732f, 4377,446f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1527,4f, 5,754467f, 4382,359f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1520,702f, 5,747124f, 4386,304f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1513,491f, 5,740888f, 4389,29f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1505,931f, 5,735662f, 4391,332f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1498,145f, 5,73157f, 4392,478f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1490,221f, 5,728772f, 4392,876f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1482,224f, 5,727007f, 4392,721f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1474,199f, 5,725879f, 4392,186f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1466,191f, 5,724907f, 4391,356f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1458,224f, 5,723944f, 4390,229f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1450,325f, 5,722937f, 4388,778f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1442,528f, 5,721847f, 4386,953f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1434,854f, 5,72087f, 4384,686f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1427,26f, 5,719911f, 4382,017f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1419,796f, 5,719987f, 4379,033f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1412,265f, 5,719769f, 4375,962f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1397,135f, 5,720028f, 4369,781f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1389,463f, 5,720359f, 4366,876f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1381,683f, 5,720891f, 4364,19f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1373,768f, 5,721707f, 4361,825f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1365,752f, 5,722611f, 4359,844f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1357,675f, 5,723468f, 4358,211f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1349,569f, 5,724179f, 4356,864f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1341,381f, 5,725378f, 4355,771f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1332,995f, 5,728381f, 4355,274f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1324,394f, 5,731898f, 4355,689f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1316,189f, 5,739383f, 4357,368f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1308,292f, 5,744059f, 4360,386f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1300,785f, 5,750431f, 4364,028f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1293,48f, 5,75333f, 4368,379f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1286,723f, 5,761071f, 4373,546f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1280,878f, 5,77088f, 4379,832f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1276,209f, 5,778946f, 4386,938f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1272,493f, 5,784433f, 4394,462f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1269,424f, 5,787807f, 4402,172f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1266,767f, 5,790145f, 4409,985f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1264,423f, 5,791978f, 4417,874f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1262,333f, 5,793437f, 4425,816f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1260,451f, 5,794779f, 4433,806f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1258,791f, 5,796306f, 4441,854f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1257,392f, 5,798082f, 4449,965f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1256,323f, 5,800622f, 4458,167f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1255,794f, 5,804317f, 4466,489f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1255,988f, 5,808184f, 4474,846f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1256,82f, 5,810735f, 4483,099f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1258,024f, 5,812082f, 4491,238f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1259,407f, 5,812691f, 4499,301f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1260,905f, 5,813353f, 4507,349f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1262,577f, 5,814283f, 4515,381f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1264,478f, 5,815328f, 4523,372f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1268,495f, 5,814605f, 4539,103f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1270,061f, 5,811982f, 4546,916f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1270,952f, 5,808094f, 4554,771f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1271,049f, 5,803455f, 4562,651f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1270,321f, 5,798406f, 4570,495f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1268,77f, 5,793254f, 4578,227f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1266,479f, 5,788731f, 4585,814f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1263,603f, 5,78518f, 4593,254f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1260,273f, 5,781953f, 4600,521f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1256,51f, 5,778324f, 4607,555f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1252,278f, 5,775198f, 4614,344f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1243,116f, 5,774515f, 4627,771f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1238,585f, 5,775395f, 4634,584f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1234,172f, 5,77657f, 4641,49f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1229,922f, 5,778148f, 4648,519f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1225,894f, 5,780179f, 4655,701f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1222,154f, 5,782716f, 4663,061f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1218,781f, 5,78585f, 4670,625f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1213,287f, 5,790776f, 4686,177f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1208,465f, 5,789317f, 4701,657f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1205,558f, 5,783249f, 4708,968f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1201,711f, 5,773347f, 4715,635f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1196,667f, 5,762828f, 4721,405f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1190,648f, 5,755125f, 4726,335f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1183,992f, 5,749228f, 4730,5f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1176,898f, 5,744257f, 4733,938f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1169,478f, 5,74f, 4736,668f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1161,821f, 5,736424f, 4738,732f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1154,005f, 5,733403f, 4740,177f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1146,094f, 5,731251f, 4741,033f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1138,124f, 5,736067f, 4741,32f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1122,045f, 5,792886f, 4740,662f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1105,875f, 5,877197f, 4739,278f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1089,7f, 5,880869f, 4737,733f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1081,804f, 5,835134f, 4736,675f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1074,404f, 5,772457f, 4734,778f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1068,33f, 5,729433f, 4730,982f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1063,854f, 5,723215f, 4725,036f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1060,185f, 5,725645f, 4718,046f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1057,282f, 5,729613f, 4710,796f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1055,557f, 5,735617f, 4703,262f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1054,982f, 5,741193f, 4695,472f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1055,306f, 5,745986f, 4687,597f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1056,431f, 5,752108f, 4679,831f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1058,615f, 5,764089f, 4672,468f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1062,317f, 5,787254f, 4666,081f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1067,878f, 5,810331f, 4661,265f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1074,748f, 5,820174f, 4657,817f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1089,954f, 5,817135f, 4652,616f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1105,499f, 5,8099f, 4647,317f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1120,649f, 5,808172f, 4640,907f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1135,373f, 5,806557f, 4633,72f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1149,839f, 5,80213f, 4626,133f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1164,213f, 5,797422f, 4618,304f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1171,301f, 5,792217f, 4613,85f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1177,886f, 5,782605f, 4608,346f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1183,263f, 5,769932f, 4601,5f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1186,828f, 5,755045f, 4601,437f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1187,955f, 5,742011f, 4584,715f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1187,221f, 5,735349f, 4576,215f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1185,609f, 5,732138f, 4568,02f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1183,216f, 5,728288f, 4559,942f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1179,816f, 5,72467f, 4552,198f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1175,536f, 5,722178f, 4544,95f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1170,52f, 5,720367f, 4538,205f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1164,763f, 5,719022f, 4532,032f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1158,271f, 5,718471f, 4526,629f);
	ADD_POINT_TO_PATH(Local_4.f_3924, -1151,29f, 5,718598f, 4522,006f);
	Local_4.f_3928 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathMiddle01", 253);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1525,703f, 14,64388f, 3899,655f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1528,776f, 14,76085f, 3902,216f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1531,849f, 15,0407f, 3904,777f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1534,921f, 15,44784f, 3907,338f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1537,994f, 15,58733f, 3909,899f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1541,067f, 15,42431f, 3912,46f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1544,139f, 15,0461f, 3915,021f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1547,212f, 15,04973f, 3917,582f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1548,366f, 15,02837f, 3919,215f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1549,253f, 15,04212f, 3921,092f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1549,657f, 15,0552f, 3923,084f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1549,785f, 15,00107f, 3925f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1549,383f, 14,96674f, 3927,373f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1548,418f, 15,03214f, 3930,24f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1547,555f, 15,17882f, 3934,156f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1547,456f, 15,26373f, 3938,18f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1548,405f, 15,13567f, 3942,079f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1550,095f, 14,90104f, 3945,722f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1552,405f, 14,55508f, 3948,979f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1557,338f, 13,96919f, 3955,319f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1562,307f, 13,31904f, 3961,677f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1565,042f, 13,18266f, 3964,649f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1568,366f, 12,91008f, 3966,947f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1571,888f, 12,61176f, 3968,918f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1575,526f, 12,29863f, 3970,665f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1579,266f, 11,92558f, 3972,177f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1583,105f, 11,92117f, 3973,424f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1587,075f, 11,91594f, 3974,155f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1591,098f, 11,90219f, 3974,487f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1599,166f, 11,78178f, 3974,594f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1607,232f, 11,55959f, 3974,545f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1611,266f, 11,43717f, 3974,633f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1615,274f, 11,41176f, 3975,104f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1622,919f, 11,52852f, 3977,699f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1630,246f, 11,63826f, 3981,073f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1633,866f, 11,76161f, 3982,858f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1637,22f, 11,93145f, 3985,094f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1640,232f, 12,19884f, 3987,771f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1643,076f, 12,55336f, 3990,613f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1645,552f, 12,93755f, 3993,777f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1649,77f, 13,80618f, 4000,604f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1652,111f, 14,06199f, 4003,885f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1655,02f, 14,23054f, 4006,684f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1658,209f, 14,27952f, 4009,159f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,949f, 13,99123f, 4013,587f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1671,871f, 13,47937f, 4017,701f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1679,13f, 13,49218f, 4021,22f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1686,321f, 14,17547f, 4024,812f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1689,401f, 14,43183f, 4026,403f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1693,315f, 14,64703f, 4028,811f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1696,367f, 14,7899f, 4031,501f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1698,621f, 14,86015f, 4034,759f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1700,238f, 14,87743f, 4038,24f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1701,534f, 14,82188f, 4042,004f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1702,19f, 14,7238f, 4046,086f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1702,501f, 14,57837f, 4050,326f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1702,472f, 14,38492f, 4054,192f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1702,315f, 14,17749f, 4058,189f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1701,579f, 13,99639f, 4062,156f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1700,544f, 13,85347f, 4066,053f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1697,992f, 13,61199f, 4073,704f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1695,1f, 13,59435f, 4081,238f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1691,722f, 13,67294f, 4088,564f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1687,973f, 13,72754f, 4095,709f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1685,802f, 13,87713f, 4099,109f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1683,401f, 14,17074f, 4102,336f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1680,771f, 14,57981f, 4105,384f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1677,541f, 14,80463f, 4107,788f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1670,649f, 14,74725f, 4111,991f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1663,665f, 14,62208f, 4116,032f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1660,226f, 14,52454f, 4118,148f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1657,186f, 14,35726f, 4120,798f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1652,028f, 14,18147f, 4127,005f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1647,137f, 13,99944f, 4133,419f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1642,637f, 13,84357f, 4140,408f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1640,93f, 13,79148f, 4143,885f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1639,965f, 13,7439f, 4148,44f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1640,155f, 13,52119f, 4152,725f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1641,244f, 12,84517f, 4156,536f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1643,085f, 12,2238f, 4159,076f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1648,726f, 11,16653f, 4164,68f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1653,944f, 10,20833f, 4170,696f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1658,714f, 9,339469f, 4177,085f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1660,879f, 9,16216f, 4180,438f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1662,853f, 8,912132f, 4183,913f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,575f, 8,49215f, 4187,522f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1665,963f, 8,261199f, 4191,276f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1666,964f, 8,05022f, 4195,156f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1667,577f, 8,029834f, 4199,118f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1667,901f, 7,932914f, 4203,116f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1668,045f, 7,875775f, 4207,125f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1668,043f, 7,8437f, 4211,136f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1667,888f, 7,827744f, 4215,145f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1667,158f, 7,82376f, 4223,133f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1666,024f, 7,839782f, 4231,076f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,711f, 7,868944f, 4238,99f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,108f, 7,888767f, 4242,957f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1663,698f, 7,912926f, 4246,945f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1663,802f, 7,941002f, 4251,025f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,177f, 7,955706f, 4252,963f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1665,086f, 7,969179f, 4254,729f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1667,637f, 7,980215f, 4257,916f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1670,485f, 7,979643f, 4260,738f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1673,211f, 7,972917f, 4263,684f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1675,582f, 7,962636f, 4266,923f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1677,445f, 7,947449f, 4270,483f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1678,943f, 7,920148f, 4274,639f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1679,725f, 7,870634f, 4278,509f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1680,307f, 7,788973f, 4282,127f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1680,616f, 7,666821f, 4286,13f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1680,703f, 7,283996f, 4294,144f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1680,724f, 6,730924f, 4302,147f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1681,11f, 6,454137f, 4305,896f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1681,347f, 6,265638f, 4308,946f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1681,193f, 6,402783f, 4311,384f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1679,708f, 6,480589f, 4313,125f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1677,66f, 6,454107f, 4313,515f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1674,201f, 6,478051f, 4312,989f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1664,678f, 6,158374f, 4311,1f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1656,621f, 5,711995f, 4309,887f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1648,513f, 5,645023f, 4309,09f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1640,373f, 5,604972f, 4308,901f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1632,253f, 5,59894f, 4309,5f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1624,233f, 5,611771f, 4310,896f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1616,373f, 5,628919f, 4313,018f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1608,761f, 5,648797f, 4315,903f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1601,475f, 5,668679f, 4319,535f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1594,528f, 5,685274f, 4323,778f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1587,887f, 5,699935f, 4328,489f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1581,565f, 5,714839f, 4333,618f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1575,562f, 5,725965f, 4339,118f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1563,862f, 5,724782f, 4350,446f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1552,049f, 5,730596f, 4361,655f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1540,889f, 5,739104f, 4373,512f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1535,153f, 5,721851f, 4379,291f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1528,83f, 5,690443f, 4384,417f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1521,816f, 5,658712f, 4388,548f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1514,295f, 5,63178f, 4391,661f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1506,436f, 5,609226f, 4393,781f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1498,382f, 5,591574f, 4394,966f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1490,251f, 5,579513f, 4395,375f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1482,111f, 5,571911f, 4395,216f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1473,986f, 5,567053f, 4394,673f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1465,888f, 5,562874f, 4393,834f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1457,826f, 5,55873f, 4392,693f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1449,818f, 5,554402f, 4391,222f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1441,891f, 5,549723f, 4389,365f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1434,083f, 5,545529f, 4387,059f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1426,381f, 5,542336f, 4384,351f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1418,863f, 5,541425f, 4381,346f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1411,307f, 5,540809f, 4378,264f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1396,226f, 5,541917f, 4372,104f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1388,611f, 5,543334f, 4369,22f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1380,914f, 5,545615f, 4366,563f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1373,113f, 5,549117f, 4364,232f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1365,208f, 5,553003f, 4362,279f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1357,227f, 5,556687f, 4360,667f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1349,194f, 5,559746f, 4359,332f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1341,123f, 5,564906f, 4358,254f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1332,996f, 5,577837f, 4357,773f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1324,66f, 5,593204f, 4358,176f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1316,907f, 5,625098f, 4359,766f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1309,259f, 5,645469f, 4362,695f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1301,943f, 5,672999f, 4366,192f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1294,864f, 5,685519f, 4370,469f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1288,4f, 5,718984f, 4375,413f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1282,861f, 5,761408f, 4381,371f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1278,393f, 5,796299f, 4388,172f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1274,789f, 5,82004f, 4395,471f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1271,777f, 5,834637f, 4403,034f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1269,155f, 5,844759f, 4410,743f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1266,837f, 5,852695f, 4418,547f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1264,764f, 5,859007f, 4426,421f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1262,897f, 5,864817f, 4434,347f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1261,251f, 5,87143f, 4442,321f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1259,867f, 5,879125f, 4450,345f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1258,814f, 5,890133f, 4458,418f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1258,297f, 5,906148f, 4466,543f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1258,485f, 5,922913f, 4474,682f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1259,301f, 5,933975f, 4482,782f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1260,492f, 5,939823f, 4490,837f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1261,868f, 5,942464f, 4498,862f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1263,358f, 5,945337f, 4506,868f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1265,017f, 5,949376f, 4514,839f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1266,901f, 5,953909f, 4522,761f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1270,93f, 5,950774f, 4538,54f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1272,531f, 5,939394f, 4546,522f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1273,449f, 5,922531f, 4554,611f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1273,55f, 5,902427f, 4562,751f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1272,799f, 5,880549f, 4570,858f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1271,199f, 5,85823f, 4578,841f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1268,846f, 5,838642f, 4586,635f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1265,911f, 5,823266f, 4594,23f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1262,519f, 5,809297f, 4601,632f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1258,678f, 5,793598f, 4608,812f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1254,372f, 5,780073f, 4615,722f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1245,193f, 5,777128f, 4629,175f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1240,684f, 5,78094f, 4635,954f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1236,3f, 5,786023f, 4642,816f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1232,087f, 5,792848f, 4649,783f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1228,104f, 5,801616f, 4656,884f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1224,415f, 5,81247f, 4664,143f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1221,099f, 5,825715f, 4671,578f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1215,677f, 5,845847f, 4686,929f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1210,833f, 5,839365f, 4702,477f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1207,824f, 5,813665f, 4710,042f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1203,755f, 5,771448f, 4717,09f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1198,4f, 5,726358f, 4723,217f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1192,103f, 5,693231f, 4728,376f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1185,201f, 5,667807f, 4732,694f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1177,875f, 5,646345f, 4736,244f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1170,233f, 5,627968f, 4739,054f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1162,372f, 5,612535f, 4741,172f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1154,366f, 5,599489f, 4742,651f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1146,272f, 5,588489f, 4743,526f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1138,135f, 5,585989f, 4743,818f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1121,866f, 5,635277f, 4743,153f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1105,641f, 5,717577f, 4741,764f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1089,432f, 5,720065f, 4740,215f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1081,364f, 5,668573f, 4739,132f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1073,484f, 5,593649f, 4737,104f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1066,609f, 5,5475f, 4732,803f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1061,711f, 5,556044f, 4726,317f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1057,925f, 5,566724f, 4719,109f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1054,9f, 5,583965f, 4711,553f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1053,081f, 5,610015f, 4703,622f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1052,48f, 5,6342f, 4695,504f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1052,813f, 5,654984f, 4687,37f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1053,98f, 5,680419f, 4679,313f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1056,296f, 5,724416f, 4671,511f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1060,377f, 5,802265f, 4664,481f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1066,518f, 5,880266f, 4659,157f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1073,791f, 5,919382f, 4655,504f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1089,196f, 5,928945f, 4650,232f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1104,607f, 5,913374f, 4644,979f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1119,602f, 5,901227f, 4638,633f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1134,236f, 5,8932f, 4631,49f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1148,657f, 5,885585f, 4623,925f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1162,958f, 5,875391f, 4616,136f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1169,851f, 5,854555f, 4611,806f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1176,093f, 5,813324f, 4606,588f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1181,117f, 5,758603f, 4600,193f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1184,406f, 5,694164f, 4592,761f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1185,448f, 5,637704f, 4584,7f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1184,748f, 5,608843f, 4576,592f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1183,178f, 5,594915f, 4568,603f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1180,867f, 5,578199f, 4560,797f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1177,596f, 5,562473f, 4553,343f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1173,457f, 5,55162f, 4546,333f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1168,6f, 5,543718f, 4539,799f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1163,048f, 5,537817f, 4533,844f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1156,791f, 5,535353f, 4528,637f);
	ADD_POINT_TO_PATH(Local_4.f_3928, -1150,002f, 5,535844f, 4524,142f);
	Local_4.f_3932 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathRight01", 253);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1526,504f, 14,42609f, 3898,695f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1529,576f, 14,71719f, 3901,256f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1532,649f, 15,00094f, 3903,817f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1535,722f, 15,40571f, 3906,378f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1538,795f, 15,55825f, 3908,939f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1541,867f, 15,34483f, 3911,5f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1544,94f, 15,07934f, 3914,061f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1548,013f, 15,03486f, 3916,622f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1549,165f, 15,03388f, 3918,255f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1550,22f, 15,04958f, 3920,188f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1550,778f, 15,06231f, 3922,421f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1550,855f, 14,93145f, 3924,832f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1550,437f, 14,96023f, 3927,401f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1549,374f, 15,06612f, 3930,556f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1548,554f, 15,19783f, 3934,277f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1548,459f, 15,28826f, 3938,072f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1549,354f, 15,16426f, 3941,748f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1550,965f, 14,93199f, 3945,22f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1553,213f, 14,58685f, 3948,384f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1558,125f, 14,00111f, 3954,698f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1563,077f, 13,35111f, 3961,034f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1565,703f, 13,21511f, 3963,891f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1568,899f, 12,94189f, 3966,097f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1572,352f, 12,64301f, 3968,029f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1575,934f, 12,3293f, 3969,747f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1579,611f, 11,95553f, 3971,232f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1583,351f, 11,94958f, 3972,452f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1587,207f, 11,94235f, 3973,162f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1591,154f, 11,92708f, 3973,488f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1599,16f, 11,80536f, 3973,593f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1607,243f, 11,58357f, 3973,544f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1611,336f, 11,4624f, 3973,633f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1615,486f, 11,43968f, 3974,122f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1623,289f, 11,55864f, 3976,77f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1630,618f, 11,66915f, 3980,111f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1634,365f, 11,79313f, 3981,99f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1637,831f, 11,96366f, 3984,3f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1640,918f, 12,23117f, 3987,04f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1643,827f, 12,58564f, 3989,944f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1646,373f, 12,96929f, 3993,196f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1650,609f, 13,83774f, 4000,047f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1652,871f, 14,09425f, 4003,227f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1655,674f, 14,26284f, 4005,926f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1658,799f, 14,31157f, 4008,352f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,478f, 14,02296f, 4012,738f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1672,346f, 13,51068f, 4016,818f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1679,564f, 13,52302f, 4020,32f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1686,774f, 14,20658f, 4023,917f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1689,893f, 14,46329f, 4025,53f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1693,911f, 14,67923f, 4028,003f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1697,12f, 14,82226f, 4030,831f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1699,492f, 14,89104f, 4034,26f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1701,166f, 14,90662f, 4037,865f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1702,508f, 14,84896f, 4041,761f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1703,184f, 14,74829f, 4045,971f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1703,501f, 14,60102f, 4050,294f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1703,472f, 14,40623f, 4054,216f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1703,312f, 14,19664f, 4058,302f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1702,555f, 14,01253f, 4062,376f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1701,504f, 13,86786f, 4066,333f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1698,932f, 13,62444f, 4074,047f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1696,026f, 13,60564f, 4081,617f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1692,617f, 13,68193f, 4089,011f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1688,836f, 13,73435f, 4096,218f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1686,628f, 13,8817f, 4099,679f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1684,186f, 14,17301f, 4102,965f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1681,462f, 14,57731f, 4106,127f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1678,097f, 14,79696f, 4108,625f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1671,171f, 14,73846f, 4112,844f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1664,173f, 14,61276f, 4116,894f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1660,821f, 14,5184f, 4118,957f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1657,897f, 14,35607f, 4121,505f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1652,809f, 14,18375f, 4127,63f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1647,959f, 14,00389f, 4133,99f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1643,504f, 13,89971f, 4140,823f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1641,848f, 13,7827f, 4144,197f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1640,933f, 13,79493f, 4148,515f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1641,116f, 13,64033f, 4152,537f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1642,118f, 12,82298f, 4156,06f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1643,767f, 12,25663f, 4158,32f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1649,466f, 11,19894f, 4163,996f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1654,729f, 10,24043f, 4170,067f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1659,547f, 9,371028f, 4176,522f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1661,736f, 9,193169f, 4179,921f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1663,742f, 8,942523f, 4183,452f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,502f, 8,521646f, 4187,134f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1666,92f, 8,289193f, 4190,979f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1667,945f, 8,07646f, 4194,955f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1668,571f, 8,054345f, 4199,001f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1668,899f, 7,956135f, 4203,059f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1669,044f, 7,898073f, 4207,107f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1669,043f, 7,865119f, 4211,156f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1668,886f, 7,848246f, 4215,202f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1668,151f, 7,842668f, 4223,253f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1667,012f, 7,857692f, 4231,232f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,699f, 7,886832f, 4239,148f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,1f, 7,907501f, 4243,083f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1664,7f, 7,933939f, 4246,983f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1664,8f, 7,965412f, 4250,917f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,131f, 7,984435f, 4252,632f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1665,929f, 8,000587f, 4254,182f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1668,382f, 8,012377f, 4257,247f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1671,204f, 8,011846f, 4260,043f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1673,983f, 8,004919f, 4263,047f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1676,433f, 7,993817f, 4266,393f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1678,364f, 7,97703f, 4270,084f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1679,915f, 7,947816f, 4274,326f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1680,707f, 7,896692f, 4278,316f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1681,301f, 7,813504f, 4282,009f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1681,615f, 7,689886f, 4286,08f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1681,703f, 7,305657f, 4294,153f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1681,725f, 6,753543f, 4302,117f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1682,215f, 6,475205f, 4305,802f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1683,045f, 6,196203f, 4308,906f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1682,935f, 6,30817f, 4312,619f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1680,508f, 6,489291f, 4315,457f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1677,282f, 6,402529f, 4315,981f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1673,732f, 6,317776f, 4315,444f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1664,266f, 5,992711f, 4313,562f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1656,313f, 5,549851f, 4312,364f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1648,353f, 5,488171f, 4311,582f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1640,433f, 5,457006f, 4311,398f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1632,562f, 5,462392f, 4311,981f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1624,774f, 5,487323f, 4313,338f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1617,141f, 5,517624f, 4315,399f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1609,766f, 5,552774f, 4318,197f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1602,693f, 5,587937f, 4321,724f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1595,909f, 5,617285f, 4325,869f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1589,402f, 5,643215f, 4330,485f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1583,206f, 5,669575f, 4335,513f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1577,291f, 5,689252f, 4340,932f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1565,582f, 5,68716f, 4352,269f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1553,814f, 5,697442f, 4363,435f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1542,717f, 5,712488f, 4375,227f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1536,85f, 5,68197f, 4381,135f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1530,26f, 5,62642f, 4386,476f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1522,93f, 5,570302f, 4390,791f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1515,098f, 5,522673f, 4394,031f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1506,94f, 5,482789f, 4396,231f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1498,619f, 5,451578f, 4397,455f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1490,281f, 5,430253f, 4397,873f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1481,997f, 5,416814f, 4397,71f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1473,774f, 5,408228f, 4397,161f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1465,585f, 5,400841f, 4396,312f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1457,427f, 5,393517f, 4395,157f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1449,311f, 5,385867f, 4393,666f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1441,254f, 5,377598f, 4391,778f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1433,312f, 5,370189f, 4389,431f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1425,501f, 5,364761f, 4386,685f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1417,93f, 5,362864f, 4383,66f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1410,349f, 5,361848f, 4380,567f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1395,318f, 5,363806f, 4374,426f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1387,76f, 5,366309f, 4371,565f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1380,146f, 5,370338f, 4376,937f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1372,457f, 5,376527f, 4366,64f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1364,663f, 5,383394f, 4364,715f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1356,778f, 5,389906f, 4363,122f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1348,82f, 5,395314f, 4361,8f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1340,866f, 5,404434f, 4360,737f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1332,998f, 5,427294f, 4360,272f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1324,927f, 5,454508f, 4360,664f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1317,626f, 5,510813f, 4362,163f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1310,225f, 5,546879f, 4365,004f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1303,136f, 5,595568f, 4368,342f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1296,249f, 5,617708f, 4372,558f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1290,077f, 5,676897f, 4377,279f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1284,844f, 5,751936f, 4382,909f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1280,577f, 5,813653f, 4389,405f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1277,084f, 5,855647f, 4396,479f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1274,131f, 5,881468f, 4403,897f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1271,544f, 5,899374f, 4411,5f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1269,25f, 5,913411f, 4419,221f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1267,195f, 5,924577f, 4427,027f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1265,342f, 5,934855f, 4434,889f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1263,712f, 5,946556f, 4442,789f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1262,343f, 5,960168f, 4450,724f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1261,306f, 5,979643f, 4458,668f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1260,8f, 6,007978f, 4466,597f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1260,982f, 6,037642f, 4474,517f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1261,782f, 6,057215f, 4482,466f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1262,96f, 6,067563f, 4490,437f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1264,329f, 6,072237f, 4498,424f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1265,811f, 6,077321f, 4506,386f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1267,457f, 6,084468f, 4514,298f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1269,324f, 6,09249f, 4522,149f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1273,365f, 6,086942f, 4537,976f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1275f, 6,066805f, 4546,128f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1275,946f, 6,036969f, 4554,452f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1276,051f, 6,001398f, 4562,852f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1275,277f, 5,962691f, 4571,221f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1273,628f, 5,923206f, 4579,455f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1271,213f, 5,888553f, 4587,456f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1268,219f, 5,861352f, 4595,206f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1264,766f, 5,836641f, 4602,744f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1260,847f, 5,808872f, 4610,069f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1256,466f, 5,784948f, 4617,1f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1247,27f, 5,779741f, 4630,578f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1242,783f, 5,786484f, 4637,325f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1238,428f, 5,795475f, 4644,141f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1234,252f, 5,807548f, 4651,047f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1230,314f, 5,823052f, 4658,068f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1226,677f, 5,842224f, 4665,224f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1223,418f, 5,86558f, 4672,532f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1218,068f, 5,900918f, 4687,68f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1213,201f, 5,889414f, 4703,295f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1210,09f, 5,84408f, 4711,116f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1205,798f, 5,769549f, 4718,545f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1200,132f, 5,689888f, 4725,03f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1193,557f, 5,631337f, 4730,417f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1186,41f, 5,586386f, 4734,887f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1178,851f, 5,548433f, 4738,549f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1170,989f, 5,515935f, 4741,439f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1162,923f, 5,488646f, 4743,611f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1154,727f, 5,465575f, 4745,125f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1146,449f, 5,445725f, 4746,019f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1138,146f, 5,435911f, 4746,316f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1121,688f, 5,477668f, 4745,644f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1105,408f, 5,557956f, 4744,25f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1089,164f, 5,559261f, 4742,697f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1080,923f, 5,502013f, 4741,589f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1072,565f, 5,414842f, 4739,431f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1064,889f, 5,365567f, 4734,623f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1059,568f, 5,388873f, 4727,598f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1055,666f, 5,407803f, 4720,172f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1052,518f, 5,438317f, 4712,311f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1050,606f, 5,484414f, 4703,981f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1049,978f, 5,527207f, 4695,536f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1050,32f, 5,563982f, 4687,143f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1051,528f, 5,608731f, 4678,794f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1053,977f, 5,684744f, 4670,554f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1058,438f, 5,817276f, 4662,88f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1065,158f, 5,950201f, 4657,048f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1072,834f, 6,018589f, 4653,191f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1088,437f, 6,040754f, 4647,848f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1103,715f, 6,016848f, 4642,64f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1118,555f, 5,994283f, 4636,359f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1133,098f, 5,979845f, 4629,259f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1147,476f, 5,969041f, 4621,717f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1161,703f, 5,953362f, 4613,968f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1168,401f, 5,916893f, 4609,761f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1174,301f, 5,844045f, 4604,83f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1178,971f, 5,747275f, 4598,886f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1181,984f, 5,633283f, 4592,084f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1182,94f, 5,533397f, 4584,684f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1182,275f, 5,482338f, 4576,968f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1180,746f, 5,457692f, 4569,186f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1178,518f, 5,42811f, 4561,651f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1175,377f, 5,400276f, 4554,488f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1171,379f, 5,381062f, 4547,715f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1166,68f, 5,367069f, 4541,393f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1161,333f, 5,356612f, 4535,657f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1155,31f, 5,352235f, 4530,644f);
	ADD_POINT_TO_PATH(Local_4.f_3932, -1148,714f, 5,35309f, 4526,277f);
	Local_4.f_3936 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathLeft02", 253);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1135,373f, 5,806557f, 4633,72f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1149,839f, 5,80213f, 4626,133f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1164,213f, 5,797422f, 4618,304f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1171,301f, 5,792217f, 4613,85f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1177,886f, 5,782605f, 4608,346f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1183,263f, 5,769932f, 4601,5f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1186,828f, 5,755045f, 4601,437f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1187,955f, 5,742011f, 4584,715f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1187,221f, 5,735349f, 4576,215f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1185,609f, 5,732138f, 4568,02f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1183,216f, 5,728288f, 4559,942f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1179,816f, 5,72467f, 4552,198f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1175,536f, 5,722178f, 4544,95f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1170,52f, 5,720367f, 4538,205f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1164,763f, 5,719022f, 4532,032f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1158,271f, 5,718471f, 4526,629f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1151,29f, 5,718598f, 4522,006f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1144,051f, 5,718926f, 4517,964f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1136,671f, 5,719253f, 4514,293f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1121,6f, 5,719931f, 4507,726f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1106,456f, 5,72058f, 4501,857f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1090,469f, 5,721517f, 4497,333f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1074,698f, 5,750889f, 4493,095f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1058,965f, 5,930134f, 4488,955f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1043,25f, 6,279551f, 4484,689f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1027,362f, 6,346888f, 4480,705f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1020,113f, 6,444349f, 4479,202f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1010,911f, 5,719435f, 4476,081f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1004,037f, 5,718475f, 4472,186f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1000,86f, 5,718522f, 4469,877f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -998,0108f, 5,718786f, 4467,704f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -995,605f, 5,72099f, 4464,856f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -991,5017f, 5,724348f, 4458,353f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -988,2366f, 5,727122f, 4451,224f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -985,3073f, 5,727865f, 4443,741f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -979,8027f, 5,728539f, 4428,569f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -976,9302f, 5,727405f, 4420,901f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -973,6716f, 5,72568f, 4413,324f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -969,5417f, 5,721516f, 4405,853f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -966,7538f, 5,719451f, 4402,443f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -963,4824f, 5,718413f, 4399,458f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -959,9626f, 5,718513f, 4397,124f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -953,5547f, 5,718582f, 4392,486f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -947,4856f, 5,718948f, 4387,422f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -941,9304f, 5,720227f, 4381,751f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -939,9025f, 5,976023f, 4378,357f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -936,7744f, 5,983704f, 4369,302f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -936,3048f, 5,994996f, 4364,784f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -937,4186f, 5,761675f, 4361,081f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -941,2257f, 5,767146f, 4354,511f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -945,2245f, 5,773633f, 4347,87f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -950,0599f, 5,779747f, 4341,786f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -961,4354f, 5,785583f, 4330,786f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -973,2217f, 5,784022f, 4319,712f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -984,6875f, 5,783199f, 4308,355f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -996,1275f, 5,78353f, 4297,055f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1001,865f, 5,780214f, 4291,725f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1008,155f, 5,737847f, 4287,085f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1021,659f, 5,589942f, 4277,67f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1028,955f, 5,793394f, 4273,245f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1035,644f, 5,786319f, 4268,056f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1041,6f, 5,777189f, 4261,915f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1046,281f, 5,765521f, 4254,627f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1049,442f, 5,757704f, 4246,736f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1051,747f, 5,751832f, 4238,635f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1053,056f, 5,746229f, 4230,065f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1052,597f, 5,735559f, 4221,473f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1050,688f, 5,717609f, 4213,477f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1047,342f, 5,725794f, 4205,39f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1043,622f, 5,723323f, 4197,697f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1038,614f, 5,720073f, 4190,721f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1032,611f, 5,71883f, 4184,749f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1026,25f, 5,718591f, 4179,46f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1012,575f, 5,629128f, 4168,343f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1000,271f, 5,708187f, 4157,501f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -988,2367f, 5,719173f, 4146,519f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -982,5063f, 5,719515f, 4140,789f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -977,0735f, 5,720243f, 4134,854f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -972,1855f, 5,721666f, 4128,552f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -967,8531f, 5,723412f, 4121,845f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -964,3043f, 5,726939f, 4114,839f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -961,7205f, 5,730623f, 4107,364f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -959,775f, 5,736619f, 4099,532f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -956,8619f, 5,734938f, 4083,875f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -956,1508f, 5,740875f, 4068,129f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -955,8215f, 5,741945f, 4052,208f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -955,9217f, 5,74167f, 4036,202f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -955,8318f, 5,775413f, 4020,199f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -955,5277f, 6,148316f, 4004,129f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -954,9531f, 6,373877f, 3996,037f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -954,0372f, 6,550397f, 3988,01f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -952,8586f, 6,673628f, 3980,027f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -951,3983f, 6,729096f, 3972,064f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -949,4935f, 6,734639f, 3964,119f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -946,8697f, 6,731711f, 3956,312f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -943,8415f, 6,730066f, 3949,005f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -940,1641f, 6,728528f, 3941,525f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -936,2864f, 6,727434f, 3934,406f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -931,871f, 6,725293f, 3927,441f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -926,4615f, 6,7234f, 3921,071f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -920,6224f, 6,722702f, 3915,38f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -914,3259f, 6,721941f, 3910,138f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -900,9894f, 6,984106f, 3900,915f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -887,4326f, 7,494834f, 3892,446f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -873,8792f, 7,800336f, 3883,984f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -860,4183f, 8,043692f, 3875,426f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -853,304f, 8,208943f, 3871,247f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -845,6763f, 8,267982f, 3868,01f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -837,8276f, 8,215632f, 3865,544f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -829,7684f, 8,02366f, 3863,901f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -822,0147f, 7,862151f, 3862,505f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -814,6074f, 7,844032f, 3860,477f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -807,2933f, 8,096318f, 3857,662f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -800,0347f, 8,644121f, 3854,541f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -793,0145f, 9,287499f, 3851,128f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -786,6042f, 9,84735f, 3847,106f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -781,0778f, 10,22547f, 3841,998f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -776,2019f, 10,52808f, 3836,032f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -772,0566f, 10,73585f, 3829,553f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -768,3044f, 10,87693f, 3822,554f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -763,9039f, 11,18721f, 3815,474f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -758,9793f, 11,50608f, 3809,07f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -754,0798f, 11,65705f, 3802,794f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -749,3989f, 11,72999f, 3796,462f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -745,2524f, 11,74805f, 3789,923f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -742,085f, 11,75699f, 3782,982f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -739,2625f, 11,82588f, 3775,35f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -738,4292f, 12,21953f, 3766,148f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -739,515f, 12,67535f, 3758,934f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -742,291f, 13,15933f, 3752,228f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -747,4305f, 13,24231f, 3745,515f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -752,0812f, 12,81122f, 3740,347f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -757,7f, 12,82255f, 3735,381f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -764,2831f, 12,83941f, 3732,891f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -771,7869f, 12,84712f, 3732,465f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -778,6799f, 12,85479f, 3733,768f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -784,3284f, 12,85534f, 3737,573f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -794,7677f, 12,85427f, 3749,518f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -805,3362f, 12,85503f, 3761,693f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -816,4803f, 12,85512f, 3773,109f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -828,183f, 12,8555f, 3784,138f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -833,718f, 12,85484f, 3789,641f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -838,6288f, 12,8689f, 3795,551f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -842,9528f, 12,85174f, 3802,004f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -847,1267f, 12,85213f, 3808,832f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -852,2178f, 12,85522f, 3815,588f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -857,654f, 12,95775f, 3821,073f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -864,8331f, 12,90881f, 3826,178f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -872,1204f, 13,43961f, 3830,335f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -879,9669f, 14,45017f, 3833,141f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -887,866f, 15,75085f, 3834,873f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -895,7513f, 17,29974f, 3836,036f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -903,7039f, 18,98562f, 3836,681f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -911,7562f, 20,54104f, 3836,655f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -919,8057f, 22,03956f, 3835,87f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -927,7509f, 23,6755f, 3834,173f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -935,3455f, 25,41526f, 3831,56f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -942,5819f, 27,23943f, 3828,571f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -956,8165f, 31,22788f, 3822,849f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -971,2964f, 34,79997f, 3817,78f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -986,3895f, 38,01827f, 3814,294f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -994,1779f, 39,60529f, 3812,076f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1001,523f, 41,11135f, 3809,427f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1008,657f, 42,61747f, 3808,062f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1016,304f, 44,26701f, 3807,527f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1023,997f, 46,06279f, 3807,251f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1032,526f, 47,88272f, 3807,754f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1040,229f, 49,49857f, 3808,484f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1047,822f, 51,00785f, 3809,669f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1055,149f, 52,33006f, 3811,562f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1058,563f, 52,8666f, 3812,901f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1061,752f, 53,22633f, 3814,773f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1068,066f, 53,67779f, 3819,359f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1074,09f, 53,89687f, 3824,39f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1079,823f, 53,88797f, 3829,865f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1085,834f, 53,8465f, 3835,381f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1092,166f, 53,85807f, 3840,541f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1098,793f, 53,9215f, 3845,316f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1105,674f, 53,97863f, 3849,7f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1112,768f, 54,00947f, 3853,709f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1120,054f, 54,0167f, 3857,368f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1127,592f, 54,16778f, 3860,577f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1135,324f, 54,53357f, 3863,256f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1143,216f, 55,10535f, 3865,428f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1147,344f, 55,4192f, 3866,249f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1151,624f, 55,65039f, 3866,617f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1155,953f, 55,79433f, 3866,471f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1164,42f, 55,77272f, 3864,429f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1171,854f, 55,41621f, 3860,419f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1178,664f, 55,49917f, 3855,874f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1185,144f, 56,08202f, 3850,911f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1194,221f, 57,605f, 3843,026f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1206,18f, 59,30284f, 3832,45f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1212,132f, 60,01007f, 3826,941f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1217,783f, 60,81016f, 3821,128f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1223,151f, 61,6909f, 3815,053f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1228,108f, 62,63165f, 3808,41f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1230,249f, 63,12564f, 3804,667f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1231,789f, 63,6465f, 3800,47f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1232,429f, 64,6002f, 3791,844f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1231,427f, 65,33739f, 3783,523f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1229,325f, 66,14195f, 3775,449f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1226,453f, 67,10284f, 3768,108f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,992f, 68,0313f, 3760,728f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,423f, 68,90243f, 3753f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,292f, 69,59129f, 3745,109f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,739f, 70,42628f, 3729,216f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1225,054f, 70,66214f, 3721,099f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,839f, 70,83361f, 3712,915f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1224,082f, 70,9419f, 3704,764f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1222,794f, 70,98749f, 3696,685f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1221,085f, 70,98733f, 3688,757f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1219,185f, 70,98646f, 3680,898f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1214,708f, 70,98443f, 3665,339f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1209,741f, 70,98427f, 3650,071f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1206,859f, 70,98511f, 3634,854f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1200,791f, 70,98718f, 3619,488f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1197,861f, 70,99055f, 3603,944f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1196,039f, 70,99644f, 3588,071f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1196,562f, 70,99514f, 3579,858f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1195,445f, 71,05641f, 3571,434f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1193,499f, 71,6735f, 3563,694f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1192,292f, 71,96944f, 3555,757f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1189,903f, 71,98612f, 3547,57f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1186,161f, 71,9854f, 3540,01f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1181,403f, 72,02337f, 3533,126f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1175,67f, 72,28766f, 3526,883f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1168,869f, 73,05917f, 3521,846f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1162,444f, 73,86556f, 3517,709f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1150,207f, 74,05002f, 3507,332f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1138,742f, 73,99307f, 3496,293f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1133,144f, 73,991f, 3490,42f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1129,549f, 74,00018f, 3487,364f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1124,919f, 74,0386f, 3486,048f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1116,582f, 74,13136f, 3485,417f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1100,333f, 73,96496f, 3485,181f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1084,135f, 74,43977f, 3485,332f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1076,184f, 74,9102f, 3485,722f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1068,222f, 74,47739f, 3485,674f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1052,193f, 73,15029f, 3485,365f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1036,104f, 72,85516f, 3485,078f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1027,79f, 72,93509f, 3485,324f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1023,979f, 72,92101f, 3485,805f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1020,765f, 72,63551f, 3485,204f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -1013,018f, 72,18282f, 3483,078f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -997,7407f, 71,76324f, 3477,777f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -982,5764f, 70,97371f, 3472,886f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -967,1315f, 70,97633f, 3467,912f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -951,5455f, 70,97694f, 3463,685f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -943,6253f, 70,97783f, 3461,79f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -935,5196f, 70,97959f, 3460,401f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -927,3661f, 70,98123f, 3459,666f);
	ADD_POINT_TO_PATH(Local_4.f_3936, -911,3311f, 70,98124f, 3458,59f);
	Local_4.f_3940 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathMiddle02", 253);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1134,236f, 5,8932f, 4631,49f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1148,657f, 5,885585f, 4623,925f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1162,958f, 5,875391f, 4616,136f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1169,851f, 5,854555f, 4611,806f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1176,093f, 5,813324f, 4606,588f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1181,117f, 5,758603f, 4600,193f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1184,406f, 5,694164f, 4592,761f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1185,448f, 5,637704f, 4584,7f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1184,748f, 5,608843f, 4576,592f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1183,178f, 5,594915f, 4568,603f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1180,867f, 5,578199f, 4560,797f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1177,596f, 5,562473f, 4553,343f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1173,457f, 5,55162f, 4546,333f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1168,6f, 5,543718f, 4539,799f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1163,048f, 5,537817f, 4533,844f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1156,791f, 5,535353f, 4528,637f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1150,002f, 5,535844f, 4524,142f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1142,892f, 5,537223f, 4520,172f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1135,602f, 5,53861f, 4516,546f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1120,674f, 5,541504f, 4510,042f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1105,642f, 5,544285f, 4504,215f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1089,794f, 5,548445f, 4499,734f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1074,065f, 5,578891f, 4495,509f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1058,314f, 5,757578f, 4491,365f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1042,601f, 6,107047f, 4487,1f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1026,794f, 6,176657f, 4483,133f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1019,605f, 6,274896f, 4481,66f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1009,889f, 5,53921f, 4478,36f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1002,645f, 5,535264f, 4474,256f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -999,3707f, 5,535486f, 4471,877f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -996,282f, 5,536702f, 4469,521f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -993,6202f, 5,546337f, 4466,372f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -989,2995f, 5,560961f, 4459,529f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -985,9261f, 5,573025f, 4452,171f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -982,9738f, 5,576253f, 4444,631f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -977,4501f, 5,579187f, 4429,409f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -974,6102f, 5,574256f, 4421,826f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -971,4119f, 5,566758f, 4414,387f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -967,5032f, 5,54862f, 4407,301f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -964,938f, 5,539601f, 4404,163f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -961,9437f, 5,535017f, 4401,43f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -958,5675f, 5,535413f, 4399,19f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -952,0106f, 5,535762f, 4394,444f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -945,7937f, 5,537392f, 4389,256f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -939,8555f, 5,543041f, 4383,394f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -937,5388f, 5,818242f, 4379,43f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -934,3099f, 5,851605f, 4369,925f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -933,7791f, 5,897154f, 4364,733f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -934,9518f, 5,756458f, 4360,18f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -939,0208f, 5,746474f, 4353,318f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -943,1744f, 5,77453f, 4346,427f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -948,1821f, 5,800981f, 4340,125f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -959,7462f, 5,826225f, 4328,935f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -971,4796f, 5,819474f, 4317,91f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -982,9185f, 5,815921f, 4306,58f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -994,3733f, 5,817755f, 4295,265f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1000,272f, 5,830024f, 4289,789f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1006,713f, 5,800843f, 4285,035f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1020,291f, 5,659299f, 4275,566f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1027,549f, 5,859408f, 4271,169f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1033,979f, 5,829461f, 4266,18f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1039,645f, 5,790006f, 4260,339f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1044,04f, 5,739526f, 4253,497f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1047,064f, 5,705705f, 4245,942f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1049,294f, 5,680271f, 4238,113f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1050,561f, 5,656011f, 4229,824f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1050,114f, 5,609732f, 4221,804f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1048,242f, 5,568009f, 4214,139f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1045,077f, 5,567346f, 4206,441f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1041,468f, 5,556599f, 4198,964f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1036,724f, 5,542423f, 4192,352f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1030,952f, 5,536955f, 4186,612f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1024,695f, 5,535855f, 4181,409f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1010,974f, 5,446678f, 4170,255f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -998,6155f, 5,526327f, 4159,366f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -986,5057f, 5,538333f, 4148,313f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -980,7084f, 5,539887f, 4142,517f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -975,1727f, 5,543084f, 4136,47f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -970,1487f, 5,549296f, 4129,994f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -965,7005f, 5,556901f, 4123,109f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -961,9981f, 5,572236f, 4115,8f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -959,3184f, 5,588236f, 4108,053f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -957,2746f, 5,6142f, 4099,821f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -954,3896f, 5,607066f, 4084,275f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -953,6492f, 5,632827f, 4068,18f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -953,3193f, 5,637478f, 4052,198f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -953,4194f, 5,636459f, 4036,205f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -953,3306f, 5,669189f, 4020,219f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -953,0317f, 6,036619f, 4004,244f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -952,4655f, 6,255448f, 3996,269f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -951,5596f, 6,426911f, 3988,334f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -950,3926f, 6,545784f, 3980,431f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -948,9511f, 6,595737f, 3972,572f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -947,0886f, 6,592571f, 3964,801f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -944,5366f, 6,579942f, 3957,205f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -941,5627f, 6,572809f, 3950,027f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -937,9496f, 6,566131f, 3942,677f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -934,1263f, 6,56138f, 3935,657f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -929,8508f, 6,552069f, 3928,908f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -924,6578f, 6,543849f, 3922,794f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -918,9487f, 6,541007f, 3917,229f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -912,8004f, 6,539028f, 3912,111f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -899,6501f, 6,80104f, 3903,019f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -886,1073f, 7,311841f, 3894,56f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -872,5535f, 7,617404f, 3886,096f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -859,079f, 7,860683f, 3877,529f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -852,1763f, 8,027406f, 3873,474f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -844,8204f, 8,090827f, 3870,354f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -837,2043f, 8,043861f, 3867,96f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -829,3477f, 7,857824f, 3866,36f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -821,4907f, 7,693147f, 3864,945f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -813,807f, 7,668f, 3862,841f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -806,3342f, 7,917069f, 3859,968f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -798,9907f, 8,463169f, 3856,817f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -791,8137f, 9,104648f, 3853,326f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -785,0797f, 9,663852f, 3849,089f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -779,2392f, 10,04657f, 3843,686f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -774,1791f, 10,35512f, 3837,493f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -769,887f, 10,57052f, 3830,785f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -766,1157f, 10,71284f, 3823,752f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -761,8689f, 11,01475f, 3816,918f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -757,0136f, 11,33105f, 3810,605f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -752,0992f, 11,48257f, 3804,309f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -747,3495f, 11,55822f, 3797,885f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -743,0648f, 11,58362f, 3791,127f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -739,7612f, 11,60432f, 3783,897f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -736,9158f, 11,68684f, 3775,954f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -735,9284f, 12,11746f, 3766,1f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -737,1089f, 12,61561f, 3758,249f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -740,1691f, 13,15104f, 3750,887f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -745,4832f, 13,23998f, 3743,938f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -750,3026f, 12,84398f, 3738,565f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -756,3509f, 12,89455f, 3733,246f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -763,7985f, 12,96762f, 3730,426f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -771,8624f, 13,00092f, 3729,965f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -779,6077f, 13,0339f, 3731,442f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -786,0942f, 13,03603f, 3735,804f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -796,6697f, 13,03136f, 3747,905f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -807,1339f, 13,05029f, 3759,964f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -818,2629f, 13,03505f, 3771,365f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -829,8892f, 13,03672f, 3782,319f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -835,5477f, 13,03383f, 3787,945f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -840,6339f, 13,02696f, 3794,066f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -845,0702f, 13,0202f, 3800,684f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -849,224f, 13,02172f, 3807,479f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -854,0472f, 13,0345f, 3813,887f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -859,3073f, 13,14074f, 3819,188f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -866,2068f, 13,09193f, 3824,096f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -873,1486f, 13,62031f, 3828,052f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -880,607f, 14,62341f, 3830,712f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -888,2789f, 15,91799f, 3832,387f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -896,0075f, 17,46226f, 3833,517f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -903,7782f, 19,14138f, 3834,148f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -911,6075f, 20,68658f, 3834,136f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -919,4017f, 22,17265f, 3833,381f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -927,0413f, 23,79194f, 3831,747f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -934,4057f, 25,51742f, 3829,21f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -941,5747f, 27,33735f, 3826,244f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -955,8919f, 31,33212f, 3820,475f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -970,5831f, 34,9161f, 3815,356f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -985,7844f, 38,14059f, 3811,843f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -993,3462f, 39,71386f, 3809,695f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1000,762f, 41,22411f, 3807,026f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1008,354f, 42,75584f, 3805,554f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1016,153f, 44,41296f, 3805f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1023,984f, 46,21563f, 3804,705f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1032,684f, 48,04164f, 3805,227f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1040,505f, 49,66168f, 3805,97f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1048,287f, 51,17693f, 3807,187f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1055,941f, 52,50744f, 3809,17f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1059,649f, 53,04916f, 3810,628f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1063,099f, 53,41011f, 3812,663f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1069,592f, 53,86097f, 3817,383f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1075,751f, 54,07876f, 3822,529f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1081,556f, 54,06876f, 3828,072f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1087,465f, 54,02864f, 3833,495f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1093,682f, 54,04102f, 3838,562f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1100,19f, 54,10463f, 3843,251f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1106,956f, 54,16133f, 3847,561f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1113,94f, 54,1913f, 3851,508f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1121,108f, 54,19717f, 3855,108f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1128,483f, 54,34557f, 3858,248f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1136,051f, 54,70795f, 3860,869f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1143,762f, 55,2752f, 3862,99f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1147,686f, 55,58286f, 3863,772f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1151,683f, 55,80349f, 3864,118f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1155,698f, 55,93362f, 3863,982f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1163,493f, 55,8745f, 3862,094f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1170,53f, 55,48947f, 3858,281f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1177,205f, 55,56045f, 3853,841f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1183,559f, 56,13196f, 3848,978f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1192,559f, 57,64809f, 3841,153f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1204,514f, 59,34522f, 3830,586f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1210,381f, 60,04421f, 3825,156f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1215,945f, 60,83524f, 3819,431f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1221,226f, 61,70633f, 3813,455f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1225,992f, 62,62358f, 3807,07f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1227,974f, 63,09416f, 3803,605f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1229,347f, 63,58071f, 3799,86f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1229,927f, 64,49069f, 3791,918f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1228,971f, 65,20655f, 3783,983f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1226,955f, 65,99414f, 3776,251f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1224,05f, 66,95808f, 3768,836f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1222,507f, 67,90881f, 3761,03f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1221,923f, 68,79246f, 3753,084f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1221,794f, 69,48701f, 3745,099f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1222,244f, 70,32916f, 3729,089f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1222,555f, 70,55847f, 3721,078f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1222,344f, 70,72f, 3713,062f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1221,602f, 70,81897f, 3705,076f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1220,339f, 70,85599f, 3697,156f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1218,649f, 70,85145f, 3689,315f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1216,764f, 70,84748f, 3681,518f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1212,329f, 70,83864f, 3666,101f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1207,365f, 70,83795f, 3650,844f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1202,465f, 70,84161f, 3635,567f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1198,358f, 70,85059f, 3620,06f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1195,386f, 70,86522f, 3604,3f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1193,525f, 70,89076f, 3588,073f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1194,056f, 70,88498f, 3579,94f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1192,998f, 70,9225f, 3571,952f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1191,044f, 71,54188f, 3564,168f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1189,836f, 71,83852f, 3556,218f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1187,585f, 71,83248f, 3548,504f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1184,017f, 71,81818f, 3541,291f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1179,438f, 71,84818f, 3534,665f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1173,988f, 72,10578f, 3528,73f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1167,539f, 72,87503f, 3523,975f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1160,842f, 73,68239f, 3519,633f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1148,575f, 73,86784f, 3509,218f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1136,974f, 73,81283f, 3498,053f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1131,417f, 74,04391f, 3492,225f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1128,346f, 73,8141f, 3489,613f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1124,47f, 73,87106f, 3488,515f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1116,443f, 74,1596f, 3487,91f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1100,343f, 74,0112f, 3487,682f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1084,241f, 74,47945f, 3487,839f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1076,225f, 74,95425f, 3488,225f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1068,198f, 74,56047f, 3488,17f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1052,158f, 73,16695f, 3487,862f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1036,046f, 72,99928f, 3487,575f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1028,018f, 72,936f, 3487,815f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1023,911f, 72,76588f, 3488,332f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1020,229f, 72,4659f, 3487,645f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -1012,324f, 72,00925f, 3485,475f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -997,0131f, 71,58893f, 3480,163f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -981,7374f, 70,79697f, 3475,234f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -966,4396f, 70,80285f, 3470,309f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -950,9299f, 70,8054f, 3466,102f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -943,1152f, 70,80919f, 3464,232f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -935,1954f, 70,8168f, 3462,877f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -927,1932f, 71,02916f, 3462,157f);
	ADD_POINT_TO_PATH(Local_4.f_3940, -911,1588f, 70,82391f, 3461,081f);
	Local_4.f_3944 = CREATE_PATH_IN_LAYOUT(Local_4, "GoToElPresidioPathRight02", 253);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1133,098f, 5,979845f, 4629,259f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1147,476f, 5,969041f, 4621,717f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1161,703f, 5,953362f, 4613,968f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1168,401f, 5,916893f, 4609,761f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1174,301f, 5,844045f, 4604,83f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1178,971f, 5,747275f, 4598,886f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1181,984f, 5,633283f, 4592,084f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1182,94f, 5,533397f, 4584,684f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1182,275f, 5,482338f, 4576,968f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1180,746f, 5,457692f, 4569,186f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1178,518f, 5,42811f, 4561,651f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1175,377f, 5,400276f, 4554,488f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1171,379f, 5,381062f, 4547,715f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1166,68f, 5,367069f, 4541,393f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1161,333f, 5,356612f, 4535,657f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1155,31f, 5,352235f, 4530,644f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1148,714f, 5,35309f, 4526,277f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1141,734f, 5,355521f, 4522,381f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1134,533f, 5,357968f, 4518,799f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1119,748f, 5,363078f, 4512,357f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1104,827f, 5,36799f, 4506,573f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1089,118f, 5,375372f, 4502,136f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1073,433f, 5,406892f, 4497,922f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1057,663f, 5,585023f, 4493,775f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1041,953f, 5,934543f, 4489,511f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1026,226f, 6,006425f, 4485,563f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1019,096f, 6,105442f, 4484,118f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1008,867f, 5,358986f, 4480,639f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1001,253f, 5,352054f, 4476,327f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -997,8815f, 5,352451f, 4473,877f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -994,5531f, 5,354618f, 4471,338f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -991,6353f, 5,371684f, 4467,887f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -987,0973f, 5,397574f, 4460,707f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -983,6157f, 5,418928f, 4453,119f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -980,6404f, 5,424642f, 4445,522f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -975,0975f, 5,429834f, 4430,248f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -972,2903f, 5,421107f, 4422,751f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -969,1522f, 5,407836f, 4415,45f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -965,4648f, 5,375724f, 4408,75f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -963,1223f, 5,35975f, 4405,882f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -960,405f, 5,351619f, 4403,401f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -957,1724f, 5,352313f, 4401,256f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,4665f, 5,352943f, 4396,402f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -944,1018f, 5,355837f, 4391,09f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -937,8428f, 5,365856f, 4384,757f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -935,2073f, 5,66046f, 4380,527f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -931,825f, 5,719506f, 4370,493f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -931,2533f, 5,799311f, 4364,861f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -932,5639f, 5,753867f, 4359,478f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -936,8158f, 5,725802f, 4352,125f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -941,1243f, 5,775429f, 4344,984f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -946,3042f, 5,822216f, 4338,464f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -958,0569f, 5,866866f, 4327,083f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -969,7376f, 5,854927f, 4316,108f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -981,1495f, 5,848643f, 4304,804f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -992,6191f, 5,851979f, 4293,475f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -998,6795f, 5,879833f, 4287,853f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1005,271f, 5,863839f, 4282,985f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1018,923f, 5,728656f, 4273,462f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1026,143f, 5,925423f, 4269,094f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1032,314f, 5,872603f, 4264,304f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1037,689f, 5,802823f, 4258,764f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1041,798f, 5,713531f, 4252,367f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1044,686f, 5,653705f, 4245,148f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1046,841f, 5,608711f, 4237,592f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1048,066f, 5,565793f, 4229,583f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1047,661f, 5,483905f, 4222,154f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1045,76f, 5,418409f, 4214,691f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1042,812f, 5,408897f, 4207,493f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1039,315f, 5,389876f, 4200,23f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1034,835f, 5,364774f, 4193,983f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1029,293f, 5,355081f, 4188,474f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1023,14f, 5,353119f, 4183,358f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1009,373f, 5,264228f, 4172,167f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -996,9601f, 5,344467f, 4161,23f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -984,7747f, 5,357493f, 4150,108f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -978,9105f, 5,36026f, 4144,245f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -973,2719f, 5,365923f, 4138,086f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -968,1118f, 5,376926f, 4131,435f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -963,5479f, 5,390391f, 4124,372f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -959,692f, 5,417532f, 4116,76f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -956,9163f, 5,445849f, 4108,743f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -954,8558f, 5,491781f, 4100,355f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -951,9172f, 5,479195f, 4084,674f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -951,1476f, 5,52478f, 4068,23f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,8171f, 5,533012f, 4052,189f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,917f, 5,531249f, 4036,208f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,8294f, 5,562966f, 4020,239f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,5356f, 5,924921f, 4004,359f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -949,9778f, 6,137019f, 3996,501f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -949,0821f, 6,303424f, 3988,657f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -947,9266f, 6,417939f, 3980,834f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -946,5039f, 6,462377f, 3973,08f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -944,6838f, 6,450502f, 3965,483f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -942,2036f, 6,428173f, 3958,098f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -939,2839f, 6,415551f, 3951,049f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -935,735f, 6,403734f, 3943,829f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -931,9662f, 6,395327f, 3936,908f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -927,8306f, 6,378846f, 3930,375f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -922,8542f, 6,364298f, 3924,517f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -917,2751f, 6,359311f, 3919,079f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -911,275f, 6,356115f, 3914,083f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -898,3108f, 6,617973f, 3905,124f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -884,782f, 7,128849f, 3896,673f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -871,2279f, 7,434471f, 3888,208f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -857,7397f, 7,677674f, 3879,633f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -851,0486f, 7,845869f, 3875,701f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -843,9645f, 7,913671f, 3872,697f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -836,5811f, 7,872089f, 3870,376f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -828,9268f, 7,691988f, 3868,819f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -820,9667f, 7,524143f, 3867,384f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -813,0066f, 7,491968f, 3865,204f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -805,3752f, 7,73782f, 3862,275f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -797,9466f, 8,282217f, 3859,092f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -790,6128f, 8,921795f, 3855,523f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -783,5552f, 9,480354f, 3851,072f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -777,4006f, 9,867661f, 3845,374f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -772,1563f, 10,18216f, 3838,954f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -767,7173f, 10,40518f, 3832,017f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -763,927f, 10,54875f, 3824,95f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -759,8338f, 10,84229f, 3818,363f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -755,0479f, 11,15603f, 3812,14f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -750,1187f, 11,30808f, 3805,825f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -745,3001f, 11,38645f, 3799,307f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -740,8771f, 11,4192f, 3792,332f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -737,4374f, 11,45164f, 3784,812f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -734,5056f, 11,54781f, 3776,606f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -733,4277f, 12,0154f, 3766,051f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -734,7028f, 12,55588f, 3757,564f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -738,0471f, 13,14275f, 3749,547f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -743,5359f, 13,25328f, 3742,36f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -748,524f, 12,87675f, 3736,782f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -755,0018f, 12,96655f, 3731,111f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -763,3138f, 13,09582f, 3727,96f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -771,938f, 13,15472f, 3727,465f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -780,5355f, 13,213f, 3729,117f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -787,86f, 13,21671f, 3734,036f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -798,5718f, 13,20844f, 3746,291f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -808,9315f, 13,2143f, 3758,236f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -820,0454f, 13,21498f, 3769,621f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -831,5953f, 13,21794f, 3780,5f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -837,3773f, 13,21282f, 3790,25f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -842,6389f, 13,20064f, 3792,58f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -847,1876f, 13,18867f, 3799,363f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -851,3213f, 13,19132f, 3806,126f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -855,8765f, 13,21379f, 3812,187f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -860,9606f, 13,32374f, 3817,304f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -867,5804f, 13,27506f, 3822,014f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -874,1768f, 13,801f, 3825,77f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -881,2471f, 14,79666f, 3828,283f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -888,6919f, 16,08513f, 3829,902f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -896,2638f, 17,62479f, 3830,999f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -903,8526f, 19,29715f, 3831,615f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -911,4589f, 20,83212f, 3831,618f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -918,9978f, 22,30574f, 3830,891f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -926,3317f, 23,90837f, 3829,321f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -933,4659f, 25,61957f, 3826,861f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -940,5675f, 27,43527f, 3823,917f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -954,9673f, 31,43637f, 3818,101f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -969,8698f, 35,03223f, 3812,932f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -985,1794f, 38,26291f, 3809,391f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -992,5145f, 39,82243f, 3807,314f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1000f, 41,33687f, 3804,624f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1008,05f, 42,8942f, 3803,047f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1016,003f, 44,55892f, 3802,473f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1023,97f, 46,36847f, 3802,16f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1032,842f, 48,20056f, 3802,7f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1040,781f, 49,82479f, 3803,456f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1048,752f, 51,34602f, 3804,705f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1056,734f, 52,68482f, 3806,779f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1060,734f, 53,23171f, 3808,355f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1064,447f, 53,59389f, 3810,552f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1071,118f, 54,04414f, 3815,406f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1077,412f, 54,26065f, 3820,668f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1083,289f, 54,24956f, 3826,28f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1089,096f, 54,21078f, 3831,609f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1095,199f, 54,22398f, 3836,582f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1101,587f, 54,28775f, 3841,185f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1108,237f, 54,34403f, 3845,422f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1115,112f, 54,37314f, 3849,307f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1122,163f, 54,37763f, 3852,848f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1129,374f, 54,52336f, 3855,918f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1136,778f, 54,88232f, 3858,482f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1144,308f, 55,44504f, 3860,552f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1148,028f, 55,74652f, 3861,294f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1151,742f, 55,95658f, 3861,618f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1155,444f, 56,07291f, 3861,493f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1162,566f, 55,9763f, 3859,759f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1169,205f, 55,56273f, 3856,142f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1175,747f, 55,62173f, 3851,808f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1181,974f, 56,1819f, 3847,045f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1190,898f, 57,69118f, 3839,281f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1202,848f, 59,38761f, 3828,722f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1208,631f, 60,07836f, 3823,37f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1214,108f, 60,86033f, 3817,735f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,3f, 61,72176f, 3811,857f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1223,876f, 62,61552f, 3805,729f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1225,699f, 63,06269f, 3802,542f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1226,904f, 63,51492f, 3799,251f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1227,425f, 64,38119f, 3791,992f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1226,514f, 65,0757f, 3784,443f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1224,585f, 65,84633f, 3777,052f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1221,648f, 66,81333f, 3769,565f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1220,022f, 67,78631f, 3761,332f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,424f, 68,6825f, 3753,167f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,295f, 69,38274f, 3745,089f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,748f, 70,23204f, 3728,962f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1220,055f, 70,4548f, 3721,057f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,849f, 70,60639f, 3713,208f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1219,122f, 70,69604f, 3705,389f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1217,884f, 70,72449f, 3697,628f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1216,212f, 70,71556f, 3689,872f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1214,343f, 70,70851f, 3682,137f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1209,95f, 70,69285f, 3666,863f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1204,99f, 70,69164f, 3651,617f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1200,07f, 70,69811f, 3636,281f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1195,925f, 70,714f, 3620,632f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1192,911f, 70,73989f, 3604,655f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1191,012f, 70,78509f, 3588,076f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1191,549f, 70,77481f, 3580,022f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1190,552f, 70,7886f, 3572,47f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1188,589f, 71,41026f, 3564,642f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1187,38f, 71,70761f, 3556,679f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1185,267f, 71,67885f, 3549,439f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1181,873f, 71,65097f, 3542,572f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1177,473f, 71,67297f, 3536,203f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1172,306f, 71,92391f, 3530,576f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1166,21f, 72,69089f, 3526,105f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1159,24f, 73,49921f, 3521,557f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1146,943f, 73,68567f, 3511,104f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1135,207f, 73,63258f, 3499,813f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1129,689f, 73,62847f, 3494,03f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1127,143f, 73,62802f, 3491,863f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1124,021f, 73,70352f, 3490,983f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1116,305f, 74,13409f, 3490,404f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1100,353f, 74,00043f, 3490,184f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1084,347f, 74,45547f, 3490,346f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1076,266f, 74,92156f, 3490,728f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1068,175f, 74,58199f, 3490,666f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1052,123f, 73,04243f, 3490,36f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1035,988f, 72,78756f, 3490,073f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1028,245f, 72,93597f, 3490,305f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1023,843f, 72,61075f, 3490,859f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1019,692f, 72,29629f, 3490,086f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -1011,63f, 71,83569f, 3487,871f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -996,2854f, 71,4146f, 3482,549f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -980,8984f, 70,62023f, 3477,583f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -965,7478f, 70,62937f, 3472,706f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -950,3143f, 70,63386f, 3468,52f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -942,605f, 70,64056f, 3466,676f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -934,8712f, 70,65401f, 3465,353f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -927,0203f, 70,66651f, 3464,648f);
	ADD_POINT_TO_PATH(Local_4.f_3944, -910,9865f, 70,66656f, 3463,572f);
	Local_4.f_3948 = CREATE_PATH_IN_LAYOUT(Local_4, "JavierEscapePath", 180);
	ADD_POINT_TO_PATH(Local_4.f_3948, -711,3683f, 63,34286f, 3288,101f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -708,7253f, 63,29396f, 3290,709f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -708.0f, 63,24704f, 3292.0f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -707,5876f, 63,25432f, 3293,255f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -707,9922f, 63,24704f, 3294,507f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -708,5057f, 63,24705f, 3295,385f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -709,4666f, 63,24706f, 3295,996f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -710,7141f, 63,24706f, 3296,337f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -712.0f, 63,24707f, 3296.0f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -720,5388f, 63,27147f, 3288,519f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -722,5153f, 63,2425f, 3287,079f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -725,0862f, 63,19426f, 3285,578f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -727,754f, 63,1217f, 3284,418f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -731,6191f, 62,82606f, 3283,943f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -735,6673f, 62,851f, 3283,731f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -739,7661f, 62,87146f, 3283,814f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -743,7775f, 62,87633f, 3283,984f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -746,8448f, 62,8908f, 3284,209f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -749,5541f, 62,90491f, 3285,2f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -751,962f, 62,88725f, 3286,841f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -755,2214f, 62,86406f, 3289,639f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -758,8165f, 63,34135f, 3293,231f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -761,7979f, 63,4962f, 3295,946f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -764,6745f, 63,59306f, 3298,38f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -767,5882f, 63,51194f, 3301,109f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -770,5731f, 63,36651f, 3303,84f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -773,8553f, 63,37444f, 3306,223f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -777,376f, 63,5569f, 3308,218f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -781,0204f, 63,83305f, 3309,937f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -784,769f, 64,09174f, 3311,424f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -788,6269f, 64,32468f, 3312,611f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -792,568f, 64,52782f, 3313,475f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -796,5459f, 64,70277f, 3314,13f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -800,5487f, 64,85353f, 3314,581f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -804,5544f, 64,97483f, 3314,939f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -808,5548f, 65,05773f, 3315,331f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -812,5497f, 65,09316f, 3315,705f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -816,4729f, 65,14629f, 3316,468f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -820,3025f, 65,23765f, 3317,639f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -824,0666f, 65,34473f, 3319,018f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -827,7746f, 65,46474f, 3320,551f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -831,428f, 65,60461f, 3322,206f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -834,9924f, 65,77509f, 3324,032f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -838,3831f, 66,00155f, 3326,138f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -841,4197f, 66,30336f, 3328,708f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -844,1104f, 66,62198f, 3331,644f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -846,4981f, 66,95394f, 3334,835f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -848,6597f, 67,2634f, 3338,193f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -850,6277f, 67,515f, 3341,675f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -852,3666f, 67,7031f, 3345,278f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -853,7909f, 67,86241f, 3349,016f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -854,9411f, 68,02092f, 3352,852f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -855,8995f, 68,17317f, 3356,744f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -856,7292f, 68,32169f, 3360,672f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -857,5089f, 68,46851f, 3364,611f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -858,2314f, 68,61543f, 3368,561f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -858,8749f, 68,76015f, 3372,527f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -859,5209f, 68,90523f, 3376,498f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -860,2822f, 69,05805f, 3380,452f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -861,1394f, 69,21917f, 3384,385f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -862,0915f, 69,39256f, 3388,287f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -862,8591f, 69,58295f, 3392,212f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -863,2332f, 69,80197f, 3396,176f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -862,8184f, 70,04666f, 3400,119f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -861,3588f, 70,18726f, 3403,812f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -859,1434f, 70,26456f, 3407,14f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -856,8216f, 70,44227f, 3410,406f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -854,4203f, 70,68024f, 3413,613f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -851,9397f, 70,88638f, 3416,761f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -849,1593f, 71,0194f, 3419,845f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -847,5529f, 71,04826f, 3421,686f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -846,8812f, 71,059f, 3422,868f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -845,5363f, 71,0626f, 3426,934f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -845,0449f, 71,04357f, 3430,965f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -844,8879f, 71,03301f, 3435,007f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -845,1332f, 71,01544f, 3439,062f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -846,1205f, 70,99432f, 3443,01f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -847,7532f, 70,97278f, 3446,746f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -849,9717f, 70,94543f, 3449,852f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -853,2055f, 70,9381f, 3454,019f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -856,297f, 70,92555f, 3456,919f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -859,4809f, 70,91173f, 3458,437f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -863,0139f, 70,90682f, 3458,926f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -867,0312f, 70,90664f, 3459,116f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -871,0513f, 70,90647f, 3459,242f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -875,0724f, 70,90636f, 3459,292f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -879,0896f, 70,90637f, 3459,295f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -883,1026f, 70,9065f, 3459,363f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -887,1133f, 70,90668f, 3459,5f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -891,1201f, 70,90694f, 3459,713f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -895,1211f, 70,90723f, 3460,019f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -899,1208f, 70,9073f, 3460,388f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -903,1256f, 70,9072f, 3460,729f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -907,1322f, 70,9071f, 3461,047f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -911,1411f, 70,90701f, 3461,337f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -915,1507f, 70,90697f, 3461,602f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -919,1593f, 70,90698f, 3461,868f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -923,1676f, 70,90699f, 3462,139f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -927,1755f, 70,90701f, 3462,413f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -931,1782f, 70,90731f, 3462,695f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -935,162f, 70,90807f, 3463,133f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -939,1241f, 70,90902f, 3463,737f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -943,0624f, 70,91006f, 3464,485f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -946,9727f, 70,911f, 3465,375f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -950,866f, 70,91151f, 3466,353f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -954,7543f, 70,91178f, 3467,357f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -958,6337f, 70,91208f, 3468,394f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -962,505f, 70,91238f, 3469,46f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -966,3678f, 70,91267f, 3470,558f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -970,2206f, 70,91315f, 3471,688f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -974,058f, 70,91354f, 3472,865f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -977,8732f, 70,91536f, 3474,106f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -981,6475f, 70,9138f, 3475,48f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -985,4412f, 71,00479f, 3476,824f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -989,2632f, 71,19381f, 3478,069f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -993,0968f, 71,46007f, 3479,243f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -996,9309f, 71,70052f, 3480,412f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1000,761f, 71,8594f, 3481,604f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1004,765f, 71,91789f, 3482,886f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1008,631f, 71,961f, 3484,642f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1012,345f, 72,11939f, 3485,758f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1016,199f, 72,33228f, 3486,86f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1019,921f, 72,56789f, 3487,841f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1024,076f, 72,84449f, 3488,478f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1028,036f, 72,81503f, 3488,068f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1032,027f, 72,79305f, 3487,839f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1036,041f, 72,77901f, 3487,831f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1040,061f, 72,77218f, 3488,024f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1044,095f, 72,72894f, 3488,047f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1048,126f, 72,80434f, 3488,055f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1052,147f, 73,07365f, 3488,125f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1056,154f, 73,43069f, 3488,219f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1060,162f, 73,77029f, 3488,3f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1064,176f, 74,08922f, 3488,372f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1068,189f, 74,40048f, 3488,439f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1072,206f, 74,66235f, 3488,48f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1076,23f, 74,83215f, 3488,476f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1080,255f, 74,69751f, 3488,317f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1084,257f, 74,36131f, 3488,092f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1088,267f, 74,1255f, 3487,965f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1092,29f, 73,96524f, 3487,901f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1096,317f, 73,92729f, 3487,923f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1100,345f, 73,88788f, 3487,933f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1104,37f, 73,78585f, 3487,883f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1108,396f, 73,75658f, 3487,882f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1112,416f, 73,88976f, 3487,992f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1116,428f, 74,01527f, 3488,168f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1120,438f, 74,00838f, 3488,44f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1124,424f, 73,96917f, 3488,77f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1128,221f, 73,94859f, 3489,848f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1131,238f, 73,96103f, 3492,412f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1133,972f, 73,96224f, 3495,352f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1136,791f, 73,96518f, 3498,234f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1139,657f, 73,99635f, 3501,067f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1142,532f, 74,03194f, 3503,886f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1145,423f, 74,03941f, 3506,695f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1148,407f, 74,01608f, 3509,414f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1151,526f, 73,99034f, 3511,972f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1154,666f, 73,96121f, 3514,488f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1157,717f, 73,91679f, 3517,102f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1160,69f, 73,82991f, 3519,829f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1163,949f, 73,52105f, 3522,223f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1167,414f, 73,01218f, 3524,207f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1170,726f, 72,57552f, 3526,403f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1173,819f, 72,25436f, 3528,928f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1176,658f, 72,07417f, 3531,753f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1179,238f, 72,00495f, 3534,824f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1181,61f, 71,97623f, 3538,062f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1183,799f, 71,97791f, 3541,422f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1185,72f, 71,98363f, 3544,938f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1190,113f, 72,03241f, 3549,286f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1196,471f, 72,38989f, 3551,812f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1212.0f, 73,31084f, 3556f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1236f, 76,30293f, 3556f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1260f, 77,30193f, 3556f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1284f, 78,30589f, 3552.0f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1300f, 80,82104f, 3556f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1316.0f, 81,31762f, 3552f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1328.0f, 79,30989f, 3556.0f);
	ADD_POINT_TO_PATH(Local_4.f_3948, -1336.0f, 75,29413f, 3556.0f);
	Local_4.f_3952 = CREATE_PATH_IN_LAYOUT(Local_4, "RebelInfantryLeftPath", 17);
	ADD_POINT_TO_PATH(Local_4.f_3952, -710,8337f, 63,24502f, 3301,49f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -715,6863f, 67,52581f, 3297,516f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -716,8691f, 67,51852f, 3296,514f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -707,7196f, 67,51295f, 3285,836f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -706,6153f, 66,35146f, 3284,545f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -704,0492f, 66,37936f, 3283,79f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -706,6153f, 66,35146f, 3284,545f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -707,7196f, 67,51295f, 3285,836f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -716,8691f, 67,51852f, 3296,514f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -718,4429f, 67,53825f, 3298,866f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -718,4966f, 67,55978f, 3301,153f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -716,6309f, 67,52219f, 3303,407f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -713,026f, 71,77287f, 3306,404f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -710,5391f, 71,76808f, 3308,494f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -711,1556f, 71,77788f, 3309,236f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -712,539f, 73,24532f, 3310,905f);
	ADD_POINT_TO_PATH(Local_4.f_3952, -714,0364f, 73,23795f, 3312,481f);
	Local_4.f_3956 = CREATE_PATH_IN_LAYOUT(Local_4, "RebelInfantryRightPath", 25);
	ADD_POINT_TO_PATH(Local_4.f_3956, -677,1996f, 63,25449f, 3305,323f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -674,6346f, 65,9099f, 3308,319f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -673,8963f, 65,91682f, 3309,186f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -671,6689f, 65,91035f, 3307,318f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -671,683f, 65,91035f, 3307,309f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -670,8907f, 65,65601f, 3304,744f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -672,3124f, 65,69542f, 3302,119f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -674,9222f, 65,95959f, 3299,938f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -678,2172f, 65,92817f, 3296,96f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -681,7532f, 66,0336f, 3294,24f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -685,2664f, 66,02058f, 3292,531f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -689,202f, 65,92088f, 3291,545f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -693,5606f, 65,8597f, 3290,609f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -696,9006f, 65,91045f, 3290,224f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -700,7192f, 66,35207f, 3288,613f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -702,0834f, 66,38006f, 3286,046f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -702,9987f, 66,35999f, 3283,189f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -705,9948f, 66,81089f, 3279,797f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -709,1455f, 66,80955f, 3277,021f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -710,9854f, 66,81105f, 3276,683f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -710,9976f, 72,9548f, 3276,688f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -724,8558f, 72,94796f, 3293,516f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -727,7578f, 72,942f, 3297,888f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -728,9569f, 71,68002f, 3299,311f);
	ADD_POINT_TO_PATH(Local_4.f_3956, -729,5563f, 71,74165f, 3300,879f);
	return;
}

void Function_166(int iParam0, int iParam1) //Position: 0x15567 / 87399
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

bool Function_167() //Position: 0x155B0 / 87472
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_173())
		{
			return 0;
		}
		if (!Function_168(&bLocal_1002))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1037))
		{
			bLocal_1037 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_107(), 976, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			return 0;
		}
	}
	return 1;
}

bool Function_168(bool bParam0) //Position: 0x15603 / 87555
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_172();
	iVar1 = 0;
	if (!Function_7(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_171(bParam0[iVar03], 8);
		}
		else if (Function_170())
		{
			iVar1 = 1;
			Function_171(bParam0[iVar03], 8);
		}
		Function_171(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_7(bParam0[iVar03], 4))
		{
			if (!Function_7(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_7(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_7(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_171(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_7(bParam0[iVar03], 4))
		{
			if (!Function_7(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_171(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_171(bParam0[iVar03], 2);
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
	Function_169();
	return 1;
}

void Function_169() //Position: 0x1597E / 88446
{
	if (!Function_131(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_170() //Position: 0x159BE / 88510
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

void Function_171(var uParam0, int iParam1) //Position: 0x159E9 / 88553
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_172() //Position: 0x159FA / 88570
{
	if (!Function_131(128))
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

bool Function_173() //Position: 0x15A3C / 88636
{
	Function_176(&Local_4 + 4, 976, 2, 0);
	Function_176(&Local_4 + 4, 977, 2, 0);
	Function_176(&Local_4 + 4, 978, 2, 0);
	Function_176(&Local_4 + 4, 979, 2, 0);
	Function_176(&Local_4 + 4, 626, 2, 0);
	Function_176(&Local_4 + 4, 1179, 2, 0);
	Function_176(&Local_4 + 4, 1199, 2, 0);
	Function_176(&Local_4 + 4, 980, 2, 0);
	Function_176(&Local_4 + 4, 391, 2, 0);
	Function_176(&Local_4 + 4, 392, 2, 0);
	Function_176(&Local_4 + 4, 393, 2, 0);
	Function_176(&Local_4 + 4, 981, 2, 0);
	Function_176(&Local_4 + 4, 379, 2, 0);
	Function_176(&Local_4 + 4, 380, 2, 0);
	Function_176(&Local_4 + 4, 381, 2, 0);
	Function_176(&Local_4 + 4, 395, 2, 0);
	Function_176(&Local_4 + 4, 394, 2, 0);
	Function_176(&Local_4 + 4, 521, 2, 0);
	Function_176(&Local_4 + 4, 522, 2, 0);
	Function_176(&Local_4 + 4, 523, 2, 0);
	Function_176(&Local_4 + 4, 529, 2, 0);
	Function_176(&Local_4 + 4, 530, 2, 0);
	Function_176(&Local_4 + 4, 531, 2, 0);
	Function_174(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_cheer", 1, 0);
	if (Function_168(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_174(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15BBA / 89018
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_175(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_171(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_175(var uParam0, int iParam1, int iParam2) //Position: 0x15BF2 / 89074
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_171(uParam0[iVar03], 4);
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

var Function_176(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x15CB6 / 89270
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_171(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_171(uParam0[iVar03], 8);
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

void Function_177() //Position: 0x15D86 / 89478
{
	Function_174(&bLocal_1002, "p_gen_crateTnt01x", 0, 0);
	Function_174(&bLocal_1002, "p_gen_crateTnt02x", 0, 0);
	Function_174(&bLocal_1002, "stand_surrender", 5, 0);
	Function_174(&bLocal_1002, "custom/stand_surrender", 8, 0);
	Function_174(&bLocal_1002, "Rebel06", 10, 0);
	return;
}

void Function_178(int iParam0, bool bParam1) //Position: 0x15E18 / 89624
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_189(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_139(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_187(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_186(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_139(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_46();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_104();
	Function_185();
	Function_155("");
	Function_184(0);
	Function_183();
	Function_37();
	Function_36();
	ENABLE_JOURNAL_REPLAY(0);
	Function_182();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_148(0, 0x40400000);
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_181(13);
	Function_181(14);
	Function_181(25);
	Function_181(24);
	Function_181(12);
	Function_181(27);
	Function_181(26);
	Function_181(15);
	Function_180();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_179(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

struct<16> Function_179(int iParam0) //Position: 0x1623C / 90684
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_180() //Position: 0x16261 / 90721
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(bVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(bVar1, Global_16516))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_16516);
			}
			RELEASE_OBJECT_REF(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_181(int iParam0) //Position: 0x162D5 / 90837
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_182() //Position: 0x162F5 / 90869
{
	bool bVar0;
	
	bVar0 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	bVar0 = GET_LASSO_TARGET(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DETACH_LASSO(bVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, false);
	return;
}

void Function_183() //Position: 0x16332 / 90930
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_184(int iParam0) //Position: 0x16346 / 90950
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_40())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_185() //Position: 0x1637B / 91003
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

struct<16> Function_186(int iParam0) //Position: 0x1638D / 91021
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_187(int iParam0) //Position: 0x163B7 / 91063
{
	if (!Function_188(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_188(int iParam0) //Position: 0x163D7 / 91095
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_189(int iParam0, int iParam1) //Position: 0x163EE / 91118
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
			Function_190(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_190(int iParam0) //Position: 0x16470 / 91248
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

void Function_191() //Position: 0x164BE / 91326
{
	return;
}

void Function_192(int iParam0) //Position: 0x164C4 / 91332
{
	Function_193(iParam0);
	iLocal_1061 = 1;
	iLocal_1032 = 100;
	return;
}

void Function_193(int iParam0) //Position: 0x164D8 / 91352
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_155("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_196(2) || Function_196(8)) || Function_196(9)) || Function_196(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_155("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_155("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_155("");
	}
	else if (iParam0 == 8)
	{
		Function_195();
		Function_194();
	}
	else if (iParam0 == 4)
	{
		Function_195();
	}
	return;
}

void Function_194() //Position: 0x165CF / 91599
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_195() //Position: 0x165E8 / 91624
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_196(bool bParam0) //Position: 0x165F4 / 91636
{
	int iVar0;
	
	if (!Function_200(bParam0))
	{
		return 0;
	}
	iVar0 = Function_199(bParam0);
	if (!Function_197(Function_199(bParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_197(int iParam0) //Position: 0x1662A / 91690
{
	if (!Function_188(iParam0))
	{
		return 0;
	}
	if (!Function_198(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_198(int iParam0) //Position: 0x1664E / 91726
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

var Function_199(bool bParam0) //Position: 0x16663 / 91747
{
	if (!Function_200(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_200(bool bParam0) //Position: 0x1667D / 91773
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_201(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x16693 / 91795
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_18())
	{
		*uParam9 = 1;
		*uParam10 = 0;
		*iParam11 = 0;
	}
	if (((Global_3381 && Global_63096) && !HUD_IS_FADED()) && iParam7 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_202() //Position: 0x166D1 / 91857
{
	struct<13> Var0;
	
	Local_1195 = 1000.0f;
	Local_1195.f_4 = 530.0f;
	Local_1195.f_8 = 1270.0f;
	Local_1195.f_12 = 610.0f;
	bLocal_1207 = GUI_MAKE_WINDOW(GUI_MAIN_WINDOW(), &Local_1195, "DebugGUI", "");
	Local_1199 = 0,85f;
	Local_1199.f_4 = 0,85f;
	Local_1199.f_8 = 0,85f;
	Local_1199.f_12 = 1.0f;
	Local_1203 = 0.0f;
	Local_1203.f_4 = 0.0f;
	Local_1203.f_8 = 0.0f;
	Local_1203.f_12 = 0,5f;
	GUI_MAKE_OVERLAY(bLocal_1207, &Local_1195, "DEBUGMENUBACK", &Local_1203, &Local_1203, 0);
	Var0 = 900.0f;
	Var0.f_4 = 540.0f;
	Var0.f_8 = 1200.0f;
	Var0.f_12 = 560.0f;
	Var4 = 900.0f;
	Var4.f_4 = 560.0f;
	Var4.f_8 = 1200.0f;
	Var4.f_12 = 580.0f;
	Var8 = 900.0f;
	Var8.f_4 = 580.0f;
	Var8.f_8 = 1200.0f;
	Var8.f_12 = 600.0f;
	bLocal_1208 = GUI_MAKE_TEXT(bLocal_1207, &Var0, "Camera Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_1208, &Local_1199);
	GUI_SET_TEXT(bLocal_1208, "C - Camera Toggle");
	bLocal_1209 = GUI_MAKE_TEXT(bLocal_1207, &Var4, "Spew Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_1209, &Local_1199);
	GUI_SET_TEXT(bLocal_1209, "S - Spew Mode Toggle");
	bLocal_1210 = GUI_MAKE_TEXT(bLocal_1207, &Var8, "Reset Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_1210, &Local_1199);
	GUI_SET_TEXT(bLocal_1210, "nG - Reset");
	GUI_SET_TEXT_JUSTIFY(bLocal_1208, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_1209, 2);
	GUI_SET_TEXT_JUSTIFY(bLocal_1210, 2);
	return;
}

void Function_203(int iParam0) //Position: 0x168DD / 92381
{
	Function_123(iParam0, 0.0f);
	return;
}

