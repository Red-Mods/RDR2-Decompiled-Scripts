//Decompiled with MagicRDR v1.0
//Function Count : 138
//Statics Count : 131
//Natives Count : 330
//Parameters Count : 0

#region Local Var
	var uLocal_0[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	bool bLocal_43 = false;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 11;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 6;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_19 = 0;
	iLocal_20 = 0;
	iLocal_21 = 0;
	iLocal_22 = 0;
	iLocal_23 = 0;
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_26 = 0;
	iLocal_98 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_130 = 0;
	Function_134(&uLocal_52);
	while (!IS_EXITFLAG_SET())
	{
		if (!Function_123(&uLocal_99, &uLocal_51))
		{
			iLocal_98 = 5;
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "UpdateGateway") && !DECOR_CHECK_EXIST(&Global_54076, "FloydIsFree"))
		{
			iLocal_98 = 5;
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "nOpenChest"))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_108)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_108));
				DESTROY_OBJECT(&uLocal_108);
				Function_121("GAP_Obj_Explore02");
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_Obj_Explore02", 0, 0, 0);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
			}
		}
		switch (iLocal_98)
		{
			case 0x00000000:
				if (Function_116(&uLocal_52))
				{
					uLocal_102 = CREATE_LAYOUT("GAP_FTE_Layout");
					iLocal_98 = 1;
				}
				break;
			
			case 0x00000001:
				Function_115(&uLocal_102, &uLocal_110, &uLocal_112, &uLocal_114, &uLocal_128, &uLocal_106, &uLocal_108);
				iLocal_98 = 2;
				break;
			
			case 0x00000002:
				if (IS_WEAPON_DRAWN(&uLocal_112))
				{
					SET_ANIM_SET_FOR_ACTOR(&uLocal_112, "uncle_injured", 0);
					SET_ACTION_NODE_FOR_ACTOR(&uLocal_112, "uncle_injured/idle");
					iLocal_98 = 3;
				}
				break;
			
			case 0x00000003:
				if (!iLocal_130)
				{
					if (!IS_ACTOR_ALIVE(&uLocal_112))
					{
						if (IS_OBJECT_VALID(&uLocal_108))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_108)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_108));
							}
							DESTROY_OBJECT(&uLocal_108);
							iLocal_130 = 1;
						}
					}
				}
				Function_76(&uLocal_112, &uLocal_51, &iLocal_100, &uLocal_110, &uLocal_108, &uLocal_102);
				if (!Function_6(&uLocal_110, &uLocal_112, &uLocal_51, &iLocal_101, &uLocal_114, &uLocal_128, &iLocal_98, &uLocal_104, &uLocal_102, &uLocal_106, &uLocal_108))
				{
					iLocal_98 = 4;
				}
				break;
			
			case 0x00000004:
				if (DECOR_CHECK_EXIST(&Global_54076, "ReadyToClean"))
				{
					iLocal_98 = 5;
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

void Function_1() //Position: 0x263 / 611
{
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_108)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_108));
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "FloydIsFree"))
	{
		DECOR_REMOVE(&Global_54076, "FloydIsFree");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RunNewCamera"))
	{
		DECOR_REMOVE(&Global_54076, "RunNewCamera");
	}
	if (IS_ACTOR_VALID(&uLocal_110))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_110)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_110));
		}
		if (MEMORY_GET_IS_VISIBLE(&Global_54076, &uLocal_110))
		{
			RELEASE_ACTOR(&uLocal_110);
		}
		else
		{
			DESTROY_ACTOR(&uLocal_110);
		}
	}
	if (IS_ACTOR_VALID(&uLocal_112))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_112)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_112));
		}
		if (MEMORY_GET_IS_VISIBLE(&Global_54076, &uLocal_112))
		{
			RELEASE_ACTOR(&uLocal_112);
		}
		else
		{
			DESTROY_ACTOR(&uLocal_112);
		}
	}
	if (IS_LAYOUTREF_VALID(&uLocal_102))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_102);
		RELEASE_LAYOUT_REF(&uLocal_102);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "GAP_FTE_Running"))
	{
		DECOR_REMOVE(&Global_54076, "GAP_FTE_Running");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "nOpenChest"))
	{
		DECOR_REMOVE(&Global_54076, "nOpenChest");
	}
	CLEAR_ALL_CORPSES();
	Function_2(&uLocal_52);
	return;
}

void Function_2(int iParam0) //Position: 0x3CD / 973
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x3F5 / 1013
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x540 / 1344
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x55D / 1373
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_6(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x57B / 1403
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar6;
	var uVar8;
	var uVar10;
	bool bVar12;
	var uVar13;
	var uVar15;
	var uVar17;
	bool bVar19;
	var uVar20;
	var uVar21;
	var uVar23;
	var uVar25;
	var uVar27;
	
	if (!iLocal_23)
	{
		if (!DECOR_CHECK_EXIST(&Global_54076, "FloydIsFree"))
		{
			if (IS_ACTOR_HOGTIED(&iParam0))
			{
				if (!IS_ACTOR_IN_VOLUME(&iParam0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydVolume")))
				{
					GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostage2"), &Var0);
					SET_OBJECT_POSITION(&iParam0, Var0);
					SET_OBJECT_ORIENTATION(StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f));
					iLocal_23 = 1;
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "FloydIsFree") && Function_75(iParam2, 32768))
	{
		if (!Function_75(iParam2, 16384))
		{
			uVar2 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FailSafeVolume");
			uVar3 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_ReTaskFloyd");
			if (IS_VOLUME_VALID(&uVar2))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar2) && IS_ACTOR_IN_VOLUME(&iParam0, &uVar3))
				{
					TASK_CLEAR(&iParam0);
					SQUAD_GOALS_CLEAR(&uParam5);
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot01"));
					uVar4 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot01"));
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot02"));
					uVar6 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot02"));
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot03"));
					uVar8 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot03"));
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot04"));
					uVar10 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_GoToSpot04"));
					bVar12 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uVar4, 3.0f, 4);
					TASK_GO_NEAR_COORD(0, &uVar6, 3.0f, 4);
					TASK_GO_NEAR_COORD(0, &uVar8, 3.0f, 4);
					TASK_GO_TO_COORD(0, &uVar10, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iParam0, bVar12);
					TASK_SEQUENCE_RELEASE(bVar12, 1);
					Function_73(&iParam2, 16384);
					uParam3 = 7;
				}
			}
			else
			{
				LOG_ERROR("VOLUME IS NOT VALID");
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop5")))
	{
		if (!Function_75(iParam2, 8192))
		{
			DESTROY_ACTOR(&iParam1);
			if (!DECOR_CHECK_EXIST(&Global_54076, "FloydIsFree"))
			{
				DESTROY_ACTOR(&iParam0);
				return 0;
			}
			Function_73(&iParam2, 8192);
		}
	}
	if (Function_72(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "nOpenChest"))
		{
			uParam3 = 11;
		}
		switch (uParam3)
		{
			case 0x00000000:
				if (!iLocal_26)
				{
					if (Function_71(&iParam0, &Global_54076) > 8.0f && IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_topFloor")))
					{
						Function_70();
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							ADD_BLIP_FOR_ACTOR(&iParam0, 325, 0, 2, 0);
						}
						DECOR_SET_BOOL(&Global_54076, "KnowsAboutFloyd", 1);
						iLocal_26 = 1;
					}
				}
				if (!IS_ACTOR_HOGTIED(&iParam0) || DECOR_CHECK_EXIST(&Global_54076, "RunNewCamera"))
				{
					if (IS_ACTOR_VALID(&iParam1))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam1));
						}
					}
					if (Function_72(&iParam1))
					{
						SET_ACTOR_INVULNERABILITY(&iParam1, 0);
						KILL_ACTOR(&iParam1);
					}
					if (!Function_69(&bLocal_43))
					{
						Function_68(&bLocal_43);
					}
					Function_63(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					Function_57(&uParam8, 0, 1, 0, 0);
					AI_IGNORE_ACTOR(&Global_54076);
					AI_IGNORE_ACTOR(&iParam0);
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonFF"));
					uVar13 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonFF"));
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportFloydFF"));
					uVar15 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportFloydFF"));
					TELEPORT_ACTOR(&Global_54076, &uVar13, 0, 0, 0);
					TELEPORT_ACTOR(&iParam0, &uVar15, 0, 0, 0);
					Function_53(&Global_54076, &iParam0);
					Function_53(&iParam0, &Global_54076);
					TASK_STAND_STILL(&Global_54076, -1.0f, 1, 0);
					TASK_STAND_STILL(&iParam0, -1.0f, 1, 0);
					SET_ANIM_SET_FOR_ACTOR(&iParam0, "sheriff_rub_wrist", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, "sheriff_rub_wrist");
					AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &Global_54076, -1.0f, 0);
					DECOR_SET_BOOL(&Global_54076, "FloydIsFree", 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
					ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam10)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam10));
					}
					Function_52();
					AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&iParam0);
					uParam3 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_69(&bLocal_43))
				{
					if (Function_50(&bLocal_43) < 5.0f)
					{
						Function_49();
						uParam3 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_69(&bLocal_43))
				{
					if (Function_50(&bLocal_43) < 10.0f)
					{
						Function_48();
						uParam3 = 3;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_69(&bLocal_43))
				{
					if (Function_50(&bLocal_43) < 17.0f)
					{
						Function_28(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						AI_STOP_IGNORING_ACTOR(&Global_54076);
						AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
						ACTOR_END_FORCE_HOLSTER(&Global_54076);
						ACTOR_DRAW_ANY_WEAPON(&iParam0, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 0);
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_121("GAP_FTE_ObjAfterRescue");
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_ObjAfterRescue", 0, 0, 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
						uParam7 = Function_27(&uParam8, "EntranceGateway", FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_atCaveMouth"), &Global_54076, 2, 330, 4294967295, 0, 0, 1);
						SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&uParam7), 3);
						DECOR_SET_BOOL(&Global_54076, "GAP_FTE_Running", 1);
						SET_ACTOR_MIN_SPEED(&iParam0, 1);
						SET_ACTOR_MAX_SPEED(&iParam0, 1);
						TASK_CLEAR(&iParam0);
						uVar17 = Vector(-4506,624f, 15,814f, 3255,725f);
						bVar19 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uVar17, 1);
						TASK_CROUCH(0, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iParam0, bVar19);
						TASK_SEQUENCE_RELEASE(bVar19, 1);
						SET_ACTOR_FACTION(&iParam0, 20);
						SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(24, &iParam0, 4);
						SET_FACTIONS_STATUS_TWO_WAY(20, 24, 4);
						SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
						SET_CRIPPLE_ENABLE(&iParam0, 0);
						SET_ACTOR_PROOF(&iParam0, 128);
						iLocal_18 = 0;
						uVar20 = Function_25("GAP_OutCampSq", FIND_NAMED_LAYOUT("GAP_Layout"));
						SQUAD_GOAL_ADD_SHARE_PERCEPTION(&uVar20, 0);
						Function_24(&uVar20, &Global_54076, 4);
						Function_23(&uVar20, &Global_54076);
						SQUAD_GOAL_ADD_COMBAT(&uVar20, 2, 4294967295, 0);
						Function_21(&bLocal_31);
						Function_73(&iParam2, 32768);
						uParam3 = 4;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_ACTOR_IN_VOLUME(&iParam0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_ExitRailHouse")) && !IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_ReTaskFloyd")))
				{
					TASK_CLEAR(&iParam0);
					CLEAR_ACTOR_MIN_SPEED(&iParam0);
					CLEAR_ACTOR_MAX_SPEED(&iParam0);
					AI_STOP_IGNORING_ACTOR(&iParam0);
					if (IS_OBJECT_VALID(&uParam9))
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(&iParam0, &Global_54076, &uParam9, 5.0f, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &Global_54076, 2.0f, 2);
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					uParam3 = 7;
				}
				break;
			
			case 0x00000007:
				Function_20(&iParam0);
				if (!iLocal_25)
				{
					if (IS_ACTOR_IN_VOLUME(&iParam0, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop4")))
					{
						TASK_FACE_ACTOR(&iParam0, &Global_54076, 1, 3212836864);
						iLocal_25 = 1;
					}
				}
				if (GATEWAY_UPDATE(&uParam7))
				{
					DESTROY_OBJECT(&uParam7);
					if (!Function_69(&bLocal_47))
					{
						Function_68(&bLocal_47);
					}
					Function_63(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					Function_15(&uParam8, 0, 1, 0, 0);
					AI_DONT_HARM_ACTOR(&Global_54076);
					AI_DONT_HARM_ACTOR(&iParam0);
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonCave"));
					uVar21 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonCave"));
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportFloydCave"));
					uVar23 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportFloydCave"));
					TELEPORT_ACTOR(&Global_54076, &uVar23, 0, 0, 0);
					TELEPORT_ACTOR(&iParam0, &uVar21, 0, 0, 0);
					Function_53(&Global_54076, &iParam0);
					Function_53(&iParam0, &Global_54076);
					TASK_STAND_STILL(&Global_54076, -1.0f, 1, 0);
					TASK_STAND_STILL(&iParam0, -1.0f, 1, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &Global_54076, -1.0f, 0);
					ACTOR_START_FORCE_HOLSTER(&iParam0, 0, 0);
					SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-4427,628f, 9,836738f, 3206,199f));
					SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 0.0f, 0.0f), 0);
					DECOR_SET_BOOL(&Global_54076, "FloydReachedMine", 1);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
					if (Function_71(&iParam0, &Global_54076) >= 10.0f)
					{
						Function_14();
					}
					Function_21(&bLocal_31);
					uParam3 = 8;
				}
				break;
			
			case 0x00000008:
				if (!iLocal_21)
				{
					if (Function_69(&bLocal_47))
					{
						if (Function_50(&bLocal_47) < 2,5f)
						{
							RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
							SET_ANIM_SET_FOR_ACTOR(&iParam0, "pointing", 0);
							SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/270");
							iLocal_21 = 1;
						}
					}
				}
				if (!iLocal_22)
				{
					if (Function_69(&bLocal_47))
					{
						if (Function_50(&bLocal_47) < 5.0f)
						{
							RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
							iLocal_22 = 1;
						}
					}
				}
				if (Function_50(&bLocal_47) < 6.0f)
				{
					Function_28(0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
					AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
					ACTOR_DRAW_LAST_WEAPON(&Global_54076, 1);
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					ACTOR_END_FORCE_HOLSTER(&iParam0);
					Function_121("GAP_FTE_Obj_GetTreasure");
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_Obj_GetTreasure", 0, 0, 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					iLocal_18++;
					uParam3 = 9;
				}
				break;
			
			case 0x00000009:
				Function_12(&iParam2, &iParam0, &uParam4);
				Function_20(&iParam0);
				if (!iLocal_20)
				{
					uVar25 = Vector(-4428,489f, 8,703f, 3200,432f);
					TASK_CLEAR(&iParam0);
					TASK_GO_TO_COORD_AND_STAY(&iParam0, &uVar25, 1, -8,127f);
					iLocal_20 = 1;
				}
				if (!iLocal_24)
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop4")))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop4")))
						{
							TASK_CLEAR(&iParam0);
							TASK_PRIORITY_SET(&iParam0, true);
							SQUAD_GOALS_CLEAR(&uParam5);
							uVar27 = SQUAD_GOAL_ADD_BATTLE_ALLIES(&uParam5, 0, &Global_54076, 4294967295);
							SQUAD_BATTLE_ALLIES_SET_FORMATION_DENSITY(&uParam5, &uVar27, 0);
							iLocal_24 = 1;
						}
					}
				}
				if (IS_ACTOR_IN_VOLUME(&iParam0, &(uLocal_0[iLocal_18])))
				{
					Function_21(&bLocal_31);
					uParam3 = 10;
				}
				break;
			
			case 0x0000000A:
				Function_12(&iParam2, &iParam0, &uParam4);
				Function_20(&iParam0);
				if (Function_50(&bLocal_31) < 4.0f)
				{
					if (iLocal_18 == 7)
					{
						uParam3 = 11;
					}
					else
					{
						iLocal_18++;
						uParam3 = 9;
					}
					Function_21(&bLocal_31);
				}
				break;
			
			case 0x0000000B:
				if (DECOR_CHECK_EXIST(&Global_54076, "PlayerNearTreasure"))
				{
					if (IS_ACTOR_VALID(&iParam0))
					{
						if (!Function_75(iParam2, 4096))
						{
							Function_8();
							Function_73(&iParam2, 4096);
						}
						Function_7(&iParam2, 8);
					}
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "RemoveBlips"))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					if (IS_ACTOR_VALID(&iParam1))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam1));
						}
					}
					if (IS_OBJECT_VALID(&uParam7))
					{
						DESTROY_OBJECT(&uParam7);
					}
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "TimeToKilFloyd"))
				{
					uParam6 = 5;
				}
				break;
		}
	}
	else
	{
		DECOR_SET_BOOL(&Global_54076, "nFloydDead", 1);
		if (IS_OBJECT_VALID(&uParam7))
		{
			DESTROY_OBJECT(&uParam7);
		}
		return 0;
	}
	return 1;
}

void Function_7(int iParam0, int iParam1) //Position: 0x1291 / 4753
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_8() //Position: 0x12A7 / 4775
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

void Function_9(int iParam0) //Position: 0x1300 / 4864
{
	Function_10(0, &Global_54076, iParam0, 0);
	Function_10(1, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("GAP_FTE_Layout"), "InjuredGuy"), iParam0, 0);
	Function_10(2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("GAP_FTE_Layout"), "Floyd"), iParam0, 0);
	return;
}

void Function_10(var uParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1362 / 4962
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_75(uParam2, Function_11(uParam0)))
	{
		bVar0 = uParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

bool Function_11(bool bParam0) //Position: 0x138A / 5002
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_12(var uParam0, int iParam1, var[] uParam2) //Position: 0x1396 / 5014
{
	if (IS_ACTOR_IN_VOLUME(&iParam1, &(uParam2[0])) && !Function_75(uParam0, 128))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineEntSq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_71(&iParam1, &Global_54076) >= 10.0f)
			{
				Function_13();
				Function_73(&uParam0, 128);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(&iParam1, &(uParam2[1])) && !Function_75(uParam0, 256))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_Mine1stForkSq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_71(&iParam1, &Global_54076) >= 10.0f)
			{
				Function_13();
				Function_73(&uParam0, 256);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(&iParam1, &(uParam2[2])) && !Function_75(uParam0, 512))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore1Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_71(&iParam1, &Global_54076) >= 10.0f)
			{
				Function_13();
				Function_73(&uParam0, 512);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(&iParam1, &(uParam2[2])) && !Function_75(uParam0, 1024))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore2Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_71(&iParam1, &Global_54076) >= 10.0f)
			{
				Function_13();
				Function_73(&uParam0, 1024);
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &(uParam2[3])) && !Function_75(uParam0, 2048))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Function_25("GAP_MineCore2Sq", FIND_NAMED_LAYOUT("GAP_Layout"))) == 0)
		{
			if (Function_71(&iParam1, &Global_54076) >= 10.0f)
			{
				Function_13();
				Function_73(&uParam0, 2048);
			}
		}
	}
	return;
}

void Function_13() //Position: 0x15A7 / 5543
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

void Function_14() //Position: 0x1602 / 5634
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

var Function_15(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1659 / 5721
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_19(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GAP_AtCave", 2, 1);
	}
	Function_16(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_16(int iParam0) //Position: 0x16DD / 5853
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_18(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_17(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_17(int iParam0) //Position: 0x1736 / 5942
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,26623f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4427,689f, 10,00317f, 3205,505f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,095053f, -0,033685f, 0,000158f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_18(var uParam0) //Position: 0x17AF / 6063
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 54,26623f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-4427,647f, 10,1831f, 3203,922f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,009982f, -0,029927f, 0,000157f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_19() //Position: 0x1828 / 6184
{
	int iVar0;
	
	return &iVar0;
}

void Function_20(int iParam0) //Position: 0x1831 / 6193
{
	float fVar0;
	
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_72(&iParam0))
		{
			if (Function_72(&Global_54076))
			{
				if (!IS_ACTOR_HOGTIED(&iParam0))
				{
					fVar0 = Function_71(&iParam0, &Global_54076);
					if (fVar0 < 15.0f && fVar0 > 35.0f)
					{
						if (Function_50(&bLocal_35) < 25.0f)
						{
							SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_ALLY_KEEP_UP", true, true, 0, 0, true, false);
							Function_21(&bLocal_35);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x18B4 / 6324
{
	Function_22(&bParam0, 0.0f);
	return;
}

void Function_22(vector3 vParam0) //Position: 0x18C1 / 6337
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_73(&vParam0, 1);
	Function_7(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x18E6 / 6374
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2) //Position: 0x1941 / 6465
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

var Function_25(int iParam0, bool bParam1) //Position: 0x198D / 6541
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	if (!IS_LAYOUTREF_VALID(&bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return &iVar0;
	}
	uVar2 = CREATE_OBJECT_ITERATOR(&bParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 25);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3) && !bVar1)
	{
		uVar4 = GET_OBJECT_NAME(&iVar3);
		if (STRING_CONTAINS_STRING(&uVar4, &iParam0) || Function_26(&iParam0, &uVar4))
		{
			bVar1 = true;
			iVar0 = GET_SQUAD_FROM_OBJECT(&iVar3);
		}
		else
		{
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return &iVar0;
}

int Function_26(char* cParam0) //Position: 0x1A49 / 6729
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &Param1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

var Function_27(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x1A76 / 6774
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &uParam6, &uParam7, &uParam8, &uParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

void Function_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x1B07 / 6919
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_47();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_32(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_31();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_29(&iParam9, &iParam10);
}

void Function_29(var uParam0, bool bParam1) //Position: 0x1BD6 / 7126
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_30();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_30() //Position: 0x1CA5 / 7333
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_31() //Position: 0x1D1D / 7453
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_32(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1D32 / 7474
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_33(iParam0);
	return 1;
}

void Function_33(bool bParam0) //Position: 0x1F5A / 8026
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

void Function_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1FF8 / 8184
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_44(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_43(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_43(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_19(), &Var9);
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

var Function_35(int iParam0) //Position: 0x2636 / 9782
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2647 / 9799
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x273E / 10046
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2759 / 10073
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x27C0 / 10176
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x27D2 / 10194
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27E4 / 10212
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x2918 / 10520
{
	return Global_55480[iParam016].f_96;
}

float Function_43(int iParam0) //Position: 0x2927 / 10535
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_44(int iParam0) //Position: 0x2960 / 10592
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_45(int iParam0) //Position: 0x299D / 10653
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

int Function_46(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B37 / 11063
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

var Function_47() //Position: 0x2D7B / 11643
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_48() //Position: 0x2D90 / 11664
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

void Function_49() //Position: 0x2DE7 / 11751
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

float Function_50(vector3 vParam0) //Position: 0x2E44 / 11844
{
	if (Function_69(&vParam0))
	{
		if (Function_51(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_51(bool bParam0) //Position: 0x2F11 / 12049
{
	return Function_75(bParam0, 2);
}

void Function_52() //Position: 0x2F1F / 12063
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

void Function_53(int iParam0, int iParam1) //Position: 0x2F78 / 12152
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_54(StackVal, &iParam0, Var0);
	return;
}

void Function_54(int iParam0, struct<2> Param1) //Position: 0x2F94 / 12180
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_55(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_55(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_55(int iParam0, struct<2> Param1) //Position: 0x2FCF / 12239
{
	struct<2> Var0;
	
	Function_56(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_56(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_56(int iParam0) //Position: 0x3050 / 12368
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_57(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3062 / 12386
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_19(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GAP_FreeFloyd", 4, 1);
	}
	Function_58(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_58(int iParam0) //Position: 0x30E9 / 12521
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_62(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_61(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_60(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_59(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 2, 3, 9.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1.0f, 3);
	return;
}

void Function_59(int iParam0) //Position: 0x316B / 12651
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,23481f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4511,766f, 17,14541f, 3260,562f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,026693f, -0,439746f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_60(int iParam0) //Position: 0x31E0 / 12768
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,23481f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4512,407f, 17,14541f, 3259,519f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,026693f, -1,219064f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_61(int iParam0) //Position: 0x3255 / 12885
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 48,51482f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4511,865f, 17,43181f, 3250,586f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,016744f, -2,792062f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_62(float fParam0) //Position: 0x32CA / 13002
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 48,51482f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-4511,406f, 17,43181f, 3250,206f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,016744f, -2,473239f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_63(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x333F / 13119
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_31();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_47();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_56(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_19(), 2,802597E-45f, Function_56(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_32(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_67())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_66()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_66()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_65(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_64(0x4000000);
	}
	if (Function_65(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_64(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_64(int iParam0) //Position: 0x35F1 / 13809
{
	int iVar0;
	
	if (Function_75(iParam0, 1) && Function_75(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_65(int iParam0) //Position: 0x3625 / 13861
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_66() //Position: 0x3641 / 13889
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

bool Function_67() //Position: 0x36CF / 14031
{
	if (Function_75(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_68(bool bParam0) //Position: 0x36EA / 14058
{
	if (!Function_69(&bParam0))
	{
		Function_22(&bParam0, 0.0f);
	}
	return;
}

bool Function_69(bool bParam0) //Position: 0x3701 / 14081
{
	return Function_75(bParam0, 1);
}

void Function_70() //Position: 0x370F / 14095
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

float Function_71(int iParam0, int iParam1) //Position: 0x376C / 14188
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_72(int iParam0) //Position: 0x3861 / 14433
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	return 1;
}

void Function_73(var uParam0, int iParam1) //Position: 0x3880 / 14464
{
	uParam0 = (uParam0 || iParam1);
	return;
}

struct<8> Function_74(bool bParam0) //Position: 0x3891 / 14481
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_75(var uParam0, bool bParam1) //Position: 0x38BA / 14522
{
	return (uParam0 && bParam1) == 0;
}

void Function_76(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x38C7 / 14535
{
	var uVar0;
	var uVar1;
	var uVar3;
	var uVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_114(&iParam0, &Global_54076) && !Function_75(uParam1, 64))
			{
				Function_73(&uParam1, 64);
				Function_91(4294967246, 1, 0);
				Function_88("GAP_Help_KilledAttr", 10.0f);
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "InjuredGuyDead"))
			{
				DECOR_SET_BOOL(&Global_54076, "InjuredGuyDead", 1);
			}
			return;
		}
	}
	return;
	switch (uParam2)
	{
		case 0x00000000:
			if (IS_OBJECT_VALID(&uParam4))
			{
				if (Function_83(&uParam4, 0, 1, 1, 1, 0))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam4)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam4));
					}
					DESTROY_OBJECT(&uParam4);
					uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam5, Function_19(), 4,203895E-45f, Vector(-4474,663f, 9,025f, 3320,002f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar0, 15);
					DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uVar0);
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
					uVar1 = Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
					uVar3 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_CheckPlayerHorse");
					uVar4 = GET_ACTORS_HORSE(&Global_54076);
					if (IS_ACTOR_VALID(&uVar4))
					{
						if (IS_ACTOR_IN_VOLUME(&uVar4, &uVar3))
						{
							TELEPORT_ACTOR(&uVar4, &uVar1, 1, 1, 1);
						}
					}
					Function_63(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					if (!Function_69(&bLocal_39))
					{
						Function_68(&bLocal_39);
						Function_21(&bLocal_39);
					}
					Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonIntro"));
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Function_74(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportMarstonIntro")), -39,515f, 0, 0, 0);
					Function_79(&uParam5, 0, 1, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &iParam0, -1.0f, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &Global_54076, -1.0f, 0);
					AI_IGNORE_ACTOR(&Global_54076);
					AI_IGNORE_ACTOR(&iParam0);
					DECOR_SET_BOOL(&Global_54076, "KnowsAboutFloyd", 1);
					uParam2 = 2;
				}
				else if (Function_50(&bLocal_27) < 15.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, "uncle_injured/wave");
					Function_21(&bLocal_27);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_69(&bLocal_39))
			{
				if (Function_50(&bLocal_39) < 2.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, "uncle_injured/talk");
					Function_78();
					uParam2 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (!iLocal_19)
			{
				if (Function_69(&bLocal_39))
				{
					if (Function_50(&bLocal_39) <= 7.0f)
					{
						Function_77();
						SET_ACTION_NODE_FOR_ACTOR(&iParam0, "uncle_injured/talk");
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 320,485f, 0.0f), 0);
						iLocal_19 = 1;
					}
				}
			}
			if (Function_69(&bLocal_39))
			{
				if (Function_50(&bLocal_39) < 16.0f)
				{
					Function_28(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					AI_STOP_IGNORING_ACTOR(&Global_54076);
					AI_STOP_IGNORING_ACTOR(&iParam0);
					if (Function_72(&iParam0))
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam0, "uncle_injured/death");
					}
					SET_ACTOR_INVULNERABILITY(&iParam0, 1);
					Function_121("GAP_Obj_HelpFloyd");
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_Obj_HelpFloyd", 0, 0, 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
					ADD_BLIP_FOR_ACTOR(&uParam3, 325, 0, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_ACTOR(&uParam3), 3);
					Function_73(&uParam1, 2);
					uParam2 = 4;
					Function_21(&bLocal_27);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_50(&bLocal_27) < 6.0f)
			{
				if (Function_72(&iParam0))
				{
					SET_ACTOR_INVULNERABILITY(&iParam0, 0);
					KILL_ACTOR(&iParam0);
				}
			}
			break;
	}
}

void Function_77() //Position: 0x3CFA / 15610
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

void Function_78() //Position: 0x3D51 / 15697
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

var Function_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3DA4 / 15780
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_19(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nGAP_Intro", 2, 1);
	}
	Function_80(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_80(int iParam0) //Position: 0x3E27 / 15911
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_82(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_81(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 15.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_81(int iParam0) //Position: 0x3E71 / 15985
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,08352f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4476,77f, 10,29856f, 3320,143f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,169234f, -1,317337f, -0,001189f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x3EEA / 16106
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 46,08352f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-4473,284f, 11,02039f, 3321,948f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,067833f, -0,178669f, -0,001175f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

bool Function_83(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x3F63 / 16227
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_87(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_86(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_86(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_84(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_84(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_84(vector3 vParam0) //Position: 0x41A0 / 16800
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_85(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_85(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_85(vector3 vParam0) //Position: 0x4216 / 16918
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_86(var uParam0, bool bParam1) //Position: 0x422E / 16942
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_87(var uParam0, bool bParam1) //Position: 0x424F / 16975
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_86(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_88(var uParam0, int iParam1) //Position: 0x42B9 / 17081
{
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	Function_89(&uParam0, iParam1, 1, 0, 2, 1, 0);
	return;
}

void Function_89(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x42D2 / 17106
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_90(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_90(int iParam0) //Position: 0x435D / 17245
{
	char* cVar0[16];
	
	if (!Function_67())
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

void Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x439C / 17308
{
	int iVar0;
	bool bVar1;
	
	if (Function_113(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_112())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_111(1);
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
			Function_110(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_109(Global_119936, 1))
				{
					Function_104(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_102(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_109(Global_119936, 2))
				{
					Function_104(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_32(1, bVar1, 0, 0);
	}
	else
	{
		Function_101(1, (4294967295 * bVar1), 0);
	}
	if (Function_111(1) <= 4294962296)
	{
		Function_100(1, 4294962296, 0);
	}
	else if (Function_111(1) >= 5000)
	{
		Function_100(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_43(1));
	iVar0 = Function_111(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_93(2, Function_99(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_93(2, Function_99(Global_21369.f_244), 0);
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
				Function_93(2, Function_99(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_93(2, Function_99(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_93(2, Function_99(Global_21369.f_244), 1);
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
				Function_93(2, Function_99(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_93(2, Function_99(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_93(2, Function_99(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_93(2, Function_99(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_93(2, Function_99(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_93(2, Function_99(Global_21369.f_244), 1);
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
				Function_93(2, Function_99(Global_21369.f_244), 0);
			}
			break;
	}
	Function_92(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_92(int iParam0, int iParam1) //Position: 0x46C3 / 18115
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

int Function_93(int iParam0, char* cParam1) //Position: 0x492D / 18733
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
	Function_97(iParam0, &cParam1, 0, 1);
	iVar1 = Function_94();
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

int Function_94() //Position: 0x4ABD / 19133
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
	Function_95();
	return 0;
}

void Function_95() //Position: 0x4B5E / 19294
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_96(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_96(int iParam0) //Position: 0x4C1C / 19484
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

int Function_97(int iParam0, char* cParam1) //Position: 0x4C82 / 19586
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
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_98(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4FD9 / 20441
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

var Function_99(int iParam0) //Position: 0x5061 / 20577
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

int Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x5104 / 20740
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
		Function_46(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_45(iParam0);
	if (&bParam2)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_101(int iParam0, bool bParam1, int iParam2) //Position: 0x53A0 / 21408
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
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_102(int iParam0, bool bParam1) //Position: 0x559D / 21917
{
	bool bVar0;
	int iVar1;
	
	Function_101(iParam0, bParam1, 0);
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
	iVar1 = Function_103(iParam0, 4294967295);
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
	iVar1 = Function_94();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_103(int iParam0, int iParam1) //Position: 0x5748 / 22344
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

void Function_104(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x578D / 22413
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_106(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_105(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_105(char* cParam0) //Position: 0x5802 / 22530
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

bool Function_106(int iParam0, var uParam1, int iParam2) //Position: 0x583C / 22588
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
		if (Function_108(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_107(uVar0))
		{
			case 0x00000002:
				if (!Function_109(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_107(char* cParam0) //Position: 0x58B8 / 22712
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

int Function_108(int iParam0) //Position: 0x5959 / 22873
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

bool Function_109(var uParam0, int iParam1) //Position: 0x5996 / 22934
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_110(var uParam0, bool bParam1) //Position: 0x59A9 / 22953
{
	bool bVar0;
	int iVar1;
	
	Function_32(uParam0, bParam1, 0, 0);
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
	iVar1 = Function_103(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = uParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_94();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = uParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_111(bool bParam0) //Position: 0x5B55 / 23381
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_112() //Position: 0x5B96 / 23446
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_113(int iParam0) //Position: 0x5BC1 / 23489
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_114(int iParam0, int iParam1) //Position: 0x5BD0 / 23504
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_115(var uParam0, var uParam1, var uParam2, var[] uParam3) //Position: 0x5C06 / 23558
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_2spawn"), &Var0);
	GET_OBJECT_ORIENTATION(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_2spawn"), &Var2);
	uParam2 = CREATE_ACTOR_IN_LAYOUT(&uParam0, "InjuredGuy", 235, Var0, Var2);
	CLEAR_AREA_OF_GRASS(Var0, 1,5f);
	SET_ACTOR_FACTION(&uParam2, 24);
	AI_IGNORE_ACTOR(&uParam2);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uParam2, 0,2f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam2);
	GIVE_WEAPON_TO_ACTOR(&uParam2, 8, 0.0f, 0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam2, 0);
	ACTOR_DRAW_ANY_WEAPON(&uParam2, 0);
	TASK_CLEAR(&uParam2);
	TASK_STAND_STILL(&uParam2, -1.0f, 0, 0);
	MEMORY_CONSIDER_AS(&uParam2, &Global_54076, false);
	MEMORY_CONSIDER_AS(&Global_54076, &uParam2, true);
	SET_MOVER_FROZEN(&uParam2, 1);
	SET_ACTOR_ONE_SHOT_DEATH(&uParam2, 1);
	Function_68(&bLocal_27);
	ADD_BLOOD_TO_ACTOR(StackVal, &uParam2, Vector(0,1f, 1,2f, -0,1f), 0, 2, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam2, 0);
	GET_OBJECT_POSITION(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostage2"), &Var0);
	uParam1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, "Floyd", 142, Var0, Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_FACTION(&uParam1, 24);
	SET_CRIPPLE_ENABLE(&uParam1, 0);
	SET_ACTOR_ALLOW_DISARM(&uParam1, 0);
	HOGTIE_ACTOR(&uParam1);
	SET_ACTOR_UPDATE_PRIORITY(&uParam1, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam1);
	GIVE_WEAPON_TO_ACTOR(&uParam1, 40, 1.0f, 0, 1);
	uParam4 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "hostageSquad"));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam1, 37, 3.0f);
	SQUAD_JOIN(&uParam1, &uParam4);
	DECOR_SET_BOOL(&uParam1, "ActionArea_DisableHogtie", 1);
	MEMORY_CONSIDER_AS(&uParam1, &Global_54076, false);
	MEMORY_CONSIDER_AS(&Global_54076, &uParam1, true);
	Function_68(&bLocal_35);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uParam1, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam1, false);
	UNK_0x99AFD2D1(&uParam1, 1, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 13, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 60, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 61, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 72, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam1, 96, 0);
	DECOR_SET_BOOL(&uParam1, "DontReenableControl", 1);
	DECOR_SET_BOOL(&uParam1, "NoTalk_CutFree", 1);
	DECOR_SET_BOOL(&uParam1, "CheckForCamera", 1);
	uLocal_0[0] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop0");
	uLocal_0[1] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop1");
	uLocal_0[2] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop2");
	uLocal_0[3] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop3");
	uLocal_0[4] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop4");
	uLocal_0[5] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop5");
	uLocal_0[6] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop6");
	uLocal_0[7] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_FloydStop7");
	uParam3[0] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop1");
	uParam3[1] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop2");
	uParam3[2] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop3");
	uParam3[3] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop4");
	uParam3[4] = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_treasureStop5");
	CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
	APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("GAPJournalID"), "GAP_FTE_ObjGoAttr", 0, 0, 0);
	APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("GAPJournalID"), 0);
	uParam5 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "nFloydPath");
	bParam6 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, Function_19(), FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_IntroGateway"), &Global_54076, 2, 3, 0, 0, 1, 1);
	ADD_BLIP_FOR_OBJECT(&bParam6, 330, 0f, 2, 0);
	Function_121("GAP_FTE_ObjGoAttr");
}

bool Function_116(struct<2>[] Param0) //Position: 0x60DF / 24799
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_120();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_119(&(Param0[iVar02]), 8);
		}
		else if (Function_118())
		{
			iVar1 = 1;
			Function_119(&(Param0[iVar02]), 8);
		}
		Function_119(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_119(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_119(&(Param0[iVar02]), 2);
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
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_119(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_119(&(Param0[iVar02]), 2);
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
	Function_117();
	return 1;
}

void Function_117() //Position: 0x64A1 / 25761
{
	if (!Function_65(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_118() //Position: 0x64E1 / 25825
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

void Function_119(struct<13> Param0) //Position: 0x650F / 25871
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_120() //Position: 0x6522 / 25890
{
	if (!Function_65(128))
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

void Function_121(bool bParam0) //Position: 0x6564 / 25956
{
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	Function_122(&bParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	return;
}

void Function_122(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x6587 / 25991
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_90(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

bool Function_123(var uParam0, int iParam1) //Position: 0x661C / 26140
{
	if (!Function_75(iParam1, 1))
	{
		uParam0 = Function_129(3, 4294967197, 5);
		if (Function_127(uParam0) >= 0)
		{
			return 0;
		}
		Function_73(&iParam1, 1);
	}
	if (!Function_124(Global_46796[3]))
	{
		return 0;
	}
	return 1;
}

bool Function_124(int iParam0) //Position: 0x665E / 26206
{
	if (!Function_126(iParam0))
	{
		return 1;
	}
	return Function_125(&(Global_43791[iParam0]), 4);
}

int Function_125(var uParam0, int iParam1) //Position: 0x667A / 26234
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0) //Position: 0x6697 / 26263
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_127(int iParam0) //Position: 0x66AD / 26285
{
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_128(int iParam0) //Position: 0x66C7 / 26311
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66DE / 26334
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_133(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_130(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_130(bParam0, bParam1, bParam2, 4294967295);
}

int Function_130(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x673C / 26428
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_131(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_131(int iParam0) //Position: 0x68A0 / 26784
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_132(int iParam0) //Position: 0x68DE / 26846
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_133(int iParam0, int iParam1, int iParam2) //Position: 0x68F3 / 26867
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_134(int iParam0) //Position: 0x6913 / 26899
{
	Function_137(&iParam0, 142, 3, 1);
	Function_137(&iParam0, 235, 3, 1);
	Function_135(&iParam0, "action_areas", 10, 0);
	Function_135(&iParam0, "custom/uncle_injured", 8, 0);
	Function_135(&iParam0, "uncle_injured", 5, 0);
	Function_135(&iParam0, "excited_return", 5, 0);
	Function_135(&iParam0, "custom/excited_return", 8, 0);
	Function_135(&iParam0, "pointing", 5, 0);
	Function_135(&iParam0, "custom/pointing", 8, 0);
	Function_135(&iParam0, "sheriff_rub_wrist", 5, 0);
	Function_135(&iParam0, "custom/sheriff_rub_wrist", 8, 0);
	return;
}

var Function_135(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x6A30 / 27184
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_136(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_119(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_136(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x6A6E / 27246
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_119(&(Param0[iVar02]), 4);
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

var Function_137(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x6B3D / 27453
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_119(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_119(&(Param0[iVar02]), 8);
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

