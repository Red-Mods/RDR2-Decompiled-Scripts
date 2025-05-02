//Decompiled with MagicRDR v1.0
//Function Count : 98
//Statics Count : 60
//Natives Count : 242
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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	bool bLocal_13 = true;
	var uLocal_14 = 0;
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
	bool bLocal_26 = false;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	vector3 vLocal_35 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_38 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_41 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_44 = { 0.0f, 0.0f, 0.0f };
	float fLocal_47 = 0.0f;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	float fLocal_50 = 0.0f;
	bool bLocal_51 = false;
	bool bLocal_52 = false;
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	float fLocal_56 = 0.0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iLocal_9 = 0;
	iLocal_57 = 0;
	iLocal_10 = 0;
	bLocal_12 = Global_26314;
	bLocal_32 = uScriptParam_0;
	bLocal_52 = true;
	Function_96(&bLocal_13, "custom/pay_bounty", 8, 0);
	Function_96(&bLocal_13, "pay_bounty", 5, 0);
	if (bLocal_32)
	{
		Function_96(&bLocal_13, "$/fragments/p_inv_ShopLetterPardon01x", 0, 0);
	}
	else
	{
		Function_96(&bLocal_13, "$/fragments/p_inv_TreasureMoneyStack01x", 0, 0);
	}
	iVar1 = Function_95();
	if (iVar1 != 4294967295)
	{
		Function_94(&bLocal_13, iVar1, 3, 0);
	}
	iLocal_58 = StackVal;
	if (Global_29006 == Global_30707[2])
	{
		iLocal_58 = 1;
	}
	Function_93();
	SET_ACTOR_CUTSCENE_MODE(Function_92(), 1);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_92(), false);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_92(), 0);
	fVar2 = GET_CURRENT_GAME_TIME();
	bLocal_11 = 250;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_10)
		{
			case 0x00000000:
				bLocal_11 = 100;
				if (Function_87(&bLocal_13) && (IS_ACTOR_VALID(bLocal_26) || (fVar2 + 1.0f) > GET_CURRENT_GAME_TIME()))
				{
					GET_POSITION(bLocal_26, &vLocal_35);
					Function_85();
					if (VDIST(Function_85(), vLocal_35) < 2.0f || !IS_ACTOR_VALID(bLocal_26))
					{
						iLocal_33 = 1;
					}
					if (!iLocal_33)
					{
						if (!Function_84(bLocal_26, 1, 0x41700000))
						{
							iLocal_33 = 1;
						}
					}
					if (iLocal_33)
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = 3;
					}
					if (IS_ACTOR_VALID(bLocal_26))
					{
						ACTOR_RESET_ANIMS(bLocal_26, 1);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 0);
					}
					iLocal_10 = 2;
					bLocal_11 = false;
				}
				else if (!IS_ACTOR_VALID(bLocal_26))
				{
					Function_80();
				}
				break;
			
			case 0x00000002:
				bLocal_11 = Function_61(&iVar0);
				Function_57();
				break;
			
			case 0x00000003:
				if (Function_56() < 0 || bLocal_32)
				{
					if (bLocal_32)
					{
						DELETE_ITEM(Function_55(9), Function_92(), 1);
						Function_54(484, 1, 0, 0);
						if (Function_53(iLocal_58) > 5000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(31))
							{
								AWARD_ACHIEVEMENT(31);
							}
						}
						if (Function_53(iLocal_58) >= Function_52(254))
						{
							Function_51(256, Function_53(iLocal_58), 0);
						}
						Function_48(iLocal_58, 0);
						Function_47();
						if (IS_BLIP_VALID(Global_26361.f_28))
						{
							REMOVE_BLIP(Global_26361.f_28);
						}
						Global_13111 = 4294967295;
					}
					else if (Function_56() > Function_53(iLocal_58))
					{
						if (Function_53(iLocal_58) >= Function_52(254))
						{
							Function_51(254, Function_53(iLocal_58), 0);
						}
						Function_46(Function_53(iLocal_58), 1);
						Function_48(iLocal_58, 0);
						Function_47();
						if (IS_BLIP_VALID(Global_26361.f_28))
						{
							REMOVE_BLIP(Global_26361.f_28);
						}
						Global_13111 = 4294967295;
					}
					else
					{
						if (Function_56() >= Function_52(254))
						{
							Function_51(254, Function_56(), 0);
						}
						Function_30(iLocal_58, Function_56());
						Function_46(Function_56(), 1);
						Function_29("bounty_cleared_partial", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_28(Global_76846, 262144))
						{
							Function_22(Function_92(), 262144, 1, 0);
						}
					}
					PLAY_SOUND_FRONTEND("HUD_PAY_BOUNTY_MASTER");
					Function_21(8388608);
					Function_20();
				}
				Function_19();
				Function_18(0x20000000);
				bLocal_11 = false;
				iLocal_10 = 4;
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_11 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_11);
	}
	if (bLocal_55)
	{
		Function_5();
	}
	SET_ACTOR_CUTSCENE_MODE(Function_92(), 0);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_92(), true);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_92(), 1);
	if (IS_ACTOR_VALID(bLocal_26))
	{
		SET_DRAW_ACTOR(bLocal_26, true);
		SET_ACTOR_CUTSCENE_MODE(bLocal_26, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(bLocal_26, true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_26, 1);
		SET_ACTOR_CAN_BUMP(bLocal_26, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_26, 1);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_26, 1);
	}
	Function_1(&bLocal_13);
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
	if (IS_ACTOR_VALID(bLocal_26))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 1);
		if (bLocal_52)
		{
			TASK_CLEAR(bLocal_26);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_26, 0);
		}
		else
		{
			TASK_STAND_STILL(bLocal_26, -1.0f, 0, 0);
		}
		if (bLocal_52)
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
	RESET_ANIM_SET_FOR_ACTOR(Function_92(), 0);
	MAKE_ACTOR_READY_FOR_ACTION(Function_92(), 1);
	if (IS_OBJECT_VALID(bLocal_31))
	{
		DESTROY_OBJECT(bLocal_31);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
	DESTROY_OBJECT(bLocal_49);
	DESTROY_OBJECT(bLocal_48);
	CAMERA_RESET(0);
	bLocal_55 = false;
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
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
		bVar0 = Function_92();
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
			if (Function_17())
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
		Function_54(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_16();
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

void Function_15(bool bParam0) //Position: 0xABC / 2748
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

void Function_16() //Position: 0xB61 / 2913
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_17() //Position: 0xB76 / 2934
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_18(var uParam0) //Position: 0xB7F / 2943
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_19() //Position: 0xB92 / 2962
{
	int iVar0;
	
	Global_26960 = Function_53(StackVal);
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

void Function_20() //Position: 0xBE0 / 3040
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

void Function_21(int iParam0) //Position: 0xC0D / 3085
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_22(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xC2A / 3114
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0, int iParam1) //Position: 0xC96 / 3222
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

bool Function_24(bool bParam0, var uParam1, int iParam2) //Position: 0xCCD / 3277
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
		if (Function_26(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_28(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0xD45 / 3397
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

int Function_26(int iParam0) //Position: 0xDE6 / 3558
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_27(&iVar1, 2147483648);
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

void Function_27(int iParam0, int iParam1) //Position: 0xE23 / 3619
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_28(int iParam0, int iParam1) //Position: 0xE36 / 3638
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_29(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xE49 / 3657
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_30(int iParam0, bool bParam1) //Position: 0xE94 / 3732
{
	if (!Function_45(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_31(222, Global_26401[iParam0], 0);
		if (Function_52(222) <= 0)
		{
			Function_51(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_51((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_31((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_31(222, bParam1, 0);
	}
	return;
}

int Function_31(int iParam0, bool bParam1, bool bParam2) //Position: 0xF1D / 3869
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
	Function_44(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1118 / 4376
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_43(390))), 32);
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
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_33(), &Var9);
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

var Function_33() //Position: 0x1745 / 5957
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x174D / 5965
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x175E / 5982
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, char* cParam1) //Position: 0x1853 / 6227
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x186C / 6252
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x18D1 / 6353
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x18E3 / 6371
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x18F5 / 6389
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x1A25 / 6693
{
	return Global_35278[iParam020].f_48;
}

float Function_42(int iParam0) //Position: 0x1A34 / 6708
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_43(int iParam0) //Position: 0x1A6D / 6765
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_44(int iParam0) //Position: 0x1AAA / 6826
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

bool Function_45(int iParam0) //Position: 0x1C44 / 7236
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_46(bool bParam0, bool bParam1) //Position: 0x1C59 / 7257
{
	bool bVar0;
	
	bVar0 = Function_52(0);
	if ((Function_52(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_31(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_52(0));
	return 1;
}

void Function_47() //Position: 0x1CE9 / 7401
{
	return;
}

void Function_48(int iParam0, bool bParam1) //Position: 0x1CEF / 7407
{
	if (!Function_45(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_49((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_49(222, TO_FLOAT((Function_52(223) + Function_52(224))), 0);
	return;
}

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D30 / 7472
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
		Function_50(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_44(iParam0);
	if (bParam2)
	{
		Function_32(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_50(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F9C / 8092
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x21B6 / 8630
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
		Function_50(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_44(iParam0);
	if (bParam2)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_52(int iParam0) //Position: 0x2451 / 9297
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_53(int iParam0) //Position: 0x2492 / 9362
{
	if (!Function_45(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

int Function_54(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x24AA / 9386
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
	Function_50(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

var Function_55(bool bParam0) //Position: 0x26CA / 9930
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

bool Function_56() //Position: 0x27BB / 10171
{
	return Function_52(0);
}

void Function_57() //Position: 0x27C5 / 10181
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_51)
	{
		if (fLocal_50 + 1.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_51)
			{
				iLocal_57++;
				if (iLocal_57 != 0)
				{
					if ((*&Global_26401 + 36[Global_29004181][Function_60(iLocal_57)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_57 > 35)
				{
					bLocal_51 = true;
				}
			}
			if (!bLocal_51)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_26401 + 36[Global_29004181][Function_60(iLocal_57)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(1.0f, &cVar1, Function_58((*&Global_26401 + 36[Global_29004181][Function_60(iLocal_57)5])[3]), &Global_26998[Function_60(iLocal_57)18] + 4, 0, 0, 2, 0);
				fLocal_50 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_58(bool bParam0) //Position: 0x28AC / 10412
{
	bool bVar0;
	
	bVar0 = Function_59();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_59() //Position: 0x28C3 / 10435
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

int Function_60(int iParam0) //Position: 0x297F / 10623
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

int Function_61(int iParam0) //Position: 0x2B35 / 11061
{
	int iVar0;
	
	iVar0 = 250;
	if (IS_ACTOR_VALID(bLocal_26))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(bLocal_26, false);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_26, 0);
		SET_ACTOR_CAN_BUMP(bLocal_26, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_26, 0);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_26, 0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_87(&bLocal_13))
			{
				bLocal_30 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
				Function_76(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
				UI_PUSH("CutsceneWithMessages");
				bLocal_55 = true;
				bLocal_49 = Function_73(Global_26314, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_30))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_30), "Player_Pay_Bounty", &vLocal_38);
					TELEPORT_ACTOR(Function_92(), &vLocal_38, 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(Function_92(), 1.0f, false, 1092616192);
					SET_ACTOR_HEADING(Function_92(), (GET_OBJECT_HEADING(bLocal_30) + 180.0f), 1);
				}
				SET_ANIM_SET_FOR_ACTOR(Function_92(), "pay_bounty", 0);
				SET_ACTION_NODE_FOR_ACTOR(Function_92(), "pay_bounty/ring_bell");
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTION_NODE_PLAYING(Function_92(), "pay_bounty/ring_bell"))
			{
				if (IS_ACTOR_VALID(bLocal_26))
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_26, 61, Function_92(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
				HUD_FADE_OUT(0,5f, 1f, 1);
				fLocal_56 = GET_CURRENT_GAME_TIME();
				*iParam0 = 2;
			}
			break;
		
		case 0x00000002:
			while (!HUD_IS_FADED() || !Function_87(&bLocal_13))
			{
				WAIT(false);
			}
			iLocal_33 = 0;
			bLocal_34 = true;
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
			if (GET_CURRENT_GAME_TIME() > (fLocal_56 + 3.0f))
			{
				if (IS_ACTOR_VALID(bLocal_26))
				{
					if (Function_84(bLocal_26, 1, 0x41700000))
					{
						*iParam0 = 3;
						if (IS_ACTOR_VALID(bLocal_26))
						{
							ACTOR_RESET_ANIMS(bLocal_26, 1);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 0);
						}
					}
				}
				else
				{
					Function_80();
				}
			}
			else
			{
				*iParam0 = 3;
				if (IS_ACTOR_VALID(bLocal_26))
				{
					ACTOR_RESET_ANIMS(bLocal_26, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 0);
				}
			}
			break;
		
		case 0x00000003:
			Function_71("UPDATE_BSTUT_CUTSCENE: BS_INIT_PAYTUT", 11);
			if (Function_87(&bLocal_13))
			{
				if (!bLocal_34)
				{
					Function_76(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					bLocal_55 = true;
					bLocal_49 = Function_73(Global_26314, 0, 0, 0);
				}
				Function_70();
				Function_71("UPDATE_BSTUT_CUTSCENE: BS_RUN_PAY", 11);
				if (bLocal_32)
				{
					bLocal_31 = CREATE_PROP_IN_LAYOUT(Global_26314, "nmoneyProp", "p_inv_ShopLetterPardon01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
				}
				else
				{
					bLocal_31 = CREATE_PROP_IN_LAYOUT(Global_26314, "nmoneyProp", "p_inv_TreasureMoneyStack01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
				}
				Function_67(&uLocal_27);
				SET_ANIM_SET_FOR_ACTOR(Function_92(), "pay_bounty", 0);
				if (IS_ACTOR_VALID(bLocal_26))
				{
					if (bLocal_54)
					{
						SET_DRAW_ACTOR(bLocal_26, true);
					}
					SET_ACTOR_CUTSCENE_MODE(bLocal_26, 1);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_26, false);
					SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_26, 0);
					SET_ACTOR_CAN_BUMP(bLocal_26, 0);
					TASK_STAND_STILL(bLocal_26, -1.0f, 0, 0);
					ACTOR_RESET_ANIMS(bLocal_26, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_26, "pay_bounty", 1);
				}
				if (bLocal_32)
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_92(), "pay_bounty/give_letter");
					SET_ACTION_NODE_FOR_ACTOR(bLocal_26, "Pay_Bounty/take_letter");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_92(), "pay_bounty/pay_cash");
					SET_ACTION_NODE_FOR_ACTOR(bLocal_26, "Pay_Bounty/take_cash");
				}
				if (DECOR_CHECK_EXIST(Function_92(), "bountyPayCheckFlag"))
				{
					DECOR_REMOVE(Function_92(), "bountyPayCheckFlag");
				}
				if (!bLocal_32)
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_92(), "PLAYER_PAY_FINE_LOCAL", bLocal_26, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_92(), "PLAYER_PAY_BOUNTY_WITH_PARDON_LETTER", bLocal_26, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				ATTACH_PROP_TO_ANIM(Function_92(), bLocal_31, "wrist_l_Attachment", "grab", true, ATTACH_SLOT_FROM_STRING("A"));
				*iParam0 = 4;
				iVar0 = 0;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_53)
			{
				if (HUD_IS_FADED() || HUD_IS_FADING())
				{
					HUD_FADE_IN(0,5f, 1065353216);
				}
				iLocal_53 = 1;
			}
			if (!IS_ACTION_NODE_PLAYING(Function_92(), "pay_bounty/pay_cash") && !IS_ACTION_NODE_PLAYING(Function_92(), "pay_bounty/give_letter"))
			{
				*iParam0 = 5;
				iVar0 = 0;
			}
			if (Function_62(&uLocal_27, 5,25f))
			{
				*iParam0 = 5;
				iVar0 = 0;
			}
			break;
		
		case 0x00000005:
			Function_71("UPDATE_BSTUT_CUTSCENE: BS_CLEANUP_PAYTUT", 11);
			iLocal_10 = 3;
			Function_5();
			iVar0 = 0;
	}
	return iVar0;
}

bool Function_62(int iParam0, float fParam1) //Position: 0x31FD / 12797
{
	if (Function_66(iParam0))
	{
		if (Function_63(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_63(int iParam0) //Position: 0x3219 / 12825
{
	if (Function_66(iParam0))
	{
		if (Function_64(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_64(int iParam0) //Position: 0x32E1 / 13025
{
	return Function_65(*iParam0, 2);
}

int Function_65(var uParam0, int iParam1) //Position: 0x32EE / 13038
{
	return (uParam0 && iParam1) == 0;
}

bool Function_66(int iParam0) //Position: 0x32FB / 13051
{
	return Function_65(*iParam0, 1);
}

void Function_67(int iParam0) //Position: 0x3308 / 13064
{
	if (!Function_66(iParam0))
	{
		Function_68(iParam0, 0.0f);
	}
	return;
}

void Function_68(var uParam0, float fParam1) //Position: 0x331D / 13085
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_69(uParam0, 1);
	Function_27(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_69(var uParam0, var uParam1) //Position: 0x333E / 13118
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

void Function_70() //Position: 0x334D / 13133
{
	bool bVar0;
	vector3 vVar1;
	
	bLocal_30 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
	if (IS_OBJECT_VALID(bLocal_30))
	{
		bVar0 = GET_OBJECT_HEADING(bLocal_30);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_30), "Player_Pay_Bounty", &vLocal_38);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_30), "Clerk_Pay_Bounty", &vLocal_35);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_38, vLocal_35, StackVal) };
		VSCALE(&vVar1, 0,5f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_38, vVar1, StackVal) };
		bLocal_48 = CREATE_VOLUME_IN_LAYOUT(bLocal_12, "shop_volume", false, vVar1, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
		if (IS_VOLUME_VALID(bLocal_48))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
			if (IS_ACTOR_VALID(bLocal_26))
			{
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_26, 1);
			}
		}
		if (IS_ACTOR_VALID(bLocal_26))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_26, 0);
			SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_26, 0);
			ACTOR_RESET_ANIMS(bLocal_26, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 0);
			TASK_CLEAR(bLocal_26);
			TELEPORT_ACTOR(bLocal_26, &vLocal_35, 1, 1, 1);
			SNAP_OBJECT_TO_GROUND(bLocal_26, 1.0f, false, 1092616192);
			SET_ACTOR_HEADING(bLocal_26, bVar0, 1);
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_26);
		}
		CLEAR_AMBIENT_OBJECTS_SPHERE(vLocal_38, 1,2f, 4294967295);
		TELEPORT_ACTOR(Function_92(), &vLocal_38, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(Function_92(), 1.0f, false, 1092616192);
		bVar0 = (bVar0 + 180.0f);
		SET_ACTOR_HEADING(Function_92(), bVar0, 1);
	}
	return;
}

void Function_71(bool bParam0, int iParam1) //Position: 0x34B2 / 13490
{
	if (!Function_72(128))
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

bool Function_72(int iParam0) //Position: 0x34ED / 13549
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_73(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3509 / 13577
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_33(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ShopSell", 1, 1);
	}
	Function_74(&bVar0);
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

void Function_74(int iParam0) //Position: 0x355E / 13662
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_75(&iVar0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*iParam0, 0, 4294967295);
	return;
}

void Function_75(bool bParam0) //Position: 0x357B / 13691
{
	SET_CAMERASHOT_ASPECT_RATIO(*bParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, fLocal_47);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*bParam0, 1885.0f);
	SET_CAMERASHOT_POSITION(*bParam0, vLocal_41);
	SET_CAMERASHOT_ORIENTATION(*bParam0, vLocal_44, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_76(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x35CF / 13775
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
	HUD_ENABLE(false);
	Function_16();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_92();
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
			if (Function_17())
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
				Function_79(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_33(), 2, Function_79(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_54(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_78()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_78()));
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
	if (Function_72(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_77(0x4000000);
	}
	if (Function_72(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_77(0x8000000);
	}
}

void Function_77(int iParam0) //Position: 0x3878 / 14456
{
	int iVar0;
	
	if (Function_65(iParam0, 1) && Function_65(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_78() //Position: 0x38AC / 14508
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

vector3 Function_79(bool bParam0) //Position: 0x392B / 14635
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_80() //Position: 0x393C / 14652
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
		bLocal_26 = Function_81(&Global_6298, &Global_7189, 12, 0, 0, 0);
	}
	else if (Global_29006 == Global_30668[0])
	{
		bLocal_26 = Function_81(&Global_6563, &Global_7581, 18, 0, 0, 0);
	}
	else if (Global_29006 == Global_30658[4])
	{
		if (!Function_13(&(Global_6537[12]), 1))
		{
			bLocal_26 = Function_81(&Global_6537, &Global_7543, 1, 0, 0, 0);
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
		}
		else
		{
			bLocal_26 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
			if (IS_ACTOR_VALID(bLocal_26))
			{
				TASK_CLEAR(bLocal_26);
				TASK_STAND_STILL(bLocal_26, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_26, true);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_26, false);
				ACTOR_RESET_ANIMS(bLocal_26, 0);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_26, 1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_26);
			}
			bLocal_52 = false;
		}
	}
	else if (Global_29006 == Global_30693[0])
	{
		bLocal_26 = Function_81(&Global_6815, &Global_7954, 7, 0, 0, 0);
	}
	else if (Global_29006 == Global_30693[1])
	{
		bLocal_26 = Function_81(&Global_6866, &Global_8030, 8, 0, 0, 0);
	}
	else if (Global_29006 == Global_30707[2])
	{
		bLocal_26 = Function_81(&Global_6933, &Global_8129, 2, 0, 0, 0);
	}
	else if (Global_29006 == Global_30723[1])
	{
		bLocal_26 = Function_81(&Global_7148, &Global_8447, 0, 0, 0, 0);
	}
	else if (Global_29006 == Global_30723[2])
	{
		bLocal_26 = Function_81(&Global_7113, &Global_8395, 8, 0, 0, 0);
	}
	else if (Global_29006 == Global_30717[0])
	{
		bLocal_26 = Function_81(&Global_7035, &Global_8279, 20, 0, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_26))
	{
		if (!bVar0)
		{
			SET_DRAW_ACTOR(bLocal_26, false);
			bLocal_54 = true;
		}
	}
	return;
}

bool Function_81(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x3C09 / 15369
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
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_10(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_83(StackVal, StackVal, StackVal, Global_6289, Function_33(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_13(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
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
	Function_82(StackVal, 1);
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

int Function_82(bool bParam0, bool bParam1) //Position: 0x3D9F / 15775
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
			TASK_PRIORITY_SET(bVar0, true);
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

var Function_83(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3E41 / 15937
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

bool Function_84(bool bParam0, bool bParam1, float fParam2) //Position: 0x3F5A / 16218
{
	float fVar0;
	bool bVar1;
	
	if (Function_17() || !bParam1)
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

vector3 Function_85() //Position: 0x3FF7 / 16375
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_34574, 5.0f, 1));
	if (IS_OBJECT_VALID(bVar3))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar3), "Clerk_Pay_Bounty", &vVar0);
		return StackVal, StackVal, vVar0;
	}
	Function_86();
	return StackVal, StackVal, Function_86();
}

vector3 Function_86() //Position: 0x405B / 16475
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_87(bool bParam0) //Position: 0x4064 / 16484
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_91();
	iVar1 = 0;
	if (!Function_4(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_90(bParam0[iVar03], 8);
		}
		else if (Function_89())
		{
			iVar1 = 1;
			Function_90(bParam0[iVar03], 8);
		}
		Function_90(bParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_4(bParam0[03], 8) || iVar1));
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
				Function_90(bParam0[iVar03], 1);
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
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_90(bParam0[iVar03], 2);
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
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_90(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_90(bParam0[iVar03], 2);
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
	Function_88();
	return 1;
}

void Function_88() //Position: 0x43DF / 17375
{
	if (!Function_72(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_89() //Position: 0x441F / 17439
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

void Function_90(var uParam0, int iParam1) //Position: 0x444A / 17482
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_91() //Position: 0x445B / 17499
{
	if (!Function_72(128))
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

var Function_92() //Position: 0x449D / 17565
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_93() //Position: 0x44B2 / 17586
{
	if (Global_29006 == Global_30640[0])
	{
		vLocal_41 = { -2192,08f, 18,43f, 2603,37f };
		vLocal_44 = { -0,32f, 45,77f, 0.0f };
		fLocal_47 = 42,54f;
	}
	else if (Global_29006 == Global_30668[0])
	{
		vLocal_41 = { -953,02f, 92,08f, 2430,69f };
		vLocal_44 = { -2,34f, -32,09f, 0.0f };
		fLocal_47 = 32,39f;
	}
	else if (Global_29006 == Global_30658[4])
	{
		vLocal_41 = { -3690,4f, 10,98f, 3468,28f };
		vLocal_44 = { -1,04f, 145,88f, 0.0f };
		fLocal_47 = 37,04f;
	}
	else if (Global_29006 == Global_30693[0])
	{
		vLocal_41 = { -2685,92f, 33,99f, 4222,68f };
		vLocal_44 = { -4,26f, 114,43f, 0.0f };
		fLocal_47 = 40,49f;
	}
	else if (Global_29006 == Global_30693[1])
	{
		vLocal_41 = { -1665,41f, 10,01f, 4286,78f };
		vLocal_44 = { -3,2f, -176,95f, 0.0f };
		fLocal_47 = 36,69f;
	}
	else if (Global_29006 == Global_30707[2])
	{
		vLocal_41 = { -807,68f, 15,09f, 3776,07f };
		vLocal_44 = { -3,67f, -162,07f, 0.0f };
		fLocal_47 = 40,05f;
	}
	else if (Global_29006 == Global_30723[1])
	{
		vLocal_41 = { -410,17f, 153,48f, 1603,97f };
		vLocal_44 = { -2,5f, 54,33f, 0.0f };
		fLocal_47 = 50,39f;
	}
	else if (Global_29006 == Global_30723[2])
	{
		vLocal_41 = { -168,5f, 85,58f, 2069,78f };
		vLocal_44 = { -1,08f, 118,71f, 0.0f };
		fLocal_47 = 39,87f;
	}
	else if (Global_29006 == Global_30717[0])
	{
		vLocal_41 = { 659,76f, 80,29f, 1314,38f };
		vLocal_44 = { -2,8f, -61,21f, 0.0f };
		fLocal_47 = 30,64f;
	}
	return;
}

var Function_94(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x46AD / 18093
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
			Function_90(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_90(uParam0[iVar03], 8);
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

int Function_95() //Position: 0x477D / 18301
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

var Function_96(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4826 / 18470
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_97(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_90(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_97(var uParam0, int iParam1, int iParam2) //Position: 0x485E / 18526
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_90(uParam0[iVar03], 4);
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

