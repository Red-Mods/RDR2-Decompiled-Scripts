//Decompiled with MagicRDR v1.0
//Function Count : 115
//Statics Count : 100
//Natives Count : 205
//Parameters Count : 51

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	int iLocal_7 = 0;
	bool bLocal_8 = true;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
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
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	vector3 vLocal_43 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_46 = { 0.0f, 0.0f, 0.0f };
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	bLocal_0 = "";
	bLocal_1 = "";
	bLocal_2 = "";
	bLocal_3 = "";
	bLocal_4 = "";
	iLocal_27 = 4294967295;
	bLocal_37 = false;
	iLocal_38 = 0;
	iLocal_39 = 0;
	iLocal_40 = 0;
	iLocal_41 = 0;
	bLocal_42 = false;
	vLocal_43 = { 0.0f, 0.0f, 0.0f };
	vLocal_46 = { -3262,209f, 37,999f, 4544,122f };
	if ((!Global_3380 && !Global_3382) && !Global_3384)
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
		iLocal_7 = 0;
		bLocal_0 = FIND_NAMED_LAYOUT("TesoroAzul_Layout");
		iLocal_27 = Function_110(0, 2, 5);
		Function_109(iLocal_27, 0);
		Function_108(&uLocal_28);
		Function_107(&bLocal_8, 412, 3, 1);
		Function_107(&bLocal_8, 976, 3, 1);
		Function_105(&bLocal_8, "hold_hostage", 5, 0);
		Function_105(&bLocal_8, "custom/hold_hostage", 8, 0);
		Function_105(&bLocal_8, "hold_hostage", 1, 0);
		Function_105(&bLocal_8, "action_areas", 10, 0);
		while (!IS_EXITFLAG_SET())
		{
			if (!Function_103(Global_30685[2]))
			{
				iLocal_7 = 5;
			}
			bLocal_37 = 600;
			switch (iLocal_7)
			{
				case 0x00000000:
					if (Function_97(&bLocal_8))
					{
						iLocal_7 = 2;
						bLocal_37 = false;
					}
					break;
				
				case 0x00000002:
					if (!bLocal_42)
					{
						if (Function_96(&uLocal_28))
						{
							if (Function_94(&uLocal_28) < 0,5f)
							{
								DECOR_SET_BOOL(Global_34573, "BossScriptRunning", true);
								bLocal_1 = CREATE_LAYOUT("TES_Boss_Layout");
								bLocal_3 = FIND_VOLUME_IN_LAYOUT(bLocal_0, "tesv_BossVol");
								if (!IS_VOLUME_VALID(bLocal_3))
								{
									iLocal_7 = 5;
								}
								OPEN_DOOR_DIRECTION(Function_92("tesoroAzul", "wall01", 4), true);
								OPEN_DOOR_DIRECTION(Function_92("tesoroAzul", "wall01", 3), false);
								bLocal_4 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_1, "mainBossSquad"));
								GET_VOLUME_CENTER(bLocal_3, &vLocal_43);
								bLocal_2 = FIND_OBJECT_IN_LAYOUT(Global_30616, "f_BossFlag");
								Function_91(bLocal_2);
								vVar1 = { StackVal, StackVal, Function_91(bLocal_2) };
								Function_90(bLocal_2);
								vVar4 = { StackVal, StackVal, Function_90(bLocal_2) };
								bLocal_6 = CREATE_ACTOR_IN_LAYOUT(bLocal_1, "Juan", 412, vVar1, vVar4);
								SQUAD_JOIN(bLocal_6, bLocal_4);
								MEMORY_CONSIDER_AS_ENEMY(bLocal_6, FIND_ACTOR_IN_LAYOUT(Global_30616, "sheriff"));
								DECOR_SET_BOOL(bLocal_6, "TES_Boss", true);
								SET_ACTOR_ONE_SHOT_DEATH(bLocal_6, true);
								AI_DISABLE_PERCEPTION(bLocal_6);
								SET_ACTOR_UPDATE_PRIORITY(bLocal_6, false);
								DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_6);
								GIVE_WEAPON_TO_ACTOR(bLocal_6, 6, 0.0f, 0, 1);
								ACTOR_PUT_WEAPON_IN_HAND(bLocal_6, 6, 1);
								ADD_BLIP_FOR_ACTOR(bLocal_6, 392, 0, 2, 0);
								Function_89(bLocal_6, 0, 1, 1, 1, 0, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bLocal_6, false);
								AI_SET_BURST_DURATION(bLocal_6, 0,3f);
								AI_SET_BURST_DURATION_RANDOMNESS(bLocal_6, 1.0f);
								COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_6, 4.0f, 2.0f);
								bLocal_5 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "BobTheCaptive");
								TASK_DRAW_HOLSTER_WEAPON(bLocal_6, 1);
								SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(bLocal_6), 658088);
								SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_4, 658088);
								Function_108(&iLocal_34);
								bLocal_42 = true;
							}
						}
					}
					if (bLocal_42)
					{
						if (IS_ACTOR_VALID(bLocal_5))
						{
							if (Function_85(bLocal_6, bLocal_5, 0x3f800000, 0, 1))
							{
								iLocal_7 = 3;
							}
						}
						else
						{
							LOG_ERROR("HOSTAGE IS INVALID");
						}
					}
					break;
				
				case 0x00000003:
					if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_EndingHouse")))
					{
						if (!iLocal_38)
						{
							iLocal_38 = 1;
							Function_89(bLocal_6, 1, 1, 1, 1, 0, 1);
							Function_83(&iLocal_31);
							SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_5, 5.0f);
							DECOR_SET_BOOL(Global_34573, "TES_InsideHouse", true);
						}
					}
					if (!iLocal_41)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_EndingHouse")))
						{
							if (IS_ACTOR_ALIVE(bLocal_6))
							{
								if (Function_82(bLocal_6, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									if (!IS_ACTION_NODE_PLAYING(bLocal_6, "hold_hostage/execute"))
									{
										Function_77();
										iLocal_41 = 1;
									}
								}
							}
						}
					}
					if (Function_96(&iLocal_31))
					{
						if (Function_94(&iLocal_31) < 7.0f || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_executionVol")))
						{
							if (!iLocal_39)
							{
								DECOR_SET_BOOL(bLocal_6, "Execute", true);
								iLocal_39 = 1;
							}
						}
					}
					if (Function_96(&iLocal_31))
					{
						if (Function_94(&iLocal_31) < 7,1f)
						{
							if (!IS_ACTION_NODE_PLAYING(bLocal_6, "hold_hostage/execute") && !iLocal_40)
							{
								AI_ENABLE_PERCEPTION(bLocal_6);
								MEMORY_REPORT_POSITION_AUTO(bLocal_6, Global_34573, true);
								MEMORY_CONSIDER_AS(bLocal_6, Global_34573, 4);
								SQUAD_SET_FACTION(bLocal_4, 19);
								SET_ACTOR_ONE_SHOT_DEATH(bLocal_6, false);
								SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_6, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_PimpStayInVolume01"), 4, true);
								SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,5f);
								bVar7 = TASK_SEQUENCE_OPEN();
								TASK_GO_TO_COORD(false, &vLocal_46, 4);
								TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_46, 0.0f, -1.0f);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_6, bVar7);
								TASK_SEQUENCE_RELEASE(bVar7, 1);
								if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff")))
								{
									if (IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff")))
									{
										MEMORY_REPORT_POSITION_AUTO(bLocal_6, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff"), true);
										MEMORY_CONSIDER_AS_ENEMY(bLocal_6, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff"));
									}
								}
								iLocal_40 = 1;
							}
						}
					}
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_4) == 0)
					{
						DECOR_SET_BOOL(Global_34573, "BossIsDead", true);
						Function_19(iLocal_27, 0, 0, 0);
						iLocal_7 = 5;
					}
					bLocal_37 = false;
					break;
				
				case 0x00000005:
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bLocal_37 = false;
					break;
			}
			WAIT(bLocal_37);
		}
		if (Function_18(iLocal_27) == 2)
		{
			Function_8(iLocal_27);
		}
		Function_6(1);
		Function_5(&uLocal_28);
		if (DECOR_CHECK_EXIST(bLocal_6, "Execute"))
		{
			DECOR_REMOVE(bLocal_6, "Execute");
		}
		Function_1(&bLocal_8);
		RELEASE_LAYOUT_REF(bLocal_1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x656 / 1622
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

void Function_2(var uParam0, int iParam1) //Position: 0x67C / 1660
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

void Function_3(var uParam0, int iParam1) //Position: 0x7AA / 1962
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x7C4 / 1988
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x7E1 / 2017
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_6(int iParam0) //Position: 0x7F5 / 2037
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_7())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_7() //Position: 0x831 / 2097
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

void Function_8(bool bParam0) //Position: 0x856 / 2134
{
	int iVar0;
	
	if (!Function_16(bParam0))
	{
		Function_14();
		return;
	}
	iVar0 = Function_13(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_9("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_9(char* cParam0, bool bParam1) //Position: 0x8A9 / 2217
{
	struct<4> Var0;
	
	if (!Function_16(bParam1))
	{
		return;
	}
	switch (Function_13(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_10(Function_11(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_13(bParam1), Function_11(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_13(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_13(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_13(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_13(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_13(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_10(int iParam0) //Position: 0x9CD / 2509
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_11(bool bParam0) //Position: 0x9F2 / 2546
{
	if (!Function_12(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_12(int iParam0) //Position: 0xA12 / 2578
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_13(bool bParam0) //Position: 0xA29 / 2601
{
	if (!Function_12(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_14() //Position: 0xA44 / 2628
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_15(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_15(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC8B / 3211
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_16(int iParam0) //Position: 0xCB4 / 3252
{
	if (!Function_12(iParam0))
	{
		return 0;
	}
	if (!Function_17(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0xCD8 / 3288
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_18(int iParam0) //Position: 0xCED / 3309
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_19(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD07 / 3335
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_16(bParam0))
	{
		Function_14();
		return;
	}
	iVar0 = Function_13(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_11(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_69();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_9("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_63(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_11(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_23(1);
			Function_21(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_20(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_20(int iParam0, int iParam1) //Position: 0xF19 / 3865
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_21(var uParam0, var uParam1) //Position: 0xF53 / 3923
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_22())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_22() //Position: 0xF95 / 3989
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_23(bool bParam0) //Position: 0xF9E / 3998
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_55();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_25();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_24(&Global_63095, 1);
		Function_24(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0xFEF / 4079
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_25() //Position: 0x1002 / 4098
{
	Function_53();
	Function_52();
	Function_52();
	Function_51();
	Function_51();
	Function_50();
	Function_50();
	Function_33();
	Function_33();
	if (!Function_22())
	{
		Function_30();
		Function_29();
		Function_28();
		Function_27();
	}
	Function_26();
	return;
}

void Function_26() //Position: 0x1035 / 4149
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_27() //Position: 0x113B / 4411
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_28() //Position: 0x116E / 4462
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_29() //Position: 0x12FC / 4860
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_30() //Position: 0x14B0 / 5296
{
	Function_31(&Global_28260, 1, 0);
	return;
}

void Function_31(int iParam0, bool bParam1, var uParam2) //Position: 0x14BE / 5310
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_32();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_32() //Position: 0x16AF / 5807
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_33() //Position: 0x16C4 / 5828
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				iVar2 = ((Function_49((50 + iVar4)) + Function_49((183 + iVar4))) + Function_49((90 + iVar4)));
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_34(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x175F / 5983
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
		Function_48(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_47(iParam0);
	if (bParam2)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x19FA / 6650
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_46(390))), 32);
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
					bVar19 = (Function_45(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_45(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_43(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_40(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_36(), &Var9);
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

var Function_36() //Position: 0x2027 / 8231
{
	int iVar0;
	
	return iVar0;
}

var Function_37(int iParam0) //Position: 0x202F / 8239
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2040 / 8256
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0, char* cParam1) //Position: 0x2135 / 8501
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x214E / 8526
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_42(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x21B3 / 8627
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x21C5 / 8645
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x21D7 / 8663
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x2307 / 8967
{
	return Global_35278[iParam020].f_48;
}

float Function_45(int iParam0) //Position: 0x2316 / 8982
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_46(int iParam0) //Position: 0x234F / 9039
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_47(int iParam0) //Position: 0x238C / 9100
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

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x2526 / 9510
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

int Function_49(bool bParam0) //Position: 0x2740 / 10048
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_50() //Position: 0x2781 / 10113
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_49((50 + iVar3) + 15) + Function_49((183 + iVar3) + 15)) + Function_49((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_34(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_51() //Position: 0x280A / 10250
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_49((50 + iVar3) + 8) + Function_49((183 + iVar3) + 8)) + Function_49((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_34(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_52() //Position: 0x28A1 / 10401
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_49((50 + iVar3)) + Function_49((183 + iVar3))) + Function_49((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_34(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_53() //Position: 0x2920 / 10528
{
	Function_54(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_34(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_54(int iParam0, bool bParam1, int iParam2) //Position: 0x2946 / 10566
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_48(iParam0, bParam1, 1);
	Function_47(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_35(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_55() //Position: 0x2B50 / 11088
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_57(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_57(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_56(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_56(vector3 vParam0) //Position: 0x2BF1 / 11249
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_57(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2C09 / 11273
{
	int iVar0;
	
	iVar0 = Function_61(uParam2, uParam3);
	if (Function_60(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_59(&Global_63095, 1);
			Function_24(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_59(&Global_63095, 2);
			Function_24(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_59(&Global_63095, 2);
		Function_24(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_58();
	return StackVal, StackVal, Function_58();
}

vector3 Function_58() //Position: 0x2CF0 / 11504
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_59(var uParam0, int iParam1) //Position: 0x2CF9 / 11513
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x2D08 / 11528
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_61(bool bParam0, bool bParam1) //Position: 0x2D1E / 11550
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_62(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_62(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_60(bVar0) && !bParam1)
	{
		bVar0 = Function_61(bParam0, 1);
	}
	return bVar0;
}

float Function_62(vector3 vParam0, vector3 vParam3) //Position: 0x2DE5 / 11749
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_63(bool bParam0) //Position: 0x2E02 / 11778
{
	int iVar0;
	int iVar1;
	
	if (!Function_12(bParam0))
	{
		return;
	}
	switch (Function_13(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_11(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_68(12, 1, 0, 0);
				Function_67(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_68(13, 1, 0, 0);
				Function_67(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_68(14, 1, 0, 0);
				Function_67(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_68(15, 1, 0, 0);
				Function_67(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_68(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_11(bParam0))
			{
				case 0x00000000:
					if (Function_66(bParam0) == 1)
					{
						iVar0 = Function_65(bParam0);
						if (Function_64(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_67(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_67(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_67(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_67(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_67(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_67(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_67(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_67(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_67(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_67(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_67(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_67(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_67(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_67(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_67(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_67(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_67(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_67(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_67(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_67(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_68(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_68(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_68(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_65(bParam0) == 0)
			{
				if (Function_66(bParam0) == 1)
				{
					Function_68(458, 1, 0, 0);
					iVar0 = Function_11(bParam0);
					if (Function_64(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_67(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_67(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_67(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_67(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_67(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_67(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_67(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_67(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_66(bParam0) == 1)
			{
				Function_68(400, 1, 0, 0);
			}
			switch (Function_11(bParam0))
			{
				case 0x00000001:
					Function_68(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_67(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_67(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_67(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_68(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_67(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_67(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_64(int iParam0) //Position: 0x32DE / 13022
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_65(bool bParam0) //Position: 0x32F4 / 13044
{
	if (!Function_12(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_66(bool bParam0) //Position: 0x3313 / 13075
{
	if (!Function_12(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_67(int iParam0, bool bParam1) //Position: 0x332D / 13101
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_68(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3394 / 13204
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
	Function_48(iParam0, TO_FLOAT(bParam1), 1);
	Function_47(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_69() //Position: 0x35B4 / 13748
{
	int iVar0;
	int iVar1;
	
	if (!Function_74(Global_6269))
	{
		return;
	}
	iVar0 = Function_49(24);
	iVar1 = Function_73(Global_6269);
	if (!Function_74(iVar0) && Function_72(iVar1) < 0)
	{
		Function_34(24, Global_6269, 0);
		Function_70(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_72(Function_73(iVar0)))
	{
		Function_34(24, Global_6269, 0);
		Function_70(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_70(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3634 / 13876
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
		Function_71(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_71(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3986 / 14726
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

int Function_72(int iParam0) //Position: 0x3A09 / 14857
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_73(int iParam0) //Position: 0x3A23 / 14883
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x3A3D / 14909
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_75(int iParam0) //Position: 0x3A53 / 14931
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_76(char* cParam0) //Position: 0x3A7D / 14973
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_77() //Position: 0x3CD3 / 15571
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TesAzul_BossYellsAtPlayer", "TesAzul_BossYellsAtPlayer", false, 3, 1, 0, 1);
		Function_78(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_78(int iParam0) //Position: 0x3D2E / 15662
{
	Function_79(0, Global_34573, iParam0, 0);
	Function_79(1, bLocal_6, iParam0, 0);
	return;
}

void Function_79(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x3D47 / 15687
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_80(uParam2, Function_81(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_80(var uParam0, int iParam1) //Position: 0x3D6C / 15724
{
	return (uParam0 && iParam1) == 0;
}

int Function_81(bool bParam0) //Position: 0x3D79 / 15737
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_82(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3D85 / 15749
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_83(int iParam0) //Position: 0x3D9F / 15775
{
	if (!Function_96(iParam0))
	{
		Function_84(iParam0, 0.0f);
	}
	return;
}

void Function_84(int iParam0, float fParam1) //Position: 0x3DB4 / 15796
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_59(iParam0, 1);
	Function_24(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_85(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x3DD5 / 15829
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)) && IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		SET_ACTOR_ANIM_CURRENT_TIME(bParam1, 0.0f);
		SET_ACTOR_ANIM_CURRENT_TIME(bParam0, 0.0f);
		return 1;
	}
	if (!DECOR_CHECK_EXIST(bParam1, "TaskedHostage") && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		fVar1 = GET_OBJECT_OWNER(bParam1);
		Function_88(bParam1);
		bVar0 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(fVar1, Function_36(), "hold_hostage", Function_88(bParam1), 0.0f, Function_87(bParam1), 0.0f));
		Function_89(bParam1, 1, 0, 0, 0, 0, 1);
		SET_ALLOW_DEADEYE_LOCKS(bParam1, false);
		SET_ACTOR_FACTION(bParam1, 21);
		MEMORY_CONSIDER_AS(bParam0, bParam1, 2);
		MEMORY_CONSIDER_AS(bParam1, bParam0, 2);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam1, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bParam1, false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam1, bParam0, false);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, false);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, false);
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
		TASK_CLEAR(bParam1);
		TASK_PRIORITY_SET(bParam1, true);
		TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
		SNAP_ACTOR_TO_GRINGO(bParam1, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bParam1, bVar0, "UseCase1", true, 1);
		DECOR_SET_BOOL(bParam1, "TaskedHostage", true);
	}
	if (DECOR_CHECK_EXIST(bParam1, "TaskedHostage") && IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
	{
		bVar2 = GET_CURRENT_GRINGO(bParam1);
		if (SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(bVar2), "Holder", true, 0, 0))
		{
			TASK_USE_GRINGO(bParam0, bVar2, "Holder", true, 1);
			SET_ALLOW_EXECUTE(bParam0, 0);
			SET_ALLOW_EXECUTE(bParam1, 0);
			SET_ACTOR_CAN_BE_TARGETED(bParam0, false);
			SET_ACTOR_CAN_BE_AIMASSISTED(bParam0, 0);
			SET_ACTOR_ALLOW_DISARM(bParam0, false);
			bVar3 = Function_86(bParam0, 40);
			if (bVar3 == 4294967295)
			{
				bVar3 = Function_86(bParam0, 39);
				if (bVar3 == 4294967295)
				{
					GIVE_WEAPON_TO_ACTOR(bParam0, 40, 1.0f, 1, 1);
					bVar3 = Function_86(bParam0, 40);
				}
			}
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar3, 1);
			DECOR_SET_BOOL(bParam0, "bNoFireOnDeath", true);
			if (bParam4)
			{
				SET_DEADEYE_LOCKS_ON_HEAD_ONLY(bParam0, 1);
			}
			if (bParam3)
			{
				SET_ACTOR_ONE_SHOT_DEATH(bParam0, true);
			}
			TASK_PRIORITY_SET(bParam0, 2);
			if (fParam2 < 0.0f)
			{
				AI_SET_SHOTS_PER_BURST(bParam0, 1);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, 0,5f);
			}
			DECOR_REMOVE(bParam1, "TaskedHostage");
		}
	}
	return 0;
}

int Function_86(bool bParam0, int iParam1) //Position: 0x402C / 16428
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

var Function_87(bool bParam0) //Position: 0x403D / 16445
{
	return GET_HEADING(bParam0);
}

vector3 Function_88(bool bParam0) //Position: 0x4048 / 16456
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_89(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4059 / 16473
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

vector3 Function_90(bool bParam0) //Position: 0x4096 / 16534
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_91(bool bParam0) //Position: 0x40BD / 16573
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

int Function_92(var uParam0, var uParam1, int iParam2) //Position: 0x40E4 / 16612
{
	return Function_93(Global_29006, uParam0, uParam1, iParam2);
}

int Function_93(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x40F6 / 16630
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_64(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

float Function_94(int iParam0) //Position: 0x4192 / 16786
{
	if (Function_96(iParam0))
	{
		if (Function_95(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_95(int iParam0) //Position: 0x425A / 16986
{
	return Function_80(*iParam0, 2);
}

bool Function_96(int iParam0) //Position: 0x4267 / 16999
{
	return Function_80(*iParam0, 1);
}

bool Function_97(int iParam0) //Position: 0x4274 / 17012
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_102();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		else if (Function_100())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		Function_101(iParam0[iVar03], 16);
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
				Function_101(iParam0[iVar03], 1);
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
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
	Function_98();
	return 1;
}

void Function_98() //Position: 0x45EF / 17903
{
	if (!Function_99(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_99(int iParam0) //Position: 0x462F / 17967
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_100() //Position: 0x464B / 17995
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

void Function_101(var uParam0, int iParam1) //Position: 0x4676 / 18038
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_102() //Position: 0x4687 / 18055
{
	if (!Function_99(128))
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

bool Function_103(int iParam0) //Position: 0x46C9 / 18121
{
	if (!Function_64(iParam0))
	{
		return 1;
	}
	return Function_104(&(Global_29008[iParam0]), 4);
}

int Function_104(var uParam0, int iParam1) //Position: 0x46E5 / 18149
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_105(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4701 / 18177
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_106(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_101(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_106(var uParam0, int iParam1, int iParam2) //Position: 0x4739 / 18233
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_101(uParam0[iVar03], 4);
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

var Function_107(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x47FD / 18429
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
			Function_101(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_101(uParam0[iVar03], 8);
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

void Function_108(int iParam0) //Position: 0x48CD / 18637
{
	Function_84(iParam0, 0.0f);
	return;
}

void Function_109(int iParam0, int iParam1) //Position: 0x48D9 / 18649
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_16(iParam0))
	{
		Function_14();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_13(iParam0);
	if (StackVal != 2)
	{
		Function_9("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_23(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_11(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x49E9 / 18921
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_114(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_111(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_111(bParam0, bParam1, bParam2, 4294967295);
}

int Function_111(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4A47 / 19015
{
	var uVar0;
	
	if (!Function_113(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_114(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_112(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_112(int iParam0) //Position: 0x4B9C / 19356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_113(int iParam0) //Position: 0x4BDA / 19418
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_114(int iParam0, int iParam1, bool bParam2) //Position: 0x4BEF / 19439
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

