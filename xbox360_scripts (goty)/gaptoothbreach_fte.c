//Decompiled with MagicRDR v1.0
//Function Count : 138
//Statics Count : 90
//Natives Count : 331
//Parameters Count : 0

#region Local Var
	bool bLocal_0[8] = { false, false, false, false, false, false, false, false };
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	bool bLocal_21 = false;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	bool bLocal_24 = false;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 11;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = false;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	var uLocal_81 = 6;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	iLocal_11 = 0;
	iLocal_12 = 0;
	iLocal_13 = 0;
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_16 = 0;
	iLocal_17 = 0;
	iLocal_71 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_89 = 0;
	Function_134(&uLocal_37);
	while (!IS_EXITFLAG_SET())
	{
		if (!Function_123(&uLocal_72, &uLocal_36))
		{
			iLocal_71 = 5;
		}
		if (DECOR_CHECK_EXIST(Global_34573, "UpdateGateway") && !DECOR_CHECK_EXIST(Global_34573, "FloydIsFree"))
		{
			iLocal_71 = 5;
		}
		if (DECOR_CHECK_EXIST(Global_34573, "OpenedCrate"))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_78)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_78));
			}
		}
		switch (iLocal_71)
		{
			case 0x00000000:
				if (Function_118(&uLocal_37))
				{
					bLocal_75 = CREATE_LAYOUT("GAP_FTE_Layout");
					iLocal_71 = 1;
				}
				break;
			
			case 0x00000001:
				Function_117(&bLocal_75, &bLocal_79, &bLocal_80, &uLocal_81, &uLocal_88, &uLocal_77, &bLocal_78);
				iLocal_71 = 2;
				break;
			
			case 0x00000002:
				if (IS_WEAPON_DRAWN(bLocal_80))
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_80, "uncle_injured", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_80, "uncle_injured/idle");
					iLocal_71 = 3;
				}
				break;
			
			case 0x00000003:
				if (!iLocal_89)
				{
					if (!IS_ACTOR_ALIVE(bLocal_80))
					{
						if (IS_OBJECT_VALID(bLocal_78))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_78)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_78));
							}
							DESTROY_OBJECT(bLocal_78);
							iLocal_89 = 1;
						}
					}
				}
				Function_79(&bLocal_80, &uLocal_36, &iLocal_73, &bLocal_79, &bLocal_78, &bLocal_75);
				if (!Function_6(&bLocal_79, &bLocal_80, &uLocal_36, &iLocal_74, &uLocal_81, &uLocal_88, &iLocal_71, &uLocal_76, &bLocal_75, &uLocal_77, &bLocal_78))
				{
					iLocal_71 = 4;
				}
				break;
			
			case 0x00000004:
				if (DECOR_CHECK_EXIST(Global_34573, "ReadyToClean"))
				{
					iLocal_71 = 5;
				}
				break;
			
			case 0x00000005:
				Function_1();
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x1E1 / 481
{
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_78)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_78));
	}
	if (DECOR_CHECK_EXIST(Global_34573, "FloydIsFree"))
	{
		DECOR_REMOVE(Global_34573, "FloydIsFree");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RunNewCamera"))
	{
		DECOR_REMOVE(Global_34573, "RunNewCamera");
	}
	if (IS_ACTOR_VALID(bLocal_79))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_79)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_79));
		}
		if (MEMORY_GET_IS_VISIBLE(Global_34573, bLocal_79))
		{
			RELEASE_ACTOR(bLocal_79);
		}
		else
		{
			DESTROY_ACTOR(bLocal_79);
		}
	}
	if (IS_ACTOR_VALID(bLocal_80))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_80)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_80));
		}
		if (MEMORY_GET_IS_VISIBLE(Global_34573, bLocal_80))
		{
			RELEASE_ACTOR(bLocal_80);
		}
		else
		{
			DESTROY_ACTOR(bLocal_80);
		}
	}
	if (IS_LAYOUTREF_VALID(bLocal_75))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_75);
		RELEASE_LAYOUT_REF(bLocal_75);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "GAP_FTE_Running"))
	{
		DECOR_REMOVE(Global_34573, "GAP_FTE_Running");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "OpenedCrate"))
	{
		DECOR_REMOVE(Global_34573, "OpenedCrate");
	}
	CLEAR_ALL_CORPSES();
	Function_2(&uLocal_37);
	return;
}

void Function_2(int iParam0) //Position: 0x334 / 820
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x35A / 858
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x488 / 1160
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, bool bParam1) //Position: 0x4A2 / 1186
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_6(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x4BF / 1215
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar27;
	bool bVar28;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;
	var uVar38;
	
	if (!iLocal_14)
	{
		if (!DECOR_CHECK_EXIST(Global_34573, "FloydIsFree"))
		{
			if (IS_ACTOR_HOGTIED(*iParam0))
			{
				if (!IS_ACTOR_IN_VOLUME(*iParam0, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydVolume")))
				{
					GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostage2"), &vVar0);
					SET_OBJECT_POSITION(*iParam0, vVar0);
					SET_OBJECT_ORIENTATION(*iParam0, 0.0f, 0.0f, 0.0f);
					iLocal_14 = 1;
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "FloydIsFree") && Function_78(*iParam2, 32768))
	{
		if (!Function_78(*iParam2, 16384))
		{
			bVar3 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FailSafeVolume");
			bVar4 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ReTaskFloyd");
			if (IS_VOLUME_VALID(bVar3))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, bVar3) && IS_ACTOR_IN_VOLUME(*iParam0, bVar4))
				{
					TASK_CLEAR(*iParam0);
					SQUAD_GOALS_CLEAR(*uParam5);
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot01"));
					vVar5 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot01")) };
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot02"));
					vVar8 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot02")) };
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot03"));
					vVar11 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot03")) };
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot04"));
					vVar14 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_GoToSpot04")) };
					bVar17 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vVar5, 3.0f, 4);
					TASK_GO_NEAR_COORD(false, &vVar8, 3.0f, 4);
					TASK_GO_NEAR_COORD(false, &vVar11, 3.0f, 4);
					TASK_GO_TO_COORD(false, &vVar14, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(*iParam0, bVar17);
					TASK_SEQUENCE_RELEASE(bVar17, 1);
					Function_76(iParam2, 16384);
					*uParam3 = 7;
				}
			}
			else
			{
				LOG_ERROR("VOLUME IS NOT VALID");
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop5")))
	{
		if (!Function_78(*iParam2, 8192))
		{
			DESTROY_ACTOR(*uParam1);
			if (!DECOR_CHECK_EXIST(Global_34573, "FloydIsFree"))
			{
				DESTROY_ACTOR(*iParam0);
				return 0;
			}
			Function_76(iParam2, 8192);
		}
	}
	if (Function_75(*iParam0))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "nOpenChest"))
		{
			*uParam3 = 11;
		}
		switch (*uParam3)
		{
			case 0x00000000:
				if (!iLocal_17)
				{
					if (Function_74(*iParam0, Global_34573) > 8.0f && IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_topFloor")))
					{
						Function_73();
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*iParam0)))
						{
							ADD_BLIP_FOR_ACTOR(*iParam0, 325, 0, 2, 0);
						}
						DECOR_SET_BOOL(Global_34573, "KnowsAboutFloyd", true);
						iLocal_17 = 1;
					}
				}
				if (!IS_ACTOR_HOGTIED(*iParam0) || DECOR_CHECK_EXIST(Global_34573, "RunNewCamera"))
				{
					if (IS_ACTOR_VALID(*uParam1))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam1));
						}
					}
					if (Function_75(*uParam1))
					{
						SET_ACTOR_INVULNERABILITY(*uParam1, 0);
						KILL_ACTOR(*uParam1);
					}
					if (!Function_72(&bLocal_30))
					{
						Function_71(&bLocal_30);
					}
					Function_67(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Function_61(*uParam8, 0, 1, 0, 0);
					AI_IGNORE_ACTOR(Global_34573);
					AI_IGNORE_ACTOR(*iParam0);
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonFF"));
					vVar18 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonFF")) };
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportFloydFF"));
					vVar21 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportFloydFF")) };
					TELEPORT_ACTOR(Global_34573, &vVar18, 0, 0, 0);
					TELEPORT_ACTOR(*iParam0, &vVar21, 0, 0, 0);
					Function_57(Global_34573, *iParam0);
					Function_57(*iParam0, Global_34573);
					TASK_STAND_STILL(Global_34573, -1.0f, 1, 0);
					TASK_STAND_STILL(*iParam0, -1.0f, 1, 0);
					SET_ANIM_SET_FOR_ACTOR(*iParam0, "sheriff_rub_wrist", 0);
					SET_ACTION_NODE_FOR_ACTOR(*iParam0, "sheriff_rub_wrist");
					AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, *iParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(*iParam0, Global_34573, -1.0f, 0);
					DECOR_SET_BOOL(Global_34573, "FloydIsFree", true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(*iParam0, 1);
					ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam10)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam10));
					}
					Function_56();
					AUDIO_ATTACH_MICROPHONE_TO_ACTOR(*iParam0);
					*uParam3 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_72(&bLocal_30))
				{
					if (Function_54(&bLocal_30) < 5.0f)
					{
						Function_53();
						*uParam3 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_72(&bLocal_30))
				{
					if (Function_54(&bLocal_30) < 10.0f)
					{
						Function_52();
						*uParam3 = 3;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_72(&bLocal_30))
				{
					if (Function_54(&bLocal_30) < 17.0f)
					{
						Function_32(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						AI_STOP_IGNORING_ACTOR(Global_34573);
						AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
						ACTOR_END_FORCE_HOLSTER(Global_34573);
						ACTOR_DRAW_ANY_WEAPON(*iParam0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(*iParam0, 0);
						RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
						Function_28("GAP_FTE_ObjAfterRescue");
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_ObjAfterRescue", 0, 0, 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
						*uParam7 = Function_27(*uParam8, "EntranceGateway", FIND_VOLUME_IN_LAYOUT(Global_30616, "v_atCaveMouth"), Global_34573, 2, 330, 4294967295, 0, 0, 1);
						SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(*uParam7), 3);
						DECOR_SET_BOOL(Global_34573, "GAP_FTE_Running", true);
						SET_ACTOR_MIN_SPEED(*iParam0, 1);
						SET_ACTOR_MAX_SPEED(*iParam0, 1);
						TASK_CLEAR(*iParam0);
						vVar24 = { -4506.624f, 15.814f, 3255.725f };
						bVar27 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vVar24, 1);
						TASK_CROUCH(false, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(*iParam0, bVar27);
						TASK_SEQUENCE_RELEASE(bVar27, 1);
						SET_ACTOR_FACTION(*iParam0, 20);
						SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(24, *iParam0, 4);
						SET_FACTIONS_STATUS_TWO_WAY(20, 24, 4);
						SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.1f);
						SET_CRIPPLE_ENABLE(*iParam0, 0);
						SET_ACTOR_PROOF(*iParam0, 128);
						iLocal_9 = 0;
						bVar28 = Function_25("GAP_OutCampSq", FIND_NAMED_LAYOUT("GAP_Layout"));
						SQUAD_GOAL_ADD_SHARE_PERCEPTION(bVar28, 0);
						Function_24(bVar28, Global_34573, 4);
						Function_23(bVar28, Global_34573);
						SQUAD_GOAL_ADD_COMBAT(bVar28, 2, 4294967295, 0);
						Function_21(&bLocal_21);
						Function_76(iParam2, 32768);
						*uParam3 = 4;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_ACTOR_IN_VOLUME(*iParam0, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ExitRailHouse")) && !IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ReTaskFloyd")))
				{
					TASK_CLEAR(*iParam0);
					CLEAR_ACTOR_MIN_SPEED(*iParam0);
					CLEAR_ACTOR_MAX_SPEED(*iParam0);
					AI_STOP_IGNORING_ACTOR(*iParam0);
					if (IS_OBJECT_VALID(*uParam9))
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(*iParam0, Global_34573, *uParam9, 5.0f, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_AT_DISTANCE(*iParam0, Global_34573, 2.0f, 2);
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					*uParam3 = 7;
				}
				break;
			
			case 0x00000007:
				Function_20(iParam0);
				if (!iLocal_16)
				{
					if (IS_ACTOR_IN_VOLUME(*iParam0, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop4")))
					{
						TASK_FACE_ACTOR(*iParam0, Global_34573, 1, 3212836864);
						iLocal_16 = 1;
					}
				}
				if (GATEWAY_UPDATE(*uParam7))
				{
					DESTROY_OBJECT(*uParam7);
					if (!Function_72(&bLocal_33))
					{
						Function_71(&bLocal_33);
					}
					Function_67(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Function_15(*uParam8, 0, 1, 0, 0);
					AI_DONT_HARM_ACTOR(Global_34573);
					AI_DONT_HARM_ACTOR(*iParam0);
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonCave"));
					vVar29 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonCave")) };
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportFloydCave"));
					vVar32 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportFloydCave")) };
					TELEPORT_ACTOR(Global_34573, &vVar32, 0, 0, 0);
					TELEPORT_ACTOR(*iParam0, &vVar29, 0, 0, 0);
					Function_57(Global_34573, *iParam0);
					Function_57(*iParam0, Global_34573);
					TASK_STAND_STILL(Global_34573, -1.0f, 1, 0);
					TASK_STAND_STILL(*iParam0, -1.0f, 1, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, *iParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(*iParam0, Global_34573, -1.0f, 0);
					ACTOR_START_FORCE_HOLSTER(*iParam0, 0, 0);
					SET_CAMERA_POSITION(GET_GAME_CAMERA(), -4427.628f, 9.836738f, 3206.199f);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 0.0f, 0.0f, 0);
					DECOR_SET_BOOL(Global_34573, "FloydReachedMine", true);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
					if (Function_74(*iParam0, Global_34573) >= 10.0f)
					{
						Function_14();
					}
					Function_21(&bLocal_21);
					*uParam3 = 8;
				}
				break;
			
			case 0x00000008:
				if (!iLocal_12)
				{
					if (Function_72(&bLocal_33))
					{
						if (Function_54(&bLocal_33) < 2.5f)
						{
							RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
							SET_ANIM_SET_FOR_ACTOR(*iParam0, "pointing", 0);
							SET_ACTION_NODE_FOR_ACTOR(*iParam0, "pointing/270");
							iLocal_12 = 1;
						}
					}
				}
				if (!iLocal_13)
				{
					if (Function_72(&bLocal_33))
					{
						if (Function_54(&bLocal_33) < 5.0f)
						{
							RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
							iLocal_13 = 1;
						}
					}
				}
				if (Function_54(&bLocal_33) < 6.0f)
				{
					Function_32(0, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
					AI_CLEAR_DONT_HARM_ACTOR(*iParam0);
					ACTOR_DRAW_LAST_WEAPON(Global_34573, 1);
					RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
					ACTOR_END_FORCE_HOLSTER(*iParam0);
					Function_28("GAP_FTE_Obj_GetTreasure");
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_Obj_GetTreasure", 0, 0, 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					iLocal_9++;
					*uParam3 = 9;
				}
				break;
			
			case 0x00000009:
				Function_12(iParam2, iParam0, uParam4);
				Function_20(iParam0);
				if (!iLocal_11)
				{
					vVar35 = { -4428.489f, 8.703f, 3200.432f };
					TASK_CLEAR(*iParam0);
					TASK_GO_TO_COORD_AND_STAY(*iParam0, &vVar35, 1, -8.127f);
					iLocal_11 = 1;
				}
				if (!iLocal_15)
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop4")))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop4")))
						{
							TASK_CLEAR(*iParam0);
							TASK_PRIORITY_SET(*iParam0, 1);
							SQUAD_GOALS_CLEAR(*uParam5);
							uVar38 = SQUAD_GOAL_ADD_BATTLE_ALLIES(*uParam5, 0, Global_34573, 4294967295);
							SQUAD_BATTLE_ALLIES_SET_FORMATION_DENSITY(*uParam5, uVar38, 0);
							iLocal_15 = 1;
						}
					}
				}
				if (IS_ACTOR_IN_VOLUME(*iParam0, bLocal_0[iLocal_9]))
				{
					Function_21(&bLocal_21);
					*uParam3 = 10;
				}
				break;
			
			case 0x0000000A:
				Function_12(iParam2, iParam0, uParam4);
				Function_20(iParam0);
				if (Function_54(&bLocal_21) < 4.0f)
				{
					if (iLocal_9 == 7)
					{
						*uParam3 = 11;
					}
					else
					{
						iLocal_9++;
						*uParam3 = 9;
					}
					Function_21(&bLocal_21);
				}
				break;
			
			case 0x0000000B:
				if (DECOR_CHECK_EXIST(Global_34573, "PlayerNearTreasure"))
				{
					if (IS_ACTOR_VALID(*iParam0))
					{
						if (!Function_78(*iParam2, 4096))
						{
							Function_8();
							Function_76(iParam2, 4096);
						}
						Function_7(iParam2, 8);
					}
				}
				if (DECOR_CHECK_EXIST(Global_34573, "RemoveBlips"))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*iParam0));
					}
					if (IS_ACTOR_VALID(*uParam1))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam1));
						}
					}
					if (IS_OBJECT_VALID(*uParam7))
					{
						DESTROY_OBJECT(*uParam7);
					}
				}
				if (DECOR_CHECK_EXIST(Global_34573, "TimeToKilFloyd"))
				{
					*uParam6 = 5;
				}
				break;
		}
	}
	else
	{
		DECOR_SET_BOOL(Global_34573, "nFloydDead", true);
		if (IS_OBJECT_VALID(*uParam7))
		{
			DESTROY_OBJECT(*uParam7);
		}
		return 0;
	}
	return 1;
}

void Function_7(int iParam0, int iParam1) //Position: 0x10FC / 4348
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_8() //Position: 0x110F / 4367
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_ReachTreasure", "GaptBreach_ReachTreasure", 0, 2, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_9(int iParam0) //Position: 0x1168 / 4456
{
	Function_10(0, Global_34573, iParam0, 0);
	Function_10(1, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("GAP_FTE_Layout"), "InjuredGuy"), iParam0, 0);
	Function_10(2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("GAP_FTE_Layout"), "Floyd"), iParam0, 0);
	return;
}

void Function_10(var uParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x11C9 / 4553
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_78(uParam2, Function_11(uParam0)))
	{
		bVar0 = uParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_11(bool bParam0) //Position: 0x11EE / 4590
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_12(var uParam0, int iParam1, var uParam2) //Position: 0x11FA / 4602
{
	if (IS_ACTOR_IN_VOLUME(*iParam1, (*uParam2)[0]) && !Function_78(*uParam0, 128))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineEntSq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_74(*iParam1, Global_34573) >= 10.0f)
			{
				Function_13();
				Function_76(uParam0, 128);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(*iParam1, (*uParam2)[1]) && !Function_78(*uParam0, 256))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_Mine1stForkSq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_74(*iParam1, Global_34573) >= 10.0f)
			{
				Function_13();
				Function_76(uParam0, 256);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(*iParam1, (*uParam2)[2]) && !Function_78(*uParam0, 512))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore1Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_74(*iParam1, Global_34573) >= 10.0f)
			{
				Function_13();
				Function_76(uParam0, 512);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(*iParam1, (*uParam2)[2]) && !Function_78(*uParam0, 1024))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore2Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_74(*iParam1, Global_34573) >= 10.0f)
			{
				Function_13();
				Function_76(uParam0, 1024);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*uParam2)[3]) && !Function_78(*uParam0, 2048))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore2Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_74(*iParam1, Global_34573) >= 10.0f)
			{
				Function_13();
				Function_76(uParam0, 2048);
			}
		}
	}
	return;
}

void Function_13() //Position: 0x13E8 / 5096
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_closerTreasure", "GaptBreach_closerTreasure", 0, 2, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_14() //Position: 0x1443 / 5187
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_ReachesMouth", "GaptBreach_ReachesMouth", 0, 2, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_15(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x149A / 5274
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_19(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GAP_AtCave", 2, 1);
	}
	Function_16(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_16(int iParam0) //Position: 0x1510 / 5392
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_18(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_17(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_17(int iParam0) //Position: 0x1561 / 5473
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54.26623f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4427.689f, 10.00317f, 3205.505f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.095053f, -0.033685f, 0.000158f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_18(var uParam0) //Position: 0x15CF / 5583
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 54.26623f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -4427.647f, 10.1831f, 3203.922f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.009982f, -0.029927f, 0.000157f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_19() //Position: 0x163D / 5693
{
	int iVar0;
	
	return iVar0;
}

void Function_20(int iParam0) //Position: 0x1645 / 5701
{
	float fVar0;
	
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_75(*iParam0))
		{
			if (Function_75(Global_34573))
			{
				if (!IS_ACTOR_HOGTIED(*iParam0))
				{
					fVar0 = Function_74(*iParam0, Global_34573);
					if (fVar0 < 15.0f && fVar0 > 35.0f)
					{
						if (Function_54(&bLocal_24) < 25.0f)
						{
							SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_ALLY_KEEP_UP", true, true, 0, 0, true, false);
							Function_21(&bLocal_24);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x16C2 / 5826
{
	Function_22(bParam0, 0.0f);
	return;
}

void Function_22(var uParam0, float fParam1) //Position: 0x16CE / 5838
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_23(bool bParam0, bool bParam1) //Position: 0x16EF / 5871
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_24(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1741 / 5953
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

var Function_25(bool bParam0, bool bParam1) //Position: 0x1786 / 6022
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return bVar0;
	}
	bVar2 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar2, 25);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3) && !bVar1)
	{
		bVar4 = GET_OBJECT_NAME(bVar3);
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_26(bParam0, bVar4))
		{
			bVar1 = true;
			bVar0 = GET_SQUAD_FROM_OBJECT(bVar3);
		}
		else
		{
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

int Function_26(char* cParam0, bool bParam1) //Position: 0x182E / 6190
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

var Function_27(bool bParam0, char* cParam1, bool bParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x1859 / 6233
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, cParam1, bParam2, uParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

void Function_28(bool bParam0) //Position: 0x18D6 / 6358
{
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	Function_29(bParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	return;
}

void Function_29(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x18F8 / 6392
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_30(int iParam0) //Position: 0x197D / 6525
{
	char* cVar0[16];
	
	if (!Function_31())
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

bool Function_31() //Position: 0x19BC / 6588
{
	if (Function_78(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x19D7 / 6615
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
		bVar0 = Function_51();
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
			if (Function_50())
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
		Function_36(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_35();
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
	Function_33(iParam9);
}

void Function_33(bool bParam0) //Position: 0x1AC7 / 6855
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
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
		Function_34();
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

void Function_34() //Position: 0x1B76 / 7030
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

void Function_35() //Position: 0x1BE8 / 7144
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1BFD / 7165
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
	Function_49(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_37(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E1D / 7709
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
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_19(), &Var9);
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

var Function_38(int iParam0) //Position: 0x244A / 9290
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x245B / 9307
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

struct<32> Function_40(char* cParam0, bool bParam1) //Position: 0x2550 / 9552
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2569 / 9577
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_43(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x25CE / 9678
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, bool bParam1) //Position: 0x25E0 / 9696
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25F2 / 9714
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

int Function_45(int iParam0) //Position: 0x2722 / 10018
{
	return Global_35278[iParam020].f_48;
}

float Function_46(int iParam0) //Position: 0x2731 / 10033
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_47(int iParam0) //Position: 0x276A / 10090
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_48(int iParam0) //Position: 0x27A7 / 10151
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

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x2941 / 10561
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

bool Function_50() //Position: 0x2B85 / 11141
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_51() //Position: 0x2B8E / 11150
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_52() //Position: 0x2BA3 / 11171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_GetMouthCave", "GaptBreach_GetMouthCave", 0, 4, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_53() //Position: 0x2BFA / 11258
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_WhereIsTreasure", "GaptBreach_WhereIsTreasure", 0, 4, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_54(bool bParam0) //Position: 0x2C57 / 11351
{
	if (Function_72(bParam0))
	{
		if (Function_55(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_55(bool bParam0) //Position: 0x2D1F / 11551
{
	return Function_78(*bParam0, 2);
}

void Function_56() //Position: 0x2D2C / 11564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_JonUntiesCapt", "GaptBreach_JonUntiesCapt", 0, 4, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x2D85 / 11653
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_58(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_58(bool bParam0, vector3 vParam1) //Position: 0x2D9F / 11679
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_59(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_59(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_59(bool bParam0, vector3 vParam1) //Position: 0x2DD7 / 11735
{
	vector3 vVar0;
	
	Function_60(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_60(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_60(bool bParam0) //Position: 0x2E5A / 11866
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x2E6B / 11883
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_19(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GAP_FreeFloyd", 4, 1);
	}
	Function_62(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_62(int iParam0) //Position: 0x2EE4 / 12004
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_66(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_65(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_64(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_63(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 9.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 3);
	return;
}

void Function_63(int iParam0) //Position: 0x2F59 / 12121
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.23481f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4511.766f, 17.14541f, 3260.562f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.026693f, -0.439746f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_64(int iParam0) //Position: 0x2FC3 / 12227
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.23481f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4512.407f, 17.14541f, 3259.519f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.026693f, -1.219064f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_65(int iParam0) //Position: 0x302D / 12333
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 48.51482f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4511.865f, 17.43181f, 3250.586f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.016744f, -2.792062f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_66(bool bParam0) //Position: 0x3097 / 12439
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 48.51482f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4511.406f, 17.43181f, 3250.206f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.016744f, -2.473239f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_67(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x3101 / 12545
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
	Function_35();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_51();
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
			if (Function_50())
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
				Function_60(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_19(), 2, Function_60(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_36(19, 1, 0, 0);
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
	if (iParam10 && !Function_31())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_70()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_70()));
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
	if (Function_69(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_68(0x4000000);
	}
	if (Function_69(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_68(0x8000000);
	}
}

void Function_68(int iParam0) //Position: 0x33AF / 13231
{
	int iVar0;
	
	if (Function_78(iParam0, 1) && Function_78(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_69(int iParam0) //Position: 0x33E3 / 13283
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_70() //Position: 0x33FF / 13311
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

void Function_71(bool bParam0) //Position: 0x347E / 13438
{
	if (!Function_72(bParam0))
	{
		Function_22(bParam0, 0.0f);
	}
	return;
}

bool Function_72(bool bParam0) //Position: 0x3493 / 13459
{
	return Function_78(*bParam0, 1);
}

void Function_73() //Position: 0x34A0 / 13472
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "GaptBreach_CaptiveSpotsJon", "GaptBreach_CaptiveSpotsJon", 0, 2, 1, 0, 1);
		Function_9(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_74(bool bParam0, bool bParam1) //Position: 0x34FD / 13565
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

bool Function_75(bool bParam0) //Position: 0x35EE / 13806
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	return 1;
}

void Function_76(var uParam0, int iParam1) //Position: 0x360B / 13835
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

vector3 Function_77(bool bParam0) //Position: 0x361A / 13850
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

bool Function_78(var uParam0, bool bParam1) //Position: 0x3641 / 13889
{
	return (uParam0 && bParam1) == 0;
}

void Function_79(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x364E / 13902
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (!IS_ACTOR_ALIVE(*uParam0))
		{
			if (Function_116(*uParam0, Global_34573) && !Function_78(*uParam1, 64))
			{
				Function_76(uParam1, 64);
				Function_93(4294967246, 1, 0);
				Function_91("GAP_Help_KilledAttr", 10.0f);
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "InjuredGuyDead"))
			{
				DECOR_SET_BOOL(Global_34573, "InjuredGuyDead", true);
			}
			return;
		}
	}
	return;
	switch (*uParam2)
	{
		case 0x00000000:
			if (IS_OBJECT_VALID(*uParam4))
			{
				if (Function_86(*uParam4, 0, 1, 1, 1, 0))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam4)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam4));
					}
					DESTROY_OBJECT(*uParam4);
					bVar0 = CREATE_VOLUME_IN_LAYOUT(*uParam5, Function_19(), 3, -4474.663f, 9.025f, 3320.002f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
					CLEAR_AMBIENT_OBJECTS_VOLUME(bVar0, 15);
					DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bVar0);
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
					vVar1 = { StackVal, StackVal, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
					bVar4 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse");
					bVar5 = GET_ACTORS_HORSE(Global_34573);
					if (IS_ACTOR_VALID(bVar5))
					{
						if (IS_ACTOR_IN_VOLUME(bVar5, bVar4))
						{
							TELEPORT_ACTOR(bVar5, &vVar1, 1, 1, 1);
						}
					}
					Function_67(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					if (!Function_72(&bLocal_27))
					{
						Function_71(&bLocal_27);
						Function_21(&bLocal_27);
					}
					Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonIntro"));
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, Function_77(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportMarstonIntro")), -39.515f, 0, 0, 0);
					Function_82(*uParam5, 0, 1, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, *uParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, Global_34573, -1.0f, 0);
					AI_IGNORE_ACTOR(Global_34573);
					AI_IGNORE_ACTOR(*uParam0);
					DECOR_SET_BOOL(Global_34573, "KnowsAboutFloyd", true);
					*uParam2 = 2;
				}
				else if (Function_54(&bLocal_18) < 15.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, "uncle_injured/wave");
					Function_21(&bLocal_18);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_72(&bLocal_27))
			{
				if (Function_54(&bLocal_27) < 2.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, "uncle_injured/talk");
					Function_81();
					*uParam2 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (!iLocal_10)
			{
				if (Function_72(&bLocal_27))
				{
					if (Function_54(&bLocal_27) <= 7.0f)
					{
						Function_80();
						SET_ACTION_NODE_FOR_ACTOR(*uParam0, "uncle_injured/talk");
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 320.485f, 0.0f, 0);
						iLocal_10 = 1;
					}
				}
			}
			if (Function_72(&bLocal_27))
			{
				if (Function_54(&bLocal_27) < 16.0f)
				{
					Function_32(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
					AI_STOP_IGNORING_ACTOR(Global_34573);
					AI_STOP_IGNORING_ACTOR(*uParam0);
					if (Function_75(*uParam0))
					{
						SET_ACTION_NODE_FOR_ACTOR(*uParam0, "uncle_injured/death");
					}
					SET_ACTOR_INVULNERABILITY(*uParam0, 1);
					Function_28("GAP_Obj_HelpFloyd");
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_Obj_HelpFloyd", 0, 0, 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					ADD_BLIP_FOR_ACTOR(*uParam3, 325, 0, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_ACTOR(*uParam3), 3);
					Function_76(uParam1, 2);
					*uParam2 = 4;
					Function_21(&bLocal_18);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_54(&bLocal_18) < 6.0f)
			{
				if (Function_75(*uParam0))
				{
					SET_ACTOR_INVULNERABILITY(*uParam0, 0);
					KILL_ACTOR(*uParam0);
				}
			}
			break;
	}
}

void Function_80() //Position: 0x3A3F / 14911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "GaptBreach_HesRailHouse", "GaptBreach_HesRailHouse", 0, 1, 1, 0, 1);
		Function_9(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_81() //Position: 0x3A96 / 14998
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "GaptBreach_PleaseHelp", "GaptBreach_PleaseHelp", 0, 3, 1, 0, 1);
		Function_9(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3AE9 / 15081
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_19(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nGAP_Intro", 2, 1);
	}
	Function_83(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
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

void Function_83(int iParam0) //Position: 0x3B5E / 15198
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_85(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_84(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 15.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_84(int iParam0) //Position: 0x3BA1 / 15265
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.08352f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4476.77f, 10.29856f, 3320.143f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.169234f, -1.317337f, -0.001189f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_85(bool bParam0) //Position: 0x3C0F / 15375
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 46.08352f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4473.284f, 11.02039f, 3321.948f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.067833f, -0.178669f, -0.001175f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

bool Function_86(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3C7D / 15485
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_90(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_89(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_89(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_87(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_87(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_87(int iParam0, int iParam1) //Position: 0x3E8F / 16015
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_88(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_88(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_88(vector3 vParam0) //Position: 0x3EFA / 16122
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_89(bool bParam0, bool bParam1) //Position: 0x3F12 / 16146
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_90(bool bParam0, bool bParam1) //Position: 0x3F31 / 16177
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_89(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x3F8E / 16270
{
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	Function_92(uParam0, iParam1, 1, 0, 2, 1, 0);
	return;
}

void Function_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3FA6 / 16294
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_93(int iParam0, bool bParam1, bool bParam2) //Position: 0x4022 / 16418
{
	int iVar0;
	bool bVar1;
	
	if (Function_115(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_114())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_113(1);
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
			Function_112(1, bVar1);
			if (!bParam2)
			{
				if (!Function_111(Global_76848, 1))
				{
					Function_106(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_104(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_111(Global_76848, 2))
				{
					Function_106(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_36(1, bVar1, 0, 0);
	}
	else
	{
		Function_103(1, (4294967295 * bVar1), 0);
	}
	if (Function_113(1) <= 4294962296)
	{
		Function_102(1, 4294962296, 0);
	}
	else if (Function_113(1) >= 5000)
	{
		Function_102(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_46(1));
	iVar0 = Function_113(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_101(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_95(2, Function_101(Global_12976.f_152), 0);
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
				Function_95(2, Function_101(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_101(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_101(Global_12976.f_152), 1);
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
				Function_95(2, Function_101(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_101(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_101(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_95(2, Function_101(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_101(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_95(2, Function_101(Global_12976.f_152), 1);
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
				Function_95(2, Function_101(Global_12976.f_152), 0);
			}
			break;
	}
	Function_94(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x4343 / 17219
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

int Function_95(int iParam0, char* cParam1, bool bParam2) //Position: 0x45A1 / 17825
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
	Function_99(iParam0, cParam1, 0, 1);
	iVar1 = Function_96();
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

int Function_96() //Position: 0x4726 / 18214
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
	Function_97();
	return 0;
}

void Function_97() //Position: 0x47C5 / 18373
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
		Function_98(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_98(int iParam0) //Position: 0x4874 / 18548
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

int Function_99(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x48D2 / 18642
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
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4C24 / 19492
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

var Function_101(int iParam0) //Position: 0x4CA7 / 19623
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

int Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D4A / 19786
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
		Function_49(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_48(iParam0);
	if (bParam2)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_103(int iParam0, bool bParam1, int iParam2) //Position: 0x4FE5 / 20453
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
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_104(int iParam0, bool bParam1) //Position: 0x51E0 / 20960
{
	bool bVar0;
	int iVar1;
	
	Function_103(iParam0, bParam1, 0);
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
	iVar1 = Function_105(iParam0, 4294967295);
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
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_105(int iParam0, int iParam1) //Position: 0x537C / 21372
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

void Function_106(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x53BD / 21437
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_108(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_107(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_107(char* cParam0, int iParam1) //Position: 0x5429 / 21545
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

bool Function_108(bool bParam0, var uParam1, int iParam2) //Position: 0x5460 / 21600
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
		if (Function_110(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_109(uVar0))
		{
			case 0x00000002:
				if (!Function_111(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_109(char* cParam0) //Position: 0x54D8 / 21720
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

int Function_110(int iParam0) //Position: 0x5579 / 21881
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_7(&iVar1, 2147483648);
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

bool Function_111(var uParam0, int iParam1) //Position: 0x55B6 / 21942
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_112(var uParam0, bool bParam1) //Position: 0x55C9 / 21961
{
	bool bVar0;
	int iVar1;
	
	Function_36(uParam0, bParam1, 0, 0);
	bVar0 = uParam0;
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
	iVar1 = Function_105(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = uParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = uParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_113(bool bParam0) //Position: 0x5766 / 22374
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_114() //Position: 0x57A7 / 22439
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_115(int iParam0) //Position: 0x57D2 / 22482
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_116(bool bParam0, bool bParam1) //Position: 0x57E1 / 22497
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5812 / 22546
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_2spawn"), &vVar0);
	GET_OBJECT_ORIENTATION(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_2spawn"), &vVar3);
	*uParam2 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "InjuredGuy", 235, vVar0, vVar3);
	CLEAR_AREA_OF_GRASS(vVar0, 1.5f);
	SET_ACTOR_FACTION(*uParam2, 24);
	AI_IGNORE_ACTOR(*uParam2);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*uParam2, 0.2f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam2);
	GIVE_WEAPON_TO_ACTOR(*uParam2, 8, 0.0f, 0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam2, 0);
	ACTOR_DRAW_ANY_WEAPON(*uParam2, 0);
	TASK_CLEAR(*uParam2);
	TASK_STAND_STILL(*uParam2, -1.0f, 0, 0);
	MEMORY_CONSIDER_AS(*uParam2, Global_34573, false);
	MEMORY_CONSIDER_AS(Global_34573, *uParam2, true);
	SET_MOVER_FROZEN(*uParam2, 1);
	SET_ACTOR_ONE_SHOT_DEATH(*uParam2, 1);
	Function_71(&bLocal_18);
	ADD_BLOOD_TO_ACTOR(*uParam2, 0.1f, 1.2f, -0.1f, 0, 2, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*uParam2, false);
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostage2"), &vVar0);
	*uParam1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Floyd", 142, vVar0, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_FACTION(*uParam1, 24);
	SET_CRIPPLE_ENABLE(*uParam1, 0);
	SET_ACTOR_ALLOW_DISARM(*uParam1, 0);
	HOGTIE_ACTOR(*uParam1);
	SET_ACTOR_UPDATE_PRIORITY(*uParam1, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam1);
	GIVE_WEAPON_TO_ACTOR(*uParam1, 40, 1.0f, 0, 1);
	*uParam4 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "hostageSquad"));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*uParam1, 37, 3.0f);
	SQUAD_JOIN(*uParam1, *uParam4);
	DECOR_SET_BOOL(*uParam1, "ActionArea_DisableHogtie", true);
	MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
	MEMORY_CONSIDER_AS(Global_34573, *uParam1, true);
	Function_71(&bLocal_24);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(*uParam1, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(*uParam1, false);
	UNK_0x99AFD2D1(*uParam1, 1, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 13, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 60, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 61, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 72, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(*uParam1, 96, 0);
	DECOR_SET_BOOL(*uParam1, "DontReenableControl", true);
	DECOR_SET_BOOL(*uParam1, "NoTalk_CutFree", true);
	DECOR_SET_BOOL(*uParam1, "CheckForCamera", true);
	bLocal_0[0] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop0");
	bLocal_0[1] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop1");
	bLocal_0[2] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop2");
	bLocal_0[3] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop3");
	bLocal_0[4] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop4");
	bLocal_0[5] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop5");
	bLocal_0[6] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop6");
	bLocal_0[7] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_FloydStop7");
	(*uParam3)[0] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop1");
	(*uParam3)[1] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop2");
	(*uParam3)[2] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop3");
	(*uParam3)[3] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop4");
	(*uParam3)[4] = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_treasureStop5");
	CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
	APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_ObjGoAttr", 0, 0, 0);
	APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
	*uParam5 = FIND_OBJECT_IN_LAYOUT(Global_30616, "nFloydPath");
	*uParam6 = CREATE_GATEWAY_IN_LAYOUT(*uParam0, Function_19(), FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGateway"), Global_34573, 2, 3, 0, false, 1, 1);
	ADD_BLIP_FOR_OBJECT(*uParam6, 330, 0f, 2, 0);
	Function_28("GAP_FTE_ObjGoAttr");
}

bool Function_118(int iParam0) //Position: 0x5C8E / 23694
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_122();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_121(iParam0[iVar03], 8);
		}
		else if (Function_120())
		{
			iVar1 = 1;
			Function_121(iParam0[iVar03], 8);
		}
		Function_121(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_121(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_121(iParam0[iVar03], 2);
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
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_121(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_121(iParam0[iVar03], 2);
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
	Function_119();
	return 1;
}

void Function_119() //Position: 0x6009 / 24585
{
	if (!Function_69(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_120() //Position: 0x6049 / 24649
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

void Function_121(var uParam0, int iParam1) //Position: 0x6074 / 24692
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_122() //Position: 0x6085 / 24709
{
	if (!Function_69(128))
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

bool Function_123(var uParam0, int iParam1) //Position: 0x60C7 / 24775
{
	if (!Function_78(*iParam1, 1))
	{
		*uParam0 = Function_129(3, 4294967197, 5);
		if (Function_127(*uParam0) >= 0)
		{
			return 0;
		}
		Function_76(iParam1, 1);
	}
	if (!Function_124(Global_30658[3]))
	{
		return 0;
	}
	return 1;
}

bool Function_124(int iParam0) //Position: 0x6105 / 24837
{
	if (!Function_126(iParam0))
	{
		return 1;
	}
	return Function_125(&(Global_29008[iParam0]), 4);
}

int Function_125(var uParam0, int iParam1) //Position: 0x6121 / 24865
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0) //Position: 0x613D / 24893
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_127(int iParam0) //Position: 0x6153 / 24915
{
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_128(int iParam0) //Position: 0x616D / 24941
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6184 / 24964
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_133(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_130(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_130(bParam0, bParam1, bParam2, 4294967295);
}

int Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x61E2 / 25058
{
	var uVar0;
	
	if (!Function_132(bParam2))
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
	uVar0 = Function_133(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_131(uVar0);
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

int Function_131(int iParam0) //Position: 0x6337 / 25399
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

bool Function_132(int iParam0) //Position: 0x6375 / 25461
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_133(int iParam0, int iParam1, int iParam2) //Position: 0x638A / 25482
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_134(bool bParam0) //Position: 0x63AA / 25514
{
	Function_137(bParam0, 142, 3, 1);
	Function_137(bParam0, 235, 3, 1);
	Function_135(bParam0, "action_areas", 10, 0);
	Function_135(bParam0, "custom/uncle_injured", 8, 0);
	Function_135(bParam0, "uncle_injured", 5, 0);
	Function_135(bParam0, "excited_return", 5, 0);
	Function_135(bParam0, "custom/excited_return", 8, 0);
	Function_135(bParam0, "pointing", 5, 0);
	Function_135(bParam0, "custom/pointing", 8, 0);
	Function_135(bParam0, "sheriff_rub_wrist", 5, 0);
	Function_135(bParam0, "custom/sheriff_rub_wrist", 8, 0);
	return;
}

var Function_135(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x64BC / 25788
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_136(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_121(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_136(var uParam0, int iParam1, int iParam2) //Position: 0x64F4 / 25844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_121(uParam0[iVar03], 4);
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

var Function_137(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x65B8 / 26040
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_121(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_121(uParam0[iVar03], 8);
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

