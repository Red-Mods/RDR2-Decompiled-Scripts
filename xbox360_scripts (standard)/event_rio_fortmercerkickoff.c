//Decompiled with MagicRDR v1.0
//Function Count : 157
//Statics Count : 149
//Natives Count : 396
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
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	float fLocal_35 = 0.0f;
	bool bLocal_36 = false;
	bool bLocal_37 = true;
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
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = false;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0.0f, 0.0f, 0.0f };
	float fLocal_95 = 0.0f;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_85 = 0;
	iLocal_89 = 0;
	vLocal_92 = { -2664.0f, 67,263f, 3436.0f };
	fLocal_95 = 1.0f;
	bLocal_96 = false;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_97 = 0;
	bLocal_86 = false;
	while (!IS_EXITFLAG_SET())
	{
		GET_POSITION(Global_34573, &vVar0);
		if (IS_ACTOR_VALID(bLocal_22))
		{
			GET_POSITION(bLocal_22, &vVar3);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "MissionEnd"))
		{
			if (IS_ACTOR_VALID(bLocal_22))
			{
				if (VDIST(vVar0, vVar3) < 150.0f)
				{
					iLocal_97 = 7;
				}
			}
		}
		if (iLocal_97 <= 2 && iLocal_97 > 5)
		{
			if (!IS_ACTOR_ALIVE(bLocal_22) && !Function_156(uLocal_87, 2097152))
			{
				if (Function_155(bLocal_22, Global_34573))
				{
					Function_154("fom_fte_Obj_AssistantDead", 0, -1.0f, 2, 0, 0);
					iLocal_97 = 7;
				}
				else if (Function_154("fom_fte_Obj_AssistantDead", 0, -1.0f, 2, 0, 0))
				{
					iLocal_97 = 7;
				}
				DECOR_SET_BOOL(Global_34573, "HelperIsDead", true);
				Function_153(&uLocal_87, 2097152);
			}
		}
		if (IS_ACTOR_VALID(bLocal_22) && !Global_3391)
		{
			if ((VDIST(vVar0, vVar3) < 150.0f && iLocal_97 <= 3) && iLocal_97 > 5)
			{
				Function_154("fom_fte_Help_BuddyAbandoned", 0, -1.0f, 1, 0, 0);
				DECOR_SET_BOOL(Global_34573, "AbandonedLeon", true);
				iLocal_97 = 7;
			}
			else if (VDIST(vVar0, vVar3) < 250.0f && iLocal_97 > 3)
			{
				iLocal_97 = 7;
			}
		}
		if (!Function_156(uLocal_87, 0x4000000))
		{
			if (DECOR_CHECK_EXIST(Global_34573, "FOM_Boss_Launched"))
			{
				if (!DECOR_CHECK_EXIST(Global_34573, "GangLeadersDead"))
				{
					if (Function_151(bLocal_29, 0x3f800000, 0x42960000, 1, 1))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
						{
							Function_150();
						}
						Function_153(&uLocal_87, 0x4000000);
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "CutsceneWork"))
		{
			iLocal_97 = 7;
		}
		switch (iLocal_97)
		{
			case 0x00000000:
				if (!Function_148(&(Global_29008[1])))
				{
					iLocal_97 = 7;
				}
				else
				{
					iVar7 = 0;
					iVar6 = 0;
					while (iVar6 < 17)
					{
						if (Function_147(&(Global_6667[iVar62]), &(Global_7735[iVar63])))
						{
							iVar7++;
							iVar6 = 100;
						}
						iVar6++;
					}
					if (iVar7 == 0)
					{
						iLocal_97 = 7;
					}
					else
					{
						bLocal_25 = CREATE_LAYOUT("RioFomStarter");
						Function_146(&bLocal_37, 278, 3, 1);
						Function_146(&bLocal_37, 977, 3, 1);
						Function_144(&bLocal_37, "action_areas", 10, 0);
						Function_146(&bLocal_37, 245, 3, 1);
						Function_144(&bLocal_37, "whore_and_john", 1, 0);
						Function_144(&bLocal_37, "climb_help", 1, 0);
						Function_144(&bLocal_37, "open_big_door", 1, 0);
						Function_144(&bLocal_37, "$/fragments/p_gen_crateCover03x", 0, 1);
						Function_144(&bLocal_37, "$/fragments/p_gen_crateWeapons04x", 0, 1);
						Function_144(&bLocal_37, "fmercer_treasure", 5, 0);
						Function_144(&bLocal_37, "custom/fmercer_treasure", 8, 0);
						Function_140(Function_141("fortMercer", "guardTowerProps01", 7), 0);
						Function_140(Function_141("fortMercer", "guardTowerProps01", 8), 0);
						Function_140(Function_141("fortMercer", "leftWing", 1), 0);
						Function_140(Function_141("fortMercer", "leftWing", 2), 0);
						Function_140(Function_141("fortMercer", "leftWing", 3), 0);
						Function_140(Function_141("fortMercer", "leftWing", 4), 0);
						Function_153(&uLocal_88, 1);
						Function_153(&uLocal_88, 16);
						Function_153(&uLocal_88, 4);
						fLocal_35 = CREATE_VOLUME_IN_LAYOUT(bLocal_25, Function_139(), 3, -2656,444f, 67,263f, 3407,237f, 0.0f, 0.0f, 0.0f, 10.0f, 30.0f, 10.0f);
						Function_138(-2656,444f, 67,263f, 3407,237f, 4.0f);
						iLocal_97 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_133(&bLocal_37))
				{
					Function_127();
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_22, 0,2f);
					iVar8 = (RAND_INT_RANGE(false, 10000) % 100);
					if (iVar8 <= 33)
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					else if (iVar8 <= 66)
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					else
					{
						AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_09", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					}
					iLocal_97 = 2;
				}
				break;
			
			case 0x00000002:
				if (Function_126())
				{
					iLocal_85 = 0;
					bVar9 = FIND_NAMED_LAYOUT("FortMercer_AA_Layout");
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_22)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_22));
					}
					Function_125();
					iLocal_97 = 4;
				}
				else if (Function_72(&fLocal_35))
				{
					iLocal_97 = 3;
				}
				break;
			
			case 0x00000003:
				Function_44();
				if (IS_ACTOR_VALID(Global_34573) && !iLocal_89)
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pst"))
					{
						iLocal_89 = 1;
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 191,507f, 0.0f, 0);
					}
				}
				if (Function_126())
				{
					iLocal_85 = 0;
					bVar10 = FIND_NAMED_LAYOUT("FortMercer_AA_Layout");
					iLocal_97 = 4;
				}
				else if (!IS_VOLUME_VALID(bLocal_34))
				{
					bLocal_34 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_BackOutside");
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_34) && GET_TASK_STATUS(bLocal_22, 19) != 2)
					{
						TASK_PRIORITY_SET(bLocal_22, true);
						TASK_USE_GRINGO(bLocal_22, bLocal_31, "UseCase1", true, 1);
					}
				}
				break;
			
			case 0x00000004:
				Function_40();
				if (bLocal_96)
				{
					if (!Function_156(uLocal_87, 32768))
					{
						if (IS_ACTOR_VALID(bLocal_23))
						{
							if (IS_ACTOR_ALIVE(bLocal_23))
							{
								TELEPORT_ACTOR(bLocal_23, &vLocal_92, 1, 1, 1);
								MEMORY_CONSIDER_AS(bLocal_23, bLocal_22, 2);
								TASK_CLEAR(bLocal_23);
								TASK_PRIORITY_SET(bLocal_23, true);
								TASK_USE_GRINGO(bLocal_23, bLocal_30, "UseCase1", 4294967295, 1);
								Function_153(&uLocal_87, 32768);
							}
							else
							{
								DECOR_SET_BOOL(Global_34573, "GirlIsDead", true);
								Function_153(&uLocal_87, 32768);
							}
						}
						else
						{
							DECOR_SET_BOOL(Global_34573, "GirlIsDead", true);
							Function_153(&uLocal_87, 32768);
						}
					}
				}
				if (!Function_23())
				{
					iLocal_97 = 5;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_ALIVE(bLocal_23))
				{
					if (Function_19(bLocal_23, &uLocal_83, &fLocal_95, uLocal_88, 0, 0x40400000))
					{
						if (!iLocal_90)
						{
							TASK_CLEAR(bLocal_23);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_23, 1);
							Function_18(bLocal_23);
							TASK_FLEE_ACTOR(bLocal_23, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							iLocal_90 = 1;
						}
					}
				}
				if (IS_ACTOR_ALIVE(bLocal_22))
				{
					if (Function_19(bLocal_22, &uLocal_83, &fLocal_95, uLocal_88, 0, 0x40400000))
					{
						if (!iLocal_91)
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_22, 1);
							Function_18(bLocal_22);
							TASK_FLEE_ACTOR(bLocal_22, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							iLocal_91 = 1;
						}
					}
				}
				if (DECOR_CHECK_EXIST(Global_34573, "GangLeadersDead"))
				{
					if (Function_15(&iLocal_74) < 45.0f)
					{
						if (!Function_156(uLocal_87, 131072))
						{
							Function_6(bLocal_22, 4, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_GunslingerGoSpot"), 1);
							Function_153(&uLocal_87, 131072);
						}
					}
				}
				break;
			
			case 0x00000007:
				if (!Function_156(uLocal_87, 4194304))
				{
					Function_1();
				}
				break;
		}
		WAIT(bLocal_86);
	}
	if (!Function_156(uLocal_87, 4194304))
	{
		Function_1();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x88D / 2189
{
	Function_2(&bLocal_37);
	Function_153(&uLocal_87, 4194304);
	if (IS_OBJECT_VALID(bLocal_32))
	{
		DESTROY_OBJECT(bLocal_32);
	}
	if (IS_VOLUME_VALID(bLocal_33))
	{
		DESTROY_OBJECT(bLocal_33);
	}
	if (IS_BLIP_VALID(bLocal_26))
	{
		REMOVE_BLIP(bLocal_26);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_ACTOR_VALID(bLocal_22))
	{
		TASK_CLEAR(bLocal_22);
		RELEASE_ACTOR(bLocal_22);
	}
	if (IS_BLIP_VALID(bLocal_27))
	{
		REMOVE_BLIP(bLocal_27);
	}
	if (IS_LAYOUTREF_VALID(bLocal_25))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_25);
		RELEASE_LAYOUT_REF(bLocal_25);
	}
	HUD_CLEAR_OBJECTIVE();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x906 / 2310
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

void Function_3(var uParam0, int iParam1) //Position: 0x92C / 2348
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

void Function_4(var uParam0, int iParam1) //Position: 0xA5A / 2650
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0xA74 / 2676
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_6(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA91 / 2705
{
	bool bVar0;
	bool bVar1;
	
	if (bParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		bParam1 = false;
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
					Function_7(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_7(bParam0, bParam1, bParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_7(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xB71 / 2929
{
	char* cVar0[32];
	
	Function_14();
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
	if (Function_13(bParam0) == 1)
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
	Function_12(bParam0, 0);
	Function_11(bParam0, iParam1);
	Function_10(bParam0, uParam2);
	Function_9(bParam0, uParam3);
	if (Function_8(bParam0) != 5)
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

int Function_8(bool bParam0) //Position: 0xDBF / 3519
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_9(bool bParam0, bool bParam1) //Position: 0xDE2 / 3554
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_10(bool bParam0, bool bParam1) //Position: 0xE05 / 3589
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_11(bool bParam0, bool bParam1) //Position: 0xE29 / 3625
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_12(bool bParam0, bool bParam1) //Position: 0xE4F / 3663
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_13(bool bParam0) //Position: 0xE72 / 3698
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_14() //Position: 0xE90 / 3728
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

float Function_15(int iParam0) //Position: 0xEDA / 3802
{
	if (Function_17(iParam0))
	{
		if (Function_16(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_16(int iParam0) //Position: 0xFA2 / 4002
{
	return Function_156(*iParam0, 2);
}

bool Function_17(int iParam0) //Position: 0xFAF / 4015
{
	return Function_156(*iParam0, 1);
}

void Function_18(bool bParam0) //Position: 0xFBC / 4028
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_19(bool bParam0, var uParam1, float fParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x1008 / 4104
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
		fVar0 = Function_22(bParam0, Global_34573);
		if (!Function_156(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_20(bParam0);
				return 1;
			}
		}
		if (!Function_156(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_20(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_20(bParam0);
				return 1;
			}
		}
		if (!Function_156(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_20(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_20(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_156(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_20(bParam0);
				return 1;
			}
		}
		if (!Function_156(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_20(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_20(bool bParam0) //Position: 0x119F / 4511
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_21(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_21(bool bParam0) //Position: 0x11D3 / 4563
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_22(bool bParam0, bool bParam1) //Position: 0x11EA / 4586
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

bool Function_23() //Position: 0x12DB / 4827
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = false;
	switch (bLocal_84)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST(Global_34573, "FOM_Boss_Launched"))
			{
				bLocal_29 = Function_38("FOM_BossSquad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
				Function_36(bLocal_29, bLocal_28, 4);
				Function_35(bLocal_29, bLocal_28);
				bVar0 = true;
			}
			else if (!Function_156(uLocal_87, 0x1000000))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
				{
					Function_153(&uLocal_87, 0x1000000);
					Function_34();
				}
			}
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_29) == 0)
			{
				if (!Function_156(uLocal_87, 128))
				{
					if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
					{
						Function_33();
					}
					vVar1 = { -2680,4f, 67,45f, 3457,7f };
					bLocal_27 = ADD_BLIP_FOR_COORD(&vVar1, 330, 0, 2, 0);
					vVar4 = { -2682,119f, 67,455f, 3457,58f };
					SQUAD_GOALS_CLEAR(bLocal_28);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_22);
					TASK_GO_TO_COORD(bLocal_22, &vVar4, 4);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_22, 1);
					Function_153(&uLocal_87, 128);
				}
				bVar0 = true;
			}
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_32("fom_fte_objGoToTreasure", 0x40f00000, 1, 2, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_objGoToTreasure", 0, 0, false);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
				bVar0 = true;
			}
			break;
		
		default:
			break;
	}
	if (bVar0)
	{
		bLocal_84++;
	}
	if (Function_156(uLocal_87, 128) && !Function_156(uLocal_87, 4096))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_22, FIND_VOLUME_IN_LAYOUT(Global_30616, "FOM_treasureRoomVolume")))
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_22, 1);
			TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(bLocal_28, false), -1.0f, 0, 0);
			Function_153(&uLocal_87, 4096);
		}
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "FOM_treasureRoomVolume")))
	{
		if (!bLocal_96)
		{
			Function_31(&iLocal_80);
			Function_28(&iLocal_80);
			if (IS_BLIP_VALID(bLocal_27))
			{
				REMOVE_BLIP(bLocal_27);
			}
			bLocal_96 = true;
		}
	}
	if (bLocal_96)
	{
		if (!Function_156(uLocal_87, 16384))
		{
			if (Function_15(&iLocal_80) < 1.0f)
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
				{
					Function_24();
				}
				SET_ANIM_SET_FOR_ACTOR(bLocal_22, "fmercer_treasure", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_22, "fmercer_treasure/walk");
				Function_153(&uLocal_87, 16384);
			}
		}
	}
	if (bLocal_96)
	{
		if (Function_156(uLocal_87, 4096))
		{
			if (Function_15(&iLocal_80) < 7.0f)
			{
				if (!Function_156(uLocal_87, 65536))
				{
					Function_6(bLocal_22, 4, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_GunslingerGoSpot"), 1);
					Function_153(&uLocal_87, 65536);
					MEMORY_CONSIDER_AS(bLocal_22, Global_34573, 2);
				}
				DECOR_SET_BOOL(Global_34573, "MissionEnd", true);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_22)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_22));
				}
				Function_28(&iLocal_74);
				return 0;
			}
		}
	}
	return 1;
}

void Function_24() //Position: 0x163E / 5694
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_FindLoots", "FortMerc_FindLoots", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_25(int iParam0) //Position: 0x168B / 5771
{
	Function_26(0, Global_34573, iParam0, 0);
	Function_26(1, bLocal_22, iParam0, 0);
	return;
}

void Function_26(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x16A4 / 5796
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_156(uParam2, Function_27(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_27(bool bParam0) //Position: 0x16C9 / 5833
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_28(int iParam0) //Position: 0x16D5 / 5845
{
	Function_29(iParam0, 0.0f);
	return;
}

void Function_29(int iParam0, float fParam1) //Position: 0x16E1 / 5857
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_153(iParam0, 1);
	Function_30(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1702 / 5890
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_31(int iParam0) //Position: 0x1715 / 5909
{
	if (!Function_17(iParam0))
	{
		Function_29(iParam0, 0.0f);
	}
	return;
}

void Function_32(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x172A / 5930
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

void Function_33() //Position: 0x177D / 6013
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_WheresTreasure", "FortMerc_WheresTreasure", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_34() //Position: 0x17D4 / 6100
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_ShoutsPlayerGunfight1", "FortMerc_ShoutsPlayerGunfight1", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_35(bool bParam0, bool bParam1) //Position: 0x1839 / 6201
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_IDENTIFY(bVar2, bVar3);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_36(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18BC / 6332
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_37(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2) //Position: 0x190B / 6411
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_38(bool bParam0, bool bParam1) //Position: 0x1955 / 6485
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
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_39(bParam0, bVar4))
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

int Function_39(char* cParam0, char* cParam1) //Position: 0x19FD / 6653
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_40() //Position: 0x1A28 / 6696
{
	if (!bLocal_96)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "TriggerCenter") && !IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			DECOR_REMOVE(Global_34573, "TriggerCenter");
			if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
			{
				Function_43();
			}
		}
	}
	if (iLocal_85 == 0)
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
		{
			Function_42();
		}
		if (IS_BLIP_VALID(bLocal_27))
		{
			REMOVE_BLIP(bLocal_27);
		}
		SQUAD_GOALS_CLEAR(bLocal_28);
		Function_41(bLocal_28);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(bLocal_28, false));
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_22, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_LeonStayIn"), 2, true);
		SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_28, 0, Global_34573, 4294967295);
		SET_FACTIONS_STATUS_TWO_WAY(20, 12, 4);
		Function_28(&iLocal_71);
		iLocal_85 = 1;
	}
	return;
}

void Function_41(bool bParam0) //Position: 0x1ADD / 6877
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

void Function_42() //Position: 0x1B0F / 6927
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_OpensGate", "FortMerc_OpensGate", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_43() //Position: 0x1B5C / 7004
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_ShoutsPlayerGunfight2", "FortMerc_ShoutsPlayerGunfight2", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_44() //Position: 0x1BC1 / 7105
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	
	if (iLocal_85 == 0)
	{
		AUDIO_ATTACH_MICROPHONE_TO_ACTOR(bLocal_22);
		if (!FIRE_IS_ACTOR_ON_FIRE(bLocal_22))
		{
			Function_71();
		}
		iLocal_85 = 1;
		Function_28(&iLocal_71);
	}
	else if (iLocal_85 == 1)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_15(&iLocal_71) < 4.0f)
		{
			Function_52(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_51(bLocal_22, Function_38("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout")));
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
			bVar0 = Function_38("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
			if (SQUAD_IS_VALID(bVar0))
			{
				Function_47(bVar0, bLocal_22, 0);
				Function_37(bLocal_22, bVar0, 4);
			}
			AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
			AI_CLEAR_DONT_HARM_ACTOR(bLocal_22);
			iLocal_85 = 2;
		}
	}
	else if (iLocal_85 == 2)
	{
		vVar1 = { -2658,408f, 72,534f, 3413,736f };
		bLocal_27 = ADD_BLIP_FOR_COORD(&vVar1, 330, 0, 2, 0);
		DESTROY_OBJECT(bLocal_36);
		HUD_ENABLE(true);
		TASK_CLEAR(Global_34573);
		GRINGO_SET_USABLE_BY_PLAYER(bLocal_31, "nPlayerUse", 1);
		REMOVE_BLIP(bLocal_26);
		bLocal_26 = ADD_BLIP_FOR_ACTOR(bLocal_22, 325, 0, 2, 0);
		Function_32("fom_fte_ObjInFront", 0x40f00000, 1, 2, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_ObjInFront", 0, 0, false);
		APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		iLocal_85 = 3;
	}
	else if (iLocal_85 == 3)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "fomv_insideFortVol")))
		{
			bVar4 = Function_38("FOM_AA_Enc0Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
			Function_46(bVar4, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			if (IS_BLIP_VALID(bLocal_27))
			{
				REMOVE_BLIP(bLocal_27);
			}
			SQUAD_SET_FACTION(bVar4, 19);
			Function_45(bVar4, Global_34573, 4);
			vVar5 = { -2650,773f, 67,263f, 3418,933f };
			bVar8 = LOCATE_GRINGO_OF_TYPE("open_big", &vVar5, 5.0f, 1);
			bLocal_27 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_GRINGO(bVar8), 330, 0f, 2, 0);
			Function_32("fom_fte_objOpenDoor", 0x40f00000, 1, 2, 0, 0, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "fom_fte_objOpenDoor", 0, 0, false);
			APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			iLocal_85 = 4;
		}
	}
	return;
}

void Function_45(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1ED8 / 7896
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

void Function_46(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1F1D / 7965
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_47(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2007 / 8199
{
	Function_50(bParam0, bParam1, 1);
	Function_49(bParam0, 1);
	Function_45(bParam0, bParam1, 4);
	Function_48(bParam0, bParam1);
	if (bParam2)
	{
		Function_46(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x2047 / 8263
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

void Function_49(bool bParam0, int iParam1) //Position: 0x2099 / 8345
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_50(bool bParam0, bool bParam1, bool bParam2) //Position: 0x20DA / 8410
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
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
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_51(bool bParam0, bool bParam1) //Position: 0x2145 / 8517
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x217B / 8571
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
		bVar0 = Function_70();
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
			if (Function_69())
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
		Function_55(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_54();
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
	Function_53(uParam9);
}

void Function_53(bool bParam0) //Position: 0x226B / 8811
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

void Function_54() //Position: 0x2310 / 8976
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_55(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2325 / 8997
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
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2545 / 9541
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_66(390))), 32);
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
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_139(), &Var9);
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

var Function_57(int iParam0) //Position: 0x2B72 / 11122
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B83 / 11139
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0, char* cParam1) //Position: 0x2C78 / 11384
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2C91 / 11409
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_62(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x2CF6 / 11510
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x2D08 / 11528
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2D1A / 11546
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
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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

int Function_64(int iParam0) //Position: 0x2E4A / 11850
{
	return Global_35278[iParam020].f_48;
}

float Function_65(int iParam0) //Position: 0x2E59 / 11865
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_66(int iParam0) //Position: 0x2E92 / 11922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_67(int iParam0) //Position: 0x2ECF / 11983
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

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x3069 / 12393
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

bool Function_69() //Position: 0x3283 / 12931
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_70() //Position: 0x328C / 12940
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71() //Position: 0x32A1 / 12961
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_Introduces_v1_AA", "FortMerc_Introduces_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_Introduces_v1_AB", "FortMerc_Introduces_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_Introduces_v1_AC", "FortMerc_Introduces_v1_AC", false, 4, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_72(int iParam0) //Position: 0x337E / 13182
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (!Function_17(&uLocal_77))
	{
		Function_28(&uLocal_77);
	}
	if (Function_15(&uLocal_77) < 6.0f)
	{
		if ((!Function_156(uLocal_87, 2048) && !HUD_IS_FADED()) && !HUD_IS_FADING())
		{
			Function_153(&uLocal_87, 2048);
			bLocal_33 = CREATE_VOLUME_IN_LAYOUT(bLocal_25, Function_139(), 3, -2659,03f, 67,263f, 3405,874f, 0.0f, 0.0f, 0.0f, 3.0f, 7.0f, 3.0f);
			bLocal_32 = CREATE_GATEWAY_IN_LAYOUT(bLocal_25, Function_139(), bLocal_33, Global_34573, 2, 3, 0, false, 1, 1);
			Function_32("FOM_FTE_Obj_MeetHelper", 0x40f00000, 1, 2, 0, 0, 0);
			bLocal_26 = ADD_BLIP_FOR_ACTOR(bLocal_22, 330, 0, 2, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
			APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("FM_JournalID"), "FOM_FTE_Obj_MeetHelper", 0, 0, false);
			APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("FM_JournalID"), 0);
		}
		if (IS_OBJECT_VALID(bLocal_32))
		{
			if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
			{
				bLocal_24 = GET_MOUNT(Global_34573);
			}
			if (Function_123(bLocal_32, 0, 1, 1, 1, 0))
			{
				if (!Function_156(uLocal_87, 2))
				{
					Function_118(1, 1, 0, 1, 1, 1, 1, *iParam0, 1, 0, 1, 1);
					DECOR_SET_BOOL(bLocal_22, "AiCoverDontPeek", true);
					if (IS_ACTOR_VALID(bLocal_24))
					{
						SET_OBJECT_POSITION_ON_GROUND(Global_12976.f_36, -2661,72f, 67,26f, 3402,27f);
						SET_OBJECT_ORIENTATION(Global_12976.f_36, 0.0f, 317.0f, 0.0f);
						TASK_PRIORITY_SET(Global_12976.f_36, false);
						TASK_STAND_STILL(Global_12976.f_36, -1.0f, 1, 0);
					}
					Function_153(&uLocal_87, 2);
					Function_117(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_MarstonStart"));
					vVar0 = { StackVal, StackVal, Function_117(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_MarstonStart")) };
					Function_116(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_MarstonStart"));
					vVar3 = { StackVal, StackVal, Function_116(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_MarstonStart")) };
					if (!Function_115(Global_30739) != 2)
					{
						Function_80(Global_30739, 1);
						Global_3385 = 1;
					}
					DESTROY_OBJECT(bLocal_32);
					DESTROY_OBJECT(bLocal_33);
					Function_54();
					Function_79();
					AI_DONT_HARM_ACTOR(Global_34573);
					AI_DONT_HARM_ACTOR(bLocal_22);
					bLocal_36 = Function_75(bLocal_25, 0, 1, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_22, -1.0f, 0);
					SET_OBJECT_POSITION(Global_34573, vVar0);
					SET_OBJECT_ORIENTATION(Global_34573, vVar3);
					Function_73(Global_34573, 0);
					TASK_FACE_ACTOR(Global_34573, bLocal_22, 1, 3212836864);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					bVar6 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_frontRestrict");
					if (IS_VOLUME_VALID(bVar6))
					{
						bVar7 = CREATE_OBJECTSET_IN_LAYOUT(Function_139(), bLocal_25, 4294967295, 0);
						iVar8 = LOCATE_ACTORS_IN_VOLUME(bVar6, bVar7, 0, 1);
						if (iVar8 >= 0)
						{
							bVar9 = false;
							while (bVar9 < (iVar8 - 1))
							{
								bVar10 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar9, bVar7);
								if (!(bVar10 != GET_OBJECT_FROM_ACTOR(Global_34573) || bVar10 != GET_OBJECT_FROM_ACTOR(bLocal_22)))
								{
									SET_OBJECT_POSITION_ON_GROUND(bVar10, -2661,72f, 67,26f, 3402,27f);
								}
								bVar9++;
							}
						}
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							if (IS_ACTOR_IN_VOLUME(Global_12976.f_36, bVar6))
							{
								SET_OBJECT_POSITION_ON_GROUND(Global_12976.f_36, -2661,72f, 67,26f, 3402,27f);
								SET_OBJECT_ORIENTATION(Global_12976.f_36, 0.0f, 317.0f, 0.0f);
								TASK_PRIORITY_SET(Global_12976.f_36, false);
								TASK_STAND_STILL(Global_12976.f_36, -1.0f, 1, 0);
							}
						}
						DESTROY_OBJECTSET(bVar7);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_73(bool bParam0, bool bParam1) //Position: 0x36BD / 14013
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
	else if (!bParam1 || Function_74(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_74(bool bParam0, bool bParam1) //Position: 0x371A / 14106
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3739 / 14137
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_139(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "FortMercer", 2, 1);
	}
	Function_76(&bVar0);
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

void Function_76(int iParam0) //Position: 0x37AF / 14255
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_78(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_77(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*iParam0, 1, 1);
	return;
}

void Function_77(int iParam0) //Position: 0x37ED / 14317
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2668,062f, 70,037f, 3397,256f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,042013f, -2,558893f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_78(var uParam0) //Position: 0x3857 / 14423
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2673,874f, 70,60463f, 3397,185f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,000605f, -2,405417f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_79() //Position: 0x38C1 / 14529
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_80(int iParam0, int iParam1) //Position: 0x38D3 / 14547
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_113(iParam0))
	{
		Function_111();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_110(iParam0);
	if (StackVal != 2)
	{
		Function_108("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_85(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_83(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_82(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_81(Global_6269) };
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

struct<16> Function_81(int iParam0) //Position: 0x39E3 / 14819
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_82(char* cParam0) //Position: 0x3A0D / 14861
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

var Function_83(int iParam0) //Position: 0x3C63 / 15459
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_84(int iParam0) //Position: 0x3C83 / 15491
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_85(bool bParam0) //Position: 0x3C9A / 15514
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_101();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_86();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_30(&Global_63095, 1);
		Function_30(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_86() //Position: 0x3CEB / 15595
{
	Function_99();
	Function_98();
	Function_98();
	Function_97();
	Function_97();
	Function_96();
	Function_96();
	Function_93();
	Function_93();
	if (!Function_69())
	{
		Function_91();
		Function_90();
		Function_89();
		Function_88();
	}
	Function_87();
	return;
}

void Function_87() //Position: 0x3D1E / 15646
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

void Function_88() //Position: 0x3E24 / 15908
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

void Function_89() //Position: 0x3E57 / 15959
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

void Function_90() //Position: 0x3FE5 / 16357
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 >= (iVar0 - 1))
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

void Function_91() //Position: 0x419A / 16794
{
	Function_92(&Global_28260, 1, 0);
	return;
}

void Function_92(int iParam0, bool bParam1, var uParam2) //Position: 0x41A8 / 16808
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
	
	bVar0 = Function_70();
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

struct<8> Function_93() //Position: 0x4399 / 17305
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
				iVar2 = ((Function_95((50 + iVar4)) + Function_95((183 + iVar4))) + Function_95((90 + iVar4)));
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
	Function_94(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_94(int iParam0, bool bParam1, bool bParam2) //Position: 0x4434 / 17460
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
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_95(bool bParam0) //Position: 0x46CF / 18127
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_96() //Position: 0x4710 / 18192
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
		iVar2 = ((Function_95((50 + iVar3) + 15) + Function_95((183 + iVar3) + 15)) + Function_95((90 + iVar3) + 15));
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
	Function_94(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_97() //Position: 0x4799 / 18329
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
			iVar2 = ((Function_95((50 + iVar3) + 8) + Function_95((183 + iVar3) + 8)) + Function_95((90 + iVar3) + 8));
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
	Function_94(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_98() //Position: 0x4830 / 18480
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
		iVar2 = ((Function_95((50 + iVar3)) + Function_95((183 + iVar3))) + Function_95((90 + iVar3)));
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
	Function_94(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_99() //Position: 0x48AF / 18607
{
	Function_100(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_94(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_100(int iParam0, bool bParam1, int iParam2) //Position: 0x48D5 / 18645
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
	Function_68(iParam0, bParam1, 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_56(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_101() //Position: 0x4ADF / 19167
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_103(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_103(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_102(StackVal, StackVal, vVar0))
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

bool Function_102(vector3 vParam0) //Position: 0x4B80 / 19328
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_103(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4B98 / 19352
{
	int iVar0;
	
	iVar0 = Function_106(uParam2, uParam3);
	if (Function_105(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_153(&Global_63095, 1);
			Function_30(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_153(&Global_63095, 2);
			Function_30(&Global_63095, 1);
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
		Function_153(&Global_63095, 2);
		Function_30(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_104();
	return StackVal, StackVal, Function_104();
}

vector3 Function_104() //Position: 0x4C7F / 19583
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_105(int iParam0) //Position: 0x4C88 / 19592
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_106(bool bParam0, bool bParam1) //Position: 0x4C9E / 19614
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
				fVar2 = Function_107(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_107(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_105(bVar0) && !bParam1)
	{
		bVar0 = Function_106(bParam0, 1);
	}
	return bVar0;
}

float Function_107(vector3 vParam0, vector3 vParam3) //Position: 0x4D65 / 19813
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_108(char* cParam0, bool bParam1) //Position: 0x4D82 / 19842
{
	struct<4> Var0;
	
	if (!Function_113(bParam1))
	{
		return;
	}
	switch (Function_110(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_109(Function_83(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_110(bParam1), Function_83(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_110(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_110(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_110(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_110(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_110(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_109(int iParam0) //Position: 0x4EA6 / 20134
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_110(bool bParam0) //Position: 0x4ECB / 20171
{
	if (!Function_84(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_111() //Position: 0x4EE6 / 20198
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
			Function_112(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_112(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x512D / 20781
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_113(int iParam0) //Position: 0x5156 / 20822
{
	if (!Function_84(iParam0))
	{
		return 0;
	}
	if (!Function_114(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_114(int iParam0) //Position: 0x517A / 20858
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_115(int iParam0) //Position: 0x518F / 20879
{
	if (!Function_113(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

vector3 Function_116(bool bParam0) //Position: 0x51A9 / 20905
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

vector3 Function_117(bool bParam0) //Position: 0x51D0 / 20944
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

void Function_118(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x51F7 / 20983
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
	Function_54();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_70();
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
			if (Function_69())
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
				Function_122(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_139(), 2, Function_122(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_55(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_121()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_121()));
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
	if (Function_120(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_119(0x4000000);
	}
	if (Function_120(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_119(0x8000000);
	}
}

void Function_119(int iParam0) //Position: 0x54A0 / 21664
{
	int iVar0;
	
	if (Function_156(iParam0, 1) && Function_156(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_120(int iParam0) //Position: 0x54D4 / 21716
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_121() //Position: 0x54F0 / 21744
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

vector3 Function_122(bool bParam0) //Position: 0x556F / 21871
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_123(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5580 / 21888
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
				Function_73(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_74(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_74(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_124(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_124(&iVar6, &vVar3);
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

int Function_124(int iParam0, int iParam1) //Position: 0x5792 / 22418
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_102(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_102(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_125() //Position: 0x57FD / 22525
{
	bool bVar0;
	
	bVar0 = Function_38("FOM_AA_Enc03Squad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout"));
	Function_51(bLocal_22, bVar0);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	if (SQUAD_IS_VALID(bVar0))
	{
		Function_47(bVar0, bLocal_22, 0);
		Function_37(bLocal_22, bVar0, 4);
	}
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(bLocal_22);
	bLocal_26 = ADD_BLIP_FOR_ACTOR(bLocal_22, 325, 0, 2, 0);
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_31, "nPlayerUse", 0);
	Function_32("fom_fte_ObjInFront", 0x40f00000, 1, 2, 0, 0, 0);
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
	return;
}

bool Function_126() //Position: 0x58BA / 22714
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Function_156(uLocal_87, 8388608))
	{
		bVar0 = GET_CURRENT_GRINGO(Global_34573);
		if (IS_GRINGO_VALID(bVar0))
		{
			bVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0));
			if (STRING_CONTAINS_STRING(bVar1, "open_big"))
			{
				vVar2 = { -2646,142f, 67,263f, 3414,393f };
				TASK_GO_TO_COORD_AND_STAY(bLocal_22, &vVar2, 2, 124.0f);
				Function_153(&uLocal_87, 8388608);
				bVar5 = FIND_OBJECT_IN_LAYOUT(Global_30616, "IntroCover");
				DESTROY_OBJECT(bVar5);
			}
		}
	}
	if (IS_DOOR_OPENED(Function_141("fortMercer", "guardTowerProps01", 7)) || IS_DOOR_OPENED(Function_141("fortMercer", "guardTowerProps01", 8)))
	{
		CREATE_OBSTACLE_IN_LAYOUT(bLocal_25, "doorObs1", -2648,279f, 67,263f, 3417,476f, -5,324f, 36,094f, 0.0f, 2.0f, 6.0f, 1.0f);
		CREATE_OBSTACLE_IN_LAYOUT(bLocal_25, "doorObs2", -2649,565f, 67,263f, 3415,905f, -5,324f, 36,094f, 0.0f, 2.0f, 6.0f, 1.0f);
		return 1;
	}
	return 0;
}

void Function_127() //Position: 0x59F1 / 23025
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Global_30616, "FOM_helperSpawn");
	if (!IS_OBJECT_VALID(bVar0))
	{
		LOG_ERROR("HelpSpawn not valid.");
	}
	Function_117(bVar0);
	Function_116(bVar0);
	bLocal_22 = CREATE_ACTOR_IN_LAYOUT(bLocal_25, "NeedsFortMercerHelp", 278, Function_117(bVar0), Function_116(bVar0));
	bLocal_28 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_25, "FOM_FTE_Squad"));
	SQUAD_JOIN(bLocal_22, bLocal_28);
	DECOR_SET_BOOL(bLocal_22, "IsHelper", true);
	bVar1 = FIND_OBJECT_IN_LAYOUT(Global_30616, "IntroCover");
	Function_132(&bVar1);
	TASK_PRIORITY_SET(bLocal_22, true);
	TASK_HIDE_AT_COVER(bLocal_22, GET_COVER_LOCATION_FROM_OBJECT(bVar1), -1.0f, 6.0f, 0);
	vVar2 = { -2702,48f, 67,467f, 3447,74f };
	vVar5 = { 0.0f, -21,535f, 0.0f };
	bLocal_23 = CREATE_ACTOR_IN_LAYOUT(bLocal_25, "makeOutGirl", 245, vVar2, vVar5);
	TASK_STAND_STILL(bLocal_23, -1.0f, 0, 0);
	ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_22, FIND_VOLUME_IN_LAYOUT(Global_30616, "fomv_helpInsideFront"));
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_22, 1);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,5f);
	Function_131(Global_34573, bLocal_22, 0, 1);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_22, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_22, 37, 5.0f);
	SET_ACTOR_PROOF(bLocal_22, 128);
	SET_ACTOR_FACTION(bLocal_22, 20);
	SET_ACTOR_ALLOW_DISARM(bLocal_22, false);
	SET_CRIPPLE_ENABLE(bLocal_22, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_22, 0);
	Function_128(bLocal_22, Function_38("FOM_AA_wallGuySquad", FIND_NAMED_LAYOUT("FortMercer_AA_Layout")), 1);
	bLocal_30 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_25, "HelperMakingOut", "$/content/scripting/gringo/simpleGringo/whore_and_john", vLocal_92, 0.0f, -41,409f, 0.0f));
	bLocal_31 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_25, "climb_help", "climb_help", -2656,738f, 67,26305f, 3407,22f, 0.0f, 11,34445f, 0.0f));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_31, "nPlayerUse", 0);
	CREATE_GRINGO_IN_LAYOUT(bLocal_25, "open_big_door", "open_big_door", -2650,083f, 67,26734f, 3417,924f, 0.0f, -47,49909f, 0.0f);
	CREATE_PROP_IN_LAYOUT(bLocal_25, "crateCover03x0", "p_gen_crateCover03x", -2656,394f, 69,25806f, 3408,723f, 0.0f, 102,4477f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(bLocal_25, "crateWeapons04x0", "p_gen_crateWeapons04x", -2657,698f, 66,86691f, 3407,87f, -168,2088f, 0.0f, 89,88485f, 1);
	return;
}

void Function_128(var uParam0, bool bParam1, int iParam2) //Position: 0x5D1D / 23837
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_129(&uParam0, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_129(var uParam0, bool bParam1, bool bParam2) //Position: 0x5D67 / 23911
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_130(bParam1);
			vVar0 = { StackVal, StackVal, Function_130(bParam1) };
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

vector3 Function_130(bool bParam0) //Position: 0x5E6F / 24175
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

int Function_131(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5ED9 / 24281
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_132(int iParam0) //Position: 0x5F2C / 24364
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_117(*iParam0);
	vVar0 = { StackVal, StackVal, Function_117(*iParam0) };
	Function_116(*iParam0);
	vVar3 = { StackVal, StackVal, Function_116(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

bool Function_133(int iParam0) //Position: 0x5FF8 / 24568
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_137();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_136(iParam0[iVar03], 8);
		}
		else if (Function_135())
		{
			iVar1 = 1;
			Function_136(iParam0[iVar03], 8);
		}
		Function_136(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_136(iParam0[iVar03], 1);
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
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_136(iParam0[iVar03], 2);
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
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_136(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_136(iParam0[iVar03], 2);
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
	Function_134();
	return 1;
}

void Function_134() //Position: 0x6373 / 25459
{
	if (!Function_120(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_135() //Position: 0x63B3 / 25523
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

void Function_136(var uParam0, int iParam1) //Position: 0x63DE / 25566
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_137() //Position: 0x63EF / 25583
{
	if (!Function_120(128))
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

void Function_138(vector3 vParam0, float fParam3) //Position: 0x6431 / 25649
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_117(bVar1);
		if (GET_OBJECT_TYPE(bVar1) != 29 && VDIST(vParam0, Function_117(bVar1)) >= fParam3)
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

var Function_139() //Position: 0x6487 / 25735
{
	int iVar0;
	
	return iVar0;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x648F / 25743
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

bool Function_141(var uParam0, bool bParam1, int iParam2) //Position: 0x64E3 / 25827
{
	return Function_142(Global_29006, uParam0, bParam1, iParam2);
}

int Function_142(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x64F5 / 25845
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_143(iParam0))
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

bool Function_143(int iParam0) //Position: 0x6591 / 26001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_144(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x65A7 / 26023
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_145(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_136(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_145(var uParam0, int iParam1, int iParam2) //Position: 0x65DF / 26079
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_136(uParam0[iVar03], 4);
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

var Function_146(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x66A3 / 26275
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
			Function_136(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_136(uParam0[iVar03], 8);
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

bool Function_147(var uParam0, int iParam1) //Position: 0x6773 / 26483
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(StackVal)))
			{
				return IS_ACTOR_ALIVE(GET_ACTOR_FROM_PERS_CHAR(StackVal));
			}
		}
		return 0;
	}
	return IS_EARLIER_THAN(StackVal, false);
}

bool Function_148(int iParam0) //Position: 0x67B2 / 26546
{
	if (Global_3421)
	{
		return 0;
	}
	*iParam0 = *iParam0;
	if (Global_3380 || Global_3379)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3379)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 1;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	if (Function_149(iParam0, 256))
	{
		return 0;
	}
	if (Function_69())
	{
		return 0;
	}
	return 1;
}

bool Function_149(int iParam0, int iParam1) //Position: 0x6824 / 26660
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_150() //Position: 0x6840 / 26688
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FortMerc_GangLeaders", "FortMerc_GangLeaders", false, 2, 1, 0, 1);
		Function_25(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_151(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6891 / 26769
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_152(bVar1, uParam1, uParam2, uParam3, uParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_152(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x68D6 / 26838
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_153(var uParam0, bool bParam1) //Position: 0x68F0 / 26864
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_154(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0x68FF / 26879
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = iParam1;
			Global_63406[iVar021].f_36 = fParam2;
			Global_63406[iVar021].f_40 = iParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_155(bool bParam0, bool bParam1) //Position: 0x697E / 27006
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

bool Function_156(var uParam0, bool bParam1) //Position: 0x69AF / 27055
{
	return (uParam0 && bParam1) == 0;
}

