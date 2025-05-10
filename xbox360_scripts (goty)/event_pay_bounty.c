//Decompiled with MagicRDR v1.0
//Function Count : 101
//Statics Count : 61
//Natives Count : 246
//Parameters Count : 1

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
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	bool bLocal_14 = true;
	var uLocal_15 = 0;
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
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	bool bLocal_35 = false;
	vector3 vLocal_36 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_39 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_42 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_45 = { 0.0f, 0.0f, 0.0f };
	float fLocal_48 = 0.0f;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	float fLocal_51 = 0.0f;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	int iLocal_54 = 0;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	float fLocal_57 = 0.0f;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iLocal_10 = 0;
	iLocal_58 = 0;
	iLocal_11 = 0;
	bLocal_13 = Global_26314;
	bLocal_33 = uScriptParam_0;
	bLocal_53 = true;
	Function_99(&bLocal_14, "custom/pay_bounty", 8, 0);
	Function_99(&bLocal_14, "pay_bounty", 5, 0);
	if (bLocal_33)
	{
		Function_99(&bLocal_14, "$/fragments/p_inv_ShopLetterPardon01x", 0, 0);
	}
	else
	{
		Function_99(&bLocal_14, "$/fragments/p_inv_TreasureMoneyStack01x", 0, 0);
	}
	iVar1 = Function_98();
	if (iVar1 != 4294967295)
	{
		Function_97(&bLocal_14, iVar1, 3, 0);
	}
	iLocal_59 = StackVal;
	if (Global_29006 == Global_30707[2])
	{
		iLocal_59 = 1;
	}
	Function_96();
	SET_ACTOR_CUTSCENE_MODE(Function_95(), 1);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_95(), false);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_95(), 0);
	fVar2 = GET_CURRENT_GAME_TIME();
	bLocal_12 = 250;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_11)
		{
			case 0x00000000:
				bLocal_12 = 100;
				if (Function_90(&bLocal_14) && (IS_ACTOR_VALID(bLocal_27) || (fVar2 + 1.0f) > GET_CURRENT_GAME_TIME()))
				{
					GET_POSITION(bLocal_27, &vLocal_36);
					Function_88();
					if (VDIST(Function_88(), vLocal_36) < 2.0f || !IS_ACTOR_VALID(bLocal_27))
					{
						iLocal_34 = 1;
					}
					if (!iLocal_34)
					{
						if (!Function_87(bLocal_27, 1, 0x41700000))
						{
							iLocal_34 = 1;
						}
					}
					if (iLocal_34)
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = 3;
					}
					if (IS_ACTOR_VALID(bLocal_27))
					{
						ACTOR_RESET_ANIMS(bLocal_27, 1);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 0);
					}
					iLocal_11 = 2;
					bLocal_12 = false;
				}
				else if (!IS_ACTOR_VALID(bLocal_27))
				{
					Function_83();
				}
				break;
			
			case 0x00000002:
				bLocal_12 = Function_65(&iVar0);
				Function_61();
				break;
			
			case 0x00000003:
				if (Function_60() < 0 || bLocal_33)
				{
					if (bLocal_33)
					{
						DELETE_ITEM(Function_59(9), Function_95(), 1);
						Function_58(484, 1, 0, 0);
						if (Function_57(iLocal_59) > 5000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(31))
							{
								AWARD_ACHIEVEMENT(31);
							}
						}
						if (Function_57(iLocal_59) >= Function_56(254))
						{
							Function_55(256, Function_57(iLocal_59), 0);
						}
						Function_52(iLocal_59, 0);
						Function_51();
						if (IS_BLIP_VALID(Global_26361.f_28))
						{
							REMOVE_BLIP(Global_26361.f_28);
						}
						Global_13111 = 4294967295;
					}
					else if (Function_60() > Function_57(iLocal_59))
					{
						if (Function_57(iLocal_59) >= Function_56(254))
						{
							Function_55(254, Function_57(iLocal_59), 0);
						}
						Function_50(Function_57(iLocal_59), 1);
						Function_52(iLocal_59, 0);
						Function_51();
						if (IS_BLIP_VALID(Global_26361.f_28))
						{
							REMOVE_BLIP(Global_26361.f_28);
						}
						Global_13111 = 4294967295;
					}
					else
					{
						if (Function_60() >= Function_56(254))
						{
							Function_55(254, Function_60(), 0);
						}
						Function_34(iLocal_59, Function_60());
						Function_50(Function_60(), 1);
						Function_30("bounty_cleared_partial", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_29(Global_76846, 262144))
						{
							Function_23(Function_95(), 262144, 1, 0);
						}
					}
					PLAY_SOUND_FRONTEND("HUD_PAY_BOUNTY_MASTER");
					Function_22(8388608);
					Function_21();
				}
				Function_20();
				Function_19(0x20000000);
				bLocal_12 = false;
				iLocal_11 = 4;
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_12 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_12);
	}
	if (bLocal_56)
	{
		Function_5();
	}
	SET_ACTOR_CUTSCENE_MODE(Function_95(), 0);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_95(), true);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_95(), 1);
	if (IS_ACTOR_VALID(bLocal_27))
	{
		SET_DRAW_ACTOR(bLocal_27, 1);
		SET_ACTOR_CUTSCENE_MODE(bLocal_27, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(bLocal_27, true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_27, 1);
		SET_ACTOR_CAN_BUMP(bLocal_27, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_27, 1);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_27, 1);
	}
	Function_1(&bLocal_14);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x39F / 927
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

void Function_2(var uParam0, int iParam1) //Position: 0x3C5 / 965
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

void Function_3(var uParam0, int iParam1) //Position: 0x4F3 / 1267
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(int iParam0, int iParam1) //Position: 0x50D / 1293
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5() //Position: 0x52A / 1322
{
	UI_POP("CutsceneWithMessages");
	Function_14(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
	if (IS_ACTOR_VALID(bLocal_27))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 1);
		if (bLocal_53)
		{
			TASK_CLEAR(bLocal_27);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_27, 0);
		}
		else
		{
			TASK_STAND_STILL(bLocal_27, -1.0f, 0, 0);
		}
		if (bLocal_53)
		{
			if (Global_29006 == Global_30640[0])
			{
				Function_6(&Global_6298, &Global_7189, 12, 0);
			}
			else if (Global_29006 == Global_30668[0])
			{
				Function_6(&Global_6563, &Global_7581, 18, 0);
			}
			else if (Global_29006 == Global_30658[4])
			{
				Function_6(&Global_6537, &Global_7543, 1, 0);
			}
			else if (Global_29006 == Global_30693[0])
			{
				Function_6(&Global_6815, &Global_7954, 7, 0);
			}
			else if (Global_29006 == Global_30693[1])
			{
				Function_6(&Global_6866, &Global_8030, 8, 0);
			}
			else if (Global_29006 == Global_30707[2])
			{
				Function_6(&Global_6933, &Global_8129, 2, 0);
			}
			else if (Global_29006 == Global_30723[1])
			{
				Function_6(&Global_7148, &Global_8447, 0, 0);
			}
			else if (Global_29006 == Global_30723[2])
			{
				Function_6(&Global_7113, &Global_8395, 8, 0);
			}
			else if (Global_29006 == Global_30717[0])
			{
				Function_6(&Global_7035, &Global_8279, 20, 0);
			}
		}
	}
	RESET_ANIM_SET_FOR_ACTOR(Function_95(), 0);
	MAKE_ACTOR_READY_FOR_ACTION(Function_95(), 1);
	if (IS_OBJECT_VALID(bLocal_32))
	{
		DESTROY_OBJECT(bLocal_32);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_49);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_49);
	DESTROY_OBJECT(bLocal_50);
	DESTROY_OBJECT(bLocal_49);
	CAMERA_RESET(0);
	bLocal_56 = false;
	return;
}

void Function_6(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6A8 / 1704
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_13(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_13(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_13(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_12(uParam0[iVar02], 8);
	}
	Function_12(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_11(StackVal);
	if (bParam3)
	{
		Function_7(uParam0, uParam1, iParam2, 0);
	}
}

void Function_7(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x742 / 1858
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_10(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_9(Global_29007), Function_8(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_13(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_13(uParam0[iParam22], 1) && !bParam3)
	{
		Function_10(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_9(Global_29007), Function_8(Global_29007), false, 0);
	}
}

int Function_8(int iParam0) //Position: 0x891 / 2193
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_9(int iParam0) //Position: 0x8BC / 2236
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_10(var uParam0, int iParam1) //Position: 0x8F0 / 2288
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_11(bool bParam0) //Position: 0x8FF / 2303
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0x999 / 2457
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x9B0 / 2480
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x9CC / 2508
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
		bVar0 = Function_95();
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
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_58(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_17();
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
	Function_15(uParam9);
}

void Function_15(int iParam0) //Position: 0xABC / 2748
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_16();
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

void Function_16() //Position: 0xB6B / 2923
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_17() //Position: 0xBDD / 3037
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_18() //Position: 0xBF2 / 3058
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_19(var uParam0) //Position: 0xBFB / 3067
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_20() //Position: 0xC0E / 3086
{
	int iVar0;
	
	Global_26960 = Function_57(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_21() //Position: 0xC5C / 3164
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		(*&Global_26401 + 36[iVar0181][35])[0] = StackVal;
		iVar0++;
	}
	return;
}

void Function_22(int iParam0) //Position: 0xC89 / 3209
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_23(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xCA6 / 3238
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_25(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_24(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_24(char* cParam0, int iParam1) //Position: 0xD12 / 3346
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

bool Function_25(bool bParam0, var uParam1, int iParam2) //Position: 0xD49 / 3401
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
		if (Function_27(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_26(uVar0))
		{
			case 0x00000002:
				if (!Function_29(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_26(char* cParam0) //Position: 0xDC1 / 3521
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

int Function_27(int iParam0) //Position: 0xE62 / 3682
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_28(&iVar1, 2147483648);
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

void Function_28(int iParam0, int iParam1) //Position: 0xE9F / 3743
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_29(int iParam0, int iParam1) //Position: 0xEB2 / 3762
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xEC5 / 3781
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_31(int iParam0) //Position: 0xF40 / 3904
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0xF7F / 3967
{
	if (Function_33(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_33(var uParam0, int iParam1) //Position: 0xF9A / 3994
{
	return (uParam0 && iParam1) == 0;
}

void Function_34(int iParam0, bool bParam1) //Position: 0xFA7 / 4007
{
	if (!Function_49(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_35(222, Global_26401[iParam0], 0);
		if (Function_56(222) <= 0)
		{
			Function_55(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_55((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_35((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_35(222, bParam1, 0);
	}
	return;
}

int Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x1030 / 4144
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
	Function_48(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_36(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x122B / 4651
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_47(390))), 32);
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
					bVar19 = (Function_46(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_46(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_44(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_41(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_37(), &Var9);
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

var Function_37() //Position: 0x1858 / 6232
{
	int iVar0;
	
	return iVar0;
}

var Function_38(int iParam0) //Position: 0x1860 / 6240
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1871 / 6257
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0, bool bParam1) //Position: 0x1966 / 6502
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x197F / 6527
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_43(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x19E4 / 6628
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, bool bParam1) //Position: 0x19F6 / 6646
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A08 / 6664
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
	if (((Function_45(iParam0) != 19 || Function_45(iParam0) != 17) || Function_45(iParam0) != 10) || Function_45(iParam0) != 9)
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

int Function_45(int iParam0) //Position: 0x1B38 / 6968
{
	return Global_35278[iParam020].f_48;
}

float Function_46(int iParam0) //Position: 0x1B47 / 6983
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_47(int iParam0) //Position: 0x1B80 / 7040
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_48(int iParam0) //Position: 0x1BBD / 7101
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

bool Function_49(int iParam0) //Position: 0x1D57 / 7511
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_50(bool bParam0, bool bParam1) //Position: 0x1D6C / 7532
{
	bool bVar0;
	
	bVar0 = Function_56(0);
	if ((Function_56(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_35(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_56(0));
	return 1;
}

void Function_51() //Position: 0x1DFC / 7676
{
	return;
}

void Function_52(int iParam0, bool bParam1) //Position: 0x1E02 / 7682
{
	if (!Function_49(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_53((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_53(222, TO_FLOAT((Function_56(223) + Function_56(224))), 0);
	return;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E43 / 7747
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_54(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_48(iParam0);
	if (bParam2)
	{
		Function_36(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x20AF / 8367
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

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x22F3 / 8947
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
		Function_54(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_48(iParam0);
	if (bParam2)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_56(int iParam0) //Position: 0x258E / 9614
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_57(int iParam0) //Position: 0x25CF / 9679
{
	if (!Function_49(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x25E7 / 9703
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
	Function_54(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

var Function_59(bool bParam0) //Position: 0x2807 / 10247
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

bool Function_60() //Position: 0x28F8 / 10488
{
	return Function_56(0);
}

void Function_61() //Position: 0x2902 / 10498
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_52)
	{
		if (fLocal_51 + 1.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_52)
			{
				iLocal_58++;
				if (iLocal_58 != 0)
				{
					if ((*&Global_26401 + 36[Global_29004181][Function_64(iLocal_58)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_58 > 35)
				{
					bLocal_52 = true;
				}
			}
			if (!bLocal_52)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_26401 + 36[Global_29004181][Function_64(iLocal_58)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(1.0f, &cVar1, Function_62((*&Global_26401 + 36[Global_29004181][Function_64(iLocal_58)5])[3]), &Global_26998[Function_64(iLocal_58)18] + 4, 0, 0, 2, 0);
				fLocal_51 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_62(bool bParam0) //Position: 0x29E9 / 10729
{
	bool bVar0;
	
	bVar0 = Function_63();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_63() //Position: 0x2A00 / 10752
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

int Function_64(int iParam0) //Position: 0x2ABC / 10940
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0;
			break;
		
		case 0x00000001:
			return 12;
			break;
		
		case 0x00000002:
			return 11;
			break;
		
		case 0x00000003:
			return 22;
			break;
		
		case 0x00000004:
			return 21;
			break;
		
		case 0x00000005:
			return 7;
			break;
		
		case 0x00000006:
			return 6;
			break;
		
		case 0x00000007:
			return 13;
			break;
		
		case 0x00000008:
			return 8;
			break;
		
		case 0x00000009:
			return 16;
			break;
		
		case 0x0000000A:
			return 17;
			break;
		
		case 0x0000000B:
			return 19;
			break;
		
		case 0x0000000C:
			return 20;
			break;
		
		case 0x0000000D:
			return 14;
			break;
		
		case 0x0000000E:
			return 9;
			break;
		
		case 0x0000000F:
			return 18;
			break;
		
		case 0x00000010:
			return 15;
			break;
		
		case 0x00000011:
			return 10;
			break;
		
		case 0x00000012:
			return 5;
			break;
		
		case 0x00000013:
			return 3;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		case 0x00000015:
			return 1;
			break;
		
		case 0x00000016:
			return 2;
			break;
		
		case 0x00000017:
			return 28;
			break;
		
		case 0x00000018:
			return 30;
			break;
		
		case 0x00000019:
			return 35;
			break;
		
		case 0x0000001A:
			return 23;
			break;
		
		case 0x0000001B:
			return 24;
			break;
		
		case 0x0000001C:
			return 25;
			break;
		
		case 0x0000001D:
			return 26;
			break;
		
		case 0x0000001E:
			return 27;
			break;
		
		case 0x0000001F:
			return 29;
			break;
		
		case 0x00000020:
			return 31;
			break;
		
		case 0x00000021:
			return 32;
			break;
		
		case 0x00000022:
			return 33;
			break;
		
		case 0x00000023:
			return 34;
			break;
	}
	return 0;
}

int Function_65(int iParam0) //Position: 0x2C72 / 11378
{
	int iVar0;
	
	iVar0 = 250;
	if (IS_ACTOR_VALID(bLocal_27))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(bLocal_27, false);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_27, 0);
		SET_ACTOR_CAN_BUMP(bLocal_27, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_27, 0);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_27, 0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_90(&bLocal_14))
			{
				bLocal_31 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
				Function_79(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
				UI_PUSH("CutsceneWithMessages");
				bLocal_56 = true;
				bLocal_50 = Function_76(Global_26314, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_31))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_31), "Player_Pay_Bounty", &vLocal_39);
					TELEPORT_ACTOR(Function_95(), &vLocal_39, 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(Function_95(), 1.0f, false, 1092616192);
					SET_ACTOR_HEADING(Function_95(), (GET_OBJECT_HEADING(bLocal_31) + 180.0f), 1);
				}
				SET_ANIM_SET_FOR_ACTOR(Function_95(), "pay_bounty", 0);
				SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/ring_bell");
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/ring_bell"))
			{
				if (IS_ACTOR_VALID(bLocal_27))
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_27, 61, Function_95(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
				HUD_FADE_OUT(0.5f, 1f, 1);
				fLocal_57 = GET_CURRENT_GAME_TIME();
				*iParam0 = 2;
			}
			break;
		
		case 0x00000002:
			while (!HUD_IS_FADED() || !Function_90(&bLocal_14))
			{
				WAIT(false);
			}
			iLocal_34 = 0;
			bLocal_35 = true;
			if (Global_29006 == Global_30640[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30668[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30658[4])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30693[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30693[1])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30707[2])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30723[1])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30723[2])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			else if (Global_29006 == Global_30717[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			}
			if (GET_CURRENT_GAME_TIME() > (fLocal_57 + 3.0f))
			{
				if (IS_ACTOR_VALID(bLocal_27))
				{
					if (Function_87(bLocal_27, 1, 0x41700000))
					{
						*iParam0 = 3;
						if (IS_ACTOR_VALID(bLocal_27))
						{
							ACTOR_RESET_ANIMS(bLocal_27, 1);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 0);
						}
					}
				}
				else
				{
					Function_83();
				}
			}
			else
			{
				*iParam0 = 3;
				if (IS_ACTOR_VALID(bLocal_27))
				{
					ACTOR_RESET_ANIMS(bLocal_27, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 0);
				}
			}
			break;
		
		case 0x00000003:
			Function_74("UPDATE_BSTUT_CUTSCENE: BS_INIT_PAYTUT", 11);
			if (Function_90(&bLocal_14))
			{
				if (!bLocal_35)
				{
					Function_79(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					bLocal_56 = true;
					bLocal_50 = Function_76(Global_26314, 0, 0, 0);
				}
				Function_73();
				Function_74("UPDATE_BSTUT_CUTSCENE: BS_RUN_PAY", 11);
				if (bLocal_33)
				{
					bLocal_32 = CREATE_PROP_IN_LAYOUT(Global_26314, "nmoneyProp", "p_inv_ShopLetterPardon01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
				}
				else
				{
					bLocal_32 = CREATE_PROP_IN_LAYOUT(Global_26314, "nmoneyProp", "p_inv_TreasureMoneyStack01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
				}
				Function_70(&uLocal_28);
				SET_ANIM_SET_FOR_ACTOR(Function_95(), "pay_bounty", 0);
				if (IS_ACTOR_VALID(bLocal_27))
				{
					if (bLocal_55)
					{
						SET_DRAW_ACTOR(bLocal_27, 1);
					}
					SET_ACTOR_CUTSCENE_MODE(bLocal_27, 1);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_27, false);
					SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_27, 0);
					SET_ACTOR_CAN_BUMP(bLocal_27, 0);
					TASK_STAND_STILL(bLocal_27, -1.0f, 0, 0);
					ACTOR_RESET_ANIMS(bLocal_27, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_27, "pay_bounty", 1);
				}
				if (bLocal_33)
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/give_letter");
					SET_ACTION_NODE_FOR_ACTOR(bLocal_27, "Pay_Bounty/take_letter");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/pay_cash");
					SET_ACTION_NODE_FOR_ACTOR(bLocal_27, "Pay_Bounty/take_cash");
				}
				if (DECOR_CHECK_EXIST(Function_95(), "bountyPayCheckFlag"))
				{
					DECOR_REMOVE(Function_95(), "bountyPayCheckFlag");
				}
				if (!bLocal_33)
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_95(), "PLAYER_PAY_FINE_LOCAL", bLocal_27, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_95(), "PLAYER_PAY_BOUNTY_WITH_PARDON_LETTER", bLocal_27, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				ATTACH_PROP_TO_ANIM(Function_95(), bLocal_32, "wrist_l_Attachment", "grab", true, ATTACH_SLOT_FROM_STRING("A"));
				*iParam0 = 4;
				iVar0 = 0;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_54)
			{
				if (HUD_IS_FADED() || HUD_IS_FADING())
				{
					HUD_FADE_IN(0.5f, 1065353216);
				}
				iLocal_54 = 1;
			}
			if (!IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/pay_cash") && !IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/give_letter"))
			{
				*iParam0 = 5;
				iVar0 = 0;
			}
			if (Function_66(&uLocal_28, 5.25f))
			{
				*iParam0 = 5;
				iVar0 = 0;
			}
			break;
		
		case 0x00000005:
			Function_74("UPDATE_BSTUT_CUTSCENE: BS_CLEANUP_PAYTUT", 11);
			iLocal_11 = 3;
			Function_5();
			iVar0 = 0;
	}
	return iVar0;
}

bool Function_66(int iParam0, float fParam1) //Position: 0x333A / 13114
{
	if (Function_69(iParam0))
	{
		if (Function_67(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_67(int iParam0) //Position: 0x3356 / 13142
{
	if (Function_69(iParam0))
	{
		if (Function_68(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_68(int iParam0) //Position: 0x341E / 13342
{
	return Function_33(*iParam0, 2);
}

bool Function_69(int iParam0) //Position: 0x342B / 13355
{
	return Function_33(*iParam0, 1);
}

void Function_70(int iParam0) //Position: 0x3438 / 13368
{
	if (!Function_69(iParam0))
	{
		Function_71(iParam0, 0.0f);
	}
	return;
}

void Function_71(var uParam0, float fParam1) //Position: 0x344D / 13389
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(uParam0, 1);
	Function_28(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x346E / 13422
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

void Function_73() //Position: 0x347D / 13437
{
	float fVar0;
	vector3 vVar1;
	
	bLocal_31 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
	if (IS_OBJECT_VALID(bLocal_31))
	{
		fVar0 = GET_OBJECT_HEADING(bLocal_31);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_31), "Player_Pay_Bounty", &vLocal_39);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_31), "Clerk_Pay_Bounty", &vLocal_36);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_39, vLocal_36, StackVal) };
		VSCALE(&vVar1, 0.5f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_39, vVar1, StackVal) };
		bLocal_49 = CREATE_VOLUME_IN_LAYOUT(bLocal_13, "shop_volume", 0, vVar1, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
		if (IS_VOLUME_VALID(bLocal_49))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_49);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_49);
			if (IS_ACTOR_VALID(bLocal_27))
			{
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_27, 1);
			}
		}
		if (IS_ACTOR_VALID(bLocal_27))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_27, 0);
			SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_27, 0);
			ACTOR_RESET_ANIMS(bLocal_27, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 0);
			TASK_CLEAR(bLocal_27);
			TELEPORT_ACTOR(bLocal_27, &vLocal_36, 1, 1, 1);
			SNAP_OBJECT_TO_GROUND(bLocal_27, 1.0f, false, 1092616192);
			SET_ACTOR_HEADING(bLocal_27, fVar0, 1);
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_27);
		}
		CLEAR_AMBIENT_OBJECTS_SPHERE(vLocal_39, 1.2f, 4294967295);
		TELEPORT_ACTOR(Function_95(), &vLocal_39, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(Function_95(), 1.0f, false, 1092616192);
		fVar0 = (fVar0 + 180.0f);
		SET_ACTOR_HEADING(Function_95(), fVar0, 1);
	}
	return;
}

void Function_74(bool bParam0, int iParam1) //Position: 0x35E2 / 13794
{
	if (!Function_75(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

bool Function_75(int iParam0) //Position: 0x361D / 13853
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_76(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3639 / 13881
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_37(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ShopSell", 1, 1);
	}
	Function_77(&bVar0);
	if (bParam3)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_77(int iParam0) //Position: 0x368E / 13966
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_78(&bVar0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*iParam0, 0, 4294967295);
	return;
}

void Function_78(bool bParam0) //Position: 0x36AB / 13995
{
	SET_CAMERASHOT_ASPECT_RATIO(*bParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, fLocal_48);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*bParam0, 1885.0f);
	SET_CAMERASHOT_POSITION(*bParam0, vLocal_42);
	SET_CAMERASHOT_ORIENTATION(*bParam0, vLocal_45, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_79(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x36FF / 14079
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_17();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_95();
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_82(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_37(), 2, Function_82(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_58(19, 1, 0, 0);
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
	if (iParam10 && !Function_32())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_81()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_81()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_75(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_80(0x4000000);
	}
	if (Function_75(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_80(0x8000000);
	}
}

void Function_80(int iParam0) //Position: 0x39AD / 14765
{
	int iVar0;
	
	if (Function_33(iParam0, 1) && Function_33(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_81() //Position: 0x39E1 / 14817
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

vector3 Function_82(bool bParam0) //Position: 0x3A60 / 14944
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_83() //Position: 0x3A71 / 14961
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_29006 == Global_30640[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30668[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30658[4])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30693[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30693[1])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30707[2])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30723[1])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30723[2])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	else if (Global_29006 == Global_30717[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
		{
			bVar0 = true;
		}
	}
	if (Global_29006 == Global_30640[0])
	{
		bLocal_27 = Function_84(&Global_6298, &Global_7189, 12, 0, 0, 0);
	}
	else if (Global_29006 == Global_30668[0])
	{
		bLocal_27 = Function_84(&Global_6563, &Global_7581, 18, 0, 0, 0);
	}
	else if (Global_29006 == Global_30658[4])
	{
		if (!Function_13(&(Global_6537[12]), 1))
		{
			bLocal_27 = Function_84(&Global_6537, &Global_7543, 1, 0, 0, 0);
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
		}
		else
		{
			bLocal_27 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
			if (IS_ACTOR_VALID(bLocal_27))
			{
				TASK_CLEAR(bLocal_27);
				TASK_STAND_STILL(bLocal_27, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_27, 1);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_27, false);
				ACTOR_RESET_ANIMS(bLocal_27, 0);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_27, 1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_27);
			}
			bLocal_53 = false;
		}
	}
	else if (Global_29006 == Global_30693[0])
	{
		bLocal_27 = Function_84(&Global_6815, &Global_7954, 7, 0, 0, 0);
	}
	else if (Global_29006 == Global_30693[1])
	{
		bLocal_27 = Function_84(&Global_6866, &Global_8030, 8, 0, 0, 0);
	}
	else if (Global_29006 == Global_30707[2])
	{
		bLocal_27 = Function_84(&Global_6933, &Global_8129, 2, 0, 0, 0);
	}
	else if (Global_29006 == Global_30723[1])
	{
		bLocal_27 = Function_84(&Global_7148, &Global_8447, 0, 0, 0, 0);
	}
	else if (Global_29006 == Global_30723[2])
	{
		bLocal_27 = Function_84(&Global_7113, &Global_8395, 8, 0, 0, 0);
	}
	else if (Global_29006 == Global_30717[0])
	{
		bLocal_27 = Function_84(&Global_7035, &Global_8279, 20, 0, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_27))
	{
		if (!bVar0)
		{
			SET_DRAW_ACTOR(bLocal_27, 0);
			bLocal_55 = true;
		}
	}
	return;
}

bool Function_84(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x3D3E / 15678
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_13(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_13(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_13(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_10(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_86(StackVal, StackVal, StackVal, Global_6289, Function_37(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_13(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_10(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_10(uParam0[iVar02], 1);
	Function_85(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_85(bool bParam0, bool bParam1) //Position: 0x3ED4 / 16084
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_86(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3F76 / 16246
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_37(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

bool Function_87(bool bParam0, bool bParam1, float fParam2) //Position: 0x4090 / 16528
{
	float fVar0;
	bool bVar1;
	
	if (Function_18() || !bParam1)
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
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

vector3 Function_88() //Position: 0x412D / 16685
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
	if (IS_OBJECT_VALID(bVar3))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar3), "Clerk_Pay_Bounty", &vVar0);
		return StackVal, StackVal, vVar0;
	}
	Function_89();
	return StackVal, StackVal, Function_89();
}

vector3 Function_89() //Position: 0x418D / 16781
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_90(bool bParam0) //Position: 0x4196 / 16790
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_94();
	iVar1 = 0;
	if (!Function_4(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_93(bParam0[iVar03], 8);
		}
		else if (Function_92())
		{
			iVar1 = 1;
			Function_93(bParam0[iVar03], 8);
		}
		Function_93(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_4(bParam0[iVar03], 4))
		{
			if (!Function_4(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_4(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_4(bParam0[03], 8) || iVar1));
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
				Function_93(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_4(bParam0[iVar03], 4))
		{
			if (!Function_4(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_93(bParam0[iVar03], 2);
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
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_93(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_93(bParam0[iVar03], 2);
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
	Function_91();
	return 1;
}

void Function_91() //Position: 0x4511 / 17681
{
	if (!Function_75(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_92() //Position: 0x4551 / 17745
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

void Function_93(var uParam0, int iParam1) //Position: 0x457C / 17788
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_94() //Position: 0x458D / 17805
{
	if (!Function_75(128))
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

var Function_95() //Position: 0x45CF / 17871
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_96() //Position: 0x45E4 / 17892
{
	if (Global_29006 == Global_30640[0])
	{
		vLocal_42 = { -2192.08f, 18.43f, 2603.37f };
		vLocal_45 = { -0.32f, 45.77f, 0.0f };
		fLocal_48 = 42.54f;
	}
	else if (Global_29006 == Global_30668[0])
	{
		vLocal_42 = { -953.02f, 92.08f, 2430.69f };
		vLocal_45 = { -2.34f, -32.09f, 0.0f };
		fLocal_48 = 32.39f;
	}
	else if (Global_29006 == Global_30658[4])
	{
		vLocal_42 = { -3690.4f, 10.98f, 3468.28f };
		vLocal_45 = { -1.04f, 145.88f, 0.0f };
		fLocal_48 = 37.04f;
	}
	else if (Global_29006 == Global_30693[0])
	{
		vLocal_42 = { -2685.92f, 33.99f, 4222.68f };
		vLocal_45 = { -4.26f, 114.43f, 0.0f };
		fLocal_48 = 40.49f;
	}
	else if (Global_29006 == Global_30693[1])
	{
		vLocal_42 = { -1665.41f, 10.01f, 4286.78f };
		vLocal_45 = { -3.2f, -176.95f, 0.0f };
		fLocal_48 = 36.69f;
	}
	else if (Global_29006 == Global_30707[2])
	{
		vLocal_42 = { -807.68f, 15.09f, 3776.07f };
		vLocal_45 = { -3.67f, -162.07f, 0.0f };
		fLocal_48 = 40.05f;
	}
	else if (Global_29006 == Global_30723[1])
	{
		vLocal_42 = { -410.17f, 153.48f, 1603.97f };
		vLocal_45 = { -2.5f, 54.33f, 0.0f };
		fLocal_48 = 50.39f;
	}
	else if (Global_29006 == Global_30723[2])
	{
		vLocal_42 = { -168.5f, 85.58f, 2069.78f };
		vLocal_45 = { -1.08f, 118.71f, 0.0f };
		fLocal_48 = 39.87f;
	}
	else if (Global_29006 == Global_30717[0])
	{
		vLocal_42 = { 659.76f, 80.29f, 1314.38f };
		vLocal_45 = { -2.8f, -61.21f, 0.0f };
		fLocal_48 = 30.64f;
	}
	return;
}

var Function_97(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x47DF / 18399
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_93(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_93(uParam0[iVar03], 8);
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

int Function_98() //Position: 0x48AF / 18607
{
	if (Global_29006 == Global_30640[0])
	{
		return 191;
	}
	if (Global_29006 == Global_30668[0])
	{
		return 195;
	}
	if (Global_29006 == Global_30658[4])
	{
		return 196;
	}
	if (Global_29006 == Global_30693[0])
	{
		return 307;
	}
	if (Global_29006 == Global_30693[1])
	{
		return 309;
	}
	if (Global_29006 == Global_30707[2])
	{
		return 308;
	}
	if (Global_29006 == Global_30723[1])
	{
		return 198;
	}
	if (Global_29006 == Global_30723[2])
	{
		return 197;
	}
	if (Global_29006 == Global_30717[0])
	{
		return 193;
	}
	return 4294967295;
}

var Function_99(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4958 / 18776
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_100(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_93(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_100(var uParam0, int iParam1, int iParam2) //Position: 0x4990 / 18832
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_93(uParam0[iVar03], 4);
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

